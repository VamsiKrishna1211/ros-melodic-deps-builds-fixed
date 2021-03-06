// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: contactsensor.proto

#include "contactsensor.pb.h"

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
class ContactSensorDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ContactSensor> _instance;
} _ContactSensor_default_instance_;
}  // namespace msgs
}  // namespace gazebo
static void InitDefaultsscc_info_ContactSensor_contactsensor_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gazebo::msgs::_ContactSensor_default_instance_;
    new (ptr) ::gazebo::msgs::ContactSensor();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gazebo::msgs::ContactSensor::InitAsDefaultInstance();
}

GZ_MSGS_VISIBLE ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_ContactSensor_contactsensor_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_ContactSensor_contactsensor_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_contactsensor_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_contactsensor_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_contactsensor_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_contactsensor_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::ContactSensor, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::ContactSensor, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::ContactSensor, collision_name_),
  0,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 6, sizeof(::gazebo::msgs::ContactSensor)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::gazebo::msgs::_ContactSensor_default_instance_),
};

const char descriptor_table_protodef_contactsensor_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\023contactsensor.proto\022\013gazebo.msgs\"\'\n\rCo"
  "ntactSensor\022\026\n\016collision_name\030\001 \001(\t"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_contactsensor_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_contactsensor_2eproto_sccs[1] = {
  &scc_info_ContactSensor_contactsensor_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_contactsensor_2eproto_once;
static bool descriptor_table_contactsensor_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_contactsensor_2eproto = {
  &descriptor_table_contactsensor_2eproto_initialized, descriptor_table_protodef_contactsensor_2eproto, "contactsensor.proto", 75,
  &descriptor_table_contactsensor_2eproto_once, descriptor_table_contactsensor_2eproto_sccs, descriptor_table_contactsensor_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_contactsensor_2eproto::offsets,
  file_level_metadata_contactsensor_2eproto, 1, file_level_enum_descriptors_contactsensor_2eproto, file_level_service_descriptors_contactsensor_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_contactsensor_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_contactsensor_2eproto), true);
namespace gazebo {
namespace msgs {

// ===================================================================

void ContactSensor::InitAsDefaultInstance() {
}
class ContactSensor::_Internal {
 public:
  using HasBits = decltype(std::declval<ContactSensor>()._has_bits_);
  static void set_has_collision_name(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

ContactSensor::ContactSensor()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gazebo.msgs.ContactSensor)
}
ContactSensor::ContactSensor(const ContactSensor& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  collision_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_collision_name()) {
    collision_name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.collision_name_);
  }
  // @@protoc_insertion_point(copy_constructor:gazebo.msgs.ContactSensor)
}

void ContactSensor::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_ContactSensor_contactsensor_2eproto.base);
  collision_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

ContactSensor::~ContactSensor() {
  // @@protoc_insertion_point(destructor:gazebo.msgs.ContactSensor)
  SharedDtor();
}

void ContactSensor::SharedDtor() {
  collision_name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void ContactSensor::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ContactSensor& ContactSensor::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ContactSensor_contactsensor_2eproto.base);
  return *internal_default_instance();
}


void ContactSensor::Clear() {
// @@protoc_insertion_point(message_clear_start:gazebo.msgs.ContactSensor)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    collision_name_.ClearNonDefaultToEmptyNoArena();
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* ContactSensor::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional string collision_name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_collision_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "gazebo.msgs.ContactSensor.collision_name");
          #endif  // !NDEBUG
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

::PROTOBUF_NAMESPACE_ID::uint8* ContactSensor::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:gazebo.msgs.ContactSensor)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string collision_name = 1;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_collision_name().data(), static_cast<int>(this->_internal_collision_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "gazebo.msgs.ContactSensor.collision_name");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_collision_name(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gazebo.msgs.ContactSensor)
  return target;
}

size_t ContactSensor::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gazebo.msgs.ContactSensor)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // optional string collision_name = 1;
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_collision_name());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ContactSensor::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gazebo.msgs.ContactSensor)
  GOOGLE_DCHECK_NE(&from, this);
  const ContactSensor* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ContactSensor>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gazebo.msgs.ContactSensor)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gazebo.msgs.ContactSensor)
    MergeFrom(*source);
  }
}

void ContactSensor::MergeFrom(const ContactSensor& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gazebo.msgs.ContactSensor)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_collision_name()) {
    _has_bits_[0] |= 0x00000001u;
    collision_name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.collision_name_);
  }
}

void ContactSensor::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gazebo.msgs.ContactSensor)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ContactSensor::CopyFrom(const ContactSensor& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gazebo.msgs.ContactSensor)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ContactSensor::IsInitialized() const {
  return true;
}

void ContactSensor::InternalSwap(ContactSensor* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  collision_name_.Swap(&other->collision_name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::PROTOBUF_NAMESPACE_ID::Metadata ContactSensor::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::gazebo::msgs::ContactSensor* Arena::CreateMaybeMessage< ::gazebo::msgs::ContactSensor >(Arena* arena) {
  return Arena::CreateInternal< ::gazebo::msgs::ContactSensor >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

GZ_REGISTER_STATIC_MSG("gazebo.msgs.ContactSensor", ContactSensor)
// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
