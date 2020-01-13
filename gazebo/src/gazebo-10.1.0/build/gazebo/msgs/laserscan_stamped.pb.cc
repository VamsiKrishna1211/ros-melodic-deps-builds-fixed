// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: laserscan_stamped.proto

#include "laserscan_stamped.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_laserscan_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_LaserScan_laserscan_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_time_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Time_time_2eproto;
namespace gazebo {
namespace msgs {
class LaserScanStampedDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<LaserScanStamped> _instance;
} _LaserScanStamped_default_instance_;
}  // namespace msgs
}  // namespace gazebo
static void InitDefaultsscc_info_LaserScanStamped_laserscan_5fstamped_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gazebo::msgs::_LaserScanStamped_default_instance_;
    new (ptr) ::gazebo::msgs::LaserScanStamped();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gazebo::msgs::LaserScanStamped::InitAsDefaultInstance();
}

GZ_MSGS_VISIBLE ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_LaserScanStamped_laserscan_5fstamped_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 2, 0, InitDefaultsscc_info_LaserScanStamped_laserscan_5fstamped_2eproto}, {
      &scc_info_Time_time_2eproto.base,
      &scc_info_LaserScan_laserscan_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_laserscan_5fstamped_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_laserscan_5fstamped_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_laserscan_5fstamped_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_laserscan_5fstamped_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::LaserScanStamped, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::LaserScanStamped, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::LaserScanStamped, time_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::LaserScanStamped, scan_),
  0,
  1,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::gazebo::msgs::LaserScanStamped)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::gazebo::msgs::_LaserScanStamped_default_instance_),
};

const char descriptor_table_protodef_laserscan_5fstamped_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\027laserscan_stamped.proto\022\013gazebo.msgs\032\n"
  "time.proto\032\017laserscan.proto\"Y\n\020LaserScan"
  "Stamped\022\037\n\004time\030\001 \002(\0132\021.gazebo.msgs.Time"
  "\022$\n\004scan\030\002 \002(\0132\026.gazebo.msgs.LaserScan"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_laserscan_5fstamped_2eproto_deps[2] = {
  &::descriptor_table_laserscan_2eproto,
  &::descriptor_table_time_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_laserscan_5fstamped_2eproto_sccs[1] = {
  &scc_info_LaserScanStamped_laserscan_5fstamped_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_laserscan_5fstamped_2eproto_once;
static bool descriptor_table_laserscan_5fstamped_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_laserscan_5fstamped_2eproto = {
  &descriptor_table_laserscan_5fstamped_2eproto_initialized, descriptor_table_protodef_laserscan_5fstamped_2eproto, "laserscan_stamped.proto", 158,
  &descriptor_table_laserscan_5fstamped_2eproto_once, descriptor_table_laserscan_5fstamped_2eproto_sccs, descriptor_table_laserscan_5fstamped_2eproto_deps, 1, 2,
  schemas, file_default_instances, TableStruct_laserscan_5fstamped_2eproto::offsets,
  file_level_metadata_laserscan_5fstamped_2eproto, 1, file_level_enum_descriptors_laserscan_5fstamped_2eproto, file_level_service_descriptors_laserscan_5fstamped_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_laserscan_5fstamped_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_laserscan_5fstamped_2eproto), true);
namespace gazebo {
namespace msgs {

// ===================================================================

void LaserScanStamped::InitAsDefaultInstance() {
  ::gazebo::msgs::_LaserScanStamped_default_instance_._instance.get_mutable()->time_ = const_cast< ::gazebo::msgs::Time*>(
      ::gazebo::msgs::Time::internal_default_instance());
  ::gazebo::msgs::_LaserScanStamped_default_instance_._instance.get_mutable()->scan_ = const_cast< ::gazebo::msgs::LaserScan*>(
      ::gazebo::msgs::LaserScan::internal_default_instance());
}
class LaserScanStamped::_Internal {
 public:
  using HasBits = decltype(std::declval<LaserScanStamped>()._has_bits_);
  static const ::gazebo::msgs::Time& time(const LaserScanStamped* msg);
  static void set_has_time(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static const ::gazebo::msgs::LaserScan& scan(const LaserScanStamped* msg);
  static void set_has_scan(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

const ::gazebo::msgs::Time&
LaserScanStamped::_Internal::time(const LaserScanStamped* msg) {
  return *msg->time_;
}
const ::gazebo::msgs::LaserScan&
LaserScanStamped::_Internal::scan(const LaserScanStamped* msg) {
  return *msg->scan_;
}
void LaserScanStamped::clear_time() {
  if (time_ != nullptr) time_->Clear();
  _has_bits_[0] &= ~0x00000001u;
}
void LaserScanStamped::clear_scan() {
  if (scan_ != nullptr) scan_->Clear();
  _has_bits_[0] &= ~0x00000002u;
}
LaserScanStamped::LaserScanStamped()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gazebo.msgs.LaserScanStamped)
}
LaserScanStamped::LaserScanStamped(const LaserScanStamped& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from._internal_has_time()) {
    time_ = new ::gazebo::msgs::Time(*from.time_);
  } else {
    time_ = nullptr;
  }
  if (from._internal_has_scan()) {
    scan_ = new ::gazebo::msgs::LaserScan(*from.scan_);
  } else {
    scan_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:gazebo.msgs.LaserScanStamped)
}

void LaserScanStamped::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_LaserScanStamped_laserscan_5fstamped_2eproto.base);
  ::memset(&time_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&scan_) -
      reinterpret_cast<char*>(&time_)) + sizeof(scan_));
}

LaserScanStamped::~LaserScanStamped() {
  // @@protoc_insertion_point(destructor:gazebo.msgs.LaserScanStamped)
  SharedDtor();
}

void LaserScanStamped::SharedDtor() {
  if (this != internal_default_instance()) delete time_;
  if (this != internal_default_instance()) delete scan_;
}

void LaserScanStamped::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const LaserScanStamped& LaserScanStamped::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_LaserScanStamped_laserscan_5fstamped_2eproto.base);
  return *internal_default_instance();
}


void LaserScanStamped::Clear() {
// @@protoc_insertion_point(message_clear_start:gazebo.msgs.LaserScanStamped)
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
      GOOGLE_DCHECK(scan_ != nullptr);
      scan_->Clear();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* LaserScanStamped::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
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
      // required .gazebo.msgs.LaserScan scan = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_scan(), ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* LaserScanStamped::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:gazebo.msgs.LaserScanStamped)
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

  // required .gazebo.msgs.LaserScan scan = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::scan(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gazebo.msgs.LaserScanStamped)
  return target;
}

size_t LaserScanStamped::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:gazebo.msgs.LaserScanStamped)
  size_t total_size = 0;

  if (_internal_has_time()) {
    // required .gazebo.msgs.Time time = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *time_);
  }

  if (_internal_has_scan()) {
    // required .gazebo.msgs.LaserScan scan = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *scan_);
  }

  return total_size;
}
size_t LaserScanStamped::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gazebo.msgs.LaserScanStamped)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required .gazebo.msgs.Time time = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *time_);

    // required .gazebo.msgs.LaserScan scan = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *scan_);

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

void LaserScanStamped::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gazebo.msgs.LaserScanStamped)
  GOOGLE_DCHECK_NE(&from, this);
  const LaserScanStamped* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<LaserScanStamped>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gazebo.msgs.LaserScanStamped)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gazebo.msgs.LaserScanStamped)
    MergeFrom(*source);
  }
}

void LaserScanStamped::MergeFrom(const LaserScanStamped& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gazebo.msgs.LaserScanStamped)
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
      _internal_mutable_scan()->::gazebo::msgs::LaserScan::MergeFrom(from._internal_scan());
    }
  }
}

void LaserScanStamped::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gazebo.msgs.LaserScanStamped)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LaserScanStamped::CopyFrom(const LaserScanStamped& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gazebo.msgs.LaserScanStamped)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LaserScanStamped::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  if (_internal_has_time()) {
    if (!time_->IsInitialized()) return false;
  }
  if (_internal_has_scan()) {
    if (!scan_->IsInitialized()) return false;
  }
  return true;
}

void LaserScanStamped::InternalSwap(LaserScanStamped* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(time_, other->time_);
  swap(scan_, other->scan_);
}

::PROTOBUF_NAMESPACE_ID::Metadata LaserScanStamped::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::gazebo::msgs::LaserScanStamped* Arena::CreateMaybeMessage< ::gazebo::msgs::LaserScanStamped >(Arena* arena) {
  return Arena::CreateInternal< ::gazebo::msgs::LaserScanStamped >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

GZ_REGISTER_STATIC_MSG("gazebo.msgs.LaserScanStamped", LaserScanStamped)
// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
