// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: contacts.proto

#include "contacts.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_contact_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<3> scc_info_Contact_contact_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_time_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Time_time_2eproto;
namespace gazebo {
namespace msgs {
class ContactsDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Contacts> _instance;
} _Contacts_default_instance_;
}  // namespace msgs
}  // namespace gazebo
static void InitDefaultsscc_info_Contacts_contacts_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gazebo::msgs::_Contacts_default_instance_;
    new (ptr) ::gazebo::msgs::Contacts();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gazebo::msgs::Contacts::InitAsDefaultInstance();
}

GZ_MSGS_VISIBLE ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_Contacts_contacts_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 2, 0, InitDefaultsscc_info_Contacts_contacts_2eproto}, {
      &scc_info_Contact_contact_2eproto.base,
      &scc_info_Time_time_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_contacts_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_contacts_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_contacts_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_contacts_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Contacts, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Contacts, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Contacts, contact_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Contacts, time_),
  ~0u,
  0,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::gazebo::msgs::Contacts)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::gazebo::msgs::_Contacts_default_instance_),
};

const char descriptor_table_protodef_contacts_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\016contacts.proto\022\013gazebo.msgs\032\rcontact.p"
  "roto\032\ntime.proto\"R\n\010Contacts\022%\n\007contact\030"
  "\001 \003(\0132\024.gazebo.msgs.Contact\022\037\n\004time\030\002 \002("
  "\0132\021.gazebo.msgs.Time"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_contacts_2eproto_deps[2] = {
  &::descriptor_table_contact_2eproto,
  &::descriptor_table_time_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_contacts_2eproto_sccs[1] = {
  &scc_info_Contacts_contacts_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_contacts_2eproto_once;
static bool descriptor_table_contacts_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_contacts_2eproto = {
  &descriptor_table_contacts_2eproto_initialized, descriptor_table_protodef_contacts_2eproto, "contacts.proto", 140,
  &descriptor_table_contacts_2eproto_once, descriptor_table_contacts_2eproto_sccs, descriptor_table_contacts_2eproto_deps, 1, 2,
  schemas, file_default_instances, TableStruct_contacts_2eproto::offsets,
  file_level_metadata_contacts_2eproto, 1, file_level_enum_descriptors_contacts_2eproto, file_level_service_descriptors_contacts_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_contacts_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_contacts_2eproto), true);
namespace gazebo {
namespace msgs {

// ===================================================================

void Contacts::InitAsDefaultInstance() {
  ::gazebo::msgs::_Contacts_default_instance_._instance.get_mutable()->time_ = const_cast< ::gazebo::msgs::Time*>(
      ::gazebo::msgs::Time::internal_default_instance());
}
class Contacts::_Internal {
 public:
  using HasBits = decltype(std::declval<Contacts>()._has_bits_);
  static const ::gazebo::msgs::Time& time(const Contacts* msg);
  static void set_has_time(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

const ::gazebo::msgs::Time&
Contacts::_Internal::time(const Contacts* msg) {
  return *msg->time_;
}
void Contacts::clear_contact() {
  contact_.Clear();
}
void Contacts::clear_time() {
  if (time_ != nullptr) time_->Clear();
  _has_bits_[0] &= ~0x00000001u;
}
Contacts::Contacts()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gazebo.msgs.Contacts)
}
Contacts::Contacts(const Contacts& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_),
      contact_(from.contact_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from._internal_has_time()) {
    time_ = new ::gazebo::msgs::Time(*from.time_);
  } else {
    time_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:gazebo.msgs.Contacts)
}

void Contacts::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Contacts_contacts_2eproto.base);
  time_ = nullptr;
}

Contacts::~Contacts() {
  // @@protoc_insertion_point(destructor:gazebo.msgs.Contacts)
  SharedDtor();
}

void Contacts::SharedDtor() {
  if (this != internal_default_instance()) delete time_;
}

void Contacts::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Contacts& Contacts::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Contacts_contacts_2eproto.base);
  return *internal_default_instance();
}


void Contacts::Clear() {
// @@protoc_insertion_point(message_clear_start:gazebo.msgs.Contacts)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  contact_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    GOOGLE_DCHECK(time_ != nullptr);
    time_->Clear();
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* Contacts::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated .gazebo.msgs.Contact contact = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_contact(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else goto handle_unusual;
        continue;
      // required .gazebo.msgs.Time time = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_time(), ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* Contacts::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:gazebo.msgs.Contacts)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .gazebo.msgs.Contact contact = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_contact_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, this->_internal_contact(i), target, stream);
  }

  cached_has_bits = _has_bits_[0];
  // required .gazebo.msgs.Time time = 2;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::time(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gazebo.msgs.Contacts)
  return target;
}

size_t Contacts::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gazebo.msgs.Contacts)
  size_t total_size = 0;

  // required .gazebo.msgs.Time time = 2;
  if (_internal_has_time()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *time_);
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .gazebo.msgs.Contact contact = 1;
  total_size += 1UL * this->_internal_contact_size();
  for (const auto& msg : this->contact_) {
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

void Contacts::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gazebo.msgs.Contacts)
  GOOGLE_DCHECK_NE(&from, this);
  const Contacts* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Contacts>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gazebo.msgs.Contacts)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gazebo.msgs.Contacts)
    MergeFrom(*source);
  }
}

void Contacts::MergeFrom(const Contacts& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gazebo.msgs.Contacts)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  contact_.MergeFrom(from.contact_);
  if (from._internal_has_time()) {
    _internal_mutable_time()->::gazebo::msgs::Time::MergeFrom(from._internal_time());
  }
}

void Contacts::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gazebo.msgs.Contacts)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Contacts::CopyFrom(const Contacts& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gazebo.msgs.Contacts)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Contacts::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  if (!::PROTOBUF_NAMESPACE_ID::internal::AllAreInitialized(contact_)) return false;
  if (_internal_has_time()) {
    if (!time_->IsInitialized()) return false;
  }
  return true;
}

void Contacts::InternalSwap(Contacts* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  contact_.InternalSwap(&other->contact_);
  swap(time_, other->time_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Contacts::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::gazebo::msgs::Contacts* Arena::CreateMaybeMessage< ::gazebo::msgs::Contacts >(Arena* arena) {
  return Arena::CreateInternal< ::gazebo::msgs::Contacts >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

GZ_REGISTER_STATIC_MSG("gazebo.msgs.Contacts", Contacts)
// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
