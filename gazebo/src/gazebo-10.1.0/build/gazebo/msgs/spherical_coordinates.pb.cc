// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: spherical_coordinates.proto

#include "spherical_coordinates.pb.h"

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
class SphericalCoordinatesDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<SphericalCoordinates> _instance;
} _SphericalCoordinates_default_instance_;
}  // namespace msgs
}  // namespace gazebo
static void InitDefaultsscc_info_SphericalCoordinates_spherical_5fcoordinates_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gazebo::msgs::_SphericalCoordinates_default_instance_;
    new (ptr) ::gazebo::msgs::SphericalCoordinates();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gazebo::msgs::SphericalCoordinates::InitAsDefaultInstance();
}

GZ_MSGS_VISIBLE ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_SphericalCoordinates_spherical_5fcoordinates_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_SphericalCoordinates_spherical_5fcoordinates_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_spherical_5fcoordinates_2eproto[1];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_spherical_5fcoordinates_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_spherical_5fcoordinates_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_spherical_5fcoordinates_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::SphericalCoordinates, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::SphericalCoordinates, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::SphericalCoordinates, surface_model_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::SphericalCoordinates, latitude_deg_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::SphericalCoordinates, longitude_deg_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::SphericalCoordinates, elevation_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::SphericalCoordinates, heading_deg_),
  4,
  0,
  1,
  2,
  3,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 10, sizeof(::gazebo::msgs::SphericalCoordinates)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::gazebo::msgs::_SphericalCoordinates_default_instance_),
};

const char descriptor_table_protodef_spherical_5fcoordinates_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\033spherical_coordinates.proto\022\013gazebo.ms"
  "gs\"\323\001\n\024SphericalCoordinates\022E\n\rsurface_m"
  "odel\030\001 \002(\0162..gazebo.msgs.SphericalCoordi"
  "nates.SurfaceModel\022\024\n\014latitude_deg\030\002 \002(\001"
  "\022\025\n\rlongitude_deg\030\003 \002(\001\022\021\n\televation\030\004 \002"
  "(\001\022\023\n\013heading_deg\030\005 \002(\001\"\037\n\014SurfaceModel\022"
  "\017\n\013EARTH_WGS84\020\001"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_spherical_5fcoordinates_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_spherical_5fcoordinates_2eproto_sccs[1] = {
  &scc_info_SphericalCoordinates_spherical_5fcoordinates_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_spherical_5fcoordinates_2eproto_once;
static bool descriptor_table_spherical_5fcoordinates_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_spherical_5fcoordinates_2eproto = {
  &descriptor_table_spherical_5fcoordinates_2eproto_initialized, descriptor_table_protodef_spherical_5fcoordinates_2eproto, "spherical_coordinates.proto", 256,
  &descriptor_table_spherical_5fcoordinates_2eproto_once, descriptor_table_spherical_5fcoordinates_2eproto_sccs, descriptor_table_spherical_5fcoordinates_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_spherical_5fcoordinates_2eproto::offsets,
  file_level_metadata_spherical_5fcoordinates_2eproto, 1, file_level_enum_descriptors_spherical_5fcoordinates_2eproto, file_level_service_descriptors_spherical_5fcoordinates_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_spherical_5fcoordinates_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_spherical_5fcoordinates_2eproto), true);
namespace gazebo {
namespace msgs {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* SphericalCoordinates_SurfaceModel_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_spherical_5fcoordinates_2eproto);
  return file_level_enum_descriptors_spherical_5fcoordinates_2eproto[0];
}
bool SphericalCoordinates_SurfaceModel_IsValid(int value) {
  switch (value) {
    case 1:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
constexpr SphericalCoordinates_SurfaceModel SphericalCoordinates::EARTH_WGS84;
constexpr SphericalCoordinates_SurfaceModel SphericalCoordinates::SurfaceModel_MIN;
constexpr SphericalCoordinates_SurfaceModel SphericalCoordinates::SurfaceModel_MAX;
constexpr int SphericalCoordinates::SurfaceModel_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)

// ===================================================================

void SphericalCoordinates::InitAsDefaultInstance() {
}
class SphericalCoordinates::_Internal {
 public:
  using HasBits = decltype(std::declval<SphericalCoordinates>()._has_bits_);
  static void set_has_surface_model(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_latitude_deg(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_longitude_deg(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_elevation(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_heading_deg(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
};

SphericalCoordinates::SphericalCoordinates()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gazebo.msgs.SphericalCoordinates)
}
SphericalCoordinates::SphericalCoordinates(const SphericalCoordinates& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&latitude_deg_, &from.latitude_deg_,
    static_cast<size_t>(reinterpret_cast<char*>(&surface_model_) -
    reinterpret_cast<char*>(&latitude_deg_)) + sizeof(surface_model_));
  // @@protoc_insertion_point(copy_constructor:gazebo.msgs.SphericalCoordinates)
}

void SphericalCoordinates::SharedCtor() {
  ::memset(&latitude_deg_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&heading_deg_) -
      reinterpret_cast<char*>(&latitude_deg_)) + sizeof(heading_deg_));
  surface_model_ = 1;
}

SphericalCoordinates::~SphericalCoordinates() {
  // @@protoc_insertion_point(destructor:gazebo.msgs.SphericalCoordinates)
  SharedDtor();
}

void SphericalCoordinates::SharedDtor() {
}

void SphericalCoordinates::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const SphericalCoordinates& SphericalCoordinates::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_SphericalCoordinates_spherical_5fcoordinates_2eproto.base);
  return *internal_default_instance();
}


void SphericalCoordinates::Clear() {
// @@protoc_insertion_point(message_clear_start:gazebo.msgs.SphericalCoordinates)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    ::memset(&latitude_deg_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&heading_deg_) -
        reinterpret_cast<char*>(&latitude_deg_)) + sizeof(heading_deg_));
    surface_model_ = 1;
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* SphericalCoordinates::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // required .gazebo.msgs.SphericalCoordinates.SurfaceModel surface_model = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::gazebo::msgs::SphericalCoordinates_SurfaceModel_IsValid(val))) {
            _internal_set_surface_model(static_cast<::gazebo::msgs::SphericalCoordinates_SurfaceModel>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(1, val, mutable_unknown_fields());
          }
        } else goto handle_unusual;
        continue;
      // required double latitude_deg = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 17)) {
          _Internal::set_has_latitude_deg(&has_bits);
          latitude_deg_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // required double longitude_deg = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 25)) {
          _Internal::set_has_longitude_deg(&has_bits);
          longitude_deg_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // required double elevation = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 33)) {
          _Internal::set_has_elevation(&has_bits);
          elevation_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // required double heading_deg = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 41)) {
          _Internal::set_has_heading_deg(&has_bits);
          heading_deg_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* SphericalCoordinates::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:gazebo.msgs.SphericalCoordinates)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required .gazebo.msgs.SphericalCoordinates.SurfaceModel surface_model = 1;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      1, this->_internal_surface_model(), target);
  }

  // required double latitude_deg = 2;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(2, this->_internal_latitude_deg(), target);
  }

  // required double longitude_deg = 3;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(3, this->_internal_longitude_deg(), target);
  }

  // required double elevation = 4;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(4, this->_internal_elevation(), target);
  }

  // required double heading_deg = 5;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(5, this->_internal_heading_deg(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gazebo.msgs.SphericalCoordinates)
  return target;
}

size_t SphericalCoordinates::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:gazebo.msgs.SphericalCoordinates)
  size_t total_size = 0;

  if (_internal_has_latitude_deg()) {
    // required double latitude_deg = 2;
    total_size += 1 + 8;
  }

  if (_internal_has_longitude_deg()) {
    // required double longitude_deg = 3;
    total_size += 1 + 8;
  }

  if (_internal_has_elevation()) {
    // required double elevation = 4;
    total_size += 1 + 8;
  }

  if (_internal_has_heading_deg()) {
    // required double heading_deg = 5;
    total_size += 1 + 8;
  }

  if (_internal_has_surface_model()) {
    // required .gazebo.msgs.SphericalCoordinates.SurfaceModel surface_model = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_surface_model());
  }

  return total_size;
}
size_t SphericalCoordinates::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gazebo.msgs.SphericalCoordinates)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x0000001f) ^ 0x0000001f) == 0) {  // All required fields are present.
    // required double latitude_deg = 2;
    total_size += 1 + 8;

    // required double longitude_deg = 3;
    total_size += 1 + 8;

    // required double elevation = 4;
    total_size += 1 + 8;

    // required double heading_deg = 5;
    total_size += 1 + 8;

    // required .gazebo.msgs.SphericalCoordinates.SurfaceModel surface_model = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_surface_model());

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

void SphericalCoordinates::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gazebo.msgs.SphericalCoordinates)
  GOOGLE_DCHECK_NE(&from, this);
  const SphericalCoordinates* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<SphericalCoordinates>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gazebo.msgs.SphericalCoordinates)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gazebo.msgs.SphericalCoordinates)
    MergeFrom(*source);
  }
}

void SphericalCoordinates::MergeFrom(const SphericalCoordinates& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gazebo.msgs.SphericalCoordinates)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    if (cached_has_bits & 0x00000001u) {
      latitude_deg_ = from.latitude_deg_;
    }
    if (cached_has_bits & 0x00000002u) {
      longitude_deg_ = from.longitude_deg_;
    }
    if (cached_has_bits & 0x00000004u) {
      elevation_ = from.elevation_;
    }
    if (cached_has_bits & 0x00000008u) {
      heading_deg_ = from.heading_deg_;
    }
    if (cached_has_bits & 0x00000010u) {
      surface_model_ = from.surface_model_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void SphericalCoordinates::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gazebo.msgs.SphericalCoordinates)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SphericalCoordinates::CopyFrom(const SphericalCoordinates& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gazebo.msgs.SphericalCoordinates)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SphericalCoordinates::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000001f) != 0x0000001f) return false;
  return true;
}

void SphericalCoordinates::InternalSwap(SphericalCoordinates* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(latitude_deg_, other->latitude_deg_);
  swap(longitude_deg_, other->longitude_deg_);
  swap(elevation_, other->elevation_);
  swap(heading_deg_, other->heading_deg_);
  swap(surface_model_, other->surface_model_);
}

::PROTOBUF_NAMESPACE_ID::Metadata SphericalCoordinates::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::gazebo::msgs::SphericalCoordinates* Arena::CreateMaybeMessage< ::gazebo::msgs::SphericalCoordinates >(Arena* arena) {
  return Arena::CreateInternal< ::gazebo::msgs::SphericalCoordinates >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

GZ_REGISTER_STATIC_MSG("gazebo.msgs.SphericalCoordinates", SphericalCoordinates)
// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>