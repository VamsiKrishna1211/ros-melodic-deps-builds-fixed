// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: joint_animation.proto

#include "joint_animation.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_joint_5fanimation_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_JointAnimation_Joint_joint_5fanimation_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_time_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Time_time_2eproto;
namespace gazebo {
namespace msgs {
class JointAnimation_JointDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<JointAnimation_Joint> _instance;
} _JointAnimation_Joint_default_instance_;
class JointAnimationDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<JointAnimation> _instance;
} _JointAnimation_default_instance_;
}  // namespace msgs
}  // namespace gazebo
static void InitDefaultsscc_info_JointAnimation_joint_5fanimation_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gazebo::msgs::_JointAnimation_default_instance_;
    new (ptr) ::gazebo::msgs::JointAnimation();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gazebo::msgs::JointAnimation::InitAsDefaultInstance();
}

GZ_MSGS_VISIBLE ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_JointAnimation_joint_5fanimation_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 2, 0, InitDefaultsscc_info_JointAnimation_joint_5fanimation_2eproto}, {
      &scc_info_JointAnimation_Joint_joint_5fanimation_2eproto.base,
      &scc_info_Time_time_2eproto.base,}};

static void InitDefaultsscc_info_JointAnimation_Joint_joint_5fanimation_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gazebo::msgs::_JointAnimation_Joint_default_instance_;
    new (ptr) ::gazebo::msgs::JointAnimation_Joint();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gazebo::msgs::JointAnimation_Joint::InitAsDefaultInstance();
}

GZ_MSGS_VISIBLE ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_JointAnimation_Joint_joint_5fanimation_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_JointAnimation_Joint_joint_5fanimation_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_joint_5fanimation_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_joint_5fanimation_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_joint_5fanimation_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_joint_5fanimation_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::JointAnimation_Joint, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::JointAnimation_Joint, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::JointAnimation_Joint, name_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::JointAnimation_Joint, angle_),
  ~0u,
  ~0u,
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::JointAnimation, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::JointAnimation, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::JointAnimation, model_name_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::JointAnimation, joint_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::JointAnimation, time_),
  0,
  ~0u,
  ~0u,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::gazebo::msgs::JointAnimation_Joint)},
  { 9, 17, sizeof(::gazebo::msgs::JointAnimation)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::gazebo::msgs::_JointAnimation_Joint_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::gazebo::msgs::_JointAnimation_default_instance_),
};

const char descriptor_table_protodef_joint_5fanimation_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\025joint_animation.proto\022\013gazebo.msgs\032\nti"
  "me.proto\"\235\001\n\016JointAnimation\022\022\n\nmodel_nam"
  "e\030\001 \002(\t\0220\n\005joint\030\002 \003(\0132!.gazebo.msgs.Joi"
  "ntAnimation.Joint\022\037\n\004time\030\003 \003(\0132\021.gazebo"
  ".msgs.Time\032$\n\005Joint\022\014\n\004name\030\001 \003(\t\022\r\n\005ang"
  "le\030\002 \003(\001"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_joint_5fanimation_2eproto_deps[1] = {
  &::descriptor_table_time_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_joint_5fanimation_2eproto_sccs[2] = {
  &scc_info_JointAnimation_joint_5fanimation_2eproto.base,
  &scc_info_JointAnimation_Joint_joint_5fanimation_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_joint_5fanimation_2eproto_once;
static bool descriptor_table_joint_5fanimation_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_joint_5fanimation_2eproto = {
  &descriptor_table_joint_5fanimation_2eproto_initialized, descriptor_table_protodef_joint_5fanimation_2eproto, "joint_animation.proto", 208,
  &descriptor_table_joint_5fanimation_2eproto_once, descriptor_table_joint_5fanimation_2eproto_sccs, descriptor_table_joint_5fanimation_2eproto_deps, 2, 1,
  schemas, file_default_instances, TableStruct_joint_5fanimation_2eproto::offsets,
  file_level_metadata_joint_5fanimation_2eproto, 2, file_level_enum_descriptors_joint_5fanimation_2eproto, file_level_service_descriptors_joint_5fanimation_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_joint_5fanimation_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_joint_5fanimation_2eproto), true);
namespace gazebo {
namespace msgs {

// ===================================================================

void JointAnimation_Joint::InitAsDefaultInstance() {
}
class JointAnimation_Joint::_Internal {
 public:
  using HasBits = decltype(std::declval<JointAnimation_Joint>()._has_bits_);
};

JointAnimation_Joint::JointAnimation_Joint()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gazebo.msgs.JointAnimation.Joint)
}
JointAnimation_Joint::JointAnimation_Joint(const JointAnimation_Joint& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_),
      name_(from.name_),
      angle_(from.angle_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:gazebo.msgs.JointAnimation.Joint)
}

void JointAnimation_Joint::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_JointAnimation_Joint_joint_5fanimation_2eproto.base);
}

JointAnimation_Joint::~JointAnimation_Joint() {
  // @@protoc_insertion_point(destructor:gazebo.msgs.JointAnimation.Joint)
  SharedDtor();
}

void JointAnimation_Joint::SharedDtor() {
}

void JointAnimation_Joint::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const JointAnimation_Joint& JointAnimation_Joint::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_JointAnimation_Joint_joint_5fanimation_2eproto.base);
  return *internal_default_instance();
}


void JointAnimation_Joint::Clear() {
// @@protoc_insertion_point(message_clear_start:gazebo.msgs.JointAnimation.Joint)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  name_.Clear();
  angle_.Clear();
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* JointAnimation_Joint::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated string name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_name();
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
            #ifndef NDEBUG
            ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "gazebo.msgs.JointAnimation.Joint.name");
            #endif  // !NDEBUG
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else goto handle_unusual;
        continue;
      // repeated double angle = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 17)) {
          ptr -= 1;
          do {
            ptr += 1;
            _internal_add_angle(::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr));
            ptr += sizeof(double);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<17>(ptr));
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedDoubleParser(_internal_mutable_angle(), ptr, ctx);
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
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* JointAnimation_Joint::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:gazebo.msgs.JointAnimation.Joint)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated string name = 1;
  for (int i = 0, n = this->_internal_name_size(); i < n; i++) {
    const auto& s = this->_internal_name(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "gazebo.msgs.JointAnimation.Joint.name");
    target = stream->WriteString(1, s, target);
  }

  // repeated double angle = 2;
  for (int i = 0, n = this->_internal_angle_size(); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(2, this->_internal_angle(i), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gazebo.msgs.JointAnimation.Joint)
  return target;
}

size_t JointAnimation_Joint::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gazebo.msgs.JointAnimation.Joint)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string name = 1;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(name_.size());
  for (int i = 0, n = name_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      name_.Get(i));
  }

  // repeated double angle = 2;
  {
    unsigned int count = static_cast<unsigned int>(this->_internal_angle_size());
    size_t data_size = 8UL * count;
    total_size += 1 *
                  ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(this->_internal_angle_size());
    total_size += data_size;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void JointAnimation_Joint::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gazebo.msgs.JointAnimation.Joint)
  GOOGLE_DCHECK_NE(&from, this);
  const JointAnimation_Joint* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<JointAnimation_Joint>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gazebo.msgs.JointAnimation.Joint)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gazebo.msgs.JointAnimation.Joint)
    MergeFrom(*source);
  }
}

void JointAnimation_Joint::MergeFrom(const JointAnimation_Joint& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gazebo.msgs.JointAnimation.Joint)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  name_.MergeFrom(from.name_);
  angle_.MergeFrom(from.angle_);
}

void JointAnimation_Joint::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gazebo.msgs.JointAnimation.Joint)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void JointAnimation_Joint::CopyFrom(const JointAnimation_Joint& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gazebo.msgs.JointAnimation.Joint)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool JointAnimation_Joint::IsInitialized() const {
  return true;
}

void JointAnimation_Joint::InternalSwap(JointAnimation_Joint* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  name_.InternalSwap(&other->name_);
  angle_.InternalSwap(&other->angle_);
}

::PROTOBUF_NAMESPACE_ID::Metadata JointAnimation_Joint::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void JointAnimation::InitAsDefaultInstance() {
}
class JointAnimation::_Internal {
 public:
  using HasBits = decltype(std::declval<JointAnimation>()._has_bits_);
  static void set_has_model_name(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

void JointAnimation::clear_time() {
  time_.Clear();
}
JointAnimation::JointAnimation()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gazebo.msgs.JointAnimation)
}
JointAnimation::JointAnimation(const JointAnimation& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_),
      joint_(from.joint_),
      time_(from.time_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  model_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_model_name()) {
    model_name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.model_name_);
  }
  // @@protoc_insertion_point(copy_constructor:gazebo.msgs.JointAnimation)
}

void JointAnimation::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_JointAnimation_joint_5fanimation_2eproto.base);
  model_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

JointAnimation::~JointAnimation() {
  // @@protoc_insertion_point(destructor:gazebo.msgs.JointAnimation)
  SharedDtor();
}

void JointAnimation::SharedDtor() {
  model_name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void JointAnimation::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const JointAnimation& JointAnimation::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_JointAnimation_joint_5fanimation_2eproto.base);
  return *internal_default_instance();
}


void JointAnimation::Clear() {
// @@protoc_insertion_point(message_clear_start:gazebo.msgs.JointAnimation)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  joint_.Clear();
  time_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    model_name_.ClearNonDefaultToEmptyNoArena();
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* JointAnimation::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // required string model_name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_model_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "gazebo.msgs.JointAnimation.model_name");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .gazebo.msgs.JointAnimation.Joint joint = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_joint(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else goto handle_unusual;
        continue;
      // repeated .gazebo.msgs.Time time = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_time(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<26>(ptr));
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

::PROTOBUF_NAMESPACE_ID::uint8* JointAnimation::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:gazebo.msgs.JointAnimation)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required string model_name = 1;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_model_name().data(), static_cast<int>(this->_internal_model_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "gazebo.msgs.JointAnimation.model_name");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_model_name(), target);
  }

  // repeated .gazebo.msgs.JointAnimation.Joint joint = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_joint_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, this->_internal_joint(i), target, stream);
  }

  // repeated .gazebo.msgs.Time time = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_time_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(3, this->_internal_time(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gazebo.msgs.JointAnimation)
  return target;
}

size_t JointAnimation::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gazebo.msgs.JointAnimation)
  size_t total_size = 0;

  // required string model_name = 1;
  if (_internal_has_model_name()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_model_name());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .gazebo.msgs.JointAnimation.Joint joint = 2;
  total_size += 1UL * this->_internal_joint_size();
  for (const auto& msg : this->joint_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // repeated .gazebo.msgs.Time time = 3;
  total_size += 1UL * this->_internal_time_size();
  for (const auto& msg : this->time_) {
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

void JointAnimation::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gazebo.msgs.JointAnimation)
  GOOGLE_DCHECK_NE(&from, this);
  const JointAnimation* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<JointAnimation>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gazebo.msgs.JointAnimation)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gazebo.msgs.JointAnimation)
    MergeFrom(*source);
  }
}

void JointAnimation::MergeFrom(const JointAnimation& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gazebo.msgs.JointAnimation)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  joint_.MergeFrom(from.joint_);
  time_.MergeFrom(from.time_);
  if (from._internal_has_model_name()) {
    _has_bits_[0] |= 0x00000001u;
    model_name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.model_name_);
  }
}

void JointAnimation::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gazebo.msgs.JointAnimation)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void JointAnimation::CopyFrom(const JointAnimation& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gazebo.msgs.JointAnimation)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool JointAnimation::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  if (!::PROTOBUF_NAMESPACE_ID::internal::AllAreInitialized(time_)) return false;
  return true;
}

void JointAnimation::InternalSwap(JointAnimation* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  joint_.InternalSwap(&other->joint_);
  time_.InternalSwap(&other->time_);
  model_name_.Swap(&other->model_name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::PROTOBUF_NAMESPACE_ID::Metadata JointAnimation::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::gazebo::msgs::JointAnimation_Joint* Arena::CreateMaybeMessage< ::gazebo::msgs::JointAnimation_Joint >(Arena* arena) {
  return Arena::CreateInternal< ::gazebo::msgs::JointAnimation_Joint >(arena);
}
template<> PROTOBUF_NOINLINE ::gazebo::msgs::JointAnimation* Arena::CreateMaybeMessage< ::gazebo::msgs::JointAnimation >(Arena* arena) {
  return Arena::CreateInternal< ::gazebo::msgs::JointAnimation >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

GZ_REGISTER_STATIC_MSG("gazebo.msgs.JointAnimation", JointAnimation)
// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>