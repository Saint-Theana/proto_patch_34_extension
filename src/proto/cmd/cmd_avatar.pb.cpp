#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "cmd/cmd_avatar.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
namespace proto {

bool AvatarAddNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AvatarAddNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .proto.AvatarInfo avatar = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(66u /* 66 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_avatar()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_in_team = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(112u /* 112 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_in_team_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.AvatarAddNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AvatarAddNotify)
  return false;
#undef DO_
}

void AvatarAddNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AvatarAddNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.AvatarInfo avatar = 8;
  if (this->has_avatar()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      8, *this->avatar_, output);
  }

  // bool is_in_team = 14;
  if (this->is_in_team() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(14, this->is_in_team(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AvatarAddNotify)
}

::google::protobuf::uint8* AvatarAddNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AvatarAddNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.AvatarInfo avatar = 8;
  if (this->has_avatar()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        8, *this->avatar_, deterministic, target);
  }

  // bool is_in_team = 14;
  if (this->is_in_team() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(14, this->is_in_team(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AvatarAddNotify)
  return target;
}

size_t AvatarAddNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AvatarAddNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .proto.AvatarInfo avatar = 8;
  if (this->has_avatar()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->avatar_);
  }

  // bool is_in_team = 14;
  if (this->is_in_team() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AvatarDelNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AvatarDelNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated uint64 avatar_guid_list = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, this->mutable_avatar_guid_list())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 1, 10u, input, this->mutable_avatar_guid_list())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.AvatarDelNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AvatarDelNotify)
  return false;
#undef DO_
}

void AvatarDelNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AvatarDelNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated uint64 avatar_guid_list = 1;
  if (this->avatar_guid_list_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(1, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _avatar_guid_list_cached_byte_size_));
  }
  for (int i = 0, n = this->avatar_guid_list_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64NoTag(
      this->avatar_guid_list(i), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AvatarDelNotify)
}

::google::protobuf::uint8* AvatarDelNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AvatarDelNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated uint64 avatar_guid_list = 1;
  if (this->avatar_guid_list_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      1,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::uint32>(
            _avatar_guid_list_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt64NoTagToArray(this->avatar_guid_list_, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AvatarDelNotify)
  return target;
}

size_t AvatarDelNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AvatarDelNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated uint64 avatar_guid_list = 1;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      UInt64Size(this->avatar_guid_list_);
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _avatar_guid_list_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AvatarTeam::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AvatarTeam)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated uint64 avatar_guid_list = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, this->mutable_avatar_guid_list())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 1, 42u, input, this->mutable_avatar_guid_list())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string team_name = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(90u /* 90 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_team_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->team_name().data(), static_cast<int>(this->team_name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.AvatarTeam.team_name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.AvatarTeam)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AvatarTeam)
  return false;
#undef DO_
}

void AvatarTeam::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AvatarTeam)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated uint64 avatar_guid_list = 5;
  if (this->avatar_guid_list_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(5, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _avatar_guid_list_cached_byte_size_));
  }
  for (int i = 0, n = this->avatar_guid_list_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64NoTag(
      this->avatar_guid_list(i), output);
  }

  // string team_name = 11;
  if (this->team_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->team_name().data(), static_cast<int>(this->team_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.AvatarTeam.team_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      11, this->team_name(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AvatarTeam)
}

::google::protobuf::uint8* AvatarTeam::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AvatarTeam)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated uint64 avatar_guid_list = 5;
  if (this->avatar_guid_list_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      5,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::uint32>(
            _avatar_guid_list_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt64NoTagToArray(this->avatar_guid_list_, target);
  }

  // string team_name = 11;
  if (this->team_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->team_name().data(), static_cast<int>(this->team_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.AvatarTeam.team_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        11, this->team_name(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AvatarTeam)
  return target;
}

size_t AvatarTeam::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AvatarTeam)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated uint64 avatar_guid_list = 5;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      UInt64Size(this->avatar_guid_list_);
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _avatar_guid_list_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // string team_name = 11;
  if (this->team_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->team_name());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool SetUpAvatarTeamReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.SetUpAvatarTeamReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 team_id = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &team_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint64 cur_avatar_guid = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &cur_avatar_guid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated uint64 avatar_team_guid_list = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(122u /* 122 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, this->mutable_avatar_team_guid_list())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(120u /* 120 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 1, 122u, input, this->mutable_avatar_team_guid_list())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.SetUpAvatarTeamReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.SetUpAvatarTeamReq)
  return false;
#undef DO_
}

void SetUpAvatarTeamReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.SetUpAvatarTeamReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 team_id = 4;
  if (this->team_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->team_id(), output);
  }

  // uint64 cur_avatar_guid = 9;
  if (this->cur_avatar_guid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(9, this->cur_avatar_guid(), output);
  }

  // repeated uint64 avatar_team_guid_list = 15;
  if (this->avatar_team_guid_list_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(15, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _avatar_team_guid_list_cached_byte_size_));
  }
  for (int i = 0, n = this->avatar_team_guid_list_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64NoTag(
      this->avatar_team_guid_list(i), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.SetUpAvatarTeamReq)
}

::google::protobuf::uint8* SetUpAvatarTeamReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.SetUpAvatarTeamReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 team_id = 4;
  if (this->team_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->team_id(), target);
  }

  // uint64 cur_avatar_guid = 9;
  if (this->cur_avatar_guid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(9, this->cur_avatar_guid(), target);
  }

  // repeated uint64 avatar_team_guid_list = 15;
  if (this->avatar_team_guid_list_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      15,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::uint32>(
            _avatar_team_guid_list_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt64NoTagToArray(this->avatar_team_guid_list_, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.SetUpAvatarTeamReq)
  return target;
}

size_t SetUpAvatarTeamReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.SetUpAvatarTeamReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated uint64 avatar_team_guid_list = 15;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      UInt64Size(this->avatar_team_guid_list_);
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _avatar_team_guid_list_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // uint32 team_id = 4;
  if (this->team_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->team_id());
  }

  // uint64 cur_avatar_guid = 9;
  if (this->cur_avatar_guid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->cur_avatar_guid());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool SetUpAvatarTeamRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.SetUpAvatarTeamRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint64 cur_avatar_guid = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &cur_avatar_guid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 retcode = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &retcode_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 team_id = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &team_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated uint64 avatar_team_guid_list = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, this->mutable_avatar_team_guid_list())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 1, 50u, input, this->mutable_avatar_team_guid_list())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.SetUpAvatarTeamRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.SetUpAvatarTeamRsp)
  return false;
#undef DO_
}

void SetUpAvatarTeamRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.SetUpAvatarTeamRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 cur_avatar_guid = 2;
  if (this->cur_avatar_guid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(2, this->cur_avatar_guid(), output);
  }

  // int32 retcode = 3;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->retcode(), output);
  }

  // uint32 team_id = 5;
  if (this->team_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->team_id(), output);
  }

  // repeated uint64 avatar_team_guid_list = 6;
  if (this->avatar_team_guid_list_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(6, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _avatar_team_guid_list_cached_byte_size_));
  }
  for (int i = 0, n = this->avatar_team_guid_list_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64NoTag(
      this->avatar_team_guid_list(i), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.SetUpAvatarTeamRsp)
}

::google::protobuf::uint8* SetUpAvatarTeamRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.SetUpAvatarTeamRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 cur_avatar_guid = 2;
  if (this->cur_avatar_guid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(2, this->cur_avatar_guid(), target);
  }

  // int32 retcode = 3;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->retcode(), target);
  }

  // uint32 team_id = 5;
  if (this->team_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->team_id(), target);
  }

  // repeated uint64 avatar_team_guid_list = 6;
  if (this->avatar_team_guid_list_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      6,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::uint32>(
            _avatar_team_guid_list_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt64NoTagToArray(this->avatar_team_guid_list_, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.SetUpAvatarTeamRsp)
  return target;
}

size_t SetUpAvatarTeamRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.SetUpAvatarTeamRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated uint64 avatar_team_guid_list = 6;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      UInt64Size(this->avatar_team_guid_list_);
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _avatar_team_guid_list_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // uint64 cur_avatar_guid = 2;
  if (this->cur_avatar_guid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->cur_avatar_guid());
  }

  // int32 retcode = 3;
  if (this->retcode() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->retcode());
  }

  // uint32 team_id = 5;
  if (this->team_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->team_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool ChooseCurAvatarTeamReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.ChooseCurAvatarTeamReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 team_id = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &team_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.ChooseCurAvatarTeamReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.ChooseCurAvatarTeamReq)
  return false;
#undef DO_
}

void ChooseCurAvatarTeamReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.ChooseCurAvatarTeamReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 team_id = 6;
  if (this->team_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->team_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.ChooseCurAvatarTeamReq)
}

::google::protobuf::uint8* ChooseCurAvatarTeamReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.ChooseCurAvatarTeamReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 team_id = 6;
  if (this->team_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, this->team_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.ChooseCurAvatarTeamReq)
  return target;
}

size_t ChooseCurAvatarTeamReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.ChooseCurAvatarTeamReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 team_id = 6;
  if (this->team_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->team_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool ChooseCurAvatarTeamRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.ChooseCurAvatarTeamRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 retcode = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &retcode_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 cur_team_id = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 64 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &cur_team_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.ChooseCurAvatarTeamRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.ChooseCurAvatarTeamRsp)
  return false;
#undef DO_
}

void ChooseCurAvatarTeamRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.ChooseCurAvatarTeamRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 retcode = 2;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->retcode(), output);
  }

  // uint32 cur_team_id = 8;
  if (this->cur_team_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(8, this->cur_team_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.ChooseCurAvatarTeamRsp)
}

::google::protobuf::uint8* ChooseCurAvatarTeamRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.ChooseCurAvatarTeamRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 retcode = 2;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->retcode(), target);
  }

  // uint32 cur_team_id = 8;
  if (this->cur_team_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(8, this->cur_team_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.ChooseCurAvatarTeamRsp)
  return target;
}

size_t ChooseCurAvatarTeamRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.ChooseCurAvatarTeamRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // int32 retcode = 2;
  if (this->retcode() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->retcode());
  }

  // uint32 cur_team_id = 8;
  if (this->cur_team_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->cur_team_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool ChangeAvatarReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.ChangeAvatarReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .proto.Vector move_pos = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_move_pos()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 skill_id = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &skill_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_move = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(80u /* 80 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_move_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint64 guid = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(96u /* 96 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &guid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.ChangeAvatarReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.ChangeAvatarReq)
  return false;
#undef DO_
}

void ChangeAvatarReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.ChangeAvatarReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.Vector move_pos = 3;
  if (this->has_move_pos()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, *this->move_pos_, output);
  }

  // uint32 skill_id = 5;
  if (this->skill_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->skill_id(), output);
  }

  // bool is_move = 10;
  if (this->is_move() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(10, this->is_move(), output);
  }

  // uint64 guid = 12;
  if (this->guid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(12, this->guid(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.ChangeAvatarReq)
}

::google::protobuf::uint8* ChangeAvatarReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.ChangeAvatarReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.Vector move_pos = 3;
  if (this->has_move_pos()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, *this->move_pos_, deterministic, target);
  }

  // uint32 skill_id = 5;
  if (this->skill_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->skill_id(), target);
  }

  // bool is_move = 10;
  if (this->is_move() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(10, this->is_move(), target);
  }

  // uint64 guid = 12;
  if (this->guid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(12, this->guid(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.ChangeAvatarReq)
  return target;
}

size_t ChangeAvatarReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.ChangeAvatarReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .proto.Vector move_pos = 3;
  if (this->has_move_pos()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->move_pos_);
  }

  // uint32 skill_id = 5;
  if (this->skill_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->skill_id());
  }

  // bool is_move = 10;
  if (this->is_move() != 0) {
    total_size += 1 + 1;
  }

  // uint64 guid = 12;
  if (this->guid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->guid());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool ChangeAvatarRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.ChangeAvatarRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 skill_id = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &skill_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint64 cur_guid = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(112u /* 112 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &cur_guid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 retcode = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(120u /* 120 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &retcode_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.ChangeAvatarRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.ChangeAvatarRsp)
  return false;
#undef DO_
}

void ChangeAvatarRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.ChangeAvatarRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 skill_id = 6;
  if (this->skill_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->skill_id(), output);
  }

  // uint64 cur_guid = 14;
  if (this->cur_guid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(14, this->cur_guid(), output);
  }

  // int32 retcode = 15;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(15, this->retcode(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.ChangeAvatarRsp)
}

::google::protobuf::uint8* ChangeAvatarRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.ChangeAvatarRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 skill_id = 6;
  if (this->skill_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, this->skill_id(), target);
  }

  // uint64 cur_guid = 14;
  if (this->cur_guid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(14, this->cur_guid(), target);
  }

  // int32 retcode = 15;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(15, this->retcode(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.ChangeAvatarRsp)
  return target;
}

size_t ChangeAvatarRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.ChangeAvatarRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 skill_id = 6;
  if (this->skill_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->skill_id());
  }

  // int32 retcode = 15;
  if (this->retcode() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->retcode());
  }

  // uint64 cur_guid = 14;
  if (this->cur_guid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->cur_guid());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AvatarPromoteReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AvatarPromoteReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint64 guid = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &guid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.AvatarPromoteReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AvatarPromoteReq)
  return false;
#undef DO_
}

void AvatarPromoteReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AvatarPromoteReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 guid = 1;
  if (this->guid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->guid(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AvatarPromoteReq)
}

::google::protobuf::uint8* AvatarPromoteReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AvatarPromoteReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 guid = 1;
  if (this->guid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(1, this->guid(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AvatarPromoteReq)
  return target;
}

size_t AvatarPromoteReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AvatarPromoteReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint64 guid = 1;
  if (this->guid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->guid());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AvatarPromoteRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AvatarPromoteRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 retcode = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &retcode_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint64 guid = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(104u /* 104 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &guid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.AvatarPromoteRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AvatarPromoteRsp)
  return false;
#undef DO_
}

void AvatarPromoteRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AvatarPromoteRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 retcode = 7;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(7, this->retcode(), output);
  }

  // uint64 guid = 13;
  if (this->guid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(13, this->guid(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AvatarPromoteRsp)
}

::google::protobuf::uint8* AvatarPromoteRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AvatarPromoteRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 retcode = 7;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(7, this->retcode(), target);
  }

  // uint64 guid = 13;
  if (this->guid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(13, this->guid(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AvatarPromoteRsp)
  return target;
}

size_t AvatarPromoteRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AvatarPromoteRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // int32 retcode = 7;
  if (this->retcode() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->retcode());
  }

  // uint64 guid = 13;
  if (this->guid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->guid());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool SpringUseReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.SpringUseReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint64 guid = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &guid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.SpringUseReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.SpringUseReq)
  return false;
#undef DO_
}

void SpringUseReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.SpringUseReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 guid = 1;
  if (this->guid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->guid(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.SpringUseReq)
}

::google::protobuf::uint8* SpringUseReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.SpringUseReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 guid = 1;
  if (this->guid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(1, this->guid(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.SpringUseReq)
  return target;
}

size_t SpringUseReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.SpringUseReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint64 guid = 1;
  if (this->guid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->guid());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool SpringUseRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.SpringUseRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint64 guid = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(104u /* 104 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &guid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 retcode = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(120u /* 120 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &retcode_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.SpringUseRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.SpringUseRsp)
  return false;
#undef DO_
}

void SpringUseRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.SpringUseRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 guid = 13;
  if (this->guid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(13, this->guid(), output);
  }

  // int32 retcode = 15;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(15, this->retcode(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.SpringUseRsp)
}

::google::protobuf::uint8* SpringUseRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.SpringUseRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 guid = 13;
  if (this->guid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(13, this->guid(), target);
  }

  // int32 retcode = 15;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(15, this->retcode(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.SpringUseRsp)
  return target;
}

size_t SpringUseRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.SpringUseRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // int32 retcode = 15;
  if (this->retcode() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->retcode());
  }

  // uint64 guid = 13;
  if (this->guid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->guid());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool RefreshBackgroundAvatarReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.RefreshBackgroundAvatarReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
  handle_unusual:
    if (tag == 0) {
      goto success;
    }
    DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
  }
success:
  // @@protoc_insertion_point(parse_success:proto.RefreshBackgroundAvatarReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.RefreshBackgroundAvatarReq)
  return false;
#undef DO_
}

void RefreshBackgroundAvatarReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.RefreshBackgroundAvatarReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.RefreshBackgroundAvatarReq)
}

::google::protobuf::uint8* RefreshBackgroundAvatarReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.RefreshBackgroundAvatarReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.RefreshBackgroundAvatarReq)
  return target;
}

size_t RefreshBackgroundAvatarReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.RefreshBackgroundAvatarReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool RefreshBackgroundAvatarRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.RefreshBackgroundAvatarRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // map<uint64, uint32> hp_full_time_map = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          RefreshBackgroundAvatarRsp_HpFullTimeMapEntry::Parser< ::google::protobuf::internal::MapField<
              RefreshBackgroundAvatarRsp_HpFullTimeMapEntry,
              ::google::protobuf::uint64, ::google::protobuf::uint32,
              ::google::protobuf::internal::WireFormatLite::TYPE_UINT64,
              ::google::protobuf::internal::WireFormatLite::TYPE_UINT32,
              0 >,
            ::google::protobuf::Map< ::google::protobuf::uint64, ::google::protobuf::uint32 > > parser(&hp_full_time_map_);
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
              input, &parser));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 retcode = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(104u /* 104 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &retcode_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.RefreshBackgroundAvatarRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.RefreshBackgroundAvatarRsp)
  return false;
#undef DO_
}

void RefreshBackgroundAvatarRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.RefreshBackgroundAvatarRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // map<uint64, uint32> hp_full_time_map = 4;
  if (!this->hp_full_time_map().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint64, ::google::protobuf::uint32 >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint64, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (output->IsSerializationDeterministic() &&
        this->hp_full_time_map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->hp_full_time_map().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint64, ::google::protobuf::uint32 >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint64, ::google::protobuf::uint32 >::const_iterator
          it = this->hp_full_time_map().begin();
          it != this->hp_full_time_map().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<RefreshBackgroundAvatarRsp_HpFullTimeMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(hp_full_time_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            4, *entry, output);
      }
    } else {
      ::google::protobuf::scoped_ptr<RefreshBackgroundAvatarRsp_HpFullTimeMapEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint64, ::google::protobuf::uint32 >::const_iterator
          it = this->hp_full_time_map().begin();
          it != this->hp_full_time_map().end(); ++it) {
        entry.reset(hp_full_time_map_.NewEntryWrapper(
            it->first, it->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            4, *entry, output);
      }
    }
  }

  // int32 retcode = 13;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(13, this->retcode(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.RefreshBackgroundAvatarRsp)
}

::google::protobuf::uint8* RefreshBackgroundAvatarRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.RefreshBackgroundAvatarRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // map<uint64, uint32> hp_full_time_map = 4;
  if (!this->hp_full_time_map().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint64, ::google::protobuf::uint32 >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint64, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (deterministic &&
        this->hp_full_time_map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->hp_full_time_map().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint64, ::google::protobuf::uint32 >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint64, ::google::protobuf::uint32 >::const_iterator
          it = this->hp_full_time_map().begin();
          it != this->hp_full_time_map().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<RefreshBackgroundAvatarRsp_HpFullTimeMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(hp_full_time_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       4, *entry, deterministic, target);
;
      }
    } else {
      ::google::protobuf::scoped_ptr<RefreshBackgroundAvatarRsp_HpFullTimeMapEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint64, ::google::protobuf::uint32 >::const_iterator
          it = this->hp_full_time_map().begin();
          it != this->hp_full_time_map().end(); ++it) {
        entry.reset(hp_full_time_map_.NewEntryWrapper(
            it->first, it->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       4, *entry, deterministic, target);
;
      }
    }
  }

  // int32 retcode = 13;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(13, this->retcode(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.RefreshBackgroundAvatarRsp)
  return target;
}

size_t RefreshBackgroundAvatarRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.RefreshBackgroundAvatarRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // map<uint64, uint32> hp_full_time_map = 4;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->hp_full_time_map_size());
  {
    ::google::protobuf::scoped_ptr<RefreshBackgroundAvatarRsp_HpFullTimeMapEntry> entry;
    for (::google::protobuf::Map< ::google::protobuf::uint64, ::google::protobuf::uint32 >::const_iterator
        it = this->hp_full_time_map().begin();
        it != this->hp_full_time_map().end(); ++it) {
      entry.reset(hp_full_time_map_.NewEntryWrapper(it->first, it->second));
      total_size += ::google::protobuf::internal::WireFormatLite::
          MessageSizeNoVirtual(*entry);
    }
  }

  // int32 retcode = 13;
  if (this->retcode() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->retcode());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AvatarTeamUpdateNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AvatarTeamUpdateNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // map<uint32, .proto.AvatarTeam> avatar_team_map = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          AvatarTeamUpdateNotify_AvatarTeamMapEntry::Parser< ::google::protobuf::internal::MapField<
              AvatarTeamUpdateNotify_AvatarTeamMapEntry,
              ::google::protobuf::uint32, ::proto::AvatarTeam,
              ::google::protobuf::internal::WireFormatLite::TYPE_UINT32,
              ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
              0 >,
            ::google::protobuf::Map< ::google::protobuf::uint32, ::proto::AvatarTeam > > parser(&avatar_team_map_);
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
              input, &parser));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated uint64 temp_avatar_guid_list = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(66u /* 66 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, this->mutable_temp_avatar_guid_list())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 64 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 1, 66u, input, this->mutable_temp_avatar_guid_list())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.AvatarTeamUpdateNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AvatarTeamUpdateNotify)
  return false;
#undef DO_
}

void AvatarTeamUpdateNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AvatarTeamUpdateNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // map<uint32, .proto.AvatarTeam> avatar_team_map = 6;
  if (!this->avatar_team_map().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::proto::AvatarTeam >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint32, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (output->IsSerializationDeterministic() &&
        this->avatar_team_map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->avatar_team_map().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::proto::AvatarTeam >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::proto::AvatarTeam >::const_iterator
          it = this->avatar_team_map().begin();
          it != this->avatar_team_map().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<AvatarTeamUpdateNotify_AvatarTeamMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(avatar_team_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            6, *entry, output);
      }
    } else {
      ::google::protobuf::scoped_ptr<AvatarTeamUpdateNotify_AvatarTeamMapEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::proto::AvatarTeam >::const_iterator
          it = this->avatar_team_map().begin();
          it != this->avatar_team_map().end(); ++it) {
        entry.reset(avatar_team_map_.NewEntryWrapper(
            it->first, it->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            6, *entry, output);
      }
    }
  }

  // repeated uint64 temp_avatar_guid_list = 8;
  if (this->temp_avatar_guid_list_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(8, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _temp_avatar_guid_list_cached_byte_size_));
  }
  for (int i = 0, n = this->temp_avatar_guid_list_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64NoTag(
      this->temp_avatar_guid_list(i), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AvatarTeamUpdateNotify)
}

::google::protobuf::uint8* AvatarTeamUpdateNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AvatarTeamUpdateNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // map<uint32, .proto.AvatarTeam> avatar_team_map = 6;
  if (!this->avatar_team_map().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::proto::AvatarTeam >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint32, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (deterministic &&
        this->avatar_team_map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->avatar_team_map().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::proto::AvatarTeam >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::proto::AvatarTeam >::const_iterator
          it = this->avatar_team_map().begin();
          it != this->avatar_team_map().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<AvatarTeamUpdateNotify_AvatarTeamMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(avatar_team_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       6, *entry, deterministic, target);
;
      }
    } else {
      ::google::protobuf::scoped_ptr<AvatarTeamUpdateNotify_AvatarTeamMapEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::proto::AvatarTeam >::const_iterator
          it = this->avatar_team_map().begin();
          it != this->avatar_team_map().end(); ++it) {
        entry.reset(avatar_team_map_.NewEntryWrapper(
            it->first, it->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       6, *entry, deterministic, target);
;
      }
    }
  }

  // repeated uint64 temp_avatar_guid_list = 8;
  if (this->temp_avatar_guid_list_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      8,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::uint32>(
            _temp_avatar_guid_list_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt64NoTagToArray(this->temp_avatar_guid_list_, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AvatarTeamUpdateNotify)
  return target;
}

size_t AvatarTeamUpdateNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AvatarTeamUpdateNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // map<uint32, .proto.AvatarTeam> avatar_team_map = 6;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->avatar_team_map_size());
  {
    ::google::protobuf::scoped_ptr<AvatarTeamUpdateNotify_AvatarTeamMapEntry> entry;
    for (::google::protobuf::Map< ::google::protobuf::uint32, ::proto::AvatarTeam >::const_iterator
        it = this->avatar_team_map().begin();
        it != this->avatar_team_map().end(); ++it) {
      entry.reset(avatar_team_map_.NewEntryWrapper(it->first, it->second));
      total_size += ::google::protobuf::internal::WireFormatLite::
          MessageSizeNoVirtual(*entry);
    }
  }

  // repeated uint64 temp_avatar_guid_list = 8;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      UInt64Size(this->temp_avatar_guid_list_);
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _temp_avatar_guid_list_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AvatarDataNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AvatarDataNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated uint32 owned_flycloak_list = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_owned_flycloak_list())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 1, 18u, input, this->mutable_owned_flycloak_list())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint64 choose_avatar_guid = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &choose_avatar_guid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 cur_avatar_team_id = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &cur_avatar_team_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // map<uint32, .proto.AvatarTeam> avatar_team_map = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          AvatarDataNotify_AvatarTeamMapEntry::Parser< ::google::protobuf::internal::MapField<
              AvatarDataNotify_AvatarTeamMapEntry,
              ::google::protobuf::uint32, ::proto::AvatarTeam,
              ::google::protobuf::internal::WireFormatLite::TYPE_UINT32,
              ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
              0 >,
            ::google::protobuf::Map< ::google::protobuf::uint32, ::proto::AvatarTeam > > parser(&avatar_team_map_);
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
              input, &parser));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .proto.AvatarRenameInfo avatar_rename_list = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(58u /* 58 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_avatar_rename_list()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .proto.AvatarInfo avatar_list = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(66u /* 66 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_avatar_list()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated uint32 backup_avatar_team_order_list = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(98u /* 98 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_backup_avatar_team_order_list())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(96u /* 96 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 1, 98u, input, this->mutable_backup_avatar_team_order_list())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated uint64 temp_avatar_guid_list = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(114u /* 114 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, this->mutable_temp_avatar_guid_list())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(112u /* 112 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 1, 114u, input, this->mutable_temp_avatar_guid_list())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated uint32 owned_costume_list = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(122u /* 122 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_owned_costume_list())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(120u /* 120 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 1, 122u, input, this->mutable_owned_costume_list())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.AvatarDataNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AvatarDataNotify)
  return false;
#undef DO_
}

void AvatarDataNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AvatarDataNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated uint32 owned_flycloak_list = 2;
  if (this->owned_flycloak_list_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(2, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _owned_flycloak_list_cached_byte_size_));
  }
  for (int i = 0, n = this->owned_flycloak_list_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32NoTag(
      this->owned_flycloak_list(i), output);
  }

  // uint64 choose_avatar_guid = 4;
  if (this->choose_avatar_guid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(4, this->choose_avatar_guid(), output);
  }

  // uint32 cur_avatar_team_id = 5;
  if (this->cur_avatar_team_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->cur_avatar_team_id(), output);
  }

  // map<uint32, .proto.AvatarTeam> avatar_team_map = 6;
  if (!this->avatar_team_map().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::proto::AvatarTeam >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint32, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (output->IsSerializationDeterministic() &&
        this->avatar_team_map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->avatar_team_map().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::proto::AvatarTeam >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::proto::AvatarTeam >::const_iterator
          it = this->avatar_team_map().begin();
          it != this->avatar_team_map().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<AvatarDataNotify_AvatarTeamMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(avatar_team_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            6, *entry, output);
      }
    } else {
      ::google::protobuf::scoped_ptr<AvatarDataNotify_AvatarTeamMapEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::proto::AvatarTeam >::const_iterator
          it = this->avatar_team_map().begin();
          it != this->avatar_team_map().end(); ++it) {
        entry.reset(avatar_team_map_.NewEntryWrapper(
            it->first, it->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            6, *entry, output);
      }
    }
  }

  // repeated .proto.AvatarRenameInfo avatar_rename_list = 7;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->avatar_rename_list_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      7, this->avatar_rename_list(static_cast<int>(i)), output);
  }

  // repeated .proto.AvatarInfo avatar_list = 8;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->avatar_list_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      8, this->avatar_list(static_cast<int>(i)), output);
  }

  // repeated uint32 backup_avatar_team_order_list = 12;
  if (this->backup_avatar_team_order_list_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(12, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _backup_avatar_team_order_list_cached_byte_size_));
  }
  for (int i = 0, n = this->backup_avatar_team_order_list_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32NoTag(
      this->backup_avatar_team_order_list(i), output);
  }

  // repeated uint64 temp_avatar_guid_list = 14;
  if (this->temp_avatar_guid_list_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(14, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _temp_avatar_guid_list_cached_byte_size_));
  }
  for (int i = 0, n = this->temp_avatar_guid_list_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64NoTag(
      this->temp_avatar_guid_list(i), output);
  }

  // repeated uint32 owned_costume_list = 15;
  if (this->owned_costume_list_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(15, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _owned_costume_list_cached_byte_size_));
  }
  for (int i = 0, n = this->owned_costume_list_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32NoTag(
      this->owned_costume_list(i), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AvatarDataNotify)
}

::google::protobuf::uint8* AvatarDataNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AvatarDataNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated uint32 owned_flycloak_list = 2;
  if (this->owned_flycloak_list_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      2,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::uint32>(
            _owned_flycloak_list_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt32NoTagToArray(this->owned_flycloak_list_, target);
  }

  // uint64 choose_avatar_guid = 4;
  if (this->choose_avatar_guid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(4, this->choose_avatar_guid(), target);
  }

  // uint32 cur_avatar_team_id = 5;
  if (this->cur_avatar_team_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->cur_avatar_team_id(), target);
  }

  // map<uint32, .proto.AvatarTeam> avatar_team_map = 6;
  if (!this->avatar_team_map().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::proto::AvatarTeam >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint32, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (deterministic &&
        this->avatar_team_map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->avatar_team_map().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::proto::AvatarTeam >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::proto::AvatarTeam >::const_iterator
          it = this->avatar_team_map().begin();
          it != this->avatar_team_map().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<AvatarDataNotify_AvatarTeamMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(avatar_team_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       6, *entry, deterministic, target);
;
      }
    } else {
      ::google::protobuf::scoped_ptr<AvatarDataNotify_AvatarTeamMapEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::proto::AvatarTeam >::const_iterator
          it = this->avatar_team_map().begin();
          it != this->avatar_team_map().end(); ++it) {
        entry.reset(avatar_team_map_.NewEntryWrapper(
            it->first, it->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       6, *entry, deterministic, target);
;
      }
    }
  }

  // repeated .proto.AvatarRenameInfo avatar_rename_list = 7;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->avatar_rename_list_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        7, this->avatar_rename_list(static_cast<int>(i)), deterministic, target);
  }

  // repeated .proto.AvatarInfo avatar_list = 8;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->avatar_list_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        8, this->avatar_list(static_cast<int>(i)), deterministic, target);
  }

  // repeated uint32 backup_avatar_team_order_list = 12;
  if (this->backup_avatar_team_order_list_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      12,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::uint32>(
            _backup_avatar_team_order_list_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt32NoTagToArray(this->backup_avatar_team_order_list_, target);
  }

  // repeated uint64 temp_avatar_guid_list = 14;
  if (this->temp_avatar_guid_list_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      14,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::uint32>(
            _temp_avatar_guid_list_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt64NoTagToArray(this->temp_avatar_guid_list_, target);
  }

  // repeated uint32 owned_costume_list = 15;
  if (this->owned_costume_list_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      15,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::uint32>(
            _owned_costume_list_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt32NoTagToArray(this->owned_costume_list_, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AvatarDataNotify)
  return target;
}

size_t AvatarDataNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AvatarDataNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated uint32 owned_flycloak_list = 2;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      UInt32Size(this->owned_flycloak_list_);
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _owned_flycloak_list_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // map<uint32, .proto.AvatarTeam> avatar_team_map = 6;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->avatar_team_map_size());
  {
    ::google::protobuf::scoped_ptr<AvatarDataNotify_AvatarTeamMapEntry> entry;
    for (::google::protobuf::Map< ::google::protobuf::uint32, ::proto::AvatarTeam >::const_iterator
        it = this->avatar_team_map().begin();
        it != this->avatar_team_map().end(); ++it) {
      entry.reset(avatar_team_map_.NewEntryWrapper(it->first, it->second));
      total_size += ::google::protobuf::internal::WireFormatLite::
          MessageSizeNoVirtual(*entry);
    }
  }

  // repeated .proto.AvatarRenameInfo avatar_rename_list = 7;
  {
    unsigned int count = static_cast<unsigned int>(this->avatar_rename_list_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->avatar_rename_list(static_cast<int>(i)));
    }
  }

  // repeated .proto.AvatarInfo avatar_list = 8;
  {
    unsigned int count = static_cast<unsigned int>(this->avatar_list_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->avatar_list(static_cast<int>(i)));
    }
  }

  // repeated uint32 backup_avatar_team_order_list = 12;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      UInt32Size(this->backup_avatar_team_order_list_);
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _backup_avatar_team_order_list_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // repeated uint64 temp_avatar_guid_list = 14;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      UInt64Size(this->temp_avatar_guid_list_);
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _temp_avatar_guid_list_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // repeated uint32 owned_costume_list = 15;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      UInt32Size(this->owned_costume_list_);
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _owned_costume_list_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // uint64 choose_avatar_guid = 4;
  if (this->choose_avatar_guid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->choose_avatar_guid());
  }

  // uint32 cur_avatar_team_id = 5;
  if (this->cur_avatar_team_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->cur_avatar_team_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AvatarUpgradeReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AvatarUpgradeReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 item_id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &item_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 count = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &count_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint64 avatar_guid = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(96u /* 96 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &avatar_guid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.AvatarUpgradeReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AvatarUpgradeReq)
  return false;
#undef DO_
}

void AvatarUpgradeReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AvatarUpgradeReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 item_id = 1;
  if (this->item_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->item_id(), output);
  }

  // uint32 count = 9;
  if (this->count() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(9, this->count(), output);
  }

  // uint64 avatar_guid = 12;
  if (this->avatar_guid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(12, this->avatar_guid(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AvatarUpgradeReq)
}

::google::protobuf::uint8* AvatarUpgradeReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AvatarUpgradeReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 item_id = 1;
  if (this->item_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->item_id(), target);
  }

  // uint32 count = 9;
  if (this->count() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(9, this->count(), target);
  }

  // uint64 avatar_guid = 12;
  if (this->avatar_guid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(12, this->avatar_guid(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AvatarUpgradeReq)
  return target;
}

size_t AvatarUpgradeReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AvatarUpgradeReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 item_id = 1;
  if (this->item_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->item_id());
  }

  // uint32 count = 9;
  if (this->count() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->count());
  }

  // uint64 avatar_guid = 12;
  if (this->avatar_guid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->avatar_guid());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AvatarUpgradeRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AvatarUpgradeRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 cur_level = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &cur_level_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint64 avatar_guid = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 64 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &avatar_guid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // map<uint32, float> cur_fight_prop_map = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(90u /* 90 & 0xFF */)) {
          AvatarUpgradeRsp_CurFightPropMapEntry::Parser< ::google::protobuf::internal::MapField<
              AvatarUpgradeRsp_CurFightPropMapEntry,
              ::google::protobuf::uint32, float,
              ::google::protobuf::internal::WireFormatLite::TYPE_UINT32,
              ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT,
              0 >,
            ::google::protobuf::Map< ::google::protobuf::uint32, float > > parser(&cur_fight_prop_map_);
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
              input, &parser));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 retcode = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(104u /* 104 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &retcode_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // map<uint32, float> old_fight_prop_map = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(114u /* 114 & 0xFF */)) {
          AvatarUpgradeRsp_OldFightPropMapEntry::Parser< ::google::protobuf::internal::MapField<
              AvatarUpgradeRsp_OldFightPropMapEntry,
              ::google::protobuf::uint32, float,
              ::google::protobuf::internal::WireFormatLite::TYPE_UINT32,
              ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT,
              0 >,
            ::google::protobuf::Map< ::google::protobuf::uint32, float > > parser(&old_fight_prop_map_);
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
              input, &parser));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 old_level = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(120u /* 120 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &old_level_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.AvatarUpgradeRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AvatarUpgradeRsp)
  return false;
#undef DO_
}

void AvatarUpgradeRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AvatarUpgradeRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 cur_level = 6;
  if (this->cur_level() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->cur_level(), output);
  }

  // uint64 avatar_guid = 8;
  if (this->avatar_guid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(8, this->avatar_guid(), output);
  }

  // map<uint32, float> cur_fight_prop_map = 11;
  if (!this->cur_fight_prop_map().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint32, float >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint32, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (output->IsSerializationDeterministic() &&
        this->cur_fight_prop_map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->cur_fight_prop_map().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint32, float >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint32, float >::const_iterator
          it = this->cur_fight_prop_map().begin();
          it != this->cur_fight_prop_map().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<AvatarUpgradeRsp_CurFightPropMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(cur_fight_prop_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            11, *entry, output);
      }
    } else {
      ::google::protobuf::scoped_ptr<AvatarUpgradeRsp_CurFightPropMapEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint32, float >::const_iterator
          it = this->cur_fight_prop_map().begin();
          it != this->cur_fight_prop_map().end(); ++it) {
        entry.reset(cur_fight_prop_map_.NewEntryWrapper(
            it->first, it->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            11, *entry, output);
      }
    }
  }

  // int32 retcode = 13;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(13, this->retcode(), output);
  }

  // map<uint32, float> old_fight_prop_map = 14;
  if (!this->old_fight_prop_map().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint32, float >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint32, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (output->IsSerializationDeterministic() &&
        this->old_fight_prop_map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->old_fight_prop_map().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint32, float >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint32, float >::const_iterator
          it = this->old_fight_prop_map().begin();
          it != this->old_fight_prop_map().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<AvatarUpgradeRsp_OldFightPropMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(old_fight_prop_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            14, *entry, output);
      }
    } else {
      ::google::protobuf::scoped_ptr<AvatarUpgradeRsp_OldFightPropMapEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint32, float >::const_iterator
          it = this->old_fight_prop_map().begin();
          it != this->old_fight_prop_map().end(); ++it) {
        entry.reset(old_fight_prop_map_.NewEntryWrapper(
            it->first, it->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            14, *entry, output);
      }
    }
  }

  // uint32 old_level = 15;
  if (this->old_level() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(15, this->old_level(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AvatarUpgradeRsp)
}

::google::protobuf::uint8* AvatarUpgradeRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AvatarUpgradeRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 cur_level = 6;
  if (this->cur_level() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, this->cur_level(), target);
  }

  // uint64 avatar_guid = 8;
  if (this->avatar_guid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(8, this->avatar_guid(), target);
  }

  // map<uint32, float> cur_fight_prop_map = 11;
  if (!this->cur_fight_prop_map().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint32, float >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint32, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (deterministic &&
        this->cur_fight_prop_map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->cur_fight_prop_map().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint32, float >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint32, float >::const_iterator
          it = this->cur_fight_prop_map().begin();
          it != this->cur_fight_prop_map().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<AvatarUpgradeRsp_CurFightPropMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(cur_fight_prop_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       11, *entry, deterministic, target);
;
      }
    } else {
      ::google::protobuf::scoped_ptr<AvatarUpgradeRsp_CurFightPropMapEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint32, float >::const_iterator
          it = this->cur_fight_prop_map().begin();
          it != this->cur_fight_prop_map().end(); ++it) {
        entry.reset(cur_fight_prop_map_.NewEntryWrapper(
            it->first, it->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       11, *entry, deterministic, target);
;
      }
    }
  }

  // int32 retcode = 13;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(13, this->retcode(), target);
  }

  // map<uint32, float> old_fight_prop_map = 14;
  if (!this->old_fight_prop_map().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint32, float >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint32, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (deterministic &&
        this->old_fight_prop_map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->old_fight_prop_map().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint32, float >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint32, float >::const_iterator
          it = this->old_fight_prop_map().begin();
          it != this->old_fight_prop_map().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<AvatarUpgradeRsp_OldFightPropMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(old_fight_prop_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       14, *entry, deterministic, target);
;
      }
    } else {
      ::google::protobuf::scoped_ptr<AvatarUpgradeRsp_OldFightPropMapEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint32, float >::const_iterator
          it = this->old_fight_prop_map().begin();
          it != this->old_fight_prop_map().end(); ++it) {
        entry.reset(old_fight_prop_map_.NewEntryWrapper(
            it->first, it->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       14, *entry, deterministic, target);
;
      }
    }
  }

  // uint32 old_level = 15;
  if (this->old_level() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(15, this->old_level(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AvatarUpgradeRsp)
  return target;
}

size_t AvatarUpgradeRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AvatarUpgradeRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // map<uint32, float> cur_fight_prop_map = 11;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->cur_fight_prop_map_size());
  {
    ::google::protobuf::scoped_ptr<AvatarUpgradeRsp_CurFightPropMapEntry> entry;
    for (::google::protobuf::Map< ::google::protobuf::uint32, float >::const_iterator
        it = this->cur_fight_prop_map().begin();
        it != this->cur_fight_prop_map().end(); ++it) {
      entry.reset(cur_fight_prop_map_.NewEntryWrapper(it->first, it->second));
      total_size += ::google::protobuf::internal::WireFormatLite::
          MessageSizeNoVirtual(*entry);
    }
  }

  // map<uint32, float> old_fight_prop_map = 14;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->old_fight_prop_map_size());
  {
    ::google::protobuf::scoped_ptr<AvatarUpgradeRsp_OldFightPropMapEntry> entry;
    for (::google::protobuf::Map< ::google::protobuf::uint32, float >::const_iterator
        it = this->old_fight_prop_map().begin();
        it != this->old_fight_prop_map().end(); ++it) {
      entry.reset(old_fight_prop_map_.NewEntryWrapper(it->first, it->second));
      total_size += ::google::protobuf::internal::WireFormatLite::
          MessageSizeNoVirtual(*entry);
    }
  }

  // uint32 old_level = 15;
  if (this->old_level() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->old_level());
  }

  // uint64 avatar_guid = 8;
  if (this->avatar_guid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->avatar_guid());
  }

  // uint32 cur_level = 6;
  if (this->cur_level() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->cur_level());
  }

  // int32 retcode = 13;
  if (this->retcode() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->retcode());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AvatarDieAnimationEndReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AvatarDieAnimationEndReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 skill_id = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &skill_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint64 die_guid = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &die_guid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.Vector reborn_pos = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(82u /* 82 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_reborn_pos()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.AvatarDieAnimationEndReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AvatarDieAnimationEndReq)
  return false;
#undef DO_
}

void AvatarDieAnimationEndReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AvatarDieAnimationEndReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 skill_id = 4;
  if (this->skill_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->skill_id(), output);
  }

  // uint64 die_guid = 7;
  if (this->die_guid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(7, this->die_guid(), output);
  }

  // .proto.Vector reborn_pos = 10;
  if (this->has_reborn_pos()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      10, *this->reborn_pos_, output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AvatarDieAnimationEndReq)
}

::google::protobuf::uint8* AvatarDieAnimationEndReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AvatarDieAnimationEndReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 skill_id = 4;
  if (this->skill_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->skill_id(), target);
  }

  // uint64 die_guid = 7;
  if (this->die_guid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(7, this->die_guid(), target);
  }

  // .proto.Vector reborn_pos = 10;
  if (this->has_reborn_pos()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        10, *this->reborn_pos_, deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AvatarDieAnimationEndReq)
  return target;
}

size_t AvatarDieAnimationEndReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AvatarDieAnimationEndReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .proto.Vector reborn_pos = 10;
  if (this->has_reborn_pos()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->reborn_pos_);
  }

  // uint32 skill_id = 4;
  if (this->skill_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->skill_id());
  }

  // uint64 die_guid = 7;
  if (this->die_guid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->die_guid());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AvatarDieAnimationEndRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AvatarDieAnimationEndRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint64 die_guid = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &die_guid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 retcode = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &retcode_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 skill_id = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &skill_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.AvatarDieAnimationEndRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AvatarDieAnimationEndRsp)
  return false;
#undef DO_
}

void AvatarDieAnimationEndRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AvatarDieAnimationEndRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 die_guid = 3;
  if (this->die_guid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(3, this->die_guid(), output);
  }

  // int32 retcode = 5;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->retcode(), output);
  }

  // uint32 skill_id = 6;
  if (this->skill_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->skill_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AvatarDieAnimationEndRsp)
}

::google::protobuf::uint8* AvatarDieAnimationEndRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AvatarDieAnimationEndRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 die_guid = 3;
  if (this->die_guid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(3, this->die_guid(), target);
  }

  // int32 retcode = 5;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->retcode(), target);
  }

  // uint32 skill_id = 6;
  if (this->skill_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, this->skill_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AvatarDieAnimationEndRsp)
  return target;
}

size_t AvatarDieAnimationEndRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AvatarDieAnimationEndRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint64 die_guid = 3;
  if (this->die_guid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->die_guid());
  }

  // int32 retcode = 5;
  if (this->retcode() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->retcode());
  }

  // uint32 skill_id = 6;
  if (this->skill_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->skill_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AvatarChangeElementTypeReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AvatarChangeElementTypeReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 area_id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &area_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 scene_id = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 64 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &scene_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.AvatarChangeElementTypeReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AvatarChangeElementTypeReq)
  return false;
#undef DO_
}

void AvatarChangeElementTypeReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AvatarChangeElementTypeReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 area_id = 1;
  if (this->area_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->area_id(), output);
  }

  // uint32 scene_id = 8;
  if (this->scene_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(8, this->scene_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AvatarChangeElementTypeReq)
}

::google::protobuf::uint8* AvatarChangeElementTypeReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AvatarChangeElementTypeReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 area_id = 1;
  if (this->area_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->area_id(), target);
  }

  // uint32 scene_id = 8;
  if (this->scene_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(8, this->scene_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AvatarChangeElementTypeReq)
  return target;
}

size_t AvatarChangeElementTypeReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AvatarChangeElementTypeReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 area_id = 1;
  if (this->area_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->area_id());
  }

  // uint32 scene_id = 8;
  if (this->scene_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->scene_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AvatarChangeElementTypeRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AvatarChangeElementTypeRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 retcode = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(120u /* 120 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &retcode_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.AvatarChangeElementTypeRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AvatarChangeElementTypeRsp)
  return false;
#undef DO_
}

void AvatarChangeElementTypeRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AvatarChangeElementTypeRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 retcode = 15;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(15, this->retcode(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AvatarChangeElementTypeRsp)
}

::google::protobuf::uint8* AvatarChangeElementTypeRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AvatarChangeElementTypeRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 retcode = 15;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(15, this->retcode(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AvatarChangeElementTypeRsp)
  return target;
}

size_t AvatarChangeElementTypeRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AvatarChangeElementTypeRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // int32 retcode = 15;
  if (this->retcode() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->retcode());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AvatarFetterDataNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AvatarFetterDataNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // map<uint64, .proto.AvatarFetterInfo> fetter_info_map = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(90u /* 90 & 0xFF */)) {
          AvatarFetterDataNotify_FetterInfoMapEntry::Parser< ::google::protobuf::internal::MapField<
              AvatarFetterDataNotify_FetterInfoMapEntry,
              ::google::protobuf::uint64, ::proto::AvatarFetterInfo,
              ::google::protobuf::internal::WireFormatLite::TYPE_UINT64,
              ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
              0 >,
            ::google::protobuf::Map< ::google::protobuf::uint64, ::proto::AvatarFetterInfo > > parser(&fetter_info_map_);
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
              input, &parser));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.AvatarFetterDataNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AvatarFetterDataNotify)
  return false;
#undef DO_
}

void AvatarFetterDataNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AvatarFetterDataNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // map<uint64, .proto.AvatarFetterInfo> fetter_info_map = 11;
  if (!this->fetter_info_map().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint64, ::proto::AvatarFetterInfo >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint64, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (output->IsSerializationDeterministic() &&
        this->fetter_info_map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->fetter_info_map().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint64, ::proto::AvatarFetterInfo >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint64, ::proto::AvatarFetterInfo >::const_iterator
          it = this->fetter_info_map().begin();
          it != this->fetter_info_map().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<AvatarFetterDataNotify_FetterInfoMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(fetter_info_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            11, *entry, output);
      }
    } else {
      ::google::protobuf::scoped_ptr<AvatarFetterDataNotify_FetterInfoMapEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint64, ::proto::AvatarFetterInfo >::const_iterator
          it = this->fetter_info_map().begin();
          it != this->fetter_info_map().end(); ++it) {
        entry.reset(fetter_info_map_.NewEntryWrapper(
            it->first, it->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            11, *entry, output);
      }
    }
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AvatarFetterDataNotify)
}

::google::protobuf::uint8* AvatarFetterDataNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AvatarFetterDataNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // map<uint64, .proto.AvatarFetterInfo> fetter_info_map = 11;
  if (!this->fetter_info_map().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint64, ::proto::AvatarFetterInfo >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint64, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (deterministic &&
        this->fetter_info_map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->fetter_info_map().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint64, ::proto::AvatarFetterInfo >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint64, ::proto::AvatarFetterInfo >::const_iterator
          it = this->fetter_info_map().begin();
          it != this->fetter_info_map().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<AvatarFetterDataNotify_FetterInfoMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(fetter_info_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       11, *entry, deterministic, target);
;
      }
    } else {
      ::google::protobuf::scoped_ptr<AvatarFetterDataNotify_FetterInfoMapEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint64, ::proto::AvatarFetterInfo >::const_iterator
          it = this->fetter_info_map().begin();
          it != this->fetter_info_map().end(); ++it) {
        entry.reset(fetter_info_map_.NewEntryWrapper(
            it->first, it->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       11, *entry, deterministic, target);
;
      }
    }
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AvatarFetterDataNotify)
  return target;
}

size_t AvatarFetterDataNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AvatarFetterDataNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // map<uint64, .proto.AvatarFetterInfo> fetter_info_map = 11;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->fetter_info_map_size());
  {
    ::google::protobuf::scoped_ptr<AvatarFetterDataNotify_FetterInfoMapEntry> entry;
    for (::google::protobuf::Map< ::google::protobuf::uint64, ::proto::AvatarFetterInfo >::const_iterator
        it = this->fetter_info_map().begin();
        it != this->fetter_info_map().end(); ++it) {
      entry.reset(fetter_info_map_.NewEntryWrapper(it->first, it->second));
      total_size += ::google::protobuf::internal::WireFormatLite::
          MessageSizeNoVirtual(*entry);
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AvatarExpeditionDataNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AvatarExpeditionDataNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // map<uint64, .proto.AvatarExpeditionInfo> expedition_info_map = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          AvatarExpeditionDataNotify_ExpeditionInfoMapEntry::Parser< ::google::protobuf::internal::MapField<
              AvatarExpeditionDataNotify_ExpeditionInfoMapEntry,
              ::google::protobuf::uint64, ::proto::AvatarExpeditionInfo,
              ::google::protobuf::internal::WireFormatLite::TYPE_UINT64,
              ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
              0 >,
            ::google::protobuf::Map< ::google::protobuf::uint64, ::proto::AvatarExpeditionInfo > > parser(&expedition_info_map_);
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
              input, &parser));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.AvatarExpeditionDataNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AvatarExpeditionDataNotify)
  return false;
#undef DO_
}

void AvatarExpeditionDataNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AvatarExpeditionDataNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // map<uint64, .proto.AvatarExpeditionInfo> expedition_info_map = 4;
  if (!this->expedition_info_map().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint64, ::proto::AvatarExpeditionInfo >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint64, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (output->IsSerializationDeterministic() &&
        this->expedition_info_map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->expedition_info_map().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint64, ::proto::AvatarExpeditionInfo >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint64, ::proto::AvatarExpeditionInfo >::const_iterator
          it = this->expedition_info_map().begin();
          it != this->expedition_info_map().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<AvatarExpeditionDataNotify_ExpeditionInfoMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(expedition_info_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            4, *entry, output);
      }
    } else {
      ::google::protobuf::scoped_ptr<AvatarExpeditionDataNotify_ExpeditionInfoMapEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint64, ::proto::AvatarExpeditionInfo >::const_iterator
          it = this->expedition_info_map().begin();
          it != this->expedition_info_map().end(); ++it) {
        entry.reset(expedition_info_map_.NewEntryWrapper(
            it->first, it->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            4, *entry, output);
      }
    }
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AvatarExpeditionDataNotify)
}

::google::protobuf::uint8* AvatarExpeditionDataNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AvatarExpeditionDataNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // map<uint64, .proto.AvatarExpeditionInfo> expedition_info_map = 4;
  if (!this->expedition_info_map().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint64, ::proto::AvatarExpeditionInfo >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint64, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (deterministic &&
        this->expedition_info_map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->expedition_info_map().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint64, ::proto::AvatarExpeditionInfo >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint64, ::proto::AvatarExpeditionInfo >::const_iterator
          it = this->expedition_info_map().begin();
          it != this->expedition_info_map().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<AvatarExpeditionDataNotify_ExpeditionInfoMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(expedition_info_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       4, *entry, deterministic, target);
;
      }
    } else {
      ::google::protobuf::scoped_ptr<AvatarExpeditionDataNotify_ExpeditionInfoMapEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint64, ::proto::AvatarExpeditionInfo >::const_iterator
          it = this->expedition_info_map().begin();
          it != this->expedition_info_map().end(); ++it) {
        entry.reset(expedition_info_map_.NewEntryWrapper(
            it->first, it->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       4, *entry, deterministic, target);
;
      }
    }
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AvatarExpeditionDataNotify)
  return target;
}

size_t AvatarExpeditionDataNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AvatarExpeditionDataNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // map<uint64, .proto.AvatarExpeditionInfo> expedition_info_map = 4;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->expedition_info_map_size());
  {
    ::google::protobuf::scoped_ptr<AvatarExpeditionDataNotify_ExpeditionInfoMapEntry> entry;
    for (::google::protobuf::Map< ::google::protobuf::uint64, ::proto::AvatarExpeditionInfo >::const_iterator
        it = this->expedition_info_map().begin();
        it != this->expedition_info_map().end(); ++it) {
      entry.reset(expedition_info_map_.NewEntryWrapper(it->first, it->second));
      total_size += ::google::protobuf::internal::WireFormatLite::
          MessageSizeNoVirtual(*entry);
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AvatarExpeditionAllDataReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AvatarExpeditionAllDataReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
  handle_unusual:
    if (tag == 0) {
      goto success;
    }
    DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
  }
success:
  // @@protoc_insertion_point(parse_success:proto.AvatarExpeditionAllDataReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AvatarExpeditionAllDataReq)
  return false;
#undef DO_
}

void AvatarExpeditionAllDataReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AvatarExpeditionAllDataReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AvatarExpeditionAllDataReq)
}

::google::protobuf::uint8* AvatarExpeditionAllDataReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AvatarExpeditionAllDataReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AvatarExpeditionAllDataReq)
  return target;
}

size_t AvatarExpeditionAllDataReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AvatarExpeditionAllDataReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AvatarExpeditionAllDataRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AvatarExpeditionAllDataRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 retcode = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &retcode_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated uint32 open_expedition_list = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(74u /* 74 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_open_expedition_list())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 1, 74u, input, this->mutable_open_expedition_list())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // map<uint64, .proto.AvatarExpeditionInfo> expedition_info_map = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(82u /* 82 & 0xFF */)) {
          AvatarExpeditionAllDataRsp_ExpeditionInfoMapEntry::Parser< ::google::protobuf::internal::MapField<
              AvatarExpeditionAllDataRsp_ExpeditionInfoMapEntry,
              ::google::protobuf::uint64, ::proto::AvatarExpeditionInfo,
              ::google::protobuf::internal::WireFormatLite::TYPE_UINT64,
              ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
              0 >,
            ::google::protobuf::Map< ::google::protobuf::uint64, ::proto::AvatarExpeditionInfo > > parser(&expedition_info_map_);
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
              input, &parser));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 expedition_count_limit = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(96u /* 96 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &expedition_count_limit_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.AvatarExpeditionAllDataRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AvatarExpeditionAllDataRsp)
  return false;
#undef DO_
}

void AvatarExpeditionAllDataRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AvatarExpeditionAllDataRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 retcode = 4;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->retcode(), output);
  }

  // repeated uint32 open_expedition_list = 9;
  if (this->open_expedition_list_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(9, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _open_expedition_list_cached_byte_size_));
  }
  for (int i = 0, n = this->open_expedition_list_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32NoTag(
      this->open_expedition_list(i), output);
  }

  // map<uint64, .proto.AvatarExpeditionInfo> expedition_info_map = 10;
  if (!this->expedition_info_map().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint64, ::proto::AvatarExpeditionInfo >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint64, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (output->IsSerializationDeterministic() &&
        this->expedition_info_map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->expedition_info_map().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint64, ::proto::AvatarExpeditionInfo >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint64, ::proto::AvatarExpeditionInfo >::const_iterator
          it = this->expedition_info_map().begin();
          it != this->expedition_info_map().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<AvatarExpeditionAllDataRsp_ExpeditionInfoMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(expedition_info_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            10, *entry, output);
      }
    } else {
      ::google::protobuf::scoped_ptr<AvatarExpeditionAllDataRsp_ExpeditionInfoMapEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint64, ::proto::AvatarExpeditionInfo >::const_iterator
          it = this->expedition_info_map().begin();
          it != this->expedition_info_map().end(); ++it) {
        entry.reset(expedition_info_map_.NewEntryWrapper(
            it->first, it->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            10, *entry, output);
      }
    }
  }

  // uint32 expedition_count_limit = 12;
  if (this->expedition_count_limit() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(12, this->expedition_count_limit(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AvatarExpeditionAllDataRsp)
}

::google::protobuf::uint8* AvatarExpeditionAllDataRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AvatarExpeditionAllDataRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 retcode = 4;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->retcode(), target);
  }

  // repeated uint32 open_expedition_list = 9;
  if (this->open_expedition_list_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      9,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::uint32>(
            _open_expedition_list_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt32NoTagToArray(this->open_expedition_list_, target);
  }

  // map<uint64, .proto.AvatarExpeditionInfo> expedition_info_map = 10;
  if (!this->expedition_info_map().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint64, ::proto::AvatarExpeditionInfo >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint64, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (deterministic &&
        this->expedition_info_map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->expedition_info_map().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint64, ::proto::AvatarExpeditionInfo >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint64, ::proto::AvatarExpeditionInfo >::const_iterator
          it = this->expedition_info_map().begin();
          it != this->expedition_info_map().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<AvatarExpeditionAllDataRsp_ExpeditionInfoMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(expedition_info_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       10, *entry, deterministic, target);
;
      }
    } else {
      ::google::protobuf::scoped_ptr<AvatarExpeditionAllDataRsp_ExpeditionInfoMapEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint64, ::proto::AvatarExpeditionInfo >::const_iterator
          it = this->expedition_info_map().begin();
          it != this->expedition_info_map().end(); ++it) {
        entry.reset(expedition_info_map_.NewEntryWrapper(
            it->first, it->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       10, *entry, deterministic, target);
;
      }
    }
  }

  // uint32 expedition_count_limit = 12;
  if (this->expedition_count_limit() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(12, this->expedition_count_limit(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AvatarExpeditionAllDataRsp)
  return target;
}

size_t AvatarExpeditionAllDataRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AvatarExpeditionAllDataRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated uint32 open_expedition_list = 9;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      UInt32Size(this->open_expedition_list_);
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _open_expedition_list_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // map<uint64, .proto.AvatarExpeditionInfo> expedition_info_map = 10;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->expedition_info_map_size());
  {
    ::google::protobuf::scoped_ptr<AvatarExpeditionAllDataRsp_ExpeditionInfoMapEntry> entry;
    for (::google::protobuf::Map< ::google::protobuf::uint64, ::proto::AvatarExpeditionInfo >::const_iterator
        it = this->expedition_info_map().begin();
        it != this->expedition_info_map().end(); ++it) {
      entry.reset(expedition_info_map_.NewEntryWrapper(it->first, it->second));
      total_size += ::google::protobuf::internal::WireFormatLite::
          MessageSizeNoVirtual(*entry);
    }
  }

  // int32 retcode = 4;
  if (this->retcode() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->retcode());
  }

  // uint32 expedition_count_limit = 12;
  if (this->expedition_count_limit() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->expedition_count_limit());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AvatarExpeditionStartReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AvatarExpeditionStartReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint64 avatar_guid = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 64 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &avatar_guid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 hour_time = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(96u /* 96 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &hour_time_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 exp_id = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(112u /* 112 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &exp_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.AvatarExpeditionStartReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AvatarExpeditionStartReq)
  return false;
#undef DO_
}

void AvatarExpeditionStartReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AvatarExpeditionStartReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 avatar_guid = 8;
  if (this->avatar_guid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(8, this->avatar_guid(), output);
  }

  // uint32 hour_time = 12;
  if (this->hour_time() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(12, this->hour_time(), output);
  }

  // uint32 exp_id = 14;
  if (this->exp_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(14, this->exp_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AvatarExpeditionStartReq)
}

::google::protobuf::uint8* AvatarExpeditionStartReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AvatarExpeditionStartReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 avatar_guid = 8;
  if (this->avatar_guid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(8, this->avatar_guid(), target);
  }

  // uint32 hour_time = 12;
  if (this->hour_time() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(12, this->hour_time(), target);
  }

  // uint32 exp_id = 14;
  if (this->exp_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(14, this->exp_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AvatarExpeditionStartReq)
  return target;
}

size_t AvatarExpeditionStartReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AvatarExpeditionStartReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint64 avatar_guid = 8;
  if (this->avatar_guid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->avatar_guid());
  }

  // uint32 hour_time = 12;
  if (this->hour_time() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->hour_time());
  }

  // uint32 exp_id = 14;
  if (this->exp_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->exp_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AvatarExpeditionStartRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AvatarExpeditionStartRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // map<uint64, .proto.AvatarExpeditionInfo> expedition_info_map = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(58u /* 58 & 0xFF */)) {
          AvatarExpeditionStartRsp_ExpeditionInfoMapEntry::Parser< ::google::protobuf::internal::MapField<
              AvatarExpeditionStartRsp_ExpeditionInfoMapEntry,
              ::google::protobuf::uint64, ::proto::AvatarExpeditionInfo,
              ::google::protobuf::internal::WireFormatLite::TYPE_UINT64,
              ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
              0 >,
            ::google::protobuf::Map< ::google::protobuf::uint64, ::proto::AvatarExpeditionInfo > > parser(&expedition_info_map_);
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
              input, &parser));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 retcode = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(80u /* 80 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &retcode_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.AvatarExpeditionStartRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AvatarExpeditionStartRsp)
  return false;
#undef DO_
}

void AvatarExpeditionStartRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AvatarExpeditionStartRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // map<uint64, .proto.AvatarExpeditionInfo> expedition_info_map = 7;
  if (!this->expedition_info_map().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint64, ::proto::AvatarExpeditionInfo >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint64, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (output->IsSerializationDeterministic() &&
        this->expedition_info_map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->expedition_info_map().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint64, ::proto::AvatarExpeditionInfo >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint64, ::proto::AvatarExpeditionInfo >::const_iterator
          it = this->expedition_info_map().begin();
          it != this->expedition_info_map().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<AvatarExpeditionStartRsp_ExpeditionInfoMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(expedition_info_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            7, *entry, output);
      }
    } else {
      ::google::protobuf::scoped_ptr<AvatarExpeditionStartRsp_ExpeditionInfoMapEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint64, ::proto::AvatarExpeditionInfo >::const_iterator
          it = this->expedition_info_map().begin();
          it != this->expedition_info_map().end(); ++it) {
        entry.reset(expedition_info_map_.NewEntryWrapper(
            it->first, it->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            7, *entry, output);
      }
    }
  }

  // int32 retcode = 10;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(10, this->retcode(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AvatarExpeditionStartRsp)
}

::google::protobuf::uint8* AvatarExpeditionStartRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AvatarExpeditionStartRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // map<uint64, .proto.AvatarExpeditionInfo> expedition_info_map = 7;
  if (!this->expedition_info_map().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint64, ::proto::AvatarExpeditionInfo >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint64, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (deterministic &&
        this->expedition_info_map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->expedition_info_map().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint64, ::proto::AvatarExpeditionInfo >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint64, ::proto::AvatarExpeditionInfo >::const_iterator
          it = this->expedition_info_map().begin();
          it != this->expedition_info_map().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<AvatarExpeditionStartRsp_ExpeditionInfoMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(expedition_info_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       7, *entry, deterministic, target);
;
      }
    } else {
      ::google::protobuf::scoped_ptr<AvatarExpeditionStartRsp_ExpeditionInfoMapEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint64, ::proto::AvatarExpeditionInfo >::const_iterator
          it = this->expedition_info_map().begin();
          it != this->expedition_info_map().end(); ++it) {
        entry.reset(expedition_info_map_.NewEntryWrapper(
            it->first, it->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       7, *entry, deterministic, target);
;
      }
    }
  }

  // int32 retcode = 10;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(10, this->retcode(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AvatarExpeditionStartRsp)
  return target;
}

size_t AvatarExpeditionStartRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AvatarExpeditionStartRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // map<uint64, .proto.AvatarExpeditionInfo> expedition_info_map = 7;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->expedition_info_map_size());
  {
    ::google::protobuf::scoped_ptr<AvatarExpeditionStartRsp_ExpeditionInfoMapEntry> entry;
    for (::google::protobuf::Map< ::google::protobuf::uint64, ::proto::AvatarExpeditionInfo >::const_iterator
        it = this->expedition_info_map().begin();
        it != this->expedition_info_map().end(); ++it) {
      entry.reset(expedition_info_map_.NewEntryWrapper(it->first, it->second));
      total_size += ::google::protobuf::internal::WireFormatLite::
          MessageSizeNoVirtual(*entry);
    }
  }

  // int32 retcode = 10;
  if (this->retcode() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->retcode());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AvatarExpeditionCallBackReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AvatarExpeditionCallBackReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated uint64 avatar_guid = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(114u /* 114 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, this->mutable_avatar_guid())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(112u /* 112 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 1, 114u, input, this->mutable_avatar_guid())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.AvatarExpeditionCallBackReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AvatarExpeditionCallBackReq)
  return false;
#undef DO_
}

void AvatarExpeditionCallBackReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AvatarExpeditionCallBackReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated uint64 avatar_guid = 14;
  if (this->avatar_guid_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(14, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _avatar_guid_cached_byte_size_));
  }
  for (int i = 0, n = this->avatar_guid_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64NoTag(
      this->avatar_guid(i), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AvatarExpeditionCallBackReq)
}

::google::protobuf::uint8* AvatarExpeditionCallBackReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AvatarExpeditionCallBackReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated uint64 avatar_guid = 14;
  if (this->avatar_guid_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      14,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::uint32>(
            _avatar_guid_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt64NoTagToArray(this->avatar_guid_, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AvatarExpeditionCallBackReq)
  return target;
}

size_t AvatarExpeditionCallBackReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AvatarExpeditionCallBackReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated uint64 avatar_guid = 14;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      UInt64Size(this->avatar_guid_);
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _avatar_guid_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AvatarExpeditionCallBackRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AvatarExpeditionCallBackRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // map<uint64, .proto.AvatarExpeditionInfo> expedition_info_map = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(58u /* 58 & 0xFF */)) {
          AvatarExpeditionCallBackRsp_ExpeditionInfoMapEntry::Parser< ::google::protobuf::internal::MapField<
              AvatarExpeditionCallBackRsp_ExpeditionInfoMapEntry,
              ::google::protobuf::uint64, ::proto::AvatarExpeditionInfo,
              ::google::protobuf::internal::WireFormatLite::TYPE_UINT64,
              ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
              0 >,
            ::google::protobuf::Map< ::google::protobuf::uint64, ::proto::AvatarExpeditionInfo > > parser(&expedition_info_map_);
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
              input, &parser));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 retcode = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(112u /* 112 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &retcode_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.AvatarExpeditionCallBackRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AvatarExpeditionCallBackRsp)
  return false;
#undef DO_
}

void AvatarExpeditionCallBackRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AvatarExpeditionCallBackRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // map<uint64, .proto.AvatarExpeditionInfo> expedition_info_map = 7;
  if (!this->expedition_info_map().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint64, ::proto::AvatarExpeditionInfo >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint64, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (output->IsSerializationDeterministic() &&
        this->expedition_info_map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->expedition_info_map().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint64, ::proto::AvatarExpeditionInfo >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint64, ::proto::AvatarExpeditionInfo >::const_iterator
          it = this->expedition_info_map().begin();
          it != this->expedition_info_map().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<AvatarExpeditionCallBackRsp_ExpeditionInfoMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(expedition_info_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            7, *entry, output);
      }
    } else {
      ::google::protobuf::scoped_ptr<AvatarExpeditionCallBackRsp_ExpeditionInfoMapEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint64, ::proto::AvatarExpeditionInfo >::const_iterator
          it = this->expedition_info_map().begin();
          it != this->expedition_info_map().end(); ++it) {
        entry.reset(expedition_info_map_.NewEntryWrapper(
            it->first, it->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            7, *entry, output);
      }
    }
  }

  // int32 retcode = 14;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(14, this->retcode(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AvatarExpeditionCallBackRsp)
}

::google::protobuf::uint8* AvatarExpeditionCallBackRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AvatarExpeditionCallBackRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // map<uint64, .proto.AvatarExpeditionInfo> expedition_info_map = 7;
  if (!this->expedition_info_map().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint64, ::proto::AvatarExpeditionInfo >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint64, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (deterministic &&
        this->expedition_info_map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->expedition_info_map().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint64, ::proto::AvatarExpeditionInfo >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint64, ::proto::AvatarExpeditionInfo >::const_iterator
          it = this->expedition_info_map().begin();
          it != this->expedition_info_map().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<AvatarExpeditionCallBackRsp_ExpeditionInfoMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(expedition_info_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       7, *entry, deterministic, target);
;
      }
    } else {
      ::google::protobuf::scoped_ptr<AvatarExpeditionCallBackRsp_ExpeditionInfoMapEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint64, ::proto::AvatarExpeditionInfo >::const_iterator
          it = this->expedition_info_map().begin();
          it != this->expedition_info_map().end(); ++it) {
        entry.reset(expedition_info_map_.NewEntryWrapper(
            it->first, it->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       7, *entry, deterministic, target);
;
      }
    }
  }

  // int32 retcode = 14;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(14, this->retcode(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AvatarExpeditionCallBackRsp)
  return target;
}

size_t AvatarExpeditionCallBackRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AvatarExpeditionCallBackRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // map<uint64, .proto.AvatarExpeditionInfo> expedition_info_map = 7;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->expedition_info_map_size());
  {
    ::google::protobuf::scoped_ptr<AvatarExpeditionCallBackRsp_ExpeditionInfoMapEntry> entry;
    for (::google::protobuf::Map< ::google::protobuf::uint64, ::proto::AvatarExpeditionInfo >::const_iterator
        it = this->expedition_info_map().begin();
        it != this->expedition_info_map().end(); ++it) {
      entry.reset(expedition_info_map_.NewEntryWrapper(it->first, it->second));
      total_size += ::google::protobuf::internal::WireFormatLite::
          MessageSizeNoVirtual(*entry);
    }
  }

  // int32 retcode = 14;
  if (this->retcode() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->retcode());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AvatarExpeditionGetRewardReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AvatarExpeditionGetRewardReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint64 avatar_guid = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(120u /* 120 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &avatar_guid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.AvatarExpeditionGetRewardReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AvatarExpeditionGetRewardReq)
  return false;
#undef DO_
}

void AvatarExpeditionGetRewardReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AvatarExpeditionGetRewardReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 avatar_guid = 15;
  if (this->avatar_guid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(15, this->avatar_guid(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AvatarExpeditionGetRewardReq)
}

::google::protobuf::uint8* AvatarExpeditionGetRewardReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AvatarExpeditionGetRewardReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 avatar_guid = 15;
  if (this->avatar_guid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(15, this->avatar_guid(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AvatarExpeditionGetRewardReq)
  return target;
}

size_t AvatarExpeditionGetRewardReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AvatarExpeditionGetRewardReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint64 avatar_guid = 15;
  if (this->avatar_guid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->avatar_guid());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AvatarExpeditionGetRewardRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AvatarExpeditionGetRewardRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // map<uint64, .proto.AvatarExpeditionInfo> expedition_info_map = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          AvatarExpeditionGetRewardRsp_ExpeditionInfoMapEntry::Parser< ::google::protobuf::internal::MapField<
              AvatarExpeditionGetRewardRsp_ExpeditionInfoMapEntry,
              ::google::protobuf::uint64, ::proto::AvatarExpeditionInfo,
              ::google::protobuf::internal::WireFormatLite::TYPE_UINT64,
              ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
              0 >,
            ::google::protobuf::Map< ::google::protobuf::uint64, ::proto::AvatarExpeditionInfo > > parser(&expedition_info_map_);
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
              input, &parser));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 retcode = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &retcode_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .proto.ItemParam extra_item_list = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(82u /* 82 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_extra_item_list()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .proto.ItemParam item_list = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(114u /* 114 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_item_list()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.AvatarExpeditionGetRewardRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AvatarExpeditionGetRewardRsp)
  return false;
#undef DO_
}

void AvatarExpeditionGetRewardRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AvatarExpeditionGetRewardRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // map<uint64, .proto.AvatarExpeditionInfo> expedition_info_map = 4;
  if (!this->expedition_info_map().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint64, ::proto::AvatarExpeditionInfo >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint64, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (output->IsSerializationDeterministic() &&
        this->expedition_info_map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->expedition_info_map().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint64, ::proto::AvatarExpeditionInfo >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint64, ::proto::AvatarExpeditionInfo >::const_iterator
          it = this->expedition_info_map().begin();
          it != this->expedition_info_map().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<AvatarExpeditionGetRewardRsp_ExpeditionInfoMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(expedition_info_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            4, *entry, output);
      }
    } else {
      ::google::protobuf::scoped_ptr<AvatarExpeditionGetRewardRsp_ExpeditionInfoMapEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint64, ::proto::AvatarExpeditionInfo >::const_iterator
          it = this->expedition_info_map().begin();
          it != this->expedition_info_map().end(); ++it) {
        entry.reset(expedition_info_map_.NewEntryWrapper(
            it->first, it->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            4, *entry, output);
      }
    }
  }

  // int32 retcode = 9;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(9, this->retcode(), output);
  }

  // repeated .proto.ItemParam extra_item_list = 10;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->extra_item_list_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      10, this->extra_item_list(static_cast<int>(i)), output);
  }

  // repeated .proto.ItemParam item_list = 14;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->item_list_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      14, this->item_list(static_cast<int>(i)), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AvatarExpeditionGetRewardRsp)
}

::google::protobuf::uint8* AvatarExpeditionGetRewardRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AvatarExpeditionGetRewardRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // map<uint64, .proto.AvatarExpeditionInfo> expedition_info_map = 4;
  if (!this->expedition_info_map().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint64, ::proto::AvatarExpeditionInfo >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint64, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (deterministic &&
        this->expedition_info_map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->expedition_info_map().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint64, ::proto::AvatarExpeditionInfo >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint64, ::proto::AvatarExpeditionInfo >::const_iterator
          it = this->expedition_info_map().begin();
          it != this->expedition_info_map().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<AvatarExpeditionGetRewardRsp_ExpeditionInfoMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(expedition_info_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       4, *entry, deterministic, target);
;
      }
    } else {
      ::google::protobuf::scoped_ptr<AvatarExpeditionGetRewardRsp_ExpeditionInfoMapEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint64, ::proto::AvatarExpeditionInfo >::const_iterator
          it = this->expedition_info_map().begin();
          it != this->expedition_info_map().end(); ++it) {
        entry.reset(expedition_info_map_.NewEntryWrapper(
            it->first, it->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       4, *entry, deterministic, target);
;
      }
    }
  }

  // int32 retcode = 9;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(9, this->retcode(), target);
  }

  // repeated .proto.ItemParam extra_item_list = 10;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->extra_item_list_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        10, this->extra_item_list(static_cast<int>(i)), deterministic, target);
  }

  // repeated .proto.ItemParam item_list = 14;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->item_list_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        14, this->item_list(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AvatarExpeditionGetRewardRsp)
  return target;
}

size_t AvatarExpeditionGetRewardRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AvatarExpeditionGetRewardRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // map<uint64, .proto.AvatarExpeditionInfo> expedition_info_map = 4;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->expedition_info_map_size());
  {
    ::google::protobuf::scoped_ptr<AvatarExpeditionGetRewardRsp_ExpeditionInfoMapEntry> entry;
    for (::google::protobuf::Map< ::google::protobuf::uint64, ::proto::AvatarExpeditionInfo >::const_iterator
        it = this->expedition_info_map().begin();
        it != this->expedition_info_map().end(); ++it) {
      entry.reset(expedition_info_map_.NewEntryWrapper(it->first, it->second));
      total_size += ::google::protobuf::internal::WireFormatLite::
          MessageSizeNoVirtual(*entry);
    }
  }

  // repeated .proto.ItemParam extra_item_list = 10;
  {
    unsigned int count = static_cast<unsigned int>(this->extra_item_list_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->extra_item_list(static_cast<int>(i)));
    }
  }

  // repeated .proto.ItemParam item_list = 14;
  {
    unsigned int count = static_cast<unsigned int>(this->item_list_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->item_list(static_cast<int>(i)));
    }
  }

  // int32 retcode = 9;
  if (this->retcode() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->retcode());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool ChangeMpTeamAvatarReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.ChangeMpTeamAvatarReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated uint64 avatar_guid_list = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, this->mutable_avatar_guid_list())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 1, 18u, input, this->mutable_avatar_guid_list())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint64 cur_avatar_guid = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 64 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &cur_avatar_guid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.ChangeMpTeamAvatarReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.ChangeMpTeamAvatarReq)
  return false;
#undef DO_
}

void ChangeMpTeamAvatarReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.ChangeMpTeamAvatarReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated uint64 avatar_guid_list = 2;
  if (this->avatar_guid_list_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(2, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _avatar_guid_list_cached_byte_size_));
  }
  for (int i = 0, n = this->avatar_guid_list_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64NoTag(
      this->avatar_guid_list(i), output);
  }

  // uint64 cur_avatar_guid = 8;
  if (this->cur_avatar_guid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(8, this->cur_avatar_guid(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.ChangeMpTeamAvatarReq)
}

::google::protobuf::uint8* ChangeMpTeamAvatarReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.ChangeMpTeamAvatarReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated uint64 avatar_guid_list = 2;
  if (this->avatar_guid_list_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      2,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::uint32>(
            _avatar_guid_list_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt64NoTagToArray(this->avatar_guid_list_, target);
  }

  // uint64 cur_avatar_guid = 8;
  if (this->cur_avatar_guid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(8, this->cur_avatar_guid(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.ChangeMpTeamAvatarReq)
  return target;
}

size_t ChangeMpTeamAvatarReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.ChangeMpTeamAvatarReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated uint64 avatar_guid_list = 2;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      UInt64Size(this->avatar_guid_list_);
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _avatar_guid_list_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // uint64 cur_avatar_guid = 8;
  if (this->cur_avatar_guid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->cur_avatar_guid());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool ChangeMpTeamAvatarRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.ChangeMpTeamAvatarRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 retcode = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &retcode_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated uint64 avatar_guid_list = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(82u /* 82 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, this->mutable_avatar_guid_list())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(80u /* 80 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 1, 82u, input, this->mutable_avatar_guid_list())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint64 cur_avatar_guid = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(96u /* 96 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &cur_avatar_guid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.ChangeMpTeamAvatarRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.ChangeMpTeamAvatarRsp)
  return false;
#undef DO_
}

void ChangeMpTeamAvatarRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.ChangeMpTeamAvatarRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 retcode = 1;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->retcode(), output);
  }

  // repeated uint64 avatar_guid_list = 10;
  if (this->avatar_guid_list_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(10, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _avatar_guid_list_cached_byte_size_));
  }
  for (int i = 0, n = this->avatar_guid_list_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64NoTag(
      this->avatar_guid_list(i), output);
  }

  // uint64 cur_avatar_guid = 12;
  if (this->cur_avatar_guid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(12, this->cur_avatar_guid(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.ChangeMpTeamAvatarRsp)
}

::google::protobuf::uint8* ChangeMpTeamAvatarRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.ChangeMpTeamAvatarRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 retcode = 1;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->retcode(), target);
  }

  // repeated uint64 avatar_guid_list = 10;
  if (this->avatar_guid_list_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      10,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::uint32>(
            _avatar_guid_list_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt64NoTagToArray(this->avatar_guid_list_, target);
  }

  // uint64 cur_avatar_guid = 12;
  if (this->cur_avatar_guid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(12, this->cur_avatar_guid(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.ChangeMpTeamAvatarRsp)
  return target;
}

size_t ChangeMpTeamAvatarRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.ChangeMpTeamAvatarRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated uint64 avatar_guid_list = 10;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      UInt64Size(this->avatar_guid_list_);
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _avatar_guid_list_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // int32 retcode = 1;
  if (this->retcode() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->retcode());
  }

  // uint64 cur_avatar_guid = 12;
  if (this->cur_avatar_guid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->cur_avatar_guid());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool ChangeTeamNameReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.ChangeTeamNameReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 team_id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &team_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string team_name = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(66u /* 66 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_team_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->team_name().data(), static_cast<int>(this->team_name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.ChangeTeamNameReq.team_name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.ChangeTeamNameReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.ChangeTeamNameReq)
  return false;
#undef DO_
}

void ChangeTeamNameReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.ChangeTeamNameReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 team_id = 1;
  if (this->team_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->team_id(), output);
  }

  // string team_name = 8;
  if (this->team_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->team_name().data(), static_cast<int>(this->team_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.ChangeTeamNameReq.team_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      8, this->team_name(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.ChangeTeamNameReq)
}

::google::protobuf::uint8* ChangeTeamNameReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.ChangeTeamNameReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 team_id = 1;
  if (this->team_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->team_id(), target);
  }

  // string team_name = 8;
  if (this->team_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->team_name().data(), static_cast<int>(this->team_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.ChangeTeamNameReq.team_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        8, this->team_name(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.ChangeTeamNameReq)
  return target;
}

size_t ChangeTeamNameReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.ChangeTeamNameReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string team_name = 8;
  if (this->team_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->team_name());
  }

  // int32 team_id = 1;
  if (this->team_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->team_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool ChangeTeamNameRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.ChangeTeamNameRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string team_name = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_team_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->team_name().data(), static_cast<int>(this->team_name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.ChangeTeamNameRsp.team_name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 team_id = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &team_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 retcode = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(112u /* 112 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &retcode_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.ChangeTeamNameRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.ChangeTeamNameRsp)
  return false;
#undef DO_
}

void ChangeTeamNameRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.ChangeTeamNameRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string team_name = 2;
  if (this->team_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->team_name().data(), static_cast<int>(this->team_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.ChangeTeamNameRsp.team_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->team_name(), output);
  }

  // int32 team_id = 3;
  if (this->team_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->team_id(), output);
  }

  // int32 retcode = 14;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(14, this->retcode(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.ChangeTeamNameRsp)
}

::google::protobuf::uint8* ChangeTeamNameRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.ChangeTeamNameRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string team_name = 2;
  if (this->team_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->team_name().data(), static_cast<int>(this->team_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.ChangeTeamNameRsp.team_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->team_name(), target);
  }

  // int32 team_id = 3;
  if (this->team_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->team_id(), target);
  }

  // int32 retcode = 14;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(14, this->retcode(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.ChangeTeamNameRsp)
  return target;
}

size_t ChangeTeamNameRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.ChangeTeamNameRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string team_name = 2;
  if (this->team_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->team_name());
  }

  // int32 team_id = 3;
  if (this->team_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->team_id());
  }

  // int32 retcode = 14;
  if (this->retcode() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->retcode());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool SceneTeamAvatar::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.SceneTeamAvatar)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(16383u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .proto.SceneEntityInfo scene_entity_info = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_scene_entity_info()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.AvatarInfo avatar_info = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_avatar_info()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint64 weapon_guid = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &weapon_guid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 scene_id = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &scene_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.SceneAvatarInfo scene_avatar_info = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_scene_avatar_info()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.AbilitySyncStateInfo weapon_ability_info = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_weapon_ability_info()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_player_cur_avatar = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_player_cur_avatar_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_reconnect = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 64 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_reconnect_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint64 avatar_guid = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &avatar_guid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.AbilityControlBlock ability_control_block = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(82u /* 82 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_ability_control_block()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 player_uid = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(88u /* 88 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &player_uid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.AbilitySyncStateInfo avatar_ability_info = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(98u /* 98 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_avatar_ability_info()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 entity_id = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(104u /* 104 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &entity_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .proto.ServerBuff server_buff_list = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(114u /* 114 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_server_buff_list()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 weapon_entity_id = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(120u /* 120 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &weapon_entity_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_on_scene = 776;
      case 776: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 6208 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_on_scene_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.SceneTeamAvatar)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.SceneTeamAvatar)
  return false;
#undef DO_
}

void SceneTeamAvatar::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.SceneTeamAvatar)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.SceneEntityInfo scene_entity_info = 1;
  if (this->has_scene_entity_info()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->scene_entity_info_, output);
  }

  // .proto.AvatarInfo avatar_info = 2;
  if (this->has_avatar_info()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->avatar_info_, output);
  }

  // uint64 weapon_guid = 3;
  if (this->weapon_guid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(3, this->weapon_guid(), output);
  }

  // uint32 scene_id = 4;
  if (this->scene_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->scene_id(), output);
  }

  // .proto.SceneAvatarInfo scene_avatar_info = 5;
  if (this->has_scene_avatar_info()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, *this->scene_avatar_info_, output);
  }

  // .proto.AbilitySyncStateInfo weapon_ability_info = 6;
  if (this->has_weapon_ability_info()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      6, *this->weapon_ability_info_, output);
  }

  // bool is_player_cur_avatar = 7;
  if (this->is_player_cur_avatar() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(7, this->is_player_cur_avatar(), output);
  }

  // bool is_reconnect = 8;
  if (this->is_reconnect() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(8, this->is_reconnect(), output);
  }

  // uint64 avatar_guid = 9;
  if (this->avatar_guid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(9, this->avatar_guid(), output);
  }

  // .proto.AbilityControlBlock ability_control_block = 10;
  if (this->has_ability_control_block()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      10, *this->ability_control_block_, output);
  }

  // uint32 player_uid = 11;
  if (this->player_uid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(11, this->player_uid(), output);
  }

  // .proto.AbilitySyncStateInfo avatar_ability_info = 12;
  if (this->has_avatar_ability_info()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      12, *this->avatar_ability_info_, output);
  }

  // uint32 entity_id = 13;
  if (this->entity_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(13, this->entity_id(), output);
  }

  // repeated .proto.ServerBuff server_buff_list = 14;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->server_buff_list_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      14, this->server_buff_list(static_cast<int>(i)), output);
  }

  // uint32 weapon_entity_id = 15;
  if (this->weapon_entity_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(15, this->weapon_entity_id(), output);
  }

  // bool is_on_scene = 776;
  if (this->is_on_scene() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(776, this->is_on_scene(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.SceneTeamAvatar)
}

::google::protobuf::uint8* SceneTeamAvatar::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.SceneTeamAvatar)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.SceneEntityInfo scene_entity_info = 1;
  if (this->has_scene_entity_info()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->scene_entity_info_, deterministic, target);
  }

  // .proto.AvatarInfo avatar_info = 2;
  if (this->has_avatar_info()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->avatar_info_, deterministic, target);
  }

  // uint64 weapon_guid = 3;
  if (this->weapon_guid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(3, this->weapon_guid(), target);
  }

  // uint32 scene_id = 4;
  if (this->scene_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->scene_id(), target);
  }

  // .proto.SceneAvatarInfo scene_avatar_info = 5;
  if (this->has_scene_avatar_info()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        5, *this->scene_avatar_info_, deterministic, target);
  }

  // .proto.AbilitySyncStateInfo weapon_ability_info = 6;
  if (this->has_weapon_ability_info()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        6, *this->weapon_ability_info_, deterministic, target);
  }

  // bool is_player_cur_avatar = 7;
  if (this->is_player_cur_avatar() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(7, this->is_player_cur_avatar(), target);
  }

  // bool is_reconnect = 8;
  if (this->is_reconnect() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(8, this->is_reconnect(), target);
  }

  // uint64 avatar_guid = 9;
  if (this->avatar_guid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(9, this->avatar_guid(), target);
  }

  // .proto.AbilityControlBlock ability_control_block = 10;
  if (this->has_ability_control_block()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        10, *this->ability_control_block_, deterministic, target);
  }

  // uint32 player_uid = 11;
  if (this->player_uid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(11, this->player_uid(), target);
  }

  // .proto.AbilitySyncStateInfo avatar_ability_info = 12;
  if (this->has_avatar_ability_info()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        12, *this->avatar_ability_info_, deterministic, target);
  }

  // uint32 entity_id = 13;
  if (this->entity_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(13, this->entity_id(), target);
  }

  // repeated .proto.ServerBuff server_buff_list = 14;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->server_buff_list_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        14, this->server_buff_list(static_cast<int>(i)), deterministic, target);
  }

  // uint32 weapon_entity_id = 15;
  if (this->weapon_entity_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(15, this->weapon_entity_id(), target);
  }

  // bool is_on_scene = 776;
  if (this->is_on_scene() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(776, this->is_on_scene(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.SceneTeamAvatar)
  return target;
}

size_t SceneTeamAvatar::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.SceneTeamAvatar)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .proto.ServerBuff server_buff_list = 14;
  {
    unsigned int count = static_cast<unsigned int>(this->server_buff_list_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->server_buff_list(static_cast<int>(i)));
    }
  }

  // .proto.SceneEntityInfo scene_entity_info = 1;
  if (this->has_scene_entity_info()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->scene_entity_info_);
  }

  // .proto.AvatarInfo avatar_info = 2;
  if (this->has_avatar_info()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->avatar_info_);
  }

  // .proto.SceneAvatarInfo scene_avatar_info = 5;
  if (this->has_scene_avatar_info()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->scene_avatar_info_);
  }

  // .proto.AbilitySyncStateInfo weapon_ability_info = 6;
  if (this->has_weapon_ability_info()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->weapon_ability_info_);
  }

  // .proto.AbilityControlBlock ability_control_block = 10;
  if (this->has_ability_control_block()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->ability_control_block_);
  }

  // .proto.AbilitySyncStateInfo avatar_ability_info = 12;
  if (this->has_avatar_ability_info()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->avatar_ability_info_);
  }

  // uint64 weapon_guid = 3;
  if (this->weapon_guid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->weapon_guid());
  }

  // uint32 scene_id = 4;
  if (this->scene_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->scene_id());
  }

  // uint32 player_uid = 11;
  if (this->player_uid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->player_uid());
  }

  // uint64 avatar_guid = 9;
  if (this->avatar_guid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->avatar_guid());
  }

  // uint32 entity_id = 13;
  if (this->entity_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->entity_id());
  }

  // uint32 weapon_entity_id = 15;
  if (this->weapon_entity_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->weapon_entity_id());
  }

  // bool is_on_scene = 776;
  if (this->is_on_scene() != 0) {
    total_size += 2 + 1;
  }

  // bool is_reconnect = 8;
  if (this->is_reconnect() != 0) {
    total_size += 1 + 1;
  }

  // bool is_player_cur_avatar = 7;
  if (this->is_player_cur_avatar() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool SceneTeamUpdateNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.SceneTeamUpdateNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .proto.SceneTeamAvatar scene_team_avatar_list = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(98u /* 98 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_scene_team_avatar_list()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_in_mp = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(120u /* 120 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_in_mp_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.SceneTeamUpdateNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.SceneTeamUpdateNotify)
  return false;
#undef DO_
}

void SceneTeamUpdateNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.SceneTeamUpdateNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.SceneTeamAvatar scene_team_avatar_list = 12;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->scene_team_avatar_list_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      12, this->scene_team_avatar_list(static_cast<int>(i)), output);
  }

  // bool is_in_mp = 15;
  if (this->is_in_mp() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(15, this->is_in_mp(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.SceneTeamUpdateNotify)
}

::google::protobuf::uint8* SceneTeamUpdateNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.SceneTeamUpdateNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.SceneTeamAvatar scene_team_avatar_list = 12;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->scene_team_avatar_list_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        12, this->scene_team_avatar_list(static_cast<int>(i)), deterministic, target);
  }

  // bool is_in_mp = 15;
  if (this->is_in_mp() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(15, this->is_in_mp(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.SceneTeamUpdateNotify)
  return target;
}

size_t SceneTeamUpdateNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.SceneTeamUpdateNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .proto.SceneTeamAvatar scene_team_avatar_list = 12;
  {
    unsigned int count = static_cast<unsigned int>(this->scene_team_avatar_list_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->scene_team_avatar_list(static_cast<int>(i)));
    }
  }

  // bool is_in_mp = 15;
  if (this->is_in_mp() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool FocusAvatarReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.FocusAvatarReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint64 avatar_guid = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(80u /* 80 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &avatar_guid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_focus = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(120u /* 120 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_focus_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.FocusAvatarReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.FocusAvatarReq)
  return false;
#undef DO_
}

void FocusAvatarReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.FocusAvatarReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 avatar_guid = 10;
  if (this->avatar_guid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(10, this->avatar_guid(), output);
  }

  // bool is_focus = 15;
  if (this->is_focus() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(15, this->is_focus(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.FocusAvatarReq)
}

::google::protobuf::uint8* FocusAvatarReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.FocusAvatarReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 avatar_guid = 10;
  if (this->avatar_guid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(10, this->avatar_guid(), target);
  }

  // bool is_focus = 15;
  if (this->is_focus() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(15, this->is_focus(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.FocusAvatarReq)
  return target;
}

size_t FocusAvatarReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.FocusAvatarReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // bool is_focus = 15;
  if (this->is_focus() != 0) {
    total_size += 1 + 1;
  }

  // uint64 avatar_guid = 10;
  if (this->avatar_guid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->avatar_guid());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool FocusAvatarRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.FocusAvatarRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 retcode = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &retcode_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_focus = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(88u /* 88 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_focus_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint64 avatar_guid = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(120u /* 120 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &avatar_guid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.FocusAvatarRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.FocusAvatarRsp)
  return false;
#undef DO_
}

void FocusAvatarRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.FocusAvatarRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 retcode = 1;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->retcode(), output);
  }

  // bool is_focus = 11;
  if (this->is_focus() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(11, this->is_focus(), output);
  }

  // uint64 avatar_guid = 15;
  if (this->avatar_guid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(15, this->avatar_guid(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.FocusAvatarRsp)
}

::google::protobuf::uint8* FocusAvatarRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.FocusAvatarRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 retcode = 1;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->retcode(), target);
  }

  // bool is_focus = 11;
  if (this->is_focus() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(11, this->is_focus(), target);
  }

  // uint64 avatar_guid = 15;
  if (this->avatar_guid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(15, this->avatar_guid(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.FocusAvatarRsp)
  return target;
}

size_t FocusAvatarRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.FocusAvatarRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // int32 retcode = 1;
  if (this->retcode() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->retcode());
  }

  // bool is_focus = 11;
  if (this->is_focus() != 0) {
    total_size += 1 + 1;
  }

  // uint64 avatar_guid = 15;
  if (this->avatar_guid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->avatar_guid());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AvatarSatiationData::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AvatarSatiationData)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint64 avatar_guid = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &avatar_guid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float penalty_finish_time = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(101u /* 101 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &penalty_finish_time_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float finish_time = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(125u /* 125 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &finish_time_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.AvatarSatiationData)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AvatarSatiationData)
  return false;
#undef DO_
}

void AvatarSatiationData::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AvatarSatiationData)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 avatar_guid = 5;
  if (this->avatar_guid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(5, this->avatar_guid(), output);
  }

  // float penalty_finish_time = 12;
  if (this->penalty_finish_time() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(12, this->penalty_finish_time(), output);
  }

  // float finish_time = 15;
  if (this->finish_time() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(15, this->finish_time(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AvatarSatiationData)
}

::google::protobuf::uint8* AvatarSatiationData::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AvatarSatiationData)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 avatar_guid = 5;
  if (this->avatar_guid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(5, this->avatar_guid(), target);
  }

  // float penalty_finish_time = 12;
  if (this->penalty_finish_time() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(12, this->penalty_finish_time(), target);
  }

  // float finish_time = 15;
  if (this->finish_time() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(15, this->finish_time(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AvatarSatiationData)
  return target;
}

size_t AvatarSatiationData::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AvatarSatiationData)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint64 avatar_guid = 5;
  if (this->avatar_guid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->avatar_guid());
  }

  // float penalty_finish_time = 12;
  if (this->penalty_finish_time() != 0) {
    total_size += 1 + 4;
  }

  // float finish_time = 15;
  if (this->finish_time() != 0) {
    total_size += 1 + 4;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AvatarSatiationDataNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AvatarSatiationDataNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .proto.AvatarSatiationData satiation_data_list = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(74u /* 74 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_satiation_data_list()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.AvatarSatiationDataNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AvatarSatiationDataNotify)
  return false;
#undef DO_
}

void AvatarSatiationDataNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AvatarSatiationDataNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.AvatarSatiationData satiation_data_list = 9;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->satiation_data_list_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      9, this->satiation_data_list(static_cast<int>(i)), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AvatarSatiationDataNotify)
}

::google::protobuf::uint8* AvatarSatiationDataNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AvatarSatiationDataNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.AvatarSatiationData satiation_data_list = 9;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->satiation_data_list_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        9, this->satiation_data_list(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AvatarSatiationDataNotify)
  return target;
}

size_t AvatarSatiationDataNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AvatarSatiationDataNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .proto.AvatarSatiationData satiation_data_list = 9;
  {
    unsigned int count = static_cast<unsigned int>(this->satiation_data_list_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->satiation_data_list(static_cast<int>(i)));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AvatarWearFlycloakReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AvatarWearFlycloakReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint64 avatar_guid = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(104u /* 104 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &avatar_guid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 flycloak_id = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(112u /* 112 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &flycloak_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.AvatarWearFlycloakReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AvatarWearFlycloakReq)
  return false;
#undef DO_
}

void AvatarWearFlycloakReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AvatarWearFlycloakReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 avatar_guid = 13;
  if (this->avatar_guid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(13, this->avatar_guid(), output);
  }

  // uint32 flycloak_id = 14;
  if (this->flycloak_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(14, this->flycloak_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AvatarWearFlycloakReq)
}

::google::protobuf::uint8* AvatarWearFlycloakReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AvatarWearFlycloakReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 avatar_guid = 13;
  if (this->avatar_guid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(13, this->avatar_guid(), target);
  }

  // uint32 flycloak_id = 14;
  if (this->flycloak_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(14, this->flycloak_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AvatarWearFlycloakReq)
  return target;
}

size_t AvatarWearFlycloakReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AvatarWearFlycloakReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 flycloak_id = 14;
  if (this->flycloak_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->flycloak_id());
  }

  // uint64 avatar_guid = 13;
  if (this->avatar_guid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->avatar_guid());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AvatarWearFlycloakRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AvatarWearFlycloakRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 flycloak_id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &flycloak_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint64 avatar_guid = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &avatar_guid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 retcode = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(112u /* 112 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &retcode_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.AvatarWearFlycloakRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AvatarWearFlycloakRsp)
  return false;
#undef DO_
}

void AvatarWearFlycloakRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AvatarWearFlycloakRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 flycloak_id = 1;
  if (this->flycloak_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->flycloak_id(), output);
  }

  // uint64 avatar_guid = 3;
  if (this->avatar_guid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(3, this->avatar_guid(), output);
  }

  // int32 retcode = 14;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(14, this->retcode(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AvatarWearFlycloakRsp)
}

::google::protobuf::uint8* AvatarWearFlycloakRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AvatarWearFlycloakRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 flycloak_id = 1;
  if (this->flycloak_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->flycloak_id(), target);
  }

  // uint64 avatar_guid = 3;
  if (this->avatar_guid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(3, this->avatar_guid(), target);
  }

  // int32 retcode = 14;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(14, this->retcode(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AvatarWearFlycloakRsp)
  return target;
}

size_t AvatarWearFlycloakRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AvatarWearFlycloakRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint64 avatar_guid = 3;
  if (this->avatar_guid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->avatar_guid());
  }

  // uint32 flycloak_id = 1;
  if (this->flycloak_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->flycloak_id());
  }

  // int32 retcode = 14;
  if (this->retcode() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->retcode());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AvatarFlycloakChangeNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AvatarFlycloakChangeNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 flycloak_id = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &flycloak_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint64 avatar_guid = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(96u /* 96 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &avatar_guid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.AvatarFlycloakChangeNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AvatarFlycloakChangeNotify)
  return false;
#undef DO_
}

void AvatarFlycloakChangeNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AvatarFlycloakChangeNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 flycloak_id = 4;
  if (this->flycloak_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->flycloak_id(), output);
  }

  // uint64 avatar_guid = 12;
  if (this->avatar_guid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(12, this->avatar_guid(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AvatarFlycloakChangeNotify)
}

::google::protobuf::uint8* AvatarFlycloakChangeNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AvatarFlycloakChangeNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 flycloak_id = 4;
  if (this->flycloak_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->flycloak_id(), target);
  }

  // uint64 avatar_guid = 12;
  if (this->avatar_guid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(12, this->avatar_guid(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AvatarFlycloakChangeNotify)
  return target;
}

size_t AvatarFlycloakChangeNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AvatarFlycloakChangeNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 flycloak_id = 4;
  if (this->flycloak_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->flycloak_id());
  }

  // uint64 avatar_guid = 12;
  if (this->avatar_guid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->avatar_guid());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AvatarGainFlycloakNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AvatarGainFlycloakNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 flycloak_id = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(120u /* 120 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &flycloak_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.AvatarGainFlycloakNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AvatarGainFlycloakNotify)
  return false;
#undef DO_
}

void AvatarGainFlycloakNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AvatarGainFlycloakNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 flycloak_id = 15;
  if (this->flycloak_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(15, this->flycloak_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AvatarGainFlycloakNotify)
}

::google::protobuf::uint8* AvatarGainFlycloakNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AvatarGainFlycloakNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 flycloak_id = 15;
  if (this->flycloak_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(15, this->flycloak_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AvatarGainFlycloakNotify)
  return target;
}

size_t AvatarGainFlycloakNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AvatarGainFlycloakNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 flycloak_id = 15;
  if (this->flycloak_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->flycloak_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AvatarEquipAffixStartNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AvatarEquipAffixStartNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .proto.AvatarEquipAffixInfo equip_affix_info = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_equip_affix_info()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint64 avatar_guid = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(120u /* 120 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &avatar_guid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.AvatarEquipAffixStartNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AvatarEquipAffixStartNotify)
  return false;
#undef DO_
}

void AvatarEquipAffixStartNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AvatarEquipAffixStartNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.AvatarEquipAffixInfo equip_affix_info = 5;
  if (this->has_equip_affix_info()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, *this->equip_affix_info_, output);
  }

  // uint64 avatar_guid = 15;
  if (this->avatar_guid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(15, this->avatar_guid(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AvatarEquipAffixStartNotify)
}

::google::protobuf::uint8* AvatarEquipAffixStartNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AvatarEquipAffixStartNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.AvatarEquipAffixInfo equip_affix_info = 5;
  if (this->has_equip_affix_info()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        5, *this->equip_affix_info_, deterministic, target);
  }

  // uint64 avatar_guid = 15;
  if (this->avatar_guid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(15, this->avatar_guid(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AvatarEquipAffixStartNotify)
  return target;
}

size_t AvatarEquipAffixStartNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AvatarEquipAffixStartNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .proto.AvatarEquipAffixInfo equip_affix_info = 5;
  if (this->has_equip_affix_info()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->equip_affix_info_);
  }

  // uint64 avatar_guid = 15;
  if (this->avatar_guid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->avatar_guid());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AvatarFetterLevelRewardReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AvatarFetterLevelRewardReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 fetter_level = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(96u /* 96 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &fetter_level_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint64 avatar_guid = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(104u /* 104 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &avatar_guid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.AvatarFetterLevelRewardReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AvatarFetterLevelRewardReq)
  return false;
#undef DO_
}

void AvatarFetterLevelRewardReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AvatarFetterLevelRewardReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 fetter_level = 12;
  if (this->fetter_level() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(12, this->fetter_level(), output);
  }

  // uint64 avatar_guid = 13;
  if (this->avatar_guid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(13, this->avatar_guid(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AvatarFetterLevelRewardReq)
}

::google::protobuf::uint8* AvatarFetterLevelRewardReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AvatarFetterLevelRewardReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 fetter_level = 12;
  if (this->fetter_level() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(12, this->fetter_level(), target);
  }

  // uint64 avatar_guid = 13;
  if (this->avatar_guid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(13, this->avatar_guid(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AvatarFetterLevelRewardReq)
  return target;
}

size_t AvatarFetterLevelRewardReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AvatarFetterLevelRewardReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 fetter_level = 12;
  if (this->fetter_level() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->fetter_level());
  }

  // uint64 avatar_guid = 13;
  if (this->avatar_guid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->avatar_guid());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AvatarFetterLevelRewardRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AvatarFetterLevelRewardRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 fetter_level = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &fetter_level_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint64 avatar_guid = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &avatar_guid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 retcode = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(112u /* 112 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &retcode_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 reward_id = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(120u /* 120 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &reward_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.AvatarFetterLevelRewardRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AvatarFetterLevelRewardRsp)
  return false;
#undef DO_
}

void AvatarFetterLevelRewardRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AvatarFetterLevelRewardRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 fetter_level = 2;
  if (this->fetter_level() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->fetter_level(), output);
  }

  // uint64 avatar_guid = 6;
  if (this->avatar_guid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(6, this->avatar_guid(), output);
  }

  // int32 retcode = 14;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(14, this->retcode(), output);
  }

  // uint32 reward_id = 15;
  if (this->reward_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(15, this->reward_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AvatarFetterLevelRewardRsp)
}

::google::protobuf::uint8* AvatarFetterLevelRewardRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AvatarFetterLevelRewardRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 fetter_level = 2;
  if (this->fetter_level() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->fetter_level(), target);
  }

  // uint64 avatar_guid = 6;
  if (this->avatar_guid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(6, this->avatar_guid(), target);
  }

  // int32 retcode = 14;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(14, this->retcode(), target);
  }

  // uint32 reward_id = 15;
  if (this->reward_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(15, this->reward_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AvatarFetterLevelRewardRsp)
  return target;
}

size_t AvatarFetterLevelRewardRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AvatarFetterLevelRewardRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 reward_id = 15;
  if (this->reward_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->reward_id());
  }

  // uint64 avatar_guid = 6;
  if (this->avatar_guid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->avatar_guid());
  }

  // uint32 fetter_level = 2;
  if (this->fetter_level() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->fetter_level());
  }

  // int32 retcode = 14;
  if (this->retcode() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->retcode());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AddNoGachaAvatarCardTransferItem::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AddNoGachaAvatarCardTransferItem)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 count = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(80u /* 80 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &count_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_new = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(88u /* 88 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_new_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 item_id = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(96u /* 96 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &item_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.AddNoGachaAvatarCardTransferItem)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AddNoGachaAvatarCardTransferItem)
  return false;
#undef DO_
}

void AddNoGachaAvatarCardTransferItem::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AddNoGachaAvatarCardTransferItem)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 count = 10;
  if (this->count() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(10, this->count(), output);
  }

  // bool is_new = 11;
  if (this->is_new() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(11, this->is_new(), output);
  }

  // uint32 item_id = 12;
  if (this->item_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(12, this->item_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AddNoGachaAvatarCardTransferItem)
}

::google::protobuf::uint8* AddNoGachaAvatarCardTransferItem::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AddNoGachaAvatarCardTransferItem)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 count = 10;
  if (this->count() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(10, this->count(), target);
  }

  // bool is_new = 11;
  if (this->is_new() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(11, this->is_new(), target);
  }

  // uint32 item_id = 12;
  if (this->item_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(12, this->item_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AddNoGachaAvatarCardTransferItem)
  return target;
}

size_t AddNoGachaAvatarCardTransferItem::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AddNoGachaAvatarCardTransferItem)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 item_id = 12;
  if (this->item_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->item_id());
  }

  // uint32 count = 10;
  if (this->count() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->count());
  }

  // bool is_new = 11;
  if (this->is_new() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AddNoGachaAvatarCardNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AddNoGachaAvatarCardNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 initial_level = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &initial_level_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 avatar_id = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &avatar_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 item_id = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &item_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 reason = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &reason_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .proto.AddNoGachaAvatarCardTransferItem transfer_item_list = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(82u /* 82 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_transfer_item_list()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 initial_promote_level = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(104u /* 104 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &initial_promote_level_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_transfer_to_item = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(112u /* 112 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_transfer_to_item_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.AddNoGachaAvatarCardNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AddNoGachaAvatarCardNotify)
  return false;
#undef DO_
}

void AddNoGachaAvatarCardNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AddNoGachaAvatarCardNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 initial_level = 3;
  if (this->initial_level() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->initial_level(), output);
  }

  // uint32 avatar_id = 4;
  if (this->avatar_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->avatar_id(), output);
  }

  // uint32 item_id = 7;
  if (this->item_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->item_id(), output);
  }

  // uint32 reason = 9;
  if (this->reason() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(9, this->reason(), output);
  }

  // repeated .proto.AddNoGachaAvatarCardTransferItem transfer_item_list = 10;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->transfer_item_list_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      10, this->transfer_item_list(static_cast<int>(i)), output);
  }

  // uint32 initial_promote_level = 13;
  if (this->initial_promote_level() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(13, this->initial_promote_level(), output);
  }

  // bool is_transfer_to_item = 14;
  if (this->is_transfer_to_item() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(14, this->is_transfer_to_item(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AddNoGachaAvatarCardNotify)
}

::google::protobuf::uint8* AddNoGachaAvatarCardNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AddNoGachaAvatarCardNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 initial_level = 3;
  if (this->initial_level() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->initial_level(), target);
  }

  // uint32 avatar_id = 4;
  if (this->avatar_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->avatar_id(), target);
  }

  // uint32 item_id = 7;
  if (this->item_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(7, this->item_id(), target);
  }

  // uint32 reason = 9;
  if (this->reason() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(9, this->reason(), target);
  }

  // repeated .proto.AddNoGachaAvatarCardTransferItem transfer_item_list = 10;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->transfer_item_list_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        10, this->transfer_item_list(static_cast<int>(i)), deterministic, target);
  }

  // uint32 initial_promote_level = 13;
  if (this->initial_promote_level() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(13, this->initial_promote_level(), target);
  }

  // bool is_transfer_to_item = 14;
  if (this->is_transfer_to_item() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(14, this->is_transfer_to_item(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AddNoGachaAvatarCardNotify)
  return target;
}

size_t AddNoGachaAvatarCardNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AddNoGachaAvatarCardNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .proto.AddNoGachaAvatarCardTransferItem transfer_item_list = 10;
  {
    unsigned int count = static_cast<unsigned int>(this->transfer_item_list_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->transfer_item_list(static_cast<int>(i)));
    }
  }

  // uint32 initial_level = 3;
  if (this->initial_level() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->initial_level());
  }

  // uint32 avatar_id = 4;
  if (this->avatar_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->avatar_id());
  }

  // uint32 item_id = 7;
  if (this->item_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->item_id());
  }

  // uint32 reason = 9;
  if (this->reason() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->reason());
  }

  // uint32 initial_promote_level = 13;
  if (this->initial_promote_level() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->initial_promote_level());
  }

  // bool is_transfer_to_item = 14;
  if (this->is_transfer_to_item() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AvatarPromoteGetRewardReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AvatarPromoteGetRewardReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint64 avatar_guid = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 64 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &avatar_guid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 promote_level = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(80u /* 80 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &promote_level_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.AvatarPromoteGetRewardReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AvatarPromoteGetRewardReq)
  return false;
#undef DO_
}

void AvatarPromoteGetRewardReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AvatarPromoteGetRewardReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 avatar_guid = 8;
  if (this->avatar_guid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(8, this->avatar_guid(), output);
  }

  // uint32 promote_level = 10;
  if (this->promote_level() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(10, this->promote_level(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AvatarPromoteGetRewardReq)
}

::google::protobuf::uint8* AvatarPromoteGetRewardReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AvatarPromoteGetRewardReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 avatar_guid = 8;
  if (this->avatar_guid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(8, this->avatar_guid(), target);
  }

  // uint32 promote_level = 10;
  if (this->promote_level() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(10, this->promote_level(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AvatarPromoteGetRewardReq)
  return target;
}

size_t AvatarPromoteGetRewardReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AvatarPromoteGetRewardReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 promote_level = 10;
  if (this->promote_level() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->promote_level());
  }

  // uint64 avatar_guid = 8;
  if (this->avatar_guid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->avatar_guid());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AvatarPromoteGetRewardRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AvatarPromoteGetRewardRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 promote_level = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &promote_level_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 reward_id = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 64 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &reward_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 retcode = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(96u /* 96 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &retcode_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint64 avatar_guid = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(112u /* 112 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &avatar_guid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.AvatarPromoteGetRewardRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AvatarPromoteGetRewardRsp)
  return false;
#undef DO_
}

void AvatarPromoteGetRewardRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AvatarPromoteGetRewardRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 promote_level = 5;
  if (this->promote_level() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->promote_level(), output);
  }

  // uint32 reward_id = 8;
  if (this->reward_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(8, this->reward_id(), output);
  }

  // int32 retcode = 12;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(12, this->retcode(), output);
  }

  // uint64 avatar_guid = 14;
  if (this->avatar_guid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(14, this->avatar_guid(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AvatarPromoteGetRewardRsp)
}

::google::protobuf::uint8* AvatarPromoteGetRewardRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AvatarPromoteGetRewardRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 promote_level = 5;
  if (this->promote_level() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->promote_level(), target);
  }

  // uint32 reward_id = 8;
  if (this->reward_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(8, this->reward_id(), target);
  }

  // int32 retcode = 12;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(12, this->retcode(), target);
  }

  // uint64 avatar_guid = 14;
  if (this->avatar_guid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(14, this->avatar_guid(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AvatarPromoteGetRewardRsp)
  return target;
}

size_t AvatarPromoteGetRewardRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AvatarPromoteGetRewardRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // int32 retcode = 12;
  if (this->retcode() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->retcode());
  }

  // uint32 promote_level = 5;
  if (this->promote_level() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->promote_level());
  }

  // uint32 reward_id = 8;
  if (this->reward_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->reward_id());
  }

  // uint64 avatar_guid = 14;
  if (this->avatar_guid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->avatar_guid());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AvatarChangeCostumeReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AvatarChangeCostumeReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint64 avatar_guid = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &avatar_guid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 costume_id = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(88u /* 88 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &costume_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.AvatarChangeCostumeReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AvatarChangeCostumeReq)
  return false;
#undef DO_
}

void AvatarChangeCostumeReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AvatarChangeCostumeReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 avatar_guid = 4;
  if (this->avatar_guid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(4, this->avatar_guid(), output);
  }

  // uint32 costume_id = 11;
  if (this->costume_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(11, this->costume_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AvatarChangeCostumeReq)
}

::google::protobuf::uint8* AvatarChangeCostumeReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AvatarChangeCostumeReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 avatar_guid = 4;
  if (this->avatar_guid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(4, this->avatar_guid(), target);
  }

  // uint32 costume_id = 11;
  if (this->costume_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(11, this->costume_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AvatarChangeCostumeReq)
  return target;
}

size_t AvatarChangeCostumeReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AvatarChangeCostumeReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 costume_id = 11;
  if (this->costume_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->costume_id());
  }

  // uint64 avatar_guid = 4;
  if (this->avatar_guid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->avatar_guid());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AvatarChangeCostumeRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AvatarChangeCostumeRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint64 avatar_guid = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &avatar_guid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 retcode = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &retcode_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 costume_id = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(120u /* 120 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &costume_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.AvatarChangeCostumeRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AvatarChangeCostumeRsp)
  return false;
#undef DO_
}

void AvatarChangeCostumeRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AvatarChangeCostumeRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 avatar_guid = 5;
  if (this->avatar_guid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(5, this->avatar_guid(), output);
  }

  // int32 retcode = 7;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(7, this->retcode(), output);
  }

  // uint32 costume_id = 15;
  if (this->costume_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(15, this->costume_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AvatarChangeCostumeRsp)
}

::google::protobuf::uint8* AvatarChangeCostumeRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AvatarChangeCostumeRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 avatar_guid = 5;
  if (this->avatar_guid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(5, this->avatar_guid(), target);
  }

  // int32 retcode = 7;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(7, this->retcode(), target);
  }

  // uint32 costume_id = 15;
  if (this->costume_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(15, this->costume_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AvatarChangeCostumeRsp)
  return target;
}

size_t AvatarChangeCostumeRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AvatarChangeCostumeRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint64 avatar_guid = 5;
  if (this->avatar_guid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->avatar_guid());
  }

  // int32 retcode = 7;
  if (this->retcode() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->retcode());
  }

  // uint32 costume_id = 15;
  if (this->costume_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->costume_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AvatarChangeCostumeNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AvatarChangeCostumeNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .proto.SceneEntityInfo entity_info = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(106u /* 106 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_entity_info()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.AvatarChangeCostumeNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AvatarChangeCostumeNotify)
  return false;
#undef DO_
}

void AvatarChangeCostumeNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AvatarChangeCostumeNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.SceneEntityInfo entity_info = 13;
  if (this->has_entity_info()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      13, *this->entity_info_, output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AvatarChangeCostumeNotify)
}

::google::protobuf::uint8* AvatarChangeCostumeNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AvatarChangeCostumeNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.SceneEntityInfo entity_info = 13;
  if (this->has_entity_info()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        13, *this->entity_info_, deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AvatarChangeCostumeNotify)
  return target;
}

size_t AvatarChangeCostumeNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AvatarChangeCostumeNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .proto.SceneEntityInfo entity_info = 13;
  if (this->has_entity_info()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->entity_info_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AvatarGainCostumeNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AvatarGainCostumeNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 costume_id = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &costume_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.AvatarGainCostumeNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AvatarGainCostumeNotify)
  return false;
#undef DO_
}

void AvatarGainCostumeNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AvatarGainCostumeNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 costume_id = 6;
  if (this->costume_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->costume_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AvatarGainCostumeNotify)
}

::google::protobuf::uint8* AvatarGainCostumeNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AvatarGainCostumeNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 costume_id = 6;
  if (this->costume_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, this->costume_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AvatarGainCostumeNotify)
  return target;
}

size_t AvatarGainCostumeNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AvatarGainCostumeNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 costume_id = 6;
  if (this->costume_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->costume_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AvatarChangeAnimHashReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AvatarChangeAnimHashReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint64 avatar_guid = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &avatar_guid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 anim_hash = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(96u /* 96 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &anim_hash_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.AvatarChangeAnimHashReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AvatarChangeAnimHashReq)
  return false;
#undef DO_
}

void AvatarChangeAnimHashReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AvatarChangeAnimHashReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 avatar_guid = 2;
  if (this->avatar_guid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(2, this->avatar_guid(), output);
  }

  // uint32 anim_hash = 12;
  if (this->anim_hash() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(12, this->anim_hash(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AvatarChangeAnimHashReq)
}

::google::protobuf::uint8* AvatarChangeAnimHashReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AvatarChangeAnimHashReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 avatar_guid = 2;
  if (this->avatar_guid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(2, this->avatar_guid(), target);
  }

  // uint32 anim_hash = 12;
  if (this->anim_hash() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(12, this->anim_hash(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AvatarChangeAnimHashReq)
  return target;
}

size_t AvatarChangeAnimHashReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AvatarChangeAnimHashReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint64 avatar_guid = 2;
  if (this->avatar_guid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->avatar_guid());
  }

  // uint32 anim_hash = 12;
  if (this->anim_hash() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->anim_hash());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AvatarChangeAnimHashRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AvatarChangeAnimHashRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 anim_hash = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &anim_hash_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint64 avatar_guid = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(88u /* 88 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &avatar_guid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 retcode = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(120u /* 120 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &retcode_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.AvatarChangeAnimHashRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AvatarChangeAnimHashRsp)
  return false;
#undef DO_
}

void AvatarChangeAnimHashRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AvatarChangeAnimHashRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 anim_hash = 9;
  if (this->anim_hash() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(9, this->anim_hash(), output);
  }

  // uint64 avatar_guid = 11;
  if (this->avatar_guid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(11, this->avatar_guid(), output);
  }

  // int32 retcode = 15;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(15, this->retcode(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AvatarChangeAnimHashRsp)
}

::google::protobuf::uint8* AvatarChangeAnimHashRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AvatarChangeAnimHashRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 anim_hash = 9;
  if (this->anim_hash() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(9, this->anim_hash(), target);
  }

  // uint64 avatar_guid = 11;
  if (this->avatar_guid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(11, this->avatar_guid(), target);
  }

  // int32 retcode = 15;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(15, this->retcode(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AvatarChangeAnimHashRsp)
  return target;
}

size_t AvatarChangeAnimHashRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AvatarChangeAnimHashRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint64 avatar_guid = 11;
  if (this->avatar_guid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->avatar_guid());
  }

  // uint32 anim_hash = 9;
  if (this->anim_hash() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->anim_hash());
  }

  // int32 retcode = 15;
  if (this->retcode() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->retcode());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool PersistentDungeonSwitchAvatarReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.PersistentDungeonSwitchAvatarReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated uint64 avatar_team_guid_list = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, this->mutable_avatar_team_guid_list())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 1, 18u, input, this->mutable_avatar_team_guid_list())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint64 cur_avatar_guid = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(112u /* 112 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &cur_avatar_guid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.PersistentDungeonSwitchAvatarReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.PersistentDungeonSwitchAvatarReq)
  return false;
#undef DO_
}

void PersistentDungeonSwitchAvatarReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.PersistentDungeonSwitchAvatarReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated uint64 avatar_team_guid_list = 2;
  if (this->avatar_team_guid_list_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(2, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _avatar_team_guid_list_cached_byte_size_));
  }
  for (int i = 0, n = this->avatar_team_guid_list_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64NoTag(
      this->avatar_team_guid_list(i), output);
  }

  // uint64 cur_avatar_guid = 14;
  if (this->cur_avatar_guid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(14, this->cur_avatar_guid(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.PersistentDungeonSwitchAvatarReq)
}

::google::protobuf::uint8* PersistentDungeonSwitchAvatarReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.PersistentDungeonSwitchAvatarReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated uint64 avatar_team_guid_list = 2;
  if (this->avatar_team_guid_list_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      2,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::uint32>(
            _avatar_team_guid_list_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt64NoTagToArray(this->avatar_team_guid_list_, target);
  }

  // uint64 cur_avatar_guid = 14;
  if (this->cur_avatar_guid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(14, this->cur_avatar_guid(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.PersistentDungeonSwitchAvatarReq)
  return target;
}

size_t PersistentDungeonSwitchAvatarReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.PersistentDungeonSwitchAvatarReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated uint64 avatar_team_guid_list = 2;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      UInt64Size(this->avatar_team_guid_list_);
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _avatar_team_guid_list_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // uint64 cur_avatar_guid = 14;
  if (this->cur_avatar_guid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->cur_avatar_guid());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool PersistentDungeonSwitchAvatarRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.PersistentDungeonSwitchAvatarRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 retcode = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &retcode_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint64 cur_avatar_guid = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &cur_avatar_guid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated uint64 avatar_team_guid_list = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(106u /* 106 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, this->mutable_avatar_team_guid_list())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(104u /* 104 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 1, 106u, input, this->mutable_avatar_team_guid_list())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.PersistentDungeonSwitchAvatarRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.PersistentDungeonSwitchAvatarRsp)
  return false;
#undef DO_
}

void PersistentDungeonSwitchAvatarRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.PersistentDungeonSwitchAvatarRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 retcode = 4;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->retcode(), output);
  }

  // uint64 cur_avatar_guid = 9;
  if (this->cur_avatar_guid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(9, this->cur_avatar_guid(), output);
  }

  // repeated uint64 avatar_team_guid_list = 13;
  if (this->avatar_team_guid_list_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(13, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _avatar_team_guid_list_cached_byte_size_));
  }
  for (int i = 0, n = this->avatar_team_guid_list_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64NoTag(
      this->avatar_team_guid_list(i), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.PersistentDungeonSwitchAvatarRsp)
}

::google::protobuf::uint8* PersistentDungeonSwitchAvatarRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.PersistentDungeonSwitchAvatarRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 retcode = 4;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->retcode(), target);
  }

  // uint64 cur_avatar_guid = 9;
  if (this->cur_avatar_guid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(9, this->cur_avatar_guid(), target);
  }

  // repeated uint64 avatar_team_guid_list = 13;
  if (this->avatar_team_guid_list_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      13,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::uint32>(
            _avatar_team_guid_list_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt64NoTagToArray(this->avatar_team_guid_list_, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.PersistentDungeonSwitchAvatarRsp)
  return target;
}

size_t PersistentDungeonSwitchAvatarRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.PersistentDungeonSwitchAvatarRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated uint64 avatar_team_guid_list = 13;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      UInt64Size(this->avatar_team_guid_list_);
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _avatar_team_guid_list_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // int32 retcode = 4;
  if (this->retcode() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->retcode());
  }

  // uint64 cur_avatar_guid = 9;
  if (this->cur_avatar_guid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->cur_avatar_guid());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AddBackupAvatarTeamReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AddBackupAvatarTeamReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
  handle_unusual:
    if (tag == 0) {
      goto success;
    }
    DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
  }
success:
  // @@protoc_insertion_point(parse_success:proto.AddBackupAvatarTeamReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AddBackupAvatarTeamReq)
  return false;
#undef DO_
}

void AddBackupAvatarTeamReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AddBackupAvatarTeamReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AddBackupAvatarTeamReq)
}

::google::protobuf::uint8* AddBackupAvatarTeamReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AddBackupAvatarTeamReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AddBackupAvatarTeamReq)
  return target;
}

size_t AddBackupAvatarTeamReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AddBackupAvatarTeamReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AddBackupAvatarTeamRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AddBackupAvatarTeamRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 retcode = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &retcode_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.AddBackupAvatarTeamRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AddBackupAvatarTeamRsp)
  return false;
#undef DO_
}

void AddBackupAvatarTeamRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AddBackupAvatarTeamRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 retcode = 5;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->retcode(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AddBackupAvatarTeamRsp)
}

::google::protobuf::uint8* AddBackupAvatarTeamRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AddBackupAvatarTeamRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 retcode = 5;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->retcode(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AddBackupAvatarTeamRsp)
  return target;
}

size_t AddBackupAvatarTeamRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AddBackupAvatarTeamRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // int32 retcode = 5;
  if (this->retcode() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->retcode());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool DelBackupAvatarTeamReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.DelBackupAvatarTeamReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 backup_avatar_team_id = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &backup_avatar_team_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.DelBackupAvatarTeamReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.DelBackupAvatarTeamReq)
  return false;
#undef DO_
}

void DelBackupAvatarTeamReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.DelBackupAvatarTeamReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 backup_avatar_team_id = 4;
  if (this->backup_avatar_team_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->backup_avatar_team_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.DelBackupAvatarTeamReq)
}

::google::protobuf::uint8* DelBackupAvatarTeamReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.DelBackupAvatarTeamReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 backup_avatar_team_id = 4;
  if (this->backup_avatar_team_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->backup_avatar_team_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.DelBackupAvatarTeamReq)
  return target;
}

size_t DelBackupAvatarTeamReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.DelBackupAvatarTeamReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 backup_avatar_team_id = 4;
  if (this->backup_avatar_team_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->backup_avatar_team_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool DelBackupAvatarTeamRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.DelBackupAvatarTeamRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 backup_avatar_team_id = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(88u /* 88 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &backup_avatar_team_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 retcode = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(96u /* 96 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &retcode_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.DelBackupAvatarTeamRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.DelBackupAvatarTeamRsp)
  return false;
#undef DO_
}

void DelBackupAvatarTeamRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.DelBackupAvatarTeamRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 backup_avatar_team_id = 11;
  if (this->backup_avatar_team_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(11, this->backup_avatar_team_id(), output);
  }

  // int32 retcode = 12;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(12, this->retcode(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.DelBackupAvatarTeamRsp)
}

::google::protobuf::uint8* DelBackupAvatarTeamRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.DelBackupAvatarTeamRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 backup_avatar_team_id = 11;
  if (this->backup_avatar_team_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(11, this->backup_avatar_team_id(), target);
  }

  // int32 retcode = 12;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(12, this->retcode(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.DelBackupAvatarTeamRsp)
  return target;
}

size_t DelBackupAvatarTeamRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.DelBackupAvatarTeamRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 backup_avatar_team_id = 11;
  if (this->backup_avatar_team_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->backup_avatar_team_id());
  }

  // int32 retcode = 12;
  if (this->retcode() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->retcode());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AvatarTeamAllDataNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AvatarTeamAllDataNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // map<uint32, .proto.AvatarTeam> avatar_team_map = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(98u /* 98 & 0xFF */)) {
          AvatarTeamAllDataNotify_AvatarTeamMapEntry::Parser< ::google::protobuf::internal::MapField<
              AvatarTeamAllDataNotify_AvatarTeamMapEntry,
              ::google::protobuf::uint32, ::proto::AvatarTeam,
              ::google::protobuf::internal::WireFormatLite::TYPE_UINT32,
              ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
              0 >,
            ::google::protobuf::Map< ::google::protobuf::uint32, ::proto::AvatarTeam > > parser(&avatar_team_map_);
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
              input, &parser));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated uint32 backup_avatar_team_order_list = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(114u /* 114 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_backup_avatar_team_order_list())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(112u /* 112 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 1, 114u, input, this->mutable_backup_avatar_team_order_list())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated uint64 temp_avatar_guid_list = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(122u /* 122 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, this->mutable_temp_avatar_guid_list())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(120u /* 120 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 1, 122u, input, this->mutable_temp_avatar_guid_list())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.AvatarTeamAllDataNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AvatarTeamAllDataNotify)
  return false;
#undef DO_
}

void AvatarTeamAllDataNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AvatarTeamAllDataNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // map<uint32, .proto.AvatarTeam> avatar_team_map = 12;
  if (!this->avatar_team_map().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::proto::AvatarTeam >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint32, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (output->IsSerializationDeterministic() &&
        this->avatar_team_map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->avatar_team_map().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::proto::AvatarTeam >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::proto::AvatarTeam >::const_iterator
          it = this->avatar_team_map().begin();
          it != this->avatar_team_map().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<AvatarTeamAllDataNotify_AvatarTeamMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(avatar_team_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            12, *entry, output);
      }
    } else {
      ::google::protobuf::scoped_ptr<AvatarTeamAllDataNotify_AvatarTeamMapEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::proto::AvatarTeam >::const_iterator
          it = this->avatar_team_map().begin();
          it != this->avatar_team_map().end(); ++it) {
        entry.reset(avatar_team_map_.NewEntryWrapper(
            it->first, it->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            12, *entry, output);
      }
    }
  }

  // repeated uint32 backup_avatar_team_order_list = 14;
  if (this->backup_avatar_team_order_list_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(14, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _backup_avatar_team_order_list_cached_byte_size_));
  }
  for (int i = 0, n = this->backup_avatar_team_order_list_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32NoTag(
      this->backup_avatar_team_order_list(i), output);
  }

  // repeated uint64 temp_avatar_guid_list = 15;
  if (this->temp_avatar_guid_list_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(15, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _temp_avatar_guid_list_cached_byte_size_));
  }
  for (int i = 0, n = this->temp_avatar_guid_list_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64NoTag(
      this->temp_avatar_guid_list(i), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AvatarTeamAllDataNotify)
}

::google::protobuf::uint8* AvatarTeamAllDataNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AvatarTeamAllDataNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // map<uint32, .proto.AvatarTeam> avatar_team_map = 12;
  if (!this->avatar_team_map().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::proto::AvatarTeam >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint32, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (deterministic &&
        this->avatar_team_map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->avatar_team_map().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::proto::AvatarTeam >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::proto::AvatarTeam >::const_iterator
          it = this->avatar_team_map().begin();
          it != this->avatar_team_map().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<AvatarTeamAllDataNotify_AvatarTeamMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(avatar_team_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       12, *entry, deterministic, target);
;
      }
    } else {
      ::google::protobuf::scoped_ptr<AvatarTeamAllDataNotify_AvatarTeamMapEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::proto::AvatarTeam >::const_iterator
          it = this->avatar_team_map().begin();
          it != this->avatar_team_map().end(); ++it) {
        entry.reset(avatar_team_map_.NewEntryWrapper(
            it->first, it->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       12, *entry, deterministic, target);
;
      }
    }
  }

  // repeated uint32 backup_avatar_team_order_list = 14;
  if (this->backup_avatar_team_order_list_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      14,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::uint32>(
            _backup_avatar_team_order_list_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt32NoTagToArray(this->backup_avatar_team_order_list_, target);
  }

  // repeated uint64 temp_avatar_guid_list = 15;
  if (this->temp_avatar_guid_list_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      15,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::uint32>(
            _temp_avatar_guid_list_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt64NoTagToArray(this->temp_avatar_guid_list_, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AvatarTeamAllDataNotify)
  return target;
}

size_t AvatarTeamAllDataNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AvatarTeamAllDataNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // map<uint32, .proto.AvatarTeam> avatar_team_map = 12;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->avatar_team_map_size());
  {
    ::google::protobuf::scoped_ptr<AvatarTeamAllDataNotify_AvatarTeamMapEntry> entry;
    for (::google::protobuf::Map< ::google::protobuf::uint32, ::proto::AvatarTeam >::const_iterator
        it = this->avatar_team_map().begin();
        it != this->avatar_team_map().end(); ++it) {
      entry.reset(avatar_team_map_.NewEntryWrapper(it->first, it->second));
      total_size += ::google::protobuf::internal::WireFormatLite::
          MessageSizeNoVirtual(*entry);
    }
  }

  // repeated uint32 backup_avatar_team_order_list = 14;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      UInt32Size(this->backup_avatar_team_order_list_);
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _backup_avatar_team_order_list_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // repeated uint64 temp_avatar_guid_list = 15;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      UInt64Size(this->temp_avatar_guid_list_);
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _temp_avatar_guid_list_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AvatarRenameInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AvatarRenameInfo)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 avatar_id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &avatar_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string avatar_name = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(66u /* 66 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_avatar_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->avatar_name().data(), static_cast<int>(this->avatar_name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.AvatarRenameInfo.avatar_name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.AvatarRenameInfo)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AvatarRenameInfo)
  return false;
#undef DO_
}

void AvatarRenameInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AvatarRenameInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 avatar_id = 1;
  if (this->avatar_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->avatar_id(), output);
  }

  // string avatar_name = 8;
  if (this->avatar_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->avatar_name().data(), static_cast<int>(this->avatar_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.AvatarRenameInfo.avatar_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      8, this->avatar_name(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AvatarRenameInfo)
}

::google::protobuf::uint8* AvatarRenameInfo::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AvatarRenameInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 avatar_id = 1;
  if (this->avatar_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->avatar_id(), target);
  }

  // string avatar_name = 8;
  if (this->avatar_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->avatar_name().data(), static_cast<int>(this->avatar_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.AvatarRenameInfo.avatar_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        8, this->avatar_name(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AvatarRenameInfo)
  return target;
}

size_t AvatarRenameInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AvatarRenameInfo)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string avatar_name = 8;
  if (this->avatar_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->avatar_name());
  }

  // uint32 avatar_id = 1;
  if (this->avatar_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->avatar_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AvatarRenameInfoNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AvatarRenameInfoNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .proto.AvatarRenameInfo avatar_rename_list = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(98u /* 98 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_avatar_rename_list()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.AvatarRenameInfoNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AvatarRenameInfoNotify)
  return false;
#undef DO_
}

void AvatarRenameInfoNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AvatarRenameInfoNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.AvatarRenameInfo avatar_rename_list = 12;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->avatar_rename_list_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      12, this->avatar_rename_list(static_cast<int>(i)), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AvatarRenameInfoNotify)
}

::google::protobuf::uint8* AvatarRenameInfoNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AvatarRenameInfoNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.AvatarRenameInfo avatar_rename_list = 12;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->avatar_rename_list_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        12, this->avatar_rename_list(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AvatarRenameInfoNotify)
  return target;
}

size_t AvatarRenameInfoNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AvatarRenameInfoNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .proto.AvatarRenameInfo avatar_rename_list = 12;
  {
    unsigned int count = static_cast<unsigned int>(this->avatar_rename_list_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->avatar_rename_list(static_cast<int>(i)));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool ItemRenameAvatarReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.ItemRenameAvatarReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string avatar_name = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_avatar_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->avatar_name().data(), static_cast<int>(this->avatar_name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.ItemRenameAvatarReq.avatar_name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 rename_id = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(112u /* 112 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &rename_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.ItemRenameAvatarReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.ItemRenameAvatarReq)
  return false;
#undef DO_
}

void ItemRenameAvatarReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.ItemRenameAvatarReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string avatar_name = 4;
  if (this->avatar_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->avatar_name().data(), static_cast<int>(this->avatar_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.ItemRenameAvatarReq.avatar_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->avatar_name(), output);
  }

  // uint32 rename_id = 14;
  if (this->rename_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(14, this->rename_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.ItemRenameAvatarReq)
}

::google::protobuf::uint8* ItemRenameAvatarReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.ItemRenameAvatarReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string avatar_name = 4;
  if (this->avatar_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->avatar_name().data(), static_cast<int>(this->avatar_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.ItemRenameAvatarReq.avatar_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->avatar_name(), target);
  }

  // uint32 rename_id = 14;
  if (this->rename_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(14, this->rename_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.ItemRenameAvatarReq)
  return target;
}

size_t ItemRenameAvatarReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.ItemRenameAvatarReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string avatar_name = 4;
  if (this->avatar_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->avatar_name());
  }

  // uint32 rename_id = 14;
  if (this->rename_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->rename_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool ItemRenameAvatarRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.ItemRenameAvatarRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 cd_time = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &cd_time_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 rename_id = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 64 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &rename_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 retcode = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(120u /* 120 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &retcode_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.ItemRenameAvatarRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.ItemRenameAvatarRsp)
  return false;
#undef DO_
}

void ItemRenameAvatarRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.ItemRenameAvatarRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 cd_time = 7;
  if (this->cd_time() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->cd_time(), output);
  }

  // uint32 rename_id = 8;
  if (this->rename_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(8, this->rename_id(), output);
  }

  // int32 retcode = 15;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(15, this->retcode(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.ItemRenameAvatarRsp)
}

::google::protobuf::uint8* ItemRenameAvatarRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.ItemRenameAvatarRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 cd_time = 7;
  if (this->cd_time() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(7, this->cd_time(), target);
  }

  // uint32 rename_id = 8;
  if (this->rename_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(8, this->rename_id(), target);
  }

  // int32 retcode = 15;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(15, this->retcode(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.ItemRenameAvatarRsp)
  return target;
}

size_t ItemRenameAvatarRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.ItemRenameAvatarRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // int32 retcode = 15;
  if (this->retcode() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->retcode());
  }

  // uint32 cd_time = 7;
  if (this->cd_time() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->cd_time());
  }

  // uint32 rename_id = 8;
  if (this->rename_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->rename_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}
}