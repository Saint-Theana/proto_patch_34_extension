#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "cmd/cmd_gacha.pb.h"

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

bool GetGachaInfoReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.GetGachaInfoReq)
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
  // @@protoc_insertion_point(parse_success:proto.GetGachaInfoReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.GetGachaInfoReq)
  return false;
#undef DO_
}

void GetGachaInfoReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.GetGachaInfoReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.GetGachaInfoReq)
}

::google::protobuf::uint8* GetGachaInfoReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.GetGachaInfoReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.GetGachaInfoReq)
  return target;
}

size_t GetGachaInfoReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.GetGachaInfoReq)
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

bool GachaUpInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.GachaUpInfo)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated uint32 item_id_list = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(90u /* 90 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_item_id_list())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(88u /* 88 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 1, 90u, input, this->mutable_item_id_list())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 item_parent_type = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(120u /* 120 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &item_parent_type_)));
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
  // @@protoc_insertion_point(parse_success:proto.GachaUpInfo)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.GachaUpInfo)
  return false;
#undef DO_
}

void GachaUpInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.GachaUpInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated uint32 item_id_list = 11;
  if (this->item_id_list_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(11, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _item_id_list_cached_byte_size_));
  }
  for (int i = 0, n = this->item_id_list_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32NoTag(
      this->item_id_list(i), output);
  }

  // uint32 item_parent_type = 15;
  if (this->item_parent_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(15, this->item_parent_type(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.GachaUpInfo)
}

::google::protobuf::uint8* GachaUpInfo::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.GachaUpInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated uint32 item_id_list = 11;
  if (this->item_id_list_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      11,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::uint32>(
            _item_id_list_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt32NoTagToArray(this->item_id_list_, target);
  }

  // uint32 item_parent_type = 15;
  if (this->item_parent_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(15, this->item_parent_type(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.GachaUpInfo)
  return target;
}

size_t GachaUpInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.GachaUpInfo)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated uint32 item_id_list = 11;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      UInt32Size(this->item_id_list_);
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _item_id_list_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // uint32 item_parent_type = 15;
  if (this->item_parent_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->item_parent_type());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool GachaInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.GachaInfo)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(16383u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 gacha_type = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &gacha_type_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 schedule_id = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &schedule_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 end_time = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &end_time_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 cost_item_id = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &cost_item_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string gacha_prob_url = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_gacha_prob_url()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->gacha_prob_url().data(), static_cast<int>(this->gacha_prob_url().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.GachaInfo.gacha_prob_url"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 gacha_sort_id = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &gacha_sort_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string gacha_record_url = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(58u /* 58 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_gacha_record_url()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->gacha_record_url().data(), static_cast<int>(this->gacha_record_url().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.GachaInfo.gacha_record_url"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string gacha_preview_prefab_path = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(66u /* 66 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_gacha_preview_prefab_path()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->gacha_preview_prefab_path().data(), static_cast<int>(this->gacha_preview_prefab_path().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.GachaInfo.gacha_preview_prefab_path"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string gacha_prefab_path = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(74u /* 74 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_gacha_prefab_path()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->gacha_prefab_path().data(), static_cast<int>(this->gacha_prefab_path().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.GachaInfo.gacha_prefab_path"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 ten_cost_item_num = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(80u /* 80 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &ten_cost_item_num_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 left_gacha_times = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(88u /* 88 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &left_gacha_times_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 gacha_times_limit = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(96u /* 96 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &gacha_times_limit_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 ten_cost_item_id = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(104u /* 104 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &ten_cost_item_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 cost_item_num = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(112u /* 112 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &cost_item_num_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 begin_time = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(120u /* 120 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &begin_time_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 cur_schedule_daily_gacha_times = 48;
      case 48: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(128u /* 384 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &cur_schedule_daily_gacha_times_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 wish_progress = 246;
      case 246: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(176u /* 1968 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &wish_progress_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated uint32 display_up4_item_list = 279;
      case 279: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(186u /* 2234 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_display_up4_item_list())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(184u /* 2232 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 2, 2234u, input, this->mutable_display_up4_item_list())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 wish_item_id = 309;
      case 309: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(168u /* 2472 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &wish_item_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string gacha_prob_url_oversea = 765;
      case 765: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(234u /* 6122 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_gacha_prob_url_oversea()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->gacha_prob_url_oversea().data(), static_cast<int>(this->gacha_prob_url_oversea().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.GachaInfo.gacha_prob_url_oversea"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_new_wish = 869;
      case 869: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 6952 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_new_wish_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string gacha_record_url_oversea = 1004;
      case 1004: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(98u /* 8034 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_gacha_record_url_oversea()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->gacha_record_url_oversea().data(), static_cast<int>(this->gacha_record_url_oversea().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.GachaInfo.gacha_record_url_oversea"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string title_textmap = 1228;
      case 1228: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(98u /* 9826 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_title_textmap()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->title_textmap().data(), static_cast<int>(this->title_textmap().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.GachaInfo.title_textmap"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 wish_max_progress = 1669;
      case 1669: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 13352 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &wish_max_progress_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .proto.GachaUpInfo gacha_up_info_list = 1836;
      case 1836: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(98u /* 14690 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_gacha_up_info_list()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated uint32 display_up5_item_list = 1851;
      case 1851: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(218u /* 14810 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_display_up5_item_list())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(216u /* 14808 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 2, 14810u, input, this->mutable_display_up5_item_list())));
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
  // @@protoc_insertion_point(parse_success:proto.GachaInfo)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.GachaInfo)
  return false;
#undef DO_
}

void GachaInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.GachaInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 gacha_type = 1;
  if (this->gacha_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->gacha_type(), output);
  }

  // uint32 schedule_id = 2;
  if (this->schedule_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->schedule_id(), output);
  }

  // uint32 end_time = 3;
  if (this->end_time() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->end_time(), output);
  }

  // uint32 cost_item_id = 4;
  if (this->cost_item_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->cost_item_id(), output);
  }

  // string gacha_prob_url = 5;
  if (this->gacha_prob_url().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->gacha_prob_url().data(), static_cast<int>(this->gacha_prob_url().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.GachaInfo.gacha_prob_url");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      5, this->gacha_prob_url(), output);
  }

  // uint32 gacha_sort_id = 6;
  if (this->gacha_sort_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->gacha_sort_id(), output);
  }

  // string gacha_record_url = 7;
  if (this->gacha_record_url().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->gacha_record_url().data(), static_cast<int>(this->gacha_record_url().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.GachaInfo.gacha_record_url");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      7, this->gacha_record_url(), output);
  }

  // string gacha_preview_prefab_path = 8;
  if (this->gacha_preview_prefab_path().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->gacha_preview_prefab_path().data(), static_cast<int>(this->gacha_preview_prefab_path().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.GachaInfo.gacha_preview_prefab_path");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      8, this->gacha_preview_prefab_path(), output);
  }

  // string gacha_prefab_path = 9;
  if (this->gacha_prefab_path().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->gacha_prefab_path().data(), static_cast<int>(this->gacha_prefab_path().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.GachaInfo.gacha_prefab_path");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      9, this->gacha_prefab_path(), output);
  }

  // uint32 ten_cost_item_num = 10;
  if (this->ten_cost_item_num() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(10, this->ten_cost_item_num(), output);
  }

  // uint32 left_gacha_times = 11;
  if (this->left_gacha_times() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(11, this->left_gacha_times(), output);
  }

  // uint32 gacha_times_limit = 12;
  if (this->gacha_times_limit() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(12, this->gacha_times_limit(), output);
  }

  // uint32 ten_cost_item_id = 13;
  if (this->ten_cost_item_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(13, this->ten_cost_item_id(), output);
  }

  // uint32 cost_item_num = 14;
  if (this->cost_item_num() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(14, this->cost_item_num(), output);
  }

  // uint32 begin_time = 15;
  if (this->begin_time() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(15, this->begin_time(), output);
  }

  // uint32 cur_schedule_daily_gacha_times = 48;
  if (this->cur_schedule_daily_gacha_times() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(48, this->cur_schedule_daily_gacha_times(), output);
  }

  // uint32 wish_progress = 246;
  if (this->wish_progress() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(246, this->wish_progress(), output);
  }

  // repeated uint32 display_up4_item_list = 279;
  if (this->display_up4_item_list_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(279, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _display_up4_item_list_cached_byte_size_));
  }
  for (int i = 0, n = this->display_up4_item_list_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32NoTag(
      this->display_up4_item_list(i), output);
  }

  // uint32 wish_item_id = 309;
  if (this->wish_item_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(309, this->wish_item_id(), output);
  }

  // string gacha_prob_url_oversea = 765;
  if (this->gacha_prob_url_oversea().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->gacha_prob_url_oversea().data(), static_cast<int>(this->gacha_prob_url_oversea().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.GachaInfo.gacha_prob_url_oversea");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      765, this->gacha_prob_url_oversea(), output);
  }

  // bool is_new_wish = 869;
  if (this->is_new_wish() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(869, this->is_new_wish(), output);
  }

  // string gacha_record_url_oversea = 1004;
  if (this->gacha_record_url_oversea().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->gacha_record_url_oversea().data(), static_cast<int>(this->gacha_record_url_oversea().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.GachaInfo.gacha_record_url_oversea");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1004, this->gacha_record_url_oversea(), output);
  }

  // string title_textmap = 1228;
  if (this->title_textmap().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->title_textmap().data(), static_cast<int>(this->title_textmap().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.GachaInfo.title_textmap");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1228, this->title_textmap(), output);
  }

  // uint32 wish_max_progress = 1669;
  if (this->wish_max_progress() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1669, this->wish_max_progress(), output);
  }

  // repeated .proto.GachaUpInfo gacha_up_info_list = 1836;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->gacha_up_info_list_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1836, this->gacha_up_info_list(static_cast<int>(i)), output);
  }

  // repeated uint32 display_up5_item_list = 1851;
  if (this->display_up5_item_list_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(1851, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _display_up5_item_list_cached_byte_size_));
  }
  for (int i = 0, n = this->display_up5_item_list_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32NoTag(
      this->display_up5_item_list(i), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.GachaInfo)
}

::google::protobuf::uint8* GachaInfo::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.GachaInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 gacha_type = 1;
  if (this->gacha_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->gacha_type(), target);
  }

  // uint32 schedule_id = 2;
  if (this->schedule_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->schedule_id(), target);
  }

  // uint32 end_time = 3;
  if (this->end_time() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->end_time(), target);
  }

  // uint32 cost_item_id = 4;
  if (this->cost_item_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->cost_item_id(), target);
  }

  // string gacha_prob_url = 5;
  if (this->gacha_prob_url().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->gacha_prob_url().data(), static_cast<int>(this->gacha_prob_url().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.GachaInfo.gacha_prob_url");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->gacha_prob_url(), target);
  }

  // uint32 gacha_sort_id = 6;
  if (this->gacha_sort_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, this->gacha_sort_id(), target);
  }

  // string gacha_record_url = 7;
  if (this->gacha_record_url().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->gacha_record_url().data(), static_cast<int>(this->gacha_record_url().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.GachaInfo.gacha_record_url");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        7, this->gacha_record_url(), target);
  }

  // string gacha_preview_prefab_path = 8;
  if (this->gacha_preview_prefab_path().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->gacha_preview_prefab_path().data(), static_cast<int>(this->gacha_preview_prefab_path().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.GachaInfo.gacha_preview_prefab_path");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        8, this->gacha_preview_prefab_path(), target);
  }

  // string gacha_prefab_path = 9;
  if (this->gacha_prefab_path().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->gacha_prefab_path().data(), static_cast<int>(this->gacha_prefab_path().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.GachaInfo.gacha_prefab_path");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        9, this->gacha_prefab_path(), target);
  }

  // uint32 ten_cost_item_num = 10;
  if (this->ten_cost_item_num() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(10, this->ten_cost_item_num(), target);
  }

  // uint32 left_gacha_times = 11;
  if (this->left_gacha_times() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(11, this->left_gacha_times(), target);
  }

  // uint32 gacha_times_limit = 12;
  if (this->gacha_times_limit() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(12, this->gacha_times_limit(), target);
  }

  // uint32 ten_cost_item_id = 13;
  if (this->ten_cost_item_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(13, this->ten_cost_item_id(), target);
  }

  // uint32 cost_item_num = 14;
  if (this->cost_item_num() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(14, this->cost_item_num(), target);
  }

  // uint32 begin_time = 15;
  if (this->begin_time() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(15, this->begin_time(), target);
  }

  // uint32 cur_schedule_daily_gacha_times = 48;
  if (this->cur_schedule_daily_gacha_times() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(48, this->cur_schedule_daily_gacha_times(), target);
  }

  // uint32 wish_progress = 246;
  if (this->wish_progress() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(246, this->wish_progress(), target);
  }

  // repeated uint32 display_up4_item_list = 279;
  if (this->display_up4_item_list_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      279,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::uint32>(
            _display_up4_item_list_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt32NoTagToArray(this->display_up4_item_list_, target);
  }

  // uint32 wish_item_id = 309;
  if (this->wish_item_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(309, this->wish_item_id(), target);
  }

  // string gacha_prob_url_oversea = 765;
  if (this->gacha_prob_url_oversea().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->gacha_prob_url_oversea().data(), static_cast<int>(this->gacha_prob_url_oversea().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.GachaInfo.gacha_prob_url_oversea");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        765, this->gacha_prob_url_oversea(), target);
  }

  // bool is_new_wish = 869;
  if (this->is_new_wish() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(869, this->is_new_wish(), target);
  }

  // string gacha_record_url_oversea = 1004;
  if (this->gacha_record_url_oversea().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->gacha_record_url_oversea().data(), static_cast<int>(this->gacha_record_url_oversea().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.GachaInfo.gacha_record_url_oversea");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1004, this->gacha_record_url_oversea(), target);
  }

  // string title_textmap = 1228;
  if (this->title_textmap().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->title_textmap().data(), static_cast<int>(this->title_textmap().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.GachaInfo.title_textmap");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1228, this->title_textmap(), target);
  }

  // uint32 wish_max_progress = 1669;
  if (this->wish_max_progress() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1669, this->wish_max_progress(), target);
  }

  // repeated .proto.GachaUpInfo gacha_up_info_list = 1836;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->gacha_up_info_list_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1836, this->gacha_up_info_list(static_cast<int>(i)), deterministic, target);
  }

  // repeated uint32 display_up5_item_list = 1851;
  if (this->display_up5_item_list_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      1851,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::uint32>(
            _display_up5_item_list_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt32NoTagToArray(this->display_up5_item_list_, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.GachaInfo)
  return target;
}

size_t GachaInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.GachaInfo)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated uint32 display_up4_item_list = 279;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      UInt32Size(this->display_up4_item_list_);
    if (data_size > 0) {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _display_up4_item_list_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // repeated .proto.GachaUpInfo gacha_up_info_list = 1836;
  {
    unsigned int count = static_cast<unsigned int>(this->gacha_up_info_list_size());
    total_size += 2UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->gacha_up_info_list(static_cast<int>(i)));
    }
  }

  // repeated uint32 display_up5_item_list = 1851;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      UInt32Size(this->display_up5_item_list_);
    if (data_size > 0) {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _display_up5_item_list_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // string gacha_prob_url = 5;
  if (this->gacha_prob_url().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->gacha_prob_url());
  }

  // string gacha_record_url = 7;
  if (this->gacha_record_url().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->gacha_record_url());
  }

  // string gacha_preview_prefab_path = 8;
  if (this->gacha_preview_prefab_path().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->gacha_preview_prefab_path());
  }

  // string gacha_prefab_path = 9;
  if (this->gacha_prefab_path().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->gacha_prefab_path());
  }

  // string gacha_prob_url_oversea = 765;
  if (this->gacha_prob_url_oversea().size() > 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->gacha_prob_url_oversea());
  }

  // string gacha_record_url_oversea = 1004;
  if (this->gacha_record_url_oversea().size() > 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->gacha_record_url_oversea());
  }

  // string title_textmap = 1228;
  if (this->title_textmap().size() > 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->title_textmap());
  }

  // uint32 gacha_type = 1;
  if (this->gacha_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->gacha_type());
  }

  // uint32 schedule_id = 2;
  if (this->schedule_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->schedule_id());
  }

  // uint32 end_time = 3;
  if (this->end_time() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->end_time());
  }

  // uint32 cost_item_id = 4;
  if (this->cost_item_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->cost_item_id());
  }

  // uint32 gacha_sort_id = 6;
  if (this->gacha_sort_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->gacha_sort_id());
  }

  // uint32 ten_cost_item_num = 10;
  if (this->ten_cost_item_num() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->ten_cost_item_num());
  }

  // uint32 left_gacha_times = 11;
  if (this->left_gacha_times() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->left_gacha_times());
  }

  // uint32 gacha_times_limit = 12;
  if (this->gacha_times_limit() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->gacha_times_limit());
  }

  // uint32 ten_cost_item_id = 13;
  if (this->ten_cost_item_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->ten_cost_item_id());
  }

  // uint32 cost_item_num = 14;
  if (this->cost_item_num() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->cost_item_num());
  }

  // uint32 begin_time = 15;
  if (this->begin_time() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->begin_time());
  }

  // uint32 cur_schedule_daily_gacha_times = 48;
  if (this->cur_schedule_daily_gacha_times() != 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->cur_schedule_daily_gacha_times());
  }

  // uint32 wish_progress = 246;
  if (this->wish_progress() != 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->wish_progress());
  }

  // uint32 wish_item_id = 309;
  if (this->wish_item_id() != 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->wish_item_id());
  }

  // bool is_new_wish = 869;
  if (this->is_new_wish() != 0) {
    total_size += 2 + 1;
  }

  // uint32 wish_max_progress = 1669;
  if (this->wish_max_progress() != 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->wish_max_progress());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool GetGachaInfoRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.GetGachaInfoRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 daily_gacha_times = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &daily_gacha_times_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .proto.GachaInfo gacha_info_list = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_gacha_info_list()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 gacha_random = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &gacha_random_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_under_general_restrict = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(88u /* 88 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_under_general_restrict_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_under_minors_restrict = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(104u /* 104 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_under_minors_restrict_)));
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
  // @@protoc_insertion_point(parse_success:proto.GetGachaInfoRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.GetGachaInfoRsp)
  return false;
#undef DO_
}

void GetGachaInfoRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.GetGachaInfoRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 daily_gacha_times = 1;
  if (this->daily_gacha_times() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->daily_gacha_times(), output);
  }

  // repeated .proto.GachaInfo gacha_info_list = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->gacha_info_list_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->gacha_info_list(static_cast<int>(i)), output);
  }

  // uint32 gacha_random = 6;
  if (this->gacha_random() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->gacha_random(), output);
  }

  // bool is_under_general_restrict = 11;
  if (this->is_under_general_restrict() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(11, this->is_under_general_restrict(), output);
  }

  // bool is_under_minors_restrict = 13;
  if (this->is_under_minors_restrict() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(13, this->is_under_minors_restrict(), output);
  }

  // int32 retcode = 14;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(14, this->retcode(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.GetGachaInfoRsp)
}

::google::protobuf::uint8* GetGachaInfoRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.GetGachaInfoRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 daily_gacha_times = 1;
  if (this->daily_gacha_times() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->daily_gacha_times(), target);
  }

  // repeated .proto.GachaInfo gacha_info_list = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->gacha_info_list_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, this->gacha_info_list(static_cast<int>(i)), deterministic, target);
  }

  // uint32 gacha_random = 6;
  if (this->gacha_random() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, this->gacha_random(), target);
  }

  // bool is_under_general_restrict = 11;
  if (this->is_under_general_restrict() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(11, this->is_under_general_restrict(), target);
  }

  // bool is_under_minors_restrict = 13;
  if (this->is_under_minors_restrict() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(13, this->is_under_minors_restrict(), target);
  }

  // int32 retcode = 14;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(14, this->retcode(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.GetGachaInfoRsp)
  return target;
}

size_t GetGachaInfoRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.GetGachaInfoRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .proto.GachaInfo gacha_info_list = 3;
  {
    unsigned int count = static_cast<unsigned int>(this->gacha_info_list_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->gacha_info_list(static_cast<int>(i)));
    }
  }

  // uint32 daily_gacha_times = 1;
  if (this->daily_gacha_times() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->daily_gacha_times());
  }

  // uint32 gacha_random = 6;
  if (this->gacha_random() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->gacha_random());
  }

  // bool is_under_general_restrict = 11;
  if (this->is_under_general_restrict() != 0) {
    total_size += 1 + 1;
  }

  // bool is_under_minors_restrict = 13;
  if (this->is_under_minors_restrict() != 0) {
    total_size += 1 + 1;
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

bool DoGachaReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.DoGachaReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 gacha_type = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &gacha_type_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 gacha_schedule_id = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &gacha_schedule_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 gacha_times = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(80u /* 80 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &gacha_times_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 gacha_random = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(96u /* 96 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &gacha_random_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string gacha_tag = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(122u /* 122 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_gacha_tag()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->gacha_tag().data(), static_cast<int>(this->gacha_tag().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.DoGachaReq.gacha_tag"));
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
  // @@protoc_insertion_point(parse_success:proto.DoGachaReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.DoGachaReq)
  return false;
#undef DO_
}

void DoGachaReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.DoGachaReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 gacha_type = 2;
  if (this->gacha_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->gacha_type(), output);
  }

  // uint32 gacha_schedule_id = 3;
  if (this->gacha_schedule_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->gacha_schedule_id(), output);
  }

  // uint32 gacha_times = 10;
  if (this->gacha_times() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(10, this->gacha_times(), output);
  }

  // uint32 gacha_random = 12;
  if (this->gacha_random() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(12, this->gacha_random(), output);
  }

  // string gacha_tag = 15;
  if (this->gacha_tag().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->gacha_tag().data(), static_cast<int>(this->gacha_tag().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.DoGachaReq.gacha_tag");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      15, this->gacha_tag(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.DoGachaReq)
}

::google::protobuf::uint8* DoGachaReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.DoGachaReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 gacha_type = 2;
  if (this->gacha_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->gacha_type(), target);
  }

  // uint32 gacha_schedule_id = 3;
  if (this->gacha_schedule_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->gacha_schedule_id(), target);
  }

  // uint32 gacha_times = 10;
  if (this->gacha_times() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(10, this->gacha_times(), target);
  }

  // uint32 gacha_random = 12;
  if (this->gacha_random() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(12, this->gacha_random(), target);
  }

  // string gacha_tag = 15;
  if (this->gacha_tag().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->gacha_tag().data(), static_cast<int>(this->gacha_tag().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.DoGachaReq.gacha_tag");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        15, this->gacha_tag(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.DoGachaReq)
  return target;
}

size_t DoGachaReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.DoGachaReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string gacha_tag = 15;
  if (this->gacha_tag().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->gacha_tag());
  }

  // uint32 gacha_type = 2;
  if (this->gacha_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->gacha_type());
  }

  // uint32 gacha_schedule_id = 3;
  if (this->gacha_schedule_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->gacha_schedule_id());
  }

  // uint32 gacha_times = 10;
  if (this->gacha_times() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->gacha_times());
  }

  // uint32 gacha_random = 12;
  if (this->gacha_random() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->gacha_random());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool GachaTransferItem::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.GachaTransferItem)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bool is_transfer_item_new = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_transfer_item_new_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.ItemParam item = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_item()));
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
  // @@protoc_insertion_point(parse_success:proto.GachaTransferItem)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.GachaTransferItem)
  return false;
#undef DO_
}

void GachaTransferItem::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.GachaTransferItem)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool is_transfer_item_new = 3;
  if (this->is_transfer_item_new() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->is_transfer_item_new(), output);
  }

  // .proto.ItemParam item = 5;
  if (this->has_item()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, *this->item_, output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.GachaTransferItem)
}

::google::protobuf::uint8* GachaTransferItem::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.GachaTransferItem)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool is_transfer_item_new = 3;
  if (this->is_transfer_item_new() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(3, this->is_transfer_item_new(), target);
  }

  // .proto.ItemParam item = 5;
  if (this->has_item()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        5, *this->item_, deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.GachaTransferItem)
  return target;
}

size_t GachaTransferItem::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.GachaTransferItem)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .proto.ItemParam item = 5;
  if (this->has_item()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->item_);
  }

  // bool is_transfer_item_new = 3;
  if (this->is_transfer_item_new() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool GachaItem::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.GachaItem)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .proto.ItemParam gacha_item = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_gacha_item()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_gacha_item_new = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_gacha_item_new_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .proto.GachaTransferItem transfer_items = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(82u /* 82 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_transfer_items()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_flash_card = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(88u /* 88 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_flash_card_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .proto.ItemParam token_item_list = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(98u /* 98 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_token_item_list()));
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
  // @@protoc_insertion_point(parse_success:proto.GachaItem)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.GachaItem)
  return false;
#undef DO_
}

void GachaItem::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.GachaItem)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.ItemParam gacha_item = 4;
  if (this->has_gacha_item()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, *this->gacha_item_, output);
  }

  // bool is_gacha_item_new = 9;
  if (this->is_gacha_item_new() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(9, this->is_gacha_item_new(), output);
  }

  // repeated .proto.GachaTransferItem transfer_items = 10;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->transfer_items_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      10, this->transfer_items(static_cast<int>(i)), output);
  }

  // bool is_flash_card = 11;
  if (this->is_flash_card() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(11, this->is_flash_card(), output);
  }

  // repeated .proto.ItemParam token_item_list = 12;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->token_item_list_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      12, this->token_item_list(static_cast<int>(i)), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.GachaItem)
}

::google::protobuf::uint8* GachaItem::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.GachaItem)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.ItemParam gacha_item = 4;
  if (this->has_gacha_item()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        4, *this->gacha_item_, deterministic, target);
  }

  // bool is_gacha_item_new = 9;
  if (this->is_gacha_item_new() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(9, this->is_gacha_item_new(), target);
  }

  // repeated .proto.GachaTransferItem transfer_items = 10;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->transfer_items_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        10, this->transfer_items(static_cast<int>(i)), deterministic, target);
  }

  // bool is_flash_card = 11;
  if (this->is_flash_card() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(11, this->is_flash_card(), target);
  }

  // repeated .proto.ItemParam token_item_list = 12;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->token_item_list_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        12, this->token_item_list(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.GachaItem)
  return target;
}

size_t GachaItem::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.GachaItem)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .proto.GachaTransferItem transfer_items = 10;
  {
    unsigned int count = static_cast<unsigned int>(this->transfer_items_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->transfer_items(static_cast<int>(i)));
    }
  }

  // repeated .proto.ItemParam token_item_list = 12;
  {
    unsigned int count = static_cast<unsigned int>(this->token_item_list_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->token_item_list(static_cast<int>(i)));
    }
  }

  // .proto.ItemParam gacha_item = 4;
  if (this->has_gacha_item()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->gacha_item_);
  }

  // bool is_gacha_item_new = 9;
  if (this->is_gacha_item_new() != 0) {
    total_size += 1 + 1;
  }

  // bool is_flash_card = 11;
  if (this->is_flash_card() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool DoGachaRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.DoGachaRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(16383u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 wish_max_progress = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &wish_max_progress_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 gacha_schedule_id = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &gacha_schedule_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .proto.GachaItem gacha_item_list = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_gacha_item_list()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 left_gacha_times = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &left_gacha_times_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 cost_item_id = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &cost_item_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 ten_cost_item_id = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &ten_cost_item_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 gacha_times_limit = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &gacha_times_limit_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 cost_item_num = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 64 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &cost_item_num_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 new_gacha_random = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &new_gacha_random_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 wish_item_id = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(80u /* 80 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &wish_item_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 ten_cost_item_num = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(88u /* 88 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &ten_cost_item_num_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 wish_progress = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(96u /* 96 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &wish_progress_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 gacha_type = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(104u /* 104 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &gacha_type_)));
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

      // uint32 gacha_times = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(120u /* 120 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &gacha_times_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 daily_gacha_times = 112;
      case 112: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(128u /* 896 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &daily_gacha_times_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_under_general_restrict = 397;
      case 397: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(104u /* 3176 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_under_general_restrict_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 cur_schedule_daily_gacha_times = 475;
      case 475: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(216u /* 3800 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &cur_schedule_daily_gacha_times_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_under_minors_restrict = 1849;
      case 1849: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(200u /* 14792 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_under_minors_restrict_)));
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
  // @@protoc_insertion_point(parse_success:proto.DoGachaRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.DoGachaRsp)
  return false;
#undef DO_
}

void DoGachaRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.DoGachaRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 wish_max_progress = 1;
  if (this->wish_max_progress() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->wish_max_progress(), output);
  }

  // uint32 gacha_schedule_id = 2;
  if (this->gacha_schedule_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->gacha_schedule_id(), output);
  }

  // repeated .proto.GachaItem gacha_item_list = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->gacha_item_list_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->gacha_item_list(static_cast<int>(i)), output);
  }

  // uint32 left_gacha_times = 4;
  if (this->left_gacha_times() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->left_gacha_times(), output);
  }

  // uint32 cost_item_id = 5;
  if (this->cost_item_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->cost_item_id(), output);
  }

  // uint32 ten_cost_item_id = 6;
  if (this->ten_cost_item_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->ten_cost_item_id(), output);
  }

  // uint32 gacha_times_limit = 7;
  if (this->gacha_times_limit() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->gacha_times_limit(), output);
  }

  // uint32 cost_item_num = 8;
  if (this->cost_item_num() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(8, this->cost_item_num(), output);
  }

  // uint32 new_gacha_random = 9;
  if (this->new_gacha_random() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(9, this->new_gacha_random(), output);
  }

  // uint32 wish_item_id = 10;
  if (this->wish_item_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(10, this->wish_item_id(), output);
  }

  // uint32 ten_cost_item_num = 11;
  if (this->ten_cost_item_num() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(11, this->ten_cost_item_num(), output);
  }

  // uint32 wish_progress = 12;
  if (this->wish_progress() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(12, this->wish_progress(), output);
  }

  // uint32 gacha_type = 13;
  if (this->gacha_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(13, this->gacha_type(), output);
  }

  // int32 retcode = 14;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(14, this->retcode(), output);
  }

  // uint32 gacha_times = 15;
  if (this->gacha_times() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(15, this->gacha_times(), output);
  }

  // uint32 daily_gacha_times = 112;
  if (this->daily_gacha_times() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(112, this->daily_gacha_times(), output);
  }

  // bool is_under_general_restrict = 397;
  if (this->is_under_general_restrict() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(397, this->is_under_general_restrict(), output);
  }

  // uint32 cur_schedule_daily_gacha_times = 475;
  if (this->cur_schedule_daily_gacha_times() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(475, this->cur_schedule_daily_gacha_times(), output);
  }

  // bool is_under_minors_restrict = 1849;
  if (this->is_under_minors_restrict() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1849, this->is_under_minors_restrict(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.DoGachaRsp)
}

::google::protobuf::uint8* DoGachaRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.DoGachaRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 wish_max_progress = 1;
  if (this->wish_max_progress() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->wish_max_progress(), target);
  }

  // uint32 gacha_schedule_id = 2;
  if (this->gacha_schedule_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->gacha_schedule_id(), target);
  }

  // repeated .proto.GachaItem gacha_item_list = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->gacha_item_list_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, this->gacha_item_list(static_cast<int>(i)), deterministic, target);
  }

  // uint32 left_gacha_times = 4;
  if (this->left_gacha_times() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->left_gacha_times(), target);
  }

  // uint32 cost_item_id = 5;
  if (this->cost_item_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->cost_item_id(), target);
  }

  // uint32 ten_cost_item_id = 6;
  if (this->ten_cost_item_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, this->ten_cost_item_id(), target);
  }

  // uint32 gacha_times_limit = 7;
  if (this->gacha_times_limit() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(7, this->gacha_times_limit(), target);
  }

  // uint32 cost_item_num = 8;
  if (this->cost_item_num() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(8, this->cost_item_num(), target);
  }

  // uint32 new_gacha_random = 9;
  if (this->new_gacha_random() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(9, this->new_gacha_random(), target);
  }

  // uint32 wish_item_id = 10;
  if (this->wish_item_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(10, this->wish_item_id(), target);
  }

  // uint32 ten_cost_item_num = 11;
  if (this->ten_cost_item_num() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(11, this->ten_cost_item_num(), target);
  }

  // uint32 wish_progress = 12;
  if (this->wish_progress() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(12, this->wish_progress(), target);
  }

  // uint32 gacha_type = 13;
  if (this->gacha_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(13, this->gacha_type(), target);
  }

  // int32 retcode = 14;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(14, this->retcode(), target);
  }

  // uint32 gacha_times = 15;
  if (this->gacha_times() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(15, this->gacha_times(), target);
  }

  // uint32 daily_gacha_times = 112;
  if (this->daily_gacha_times() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(112, this->daily_gacha_times(), target);
  }

  // bool is_under_general_restrict = 397;
  if (this->is_under_general_restrict() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(397, this->is_under_general_restrict(), target);
  }

  // uint32 cur_schedule_daily_gacha_times = 475;
  if (this->cur_schedule_daily_gacha_times() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(475, this->cur_schedule_daily_gacha_times(), target);
  }

  // bool is_under_minors_restrict = 1849;
  if (this->is_under_minors_restrict() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1849, this->is_under_minors_restrict(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.DoGachaRsp)
  return target;
}

size_t DoGachaRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.DoGachaRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .proto.GachaItem gacha_item_list = 3;
  {
    unsigned int count = static_cast<unsigned int>(this->gacha_item_list_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->gacha_item_list(static_cast<int>(i)));
    }
  }

  // uint32 wish_max_progress = 1;
  if (this->wish_max_progress() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->wish_max_progress());
  }

  // uint32 gacha_schedule_id = 2;
  if (this->gacha_schedule_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->gacha_schedule_id());
  }

  // uint32 left_gacha_times = 4;
  if (this->left_gacha_times() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->left_gacha_times());
  }

  // uint32 cost_item_id = 5;
  if (this->cost_item_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->cost_item_id());
  }

  // uint32 ten_cost_item_id = 6;
  if (this->ten_cost_item_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->ten_cost_item_id());
  }

  // uint32 gacha_times_limit = 7;
  if (this->gacha_times_limit() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->gacha_times_limit());
  }

  // uint32 cost_item_num = 8;
  if (this->cost_item_num() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->cost_item_num());
  }

  // uint32 new_gacha_random = 9;
  if (this->new_gacha_random() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->new_gacha_random());
  }

  // uint32 wish_item_id = 10;
  if (this->wish_item_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->wish_item_id());
  }

  // uint32 ten_cost_item_num = 11;
  if (this->ten_cost_item_num() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->ten_cost_item_num());
  }

  // uint32 wish_progress = 12;
  if (this->wish_progress() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->wish_progress());
  }

  // uint32 gacha_type = 13;
  if (this->gacha_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->gacha_type());
  }

  // int32 retcode = 14;
  if (this->retcode() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->retcode());
  }

  // uint32 gacha_times = 15;
  if (this->gacha_times() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->gacha_times());
  }

  // bool is_under_minors_restrict = 1849;
  if (this->is_under_minors_restrict() != 0) {
    total_size += 2 + 1;
  }

  // bool is_under_general_restrict = 397;
  if (this->is_under_general_restrict() != 0) {
    total_size += 2 + 1;
  }

  // uint32 daily_gacha_times = 112;
  if (this->daily_gacha_times() != 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->daily_gacha_times());
  }

  // uint32 cur_schedule_daily_gacha_times = 475;
  if (this->cur_schedule_daily_gacha_times() != 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->cur_schedule_daily_gacha_times());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool GachaWishReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.GachaWishReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 gacha_type = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &gacha_type_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 item_id = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &item_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 gacha_schedule_id = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(80u /* 80 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &gacha_schedule_id_)));
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
  // @@protoc_insertion_point(parse_success:proto.GachaWishReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.GachaWishReq)
  return false;
#undef DO_
}

void GachaWishReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.GachaWishReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 gacha_type = 6;
  if (this->gacha_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->gacha_type(), output);
  }

  // uint32 item_id = 9;
  if (this->item_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(9, this->item_id(), output);
  }

  // uint32 gacha_schedule_id = 10;
  if (this->gacha_schedule_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(10, this->gacha_schedule_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.GachaWishReq)
}

::google::protobuf::uint8* GachaWishReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.GachaWishReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 gacha_type = 6;
  if (this->gacha_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, this->gacha_type(), target);
  }

  // uint32 item_id = 9;
  if (this->item_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(9, this->item_id(), target);
  }

  // uint32 gacha_schedule_id = 10;
  if (this->gacha_schedule_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(10, this->gacha_schedule_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.GachaWishReq)
  return target;
}

size_t GachaWishReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.GachaWishReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 gacha_schedule_id = 10;
  if (this->gacha_schedule_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->gacha_schedule_id());
  }

  // uint32 gacha_type = 6;
  if (this->gacha_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->gacha_type());
  }

  // uint32 item_id = 9;
  if (this->item_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->item_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool GachaWishRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.GachaWishRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 wish_progress = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &wish_progress_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 wish_item_id = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &wish_item_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 gacha_type = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &gacha_type_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 wish_max_progress = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &wish_max_progress_)));
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

      // uint32 gacha_schedule_id = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(88u /* 88 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &gacha_schedule_id_)));
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
  // @@protoc_insertion_point(parse_success:proto.GachaWishRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.GachaWishRsp)
  return false;
#undef DO_
}

void GachaWishRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.GachaWishRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 wish_progress = 3;
  if (this->wish_progress() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->wish_progress(), output);
  }

  // uint32 wish_item_id = 5;
  if (this->wish_item_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->wish_item_id(), output);
  }

  // uint32 gacha_type = 6;
  if (this->gacha_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->gacha_type(), output);
  }

  // uint32 wish_max_progress = 7;
  if (this->wish_max_progress() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->wish_max_progress(), output);
  }

  // int32 retcode = 9;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(9, this->retcode(), output);
  }

  // uint32 gacha_schedule_id = 11;
  if (this->gacha_schedule_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(11, this->gacha_schedule_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.GachaWishRsp)
}

::google::protobuf::uint8* GachaWishRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.GachaWishRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 wish_progress = 3;
  if (this->wish_progress() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->wish_progress(), target);
  }

  // uint32 wish_item_id = 5;
  if (this->wish_item_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->wish_item_id(), target);
  }

  // uint32 gacha_type = 6;
  if (this->gacha_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, this->gacha_type(), target);
  }

  // uint32 wish_max_progress = 7;
  if (this->wish_max_progress() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(7, this->wish_max_progress(), target);
  }

  // int32 retcode = 9;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(9, this->retcode(), target);
  }

  // uint32 gacha_schedule_id = 11;
  if (this->gacha_schedule_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(11, this->gacha_schedule_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.GachaWishRsp)
  return target;
}

size_t GachaWishRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.GachaWishRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 wish_progress = 3;
  if (this->wish_progress() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->wish_progress());
  }

  // uint32 wish_item_id = 5;
  if (this->wish_item_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->wish_item_id());
  }

  // uint32 gacha_type = 6;
  if (this->gacha_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->gacha_type());
  }

  // uint32 wish_max_progress = 7;
  if (this->wish_max_progress() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->wish_max_progress());
  }

  // int32 retcode = 9;
  if (this->retcode() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->retcode());
  }

  // uint32 gacha_schedule_id = 11;
  if (this->gacha_schedule_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->gacha_schedule_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool GachaOpenWishNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.GachaOpenWishNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 gacha_type = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &gacha_type_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 gacha_schedule_id = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(104u /* 104 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &gacha_schedule_id_)));
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
  // @@protoc_insertion_point(parse_success:proto.GachaOpenWishNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.GachaOpenWishNotify)
  return false;
#undef DO_
}

void GachaOpenWishNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.GachaOpenWishNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 gacha_type = 1;
  if (this->gacha_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->gacha_type(), output);
  }

  // uint32 gacha_schedule_id = 13;
  if (this->gacha_schedule_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(13, this->gacha_schedule_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.GachaOpenWishNotify)
}

::google::protobuf::uint8* GachaOpenWishNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.GachaOpenWishNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 gacha_type = 1;
  if (this->gacha_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->gacha_type(), target);
  }

  // uint32 gacha_schedule_id = 13;
  if (this->gacha_schedule_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(13, this->gacha_schedule_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.GachaOpenWishNotify)
  return target;
}

size_t GachaOpenWishNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.GachaOpenWishNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 gacha_type = 1;
  if (this->gacha_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->gacha_type());
  }

  // uint32 gacha_schedule_id = 13;
  if (this->gacha_schedule_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->gacha_schedule_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool GachaSimpleInfoNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.GachaSimpleInfoNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bool is_new = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 64 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_new_)));
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
  // @@protoc_insertion_point(parse_success:proto.GachaSimpleInfoNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.GachaSimpleInfoNotify)
  return false;
#undef DO_
}

void GachaSimpleInfoNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.GachaSimpleInfoNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool is_new = 8;
  if (this->is_new() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(8, this->is_new(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.GachaSimpleInfoNotify)
}

::google::protobuf::uint8* GachaSimpleInfoNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.GachaSimpleInfoNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool is_new = 8;
  if (this->is_new() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(8, this->is_new(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.GachaSimpleInfoNotify)
  return target;
}

size_t GachaSimpleInfoNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.GachaSimpleInfoNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // bool is_new = 8;
  if (this->is_new() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}
}