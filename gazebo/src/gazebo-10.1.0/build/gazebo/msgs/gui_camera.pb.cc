// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gui_camera.proto

#include "gui_camera.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_pose_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_Pose_pose_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_track_5fvisual_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_TrackVisual_track_5fvisual_2eproto;
namespace gazebo {
namespace msgs {
class GUICameraDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<GUICamera> _instance;
} _GUICamera_default_instance_;
}  // namespace msgs
}  // namespace gazebo
static void InitDefaultsscc_info_GUICamera_gui_5fcamera_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gazebo::msgs::_GUICamera_default_instance_;
    new (ptr) ::gazebo::msgs::GUICamera();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gazebo::msgs::GUICamera::InitAsDefaultInstance();
}

GZ_MSGS_VISIBLE ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_GUICamera_gui_5fcamera_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 2, 0, InitDefaultsscc_info_GUICamera_gui_5fcamera_2eproto}, {
      &scc_info_Pose_pose_2eproto.base,
      &scc_info_TrackVisual_track_5fvisual_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_gui_5fcamera_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_gui_5fcamera_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_gui_5fcamera_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_gui_5fcamera_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::GUICamera, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::GUICamera, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::GUICamera, name_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::GUICamera, view_controller_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::GUICamera, pose_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::GUICamera, track_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::GUICamera, projection_type_),
  0,
  1,
  3,
  4,
  2,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 10, sizeof(::gazebo::msgs::GUICamera)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::gazebo::msgs::_GUICamera_default_instance_),
};

const char descriptor_table_protodef_gui_5fcamera_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\020gui_camera.proto\022\013gazebo.msgs\032\npose.pr"
  "oto\032\022track_visual.proto\"\225\001\n\tGUICamera\022\014\n"
  "\004name\030\001 \002(\t\022\027\n\017view_controller\030\002 \001(\t\022\037\n\004"
  "pose\030\003 \001(\0132\021.gazebo.msgs.Pose\022\'\n\005track\030\004"
  " \001(\0132\030.gazebo.msgs.TrackVisual\022\027\n\017projec"
  "tion_type\030\005 \001(\t"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_gui_5fcamera_2eproto_deps[2] = {
  &::descriptor_table_pose_2eproto,
  &::descriptor_table_track_5fvisual_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_gui_5fcamera_2eproto_sccs[1] = {
  &scc_info_GUICamera_gui_5fcamera_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_gui_5fcamera_2eproto_once;
static bool descriptor_table_gui_5fcamera_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_gui_5fcamera_2eproto = {
  &descriptor_table_gui_5fcamera_2eproto_initialized, descriptor_table_protodef_gui_5fcamera_2eproto, "gui_camera.proto", 215,
  &descriptor_table_gui_5fcamera_2eproto_once, descriptor_table_gui_5fcamera_2eproto_sccs, descriptor_table_gui_5fcamera_2eproto_deps, 1, 2,
  schemas, file_default_instances, TableStruct_gui_5fcamera_2eproto::offsets,
  file_level_metadata_gui_5fcamera_2eproto, 1, file_level_enum_descriptors_gui_5fcamera_2eproto, file_level_service_descriptors_gui_5fcamera_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_gui_5fcamera_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_gui_5fcamera_2eproto), true);
namespace gazebo {
namespace msgs {

// ===================================================================

void GUICamera::InitAsDefaultInstance() {
  ::gazebo::msgs::_GUICamera_default_instance_._instance.get_mutable()->pose_ = const_cast< ::gazebo::msgs::Pose*>(
      ::gazebo::msgs::Pose::internal_default_instance());
  ::gazebo::msgs::_GUICamera_default_instance_._instance.get_mutable()->track_ = const_cast< ::gazebo::msgs::TrackVisual*>(
      ::gazebo::msgs::TrackVisual::internal_default_instance());
}
class GUICamera::_Internal {
 public:
  using HasBits = decltype(std::declval<GUICamera>()._has_bits_);
  static void set_has_name(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_view_controller(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static const ::gazebo::msgs::Pose& pose(const GUICamera* msg);
  static void set_has_pose(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static const ::gazebo::msgs::TrackVisual& track(const GUICamera* msg);
  static void set_has_track(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_projection_type(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
};

const ::gazebo::msgs::Pose&
GUICamera::_Internal::pose(const GUICamera* msg) {
  return *msg->pose_;
}
const ::gazebo::msgs::TrackVisual&
GUICamera::_Internal::track(const GUICamera* msg) {
  return *msg->track_;
}
void GUICamera::clear_pose() {
  if (pose_ != nullptr) pose_->Clear();
  _has_bits_[0] &= ~0x00000008u;
}
void GUICamera::clear_track() {
  if (track_ != nullptr) track_->Clear();
  _has_bits_[0] &= ~0x00000010u;
}
GUICamera::GUICamera()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gazebo.msgs.GUICamera)
}
GUICamera::GUICamera(const GUICamera& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_name()) {
    name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  view_controller_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_view_controller()) {
    view_controller_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.view_controller_);
  }
  projection_type_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_projection_type()) {
    projection_type_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.projection_type_);
  }
  if (from._internal_has_pose()) {
    pose_ = new ::gazebo::msgs::Pose(*from.pose_);
  } else {
    pose_ = nullptr;
  }
  if (from._internal_has_track()) {
    track_ = new ::gazebo::msgs::TrackVisual(*from.track_);
  } else {
    track_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:gazebo.msgs.GUICamera)
}

void GUICamera::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_GUICamera_gui_5fcamera_2eproto.base);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  view_controller_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  projection_type_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&pose_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&track_) -
      reinterpret_cast<char*>(&pose_)) + sizeof(track_));
}

GUICamera::~GUICamera() {
  // @@protoc_insertion_point(destructor:gazebo.msgs.GUICamera)
  SharedDtor();
}

void GUICamera::SharedDtor() {
  name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  view_controller_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  projection_type_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete pose_;
  if (this != internal_default_instance()) delete track_;
}

void GUICamera::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const GUICamera& GUICamera::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_GUICamera_gui_5fcamera_2eproto.base);
  return *internal_default_instance();
}


void GUICamera::Clear() {
// @@protoc_insertion_point(message_clear_start:gazebo.msgs.GUICamera)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    if (cached_has_bits & 0x00000001u) {
      name_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000002u) {
      view_controller_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000004u) {
      projection_type_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000008u) {
      GOOGLE_DCHECK(pose_ != nullptr);
      pose_->Clear();
    }
    if (cached_has_bits & 0x00000010u) {
      GOOGLE_DCHECK(track_ != nullptr);
      track_->Clear();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* GUICamera::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // required string name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "gazebo.msgs.GUICamera.name");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional string view_controller = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_view_controller();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "gazebo.msgs.GUICamera.view_controller");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .gazebo.msgs.Pose pose = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_pose(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .gazebo.msgs.TrackVisual track = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr = ctx->ParseMessage(_internal_mutable_track(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional string projection_type = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          auto str = _internal_mutable_projection_type();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "gazebo.msgs.GUICamera.projection_type");
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

::PROTOBUF_NAMESPACE_ID::uint8* GUICamera::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:gazebo.msgs.GUICamera)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required string name = 1;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "gazebo.msgs.GUICamera.name");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_name(), target);
  }

  // optional string view_controller = 2;
  if (cached_has_bits & 0x00000002u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_view_controller().data(), static_cast<int>(this->_internal_view_controller().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "gazebo.msgs.GUICamera.view_controller");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_view_controller(), target);
  }

  // optional .gazebo.msgs.Pose pose = 3;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        3, _Internal::pose(this), target, stream);
  }

  // optional .gazebo.msgs.TrackVisual track = 4;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        4, _Internal::track(this), target, stream);
  }

  // optional string projection_type = 5;
  if (cached_has_bits & 0x00000004u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_projection_type().data(), static_cast<int>(this->_internal_projection_type().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "gazebo.msgs.GUICamera.projection_type");
    target = stream->WriteStringMaybeAliased(
        5, this->_internal_projection_type(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gazebo.msgs.GUICamera)
  return target;
}

size_t GUICamera::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gazebo.msgs.GUICamera)
  size_t total_size = 0;

  // required string name = 1;
  if (_internal_has_name()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000001eu) {
    // optional string view_controller = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_view_controller());
    }

    // optional string projection_type = 5;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_projection_type());
    }

    // optional .gazebo.msgs.Pose pose = 3;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *pose_);
    }

    // optional .gazebo.msgs.TrackVisual track = 4;
    if (cached_has_bits & 0x00000010u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *track_);
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

void GUICamera::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gazebo.msgs.GUICamera)
  GOOGLE_DCHECK_NE(&from, this);
  const GUICamera* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<GUICamera>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gazebo.msgs.GUICamera)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gazebo.msgs.GUICamera)
    MergeFrom(*source);
  }
}

void GUICamera::MergeFrom(const GUICamera& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gazebo.msgs.GUICamera)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    if (cached_has_bits & 0x00000001u) {
      _has_bits_[0] |= 0x00000001u;
      name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.name_);
    }
    if (cached_has_bits & 0x00000002u) {
      _has_bits_[0] |= 0x00000002u;
      view_controller_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.view_controller_);
    }
    if (cached_has_bits & 0x00000004u) {
      _has_bits_[0] |= 0x00000004u;
      projection_type_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.projection_type_);
    }
    if (cached_has_bits & 0x00000008u) {
      _internal_mutable_pose()->::gazebo::msgs::Pose::MergeFrom(from._internal_pose());
    }
    if (cached_has_bits & 0x00000010u) {
      _internal_mutable_track()->::gazebo::msgs::TrackVisual::MergeFrom(from._internal_track());
    }
  }
}

void GUICamera::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gazebo.msgs.GUICamera)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GUICamera::CopyFrom(const GUICamera& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gazebo.msgs.GUICamera)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GUICamera::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  if (_internal_has_pose()) {
    if (!pose_->IsInitialized()) return false;
  }
  if (_internal_has_track()) {
    if (!track_->IsInitialized()) return false;
  }
  return true;
}

void GUICamera::InternalSwap(GUICamera* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  name_.Swap(&other->name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  view_controller_.Swap(&other->view_controller_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  projection_type_.Swap(&other->projection_type_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(pose_, other->pose_);
  swap(track_, other->track_);
}

::PROTOBUF_NAMESPACE_ID::Metadata GUICamera::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::gazebo::msgs::GUICamera* Arena::CreateMaybeMessage< ::gazebo::msgs::GUICamera >(Arena* arena) {
  return Arena::CreateInternal< ::gazebo::msgs::GUICamera >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

GZ_REGISTER_STATIC_MSG("gazebo.msgs.GUICamera", GUICamera)
// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>