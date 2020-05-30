﻿using Physics.Telemetry.Serialised;
using System.Collections.Generic;
using Telemetry.FrameData.Shapes;

namespace Telemetry.FrameData
{
    public class FrameData
    {
        public List<FrameSnapshot> Frames = new List<FrameSnapshot>();

        public ShapeDataManager ShapeData = new ShapeDataManager();

        public void ImportFromPacket(FrameDataPacket packet)
        {
            if (packet != null)
            {
                foreach (FrameSnapshotPacket frame in packet.Frames)
                {
                    FrameSnapshot newFrame = new FrameSnapshot();

                    newFrame.ImportFromPacket(frame);

                    Frames.Add(newFrame);
                }

                ShapeData.ImportFromPacket(packet.ShapeData);
            }
        }

        public FrameDataPacket ExportToPacket()
        {
            FrameDataPacket packet = new FrameDataPacket();

            ExportToPacket(packet);

            return packet;
        }

        public void ExportToPacket(FrameDataPacket packet)
        {
            if (packet != null)
            {
                foreach (FrameSnapshot frame in Frames)
                {
                    packet.Frames.Add(frame.ExportToPacket());
                }

                packet.ShapeData = ShapeData.ExportToPacket();
            }
        }
    }
}
