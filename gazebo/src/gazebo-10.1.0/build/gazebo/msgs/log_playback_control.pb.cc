// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: log_playback_control.proto

#include "log_playback_control.pb.h"

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
class LogPlaybackControlDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<LogPlaybackControl> _instance;
} _LogPlaybackControl_default_instance_;
}  // namespace msgs
}  // namespace gazebo
static void InitDefaultsscc_info_LogPlaybackControl_log_5fplayback_5fcontrol_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gazebo::msgs::_LogPlaybackControl_default_instance_;
    new (ptr) ::gazebo::msgs::LogPlaybackControl();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gazebo::msgs::LogPlaybackControl::InitAsDefaultInstance();
}

GZ_MSGS_VISIBLE ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_LogPlaybackControl_log_5fplayback_5fcontrol_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_LogPlaybackControl_log_5fplayback_5fcontrol_2eproto}, {
      &scc_info_Time_time_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_log_5fplayback_5fcontrol_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_log_5fplayback_5fcontrol_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_log_5fplayback_5fcontrol_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_log_5fplayback_5fcontrol_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::LogPlaybackControl, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::LogPlaybackControl, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::LogPlaybackControl, pause_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::LogPlaybackControl, multi_step_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::LogPlaybackControl, rewind_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::LogPlaybackControl, forward_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::LogPlaybackControl, seek_),
  2,
  1,
  3,
  4,
  0,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 10, sizeof(::gazebo::msgs::LogPlaybackControl)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::gazebo::msgs::_LogPlaybackControl_default_instance_),
};

const char descriptor_table_protodef_log_5fplayback_5fcontrol_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\032log_playback_control.proto\022\013gazebo.msg"
  "s\032\ntime.proto\"y\n\022LogPlaybackControl\022\r\n\005p"
  "ause\030\001 \001(\010\022\022\n\nmulti_step\030\002 \001(\021\022\016\n\006rewind"
  "\030\003 \001(\010\022\017\n\007forward\030\004 \001(\010\022\037\n\004seek\030\005 \001(\0132\021."
  "gazebo.msgs.Time"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_log_5fplayback_5fcontrol_2eproto_deps[1] = {
  &::descriptor_table_time_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_log_5fplayback_5fcontrol_2eproto_sccs[1] = {
  &scc_info_LogPlaybackControl_log_5fplayback_5fcontrol_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_log_5fplayback_5fcontrol_2eproto_once;
static bool descriptor_table_log_5fplayback_5fcontrol_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_log_5fplayback_5fcontrol_2eproto = {
  &descriptor_table_log_5fplayback_5fcontrol_2eproto_initialized, descriptor_table_protodef_log_5fplayback_5fcontrol_2eproto, "log_playback_control.proto", 176,
  &descriptor_table_log_5fplayback_5fcontrol_2eproto_once, descriptor_table_log_5fplayback_5fcontrol_2eproto_sccs, descriptor_table_log_5fplayback_5fcontrol_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_log_5fplayback_5fcontrol_2eproto::offsets,
  file_level_metadata_log_5fplayback_5fcontrol_2eproto, 1, file_level_enum_descriptors_log_5fplayback_5fcontrol_2eproto, file_level_service_descriptors_log_5fplayback_5fcontrol_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_log_5fplayback_5fcontrol_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_log_5fplayback_5fcontrol_2eproto), true);
namespace gazebo {
namespace msgs {

// ===================================================================

void LogPlaybackControl::InitAsDefaultInstance() {
  ::gazebo::msgs::_LogPlaybackControl_default_instance_._instance.get_mutable()->seek_ = const_cast< ::gazebo::msgs::Time*>(
      ::gazebo::msgs::Time::internal_default_instance());
}
class LogPlaybackControl::_Internal {
 public:
  using HasBits = decltype(std::declval<LogPlaybackControl>()._has_bits_);
  static void set_has_pause(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_multi_step(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_rewind(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_forward(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static const ::gazebo::msgs::Time& seek(const LogPlaybackControl* msg);
  static void set_has_seek(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

const ::gazebo::msgs::Time&
LogPlaybackControl::_Internal::seek(const LogPlaybackControl* msg) {
  return *msg->seek_;
}
void LogPlaybackControl::clear_seek() {
  if (seek_ != nullptr) seek_->Clear();
  _has_bits_[0] &= ~0x00000001u;
}
LogPlaybackControl::LogPlaybackControl()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gazebo.msgs.LogPlaybackControl)
}
LogPlaybackControl::LogPlaybackControl(const LogPlaybackControl& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from._internal_has_seek()) {
    seek_ = new ::gazebo::msgs::Time(*from.seek_);
  } else {
    seek_ = nullptr;
  }
  ::memcpy(&multi_step_, &from.multi_step_,
    static_cast<size_t>(reinterpret_cast<char*>(&forward_) -
    reinterpret_cast<char*>(&multi_step_)) + sizeof(forward_));
  // @@protoc_insertion_point(copy_constructor:gazebo.msgs.LogPlaybackControl)
}

void LogPlaybackControl::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_LogPlaybackControl_log_5fplayback_5fcontrol_2eproto.base);
  ::memset(&seek_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&forward_) -
      reinterpret_cast<char*>(&seek_)) + sizeof(forward_));
}

LogPlaybackControl::~LogPlaybackControl() {
  // @@protoc_insertion_point(destructor:gazebo.msgs.LogPlaybackControl)
  SharedDtor();
}

void LogPlaybackControl::SharedDtor() {
  if (this != internal_default_instance()) delete seek_;
}

void LogPlaybackControl::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const LogPlaybackControl& LogPlaybackControl::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_LogPlaybackControl_log_5fplayback_5fcontrol_2eproto.base);
  return *internal_default_instance();
}


void LogPlaybackControl::Clear() {
// @@protoc_insertion_point(message_clear_start:gazebo.msgs.LogPlaybackControl)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    GOOGLE_DCHECK(seek_ != nullptr);
    seek_->Clear();
  }
  if (cached_has_bits & 0x0000001eu) {
    ::memset(&multi_step_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&forward_) -
        reinterpret_cast<char*>(&multi_step_)) + sizeof(forward_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* LogPlaybackControl::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
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
      // optional sint32 multi_step = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          _Internal::set_has_multi_step(&has_bits);
          multi_step_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarintZigZag32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional bool rewind = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          _Internal::set_has_rewind(&has_bits);
          rewind_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional bool forward = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          _Internal::set_has_forward(&has_bits);
          forward_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .gazebo.msgs.Time seek = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          ptr = ctx->ParseMessage(_internal_mutable_seek(), ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* LogPlaybackControl::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:gazebo.msgs.LogPlaybackControl)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional bool pause = 1;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(1, this->_internal_pause(), target);
  }

  // optional sint32 multi_step = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteSInt32ToArray(2, this->_internal_multi_step(), target);
  }

  // optional bool rewind = 3;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(3, this->_internal_rewind(), target);
  }

  // optional bool forward = 4;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(4, this->_internal_forward(), target);
  }

  // optional .gazebo.msgs.Time seek = 5;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        5, _Internal::seek(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gazebo.msgs.LogPlaybackControl)
  return target;
}

size_t LogPlaybackControl::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gazebo.msgs.LogPlaybackControl)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    // optional .gazebo.msgs.Time seek = 5;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *seek_);
    }

    // optional sint32 multi_step = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SInt32Size(
          this->_internal_multi_step());
    }

    // optional bool pause = 1;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 + 1;
    }

    // optional bool rewind = 3;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 + 1;
    }

    // optional bool forward = 4;
    if (cached_has_bits & 0x00000010u) {
      total_size += 1 + 1;
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

void LogPlaybackControl::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gazebo.msgs.LogPlaybackControl)
  GOOGLE_DCHECK_NE(&from, this);
  const LogPlaybackControl* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<LogPlaybackControl>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gazebo.msgs.LogPlaybackControl)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gazebo.msgs.LogPlaybackControl)
    MergeFrom(*source);
  }
}

void LogPlaybackControl::MergeFrom(const LogPlaybackControl& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gazebo.msgs.LogPlaybackControl)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    if (cached_has_bits & 0x00000001u) {
      _internal_mutable_seek()->::gazebo::msgs::Time::MergeFrom(from._internal_seek());
    }
    if (cached_has_bits & 0x00000002u) {
      multi_step_ = from.multi_step_;
    }
    if (cached_has_bits & 0x00000004u) {
      pause_ = from.pause_;
    }
    if (cached_has_bits & 0x00000008u) {
      rewind_ = from.rewind_;
    }
    if (cached_has_bits & 0x00000010u) {
      forward_ = from.forward_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void LogPlaybackControl::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gazebo.msgs.LogPlaybackControl)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LogPlaybackControl::CopyFrom(const LogPlaybackControl& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gazebo.msgs.LogPlaybackControl)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LogPlaybackControl::IsInitialized() const {
  if (_internal_has_seek()) {
    if (!seek_->IsInitialized()) return false;
  }
  return true;
}

void LogPlaybackControl::InternalSwap(LogPlaybackControl* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(seek_, other->seek_);
  swap(multi_step_, other->multi_step_);
  swap(pause_, other->pause_);
  swap(rewind_, other->rewind_);
  swap(forward_, other->forward_);
}

::PROTOBUF_NAMESPACE_ID::Metadata LogPlaybackControl::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::gazebo::msgs::LogPlaybackControl* Arena::CreateMaybeMessage< ::gazebo::msgs::LogPlaybackControl >(Arena* arena) {
  return Arena::CreateInternal< ::gazebo::msgs::LogPlaybackControl >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

GZ_REGISTER_STATIC_MSG("gazebo.msgs.LogPlaybackControl", LogPlaybackControl)
// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
