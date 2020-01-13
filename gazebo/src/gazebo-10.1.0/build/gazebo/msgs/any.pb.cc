// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: any.proto

#include "any.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_color_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Color_color_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_pose_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_Pose_pose_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_quaternion_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Quaternion_quaternion_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_time_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Time_time_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_vector3d_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Vector3d_vector3d_2eproto;
namespace gazebo {
namespace msgs {
class AnyDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Any> _instance;
} _Any_default_instance_;
}  // namespace msgs
}  // namespace gazebo
static void InitDefaultsscc_info_Any_any_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gazebo::msgs::_Any_default_instance_;
    new (ptr) ::gazebo::msgs::Any();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gazebo::msgs::Any::InitAsDefaultInstance();
}

GZ_MSGS_VISIBLE ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<5> scc_info_Any_any_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 5, 0, InitDefaultsscc_info_Any_any_2eproto}, {
      &scc_info_Vector3d_vector3d_2eproto.base,
      &scc_info_Color_color_2eproto.base,
      &scc_info_Pose_pose_2eproto.base,
      &scc_info_Quaternion_quaternion_2eproto.base,
      &scc_info_Time_time_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_any_2eproto[1];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_any_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_any_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_any_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Any, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Any, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Any, type_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Any, double_value_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Any, int_value_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Any, string_value_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Any, bool_value_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Any, vector3d_value_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Any, color_value_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Any, pose3d_value_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Any, quaternion_value_),
  PROTOBUF_FIELD_OFFSET(::gazebo::msgs::Any, time_value_),
  9,
  6,
  7,
  0,
  8,
  1,
  2,
  3,
  4,
  5,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 15, sizeof(::gazebo::msgs::Any)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::gazebo::msgs::_Any_default_instance_),
};

const char descriptor_table_protodef_any_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\tany.proto\022\013gazebo.msgs\032\013color.proto\032\np"
  "ose.proto\032\020quaternion.proto\032\ntime.proto\032"
  "\016vector3d.proto\"\353\003\n\003Any\022.\n\004type\030\001 \002(\0162\032."
  "gazebo.msgs.Any.ValueType:\004NONE\022\024\n\014doubl"
  "e_value\030\002 \001(\001\022\021\n\tint_value\030\003 \001(\005\022\024\n\014stri"
  "ng_value\030\004 \001(\t\022\022\n\nbool_value\030\005 \001(\010\022-\n\016ve"
  "ctor3d_value\030\006 \001(\0132\025.gazebo.msgs.Vector3"
  "d\022\'\n\013color_value\030\007 \001(\0132\022.gazebo.msgs.Col"
  "or\022\'\n\014pose3d_value\030\010 \001(\0132\021.gazebo.msgs.P"
  "ose\0221\n\020quaternion_value\030\t \001(\0132\027.gazebo.m"
  "sgs.Quaternion\022%\n\ntime_value\030\n \001(\0132\021.gaz"
  "ebo.msgs.Time\"\205\001\n\tValueType\022\010\n\004NONE\020\001\022\n\n"
  "\006DOUBLE\020\002\022\t\n\005INT32\020\003\022\n\n\006STRING\020\004\022\013\n\007BOOL"
  "EAN\020\005\022\014\n\010VECTOR3D\020\006\022\t\n\005COLOR\020\007\022\n\n\006POSE3D"
  "\020\010\022\017\n\013QUATERNIOND\020\t\022\010\n\004TIME\020\n"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_any_2eproto_deps[5] = {
  &::descriptor_table_color_2eproto,
  &::descriptor_table_pose_2eproto,
  &::descriptor_table_quaternion_2eproto,
  &::descriptor_table_time_2eproto,
  &::descriptor_table_vector3d_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_any_2eproto_sccs[1] = {
  &scc_info_Any_any_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_any_2eproto_once;
static bool descriptor_table_any_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_any_2eproto = {
  &descriptor_table_any_2eproto_initialized, descriptor_table_protodef_any_2eproto, "any.proto", 589,
  &descriptor_table_any_2eproto_once, descriptor_table_any_2eproto_sccs, descriptor_table_any_2eproto_deps, 1, 5,
  schemas, file_default_instances, TableStruct_any_2eproto::offsets,
  file_level_metadata_any_2eproto, 1, file_level_enum_descriptors_any_2eproto, file_level_service_descriptors_any_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_any_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_any_2eproto), true);
namespace gazebo {
namespace msgs {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Any_ValueType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_any_2eproto);
  return file_level_enum_descriptors_any_2eproto[0];
}
bool Any_ValueType_IsValid(int value) {
  switch (value) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
constexpr Any_ValueType Any::NONE;
constexpr Any_ValueType Any::DOUBLE;
constexpr Any_ValueType Any::INT32;
constexpr Any_ValueType Any::STRING;
constexpr Any_ValueType Any::BOOLEAN;
constexpr Any_ValueType Any::VECTOR3D;
constexpr Any_ValueType Any::COLOR;
constexpr Any_ValueType Any::POSE3D;
constexpr Any_ValueType Any::QUATERNIOND;
constexpr Any_ValueType Any::TIME;
constexpr Any_ValueType Any::ValueType_MIN;
constexpr Any_ValueType Any::ValueType_MAX;
constexpr int Any::ValueType_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)

// ===================================================================

void Any::InitAsDefaultInstance() {
  ::gazebo::msgs::_Any_default_instance_._instance.get_mutable()->vector3d_value_ = const_cast< ::gazebo::msgs::Vector3d*>(
      ::gazebo::msgs::Vector3d::internal_default_instance());
  ::gazebo::msgs::_Any_default_instance_._instance.get_mutable()->color_value_ = const_cast< ::gazebo::msgs::Color*>(
      ::gazebo::msgs::Color::internal_default_instance());
  ::gazebo::msgs::_Any_default_instance_._instance.get_mutable()->pose3d_value_ = const_cast< ::gazebo::msgs::Pose*>(
      ::gazebo::msgs::Pose::internal_default_instance());
  ::gazebo::msgs::_Any_default_instance_._instance.get_mutable()->quaternion_value_ = const_cast< ::gazebo::msgs::Quaternion*>(
      ::gazebo::msgs::Quaternion::internal_default_instance());
  ::gazebo::msgs::_Any_default_instance_._instance.get_mutable()->time_value_ = const_cast< ::gazebo::msgs::Time*>(
      ::gazebo::msgs::Time::internal_default_instance());
}
class Any::_Internal {
 public:
  using HasBits = decltype(std::declval<Any>()._has_bits_);
  static void set_has_type(HasBits* has_bits) {
    (*has_bits)[0] |= 512u;
  }
  static void set_has_double_value(HasBits* has_bits) {
    (*has_bits)[0] |= 64u;
  }
  static void set_has_int_value(HasBits* has_bits) {
    (*has_bits)[0] |= 128u;
  }
  static void set_has_string_value(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_bool_value(HasBits* has_bits) {
    (*has_bits)[0] |= 256u;
  }
  static const ::gazebo::msgs::Vector3d& vector3d_value(const Any* msg);
  static void set_has_vector3d_value(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static const ::gazebo::msgs::Color& color_value(const Any* msg);
  static void set_has_color_value(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static const ::gazebo::msgs::Pose& pose3d_value(const Any* msg);
  static void set_has_pose3d_value(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static const ::gazebo::msgs::Quaternion& quaternion_value(const Any* msg);
  static void set_has_quaternion_value(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static const ::gazebo::msgs::Time& time_value(const Any* msg);
  static void set_has_time_value(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
};

const ::gazebo::msgs::Vector3d&
Any::_Internal::vector3d_value(const Any* msg) {
  return *msg->vector3d_value_;
}
const ::gazebo::msgs::Color&
Any::_Internal::color_value(const Any* msg) {
  return *msg->color_value_;
}
const ::gazebo::msgs::Pose&
Any::_Internal::pose3d_value(const Any* msg) {
  return *msg->pose3d_value_;
}
const ::gazebo::msgs::Quaternion&
Any::_Internal::quaternion_value(const Any* msg) {
  return *msg->quaternion_value_;
}
const ::gazebo::msgs::Time&
Any::_Internal::time_value(const Any* msg) {
  return *msg->time_value_;
}
void Any::clear_vector3d_value() {
  if (vector3d_value_ != nullptr) vector3d_value_->Clear();
  _has_bits_[0] &= ~0x00000002u;
}
void Any::clear_color_value() {
  if (color_value_ != nullptr) color_value_->Clear();
  _has_bits_[0] &= ~0x00000004u;
}
void Any::clear_pose3d_value() {
  if (pose3d_value_ != nullptr) pose3d_value_->Clear();
  _has_bits_[0] &= ~0x00000008u;
}
void Any::clear_quaternion_value() {
  if (quaternion_value_ != nullptr) quaternion_value_->Clear();
  _has_bits_[0] &= ~0x00000010u;
}
void Any::clear_time_value() {
  if (time_value_ != nullptr) time_value_->Clear();
  _has_bits_[0] &= ~0x00000020u;
}
Any::Any()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:gazebo.msgs.Any)
}
Any::Any(const Any& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  string_value_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_string_value()) {
    string_value_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.string_value_);
  }
  if (from._internal_has_vector3d_value()) {
    vector3d_value_ = new ::gazebo::msgs::Vector3d(*from.vector3d_value_);
  } else {
    vector3d_value_ = nullptr;
  }
  if (from._internal_has_color_value()) {
    color_value_ = new ::gazebo::msgs::Color(*from.color_value_);
  } else {
    color_value_ = nullptr;
  }
  if (from._internal_has_pose3d_value()) {
    pose3d_value_ = new ::gazebo::msgs::Pose(*from.pose3d_value_);
  } else {
    pose3d_value_ = nullptr;
  }
  if (from._internal_has_quaternion_value()) {
    quaternion_value_ = new ::gazebo::msgs::Quaternion(*from.quaternion_value_);
  } else {
    quaternion_value_ = nullptr;
  }
  if (from._internal_has_time_value()) {
    time_value_ = new ::gazebo::msgs::Time(*from.time_value_);
  } else {
    time_value_ = nullptr;
  }
  ::memcpy(&double_value_, &from.double_value_,
    static_cast<size_t>(reinterpret_cast<char*>(&type_) -
    reinterpret_cast<char*>(&double_value_)) + sizeof(type_));
  // @@protoc_insertion_point(copy_constructor:gazebo.msgs.Any)
}

void Any::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Any_any_2eproto.base);
  string_value_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&vector3d_value_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&bool_value_) -
      reinterpret_cast<char*>(&vector3d_value_)) + sizeof(bool_value_));
  type_ = 1;
}

Any::~Any() {
  // @@protoc_insertion_point(destructor:gazebo.msgs.Any)
  SharedDtor();
}

void Any::SharedDtor() {
  string_value_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete vector3d_value_;
  if (this != internal_default_instance()) delete color_value_;
  if (this != internal_default_instance()) delete pose3d_value_;
  if (this != internal_default_instance()) delete quaternion_value_;
  if (this != internal_default_instance()) delete time_value_;
}

void Any::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Any& Any::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Any_any_2eproto.base);
  return *internal_default_instance();
}


void Any::Clear() {
// @@protoc_insertion_point(message_clear_start:gazebo.msgs.Any)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000003fu) {
    if (cached_has_bits & 0x00000001u) {
      string_value_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(vector3d_value_ != nullptr);
      vector3d_value_->Clear();
    }
    if (cached_has_bits & 0x00000004u) {
      GOOGLE_DCHECK(color_value_ != nullptr);
      color_value_->Clear();
    }
    if (cached_has_bits & 0x00000008u) {
      GOOGLE_DCHECK(pose3d_value_ != nullptr);
      pose3d_value_->Clear();
    }
    if (cached_has_bits & 0x00000010u) {
      GOOGLE_DCHECK(quaternion_value_ != nullptr);
      quaternion_value_->Clear();
    }
    if (cached_has_bits & 0x00000020u) {
      GOOGLE_DCHECK(time_value_ != nullptr);
      time_value_->Clear();
    }
  }
  if (cached_has_bits & 0x000000c0u) {
    ::memset(&double_value_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&int_value_) -
        reinterpret_cast<char*>(&double_value_)) + sizeof(int_value_));
  }
  if (cached_has_bits & 0x00000300u) {
    bool_value_ = false;
    type_ = 1;
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* Any::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // required .gazebo.msgs.Any.ValueType type = 1 [default = NONE];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::gazebo::msgs::Any_ValueType_IsValid(val))) {
            _internal_set_type(static_cast<::gazebo::msgs::Any_ValueType>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(1, val, mutable_unknown_fields());
          }
        } else goto handle_unusual;
        continue;
      // optional double double_value = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 17)) {
          _Internal::set_has_double_value(&has_bits);
          double_value_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // optional int32 int_value = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          _Internal::set_has_int_value(&has_bits);
          int_value_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional string string_value = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          auto str = _internal_mutable_string_value();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "gazebo.msgs.Any.string_value");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional bool bool_value = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 40)) {
          _Internal::set_has_bool_value(&has_bits);
          bool_value_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .gazebo.msgs.Vector3d vector3d_value = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 50)) {
          ptr = ctx->ParseMessage(_internal_mutable_vector3d_value(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .gazebo.msgs.Color color_value = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 58)) {
          ptr = ctx->ParseMessage(_internal_mutable_color_value(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .gazebo.msgs.Pose pose3d_value = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 66)) {
          ptr = ctx->ParseMessage(_internal_mutable_pose3d_value(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .gazebo.msgs.Quaternion quaternion_value = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 74)) {
          ptr = ctx->ParseMessage(_internal_mutable_quaternion_value(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .gazebo.msgs.Time time_value = 10;
      case 10:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 82)) {
          ptr = ctx->ParseMessage(_internal_mutable_time_value(), ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* Any::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:gazebo.msgs.Any)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required .gazebo.msgs.Any.ValueType type = 1 [default = NONE];
  if (cached_has_bits & 0x00000200u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      1, this->_internal_type(), target);
  }

  // optional double double_value = 2;
  if (cached_has_bits & 0x00000040u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(2, this->_internal_double_value(), target);
  }

  // optional int32 int_value = 3;
  if (cached_has_bits & 0x00000080u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(3, this->_internal_int_value(), target);
  }

  // optional string string_value = 4;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_string_value().data(), static_cast<int>(this->_internal_string_value().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "gazebo.msgs.Any.string_value");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_string_value(), target);
  }

  // optional bool bool_value = 5;
  if (cached_has_bits & 0x00000100u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(5, this->_internal_bool_value(), target);
  }

  // optional .gazebo.msgs.Vector3d vector3d_value = 6;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        6, _Internal::vector3d_value(this), target, stream);
  }

  // optional .gazebo.msgs.Color color_value = 7;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        7, _Internal::color_value(this), target, stream);
  }

  // optional .gazebo.msgs.Pose pose3d_value = 8;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        8, _Internal::pose3d_value(this), target, stream);
  }

  // optional .gazebo.msgs.Quaternion quaternion_value = 9;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        9, _Internal::quaternion_value(this), target, stream);
  }

  // optional .gazebo.msgs.Time time_value = 10;
  if (cached_has_bits & 0x00000020u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        10, _Internal::time_value(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gazebo.msgs.Any)
  return target;
}

size_t Any::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gazebo.msgs.Any)
  size_t total_size = 0;

  // required .gazebo.msgs.Any.ValueType type = 1 [default = NONE];
  if (_internal_has_type()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_type());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    // optional string string_value = 4;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_string_value());
    }

    // optional .gazebo.msgs.Vector3d vector3d_value = 6;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *vector3d_value_);
    }

    // optional .gazebo.msgs.Color color_value = 7;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *color_value_);
    }

    // optional .gazebo.msgs.Pose pose3d_value = 8;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *pose3d_value_);
    }

    // optional .gazebo.msgs.Quaternion quaternion_value = 9;
    if (cached_has_bits & 0x00000010u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *quaternion_value_);
    }

    // optional .gazebo.msgs.Time time_value = 10;
    if (cached_has_bits & 0x00000020u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *time_value_);
    }

    // optional double double_value = 2;
    if (cached_has_bits & 0x00000040u) {
      total_size += 1 + 8;
    }

    // optional int32 int_value = 3;
    if (cached_has_bits & 0x00000080u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
          this->_internal_int_value());
    }

  }
  // optional bool bool_value = 5;
  if (cached_has_bits & 0x00000100u) {
    total_size += 1 + 1;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Any::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gazebo.msgs.Any)
  GOOGLE_DCHECK_NE(&from, this);
  const Any* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Any>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gazebo.msgs.Any)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gazebo.msgs.Any)
    MergeFrom(*source);
  }
}

void Any::MergeFrom(const Any& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gazebo.msgs.Any)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    if (cached_has_bits & 0x00000001u) {
      _has_bits_[0] |= 0x00000001u;
      string_value_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.string_value_);
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_mutable_vector3d_value()->::gazebo::msgs::Vector3d::MergeFrom(from._internal_vector3d_value());
    }
    if (cached_has_bits & 0x00000004u) {
      _internal_mutable_color_value()->::gazebo::msgs::Color::MergeFrom(from._internal_color_value());
    }
    if (cached_has_bits & 0x00000008u) {
      _internal_mutable_pose3d_value()->::gazebo::msgs::Pose::MergeFrom(from._internal_pose3d_value());
    }
    if (cached_has_bits & 0x00000010u) {
      _internal_mutable_quaternion_value()->::gazebo::msgs::Quaternion::MergeFrom(from._internal_quaternion_value());
    }
    if (cached_has_bits & 0x00000020u) {
      _internal_mutable_time_value()->::gazebo::msgs::Time::MergeFrom(from._internal_time_value());
    }
    if (cached_has_bits & 0x00000040u) {
      double_value_ = from.double_value_;
    }
    if (cached_has_bits & 0x00000080u) {
      int_value_ = from.int_value_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  if (cached_has_bits & 0x00000300u) {
    if (cached_has_bits & 0x00000100u) {
      bool_value_ = from.bool_value_;
    }
    if (cached_has_bits & 0x00000200u) {
      type_ = from.type_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void Any::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gazebo.msgs.Any)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Any::CopyFrom(const Any& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gazebo.msgs.Any)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Any::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000200) != 0x00000200) return false;
  if (_internal_has_vector3d_value()) {
    if (!vector3d_value_->IsInitialized()) return false;
  }
  if (_internal_has_color_value()) {
    if (!color_value_->IsInitialized()) return false;
  }
  if (_internal_has_pose3d_value()) {
    if (!pose3d_value_->IsInitialized()) return false;
  }
  if (_internal_has_quaternion_value()) {
    if (!quaternion_value_->IsInitialized()) return false;
  }
  if (_internal_has_time_value()) {
    if (!time_value_->IsInitialized()) return false;
  }
  return true;
}

void Any::InternalSwap(Any* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  string_value_.Swap(&other->string_value_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(vector3d_value_, other->vector3d_value_);
  swap(color_value_, other->color_value_);
  swap(pose3d_value_, other->pose3d_value_);
  swap(quaternion_value_, other->quaternion_value_);
  swap(time_value_, other->time_value_);
  swap(double_value_, other->double_value_);
  swap(int_value_, other->int_value_);
  swap(bool_value_, other->bool_value_);
  swap(type_, other->type_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Any::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::gazebo::msgs::Any* Arena::CreateMaybeMessage< ::gazebo::msgs::Any >(Arena* arena) {
  return Arena::CreateInternal< ::gazebo::msgs::Any >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

GZ_REGISTER_STATIC_MSG("gazebo.msgs.Any", Any)
// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>