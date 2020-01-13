// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: surface.proto

#include "surface.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_friction_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_Friction_friction_2eproto;
namespace gazebo {
namespace msgs {
class SurfaceDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Surface> _instance;
} _Surface_default_instance_;
}  // namespace msgs
}  // namespace gazebo
static void InitDefaultsscc_info_Surface_surface_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gazebo::msgs::_Surface_default_instance_;
    new (ptr) ::gazebo::msgs::Surface();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gazebo::msgs::Surface::InitAsDefaultInstance();
}

GZ_MSGS_VISIBLE ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Surface_surface_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_Surface_surface_2eproto}, {
      &scc_info_Friction_friction_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_surface_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_surface_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_surface_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_surface_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Surface, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Surface, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Surface, friction_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Surface, restitution_coefficient_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Surface, bounce_threshold_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Surface, soft_cfm_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Surface, soft_erp_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Surface, kp_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Surface, kd_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Surface, max_vel_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Surface, min_depth_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Surface, collide_without_contact_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Surface, collide_without_contact_bitmask_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Surface, collide_bitmask_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Surface, elastic_modulus_),
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  12,
  11,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 18, sizeof(::gazebo::msgs::Surface)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::gazebo::msgs::_Surface_default_instance_),
};

const char descriptor_table_protodef_surface_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\rsurface.proto\022\013gazebo.msgs\032\016friction.p"
  "roto\"\311\002\n\007Surface\022\'\n\010friction\030\001 \001(\0132\025.gaz"
  "ebo.msgs.Friction\022\037\n\027restitution_coeffic"
  "ient\030\002 \001(\001\022\030\n\020bounce_threshold\030\003 \001(\001\022\020\n\010"
  "soft_cfm\030\004 \001(\001\022\020\n\010soft_erp\030\005 \001(\001\022\n\n\002kp\030\006"
  " \001(\001\022\n\n\002kd\030\007 \001(\001\022\017\n\007max_vel\030\010 \001(\001\022\021\n\tmin"
  "_depth\030\t \001(\001\022\037\n\027collide_without_contact\030"
  "\n \001(\010\022\'\n\037collide_without_contact_bitmask"
  "\030\013 \001(\r\022\027\n\017collide_bitmask\030\014 \001(\r\022\027\n\017elast"
  "ic_modulus\030\r \001(\001"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_surface_2eproto_deps[1] = {
  &::descriptor_table_friction_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_surface_2eproto_sccs[1] = {
  &scc_info_Surface_surface_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_surface_2eproto_once;
static bool descriptor_table_surface_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_surface_2eproto = {
  &descriptor_table_surface_2eproto_initialized, descriptor_table_protodef_surface_2eproto, "surface.proto", 376,
  &descriptor_table_surface_2eproto_once, descriptor_table_surface_2eproto_sccs, descriptor_table_surface_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_surface_2eproto::offsets,
  file_level_metadata_surface_2eproto, 1, file_level_enum_descriptors_surface_2eproto, file_level_service_descriptors_surface_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_surface_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_surface_2eproto), true);
namespace gazebo {
namespace msgs {

// ===================================================================

void Surface::InitAsDefaultInstance() {
  ::gazebo::msgs::_Surface_default_instance_._instance.get_mutable()->friction_ = const_cast< ::gazebo::msgs::Friction*>(
      ::gazebo::msgs::Friction::internal_default_instance());
}
class Surface::_Internal {
 public:
  using HasBits = decltype(std::declval<Surface>()._has_bits_);
  static const ::gazebo::msgs::Friction& friction(const Surface* msg);
  static void set_has_friction(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_restitution_coefficient(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_bounce_threshold(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_soft_cfm(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_soft_erp(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_kp(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
  static void set_has_kd(HasBits* has_bits) {
    (*has_bits)[0] |= 64u;
  }
  static void set_has_max_vel(HasBits* has_bits) {
    (*has_bits)[0] |= 128u;
  }
  static void set_has_min_depth(HasBits* has_bits) {
    (*has_bits)[0] |= 256u;
  }
  static void set_has_collide_without_contact(HasBits* has_bits) {
    (*has_bits)[0] |= 512u;
  }
  static void set_has_collide_without_contact_bitmask(HasBits* has_bits) {
    (*has_bits)[0] |= 1024u;
  }
  static void set_has_collide_bitmask(HasBits* has_bits) {
    (*has_bits)[0] |= 4096u;
  }
  static void set_has_elastic_modulus(HasBits* has_bits) {
    (*has_bits)[0] |= 2048u;
  }
};

const ::gazebo::msgs::Friction&
Surface::_Internal::friction(const Surface* msg) {
  return *msg->friction_;
}
void Surface::clear_friction() {
  if (friction_ != nullptr) friction_->Clear();
  _has_bits_[0] &= ~0x00000001u;
}
Surface::Surface()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gazebo.msgs.Surface)
}
Surface::Surface(const Surface& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from._internal_has_friction()) {
    friction_ = new ::gazebo::msgs::Friction(*from.friction_);
  } else {
    friction_ = nullptr;
  }
  ::memcpy(&restitution_coefficient_, &from.restitution_coefficient_,
    static_cast<size_t>(reinterpret_cast<char*>(&collide_bitmask_) -
    reinterpret_cast<char*>(&restitution_coefficient_)) + sizeof(collide_bitmask_));
  // @@protoc_insertion_point(copy_constructor:gazebo.msgs.Surface)
}

void Surface::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Surface_surface_2eproto.base);
  ::memset(&friction_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&collide_bitmask_) -
      reinterpret_cast<char*>(&friction_)) + sizeof(collide_bitmask_));
}

Surface::~Surface() {
  // @@protoc_insertion_point(destructor:gazebo.msgs.Surface)
  SharedDtor();
}

void Surface::SharedDtor() {
  if (this != internal_default_instance()) delete friction_;
}

void Surface::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Surface& Surface::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Surface_surface_2eproto.base);
  return *internal_default_instance();
}


void Surface::Clear() {
// @@protoc_insertion_point(message_clear_start:gazebo.msgs.Surface)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    GOOGLE_DCHECK(friction_ != nullptr);
    friction_->Clear();
  }
  if (cached_has_bits & 0x000000feu) {
    ::memset(&restitution_coefficient_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&max_vel_) -
        reinterpret_cast<char*>(&restitution_coefficient_)) + sizeof(max_vel_));
  }
  if (cached_has_bits & 0x00001f00u) {
    ::memset(&min_depth_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&collide_bitmask_) -
        reinterpret_cast<char*>(&min_depth_)) + sizeof(collide_bitmask_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* Surface::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional .gazebo.msgs.Friction friction = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_friction(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional double restitution_coefficient = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 17)) {
          _Internal::set_has_restitution_coefficient(&has_bits);
          restitution_coefficient_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // optional double bounce_threshold = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 25)) {
          _Internal::set_has_bounce_threshold(&has_bits);
          bounce_threshold_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // optional double soft_cfm = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 33)) {
          _Internal::set_has_soft_cfm(&has_bits);
          soft_cfm_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // optional double soft_erp = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 41)) {
          _Internal::set_has_soft_erp(&has_bits);
          soft_erp_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // optional double kp = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 49)) {
          _Internal::set_has_kp(&has_bits);
          kp_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // optional double kd = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 57)) {
          _Internal::set_has_kd(&has_bits);
          kd_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // optional double max_vel = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 65)) {
          _Internal::set_has_max_vel(&has_bits);
          max_vel_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // optional double min_depth = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 73)) {
          _Internal::set_has_min_depth(&has_bits);
          min_depth_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // optional bool collide_without_contact = 10;
      case 10:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 80)) {
          _Internal::set_has_collide_without_contact(&has_bits);
          collide_without_contact_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional uint32 collide_without_contact_bitmask = 11;
      case 11:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 88)) {
          _Internal::set_has_collide_without_contact_bitmask(&has_bits);
          collide_without_contact_bitmask_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional uint32 collide_bitmask = 12;
      case 12:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 96)) {
          _Internal::set_has_collide_bitmask(&has_bits);
          collide_bitmask_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional double elastic_modulus = 13;
      case 13:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 105)) {
          _Internal::set_has_elastic_modulus(&has_bits);
          elastic_modulus_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
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

::PROTOBUF_NAMESPACE_ID::uint8* Surface::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:gazebo.msgs.Surface)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .gazebo.msgs.Friction friction = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::friction(this), target, stream);
  }

  // optional double restitution_coefficient = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(2, this->_internal_restitution_coefficient(), target);
  }

  // optional double bounce_threshold = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(3, this->_internal_bounce_threshold(), target);
  }

  // optional double soft_cfm = 4;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(4, this->_internal_soft_cfm(), target);
  }

  // optional double soft_erp = 5;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(5, this->_internal_soft_erp(), target);
  }

  // optional double kp = 6;
  if (cached_has_bits & 0x00000020u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(6, this->_internal_kp(), target);
  }

  // optional double kd = 7;
  if (cached_has_bits & 0x00000040u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(7, this->_internal_kd(), target);
  }

  // optional double max_vel = 8;
  if (cached_has_bits & 0x00000080u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(8, this->_internal_max_vel(), target);
  }

  // optional double min_depth = 9;
  if (cached_has_bits & 0x00000100u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(9, this->_internal_min_depth(), target);
  }

  // optional bool collide_without_contact = 10;
  if (cached_has_bits & 0x00000200u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(10, this->_internal_collide_without_contact(), target);
  }

  // optional uint32 collide_without_contact_bitmask = 11;
  if (cached_has_bits & 0x00000400u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(11, this->_internal_collide_without_contact_bitmask(), target);
  }

  // optional uint32 collide_bitmask = 12;
  if (cached_has_bits & 0x00001000u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(12, this->_internal_collide_bitmask(), target);
  }

  // optional double elastic_modulus = 13;
  if (cached_has_bits & 0x00000800u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(13, this->_internal_elastic_modulus(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gazebo.msgs.Surface)
  return target;
}

size_t Surface::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gazebo.msgs.Surface)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    // optional .gazebo.msgs.Friction friction = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *friction_);
    }

    // optional double restitution_coefficient = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 + 8;
    }

    // optional double bounce_threshold = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 + 8;
    }

    // optional double soft_cfm = 4;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 + 8;
    }

    // optional double soft_erp = 5;
    if (cached_has_bits & 0x00000010u) {
      total_size += 1 + 8;
    }

    // optional double kp = 6;
    if (cached_has_bits & 0x00000020u) {
      total_size += 1 + 8;
    }

    // optional double kd = 7;
    if (cached_has_bits & 0x00000040u) {
      total_size += 1 + 8;
    }

    // optional double max_vel = 8;
    if (cached_has_bits & 0x00000080u) {
      total_size += 1 + 8;
    }

  }
  if (cached_has_bits & 0x00001f00u) {
    // optional double min_depth = 9;
    if (cached_has_bits & 0x00000100u) {
      total_size += 1 + 8;
    }

    // optional bool collide_without_contact = 10;
    if (cached_has_bits & 0x00000200u) {
      total_size += 1 + 1;
    }

    // optional uint32 collide_without_contact_bitmask = 11;
    if (cached_has_bits & 0x00000400u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
          this->_internal_collide_without_contact_bitmask());
    }

    // optional double elastic_modulus = 13;
    if (cached_has_bits & 0x00000800u) {
      total_size += 1 + 8;
    }

    // optional uint32 collide_bitmask = 12;
    if (cached_has_bits & 0x00001000u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
          this->_internal_collide_bitmask());
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

void Surface::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gazebo.msgs.Surface)
  GOOGLE_DCHECK_NE(&from, this);
  const Surface* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Surface>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gazebo.msgs.Surface)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gazebo.msgs.Surface)
    MergeFrom(*source);
  }
}

void Surface::MergeFrom(const Surface& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gazebo.msgs.Surface)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    if (cached_has_bits & 0x00000001u) {
      _internal_mutable_friction()->::gazebo::msgs::Friction::MergeFrom(from._internal_friction());
    }
    if (cached_has_bits & 0x00000002u) {
      restitution_coefficient_ = from.restitution_coefficient_;
    }
    if (cached_has_bits & 0x00000004u) {
      bounce_threshold_ = from.bounce_threshold_;
    }
    if (cached_has_bits & 0x00000008u) {
      soft_cfm_ = from.soft_cfm_;
    }
    if (cached_has_bits & 0x00000010u) {
      soft_erp_ = from.soft_erp_;
    }
    if (cached_has_bits & 0x00000020u) {
      kp_ = from.kp_;
    }
    if (cached_has_bits & 0x00000040u) {
      kd_ = from.kd_;
    }
    if (cached_has_bits & 0x00000080u) {
      max_vel_ = from.max_vel_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  if (cached_has_bits & 0x00001f00u) {
    if (cached_has_bits & 0x00000100u) {
      min_depth_ = from.min_depth_;
    }
    if (cached_has_bits & 0x00000200u) {
      collide_without_contact_ = from.collide_without_contact_;
    }
    if (cached_has_bits & 0x00000400u) {
      collide_without_contact_bitmask_ = from.collide_without_contact_bitmask_;
    }
    if (cached_has_bits & 0x00000800u) {
      elastic_modulus_ = from.elastic_modulus_;
    }
    if (cached_has_bits & 0x00001000u) {
      collide_bitmask_ = from.collide_bitmask_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void Surface::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gazebo.msgs.Surface)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Surface::CopyFrom(const Surface& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gazebo.msgs.Surface)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Surface::IsInitialized() const {
  if (_internal_has_friction()) {
    if (!friction_->IsInitialized()) return false;
  }
  return true;
}

void Surface::InternalSwap(Surface* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(friction_, other->friction_);
  swap(restitution_coefficient_, other->restitution_coefficient_);
  swap(bounce_threshold_, other->bounce_threshold_);
  swap(soft_cfm_, other->soft_cfm_);
  swap(soft_erp_, other->soft_erp_);
  swap(kp_, other->kp_);
  swap(kd_, other->kd_);
  swap(max_vel_, other->max_vel_);
  swap(min_depth_, other->min_depth_);
  swap(collide_without_contact_, other->collide_without_contact_);
  swap(collide_without_contact_bitmask_, other->collide_without_contact_bitmask_);
  swap(elastic_modulus_, other->elastic_modulus_);
  swap(collide_bitmask_, other->collide_bitmask_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Surface::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::gazebo::msgs::Surface* Arena::CreateMaybeMessage< ::gazebo::msgs::Surface >(Arena* arena) {
  return Arena::CreateInternal< ::gazebo::msgs::Surface >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

GZ_REGISTER_STATIC_MSG("gazebo.msgs.Surface", Surface)
// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
