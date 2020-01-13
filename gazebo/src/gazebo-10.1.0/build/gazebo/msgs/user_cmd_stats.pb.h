// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: user_cmd_stats.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_user_5fcmd_5fstats_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_user_5fcmd_5fstats_2eproto

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
#include "user_cmd.pb.h"
#pragma GCC system_header
#include <boost/shared_ptr.hpp>
#include <gazebo/util/system.hh>
#include "gazebo/msgs/MsgFactory.hh"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_user_5fcmd_5fstats_2eproto GZ_MSGS_VISIBLE
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct GZ_MSGS_VISIBLE TableStruct_user_5fcmd_5fstats_2eproto {
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
extern GZ_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_user_5fcmd_5fstats_2eproto;
namespace gazebo {
namespace msgs {
class UserCmdStats;
class UserCmdStatsDefaultTypeInternal;
GZ_MSGS_VISIBLE extern UserCmdStatsDefaultTypeInternal _UserCmdStats_default_instance_;
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> GZ_MSGS_VISIBLE ::gazebo::msgs::UserCmdStats* Arena::CreateMaybeMessage<::gazebo::msgs::UserCmdStats>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace gazebo {
namespace msgs {

// ===================================================================

class GZ_MSGS_VISIBLE UserCmdStats :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:gazebo.msgs.UserCmdStats) */ {
 public:
  UserCmdStats();
  virtual ~UserCmdStats();

  UserCmdStats(const UserCmdStats& from);
  UserCmdStats(UserCmdStats&& from) noexcept
    : UserCmdStats() {
    *this = ::std::move(from);
  }

  inline UserCmdStats& operator=(const UserCmdStats& from) {
    CopyFrom(from);
    return *this;
  }
  inline UserCmdStats& operator=(UserCmdStats&& from) noexcept {
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
  static const UserCmdStats& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const UserCmdStats* internal_default_instance() {
    return reinterpret_cast<const UserCmdStats*>(
               &_UserCmdStats_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(UserCmdStats& a, UserCmdStats& b) {
    a.Swap(&b);
  }
  inline void Swap(UserCmdStats* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline UserCmdStats* New() const final {
    return CreateMaybeMessage<UserCmdStats>(nullptr);
  }

  UserCmdStats* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<UserCmdStats>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const UserCmdStats& from);
  void MergeFrom(const UserCmdStats& from);
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
  void InternalSwap(UserCmdStats* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "gazebo.msgs.UserCmdStats";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_user_5fcmd_5fstats_2eproto);
    return ::descriptor_table_user_5fcmd_5fstats_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kUndoCmdFieldNumber = 3,
    kRedoCmdFieldNumber = 4,
    kUndoCmdCountFieldNumber = 1,
    kRedoCmdCountFieldNumber = 2,
  };
  // repeated .gazebo.msgs.UserCmd undo_cmd = 3;
  int undo_cmd_size() const;
  private:
  int _internal_undo_cmd_size() const;
  public:
  void clear_undo_cmd();
  ::gazebo::msgs::UserCmd* mutable_undo_cmd(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::UserCmd >*
      mutable_undo_cmd();
  private:
  const ::gazebo::msgs::UserCmd& _internal_undo_cmd(int index) const;
  ::gazebo::msgs::UserCmd* _internal_add_undo_cmd();
  public:
  const ::gazebo::msgs::UserCmd& undo_cmd(int index) const;
  ::gazebo::msgs::UserCmd* add_undo_cmd();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::UserCmd >&
      undo_cmd() const;

  // repeated .gazebo.msgs.UserCmd redo_cmd = 4;
  int redo_cmd_size() const;
  private:
  int _internal_redo_cmd_size() const;
  public:
  void clear_redo_cmd();
  ::gazebo::msgs::UserCmd* mutable_redo_cmd(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::UserCmd >*
      mutable_redo_cmd();
  private:
  const ::gazebo::msgs::UserCmd& _internal_redo_cmd(int index) const;
  ::gazebo::msgs::UserCmd* _internal_add_redo_cmd();
  public:
  const ::gazebo::msgs::UserCmd& redo_cmd(int index) const;
  ::gazebo::msgs::UserCmd* add_redo_cmd();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::UserCmd >&
      redo_cmd() const;

  // required uint32 undo_cmd_count = 1;
  bool has_undo_cmd_count() const;
  private:
  bool _internal_has_undo_cmd_count() const;
  public:
  void clear_undo_cmd_count();
  ::PROTOBUF_NAMESPACE_ID::uint32 undo_cmd_count() const;
  void set_undo_cmd_count(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_undo_cmd_count() const;
  void _internal_set_undo_cmd_count(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // required uint32 redo_cmd_count = 2;
  bool has_redo_cmd_count() const;
  private:
  bool _internal_has_redo_cmd_count() const;
  public:
  void clear_redo_cmd_count();
  ::PROTOBUF_NAMESPACE_ID::uint32 redo_cmd_count() const;
  void set_redo_cmd_count(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_redo_cmd_count() const;
  void _internal_set_redo_cmd_count(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // @@protoc_insertion_point(class_scope:gazebo.msgs.UserCmdStats)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::UserCmd > undo_cmd_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::UserCmd > redo_cmd_;
  ::PROTOBUF_NAMESPACE_ID::uint32 undo_cmd_count_;
  ::PROTOBUF_NAMESPACE_ID::uint32 redo_cmd_count_;
  friend struct ::TableStruct_user_5fcmd_5fstats_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// UserCmdStats

// required uint32 undo_cmd_count = 1;
inline bool UserCmdStats::_internal_has_undo_cmd_count() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool UserCmdStats::has_undo_cmd_count() const {
  return _internal_has_undo_cmd_count();
}
inline void UserCmdStats::clear_undo_cmd_count() {
  undo_cmd_count_ = 0u;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 UserCmdStats::_internal_undo_cmd_count() const {
  return undo_cmd_count_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 UserCmdStats::undo_cmd_count() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.UserCmdStats.undo_cmd_count)
  return _internal_undo_cmd_count();
}
inline void UserCmdStats::_internal_set_undo_cmd_count(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000001u;
  undo_cmd_count_ = value;
}
inline void UserCmdStats::set_undo_cmd_count(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_undo_cmd_count(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.UserCmdStats.undo_cmd_count)
}

// required uint32 redo_cmd_count = 2;
inline bool UserCmdStats::_internal_has_redo_cmd_count() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool UserCmdStats::has_redo_cmd_count() const {
  return _internal_has_redo_cmd_count();
}
inline void UserCmdStats::clear_redo_cmd_count() {
  redo_cmd_count_ = 0u;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 UserCmdStats::_internal_redo_cmd_count() const {
  return redo_cmd_count_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 UserCmdStats::redo_cmd_count() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.UserCmdStats.redo_cmd_count)
  return _internal_redo_cmd_count();
}
inline void UserCmdStats::_internal_set_redo_cmd_count(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000002u;
  redo_cmd_count_ = value;
}
inline void UserCmdStats::set_redo_cmd_count(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_redo_cmd_count(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.UserCmdStats.redo_cmd_count)
}

// repeated .gazebo.msgs.UserCmd undo_cmd = 3;
inline int UserCmdStats::_internal_undo_cmd_size() const {
  return undo_cmd_.size();
}
inline int UserCmdStats::undo_cmd_size() const {
  return _internal_undo_cmd_size();
}
inline ::gazebo::msgs::UserCmd* UserCmdStats::mutable_undo_cmd(int index) {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.UserCmdStats.undo_cmd)
  return undo_cmd_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::UserCmd >*
UserCmdStats::mutable_undo_cmd() {
  // @@protoc_insertion_point(field_mutable_list:gazebo.msgs.UserCmdStats.undo_cmd)
  return &undo_cmd_;
}
inline const ::gazebo::msgs::UserCmd& UserCmdStats::_internal_undo_cmd(int index) const {
  return undo_cmd_.Get(index);
}
inline const ::gazebo::msgs::UserCmd& UserCmdStats::undo_cmd(int index) const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.UserCmdStats.undo_cmd)
  return _internal_undo_cmd(index);
}
inline ::gazebo::msgs::UserCmd* UserCmdStats::_internal_add_undo_cmd() {
  return undo_cmd_.Add();
}
inline ::gazebo::msgs::UserCmd* UserCmdStats::add_undo_cmd() {
  // @@protoc_insertion_point(field_add:gazebo.msgs.UserCmdStats.undo_cmd)
  return _internal_add_undo_cmd();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::UserCmd >&
UserCmdStats::undo_cmd() const {
  // @@protoc_insertion_point(field_list:gazebo.msgs.UserCmdStats.undo_cmd)
  return undo_cmd_;
}

// repeated .gazebo.msgs.UserCmd redo_cmd = 4;
inline int UserCmdStats::_internal_redo_cmd_size() const {
  return redo_cmd_.size();
}
inline int UserCmdStats::redo_cmd_size() const {
  return _internal_redo_cmd_size();
}
inline ::gazebo::msgs::UserCmd* UserCmdStats::mutable_redo_cmd(int index) {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.UserCmdStats.redo_cmd)
  return redo_cmd_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::UserCmd >*
UserCmdStats::mutable_redo_cmd() {
  // @@protoc_insertion_point(field_mutable_list:gazebo.msgs.UserCmdStats.redo_cmd)
  return &redo_cmd_;
}
inline const ::gazebo::msgs::UserCmd& UserCmdStats::_internal_redo_cmd(int index) const {
  return redo_cmd_.Get(index);
}
inline const ::gazebo::msgs::UserCmd& UserCmdStats::redo_cmd(int index) const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.UserCmdStats.redo_cmd)
  return _internal_redo_cmd(index);
}
inline ::gazebo::msgs::UserCmd* UserCmdStats::_internal_add_redo_cmd() {
  return redo_cmd_.Add();
}
inline ::gazebo::msgs::UserCmd* UserCmdStats::add_redo_cmd() {
  // @@protoc_insertion_point(field_add:gazebo.msgs.UserCmdStats.redo_cmd)
  return _internal_add_redo_cmd();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::UserCmd >&
UserCmdStats::redo_cmd() const {
  // @@protoc_insertion_point(field_list:gazebo.msgs.UserCmdStats.redo_cmd)
  return redo_cmd_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

typedef boost::shared_ptr<gazebo::msgs::UserCmdStats> UserCmdStatsPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

typedef const boost::shared_ptr<gazebo::msgs::UserCmdStats const> ConstUserCmdStatsPtr;
// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_user_5fcmd_5fstats_2eproto
