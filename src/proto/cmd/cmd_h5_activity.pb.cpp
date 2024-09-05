#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "cmd/cmd_h5_activity.pb.h"

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

bool H5ActivityInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.H5ActivityInfo)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 content_close_time = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &content_close_time_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string url = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_url()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->url().data(), static_cast<int>(this->url().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.H5ActivityInfo.url"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 h5_activity_id = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &h5_activity_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_entrance_open = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_entrance_open_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 begin_time = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 64 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &begin_time_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 h5_schedule_id = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &h5_schedule_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 end_time = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(88u /* 88 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &end_time_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string prefab_path = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(106u /* 106 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_prefab_path()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->prefab_path().data(), static_cast<int>(this->prefab_path().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.H5ActivityInfo.prefab_path"));
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
  // @@protoc_insertion_point(parse_success:proto.H5ActivityInfo)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.H5ActivityInfo)
  return false;
#undef DO_
}

void H5ActivityInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.H5ActivityInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 content_close_time = 1;
  if (this->content_close_time() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->content_close_time(), output);
  }

  // string url = 3;
  if (this->url().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->url().data(), static_cast<int>(this->url().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.H5ActivityInfo.url");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->url(), output);
  }

  // uint32 h5_activity_id = 4;
  if (this->h5_activity_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->h5_activity_id(), output);
  }

  // bool is_entrance_open = 6;
  if (this->is_entrance_open() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(6, this->is_entrance_open(), output);
  }

  // uint32 begin_time = 8;
  if (this->begin_time() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(8, this->begin_time(), output);
  }

  // uint32 h5_schedule_id = 9;
  if (this->h5_schedule_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(9, this->h5_schedule_id(), output);
  }

  // uint32 end_time = 11;
  if (this->end_time() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(11, this->end_time(), output);
  }

  // string prefab_path = 13;
  if (this->prefab_path().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->prefab_path().data(), static_cast<int>(this->prefab_path().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.H5ActivityInfo.prefab_path");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      13, this->prefab_path(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.H5ActivityInfo)
}

::google::protobuf::uint8* H5ActivityInfo::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.H5ActivityInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 content_close_time = 1;
  if (this->content_close_time() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->content_close_time(), target);
  }

  // string url = 3;
  if (this->url().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->url().data(), static_cast<int>(this->url().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.H5ActivityInfo.url");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->url(), target);
  }

  // uint32 h5_activity_id = 4;
  if (this->h5_activity_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->h5_activity_id(), target);
  }

  // bool is_entrance_open = 6;
  if (this->is_entrance_open() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(6, this->is_entrance_open(), target);
  }

  // uint32 begin_time = 8;
  if (this->begin_time() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(8, this->begin_time(), target);
  }

  // uint32 h5_schedule_id = 9;
  if (this->h5_schedule_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(9, this->h5_schedule_id(), target);
  }

  // uint32 end_time = 11;
  if (this->end_time() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(11, this->end_time(), target);
  }

  // string prefab_path = 13;
  if (this->prefab_path().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->prefab_path().data(), static_cast<int>(this->prefab_path().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.H5ActivityInfo.prefab_path");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        13, this->prefab_path(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.H5ActivityInfo)
  return target;
}

size_t H5ActivityInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.H5ActivityInfo)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string url = 3;
  if (this->url().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->url());
  }

  // string prefab_path = 13;
  if (this->prefab_path().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->prefab_path());
  }

  // uint32 content_close_time = 1;
  if (this->content_close_time() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->content_close_time());
  }

  // uint32 h5_activity_id = 4;
  if (this->h5_activity_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->h5_activity_id());
  }

  // bool is_entrance_open = 6;
  if (this->is_entrance_open() != 0) {
    total_size += 1 + 1;
  }

  // uint32 begin_time = 8;
  if (this->begin_time() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->begin_time());
  }

  // uint32 h5_schedule_id = 9;
  if (this->h5_schedule_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->h5_schedule_id());
  }

  // uint32 end_time = 11;
  if (this->end_time() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->end_time());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool GetAllH5ActivityInfoReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.GetAllH5ActivityInfoReq)
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
  // @@protoc_insertion_point(parse_success:proto.GetAllH5ActivityInfoReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.GetAllH5ActivityInfoReq)
  return false;
#undef DO_
}

void GetAllH5ActivityInfoReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.GetAllH5ActivityInfoReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.GetAllH5ActivityInfoReq)
}

::google::protobuf::uint8* GetAllH5ActivityInfoReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.GetAllH5ActivityInfoReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.GetAllH5ActivityInfoReq)
  return target;
}

size_t GetAllH5ActivityInfoReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.GetAllH5ActivityInfoReq)
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

bool GetAllH5ActivityInfoRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.GetAllH5ActivityInfoRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 client_red_dot_timestamp = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &client_red_dot_timestamp_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .proto.H5ActivityInfo h5_activity_info_list = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_h5_activity_info_list()));
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
  // @@protoc_insertion_point(parse_success:proto.GetAllH5ActivityInfoRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.GetAllH5ActivityInfoRsp)
  return false;
#undef DO_
}

void GetAllH5ActivityInfoRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.GetAllH5ActivityInfoRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 client_red_dot_timestamp = 5;
  if (this->client_red_dot_timestamp() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->client_red_dot_timestamp(), output);
  }

  // repeated .proto.H5ActivityInfo h5_activity_info_list = 6;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->h5_activity_info_list_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      6, this->h5_activity_info_list(static_cast<int>(i)), output);
  }

  // int32 retcode = 14;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(14, this->retcode(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.GetAllH5ActivityInfoRsp)
}

::google::protobuf::uint8* GetAllH5ActivityInfoRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.GetAllH5ActivityInfoRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 client_red_dot_timestamp = 5;
  if (this->client_red_dot_timestamp() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->client_red_dot_timestamp(), target);
  }

  // repeated .proto.H5ActivityInfo h5_activity_info_list = 6;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->h5_activity_info_list_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        6, this->h5_activity_info_list(static_cast<int>(i)), deterministic, target);
  }

  // int32 retcode = 14;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(14, this->retcode(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.GetAllH5ActivityInfoRsp)
  return target;
}

size_t GetAllH5ActivityInfoRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.GetAllH5ActivityInfoRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .proto.H5ActivityInfo h5_activity_info_list = 6;
  {
    unsigned int count = static_cast<unsigned int>(this->h5_activity_info_list_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->h5_activity_info_list(static_cast<int>(i)));
    }
  }

  // uint32 client_red_dot_timestamp = 5;
  if (this->client_red_dot_timestamp() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->client_red_dot_timestamp());
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

bool H5ActivityIdsNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.H5ActivityIdsNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 client_red_dot_timestamp = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &client_red_dot_timestamp_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // map<uint32, uint32> h5_activity_map = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(122u /* 122 & 0xFF */)) {
          H5ActivityIdsNotify_H5ActivityMapEntry::Parser< ::google::protobuf::internal::MapField<
              H5ActivityIdsNotify_H5ActivityMapEntry,
              ::google::protobuf::uint32, ::google::protobuf::uint32,
              ::google::protobuf::internal::WireFormatLite::TYPE_UINT32,
              ::google::protobuf::internal::WireFormatLite::TYPE_UINT32,
              0 >,
            ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 > > parser(&h5_activity_map_);
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
  // @@protoc_insertion_point(parse_success:proto.H5ActivityIdsNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.H5ActivityIdsNotify)
  return false;
#undef DO_
}

void H5ActivityIdsNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.H5ActivityIdsNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 client_red_dot_timestamp = 1;
  if (this->client_red_dot_timestamp() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->client_red_dot_timestamp(), output);
  }

  // map<uint32, uint32> h5_activity_map = 15;
  if (!this->h5_activity_map().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint32, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (output->IsSerializationDeterministic() &&
        this->h5_activity_map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->h5_activity_map().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::const_iterator
          it = this->h5_activity_map().begin();
          it != this->h5_activity_map().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<H5ActivityIdsNotify_H5ActivityMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(h5_activity_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            15, *entry, output);
      }
    } else {
      ::google::protobuf::scoped_ptr<H5ActivityIdsNotify_H5ActivityMapEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::const_iterator
          it = this->h5_activity_map().begin();
          it != this->h5_activity_map().end(); ++it) {
        entry.reset(h5_activity_map_.NewEntryWrapper(
            it->first, it->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            15, *entry, output);
      }
    }
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.H5ActivityIdsNotify)
}

::google::protobuf::uint8* H5ActivityIdsNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.H5ActivityIdsNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 client_red_dot_timestamp = 1;
  if (this->client_red_dot_timestamp() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->client_red_dot_timestamp(), target);
  }

  // map<uint32, uint32> h5_activity_map = 15;
  if (!this->h5_activity_map().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint32, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (deterministic &&
        this->h5_activity_map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->h5_activity_map().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::const_iterator
          it = this->h5_activity_map().begin();
          it != this->h5_activity_map().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<H5ActivityIdsNotify_H5ActivityMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(h5_activity_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       15, *entry, deterministic, target);
;
      }
    } else {
      ::google::protobuf::scoped_ptr<H5ActivityIdsNotify_H5ActivityMapEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::const_iterator
          it = this->h5_activity_map().begin();
          it != this->h5_activity_map().end(); ++it) {
        entry.reset(h5_activity_map_.NewEntryWrapper(
            it->first, it->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       15, *entry, deterministic, target);
;
      }
    }
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.H5ActivityIdsNotify)
  return target;
}

size_t H5ActivityIdsNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.H5ActivityIdsNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // map<uint32, uint32> h5_activity_map = 15;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->h5_activity_map_size());
  {
    ::google::protobuf::scoped_ptr<H5ActivityIdsNotify_H5ActivityMapEntry> entry;
    for (::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::const_iterator
        it = this->h5_activity_map().begin();
        it != this->h5_activity_map().end(); ++it) {
      entry.reset(h5_activity_map_.NewEntryWrapper(it->first, it->second));
      total_size += ::google::protobuf::internal::WireFormatLite::
          MessageSizeNoVirtual(*entry);
    }
  }

  // uint32 client_red_dot_timestamp = 1;
  if (this->client_red_dot_timestamp() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->client_red_dot_timestamp());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool SetH5ActivityRedDotTimestampReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.SetH5ActivityRedDotTimestampReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 client_red_dot_timestamp = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(80u /* 80 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &client_red_dot_timestamp_)));
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
  // @@protoc_insertion_point(parse_success:proto.SetH5ActivityRedDotTimestampReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.SetH5ActivityRedDotTimestampReq)
  return false;
#undef DO_
}

void SetH5ActivityRedDotTimestampReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.SetH5ActivityRedDotTimestampReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 client_red_dot_timestamp = 10;
  if (this->client_red_dot_timestamp() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(10, this->client_red_dot_timestamp(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.SetH5ActivityRedDotTimestampReq)
}

::google::protobuf::uint8* SetH5ActivityRedDotTimestampReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.SetH5ActivityRedDotTimestampReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 client_red_dot_timestamp = 10;
  if (this->client_red_dot_timestamp() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(10, this->client_red_dot_timestamp(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.SetH5ActivityRedDotTimestampReq)
  return target;
}

size_t SetH5ActivityRedDotTimestampReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.SetH5ActivityRedDotTimestampReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 client_red_dot_timestamp = 10;
  if (this->client_red_dot_timestamp() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->client_red_dot_timestamp());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool SetH5ActivityRedDotTimestampRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.SetH5ActivityRedDotTimestampRsp)
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
  // @@protoc_insertion_point(parse_success:proto.SetH5ActivityRedDotTimestampRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.SetH5ActivityRedDotTimestampRsp)
  return false;
#undef DO_
}

void SetH5ActivityRedDotTimestampRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.SetH5ActivityRedDotTimestampRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 retcode = 4;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->retcode(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.SetH5ActivityRedDotTimestampRsp)
}

::google::protobuf::uint8* SetH5ActivityRedDotTimestampRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.SetH5ActivityRedDotTimestampRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 retcode = 4;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->retcode(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.SetH5ActivityRedDotTimestampRsp)
  return target;
}

size_t SetH5ActivityRedDotTimestampRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.SetH5ActivityRedDotTimestampRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // int32 retcode = 4;
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
}