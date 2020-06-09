﻿using System.ComponentModel;
using Telemetry.FrameData.Shapes;

namespace physics_debugger.Controls.PropertyGridDisplayHelpers
{
    // tag the class with it's type converter so it can be expanded in a property grid view
    [TypeConverter(typeof(ExpandableObjectConverter))]
    public class BaseShapePropertyWrapper
    {
        [BrowsableAttribute(false)]
        public BaseShape BaseShape { get; }

        [BrowsableAttribute(false)]
        public Matrix4x4PropertyWrapper Matrix4x4Wrapper { get; }

        [Category("Base")]
        public uint Id { get { return BaseShape.Id; } }

        [Category("Base")]
        public Matrix4x4PropertyWrapper LocalMatrix { get { return Matrix4x4Wrapper; } }

        [Category("Base")]
        public ShapeType ShapeType { get { return BaseShape.ShapeType; } }

        public BaseShapePropertyWrapper(BaseShape baseShape)
        {
            BaseShape = baseShape;
            Matrix4x4Wrapper = new Matrix4x4PropertyWrapper(baseShape.LocalMatrix);
        }
    }
}
