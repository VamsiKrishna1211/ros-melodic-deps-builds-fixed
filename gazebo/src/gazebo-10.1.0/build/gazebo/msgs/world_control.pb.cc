// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: world_control.proto

#include "world_control.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_world_5freset_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_WorldReset_world_5freset_2eproto;
namespace gazebo {
namespace msgs {
class WorldControlDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<WorldControl> _instance;
} _WorldControl_default_instance_;
}  // namespace msgs
}  // namespace gazebo
static void InitDefaultsscc_info_WorldControl_world_5fcontrol_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gazebo::msgs::_WorldControl_default_instance_;
    new (ptr) ::gazebo::msgs::WorldControl();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gazebo::msgs::WorldControl::InitAsDefaultInstance();
}

GZ_MSGS_VISIBLE ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_WorldControl_world_5fcontrol_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_WorldControl_world_5fcontrol_2eproto}, {
      &scc_info_WorldReset_world_5freset_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_world_5fcontrol_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_world_5fcontrol_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_world_5fcontrol_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_world_5fcontrol_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::WorldControl, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::WorldControl, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::WorldControl, pause_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::WorldControl, step_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::WorldControl, multi_step_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::WorldControl, reset_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::WorldControl, seed_),
  1,
  2,
  3,
  0,
  4,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 10, sizeof(::gazebo::msgs::WorldControl)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::gazebo::msgs::_WorldControl_default_instance_),
};

const char descriptor_table_protodef_world_5fcontrol_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\023world_control.proto\022\013gazebo.msgs\032\021worl"
  "d_reset.proto\"u\n\014WorldControl\022\r\n\005pause\030\001"
  " \001(\010\022\014\n\004step\030\002 \001(\010\022\022\n\nmulti_step\030\003 \001(\r\022&"
  "\n\005reset\030\004 \001(\0132\027.gazebo.msgs.WorldReset\022\014"
  "\n\004seed\030\005 \001(\r"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_world_5fcontrol_2eproto_deps[1] = {
  &::descriptor_table_world_5freset_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_world_5fcontrol_2eproto_sccs[1] = {
  &scc_info_WorldControl_world_5fcontrol_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_world_5fcontrol_2eproto_once;
static bool descriptor_table_world_5fcontrol_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_world_5fcontrol_2eproto = {
  &descriptor_table_world_5fcontrol_2eproto_initialized, descriptor_table_protodef_world_5fcontrol_2eproto, "world_control.proto", 172,
  &descriptor_table_world_5fcontrol_2eproto_once, descriptor_table_world_5fcontrol_2eproto_sccs, descriptor_table_world_5fcontrol_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_world_5fcontrol_2eproto::offsets,
  file_level_metadata_world_5fcontrol_2eproto, 1, file_level_enum_descriptors_world_5fcontrol_2eproto, file_level_service_descriptors_world_5fcontrol_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_world_5fcontrol_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_world_5fcontrol_2eproto), true);
namespace gazebo {
namespace msgs {

// ===================================================================

void WorldControl::InitAsDefaultInstance() {
  ::gazebo::msgs::_WorldControl_default_instance_._instance.get_mutable()->reset_ = const_cast< ::gazebo::msgs::WorldReset*>(
      ::gazebo::msgs::WorldReset::internal_default_instance());
}
class WorldControl::_Internal {
 public:
  using HasBits = decltype(std::declval<WorldControl>()._has_bits_);
  static void set_has_pause(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_step(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_multi_step(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static const ::gazebo::msgs::WorldReset& reset(const WorldControl* msg);
  static void set_has_reset(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_seed(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
};

const ::gazebo::msgs::WorldReset&
WorldControl::_Internal::reset(const WorldControl* msg) {
  return *msg->reset_;
}
void WorldControl::clear_reset() {
  if (reset_ != nullptr) reset_->Clear();
  _has_bits_[0] &= ~0x00000001u;
}
WorldControl::WorldControl()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gazebo.msgs.WorldControl)
}
WorldControl::WorldControl(const WorldControl& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from._internal_has_reset()) {
    reset_ = new ::gazebo::msgs::WorldReset(*from.reset_);
  } else {
    reset_ = nullptr;
  }
  ::memcpy(&pause_, &from.pause_,
    static_cast<size_t>(reinterpret_cast<char*>(&seed_) -
    reinterpret_cast<char*>(&pause_)) + sizeof(seed_));
  // @@protoc_insertion_point(copy_constructor:gazebo.msgs.WorldControl)
}

void WorldControl::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_WorldControl_world_5fcontrol_2eproto.base);
  ::memset(&reset_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&seed_) -
      reinterpret_cast<char*>(&reset_)) + sizeof(seed_));
}

WorldControl::~WorldControl() {
  // @@protoc_insertion_point(destructor:gazebo.msgs.WorldControl)
  SharedDtor();
}

void WorldControl::SharedDtor() {
  if (this != internal_default_instance()) delete reset_;
}

void WorldControl::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const WorldControl& WorldControl::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_WorldControl_world_5fcontrol_2eproto.base);
  return *internal_default_instance();
}


void WorldControl::Clear() {
// @@protoc_insertion_point(message_clear_start:gazebo.msgs.WorldControl)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    GOOGLE_DCHECK(reset_ != nullptr);
    reset_->Clear();
  }
  if (cached_has_bits & 0x0000001eu) {
    ::memset(&pause_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&seed_) -
        reinterpret_cast<char*>(&pause_)) + sizeof(seed_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* WorldControl::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional bool pause = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          _Internal::set_has_pause(&has_bits);
          pause_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional bool step = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          _Internal::set_has_step(&has_bits);
          step_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional uint32 multi_step = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          _Internal::set_has_multi_step(&has_bits);
          multi_step_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .gazebo.msgs.WorldReset reset = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr = ctx->ParseMessage(_internal_mutable_reset(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional uint32 seed = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 40)) {
          _Internal::set_has_seed(&has_bits);
          seed_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* WorldControl::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:gazebo.msgs.WorldControl)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional bool pause = 1;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(1, this->_internal_pause(), target);
  }

  // optional bool step = 2;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(2, this->_internal_step(), target);
  }

  // optional uint32 multi_step = 3;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(3, this->_internal_multi_step(), target);
  }

  // optional .gazebo.msgs.WorldReset reset = 4;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        4, _Internal::reset(this), target, stream);
  }

  // optional uint32 seed = 5;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(5, this->_internal_seed(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gazebo.msgs.WorldControl)
  return target;
}

size_t WorldControl::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gazebo.msgs.WorldControl)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    // optional .gazebo.msgs.WorldReset reset = 4;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *reset_);
    }

    // optional bool pause = 1;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 + 1;
    }

    // optional bool step = 2;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 + 1;
    }

    // optional uint32 multi_step = 3;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
          this->_internal_multi_step());
    }

    // optional uint32 seed = 5;
    if (cached_has_bits & 0x00000010u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
          this->_internal_seed());
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

void WorldControl::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gazebo.msgs.WorldControl)
  GOOGLE_DCHECK_NE(&from, this);
  const WorldControl* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<WorldControl>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gazebo.msgs.WorldControl)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gazebo.msgs.WorldControl)
    MergeFrom(*source);
  }
}

void WorldControl::MergeFrom(const WorldControl& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gazebo.msgs.WorldControl)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    if (cached_has_bits & 0x00000001u) {
      _internal_mutable_reset()->::gazebo::msgs::WorldReset::MergeFrom(from._internal_reset());
    }
    if (cached_has_bits & 0x00000002u) {
      pause_ = from.pause_;
    }
    if (cached_has_bits & 0x00000004u) {
      step_ = from.step_;
    }
    if (cached_has_bits & 0x00000008u) {
      multi_step_ = from.multi_step_;
    }
    if (cached_has_bits & 0x00000010u) {
      seed_ = from.seed_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void WorldControl::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gazebo.msgs.WorldControl)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void WorldControl::CopyFrom(const WorldControl& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gazebo.msgs.WorldControl)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool WorldControl::IsInitialized() const {
  return true;
}

void WorldControl::InternalSwap(WorldControl* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(reset_, other->reset_);
  swap(pause_, other->pause_);
  swap(step_, other->step_);
  swap(multi_step_, other->multi_step_);
  swap(seed_, other->seed_);
}

::PROTOBUF_NAMESPACE_ID::Metadata WorldControl::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::gazebo::msgs::WorldControl* Arena::CreateMaybeMessage< ::gazebo::msgs::WorldControl >(Arena* arena) {
  return Arena::CreateInternal< ::gazebo::msgs::WorldControl >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

GZ_REGISTER_STATIC_MSG("gazebo.msgs.WorldControl", WorldControl)
// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>