﻿using physics_debugger.Controls.Graph;
using physics_debugger.Controls.PropertyGridDisplayHelpers;
using physics_debugger.Controls.SceneGraphView;
using physics_debugger.FrameControl;
using Renderer;
using Renderer.Buffers;
using SharpDX;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Windows.Forms;
using System.Windows.Forms.DataVisualization.Charting;
using System.Windows.Input;
using Telemetry.FrameData;
using Telemetry.FrameData.Shapes;
using Telemetry.Network;

namespace physics_debugger
{
    public partial class Main : Form
    {
        private const string c_applicationHeaderString = "Physics Debugger";
        private const string c_applicationHeaderStringFormat = "{0} v{1}.{2}.{3}";
        private const string c_headerStringFileNameFormat = "{0} - {1}";
        private const string c_unsavedString = "Unsaved";

        private const int c_applicationVersion = 0;
        private const int c_applicationSubVersion = 0;
        private const int c_applicationBuildVersion = 1;

        private static float s_cameraMoveSpeed = 0.2f;
        private static float s_cameraSpeedModifier = 3.0f;
        private static float s_cameraScrollSpeed = (MathUtil.Pi / 360.0f);

        private System.Drawing.Point lastMousePosition = new System.Drawing.Point(0, 0);
        private Stopwatch clock = new Stopwatch();

        private Telemetry.Network.DataStream dataStream = new Telemetry.Network.DataStream("localhost", 27015);
        private Telemetry.Network.PacketTranslator translator = new Telemetry.Network.PacketTranslator();

        private TelemetryReceiver receiver = null;

        private FrameData frameData = new FrameData();
        private FrameController controller = new FrameController();

        private int CubeMeshId = 0;
        private int TetrahedronMeshId = 0;
        private int PlaneMeshId = 0;

        // shape/frame id pair, render mesh handle
        private Dictionary<ShapeFrameIdPair, int> shapeRenderMeshBindings = new Dictionary<ShapeFrameIdPair, int>();

        private uint highlightedShapeId = uint.MaxValue;
        private uint selectedShapeId = uint.MaxValue;

        private string loadedTelemetryFileName = string.Empty;
        private bool isTelemetryDataDirty = false;

        GraphChannelCollection channelCollection = new GraphChannelCollection();

        public Main()
        {
            InitializeComponent();

            receiver = new TelemetryReceiver(dataStream, translator);

            lastMousePosition = MousePosition;

            PlaneMeshId = mainViewport.Renderer.Meshes.AddPlane(10, 10, new Vector3(-10.0f, 0.0f, -10.0f), new Vector3(10.0f, 0.0f, 10.0f));
            CubeMeshId = mainViewport.Renderer.Meshes.AddCubeMesh();
            TetrahedronMeshId = mainViewport.Renderer.Meshes.AddTetrahedron();

            mainViewport.Renderer.Camera.CameraPosition = new Vector3(0.0f, 0.0f, 15.0f);

            RenderInstance instanceToRender = new RenderInstance(Matrix.Translation(0.0f, 0.0f, 0.0f), PlaneMeshId);
            instanceToRender.Fill = RenderInstance.FillMode.eWireFrame;
            instanceToRender.Material.ColourTint = new Vector4(0.0f, 0.0f, 0.0f, 1.0f);
            mainViewport.Renderer.InstanceList.Add(instanceToRender);

            clock.Start();
            updateTimer.Start();

            controller.FrameChanged += Controller_FrameChanged;
            controller.MaxFrameChanged += Controller_MaxFrameChanged;
            controller.StateChanged += Controller_StateChanged;

            controller.State = PlayBackState.eStaticFrame;

            sceneGraphView.SelectionChanged += SceneGraphView_SelectionChanged;

            BuildAndSetApplicationTitleString();

            graphChannelPropertyGrid.SelectedObject = channelCollection;
        }

        private void BuildAndSetApplicationTitleString()
        {
            string applicationTitle = string.Format(
                c_applicationHeaderStringFormat
                , c_applicationHeaderString
                , c_applicationVersion
                , c_applicationSubVersion
                , c_applicationBuildVersion);

            if(isTelemetryDataDirty)
            {
                Text = string.Format(c_headerStringFileNameFormat, applicationTitle, c_unsavedString);
            }
            else if(string.IsNullOrWhiteSpace(loadedTelemetryFileName))
            {
                Text = applicationTitle;
            }
            else
            {
                Text = string.Format(c_headerStringFileNameFormat, applicationTitle, loadedTelemetryFileName);
            }
    }

        private void DisplayShapeInObjectDetailsPropertyGrid(BaseShape shapeToDisplay)
        {
            objectDetailsPropertyGrid.SelectedObject = ShapeWrapperFactory.BuildPropertyWrapperForShape(shapeToDisplay);
        }

        private void SceneGraphView_SelectionChanged(object sender, TreeViewEventArgs e)
        {
            if(e.Node is ShapeTreeNode)
            {
                ShapeTreeNode shapeNode = (ShapeTreeNode)e.Node;

                BaseShape shapeToDisplay = shapeNode.ShapeToDisplay;

                DisplayShapeInObjectDetailsPropertyGrid(shapeToDisplay);

                selectedShapeId = shapeNode.ShapeToDisplay.Id;
            }
            else if (e.Node is RigidBodyTreeNode)
            {
                RigidBodyTreeNode rigidBodyNode = (RigidBodyTreeNode)e.Node;

                objectDetailsPropertyGrid.SelectedObject = new RigidBodyPropertyWrapper(rigidBodyNode.BodyToDisplay, frameData.ShapeData, controller.CurrentFrameId);
            }
            else
            {
                objectDetailsPropertyGrid.SelectedObject = null;
            }
        }

        private void Controller_StateChanged(object sender, EventArgs e)
        {
            UpdateButtonText();
            UpdateSceneGraphView();
            UpdateFrameStatsPropertyGrid();
        }

        private void Controller_MaxFrameChanged(object sender, EventArgs e)
        {
            frameTrackBar.Maximum = controller.MaxFrameId;
            frameTrackBar.TickFrequency = controller.MaxFrameId;
        }

        private void UpdateSceneGraphView()
        {
            // only update the tree view when displaying a static frame.
            if (controller.State == PlayBackState.eStaticFrame)
            {
                if(sceneGraphView.FrameData == null)
                {
                    sceneGraphView.SetFrameData(frameData, controller.CurrentFrameId);
                }
                else
                {
                    sceneGraphView.FrameIdToDisplay = controller.CurrentFrameId;
                }
            }
            else
            {
                sceneGraphView.SetFrameData(null, 0);
            }
        }

        private void Controller_FrameChanged(object sender, EventArgs e)
        {
            frameCounterTextBox.Text = controller.CurrentFrameId.ToString();
            frameTrackBar.Value = controller.CurrentFrameId;

            UpdateSceneGraphView();
            UpdateFrameStatsPropertyGrid();
        }

        private void UpdateFrameStatsPropertyGrid()
        {
            if (controller.State == PlayBackState.eStaticFrame)
            {
                foreach (FrameStats stats in frameData.FrameStats)
                {
                    if (stats.FrameId == controller.CurrentFrameId)
                    {
                        frameStatsPropertyGrid.SelectedObject = new FrameStatsPropertyWrapper(stats);
                        break;
                    }
                }
            }
            else
            {
                frameStatsPropertyGrid.SelectedObject = null;
            }
        }

        private void updateTimer_Tick(object sender, EventArgs e)
        {
            MainLoop();
        }

        private void MainLoop()
        {
            UpdateInput();

            UpdateTelemetry();

            controller.Update();

            RenderFrame(controller.CurrentFrameId);
        }
        
        private void UpdateInput()
        {
            System.Drawing.Point currentMousePosition = Control.MousePosition;
            System.Drawing.Point mouseDifference = new System.Drawing.Point(
                    currentMousePosition.X - lastMousePosition.X
                    , currentMousePosition.Y - lastMousePosition.Y);

            lastMousePosition = currentMousePosition;

            System.Drawing.Point pixelCooord = mainViewport.PointToClient(Control.MousePosition);
            if (pixelCooord.X >= 0 && pixelCooord.Y >= 0 && pixelCooord.X < mainViewport.Size.Width && pixelCooord.Y < mainViewport.Size.Height)
            {
                highlightedShapeId = GraphicsDevice.Instance.PixelUserData[pixelCooord.X, pixelCooord.Y];
            }
            else
            {
                highlightedShapeId = uint.MaxValue;
            }

            if (ContainsFocus)
            {
                if(MouseButtons == MouseButtons.Left)
                {
                    selectedShapeId = highlightedShapeId;

                    if (selectedShapeId != uint.MaxValue)
                    {
                        ShapeFrameIdPair pair = frameData.ShapeData.RetrieveShapeForFrame(selectedShapeId, controller.CurrentFrameId);

                        if (pair != null)
                        {
                            DisplayShapeInObjectDetailsPropertyGrid(pair.Shape);
                        }
                    }
                }

                if (MouseButtons == MouseButtons.Right)
                {
                    mainViewport.Renderer.Camera.Pitch -= mouseDifference.Y * s_cameraScrollSpeed;
                    mainViewport.Renderer.Camera.Yaw += mouseDifference.X * s_cameraScrollSpeed;
                }

                float modifier = Keyboard.IsKeyDown(Key.LeftShift) || Keyboard.IsKeyDown(Key.RightShift) ? s_cameraSpeedModifier : 1.0f;
                float cameraSpeed = s_cameraMoveSpeed * modifier;

                if (Keyboard.IsKeyDown(Key.W))
                {
                    mainViewport.Renderer.Camera.MoveCameraLongitudinal(cameraSpeed);
                }
                else if (Keyboard.IsKeyDown(Key.S))
                {
                    mainViewport.Renderer.Camera.MoveCameraLongitudinal(-cameraSpeed);
                }

                if (Keyboard.IsKeyDown(Key.A))
                {
                    mainViewport.Renderer.Camera.MoveCameraLateral(-cameraSpeed);
                }
                else if (Keyboard.IsKeyDown(Key.D))
                {
                    mainViewport.Renderer.Camera.MoveCameraLateral(cameraSpeed);
                }

                if (Keyboard.IsKeyDown(Key.E))
                {
                    mainViewport.Renderer.Camera.MoveCameraUp(cameraSpeed);
                }
                else if (Keyboard.IsKeyDown(Key.Q))
                {
                    mainViewport.Renderer.Camera.MoveCameraUp(-cameraSpeed);
                }
            }
        }

        private void FramesAdded()
        {
            if (frameData != null && frameData.Frames != null && frameData.Frames.Count > 0)
            {
                controller.MaxFrameId = frameData.Frames.Count - 1;
            }
        }

        private int GenerateMeshForConvexHull(ConvexHullShape shape)
        {
            List<Vertex> vertices = new List<Vertex>(shape.Faces.Count * 3);
            
            foreach(ConvexHullShape.Face face in shape.Faces)
            {
                for (int i = 0; i < 3; ++i)
                {
                    vertices.Add(new Vertex(shape.Vertices[face.Index[i]].Point, shape.Vertices[face.Index[i]].Normal));
                }
            }
            
            return mainViewport.Renderer.Meshes.AddMesh(vertices);
        }

        private void UpdateTelemetry()
        {
            if (dataStream.Connected)
            {
                bool dataIsDirty = isTelemetryDataDirty;

                // lock the queues and flush their contents to our render data
                lock (receiver.LockObject)
                {
                    while(receiver.ReceivedFrameSnapshots.Count > 0)
                    {
                        frameData.Frames.Add(receiver.ReceivedFrameSnapshots.Dequeue());
                        isTelemetryDataDirty = true;
                    }

                    while(receiver.ReceivedFrameStats.Count > 0)
                    {
                        frameData.FrameStats.Add(receiver.ReceivedFrameStats.Dequeue());
                        isTelemetryDataDirty = true;
                    }

                    while(receiver.ReceivedShapes.Count > 0)
                    {
                        PacketTranslator.CollectedFrameShapes collectedShapes = receiver.ReceivedShapes.Dequeue();
                        isTelemetryDataDirty = true;

                        foreach (BaseShape addedShape in collectedShapes.Shapes)
                        {
                            switch (addedShape.ShapeType)
                            {
                                case ShapeType.eConvexHull:
                                    ConvexHullShape convexShape = (ConvexHullShape)addedShape;
                                    int shapeRenderHandle = GenerateMeshForConvexHull(convexShape);

                                    ShapeFrameIdPair pair = frameData.ShapeData.AddNewShape(collectedShapes.FrameId, convexShape);

                                    // store a binding for this mesh version
                                    shapeRenderMeshBindings.Add(pair, shapeRenderHandle);
                                    break;
                                case ShapeType.eObb:
                                case ShapeType.eSphere:
                                case ShapeType.eCone:
                                case ShapeType.eTetrahedron:
                                default:
                                    frameData.ShapeData.AddNewShape(collectedShapes.FrameId, addedShape);
                                    break;
                            }
                        }
                    }    
                }

                if(dataIsDirty != isTelemetryDataDirty)
                {
                    BuildAndSetApplicationTitleString();
                }

                FramesAdded();
            }
        }

        bool animate = true;

        private void RenderFrame(int frameIndex)
        {
            float time = animate ? clock.ElapsedMilliseconds / 1000.0f : 0.0f;

            FrameSnapshot latestFrame = frameData.Frames != null && frameData.Frames.Count > 0 ? frameData.Frames[frameIndex] : null;

            if (latestFrame != null)
            {
                int nextRenderInstanceId = 1; // the first instance is the world reference plane

                foreach (RigidBody rigidBody in latestFrame.RigidBodies.Values)
                {
                    foreach(uint shapeId in rigidBody.CollisionShapeIds)
                    {
                        RenderInstance instanceToRender = null;

                        ShapeFrameIdPair actualShapePair = frameData.ShapeData.RetrieveShapeForFrame(shapeId, frameData.Frames[frameIndex].FrameId);

                        if (actualShapePair != null)
                        {
                            if (nextRenderInstanceId < mainViewport.Renderer.InstanceList.Count)
                            {
                                instanceToRender = mainViewport.Renderer.InstanceList[nextRenderInstanceId];
                            }
                            else
                            {
                                instanceToRender = new RenderInstance(Matrix.Translation(5.0f, 0.0f, 5.0f), TetrahedronMeshId);
                                mainViewport.Renderer.InstanceList.Add(instanceToRender);
                            }

                            // todo - do the rest of the shape types and properly setup the position of the shapes
                            switch (actualShapePair.Shape.ShapeType)
                            {
                                case ShapeType.eObb:
                                    instanceToRender.MeshId = CubeMeshId;
                                    break;
                                case ShapeType.eSphere:
                                    break;
                                case ShapeType.eCone:
                                    break;
                                case ShapeType.eConvexHull:
                                    instanceToRender.MeshId = shapeRenderMeshBindings[actualShapePair];
                                    break;
                                case ShapeType.eTetrahedron:
                                    instanceToRender.MeshId = TetrahedronMeshId;
                                    break;
                                default:
                                    break;
                            }

                            instanceToRender.UserDataValue = actualShapePair.Shape.Id;

                            Matrix rotationAnimation = Matrix.RotationX(time) * Matrix.RotationY(time * 2.0f) * Matrix.RotationZ(time * 0.7f);

                            Matrix translationMatrix = Matrix.Translation(
                                rigidBody.WorldMatrix.Translation.X
                                , rigidBody.WorldMatrix.Translation.Y
                                , rigidBody.WorldMatrix.Translation.Z);

                            if(actualShapePair.Shape.HasLocalMatrix)
                            {
                                Matrix localMatrix = Matrix.Translation(
                                    actualShapePair.Shape.LocalMatrix.Translation.X
                                    , actualShapePair.Shape.LocalMatrix.Translation.Y
                                    , actualShapePair.Shape.LocalMatrix.Translation.Z);

                                instanceToRender.WorldMatrix = localMatrix * rotationAnimation * translationMatrix;
                            }
                            else
                            {
                                instanceToRender.WorldMatrix = rotationAnimation * translationMatrix; 
                            }

                            if (actualShapePair.Shape.Id == selectedShapeId)
                            {
                                instanceToRender.Material.ColourTint = new Vector4(0.5f, 1.0f, 0.5f, 1.0f);
                                instanceToRender.Material.AmbientLightStrength = 0.6f;
                            }
                            else if ( actualShapePair.Shape.Id == highlightedShapeId)
                            {
                                instanceToRender.Material.ColourTint = new Vector4(0.5f, 1.0f, 0.5f, 1.0f);
                                instanceToRender.Material.AmbientLightStrength = 0.3f;
                            }
                            else
                            {
                                instanceToRender.Material.ColourTint = new Vector4(0.0f, 1.0f, 0.0f, 1.0f);
                                instanceToRender.Material.AmbientLightStrength = 0.1f;
                            }

                            ++nextRenderInstanceId;
                        }
                    }
                }

                int differenceInRenderInstances = mainViewport.Renderer.InstanceList.Count - nextRenderInstanceId;
                mainViewport.Renderer.InstanceList.RemoveRange(mainViewport.Renderer.InstanceList.Count - differenceInRenderInstances, differenceInRenderInstances);
            }
        }

        private void connectToolStripMenuItem_Click(object sender, EventArgs e)
        {
            ConnectionDialogue connectionDialogue = new ConnectionDialogue(dataStream.HostName, dataStream.Port);

            if (connectionDialogue.ShowDialog(this) == DialogResult.OK)
            {
                receiver.StopThread();

                // todo - needs a file save warning
                // clear the telemetry we currently have
                DisplayLoadedTelemetry(new FrameData());

                dataStream.HostName = connectionDialogue.HostName;
                dataStream.Port = connectionDialogue.Port;
                
                dataStream.Reconnect();

                receiver.StartReceiverThread();
                controller.State = PlayBackState.eLive;
            }
        }

        private void GoToFrame(int frameId)
        {
            controller.State = PlayBackState.eStaticFrame;
            controller.CurrentFrameId = frameId;
        }

        private void frameTrackBar_Scroll(object sender, EventArgs e)
        {
            GoToFrame(frameTrackBar.Value);
        }


        private void goToFirstFrameButton_Click(object sender, EventArgs e)
        {
            controller.GoToFirstFrame();
        }

        private void previousFrameButton_Click(object sender, EventArgs e)
        {
            controller.GoToPreviousFrame();
        }

        private void nextFrameButton_Click(object sender, EventArgs e)
        {
            controller.GoToNextFrame();
        }

        private void goToLastFrameButton_Click(object sender, EventArgs e)
        {
            controller.GoToLastFrame();
        }

        private void playBackwardsButton_Click(object sender, EventArgs e)
        {
            if( controller.State == PlayBackState.eBackwards)
            {
                controller.State = PlayBackState.eStaticFrame;
            }
            else
            {
                controller.State = PlayBackState.eBackwards;
            }
        }

        private void playForwardsButton_Click(object sender, EventArgs e)
        {
            if (controller.State == PlayBackState.eForwards || controller.State == PlayBackState.eLive)
            {
                controller.State = PlayBackState.eStaticFrame;
            }
            else
            {
                controller.State = PlayBackState.eForwards;
            }
        }

        private void UpdateButtonText()
        {
            switch (controller.State)
            {
                case PlayBackState.eStaticFrame:
                    playForwardsButton.Text = ">";
                    playBackwardsButton.Text = "<";
                    break;
                case PlayBackState.eLive:
                    playForwardsButton.Text = "P";
                    playBackwardsButton.Text = "<";
                    break;
                case PlayBackState.eForwards:
                    playForwardsButton.Text = "P";
                    playBackwardsButton.Text = "<";
                    break;
                case PlayBackState.eBackwards:
                    playForwardsButton.Text = ">";
                    playBackwardsButton.Text = "P";
                    break;
                default:
                    break;
            }
        }

        private void disconnectToolStripMenuItem_Click(object sender, EventArgs e)
        {
            receiver.StopThread();

            dataStream.Disconnect();
        }

        private void exitToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Close();
        }

        private void DisplayLoadedTelemetry(FrameData readFrameData)
        {
            BuildAndSetApplicationTitleString();
            frameData = readFrameData;

            sceneGraphView.SetFrameData(null, 0);
            mainGraph.Series.Clear();
            channelCollection.Channels.Clear();
            graphChannelPropertyGrid.SelectedObject = channelCollection;

            UpdateSceneGraphView();
            UpdateFrameStatsPropertyGrid();

            shapeRenderMeshBindings.Clear();

            foreach (ShapeIterations iterations in frameData.ShapeData.ShapeData.Values)
            {
                foreach (ShapeFrameIdPair pair in iterations.Iterations)
                {
                    if (pair.Shape.ShapeType == ShapeType.eConvexHull)
                    {
                        ConvexHullShape convexShape = (ConvexHullShape)pair.Shape;
                        int shapeRenderHandle = GenerateMeshForConvexHull(convexShape);

                        shapeRenderMeshBindings.Add(pair, shapeRenderHandle);
                    }
                    else
                    {
                        // all iterations of a shape are still the same shape
                        break;
                    }
                }
            }

            FramesAdded();
        }

        private void openTelemetryToolStripMenuItem_Click(object sender, EventArgs e)
        {
            bool shouldProceed = false;

            if(isTelemetryDataDirty)
            {
                DialogResult result = MessageBox.Show("You have unsaved telemetry data. Are you want to open another file and lose this data?", "Are you sure?", MessageBoxButtons.YesNoCancel, MessageBoxIcon.Warning);

                if(result == DialogResult.Yes)
                {
                    shouldProceed = true;
                }
            }
            else
            {
                shouldProceed = true;
            }

            if(shouldProceed)
            {
                OpenFileDialog openDialog = new OpenFileDialog();
                openDialog.Filter = "Physics Telemetry | *.ptm";
                openDialog.Title = "Open Telemetry";

                if (openDialog.ShowDialog() == DialogResult.OK)
                {
                    DataSerialiser serialiser = new DataSerialiser();
                    serialiser.Filename = openDialog.FileName;

                    FrameData readFrameData = new FrameData();
                    bool success = serialiser.OpenTelemetry(readFrameData);

                    if (success)
                    {
                        isTelemetryDataDirty = false;
                        loadedTelemetryFileName = openDialog.FileName;
                        DisplayLoadedTelemetry(readFrameData);
                    }
                    else
                    {
                        string errorMessage = "Failed to properly read in the telemetry file. It could be corrupt. Would you like to try and use what data was successfully read?\n";
                        errorMessage += $"Potentially corrupt frames read: {readFrameData.Frames.Count}";

                        DialogResult result = MessageBox.Show(errorMessage, "Error", MessageBoxButtons.YesNoCancel, MessageBoxIcon.Error);

                        if (result == DialogResult.Yes)
                        {
                            isTelemetryDataDirty = false;
                            loadedTelemetryFileName = openDialog.FileName;
                            DisplayLoadedTelemetry(readFrameData);
                        }
                    }
                }
            }
        }

        private void saveTelemetryToolStripMenuItem_Click(object sender, EventArgs e)
        {
            SaveFileDialog saveDialog = new SaveFileDialog();
            saveDialog.Filter = "Physics Telemetry | *.ptm";
            saveDialog.Title = "Save Telemetry";            

            if (saveDialog.ShowDialog() == DialogResult.OK)
            {
                DataSerialiser serialiser = new DataSerialiser();
                serialiser.Filename = saveDialog.FileName;

                bool success = serialiser.SaveTelemetry(frameData);

                if (success)
                {
                    isTelemetryDataDirty = false;
                    loadedTelemetryFileName = saveDialog.FileName;
                }
                else
                {
                    MessageBox.Show($"An error occurred saving the telemetry to the file: {saveDialog.FileName}", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
                }

                BuildAndSetApplicationTitleString();
            }
        }

        private void goToFrameToolStripMenuItem_Click(object sender, EventArgs e)
        {
            FrameSelectDialogue frameSelect = new FrameSelectDialogue(0, controller.MaxFrameId);

            if(frameSelect.ShowDialog(this) == DialogResult.OK)
            {
                GoToFrame(frameSelect.SelectedFrameId);
            }
        }

        private void plotPerformanceGraphToolStripMenuItem_Click(object sender, EventArgs e)
        {
            mainGraph.Series.Clear();
            channelCollection.Channels.Clear();

            // frame time channel
            {
                List<DataPoint> points = new List<DataPoint>();

                foreach (FrameStats stat in frameData.FrameStats)
                {
                    points.Add(new DataPoint(stat.FrameId, stat.FrameProcessingTime));
                }

                GraphChannel channel = new GraphChannel("Frame Time", mainGraph, points, GraphChannel.Axis.PrimaryAxis);
                channelCollection.Channels.Add(channel);
            }

            // frame time step
            {
                List<DataPoint> points = new List<DataPoint>();

                foreach (FrameStats stat in frameData.FrameStats)
                {
                    points.Add(new DataPoint(stat.FrameId, stat.ConsumedFrameTime));
                }

                GraphChannel channel = new GraphChannel("Time step", mainGraph, points, GraphChannel.Axis.SecondaryAxis);
                channelCollection.Channels.Add(channel);
            }

            graphChannelPropertyGrid.SelectedObject = channelCollection;
        }
    }
}
