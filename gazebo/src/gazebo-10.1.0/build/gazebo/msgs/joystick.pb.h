// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: joystick.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_joystick_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_joystick_2eproto

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
#pragma GCC system_header
#include <boost/shared_ptr.hpp>
#include <gazebo/util/system.hh>
#include "gazebo/msgs/MsgFactory.hh"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_joystick_2eproto GZ_MSGS_VISIBLE
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct GZ_MSGS_VISIBLE TableStruct_joystick_2eproto {
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
extern GZ_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_joystick_2eproto;
namespace gazebo {
namespace msgs {
class Joystick;
class JoystickDefaultTypeInternal;
GZ_MSGS_VISIBLE extern JoystickDefaultTypeInternal _Joystick_default_instance_;
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> GZ_MSGS_VISIBLE ::gazebo::msgs::Joystick* Arena::CreateMaybeMessage<::gazebo::msgs::Joystick>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace gazebo {
namespace msgs {

// ===================================================================

class GZ_MSGS_VISIBLE Joystick :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:gazebo.msgs.Joystick) */ {
 public:
  Joystick();
  virtual ~Joystick();

  Joystick(const Joystick& from);
  Joystick(Joystick&& from) noexcept
    : Joystick() {
    *this = ::std::move(from);
  }

  inline Joystick& operator=(const Joystick& from) {
    CopyFrom(from);
    return *this;
  }
  inline Joystick& operator=(Joystick&& from) noexcept {
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
  static const Joystick& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Joystick* internal_default_instance() {
    return reinterpret_cast<const Joystick*>(
               &_Joystick_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Joystick& a, Joystick& b) {
    a.Swap(&b);
  }
  inline void Swap(Joystick* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Joystick* New() const final {
    return CreateMaybeMessage<Joystick>(nullptr);
  }

  Joystick* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Joystick>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Joystick& from);
  void MergeFrom(const Joystick& from);
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
  void InternalSwap(Joystick* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "gazebo.msgs.Joystick";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_joystick_2eproto);
    return ::descriptor_table_joystick_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kButtonsFieldNumber = 3,
    kTranslationFieldNumber = 1,
    kRotationFieldNumber = 2,
  };
  // repeated int32 buttons = 3;
  int buttons_size() const;
  private:
  int _internal_buttons_size() const;
  public:
  void clear_buttons();
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_buttons(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
      _internal_buttons() const;
  void _internal_add_buttons(::PROTOBUF_NAMESPACE_ID::int32 value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
      _internal_mutable_buttons();
  public:
  ::PROTOBUF_NAMESPACE_ID::int32 buttons(int index) const;
  void set_buttons(int index, ::PROTOBUF_NAMESPACE_ID::int32 value);
  void add_buttons(::PROTOBUF_NAMESPACE_ID::int32 value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
      buttons() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
      mutable_buttons();

  // optional .gazebo.msgs.Vector3d translation = 1;
  bool has_translation() const;
  private:
  bool _internal_has_translation() const;
  public:
  void clear_translation();
  const ::gazebo::msgs::Vector3d& translation() const;
  ::gazebo::msgs::Vector3d* release_translation();
  ::gazebo::msgs::Vector3d* mutable_translation();
  void set_allocated_translation(::gazebo::msgs::Vector3d* translation);
  private:
  const ::gazebo::msgs::Vector3d& _internal_translation() const;
  ::gazebo::msgs::Vector3d* _internal_mutable_translation();
  public:

  // optional .gazebo.msgs.Vector3d rotation = 2;
  bool has_rotation() const;
  private:
  bool _internal_has_rotation() const;
  public:
  void clear_rotation();
  const ::gazebo::msgs::Vector3d& rotation() const;
  ::gazebo::msgs::Vector3d* release_rotation();
  ::gazebo::msgs::Vector3d* mutable_rotation();
  void set_allocated_rotation(::gazebo::msgs::Vector3d* rotation);
  private:
  const ::gazebo::msgs::Vector3d& _internal_rotation() const;
  ::gazebo::msgs::Vector3d* _internal_mutable_rotation();
  public:

  // @@protoc_insertion_point(class_scope:gazebo.msgs.Joystick)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 > buttons_;
  ::gazebo::msgs::Vector3d* translation_;
  ::gazebo::msgs::Vector3d* rotation_;
  friend struct ::TableStruct_joystick_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Joystick

// optional .gazebo.msgs.Vector3d translation = 1;
inline bool Joystick::_internal_has_translation() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || translation_ != nullptr);
  return value;
}
inline bool Joystick::has_translation() const {
  return _internal_has_translation();
}
inline const ::gazebo::msgs::Vector3d& Joystick::_internal_translation() const {
  const ::gazebo::msgs::Vector3d* p = translation_;
  return p != nullptr ? *p : *reinterpret_cast<const ::gazebo::msgs::Vector3d*>(
      &::gazebo::msgs::_Vector3d_default_instance_);
}
inline const ::gazebo::msgs::Vector3d& Joystick::translation() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Joystick.translation)
  return _internal_translation();
}
inline ::gazebo::msgs::Vector3d* Joystick::release_translation() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Joystick.translation)
  _has_bits_[0] &= ~0x00000001u;
  ::gazebo::msgs::Vector3d* temp = translation_;
  translation_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::Vector3d* Joystick::_internal_mutable_translation() {
  _has_bits_[0] |= 0x00000001u;
  if (translation_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::Vector3d>(GetArenaNoVirtual());
    translation_ = p;
  }
  return translation_;
}
inline ::gazebo::msgs::Vector3d* Joystick::mutable_translation() {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Joystick.translation)
  return _internal_mutable_translation();
}
inline void Joystick::set_allocated_translation(::gazebo::msgs::Vector3d* translation) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(translation_);
  }
  if (translation) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      translation = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, translation, submessage_arena);
    }
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  translation_ = translation;
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Joystick.translation)
}

// optional .gazebo.msgs.Vector3d rotation = 2;
inline bool Joystick::_internal_has_rotation() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  PROTOBUF_ASSUME(!value || rotation_ != nullptr);
  return value;
}
inline bool Joystick::has_rotation() const {
  return _internal_has_rotation();
}
inline const ::gazebo::msgs::Vector3d& Joystick::_internal_rotation() const {
  const ::gazebo::msgs::Vector3d* p = rotation_;
  return p != nullptr ? *p : *reinterpret_cast<const ::gazebo::msgs::Vector3d*>(
      &::gazebo::msgs::_Vector3d_default_instance_);
}
inline const ::gazebo::msgs::Vector3d& Joystick::rotation() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Joystick.rotation)
  return _internal_rotation();
}
inline ::gazebo::msgs::Vector3d* Joystick::release_rotation() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Joystick.rotation)
  _has_bits_[0] &= ~0x00000002u;
  ::gazebo::msgs::Vector3d* temp = rotation_;
  rotation_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::Vector3d* Joystick::_internal_mutable_rotation() {
  _has_bits_[0] |= 0x00000002u;
  if (rotation_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::Vector3d>(GetArenaNoVirtual());
    rotation_ = p;
  }
  return rotation_;
}
inline ::gazebo::msgs::Vector3d* Joystick::mutable_rotation() {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Joystick.rotation)
  return _internal_mutable_rotation();
}
inline void Joystick::set_allocated_rotation(::gazebo::msgs::Vector3d* rotation) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(rotation_);
  }
  if (rotation) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      rotation = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, rotation, submessage_arena);
    }
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  rotation_ = rotation;
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Joystick.rotation)
}

// repeated int32 buttons = 3;
inline int Joystick::_internal_buttons_size() const {
  return buttons_.size();
}
inline int Joystick::buttons_size() const {
  return _internal_buttons_size();
}
inline void Joystick::clear_buttons() {
  buttons_.Clear();
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Joystick::_internal_buttons(int index) const {
  return buttons_.Get(index);
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Joystick::buttons(int index) const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Joystick.buttons)
  return _internal_buttons(index);
}
inline void Joystick::set_buttons(int index, ::PROTOBUF_NAMESPACE_ID::int32 value) {
  buttons_.Set(index, value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Joystick.buttons)
}
inline void Joystick::_internal_add_buttons(::PROTOBUF_NAMESPACE_ID::int32 value) {
  buttons_.Add(value);
}
inline void Joystick::add_buttons(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_add_buttons(value);
  // @@protoc_insertion_point(field_add:gazebo.msgs.Joystick.buttons)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
Joystick::_internal_buttons() const {
  return buttons_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
Joystick::buttons() const {
  // @@protoc_insertion_point(field_list:gazebo.msgs.Joystick.buttons)
  return _internal_buttons();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
Joystick::_internal_mutable_buttons() {
  return &buttons_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
Joystick::mutable_buttons() {
  // @@protoc_insertion_point(field_mutable_list:gazebo.msgs.Joystick.buttons)
  return _internal_mutable_buttons();
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

typedef boost::shared_ptr<gazebo::msgs::Joystick> JoystickPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

typedef const boost::shared_ptr<gazebo::msgs::Joystick const> ConstJoystickPtr;
// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_joystick_2eproto
