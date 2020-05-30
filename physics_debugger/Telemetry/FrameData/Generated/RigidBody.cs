// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: rigid_body.proto
// </auto-generated>
#pragma warning disable 1591, 0612, 3021
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
namespace Physics.Telemetry.Serialised {

  /// <summary>Holder for reflection information generated from rigid_body.proto</summary>
  public static partial class RigidBodyReflection {

    #region Descriptor
    /// <summary>File descriptor for rigid_body.proto</summary>
    public static pbr::FileDescriptor Descriptor {
      get { return descriptor; }
    }
    private static pbr::FileDescriptor descriptor;

    static RigidBodyReflection() {
      byte[] descriptorData = global::System.Convert.FromBase64String(
          string.Concat(
            "ChByaWdpZF9ib2R5LnByb3RvEhBQaHlzaWNzVGVsZW1ldHJ5GhBiYXNlX3R5",
            "cGVzLnByb3RvIp4BCg9SaWdpZEJvZHlQYWNrZXQSCgoCaWQYASABKA0SMwoI",
            "cG9zaXRpb24YAiABKAsyIS5QaHlzaWNzVGVsZW1ldHJ5Lk1hdHJpeDR4NFBh",
            "Y2tldBIxCgh2ZWxvY2l0eRgDIAEoCzIfLlBoeXNpY3NUZWxlbWV0cnkuVmVj",
            "dG9yNFBhY2tldBIXCg9jb2xsaXNpb25TaGFwZXMYBCADKA0iTQoTUmlnaWRC",
            "b2R5TGlzdFBhY2tldBI2CgtyaWdpZEJvZGllcxgBIAMoCzIhLlBoeXNpY3NU",
            "ZWxlbWV0cnkuUmlnaWRCb2R5UGFja2V0Qh+qAhxQaHlzaWNzLlRlbGVtZXRy",
            "eS5TZXJpYWxpc2VkYgZwcm90bzM="));
      descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
          new pbr::FileDescriptor[] { global::Physics.Telemetry.Serialised.BaseTypesReflection.Descriptor, },
          new pbr::GeneratedClrTypeInfo(null, null, new pbr::GeneratedClrTypeInfo[] {
            new pbr::GeneratedClrTypeInfo(typeof(global::Physics.Telemetry.Serialised.RigidBodyPacket), global::Physics.Telemetry.Serialised.RigidBodyPacket.Parser, new[]{ "Id", "Position", "Velocity", "CollisionShapes" }, null, null, null, null),
            new pbr::GeneratedClrTypeInfo(typeof(global::Physics.Telemetry.Serialised.RigidBodyListPacket), global::Physics.Telemetry.Serialised.RigidBodyListPacket.Parser, new[]{ "RigidBodies" }, null, null, null, null)
          }));
    }
    #endregion

  }
  #region Messages
  public sealed partial class RigidBodyPacket : pb::IMessage<RigidBodyPacket> {
    private static readonly pb::MessageParser<RigidBodyPacket> _parser = new pb::MessageParser<RigidBodyPacket>(() => new RigidBodyPacket());
    private pb::UnknownFieldSet _unknownFields;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pb::MessageParser<RigidBodyPacket> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::Physics.Telemetry.Serialised.RigidBodyReflection.Descriptor.MessageTypes[0]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public RigidBodyPacket() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public RigidBodyPacket(RigidBodyPacket other) : this() {
      id_ = other.id_;
      position_ = other.position_ != null ? other.position_.Clone() : null;
      velocity_ = other.velocity_ != null ? other.velocity_.Clone() : null;
      collisionShapes_ = other.collisionShapes_.Clone();
      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public RigidBodyPacket Clone() {
      return new RigidBodyPacket(this);
    }

    /// <summary>Field number for the "id" field.</summary>
    public const int IdFieldNumber = 1;
    private uint id_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public uint Id {
      get { return id_; }
      set {
        id_ = value;
      }
    }

    /// <summary>Field number for the "position" field.</summary>
    public const int PositionFieldNumber = 2;
    private global::Physics.Telemetry.Serialised.Matrix4x4Packet position_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public global::Physics.Telemetry.Serialised.Matrix4x4Packet Position {
      get { return position_; }
      set {
        position_ = value;
      }
    }

    /// <summary>Field number for the "velocity" field.</summary>
    public const int VelocityFieldNumber = 3;
    private global::Physics.Telemetry.Serialised.Vector4Packet velocity_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public global::Physics.Telemetry.Serialised.Vector4Packet Velocity {
      get { return velocity_; }
      set {
        velocity_ = value;
      }
    }

    /// <summary>Field number for the "collisionShapes" field.</summary>
    public const int CollisionShapesFieldNumber = 4;
    private static readonly pb::FieldCodec<uint> _repeated_collisionShapes_codec
        = pb::FieldCodec.ForUInt32(34);
    private readonly pbc::RepeatedField<uint> collisionShapes_ = new pbc::RepeatedField<uint>();
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public pbc::RepeatedField<uint> CollisionShapes {
      get { return collisionShapes_; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override bool Equals(object other) {
      return Equals(other as RigidBodyPacket);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public bool Equals(RigidBodyPacket other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if (Id != other.Id) return false;
      if (!object.Equals(Position, other.Position)) return false;
      if (!object.Equals(Velocity, other.Velocity)) return false;
      if(!collisionShapes_.Equals(other.collisionShapes_)) return false;
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override int GetHashCode() {
      int hash = 1;
      if (Id != 0) hash ^= Id.GetHashCode();
      if (position_ != null) hash ^= Position.GetHashCode();
      if (velocity_ != null) hash ^= Velocity.GetHashCode();
      hash ^= collisionShapes_.GetHashCode();
      if (_unknownFields != null) {
        hash ^= _unknownFields.GetHashCode();
      }
      return hash;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override string ToString() {
      return pb::JsonFormatter.ToDiagnosticString(this);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void WriteTo(pb::CodedOutputStream output) {
      if (Id != 0) {
        output.WriteRawTag(8);
        output.WriteUInt32(Id);
      }
      if (position_ != null) {
        output.WriteRawTag(18);
        output.WriteMessage(Position);
      }
      if (velocity_ != null) {
        output.WriteRawTag(26);
        output.WriteMessage(Velocity);
      }
      collisionShapes_.WriteTo(output, _repeated_collisionShapes_codec);
      if (_unknownFields != null) {
        _unknownFields.WriteTo(output);
      }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int CalculateSize() {
      int size = 0;
      if (Id != 0) {
        size += 1 + pb::CodedOutputStream.ComputeUInt32Size(Id);
      }
      if (position_ != null) {
        size += 1 + pb::CodedOutputStream.ComputeMessageSize(Position);
      }
      if (velocity_ != null) {
        size += 1 + pb::CodedOutputStream.ComputeMessageSize(Velocity);
      }
      size += collisionShapes_.CalculateSize(_repeated_collisionShapes_codec);
      if (_unknownFields != null) {
        size += _unknownFields.CalculateSize();
      }
      return size;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void MergeFrom(RigidBodyPacket other) {
      if (other == null) {
        return;
      }
      if (other.Id != 0) {
        Id = other.Id;
      }
      if (other.position_ != null) {
        if (position_ == null) {
          Position = new global::Physics.Telemetry.Serialised.Matrix4x4Packet();
        }
        Position.MergeFrom(other.Position);
      }
      if (other.velocity_ != null) {
        if (velocity_ == null) {
          Velocity = new global::Physics.Telemetry.Serialised.Vector4Packet();
        }
        Velocity.MergeFrom(other.Velocity);
      }
      collisionShapes_.Add(other.collisionShapes_);
      _unknownFields = pb::UnknownFieldSet.MergeFrom(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void MergeFrom(pb::CodedInputStream input) {
      uint tag;
      while ((tag = input.ReadTag()) != 0) {
        switch(tag) {
          default:
            _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, input);
            break;
          case 8: {
            Id = input.ReadUInt32();
            break;
          }
          case 18: {
            if (position_ == null) {
              Position = new global::Physics.Telemetry.Serialised.Matrix4x4Packet();
            }
            input.ReadMessage(Position);
            break;
          }
          case 26: {
            if (velocity_ == null) {
              Velocity = new global::Physics.Telemetry.Serialised.Vector4Packet();
            }
            input.ReadMessage(Velocity);
            break;
          }
          case 34:
          case 32: {
            collisionShapes_.AddEntriesFrom(input, _repeated_collisionShapes_codec);
            break;
          }
        }
      }
    }

  }

  public sealed partial class RigidBodyListPacket : pb::IMessage<RigidBodyListPacket> {
    private static readonly pb::MessageParser<RigidBodyListPacket> _parser = new pb::MessageParser<RigidBodyListPacket>(() => new RigidBodyListPacket());
    private pb::UnknownFieldSet _unknownFields;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pb::MessageParser<RigidBodyListPacket> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::Physics.Telemetry.Serialised.RigidBodyReflection.Descriptor.MessageTypes[1]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public RigidBodyListPacket() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public RigidBodyListPacket(RigidBodyListPacket other) : this() {
      rigidBodies_ = other.rigidBodies_.Clone();
      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public RigidBodyListPacket Clone() {
      return new RigidBodyListPacket(this);
    }

    /// <summary>Field number for the "rigidBodies" field.</summary>
    public const int RigidBodiesFieldNumber = 1;
    private static readonly pb::FieldCodec<global::Physics.Telemetry.Serialised.RigidBodyPacket> _repeated_rigidBodies_codec
        = pb::FieldCodec.ForMessage(10, global::Physics.Telemetry.Serialised.RigidBodyPacket.Parser);
    private readonly pbc::RepeatedField<global::Physics.Telemetry.Serialised.RigidBodyPacket> rigidBodies_ = new pbc::RepeatedField<global::Physics.Telemetry.Serialised.RigidBodyPacket>();
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public pbc::RepeatedField<global::Physics.Telemetry.Serialised.RigidBodyPacket> RigidBodies {
      get { return rigidBodies_; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override bool Equals(object other) {
      return Equals(other as RigidBodyListPacket);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public bool Equals(RigidBodyListPacket other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if(!rigidBodies_.Equals(other.rigidBodies_)) return false;
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override int GetHashCode() {
      int hash = 1;
      hash ^= rigidBodies_.GetHashCode();
      if (_unknownFields != null) {
        hash ^= _unknownFields.GetHashCode();
      }
      return hash;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public override string ToString() {
      return pb::JsonFormatter.ToDiagnosticString(this);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void WriteTo(pb::CodedOutputStream output) {
      rigidBodies_.WriteTo(output, _repeated_rigidBodies_codec);
      if (_unknownFields != null) {
        _unknownFields.WriteTo(output);
      }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public int CalculateSize() {
      int size = 0;
      size += rigidBodies_.CalculateSize(_repeated_rigidBodies_codec);
      if (_unknownFields != null) {
        size += _unknownFields.CalculateSize();
      }
      return size;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void MergeFrom(RigidBodyListPacket other) {
      if (other == null) {
        return;
      }
      rigidBodies_.Add(other.rigidBodies_);
      _unknownFields = pb::UnknownFieldSet.MergeFrom(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    public void MergeFrom(pb::CodedInputStream input) {
      uint tag;
      while ((tag = input.ReadTag()) != 0) {
        switch(tag) {
          default:
            _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, input);
            break;
          case 10: {
            rigidBodies_.AddEntriesFrom(input, _repeated_rigidBodies_codec);
            break;
          }
        }
      }
    }

  }

  #endregion

}

#endregion Designer generated code
