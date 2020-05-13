﻿using physics_debugger.FrameControl;
using physics_debugger.FrameData;
using Renderer;
using SharpDX;
using System;
using System.Diagnostics;
using System.Windows.Forms;
using System.Windows.Input;

namespace physics_debugger
{
    public partial class Main : Form
    {
        private static float s_cameraMoveSpeed = 0.2f;
        private static float s_cameraSpeedModifier = 3.0f;
        private static float s_cameraScrollSpeed = (MathUtil.Pi / 360.0f);

        private System.Drawing.Point lastMousePosition = new System.Drawing.Point(0, 0);
        private Stopwatch clock = new Stopwatch();

        private Network.DataStream dataStream = new Network.DataStream("localhost", 27015);
        private Network.PacketTranslator translator = new Network.PacketTranslator();

        private FrameData.FrameData frameData = new FrameData.FrameData();
        private FrameController controller = new FrameController();

        private int CubeMeshId = 0;

        public Main()
        {
            InitializeComponent();

            lastMousePosition = Control.MousePosition;

            CubeMeshId = mainViewport.Renderer.Meshes.AddCubeMesh();

            clock.Start();
            updateTimer.Start();

            controller.FrameChanged += Controller_FrameChanged;
            controller.MaxFrameChanged += Controller_MaxFrameChanged;
            controller.StateChanged += Controller_StateChanged;

            controller.State = PlayBackState.eStaticFrame;
            
        }

        private void Controller_StateChanged(object sender, EventArgs e)
        {
            UpdateButtonText();
        }

        private void Controller_MaxFrameChanged(object sender, EventArgs e)
        {
            frameTrackBar.Maximum = controller.MaxFrameId;
            frameTrackBar.TickFrequency = controller.MaxFrameId;
        }

        private void Controller_FrameChanged(object sender, EventArgs e)
        {
            frameCounterTextBox.Text = controller.CurrentFrameId.ToString();
            frameTrackBar.Value = controller.CurrentFrameId;
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

            if (Control.MouseButtons == MouseButtons.Right)
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

        private void FramesAdded()
        {
            if (frameData != null && frameData.Frames != null && frameData.Frames.Count > 0)
            {
                controller.MaxFrameId = frameData.Frames.Count - 1;
            }
        }

        private void UpdateTelemetry()
        {
            if (dataStream.Connected)
            {
                Network.BasePacketHeader basePacket = dataStream.ReceiveData();

                if (translator.TranslatePacket(basePacket))
                {
                    // todo: error - don't pull out packets that aren't complete
                    foreach (Tuple<bool, FrameSnapshot> snapshot in translator.ConstructedSnapehots.Values)
                    {
                        frameData.Frames.Add(snapshot.Item2);
                    }

                    translator.ConstructedSnapehots.Clear();
                }
                else
                {
                    Console.WriteLine($"Error: read unknown packet type: {basePacket.PacketType}");
                }

                FramesAdded();

            }
        }

        private void RenderFrame(int frameIndex)
        {
            float time = clock.ElapsedMilliseconds / 1000.0f;

            FrameSnapshot latestFrame = frameData.Frames != null && frameData.Frames.Count > 0 ? frameData.Frames[frameIndex] : null;

            if (latestFrame != null)
            {
                int differenceInRenderInstances = mainViewport.Renderer.InstanceList.Count - latestFrame.RigidBodies.Count;

                if (differenceInRenderInstances > 0)
                {
                    mainViewport.Renderer.InstanceList.RemoveRange(0, differenceInRenderInstances);
                }
                else if (differenceInRenderInstances < 0)
                {
                    for (int i = 0; i < -differenceInRenderInstances; ++i)
                    {
                        mainViewport.Renderer.InstanceList.Add(new RenderInstance(Matrix.Translation(5.0f, 0.0f, 5.0f), CubeMeshId));
                    }
                }

                int instance = 0;

                foreach (RigidBody rigidBody in latestFrame.RigidBodies.Values)
                {
                    Matrix translationMatrix = Matrix.Translation(
                        rigidBody.WorldMatrix.Translation.X
                        , rigidBody.WorldMatrix.Translation.Y
                        , rigidBody.WorldMatrix.Translation.Z);

                    mainViewport.Renderer.InstanceList[instance].WorldMatrix = Matrix.RotationX(time) * Matrix.RotationY(time * 2.0f) * Matrix.RotationZ(time * 0.7f) * translationMatrix;
                    ++instance;
                }
            }
        }

        private void connectToolStripMenuItem_Click(object sender, EventArgs e)
        {
            ConnectionDialogue connectionDialogue = new ConnectionDialogue(dataStream.HostName, dataStream.Port);

            if (connectionDialogue.ShowDialog(this) == DialogResult.OK)
            {
                dataStream.HostName = connectionDialogue.HostName;
                dataStream.Port = connectionDialogue.Port;

                dataStream.Reconnect();
                controller.State = PlayBackState.eLive;
            }
        }

        private void frameTrackBar_Scroll(object sender, EventArgs e)
        {
            controller.State = PlayBackState.eStaticFrame;
            controller.CurrentFrameId = frameTrackBar.Value;
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
            dataStream.Disconnect();
        }

        private void exitToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Close();
        }

        private void openTelemetryToolStripMenuItem_Click(object sender, EventArgs e)
        {
            OpenFileDialog openDialog = new OpenFileDialog();
            openDialog.Filter = "Physics Telemetry | *.ptm";
            openDialog.Title = "Open Telemetry";

            if( openDialog.ShowDialog() == DialogResult.OK)
            {
                DataSerialiser serialiser = new DataSerialiser();
                serialiser.Filename = openDialog.FileName;

                FrameData.FrameData readFrameData = new FrameData.FrameData();
                bool success = serialiser.OpenTelemetry(readFrameData);

                if( success)
                {
                    frameData = readFrameData;
                }
                else 
                {
                    string errorMessage = "Failed to properly read in the telemetry file. It could be corrupt. Would you like to try and use what data was successfully read?\n";
                    errorMessage += $"Potentially corrupt frames read: {readFrameData.Frames.Count}";

                    DialogResult result = MessageBox.Show(errorMessage, "Error", MessageBoxButtons.YesNoCancel, MessageBoxIcon.Error);

                    if(result == DialogResult.Yes)
                    {
                        frameData = readFrameData;
                    }
                }

                FramesAdded();
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

                serialiser.SaveTelemetry(frameData);
            }
        }
    }
}
