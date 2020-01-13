// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sonar_stamped.proto

#include "sonar_stamped.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_sonar_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_Sonar_sonar_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_time_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Time_time_2eproto;
namespace gazebo {
namespace msgs {
class SonarStampedDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<SonarStamped> _instance;
} _SonarStamped_default_instance_;
}  // namespace msgs
}  // namespace gazebo
static void InitDefaultsscc_info_SonarStamped_sonar_5fstamped_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gazebo::msgs::_SonarStamped_default_instance_;
    new (ptr) ::gazebo::msgs::SonarStamped();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gazebo::msgs::SonarStamped::InitAsDefaultInstance();
}

GZ_MSGS_VISIBLE ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_SonarStamped_sonar_5fstamped_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 2, 0, InitDefaultsscc_info_SonarStamped_sonar_5fstamped_2eproto}, {
      &scc_info_Time_time_2eproto.base,
      &scc_info_Sonar_sonar_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_sonar_5fstamped_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_sonar_5fstamped_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_sonar_5fstamped_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_sonar_5fstamped_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::SonarStamped, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::SonarStamped, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::SonarStamped, time_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::SonarStamped, sonar_),
  0,
  1,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::gazebo::msgs::SonarStamped)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::gazebo::msgs::_SonarStamped_default_instance_),
};

const char descriptor_table_protodef_sonar_5fstamped_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\023sonar_stamped.proto\022\013gazebo.msgs\032\ntime"
  ".proto\032\013sonar.proto\"R\n\014SonarStamped\022\037\n\004t"
  "ime\030\001 \002(\0132\021.gazebo.msgs.Time\022!\n\005sonar\030\002 "
  "\002(\0132\022.gazebo.msgs.Sonar"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_sonar_5fstamped_2eproto_deps[2] = {
  &::descriptor_table_sonar_2eproto,
  &::descriptor_table_time_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_sonar_5fstamped_2eproto_sccs[1] = {
  &scc_info_SonarStamped_sonar_5fstamped_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_sonar_5fstamped_2eproto_once;
static bool descriptor_table_sonar_5fstamped_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_sonar_5fstamped_2eproto = {
  &descriptor_table_sonar_5fstamped_2eproto_initialized, descriptor_table_protodef_sonar_5fstamped_2eproto, "sonar_stamped.proto", 143,
  &descriptor_table_sonar_5fstamped_2eproto_once, descriptor_table_sonar_5fstamped_2eproto_sccs, descriptor_table_sonar_5fstamped_2eproto_deps, 1, 2,
  schemas, file_default_instances, TableStruct_sonar_5fstamped_2eproto::offsets,
  file_level_metadata_sonar_5fstamped_2eproto, 1, file_level_enum_descriptors_sonar_5fstamped_2eproto, file_level_service_descriptors_sonar_5fstamped_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_sonar_5fstamped_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_sonar_5fstamped_2eproto), true);
namespace gazebo {
namespace msgs {

// ===================================================================

void SonarStamped::InitAsDefaultInstance() {
  ::gazebo::msgs::_SonarStamped_default_instance_._instance.get_mutable()->time_ = const_cast< ::gazebo::msgs::Time*>(
      ::gazebo::msgs::Time::internal_default_instance());
  ::gazebo::msgs::_SonarStamped_default_instance_._instance.get_mutable()->sonar_ = const_cast< ::gazebo::msgs::Sonar*>(
      ::gazebo::msgs::Sonar::internal_default_instance());
}
class SonarStamped::_Internal {
 public:
  using HasBits = decltype(std::declval<SonarStamped>()._has_bits_);
  static const ::gazebo::msgs::Time& time(const SonarStamped* msg);
  static void set_has_time(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static const ::gazebo::msgs::Sonar& sonar(const SonarStamped* msg);
  static void set_has_sonar(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

const ::gazebo::msgs::Time&
SonarStamped::_Internal::time(const SonarStamped* msg) {
  return *msg->time_;
}
const ::gazebo::msgs::Sonar&
SonarStamped::_Internal::sonar(const SonarStamped* msg) {
  return *msg->sonar_;
}
void SonarStamped::clear_time() {
  if (time_ != nullptr) time_->Clear();
  _has_bits_[0] &= ~0x00000001u;
}
void SonarStamped::clear_sonar() {
  if (sonar_ != nullptr) sonar_->Clear();
  _has_bits_[0] &= ~0x00000002u;
}
SonarStamped::SonarStamped()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gazebo.msgs.SonarStamped)
}
SonarStamped::SonarStamped(const SonarStamped& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from._internal_has_time()) {
    time_ = new ::gazebo::msgs::Time(*from.time_);
  } else {
    time_ = nullptr;
  }
  if (from._internal_has_sonar()) {
    sonar_ = new ::gazebo::msgs::Sonar(*from.sonar_);
  } else {
    sonar_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:gazebo.msgs.SonarStamped)
}

void SonarStamped::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_SonarStamped_sonar_5fstamped_2eproto.base);
  ::memset(&time_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&sonar_) -
      reinterpret_cast<char*>(&time_)) + sizeof(sonar_));
}

SonarStamped::~SonarStamped() {
  // @@protoc_insertion_point(destructor:gazebo.msgs.SonarStamped)
  SharedDtor();
}

void SonarStamped::SharedDtor() {
  if (this != internal_default_instance()) delete time_;
  if (this != internal_default_instance()) delete sonar_;
}

void SonarStamped::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const SonarStamped& SonarStamped::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_SonarStamped_sonar_5fstamped_2eproto.base);
  return *internal_default_instance();
}


void SonarStamped::Clear() {
// @@protoc_insertion_point(message_clear_start:gazebo.msgs.SonarStamped)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(time_ != nullptr);
      time_->Clear();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(sonar_ != nullptr);
      sonar_->Clear();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* SonarStamped::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // required .gazebo.msgs.Time time = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_time(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required .gazebo.msgs.Sonar sonar = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_sonar(), ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* SonarStamped::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:gazebo.msgs.SonarStamped)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required .gazebo.msgs.Time time = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::time(this), target, stream);
  }

  // required .gazebo.msgs.Sonar sonar = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::sonar(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gazebo.msgs.SonarStamped)
  return target;
}

size_t SonarStamped::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:gazebo.msgs.SonarStamped)
  size_t total_size = 0;

  if (_internal_has_time()) {
    // required .gazebo.msgs.Time time = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *time_);
  }

  if (_internal_has_sonar()) {
    // required .gazebo.msgs.Sonar sonar = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *sonar_);
  }

  return total_size;
}
size_t SonarStamped::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gazebo.msgs.SonarStamped)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required .gazebo.msgs.Time time = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *time_);

    // required .gazebo.msgs.Sonar sonar = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *sonar_);

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SonarStamped::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gazebo.msgs.SonarStamped)
  GOOGLE_DCHECK_NE(&from, this);
  const SonarStamped* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<SonarStamped>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gazebo.msgs.SonarStamped)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gazebo.msgs.SonarStamped)
    MergeFrom(*source);
  }
}

void SonarStamped::MergeFrom(const SonarStamped& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gazebo.msgs.SonarStamped)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _internal_mutable_time()->::gazebo::msgs::Time::MergeFrom(from._internal_time());
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_mutable_sonar()->::gazebo::msgs::Sonar::MergeFrom(from._internal_sonar());
    }
  }
}

void SonarStamped::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gazebo.msgs.SonarStamped)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SonarStamped::CopyFrom(const SonarStamped& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gazebo.msgs.SonarStamped)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SonarStamped::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  if (_internal_has_time()) {
    if (!time_->IsInitialized()) return false;
  }
  if (_internal_has_sonar()) {
    if (!sonar_->IsInitialized()) return false;
  }
  return true;
}

void SonarStamped::InternalSwap(SonarStamped* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(time_, other->time_);
  swap(sonar_, other->sonar_);
}

::PROTOBUF_NAMESPACE_ID::Metadata SonarStamped::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::gazebo::msgs::SonarStamped* Arena::CreateMaybeMessage< ::gazebo::msgs::SonarStamped >(Arena* arena) {
  return Arena::CreateInternal< ::gazebo::msgs::SonarStamped >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

GZ_REGISTER_STATIC_MSG("gazebo.msgs.SonarStamped", SonarStamped)
// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>