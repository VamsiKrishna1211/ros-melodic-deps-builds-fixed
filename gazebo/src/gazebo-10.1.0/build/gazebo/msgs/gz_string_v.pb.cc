// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz_string_v.proto

#include "gz_string_v.pb.h"

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
namespace gazebo {
namespace msgs {
class GzString_VDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<GzString_V> _instance;
} _GzString_V_default_instance_;
}  // namespace msgs
}  // namespace gazebo
static void InitDefaultsscc_info_GzString_V_gz_5fstring_5fv_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gazebo::msgs::_GzString_V_default_instance_;
    new (ptr) ::gazebo::msgs::GzString_V();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gazebo::msgs::GzString_V::InitAsDefaultInstance();
}

GZ_MSGS_VISIBLE ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_GzString_V_gz_5fstring_5fv_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_GzString_V_gz_5fstring_5fv_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_gz_5fstring_5fv_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_gz_5fstring_5fv_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_gz_5fstring_5fv_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_gz_5fstring_5fv_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::GzString_V, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::GzString_V, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::GzString_V, data_),
  ~0u,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 6, sizeof(::gazebo::msgs::GzString_V)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::gazebo::msgs::_GzString_V_default_instance_),
};

const char descriptor_table_protodef_gz_5fstring_5fv_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\021gz_string_v.proto\022\013gazebo.msgs\"\032\n\nGzSt"
  "ring_V\022\014\n\004data\030\001 \003(\t"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_gz_5fstring_5fv_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_gz_5fstring_5fv_2eproto_sccs[1] = {
  &scc_info_GzString_V_gz_5fstring_5fv_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_gz_5fstring_5fv_2eproto_once;
static bool descriptor_table_gz_5fstring_5fv_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_gz_5fstring_5fv_2eproto = {
  &descriptor_table_gz_5fstring_5fv_2eproto_initialized, descriptor_table_protodef_gz_5fstring_5fv_2eproto, "gz_string_v.proto", 60,
  &descriptor_table_gz_5fstring_5fv_2eproto_once, descriptor_table_gz_5fstring_5fv_2eproto_sccs, descriptor_table_gz_5fstring_5fv_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_gz_5fstring_5fv_2eproto::offsets,
  file_level_metadata_gz_5fstring_5fv_2eproto, 1, file_level_enum_descriptors_gz_5fstring_5fv_2eproto, file_level_service_descriptors_gz_5fstring_5fv_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_gz_5fstring_5fv_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_gz_5fstring_5fv_2eproto), true);
namespace gazebo {
namespace msgs {

// ===================================================================

void GzString_V::InitAsDefaultInstance() {
}
class GzString_V::_Internal {
 public:
  using HasBits = decltype(std::declval<GzString_V>()._has_bits_);
};

GzString_V::GzString_V()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gazebo.msgs.GzString_V)
}
GzString_V::GzString_V(const GzString_V& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_),
      data_(from.data_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:gazebo.msgs.GzString_V)
}

void GzString_V::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_GzString_V_gz_5fstring_5fv_2eproto.base);
}

GzString_V::~GzString_V() {
  // @@protoc_insertion_point(destructor:gazebo.msgs.GzString_V)
  SharedDtor();
}

void GzString_V::SharedDtor() {
}

void GzString_V::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const GzString_V& GzString_V::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_GzString_V_gz_5fstring_5fv_2eproto.base);
  return *internal_default_instance();
}


void GzString_V::Clear() {
// @@protoc_insertion_point(message_clear_start:gazebo.msgs.GzString_V)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  data_.Clear();
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* GzString_V::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated string data = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_data();
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
            #ifndef NDEBUG
            ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "gazebo.msgs.GzString_V.data");
            #endif  // !NDEBUG
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

::PROTOBUF_NAMESPACE_ID::uint8* GzString_V::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:gazebo.msgs.GzString_V)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated string data = 1;
  for (int i = 0, n = this->_internal_data_size(); i < n; i++) {
    const auto& s = this->_internal_data(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "gazebo.msgs.GzString_V.data");
    target = stream->WriteString(1, s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gazebo.msgs.GzString_V)
  return target;
}

size_t GzString_V::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gazebo.msgs.GzString_V)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string data = 1;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(data_.size());
  for (int i = 0, n = data_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      data_.Get(i));
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void GzString_V::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gazebo.msgs.GzString_V)
  GOOGLE_DCHECK_NE(&from, this);
  const GzString_V* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<GzString_V>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gazebo.msgs.GzString_V)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gazebo.msgs.GzString_V)
    MergeFrom(*source);
  }
}

void GzString_V::MergeFrom(const GzString_V& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gazebo.msgs.GzString_V)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  data_.MergeFrom(from.data_);
}

void GzString_V::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gazebo.msgs.GzString_V)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GzString_V::CopyFrom(const GzString_V& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gazebo.msgs.GzString_V)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GzString_V::IsInitialized() const {
  return true;
}

void GzString_V::InternalSwap(GzString_V* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  data_.InternalSwap(&other->data_);
}

::PROTOBUF_NAMESPACE_ID::Metadata GzString_V::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::gazebo::msgs::GzString_V* Arena::CreateMaybeMessage< ::gazebo::msgs::GzString_V >(Arena* arena) {
  return Arena::CreateInternal< ::gazebo::msgs::GzString_V >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

GZ_REGISTER_STATIC_MSG("gazebo.msgs.GzString_V", GzString_V)
// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
