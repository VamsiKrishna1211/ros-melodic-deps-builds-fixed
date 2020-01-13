// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: collision.proto

#include "collision.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_geometry_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<9> scc_info_Geometry_geometry_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_pose_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_Pose_pose_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_surface_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Surface_surface_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_visual_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<6> scc_info_Visual_visual_2eproto;
namespace gazebo {
namespace msgs {
class CollisionDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Collision> _instance;
} _Collision_default_instance_;
}  // namespace msgs
}  // namespace gazebo
static void InitDefaultsscc_info_Collision_collision_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gazebo::msgs::_Collision_default_instance_;
    new (ptr) ::gazebo::msgs::Collision();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gazebo::msgs::Collision::InitAsDefaultInstance();
}

GZ_MSGS_VISIBLE ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<4> scc_info_Collision_collision_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 4, 0, InitDefaultsscc_info_Collision_collision_2eproto}, {
      &scc_info_Pose_pose_2eproto.base,
      &scc_info_Geometry_geometry_2eproto.base,
      &scc_info_Surface_surface_2eproto.base,
      &scc_info_Visual_visual_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_collision_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_collision_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_collision_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_collision_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Collision, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Collision, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Collision, id_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Collision, name_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Collision, laser_retro_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Collision, max_contacts_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Collision, pose_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Collision, geometry_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Collision, surface_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Collision, visual_),
  6,
  0,
  4,
  5,
  1,
  2,
  3,
  ~0u,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 13, sizeof(::gazebo::msgs::Collision)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::gazebo::msgs::_Collision_default_instance_),
};

const char descriptor_table_protodef_collision_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\017collision.proto\022\013gazebo.msgs\032\npose.pro"
  "to\032\016geometry.proto\032\rsurface.proto\032\014visua"
  "l.proto\"\346\001\n\tCollision\022\n\n\002id\030\001 \002(\r\022\014\n\004nam"
  "e\030\002 \002(\t\022\023\n\013laser_retro\030\003 \001(\001\022\024\n\014max_cont"
  "acts\030\004 \001(\001\022\037\n\004pose\030\005 \001(\0132\021.gazebo.msgs.P"
  "ose\022\'\n\010geometry\030\006 \001(\0132\025.gazebo.msgs.Geom"
  "etry\022%\n\007surface\030\007 \001(\0132\024.gazebo.msgs.Surf"
  "ace\022#\n\006visual\030\010 \003(\0132\023.gazebo.msgs.Visual"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_collision_2eproto_deps[4] = {
  &::descriptor_table_geometry_2eproto,
  &::descriptor_table_pose_2eproto,
  &::descriptor_table_surface_2eproto,
  &::descriptor_table_visual_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_collision_2eproto_sccs[1] = {
  &scc_info_Collision_collision_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_collision_2eproto_once;
static bool descriptor_table_collision_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_collision_2eproto = {
  &descriptor_table_collision_2eproto_initialized, descriptor_table_protodef_collision_2eproto, "collision.proto", 320,
  &descriptor_table_collision_2eproto_once, descriptor_table_collision_2eproto_sccs, descriptor_table_collision_2eproto_deps, 1, 4,
  schemas, file_default_instances, TableStruct_collision_2eproto::offsets,
  file_level_metadata_collision_2eproto, 1, file_level_enum_descriptors_collision_2eproto, file_level_service_descriptors_collision_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_collision_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_collision_2eproto), true);
namespace gazebo {
namespace msgs {

// ===================================================================

void Collision::InitAsDefaultInstance() {
  ::gazebo::msgs::_Collision_default_instance_._instance.get_mutable()->pose_ = const_cast< ::gazebo::msgs::Pose*>(
      ::gazebo::msgs::Pose::internal_default_instance());
  ::gazebo::msgs::_Collision_default_instance_._instance.get_mutable()->geometry_ = const_cast< ::gazebo::msgs::Geometry*>(
      ::gazebo::msgs::Geometry::internal_default_instance());
  ::gazebo::msgs::_Collision_default_instance_._instance.get_mutable()->surface_ = const_cast< ::gazebo::msgs::Surface*>(
      ::gazebo::msgs::Surface::internal_default_instance());
}
class Collision::_Internal {
 public:
  using HasBits = decltype(std::declval<Collision>()._has_bits_);
  static void set_has_id(HasBits* has_bits) {
    (*has_bits)[0] |= 64u;
  }
  static void set_has_name(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_laser_retro(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_max_contacts(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
  static const ::gazebo::msgs::Pose& pose(const Collision* msg);
  static void set_has_pose(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static const ::gazebo::msgs::Geometry& geometry(const Collision* msg);
  static void set_has_geometry(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static const ::gazebo::msgs::Surface& surface(const Collision* msg);
  static void set_has_surface(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
};

const ::gazebo::msgs::Pose&
Collision::_Internal::pose(const Collision* msg) {
  return *msg->pose_;
}
const ::gazebo::msgs::Geometry&
Collision::_Internal::geometry(const Collision* msg) {
  return *msg->geometry_;
}
const ::gazebo::msgs::Surface&
Collision::_Internal::surface(const Collision* msg) {
  return *msg->surface_;
}
void Collision::clear_pose() {
  if (pose_ != nullptr) pose_->Clear();
  _has_bits_[0] &= ~0x00000002u;
}
void Collision::clear_geometry() {
  if (geometry_ != nullptr) geometry_->Clear();
  _has_bits_[0] &= ~0x00000004u;
}
void Collision::clear_surface() {
  if (surface_ != nullptr) surface_->Clear();
  _has_bits_[0] &= ~0x00000008u;
}
void Collision::clear_visual() {
  visual_.Clear();
}
Collision::Collision()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gazebo.msgs.Collision)
}
Collision::Collision(const Collision& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_),
      visual_(from.visual_) {
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
  if (from._internal_has_geometry()) {
    geometry_ = new ::gazebo::msgs::Geometry(*from.geometry_);
  } else {
    geometry_ = nullptr;
  }
  if (from._internal_has_surface()) {
    surface_ = new ::gazebo::msgs::Surface(*from.surface_);
  } else {
    surface_ = nullptr;
  }
  ::memcpy(&laser_retro_, &from.laser_retro_,
    static_cast<size_t>(reinterpret_cast<char*>(&id_) -
    reinterpret_cast<char*>(&laser_retro_)) + sizeof(id_));
  // @@protoc_insertion_point(copy_constructor:gazebo.msgs.Collision)
}

void Collision::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Collision_collision_2eproto.base);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&pose_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&id_) -
      reinterpret_cast<char*>(&pose_)) + sizeof(id_));
}

Collision::~Collision() {
  // @@protoc_insertion_point(destructor:gazebo.msgs.Collision)
  SharedDtor();
}

void Collision::SharedDtor() {
  name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete pose_;
  if (this != internal_default_instance()) delete geometry_;
  if (this != internal_default_instance()) delete surface_;
}

void Collision::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Collision& Collision::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Collision_collision_2eproto.base);
  return *internal_default_instance();
}


void Collision::Clear() {
// @@protoc_insertion_point(message_clear_start:gazebo.msgs.Collision)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  visual_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      name_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(pose_ != nullptr);
      pose_->Clear();
    }
    if (cached_has_bits & 0x00000004u) {
      GOOGLE_DCHECK(geometry_ != nullptr);
      geometry_->Clear();
    }
    if (cached_has_bits & 0x00000008u) {
      GOOGLE_DCHECK(surface_ != nullptr);
      surface_->Clear();
    }
  }
  if (cached_has_bits & 0x00000070u) {
    ::memset(&laser_retro_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&id_) -
        reinterpret_cast<char*>(&laser_retro_)) + sizeof(id_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* Collision::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // required uint32 id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          _Internal::set_has_id(&has_bits);
          id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required string name = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "gazebo.msgs.Collision.name");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional double laser_retro = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 25)) {
          _Internal::set_has_laser_retro(&has_bits);
          laser_retro_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // optional double max_contacts = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 33)) {
          _Internal::set_has_max_contacts(&has_bits);
          max_contacts_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // optional .gazebo.msgs.Pose pose = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          ptr = ctx->ParseMessage(_internal_mutable_pose(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .gazebo.msgs.Geometry geometry = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 50)) {
          ptr = ctx->ParseMessage(_internal_mutable_geometry(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .gazebo.msgs.Surface surface = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 58)) {
          ptr = ctx->ParseMessage(_internal_mutable_surface(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .gazebo.msgs.Visual visual = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 66)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_visual(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<66>(ptr));
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

::PROTOBUF_NAMESPACE_ID::uint8* Collision::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:gazebo.msgs.Collision)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required uint32 id = 1;
  if (cached_has_bits & 0x00000040u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(1, this->_internal_id(), target);
  }

  // required string name = 2;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "gazebo.msgs.Collision.name");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_name(), target);
  }

  // optional double laser_retro = 3;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(3, this->_internal_laser_retro(), target);
  }

  // optional double max_contacts = 4;
  if (cached_has_bits & 0x00000020u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(4, this->_internal_max_contacts(), target);
  }

  // optional .gazebo.msgs.Pose pose = 5;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        5, _Internal::pose(this), target, stream);
  }

  // optional .gazebo.msgs.Geometry geometry = 6;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        6, _Internal::geometry(this), target, stream);
  }

  // optional .gazebo.msgs.Surface surface = 7;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        7, _Internal::surface(this), target, stream);
  }

  // repeated .gazebo.msgs.Visual visual = 8;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_visual_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(8, this->_internal_visual(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gazebo.msgs.Collision)
  return target;
}

size_t Collision::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:gazebo.msgs.Collision)
  size_t total_size = 0;

  if (_internal_has_name()) {
    // required string name = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());
  }

  if (_internal_has_id()) {
    // required uint32 id = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_id());
  }

  return total_size;
}
size_t Collision::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gazebo.msgs.Collision)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x00000041) ^ 0x00000041) == 0) {  // All required fields are present.
    // required string name = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());

    // required uint32 id = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_id());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .gazebo.msgs.Visual visual = 8;
  total_size += 1UL * this->_internal_visual_size();
  for (const auto& msg : this->visual_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000003eu) {
    // optional .gazebo.msgs.Pose pose = 5;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *pose_);
    }

    // optional .gazebo.msgs.Geometry geometry = 6;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *geometry_);
    }

    // optional .gazebo.msgs.Surface surface = 7;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *surface_);
    }

    // optional double laser_retro = 3;
    if (cached_has_bits & 0x00000010u) {
      total_size += 1 + 8;
    }

    // optional double max_contacts = 4;
    if (cached_has_bits & 0x00000020u) {
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

void Collision::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gazebo.msgs.Collision)
  GOOGLE_DCHECK_NE(&from, this);
  const Collision* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Collision>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gazebo.msgs.Collision)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gazebo.msgs.Collision)
    MergeFrom(*source);
  }
}

void Collision::MergeFrom(const Collision& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gazebo.msgs.Collision)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  visual_.MergeFrom(from.visual_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000007fu) {
    if (cached_has_bits & 0x00000001u) {
      _has_bits_[0] |= 0x00000001u;
      name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.name_);
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_mutable_pose()->::gazebo::msgs::Pose::MergeFrom(from._internal_pose());
    }
    if (cached_has_bits & 0x00000004u) {
      _internal_mutable_geometry()->::gazebo::msgs::Geometry::MergeFrom(from._internal_geometry());
    }
    if (cached_has_bits & 0x00000008u) {
      _internal_mutable_surface()->::gazebo::msgs::Surface::MergeFrom(from._internal_surface());
    }
    if (cached_has_bits & 0x00000010u) {
      laser_retro_ = from.laser_retro_;
    }
    if (cached_has_bits & 0x00000020u) {
      max_contacts_ = from.max_contacts_;
    }
    if (cached_has_bits & 0x00000040u) {
      id_ = from.id_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void Collision::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gazebo.msgs.Collision)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Collision::CopyFrom(const Collision& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gazebo.msgs.Collision)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Collision::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000041) != 0x00000041) return false;
  if (!::PROTOBUF_NAMESPACE_ID::internal::AllAreInitialized(visual_)) return false;
  if (_internal_has_pose()) {
    if (!pose_->IsInitialized()) return false;
  }
  if (_internal_has_geometry()) {
    if (!geometry_->IsInitialized()) return false;
  }
  if (_internal_has_surface()) {
    if (!surface_->IsInitialized()) return false;
  }
  return true;
}

void Collision::InternalSwap(Collision* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  visual_.InternalSwap(&other->visual_);
  name_.Swap(&other->name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(pose_, other->pose_);
  swap(geometry_, other->geometry_);
  swap(surface_, other->surface_);
  swap(laser_retro_, other->laser_retro_);
  swap(max_contacts_, other->max_contacts_);
  swap(id_, other->id_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Collision::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::gazebo::msgs::Collision* Arena::CreateMaybeMessage< ::gazebo::msgs::Collision >(Arena* arena) {
  return Arena::CreateInternal< ::gazebo::msgs::Collision >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

GZ_REGISTER_STATIC_MSG("gazebo.msgs.Collision", Collision)
// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>