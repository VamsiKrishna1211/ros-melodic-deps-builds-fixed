// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: model_configuration.proto

#include "model_configuration.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_time_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Time_time_2eproto;
namespace gazebo {
namespace msgs {
class ModelConfigurationDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ModelConfiguration> _instance;
} _ModelConfiguration_default_instance_;
}  // namespace msgs
}  // namespace gazebo
static void InitDefaultsscc_info_ModelConfiguration_model_5fconfiguration_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gazebo::msgs::_ModelConfiguration_default_instance_;
    new (ptr) ::gazebo::msgs::ModelConfiguration();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gazebo::msgs::ModelConfiguration::InitAsDefaultInstance();
}

GZ_MSGS_VISIBLE ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_ModelConfiguration_model_5fconfiguration_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 2, 0, InitDefaultsscc_info_ModelConfiguration_model_5fconfiguration_2eproto}, {
      &scc_info_Time_time_2eproto.base,
      &scc_info_Pose_pose_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_model_5fconfiguration_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_model_5fconfiguration_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_model_5fconfiguration_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_model_5fconfiguration_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::ModelConfiguration, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::ModelConfiguration, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::ModelConfiguration, time_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::ModelConfiguration, joint_names_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::ModelConfiguration, joint_positions_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::ModelConfiguration, pose_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::ModelConfiguration, link_name_),
  1,
  ~0u,
  ~0u,
  2,
  0,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 10, sizeof(::gazebo::msgs::ModelConfiguration)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::gazebo::msgs::_ModelConfiguration_default_instance_),
};

const char descriptor_table_protodef_model_5fconfiguration_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\031model_configuration.proto\022\013gazebo.msgs"
  "\032\ntime.proto\032\npose.proto\"\227\001\n\022ModelConfig"
  "uration\022\037\n\004time\030\001 \002(\0132\021.gazebo.msgs.Time"
  "\022\023\n\013joint_names\030\002 \003(\t\022\027\n\017joint_positions"
  "\030\003 \003(\001\022\037\n\004pose\030\004 \001(\0132\021.gazebo.msgs.Pose\022"
  "\021\n\tlink_name\030\005 \001(\t"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_model_5fconfiguration_2eproto_deps[2] = {
  &::descriptor_table_pose_2eproto,
  &::descriptor_table_time_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_model_5fconfiguration_2eproto_sccs[1] = {
  &scc_info_ModelConfiguration_model_5fconfiguration_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_model_5fconfiguration_2eproto_once;
static bool descriptor_table_model_5fconfiguration_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_model_5fconfiguration_2eproto = {
  &descriptor_table_model_5fconfiguration_2eproto_initialized, descriptor_table_protodef_model_5fconfiguration_2eproto, "model_configuration.proto", 218,
  &descriptor_table_model_5fconfiguration_2eproto_once, descriptor_table_model_5fconfiguration_2eproto_sccs, descriptor_table_model_5fconfiguration_2eproto_deps, 1, 2,
  schemas, file_default_instances, TableStruct_model_5fconfiguration_2eproto::offsets,
  file_level_metadata_model_5fconfiguration_2eproto, 1, file_level_enum_descriptors_model_5fconfiguration_2eproto, file_level_service_descriptors_model_5fconfiguration_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_model_5fconfiguration_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_model_5fconfiguration_2eproto), true);
namespace gazebo {
namespace msgs {

// ===================================================================

void ModelConfiguration::InitAsDefaultInstance() {
  ::gazebo::msgs::_ModelConfiguration_default_instance_._instance.get_mutable()->time_ = const_cast< ::gazebo::msgs::Time*>(
      ::gazebo::msgs::Time::internal_default_instance());
  ::gazebo::msgs::_ModelConfiguration_default_instance_._instance.get_mutable()->pose_ = const_cast< ::gazebo::msgs::Pose*>(
      ::gazebo::msgs::Pose::internal_default_instance());
}
class ModelConfiguration::_Internal {
 public:
  using HasBits = decltype(std::declval<ModelConfiguration>()._has_bits_);
  static const ::gazebo::msgs::Time& time(const ModelConfiguration* msg);
  static void set_has_time(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static const ::gazebo::msgs::Pose& pose(const ModelConfiguration* msg);
  static void set_has_pose(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_link_name(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

const ::gazebo::msgs::Time&
ModelConfiguration::_Internal::time(const ModelConfiguration* msg) {
  return *msg->time_;
}
const ::gazebo::msgs::Pose&
ModelConfiguration::_Internal::pose(const ModelConfiguration* msg) {
  return *msg->pose_;
}
void ModelConfiguration::clear_time() {
  if (time_ != nullptr) time_->Clear();
  _has_bits_[0] &= ~0x00000002u;
}
void ModelConfiguration::clear_pose() {
  if (pose_ != nullptr) pose_->Clear();
  _has_bits_[0] &= ~0x00000004u;
}
ModelConfiguration::ModelConfiguration()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gazebo.msgs.ModelConfiguration)
}
ModelConfiguration::ModelConfiguration(const ModelConfiguration& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_),
      joint_names_(from.joint_names_),
      joint_positions_(from.joint_positions_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  link_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_link_name()) {
    link_name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.link_name_);
  }
  if (from._internal_has_time()) {
    time_ = new ::gazebo::msgs::Time(*from.time_);
  } else {
    time_ = nullptr;
  }
  if (from._internal_has_pose()) {
    pose_ = new ::gazebo::msgs::Pose(*from.pose_);
  } else {
    pose_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:gazebo.msgs.ModelConfiguration)
}

void ModelConfiguration::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_ModelConfiguration_model_5fconfiguration_2eproto.base);
  link_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&time_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&pose_) -
      reinterpret_cast<char*>(&time_)) + sizeof(pose_));
}

ModelConfiguration::~ModelConfiguration() {
  // @@protoc_insertion_point(destructor:gazebo.msgs.ModelConfiguration)
  SharedDtor();
}

void ModelConfiguration::SharedDtor() {
  link_name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete time_;
  if (this != internal_default_instance()) delete pose_;
}

void ModelConfiguration::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ModelConfiguration& ModelConfiguration::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ModelConfiguration_model_5fconfiguration_2eproto.base);
  return *internal_default_instance();
}


void ModelConfiguration::Clear() {
// @@protoc_insertion_point(message_clear_start:gazebo.msgs.ModelConfiguration)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  joint_names_.Clear();
  joint_positions_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      link_name_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(time_ != nullptr);
      time_->Clear();
    }
    if (cached_has_bits & 0x00000004u) {
      GOOGLE_DCHECK(pose_ != nullptr);
      pose_->Clear();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* ModelConfiguration::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // required .gazebo.msgs.Time time = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_time(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated string joint_names = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_joint_names();
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
            #ifndef NDEBUG
            ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "gazebo.msgs.ModelConfiguration.joint_names");
            #endif  // !NDEBUG
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else goto handle_unusual;
        continue;
      // repeated double joint_positions = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 25)) {
          ptr -= 1;
          do {
            ptr += 1;
            _internal_add_joint_positions(::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr));
            ptr += sizeof(double);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<25>(ptr));
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedDoubleParser(_internal_mutable_joint_positions(), ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .gazebo.msgs.Pose pose = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr = ctx->ParseMessage(_internal_mutable_pose(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional string link_name = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          auto str = _internal_mutable_link_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "gazebo.msgs.ModelConfiguration.link_name");
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

::PROTOBUF_NAMESPACE_ID::uint8* ModelConfiguration::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:gazebo.msgs.ModelConfiguration)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required .gazebo.msgs.Time time = 1;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::time(this), target, stream);
  }

  // repeated string joint_names = 2;
  for (int i = 0, n = this->_internal_joint_names_size(); i < n; i++) {
    const auto& s = this->_internal_joint_names(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "gazebo.msgs.ModelConfiguration.joint_names");
    target = stream->WriteString(2, s, target);
  }

  // repeated double joint_positions = 3;
  for (int i = 0, n = this->_internal_joint_positions_size(); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(3, this->_internal_joint_positions(i), target);
  }

  // optional .gazebo.msgs.Pose pose = 4;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        4, _Internal::pose(this), target, stream);
  }

  // optional string link_name = 5;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_link_name().data(), static_cast<int>(this->_internal_link_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "gazebo.msgs.ModelConfiguration.link_name");
    target = stream->WriteStringMaybeAliased(
        5, this->_internal_link_name(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gazebo.msgs.ModelConfiguration)
  return target;
}

size_t ModelConfiguration::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gazebo.msgs.ModelConfiguration)
  size_t total_size = 0;

  // required .gazebo.msgs.Time time = 1;
  if (_internal_has_time()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *time_);
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string joint_names = 2;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(joint_names_.size());
  for (int i = 0, n = joint_names_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      joint_names_.Get(i));
  }

  // repeated double joint_positions = 3;
  {
    unsigned int count = static_cast<unsigned int>(this->_internal_joint_positions_size());
    size_t data_size = 8UL * count;
    total_size += 1 *
                  ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(this->_internal_joint_positions_size());
    total_size += data_size;
  }

  // optional string link_name = 5;
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_link_name());
  }

  // optional .gazebo.msgs.Pose pose = 4;
  if (cached_has_bits & 0x00000004u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *pose_);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ModelConfiguration::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gazebo.msgs.ModelConfiguration)
  GOOGLE_DCHECK_NE(&from, this);
  const ModelConfiguration* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ModelConfiguration>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gazebo.msgs.ModelConfiguration)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gazebo.msgs.ModelConfiguration)
    MergeFrom(*source);
  }
}

void ModelConfiguration::MergeFrom(const ModelConfiguration& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gazebo.msgs.ModelConfiguration)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  joint_names_.MergeFrom(from.joint_names_);
  joint_positions_.MergeFrom(from.joint_positions_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _has_bits_[0] |= 0x00000001u;
      link_name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.link_name_);
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_mutable_time()->::gazebo::msgs::Time::MergeFrom(from._internal_time());
    }
    if (cached_has_bits & 0x00000004u) {
      _internal_mutable_pose()->::gazebo::msgs::Pose::MergeFrom(from._internal_pose());
    }
  }
}

void ModelConfiguration::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gazebo.msgs.ModelConfiguration)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ModelConfiguration::CopyFrom(const ModelConfiguration& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gazebo.msgs.ModelConfiguration)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ModelConfiguration::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000002) != 0x00000002) return false;
  if (_internal_has_time()) {
    if (!time_->IsInitialized()) return false;
  }
  if (_internal_has_pose()) {
    if (!pose_->IsInitialized()) return false;
  }
  return true;
}

void ModelConfiguration::InternalSwap(ModelConfiguration* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  joint_names_.InternalSwap(&other->joint_names_);
  joint_positions_.InternalSwap(&other->joint_positions_);
  link_name_.Swap(&other->link_name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(time_, other->time_);
  swap(pose_, other->pose_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ModelConfiguration::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::gazebo::msgs::ModelConfiguration* Arena::CreateMaybeMessage< ::gazebo::msgs::ModelConfiguration >(Arena* arena) {
  return Arena::CreateInternal< ::gazebo::msgs::ModelConfiguration >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

GZ_REGISTER_STATIC_MSG("gazebo.msgs.ModelConfiguration", ModelConfiguration)
// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
