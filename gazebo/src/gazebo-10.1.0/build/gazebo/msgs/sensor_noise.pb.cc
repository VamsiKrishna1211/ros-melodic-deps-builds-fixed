// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sensor_noise.proto

#include "sensor_noise.pb.h"

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
class SensorNoiseDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<SensorNoise> _instance;
} _SensorNoise_default_instance_;
}  // namespace msgs
}  // namespace gazebo
static void InitDefaultsscc_info_SensorNoise_sensor_5fnoise_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gazebo::msgs::_SensorNoise_default_instance_;
    new (ptr) ::gazebo::msgs::SensorNoise();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gazebo::msgs::SensorNoise::InitAsDefaultInstance();
}

GZ_MSGS_VISIBLE ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_SensorNoise_sensor_5fnoise_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_SensorNoise_sensor_5fnoise_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_sensor_5fnoise_2eproto[1];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_sensor_5fnoise_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_sensor_5fnoise_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_sensor_5fnoise_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::SensorNoise, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::SensorNoise, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::SensorNoise, type_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::SensorNoise, mean_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::SensorNoise, stddev_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::SensorNoise, bias_mean_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::SensorNoise, bias_stddev_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::SensorNoise, precision_),
  5,
  0,
  1,
  2,
  3,
  4,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 11, sizeof(::gazebo::msgs::SensorNoise)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::gazebo::msgs::_SensorNoise_default_instance_),
};

const char descriptor_table_protodef_sensor_5fnoise_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\022sensor_noise.proto\022\013gazebo.msgs\"\313\001\n\013Se"
  "nsorNoise\022+\n\004type\030\001 \002(\0162\035.gazebo.msgs.Se"
  "nsorNoise.Type\022\014\n\004mean\030\002 \001(\001\022\016\n\006stddev\030\003"
  " \001(\001\022\021\n\tbias_mean\030\004 \001(\001\022\023\n\013bias_stddev\030\005"
  " \001(\001\022\021\n\tprecision\030\006 \001(\001\"6\n\004Type\022\010\n\004NONE\020"
  "\001\022\014\n\010GAUSSIAN\020\002\022\026\n\022GAUSSIAN_QUANTIZED\020\003"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_sensor_5fnoise_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_sensor_5fnoise_2eproto_sccs[1] = {
  &scc_info_SensorNoise_sensor_5fnoise_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_sensor_5fnoise_2eproto_once;
static bool descriptor_table_sensor_5fnoise_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_sensor_5fnoise_2eproto = {
  &descriptor_table_sensor_5fnoise_2eproto_initialized, descriptor_table_protodef_sensor_5fnoise_2eproto, "sensor_noise.proto", 239,
  &descriptor_table_sensor_5fnoise_2eproto_once, descriptor_table_sensor_5fnoise_2eproto_sccs, descriptor_table_sensor_5fnoise_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_sensor_5fnoise_2eproto::offsets,
  file_level_metadata_sensor_5fnoise_2eproto, 1, file_level_enum_descriptors_sensor_5fnoise_2eproto, file_level_service_descriptors_sensor_5fnoise_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_sensor_5fnoise_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_sensor_5fnoise_2eproto), true);
namespace gazebo {
namespace msgs {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* SensorNoise_Type_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_sensor_5fnoise_2eproto);
  return file_level_enum_descriptors_sensor_5fnoise_2eproto[0];
}
bool SensorNoise_Type_IsValid(int value) {
  switch (value) {
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
constexpr SensorNoise_Type SensorNoise::NONE;
constexpr SensorNoise_Type SensorNoise::GAUSSIAN;
constexpr SensorNoise_Type SensorNoise::GAUSSIAN_QUANTIZED;
constexpr SensorNoise_Type SensorNoise::Type_MIN;
constexpr SensorNoise_Type SensorNoise::Type_MAX;
constexpr int SensorNoise::Type_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)

// ===================================================================

void SensorNoise::InitAsDefaultInstance() {
}
class SensorNoise::_Internal {
 public:
  using HasBits = decltype(std::declval<SensorNoise>()._has_bits_);
  static void set_has_type(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
  static void set_has_mean(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_stddev(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_bias_mean(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_bias_stddev(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_precision(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
};

SensorNoise::SensorNoise()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gazebo.msgs.SensorNoise)
}
SensorNoise::SensorNoise(const SensorNoise& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&mean_, &from.mean_,
    static_cast<size_t>(reinterpret_cast<char*>(&type_) -
    reinterpret_cast<char*>(&mean_)) + sizeof(type_));
  // @@protoc_insertion_point(copy_constructor:gazebo.msgs.SensorNoise)
}

void SensorNoise::SharedCtor() {
  ::memset(&mean_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&precision_) -
      reinterpret_cast<char*>(&mean_)) + sizeof(precision_));
  type_ = 1;
}

SensorNoise::~SensorNoise() {
  // @@protoc_insertion_point(destructor:gazebo.msgs.SensorNoise)
  SharedDtor();
}

void SensorNoise::SharedDtor() {
}

void SensorNoise::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const SensorNoise& SensorNoise::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_SensorNoise_sensor_5fnoise_2eproto.base);
  return *internal_default_instance();
}


void SensorNoise::Clear() {
// @@protoc_insertion_point(message_clear_start:gazebo.msgs.SensorNoise)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000003fu) {
    ::memset(&mean_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&precision_) -
        reinterpret_cast<char*>(&mean_)) + sizeof(precision_));
    type_ = 1;
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* SensorNoise::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // required .gazebo.msgs.SensorNoise.Type type = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::gazebo::msgs::SensorNoise_Type_IsValid(val))) {
            _internal_set_type(static_cast<::gazebo::msgs::SensorNoise_Type>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(1, val, mutable_unknown_fields());
          }
        } else goto handle_unusual;
        continue;
      // optional double mean = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 17)) {
          _Internal::set_has_mean(&has_bits);
          mean_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // optional double stddev = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 25)) {
          _Internal::set_has_stddev(&has_bits);
          stddev_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // optional double bias_mean = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 33)) {
          _Internal::set_has_bias_mean(&has_bits);
          bias_mean_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // optional double bias_stddev = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 41)) {
          _Internal::set_has_bias_stddev(&has_bits);
          bias_stddev_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // optional double precision = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 49)) {
          _Internal::set_has_precision(&has_bits);
          precision_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* SensorNoise::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:gazebo.msgs.SensorNoise)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required .gazebo.msgs.SensorNoise.Type type = 1;
  if (cached_has_bits & 0x00000020u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      1, this->_internal_type(), target);
  }

  // optional double mean = 2;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(2, this->_internal_mean(), target);
  }

  // optional double stddev = 3;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(3, this->_internal_stddev(), target);
  }

  // optional double bias_mean = 4;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(4, this->_internal_bias_mean(), target);
  }

  // optional double bias_stddev = 5;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(5, this->_internal_bias_stddev(), target);
  }

  // optional double precision = 6;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(6, this->_internal_precision(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gazebo.msgs.SensorNoise)
  return target;
}

size_t SensorNoise::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gazebo.msgs.SensorNoise)
  size_t total_size = 0;

  // required .gazebo.msgs.SensorNoise.Type type = 1;
  if (_internal_has_type()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_type());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    // optional double mean = 2;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 + 8;
    }

    // optional double stddev = 3;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 + 8;
    }

    // optional double bias_mean = 4;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 + 8;
    }

    // optional double bias_stddev = 5;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 + 8;
    }

    // optional double precision = 6;
    if (cached_has_bits & 0x00000010u) {
      total_size += 1 + 8;
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

void SensorNoise::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gazebo.msgs.SensorNoise)
  GOOGLE_DCHECK_NE(&from, this);
  const SensorNoise* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<SensorNoise>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gazebo.msgs.SensorNoise)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gazebo.msgs.SensorNoise)
    MergeFrom(*source);
  }
}

void SensorNoise::MergeFrom(const SensorNoise& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gazebo.msgs.SensorNoise)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000003fu) {
    if (cached_has_bits & 0x00000001u) {
      mean_ = from.mean_;
    }
    if (cached_has_bits & 0x00000002u) {
      stddev_ = from.stddev_;
    }
    if (cached_has_bits & 0x00000004u) {
      bias_mean_ = from.bias_mean_;
    }
    if (cached_has_bits & 0x00000008u) {
      bias_stddev_ = from.bias_stddev_;
    }
    if (cached_has_bits & 0x00000010u) {
      precision_ = from.precision_;
    }
    if (cached_has_bits & 0x00000020u) {
      type_ = from.type_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void SensorNoise::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gazebo.msgs.SensorNoise)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SensorNoise::CopyFrom(const SensorNoise& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gazebo.msgs.SensorNoise)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SensorNoise::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000020) != 0x00000020) return false;
  return true;
}

void SensorNoise::InternalSwap(SensorNoise* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(mean_, other->mean_);
  swap(stddev_, other->stddev_);
  swap(bias_mean_, other->bias_mean_);
  swap(bias_stddev_, other->bias_stddev_);
  swap(precision_, other->precision_);
  swap(type_, other->type_);
}

::PROTOBUF_NAMESPACE_ID::Metadata SensorNoise::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::gazebo::msgs::SensorNoise* Arena::CreateMaybeMessage< ::gazebo::msgs::SensorNoise >(Arena* arena) {
  return Arena::CreateInternal< ::gazebo::msgs::SensorNoise >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

GZ_REGISTER_STATIC_MSG("gazebo.msgs.SensorNoise", SensorNoise)
// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
