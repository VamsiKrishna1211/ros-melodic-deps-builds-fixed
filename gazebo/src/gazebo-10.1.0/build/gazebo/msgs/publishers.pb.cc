// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: publishers.proto

#include "publishers.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_publish_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Publish_publish_2eproto;
namespace gazebo {
namespace msgs {
class PublishersDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Publishers> _instance;
} _Publishers_default_instance_;
}  // namespace msgs
}  // namespace gazebo
static void InitDefaultsscc_info_Publishers_publishers_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gazebo::msgs::_Publishers_default_instance_;
    new (ptr) ::gazebo::msgs::Publishers();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gazebo::msgs::Publishers::InitAsDefaultInstance();
}

GZ_MSGS_VISIBLE ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Publishers_publishers_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_Publishers_publishers_2eproto}, {
      &scc_info_Publish_publish_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_publishers_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_publishers_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_publishers_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_publishers_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Publishers, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Publishers, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Publishers, publisher_),
  ~0u,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 6, sizeof(::gazebo::msgs::Publishers)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::gazebo::msgs::_Publishers_default_instance_),
};

const char descriptor_table_protodef_publishers_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\020publishers.proto\022\013gazebo.msgs\032\rpublish"
  ".proto\"5\n\nPublishers\022\'\n\tpublisher\030\001 \003(\0132"
  "\024.gazebo.msgs.Publish"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_publishers_2eproto_deps[1] = {
  &::descriptor_table_publish_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_publishers_2eproto_sccs[1] = {
  &scc_info_Publishers_publishers_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_publishers_2eproto_once;
static bool descriptor_table_publishers_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_publishers_2eproto = {
  &descriptor_table_publishers_2eproto_initialized, descriptor_table_protodef_publishers_2eproto, "publishers.proto", 101,
  &descriptor_table_publishers_2eproto_once, descriptor_table_publishers_2eproto_sccs, descriptor_table_publishers_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_publishers_2eproto::offsets,
  file_level_metadata_publishers_2eproto, 1, file_level_enum_descriptors_publishers_2eproto, file_level_service_descriptors_publishers_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_publishers_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_publishers_2eproto), true);
namespace gazebo {
namespace msgs {

// ===================================================================

void Publishers::InitAsDefaultInstance() {
}
class Publishers::_Internal {
 public:
  using HasBits = decltype(std::declval<Publishers>()._has_bits_);
};

void Publishers::clear_publisher() {
  publisher_.Clear();
}
Publishers::Publishers()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gazebo.msgs.Publishers)
}
Publishers::Publishers(const Publishers& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_),
      publisher_(from.publisher_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:gazebo.msgs.Publishers)
}

void Publishers::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Publishers_publishers_2eproto.base);
}

Publishers::~Publishers() {
  // @@protoc_insertion_point(destructor:gazebo.msgs.Publishers)
  SharedDtor();
}

void Publishers::SharedDtor() {
}

void Publishers::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Publishers& Publishers::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Publishers_publishers_2eproto.base);
  return *internal_default_instance();
}


void Publishers::Clear() {
// @@protoc_insertion_point(message_clear_start:gazebo.msgs.Publishers)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  publisher_.Clear();
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* Publishers::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated .gazebo.msgs.Publish publisher = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_publisher(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
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

::PROTOBUF_NAMESPACE_ID::uint8* Publishers::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:gazebo.msgs.Publishers)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .gazebo.msgs.Publish publisher = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_publisher_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, this->_internal_publisher(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gazebo.msgs.Publishers)
  return target;
}

size_t Publishers::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gazebo.msgs.Publishers)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .gazebo.msgs.Publish publisher = 1;
  total_size += 1UL * this->_internal_publisher_size();
  for (const auto& msg : this->publisher_) {
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

void Publishers::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gazebo.msgs.Publishers)
  GOOGLE_DCHECK_NE(&from, this);
  const Publishers* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Publishers>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gazebo.msgs.Publishers)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gazebo.msgs.Publishers)
    MergeFrom(*source);
  }
}

void Publishers::MergeFrom(const Publishers& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gazebo.msgs.Publishers)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  publisher_.MergeFrom(from.publisher_);
}

void Publishers::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gazebo.msgs.Publishers)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Publishers::CopyFrom(const Publishers& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gazebo.msgs.Publishers)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Publishers::IsInitialized() const {
  if (!::PROTOBUF_NAMESPACE_ID::internal::AllAreInitialized(publisher_)) return false;
  return true;
}

void Publishers::InternalSwap(Publishers* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  publisher_.InternalSwap(&other->publisher_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Publishers::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::gazebo::msgs::Publishers* Arena::CreateMaybeMessage< ::gazebo::msgs::Publishers >(Arena* arena) {
  return Arena::CreateInternal< ::gazebo::msgs::Publishers >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

GZ_REGISTER_STATIC_MSG("gazebo.msgs.Publishers", Publishers)
// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>