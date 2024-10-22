// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cmd/cmd_reminder.proto

#ifndef PROTOBUF_cmd_2fcmd_5freminder_2eproto__INCLUDED
#define PROTOBUF_cmd_2fcmd_5freminder_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3004000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "define.pb.h"
// @@protoc_insertion_point(includes)
namespace proto {
class NormalUidOpNotify;
class NormalUidOpNotifyDefaultTypeInternal;
extern NormalUidOpNotifyDefaultTypeInternal _NormalUidOpNotify_default_instance_;
class ServerMessageNotify;
class ServerMessageNotifyDefaultTypeInternal;
extern ServerMessageNotifyDefaultTypeInternal _ServerMessageNotify_default_instance_;
}  // namespace proto

namespace proto {

namespace protobuf_cmd_2fcmd_5freminder_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static void InitDefaultsImpl();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_cmd_2fcmd_5freminder_2eproto

enum NormalUidOpNotify_CmdId {
  NormalUidOpNotify_CmdId_NONE = 0,
  NormalUidOpNotify_CmdId_CMD_ID = 5726,
  NormalUidOpNotify_CmdId_ENET_CHANNEL_ID = 0,
  NormalUidOpNotify_CmdId_ENET_IS_RELIABLE = 1,
  NormalUidOpNotify_CmdId_NormalUidOpNotify_CmdId_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  NormalUidOpNotify_CmdId_NormalUidOpNotify_CmdId_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool NormalUidOpNotify_CmdId_IsValid(int value);
const NormalUidOpNotify_CmdId NormalUidOpNotify_CmdId_CmdId_MIN = NormalUidOpNotify_CmdId_NONE;
const NormalUidOpNotify_CmdId NormalUidOpNotify_CmdId_CmdId_MAX = NormalUidOpNotify_CmdId_CMD_ID;
const int NormalUidOpNotify_CmdId_CmdId_ARRAYSIZE = NormalUidOpNotify_CmdId_CmdId_MAX + 1;

const ::google::protobuf::EnumDescriptor* NormalUidOpNotify_CmdId_descriptor();
inline const ::std::string& NormalUidOpNotify_CmdId_Name(NormalUidOpNotify_CmdId value) {
  return ::google::protobuf::internal::NameOfEnum(
    NormalUidOpNotify_CmdId_descriptor(), value);
}
inline bool NormalUidOpNotify_CmdId_Parse(
    const ::std::string& name, NormalUidOpNotify_CmdId* value) {
  return ::google::protobuf::internal::ParseNamedEnum<NormalUidOpNotify_CmdId>(
    NormalUidOpNotify_CmdId_descriptor(), name, value);
}
enum ServerMessageNotify_CmdId {
  ServerMessageNotify_CmdId_NONE = 0,
  ServerMessageNotify_CmdId_CMD_ID = 5718,
  ServerMessageNotify_CmdId_ENET_CHANNEL_ID = 0,
  ServerMessageNotify_CmdId_ENET_IS_RELIABLE = 1,
  ServerMessageNotify_CmdId_ServerMessageNotify_CmdId_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  ServerMessageNotify_CmdId_ServerMessageNotify_CmdId_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool ServerMessageNotify_CmdId_IsValid(int value);
const ServerMessageNotify_CmdId ServerMessageNotify_CmdId_CmdId_MIN = ServerMessageNotify_CmdId_NONE;
const ServerMessageNotify_CmdId ServerMessageNotify_CmdId_CmdId_MAX = ServerMessageNotify_CmdId_CMD_ID;
const int ServerMessageNotify_CmdId_CmdId_ARRAYSIZE = ServerMessageNotify_CmdId_CmdId_MAX + 1;

const ::google::protobuf::EnumDescriptor* ServerMessageNotify_CmdId_descriptor();
inline const ::std::string& ServerMessageNotify_CmdId_Name(ServerMessageNotify_CmdId value) {
  return ::google::protobuf::internal::NameOfEnum(
    ServerMessageNotify_CmdId_descriptor(), value);
}
inline bool ServerMessageNotify_CmdId_Parse(
    const ::std::string& name, ServerMessageNotify_CmdId* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ServerMessageNotify_CmdId>(
    ServerMessageNotify_CmdId_descriptor(), name, value);
}
// ===================================================================

class NormalUidOpNotify : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:proto.NormalUidOpNotify) */ {
 public:
  NormalUidOpNotify();
  virtual ~NormalUidOpNotify();

  NormalUidOpNotify(const NormalUidOpNotify& from);

  inline NormalUidOpNotify& operator=(const NormalUidOpNotify& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  NormalUidOpNotify(NormalUidOpNotify&& from) noexcept
    : NormalUidOpNotify() {
    *this = ::std::move(from);
  }

  inline NormalUidOpNotify& operator=(NormalUidOpNotify&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const NormalUidOpNotify& default_instance();

  static inline const NormalUidOpNotify* internal_default_instance() {
    return reinterpret_cast<const NormalUidOpNotify*>(
               &_NormalUidOpNotify_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(NormalUidOpNotify* other);
  friend void swap(NormalUidOpNotify& a, NormalUidOpNotify& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline NormalUidOpNotify* New() const PROTOBUF_FINAL { return New(NULL); }

  NormalUidOpNotify* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const NormalUidOpNotify& from);
  void MergeFrom(const NormalUidOpNotify& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(NormalUidOpNotify* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  typedef NormalUidOpNotify_CmdId CmdId;
  static const CmdId NONE =
    NormalUidOpNotify_CmdId_NONE;
  static const CmdId CMD_ID =
    NormalUidOpNotify_CmdId_CMD_ID;
  static const CmdId ENET_CHANNEL_ID =
    NormalUidOpNotify_CmdId_ENET_CHANNEL_ID;
  static const CmdId ENET_IS_RELIABLE =
    NormalUidOpNotify_CmdId_ENET_IS_RELIABLE;
  static inline bool CmdId_IsValid(int value) {
    return NormalUidOpNotify_CmdId_IsValid(value);
  }
  static const CmdId CmdId_MIN =
    NormalUidOpNotify_CmdId_CmdId_MIN;
  static const CmdId CmdId_MAX =
    NormalUidOpNotify_CmdId_CmdId_MAX;
  static const int CmdId_ARRAYSIZE =
    NormalUidOpNotify_CmdId_CmdId_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  CmdId_descriptor() {
    return NormalUidOpNotify_CmdId_descriptor();
  }
  static inline const ::std::string& CmdId_Name(CmdId value) {
    return NormalUidOpNotify_CmdId_Name(value);
  }
  static inline bool CmdId_Parse(const ::std::string& name,
      CmdId* value) {
    return NormalUidOpNotify_CmdId_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // repeated uint32 param_list = 4;
  int param_list_size() const;
  void clear_param_list();
  static const int kParamListFieldNumber = 4;
  ::google::protobuf::uint32 param_list(int index) const;
  void set_param_list(int index, ::google::protobuf::uint32 value);
  void add_param_list(::google::protobuf::uint32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
      param_list() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
      mutable_param_list();

  // repeated uint32 param_uid_list = 5;
  int param_uid_list_size() const;
  void clear_param_uid_list();
  static const int kParamUidListFieldNumber = 5;
  ::google::protobuf::uint32 param_uid_list(int index) const;
  void set_param_uid_list(int index, ::google::protobuf::uint32 value);
  void add_param_uid_list(::google::protobuf::uint32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
      param_uid_list() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
      mutable_param_uid_list();

  // uint32 duration = 6;
  void clear_duration();
  static const int kDurationFieldNumber = 6;
  ::google::protobuf::uint32 duration() const;
  void set_duration(::google::protobuf::uint32 value);

  // uint32 param_index = 8;
  void clear_param_index();
  static const int kParamIndexFieldNumber = 8;
  ::google::protobuf::uint32 param_index() const;
  void set_param_index(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:proto.NormalUidOpNotify)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint32 > param_list_;
  mutable int _param_list_cached_byte_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint32 > param_uid_list_;
  mutable int _param_uid_list_cached_byte_size_;
  ::google::protobuf::uint32 duration_;
  ::google::protobuf::uint32 param_index_;
  mutable int _cached_size_;
  friend struct protobuf_cmd_2fcmd_5freminder_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class ServerMessageNotify : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:proto.ServerMessageNotify) */ {
 public:
  ServerMessageNotify();
  virtual ~ServerMessageNotify();

  ServerMessageNotify(const ServerMessageNotify& from);

  inline ServerMessageNotify& operator=(const ServerMessageNotify& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ServerMessageNotify(ServerMessageNotify&& from) noexcept
    : ServerMessageNotify() {
    *this = ::std::move(from);
  }

  inline ServerMessageNotify& operator=(ServerMessageNotify&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const ServerMessageNotify& default_instance();

  static inline const ServerMessageNotify* internal_default_instance() {
    return reinterpret_cast<const ServerMessageNotify*>(
               &_ServerMessageNotify_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(ServerMessageNotify* other);
  friend void swap(ServerMessageNotify& a, ServerMessageNotify& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ServerMessageNotify* New() const PROTOBUF_FINAL { return New(NULL); }

  ServerMessageNotify* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ServerMessageNotify& from);
  void MergeFrom(const ServerMessageNotify& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(ServerMessageNotify* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  typedef ServerMessageNotify_CmdId CmdId;
  static const CmdId NONE =
    ServerMessageNotify_CmdId_NONE;
  static const CmdId CMD_ID =
    ServerMessageNotify_CmdId_CMD_ID;
  static const CmdId ENET_CHANNEL_ID =
    ServerMessageNotify_CmdId_ENET_CHANNEL_ID;
  static const CmdId ENET_IS_RELIABLE =
    ServerMessageNotify_CmdId_ENET_IS_RELIABLE;
  static inline bool CmdId_IsValid(int value) {
    return ServerMessageNotify_CmdId_IsValid(value);
  }
  static const CmdId CmdId_MIN =
    ServerMessageNotify_CmdId_CmdId_MIN;
  static const CmdId CmdId_MAX =
    ServerMessageNotify_CmdId_CmdId_MAX;
  static const int CmdId_ARRAYSIZE =
    ServerMessageNotify_CmdId_CmdId_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  CmdId_descriptor() {
    return ServerMessageNotify_CmdId_descriptor();
  }
  static inline const ::std::string& CmdId_Name(CmdId value) {
    return ServerMessageNotify_CmdId_Name(value);
  }
  static inline bool CmdId_Parse(const ::std::string& name,
      CmdId* value) {
    return ServerMessageNotify_CmdId_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // uint32 index = 1;
  void clear_index();
  static const int kIndexFieldNumber = 1;
  ::google::protobuf::uint32 index() const;
  void set_index(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:proto.ServerMessageNotify)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 index_;
  mutable int _cached_size_;
  friend struct protobuf_cmd_2fcmd_5freminder_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================


// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace proto

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::proto::NormalUidOpNotify_CmdId> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::proto::NormalUidOpNotify_CmdId>() {
  return ::proto::NormalUidOpNotify_CmdId_descriptor();
}
template <> struct is_proto_enum< ::proto::ServerMessageNotify_CmdId> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::proto::ServerMessageNotify_CmdId>() {
  return ::proto::ServerMessageNotify_CmdId_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_cmd_2fcmd_5freminder_2eproto__INCLUDED
