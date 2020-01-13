// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: log_playback_stats.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_log_5fplayback_5fstats_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_log_5fplayback_5fstats_2eproto

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
#include "time.pb.h"
#pragma GCC system_header
#include <boost/shared_ptr.hpp>
#include <gazebo/util/system.hh>
#include "gazebo/msgs/MsgFactory.hh"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_log_5fplayback_5fstats_2eproto GZ_MSGS_VISIBLE
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct GZ_MSGS_VISIBLE TableStruct_log_5fplayback_5fstats_2eproto {
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
extern GZ_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_log_5fplayback_5fstats_2eproto;
namespace gazebo {
namespace msgs {
class LogPlaybackStatistics;
class LogPlaybackStatisticsDefaultTypeInternal;
GZ_MSGS_VISIBLE extern LogPlaybackStatisticsDefaultTypeInternal _LogPlaybackStatistics_default_instance_;
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> GZ_MSGS_VISIBLE ::gazebo::msgs::LogPlaybackStatistics* Arena::CreateMaybeMessage<::gazebo::msgs::LogPlaybackStatistics>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace gazebo {
namespace msgs {

// ===================================================================

class GZ_MSGS_VISIBLE LogPlaybackStatistics :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:gazebo.msgs.LogPlaybackStatistics) */ {
 public:
  LogPlaybackStatistics();
  virtual ~LogPlaybackStatistics();

  LogPlaybackStatistics(const LogPlaybackStatistics& from);
  LogPlaybackStatistics(LogPlaybackStatistics&& from) noexcept
    : LogPlaybackStatistics() {
    *this = ::std::move(from);
  }

  inline LogPlaybackStatistics& operator=(const LogPlaybackStatistics& from) {
    CopyFrom(from);
    return *this;
  }
  inline LogPlaybackStatistics& operator=(LogPlaybackStatistics&& from) noexcept {
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
  static const LogPlaybackStatistics& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const LogPlaybackStatistics* internal_default_instance() {
    return reinterpret_cast<const LogPlaybackStatistics*>(
               &_LogPlaybackStatistics_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(LogPlaybackStatistics& a, LogPlaybackStatistics& b) {
    a.Swap(&b);
  }
  inline void Swap(LogPlaybackStatistics* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline LogPlaybackStatistics* New() const final {
    return CreateMaybeMessage<LogPlaybackStatistics>(nullptr);
  }

  LogPlaybackStatistics* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<LogPlaybackStatistics>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const LogPlaybackStatistics& from);
  void MergeFrom(const LogPlaybackStatistics& from);
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
  void InternalSwap(LogPlaybackStatistics* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "gazebo.msgs.LogPlaybackStatistics";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_log_5fplayback_5fstats_2eproto);
    return ::descriptor_table_log_5fplayback_5fstats_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kStartTimeFieldNumber = 1,
    kEndTimeFieldNumber = 2,
  };
  // required .gazebo.msgs.Time start_time = 1;
  bool has_start_time() const;
  private:
  bool _internal_has_start_time() const;
  public:
  void clear_start_time();
  const ::gazebo::msgs::Time& start_time() const;
  ::gazebo::msgs::Time* release_start_time();
  ::gazebo::msgs::Time* mutable_start_time();
  void set_allocated_start_time(::gazebo::msgs::Time* start_time);
  private:
  const ::gazebo::msgs::Time& _internal_start_time() const;
  ::gazebo::msgs::Time* _internal_mutable_start_time();
  public:

  // required .gazebo.msgs.Time end_time = 2;
  bool has_end_time() const;
  private:
  bool _internal_has_end_time() const;
  public:
  void clear_end_time();
  const ::gazebo::msgs::Time& end_time() const;
  ::gazebo::msgs::Time* release_end_time();
  ::gazebo::msgs::Time* mutable_end_time();
  void set_allocated_end_time(::gazebo::msgs::Time* end_time);
  private:
  const ::gazebo::msgs::Time& _internal_end_time() const;
  ::gazebo::msgs::Time* _internal_mutable_end_time();
  public:

  // @@protoc_insertion_point(class_scope:gazebo.msgs.LogPlaybackStatistics)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::gazebo::msgs::Time* start_time_;
  ::gazebo::msgs::Time* end_time_;
  friend struct ::TableStruct_log_5fplayback_5fstats_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// LogPlaybackStatistics

// required .gazebo.msgs.Time start_time = 1;
inline bool LogPlaybackStatistics::_internal_has_start_time() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || start_time_ != nullptr);
  return value;
}
inline bool LogPlaybackStatistics::has_start_time() const {
  return _internal_has_start_time();
}
inline const ::gazebo::msgs::Time& LogPlaybackStatistics::_internal_start_time() const {
  const ::gazebo::msgs::Time* p = start_time_;
  return p != nullptr ? *p : *reinterpret_cast<const ::gazebo::msgs::Time*>(
      &::gazebo::msgs::_Time_default_instance_);
}
inline const ::gazebo::msgs::Time& LogPlaybackStatistics::start_time() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.LogPlaybackStatistics.start_time)
  return _internal_start_time();
}
inline ::gazebo::msgs::Time* LogPlaybackStatistics::release_start_time() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.LogPlaybackStatistics.start_time)
  _has_bits_[0] &= ~0x00000001u;
  ::gazebo::msgs::Time* temp = start_time_;
  start_time_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::Time* LogPlaybackStatistics::_internal_mutable_start_time() {
  _has_bits_[0] |= 0x00000001u;
  if (start_time_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::Time>(GetArenaNoVirtual());
    start_time_ = p;
  }
  return start_time_;
}
inline ::gazebo::msgs::Time* LogPlaybackStatistics::mutable_start_time() {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.LogPlaybackStatistics.start_time)
  return _internal_mutable_start_time();
}
inline void LogPlaybackStatistics::set_allocated_start_time(::gazebo::msgs::Time* start_time) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(start_time_);
  }
  if (start_time) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      start_time = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, start_time, submessage_arena);
    }
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  start_time_ = start_time;
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.LogPlaybackStatistics.start_time)
}

// required .gazebo.msgs.Time end_time = 2;
inline bool LogPlaybackStatistics::_internal_has_end_time() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  PROTOBUF_ASSUME(!value || end_time_ != nullptr);
  return value;
}
inline bool LogPlaybackStatistics::has_end_time() const {
  return _internal_has_end_time();
}
inline const ::gazebo::msgs::Time& LogPlaybackStatistics::_internal_end_time() const {
  const ::gazebo::msgs::Time* p = end_time_;
  return p != nullptr ? *p : *reinterpret_cast<const ::gazebo::msgs::Time*>(
      &::gazebo::msgs::_Time_default_instance_);
}
inline const ::gazebo::msgs::Time& LogPlaybackStatistics::end_time() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.LogPlaybackStatistics.end_time)
  return _internal_end_time();
}
inline ::gazebo::msgs::Time* LogPlaybackStatistics::release_end_time() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.LogPlaybackStatistics.end_time)
  _has_bits_[0] &= ~0x00000002u;
  ::gazebo::msgs::Time* temp = end_time_;
  end_time_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::Time* LogPlaybackStatistics::_internal_mutable_end_time() {
  _has_bits_[0] |= 0x00000002u;
  if (end_time_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::Time>(GetArenaNoVirtual());
    end_time_ = p;
  }
  return end_time_;
}
inline ::gazebo::msgs::Time* LogPlaybackStatistics::mutable_end_time() {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.LogPlaybackStatistics.end_time)
  return _internal_mutable_end_time();
}
inline void LogPlaybackStatistics::set_allocated_end_time(::gazebo::msgs::Time* end_time) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(end_time_);
  }
  if (end_time) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      end_time = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, end_time, submessage_arena);
    }
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  end_time_ = end_time;
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.LogPlaybackStatistics.end_time)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

typedef boost::shared_ptr<gazebo::msgs::LogPlaybackStatistics> LogPlaybackStatisticsPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

typedef const boost::shared_ptr<gazebo::msgs::LogPlaybackStatistics const> ConstLogPlaybackStatisticsPtr;
// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_log_5fplayback_5fstats_2eproto
