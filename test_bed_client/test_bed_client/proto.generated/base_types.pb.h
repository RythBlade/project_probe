// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: base_types.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_base_5ftypes_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_base_5ftypes_2eproto

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
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_base_5ftypes_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_base_5ftypes_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_base_5ftypes_2eproto;
namespace PhysicsTelemetry {
class Matrix4x4;
class Matrix4x4DefaultTypeInternal;
extern Matrix4x4DefaultTypeInternal _Matrix4x4_default_instance_;
class Vector3;
class Vector3DefaultTypeInternal;
extern Vector3DefaultTypeInternal _Vector3_default_instance_;
class Vector4;
class Vector4DefaultTypeInternal;
extern Vector4DefaultTypeInternal _Vector4_default_instance_;
}  // namespace PhysicsTelemetry
PROTOBUF_NAMESPACE_OPEN
template<> ::PhysicsTelemetry::Matrix4x4* Arena::CreateMaybeMessage<::PhysicsTelemetry::Matrix4x4>(Arena*);
template<> ::PhysicsTelemetry::Vector3* Arena::CreateMaybeMessage<::PhysicsTelemetry::Vector3>(Arena*);
template<> ::PhysicsTelemetry::Vector4* Arena::CreateMaybeMessage<::PhysicsTelemetry::Vector4>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace PhysicsTelemetry {

// ===================================================================

class Vector3 :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:PhysicsTelemetry.Vector3) */ {
 public:
  Vector3();
  virtual ~Vector3();

  Vector3(const Vector3& from);
  Vector3(Vector3&& from) noexcept
    : Vector3() {
    *this = ::std::move(from);
  }

  inline Vector3& operator=(const Vector3& from) {
    CopyFrom(from);
    return *this;
  }
  inline Vector3& operator=(Vector3&& from) noexcept {
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
  static const Vector3& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Vector3* internal_default_instance() {
    return reinterpret_cast<const Vector3*>(
               &_Vector3_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Vector3& a, Vector3& b) {
    a.Swap(&b);
  }
  inline void Swap(Vector3* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Vector3* New() const final {
    return CreateMaybeMessage<Vector3>(nullptr);
  }

  Vector3* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Vector3>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Vector3& from);
  void MergeFrom(const Vector3& from);
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
  void InternalSwap(Vector3* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "PhysicsTelemetry.Vector3";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_base_5ftypes_2eproto);
    return ::descriptor_table_base_5ftypes_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kXFieldNumber = 1,
    kYFieldNumber = 2,
    kZFieldNumber = 3,
  };
  // float x = 1;
  void clear_x();
  float x() const;
  void set_x(float value);
  private:
  float _internal_x() const;
  void _internal_set_x(float value);
  public:

  // float y = 2;
  void clear_y();
  float y() const;
  void set_y(float value);
  private:
  float _internal_y() const;
  void _internal_set_y(float value);
  public:

  // float z = 3;
  void clear_z();
  float z() const;
  void set_z(float value);
  private:
  float _internal_z() const;
  void _internal_set_z(float value);
  public:

  // @@protoc_insertion_point(class_scope:PhysicsTelemetry.Vector3)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  float x_;
  float y_;
  float z_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_base_5ftypes_2eproto;
};
// -------------------------------------------------------------------

class Vector4 :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:PhysicsTelemetry.Vector4) */ {
 public:
  Vector4();
  virtual ~Vector4();

  Vector4(const Vector4& from);
  Vector4(Vector4&& from) noexcept
    : Vector4() {
    *this = ::std::move(from);
  }

  inline Vector4& operator=(const Vector4& from) {
    CopyFrom(from);
    return *this;
  }
  inline Vector4& operator=(Vector4&& from) noexcept {
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
  static const Vector4& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Vector4* internal_default_instance() {
    return reinterpret_cast<const Vector4*>(
               &_Vector4_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Vector4& a, Vector4& b) {
    a.Swap(&b);
  }
  inline void Swap(Vector4* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Vector4* New() const final {
    return CreateMaybeMessage<Vector4>(nullptr);
  }

  Vector4* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Vector4>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Vector4& from);
  void MergeFrom(const Vector4& from);
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
  void InternalSwap(Vector4* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "PhysicsTelemetry.Vector4";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_base_5ftypes_2eproto);
    return ::descriptor_table_base_5ftypes_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kXFieldNumber = 1,
    kYFieldNumber = 2,
    kZFieldNumber = 3,
    kWFieldNumber = 4,
  };
  // float x = 1;
  void clear_x();
  float x() const;
  void set_x(float value);
  private:
  float _internal_x() const;
  void _internal_set_x(float value);
  public:

  // float y = 2;
  void clear_y();
  float y() const;
  void set_y(float value);
  private:
  float _internal_y() const;
  void _internal_set_y(float value);
  public:

  // float z = 3;
  void clear_z();
  float z() const;
  void set_z(float value);
  private:
  float _internal_z() const;
  void _internal_set_z(float value);
  public:

  // float w = 4;
  void clear_w();
  float w() const;
  void set_w(float value);
  private:
  float _internal_w() const;
  void _internal_set_w(float value);
  public:

  // @@protoc_insertion_point(class_scope:PhysicsTelemetry.Vector4)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  float x_;
  float y_;
  float z_;
  float w_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_base_5ftypes_2eproto;
};
// -------------------------------------------------------------------

class Matrix4x4 :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:PhysicsTelemetry.Matrix4x4) */ {
 public:
  Matrix4x4();
  virtual ~Matrix4x4();

  Matrix4x4(const Matrix4x4& from);
  Matrix4x4(Matrix4x4&& from) noexcept
    : Matrix4x4() {
    *this = ::std::move(from);
  }

  inline Matrix4x4& operator=(const Matrix4x4& from) {
    CopyFrom(from);
    return *this;
  }
  inline Matrix4x4& operator=(Matrix4x4&& from) noexcept {
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
  static const Matrix4x4& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Matrix4x4* internal_default_instance() {
    return reinterpret_cast<const Matrix4x4*>(
               &_Matrix4x4_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(Matrix4x4& a, Matrix4x4& b) {
    a.Swap(&b);
  }
  inline void Swap(Matrix4x4* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Matrix4x4* New() const final {
    return CreateMaybeMessage<Matrix4x4>(nullptr);
  }

  Matrix4x4* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Matrix4x4>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Matrix4x4& from);
  void MergeFrom(const Matrix4x4& from);
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
  void InternalSwap(Matrix4x4* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "PhysicsTelemetry.Matrix4x4";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_base_5ftypes_2eproto);
    return ::descriptor_table_base_5ftypes_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kM11FieldNumber = 1,
    kM12FieldNumber = 2,
    kM13FieldNumber = 3,
    kM14FieldNumber = 4,
    kM21FieldNumber = 5,
    kM22FieldNumber = 6,
    kM23FieldNumber = 7,
    kM24FieldNumber = 8,
    kM31FieldNumber = 9,
    kM32FieldNumber = 10,
    kM33FieldNumber = 11,
    kM34FieldNumber = 12,
    kM41FieldNumber = 13,
    kM42FieldNumber = 14,
    kM43FieldNumber = 15,
    kM44FieldNumber = 16,
  };
  // float m11 = 1;
  void clear_m11();
  float m11() const;
  void set_m11(float value);
  private:
  float _internal_m11() const;
  void _internal_set_m11(float value);
  public:

  // float m12 = 2;
  void clear_m12();
  float m12() const;
  void set_m12(float value);
  private:
  float _internal_m12() const;
  void _internal_set_m12(float value);
  public:

  // float m13 = 3;
  void clear_m13();
  float m13() const;
  void set_m13(float value);
  private:
  float _internal_m13() const;
  void _internal_set_m13(float value);
  public:

  // float m14 = 4;
  void clear_m14();
  float m14() const;
  void set_m14(float value);
  private:
  float _internal_m14() const;
  void _internal_set_m14(float value);
  public:

  // float m21 = 5;
  void clear_m21();
  float m21() const;
  void set_m21(float value);
  private:
  float _internal_m21() const;
  void _internal_set_m21(float value);
  public:

  // float m22 = 6;
  void clear_m22();
  float m22() const;
  void set_m22(float value);
  private:
  float _internal_m22() const;
  void _internal_set_m22(float value);
  public:

  // float m23 = 7;
  void clear_m23();
  float m23() const;
  void set_m23(float value);
  private:
  float _internal_m23() const;
  void _internal_set_m23(float value);
  public:

  // float m24 = 8;
  void clear_m24();
  float m24() const;
  void set_m24(float value);
  private:
  float _internal_m24() const;
  void _internal_set_m24(float value);
  public:

  // float m31 = 9;
  void clear_m31();
  float m31() const;
  void set_m31(float value);
  private:
  float _internal_m31() const;
  void _internal_set_m31(float value);
  public:

  // float m32 = 10;
  void clear_m32();
  float m32() const;
  void set_m32(float value);
  private:
  float _internal_m32() const;
  void _internal_set_m32(float value);
  public:

  // float m33 = 11;
  void clear_m33();
  float m33() const;
  void set_m33(float value);
  private:
  float _internal_m33() const;
  void _internal_set_m33(float value);
  public:

  // float m34 = 12;
  void clear_m34();
  float m34() const;
  void set_m34(float value);
  private:
  float _internal_m34() const;
  void _internal_set_m34(float value);
  public:

  // float m41 = 13;
  void clear_m41();
  float m41() const;
  void set_m41(float value);
  private:
  float _internal_m41() const;
  void _internal_set_m41(float value);
  public:

  // float m42 = 14;
  void clear_m42();
  float m42() const;
  void set_m42(float value);
  private:
  float _internal_m42() const;
  void _internal_set_m42(float value);
  public:

  // float m43 = 15;
  void clear_m43();
  float m43() const;
  void set_m43(float value);
  private:
  float _internal_m43() const;
  void _internal_set_m43(float value);
  public:

  // float m44 = 16;
  void clear_m44();
  float m44() const;
  void set_m44(float value);
  private:
  float _internal_m44() const;
  void _internal_set_m44(float value);
  public:

  // @@protoc_insertion_point(class_scope:PhysicsTelemetry.Matrix4x4)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  float m11_;
  float m12_;
  float m13_;
  float m14_;
  float m21_;
  float m22_;
  float m23_;
  float m24_;
  float m31_;
  float m32_;
  float m33_;
  float m34_;
  float m41_;
  float m42_;
  float m43_;
  float m44_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_base_5ftypes_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Vector3

// float x = 1;
inline void Vector3::clear_x() {
  x_ = 0;
}
inline float Vector3::_internal_x() const {
  return x_;
}
inline float Vector3::x() const {
  // @@protoc_insertion_point(field_get:PhysicsTelemetry.Vector3.x)
  return _internal_x();
}
inline void Vector3::_internal_set_x(float value) {
  
  x_ = value;
}
inline void Vector3::set_x(float value) {
  _internal_set_x(value);
  // @@protoc_insertion_point(field_set:PhysicsTelemetry.Vector3.x)
}

// float y = 2;
inline void Vector3::clear_y() {
  y_ = 0;
}
inline float Vector3::_internal_y() const {
  return y_;
}
inline float Vector3::y() const {
  // @@protoc_insertion_point(field_get:PhysicsTelemetry.Vector3.y)
  return _internal_y();
}
inline void Vector3::_internal_set_y(float value) {
  
  y_ = value;
}
inline void Vector3::set_y(float value) {
  _internal_set_y(value);
  // @@protoc_insertion_point(field_set:PhysicsTelemetry.Vector3.y)
}

// float z = 3;
inline void Vector3::clear_z() {
  z_ = 0;
}
inline float Vector3::_internal_z() const {
  return z_;
}
inline float Vector3::z() const {
  // @@protoc_insertion_point(field_get:PhysicsTelemetry.Vector3.z)
  return _internal_z();
}
inline void Vector3::_internal_set_z(float value) {
  
  z_ = value;
}
inline void Vector3::set_z(float value) {
  _internal_set_z(value);
  // @@protoc_insertion_point(field_set:PhysicsTelemetry.Vector3.z)
}

// -------------------------------------------------------------------

// Vector4

// float x = 1;
inline void Vector4::clear_x() {
  x_ = 0;
}
inline float Vector4::_internal_x() const {
  return x_;
}
inline float Vector4::x() const {
  // @@protoc_insertion_point(field_get:PhysicsTelemetry.Vector4.x)
  return _internal_x();
}
inline void Vector4::_internal_set_x(float value) {
  
  x_ = value;
}
inline void Vector4::set_x(float value) {
  _internal_set_x(value);
  // @@protoc_insertion_point(field_set:PhysicsTelemetry.Vector4.x)
}

// float y = 2;
inline void Vector4::clear_y() {
  y_ = 0;
}
inline float Vector4::_internal_y() const {
  return y_;
}
inline float Vector4::y() const {
  // @@protoc_insertion_point(field_get:PhysicsTelemetry.Vector4.y)
  return _internal_y();
}
inline void Vector4::_internal_set_y(float value) {
  
  y_ = value;
}
inline void Vector4::set_y(float value) {
  _internal_set_y(value);
  // @@protoc_insertion_point(field_set:PhysicsTelemetry.Vector4.y)
}

// float z = 3;
inline void Vector4::clear_z() {
  z_ = 0;
}
inline float Vector4::_internal_z() const {
  return z_;
}
inline float Vector4::z() const {
  // @@protoc_insertion_point(field_get:PhysicsTelemetry.Vector4.z)
  return _internal_z();
}
inline void Vector4::_internal_set_z(float value) {
  
  z_ = value;
}
inline void Vector4::set_z(float value) {
  _internal_set_z(value);
  // @@protoc_insertion_point(field_set:PhysicsTelemetry.Vector4.z)
}

// float w = 4;
inline void Vector4::clear_w() {
  w_ = 0;
}
inline float Vector4::_internal_w() const {
  return w_;
}
inline float Vector4::w() const {
  // @@protoc_insertion_point(field_get:PhysicsTelemetry.Vector4.w)
  return _internal_w();
}
inline void Vector4::_internal_set_w(float value) {
  
  w_ = value;
}
inline void Vector4::set_w(float value) {
  _internal_set_w(value);
  // @@protoc_insertion_point(field_set:PhysicsTelemetry.Vector4.w)
}

// -------------------------------------------------------------------

// Matrix4x4

// float m11 = 1;
inline void Matrix4x4::clear_m11() {
  m11_ = 0;
}
inline float Matrix4x4::_internal_m11() const {
  return m11_;
}
inline float Matrix4x4::m11() const {
  // @@protoc_insertion_point(field_get:PhysicsTelemetry.Matrix4x4.m11)
  return _internal_m11();
}
inline void Matrix4x4::_internal_set_m11(float value) {
  
  m11_ = value;
}
inline void Matrix4x4::set_m11(float value) {
  _internal_set_m11(value);
  // @@protoc_insertion_point(field_set:PhysicsTelemetry.Matrix4x4.m11)
}

// float m12 = 2;
inline void Matrix4x4::clear_m12() {
  m12_ = 0;
}
inline float Matrix4x4::_internal_m12() const {
  return m12_;
}
inline float Matrix4x4::m12() const {
  // @@protoc_insertion_point(field_get:PhysicsTelemetry.Matrix4x4.m12)
  return _internal_m12();
}
inline void Matrix4x4::_internal_set_m12(float value) {
  
  m12_ = value;
}
inline void Matrix4x4::set_m12(float value) {
  _internal_set_m12(value);
  // @@protoc_insertion_point(field_set:PhysicsTelemetry.Matrix4x4.m12)
}

// float m13 = 3;
inline void Matrix4x4::clear_m13() {
  m13_ = 0;
}
inline float Matrix4x4::_internal_m13() const {
  return m13_;
}
inline float Matrix4x4::m13() const {
  // @@protoc_insertion_point(field_get:PhysicsTelemetry.Matrix4x4.m13)
  return _internal_m13();
}
inline void Matrix4x4::_internal_set_m13(float value) {
  
  m13_ = value;
}
inline void Matrix4x4::set_m13(float value) {
  _internal_set_m13(value);
  // @@protoc_insertion_point(field_set:PhysicsTelemetry.Matrix4x4.m13)
}

// float m14 = 4;
inline void Matrix4x4::clear_m14() {
  m14_ = 0;
}
inline float Matrix4x4::_internal_m14() const {
  return m14_;
}
inline float Matrix4x4::m14() const {
  // @@protoc_insertion_point(field_get:PhysicsTelemetry.Matrix4x4.m14)
  return _internal_m14();
}
inline void Matrix4x4::_internal_set_m14(float value) {
  
  m14_ = value;
}
inline void Matrix4x4::set_m14(float value) {
  _internal_set_m14(value);
  // @@protoc_insertion_point(field_set:PhysicsTelemetry.Matrix4x4.m14)
}

// float m21 = 5;
inline void Matrix4x4::clear_m21() {
  m21_ = 0;
}
inline float Matrix4x4::_internal_m21() const {
  return m21_;
}
inline float Matrix4x4::m21() const {
  // @@protoc_insertion_point(field_get:PhysicsTelemetry.Matrix4x4.m21)
  return _internal_m21();
}
inline void Matrix4x4::_internal_set_m21(float value) {
  
  m21_ = value;
}
inline void Matrix4x4::set_m21(float value) {
  _internal_set_m21(value);
  // @@protoc_insertion_point(field_set:PhysicsTelemetry.Matrix4x4.m21)
}

// float m22 = 6;
inline void Matrix4x4::clear_m22() {
  m22_ = 0;
}
inline float Matrix4x4::_internal_m22() const {
  return m22_;
}
inline float Matrix4x4::m22() const {
  // @@protoc_insertion_point(field_get:PhysicsTelemetry.Matrix4x4.m22)
  return _internal_m22();
}
inline void Matrix4x4::_internal_set_m22(float value) {
  
  m22_ = value;
}
inline void Matrix4x4::set_m22(float value) {
  _internal_set_m22(value);
  // @@protoc_insertion_point(field_set:PhysicsTelemetry.Matrix4x4.m22)
}

// float m23 = 7;
inline void Matrix4x4::clear_m23() {
  m23_ = 0;
}
inline float Matrix4x4::_internal_m23() const {
  return m23_;
}
inline float Matrix4x4::m23() const {
  // @@protoc_insertion_point(field_get:PhysicsTelemetry.Matrix4x4.m23)
  return _internal_m23();
}
inline void Matrix4x4::_internal_set_m23(float value) {
  
  m23_ = value;
}
inline void Matrix4x4::set_m23(float value) {
  _internal_set_m23(value);
  // @@protoc_insertion_point(field_set:PhysicsTelemetry.Matrix4x4.m23)
}

// float m24 = 8;
inline void Matrix4x4::clear_m24() {
  m24_ = 0;
}
inline float Matrix4x4::_internal_m24() const {
  return m24_;
}
inline float Matrix4x4::m24() const {
  // @@protoc_insertion_point(field_get:PhysicsTelemetry.Matrix4x4.m24)
  return _internal_m24();
}
inline void Matrix4x4::_internal_set_m24(float value) {
  
  m24_ = value;
}
inline void Matrix4x4::set_m24(float value) {
  _internal_set_m24(value);
  // @@protoc_insertion_point(field_set:PhysicsTelemetry.Matrix4x4.m24)
}

// float m31 = 9;
inline void Matrix4x4::clear_m31() {
  m31_ = 0;
}
inline float Matrix4x4::_internal_m31() const {
  return m31_;
}
inline float Matrix4x4::m31() const {
  // @@protoc_insertion_point(field_get:PhysicsTelemetry.Matrix4x4.m31)
  return _internal_m31();
}
inline void Matrix4x4::_internal_set_m31(float value) {
  
  m31_ = value;
}
inline void Matrix4x4::set_m31(float value) {
  _internal_set_m31(value);
  // @@protoc_insertion_point(field_set:PhysicsTelemetry.Matrix4x4.m31)
}

// float m32 = 10;
inline void Matrix4x4::clear_m32() {
  m32_ = 0;
}
inline float Matrix4x4::_internal_m32() const {
  return m32_;
}
inline float Matrix4x4::m32() const {
  // @@protoc_insertion_point(field_get:PhysicsTelemetry.Matrix4x4.m32)
  return _internal_m32();
}
inline void Matrix4x4::_internal_set_m32(float value) {
  
  m32_ = value;
}
inline void Matrix4x4::set_m32(float value) {
  _internal_set_m32(value);
  // @@protoc_insertion_point(field_set:PhysicsTelemetry.Matrix4x4.m32)
}

// float m33 = 11;
inline void Matrix4x4::clear_m33() {
  m33_ = 0;
}
inline float Matrix4x4::_internal_m33() const {
  return m33_;
}
inline float Matrix4x4::m33() const {
  // @@protoc_insertion_point(field_get:PhysicsTelemetry.Matrix4x4.m33)
  return _internal_m33();
}
inline void Matrix4x4::_internal_set_m33(float value) {
  
  m33_ = value;
}
inline void Matrix4x4::set_m33(float value) {
  _internal_set_m33(value);
  // @@protoc_insertion_point(field_set:PhysicsTelemetry.Matrix4x4.m33)
}

// float m34 = 12;
inline void Matrix4x4::clear_m34() {
  m34_ = 0;
}
inline float Matrix4x4::_internal_m34() const {
  return m34_;
}
inline float Matrix4x4::m34() const {
  // @@protoc_insertion_point(field_get:PhysicsTelemetry.Matrix4x4.m34)
  return _internal_m34();
}
inline void Matrix4x4::_internal_set_m34(float value) {
  
  m34_ = value;
}
inline void Matrix4x4::set_m34(float value) {
  _internal_set_m34(value);
  // @@protoc_insertion_point(field_set:PhysicsTelemetry.Matrix4x4.m34)
}

// float m41 = 13;
inline void Matrix4x4::clear_m41() {
  m41_ = 0;
}
inline float Matrix4x4::_internal_m41() const {
  return m41_;
}
inline float Matrix4x4::m41() const {
  // @@protoc_insertion_point(field_get:PhysicsTelemetry.Matrix4x4.m41)
  return _internal_m41();
}
inline void Matrix4x4::_internal_set_m41(float value) {
  
  m41_ = value;
}
inline void Matrix4x4::set_m41(float value) {
  _internal_set_m41(value);
  // @@protoc_insertion_point(field_set:PhysicsTelemetry.Matrix4x4.m41)
}

// float m42 = 14;
inline void Matrix4x4::clear_m42() {
  m42_ = 0;
}
inline float Matrix4x4::_internal_m42() const {
  return m42_;
}
inline float Matrix4x4::m42() const {
  // @@protoc_insertion_point(field_get:PhysicsTelemetry.Matrix4x4.m42)
  return _internal_m42();
}
inline void Matrix4x4::_internal_set_m42(float value) {
  
  m42_ = value;
}
inline void Matrix4x4::set_m42(float value) {
  _internal_set_m42(value);
  // @@protoc_insertion_point(field_set:PhysicsTelemetry.Matrix4x4.m42)
}

// float m43 = 15;
inline void Matrix4x4::clear_m43() {
  m43_ = 0;
}
inline float Matrix4x4::_internal_m43() const {
  return m43_;
}
inline float Matrix4x4::m43() const {
  // @@protoc_insertion_point(field_get:PhysicsTelemetry.Matrix4x4.m43)
  return _internal_m43();
}
inline void Matrix4x4::_internal_set_m43(float value) {
  
  m43_ = value;
}
inline void Matrix4x4::set_m43(float value) {
  _internal_set_m43(value);
  // @@protoc_insertion_point(field_set:PhysicsTelemetry.Matrix4x4.m43)
}

// float m44 = 16;
inline void Matrix4x4::clear_m44() {
  m44_ = 0;
}
inline float Matrix4x4::_internal_m44() const {
  return m44_;
}
inline float Matrix4x4::m44() const {
  // @@protoc_insertion_point(field_get:PhysicsTelemetry.Matrix4x4.m44)
  return _internal_m44();
}
inline void Matrix4x4::_internal_set_m44(float value) {
  
  m44_ = value;
}
inline void Matrix4x4::set_m44(float value) {
  _internal_set_m44(value);
  // @@protoc_insertion_point(field_set:PhysicsTelemetry.Matrix4x4.m44)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace PhysicsTelemetry

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_base_5ftypes_2eproto