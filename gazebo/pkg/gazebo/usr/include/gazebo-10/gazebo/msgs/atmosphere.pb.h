// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: atmosphere.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_atmosphere_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_atmosphere_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3011000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3011001 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#pragma GCC system_header
#include <boost/shared_ptr.hpp>
#include <gazebo/util/system.hh>
#include "gazebo/msgs/MsgFactory.hh"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_atmosphere_2eproto GZ_MSGS_VISIBLE
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct GZ_MSGS_VISIBLE TableStruct_atmosphere_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern GZ_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_atmosphere_2eproto;
namespace gazebo {
namespace msgs {
class Atmosphere;
class AtmosphereDefaultTypeInternal;
GZ_MSGS_VISIBLE extern AtmosphereDefaultTypeInternal _Atmosphere_default_instance_;
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> GZ_MSGS_VISIBLE ::gazebo::msgs::Atmosphere* Arena::CreateMaybeMessage<::gazebo::msgs::Atmosphere>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace gazebo {
namespace msgs {

enum Atmosphere_Type : int {
  Atmosphere_Type_ADIABATIC = 1
};
GZ_MSGS_VISIBLE bool Atmosphere_Type_IsValid(int value);
constexpr Atmosphere_Type Atmosphere_Type_Type_MIN = Atmosphere_Type_ADIABATIC;
constexpr Atmosphere_Type Atmosphere_Type_Type_MAX = Atmosphere_Type_ADIABATIC;
constexpr int Atmosphere_Type_Type_ARRAYSIZE = Atmosphere_Type_Type_MAX + 1;

GZ_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Atmosphere_Type_descriptor();
template<typename T>
inline const std::string& Atmosphere_Type_Name(T enum_t_value) {
  static_assert(::std::is_same<T, Atmosphere_Type>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function Atmosphere_Type_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    Atmosphere_Type_descriptor(), enum_t_value);
}
inline bool Atmosphere_Type_Parse(
    const std::string& name, Atmosphere_Type* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<Atmosphere_Type>(
    Atmosphere_Type_descriptor(), name, value);
}
// ===================================================================

class GZ_MSGS_VISIBLE Atmosphere :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:gazebo.msgs.Atmosphere) */ {
 public:
  Atmosphere();
  virtual ~Atmosphere();

  Atmosphere(const Atmosphere& from);
  Atmosphere(Atmosphere&& from) noexcept
    : Atmosphere() {
    *this = ::std::move(from);
  }

  inline Atmosphere& operator=(const Atmosphere& from) {
    CopyFrom(from);
    return *this;
  }
  inline Atmosphere& operator=(Atmosphere&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Atmosphere& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Atmosphere* internal_default_instance() {
    return reinterpret_cast<const Atmosphere*>(
               &_Atmosphere_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Atmosphere& a, Atmosphere& b) {
    a.Swap(&b);
  }
  inline void Swap(Atmosphere* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Atmosphere* New() const final {
    return CreateMaybeMessage<Atmosphere>(nullptr);
  }

  Atmosphere* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Atmosphere>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Atmosphere& from);
  void MergeFrom(const Atmosphere& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Atmosphere* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "gazebo.msgs.Atmosphere";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_atmosphere_2eproto);
    return ::descriptor_table_atmosphere_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef Atmosphere_Type Type;
  static constexpr Type ADIABATIC =
    Atmosphere_Type_ADIABATIC;
  static inline bool Type_IsValid(int value) {
    return Atmosphere_Type_IsValid(value);
  }
  static constexpr Type Type_MIN =
    Atmosphere_Type_Type_MIN;
  static constexpr Type Type_MAX =
    Atmosphere_Type_Type_MAX;
  static constexpr int Type_ARRAYSIZE =
    Atmosphere_Type_Type_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  Type_descriptor() {
    return Atmosphere_Type_descriptor();
  }
  template<typename T>
  static inline const std::string& Type_Name(T enum_t_value) {
    static_assert(::std::is_same<T, Type>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function Type_Name.");
    return Atmosphere_Type_Name(enum_t_value);
  }
  static inline bool Type_Parse(const std::string& name,
      Type* value) {
    return Atmosphere_Type_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kTemperatureFieldNumber = 2,
    kPressureFieldNumber = 3,
    kMassDensityFieldNumber = 4,
    kEnableAtmosphereFieldNumber = 5,
    kTypeFieldNumber = 1,
  };
  // optional double temperature = 2;
  bool has_temperature() const;
  private:
  bool _internal_has_temperature() const;
  public:
  void clear_temperature();
  double temperature() const;
  void set_temperature(double value);
  private:
  double _internal_temperature() const;
  void _internal_set_temperature(double value);
  public:

  // optional double pressure = 3;
  bool has_pressure() const;
  private:
  bool _internal_has_pressure() const;
  public:
  void clear_pressure();
  double pressure() const;
  void set_pressure(double value);
  private:
  double _internal_pressure() const;
  void _internal_set_pressure(double value);
  public:

  // optional double mass_density = 4;
  bool has_mass_density() const;
  private:
  bool _internal_has_mass_density() const;
  public:
  void clear_mass_density();
  double mass_density() const;
  void set_mass_density(double value);
  private:
  double _internal_mass_density() const;
  void _internal_set_mass_density(double value);
  public:

  // optional bool enable_atmosphere = 5;
  bool has_enable_atmosphere() const;
  private:
  bool _internal_has_enable_atmosphere() const;
  public:
  void clear_enable_atmosphere();
  bool enable_atmosphere() const;
  void set_enable_atmosphere(bool value);
  private:
  bool _internal_enable_atmosphere() const;
  void _internal_set_enable_atmosphere(bool value);
  public:

  // optional .gazebo.msgs.Atmosphere.Type type = 1 [default = ADIABATIC];
  bool has_type() const;
  private:
  bool _internal_has_type() const;
  public:
  void clear_type();
  ::gazebo::msgs::Atmosphere_Type type() const;
  void set_type(::gazebo::msgs::Atmosphere_Type value);
  private:
  ::gazebo::msgs::Atmosphere_Type _internal_type() const;
  void _internal_set_type(::gazebo::msgs::Atmosphere_Type value);
  public:

  // @@protoc_insertion_point(class_scope:gazebo.msgs.Atmosphere)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  double temperature_;
  double pressure_;
  double mass_density_;
  bool enable_atmosphere_;
  int type_;
  friend struct ::TableStruct_atmosphere_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Atmosphere

// optional .gazebo.msgs.Atmosphere.Type type = 1 [default = ADIABATIC];
inline bool Atmosphere::_internal_has_type() const {
  bool value = (_has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool Atmosphere::has_type() const {
  return _internal_has_type();
}
inline void Atmosphere::clear_type() {
  type_ = 1;
  _has_bits_[0] &= ~0x00000010u;
}
inline ::gazebo::msgs::Atmosphere_Type Atmosphere::_internal_type() const {
  return static_cast< ::gazebo::msgs::Atmosphere_Type >(type_);
}
inline ::gazebo::msgs::Atmosphere_Type Atmosphere::type() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Atmosphere.type)
  return _internal_type();
}
inline void Atmosphere::_internal_set_type(::gazebo::msgs::Atmosphere_Type value) {
  assert(::gazebo::msgs::Atmosphere_Type_IsValid(value));
  _has_bits_[0] |= 0x00000010u;
  type_ = value;
}
inline void Atmosphere::set_type(::gazebo::msgs::Atmosphere_Type value) {
  _internal_set_type(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Atmosphere.type)
}

// optional double temperature = 2;
inline bool Atmosphere::_internal_has_temperature() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool Atmosphere::has_temperature() const {
  return _internal_has_temperature();
}
inline void Atmosphere::clear_temperature() {
  temperature_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline double Atmosphere::_internal_temperature() const {
  return temperature_;
}
inline double Atmosphere::temperature() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Atmosphere.temperature)
  return _internal_temperature();
}
inline void Atmosphere::_internal_set_temperature(double value) {
  _has_bits_[0] |= 0x00000001u;
  temperature_ = value;
}
inline void Atmosphere::set_temperature(double value) {
  _internal_set_temperature(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Atmosphere.temperature)
}

// optional double pressure = 3;
inline bool Atmosphere::_internal_has_pressure() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool Atmosphere::has_pressure() const {
  return _internal_has_pressure();
}
inline void Atmosphere::clear_pressure() {
  pressure_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline double Atmosphere::_internal_pressure() const {
  return pressure_;
}
inline double Atmosphere::pressure() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Atmosphere.pressure)
  return _internal_pressure();
}
inline void Atmosphere::_internal_set_pressure(double value) {
  _has_bits_[0] |= 0x00000002u;
  pressure_ = value;
}
inline void Atmosphere::set_pressure(double value) {
  _internal_set_pressure(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Atmosphere.pressure)
}

// optional double mass_density = 4;
inline bool Atmosphere::_internal_has_mass_density() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool Atmosphere::has_mass_density() const {
  return _internal_has_mass_density();
}
inline void Atmosphere::clear_mass_density() {
  mass_density_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline double Atmosphere::_internal_mass_density() const {
  return mass_density_;
}
inline double Atmosphere::mass_density() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Atmosphere.mass_density)
  return _internal_mass_density();
}
inline void Atmosphere::_internal_set_mass_density(double value) {
  _has_bits_[0] |= 0x00000004u;
  mass_density_ = value;
}
inline void Atmosphere::set_mass_density(double value) {
  _internal_set_mass_density(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Atmosphere.mass_density)
}

// optional bool enable_atmosphere = 5;
inline bool Atmosphere::_internal_has_enable_atmosphere() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool Atmosphere::has_enable_atmosphere() const {
  return _internal_has_enable_atmosphere();
}
inline void Atmosphere::clear_enable_atmosphere() {
  enable_atmosphere_ = false;
  _has_bits_[0] &= ~0x00000008u;
}
inline bool Atmosphere::_internal_enable_atmosphere() const {
  return enable_atmosphere_;
}
inline bool Atmosphere::enable_atmosphere() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Atmosphere.enable_atmosphere)
  return _internal_enable_atmosphere();
}
inline void Atmosphere::_internal_set_enable_atmosphere(bool value) {
  _has_bits_[0] |= 0x00000008u;
  enable_atmosphere_ = value;
}
inline void Atmosphere::set_enable_atmosphere(bool value) {
  _internal_set_enable_atmosphere(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Atmosphere.enable_atmosphere)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

typedef boost::shared_ptr<gazebo::msgs::Atmosphere> AtmospherePtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::gazebo::msgs::Atmosphere_Type> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::gazebo::msgs::Atmosphere_Type>() {
  return ::gazebo::msgs::Atmosphere_Type_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

typedef const boost::shared_ptr<gazebo::msgs::Atmosphere const> ConstAtmospherePtr;
// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_atmosphere_2eproto
