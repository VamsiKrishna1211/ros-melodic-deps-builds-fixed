// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: material.proto

#include "material.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_material_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Material_Script_material_2eproto;
namespace gazebo {
namespace msgs {
class Material_ScriptDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Material_Script> _instance;
} _Material_Script_default_instance_;
class MaterialDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Material> _instance;
} _Material_default_instance_;
}  // namespace msgs
}  // namespace gazebo
static void InitDefaultsscc_info_Material_material_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gazebo::msgs::_Material_default_instance_;
    new (ptr) ::gazebo::msgs::Material();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gazebo::msgs::Material::InitAsDefaultInstance();
}

GZ_MSGS_VISIBLE ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_Material_material_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 2, 0, InitDefaultsscc_info_Material_material_2eproto}, {
      &scc_info_Material_Script_material_2eproto.base,
      &scc_info_Color_color_2eproto.base,}};

static void InitDefaultsscc_info_Material_Script_material_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gazebo::msgs::_Material_Script_default_instance_;
    new (ptr) ::gazebo::msgs::Material_Script();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gazebo::msgs::Material_Script::InitAsDefaultInstance();
}

GZ_MSGS_VISIBLE ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Material_Script_material_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_Material_Script_material_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_material_2eproto[2];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_material_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_material_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_material_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Material_Script, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Material_Script, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Material_Script, uri_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Material_Script, name_),
  ~0u,
  0,
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Material, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Material, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Material, script_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Material, shader_type_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Material, normal_map_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Material, ambient_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Material, diffuse_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Material, specular_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Material, emissive_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Material, lighting_),
  1,
  7,
  0,
  2,
  3,
  4,
  5,
  6,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::gazebo::msgs::Material_Script)},
  { 9, 22, sizeof(::gazebo::msgs::Material)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::gazebo::msgs::_Material_Script_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::gazebo::msgs::_Material_default_instance_),
};

const char descriptor_table_protodef_material_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\016material.proto\022\013gazebo.msgs\032\013color.pro"
  "to\"\260\003\n\010Material\022,\n\006script\030\001 \001(\0132\034.gazebo"
  ".msgs.Material.Script\0225\n\013shader_type\030\002 \001"
  "(\0162 .gazebo.msgs.Material.ShaderType\022\022\n\n"
  "normal_map\030\003 \001(\t\022#\n\007ambient\030\004 \001(\0132\022.gaze"
  "bo.msgs.Color\022#\n\007diffuse\030\005 \001(\0132\022.gazebo."
  "msgs.Color\022$\n\010specular\030\006 \001(\0132\022.gazebo.ms"
  "gs.Color\022$\n\010emissive\030\007 \001(\0132\022.gazebo.msgs"
  ".Color\022\020\n\010lighting\030\010 \001(\010\032#\n\006Script\022\013\n\003ur"
  "i\030\001 \003(\t\022\014\n\004name\030\002 \002(\t\"^\n\nShaderType\022\n\n\006V"
  "ERTEX\020\001\022\t\n\005PIXEL\020\002\022\033\n\027NORMAL_MAP_OBJECT_"
  "SPACE\020\003\022\034\n\030NORMAL_MAP_TANGENT_SPACE\020\004"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_material_2eproto_deps[1] = {
  &::descriptor_table_color_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_material_2eproto_sccs[2] = {
  &scc_info_Material_material_2eproto.base,
  &scc_info_Material_Script_material_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_material_2eproto_once;
static bool descriptor_table_material_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_material_2eproto = {
  &descriptor_table_material_2eproto_initialized, descriptor_table_protodef_material_2eproto, "material.proto", 477,
  &descriptor_table_material_2eproto_once, descriptor_table_material_2eproto_sccs, descriptor_table_material_2eproto_deps, 2, 1,
  schemas, file_default_instances, TableStruct_material_2eproto::offsets,
  file_level_metadata_material_2eproto, 2, file_level_enum_descriptors_material_2eproto, file_level_service_descriptors_material_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_material_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_material_2eproto), true);
namespace gazebo {
namespace msgs {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Material_ShaderType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_material_2eproto);
  return file_level_enum_descriptors_material_2eproto[0];
}
bool Material_ShaderType_IsValid(int value) {
  switch (value) {
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
constexpr Material_ShaderType Material::VERTEX;
constexpr Material_ShaderType Material::PIXEL;
constexpr Material_ShaderType Material::NORMAL_MAP_OBJECT_SPACE;
constexpr Material_ShaderType Material::NORMAL_MAP_TANGENT_SPACE;
constexpr Material_ShaderType Material::ShaderType_MIN;
constexpr Material_ShaderType Material::ShaderType_MAX;
constexpr int Material::ShaderType_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)

// ===================================================================

void Material_Script::InitAsDefaultInstance() {
}
class Material_Script::_Internal {
 public:
  using HasBits = decltype(std::declval<Material_Script>()._has_bits_);
  static void set_has_name(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

Material_Script::Material_Script()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gazebo.msgs.Material.Script)
}
Material_Script::Material_Script(const Material_Script& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_),
      uri_(from.uri_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_name()) {
    name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  // @@protoc_insertion_point(copy_constructor:gazebo.msgs.Material.Script)
}

void Material_Script::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Material_Script_material_2eproto.base);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

Material_Script::~Material_Script() {
  // @@protoc_insertion_point(destructor:gazebo.msgs.Material.Script)
  SharedDtor();
}

void Material_Script::SharedDtor() {
  name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void Material_Script::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Material_Script& Material_Script::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Material_Script_material_2eproto.base);
  return *internal_default_instance();
}


void Material_Script::Clear() {
// @@protoc_insertion_point(message_clear_start:gazebo.msgs.Material.Script)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  uri_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    name_.ClearNonDefaultToEmptyNoArena();
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* Material_Script::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated string uri = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_uri();
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
            #ifndef NDEBUG
            ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "gazebo.msgs.Material.Script.uri");
            #endif  // !NDEBUG
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else goto handle_unusual;
        continue;
      // required string name = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "gazebo.msgs.Material.Script.name");
          #endif  // !NDEBUG
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

::PROTOBUF_NAMESPACE_ID::uint8* Material_Script::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:gazebo.msgs.Material.Script)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated string uri = 1;
  for (int i = 0, n = this->_internal_uri_size(); i < n; i++) {
    const auto& s = this->_internal_uri(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "gazebo.msgs.Material.Script.uri");
    target = stream->WriteString(1, s, target);
  }

  cached_has_bits = _has_bits_[0];
  // required string name = 2;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "gazebo.msgs.Material.Script.name");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_name(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gazebo.msgs.Material.Script)
  return target;
}

size_t Material_Script::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gazebo.msgs.Material.Script)
  size_t total_size = 0;

  // required string name = 2;
  if (_internal_has_name()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string uri = 1;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(uri_.size());
  for (int i = 0, n = uri_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      uri_.Get(i));
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Material_Script::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gazebo.msgs.Material.Script)
  GOOGLE_DCHECK_NE(&from, this);
  const Material_Script* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Material_Script>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gazebo.msgs.Material.Script)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gazebo.msgs.Material.Script)
    MergeFrom(*source);
  }
}

void Material_Script::MergeFrom(const Material_Script& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gazebo.msgs.Material.Script)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  uri_.MergeFrom(from.uri_);
  if (from._internal_has_name()) {
    _has_bits_[0] |= 0x00000001u;
    name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
}

void Material_Script::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gazebo.msgs.Material.Script)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Material_Script::CopyFrom(const Material_Script& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gazebo.msgs.Material.Script)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Material_Script::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  return true;
}

void Material_Script::InternalSwap(Material_Script* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  uri_.InternalSwap(&other->uri_);
  name_.Swap(&other->name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::PROTOBUF_NAMESPACE_ID::Metadata Material_Script::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void Material::InitAsDefaultInstance() {
  ::gazebo::msgs::_Material_default_instance_._instance.get_mutable()->script_ = const_cast< ::gazebo::msgs::Material_Script*>(
      ::gazebo::msgs::Material_Script::internal_default_instance());
  ::gazebo::msgs::_Material_default_instance_._instance.get_mutable()->ambient_ = const_cast< ::gazebo::msgs::Color*>(
      ::gazebo::msgs::Color::internal_default_instance());
  ::gazebo::msgs::_Material_default_instance_._instance.get_mutable()->diffuse_ = const_cast< ::gazebo::msgs::Color*>(
      ::gazebo::msgs::Color::internal_default_instance());
  ::gazebo::msgs::_Material_default_instance_._instance.get_mutable()->specular_ = const_cast< ::gazebo::msgs::Color*>(
      ::gazebo::msgs::Color::internal_default_instance());
  ::gazebo::msgs::_Material_default_instance_._instance.get_mutable()->emissive_ = const_cast< ::gazebo::msgs::Color*>(
      ::gazebo::msgs::Color::internal_default_instance());
}
class Material::_Internal {
 public:
  using HasBits = decltype(std::declval<Material>()._has_bits_);
  static const ::gazebo::msgs::Material_Script& script(const Material* msg);
  static void set_has_script(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_shader_type(HasBits* has_bits) {
    (*has_bits)[0] |= 128u;
  }
  static void set_has_normal_map(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static const ::gazebo::msgs::Color& ambient(const Material* msg);
  static void set_has_ambient(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static const ::gazebo::msgs::Color& diffuse(const Material* msg);
  static void set_has_diffuse(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static const ::gazebo::msgs::Color& specular(const Material* msg);
  static void set_has_specular(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static const ::gazebo::msgs::Color& emissive(const Material* msg);
  static void set_has_emissive(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
  static void set_has_lighting(HasBits* has_bits) {
    (*has_bits)[0] |= 64u;
  }
};

const ::gazebo::msgs::Material_Script&
Material::_Internal::script(const Material* msg) {
  return *msg->script_;
}
const ::gazebo::msgs::Color&
Material::_Internal::ambient(const Material* msg) {
  return *msg->ambient_;
}
const ::gazebo::msgs::Color&
Material::_Internal::diffuse(const Material* msg) {
  return *msg->diffuse_;
}
const ::gazebo::msgs::Color&
Material::_Internal::specular(const Material* msg) {
  return *msg->specular_;
}
const ::gazebo::msgs::Color&
Material::_Internal::emissive(const Material* msg) {
  return *msg->emissive_;
}
void Material::clear_ambient() {
  if (ambient_ != nullptr) ambient_->Clear();
  _has_bits_[0] &= ~0x00000004u;
}
void Material::clear_diffuse() {
  if (diffuse_ != nullptr) diffuse_->Clear();
  _has_bits_[0] &= ~0x00000008u;
}
void Material::clear_specular() {
  if (specular_ != nullptr) specular_->Clear();
  _has_bits_[0] &= ~0x00000010u;
}
void Material::clear_emissive() {
  if (emissive_ != nullptr) emissive_->Clear();
  _has_bits_[0] &= ~0x00000020u;
}
Material::Material()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gazebo.msgs.Material)
}
Material::Material(const Material& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  normal_map_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_normal_map()) {
    normal_map_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.normal_map_);
  }
  if (from._internal_has_script()) {
    script_ = new ::gazebo::msgs::Material_Script(*from.script_);
  } else {
    script_ = nullptr;
  }
  if (from._internal_has_ambient()) {
    ambient_ = new ::gazebo::msgs::Color(*from.ambient_);
  } else {
    ambient_ = nullptr;
  }
  if (from._internal_has_diffuse()) {
    diffuse_ = new ::gazebo::msgs::Color(*from.diffuse_);
  } else {
    diffuse_ = nullptr;
  }
  if (from._internal_has_specular()) {
    specular_ = new ::gazebo::msgs::Color(*from.specular_);
  } else {
    specular_ = nullptr;
  }
  if (from._internal_has_emissive()) {
    emissive_ = new ::gazebo::msgs::Color(*from.emissive_);
  } else {
    emissive_ = nullptr;
  }
  ::memcpy(&lighting_, &from.lighting_,
    static_cast<size_t>(reinterpret_cast<char*>(&shader_type_) -
    reinterpret_cast<char*>(&lighting_)) + sizeof(shader_type_));
  // @@protoc_insertion_point(copy_constructor:gazebo.msgs.Material)
}

void Material::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Material_material_2eproto.base);
  normal_map_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&script_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&lighting_) -
      reinterpret_cast<char*>(&script_)) + sizeof(lighting_));
  shader_type_ = 1;
}

Material::~Material() {
  // @@protoc_insertion_point(destructor:gazebo.msgs.Material)
  SharedDtor();
}

void Material::SharedDtor() {
  normal_map_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete script_;
  if (this != internal_default_instance()) delete ambient_;
  if (this != internal_default_instance()) delete diffuse_;
  if (this != internal_default_instance()) delete specular_;
  if (this != internal_default_instance()) delete emissive_;
}

void Material::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Material& Material::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Material_material_2eproto.base);
  return *internal_default_instance();
}


void Material::Clear() {
// @@protoc_insertion_point(message_clear_start:gazebo.msgs.Material)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000003fu) {
    if (cached_has_bits & 0x00000001u) {
      normal_map_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(script_ != nullptr);
      script_->Clear();
    }
    if (cached_has_bits & 0x00000004u) {
      GOOGLE_DCHECK(ambient_ != nullptr);
      ambient_->Clear();
    }
    if (cached_has_bits & 0x00000008u) {
      GOOGLE_DCHECK(diffuse_ != nullptr);
      diffuse_->Clear();
    }
    if (cached_has_bits & 0x00000010u) {
      GOOGLE_DCHECK(specular_ != nullptr);
      specular_->Clear();
    }
    if (cached_has_bits & 0x00000020u) {
      GOOGLE_DCHECK(emissive_ != nullptr);
      emissive_->Clear();
    }
  }
  if (cached_has_bits & 0x000000c0u) {
    lighting_ = false;
    shader_type_ = 1;
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* Material::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional .gazebo.msgs.Material.Script script = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_script(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .gazebo.msgs.Material.ShaderType shader_type = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::gazebo::msgs::Material_ShaderType_IsValid(val))) {
            _internal_set_shader_type(static_cast<::gazebo::msgs::Material_ShaderType>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(2, val, mutable_unknown_fields());
          }
        } else goto handle_unusual;
        continue;
      // optional string normal_map = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_normal_map();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "gazebo.msgs.Material.normal_map");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .gazebo.msgs.Color ambient = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr = ctx->ParseMessage(_internal_mutable_ambient(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .gazebo.msgs.Color diffuse = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          ptr = ctx->ParseMessage(_internal_mutable_diffuse(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .gazebo.msgs.Color specular = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 50)) {
          ptr = ctx->ParseMessage(_internal_mutable_specular(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .gazebo.msgs.Color emissive = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 58)) {
          ptr = ctx->ParseMessage(_internal_mutable_emissive(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional bool lighting = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 64)) {
          _Internal::set_has_lighting(&has_bits);
          lighting_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* Material::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:gazebo.msgs.Material)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .gazebo.msgs.Material.Script script = 1;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::script(this), target, stream);
  }

  // optional .gazebo.msgs.Material.ShaderType shader_type = 2;
  if (cached_has_bits & 0x00000080u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      2, this->_internal_shader_type(), target);
  }

  // optional string normal_map = 3;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_normal_map().data(), static_cast<int>(this->_internal_normal_map().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "gazebo.msgs.Material.normal_map");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_normal_map(), target);
  }

  // optional .gazebo.msgs.Color ambient = 4;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        4, _Internal::ambient(this), target, stream);
  }

  // optional .gazebo.msgs.Color diffuse = 5;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        5, _Internal::diffuse(this), target, stream);
  }

  // optional .gazebo.msgs.Color specular = 6;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        6, _Internal::specular(this), target, stream);
  }

  // optional .gazebo.msgs.Color emissive = 7;
  if (cached_has_bits & 0x00000020u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        7, _Internal::emissive(this), target, stream);
  }

  // optional bool lighting = 8;
  if (cached_has_bits & 0x00000040u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(8, this->_internal_lighting(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gazebo.msgs.Material)
  return target;
}

size_t Material::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gazebo.msgs.Material)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    // optional string normal_map = 3;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_normal_map());
    }

    // optional .gazebo.msgs.Material.Script script = 1;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *script_);
    }

    // optional .gazebo.msgs.Color ambient = 4;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *ambient_);
    }

    // optional .gazebo.msgs.Color diffuse = 5;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *diffuse_);
    }

    // optional .gazebo.msgs.Color specular = 6;
    if (cached_has_bits & 0x00000010u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *specular_);
    }

    // optional .gazebo.msgs.Color emissive = 7;
    if (cached_has_bits & 0x00000020u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *emissive_);
    }

    // optional bool lighting = 8;
    if (cached_has_bits & 0x00000040u) {
      total_size += 1 + 1;
    }

    // optional .gazebo.msgs.Material.ShaderType shader_type = 2;
    if (cached_has_bits & 0x00000080u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_shader_type());
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

void Material::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gazebo.msgs.Material)
  GOOGLE_DCHECK_NE(&from, this);
  const Material* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Material>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gazebo.msgs.Material)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gazebo.msgs.Material)
    MergeFrom(*source);
  }
}

void Material::MergeFrom(const Material& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gazebo.msgs.Material)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    if (cached_has_bits & 0x00000001u) {
      _has_bits_[0] |= 0x00000001u;
      normal_map_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.normal_map_);
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_mutable_script()->::gazebo::msgs::Material_Script::MergeFrom(from._internal_script());
    }
    if (cached_has_bits & 0x00000004u) {
      _internal_mutable_ambient()->::gazebo::msgs::Color::MergeFrom(from._internal_ambient());
    }
    if (cached_has_bits & 0x00000008u) {
      _internal_mutable_diffuse()->::gazebo::msgs::Color::MergeFrom(from._internal_diffuse());
    }
    if (cached_has_bits & 0x00000010u) {
      _internal_mutable_specular()->::gazebo::msgs::Color::MergeFrom(from._internal_specular());
    }
    if (cached_has_bits & 0x00000020u) {
      _internal_mutable_emissive()->::gazebo::msgs::Color::MergeFrom(from._internal_emissive());
    }
    if (cached_has_bits & 0x00000040u) {
      lighting_ = from.lighting_;
    }
    if (cached_has_bits & 0x00000080u) {
      shader_type_ = from.shader_type_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void Material::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gazebo.msgs.Material)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Material::CopyFrom(const Material& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gazebo.msgs.Material)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Material::IsInitialized() const {
  if (_internal_has_script()) {
    if (!script_->IsInitialized()) return false;
  }
  if (_internal_has_ambient()) {
    if (!ambient_->IsInitialized()) return false;
  }
  if (_internal_has_diffuse()) {
    if (!diffuse_->IsInitialized()) return false;
  }
  if (_internal_has_specular()) {
    if (!specular_->IsInitialized()) return false;
  }
  if (_internal_has_emissive()) {
    if (!emissive_->IsInitialized()) return false;
  }
  return true;
}

void Material::InternalSwap(Material* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  normal_map_.Swap(&other->normal_map_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(script_, other->script_);
  swap(ambient_, other->ambient_);
  swap(diffuse_, other->diffuse_);
  swap(specular_, other->specular_);
  swap(emissive_, other->emissive_);
  swap(lighting_, other->lighting_);
  swap(shader_type_, other->shader_type_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Material::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::gazebo::msgs::Material_Script* Arena::CreateMaybeMessage< ::gazebo::msgs::Material_Script >(Arena* arena) {
  return Arena::CreateInternal< ::gazebo::msgs::Material_Script >(arena);
}
template<> PROTOBUF_NOINLINE ::gazebo::msgs::Material* Arena::CreateMaybeMessage< ::gazebo::msgs::Material >(Arena* arena) {
  return Arena::CreateInternal< ::gazebo::msgs::Material >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

GZ_REGISTER_STATIC_MSG("gazebo.msgs.Material", Material)
// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
