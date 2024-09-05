#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "cmd/cmd_blossom.pb.h"

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

bool BlossomBriefInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.BlossomBriefInfo)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 circle_camp_id = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &circle_camp_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 resin = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &resin_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 refresh_id = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &refresh_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_guide_opened = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_guide_opened_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 city_id = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 64 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &city_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.Vector pos = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(74u /* 74 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_pos()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 state = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(80u /* 80 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &state_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 reward_id = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(88u /* 88 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &reward_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 scene_id = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(104u /* 104 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &scene_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 monster_level = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(120u /* 120 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &monster_level_)));
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
  // @@protoc_insertion_point(parse_success:proto.BlossomBriefInfo)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.BlossomBriefInfo)
  return false;
#undef DO_
}

void BlossomBriefInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.BlossomBriefInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 circle_camp_id = 2;
  if (this->circle_camp_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->circle_camp_id(), output);
  }

  // uint32 resin = 3;
  if (this->resin() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->resin(), output);
  }

  // uint32 refresh_id = 5;
  if (this->refresh_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->refresh_id(), output);
  }

  // bool is_guide_opened = 6;
  if (this->is_guide_opened() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(6, this->is_guide_opened(), output);
  }

  // uint32 city_id = 8;
  if (this->city_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(8, this->city_id(), output);
  }

  // .proto.Vector pos = 9;
  if (this->has_pos()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      9, *this->pos_, output);
  }

  // uint32 state = 10;
  if (this->state() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(10, this->state(), output);
  }

  // uint32 reward_id = 11;
  if (this->reward_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(11, this->reward_id(), output);
  }

  // uint32 scene_id = 13;
  if (this->scene_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(13, this->scene_id(), output);
  }

  // uint32 monster_level = 15;
  if (this->monster_level() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(15, this->monster_level(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.BlossomBriefInfo)
}

::google::protobuf::uint8* BlossomBriefInfo::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.BlossomBriefInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 circle_camp_id = 2;
  if (this->circle_camp_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->circle_camp_id(), target);
  }

  // uint32 resin = 3;
  if (this->resin() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->resin(), target);
  }

  // uint32 refresh_id = 5;
  if (this->refresh_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->refresh_id(), target);
  }

  // bool is_guide_opened = 6;
  if (this->is_guide_opened() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(6, this->is_guide_opened(), target);
  }

  // uint32 city_id = 8;
  if (this->city_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(8, this->city_id(), target);
  }

  // .proto.Vector pos = 9;
  if (this->has_pos()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        9, *this->pos_, deterministic, target);
  }

  // uint32 state = 10;
  if (this->state() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(10, this->state(), target);
  }

  // uint32 reward_id = 11;
  if (this->reward_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(11, this->reward_id(), target);
  }

  // uint32 scene_id = 13;
  if (this->scene_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(13, this->scene_id(), target);
  }

  // uint32 monster_level = 15;
  if (this->monster_level() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(15, this->monster_level(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.BlossomBriefInfo)
  return target;
}

size_t BlossomBriefInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.BlossomBriefInfo)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .proto.Vector pos = 9;
  if (this->has_pos()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->pos_);
  }

  // uint32 circle_camp_id = 2;
  if (this->circle_camp_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->circle_camp_id());
  }

  // uint32 resin = 3;
  if (this->resin() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->resin());
  }

  // uint32 refresh_id = 5;
  if (this->refresh_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->refresh_id());
  }

  // bool is_guide_opened = 6;
  if (this->is_guide_opened() != 0) {
    total_size += 1 + 1;
  }

  // uint32 city_id = 8;
  if (this->city_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->city_id());
  }

  // uint32 state = 10;
  if (this->state() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->state());
  }

  // uint32 monster_level = 15;
  if (this->monster_level() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->monster_level());
  }

  // uint32 reward_id = 11;
  if (this->reward_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->reward_id());
  }

  // uint32 scene_id = 13;
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

bool GetBlossomBriefInfoListReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.GetBlossomBriefInfoListReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated uint32 city_id_list = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_city_id_list())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 1, 42u, input, this->mutable_city_id_list())));
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
  // @@protoc_insertion_point(parse_success:proto.GetBlossomBriefInfoListReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.GetBlossomBriefInfoListReq)
  return false;
#undef DO_
}

void GetBlossomBriefInfoListReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.GetBlossomBriefInfoListReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated uint32 city_id_list = 5;
  if (this->city_id_list_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(5, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _city_id_list_cached_byte_size_));
  }
  for (int i = 0, n = this->city_id_list_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32NoTag(
      this->city_id_list(i), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.GetBlossomBriefInfoListReq)
}

::google::protobuf::uint8* GetBlossomBriefInfoListReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.GetBlossomBriefInfoListReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated uint32 city_id_list = 5;
  if (this->city_id_list_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      5,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::uint32>(
            _city_id_list_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt32NoTagToArray(this->city_id_list_, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.GetBlossomBriefInfoListReq)
  return target;
}

size_t GetBlossomBriefInfoListReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.GetBlossomBriefInfoListReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated uint32 city_id_list = 5;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      UInt32Size(this->city_id_list_);
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _city_id_list_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool GetBlossomBriefInfoListRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.GetBlossomBriefInfoListRsp)
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

      // repeated .proto.BlossomBriefInfo brief_info_list = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_brief_info_list()));
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
  // @@protoc_insertion_point(parse_success:proto.GetBlossomBriefInfoListRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.GetBlossomBriefInfoListRsp)
  return false;
#undef DO_
}

void GetBlossomBriefInfoListRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.GetBlossomBriefInfoListRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 retcode = 2;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->retcode(), output);
  }

  // repeated .proto.BlossomBriefInfo brief_info_list = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->brief_info_list_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->brief_info_list(static_cast<int>(i)), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.GetBlossomBriefInfoListRsp)
}

::google::protobuf::uint8* GetBlossomBriefInfoListRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.GetBlossomBriefInfoListRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 retcode = 2;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->retcode(), target);
  }

  // repeated .proto.BlossomBriefInfo brief_info_list = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->brief_info_list_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        4, this->brief_info_list(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.GetBlossomBriefInfoListRsp)
  return target;
}

size_t GetBlossomBriefInfoListRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.GetBlossomBriefInfoListRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .proto.BlossomBriefInfo brief_info_list = 4;
  {
    unsigned int count = static_cast<unsigned int>(this->brief_info_list_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->brief_info_list(static_cast<int>(i)));
    }
  }

  // int32 retcode = 2;
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

bool BlossomBriefInfoNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.BlossomBriefInfoNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .proto.BlossomBriefInfo brief_info_list = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(74u /* 74 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_brief_info_list()));
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
  // @@protoc_insertion_point(parse_success:proto.BlossomBriefInfoNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.BlossomBriefInfoNotify)
  return false;
#undef DO_
}

void BlossomBriefInfoNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.BlossomBriefInfoNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.BlossomBriefInfo brief_info_list = 9;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->brief_info_list_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      9, this->brief_info_list(static_cast<int>(i)), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.BlossomBriefInfoNotify)
}

::google::protobuf::uint8* BlossomBriefInfoNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.BlossomBriefInfoNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.BlossomBriefInfo brief_info_list = 9;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->brief_info_list_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        9, this->brief_info_list(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.BlossomBriefInfoNotify)
  return target;
}

size_t BlossomBriefInfoNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.BlossomBriefInfoNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .proto.BlossomBriefInfo brief_info_list = 9;
  {
    unsigned int count = static_cast<unsigned int>(this->brief_info_list_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->brief_info_list(static_cast<int>(i)));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool WorldOwnerBlossomBriefInfoNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.WorldOwnerBlossomBriefInfoNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .proto.BlossomBriefInfo brief_info_list = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(90u /* 90 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_brief_info_list()));
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
  // @@protoc_insertion_point(parse_success:proto.WorldOwnerBlossomBriefInfoNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.WorldOwnerBlossomBriefInfoNotify)
  return false;
#undef DO_
}

void WorldOwnerBlossomBriefInfoNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.WorldOwnerBlossomBriefInfoNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.BlossomBriefInfo brief_info_list = 11;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->brief_info_list_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      11, this->brief_info_list(static_cast<int>(i)), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.WorldOwnerBlossomBriefInfoNotify)
}

::google::protobuf::uint8* WorldOwnerBlossomBriefInfoNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.WorldOwnerBlossomBriefInfoNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.BlossomBriefInfo brief_info_list = 11;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->brief_info_list_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        11, this->brief_info_list(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.WorldOwnerBlossomBriefInfoNotify)
  return target;
}

size_t WorldOwnerBlossomBriefInfoNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.WorldOwnerBlossomBriefInfoNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .proto.BlossomBriefInfo brief_info_list = 11;
  {
    unsigned int count = static_cast<unsigned int>(this->brief_info_list_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->brief_info_list(static_cast<int>(i)));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool BlossomScheduleInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.BlossomScheduleInfo)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 circle_camp_id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &circle_camp_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 refresh_id = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &refresh_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 state = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &state_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 finish_progress = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(96u /* 96 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &finish_progress_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 round = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(112u /* 112 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &round_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 progress = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(120u /* 120 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &progress_)));
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
  // @@protoc_insertion_point(parse_success:proto.BlossomScheduleInfo)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.BlossomScheduleInfo)
  return false;
#undef DO_
}

void BlossomScheduleInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.BlossomScheduleInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 circle_camp_id = 1;
  if (this->circle_camp_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->circle_camp_id(), output);
  }

  // uint32 refresh_id = 6;
  if (this->refresh_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->refresh_id(), output);
  }

  // uint32 state = 9;
  if (this->state() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(9, this->state(), output);
  }

  // uint32 finish_progress = 12;
  if (this->finish_progress() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(12, this->finish_progress(), output);
  }

  // uint32 round = 14;
  if (this->round() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(14, this->round(), output);
  }

  // uint32 progress = 15;
  if (this->progress() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(15, this->progress(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.BlossomScheduleInfo)
}

::google::protobuf::uint8* BlossomScheduleInfo::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.BlossomScheduleInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 circle_camp_id = 1;
  if (this->circle_camp_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->circle_camp_id(), target);
  }

  // uint32 refresh_id = 6;
  if (this->refresh_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, this->refresh_id(), target);
  }

  // uint32 state = 9;
  if (this->state() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(9, this->state(), target);
  }

  // uint32 finish_progress = 12;
  if (this->finish_progress() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(12, this->finish_progress(), target);
  }

  // uint32 round = 14;
  if (this->round() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(14, this->round(), target);
  }

  // uint32 progress = 15;
  if (this->progress() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(15, this->progress(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.BlossomScheduleInfo)
  return target;
}

size_t BlossomScheduleInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.BlossomScheduleInfo)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 circle_camp_id = 1;
  if (this->circle_camp_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->circle_camp_id());
  }

  // uint32 refresh_id = 6;
  if (this->refresh_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->refresh_id());
  }

  // uint32 state = 9;
  if (this->state() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->state());
  }

  // uint32 finish_progress = 12;
  if (this->finish_progress() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->finish_progress());
  }

  // uint32 round = 14;
  if (this->round() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->round());
  }

  // uint32 progress = 15;
  if (this->progress() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->progress());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool WorldOwnerBlossomScheduleInfoNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.WorldOwnerBlossomScheduleInfoNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .proto.BlossomScheduleInfo schedule_info = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_schedule_info()));
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
  // @@protoc_insertion_point(parse_success:proto.WorldOwnerBlossomScheduleInfoNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.WorldOwnerBlossomScheduleInfoNotify)
  return false;
#undef DO_
}

void WorldOwnerBlossomScheduleInfoNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.WorldOwnerBlossomScheduleInfoNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.BlossomScheduleInfo schedule_info = 4;
  if (this->has_schedule_info()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, *this->schedule_info_, output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.WorldOwnerBlossomScheduleInfoNotify)
}

::google::protobuf::uint8* WorldOwnerBlossomScheduleInfoNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.WorldOwnerBlossomScheduleInfoNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.BlossomScheduleInfo schedule_info = 4;
  if (this->has_schedule_info()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        4, *this->schedule_info_, deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.WorldOwnerBlossomScheduleInfoNotify)
  return target;
}

size_t WorldOwnerBlossomScheduleInfoNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.WorldOwnerBlossomScheduleInfoNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .proto.BlossomScheduleInfo schedule_info = 4;
  if (this->has_schedule_info()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->schedule_info_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool BlossomChestCreateNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.BlossomChestCreateNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 refresh_id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &refresh_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 circle_camp_id = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &circle_camp_id_)));
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
  // @@protoc_insertion_point(parse_success:proto.BlossomChestCreateNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.BlossomChestCreateNotify)
  return false;
#undef DO_
}

void BlossomChestCreateNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.BlossomChestCreateNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 refresh_id = 1;
  if (this->refresh_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->refresh_id(), output);
  }

  // uint32 circle_camp_id = 9;
  if (this->circle_camp_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(9, this->circle_camp_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.BlossomChestCreateNotify)
}

::google::protobuf::uint8* BlossomChestCreateNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.BlossomChestCreateNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 refresh_id = 1;
  if (this->refresh_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->refresh_id(), target);
  }

  // uint32 circle_camp_id = 9;
  if (this->circle_camp_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(9, this->circle_camp_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.BlossomChestCreateNotify)
  return target;
}

size_t BlossomChestCreateNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.BlossomChestCreateNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 refresh_id = 1;
  if (this->refresh_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->refresh_id());
  }

  // uint32 circle_camp_id = 9;
  if (this->circle_camp_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->circle_camp_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool OpenBlossomCircleCampGuideNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.OpenBlossomCircleCampGuideNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 refresh_id = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &refresh_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated uint32 circle_camp_id_list = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(106u /* 106 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_circle_camp_id_list())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(104u /* 104 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 1, 106u, input, this->mutable_circle_camp_id_list())));
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
  // @@protoc_insertion_point(parse_success:proto.OpenBlossomCircleCampGuideNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.OpenBlossomCircleCampGuideNotify)
  return false;
#undef DO_
}

void OpenBlossomCircleCampGuideNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.OpenBlossomCircleCampGuideNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 refresh_id = 5;
  if (this->refresh_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->refresh_id(), output);
  }

  // repeated uint32 circle_camp_id_list = 13;
  if (this->circle_camp_id_list_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(13, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _circle_camp_id_list_cached_byte_size_));
  }
  for (int i = 0, n = this->circle_camp_id_list_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32NoTag(
      this->circle_camp_id_list(i), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.OpenBlossomCircleCampGuideNotify)
}

::google::protobuf::uint8* OpenBlossomCircleCampGuideNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.OpenBlossomCircleCampGuideNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 refresh_id = 5;
  if (this->refresh_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->refresh_id(), target);
  }

  // repeated uint32 circle_camp_id_list = 13;
  if (this->circle_camp_id_list_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      13,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::uint32>(
            _circle_camp_id_list_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt32NoTagToArray(this->circle_camp_id_list_, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.OpenBlossomCircleCampGuideNotify)
  return target;
}

size_t OpenBlossomCircleCampGuideNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.OpenBlossomCircleCampGuideNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated uint32 circle_camp_id_list = 13;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      UInt32Size(this->circle_camp_id_list_);
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _circle_camp_id_list_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // uint32 refresh_id = 5;
  if (this->refresh_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->refresh_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}
}