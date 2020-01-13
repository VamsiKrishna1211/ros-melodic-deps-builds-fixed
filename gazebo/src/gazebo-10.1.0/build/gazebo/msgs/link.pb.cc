// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: link.proto

#include "link.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_battery_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Battery_battery_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_collision_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<4> scc_info_Collision_collision_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_density_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Density_density_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_inertial_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Inertial_inertial_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_light_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<3> scc_info_Light_light_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_pose_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_Pose_pose_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_projector_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Projector_projector_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_sensor_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<7> scc_info_Sensor_sensor_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_vector3d_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Vector3d_vector3d_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_visual_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<6> scc_info_Visual_visual_2eproto;
namespace gazebo {
namespace msgs {
class LinkDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Link> _instance;
} _Link_default_instance_;
}  // namespace msgs
}  // namespace gazebo
static void InitDefaultsscc_info_Link_link_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gazebo::msgs::_Link_default_instance_;
    new (ptr) ::gazebo::msgs::Link();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gazebo::msgs::Link::InitAsDefaultInstance();
}

GZ_MSGS_VISIBLE ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<10> scc_info_Link_link_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 10, 0, InitDefaultsscc_info_Link_link_2eproto}, {
      &scc_info_Density_density_2eproto.base,
      &scc_info_Inertial_inertial_2eproto.base,
      &scc_info_Pose_pose_2eproto.base,
      &scc_info_Visual_visual_2eproto.base,
      &scc_info_Collision_collision_2eproto.base,
      &scc_info_Sensor_sensor_2eproto.base,
      &scc_info_Projector_projector_2eproto.base,
      &scc_info_Battery_battery_2eproto.base,
      &scc_info_Vector3d_vector3d_2eproto.base,
      &scc_info_Light_light_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_link_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_link_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_link_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_link_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Link, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Link, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Link, id_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Link, name_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Link, self_collide_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Link, gravity_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Link, kinematic_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Link, enabled_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Link, density_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Link, inertial_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Link, pose_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Link, visual_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Link, collision_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Link, sensor_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Link, projector_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Link, canonical_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Link, battery_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Link, enable_wind_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Link, wind_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Link, light_),
  5,
  0,
  6,
  7,
  8,
  9,
  1,
  2,
  3,
  ~0u,
  ~0u,
  ~0u,
  ~0u,
  10,
  ~0u,
  11,
  4,
  ~0u,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 23, sizeof(::gazebo::msgs::Link)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::gazebo::msgs::_Link_default_instance_),
};

const char descriptor_table_protodef_link_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\nlink.proto\022\013gazebo.msgs\032\016inertial.prot"
  "o\032\017collision.proto\032\013light.proto\032\014visual."
  "proto\032\014sensor.proto\032\017projector.proto\032\npo"
  "se.proto\032\rbattery.proto\032\rdensity.proto\032\016"
  "vector3d.proto\"\223\004\n\004Link\022\n\n\002id\030\001 \001(\r\022\014\n\004n"
  "ame\030\002 \002(\t\022\024\n\014self_collide\030\003 \001(\010\022\017\n\007gravi"
  "ty\030\004 \001(\010\022\021\n\tkinematic\030\005 \001(\010\022\017\n\007enabled\030\006"
  " \001(\010\022%\n\007density\030\007 \001(\0132\024.gazebo.msgs.Dens"
  "ity\022\'\n\010inertial\030\010 \001(\0132\025.gazebo.msgs.Iner"
  "tial\022\037\n\004pose\030\t \001(\0132\021.gazebo.msgs.Pose\022#\n"
  "\006visual\030\n \003(\0132\023.gazebo.msgs.Visual\022)\n\tco"
  "llision\030\013 \003(\0132\026.gazebo.msgs.Collision\022#\n"
  "\006sensor\030\014 \003(\0132\023.gazebo.msgs.Sensor\022)\n\tpr"
  "ojector\030\r \003(\0132\026.gazebo.msgs.Projector\022\021\n"
  "\tcanonical\030\016 \001(\010\022%\n\007battery\030\017 \003(\0132\024.gaze"
  "bo.msgs.Battery\022\023\n\013enable_wind\030\020 \001(\010\022#\n\004"
  "wind\030\021 \001(\0132\025.gazebo.msgs.Vector3d\022!\n\005lig"
  "ht\030\022 \003(\0132\022.gazebo.msgs.Light"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_link_2eproto_deps[10] = {
  &::descriptor_table_battery_2eproto,
  &::descriptor_table_collision_2eproto,
  &::descriptor_table_density_2eproto,
  &::descriptor_table_inertial_2eproto,
  &::descriptor_table_light_2eproto,
  &::descriptor_table_pose_2eproto,
  &::descriptor_table_projector_2eproto,
  &::descriptor_table_sensor_2eproto,
  &::descriptor_table_vector3d_2eproto,
  &::descriptor_table_visual_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_link_2eproto_sccs[1] = {
  &scc_info_Link_link_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_link_2eproto_once;
static bool descriptor_table_link_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_link_2eproto = {
  &descriptor_table_link_2eproto_initialized, descriptor_table_protodef_link_2eproto, "link.proto", 708,
  &descriptor_table_link_2eproto_once, descriptor_table_link_2eproto_sccs, descriptor_table_link_2eproto_deps, 1, 10,
  schemas, file_default_instances, TableStruct_link_2eproto::offsets,
  file_level_metadata_link_2eproto, 1, file_level_enum_descriptors_link_2eproto, file_level_service_descriptors_link_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_link_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_link_2eproto), true);
namespace gazebo {
namespace msgs {

// ===================================================================

void Link::InitAsDefaultInstance() {
  ::gazebo::msgs::_Link_default_instance_._instance.get_mutable()->density_ = const_cast< ::gazebo::msgs::Density*>(
      ::gazebo::msgs::Density::internal_default_instance());
  ::gazebo::msgs::_Link_default_instance_._instance.get_mutable()->inertial_ = const_cast< ::gazebo::msgs::Inertial*>(
      ::gazebo::msgs::Inertial::internal_default_instance());
  ::gazebo::msgs::_Link_default_instance_._instance.get_mutable()->pose_ = const_cast< ::gazebo::msgs::Pose*>(
      ::gazebo::msgs::Pose::internal_default_instance());
  ::gazebo::msgs::_Link_default_instance_._instance.get_mutable()->wind_ = const_cast< ::gazebo::msgs::Vector3d*>(
      ::gazebo::msgs::Vector3d::internal_default_instance());
}
class Link::_Internal {
 public:
  using HasBits = decltype(std::declval<Link>()._has_bits_);
  static void set_has_id(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
  static void set_has_name(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_self_collide(HasBits* has_bits) {
    (*has_bits)[0] |= 64u;
  }
  static void set_has_gravity(HasBits* has_bits) {
    (*has_bits)[0] |= 128u;
  }
  static void set_has_kinematic(HasBits* has_bits) {
    (*has_bits)[0] |= 256u;
  }
  static void set_has_enabled(HasBits* has_bits) {
    (*has_bits)[0] |= 512u;
  }
  static const ::gazebo::msgs::Density& density(const Link* msg);
  static void set_has_density(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static const ::gazebo::msgs::Inertial& inertial(const Link* msg);
  static void set_has_inertial(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static const ::gazebo::msgs::Pose& pose(const Link* msg);
  static void set_has_pose(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_canonical(HasBits* has_bits) {
    (*has_bits)[0] |= 1024u;
  }
  static void set_has_enable_wind(HasBits* has_bits) {
    (*has_bits)[0] |= 2048u;
  }
  static const ::gazebo::msgs::Vector3d& wind(const Link* msg);
  static void set_has_wind(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
};

const ::gazebo::msgs::Density&
Link::_Internal::density(const Link* msg) {
  return *msg->density_;
}
const ::gazebo::msgs::Inertial&
Link::_Internal::inertial(const Link* msg) {
  return *msg->inertial_;
}
const ::gazebo::msgs::Pose&
Link::_Internal::pose(const Link* msg) {
  return *msg->pose_;
}
const ::gazebo::msgs::Vector3d&
Link::_Internal::wind(const Link* msg) {
  return *msg->wind_;
}
void Link::clear_density() {
  if (density_ != nullptr) density_->Clear();
  _has_bits_[0] &= ~0x00000002u;
}
void Link::clear_inertial() {
  if (inertial_ != nullptr) inertial_->Clear();
  _has_bits_[0] &= ~0x00000004u;
}
void Link::clear_pose() {
  if (pose_ != nullptr) pose_->Clear();
  _has_bits_[0] &= ~0x00000008u;
}
void Link::clear_visual() {
  visual_.Clear();
}
void Link::clear_collision() {
  collision_.Clear();
}
void Link::clear_sensor() {
  sensor_.Clear();
}
void Link::clear_projector() {
  projector_.Clear();
}
void Link::clear_battery() {
  battery_.Clear();
}
void Link::clear_wind() {
  if (wind_ != nullptr) wind_->Clear();
  _has_bits_[0] &= ~0x00000010u;
}
void Link::clear_light() {
  light_.Clear();
}
Link::Link()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gazebo.msgs.Link)
}
Link::Link(const Link& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_),
      visual_(from.visual_),
      collision_(from.collision_),
      sensor_(from.sensor_),
      projector_(from.projector_),
      battery_(from.battery_),
      light_(from.light_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_name()) {
    name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from._internal_has_density()) {
    density_ = new ::gazebo::msgs::Density(*from.density_);
  } else {
    density_ = nullptr;
  }
  if (from._internal_has_inertial()) {
    inertial_ = new ::gazebo::msgs::Inertial(*from.inertial_);
  } else {
    inertial_ = nullptr;
  }
  if (from._internal_has_pose()) {
    pose_ = new ::gazebo::msgs::Pose(*from.pose_);
  } else {
    pose_ = nullptr;
  }
  if (from._internal_has_wind()) {
    wind_ = new ::gazebo::msgs::Vector3d(*from.wind_);
  } else {
    wind_ = nullptr;
  }
  ::memcpy(&id_, &from.id_,
    static_cast<size_t>(reinterpret_cast<char*>(&enable_wind_) -
    reinterpret_cast<char*>(&id_)) + sizeof(enable_wind_));
  // @@protoc_insertion_point(copy_constructor:gazebo.msgs.Link)
}

void Link::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Link_link_2eproto.base);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&density_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&enable_wind_) -
      reinterpret_cast<char*>(&density_)) + sizeof(enable_wind_));
}

Link::~Link() {
  // @@protoc_insertion_point(destructor:gazebo.msgs.Link)
  SharedDtor();
}

void Link::SharedDtor() {
  name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete density_;
  if (this != internal_default_instance()) delete inertial_;
  if (this != internal_default_instance()) delete pose_;
  if (this != internal_default_instance()) delete wind_;
}

void Link::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Link& Link::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Link_link_2eproto.base);
  return *internal_default_instance();
}


void Link::Clear() {
// @@protoc_insertion_point(message_clear_start:gazebo.msgs.Link)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  visual_.Clear();
  collision_.Clear();
  sensor_.Clear();
  projector_.Clear();
  battery_.Clear();
  light_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    if (cached_has_bits & 0x00000001u) {
      name_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(density_ != nullptr);
      density_->Clear();
    }
    if (cached_has_bits & 0x00000004u) {
      GOOGLE_DCHECK(inertial_ != nullptr);
      inertial_->Clear();
    }
    if (cached_has_bits & 0x00000008u) {
      GOOGLE_DCHECK(pose_ != nullptr);
      pose_->Clear();
    }
    if (cached_has_bits & 0x00000010u) {
      GOOGLE_DCHECK(wind_ != nullptr);
      wind_->Clear();
    }
  }
  if (cached_has_bits & 0x000000e0u) {
    ::memset(&id_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&gravity_) -
        reinterpret_cast<char*>(&id_)) + sizeof(gravity_));
  }
  if (cached_has_bits & 0x00000f00u) {
    ::memset(&kinematic_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&enable_wind_) -
        reinterpret_cast<char*>(&kinematic_)) + sizeof(enable_wind_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* Link::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional uint32 id = 1;
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
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "gazebo.msgs.Link.name");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional bool self_collide = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          _Internal::set_has_self_collide(&has_bits);
          self_collide_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional bool gravity = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          _Internal::set_has_gravity(&has_bits);
          gravity_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional bool kinematic = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 40)) {
          _Internal::set_has_kinematic(&has_bits);
          kinematic_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional bool enabled = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 48)) {
          _Internal::set_has_enabled(&has_bits);
          enabled_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .gazebo.msgs.Density density = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 58)) {
          ptr = ctx->ParseMessage(_internal_mutable_density(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .gazebo.msgs.Inertial inertial = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 66)) {
          ptr = ctx->ParseMessage(_internal_mutable_inertial(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .gazebo.msgs.Pose pose = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 74)) {
          ptr = ctx->ParseMessage(_internal_mutable_pose(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .gazebo.msgs.Visual visual = 10;
      case 10:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 82)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_visual(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<82>(ptr));
        } else goto handle_unusual;
        continue;
      // repeated .gazebo.msgs.Collision collision = 11;
      case 11:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 90)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_collision(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<90>(ptr));
        } else goto handle_unusual;
        continue;
      // repeated .gazebo.msgs.Sensor sensor = 12;
      case 12:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 98)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_sensor(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<98>(ptr));
        } else goto handle_unusual;
        continue;
      // repeated .gazebo.msgs.Projector projector = 13;
      case 13:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 106)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_projector(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<106>(ptr));
        } else goto handle_unusual;
        continue;
      // optional bool canonical = 14;
      case 14:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 112)) {
          _Internal::set_has_canonical(&has_bits);
          canonical_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .gazebo.msgs.Battery battery = 15;
      case 15:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 122)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_battery(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<122>(ptr));
        } else goto handle_unusual;
        continue;
      // optional bool enable_wind = 16;
      case 16:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 128)) {
          _Internal::set_has_enable_wind(&has_bits);
          enable_wind_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .gazebo.msgs.Vector3d wind = 17;
      case 17:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 138)) {
          ptr = ctx->ParseMessage(_internal_mutable_wind(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .gazebo.msgs.Light light = 18;
      case 18:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 146)) {
          ptr -= 2;
          do {
            ptr += 2;
            ptr = ctx->ParseMessage(_internal_add_light(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<146>(ptr));
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

::PROTOBUF_NAMESPACE_ID::uint8* Link::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:gazebo.msgs.Link)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint32 id = 1;
  if (cached_has_bits & 0x00000020u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(1, this->_internal_id(), target);
  }

  // required string name = 2;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "gazebo.msgs.Link.name");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_name(), target);
  }

  // optional bool self_collide = 3;
  if (cached_has_bits & 0x00000040u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(3, this->_internal_self_collide(), target);
  }

  // optional bool gravity = 4;
  if (cached_has_bits & 0x00000080u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(4, this->_internal_gravity(), target);
  }

  // optional bool kinematic = 5;
  if (cached_has_bits & 0x00000100u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(5, this->_internal_kinematic(), target);
  }

  // optional bool enabled = 6;
  if (cached_has_bits & 0x00000200u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(6, this->_internal_enabled(), target);
  }

  // optional .gazebo.msgs.Density density = 7;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        7, _Internal::density(this), target, stream);
  }

  // optional .gazebo.msgs.Inertial inertial = 8;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        8, _Internal::inertial(this), target, stream);
  }

  // optional .gazebo.msgs.Pose pose = 9;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        9, _Internal::pose(this), target, stream);
  }

  // repeated .gazebo.msgs.Visual visual = 10;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_visual_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(10, this->_internal_visual(i), target, stream);
  }

  // repeated .gazebo.msgs.Collision collision = 11;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_collision_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(11, this->_internal_collision(i), target, stream);
  }

  // repeated .gazebo.msgs.Sensor sensor = 12;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_sensor_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(12, this->_internal_sensor(i), target, stream);
  }

  // repeated .gazebo.msgs.Projector projector = 13;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_projector_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(13, this->_internal_projector(i), target, stream);
  }

  // optional bool canonical = 14;
  if (cached_has_bits & 0x00000400u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(14, this->_internal_canonical(), target);
  }

  // repeated .gazebo.msgs.Battery battery = 15;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_battery_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(15, this->_internal_battery(i), target, stream);
  }

  // optional bool enable_wind = 16;
  if (cached_has_bits & 0x00000800u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(16, this->_internal_enable_wind(), target);
  }

  // optional .gazebo.msgs.Vector3d wind = 17;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        17, _Internal::wind(this), target, stream);
  }

  // repeated .gazebo.msgs.Light light = 18;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_light_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(18, this->_internal_light(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gazebo.msgs.Link)
  return target;
}

size_t Link::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gazebo.msgs.Link)
  size_t total_size = 0;

  // required string name = 2;
  if (_internal_has_name()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .gazebo.msgs.Visual visual = 10;
  total_size += 1UL * this->_internal_visual_size();
  for (const auto& msg : this->visual_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // repeated .gazebo.msgs.Collision collision = 11;
  total_size += 1UL * this->_internal_collision_size();
  for (const auto& msg : this->collision_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // repeated .gazebo.msgs.Sensor sensor = 12;
  total_size += 1UL * this->_internal_sensor_size();
  for (const auto& msg : this->sensor_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // repeated .gazebo.msgs.Projector projector = 13;
  total_size += 1UL * this->_internal_projector_size();
  for (const auto& msg : this->projector_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // repeated .gazebo.msgs.Battery battery = 15;
  total_size += 1UL * this->_internal_battery_size();
  for (const auto& msg : this->battery_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // repeated .gazebo.msgs.Light light = 18;
  total_size += 2UL * this->_internal_light_size();
  for (const auto& msg : this->light_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x000000feu) {
    // optional .gazebo.msgs.Density density = 7;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *density_);
    }

    // optional .gazebo.msgs.Inertial inertial = 8;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *inertial_);
    }

    // optional .gazebo.msgs.Pose pose = 9;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *pose_);
    }

    // optional .gazebo.msgs.Vector3d wind = 17;
    if (cached_has_bits & 0x00000010u) {
      total_size += 2 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *wind_);
    }

    // optional uint32 id = 1;
    if (cached_has_bits & 0x00000020u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
          this->_internal_id());
    }

    // optional bool self_collide = 3;
    if (cached_has_bits & 0x00000040u) {
      total_size += 1 + 1;
    }

    // optional bool gravity = 4;
    if (cached_has_bits & 0x00000080u) {
      total_size += 1 + 1;
    }

  }
  if (cached_has_bits & 0x00000f00u) {
    // optional bool kinematic = 5;
    if (cached_has_bits & 0x00000100u) {
      total_size += 1 + 1;
    }

    // optional bool enabled = 6;
    if (cached_has_bits & 0x00000200u) {
      total_size += 1 + 1;
    }

    // optional bool canonical = 14;
    if (cached_has_bits & 0x00000400u) {
      total_size += 1 + 1;
    }

    // optional bool enable_wind = 16;
    if (cached_has_bits & 0x00000800u) {
      total_size += 2 + 1;
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

void Link::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gazebo.msgs.Link)
  GOOGLE_DCHECK_NE(&from, this);
  const Link* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Link>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gazebo.msgs.Link)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gazebo.msgs.Link)
    MergeFrom(*source);
  }
}

void Link::MergeFrom(const Link& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gazebo.msgs.Link)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  visual_.MergeFrom(from.visual_);
  collision_.MergeFrom(from.collision_);
  sensor_.MergeFrom(from.sensor_);
  projector_.MergeFrom(from.projector_);
  battery_.MergeFrom(from.battery_);
  light_.MergeFrom(from.light_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    if (cached_has_bits & 0x00000001u) {
      _has_bits_[0] |= 0x00000001u;
      name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.name_);
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_mutable_density()->::gazebo::msgs::Density::MergeFrom(from._internal_density());
    }
    if (cached_has_bits & 0x00000004u) {
      _internal_mutable_inertial()->::gazebo::msgs::Inertial::MergeFrom(from._internal_inertial());
    }
    if (cached_has_bits & 0x00000008u) {
      _internal_mutable_pose()->::gazebo::msgs::Pose::MergeFrom(from._internal_pose());
    }
    if (cached_has_bits & 0x00000010u) {
      _internal_mutable_wind()->::gazebo::msgs::Vector3d::MergeFrom(from._internal_wind());
    }
    if (cached_has_bits & 0x00000020u) {
      id_ = from.id_;
    }
    if (cached_has_bits & 0x00000040u) {
      self_collide_ = from.self_collide_;
    }
    if (cached_has_bits & 0x00000080u) {
      gravity_ = from.gravity_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  if (cached_has_bits & 0x00000f00u) {
    if (cached_has_bits & 0x00000100u) {
      kinematic_ = from.kinematic_;
    }
    if (cached_has_bits & 0x00000200u) {
      enabled_ = from.enabled_;
    }
    if (cached_has_bits & 0x00000400u) {
      canonical_ = from.canonical_;
    }
    if (cached_has_bits & 0x00000800u) {
      enable_wind_ = from.enable_wind_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void Link::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gazebo.msgs.Link)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Link::CopyFrom(const Link& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gazebo.msgs.Link)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Link::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  if (!::PROTOBUF_NAMESPACE_ID::internal::AllAreInitialized(visual_)) return false;
  if (!::PROTOBUF_NAMESPACE_ID::internal::AllAreInitialized(collision_)) return false;
  if (!::PROTOBUF_NAMESPACE_ID::internal::AllAreInitialized(sensor_)) return false;
  if (!::PROTOBUF_NAMESPACE_ID::internal::AllAreInitialized(projector_)) return false;
  if (!::PROTOBUF_NAMESPACE_ID::internal::AllAreInitialized(battery_)) return false;
  if (!::PROTOBUF_NAMESPACE_ID::internal::AllAreInitialized(light_)) return false;
  if (_internal_has_density()) {
    if (!density_->IsInitialized()) return false;
  }
  if (_internal_has_inertial()) {
    if (!inertial_->IsInitialized()) return false;
  }
  if (_internal_has_pose()) {
    if (!pose_->IsInitialized()) return false;
  }
  if (_internal_has_wind()) {
    if (!wind_->IsInitialized()) return false;
  }
  return true;
}

void Link::InternalSwap(Link* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  visual_.InternalSwap(&other->visual_);
  collision_.InternalSwap(&other->collision_);
  sensor_.InternalSwap(&other->sensor_);
  projector_.InternalSwap(&other->projector_);
  battery_.InternalSwap(&other->battery_);
  light_.InternalSwap(&other->light_);
  name_.Swap(&other->name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(density_, other->density_);
  swap(inertial_, other->inertial_);
  swap(pose_, other->pose_);
  swap(wind_, other->wind_);
  swap(id_, other->id_);
  swap(self_collide_, other->self_collide_);
  swap(gravity_, other->gravity_);
  swap(kinematic_, other->kinematic_);
  swap(enabled_, other->enabled_);
  swap(canonical_, other->canonical_);
  swap(enable_wind_, other->enable_wind_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Link::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::gazebo::msgs::Link* Arena::CreateMaybeMessage< ::gazebo::msgs::Link >(Arena* arena) {
  return Arena::CreateInternal< ::gazebo::msgs::Link >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

GZ_REGISTER_STATIC_MSG("gazebo.msgs.Link", Link)
// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>