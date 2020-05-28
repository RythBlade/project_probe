﻿using System.Collections.Generic;
using Telemetry.FrameData.Shapes;

namespace Telemetry.FrameData
{
    public class FrameData
    {
        public List<FrameSnapshot> Frames = new List<FrameSnapshot>();

        public ShapeDataManager ShapeData = new ShapeDataManager();
    }
}
