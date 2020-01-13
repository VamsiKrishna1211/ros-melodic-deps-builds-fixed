// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: wrench.proto

#include "wrench.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_vector3d_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Vector3d_vector3d_2eproto;
namespace gazebo {
namespace msgs {
class WrenchDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Wrench> _instance;
} _Wrench_default_instance_;
}  // namespace msgs
}  // namespace gazebo
static void InitDefaultsscc_info_Wrench_wrench_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gazebo::msgs::_Wrench_default_instance_;
    new (ptr) ::gazebo::msgs::Wrench();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gazebo::msgs::Wrench::InitAsDefaultInstance();
}

GZ_MSGS_VISIBLE ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Wrench_wrench_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_Wrench_wrench_2eproto}, {
      &scc_info_Vector3d_vector3d_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_wrench_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_wrench_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_wrench_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_wrench_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Wrench, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Wrench, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Wrench, force_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Wrench, torque_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Wrench, force_offset_),
  0,
  1,
  2,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, sizeof(::gazebo::msgs::Wrench)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::gazebo::msgs::_Wrench_default_instance_),
};

const char descriptor_table_protodef_wrench_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\014wrench.proto\022\013gazebo.msgs\032\016vector3d.pr"
  "oto\"\202\001\n\006Wrench\022$\n\005force\030\001 \002(\0132\025.gazebo.m"
  "sgs.Vector3d\022%\n\006torque\030\002 \002(\0132\025.gazebo.ms"
  "gs.Vector3d\022+\n\014force_offset\030\003 \001(\0132\025.gaze"
  "bo.msgs.Vector3d"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_wrench_2eproto_deps[1] = {
  &::descriptor_table_vector3d_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_wrench_2eproto_sccs[1] = {
  &scc_info_Wrench_wrench_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_wrench_2eproto_once;
static bool descriptor_table_wrench_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_wrench_2eproto = {
  &descriptor_table_wrench_2eproto_initialized, descriptor_table_protodef_wrench_2eproto, "wrench.proto", 176,
  &descriptor_table_wrench_2eproto_once, descriptor_table_wrench_2eproto_sccs, descriptor_table_wrench_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_wrench_2eproto::offsets,
  file_level_metadata_wrench_2eproto, 1, file_level_enum_descriptors_wrench_2eproto, file_level_service_descriptors_wrench_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_wrench_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_wrench_2eproto), true);
namespace gazebo {
namespace msgs {

// ===================================================================

void Wrench::InitAsDefaultInstance() {
  ::gazebo::msgs::_Wrench_default_instance_._instance.get_mutable()->force_ = const_cast< ::gazebo::msgs::Vector3d*>(
      ::gazebo::msgs::Vector3d::internal_default_instance());
  ::gazebo::msgs::_Wrench_default_instance_._instance.get_mutable()->torque_ = const_cast< ::gazebo::msgs::Vector3d*>(
      ::gazebo::msgs::Vector3d::internal_default_instance());
  ::gazebo::msgs::_Wrench_default_instance_._instance.get_mutable()->force_offset_ = const_cast< ::gazebo::msgs::Vector3d*>(
      ::gazebo::msgs::Vector3d::internal_default_instance());
}
class Wrench::_Internal {
 public:
  using HasBits = decltype(std::declval<Wrench>()._has_bits_);
  static const ::gazebo::msgs::Vector3d& force(const Wrench* msg);
  static void set_has_force(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static const ::gazebo::msgs::Vector3d& torque(const Wrench* msg);
  static void set_has_torque(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static const ::gazebo::msgs::Vector3d& force_offset(const Wrench* msg);
  static void set_has_force_offset(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
};

const ::gazebo::msgs::Vector3d&
Wrench::_Internal::force(const Wrench* msg) {
  return *msg->force_;
}
const ::gazebo::msgs::Vector3d&
Wrench::_Internal::torque(const Wrench* msg) {
  return *msg->torque_;
}
const ::gazebo::msgs::Vector3d&
Wrench::_Internal::force_offset(const Wrench* msg) {
  return *msg->force_offset_;
}
void Wrench::clear_force() {
  if (force_ != nullptr) force_->Clear();
  _has_bits_[0] &= ~0x00000001u;
}
void Wrench::clear_torque() {
  if (torque_ != nullptr) torque_->Clear();
  _has_bits_[0] &= ~0x00000002u;
}
void Wrench::clear_force_offset() {
  if (force_offset_ != nullptr) force_offset_->Clear();
  _has_bits_[0] &= ~0x00000004u;
}
Wrench::Wrench()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gazebo.msgs.Wrench)
}
Wrench::Wrench(const Wrench& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from._internal_has_force()) {
    force_ = new ::gazebo::msgs::Vector3d(*from.force_);
  } else {
    force_ = nullptr;
  }
  if (from._internal_has_torque()) {
    torque_ = new ::gazebo::msgs::Vector3d(*from.torque_);
  } else {
    torque_ = nullptr;
  }
  if (from._internal_has_force_offset()) {
    force_offset_ = new ::gazebo::msgs::Vector3d(*from.force_offset_);
  } else {
    force_offset_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:gazebo.msgs.Wrench)
}

void Wrench::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Wrench_wrench_2eproto.base);
  ::memset(&force_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&force_offset_) -
      reinterpret_cast<char*>(&force_)) + sizeof(force_offset_));
}

Wrench::~Wrench() {
  // @@protoc_insertion_point(destructor:gazebo.msgs.Wrench)
  SharedDtor();
}

void Wrench::SharedDtor() {
  if (this != internal_default_instance()) delete force_;
  if (this != internal_default_instance()) delete torque_;
  if (this != internal_default_instance()) delete force_offset_;
}

void Wrench::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Wrench& Wrench::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Wrench_wrench_2eproto.base);
  return *internal_default_instance();
}


void Wrench::Clear() {
// @@protoc_insertion_point(message_clear_start:gazebo.msgs.Wrench)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(force_ != nullptr);
      force_->Clear();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(torque_ != nullptr);
      torque_->Clear();
    }
    if (cached_has_bits & 0x00000004u) {
      GOOGLE_DCHECK(force_offset_ != nullptr);
      force_offset_->Clear();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* Wrench::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // required .gazebo.msgs.Vector3d force = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_force(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required .gazebo.msgs.Vector3d torque = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_torque(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .gazebo.msgs.Vector3d force_offset = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_force_offset(), ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* Wrench::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:gazebo.msgs.Wrench)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required .gazebo.msgs.Vector3d force = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::force(this), target, stream);
  }

  // required .gazebo.msgs.Vector3d torque = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::torque(this), target, stream);
  }

  // optional .gazebo.msgs.Vector3d force_offset = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        3, _Internal::force_offset(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gazebo.msgs.Wrench)
  return target;
}

size_t Wrench::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:gazebo.msgs.Wrench)
  size_t total_size = 0;

  if (_internal_has_force()) {
    // required .gazebo.msgs.Vector3d force = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *force_);
  }

  if (_internal_has_torque()) {
    // required .gazebo.msgs.Vector3d torque = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *torque_);
  }

  return total_size;
}
size_t Wrench::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gazebo.msgs.Wrench)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required .gazebo.msgs.Vector3d force = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *force_);

    // required .gazebo.msgs.Vector3d torque = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *torque_);

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // optional .gazebo.msgs.Vector3d force_offset = 3;
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000004u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *force_offset_);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Wrench::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gazebo.msgs.Wrench)
  GOOGLE_DCHECK_NE(&from, this);
  const Wrench* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Wrench>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gazebo.msgs.Wrench)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gazebo.msgs.Wrench)
    MergeFrom(*source);
  }
}

void Wrench::MergeFrom(const Wrench& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gazebo.msgs.Wrench)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _internal_mutable_force()->::gazebo::msgs::Vector3d::MergeFrom(from._internal_force());
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_mutable_torque()->::gazebo::msgs::Vector3d::MergeFrom(from._internal_torque());
    }
    if (cached_has_bits & 0x00000004u) {
      _internal_mutable_force_offset()->::gazebo::msgs::Vector3d::MergeFrom(from._internal_force_offset());
    }
  }
}

void Wrench::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gazebo.msgs.Wrench)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Wrench::CopyFrom(const Wrench& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gazebo.msgs.Wrench)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Wrench::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  if (_internal_has_force()) {
    if (!force_->IsInitialized()) return false;
  }
  if (_internal_has_torque()) {
    if (!torque_->IsInitialized()) return false;
  }
  if (_internal_has_force_offset()) {
    if (!force_offset_->IsInitialized()) return false;
  }
  return true;
}

void Wrench::InternalSwap(Wrench* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(force_, other->force_);
  swap(torque_, other->torque_);
  swap(force_offset_, other->force_offset_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Wrench::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::gazebo::msgs::Wrench* Arena::CreateMaybeMessage< ::gazebo::msgs::Wrench >(Arena* arena) {
  return Arena::CreateInternal< ::gazebo::msgs::Wrench >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

GZ_REGISTER_STATIC_MSG("gazebo.msgs.Wrench", Wrench)
// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
