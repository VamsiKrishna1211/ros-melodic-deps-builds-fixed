// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: vector3d.proto

#include "vector3d.pb.h"

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
class Vector3dDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Vector3d> _instance;
} _Vector3d_default_instance_;
}  // namespace msgs
}  // namespace gazebo
static void InitDefaultsscc_info_Vector3d_vector3d_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gazebo::msgs::_Vector3d_default_instance_;
    new (ptr) ::gazebo::msgs::Vector3d();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gazebo::msgs::Vector3d::InitAsDefaultInstance();
}

GZ_MSGS_VISIBLE ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Vector3d_vector3d_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_Vector3d_vector3d_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_vector3d_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_vector3d_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_vector3d_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_vector3d_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Vector3d, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Vector3d, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Vector3d, x_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Vector3d, y_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Vector3d, z_),
  0,
  1,
  2,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, sizeof(::gazebo::msgs::Vector3d)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::gazebo::msgs::_Vector3d_default_instance_),
};

const char descriptor_table_protodef_vector3d_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\016vector3d.proto\022\013gazebo.msgs\"+\n\010Vector3"
  "d\022\t\n\001x\030\001 \002(\001\022\t\n\001y\030\002 \002(\001\022\t\n\001z\030\003 \002(\001"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_vector3d_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_vector3d_2eproto_sccs[1] = {
  &scc_info_Vector3d_vector3d_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_vector3d_2eproto_once;
static bool descriptor_table_vector3d_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_vector3d_2eproto = {
  &descriptor_table_vector3d_2eproto_initialized, descriptor_table_protodef_vector3d_2eproto, "vector3d.proto", 74,
  &descriptor_table_vector3d_2eproto_once, descriptor_table_vector3d_2eproto_sccs, descriptor_table_vector3d_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_vector3d_2eproto::offsets,
  file_level_metadata_vector3d_2eproto, 1, file_level_enum_descriptors_vector3d_2eproto, file_level_service_descriptors_vector3d_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_vector3d_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_vector3d_2eproto), true);
namespace gazebo {
namespace msgs {

// ===================================================================

void Vector3d::InitAsDefaultInstance() {
}
class Vector3d::_Internal {
 public:
  using HasBits = decltype(std::declval<Vector3d>()._has_bits_);
  static void set_has_x(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_y(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_z(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
};

Vector3d::Vector3d()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gazebo.msgs.Vector3d)
}
Vector3d::Vector3d(const Vector3d& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&x_, &from.x_,
    static_cast<size_t>(reinterpret_cast<char*>(&z_) -
    reinterpret_cast<char*>(&x_)) + sizeof(z_));
  // @@protoc_insertion_point(copy_constructor:gazebo.msgs.Vector3d)
}

void Vector3d::SharedCtor() {
  ::memset(&x_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&z_) -
      reinterpret_cast<char*>(&x_)) + sizeof(z_));
}

Vector3d::~Vector3d() {
  // @@protoc_insertion_point(destructor:gazebo.msgs.Vector3d)
  SharedDtor();
}

void Vector3d::SharedDtor() {
}

void Vector3d::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Vector3d& Vector3d::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Vector3d_vector3d_2eproto.base);
  return *internal_default_instance();
}


void Vector3d::Clear() {
// @@protoc_insertion_point(message_clear_start:gazebo.msgs.Vector3d)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    ::memset(&x_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&z_) -
        reinterpret_cast<char*>(&x_)) + sizeof(z_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* Vector3d::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // required double x = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 9)) {
          _Internal::set_has_x(&has_bits);
          x_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // required double y = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 17)) {
          _Internal::set_has_y(&has_bits);
          y_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // required double z = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 25)) {
          _Internal::set_has_z(&has_bits);
          z_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* Vector3d::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:gazebo.msgs.Vector3d)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required double x = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(1, this->_internal_x(), target);
  }

  // required double y = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(2, this->_internal_y(), target);
  }

  // required double z = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(3, this->_internal_z(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gazebo.msgs.Vector3d)
  return target;
}

size_t Vector3d::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:gazebo.msgs.Vector3d)
  size_t total_size = 0;

  if (_internal_has_x()) {
    // required double x = 1;
    total_size += 1 + 8;
  }

  if (_internal_has_y()) {
    // required double y = 2;
    total_size += 1 + 8;
  }

  if (_internal_has_z()) {
    // required double z = 3;
    total_size += 1 + 8;
  }

  return total_size;
}
size_t Vector3d::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gazebo.msgs.Vector3d)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x00000007) ^ 0x00000007) == 0) {  // All required fields are present.
    // required double x = 1;
    total_size += 1 + 8;

    // required double y = 2;
    total_size += 1 + 8;

    // required double z = 3;
    total_size += 1 + 8;

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

void Vector3d::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gazebo.msgs.Vector3d)
  GOOGLE_DCHECK_NE(&from, this);
  const Vector3d* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Vector3d>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gazebo.msgs.Vector3d)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gazebo.msgs.Vector3d)
    MergeFrom(*source);
  }
}

void Vector3d::MergeFrom(const Vector3d& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gazebo.msgs.Vector3d)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      x_ = from.x_;
    }
    if (cached_has_bits & 0x00000002u) {
      y_ = from.y_;
    }
    if (cached_has_bits & 0x00000004u) {
      z_ = from.z_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void Vector3d::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gazebo.msgs.Vector3d)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Vector3d::CopyFrom(const Vector3d& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gazebo.msgs.Vector3d)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Vector3d::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;
  return true;
}

void Vector3d::InternalSwap(Vector3d* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(x_, other->x_);
  swap(y_, other->y_);
  swap(z_, other->z_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Vector3d::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::gazebo::msgs::Vector3d* Arena::CreateMaybeMessage< ::gazebo::msgs::Vector3d >(Arena* arena) {
  return Arena::CreateInternal< ::gazebo::msgs::Vector3d >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

GZ_REGISTER_STATIC_MSG("gazebo.msgs.Vector3d", Vector3d)
// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
