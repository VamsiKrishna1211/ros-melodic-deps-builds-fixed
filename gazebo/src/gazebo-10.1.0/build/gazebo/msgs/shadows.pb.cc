// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: shadows.proto

#include "shadows.pb.h"

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
namespace gazebo {
namespace msgs {
class ShadowsDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Shadows> _instance;
} _Shadows_default_instance_;
}  // namespace msgs
}  // namespace gazebo
static void InitDefaultsscc_info_Shadows_shadows_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gazebo::msgs::_Shadows_default_instance_;
    new (ptr) ::gazebo::msgs::Shadows();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gazebo::msgs::Shadows::InitAsDefaultInstance();
}

GZ_MSGS_VISIBLE ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Shadows_shadows_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_Shadows_shadows_2eproto}, {
      &scc_info_Color_color_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_shadows_2eproto[1];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_shadows_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_shadows_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_shadows_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Shadows, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Shadows, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Shadows, type_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Shadows, color_),
  1,
  0,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::gazebo::msgs::Shadows)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::gazebo::msgs::_Shadows_default_instance_),
};

const char descriptor_table_protodef_shadows_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\rshadows.proto\022\013gazebo.msgs\032\013color.prot"
  "o\"\305\001\n\007Shadows\022-\n\004type\030\005 \001(\0162\037.gazebo.msg"
  "s.Shadows.ShadowType\022!\n\005color\030\006 \001(\0132\022.ga"
  "zebo.msgs.Color\"h\n\nShadowType\022\024\n\020STENCIL"
  "_ADDITIVE\020\001\022\026\n\022STENCIL_MODULATIVE\020\002\022\024\n\020T"
  "EXTURE_ADDITIVE\020\003\022\026\n\022TEXTURE_MODULATIVE\020"
  "\004"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_shadows_2eproto_deps[1] = {
  &::descriptor_table_color_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_shadows_2eproto_sccs[1] = {
  &scc_info_Shadows_shadows_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_shadows_2eproto_once;
static bool descriptor_table_shadows_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_shadows_2eproto = {
  &descriptor_table_shadows_2eproto_initialized, descriptor_table_protodef_shadows_2eproto, "shadows.proto", 241,
  &descriptor_table_shadows_2eproto_once, descriptor_table_shadows_2eproto_sccs, descriptor_table_shadows_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_shadows_2eproto::offsets,
  file_level_metadata_shadows_2eproto, 1, file_level_enum_descriptors_shadows_2eproto, file_level_service_descriptors_shadows_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_shadows_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_shadows_2eproto), true);
namespace gazebo {
namespace msgs {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Shadows_ShadowType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_shadows_2eproto);
  return file_level_enum_descriptors_shadows_2eproto[0];
}
bool Shadows_ShadowType_IsValid(int value) {
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
constexpr Shadows_ShadowType Shadows::STENCIL_ADDITIVE;
constexpr Shadows_ShadowType Shadows::STENCIL_MODULATIVE;
constexpr Shadows_ShadowType Shadows::TEXTURE_ADDITIVE;
constexpr Shadows_ShadowType Shadows::TEXTURE_MODULATIVE;
constexpr Shadows_ShadowType Shadows::ShadowType_MIN;
constexpr Shadows_ShadowType Shadows::ShadowType_MAX;
constexpr int Shadows::ShadowType_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)

// ===================================================================

void Shadows::InitAsDefaultInstance() {
  ::gazebo::msgs::_Shadows_default_instance_._instance.get_mutable()->color_ = const_cast< ::gazebo::msgs::Color*>(
      ::gazebo::msgs::Color::internal_default_instance());
}
class Shadows::_Internal {
 public:
  using HasBits = decltype(std::declval<Shadows>()._has_bits_);
  static void set_has_type(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static const ::gazebo::msgs::Color& color(const Shadows* msg);
  static void set_has_color(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

const ::gazebo::msgs::Color&
Shadows::_Internal::color(const Shadows* msg) {
  return *msg->color_;
}
void Shadows::clear_color() {
  if (color_ != nullptr) color_->Clear();
  _has_bits_[0] &= ~0x00000001u;
}
Shadows::Shadows()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gazebo.msgs.Shadows)
}
Shadows::Shadows(const Shadows& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from._internal_has_color()) {
    color_ = new ::gazebo::msgs::Color(*from.color_);
  } else {
    color_ = nullptr;
  }
  type_ = from.type_;
  // @@protoc_insertion_point(copy_constructor:gazebo.msgs.Shadows)
}

void Shadows::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Shadows_shadows_2eproto.base);
  color_ = nullptr;
  type_ = 1;
}

Shadows::~Shadows() {
  // @@protoc_insertion_point(destructor:gazebo.msgs.Shadows)
  SharedDtor();
}

void Shadows::SharedDtor() {
  if (this != internal_default_instance()) delete color_;
}

void Shadows::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Shadows& Shadows::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Shadows_shadows_2eproto.base);
  return *internal_default_instance();
}


void Shadows::Clear() {
// @@protoc_insertion_point(message_clear_start:gazebo.msgs.Shadows)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(color_ != nullptr);
      color_->Clear();
    }
    type_ = 1;
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* Shadows::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional .gazebo.msgs.Shadows.ShadowType type = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 40)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::gazebo::msgs::Shadows_ShadowType_IsValid(val))) {
            _internal_set_type(static_cast<::gazebo::msgs::Shadows_ShadowType>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(5, val, mutable_unknown_fields());
          }
        } else goto handle_unusual;
        continue;
      // optional .gazebo.msgs.Color color = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 50)) {
          ptr = ctx->ParseMessage(_internal_mutable_color(), ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* Shadows::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:gazebo.msgs.Shadows)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .gazebo.msgs.Shadows.ShadowType type = 5;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      5, this->_internal_type(), target);
  }

  // optional .gazebo.msgs.Color color = 6;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        6, _Internal::color(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gazebo.msgs.Shadows)
  return target;
}

size_t Shadows::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gazebo.msgs.Shadows)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional .gazebo.msgs.Color color = 6;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *color_);
    }

    // optional .gazebo.msgs.Shadows.ShadowType type = 5;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_type());
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

void Shadows::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gazebo.msgs.Shadows)
  GOOGLE_DCHECK_NE(&from, this);
  const Shadows* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Shadows>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gazebo.msgs.Shadows)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gazebo.msgs.Shadows)
    MergeFrom(*source);
  }
}

void Shadows::MergeFrom(const Shadows& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gazebo.msgs.Shadows)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _internal_mutable_color()->::gazebo::msgs::Color::MergeFrom(from._internal_color());
    }
    if (cached_has_bits & 0x00000002u) {
      type_ = from.type_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void Shadows::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gazebo.msgs.Shadows)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Shadows::CopyFrom(const Shadows& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gazebo.msgs.Shadows)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Shadows::IsInitialized() const {
  if (_internal_has_color()) {
    if (!color_->IsInitialized()) return false;
  }
  return true;
}

void Shadows::InternalSwap(Shadows* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(color_, other->color_);
  swap(type_, other->type_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Shadows::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::gazebo::msgs::Shadows* Arena::CreateMaybeMessage< ::gazebo::msgs::Shadows >(Arena* arena) {
  return Arena::CreateInternal< ::gazebo::msgs::Shadows >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

GZ_REGISTER_STATIC_MSG("gazebo.msgs.Shadows", Shadows)
// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>