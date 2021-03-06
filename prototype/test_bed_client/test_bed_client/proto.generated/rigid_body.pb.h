// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: rigid_body.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_rigid_5fbody_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_rigid_5fbody_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3011000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3011004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "base_types.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_rigid_5fbody_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_rigid_5fbody_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_rigid_5fbody_2eproto;
namespace PhysicsTelemetry {
class RigidBodyListPacket;
class RigidBodyListPacketDefaultTypeInternal;
extern RigidBodyListPacketDefaultTypeInternal _RigidBodyListPacket_default_instance_;
class RigidBodyPacket;
class RigidBodyPacketDefaultTypeInternal;
extern RigidBodyPacketDefaultTypeInternal _RigidBodyPacket_default_instance_;
}  // namespace PhysicsTelemetry
PROTOBUF_NAMESPACE_OPEN
template<> ::PhysicsTelemetry::RigidBodyListPacket* Arena::CreateMaybeMessage<::PhysicsTelemetry::RigidBodyListPacket>(Arena*);
template<> ::PhysicsTelemetry::RigidBodyPacket* Arena::CreateMaybeMessage<::PhysicsTelemetry::RigidBodyPacket>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace PhysicsTelemetry {

// ===================================================================

class RigidBodyPacket :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:PhysicsTelemetry.RigidBodyPacket) */ {
 public:
  RigidBodyPacket();
  virtual ~RigidBodyPacket();

  RigidBodyPacket(const RigidBodyPacket& from);
  RigidBodyPacket(RigidBodyPacket&& from) noexcept
    : RigidBodyPacket() {
    *this = ::std::move(from);
  }

  inline RigidBodyPacket& operator=(const RigidBodyPacket& from) {
    CopyFrom(from);
    return *this;
  }
  inline RigidBodyPacket& operator=(RigidBodyPacket&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const RigidBodyPacket& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const RigidBodyPacket* internal_default_instance() {
    return reinterpret_cast<const RigidBodyPacket*>(
               &_RigidBodyPacket_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(RigidBodyPacket& a, RigidBodyPacket& b) {
    a.Swap(&b);
  }
  inline void Swap(RigidBodyPacket* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline RigidBodyPacket* New() const final {
    return CreateMaybeMessage<RigidBodyPacket>(nullptr);
  }

  RigidBodyPacket* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<RigidBodyPacket>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const RigidBodyPacket& from);
  void MergeFrom(const RigidBodyPacket& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(RigidBodyPacket* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "PhysicsTelemetry.RigidBodyPacket";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_rigid_5fbody_2eproto);
    return ::descriptor_table_rigid_5fbody_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kCollisionShapesFieldNumber = 4,
    kPositionFieldNumber = 2,
    kVelocityFieldNumber = 3,
    kIdFieldNumber = 1,
  };
  // repeated uint32 collisionShapes = 4;
  int collisionshapes_size() const;
  private:
  int _internal_collisionshapes_size() const;
  public:
  void clear_collisionshapes();
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_collisionshapes(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >&
      _internal_collisionshapes() const;
  void _internal_add_collisionshapes(::PROTOBUF_NAMESPACE_ID::uint32 value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >*
      _internal_mutable_collisionshapes();
  public:
  ::PROTOBUF_NAMESPACE_ID::uint32 collisionshapes(int index) const;
  void set_collisionshapes(int index, ::PROTOBUF_NAMESPACE_ID::uint32 value);
  void add_collisionshapes(::PROTOBUF_NAMESPACE_ID::uint32 value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >&
      collisionshapes() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >*
      mutable_collisionshapes();

  // .PhysicsTelemetry.Matrix4x4Packet position = 2;
  bool has_position() const;
  private:
  bool _internal_has_position() const;
  public:
  void clear_position();
  const ::PhysicsTelemetry::Matrix4x4Packet& position() const;
  ::PhysicsTelemetry::Matrix4x4Packet* release_position();
  ::PhysicsTelemetry::Matrix4x4Packet* mutable_position();
  void set_allocated_position(::PhysicsTelemetry::Matrix4x4Packet* position);
  private:
  const ::PhysicsTelemetry::Matrix4x4Packet& _internal_position() const;
  ::PhysicsTelemetry::Matrix4x4Packet* _internal_mutable_position();
  public:

  // .PhysicsTelemetry.Vector4Packet velocity = 3;
  bool has_velocity() const;
  private:
  bool _internal_has_velocity() const;
  public:
  void clear_velocity();
  const ::PhysicsTelemetry::Vector4Packet& velocity() const;
  ::PhysicsTelemetry::Vector4Packet* release_velocity();
  ::PhysicsTelemetry::Vector4Packet* mutable_velocity();
  void set_allocated_velocity(::PhysicsTelemetry::Vector4Packet* velocity);
  private:
  const ::PhysicsTelemetry::Vector4Packet& _internal_velocity() const;
  ::PhysicsTelemetry::Vector4Packet* _internal_mutable_velocity();
  public:

  // uint32 id = 1;
  void clear_id();
  ::PROTOBUF_NAMESPACE_ID::uint32 id() const;
  void set_id(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_id() const;
  void _internal_set_id(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // @@protoc_insertion_point(class_scope:PhysicsTelemetry.RigidBodyPacket)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 > collisionshapes_;
  mutable std::atomic<int> _collisionshapes_cached_byte_size_;
  ::PhysicsTelemetry::Matrix4x4Packet* position_;
  ::PhysicsTelemetry::Vector4Packet* velocity_;
  ::PROTOBUF_NAMESPACE_ID::uint32 id_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_rigid_5fbody_2eproto;
};
// -------------------------------------------------------------------

class RigidBodyListPacket :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:PhysicsTelemetry.RigidBodyListPacket) */ {
 public:
  RigidBodyListPacket();
  virtual ~RigidBodyListPacket();

  RigidBodyListPacket(const RigidBodyListPacket& from);
  RigidBodyListPacket(RigidBodyListPacket&& from) noexcept
    : RigidBodyListPacket() {
    *this = ::std::move(from);
  }

  inline RigidBodyListPacket& operator=(const RigidBodyListPacket& from) {
    CopyFrom(from);
    return *this;
  }
  inline RigidBodyListPacket& operator=(RigidBodyListPacket&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const RigidBodyListPacket& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const RigidBodyListPacket* internal_default_instance() {
    return reinterpret_cast<const RigidBodyListPacket*>(
               &_RigidBodyListPacket_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(RigidBodyListPacket& a, RigidBodyListPacket& b) {
    a.Swap(&b);
  }
  inline void Swap(RigidBodyListPacket* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline RigidBodyListPacket* New() const final {
    return CreateMaybeMessage<RigidBodyListPacket>(nullptr);
  }

  RigidBodyListPacket* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<RigidBodyListPacket>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const RigidBodyListPacket& from);
  void MergeFrom(const RigidBodyListPacket& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(RigidBodyListPacket* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "PhysicsTelemetry.RigidBodyListPacket";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_rigid_5fbody_2eproto);
    return ::descriptor_table_rigid_5fbody_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRigidBodiesFieldNumber = 1,
  };
  // repeated .PhysicsTelemetry.RigidBodyPacket rigidBodies = 1;
  int rigidbodies_size() const;
  private:
  int _internal_rigidbodies_size() const;
  public:
  void clear_rigidbodies();
  ::PhysicsTelemetry::RigidBodyPacket* mutable_rigidbodies(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::PhysicsTelemetry::RigidBodyPacket >*
      mutable_rigidbodies();
  private:
  const ::PhysicsTelemetry::RigidBodyPacket& _internal_rigidbodies(int index) const;
  ::PhysicsTelemetry::RigidBodyPacket* _internal_add_rigidbodies();
  public:
  const ::PhysicsTelemetry::RigidBodyPacket& rigidbodies(int index) const;
  ::PhysicsTelemetry::RigidBodyPacket* add_rigidbodies();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::PhysicsTelemetry::RigidBodyPacket >&
      rigidbodies() const;

  // @@protoc_insertion_point(class_scope:PhysicsTelemetry.RigidBodyListPacket)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::PhysicsTelemetry::RigidBodyPacket > rigidbodies_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_rigid_5fbody_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// RigidBodyPacket

// uint32 id = 1;
inline void RigidBodyPacket::clear_id() {
  id_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 RigidBodyPacket::_internal_id() const {
  return id_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 RigidBodyPacket::id() const {
  // @@protoc_insertion_point(field_get:PhysicsTelemetry.RigidBodyPacket.id)
  return _internal_id();
}
inline void RigidBodyPacket::_internal_set_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  id_ = value;
}
inline void RigidBodyPacket::set_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:PhysicsTelemetry.RigidBodyPacket.id)
}

// .PhysicsTelemetry.Matrix4x4Packet position = 2;
inline bool RigidBodyPacket::_internal_has_position() const {
  return this != internal_default_instance() && position_ != nullptr;
}
inline bool RigidBodyPacket::has_position() const {
  return _internal_has_position();
}
inline const ::PhysicsTelemetry::Matrix4x4Packet& RigidBodyPacket::_internal_position() const {
  const ::PhysicsTelemetry::Matrix4x4Packet* p = position_;
  return p != nullptr ? *p : *reinterpret_cast<const ::PhysicsTelemetry::Matrix4x4Packet*>(
      &::PhysicsTelemetry::_Matrix4x4Packet_default_instance_);
}
inline const ::PhysicsTelemetry::Matrix4x4Packet& RigidBodyPacket::position() const {
  // @@protoc_insertion_point(field_get:PhysicsTelemetry.RigidBodyPacket.position)
  return _internal_position();
}
inline ::PhysicsTelemetry::Matrix4x4Packet* RigidBodyPacket::release_position() {
  // @@protoc_insertion_point(field_release:PhysicsTelemetry.RigidBodyPacket.position)
  
  ::PhysicsTelemetry::Matrix4x4Packet* temp = position_;
  position_ = nullptr;
  return temp;
}
inline ::PhysicsTelemetry::Matrix4x4Packet* RigidBodyPacket::_internal_mutable_position() {
  
  if (position_ == nullptr) {
    auto* p = CreateMaybeMessage<::PhysicsTelemetry::Matrix4x4Packet>(GetArenaNoVirtual());
    position_ = p;
  }
  return position_;
}
inline ::PhysicsTelemetry::Matrix4x4Packet* RigidBodyPacket::mutable_position() {
  // @@protoc_insertion_point(field_mutable:PhysicsTelemetry.RigidBodyPacket.position)
  return _internal_mutable_position();
}
inline void RigidBodyPacket::set_allocated_position(::PhysicsTelemetry::Matrix4x4Packet* position) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(position_);
  }
  if (position) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      position = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, position, submessage_arena);
    }
    
  } else {
    
  }
  position_ = position;
  // @@protoc_insertion_point(field_set_allocated:PhysicsTelemetry.RigidBodyPacket.position)
}

// .PhysicsTelemetry.Vector4Packet velocity = 3;
inline bool RigidBodyPacket::_internal_has_velocity() const {
  return this != internal_default_instance() && velocity_ != nullptr;
}
inline bool RigidBodyPacket::has_velocity() const {
  return _internal_has_velocity();
}
inline const ::PhysicsTelemetry::Vector4Packet& RigidBodyPacket::_internal_velocity() const {
  const ::PhysicsTelemetry::Vector4Packet* p = velocity_;
  return p != nullptr ? *p : *reinterpret_cast<const ::PhysicsTelemetry::Vector4Packet*>(
      &::PhysicsTelemetry::_Vector4Packet_default_instance_);
}
inline const ::PhysicsTelemetry::Vector4Packet& RigidBodyPacket::velocity() const {
  // @@protoc_insertion_point(field_get:PhysicsTelemetry.RigidBodyPacket.velocity)
  return _internal_velocity();
}
inline ::PhysicsTelemetry::Vector4Packet* RigidBodyPacket::release_velocity() {
  // @@protoc_insertion_point(field_release:PhysicsTelemetry.RigidBodyPacket.velocity)
  
  ::PhysicsTelemetry::Vector4Packet* temp = velocity_;
  velocity_ = nullptr;
  return temp;
}
inline ::PhysicsTelemetry::Vector4Packet* RigidBodyPacket::_internal_mutable_velocity() {
  
  if (velocity_ == nullptr) {
    auto* p = CreateMaybeMessage<::PhysicsTelemetry::Vector4Packet>(GetArenaNoVirtual());
    velocity_ = p;
  }
  return velocity_;
}
inline ::PhysicsTelemetry::Vector4Packet* RigidBodyPacket::mutable_velocity() {
  // @@protoc_insertion_point(field_mutable:PhysicsTelemetry.RigidBodyPacket.velocity)
  return _internal_mutable_velocity();
}
inline void RigidBodyPacket::set_allocated_velocity(::PhysicsTelemetry::Vector4Packet* velocity) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(velocity_);
  }
  if (velocity) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      velocity = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, velocity, submessage_arena);
    }
    
  } else {
    
  }
  velocity_ = velocity;
  // @@protoc_insertion_point(field_set_allocated:PhysicsTelemetry.RigidBodyPacket.velocity)
}

// repeated uint32 collisionShapes = 4;
inline int RigidBodyPacket::_internal_collisionshapes_size() const {
  return collisionshapes_.size();
}
inline int RigidBodyPacket::collisionshapes_size() const {
  return _internal_collisionshapes_size();
}
inline void RigidBodyPacket::clear_collisionshapes() {
  collisionshapes_.Clear();
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 RigidBodyPacket::_internal_collisionshapes(int index) const {
  return collisionshapes_.Get(index);
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 RigidBodyPacket::collisionshapes(int index) const {
  // @@protoc_insertion_point(field_get:PhysicsTelemetry.RigidBodyPacket.collisionShapes)
  return _internal_collisionshapes(index);
}
inline void RigidBodyPacket::set_collisionshapes(int index, ::PROTOBUF_NAMESPACE_ID::uint32 value) {
  collisionshapes_.Set(index, value);
  // @@protoc_insertion_point(field_set:PhysicsTelemetry.RigidBodyPacket.collisionShapes)
}
inline void RigidBodyPacket::_internal_add_collisionshapes(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  collisionshapes_.Add(value);
}
inline void RigidBodyPacket::add_collisionshapes(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_add_collisionshapes(value);
  // @@protoc_insertion_point(field_add:PhysicsTelemetry.RigidBodyPacket.collisionShapes)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >&
RigidBodyPacket::_internal_collisionshapes() const {
  return collisionshapes_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >&
RigidBodyPacket::collisionshapes() const {
  // @@protoc_insertion_point(field_list:PhysicsTelemetry.RigidBodyPacket.collisionShapes)
  return _internal_collisionshapes();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >*
RigidBodyPacket::_internal_mutable_collisionshapes() {
  return &collisionshapes_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >*
RigidBodyPacket::mutable_collisionshapes() {
  // @@protoc_insertion_point(field_mutable_list:PhysicsTelemetry.RigidBodyPacket.collisionShapes)
  return _internal_mutable_collisionshapes();
}

// -------------------------------------------------------------------

// RigidBodyListPacket

// repeated .PhysicsTelemetry.RigidBodyPacket rigidBodies = 1;
inline int RigidBodyListPacket::_internal_rigidbodies_size() const {
  return rigidbodies_.size();
}
inline int RigidBodyListPacket::rigidbodies_size() const {
  return _internal_rigidbodies_size();
}
inline void RigidBodyListPacket::clear_rigidbodies() {
  rigidbodies_.Clear();
}
inline ::PhysicsTelemetry::RigidBodyPacket* RigidBodyListPacket::mutable_rigidbodies(int index) {
  // @@protoc_insertion_point(field_mutable:PhysicsTelemetry.RigidBodyListPacket.rigidBodies)
  return rigidbodies_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::PhysicsTelemetry::RigidBodyPacket >*
RigidBodyListPacket::mutable_rigidbodies() {
  // @@protoc_insertion_point(field_mutable_list:PhysicsTelemetry.RigidBodyListPacket.rigidBodies)
  return &rigidbodies_;
}
inline const ::PhysicsTelemetry::RigidBodyPacket& RigidBodyListPacket::_internal_rigidbodies(int index) const {
  return rigidbodies_.Get(index);
}
inline const ::PhysicsTelemetry::RigidBodyPacket& RigidBodyListPacket::rigidbodies(int index) const {
  // @@protoc_insertion_point(field_get:PhysicsTelemetry.RigidBodyListPacket.rigidBodies)
  return _internal_rigidbodies(index);
}
inline ::PhysicsTelemetry::RigidBodyPacket* RigidBodyListPacket::_internal_add_rigidbodies() {
  return rigidbodies_.Add();
}
inline ::PhysicsTelemetry::RigidBodyPacket* RigidBodyListPacket::add_rigidbodies() {
  // @@protoc_insertion_point(field_add:PhysicsTelemetry.RigidBodyListPacket.rigidBodies)
  return _internal_add_rigidbodies();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::PhysicsTelemetry::RigidBodyPacket >&
RigidBodyListPacket::rigidbodies() const {
  // @@protoc_insertion_point(field_list:PhysicsTelemetry.RigidBodyListPacket.rigidBodies)
  return rigidbodies_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace PhysicsTelemetry

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_rigid_5fbody_2eproto
