// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: projector.proto

#include "projector.pb.h"

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
namespace gazebo {
namespace msgs {
class ProjectorDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Projector> _instance;
} _Projector_default_instance_;
}  // namespace msgs
}  // namespace gazebo
static void InitDefaultsscc_info_Projector_projector_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gazebo::msgs::_Projector_default_instance_;
    new (ptr) ::gazebo::msgs::Projector();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gazebo::msgs::Projector::InitAsDefaultInstance();
}

GZ_MSGS_VISIBLE ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Projector_projector_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_Projector_projector_2eproto}, {
      &scc_info_Pose_pose_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_projector_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_projector_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_projector_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_projector_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Projector, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Projector, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Projector, name_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Projector, texture_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Projector, pose_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Projector, fov_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Projector, near_clip_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Projector, far_clip_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Projector, enabled_),
  0,
  1,
  2,
  4,
  5,
  6,
  3,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 12, sizeof(::gazebo::msgs::Projector)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::gazebo::msgs::_Projector_default_instance_),
};

const char descriptor_table_protodef_projector_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\017projector.proto\022\013gazebo.msgs\032\npose.pro"
  "to\"\244\001\n\tProjector\022\014\n\004name\030\001 \002(\t\022\017\n\007textur"
  "e\030\002 \001(\t\022\037\n\004pose\030\003 \001(\0132\021.gazebo.msgs.Pose"
  "\022\022\n\003fov\030\004 \001(\001:\0050.785\022\026\n\tnear_clip\030\005 \001(\001:"
  "\0030.1\022\024\n\010far_clip\030\006 \001(\001:\00210\022\025\n\007enabled\030\007 "
  "\001(\010:\004true"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_projector_2eproto_deps[1] = {
  &::descriptor_table_pose_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_projector_2eproto_sccs[1] = {
  &scc_info_Projector_projector_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_projector_2eproto_once;
static bool descriptor_table_projector_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_projector_2eproto = {
  &descriptor_table_projector_2eproto_initialized, descriptor_table_protodef_projector_2eproto, "projector.proto", 209,
  &descriptor_table_projector_2eproto_once, descriptor_table_projector_2eproto_sccs, descriptor_table_projector_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_projector_2eproto::offsets,
  file_level_metadata_projector_2eproto, 1, file_level_enum_descriptors_projector_2eproto, file_level_service_descriptors_projector_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_projector_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_projector_2eproto), true);
namespace gazebo {
namespace msgs {

// ===================================================================

void Projector::InitAsDefaultInstance() {
  ::gazebo::msgs::_Projector_default_instance_._instance.get_mutable()->pose_ = const_cast< ::gazebo::msgs::Pose*>(
      ::gazebo::msgs::Pose::internal_default_instance());
}
class Projector::_Internal {
 public:
  using HasBits = decltype(std::declval<Projector>()._has_bits_);
  static void set_has_name(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_texture(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static const ::gazebo::msgs::Pose& pose(const Projector* msg);
  static void set_has_pose(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_fov(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_near_clip(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
  static void set_has_far_clip(HasBits* has_bits) {
    (*has_bits)[0] |= 64u;
  }
  static void set_has_enabled(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
};

const ::gazebo::msgs::Pose&
Projector::_Internal::pose(const Projector* msg) {
  return *msg->pose_;
}
void Projector::clear_pose() {
  if (pose_ != nullptr) pose_->Clear();
  _has_bits_[0] &= ~0x00000004u;
}
Projector::Projector()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gazebo.msgs.Projector)
}
Projector::Projector(const Projector& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_name()) {
    name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  texture_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_texture()) {
    texture_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.texture_);
  }
  if (from._internal_has_pose()) {
    pose_ = new ::gazebo::msgs::Pose(*from.pose_);
  } else {
    pose_ = nullptr;
  }
  ::memcpy(&enabled_, &from.enabled_,
    static_cast<size_t>(reinterpret_cast<char*>(&far_clip_) -
    reinterpret_cast<char*>(&enabled_)) + sizeof(far_clip_));
  // @@protoc_insertion_point(copy_constructor:gazebo.msgs.Projector)
}

void Projector::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Projector_projector_2eproto.base);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  texture_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  pose_ = nullptr;
  enabled_ = true;
  fov_ = 0.785;
  near_clip_ = 0.1;
  far_clip_ = 10;
}

Projector::~Projector() {
  // @@protoc_insertion_point(destructor:gazebo.msgs.Projector)
  SharedDtor();
}

void Projector::SharedDtor() {
  name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  texture_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete pose_;
}

void Projector::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Projector& Projector::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Projector_projector_2eproto.base);
  return *internal_default_instance();
}


void Projector::Clear() {
// @@protoc_insertion_point(message_clear_start:gazebo.msgs.Projector)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000007fu) {
    if (cached_has_bits & 0x00000001u) {
      name_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000002u) {
      texture_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000004u) {
      GOOGLE_DCHECK(pose_ != nullptr);
      pose_->Clear();
    }
    enabled_ = true;
    fov_ = 0.785;
    near_clip_ = 0.1;
    far_clip_ = 10;
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* Projector::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
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
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "gazebo.msgs.Projector.name");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional string texture = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_texture();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "gazebo.msgs.Projector.texture");
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
      // optional double fov = 4 [default = 0.785];
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 33)) {
          _Internal::set_has_fov(&has_bits);
          fov_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // optional double near_clip = 5 [default = 0.1];
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 41)) {
          _Internal::set_has_near_clip(&has_bits);
          near_clip_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // optional double far_clip = 6 [default = 10];
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 49)) {
          _Internal::set_has_far_clip(&has_bits);
          far_clip_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // optional bool enabled = 7 [default = true];
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 56)) {
          _Internal::set_has_enabled(&has_bits);
          enabled_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* Projector::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:gazebo.msgs.Projector)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required string name = 1;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "gazebo.msgs.Projector.name");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_name(), target);
  }

  // optional string texture = 2;
  if (cached_has_bits & 0x00000002u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_texture().data(), static_cast<int>(this->_internal_texture().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "gazebo.msgs.Projector.texture");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_texture(), target);
  }

  // optional .gazebo.msgs.Pose pose = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        3, _Internal::pose(this), target, stream);
  }

  // optional double fov = 4 [default = 0.785];
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(4, this->_internal_fov(), target);
  }

  // optional double near_clip = 5 [default = 0.1];
  if (cached_has_bits & 0x00000020u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(5, this->_internal_near_clip(), target);
  }

  // optional double far_clip = 6 [default = 10];
  if (cached_has_bits & 0x00000040u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(6, this->_internal_far_clip(), target);
  }

  // optional bool enabled = 7 [default = true];
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(7, this->_internal_enabled(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gazebo.msgs.Projector)
  return target;
}

size_t Projector::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gazebo.msgs.Projector)
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
  if (cached_has_bits & 0x0000007eu) {
    // optional string texture = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_texture());
    }

    // optional .gazebo.msgs.Pose pose = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *pose_);
    }

    // optional bool enabled = 7 [default = true];
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 + 1;
    }

    // optional double fov = 4 [default = 0.785];
    if (cached_has_bits & 0x00000010u) {
      total_size += 1 + 8;
    }

    // optional double near_clip = 5 [default = 0.1];
    if (cached_has_bits & 0x00000020u) {
      total_size += 1 + 8;
    }

    // optional double far_clip = 6 [default = 10];
    if (cached_has_bits & 0x00000040u) {
      total_size += 1 + 8;
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

void Projector::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gazebo.msgs.Projector)
  GOOGLE_DCHECK_NE(&from, this);
  const Projector* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Projector>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gazebo.msgs.Projector)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gazebo.msgs.Projector)
    MergeFrom(*source);
  }
}

void Projector::MergeFrom(const Projector& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gazebo.msgs.Projector)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000007fu) {
    if (cached_has_bits & 0x00000001u) {
      _has_bits_[0] |= 0x00000001u;
      name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.name_);
    }
    if (cached_has_bits & 0x00000002u) {
      _has_bits_[0] |= 0x00000002u;
      texture_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.texture_);
    }
    if (cached_has_bits & 0x00000004u) {
      _internal_mutable_pose()->::gazebo::msgs::Pose::MergeFrom(from._internal_pose());
    }
    if (cached_has_bits & 0x00000008u) {
      enabled_ = from.enabled_;
    }
    if (cached_has_bits & 0x00000010u) {
      fov_ = from.fov_;
    }
    if (cached_has_bits & 0x00000020u) {
      near_clip_ = from.near_clip_;
    }
    if (cached_has_bits & 0x00000040u) {
      far_clip_ = from.far_clip_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void Projector::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gazebo.msgs.Projector)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Projector::CopyFrom(const Projector& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gazebo.msgs.Projector)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Projector::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  if (_internal_has_pose()) {
    if (!pose_->IsInitialized()) return false;
  }
  return true;
}

void Projector::InternalSwap(Projector* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  name_.Swap(&other->name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  texture_.Swap(&other->texture_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(pose_, other->pose_);
  swap(enabled_, other->enabled_);
  swap(fov_, other->fov_);
  swap(near_clip_, other->near_clip_);
  swap(far_clip_, other->far_clip_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Projector::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::gazebo::msgs::Projector* Arena::CreateMaybeMessage< ::gazebo::msgs::Projector >(Arena* arena) {
  return Arena::CreateInternal< ::gazebo::msgs::Projector >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

GZ_REGISTER_STATIC_MSG("gazebo.msgs.Projector", Projector)
// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
