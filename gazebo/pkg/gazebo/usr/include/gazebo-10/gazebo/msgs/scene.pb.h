// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: scene.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_scene_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_scene_2eproto

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
#include "color.pb.h"
#include "fog.pb.h"
#include "sky.pb.h"
#include "light.pb.h"
#include "joint.pb.h"
#include "model.pb.h"
#pragma GCC system_header
#include <boost/shared_ptr.hpp>
#include <gazebo/util/system.hh>
#include "gazebo/msgs/MsgFactory.hh"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_scene_2eproto GZ_MSGS_VISIBLE
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct GZ_MSGS_VISIBLE TableStruct_scene_2eproto {
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
extern GZ_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_scene_2eproto;
namespace gazebo {
namespace msgs {
class Scene;
class SceneDefaultTypeInternal;
GZ_MSGS_VISIBLE extern SceneDefaultTypeInternal _Scene_default_instance_;
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> GZ_MSGS_VISIBLE ::gazebo::msgs::Scene* Arena::CreateMaybeMessage<::gazebo::msgs::Scene>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace gazebo {
namespace msgs {

// ===================================================================

class GZ_MSGS_VISIBLE Scene :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:gazebo.msgs.Scene) */ {
 public:
  Scene();
  virtual ~Scene();

  Scene(const Scene& from);
  Scene(Scene&& from) noexcept
    : Scene() {
    *this = ::std::move(from);
  }

  inline Scene& operator=(const Scene& from) {
    CopyFrom(from);
    return *this;
  }
  inline Scene& operator=(Scene&& from) noexcept {
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
  static const Scene& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Scene* internal_default_instance() {
    return reinterpret_cast<const Scene*>(
               &_Scene_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Scene& a, Scene& b) {
    a.Swap(&b);
  }
  inline void Swap(Scene* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Scene* New() const final {
    return CreateMaybeMessage<Scene>(nullptr);
  }

  Scene* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Scene>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Scene& from);
  void MergeFrom(const Scene& from);
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
  void InternalSwap(Scene* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "gazebo.msgs.Scene";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_scene_2eproto);
    return ::descriptor_table_scene_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kModelFieldNumber = 8,
    kLightFieldNumber = 9,
    kJointFieldNumber = 10,
    kNameFieldNumber = 1,
    kAmbientFieldNumber = 2,
    kBackgroundFieldNumber = 3,
    kSkyFieldNumber = 4,
    kFogFieldNumber = 6,
    kGridFieldNumber = 7,
    kOriginVisualFieldNumber = 11,
    kShadowsFieldNumber = 5,
  };
  // repeated .gazebo.msgs.Model model = 8;
  int model_size() const;
  private:
  int _internal_model_size() const;
  public:
  void clear_model();
  ::gazebo::msgs::Model* mutable_model(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Model >*
      mutable_model();
  private:
  const ::gazebo::msgs::Model& _internal_model(int index) const;
  ::gazebo::msgs::Model* _internal_add_model();
  public:
  const ::gazebo::msgs::Model& model(int index) const;
  ::gazebo::msgs::Model* add_model();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Model >&
      model() const;

  // repeated .gazebo.msgs.Light light = 9;
  int light_size() const;
  private:
  int _internal_light_size() const;
  public:
  void clear_light();
  ::gazebo::msgs::Light* mutable_light(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Light >*
      mutable_light();
  private:
  const ::gazebo::msgs::Light& _internal_light(int index) const;
  ::gazebo::msgs::Light* _internal_add_light();
  public:
  const ::gazebo::msgs::Light& light(int index) const;
  ::gazebo::msgs::Light* add_light();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Light >&
      light() const;

  // repeated .gazebo.msgs.Joint joint = 10;
  int joint_size() const;
  private:
  int _internal_joint_size() const;
  public:
  void clear_joint();
  ::gazebo::msgs::Joint* mutable_joint(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Joint >*
      mutable_joint();
  private:
  const ::gazebo::msgs::Joint& _internal_joint(int index) const;
  ::gazebo::msgs::Joint* _internal_add_joint();
  public:
  const ::gazebo::msgs::Joint& joint(int index) const;
  ::gazebo::msgs::Joint* add_joint();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Joint >&
      joint() const;

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

  // optional .gazebo.msgs.Color ambient = 2;
  bool has_ambient() const;
  private:
  bool _internal_has_ambient() const;
  public:
  void clear_ambient();
  const ::gazebo::msgs::Color& ambient() const;
  ::gazebo::msgs::Color* release_ambient();
  ::gazebo::msgs::Color* mutable_ambient();
  void set_allocated_ambient(::gazebo::msgs::Color* ambient);
  private:
  const ::gazebo::msgs::Color& _internal_ambient() const;
  ::gazebo::msgs::Color* _internal_mutable_ambient();
  public:

  // optional .gazebo.msgs.Color background = 3;
  bool has_background() const;
  private:
  bool _internal_has_background() const;
  public:
  void clear_background();
  const ::gazebo::msgs::Color& background() const;
  ::gazebo::msgs::Color* release_background();
  ::gazebo::msgs::Color* mutable_background();
  void set_allocated_background(::gazebo::msgs::Color* background);
  private:
  const ::gazebo::msgs::Color& _internal_background() const;
  ::gazebo::msgs::Color* _internal_mutable_background();
  public:

  // optional .gazebo.msgs.Sky sky = 4;
  bool has_sky() const;
  private:
  bool _internal_has_sky() const;
  public:
  void clear_sky();
  const ::gazebo::msgs::Sky& sky() const;
  ::gazebo::msgs::Sky* release_sky();
  ::gazebo::msgs::Sky* mutable_sky();
  void set_allocated_sky(::gazebo::msgs::Sky* sky);
  private:
  const ::gazebo::msgs::Sky& _internal_sky() const;
  ::gazebo::msgs::Sky* _internal_mutable_sky();
  public:

  // optional .gazebo.msgs.Fog fog = 6;
  bool has_fog() const;
  private:
  bool _internal_has_fog() const;
  public:
  void clear_fog();
  const ::gazebo::msgs::Fog& fog() const;
  ::gazebo::msgs::Fog* release_fog();
  ::gazebo::msgs::Fog* mutable_fog();
  void set_allocated_fog(::gazebo::msgs::Fog* fog);
  private:
  const ::gazebo::msgs::Fog& _internal_fog() const;
  ::gazebo::msgs::Fog* _internal_mutable_fog();
  public:

  // optional bool grid = 7;
  bool has_grid() const;
  private:
  bool _internal_has_grid() const;
  public:
  void clear_grid();
  bool grid() const;
  void set_grid(bool value);
  private:
  bool _internal_grid() const;
  void _internal_set_grid(bool value);
  public:

  // optional bool origin_visual = 11;
  bool has_origin_visual() const;
  private:
  bool _internal_has_origin_visual() const;
  public:
  void clear_origin_visual();
  bool origin_visual() const;
  void set_origin_visual(bool value);
  private:
  bool _internal_origin_visual() const;
  void _internal_set_origin_visual(bool value);
  public:

  // optional bool shadows = 5 [default = true];
  bool has_shadows() const;
  private:
  bool _internal_has_shadows() const;
  public:
  void clear_shadows();
  bool shadows() const;
  void set_shadows(bool value);
  private:
  bool _internal_shadows() const;
  void _internal_set_shadows(bool value);
  public:

  // @@protoc_insertion_point(class_scope:gazebo.msgs.Scene)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Model > model_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Light > light_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Joint > joint_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::gazebo::msgs::Color* ambient_;
  ::gazebo::msgs::Color* background_;
  ::gazebo::msgs::Sky* sky_;
  ::gazebo::msgs::Fog* fog_;
  bool grid_;
  bool origin_visual_;
  bool shadows_;
  friend struct ::TableStruct_scene_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Scene

// required string name = 1;
inline bool Scene::_internal_has_name() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool Scene::has_name() const {
  return _internal_has_name();
}
inline void Scene::clear_name() {
  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& Scene::name() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Scene.name)
  return _internal_name();
}
inline void Scene::set_name(const std::string& value) {
  _internal_set_name(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Scene.name)
}
inline std::string* Scene::mutable_name() {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Scene.name)
  return _internal_mutable_name();
}
inline const std::string& Scene::_internal_name() const {
  return name_.GetNoArena();
}
inline void Scene::_internal_set_name(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Scene::set_name(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gazebo.msgs.Scene.name)
}
inline void Scene::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gazebo.msgs.Scene.name)
}
inline void Scene::set_name(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gazebo.msgs.Scene.name)
}
inline std::string* Scene::_internal_mutable_name() {
  _has_bits_[0] |= 0x00000001u;
  return name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Scene::release_name() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Scene.name)
  if (!_internal_has_name()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return name_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Scene::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Scene.name)
}

// optional .gazebo.msgs.Color ambient = 2;
inline bool Scene::_internal_has_ambient() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  PROTOBUF_ASSUME(!value || ambient_ != nullptr);
  return value;
}
inline bool Scene::has_ambient() const {
  return _internal_has_ambient();
}
inline const ::gazebo::msgs::Color& Scene::_internal_ambient() const {
  const ::gazebo::msgs::Color* p = ambient_;
  return p != nullptr ? *p : *reinterpret_cast<const ::gazebo::msgs::Color*>(
      &::gazebo::msgs::_Color_default_instance_);
}
inline const ::gazebo::msgs::Color& Scene::ambient() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Scene.ambient)
  return _internal_ambient();
}
inline ::gazebo::msgs::Color* Scene::release_ambient() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Scene.ambient)
  _has_bits_[0] &= ~0x00000002u;
  ::gazebo::msgs::Color* temp = ambient_;
  ambient_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::Color* Scene::_internal_mutable_ambient() {
  _has_bits_[0] |= 0x00000002u;
  if (ambient_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::Color>(GetArenaNoVirtual());
    ambient_ = p;
  }
  return ambient_;
}
inline ::gazebo::msgs::Color* Scene::mutable_ambient() {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Scene.ambient)
  return _internal_mutable_ambient();
}
inline void Scene::set_allocated_ambient(::gazebo::msgs::Color* ambient) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(ambient_);
  }
  if (ambient) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      ambient = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, ambient, submessage_arena);
    }
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  ambient_ = ambient;
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Scene.ambient)
}

// optional .gazebo.msgs.Color background = 3;
inline bool Scene::_internal_has_background() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  PROTOBUF_ASSUME(!value || background_ != nullptr);
  return value;
}
inline bool Scene::has_background() const {
  return _internal_has_background();
}
inline const ::gazebo::msgs::Color& Scene::_internal_background() const {
  const ::gazebo::msgs::Color* p = background_;
  return p != nullptr ? *p : *reinterpret_cast<const ::gazebo::msgs::Color*>(
      &::gazebo::msgs::_Color_default_instance_);
}
inline const ::gazebo::msgs::Color& Scene::background() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Scene.background)
  return _internal_background();
}
inline ::gazebo::msgs::Color* Scene::release_background() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Scene.background)
  _has_bits_[0] &= ~0x00000004u;
  ::gazebo::msgs::Color* temp = background_;
  background_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::Color* Scene::_internal_mutable_background() {
  _has_bits_[0] |= 0x00000004u;
  if (background_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::Color>(GetArenaNoVirtual());
    background_ = p;
  }
  return background_;
}
inline ::gazebo::msgs::Color* Scene::mutable_background() {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Scene.background)
  return _internal_mutable_background();
}
inline void Scene::set_allocated_background(::gazebo::msgs::Color* background) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(background_);
  }
  if (background) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      background = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, background, submessage_arena);
    }
    _has_bits_[0] |= 0x00000004u;
  } else {
    _has_bits_[0] &= ~0x00000004u;
  }
  background_ = background;
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Scene.background)
}

// optional .gazebo.msgs.Sky sky = 4;
inline bool Scene::_internal_has_sky() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  PROTOBUF_ASSUME(!value || sky_ != nullptr);
  return value;
}
inline bool Scene::has_sky() const {
  return _internal_has_sky();
}
inline const ::gazebo::msgs::Sky& Scene::_internal_sky() const {
  const ::gazebo::msgs::Sky* p = sky_;
  return p != nullptr ? *p : *reinterpret_cast<const ::gazebo::msgs::Sky*>(
      &::gazebo::msgs::_Sky_default_instance_);
}
inline const ::gazebo::msgs::Sky& Scene::sky() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Scene.sky)
  return _internal_sky();
}
inline ::gazebo::msgs::Sky* Scene::release_sky() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Scene.sky)
  _has_bits_[0] &= ~0x00000008u;
  ::gazebo::msgs::Sky* temp = sky_;
  sky_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::Sky* Scene::_internal_mutable_sky() {
  _has_bits_[0] |= 0x00000008u;
  if (sky_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::Sky>(GetArenaNoVirtual());
    sky_ = p;
  }
  return sky_;
}
inline ::gazebo::msgs::Sky* Scene::mutable_sky() {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Scene.sky)
  return _internal_mutable_sky();
}
inline void Scene::set_allocated_sky(::gazebo::msgs::Sky* sky) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(sky_);
  }
  if (sky) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      sky = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, sky, submessage_arena);
    }
    _has_bits_[0] |= 0x00000008u;
  } else {
    _has_bits_[0] &= ~0x00000008u;
  }
  sky_ = sky;
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Scene.sky)
}

// optional bool shadows = 5 [default = true];
inline bool Scene::_internal_has_shadows() const {
  bool value = (_has_bits_[0] & 0x00000080u) != 0;
  return value;
}
inline bool Scene::has_shadows() const {
  return _internal_has_shadows();
}
inline void Scene::clear_shadows() {
  shadows_ = true;
  _has_bits_[0] &= ~0x00000080u;
}
inline bool Scene::_internal_shadows() const {
  return shadows_;
}
inline bool Scene::shadows() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Scene.shadows)
  return _internal_shadows();
}
inline void Scene::_internal_set_shadows(bool value) {
  _has_bits_[0] |= 0x00000080u;
  shadows_ = value;
}
inline void Scene::set_shadows(bool value) {
  _internal_set_shadows(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Scene.shadows)
}

// optional .gazebo.msgs.Fog fog = 6;
inline bool Scene::_internal_has_fog() const {
  bool value = (_has_bits_[0] & 0x00000010u) != 0;
  PROTOBUF_ASSUME(!value || fog_ != nullptr);
  return value;
}
inline bool Scene::has_fog() const {
  return _internal_has_fog();
}
inline const ::gazebo::msgs::Fog& Scene::_internal_fog() const {
  const ::gazebo::msgs::Fog* p = fog_;
  return p != nullptr ? *p : *reinterpret_cast<const ::gazebo::msgs::Fog*>(
      &::gazebo::msgs::_Fog_default_instance_);
}
inline const ::gazebo::msgs::Fog& Scene::fog() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Scene.fog)
  return _internal_fog();
}
inline ::gazebo::msgs::Fog* Scene::release_fog() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Scene.fog)
  _has_bits_[0] &= ~0x00000010u;
  ::gazebo::msgs::Fog* temp = fog_;
  fog_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::Fog* Scene::_internal_mutable_fog() {
  _has_bits_[0] |= 0x00000010u;
  if (fog_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::Fog>(GetArenaNoVirtual());
    fog_ = p;
  }
  return fog_;
}
inline ::gazebo::msgs::Fog* Scene::mutable_fog() {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Scene.fog)
  return _internal_mutable_fog();
}
inline void Scene::set_allocated_fog(::gazebo::msgs::Fog* fog) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(fog_);
  }
  if (fog) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      fog = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, fog, submessage_arena);
    }
    _has_bits_[0] |= 0x00000010u;
  } else {
    _has_bits_[0] &= ~0x00000010u;
  }
  fog_ = fog;
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Scene.fog)
}

// optional bool grid = 7;
inline bool Scene::_internal_has_grid() const {
  bool value = (_has_bits_[0] & 0x00000020u) != 0;
  return value;
}
inline bool Scene::has_grid() const {
  return _internal_has_grid();
}
inline void Scene::clear_grid() {
  grid_ = false;
  _has_bits_[0] &= ~0x00000020u;
}
inline bool Scene::_internal_grid() const {
  return grid_;
}
inline bool Scene::grid() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Scene.grid)
  return _internal_grid();
}
inline void Scene::_internal_set_grid(bool value) {
  _has_bits_[0] |= 0x00000020u;
  grid_ = value;
}
inline void Scene::set_grid(bool value) {
  _internal_set_grid(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Scene.grid)
}

// repeated .gazebo.msgs.Model model = 8;
inline int Scene::_internal_model_size() const {
  return model_.size();
}
inline int Scene::model_size() const {
  return _internal_model_size();
}
inline ::gazebo::msgs::Model* Scene::mutable_model(int index) {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Scene.model)
  return model_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Model >*
Scene::mutable_model() {
  // @@protoc_insertion_point(field_mutable_list:gazebo.msgs.Scene.model)
  return &model_;
}
inline const ::gazebo::msgs::Model& Scene::_internal_model(int index) const {
  return model_.Get(index);
}
inline const ::gazebo::msgs::Model& Scene::model(int index) const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Scene.model)
  return _internal_model(index);
}
inline ::gazebo::msgs::Model* Scene::_internal_add_model() {
  return model_.Add();
}
inline ::gazebo::msgs::Model* Scene::add_model() {
  // @@protoc_insertion_point(field_add:gazebo.msgs.Scene.model)
  return _internal_add_model();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Model >&
Scene::model() const {
  // @@protoc_insertion_point(field_list:gazebo.msgs.Scene.model)
  return model_;
}

// repeated .gazebo.msgs.Light light = 9;
inline int Scene::_internal_light_size() const {
  return light_.size();
}
inline int Scene::light_size() const {
  return _internal_light_size();
}
inline ::gazebo::msgs::Light* Scene::mutable_light(int index) {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Scene.light)
  return light_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Light >*
Scene::mutable_light() {
  // @@protoc_insertion_point(field_mutable_list:gazebo.msgs.Scene.light)
  return &light_;
}
inline const ::gazebo::msgs::Light& Scene::_internal_light(int index) const {
  return light_.Get(index);
}
inline const ::gazebo::msgs::Light& Scene::light(int index) const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Scene.light)
  return _internal_light(index);
}
inline ::gazebo::msgs::Light* Scene::_internal_add_light() {
  return light_.Add();
}
inline ::gazebo::msgs::Light* Scene::add_light() {
  // @@protoc_insertion_point(field_add:gazebo.msgs.Scene.light)
  return _internal_add_light();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Light >&
Scene::light() const {
  // @@protoc_insertion_point(field_list:gazebo.msgs.Scene.light)
  return light_;
}

// repeated .gazebo.msgs.Joint joint = 10;
inline int Scene::_internal_joint_size() const {
  return joint_.size();
}
inline int Scene::joint_size() const {
  return _internal_joint_size();
}
inline ::gazebo::msgs::Joint* Scene::mutable_joint(int index) {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Scene.joint)
  return joint_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Joint >*
Scene::mutable_joint() {
  // @@protoc_insertion_point(field_mutable_list:gazebo.msgs.Scene.joint)
  return &joint_;
}
inline const ::gazebo::msgs::Joint& Scene::_internal_joint(int index) const {
  return joint_.Get(index);
}
inline const ::gazebo::msgs::Joint& Scene::joint(int index) const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Scene.joint)
  return _internal_joint(index);
}
inline ::gazebo::msgs::Joint* Scene::_internal_add_joint() {
  return joint_.Add();
}
inline ::gazebo::msgs::Joint* Scene::add_joint() {
  // @@protoc_insertion_point(field_add:gazebo.msgs.Scene.joint)
  return _internal_add_joint();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Joint >&
Scene::joint() const {
  // @@protoc_insertion_point(field_list:gazebo.msgs.Scene.joint)
  return joint_;
}

// optional bool origin_visual = 11;
inline bool Scene::_internal_has_origin_visual() const {
  bool value = (_has_bits_[0] & 0x00000040u) != 0;
  return value;
}
inline bool Scene::has_origin_visual() const {
  return _internal_has_origin_visual();
}
inline void Scene::clear_origin_visual() {
  origin_visual_ = false;
  _has_bits_[0] &= ~0x00000040u;
}
inline bool Scene::_internal_origin_visual() const {
  return origin_visual_;
}
inline bool Scene::origin_visual() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Scene.origin_visual)
  return _internal_origin_visual();
}
inline void Scene::_internal_set_origin_visual(bool value) {
  _has_bits_[0] |= 0x00000040u;
  origin_visual_ = value;
}
inline void Scene::set_origin_visual(bool value) {
  _internal_set_origin_visual(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Scene.origin_visual)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

typedef boost::shared_ptr<gazebo::msgs::Scene> ScenePtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

typedef const boost::shared_ptr<gazebo::msgs::Scene const> ConstScenePtr;
// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_scene_2eproto
