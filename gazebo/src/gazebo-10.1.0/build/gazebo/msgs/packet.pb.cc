// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: packet.proto

#include "packet.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_time_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Time_time_2eproto;
namespace gazebo {
namespace msgs {
class PacketDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Packet> _instance;
} _Packet_default_instance_;
}  // namespace msgs
}  // namespace gazebo
static void InitDefaultsscc_info_Packet_packet_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gazebo::msgs::_Packet_default_instance_;
    new (ptr) ::gazebo::msgs::Packet();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gazebo::msgs::Packet::InitAsDefaultInstance();
}

GZ_MSGS_VISIBLE ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Packet_packet_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_Packet_packet_2eproto}, {
      &scc_info_Time_time_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_packet_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_packet_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_packet_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_packet_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Packet, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Packet, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Packet, stamp_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Packet, type_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Packet, serialized_data_),
  2,
  0,
  1,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, sizeof(::gazebo::msgs::Packet)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::gazebo::msgs::_Packet_default_instance_),
};

const char descriptor_table_protodef_packet_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\014packet.proto\022\013gazebo.msgs\032\ntime.proto\""
  "Q\n\006Packet\022 \n\005stamp\030\001 \002(\0132\021.gazebo.msgs.T"
  "ime\022\014\n\004type\030\002 \002(\t\022\027\n\017serialized_data\030\003 \002"
  "(\014"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_packet_2eproto_deps[1] = {
  &::descriptor_table_time_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_packet_2eproto_sccs[1] = {
  &scc_info_Packet_packet_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_packet_2eproto_once;
static bool descriptor_table_packet_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_packet_2eproto = {
  &descriptor_table_packet_2eproto_initialized, descriptor_table_protodef_packet_2eproto, "packet.proto", 122,
  &descriptor_table_packet_2eproto_once, descriptor_table_packet_2eproto_sccs, descriptor_table_packet_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_packet_2eproto::offsets,
  file_level_metadata_packet_2eproto, 1, file_level_enum_descriptors_packet_2eproto, file_level_service_descriptors_packet_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_packet_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_packet_2eproto), true);
namespace gazebo {
namespace msgs {

// ===================================================================

void Packet::InitAsDefaultInstance() {
  ::gazebo::msgs::_Packet_default_instance_._instance.get_mutable()->stamp_ = const_cast< ::gazebo::msgs::Time*>(
      ::gazebo::msgs::Time::internal_default_instance());
}
class Packet::_Internal {
 public:
  using HasBits = decltype(std::declval<Packet>()._has_bits_);
  static const ::gazebo::msgs::Time& stamp(const Packet* msg);
  static void set_has_stamp(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_type(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_serialized_data(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

const ::gazebo::msgs::Time&
Packet::_Internal::stamp(const Packet* msg) {
  return *msg->stamp_;
}
void Packet::clear_stamp() {
  if (stamp_ != nullptr) stamp_->Clear();
  _has_bits_[0] &= ~0x00000004u;
}
Packet::Packet()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gazebo.msgs.Packet)
}
Packet::Packet(const Packet& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  type_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_type()) {
    type_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.type_);
  }
  serialized_data_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_serialized_data()) {
    serialized_data_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.serialized_data_);
  }
  if (from._internal_has_stamp()) {
    stamp_ = new ::gazebo::msgs::Time(*from.stamp_);
  } else {
    stamp_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:gazebo.msgs.Packet)
}

void Packet::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Packet_packet_2eproto.base);
  type_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  serialized_data_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  stamp_ = nullptr;
}

Packet::~Packet() {
  // @@protoc_insertion_point(destructor:gazebo.msgs.Packet)
  SharedDtor();
}

void Packet::SharedDtor() {
  type_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  serialized_data_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete stamp_;
}

void Packet::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Packet& Packet::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Packet_packet_2eproto.base);
  return *internal_default_instance();
}


void Packet::Clear() {
// @@protoc_insertion_point(message_clear_start:gazebo.msgs.Packet)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      type_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000002u) {
      serialized_data_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000004u) {
      GOOGLE_DCHECK(stamp_ != nullptr);
      stamp_->Clear();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* Packet::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // required .gazebo.msgs.Time stamp = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_stamp(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required string type = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_type();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "gazebo.msgs.Packet.type");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required bytes serialized_data = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_serialized_data();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
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

::PROTOBUF_NAMESPACE_ID::uint8* Packet::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:gazebo.msgs.Packet)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required .gazebo.msgs.Time stamp = 1;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::stamp(this), target, stream);
  }

  // required string type = 2;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_type().data(), static_cast<int>(this->_internal_type().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "gazebo.msgs.Packet.type");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_type(), target);
  }

  // required bytes serialized_data = 3;
  if (cached_has_bits & 0x00000002u) {
    target = stream->WriteBytesMaybeAliased(
        3, this->_internal_serialized_data(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gazebo.msgs.Packet)
  return target;
}

size_t Packet::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:gazebo.msgs.Packet)
  size_t total_size = 0;

  if (_internal_has_type()) {
    // required string type = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_type());
  }

  if (_internal_has_serialized_data()) {
    // required bytes serialized_data = 3;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_serialized_data());
  }

  if (_internal_has_stamp()) {
    // required .gazebo.msgs.Time stamp = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *stamp_);
  }

  return total_size;
}
size_t Packet::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gazebo.msgs.Packet)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x00000007) ^ 0x00000007) == 0) {  // All required fields are present.
    // required string type = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_type());

    // required bytes serialized_data = 3;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_serialized_data());

    // required .gazebo.msgs.Time stamp = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *stamp_);

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

void Packet::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gazebo.msgs.Packet)
  GOOGLE_DCHECK_NE(&from, this);
  const Packet* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Packet>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gazebo.msgs.Packet)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gazebo.msgs.Packet)
    MergeFrom(*source);
  }
}

void Packet::MergeFrom(const Packet& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gazebo.msgs.Packet)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _has_bits_[0] |= 0x00000001u;
      type_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.type_);
    }
    if (cached_has_bits & 0x00000002u) {
      _has_bits_[0] |= 0x00000002u;
      serialized_data_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.serialized_data_);
    }
    if (cached_has_bits & 0x00000004u) {
      _internal_mutable_stamp()->::gazebo::msgs::Time::MergeFrom(from._internal_stamp());
    }
  }
}

void Packet::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gazebo.msgs.Packet)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Packet::CopyFrom(const Packet& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gazebo.msgs.Packet)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Packet::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;
  if (_internal_has_stamp()) {
    if (!stamp_->IsInitialized()) return false;
  }
  return true;
}

void Packet::InternalSwap(Packet* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  type_.Swap(&other->type_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  serialized_data_.Swap(&other->serialized_data_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(stamp_, other->stamp_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Packet::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::gazebo::msgs::Packet* Arena::CreateMaybeMessage< ::gazebo::msgs::Packet >(Arena* arena) {
  return Arena::CreateInternal< ::gazebo::msgs::Packet >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

GZ_REGISTER_STATIC_MSG("gazebo.msgs.Packet", Packet)
// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
