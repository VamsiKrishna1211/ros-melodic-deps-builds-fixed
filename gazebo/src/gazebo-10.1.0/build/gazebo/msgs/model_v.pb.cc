// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: model_v.proto

#include "model_v.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_model_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<6> scc_info_Model_model_2eproto;
namespace gazebo {
namespace msgs {
class Model_VDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Model_V> _instance;
} _Model_V_default_instance_;
}  // namespace msgs
}  // namespace gazebo
static void InitDefaultsscc_info_Model_V_model_5fv_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gazebo::msgs::_Model_V_default_instance_;
    new (ptr) ::gazebo::msgs::Model_V();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gazebo::msgs::Model_V::InitAsDefaultInstance();
}

GZ_MSGS_VISIBLE ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Model_V_model_5fv_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_Model_V_model_5fv_2eproto}, {
      &scc_info_Model_model_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_model_5fv_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_model_5fv_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_model_5fv_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_model_5fv_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Model_V, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Model_V, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Model_V, models_),
  ~0u,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 6, sizeof(::gazebo::msgs::Model_V)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::gazebo::msgs::_Model_V_default_instance_),
};

const char descriptor_table_protodef_model_5fv_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\rmodel_v.proto\022\013gazebo.msgs\032\013model.prot"
  "o\"-\n\007Model_V\022\"\n\006models\030\002 \003(\0132\022.gazebo.ms"
  "gs.Model"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_model_5fv_2eproto_deps[1] = {
  &::descriptor_table_model_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_model_5fv_2eproto_sccs[1] = {
  &scc_info_Model_V_model_5fv_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_model_5fv_2eproto_once;
static bool descriptor_table_model_5fv_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_model_5fv_2eproto = {
  &descriptor_table_model_5fv_2eproto_initialized, descriptor_table_protodef_model_5fv_2eproto, "model_v.proto", 88,
  &descriptor_table_model_5fv_2eproto_once, descriptor_table_model_5fv_2eproto_sccs, descriptor_table_model_5fv_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_model_5fv_2eproto::offsets,
  file_level_metadata_model_5fv_2eproto, 1, file_level_enum_descriptors_model_5fv_2eproto, file_level_service_descriptors_model_5fv_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_model_5fv_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_model_5fv_2eproto), true);
namespace gazebo {
namespace msgs {

// ===================================================================

void Model_V::InitAsDefaultInstance() {
}
class Model_V::_Internal {
 public:
  using HasBits = decltype(std::declval<Model_V>()._has_bits_);
};

void Model_V::clear_models() {
  models_.Clear();
}
Model_V::Model_V()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gazebo.msgs.Model_V)
}
Model_V::Model_V(const Model_V& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_),
      models_(from.models_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:gazebo.msgs.Model_V)
}

void Model_V::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Model_V_model_5fv_2eproto.base);
}

Model_V::~Model_V() {
  // @@protoc_insertion_point(destructor:gazebo.msgs.Model_V)
  SharedDtor();
}

void Model_V::SharedDtor() {
}

void Model_V::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Model_V& Model_V::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Model_V_model_5fv_2eproto.base);
  return *internal_default_instance();
}


void Model_V::Clear() {
// @@protoc_insertion_point(message_clear_start:gazebo.msgs.Model_V)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  models_.Clear();
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* Model_V::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated .gazebo.msgs.Model models = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_models(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
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
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Model_V::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:gazebo.msgs.Model_V)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .gazebo.msgs.Model models = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_models_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, this->_internal_models(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gazebo.msgs.Model_V)
  return target;
}

size_t Model_V::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gazebo.msgs.Model_V)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .gazebo.msgs.Model models = 2;
  total_size += 1UL * this->_internal_models_size();
  for (const auto& msg : this->models_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Model_V::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gazebo.msgs.Model_V)
  GOOGLE_DCHECK_NE(&from, this);
  const Model_V* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Model_V>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gazebo.msgs.Model_V)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gazebo.msgs.Model_V)
    MergeFrom(*source);
  }
}

void Model_V::MergeFrom(const Model_V& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gazebo.msgs.Model_V)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  models_.MergeFrom(from.models_);
}

void Model_V::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gazebo.msgs.Model_V)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Model_V::CopyFrom(const Model_V& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gazebo.msgs.Model_V)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Model_V::IsInitialized() const {
  if (!::PROTOBUF_NAMESPACE_ID::internal::AllAreInitialized(models_)) return false;
  return true;
}

void Model_V::InternalSwap(Model_V* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  models_.InternalSwap(&other->models_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Model_V::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::gazebo::msgs::Model_V* Arena::CreateMaybeMessage< ::gazebo::msgs::Model_V >(Arena* arena) {
  return Arena::CreateInternal< ::gazebo::msgs::Model_V >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

GZ_REGISTER_STATIC_MSG("gazebo.msgs.Model_V", Model_V)
// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
