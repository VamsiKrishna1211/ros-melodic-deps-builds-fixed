// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: light.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_light_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_light_2eproto

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "pose.pb.h"
#include "vector3d.pb.h"
#include "color.pb.h"
#pragma GCC system_header
#include <boost/shared_ptr.hpp>
#include <gazebo/util/system.hh>
#include "gazebo/msgs/MsgFactory.hh"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_light_2eproto GZ_MSGS_VISIBLE
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct GZ_MSGS_VISIBLE TableStruct_light_2eproto {
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
extern GZ_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_light_2eproto;
namespace gazebo {
namespace msgs {
class Light;
class LightDefaultTypeInternal;
GZ_MSGS_VISIBLE extern LightDefaultTypeInternal _Light_default_instance_;
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> GZ_MSGS_VISIBLE ::gazebo::msgs::Light* Arena::CreateMaybeMessage<::gazebo::msgs::Light>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace gazebo {
namespace msgs {

enum Light_LightType : int {
  Light_LightType_POINT = 1,
  Light_LightType_SPOT = 2,
  Light_LightType_DIRECTIONAL = 3
};
GZ_MSGS_VISIBLE bool Light_LightType_IsValid(int value);
constexpr Light_LightType Light_LightType_LightType_MIN = Light_LightType_POINT;
constexpr Light_LightType Light_LightType_LightType_MAX = Light_LightType_DIRECTIONAL;
constexpr int Light_LightType_LightType_ARRAYSIZE = Light_LightType_LightType_MAX + 1;

GZ_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Light_LightType_descriptor();
template<typename T>
inline const std::string& Light_LightType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, Light_LightType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function Light_LightType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    Light_LightType_descriptor(), enum_t_value);
}
inline bool Light_LightType_Parse(
    const std::string& name, Light_LightType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<Light_LightType>(
    Light_LightType_descriptor(), name, value);
}
// ===================================================================

class GZ_MSGS_VISIBLE Light :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:gazebo.msgs.Light) */ {
 public:
  Light();
  virtual ~Light();

  Light(const Light& from);
  Light(Light&& from) noexcept
    : Light() {
    *this = ::std::move(from);
  }

  inline Light& operator=(const Light& from) {
    CopyFrom(from);
    return *this;
  }
  inline Light& operator=(Light&& from) noexcept {
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
  static const Light& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Light* internal_default_instance() {
    return reinterpret_cast<const Light*>(
               &_Light_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Light& a, Light& b) {
    a.Swap(&b);
  }
  inline void Swap(Light* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Light* New() const final {
    return CreateMaybeMessage<Light>(nullptr);
  }

  Light* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Light>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Light& from);
  void MergeFrom(const Light& from);
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
  void InternalSwap(Light* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "gazebo.msgs.Light";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_light_2eproto);
    return ::descriptor_table_light_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef Light_LightType LightType;
  static constexpr LightType POINT =
    Light_LightType_POINT;
  static constexpr LightType SPOT =
    Light_LightType_SPOT;
  static constexpr LightType DIRECTIONAL =
    Light_LightType_DIRECTIONAL;
  static inline bool LightType_IsValid(int value) {
    return Light_LightType_IsValid(value);
  }
  static constexpr LightType LightType_MIN =
    Light_LightType_LightType_MIN;
  static constexpr LightType LightType_MAX =
    Light_LightType_LightType_MAX;
  static constexpr int LightType_ARRAYSIZE =
    Light_LightType_LightType_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  LightType_descriptor() {
    return Light_LightType_descriptor();
  }
  template<typename T>
  static inline const std::string& LightType_Name(T enum_t_value) {
    static_assert(::std::is_same<T, LightType>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function LightType_Name.");
    return Light_LightType_Name(enum_t_value);
  }
  static inline bool LightType_Parse(const std::string& name,
      LightType* value) {
    return Light_LightType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 1,
    kPoseFieldNumber = 3,
    kDiffuseFieldNumber = 4,
    kSpecularFieldNumber = 5,
    kDirectionFieldNumber = 9,
    kAttenuationConstantFieldNumber = 6,
    kAttenuationLinearFieldNumber = 7,
    kAttenuationQuadraticFieldNumber = 8,
    kRangeFieldNumber = 10,
    kCastShadowsFieldNumber = 11,
    kSpotInnerAngleFieldNumber = 12,
    kSpotOuterAngleFieldNumber = 13,
    kSpotFalloffFieldNumber = 14,
    kIdFieldNumber = 15,
    kTypeFieldNumber = 2,
  };
  // required string name = 1;
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

  // optional .gazebo.msgs.Pose pose = 3;
  bool has_pose() const;
  private:
  bool _internal_has_pose() const;
  public:
  void clear_pose();
  const ::gazebo::msgs::Pose& pose() const;
  ::gazebo::msgs::Pose* release_pose();
  ::gazebo::msgs::Pose* mutable_pose();
  void set_allocated_pose(::gazebo::msgs::Pose* pose);
  private:
  const ::gazebo::msgs::Pose& _internal_pose() const;
  ::gazebo::msgs::Pose* _internal_mutable_pose();
  public:

  // optional .gazebo.msgs.Color diffuse = 4;
  bool has_diffuse() const;
  private:
  bool _internal_has_diffuse() const;
  public:
  void clear_diffuse();
  const ::gazebo::msgs::Color& diffuse() const;
  ::gazebo::msgs::Color* release_diffuse();
  ::gazebo::msgs::Color* mutable_diffuse();
  void set_allocated_diffuse(::gazebo::msgs::Color* diffuse);
  private:
  const ::gazebo::msgs::Color& _internal_diffuse() const;
  ::gazebo::msgs::Color* _internal_mutable_diffuse();
  public:

  // optional .gazebo.msgs.Color specular = 5;
  bool has_specular() const;
  private:
  bool _internal_has_specular() const;
  public:
  void clear_specular();
  const ::gazebo::msgs::Color& specular() const;
  ::gazebo::msgs::Color* release_specular();
  ::gazebo::msgs::Color* mutable_specular();
  void set_allocated_specular(::gazebo::msgs::Color* specular);
  private:
  const ::gazebo::msgs::Color& _internal_specular() const;
  ::gazebo::msgs::Color* _internal_mutable_specular();
  public:

  // optional .gazebo.msgs.Vector3d direction = 9;
  bool has_direction() const;
  private:
  bool _internal_has_direction() const;
  public:
  void clear_direction();
  const ::gazebo::msgs::Vector3d& direction() const;
  ::gazebo::msgs::Vector3d* release_direction();
  ::gazebo::msgs::Vector3d* mutable_direction();
  void set_allocated_direction(::gazebo::msgs::Vector3d* direction);
  private:
  const ::gazebo::msgs::Vector3d& _internal_direction() const;
  ::gazebo::msgs::Vector3d* _internal_mutable_direction();
  public:

  // optional float attenuation_constant = 6;
  bool has_attenuation_constant() const;
  private:
  bool _internal_has_attenuation_constant() const;
  public:
  void clear_attenuation_constant();
  float attenuation_constant() const;
  void set_attenuation_constant(float value);
  private:
  float _internal_attenuation_constant() const;
  void _internal_set_attenuation_constant(float value);
  public:

  // optional float attenuation_linear = 7;
  bool has_attenuation_linear() const;
  private:
  bool _internal_has_attenuation_linear() const;
  public:
  void clear_attenuation_linear();
  float attenuation_linear() const;
  void set_attenuation_linear(float value);
  private:
  float _internal_attenuation_linear() const;
  void _internal_set_attenuation_linear(float value);
  public:

  // optional float attenuation_quadratic = 8;
  bool has_attenuation_quadratic() const;
  private:
  bool _internal_has_attenuation_quadratic() const;
  public:
  void clear_attenuation_quadratic();
  float attenuation_quadratic() const;
  void set_attenuation_quadratic(float value);
  private:
  float _internal_attenuation_quadratic() const;
  void _internal_set_attenuation_quadratic(float value);
  public:

  // optional float range = 10;
  bool has_range() const;
  private:
  bool _internal_has_range() const;
  public:
  void clear_range();
  float range() const;
  void set_range(float value);
  private:
  float _internal_range() const;
  void _internal_set_range(float value);
  public:

  // optional bool cast_shadows = 11;
  bool has_cast_shadows() const;
  private:
  bool _internal_has_cast_shadows() const;
  public:
  void clear_cast_shadows();
  bool cast_shadows() const;
  void set_cast_shadows(bool value);
  private:
  bool _internal_cast_shadows() const;
  void _internal_set_cast_shadows(bool value);
  public:

  // optional float spot_inner_angle = 12;
  bool has_spot_inner_angle() const;
  private:
  bool _internal_has_spot_inner_angle() const;
  public:
  void clear_spot_inner_angle();
  float spot_inner_angle() const;
  void set_spot_inner_angle(float value);
  private:
  float _internal_spot_inner_angle() const;
  void _internal_set_spot_inner_angle(float value);
  public:

  // optional float spot_outer_angle = 13;
  bool has_spot_outer_angle() const;
  private:
  bool _internal_has_spot_outer_angle() const;
  public:
  void clear_spot_outer_angle();
  float spot_outer_angle() const;
  void set_spot_outer_angle(float value);
  private:
  float _internal_spot_outer_angle() const;
  void _internal_set_spot_outer_angle(float value);
  public:

  // optional float spot_falloff = 14;
  bool has_spot_falloff() const;
  private:
  bool _internal_has_spot_falloff() const;
  public:
  void clear_spot_falloff();
  float spot_falloff() const;
  void set_spot_falloff(float value);
  private:
  float _internal_spot_falloff() const;
  void _internal_set_spot_falloff(float value);
  public:

  // optional uint32 id = 15;
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

  // optional .gazebo.msgs.Light.LightType type = 2;
  bool has_type() const;
  private:
  bool _internal_has_type() const;
  public:
  void clear_type();
  ::gazebo::msgs::Light_LightType type() const;
  void set_type(::gazebo::msgs::Light_LightType value);
  private:
  ::gazebo::msgs::Light_LightType _internal_type() const;
  void _internal_set_type(::gazebo::msgs::Light_LightType value);
  public:

  // @@protoc_insertion_point(class_scope:gazebo.msgs.Light)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::gazebo::msgs::Pose* pose_;
  ::gazebo::msgs::Color* diffuse_;
  ::gazebo::msgs::Color* specular_;
  ::gazebo::msgs::Vector3d* direction_;
  float attenuation_constant_;
  float attenuation_linear_;
  float attenuation_quadratic_;
  float range_;
  bool cast_shadows_;
  float spot_inner_angle_;
  float spot_outer_angle_;
  float spot_falloff_;
  ::PROTOBUF_NAMESPACE_ID::uint32 id_;
  int type_;
  friend struct ::TableStruct_light_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Light

// required string name = 1;
inline bool Light::_internal_has_name() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool Light::has_name() const {
  return _internal_has_name();
}
inline void Light::clear_name() {
  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& Light::name() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Light.name)
  return _internal_name();
}
inline void Light::set_name(const std::string& value) {
  _internal_set_name(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Light.name)
}
inline std::string* Light::mutable_name() {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Light.name)
  return _internal_mutable_name();
}
inline const std::string& Light::_internal_name() const {
  return name_.GetNoArena();
}
inline void Light::_internal_set_name(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Light::set_name(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gazebo.msgs.Light.name)
}
inline void Light::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gazebo.msgs.Light.name)
}
inline void Light::set_name(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gazebo.msgs.Light.name)
}
inline std::string* Light::_internal_mutable_name() {
  _has_bits_[0] |= 0x00000001u;
  return name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Light::release_name() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Light.name)
  if (!_internal_has_name()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return name_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Light::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Light.name)
}

// optional .gazebo.msgs.Light.LightType type = 2;
inline bool Light::_internal_has_type() const {
  bool value = (_has_bits_[0] & 0x00004000u) != 0;
  return value;
}
inline bool Light::has_type() const {
  return _internal_has_type();
}
inline void Light::clear_type() {
  type_ = 1;
  _has_bits_[0] &= ~0x00004000u;
}
inline ::gazebo::msgs::Light_LightType Light::_internal_type() const {
  return static_cast< ::gazebo::msgs::Light_LightType >(type_);
}
inline ::gazebo::msgs::Light_LightType Light::type() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Light.type)
  return _internal_type();
}
inline void Light::_internal_set_type(::gazebo::msgs::Light_LightType value) {
  assert(::gazebo::msgs::Light_LightType_IsValid(value));
  _has_bits_[0] |= 0x00004000u;
  type_ = value;
}
inline void Light::set_type(::gazebo::msgs::Light_LightType value) {
  _internal_set_type(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Light.type)
}

// optional .gazebo.msgs.Pose pose = 3;
inline bool Light::_internal_has_pose() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  PROTOBUF_ASSUME(!value || pose_ != nullptr);
  return value;
}
inline bool Light::has_pose() const {
  return _internal_has_pose();
}
inline const ::gazebo::msgs::Pose& Light::_internal_pose() const {
  const ::gazebo::msgs::Pose* p = pose_;
  return p != nullptr ? *p : *reinterpret_cast<const ::gazebo::msgs::Pose*>(
      &::gazebo::msgs::_Pose_default_instance_);
}
inline const ::gazebo::msgs::Pose& Light::pose() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Light.pose)
  return _internal_pose();
}
inline ::gazebo::msgs::Pose* Light::release_pose() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Light.pose)
  _has_bits_[0] &= ~0x00000002u;
  ::gazebo::msgs::Pose* temp = pose_;
  pose_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::Pose* Light::_internal_mutable_pose() {
  _has_bits_[0] |= 0x00000002u;
  if (pose_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::Pose>(GetArenaNoVirtual());
    pose_ = p;
  }
  return pose_;
}
inline ::gazebo::msgs::Pose* Light::mutable_pose() {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Light.pose)
  return _internal_mutable_pose();
}
inline void Light::set_allocated_pose(::gazebo::msgs::Pose* pose) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(pose_);
  }
  if (pose) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      pose = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, pose, submessage_arena);
    }
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  pose_ = pose;
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Light.pose)
}

// optional .gazebo.msgs.Color diffuse = 4;
inline bool Light::_internal_has_diffuse() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  PROTOBUF_ASSUME(!value || diffuse_ != nullptr);
  return value;
}
inline bool Light::has_diffuse() const {
  return _internal_has_diffuse();
}
inline const ::gazebo::msgs::Color& Light::_internal_diffuse() const {
  const ::gazebo::msgs::Color* p = diffuse_;
  return p != nullptr ? *p : *reinterpret_cast<const ::gazebo::msgs::Color*>(
      &::gazebo::msgs::_Color_default_instance_);
}
inline const ::gazebo::msgs::Color& Light::diffuse() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Light.diffuse)
  return _internal_diffuse();
}
inline ::gazebo::msgs::Color* Light::release_diffuse() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Light.diffuse)
  _has_bits_[0] &= ~0x00000004u;
  ::gazebo::msgs::Color* temp = diffuse_;
  diffuse_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::Color* Light::_internal_mutable_diffuse() {
  _has_bits_[0] |= 0x00000004u;
  if (diffuse_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::Color>(GetArenaNoVirtual());
    diffuse_ = p;
  }
  return diffuse_;
}
inline ::gazebo::msgs::Color* Light::mutable_diffuse() {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Light.diffuse)
  return _internal_mutable_diffuse();
}
inline void Light::set_allocated_diffuse(::gazebo::msgs::Color* diffuse) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(diffuse_);
  }
  if (diffuse) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      diffuse = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, diffuse, submessage_arena);
    }
    _has_bits_[0] |= 0x00000004u;
  } else {
    _has_bits_[0] &= ~0x00000004u;
  }
  diffuse_ = diffuse;
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Light.diffuse)
}

// optional .gazebo.msgs.Color specular = 5;
inline bool Light::_internal_has_specular() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  PROTOBUF_ASSUME(!value || specular_ != nullptr);
  return value;
}
inline bool Light::has_specular() const {
  return _internal_has_specular();
}
inline const ::gazebo::msgs::Color& Light::_internal_specular() const {
  const ::gazebo::msgs::Color* p = specular_;
  return p != nullptr ? *p : *reinterpret_cast<const ::gazebo::msgs::Color*>(
      &::gazebo::msgs::_Color_default_instance_);
}
inline const ::gazebo::msgs::Color& Light::specular() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Light.specular)
  return _internal_specular();
}
inline ::gazebo::msgs::Color* Light::release_specular() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Light.specular)
  _has_bits_[0] &= ~0x00000008u;
  ::gazebo::msgs::Color* temp = specular_;
  specular_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::Color* Light::_internal_mutable_specular() {
  _has_bits_[0] |= 0x00000008u;
  if (specular_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::Color>(GetArenaNoVirtual());
    specular_ = p;
  }
  return specular_;
}
inline ::gazebo::msgs::Color* Light::mutable_specular() {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Light.specular)
  return _internal_mutable_specular();
}
inline void Light::set_allocated_specular(::gazebo::msgs::Color* specular) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(specular_);
  }
  if (specular) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      specular = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, specular, submessage_arena);
    }
    _has_bits_[0] |= 0x00000008u;
  } else {
    _has_bits_[0] &= ~0x00000008u;
  }
  specular_ = specular;
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Light.specular)
}

// optional float attenuation_constant = 6;
inline bool Light::_internal_has_attenuation_constant() const {
  bool value = (_has_bits_[0] & 0x00000020u) != 0;
  return value;
}
inline bool Light::has_attenuation_constant() const {
  return _internal_has_attenuation_constant();
}
inline void Light::clear_attenuation_constant() {
  attenuation_constant_ = 0;
  _has_bits_[0] &= ~0x00000020u;
}
inline float Light::_internal_attenuation_constant() const {
  return attenuation_constant_;
}
inline float Light::attenuation_constant() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Light.attenuation_constant)
  return _internal_attenuation_constant();
}
inline void Light::_internal_set_attenuation_constant(float value) {
  _has_bits_[0] |= 0x00000020u;
  attenuation_constant_ = value;
}
inline void Light::set_attenuation_constant(float value) {
  _internal_set_attenuation_constant(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Light.attenuation_constant)
}

// optional float attenuation_linear = 7;
inline bool Light::_internal_has_attenuation_linear() const {
  bool value = (_has_bits_[0] & 0x00000040u) != 0;
  return value;
}
inline bool Light::has_attenuation_linear() const {
  return _internal_has_attenuation_linear();
}
inline void Light::clear_attenuation_linear() {
  attenuation_linear_ = 0;
  _has_bits_[0] &= ~0x00000040u;
}
inline float Light::_internal_attenuation_linear() const {
  return attenuation_linear_;
}
inline float Light::attenuation_linear() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Light.attenuation_linear)
  return _internal_attenuation_linear();
}
inline void Light::_internal_set_attenuation_linear(float value) {
  _has_bits_[0] |= 0x00000040u;
  attenuation_linear_ = value;
}
inline void Light::set_attenuation_linear(float value) {
  _internal_set_attenuation_linear(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Light.attenuation_linear)
}

// optional float attenuation_quadratic = 8;
inline bool Light::_internal_has_attenuation_quadratic() const {
  bool value = (_has_bits_[0] & 0x00000080u) != 0;
  return value;
}
inline bool Light::has_attenuation_quadratic() const {
  return _internal_has_attenuation_quadratic();
}
inline void Light::clear_attenuation_quadratic() {
  attenuation_quadratic_ = 0;
  _has_bits_[0] &= ~0x00000080u;
}
inline float Light::_internal_attenuation_quadratic() const {
  return attenuation_quadratic_;
}
inline float Light::attenuation_quadratic() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Light.attenuation_quadratic)
  return _internal_attenuation_quadratic();
}
inline void Light::_internal_set_attenuation_quadratic(float value) {
  _has_bits_[0] |= 0x00000080u;
  attenuation_quadratic_ = value;
}
inline void Light::set_attenuation_quadratic(float value) {
  _internal_set_attenuation_quadratic(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Light.attenuation_quadratic)
}

// optional .gazebo.msgs.Vector3d direction = 9;
inline bool Light::_internal_has_direction() const {
  bool value = (_has_bits_[0] & 0x00000010u) != 0;
  PROTOBUF_ASSUME(!value || direction_ != nullptr);
  return value;
}
inline bool Light::has_direction() const {
  return _internal_has_direction();
}
inline const ::gazebo::msgs::Vector3d& Light::_internal_direction() const {
  const ::gazebo::msgs::Vector3d* p = direction_;
  return p != nullptr ? *p : *reinterpret_cast<const ::gazebo::msgs::Vector3d*>(
      &::gazebo::msgs::_Vector3d_default_instance_);
}
inline const ::gazebo::msgs::Vector3d& Light::direction() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Light.direction)
  return _internal_direction();
}
inline ::gazebo::msgs::Vector3d* Light::release_direction() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Light.direction)
  _has_bits_[0] &= ~0x00000010u;
  ::gazebo::msgs::Vector3d* temp = direction_;
  direction_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::Vector3d* Light::_internal_mutable_direction() {
  _has_bits_[0] |= 0x00000010u;
  if (direction_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::Vector3d>(GetArenaNoVirtual());
    direction_ = p;
  }
  return direction_;
}
inline ::gazebo::msgs::Vector3d* Light::mutable_direction() {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Light.direction)
  return _internal_mutable_direction();
}
inline void Light::set_allocated_direction(::gazebo::msgs::Vector3d* direction) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(direction_);
  }
  if (direction) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      direction = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, direction, submessage_arena);
    }
    _has_bits_[0] |= 0x00000010u;
  } else {
    _has_bits_[0] &= ~0x00000010u;
  }
  direction_ = direction;
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Light.direction)
}

// optional float range = 10;
inline bool Light::_internal_has_range() const {
  bool value = (_has_bits_[0] & 0x00000100u) != 0;
  return value;
}
inline bool Light::has_range() const {
  return _internal_has_range();
}
inline void Light::clear_range() {
  range_ = 0;
  _has_bits_[0] &= ~0x00000100u;
}
inline float Light::_internal_range() const {
  return range_;
}
inline float Light::range() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Light.range)
  return _internal_range();
}
inline void Light::_internal_set_range(float value) {
  _has_bits_[0] |= 0x00000100u;
  range_ = value;
}
inline void Light::set_range(float value) {
  _internal_set_range(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Light.range)
}

// optional bool cast_shadows = 11;
inline bool Light::_internal_has_cast_shadows() const {
  bool value = (_has_bits_[0] & 0x00000200u) != 0;
  return value;
}
inline bool Light::has_cast_shadows() const {
  return _internal_has_cast_shadows();
}
inline void Light::clear_cast_shadows() {
  cast_shadows_ = false;
  _has_bits_[0] &= ~0x00000200u;
}
inline bool Light::_internal_cast_shadows() const {
  return cast_shadows_;
}
inline bool Light::cast_shadows() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Light.cast_shadows)
  return _internal_cast_shadows();
}
inline void Light::_internal_set_cast_shadows(bool value) {
  _has_bits_[0] |= 0x00000200u;
  cast_shadows_ = value;
}
inline void Light::set_cast_shadows(bool value) {
  _internal_set_cast_shadows(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Light.cast_shadows)
}

// optional float spot_inner_angle = 12;
inline bool Light::_internal_has_spot_inner_angle() const {
  bool value = (_has_bits_[0] & 0x00000400u) != 0;
  return value;
}
inline bool Light::has_spot_inner_angle() const {
  return _internal_has_spot_inner_angle();
}
inline void Light::clear_spot_inner_angle() {
  spot_inner_angle_ = 0;
  _has_bits_[0] &= ~0x00000400u;
}
inline float Light::_internal_spot_inner_angle() const {
  return spot_inner_angle_;
}
inline float Light::spot_inner_angle() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Light.spot_inner_angle)
  return _internal_spot_inner_angle();
}
inline void Light::_internal_set_spot_inner_angle(float value) {
  _has_bits_[0] |= 0x00000400u;
  spot_inner_angle_ = value;
}
inline void Light::set_spot_inner_angle(float value) {
  _internal_set_spot_inner_angle(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Light.spot_inner_angle)
}

// optional float spot_outer_angle = 13;
inline bool Light::_internal_has_spot_outer_angle() const {
  bool value = (_has_bits_[0] & 0x00000800u) != 0;
  return value;
}
inline bool Light::has_spot_outer_angle() const {
  return _internal_has_spot_outer_angle();
}
inline void Light::clear_spot_outer_angle() {
  spot_outer_angle_ = 0;
  _has_bits_[0] &= ~0x00000800u;
}
inline float Light::_internal_spot_outer_angle() const {
  return spot_outer_angle_;
}
inline float Light::spot_outer_angle() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Light.spot_outer_angle)
  return _internal_spot_outer_angle();
}
inline void Light::_internal_set_spot_outer_angle(float value) {
  _has_bits_[0] |= 0x00000800u;
  spot_outer_angle_ = value;
}
inline void Light::set_spot_outer_angle(float value) {
  _internal_set_spot_outer_angle(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Light.spot_outer_angle)
}

// optional float spot_falloff = 14;
inline bool Light::_internal_has_spot_falloff() const {
  bool value = (_has_bits_[0] & 0x00001000u) != 0;
  return value;
}
inline bool Light::has_spot_falloff() const {
  return _internal_has_spot_falloff();
}
inline void Light::clear_spot_falloff() {
  spot_falloff_ = 0;
  _has_bits_[0] &= ~0x00001000u;
}
inline float Light::_internal_spot_falloff() const {
  return spot_falloff_;
}
inline float Light::spot_falloff() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Light.spot_falloff)
  return _internal_spot_falloff();
}
inline void Light::_internal_set_spot_falloff(float value) {
  _has_bits_[0] |= 0x00001000u;
  spot_falloff_ = value;
}
inline void Light::set_spot_falloff(float value) {
  _internal_set_spot_falloff(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Light.spot_falloff)
}

// optional uint32 id = 15;
inline bool Light::_internal_has_id() const {
  bool value = (_has_bits_[0] & 0x00002000u) != 0;
  return value;
}
inline bool Light::has_id() const {
  return _internal_has_id();
}
inline void Light::clear_id() {
  id_ = 0u;
  _has_bits_[0] &= ~0x00002000u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Light::_internal_id() const {
  return id_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Light::id() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Light.id)
  return _internal_id();
}
inline void Light::_internal_set_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00002000u;
  id_ = value;
}
inline void Light::set_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Light.id)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

typedef boost::shared_ptr<gazebo::msgs::Light> LightPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::gazebo::msgs::Light_LightType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::gazebo::msgs::Light_LightType>() {
  return ::gazebo::msgs::Light_LightType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

typedef const boost::shared_ptr<gazebo::msgs::Light const> ConstLightPtr;
// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_light_2eproto
