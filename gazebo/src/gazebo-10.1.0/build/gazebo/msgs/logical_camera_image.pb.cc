// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: logical_camera_image.proto

#include "logical_camera_image.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_logical_5fcamera_5fimage_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_LogicalCameraImage_Model_logical_5fcamera_5fimage_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_pose_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_Pose_pose_2eproto;
namespace gazebo {
namespace msgs {
class LogicalCameraImage_ModelDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<LogicalCameraImage_Model> _instance;
} _LogicalCameraImage_Model_default_instance_;
class LogicalCameraImageDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<LogicalCameraImage> _instance;
} _LogicalCameraImage_default_instance_;
}  // namespace msgs
}  // namespace gazebo
static void InitDefaultsscc_info_LogicalCameraImage_logical_5fcamera_5fimage_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gazebo::msgs::_LogicalCameraImage_default_instance_;
    new (ptr) ::gazebo::msgs::LogicalCameraImage();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gazebo::msgs::LogicalCameraImage::InitAsDefaultInstance();
}

GZ_MSGS_VISIBLE ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_LogicalCameraImage_logical_5fcamera_5fimage_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 2, 0, InitDefaultsscc_info_LogicalCameraImage_logical_5fcamera_5fimage_2eproto}, {
      &scc_info_Pose_pose_2eproto.base,
      &scc_info_LogicalCameraImage_Model_logical_5fcamera_5fimage_2eproto.base,}};

static void InitDefaultsscc_info_LogicalCameraImage_Model_logical_5fcamera_5fimage_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gazebo::msgs::_LogicalCameraImage_Model_default_instance_;
    new (ptr) ::gazebo::msgs::LogicalCameraImage_Model();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gazebo::msgs::LogicalCameraImage_Model::InitAsDefaultInstance();
}

GZ_MSGS_VISIBLE ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_LogicalCameraImage_Model_logical_5fcamera_5fimage_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_LogicalCameraImage_Model_logical_5fcamera_5fimage_2eproto}, {
      &scc_info_Pose_pose_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_logical_5fcamera_5fimage_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_logical_5fcamera_5fimage_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_logical_5fcamera_5fimage_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_logical_5fcamera_5fimage_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::LogicalCameraImage_Model, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::LogicalCameraImage_Model, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::LogicalCameraImage_Model, name_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::LogicalCameraImage_Model, pose_),
  0,
  1,
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::LogicalCameraImage, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::LogicalCameraImage, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::LogicalCameraImage, pose_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::LogicalCameraImage, model_),
  0,
  ~0u,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::gazebo::msgs::LogicalCameraImage_Model)},
  { 9, 16, sizeof(::gazebo::msgs::LogicalCameraImage)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::gazebo::msgs::_LogicalCameraImage_Model_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::gazebo::msgs::_LogicalCameraImage_default_instance_),
};

const char descriptor_table_protodef_logical_5fcamera_5fimage_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\032logical_camera_image.proto\022\013gazebo.msg"
  "s\032\npose.proto\"\243\001\n\022LogicalCameraImage\022\037\n\004"
  "pose\030\001 \002(\0132\021.gazebo.msgs.Pose\0224\n\005model\030\002"
  " \003(\0132%.gazebo.msgs.LogicalCameraImage.Mo"
  "del\0326\n\005Model\022\014\n\004name\030\001 \002(\t\022\037\n\004pose\030\002 \002(\013"
  "2\021.gazebo.msgs.Pose"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_logical_5fcamera_5fimage_2eproto_deps[1] = {
  &::descriptor_table_pose_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_logical_5fcamera_5fimage_2eproto_sccs[2] = {
  &scc_info_LogicalCameraImage_logical_5fcamera_5fimage_2eproto.base,
  &scc_info_LogicalCameraImage_Model_logical_5fcamera_5fimage_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_logical_5fcamera_5fimage_2eproto_once;
static bool descriptor_table_logical_5fcamera_5fimage_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_logical_5fcamera_5fimage_2eproto = {
  &descriptor_table_logical_5fcamera_5fimage_2eproto_initialized, descriptor_table_protodef_logical_5fcamera_5fimage_2eproto, "logical_camera_image.proto", 219,
  &descriptor_table_logical_5fcamera_5fimage_2eproto_once, descriptor_table_logical_5fcamera_5fimage_2eproto_sccs, descriptor_table_logical_5fcamera_5fimage_2eproto_deps, 2, 1,
  schemas, file_default_instances, TableStruct_logical_5fcamera_5fimage_2eproto::offsets,
  file_level_metadata_logical_5fcamera_5fimage_2eproto, 2, file_level_enum_descriptors_logical_5fcamera_5fimage_2eproto, file_level_service_descriptors_logical_5fcamera_5fimage_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_logical_5fcamera_5fimage_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_logical_5fcamera_5fimage_2eproto), true);
namespace gazebo {
namespace msgs {

// ===================================================================

void LogicalCameraImage_Model::InitAsDefaultInstance() {
  ::gazebo::msgs::_LogicalCameraImage_Model_default_instance_._instance.get_mutable()->pose_ = const_cast< ::gazebo::msgs::Pose*>(
      ::gazebo::msgs::Pose::internal_default_instance());
}
class LogicalCameraImage_Model::_Internal {
 public:
  using HasBits = decltype(std::declval<LogicalCameraImage_Model>()._has_bits_);
  static void set_has_name(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static const ::gazebo::msgs::Pose& pose(const LogicalCameraImage_Model* msg);
  static void set_has_pose(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

const ::gazebo::msgs::Pose&
LogicalCameraImage_Model::_Internal::pose(const LogicalCameraImage_Model* msg) {
  return *msg->pose_;
}
void LogicalCameraImage_Model::clear_pose() {
  if (pose_ != nullptr) pose_->Clear();
  _has_bits_[0] &= ~0x00000002u;
}
LogicalCameraImage_Model::LogicalCameraImage_Model()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gazebo.msgs.LogicalCameraImage.Model)
}
LogicalCameraImage_Model::LogicalCameraImage_Model(const LogicalCameraImage_Model& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_name()) {
    name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from._internal_has_pose()) {
    pose_ = new ::gazebo::msgs::Pose(*from.pose_);
  } else {
    pose_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:gazebo.msgs.LogicalCameraImage.Model)
}

void LogicalCameraImage_Model::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_LogicalCameraImage_Model_logical_5fcamera_5fimage_2eproto.base);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  pose_ = nullptr;
}

LogicalCameraImage_Model::~LogicalCameraImage_Model() {
  // @@protoc_insertion_point(destructor:gazebo.msgs.LogicalCameraImage.Model)
  SharedDtor();
}

void LogicalCameraImage_Model::SharedDtor() {
  name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete pose_;
}

void LogicalCameraImage_Model::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const LogicalCameraImage_Model& LogicalCameraImage_Model::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_LogicalCameraImage_Model_logical_5fcamera_5fimage_2eproto.base);
  return *internal_default_instance();
}


void LogicalCameraImage_Model::Clear() {
// @@protoc_insertion_point(message_clear_start:gazebo.msgs.LogicalCameraImage.Model)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      name_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(pose_ != nullptr);
      pose_->Clear();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* LogicalCameraImage_Model::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
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
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "gazebo.msgs.LogicalCameraImage.Model.name");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required .gazebo.msgs.Pose pose = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_pose(), ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* LogicalCameraImage_Model::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:gazebo.msgs.LogicalCameraImage.Model)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required string name = 1;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "gazebo.msgs.LogicalCameraImage.Model.name");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_name(), target);
  }

  // required .gazebo.msgs.Pose pose = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::pose(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gazebo.msgs.LogicalCameraImage.Model)
  return target;
}

size_t LogicalCameraImage_Model::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:gazebo.msgs.LogicalCameraImage.Model)
  size_t total_size = 0;

  if (_internal_has_name()) {
    // required string name = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());
  }

  if (_internal_has_pose()) {
    // required .gazebo.msgs.Pose pose = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *pose_);
  }

  return total_size;
}
size_t LogicalCameraImage_Model::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gazebo.msgs.LogicalCameraImage.Model)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required string name = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());

    // required .gazebo.msgs.Pose pose = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *pose_);

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

void LogicalCameraImage_Model::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gazebo.msgs.LogicalCameraImage.Model)
  GOOGLE_DCHECK_NE(&from, this);
  const LogicalCameraImage_Model* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<LogicalCameraImage_Model>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gazebo.msgs.LogicalCameraImage.Model)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gazebo.msgs.LogicalCameraImage.Model)
    MergeFrom(*source);
  }
}

void LogicalCameraImage_Model::MergeFrom(const LogicalCameraImage_Model& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gazebo.msgs.LogicalCameraImage.Model)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _has_bits_[0] |= 0x00000001u;
      name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.name_);
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_mutable_pose()->::gazebo::msgs::Pose::MergeFrom(from._internal_pose());
    }
  }
}

void LogicalCameraImage_Model::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gazebo.msgs.LogicalCameraImage.Model)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LogicalCameraImage_Model::CopyFrom(const LogicalCameraImage_Model& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gazebo.msgs.LogicalCameraImage.Model)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LogicalCameraImage_Model::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  if (_internal_has_pose()) {
    if (!pose_->IsInitialized()) return false;
  }
  return true;
}

void LogicalCameraImage_Model::InternalSwap(LogicalCameraImage_Model* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  name_.Swap(&other->name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(pose_, other->pose_);
}

::PROTOBUF_NAMESPACE_ID::Metadata LogicalCameraImage_Model::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void LogicalCameraImage::InitAsDefaultInstance() {
  ::gazebo::msgs::_LogicalCameraImage_default_instance_._instance.get_mutable()->pose_ = const_cast< ::gazebo::msgs::Pose*>(
      ::gazebo::msgs::Pose::internal_default_instance());
}
class LogicalCameraImage::_Internal {
 public:
  using HasBits = decltype(std::declval<LogicalCameraImage>()._has_bits_);
  static const ::gazebo::msgs::Pose& pose(const LogicalCameraImage* msg);
  static void set_has_pose(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

const ::gazebo::msgs::Pose&
LogicalCameraImage::_Internal::pose(const LogicalCameraImage* msg) {
  return *msg->pose_;
}
void LogicalCameraImage::clear_pose() {
  if (pose_ != nullptr) pose_->Clear();
  _has_bits_[0] &= ~0x00000001u;
}
LogicalCameraImage::LogicalCameraImage()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gazebo.msgs.LogicalCameraImage)
}
LogicalCameraImage::LogicalCameraImage(const LogicalCameraImage& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_),
      model_(from.model_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from._internal_has_pose()) {
    pose_ = new ::gazebo::msgs::Pose(*from.pose_);
  } else {
    pose_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:gazebo.msgs.LogicalCameraImage)
}

void LogicalCameraImage::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_LogicalCameraImage_logical_5fcamera_5fimage_2eproto.base);
  pose_ = nullptr;
}

LogicalCameraImage::~LogicalCameraImage() {
  // @@protoc_insertion_point(destructor:gazebo.msgs.LogicalCameraImage)
  SharedDtor();
}

void LogicalCameraImage::SharedDtor() {
  if (this != internal_default_instance()) delete pose_;
}

void LogicalCameraImage::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const LogicalCameraImage& LogicalCameraImage::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_LogicalCameraImage_logical_5fcamera_5fimage_2eproto.base);
  return *internal_default_instance();
}


void LogicalCameraImage::Clear() {
// @@protoc_insertion_point(message_clear_start:gazebo.msgs.LogicalCameraImage)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  model_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    GOOGLE_DCHECK(pose_ != nullptr);
    pose_->Clear();
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* LogicalCameraImage::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // required .gazebo.msgs.Pose pose = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_pose(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .gazebo.msgs.LogicalCameraImage.Model model = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_model(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
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

::PROTOBUF_NAMESPACE_ID::uint8* LogicalCameraImage::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:gazebo.msgs.LogicalCameraImage)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required .gazebo.msgs.Pose pose = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::pose(this), target, stream);
  }

  // repeated .gazebo.msgs.LogicalCameraImage.Model model = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_model_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, this->_internal_model(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gazebo.msgs.LogicalCameraImage)
  return target;
}

size_t LogicalCameraImage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gazebo.msgs.LogicalCameraImage)
  size_t total_size = 0;

  // required .gazebo.msgs.Pose pose = 1;
  if (_internal_has_pose()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *pose_);
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .gazebo.msgs.LogicalCameraImage.Model model = 2;
  total_size += 1UL * this->_internal_model_size();
  for (const auto& msg : this->model_) {
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

void LogicalCameraImage::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gazebo.msgs.LogicalCameraImage)
  GOOGLE_DCHECK_NE(&from, this);
  const LogicalCameraImage* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<LogicalCameraImage>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gazebo.msgs.LogicalCameraImage)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gazebo.msgs.LogicalCameraImage)
    MergeFrom(*source);
  }
}

void LogicalCameraImage::MergeFrom(const LogicalCameraImage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gazebo.msgs.LogicalCameraImage)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  model_.MergeFrom(from.model_);
  if (from._internal_has_pose()) {
    _internal_mutable_pose()->::gazebo::msgs::Pose::MergeFrom(from._internal_pose());
  }
}

void LogicalCameraImage::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gazebo.msgs.LogicalCameraImage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LogicalCameraImage::CopyFrom(const LogicalCameraImage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gazebo.msgs.LogicalCameraImage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LogicalCameraImage::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  if (!::PROTOBUF_NAMESPACE_ID::internal::AllAreInitialized(model_)) return false;
  if (_internal_has_pose()) {
    if (!pose_->IsInitialized()) return false;
  }
  return true;
}

void LogicalCameraImage::InternalSwap(LogicalCameraImage* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  model_.InternalSwap(&other->model_);
  swap(pose_, other->pose_);
}

::PROTOBUF_NAMESPACE_ID::Metadata LogicalCameraImage::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::gazebo::msgs::LogicalCameraImage_Model* Arena::CreateMaybeMessage< ::gazebo::msgs::LogicalCameraImage_Model >(Arena* arena) {
  return Arena::CreateInternal< ::gazebo::msgs::LogicalCameraImage_Model >(arena);
}
template<> PROTOBUF_NOINLINE ::gazebo::msgs::LogicalCameraImage* Arena::CreateMaybeMessage< ::gazebo::msgs::LogicalCameraImage >(Arena* arena) {
  return Arena::CreateInternal< ::gazebo::msgs::LogicalCameraImage >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

GZ_REGISTER_STATIC_MSG("gazebo.msgs.LogicalCameraImage", LogicalCameraImage)
// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>