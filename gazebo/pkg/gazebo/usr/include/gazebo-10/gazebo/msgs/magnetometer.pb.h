// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: magnetometer.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_magnetometer_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_magnetometer_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3011000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3011001 < PROTOBUF_MIN_PROTOC_VERSION
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
#include "time.pb.h"
#include "vector3d.pb.h"
#pragma GCC system_header
#include <boost/shared_ptr.hpp>
#include <gazebo/util/system.hh>
#include "gazebo/msgs/MsgFactory.hh"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_magnetometer_2eproto GZ_MSGS_VISIBLE
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct GZ_MSGS_VISIBLE TableStruct_magnetometer_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern GZ_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_magnetometer_2eproto;
namespace gazebo {
namespace msgs {
class Magnetometer;
class MagnetometerDefaultTypeInternal;
GZ_MSGS_VISIBLE extern MagnetometerDefaultTypeInternal _Magnetometer_default_instance_;
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> GZ_MSGS_VISIBLE ::gazebo::msgs::Magnetometer* Arena::CreateMaybeMessage<::gazebo::msgs::Magnetometer>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace gazebo {
namespace msgs {

// ===================================================================

class GZ_MSGS_VISIBLE Magnetometer :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:gazebo.msgs.Magnetometer) */ {
 public:
  Magnetometer();
  virtual ~Magnetometer();

  Magnetometer(const Magnetometer& from);
  Magnetometer(Magnetometer&& from) noexcept
    : Magnetometer() {
    *this = ::std::move(from);
  }

  inline Magnetometer& operator=(const Magnetometer& from) {
    CopyFrom(from);
    return *this;
  }
  inline Magnetometer& operator=(Magnetometer&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
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
  static const Magnetometer& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Magnetometer* internal_default_instance() {
    return reinterpret_cast<const Magnetometer*>(
               &_Magnetometer_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Magnetometer& a, Magnetometer& b) {
    a.Swap(&b);
  }
  inline void Swap(Magnetometer* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Magnetometer* New() const final {
    return CreateMaybeMessage<Magnetometer>(nullptr);
  }

  Magnetometer* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Magnetometer>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Magnetometer& from);
  void MergeFrom(const Magnetometer& from);
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
  void InternalSwap(Magnetometer* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "gazebo.msgs.Magnetometer";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_magnetometer_2eproto);
    return ::descriptor_table_magnetometer_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTimeFieldNumber = 1,
    kFieldTeslaFieldNumber = 2,
  };
  // required .gazebo.msgs.Time time = 1;
  bool has_time() const;
  private:
  bool _internal_has_time() const;
  public:
  void clear_time();
  const ::gazebo::msgs::Time& time() const;
  ::gazebo::msgs::Time* release_time();
  ::gazebo::msgs::Time* mutable_time();
  void set_allocated_time(::gazebo::msgs::Time* time);
  private:
  const ::gazebo::msgs::Time& _internal_time() const;
  ::gazebo::msgs::Time* _internal_mutable_time();
  public:

  // required .gazebo.msgs.Vector3d field_tesla = 2;
  bool has_field_tesla() const;
  private:
  bool _internal_has_field_tesla() const;
  public:
  void clear_field_tesla();
  const ::gazebo::msgs::Vector3d& field_tesla() const;
  ::gazebo::msgs::Vector3d* release_field_tesla();
  ::gazebo::msgs::Vector3d* mutable_field_tesla();
  void set_allocated_field_tesla(::gazebo::msgs::Vector3d* field_tesla);
  private:
  const ::gazebo::msgs::Vector3d& _internal_field_tesla() const;
  ::gazebo::msgs::Vector3d* _internal_mutable_field_tesla();
  public:

  // @@protoc_insertion_point(class_scope:gazebo.msgs.Magnetometer)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::gazebo::msgs::Time* time_;
  ::gazebo::msgs::Vector3d* field_tesla_;
  friend struct ::TableStruct_magnetometer_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Magnetometer

// required .gazebo.msgs.Time time = 1;
inline bool Magnetometer::_internal_has_time() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || time_ != nullptr);
  return value;
}
inline bool Magnetometer::has_time() const {
  return _internal_has_time();
}
inline const ::gazebo::msgs::Time& Magnetometer::_internal_time() const {
  const ::gazebo::msgs::Time* p = time_;
  return p != nullptr ? *p : *reinterpret_cast<const ::gazebo::msgs::Time*>(
      &::gazebo::msgs::_Time_default_instance_);
}
inline const ::gazebo::msgs::Time& Magnetometer::time() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Magnetometer.time)
  return _internal_time();
}
inline ::gazebo::msgs::Time* Magnetometer::release_time() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Magnetometer.time)
  _has_bits_[0] &= ~0x00000001u;
  ::gazebo::msgs::Time* temp = time_;
  time_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::Time* Magnetometer::_internal_mutable_time() {
  _has_bits_[0] |= 0x00000001u;
  if (time_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::Time>(GetArenaNoVirtual());
    time_ = p;
  }
  return time_;
}
inline ::gazebo::msgs::Time* Magnetometer::mutable_time() {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Magnetometer.time)
  return _internal_mutable_time();
}
inline void Magnetometer::set_allocated_time(::gazebo::msgs::Time* time) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(time_);
  }
  if (time) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      time = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, time, submessage_arena);
    }
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  time_ = time;
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Magnetometer.time)
}

// required .gazebo.msgs.Vector3d field_tesla = 2;
inline bool Magnetometer::_internal_has_field_tesla() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  PROTOBUF_ASSUME(!value || field_tesla_ != nullptr);
  return value;
}
inline bool Magnetometer::has_field_tesla() const {
  return _internal_has_field_tesla();
}
inline const ::gazebo::msgs::Vector3d& Magnetometer::_internal_field_tesla() const {
  const ::gazebo::msgs::Vector3d* p = field_tesla_;
  return p != nullptr ? *p : *reinterpret_cast<const ::gazebo::msgs::Vector3d*>(
      &::gazebo::msgs::_Vector3d_default_instance_);
}
inline const ::gazebo::msgs::Vector3d& Magnetometer::field_tesla() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Magnetometer.field_tesla)
  return _internal_field_tesla();
}
inline ::gazebo::msgs::Vector3d* Magnetometer::release_field_tesla() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Magnetometer.field_tesla)
  _has_bits_[0] &= ~0x00000002u;
  ::gazebo::msgs::Vector3d* temp = field_tesla_;
  field_tesla_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::Vector3d* Magnetometer::_internal_mutable_field_tesla() {
  _has_bits_[0] |= 0x00000002u;
  if (field_tesla_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::Vector3d>(GetArenaNoVirtual());
    field_tesla_ = p;
  }
  return field_tesla_;
}
inline ::gazebo::msgs::Vector3d* Magnetometer::mutable_field_tesla() {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Magnetometer.field_tesla)
  return _internal_mutable_field_tesla();
}
inline void Magnetometer::set_allocated_field_tesla(::gazebo::msgs::Vector3d* field_tesla) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(field_tesla_);
  }
  if (field_tesla) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      field_tesla = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, field_tesla, submessage_arena);
    }
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  field_tesla_ = field_tesla;
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Magnetometer.field_tesla)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

typedef boost::shared_ptr<gazebo::msgs::Magnetometer> MagnetometerPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

typedef const boost::shared_ptr<gazebo::msgs::Magnetometer const> ConstMagnetometerPtr;
// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_magnetometer_2eproto
