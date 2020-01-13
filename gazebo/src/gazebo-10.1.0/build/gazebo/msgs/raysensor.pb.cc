// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: raysensor.proto

#include "raysensor.pb.h"

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
class RaySensorDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<RaySensor> _instance;
} _RaySensor_default_instance_;
}  // namespace msgs
}  // namespace gazebo
static void InitDefaultsscc_info_RaySensor_raysensor_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gazebo::msgs::_RaySensor_default_instance_;
    new (ptr) ::gazebo::msgs::RaySensor();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gazebo::msgs::RaySensor::InitAsDefaultInstance();
}

GZ_MSGS_VISIBLE ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_RaySensor_raysensor_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_RaySensor_raysensor_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_raysensor_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_raysensor_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_raysensor_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_raysensor_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::RaySensor, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::RaySensor, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::RaySensor, display_scan_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::RaySensor, horizontal_samples_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::RaySensor, horizontal_resolution_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::RaySensor, horizontal_min_angle_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::RaySensor, horizontal_max_angle_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::RaySensor, vertical_samples_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::RaySensor, vertical_resolution_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::RaySensor, vertical_min_angle_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::RaySensor, vertical_max_angle_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::RaySensor, range_min_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::RaySensor, range_max_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::RaySensor, range_resolution_),
  0,
  1,
  2,
  3,
  4,
  11,
  5,
  6,
  7,
  8,
  9,
  10,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 17, sizeof(::gazebo::msgs::RaySensor)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::gazebo::msgs::_RaySensor_default_instance_),
};

const char descriptor_table_protodef_raysensor_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\017raysensor.proto\022\013gazebo.msgs\"\307\002\n\tRaySe"
  "nsor\022\024\n\014display_scan\030\001 \001(\010\022\032\n\022horizontal"
  "_samples\030\002 \001(\005\022\035\n\025horizontal_resolution\030"
  "\003 \001(\001\022\034\n\024horizontal_min_angle\030\004 \001(\001\022\034\n\024h"
  "orizontal_max_angle\030\005 \001(\001\022\030\n\020vertical_sa"
  "mples\030\006 \001(\005\022\033\n\023vertical_resolution\030\007 \001(\001"
  "\022\032\n\022vertical_min_angle\030\010 \001(\001\022\032\n\022vertical"
  "_max_angle\030\t \001(\001\022\021\n\trange_min\030\n \001(\001\022\021\n\tr"
  "ange_max\030\013 \001(\001\022\030\n\020range_resolution\030\014 \001(\001"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_raysensor_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_raysensor_2eproto_sccs[1] = {
  &scc_info_RaySensor_raysensor_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_raysensor_2eproto_once;
static bool descriptor_table_raysensor_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_raysensor_2eproto = {
  &descriptor_table_raysensor_2eproto_initialized, descriptor_table_protodef_raysensor_2eproto, "raysensor.proto", 360,
  &descriptor_table_raysensor_2eproto_once, descriptor_table_raysensor_2eproto_sccs, descriptor_table_raysensor_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_raysensor_2eproto::offsets,
  file_level_metadata_raysensor_2eproto, 1, file_level_enum_descriptors_raysensor_2eproto, file_level_service_descriptors_raysensor_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_raysensor_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_raysensor_2eproto), true);
namespace gazebo {
namespace msgs {

// ===================================================================

void RaySensor::InitAsDefaultInstance() {
}
class RaySensor::_Internal {
 public:
  using HasBits = decltype(std::declval<RaySensor>()._has_bits_);
  static void set_has_display_scan(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_horizontal_samples(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_horizontal_resolution(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_horizontal_min_angle(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_horizontal_max_angle(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_vertical_samples(HasBits* has_bits) {
    (*has_bits)[0] |= 2048u;
  }
  static void set_has_vertical_resolution(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
  static void set_has_vertical_min_angle(HasBits* has_bits) {
    (*has_bits)[0] |= 64u;
  }
  static void set_has_vertical_max_angle(HasBits* has_bits) {
    (*has_bits)[0] |= 128u;
  }
  static void set_has_range_min(HasBits* has_bits) {
    (*has_bits)[0] |= 256u;
  }
  static void set_has_range_max(HasBits* has_bits) {
    (*has_bits)[0] |= 512u;
  }
  static void set_has_range_resolution(HasBits* has_bits) {
    (*has_bits)[0] |= 1024u;
  }
};

RaySensor::RaySensor()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gazebo.msgs.RaySensor)
}
RaySensor::RaySensor(const RaySensor& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&display_scan_, &from.display_scan_,
    static_cast<size_t>(reinterpret_cast<char*>(&vertical_samples_) -
    reinterpret_cast<char*>(&display_scan_)) + sizeof(vertical_samples_));
  // @@protoc_insertion_point(copy_constructor:gazebo.msgs.RaySensor)
}

void RaySensor::SharedCtor() {
  ::memset(&display_scan_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&vertical_samples_) -
      reinterpret_cast<char*>(&display_scan_)) + sizeof(vertical_samples_));
}

RaySensor::~RaySensor() {
  // @@protoc_insertion_point(destructor:gazebo.msgs.RaySensor)
  SharedDtor();
}

void RaySensor::SharedDtor() {
}

void RaySensor::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const RaySensor& RaySensor::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_RaySensor_raysensor_2eproto.base);
  return *internal_default_instance();
}


void RaySensor::Clear() {
// @@protoc_insertion_point(message_clear_start:gazebo.msgs.RaySensor)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    ::memset(&display_scan_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&vertical_max_angle_) -
        reinterpret_cast<char*>(&display_scan_)) + sizeof(vertical_max_angle_));
  }
  if (cached_has_bits & 0x00000f00u) {
    ::memset(&range_min_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&vertical_samples_) -
        reinterpret_cast<char*>(&range_min_)) + sizeof(vertical_samples_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* RaySensor::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional bool display_scan = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          _Internal::set_has_display_scan(&has_bits);
          display_scan_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional int32 horizontal_samples = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          _Internal::set_has_horizontal_samples(&has_bits);
          horizontal_samples_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional double horizontal_resolution = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 25)) {
          _Internal::set_has_horizontal_resolution(&has_bits);
          horizontal_resolution_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // optional double horizontal_min_angle = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 33)) {
          _Internal::set_has_horizontal_min_angle(&has_bits);
          horizontal_min_angle_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // optional double horizontal_max_angle = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 41)) {
          _Internal::set_has_horizontal_max_angle(&has_bits);
          horizontal_max_angle_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // optional int32 vertical_samples = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 48)) {
          _Internal::set_has_vertical_samples(&has_bits);
          vertical_samples_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional double vertical_resolution = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 57)) {
          _Internal::set_has_vertical_resolution(&has_bits);
          vertical_resolution_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // optional double vertical_min_angle = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 65)) {
          _Internal::set_has_vertical_min_angle(&has_bits);
          vertical_min_angle_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // optional double vertical_max_angle = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 73)) {
          _Internal::set_has_vertical_max_angle(&has_bits);
          vertical_max_angle_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // optional double range_min = 10;
      case 10:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 81)) {
          _Internal::set_has_range_min(&has_bits);
          range_min_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // optional double range_max = 11;
      case 11:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 89)) {
          _Internal::set_has_range_max(&has_bits);
          range_max_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // optional double range_resolution = 12;
      case 12:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 97)) {
          _Internal::set_has_range_resolution(&has_bits);
          range_resolution_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
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

::PROTOBUF_NAMESPACE_ID::uint8* RaySensor::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:gazebo.msgs.RaySensor)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional bool display_scan = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(1, this->_internal_display_scan(), target);
  }

  // optional int32 horizontal_samples = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_horizontal_samples(), target);
  }

  // optional double horizontal_resolution = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(3, this->_internal_horizontal_resolution(), target);
  }

  // optional double horizontal_min_angle = 4;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(4, this->_internal_horizontal_min_angle(), target);
  }

  // optional double horizontal_max_angle = 5;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(5, this->_internal_horizontal_max_angle(), target);
  }

  // optional int32 vertical_samples = 6;
  if (cached_has_bits & 0x00000800u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(6, this->_internal_vertical_samples(), target);
  }

  // optional double vertical_resolution = 7;
  if (cached_has_bits & 0x00000020u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(7, this->_internal_vertical_resolution(), target);
  }

  // optional double vertical_min_angle = 8;
  if (cached_has_bits & 0x00000040u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(8, this->_internal_vertical_min_angle(), target);
  }

  // optional double vertical_max_angle = 9;
  if (cached_has_bits & 0x00000080u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(9, this->_internal_vertical_max_angle(), target);
  }

  // optional double range_min = 10;
  if (cached_has_bits & 0x00000100u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(10, this->_internal_range_min(), target);
  }

  // optional double range_max = 11;
  if (cached_has_bits & 0x00000200u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(11, this->_internal_range_max(), target);
  }

  // optional double range_resolution = 12;
  if (cached_has_bits & 0x00000400u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(12, this->_internal_range_resolution(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gazebo.msgs.RaySensor)
  return target;
}

size_t RaySensor::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gazebo.msgs.RaySensor)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    // optional bool display_scan = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 + 1;
    }

    // optional int32 horizontal_samples = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
          this->_internal_horizontal_samples());
    }

    // optional double horizontal_resolution = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 + 8;
    }

    // optional double horizontal_min_angle = 4;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 + 8;
    }

    // optional double horizontal_max_angle = 5;
    if (cached_has_bits & 0x00000010u) {
      total_size += 1 + 8;
    }

    // optional double vertical_resolution = 7;
    if (cached_has_bits & 0x00000020u) {
      total_size += 1 + 8;
    }

    // optional double vertical_min_angle = 8;
    if (cached_has_bits & 0x00000040u) {
      total_size += 1 + 8;
    }

    // optional double vertical_max_angle = 9;
    if (cached_has_bits & 0x00000080u) {
      total_size += 1 + 8;
    }

  }
  if (cached_has_bits & 0x00000f00u) {
    // optional double range_min = 10;
    if (cached_has_bits & 0x00000100u) {
      total_size += 1 + 8;
    }

    // optional double range_max = 11;
    if (cached_has_bits & 0x00000200u) {
      total_size += 1 + 8;
    }

    // optional double range_resolution = 12;
    if (cached_has_bits & 0x00000400u) {
      total_size += 1 + 8;
    }

    // optional int32 vertical_samples = 6;
    if (cached_has_bits & 0x00000800u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
          this->_internal_vertical_samples());
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

void RaySensor::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gazebo.msgs.RaySensor)
  GOOGLE_DCHECK_NE(&from, this);
  const RaySensor* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<RaySensor>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gazebo.msgs.RaySensor)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gazebo.msgs.RaySensor)
    MergeFrom(*source);
  }
}

void RaySensor::MergeFrom(const RaySensor& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gazebo.msgs.RaySensor)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    if (cached_has_bits & 0x00000001u) {
      display_scan_ = from.display_scan_;
    }
    if (cached_has_bits & 0x00000002u) {
      horizontal_samples_ = from.horizontal_samples_;
    }
    if (cached_has_bits & 0x00000004u) {
      horizontal_resolution_ = from.horizontal_resolution_;
    }
    if (cached_has_bits & 0x00000008u) {
      horizontal_min_angle_ = from.horizontal_min_angle_;
    }
    if (cached_has_bits & 0x00000010u) {
      horizontal_max_angle_ = from.horizontal_max_angle_;
    }
    if (cached_has_bits & 0x00000020u) {
      vertical_resolution_ = from.vertical_resolution_;
    }
    if (cached_has_bits & 0x00000040u) {
      vertical_min_angle_ = from.vertical_min_angle_;
    }
    if (cached_has_bits & 0x00000080u) {
      vertical_max_angle_ = from.vertical_max_angle_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  if (cached_has_bits & 0x00000f00u) {
    if (cached_has_bits & 0x00000100u) {
      range_min_ = from.range_min_;
    }
    if (cached_has_bits & 0x00000200u) {
      range_max_ = from.range_max_;
    }
    if (cached_has_bits & 0x00000400u) {
      range_resolution_ = from.range_resolution_;
    }
    if (cached_has_bits & 0x00000800u) {
      vertical_samples_ = from.vertical_samples_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void RaySensor::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gazebo.msgs.RaySensor)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RaySensor::CopyFrom(const RaySensor& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gazebo.msgs.RaySensor)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RaySensor::IsInitialized() const {
  return true;
}

void RaySensor::InternalSwap(RaySensor* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(display_scan_, other->display_scan_);
  swap(horizontal_samples_, other->horizontal_samples_);
  swap(horizontal_resolution_, other->horizontal_resolution_);
  swap(horizontal_min_angle_, other->horizontal_min_angle_);
  swap(horizontal_max_angle_, other->horizontal_max_angle_);
  swap(vertical_resolution_, other->vertical_resolution_);
  swap(vertical_min_angle_, other->vertical_min_angle_);
  swap(vertical_max_angle_, other->vertical_max_angle_);
  swap(range_min_, other->range_min_);
  swap(range_max_, other->range_max_);
  swap(range_resolution_, other->range_resolution_);
  swap(vertical_samples_, other->vertical_samples_);
}

::PROTOBUF_NAMESPACE_ID::Metadata RaySensor::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::gazebo::msgs::RaySensor* Arena::CreateMaybeMessage< ::gazebo::msgs::RaySensor >(Arena* arena) {
  return Arena::CreateInternal< ::gazebo::msgs::RaySensor >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

GZ_REGISTER_STATIC_MSG("gazebo.msgs.RaySensor", RaySensor)
// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
