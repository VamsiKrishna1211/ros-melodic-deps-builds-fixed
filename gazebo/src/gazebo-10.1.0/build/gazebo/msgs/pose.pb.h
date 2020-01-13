// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: pose.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_pose_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_pose_2eproto

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
#include "vector3d.pb.h"
#include "quaternion.pb.h"
#pragma GCC system_header
#include <boost/shared_ptr.hpp>
#include <gazebo/util/system.hh>
#include "gazebo/msgs/MsgFactory.hh"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_pose_2eproto GZ_MSGS_VISIBLE
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct GZ_MSGS_VISIBLE TableStruct_pose_2eproto {
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
extern GZ_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_pose_2eproto;
namespace gazebo {
namespace msgs {
class Pose;
class PoseDefaultTypeInternal;
GZ_MSGS_VISIBLE extern PoseDefaultTypeInternal _Pose_default_instance_;
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> GZ_MSGS_VISIBLE ::gazebo::msgs::Pose* Arena::CreateMaybeMessage<::gazebo::msgs::Pose>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace gazebo {
namespace msgs {

// ===================================================================

class GZ_MSGS_VISIBLE Pose :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:gazebo.msgs.Pose) */ {
 public:
  Pose();
  virtual ~Pose();

  Pose(const Pose& from);
  Pose(Pose&& from) noexcept
    : Pose() {
    *this = ::std::move(from);
  }

  inline Pose& operator=(const Pose& from) {
    CopyFrom(from);
    return *this;
  }
  inline Pose& operator=(Pose&& from) noexcept {
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
  static const Pose& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Pose* internal_default_instance() {
    return reinterpret_cast<const Pose*>(
               &_Pose_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Pose& a, Pose& b) {
    a.Swap(&b);
  }
  inline void Swap(Pose* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Pose* New() const final {
    return CreateMaybeMessage<Pose>(nullptr);
  }

  Pose* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Pose>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Pose& from);
  void MergeFrom(const Pose& from);
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
  void InternalSwap(Pose* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "gazebo.msgs.Pose";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_pose_2eproto);
    return ::descriptor_table_pose_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 1,
    kPositionFieldNumber = 3,
    kOrientationFieldNumber = 4,
    kIdFieldNumber = 2,
  };
  // optional string name = 1;
  bool has_name() const;
  private:
  bool _internal_has_name() const;
  public:
  void clear_name();
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // required .gazebo.msgs.Vector3d position = 3;
  bool has_position() const;
  private:
  bool _internal_has_position() const;
  public:
  void clear_position();
  const ::gazebo::msgs::Vector3d& position() const;
  ::gazebo::msgs::Vector3d* release_position();
  ::gazebo::msgs::Vector3d* mutable_position();
  void set_allocated_position(::gazebo::msgs::Vector3d* position);
  private:
  const ::gazebo::msgs::Vector3d& _internal_position() const;
  ::gazebo::msgs::Vector3d* _internal_mutable_position();
  public:

  // required .gazebo.msgs.Quaternion orientation = 4;
  bool has_orientation() const;
  private:
  bool _internal_has_orientation() const;
  public:
  void clear_orientation();
  const ::gazebo::msgs::Quaternion& orientation() const;
  ::gazebo::msgs::Quaternion* release_orientation();
  ::gazebo::msgs::Quaternion* mutable_orientation();
  void set_allocated_orientation(::gazebo::msgs::Quaternion* orientation);
  private:
  const ::gazebo::msgs::Quaternion& _internal_orientation() const;
  ::gazebo::msgs::Quaternion* _internal_mutable_orientation();
  public:

  // optional uint32 id = 2;
  bool has_id() const;
  private:
  bool _internal_has_id() const;
  public:
  void clear_id();
  ::PROTOBUF_NAMESPACE_ID::uint32 id() const;
  void set_id(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_id() const;
  void _internal_set_id(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // @@protoc_insertion_point(class_scope:gazebo.msgs.Pose)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::gazebo::msgs::Vector3d* position_;
  ::gazebo::msgs::Quaternion* orientation_;
  ::PROTOBUF_NAMESPACE_ID::uint32 id_;
  friend struct ::TableStruct_pose_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Pose

// optional string name = 1;
inline bool Pose::_internal_has_name() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool Pose::has_name() const {
  return _internal_has_name();
}
inline void Pose::clear_name() {
  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& Pose::name() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Pose.name)
  return _internal_name();
}
inline void Pose::set_name(const std::string& value) {
  _internal_set_name(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Pose.name)
}
inline std::string* Pose::mutable_name() {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Pose.name)
  return _internal_mutable_name();
}
inline const std::string& Pose::_internal_name() const {
  return name_.GetNoArena();
}
inline void Pose::_internal_set_name(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Pose::set_name(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gazebo.msgs.Pose.name)
}
inline void Pose::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gazebo.msgs.Pose.name)
}
inline void Pose::set_name(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gazebo.msgs.Pose.name)
}
inline std::string* Pose::_internal_mutable_name() {
  _has_bits_[0] |= 0x00000001u;
  return name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Pose::release_name() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Pose.name)
  if (!_internal_has_name()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return name_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Pose::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Pose.name)
}

// optional uint32 id = 2;
inline bool Pose::_internal_has_id() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool Pose::has_id() const {
  return _internal_has_id();
}
inline void Pose::clear_id() {
  id_ = 0u;
  _has_bits_[0] &= ~0x00000008u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Pose::_internal_id() const {
  return id_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Pose::id() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Pose.id)
  return _internal_id();
}
inline void Pose::_internal_set_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000008u;
  id_ = value;
}
inline void Pose::set_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Pose.id)
}

// required .gazebo.msgs.Vector3d position = 3;
inline bool Pose::_internal_has_position() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  PROTOBUF_ASSUME(!value || position_ != nullptr);
  return value;
}
inline bool Pose::has_position() const {
  return _internal_has_position();
}
inline const ::gazebo::msgs::Vector3d& Pose::_internal_position() const {
  const ::gazebo::msgs::Vector3d* p = position_;
  return p != nullptr ? *p : *reinterpret_cast<const ::gazebo::msgs::Vector3d*>(
      &::gazebo::msgs::_Vector3d_default_instance_);
}
inline const ::gazebo::msgs::Vector3d& Pose::position() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Pose.position)
  return _internal_position();
}
inline ::gazebo::msgs::Vector3d* Pose::release_position() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Pose.position)
  _has_bits_[0] &= ~0x00000002u;
  ::gazebo::msgs::Vector3d* temp = position_;
  position_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::Vector3d* Pose::_internal_mutable_position() {
  _has_bits_[0] |= 0x00000002u;
  if (position_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::Vector3d>(GetArenaNoVirtual());
    position_ = p;
  }
  return position_;
}
inline ::gazebo::msgs::Vector3d* Pose::mutable_position() {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Pose.position)
  return _internal_mutable_position();
}
inline void Pose::set_allocated_position(::gazebo::msgs::Vector3d* position) {
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
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  position_ = position;
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Pose.position)
}

// required .gazebo.msgs.Quaternion orientation = 4;
inline bool Pose::_internal_has_orientation() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  PROTOBUF_ASSUME(!value || orientation_ != nullptr);
  return value;
}
inline bool Pose::has_orientation() const {
  return _internal_has_orientation();
}
inline const ::gazebo::msgs::Quaternion& Pose::_internal_orientation() const {
  const ::gazebo::msgs::Quaternion* p = orientation_;
  return p != nullptr ? *p : *reinterpret_cast<const ::gazebo::msgs::Quaternion*>(
      &::gazebo::msgs::_Quaternion_default_instance_);
}
inline const ::gazebo::msgs::Quaternion& Pose::orientation() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Pose.orientation)
  return _internal_orientation();
}
inline ::gazebo::msgs::Quaternion* Pose::release_orientation() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Pose.orientation)
  _has_bits_[0] &= ~0x00000004u;
  ::gazebo::msgs::Quaternion* temp = orientation_;
  orientation_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::Quaternion* Pose::_internal_mutable_orientation() {
  _has_bits_[0] |= 0x00000004u;
  if (orientation_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::Quaternion>(GetArenaNoVirtual());
    orientation_ = p;
  }
  return orientation_;
}
inline ::gazebo::msgs::Quaternion* Pose::mutable_orientation() {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Pose.orientation)
  return _internal_mutable_orientation();
}
inline void Pose::set_allocated_orientation(::gazebo::msgs::Quaternion* orientation) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(orientation_);
  }
  if (orientation) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      orientation = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, orientation, submessage_arena);
    }
    _has_bits_[0] |= 0x00000004u;
  } else {
    _has_bits_[0] &= ~0x00000004u;
  }
  orientation_ = orientation;
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Pose.orientation)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

typedef boost::shared_ptr<gazebo::msgs::Pose> PosePtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

typedef const boost::shared_ptr<gazebo::msgs::Pose const> ConstPosePtr;
// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_pose_2eproto