// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: scene.proto

#include "scene.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
#pragma GCC diagnostic ignored "-Wshadow"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_color_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Color_color_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_fog_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Fog_fog_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_joint_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<5> scc_info_Joint_joint_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_light_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<3> scc_info_Light_light_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_model_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<6> scc_info_Model_model_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_sky_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Sky_sky_2eproto;
namespace gazebo {
namespace msgs {
class SceneDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Scene> _instance;
} _Scene_default_instance_;
}  // namespace msgs
}  // namespace gazebo
static void InitDefaultsscc_info_Scene_scene_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gazebo::msgs::_Scene_default_instance_;
    new (ptr) ::gazebo::msgs::Scene();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gazebo::msgs::Scene::InitAsDefaultInstance();
}

GZ_MSGS_VISIBLE ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<6> scc_info_Scene_scene_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 6, 0, InitDefaultsscc_info_Scene_scene_2eproto}, {
      &scc_info_Color_color_2eproto.base,
      &scc_info_Sky_sky_2eproto.base,
      &scc_info_Fog_fog_2eproto.base,
      &scc_info_Model_model_2eproto.base,
      &scc_info_Light_light_2eproto.base,
      &scc_info_Joint_joint_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_scene_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_scene_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_scene_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_scene_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Scene, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Scene, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Scene, name_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Scene, ambient_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Scene, background_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Scene, sky_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Scene, shadows_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Scene, fog_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Scene, grid_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Scene, model_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Scene, light_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Scene, joint_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Scene, origin_visual_),
  0,
  1,
  2,
  3,
  7,
  4,
  5,
  ~0u,
  ~0u,
  ~0u,
  6,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 16, sizeof(::gazebo::msgs::Scene)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::gazebo::msgs::_Scene_default_instance_),
};

const char descriptor_table_protodef_scene_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\013scene.proto\022\013gazebo.msgs\032\013color.proto\032"
  "\tfog.proto\032\tsky.proto\032\013light.proto\032\013join"
  "t.proto\032\013model.proto\"\305\002\n\005Scene\022\014\n\004name\030\001"
  " \002(\t\022#\n\007ambient\030\002 \001(\0132\022.gazebo.msgs.Colo"
  "r\022&\n\nbackground\030\003 \001(\0132\022.gazebo.msgs.Colo"
  "r\022\035\n\003sky\030\004 \001(\0132\020.gazebo.msgs.Sky\022\025\n\007shad"
  "ows\030\005 \001(\010:\004true\022\035\n\003fog\030\006 \001(\0132\020.gazebo.ms"
  "gs.Fog\022\014\n\004grid\030\007 \001(\010\022!\n\005model\030\010 \003(\0132\022.ga"
  "zebo.msgs.Model\022!\n\005light\030\t \003(\0132\022.gazebo."
  "msgs.Light\022!\n\005joint\030\n \003(\0132\022.gazebo.msgs."
  "Joint\022\025\n\rorigin_visual\030\013 \001(\010"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_scene_2eproto_deps[6] = {
  &::descriptor_table_color_2eproto,
  &::descriptor_table_fog_2eproto,
  &::descriptor_table_joint_2eproto,
  &::descriptor_table_light_2eproto,
  &::descriptor_table_model_2eproto,
  &::descriptor_table_sky_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_scene_2eproto_sccs[1] = {
  &scc_info_Scene_scene_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_scene_2eproto_once;
static bool descriptor_table_scene_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_scene_2eproto = {
  &descriptor_table_scene_2eproto_initialized, descriptor_table_protodef_scene_2eproto, "scene.proto", 428,
  &descriptor_table_scene_2eproto_once, descriptor_table_scene_2eproto_sccs, descriptor_table_scene_2eproto_deps, 1, 6,
  schemas, file_default_instances, TableStruct_scene_2eproto::offsets,
  file_level_metadata_scene_2eproto, 1, file_level_enum_descriptors_scene_2eproto, file_level_service_descriptors_scene_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_scene_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_scene_2eproto), true);
namespace gazebo {
namespace msgs {

// ===================================================================

void Scene::InitAsDefaultInstance() {
  ::gazebo::msgs::_Scene_default_instance_._instance.get_mutable()->ambient_ = const_cast< ::gazebo::msgs::Color*>(
      ::gazebo::msgs::Color::internal_default_instance());
  ::gazebo::msgs::_Scene_default_instance_._instance.get_mutable()->background_ = const_cast< ::gazebo::msgs::Color*>(
      ::gazebo::msgs::Color::internal_default_instance());
  ::gazebo::msgs::_Scene_default_instance_._instance.get_mutable()->sky_ = const_cast< ::gazebo::msgs::Sky*>(
      ::gazebo::msgs::Sky::internal_default_instance());
  ::gazebo::msgs::_Scene_default_instance_._instance.get_mutable()->fog_ = const_cast< ::gazebo::msgs::Fog*>(
      ::gazebo::msgs::Fog::internal_default_instance());
}
class Scene::_Internal {
 public:
  using HasBits = decltype(std::declval<Scene>()._has_bits_);
  static void set_has_name(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static const ::gazebo::msgs::Color& ambient(const Scene* msg);
  static void set_has_ambient(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static const ::gazebo::msgs::Color& background(const Scene* msg);
  static void set_has_background(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static const ::gazebo::msgs::Sky& sky(const Scene* msg);
  static void set_has_sky(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_shadows(HasBits* has_bits) {
    (*has_bits)[0] |= 128u;
  }
  static const ::gazebo::msgs::Fog& fog(const Scene* msg);
  static void set_has_fog(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_grid(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
  static void set_has_origin_visual(HasBits* has_bits) {
    (*has_bits)[0] |= 64u;
  }
};

const ::gazebo::msgs::Color&
Scene::_Internal::ambient(const Scene* msg) {
  return *msg->ambient_;
}
const ::gazebo::msgs::Color&
Scene::_Internal::background(const Scene* msg) {
  return *msg->background_;
}
const ::gazebo::msgs::Sky&
Scene::_Internal::sky(const Scene* msg) {
  return *msg->sky_;
}
const ::gazebo::msgs::Fog&
Scene::_Internal::fog(const Scene* msg) {
  return *msg->fog_;
}
void Scene::clear_ambient() {
  if (ambient_ != nullptr) ambient_->Clear();
  _has_bits_[0] &= ~0x00000002u;
}
void Scene::clear_background() {
  if (background_ != nullptr) background_->Clear();
  _has_bits_[0] &= ~0x00000004u;
}
void Scene::clear_sky() {
  if (sky_ != nullptr) sky_->Clear();
  _has_bits_[0] &= ~0x00000008u;
}
void Scene::clear_fog() {
  if (fog_ != nullptr) fog_->Clear();
  _has_bits_[0] &= ~0x00000010u;
}
void Scene::clear_model() {
  model_.Clear();
}
void Scene::clear_light() {
  light_.Clear();
}
void Scene::clear_joint() {
  joint_.Clear();
}
Scene::Scene()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gazebo.msgs.Scene)
}
Scene::Scene(const Scene& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_),
      model_(from.model_),
      light_(from.light_),
      joint_(from.joint_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_name()) {
    name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from._internal_has_ambient()) {
    ambient_ = new ::gazebo::msgs::Color(*from.ambient_);
  } else {
    ambient_ = nullptr;
  }
  if (from._internal_has_background()) {
    background_ = new ::gazebo::msgs::Color(*from.background_);
  } else {
    background_ = nullptr;
  }
  if (from._internal_has_sky()) {
    sky_ = new ::gazebo::msgs::Sky(*from.sky_);
  } else {
    sky_ = nullptr;
  }
  if (from._internal_has_fog()) {
    fog_ = new ::gazebo::msgs::Fog(*from.fog_);
  } else {
    fog_ = nullptr;
  }
  ::memcpy(&grid_, &from.grid_,
    static_cast<size_t>(reinterpret_cast<char*>(&shadows_) -
    reinterpret_cast<char*>(&grid_)) + sizeof(shadows_));
  // @@protoc_insertion_point(copy_constructor:gazebo.msgs.Scene)
}

void Scene::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Scene_scene_2eproto.base);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&ambient_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&origin_visual_) -
      reinterpret_cast<char*>(&ambient_)) + sizeof(origin_visual_));
  shadows_ = true;
}

Scene::~Scene() {
  // @@protoc_insertion_point(destructor:gazebo.msgs.Scene)
  SharedDtor();
}

void Scene::SharedDtor() {
  name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete ambient_;
  if (this != internal_default_instance()) delete background_;
  if (this != internal_default_instance()) delete sky_;
  if (this != internal_default_instance()) delete fog_;
}

void Scene::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Scene& Scene::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Scene_scene_2eproto.base);
  return *internal_default_instance();
}


void Scene::Clear() {
// @@protoc_insertion_point(message_clear_start:gazebo.msgs.Scene)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  model_.Clear();
  light_.Clear();
  joint_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    if (cached_has_bits & 0x00000001u) {
      name_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(ambient_ != nullptr);
      ambient_->Clear();
    }
    if (cached_has_bits & 0x00000004u) {
      GOOGLE_DCHECK(background_ != nullptr);
      background_->Clear();
    }
    if (cached_has_bits & 0x00000008u) {
      GOOGLE_DCHECK(sky_ != nullptr);
      sky_->Clear();
    }
    if (cached_has_bits & 0x00000010u) {
      GOOGLE_DCHECK(fog_ != nullptr);
      fog_->Clear();
    }
  }
  ::memset(&grid_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&origin_visual_) -
      reinterpret_cast<char*>(&grid_)) + sizeof(origin_visual_));
  shadows_ = true;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* Scene::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // required string name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "gazebo.msgs.Scene.name");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .gazebo.msgs.Color ambient = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_ambient(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .gazebo.msgs.Color background = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_background(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .gazebo.msgs.Sky sky = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr = ctx->ParseMessage(_internal_mutable_sky(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional bool shadows = 5 [default = true];
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 40)) {
          _Internal::set_has_shadows(&has_bits);
          shadows_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .gazebo.msgs.Fog fog = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 50)) {
          ptr = ctx->ParseMessage(_internal_mutable_fog(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional bool grid = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 56)) {
          _Internal::set_has_grid(&has_bits);
          grid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .gazebo.msgs.Model model = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 66)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_model(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<66>(ptr));
        } else goto handle_unusual;
        continue;
      // repeated .gazebo.msgs.Light light = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 74)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_light(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<74>(ptr));
        } else goto handle_unusual;
        continue;
      // repeated .gazebo.msgs.Joint joint = 10;
      case 10:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 82)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_joint(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<82>(ptr));
        } else goto handle_unusual;
        continue;
      // optional bool origin_visual = 11;
      case 11:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 88)) {
          _Internal::set_has_origin_visual(&has_bits);
          origin_visual_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Scene::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:gazebo.msgs.Scene)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required string name = 1;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "gazebo.msgs.Scene.name");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_name(), target);
  }

  // optional .gazebo.msgs.Color ambient = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::ambient(this), target, stream);
  }

  // optional .gazebo.msgs.Color background = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        3, _Internal::background(this), target, stream);
  }

  // optional .gazebo.msgs.Sky sky = 4;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        4, _Internal::sky(this), target, stream);
  }

  // optional bool shadows = 5 [default = true];
  if (cached_has_bits & 0x00000080u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(5, this->_internal_shadows(), target);
  }

  // optional .gazebo.msgs.Fog fog = 6;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        6, _Internal::fog(this), target, stream);
  }

  // optional bool grid = 7;
  if (cached_has_bits & 0x00000020u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(7, this->_internal_grid(), target);
  }

  // repeated .gazebo.msgs.Model model = 8;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_model_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(8, this->_internal_model(i), target, stream);
  }

  // repeated .gazebo.msgs.Light light = 9;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_light_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(9, this->_internal_light(i), target, stream);
  }

  // repeated .gazebo.msgs.Joint joint = 10;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_joint_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(10, this->_internal_joint(i), target, stream);
  }

  // optional bool origin_visual = 11;
  if (cached_has_bits & 0x00000040u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(11, this->_internal_origin_visual(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gazebo.msgs.Scene)
  return target;
}

size_t Scene::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gazebo.msgs.Scene)
  size_t total_size = 0;

  // required string name = 1;
  if (_internal_has_name()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .gazebo.msgs.Model model = 8;
  total_size += 1UL * this->_internal_model_size();
  for (const auto& msg : this->model_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // repeated .gazebo.msgs.Light light = 9;
  total_size += 1UL * this->_internal_light_size();
  for (const auto& msg : this->light_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // repeated .gazebo.msgs.Joint joint = 10;
  total_size += 1UL * this->_internal_joint_size();
  for (const auto& msg : this->joint_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x000000feu) {
    // optional .gazebo.msgs.Color ambient = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *ambient_);
    }

    // optional .gazebo.msgs.Color background = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *background_);
    }

    // optional .gazebo.msgs.Sky sky = 4;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *sky_);
    }

    // optional .gazebo.msgs.Fog fog = 6;
    if (cached_has_bits & 0x00000010u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *fog_);
    }

    // optional bool grid = 7;
    if (cached_has_bits & 0x00000020u) {
      total_size += 1 + 1;
    }

    // optional bool origin_visual = 11;
    if (cached_has_bits & 0x00000040u) {
      total_size += 1 + 1;
    }

    // optional bool shadows = 5 [default = true];
    if (cached_has_bits & 0x00000080u) {
      total_size += 1 + 1;
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Scene::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gazebo.msgs.Scene)
  GOOGLE_DCHECK_NE(&from, this);
  const Scene* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Scene>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gazebo.msgs.Scene)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gazebo.msgs.Scene)
    MergeFrom(*source);
  }
}

void Scene::MergeFrom(const Scene& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gazebo.msgs.Scene)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  model_.MergeFrom(from.model_);
  light_.MergeFrom(from.light_);
  joint_.MergeFrom(from.joint_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    if (cached_has_bits & 0x00000001u) {
      _has_bits_[0] |= 0x00000001u;
      name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.name_);
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_mutable_ambient()->::gazebo::msgs::Color::MergeFrom(from._internal_ambient());
    }
    if (cached_has_bits & 0x00000004u) {
      _internal_mutable_background()->::gazebo::msgs::Color::MergeFrom(from._internal_background());
    }
    if (cached_has_bits & 0x00000008u) {
      _internal_mutable_sky()->::gazebo::msgs::Sky::MergeFrom(from._internal_sky());
    }
    if (cached_has_bits & 0x00000010u) {
      _internal_mutable_fog()->::gazebo::msgs::Fog::MergeFrom(from._internal_fog());
    }
    if (cached_has_bits & 0x00000020u) {
      grid_ = from.grid_;
    }
    if (cached_has_bits & 0x00000040u) {
      origin_visual_ = from.origin_visual_;
    }
    if (cached_has_bits & 0x00000080u) {
      shadows_ = from.shadows_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void Scene::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gazebo.msgs.Scene)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Scene::CopyFrom(const Scene& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gazebo.msgs.Scene)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Scene::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  if (!::PROTOBUF_NAMESPACE_ID::internal::AllAreInitialized(model_)) return false;
  if (!::PROTOBUF_NAMESPACE_ID::internal::AllAreInitialized(light_)) return false;
  if (!::PROTOBUF_NAMESPACE_ID::internal::AllAreInitialized(joint_)) return false;
  if (_internal_has_ambient()) {
    if (!ambient_->IsInitialized()) return false;
  }
  if (_internal_has_background()) {
    if (!background_->IsInitialized()) return false;
  }
  if (_internal_has_sky()) {
    if (!sky_->IsInitialized()) return false;
  }
  if (_internal_has_fog()) {
    if (!fog_->IsInitialized()) return false;
  }
  return true;
}

void Scene::InternalSwap(Scene* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  model_.InternalSwap(&other->model_);
  light_.InternalSwap(&other->light_);
  joint_.InternalSwap(&other->joint_);
  name_.Swap(&other->name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(ambient_, other->ambient_);
  swap(background_, other->background_);
  swap(sky_, other->sky_);
  swap(fog_, other->fog_);
  swap(grid_, other->grid_);
  swap(origin_visual_, other->origin_visual_);
  swap(shadows_, other->shadows_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Scene::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::gazebo::msgs::Scene* Arena::CreateMaybeMessage< ::gazebo::msgs::Scene >(Arena* arena) {
  return Arena::CreateInternal< ::gazebo::msgs::Scene >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

GZ_REGISTER_STATIC_MSG("gazebo.msgs.Scene", Scene)
// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>