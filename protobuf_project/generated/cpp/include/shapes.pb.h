// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: shapes.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_shapes_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_shapes_2eproto

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "base_types.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_shapes_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_shapes_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[4]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_shapes_2eproto;
namespace PhysicsTelemetry {
class OBBShape;
class OBBShapeDefaultTypeInternal;
extern OBBShapeDefaultTypeInternal _OBBShape_default_instance_;
class ShapeBase;
class ShapeBaseDefaultTypeInternal;
extern ShapeBaseDefaultTypeInternal _ShapeBase_default_instance_;
class ShapeChanged;
class ShapeChangedDefaultTypeInternal;
extern ShapeChangedDefaultTypeInternal _ShapeChanged_default_instance_;
class ShapeCreated;
class ShapeCreatedDefaultTypeInternal;
extern ShapeCreatedDefaultTypeInternal _ShapeCreated_default_instance_;
}  // namespace PhysicsTelemetry
PROTOBUF_NAMESPACE_OPEN
template<> ::PhysicsTelemetry::OBBShape* Arena::CreateMaybeMessage<::PhysicsTelemetry::OBBShape>(Arena*);
template<> ::PhysicsTelemetry::ShapeBase* Arena::CreateMaybeMessage<::PhysicsTelemetry::ShapeBase>(Arena*);
template<> ::PhysicsTelemetry::ShapeChanged* Arena::CreateMaybeMessage<::PhysicsTelemetry::ShapeChanged>(Arena*);
template<> ::PhysicsTelemetry::ShapeCreated* Arena::CreateMaybeMessage<::PhysicsTelemetry::ShapeCreated>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace PhysicsTelemetry {

enum ShapeType : int {
  OBB = 0,
  Sphere = 1,
  Cone = 2,
  ConvexHull = 3,
  Tetrahedron = 4,
  ShapeType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  ShapeType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool ShapeType_IsValid(int value);
constexpr ShapeType ShapeType_MIN = OBB;
constexpr ShapeType ShapeType_MAX = Tetrahedron;
constexpr int ShapeType_ARRAYSIZE = ShapeType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ShapeType_descriptor();
template<typename T>
inline const std::string& ShapeType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ShapeType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ShapeType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    ShapeType_descriptor(), enum_t_value);
}
inline bool ShapeType_Parse(
    const std::string& name, ShapeType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<ShapeType>(
    ShapeType_descriptor(), name, value);
}
// ===================================================================

class ShapeBase :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:PhysicsTelemetry.ShapeBase) */ {
 public:
  ShapeBase();
  virtual ~ShapeBase();

  ShapeBase(const ShapeBase& from);
  ShapeBase(ShapeBase&& from) noexcept
    : ShapeBase() {
    *this = ::std::move(from);
  }

  inline ShapeBase& operator=(const ShapeBase& from) {
    CopyFrom(from);
    return *this;
  }
  inline ShapeBase& operator=(ShapeBase&& from) noexcept {
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
  static const ShapeBase& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ShapeBase* internal_default_instance() {
    return reinterpret_cast<const ShapeBase*>(
               &_ShapeBase_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ShapeBase& a, ShapeBase& b) {
    a.Swap(&b);
  }
  inline void Swap(ShapeBase* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ShapeBase* New() const final {
    return CreateMaybeMessage<ShapeBase>(nullptr);
  }

  ShapeBase* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ShapeBase>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ShapeBase& from);
  void MergeFrom(const ShapeBase& from);
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
  void InternalSwap(ShapeBase* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "PhysicsTelemetry.ShapeBase";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_shapes_2eproto);
    return ::descriptor_table_shapes_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kLocalMatrixFieldNumber = 3,
    kIdFieldNumber = 1,
    kHasLocalMatrixFieldNumber = 2,
    kShapeTypeFieldNumber = 4,
  };
  // .PhysicsTelemetry.Matrix4x4 localMatrix = 3;
  bool has_localmatrix() const;
  private:
  bool _internal_has_localmatrix() const;
  public:
  void clear_localmatrix();
  const ::PhysicsTelemetry::Matrix4x4& localmatrix() const;
  ::PhysicsTelemetry::Matrix4x4* release_localmatrix();
  ::PhysicsTelemetry::Matrix4x4* mutable_localmatrix();
  void set_allocated_localmatrix(::PhysicsTelemetry::Matrix4x4* localmatrix);
  private:
  const ::PhysicsTelemetry::Matrix4x4& _internal_localmatrix() const;
  ::PhysicsTelemetry::Matrix4x4* _internal_mutable_localmatrix();
  public:

  // uint32 Id = 1;
  void clear_id();
  ::PROTOBUF_NAMESPACE_ID::uint32 id() const;
  void set_id(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_id() const;
  void _internal_set_id(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // bool hasLocalMatrix = 2;
  void clear_haslocalmatrix();
  bool haslocalmatrix() const;
  void set_haslocalmatrix(bool value);
  private:
  bool _internal_haslocalmatrix() const;
  void _internal_set_haslocalmatrix(bool value);
  public:

  // .PhysicsTelemetry.ShapeType shapeType = 4;
  void clear_shapetype();
  ::PhysicsTelemetry::ShapeType shapetype() const;
  void set_shapetype(::PhysicsTelemetry::ShapeType value);
  private:
  ::PhysicsTelemetry::ShapeType _internal_shapetype() const;
  void _internal_set_shapetype(::PhysicsTelemetry::ShapeType value);
  public:

  // @@protoc_insertion_point(class_scope:PhysicsTelemetry.ShapeBase)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PhysicsTelemetry::Matrix4x4* localmatrix_;
  ::PROTOBUF_NAMESPACE_ID::uint32 id_;
  bool haslocalmatrix_;
  int shapetype_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_shapes_2eproto;
};
// -------------------------------------------------------------------

class OBBShape :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:PhysicsTelemetry.OBBShape) */ {
 public:
  OBBShape();
  virtual ~OBBShape();

  OBBShape(const OBBShape& from);
  OBBShape(OBBShape&& from) noexcept
    : OBBShape() {
    *this = ::std::move(from);
  }

  inline OBBShape& operator=(const OBBShape& from) {
    CopyFrom(from);
    return *this;
  }
  inline OBBShape& operator=(OBBShape&& from) noexcept {
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
  static const OBBShape& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const OBBShape* internal_default_instance() {
    return reinterpret_cast<const OBBShape*>(
               &_OBBShape_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(OBBShape& a, OBBShape& b) {
    a.Swap(&b);
  }
  inline void Swap(OBBShape* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline OBBShape* New() const final {
    return CreateMaybeMessage<OBBShape>(nullptr);
  }

  OBBShape* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<OBBShape>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const OBBShape& from);
  void MergeFrom(const OBBShape& from);
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
  void InternalSwap(OBBShape* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "PhysicsTelemetry.OBBShape";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_shapes_2eproto);
    return ::descriptor_table_shapes_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kBaseFieldNumber = 1,
    kHalfExtentsFieldNumber = 2,
  };
  // .PhysicsTelemetry.ShapeBase base = 1;
  bool has_base() const;
  private:
  bool _internal_has_base() const;
  public:
  void clear_base();
  const ::PhysicsTelemetry::ShapeBase& base() const;
  ::PhysicsTelemetry::ShapeBase* release_base();
  ::PhysicsTelemetry::ShapeBase* mutable_base();
  void set_allocated_base(::PhysicsTelemetry::ShapeBase* base);
  private:
  const ::PhysicsTelemetry::ShapeBase& _internal_base() const;
  ::PhysicsTelemetry::ShapeBase* _internal_mutable_base();
  public:

  // .PhysicsTelemetry.Vector3 halfExtents = 2;
  bool has_halfextents() const;
  private:
  bool _internal_has_halfextents() const;
  public:
  void clear_halfextents();
  const ::PhysicsTelemetry::Vector3& halfextents() const;
  ::PhysicsTelemetry::Vector3* release_halfextents();
  ::PhysicsTelemetry::Vector3* mutable_halfextents();
  void set_allocated_halfextents(::PhysicsTelemetry::Vector3* halfextents);
  private:
  const ::PhysicsTelemetry::Vector3& _internal_halfextents() const;
  ::PhysicsTelemetry::Vector3* _internal_mutable_halfextents();
  public:

  // @@protoc_insertion_point(class_scope:PhysicsTelemetry.OBBShape)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PhysicsTelemetry::ShapeBase* base_;
  ::PhysicsTelemetry::Vector3* halfextents_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_shapes_2eproto;
};
// -------------------------------------------------------------------

class ShapeCreated :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:PhysicsTelemetry.ShapeCreated) */ {
 public:
  ShapeCreated();
  virtual ~ShapeCreated();

  ShapeCreated(const ShapeCreated& from);
  ShapeCreated(ShapeCreated&& from) noexcept
    : ShapeCreated() {
    *this = ::std::move(from);
  }

  inline ShapeCreated& operator=(const ShapeCreated& from) {
    CopyFrom(from);
    return *this;
  }
  inline ShapeCreated& operator=(ShapeCreated&& from) noexcept {
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
  static const ShapeCreated& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ShapeCreated* internal_default_instance() {
    return reinterpret_cast<const ShapeCreated*>(
               &_ShapeCreated_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(ShapeCreated& a, ShapeCreated& b) {
    a.Swap(&b);
  }
  inline void Swap(ShapeCreated* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ShapeCreated* New() const final {
    return CreateMaybeMessage<ShapeCreated>(nullptr);
  }

  ShapeCreated* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ShapeCreated>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ShapeCreated& from);
  void MergeFrom(const ShapeCreated& from);
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
  void InternalSwap(ShapeCreated* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "PhysicsTelemetry.ShapeCreated";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_shapes_2eproto);
    return ::descriptor_table_shapes_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kShapeTypeFieldNumber = 1,
    kShapeSizeFieldNumber = 2,
  };
  // .PhysicsTelemetry.ShapeType shapeType = 1;
  void clear_shapetype();
  ::PhysicsTelemetry::ShapeType shapetype() const;
  void set_shapetype(::PhysicsTelemetry::ShapeType value);
  private:
  ::PhysicsTelemetry::ShapeType _internal_shapetype() const;
  void _internal_set_shapetype(::PhysicsTelemetry::ShapeType value);
  public:

  // int32 shapeSize = 2;
  void clear_shapesize();
  ::PROTOBUF_NAMESPACE_ID::int32 shapesize() const;
  void set_shapesize(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_shapesize() const;
  void _internal_set_shapesize(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:PhysicsTelemetry.ShapeCreated)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  int shapetype_;
  ::PROTOBUF_NAMESPACE_ID::int32 shapesize_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_shapes_2eproto;
};
// -------------------------------------------------------------------

class ShapeChanged :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:PhysicsTelemetry.ShapeChanged) */ {
 public:
  ShapeChanged();
  virtual ~ShapeChanged();

  ShapeChanged(const ShapeChanged& from);
  ShapeChanged(ShapeChanged&& from) noexcept
    : ShapeChanged() {
    *this = ::std::move(from);
  }

  inline ShapeChanged& operator=(const ShapeChanged& from) {
    CopyFrom(from);
    return *this;
  }
  inline ShapeChanged& operator=(ShapeChanged&& from) noexcept {
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
  static const ShapeChanged& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ShapeChanged* internal_default_instance() {
    return reinterpret_cast<const ShapeChanged*>(
               &_ShapeChanged_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  friend void swap(ShapeChanged& a, ShapeChanged& b) {
    a.Swap(&b);
  }
  inline void Swap(ShapeChanged* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ShapeChanged* New() const final {
    return CreateMaybeMessage<ShapeChanged>(nullptr);
  }

  ShapeChanged* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ShapeChanged>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ShapeChanged& from);
  void MergeFrom(const ShapeChanged& from);
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
  void InternalSwap(ShapeChanged* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "PhysicsTelemetry.ShapeChanged";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_shapes_2eproto);
    return ::descriptor_table_shapes_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kShapeTypeFieldNumber = 1,
    kShapeSizeFieldNumber = 2,
  };
  // .PhysicsTelemetry.ShapeType shapeType = 1;
  void clear_shapetype();
  ::PhysicsTelemetry::ShapeType shapetype() const;
  void set_shapetype(::PhysicsTelemetry::ShapeType value);
  private:
  ::PhysicsTelemetry::ShapeType _internal_shapetype() const;
  void _internal_set_shapetype(::PhysicsTelemetry::ShapeType value);
  public:

  // int32 shapeSize = 2;
  void clear_shapesize();
  ::PROTOBUF_NAMESPACE_ID::int32 shapesize() const;
  void set_shapesize(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_shapesize() const;
  void _internal_set_shapesize(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:PhysicsTelemetry.ShapeChanged)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  int shapetype_;
  ::PROTOBUF_NAMESPACE_ID::int32 shapesize_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_shapes_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ShapeBase

// uint32 Id = 1;
inline void ShapeBase::clear_id() {
  id_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 ShapeBase::_internal_id() const {
  return id_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 ShapeBase::id() const {
  // @@protoc_insertion_point(field_get:PhysicsTelemetry.ShapeBase.Id)
  return _internal_id();
}
inline void ShapeBase::_internal_set_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  id_ = value;
}
inline void ShapeBase::set_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:PhysicsTelemetry.ShapeBase.Id)
}

// bool hasLocalMatrix = 2;
inline void ShapeBase::clear_haslocalmatrix() {
  haslocalmatrix_ = false;
}
inline bool ShapeBase::_internal_haslocalmatrix() const {
  return haslocalmatrix_;
}
inline bool ShapeBase::haslocalmatrix() const {
  // @@protoc_insertion_point(field_get:PhysicsTelemetry.ShapeBase.hasLocalMatrix)
  return _internal_haslocalmatrix();
}
inline void ShapeBase::_internal_set_haslocalmatrix(bool value) {
  
  haslocalmatrix_ = value;
}
inline void ShapeBase::set_haslocalmatrix(bool value) {
  _internal_set_haslocalmatrix(value);
  // @@protoc_insertion_point(field_set:PhysicsTelemetry.ShapeBase.hasLocalMatrix)
}

// .PhysicsTelemetry.Matrix4x4 localMatrix = 3;
inline bool ShapeBase::_internal_has_localmatrix() const {
  return this != internal_default_instance() && localmatrix_ != nullptr;
}
inline bool ShapeBase::has_localmatrix() const {
  return _internal_has_localmatrix();
}
inline const ::PhysicsTelemetry::Matrix4x4& ShapeBase::_internal_localmatrix() const {
  const ::PhysicsTelemetry::Matrix4x4* p = localmatrix_;
  return p != nullptr ? *p : *reinterpret_cast<const ::PhysicsTelemetry::Matrix4x4*>(
      &::PhysicsTelemetry::_Matrix4x4_default_instance_);
}
inline const ::PhysicsTelemetry::Matrix4x4& ShapeBase::localmatrix() const {
  // @@protoc_insertion_point(field_get:PhysicsTelemetry.ShapeBase.localMatrix)
  return _internal_localmatrix();
}
inline ::PhysicsTelemetry::Matrix4x4* ShapeBase::release_localmatrix() {
  // @@protoc_insertion_point(field_release:PhysicsTelemetry.ShapeBase.localMatrix)
  
  ::PhysicsTelemetry::Matrix4x4* temp = localmatrix_;
  localmatrix_ = nullptr;
  return temp;
}
inline ::PhysicsTelemetry::Matrix4x4* ShapeBase::_internal_mutable_localmatrix() {
  
  if (localmatrix_ == nullptr) {
    auto* p = CreateMaybeMessage<::PhysicsTelemetry::Matrix4x4>(GetArenaNoVirtual());
    localmatrix_ = p;
  }
  return localmatrix_;
}
inline ::PhysicsTelemetry::Matrix4x4* ShapeBase::mutable_localmatrix() {
  // @@protoc_insertion_point(field_mutable:PhysicsTelemetry.ShapeBase.localMatrix)
  return _internal_mutable_localmatrix();
}
inline void ShapeBase::set_allocated_localmatrix(::PhysicsTelemetry::Matrix4x4* localmatrix) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(localmatrix_);
  }
  if (localmatrix) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      localmatrix = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, localmatrix, submessage_arena);
    }
    
  } else {
    
  }
  localmatrix_ = localmatrix;
  // @@protoc_insertion_point(field_set_allocated:PhysicsTelemetry.ShapeBase.localMatrix)
}

// .PhysicsTelemetry.ShapeType shapeType = 4;
inline void ShapeBase::clear_shapetype() {
  shapetype_ = 0;
}
inline ::PhysicsTelemetry::ShapeType ShapeBase::_internal_shapetype() const {
  return static_cast< ::PhysicsTelemetry::ShapeType >(shapetype_);
}
inline ::PhysicsTelemetry::ShapeType ShapeBase::shapetype() const {
  // @@protoc_insertion_point(field_get:PhysicsTelemetry.ShapeBase.shapeType)
  return _internal_shapetype();
}
inline void ShapeBase::_internal_set_shapetype(::PhysicsTelemetry::ShapeType value) {
  
  shapetype_ = value;
}
inline void ShapeBase::set_shapetype(::PhysicsTelemetry::ShapeType value) {
  _internal_set_shapetype(value);
  // @@protoc_insertion_point(field_set:PhysicsTelemetry.ShapeBase.shapeType)
}

// -------------------------------------------------------------------

// OBBShape

// .PhysicsTelemetry.ShapeBase base = 1;
inline bool OBBShape::_internal_has_base() const {
  return this != internal_default_instance() && base_ != nullptr;
}
inline bool OBBShape::has_base() const {
  return _internal_has_base();
}
inline void OBBShape::clear_base() {
  if (GetArenaNoVirtual() == nullptr && base_ != nullptr) {
    delete base_;
  }
  base_ = nullptr;
}
inline const ::PhysicsTelemetry::ShapeBase& OBBShape::_internal_base() const {
  const ::PhysicsTelemetry::ShapeBase* p = base_;
  return p != nullptr ? *p : *reinterpret_cast<const ::PhysicsTelemetry::ShapeBase*>(
      &::PhysicsTelemetry::_ShapeBase_default_instance_);
}
inline const ::PhysicsTelemetry::ShapeBase& OBBShape::base() const {
  // @@protoc_insertion_point(field_get:PhysicsTelemetry.OBBShape.base)
  return _internal_base();
}
inline ::PhysicsTelemetry::ShapeBase* OBBShape::release_base() {
  // @@protoc_insertion_point(field_release:PhysicsTelemetry.OBBShape.base)
  
  ::PhysicsTelemetry::ShapeBase* temp = base_;
  base_ = nullptr;
  return temp;
}
inline ::PhysicsTelemetry::ShapeBase* OBBShape::_internal_mutable_base() {
  
  if (base_ == nullptr) {
    auto* p = CreateMaybeMessage<::PhysicsTelemetry::ShapeBase>(GetArenaNoVirtual());
    base_ = p;
  }
  return base_;
}
inline ::PhysicsTelemetry::ShapeBase* OBBShape::mutable_base() {
  // @@protoc_insertion_point(field_mutable:PhysicsTelemetry.OBBShape.base)
  return _internal_mutable_base();
}
inline void OBBShape::set_allocated_base(::PhysicsTelemetry::ShapeBase* base) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete base_;
  }
  if (base) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      base = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, base, submessage_arena);
    }
    
  } else {
    
  }
  base_ = base;
  // @@protoc_insertion_point(field_set_allocated:PhysicsTelemetry.OBBShape.base)
}

// .PhysicsTelemetry.Vector3 halfExtents = 2;
inline bool OBBShape::_internal_has_halfextents() const {
  return this != internal_default_instance() && halfextents_ != nullptr;
}
inline bool OBBShape::has_halfextents() const {
  return _internal_has_halfextents();
}
inline const ::PhysicsTelemetry::Vector3& OBBShape::_internal_halfextents() const {
  const ::PhysicsTelemetry::Vector3* p = halfextents_;
  return p != nullptr ? *p : *reinterpret_cast<const ::PhysicsTelemetry::Vector3*>(
      &::PhysicsTelemetry::_Vector3_default_instance_);
}
inline const ::PhysicsTelemetry::Vector3& OBBShape::halfextents() const {
  // @@protoc_insertion_point(field_get:PhysicsTelemetry.OBBShape.halfExtents)
  return _internal_halfextents();
}
inline ::PhysicsTelemetry::Vector3* OBBShape::release_halfextents() {
  // @@protoc_insertion_point(field_release:PhysicsTelemetry.OBBShape.halfExtents)
  
  ::PhysicsTelemetry::Vector3* temp = halfextents_;
  halfextents_ = nullptr;
  return temp;
}
inline ::PhysicsTelemetry::Vector3* OBBShape::_internal_mutable_halfextents() {
  
  if (halfextents_ == nullptr) {
    auto* p = CreateMaybeMessage<::PhysicsTelemetry::Vector3>(GetArenaNoVirtual());
    halfextents_ = p;
  }
  return halfextents_;
}
inline ::PhysicsTelemetry::Vector3* OBBShape::mutable_halfextents() {
  // @@protoc_insertion_point(field_mutable:PhysicsTelemetry.OBBShape.halfExtents)
  return _internal_mutable_halfextents();
}
inline void OBBShape::set_allocated_halfextents(::PhysicsTelemetry::Vector3* halfextents) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(halfextents_);
  }
  if (halfextents) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      halfextents = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, halfextents, submessage_arena);
    }
    
  } else {
    
  }
  halfextents_ = halfextents;
  // @@protoc_insertion_point(field_set_allocated:PhysicsTelemetry.OBBShape.halfExtents)
}

// -------------------------------------------------------------------

// ShapeCreated

// .PhysicsTelemetry.ShapeType shapeType = 1;
inline void ShapeCreated::clear_shapetype() {
  shapetype_ = 0;
}
inline ::PhysicsTelemetry::ShapeType ShapeCreated::_internal_shapetype() const {
  return static_cast< ::PhysicsTelemetry::ShapeType >(shapetype_);
}
inline ::PhysicsTelemetry::ShapeType ShapeCreated::shapetype() const {
  // @@protoc_insertion_point(field_get:PhysicsTelemetry.ShapeCreated.shapeType)
  return _internal_shapetype();
}
inline void ShapeCreated::_internal_set_shapetype(::PhysicsTelemetry::ShapeType value) {
  
  shapetype_ = value;
}
inline void ShapeCreated::set_shapetype(::PhysicsTelemetry::ShapeType value) {
  _internal_set_shapetype(value);
  // @@protoc_insertion_point(field_set:PhysicsTelemetry.ShapeCreated.shapeType)
}

// int32 shapeSize = 2;
inline void ShapeCreated::clear_shapesize() {
  shapesize_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ShapeCreated::_internal_shapesize() const {
  return shapesize_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ShapeCreated::shapesize() const {
  // @@protoc_insertion_point(field_get:PhysicsTelemetry.ShapeCreated.shapeSize)
  return _internal_shapesize();
}
inline void ShapeCreated::_internal_set_shapesize(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  shapesize_ = value;
}
inline void ShapeCreated::set_shapesize(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_shapesize(value);
  // @@protoc_insertion_point(field_set:PhysicsTelemetry.ShapeCreated.shapeSize)
}

// -------------------------------------------------------------------

// ShapeChanged

// .PhysicsTelemetry.ShapeType shapeType = 1;
inline void ShapeChanged::clear_shapetype() {
  shapetype_ = 0;
}
inline ::PhysicsTelemetry::ShapeType ShapeChanged::_internal_shapetype() const {
  return static_cast< ::PhysicsTelemetry::ShapeType >(shapetype_);
}
inline ::PhysicsTelemetry::ShapeType ShapeChanged::shapetype() const {
  // @@protoc_insertion_point(field_get:PhysicsTelemetry.ShapeChanged.shapeType)
  return _internal_shapetype();
}
inline void ShapeChanged::_internal_set_shapetype(::PhysicsTelemetry::ShapeType value) {
  
  shapetype_ = value;
}
inline void ShapeChanged::set_shapetype(::PhysicsTelemetry::ShapeType value) {
  _internal_set_shapetype(value);
  // @@protoc_insertion_point(field_set:PhysicsTelemetry.ShapeChanged.shapeType)
}

// int32 shapeSize = 2;
inline void ShapeChanged::clear_shapesize() {
  shapesize_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ShapeChanged::_internal_shapesize() const {
  return shapesize_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ShapeChanged::shapesize() const {
  // @@protoc_insertion_point(field_get:PhysicsTelemetry.ShapeChanged.shapeSize)
  return _internal_shapesize();
}
inline void ShapeChanged::_internal_set_shapesize(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  shapesize_ = value;
}
inline void ShapeChanged::set_shapesize(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_shapesize(value);
  // @@protoc_insertion_point(field_set:PhysicsTelemetry.ShapeChanged.shapeSize)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace PhysicsTelemetry

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::PhysicsTelemetry::ShapeType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::PhysicsTelemetry::ShapeType>() {
  return ::PhysicsTelemetry::ShapeType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_shapes_2eproto
