// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: distortion.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_distortion_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_distortion_2eproto

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
#include <google/protobuf/unknown_field_set.h>
#include "vector2d.pb.h"
#pragma GCC system_header
#include <boost/shared_ptr.hpp>
#include <gazebo/util/system.hh>
#include "gazebo/msgs/MsgFactory.hh"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_distortion_2eproto GZ_MSGS_VISIBLE
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct GZ_MSGS_VISIBLE TableStruct_distortion_2eproto {
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
extern GZ_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_distortion_2eproto;
namespace gazebo {
namespace msgs {
class Distortion;
class DistortionDefaultTypeInternal;
GZ_MSGS_VISIBLE extern DistortionDefaultTypeInternal _Distortion_default_instance_;
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> GZ_MSGS_VISIBLE ::gazebo::msgs::Distortion* Arena::CreateMaybeMessage<::gazebo::msgs::Distortion>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace gazebo {
namespace msgs {

// ===================================================================

class GZ_MSGS_VISIBLE Distortion :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:gazebo.msgs.Distortion) */ {
 public:
  Distortion();
  virtual ~Distortion();

  Distortion(const Distortion& from);
  Distortion(Distortion&& from) noexcept
    : Distortion() {
    *this = ::std::move(from);
  }

  inline Distortion& operator=(const Distortion& from) {
    CopyFrom(from);
    return *this;
  }
  inline Distortion& operator=(Distortion&& from) noexcept {
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
  static const Distortion& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Distortion* internal_default_instance() {
    return reinterpret_cast<const Distortion*>(
               &_Distortion_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Distortion& a, Distortion& b) {
    a.Swap(&b);
  }
  inline void Swap(Distortion* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Distortion* New() const final {
    return CreateMaybeMessage<Distortion>(nullptr);
  }

  Distortion* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Distortion>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Distortion& from);
  void MergeFrom(const Distortion& from);
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
  void InternalSwap(Distortion* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "gazebo.msgs.Distortion";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_distortion_2eproto);
    return ::descriptor_table_distortion_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kCenterFieldNumber = 1,
    kK1FieldNumber = 2,
    kK2FieldNumber = 3,
    kK3FieldNumber = 4,
    kP1FieldNumber = 5,
    kP2FieldNumber = 6,
  };
  // optional .gazebo.msgs.Vector2d center = 1;
  bool has_center() const;
  private:
  bool _internal_has_center() const;
  public:
  void clear_center();
  const ::gazebo::msgs::Vector2d& center() const;
  ::gazebo::msgs::Vector2d* release_center();
  ::gazebo::msgs::Vector2d* mutable_center();
  void set_allocated_center(::gazebo::msgs::Vector2d* center);
  private:
  const ::gazebo::msgs::Vector2d& _internal_center() const;
  ::gazebo::msgs::Vector2d* _internal_mutable_center();
  public:

  // optional double k1 = 2;
  bool has_k1() const;
  private:
  bool _internal_has_k1() const;
  public:
  void clear_k1();
  double k1() const;
  void set_k1(double value);
  private:
  double _internal_k1() const;
  void _internal_set_k1(double value);
  public:

  // optional double k2 = 3;
  bool has_k2() const;
  private:
  bool _internal_has_k2() const;
  public:
  void clear_k2();
  double k2() const;
  void set_k2(double value);
  private:
  double _internal_k2() const;
  void _internal_set_k2(double value);
  public:

  // optional double k3 = 4;
  bool has_k3() const;
  private:
  bool _internal_has_k3() const;
  public:
  void clear_k3();
  double k3() const;
  void set_k3(double value);
  private:
  double _internal_k3() const;
  void _internal_set_k3(double value);
  public:

  // optional double p1 = 5;
  bool has_p1() const;
  private:
  bool _internal_has_p1() const;
  public:
  void clear_p1();
  double p1() const;
  void set_p1(double value);
  private:
  double _internal_p1() const;
  void _internal_set_p1(double value);
  public:

  // optional double p2 = 6;
  bool has_p2() const;
  private:
  bool _internal_has_p2() const;
  public:
  void clear_p2();
  double p2() const;
  void set_p2(double value);
  private:
  double _internal_p2() const;
  void _internal_set_p2(double value);
  public:

  // @@protoc_insertion_point(class_scope:gazebo.msgs.Distortion)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::gazebo::msgs::Vector2d* center_;
  double k1_;
  double k2_;
  double k3_;
  double p1_;
  double p2_;
  friend struct ::TableStruct_distortion_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Distortion

// optional .gazebo.msgs.Vector2d center = 1;
inline bool Distortion::_internal_has_center() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || center_ != nullptr);
  return value;
}
inline bool Distortion::has_center() const {
  return _internal_has_center();
}
inline const ::gazebo::msgs::Vector2d& Distortion::_internal_center() const {
  const ::gazebo::msgs::Vector2d* p = center_;
  return p != nullptr ? *p : *reinterpret_cast<const ::gazebo::msgs::Vector2d*>(
      &::gazebo::msgs::_Vector2d_default_instance_);
}
inline const ::gazebo::msgs::Vector2d& Distortion::center() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Distortion.center)
  return _internal_center();
}
inline ::gazebo::msgs::Vector2d* Distortion::release_center() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Distortion.center)
  _has_bits_[0] &= ~0x00000001u;
  ::gazebo::msgs::Vector2d* temp = center_;
  center_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::Vector2d* Distortion::_internal_mutable_center() {
  _has_bits_[0] |= 0x00000001u;
  if (center_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::Vector2d>(GetArenaNoVirtual());
    center_ = p;
  }
  return center_;
}
inline ::gazebo::msgs::Vector2d* Distortion::mutable_center() {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Distortion.center)
  return _internal_mutable_center();
}
inline void Distortion::set_allocated_center(::gazebo::msgs::Vector2d* center) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(center_);
  }
  if (center) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      center = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, center, submessage_arena);
    }
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  center_ = center;
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Distortion.center)
}

// optional double k1 = 2;
inline bool Distortion::_internal_has_k1() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool Distortion::has_k1() const {
  return _internal_has_k1();
}
inline void Distortion::clear_k1() {
  k1_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline double Distortion::_internal_k1() const {
  return k1_;
}
inline double Distortion::k1() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Distortion.k1)
  return _internal_k1();
}
inline void Distortion::_internal_set_k1(double value) {
  _has_bits_[0] |= 0x00000002u;
  k1_ = value;
}
inline void Distortion::set_k1(double value) {
  _internal_set_k1(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Distortion.k1)
}

// optional double k2 = 3;
inline bool Distortion::_internal_has_k2() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool Distortion::has_k2() const {
  return _internal_has_k2();
}
inline void Distortion::clear_k2() {
  k2_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline double Distortion::_internal_k2() const {
  return k2_;
}
inline double Distortion::k2() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Distortion.k2)
  return _internal_k2();
}
inline void Distortion::_internal_set_k2(double value) {
  _has_bits_[0] |= 0x00000004u;
  k2_ = value;
}
inline void Distortion::set_k2(double value) {
  _internal_set_k2(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Distortion.k2)
}

// optional double k3 = 4;
inline bool Distortion::_internal_has_k3() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool Distortion::has_k3() const {
  return _internal_has_k3();
}
inline void Distortion::clear_k3() {
  k3_ = 0;
  _has_bits_[0] &= ~0x00000008u;
}
inline double Distortion::_internal_k3() const {
  return k3_;
}
inline double Distortion::k3() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Distortion.k3)
  return _internal_k3();
}
inline void Distortion::_internal_set_k3(double value) {
  _has_bits_[0] |= 0x00000008u;
  k3_ = value;
}
inline void Distortion::set_k3(double value) {
  _internal_set_k3(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Distortion.k3)
}

// optional double p1 = 5;
inline bool Distortion::_internal_has_p1() const {
  bool value = (_has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool Distortion::has_p1() const {
  return _internal_has_p1();
}
inline void Distortion::clear_p1() {
  p1_ = 0;
  _has_bits_[0] &= ~0x00000010u;
}
inline double Distortion::_internal_p1() const {
  return p1_;
}
inline double Distortion::p1() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Distortion.p1)
  return _internal_p1();
}
inline void Distortion::_internal_set_p1(double value) {
  _has_bits_[0] |= 0x00000010u;
  p1_ = value;
}
inline void Distortion::set_p1(double value) {
  _internal_set_p1(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Distortion.p1)
}

// optional double p2 = 6;
inline bool Distortion::_internal_has_p2() const {
  bool value = (_has_bits_[0] & 0x00000020u) != 0;
  return value;
}
inline bool Distortion::has_p2() const {
  return _internal_has_p2();
}
inline void Distortion::clear_p2() {
  p2_ = 0;
  _has_bits_[0] &= ~0x00000020u;
}
inline double Distortion::_internal_p2() const {
  return p2_;
}
inline double Distortion::p2() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Distortion.p2)
  return _internal_p2();
}
inline void Distortion::_internal_set_p2(double value) {
  _has_bits_[0] |= 0x00000020u;
  p2_ = value;
}
inline void Distortion::set_p2(double value) {
  _internal_set_p2(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Distortion.p2)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

typedef boost::shared_ptr<gazebo::msgs::Distortion> DistortionPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

typedef const boost::shared_ptr<gazebo::msgs::Distortion const> ConstDistortionPtr;
// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_distortion_2eproto
