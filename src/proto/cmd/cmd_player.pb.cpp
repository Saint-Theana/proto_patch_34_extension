#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "cmd/cmd_player.pb.h"

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

bool GetPlayerTokenReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
   // std::cout<<"FARK"<<std::endl;
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.GetPlayerTokenReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(16383u);
    tag = p.first;
    //int ook=::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag);
    //std::cout<<ook<<std::endl;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string country_code = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_country_code()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->country_code().data(), static_cast<int>(this->country_code().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.GetPlayerTokenReq.country_code"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string account_token = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_account_token()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->account_token().data(), static_cast<int>(this->account_token().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.GetPlayerTokenReq.account_token"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 channel_id = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &channel_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string account_uid = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_account_uid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->account_uid().data(), static_cast<int>(this->account_uid().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.GetPlayerTokenReq.account_uid"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 account_type = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &account_type_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string account_ext = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_account_ext()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->account_ext().data(), static_cast<int>(this->account_ext().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.GetPlayerTokenReq.account_ext"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 sub_channel_id = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &sub_channel_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string client_ip_str = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(66u /* 66 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_client_ip_str()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->client_ip_str().data(), static_cast<int>(this->client_ip_str().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.GetPlayerTokenReq.client_ip_str"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string psn_region = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(74u /* 74 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_psn_region()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->psn_region().data(), static_cast<int>(this->psn_region().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.GetPlayerTokenReq.psn_region"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 platform_type = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(80u /* 80 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &platform_type_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 uid = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(88u /* 88 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &uid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string online_id = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(98u /* 98 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_online_id()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->online_id().data(), static_cast<int>(this->online_id().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.GetPlayerTokenReq.online_id"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 cloud_client_ip = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(104u /* 104 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &cloud_client_ip_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_guest = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(112u /* 112 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_guest_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string psn_id = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(122u /* 122 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_psn_id()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->psn_id().data(), static_cast<int>(this->psn_id().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.GetPlayerTokenReq.psn_id"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string birthday = 65;
      case 65: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 522 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_birthday()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->birthday().data(), static_cast<int>(this->birthday().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.GetPlayerTokenReq.birthday"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 key_id = 294;
      case 294: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 2352 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &key_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string client_rand_key = 776;
      case 776: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(66u /* 6210 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_client_rand_key()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->client_rand_key().data(), static_cast<int>(this->client_rand_key().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.GetPlayerTokenReq.client_rand_key"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 lang = 904;
      case 904: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 7232 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &lang_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 minors_reg_min_age = 1399;
      case 1399: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(184u /* 11192 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &minors_reg_min_age_)));
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
  // @@protoc_insertion_point(parse_success:proto.GetPlayerTokenReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.GetPlayerTokenReq)
  return false;
#undef DO_
}

void GetPlayerTokenReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.GetPlayerTokenReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string country_code = 1;
  if (this->country_code().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->country_code().data(), static_cast<int>(this->country_code().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.GetPlayerTokenReq.country_code");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->country_code(), output);
  }

  // string account_token = 2;
  if (this->account_token().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->account_token().data(), static_cast<int>(this->account_token().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.GetPlayerTokenReq.account_token");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->account_token(), output);
  }

  // uint32 channel_id = 3;
  if (this->channel_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->channel_id(), output);
  }

  // string account_uid = 4;
  if (this->account_uid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->account_uid().data(), static_cast<int>(this->account_uid().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.GetPlayerTokenReq.account_uid");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->account_uid(), output);
  }

  // uint32 account_type = 5;
  if (this->account_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->account_type(), output);
  }

  // string account_ext = 6;
  if (this->account_ext().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->account_ext().data(), static_cast<int>(this->account_ext().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.GetPlayerTokenReq.account_ext");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      6, this->account_ext(), output);
  }

  // uint32 sub_channel_id = 7;
  if (this->sub_channel_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->sub_channel_id(), output);
  }

  // string client_ip_str = 8;
  if (this->client_ip_str().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->client_ip_str().data(), static_cast<int>(this->client_ip_str().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.GetPlayerTokenReq.client_ip_str");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      8, this->client_ip_str(), output);
  }

  // string psn_region = 9;
  if (this->psn_region().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->psn_region().data(), static_cast<int>(this->psn_region().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.GetPlayerTokenReq.psn_region");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      9, this->psn_region(), output);
  }

  // uint32 platform_type = 10;
  if (this->platform_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(10, this->platform_type(), output);
  }

  // uint32 uid = 11;
  if (this->uid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(11, this->uid(), output);
  }

  // string online_id = 12;
  if (this->online_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->online_id().data(), static_cast<int>(this->online_id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.GetPlayerTokenReq.online_id");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      12, this->online_id(), output);
  }

  // uint32 cloud_client_ip = 13;
  if (this->cloud_client_ip() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(13, this->cloud_client_ip(), output);
  }

  // bool is_guest = 14;
  if (this->is_guest() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(14, this->is_guest(), output);
  }

  // string psn_id = 15;
  if (this->psn_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->psn_id().data(), static_cast<int>(this->psn_id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.GetPlayerTokenReq.psn_id");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      15, this->psn_id(), output);
  }

  // string birthday = 65;
  if (this->birthday().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->birthday().data(), static_cast<int>(this->birthday().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.GetPlayerTokenReq.birthday");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      65, this->birthday(), output);
  }

  // uint32 key_id = 294;
  if (this->key_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(294, this->key_id(), output);
  }

  // string client_rand_key = 776;
  if (this->client_rand_key().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->client_rand_key().data(), static_cast<int>(this->client_rand_key().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.GetPlayerTokenReq.client_rand_key");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      776, this->client_rand_key(), output);
  }

  // uint32 lang = 904;
  if (this->lang() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(904, this->lang(), output);
  }

  // uint32 minors_reg_min_age = 1399;
  if (this->minors_reg_min_age() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1399, this->minors_reg_min_age(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.GetPlayerTokenReq)
}

::google::protobuf::uint8* GetPlayerTokenReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.GetPlayerTokenReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string country_code = 1;
  if (this->country_code().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->country_code().data(), static_cast<int>(this->country_code().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.GetPlayerTokenReq.country_code");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->country_code(), target);
  }

  // string account_token = 2;
  if (this->account_token().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->account_token().data(), static_cast<int>(this->account_token().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.GetPlayerTokenReq.account_token");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->account_token(), target);
  }

  // uint32 channel_id = 3;
  if (this->channel_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->channel_id(), target);
  }

  // string account_uid = 4;
  if (this->account_uid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->account_uid().data(), static_cast<int>(this->account_uid().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.GetPlayerTokenReq.account_uid");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->account_uid(), target);
  }

  // uint32 account_type = 5;
  if (this->account_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->account_type(), target);
  }

  // string account_ext = 6;
  if (this->account_ext().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->account_ext().data(), static_cast<int>(this->account_ext().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.GetPlayerTokenReq.account_ext");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        6, this->account_ext(), target);
  }

  // uint32 sub_channel_id = 7;
  if (this->sub_channel_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(7, this->sub_channel_id(), target);
  }

  // string client_ip_str = 8;
  if (this->client_ip_str().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->client_ip_str().data(), static_cast<int>(this->client_ip_str().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.GetPlayerTokenReq.client_ip_str");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        8, this->client_ip_str(), target);
  }

  // string psn_region = 9;
  if (this->psn_region().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->psn_region().data(), static_cast<int>(this->psn_region().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.GetPlayerTokenReq.psn_region");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        9, this->psn_region(), target);
  }

  // uint32 platform_type = 10;
  if (this->platform_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(10, this->platform_type(), target);
  }

  // uint32 uid = 11;
  if (this->uid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(11, this->uid(), target);
  }

  // string online_id = 12;
  if (this->online_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->online_id().data(), static_cast<int>(this->online_id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.GetPlayerTokenReq.online_id");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        12, this->online_id(), target);
  }

  // uint32 cloud_client_ip = 13;
  if (this->cloud_client_ip() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(13, this->cloud_client_ip(), target);
  }

  // bool is_guest = 14;
  if (this->is_guest() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(14, this->is_guest(), target);
  }

  // string psn_id = 15;
  if (this->psn_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->psn_id().data(), static_cast<int>(this->psn_id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.GetPlayerTokenReq.psn_id");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        15, this->psn_id(), target);
  }

  // string birthday = 65;
  if (this->birthday().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->birthday().data(), static_cast<int>(this->birthday().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.GetPlayerTokenReq.birthday");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        65, this->birthday(), target);
  }

  // uint32 key_id = 294;
  if (this->key_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(294, this->key_id(), target);
  }

  // string client_rand_key = 776;
  if (this->client_rand_key().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->client_rand_key().data(), static_cast<int>(this->client_rand_key().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.GetPlayerTokenReq.client_rand_key");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        776, this->client_rand_key(), target);
  }

  // uint32 lang = 904;
  if (this->lang() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(904, this->lang(), target);
  }

  // uint32 minors_reg_min_age = 1399;
  if (this->minors_reg_min_age() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1399, this->minors_reg_min_age(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.GetPlayerTokenReq)
  return target;
}

size_t GetPlayerTokenReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.GetPlayerTokenReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string country_code = 1;
  if (this->country_code().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->country_code());
  }

  // string account_token = 2;
  if (this->account_token().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->account_token());
  }

  // string account_uid = 4;
  if (this->account_uid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->account_uid());
  }

  // string account_ext = 6;
  if (this->account_ext().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->account_ext());
  }

  // string client_ip_str = 8;
  if (this->client_ip_str().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->client_ip_str());
  }

  // string psn_region = 9;
  if (this->psn_region().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->psn_region());
  }

  // string online_id = 12;
  if (this->online_id().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->online_id());
  }

  // string psn_id = 15;
  if (this->psn_id().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->psn_id());
  }

  // string birthday = 65;
  if (this->birthday().size() > 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->birthday());
  }

  // string client_rand_key = 776;
  if (this->client_rand_key().size() > 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->client_rand_key());
  }

  // uint32 channel_id = 3;
  if (this->channel_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->channel_id());
  }

  // uint32 account_type = 5;
  if (this->account_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->account_type());
  }

  // uint32 sub_channel_id = 7;
  if (this->sub_channel_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->sub_channel_id());
  }

  // uint32 platform_type = 10;
  if (this->platform_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->platform_type());
  }

  // uint32 uid = 11;
  if (this->uid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->uid());
  }

  // uint32 cloud_client_ip = 13;
  if (this->cloud_client_ip() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->cloud_client_ip());
  }

  // bool is_guest = 14;
  if (this->is_guest() != 0) {
    total_size += 1 + 1;
  }

  // uint32 key_id = 294;
  if (this->key_id() != 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->key_id());
  }

  // uint32 lang = 904;
  if (this->lang() != 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->lang());
  }

  // uint32 minors_reg_min_age = 1399;
  if (this->minors_reg_min_age() != 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->minors_reg_min_age());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}





bool GetPlayerTokenRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.GetPlayerTokenRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(16383u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 uid = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &uid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 black_uid_end_time = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &black_uid_end_time_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 account_type = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &account_type_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_guest = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_guest_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 gm_uid = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &gm_uid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string token = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_token()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->token().data(), static_cast<int>(this->token().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.GetPlayerTokenRsp.token"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_proficient_player = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_proficient_player_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint64 secret_key_seed = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 64 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &secret_key_seed_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string account_uid = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(74u /* 74 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_account_uid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->account_uid().data(), static_cast<int>(this->account_uid().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.GetPlayerTokenRsp.account_uid"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string msg = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(82u /* 82 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_msg()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->msg().data(), static_cast<int>(this->msg().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.GetPlayerTokenRsp.msg"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 platform_type = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(88u /* 88 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &platform_type_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string secret_key = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(98u /* 98 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_secret_key()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->secret_key().data(), static_cast<int>(this->secret_key().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.GetPlayerTokenRsp.secret_key"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bytes security_cmd_buffer = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(106u /* 106 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_security_cmd_buffer()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bytes extra_bin_data = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(114u /* 114 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_extra_bin_data()));
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

      // string client_ip_str = 64;
      case 64: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(2u /* 514 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_client_ip_str()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->client_ip_str().data(), static_cast<int>(this->client_ip_str().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.GetPlayerTokenRsp.client_ip_str"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.StopServerInfo stop_server = 347;
      case 347: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(218u /* 2778 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_stop_server()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_watchdog_uid = 661;
      case 661: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(168u /* 5288 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_watchdog_uid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 sub_channel_id = 891;
      case 891: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(216u /* 7128 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &sub_channel_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string psn_id = 1285;
      case 1285: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 10282 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_psn_id()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->psn_id().data(), static_cast<int>(this->psn_id().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.GetPlayerTokenRsp.psn_id"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 tag = 1344;
      case 1344: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(0u /* 10752 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &tag_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 channel_id = 1356;
      case 1356: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(96u /* 10848 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &channel_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string server_rand_key = 1420;
      case 1420: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(98u /* 11362 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_server_rand_key()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->server_rand_key().data(), static_cast<int>(this->server_rand_key().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.GetPlayerTokenRsp.server_rand_key"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string birthday = 1459;
      case 1459: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(154u /* 11674 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_birthday()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->birthday().data(), static_cast<int>(this->birthday().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.GetPlayerTokenRsp.birthday"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 minors_reg_min_age = 1481;
      case 1481: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 11848 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &minors_reg_min_age_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string client_version_random_key = 1558;
      case 1558: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(178u /* 12466 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_client_version_random_key()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->client_version_random_key().data(), static_cast<int>(this->client_version_random_key().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.GetPlayerTokenRsp.client_version_random_key"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 reg_platform = 1614;
      case 1614: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(112u /* 12912 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &reg_platform_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_login_white_list = 1663;
      case 1663: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(248u /* 13304 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_login_white_list_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated uint32 finish_collection_id_list = 1846;
      case 1846: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(178u /* 14770 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_finish_collection_id_list())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(176u /* 14768 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 2, 14770u, input, this->mutable_finish_collection_id_list())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string country_code = 1960;
      case 1960: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(66u /* 15682 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_country_code()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->country_code().data(), static_cast<int>(this->country_code().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.GetPlayerTokenRsp.country_code"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string sign = 1993;
      case 1993: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(74u /* 15946 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_sign()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->sign().data(), static_cast<int>(this->sign().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.GetPlayerTokenRsp.sign"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 key_id = 2003;
      case 2003: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(152u /* 16024 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &key_id_)));
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
  // @@protoc_insertion_point(parse_success:proto.GetPlayerTokenRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.GetPlayerTokenRsp)
  return false;
#undef DO_
}

void GetPlayerTokenRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.GetPlayerTokenRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 uid = 1;
  if (this->uid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->uid(), output);
  }

  // uint32 black_uid_end_time = 2;
  if (this->black_uid_end_time() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->black_uid_end_time(), output);
  }

  // uint32 account_type = 3;
  if (this->account_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->account_type(), output);
  }

  // bool is_guest = 4;
  if (this->is_guest() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(4, this->is_guest(), output);
  }

  // uint32 gm_uid = 5;
  if (this->gm_uid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->gm_uid(), output);
  }

  // string token = 6;
  if (this->token().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->token().data(), static_cast<int>(this->token().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.GetPlayerTokenRsp.token");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      6, this->token(), output);
  }

  // bool is_proficient_player = 7;
  if (this->is_proficient_player() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(7, this->is_proficient_player(), output);
  }

  // uint64 secret_key_seed = 8;
  if (this->secret_key_seed() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(8, this->secret_key_seed(), output);
  }

  // string account_uid = 9;
  if (this->account_uid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->account_uid().data(), static_cast<int>(this->account_uid().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.GetPlayerTokenRsp.account_uid");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      9, this->account_uid(), output);
  }

  // string msg = 10;
  if (this->msg().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->msg().data(), static_cast<int>(this->msg().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.GetPlayerTokenRsp.msg");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      10, this->msg(), output);
  }

  // uint32 platform_type = 11;
  if (this->platform_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(11, this->platform_type(), output);
  }

  // string secret_key = 12;
  if (this->secret_key().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->secret_key().data(), static_cast<int>(this->secret_key().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.GetPlayerTokenRsp.secret_key");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      12, this->secret_key(), output);
  }

  // bytes security_cmd_buffer = 13;
  if (this->security_cmd_buffer().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      13, this->security_cmd_buffer(), output);
  }

  // bytes extra_bin_data = 14;
  if (this->extra_bin_data().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      14, this->extra_bin_data(), output);
  }

  // int32 retcode = 15;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(15, this->retcode(), output);
  }

  // string client_ip_str = 64;
  if (this->client_ip_str().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->client_ip_str().data(), static_cast<int>(this->client_ip_str().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.GetPlayerTokenRsp.client_ip_str");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      64, this->client_ip_str(), output);
  }

  // .proto.StopServerInfo stop_server = 347;
  if (this->has_stop_server()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      347, *this->stop_server_, output);
  }

  // bool is_watchdog_uid = 661;
  if (this->is_watchdog_uid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(661, this->is_watchdog_uid(), output);
  }

  // uint32 sub_channel_id = 891;
  if (this->sub_channel_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(891, this->sub_channel_id(), output);
  }

  // string psn_id = 1285;
  if (this->psn_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->psn_id().data(), static_cast<int>(this->psn_id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.GetPlayerTokenRsp.psn_id");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1285, this->psn_id(), output);
  }

  // uint32 tag = 1344;
  if (this->tag() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1344, this->tag(), output);
  }

  // uint32 channel_id = 1356;
  if (this->channel_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1356, this->channel_id(), output);
  }

  // string server_rand_key = 1420;
  if (this->server_rand_key().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->server_rand_key().data(), static_cast<int>(this->server_rand_key().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.GetPlayerTokenRsp.server_rand_key");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1420, this->server_rand_key(), output);
  }

  // string birthday = 1459;
  if (this->birthday().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->birthday().data(), static_cast<int>(this->birthday().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.GetPlayerTokenRsp.birthday");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1459, this->birthday(), output);
  }

  // uint32 minors_reg_min_age = 1481;
  if (this->minors_reg_min_age() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1481, this->minors_reg_min_age(), output);
  }

  // string client_version_random_key = 1558;
  if (this->client_version_random_key().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->client_version_random_key().data(), static_cast<int>(this->client_version_random_key().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.GetPlayerTokenRsp.client_version_random_key");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1558, this->client_version_random_key(), output);
  }

  // uint32 reg_platform = 1614;
  if (this->reg_platform() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1614, this->reg_platform(), output);
  }

  // bool is_login_white_list = 1663;
  if (this->is_login_white_list() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1663, this->is_login_white_list(), output);
  }

  // repeated uint32 finish_collection_id_list = 1846;
  if (this->finish_collection_id_list_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(1846, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _finish_collection_id_list_cached_byte_size_));
  }
  for (int i = 0, n = this->finish_collection_id_list_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32NoTag(
      this->finish_collection_id_list(i), output);
  }

  // string country_code = 1960;
  if (this->country_code().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->country_code().data(), static_cast<int>(this->country_code().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.GetPlayerTokenRsp.country_code");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1960, this->country_code(), output);
  }

  // string sign = 1993;
  if (this->sign().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->sign().data(), static_cast<int>(this->sign().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.GetPlayerTokenRsp.sign");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1993, this->sign(), output);
  }

  // uint32 key_id = 2003;
  if (this->key_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2003, this->key_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.GetPlayerTokenRsp)
}

::google::protobuf::uint8* GetPlayerTokenRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.GetPlayerTokenRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 uid = 1;
  if (this->uid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->uid(), target);
  }

  // uint32 black_uid_end_time = 2;
  if (this->black_uid_end_time() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->black_uid_end_time(), target);
  }

  // uint32 account_type = 3;
  if (this->account_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->account_type(), target);
  }

  // bool is_guest = 4;
  if (this->is_guest() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(4, this->is_guest(), target);
  }

  // uint32 gm_uid = 5;
  if (this->gm_uid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->gm_uid(), target);
  }

  // string token = 6;
  if (this->token().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->token().data(), static_cast<int>(this->token().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.GetPlayerTokenRsp.token");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        6, this->token(), target);
  }

  // bool is_proficient_player = 7;
  if (this->is_proficient_player() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(7, this->is_proficient_player(), target);
  }

  // uint64 secret_key_seed = 8;
  if (this->secret_key_seed() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(8, this->secret_key_seed(), target);
  }

  // string account_uid = 9;
  if (this->account_uid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->account_uid().data(), static_cast<int>(this->account_uid().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.GetPlayerTokenRsp.account_uid");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        9, this->account_uid(), target);
  }

  // string msg = 10;
  if (this->msg().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->msg().data(), static_cast<int>(this->msg().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.GetPlayerTokenRsp.msg");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        10, this->msg(), target);
  }

  // uint32 platform_type = 11;
  if (this->platform_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(11, this->platform_type(), target);
  }

  // string secret_key = 12;
  if (this->secret_key().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->secret_key().data(), static_cast<int>(this->secret_key().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.GetPlayerTokenRsp.secret_key");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        12, this->secret_key(), target);
  }

  // bytes security_cmd_buffer = 13;
  if (this->security_cmd_buffer().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        13, this->security_cmd_buffer(), target);
  }

  // bytes extra_bin_data = 14;
  if (this->extra_bin_data().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        14, this->extra_bin_data(), target);
  }

  // int32 retcode = 15;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(15, this->retcode(), target);
  }

  // string client_ip_str = 64;
  if (this->client_ip_str().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->client_ip_str().data(), static_cast<int>(this->client_ip_str().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.GetPlayerTokenRsp.client_ip_str");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        64, this->client_ip_str(), target);
  }

  // .proto.StopServerInfo stop_server = 347;
  if (this->has_stop_server()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        347, *this->stop_server_, deterministic, target);
  }

  // bool is_watchdog_uid = 661;
  if (this->is_watchdog_uid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(661, this->is_watchdog_uid(), target);
  }

  // uint32 sub_channel_id = 891;
  if (this->sub_channel_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(891, this->sub_channel_id(), target);
  }

  // string psn_id = 1285;
  if (this->psn_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->psn_id().data(), static_cast<int>(this->psn_id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.GetPlayerTokenRsp.psn_id");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1285, this->psn_id(), target);
  }

  // uint32 tag = 1344;
  if (this->tag() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1344, this->tag(), target);
  }

  // uint32 channel_id = 1356;
  if (this->channel_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1356, this->channel_id(), target);
  }

  // string server_rand_key = 1420;
  if (this->server_rand_key().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->server_rand_key().data(), static_cast<int>(this->server_rand_key().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.GetPlayerTokenRsp.server_rand_key");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1420, this->server_rand_key(), target);
  }

  // string birthday = 1459;
  if (this->birthday().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->birthday().data(), static_cast<int>(this->birthday().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.GetPlayerTokenRsp.birthday");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1459, this->birthday(), target);
  }

  // uint32 minors_reg_min_age = 1481;
  if (this->minors_reg_min_age() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1481, this->minors_reg_min_age(), target);
  }

  // string client_version_random_key = 1558;
  if (this->client_version_random_key().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->client_version_random_key().data(), static_cast<int>(this->client_version_random_key().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.GetPlayerTokenRsp.client_version_random_key");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1558, this->client_version_random_key(), target);
  }

  // uint32 reg_platform = 1614;
  if (this->reg_platform() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1614, this->reg_platform(), target);
  }

  // bool is_login_white_list = 1663;
  if (this->is_login_white_list() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1663, this->is_login_white_list(), target);
  }

  // repeated uint32 finish_collection_id_list = 1846;
  if (this->finish_collection_id_list_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      1846,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::uint32>(
            _finish_collection_id_list_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt32NoTagToArray(this->finish_collection_id_list_, target);
  }

  // string country_code = 1960;
  if (this->country_code().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->country_code().data(), static_cast<int>(this->country_code().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.GetPlayerTokenRsp.country_code");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1960, this->country_code(), target);
  }

  // string sign = 1993;
  if (this->sign().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->sign().data(), static_cast<int>(this->sign().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.GetPlayerTokenRsp.sign");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1993, this->sign(), target);
  }

  // uint32 key_id = 2003;
  if (this->key_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2003, this->key_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.GetPlayerTokenRsp)
  return target;
}

size_t GetPlayerTokenRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.GetPlayerTokenRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated uint32 finish_collection_id_list = 1846;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      UInt32Size(this->finish_collection_id_list_);
    if (data_size > 0) {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _finish_collection_id_list_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // string token = 6;
  if (this->token().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->token());
  }

  // string account_uid = 9;
  if (this->account_uid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->account_uid());
  }

  // string msg = 10;
  if (this->msg().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->msg());
  }

  // string secret_key = 12;
  if (this->secret_key().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->secret_key());
  }

  // bytes security_cmd_buffer = 13;
  if (this->security_cmd_buffer().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->security_cmd_buffer());
  }

  // bytes extra_bin_data = 14;
  if (this->extra_bin_data().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->extra_bin_data());
  }

  // string client_ip_str = 64;
  if (this->client_ip_str().size() > 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->client_ip_str());
  }

  // string psn_id = 1285;
  if (this->psn_id().size() > 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->psn_id());
  }

  // string server_rand_key = 1420;
  if (this->server_rand_key().size() > 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->server_rand_key());
  }

  // string birthday = 1459;
  if (this->birthday().size() > 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->birthday());
  }

  // string client_version_random_key = 1558;
  if (this->client_version_random_key().size() > 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->client_version_random_key());
  }

  // string country_code = 1960;
  if (this->country_code().size() > 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->country_code());
  }

  // string sign = 1993;
  if (this->sign().size() > 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->sign());
  }

  // .proto.StopServerInfo stop_server = 347;
  if (this->has_stop_server()) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->stop_server_);
  }

  // uint32 uid = 1;
  if (this->uid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->uid());
  }

  // uint32 black_uid_end_time = 2;
  if (this->black_uid_end_time() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->black_uid_end_time());
  }

  // uint32 account_type = 3;
  if (this->account_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->account_type());
  }

  // uint32 gm_uid = 5;
  if (this->gm_uid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->gm_uid());
  }

  // uint64 secret_key_seed = 8;
  if (this->secret_key_seed() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->secret_key_seed());
  }

  // uint32 platform_type = 11;
  if (this->platform_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->platform_type());
  }

  // int32 retcode = 15;
  if (this->retcode() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->retcode());
  }

  // uint32 key_id = 2003;
  if (this->key_id() != 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->key_id());
  }

  // bool is_login_white_list = 1663;
  if (this->is_login_white_list() != 0) {
    total_size += 2 + 1;
  }

  // bool is_guest = 4;
  if (this->is_guest() != 0) {
    total_size += 1 + 1;
  }

  // bool is_watchdog_uid = 661;
  if (this->is_watchdog_uid() != 0) {
    total_size += 2 + 1;
  }

  // bool is_proficient_player = 7;
  if (this->is_proficient_player() != 0) {
    total_size += 1 + 1;
  }

  // uint32 sub_channel_id = 891;
  if (this->sub_channel_id() != 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->sub_channel_id());
  }

  // uint32 tag = 1344;
  if (this->tag() != 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->tag());
  }

  // uint32 channel_id = 1356;
  if (this->channel_id() != 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->channel_id());
  }

  // uint32 minors_reg_min_age = 1481;
  if (this->minors_reg_min_age() != 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->minors_reg_min_age());
  }

  // uint32 reg_platform = 1614;
  if (this->reg_platform() != 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->reg_platform());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool TrackingIOInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.TrackingIOInfo)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string rydevicetype = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_rydevicetype()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->rydevicetype().data(), static_cast<int>(this->rydevicetype().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.TrackingIOInfo.rydevicetype"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string appid = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_appid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->appid().data(), static_cast<int>(this->appid().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.TrackingIOInfo.appid"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string deviceid = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_deviceid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->deviceid().data(), static_cast<int>(this->deviceid().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.TrackingIOInfo.deviceid"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string client_tz = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_client_tz()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->client_tz().data(), static_cast<int>(this->client_tz().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.TrackingIOInfo.client_tz"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string mac = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(74u /* 74 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_mac()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->mac().data(), static_cast<int>(this->mac().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.TrackingIOInfo.mac"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string cached_caid = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(90u /* 90 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_cached_caid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->cached_caid().data(), static_cast<int>(this->cached_caid().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.TrackingIOInfo.cached_caid"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string current_caid = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(122u /* 122 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_current_caid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->current_caid().data(), static_cast<int>(this->current_caid().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.TrackingIOInfo.current_caid"));
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
  // @@protoc_insertion_point(parse_success:proto.TrackingIOInfo)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.TrackingIOInfo)
  return false;
#undef DO_
}

void TrackingIOInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.TrackingIOInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string rydevicetype = 2;
  if (this->rydevicetype().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->rydevicetype().data(), static_cast<int>(this->rydevicetype().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.TrackingIOInfo.rydevicetype");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->rydevicetype(), output);
  }

  // string appid = 3;
  if (this->appid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->appid().data(), static_cast<int>(this->appid().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.TrackingIOInfo.appid");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->appid(), output);
  }

  // string deviceid = 5;
  if (this->deviceid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->deviceid().data(), static_cast<int>(this->deviceid().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.TrackingIOInfo.deviceid");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      5, this->deviceid(), output);
  }

  // string client_tz = 6;
  if (this->client_tz().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->client_tz().data(), static_cast<int>(this->client_tz().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.TrackingIOInfo.client_tz");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      6, this->client_tz(), output);
  }

  // string mac = 9;
  if (this->mac().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->mac().data(), static_cast<int>(this->mac().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.TrackingIOInfo.mac");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      9, this->mac(), output);
  }

  // string cached_caid = 11;
  if (this->cached_caid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->cached_caid().data(), static_cast<int>(this->cached_caid().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.TrackingIOInfo.cached_caid");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      11, this->cached_caid(), output);
  }

  // string current_caid = 15;
  if (this->current_caid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->current_caid().data(), static_cast<int>(this->current_caid().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.TrackingIOInfo.current_caid");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      15, this->current_caid(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.TrackingIOInfo)
}

::google::protobuf::uint8* TrackingIOInfo::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.TrackingIOInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string rydevicetype = 2;
  if (this->rydevicetype().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->rydevicetype().data(), static_cast<int>(this->rydevicetype().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.TrackingIOInfo.rydevicetype");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->rydevicetype(), target);
  }

  // string appid = 3;
  if (this->appid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->appid().data(), static_cast<int>(this->appid().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.TrackingIOInfo.appid");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->appid(), target);
  }

  // string deviceid = 5;
  if (this->deviceid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->deviceid().data(), static_cast<int>(this->deviceid().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.TrackingIOInfo.deviceid");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->deviceid(), target);
  }

  // string client_tz = 6;
  if (this->client_tz().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->client_tz().data(), static_cast<int>(this->client_tz().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.TrackingIOInfo.client_tz");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        6, this->client_tz(), target);
  }

  // string mac = 9;
  if (this->mac().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->mac().data(), static_cast<int>(this->mac().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.TrackingIOInfo.mac");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        9, this->mac(), target);
  }

  // string cached_caid = 11;
  if (this->cached_caid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->cached_caid().data(), static_cast<int>(this->cached_caid().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.TrackingIOInfo.cached_caid");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        11, this->cached_caid(), target);
  }

  // string current_caid = 15;
  if (this->current_caid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->current_caid().data(), static_cast<int>(this->current_caid().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.TrackingIOInfo.current_caid");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        15, this->current_caid(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.TrackingIOInfo)
  return target;
}

size_t TrackingIOInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.TrackingIOInfo)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string rydevicetype = 2;
  if (this->rydevicetype().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->rydevicetype());
  }

  // string appid = 3;
  if (this->appid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->appid());
  }

  // string deviceid = 5;
  if (this->deviceid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->deviceid());
  }

  // string client_tz = 6;
  if (this->client_tz().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->client_tz());
  }

  // string mac = 9;
  if (this->mac().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->mac());
  }

  // string cached_caid = 11;
  if (this->cached_caid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->cached_caid());
  }

  // string current_caid = 15;
  if (this->current_caid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->current_caid());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AdjustTrackingInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AdjustTrackingInfo)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string adid = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_adid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->adid().data(), static_cast<int>(this->adid().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.AdjustTrackingInfo.adid"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string app_token = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_app_token()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->app_token().data(), static_cast<int>(this->app_token().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.AdjustTrackingInfo.app_token"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string idfa = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(58u /* 58 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_idfa()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->idfa().data(), static_cast<int>(this->idfa().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.AdjustTrackingInfo.idfa"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string gps_adid = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(66u /* 66 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_gps_adid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->gps_adid().data(), static_cast<int>(this->gps_adid().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.AdjustTrackingInfo.gps_adid"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string event_token = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(106u /* 106 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_event_token()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->event_token().data(), static_cast<int>(this->event_token().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.AdjustTrackingInfo.event_token"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string fire_adid = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(122u /* 122 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_fire_adid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->fire_adid().data(), static_cast<int>(this->fire_adid().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.AdjustTrackingInfo.fire_adid"));
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
  // @@protoc_insertion_point(parse_success:proto.AdjustTrackingInfo)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AdjustTrackingInfo)
  return false;
#undef DO_
}

void AdjustTrackingInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AdjustTrackingInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string adid = 3;
  if (this->adid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->adid().data(), static_cast<int>(this->adid().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.AdjustTrackingInfo.adid");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->adid(), output);
  }

  // string app_token = 5;
  if (this->app_token().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->app_token().data(), static_cast<int>(this->app_token().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.AdjustTrackingInfo.app_token");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      5, this->app_token(), output);
  }

  // string idfa = 7;
  if (this->idfa().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->idfa().data(), static_cast<int>(this->idfa().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.AdjustTrackingInfo.idfa");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      7, this->idfa(), output);
  }

  // string gps_adid = 8;
  if (this->gps_adid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->gps_adid().data(), static_cast<int>(this->gps_adid().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.AdjustTrackingInfo.gps_adid");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      8, this->gps_adid(), output);
  }

  // string event_token = 13;
  if (this->event_token().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->event_token().data(), static_cast<int>(this->event_token().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.AdjustTrackingInfo.event_token");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      13, this->event_token(), output);
  }

  // string fire_adid = 15;
  if (this->fire_adid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->fire_adid().data(), static_cast<int>(this->fire_adid().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.AdjustTrackingInfo.fire_adid");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      15, this->fire_adid(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AdjustTrackingInfo)
}

::google::protobuf::uint8* AdjustTrackingInfo::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AdjustTrackingInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string adid = 3;
  if (this->adid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->adid().data(), static_cast<int>(this->adid().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.AdjustTrackingInfo.adid");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->adid(), target);
  }

  // string app_token = 5;
  if (this->app_token().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->app_token().data(), static_cast<int>(this->app_token().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.AdjustTrackingInfo.app_token");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->app_token(), target);
  }

  // string idfa = 7;
  if (this->idfa().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->idfa().data(), static_cast<int>(this->idfa().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.AdjustTrackingInfo.idfa");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        7, this->idfa(), target);
  }

  // string gps_adid = 8;
  if (this->gps_adid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->gps_adid().data(), static_cast<int>(this->gps_adid().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.AdjustTrackingInfo.gps_adid");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        8, this->gps_adid(), target);
  }

  // string event_token = 13;
  if (this->event_token().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->event_token().data(), static_cast<int>(this->event_token().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.AdjustTrackingInfo.event_token");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        13, this->event_token(), target);
  }

  // string fire_adid = 15;
  if (this->fire_adid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->fire_adid().data(), static_cast<int>(this->fire_adid().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.AdjustTrackingInfo.fire_adid");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        15, this->fire_adid(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AdjustTrackingInfo)
  return target;
}

size_t AdjustTrackingInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AdjustTrackingInfo)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string adid = 3;
  if (this->adid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->adid());
  }

  // string app_token = 5;
  if (this->app_token().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->app_token());
  }

  // string idfa = 7;
  if (this->idfa().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->idfa());
  }

  // string gps_adid = 8;
  if (this->gps_adid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->gps_adid());
  }

  // string event_token = 13;
  if (this->event_token().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->event_token());
  }

  // string fire_adid = 15;
  if (this->fire_adid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->fire_adid());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool PlayerLoginReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.PlayerLoginReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(16383u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string device_name = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_device_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->device_name().data(), static_cast<int>(this->device_name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.PlayerLoginReq.device_name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string platform = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_platform()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->platform().data(), static_cast<int>(this->platform().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.PlayerLoginReq.platform"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string system_version = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_system_version()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->system_version().data(), static_cast<int>(this->system_version().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.PlayerLoginReq.system_version"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 target_uid = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &target_uid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 language_type = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &language_type_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string token = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_token()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->token().data(), static_cast<int>(this->token().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.PlayerLoginReq.token"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 account_type = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &account_type_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint64 login_rand = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 64 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &login_rand_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string account_uid = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(74u /* 74 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_account_uid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->account_uid().data(), static_cast<int>(this->account_uid().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.PlayerLoginReq.account_uid"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_guest = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(80u /* 80 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_guest_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string client_version = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(90u /* 90 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_client_version()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->client_version().data(), static_cast<int>(this->client_version().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.PlayerLoginReq.client_version"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 platform_type = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(96u /* 96 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &platform_type_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_editor = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(104u /* 104 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_editor_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string device_info = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(114u /* 114 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_device_info()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->device_info().data(), static_cast<int>(this->device_info().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.PlayerLoginReq.device_info"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string device_uuid = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(122u /* 122 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_device_uuid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->device_uuid().data(), static_cast<int>(this->device_uuid().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.PlayerLoginReq.device_uuid"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string online_id = 54;
      case 54: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(178u /* 434 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_online_id()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->online_id().data(), static_cast<int>(this->online_id().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.PlayerLoginReq.online_id"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bytes extra_bin_data = 78;
      case 78: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(114u /* 626 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_extra_bin_data()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 reg_platform = 119;
      case 119: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(184u /* 952 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &reg_platform_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 target_home_owner_uid = 216;
      case 216: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(192u /* 1728 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &target_home_owner_uid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 gm_uid = 246;
      case 246: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(176u /* 1968 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &gm_uid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 target_home_param = 323;
      case 323: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 2584 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &target_home_param_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 channel_id = 324;
      case 324: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 2592 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &channel_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string security_library_md5 = 378;
      case 378: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(210u /* 3026 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_security_library_md5()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->security_library_md5().data(), static_cast<int>(this->security_library_md5().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.PlayerLoginReq.security_library_md5"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 client_data_version = 426;
      case 426: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(80u /* 3408 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &client_data_version_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.AdjustTrackingInfo adjust_tracking_info = 442;
      case 442: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(210u /* 3538 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_adjust_tracking_info()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string security_library_version = 684;
      case 684: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(98u /* 5474 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_security_library_version()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->security_library_version().data(), static_cast<int>(this->security_library_version().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.PlayerLoginReq.security_library_version"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.TrackingIOInfo tracking_io_info = 710;
      case 710: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 5682 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_tracking_io_info()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string cps = 821;
      case 821: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(170u /* 6570 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_cps()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->cps().data(), static_cast<int>(this->cps().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.PlayerLoginReq.cps"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bytes security_cmd_reply = 907;
      case 907: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(90u /* 7258 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_security_cmd_reply()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bytes environment_error_code = 1015;
      case 1015: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(186u /* 8122 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_environment_error_code()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 tag = 1223;
      case 1223: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 9784 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &tag_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string birthday = 1280;
      case 1280: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(2u /* 10242 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_birthday()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->birthday().data(), static_cast<int>(this->birthday().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.PlayerLoginReq.birthday"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 cloud_client_ip = 1394;
      case 1394: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(144u /* 11152 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &cloud_client_ip_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string psn_id = 1568;
      case 1568: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(2u /* 12546 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_psn_id()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->psn_id().data(), static_cast<int>(this->psn_id().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.PlayerLoginReq.psn_id"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string country_code = 1616;
      case 1616: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(130u /* 12930 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_country_code()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->country_code().data(), static_cast<int>(this->country_code().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.PlayerLoginReq.country_code"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 sub_channel_id = 1709;
      case 1709: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(104u /* 13672 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &sub_channel_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string checksum = 1715;
      case 1715: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(154u /* 13722 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_checksum()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->checksum().data(), static_cast<int>(this->checksum().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.PlayerLoginReq.checksum"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string checksum_client_version = 1738;
      case 1738: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(82u /* 13906 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_checksum_client_version()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->checksum_client_version().data(), static_cast<int>(this->checksum_client_version().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.PlayerLoginReq.checksum_client_version"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 client_token = 1762;
      case 1762: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 14096 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &client_token_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string client_verison_hash = 1765;
      case 1765: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 14122 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_client_verison_hash()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->client_verison_hash().data(), static_cast<int>(this->client_verison_hash().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.PlayerLoginReq.client_verison_hash"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 client_port = 2024;
      case 2024: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 16192 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &client_port_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_transfer = 2037;
      case 2037: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(168u /* 16296 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_transfer_)));
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
  // @@protoc_insertion_point(parse_success:proto.PlayerLoginReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.PlayerLoginReq)
  return false;
#undef DO_
}

void PlayerLoginReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.PlayerLoginReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string device_name = 1;
  if (this->device_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->device_name().data(), static_cast<int>(this->device_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.PlayerLoginReq.device_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->device_name(), output);
  }

  // string platform = 2;
  if (this->platform().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->platform().data(), static_cast<int>(this->platform().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.PlayerLoginReq.platform");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->platform(), output);
  }

  // string system_version = 3;
  if (this->system_version().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->system_version().data(), static_cast<int>(this->system_version().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.PlayerLoginReq.system_version");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->system_version(), output);
  }

  // uint32 target_uid = 4;
  if (this->target_uid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->target_uid(), output);
  }

  // uint32 language_type = 5;
  if (this->language_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->language_type(), output);
  }

  // string token = 6;
  if (this->token().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->token().data(), static_cast<int>(this->token().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.PlayerLoginReq.token");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      6, this->token(), output);
  }

  // uint32 account_type = 7;
  if (this->account_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->account_type(), output);
  }

  // uint64 login_rand = 8;
  if (this->login_rand() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(8, this->login_rand(), output);
  }

  // string account_uid = 9;
  if (this->account_uid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->account_uid().data(), static_cast<int>(this->account_uid().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.PlayerLoginReq.account_uid");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      9, this->account_uid(), output);
  }

  // bool is_guest = 10;
  if (this->is_guest() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(10, this->is_guest(), output);
  }

  // string client_version = 11;
  if (this->client_version().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->client_version().data(), static_cast<int>(this->client_version().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.PlayerLoginReq.client_version");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      11, this->client_version(), output);
  }

  // uint32 platform_type = 12;
  if (this->platform_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(12, this->platform_type(), output);
  }

  // bool is_editor = 13;
  if (this->is_editor() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(13, this->is_editor(), output);
  }

  // string device_info = 14;
  if (this->device_info().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->device_info().data(), static_cast<int>(this->device_info().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.PlayerLoginReq.device_info");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      14, this->device_info(), output);
  }

  // string device_uuid = 15;
  if (this->device_uuid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->device_uuid().data(), static_cast<int>(this->device_uuid().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.PlayerLoginReq.device_uuid");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      15, this->device_uuid(), output);
  }

  // string online_id = 54;
  if (this->online_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->online_id().data(), static_cast<int>(this->online_id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.PlayerLoginReq.online_id");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      54, this->online_id(), output);
  }

  // bytes extra_bin_data = 78;
  if (this->extra_bin_data().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      78, this->extra_bin_data(), output);
  }

  // uint32 reg_platform = 119;
  if (this->reg_platform() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(119, this->reg_platform(), output);
  }

  // uint32 target_home_owner_uid = 216;
  if (this->target_home_owner_uid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(216, this->target_home_owner_uid(), output);
  }

  // uint32 gm_uid = 246;
  if (this->gm_uid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(246, this->gm_uid(), output);
  }

  // uint32 target_home_param = 323;
  if (this->target_home_param() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(323, this->target_home_param(), output);
  }

  // uint32 channel_id = 324;
  if (this->channel_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(324, this->channel_id(), output);
  }

  // string security_library_md5 = 378;
  if (this->security_library_md5().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->security_library_md5().data(), static_cast<int>(this->security_library_md5().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.PlayerLoginReq.security_library_md5");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      378, this->security_library_md5(), output);
  }

  // uint32 client_data_version = 426;
  if (this->client_data_version() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(426, this->client_data_version(), output);
  }

  // .proto.AdjustTrackingInfo adjust_tracking_info = 442;
  if (this->has_adjust_tracking_info()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      442, *this->adjust_tracking_info_, output);
  }

  // string security_library_version = 684;
  if (this->security_library_version().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->security_library_version().data(), static_cast<int>(this->security_library_version().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.PlayerLoginReq.security_library_version");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      684, this->security_library_version(), output);
  }

  // .proto.TrackingIOInfo tracking_io_info = 710;
  if (this->has_tracking_io_info()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      710, *this->tracking_io_info_, output);
  }

  // string cps = 821;
  if (this->cps().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->cps().data(), static_cast<int>(this->cps().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.PlayerLoginReq.cps");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      821, this->cps(), output);
  }

  // bytes security_cmd_reply = 907;
  if (this->security_cmd_reply().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      907, this->security_cmd_reply(), output);
  }

  // bytes environment_error_code = 1015;
  if (this->environment_error_code().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      1015, this->environment_error_code(), output);
  }

  // uint32 tag = 1223;
  if (this->tag() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1223, this->tag(), output);
  }

  // string birthday = 1280;
  if (this->birthday().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->birthday().data(), static_cast<int>(this->birthday().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.PlayerLoginReq.birthday");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1280, this->birthday(), output);
  }

  // uint32 cloud_client_ip = 1394;
  if (this->cloud_client_ip() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1394, this->cloud_client_ip(), output);
  }

  // string psn_id = 1568;
  if (this->psn_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->psn_id().data(), static_cast<int>(this->psn_id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.PlayerLoginReq.psn_id");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1568, this->psn_id(), output);
  }

  // string country_code = 1616;
  if (this->country_code().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->country_code().data(), static_cast<int>(this->country_code().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.PlayerLoginReq.country_code");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1616, this->country_code(), output);
  }

  // uint32 sub_channel_id = 1709;
  if (this->sub_channel_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1709, this->sub_channel_id(), output);
  }

  // string checksum = 1715;
  if (this->checksum().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->checksum().data(), static_cast<int>(this->checksum().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.PlayerLoginReq.checksum");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1715, this->checksum(), output);
  }

  // string checksum_client_version = 1738;
  if (this->checksum_client_version().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->checksum_client_version().data(), static_cast<int>(this->checksum_client_version().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.PlayerLoginReq.checksum_client_version");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1738, this->checksum_client_version(), output);
  }

  // uint32 client_token = 1762;
  if (this->client_token() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1762, this->client_token(), output);
  }

  // string client_verison_hash = 1765;
  if (this->client_verison_hash().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->client_verison_hash().data(), static_cast<int>(this->client_verison_hash().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.PlayerLoginReq.client_verison_hash");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1765, this->client_verison_hash(), output);
  }

  // uint32 client_port = 2024;
  if (this->client_port() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2024, this->client_port(), output);
  }

  // bool is_transfer = 2037;
  if (this->is_transfer() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2037, this->is_transfer(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.PlayerLoginReq)
}

::google::protobuf::uint8* PlayerLoginReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.PlayerLoginReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string device_name = 1;
  if (this->device_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->device_name().data(), static_cast<int>(this->device_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.PlayerLoginReq.device_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->device_name(), target);
  }

  // string platform = 2;
  if (this->platform().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->platform().data(), static_cast<int>(this->platform().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.PlayerLoginReq.platform");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->platform(), target);
  }

  // string system_version = 3;
  if (this->system_version().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->system_version().data(), static_cast<int>(this->system_version().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.PlayerLoginReq.system_version");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->system_version(), target);
  }

  // uint32 target_uid = 4;
  if (this->target_uid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->target_uid(), target);
  }

  // uint32 language_type = 5;
  if (this->language_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->language_type(), target);
  }

  // string token = 6;
  if (this->token().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->token().data(), static_cast<int>(this->token().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.PlayerLoginReq.token");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        6, this->token(), target);
  }

  // uint32 account_type = 7;
  if (this->account_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(7, this->account_type(), target);
  }

  // uint64 login_rand = 8;
  if (this->login_rand() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(8, this->login_rand(), target);
  }

  // string account_uid = 9;
  if (this->account_uid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->account_uid().data(), static_cast<int>(this->account_uid().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.PlayerLoginReq.account_uid");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        9, this->account_uid(), target);
  }

  // bool is_guest = 10;
  if (this->is_guest() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(10, this->is_guest(), target);
  }

  // string client_version = 11;
  if (this->client_version().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->client_version().data(), static_cast<int>(this->client_version().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.PlayerLoginReq.client_version");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        11, this->client_version(), target);
  }

  // uint32 platform_type = 12;
  if (this->platform_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(12, this->platform_type(), target);
  }

  // bool is_editor = 13;
  if (this->is_editor() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(13, this->is_editor(), target);
  }

  // string device_info = 14;
  if (this->device_info().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->device_info().data(), static_cast<int>(this->device_info().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.PlayerLoginReq.device_info");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        14, this->device_info(), target);
  }

  // string device_uuid = 15;
  if (this->device_uuid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->device_uuid().data(), static_cast<int>(this->device_uuid().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.PlayerLoginReq.device_uuid");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        15, this->device_uuid(), target);
  }

  // string online_id = 54;
  if (this->online_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->online_id().data(), static_cast<int>(this->online_id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.PlayerLoginReq.online_id");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        54, this->online_id(), target);
  }

  // bytes extra_bin_data = 78;
  if (this->extra_bin_data().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        78, this->extra_bin_data(), target);
  }

  // uint32 reg_platform = 119;
  if (this->reg_platform() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(119, this->reg_platform(), target);
  }

  // uint32 target_home_owner_uid = 216;
  if (this->target_home_owner_uid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(216, this->target_home_owner_uid(), target);
  }

  // uint32 gm_uid = 246;
  if (this->gm_uid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(246, this->gm_uid(), target);
  }

  // uint32 target_home_param = 323;
  if (this->target_home_param() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(323, this->target_home_param(), target);
  }

  // uint32 channel_id = 324;
  if (this->channel_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(324, this->channel_id(), target);
  }

  // string security_library_md5 = 378;
  if (this->security_library_md5().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->security_library_md5().data(), static_cast<int>(this->security_library_md5().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.PlayerLoginReq.security_library_md5");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        378, this->security_library_md5(), target);
  }

  // uint32 client_data_version = 426;
  if (this->client_data_version() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(426, this->client_data_version(), target);
  }

  // .proto.AdjustTrackingInfo adjust_tracking_info = 442;
  if (this->has_adjust_tracking_info()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        442, *this->adjust_tracking_info_, deterministic, target);
  }

  // string security_library_version = 684;
  if (this->security_library_version().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->security_library_version().data(), static_cast<int>(this->security_library_version().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.PlayerLoginReq.security_library_version");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        684, this->security_library_version(), target);
  }

  // .proto.TrackingIOInfo tracking_io_info = 710;
  if (this->has_tracking_io_info()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        710, *this->tracking_io_info_, deterministic, target);
  }

  // string cps = 821;
  if (this->cps().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->cps().data(), static_cast<int>(this->cps().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.PlayerLoginReq.cps");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        821, this->cps(), target);
  }

  // bytes security_cmd_reply = 907;
  if (this->security_cmd_reply().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        907, this->security_cmd_reply(), target);
  }

  // bytes environment_error_code = 1015;
  if (this->environment_error_code().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        1015, this->environment_error_code(), target);
  }

  // uint32 tag = 1223;
  if (this->tag() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1223, this->tag(), target);
  }

  // string birthday = 1280;
  if (this->birthday().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->birthday().data(), static_cast<int>(this->birthday().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.PlayerLoginReq.birthday");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1280, this->birthday(), target);
  }

  // uint32 cloud_client_ip = 1394;
  if (this->cloud_client_ip() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1394, this->cloud_client_ip(), target);
  }

  // string psn_id = 1568;
  if (this->psn_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->psn_id().data(), static_cast<int>(this->psn_id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.PlayerLoginReq.psn_id");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1568, this->psn_id(), target);
  }

  // string country_code = 1616;
  if (this->country_code().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->country_code().data(), static_cast<int>(this->country_code().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.PlayerLoginReq.country_code");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1616, this->country_code(), target);
  }

  // uint32 sub_channel_id = 1709;
  if (this->sub_channel_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1709, this->sub_channel_id(), target);
  }

  // string checksum = 1715;
  if (this->checksum().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->checksum().data(), static_cast<int>(this->checksum().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.PlayerLoginReq.checksum");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1715, this->checksum(), target);
  }

  // string checksum_client_version = 1738;
  if (this->checksum_client_version().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->checksum_client_version().data(), static_cast<int>(this->checksum_client_version().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.PlayerLoginReq.checksum_client_version");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1738, this->checksum_client_version(), target);
  }

  // uint32 client_token = 1762;
  if (this->client_token() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1762, this->client_token(), target);
  }

  // string client_verison_hash = 1765;
  if (this->client_verison_hash().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->client_verison_hash().data(), static_cast<int>(this->client_verison_hash().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.PlayerLoginReq.client_verison_hash");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1765, this->client_verison_hash(), target);
  }

  // uint32 client_port = 2024;
  if (this->client_port() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2024, this->client_port(), target);
  }

  // bool is_transfer = 2037;
  if (this->is_transfer() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(2037, this->is_transfer(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.PlayerLoginReq)
  return target;
}

size_t PlayerLoginReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.PlayerLoginReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string device_name = 1;
  if (this->device_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->device_name());
  }

  // string platform = 2;
  if (this->platform().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->platform());
  }

  // string system_version = 3;
  if (this->system_version().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->system_version());
  }

  // string token = 6;
  if (this->token().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->token());
  }

  // string account_uid = 9;
  if (this->account_uid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->account_uid());
  }

  // string client_version = 11;
  if (this->client_version().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->client_version());
  }

  // string device_info = 14;
  if (this->device_info().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->device_info());
  }

  // string device_uuid = 15;
  if (this->device_uuid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->device_uuid());
  }

  // string online_id = 54;
  if (this->online_id().size() > 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->online_id());
  }

  // bytes extra_bin_data = 78;
  if (this->extra_bin_data().size() > 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->extra_bin_data());
  }

  // string security_library_md5 = 378;
  if (this->security_library_md5().size() > 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->security_library_md5());
  }

  // string security_library_version = 684;
  if (this->security_library_version().size() > 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->security_library_version());
  }

  // string cps = 821;
  if (this->cps().size() > 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->cps());
  }

  // bytes security_cmd_reply = 907;
  if (this->security_cmd_reply().size() > 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->security_cmd_reply());
  }

  // bytes environment_error_code = 1015;
  if (this->environment_error_code().size() > 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->environment_error_code());
  }

  // string birthday = 1280;
  if (this->birthday().size() > 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->birthday());
  }

  // string psn_id = 1568;
  if (this->psn_id().size() > 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->psn_id());
  }

  // string country_code = 1616;
  if (this->country_code().size() > 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->country_code());
  }

  // string checksum = 1715;
  if (this->checksum().size() > 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->checksum());
  }

  // string checksum_client_version = 1738;
  if (this->checksum_client_version().size() > 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->checksum_client_version());
  }

  // string client_verison_hash = 1765;
  if (this->client_verison_hash().size() > 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->client_verison_hash());
  }

  // .proto.AdjustTrackingInfo adjust_tracking_info = 442;
  if (this->has_adjust_tracking_info()) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->adjust_tracking_info_);
  }

  // .proto.TrackingIOInfo tracking_io_info = 710;
  if (this->has_tracking_io_info()) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->tracking_io_info_);
  }

  // uint32 target_uid = 4;
  if (this->target_uid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->target_uid());
  }

  // uint32 language_type = 5;
  if (this->language_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->language_type());
  }

  // uint64 login_rand = 8;
  if (this->login_rand() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->login_rand());
  }

  // uint32 account_type = 7;
  if (this->account_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->account_type());
  }

  // uint32 platform_type = 12;
  if (this->platform_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->platform_type());
  }

  // uint32 reg_platform = 119;
  if (this->reg_platform() != 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->reg_platform());
  }

  // uint32 target_home_owner_uid = 216;
  if (this->target_home_owner_uid() != 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->target_home_owner_uid());
  }

  // uint32 gm_uid = 246;
  if (this->gm_uid() != 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->gm_uid());
  }

  // uint32 target_home_param = 323;
  if (this->target_home_param() != 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->target_home_param());
  }

  // uint32 channel_id = 324;
  if (this->channel_id() != 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->channel_id());
  }

  // uint32 client_data_version = 426;
  if (this->client_data_version() != 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->client_data_version());
  }

  // bool is_transfer = 2037;
  if (this->is_transfer() != 0) {
    total_size += 2 + 1;
  }

  // bool is_guest = 10;
  if (this->is_guest() != 0) {
    total_size += 1 + 1;
  }

  // bool is_editor = 13;
  if (this->is_editor() != 0) {
    total_size += 1 + 1;
  }

  // uint32 tag = 1223;
  if (this->tag() != 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->tag());
  }

  // uint32 cloud_client_ip = 1394;
  if (this->cloud_client_ip() != 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->cloud_client_ip());
  }

  // uint32 sub_channel_id = 1709;
  if (this->sub_channel_id() != 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->sub_channel_id());
  }

  // uint32 client_token = 1762;
  if (this->client_token() != 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->client_token());
  }

  // uint32 client_port = 2024;
  if (this->client_port() != 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->client_port());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool ShortAbilityHashPair::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.ShortAbilityHashPair)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // sfixed32 ability_name_hash = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(53u /* 53 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_SFIXED32>(
                 input, &ability_name_hash_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // sfixed32 ability_config_hash = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(85u /* 85 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_SFIXED32>(
                 input, &ability_config_hash_)));
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
  // @@protoc_insertion_point(parse_success:proto.ShortAbilityHashPair)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.ShortAbilityHashPair)
  return false;
#undef DO_
}

void ShortAbilityHashPair::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.ShortAbilityHashPair)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // sfixed32 ability_name_hash = 6;
  if (this->ability_name_hash() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteSFixed32(6, this->ability_name_hash(), output);
  }

  // sfixed32 ability_config_hash = 10;
  if (this->ability_config_hash() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteSFixed32(10, this->ability_config_hash(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.ShortAbilityHashPair)
}

::google::protobuf::uint8* ShortAbilityHashPair::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.ShortAbilityHashPair)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // sfixed32 ability_name_hash = 6;
  if (this->ability_name_hash() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteSFixed32ToArray(6, this->ability_name_hash(), target);
  }

  // sfixed32 ability_config_hash = 10;
  if (this->ability_config_hash() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteSFixed32ToArray(10, this->ability_config_hash(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.ShortAbilityHashPair)
  return target;
}

size_t ShortAbilityHashPair::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.ShortAbilityHashPair)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // sfixed32 ability_name_hash = 6;
  if (this->ability_name_hash() != 0) {
    total_size += 1 + 4;
  }

  // sfixed32 ability_config_hash = 10;
  if (this->ability_config_hash() != 0) {
    total_size += 1 + 4;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool PlayerLoginRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.PlayerLoginRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(16383u);
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

      // uint32 client_silence_data_version = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &client_silence_data_version_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 target_uid = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &target_uid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string game_biz = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_game_biz()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->game_biz().data(), static_cast<int>(this->game_biz().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.PlayerLoginRsp.game_biz"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // map<string, int32> ability_hash_map = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          PlayerLoginRsp_AbilityHashMapEntry::Parser< ::google::protobuf::internal::MapField<
              PlayerLoginRsp_AbilityHashMapEntry,
              ::std::string, ::google::protobuf::int32,
              ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
              ::google::protobuf::internal::WireFormatLite::TYPE_INT32,
              0 >,
            ::google::protobuf::Map< ::std::string, ::google::protobuf::int32 > > parser(&ability_hash_map_);
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
              input, &parser));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            parser.key().data(), static_cast<int>(parser.key().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.PlayerLoginRsp.AbilityHashMapEntry.key"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_relogin = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_relogin_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 client_data_version = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &client_data_version_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint64 login_rand = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 64 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &login_rand_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 player_data_version = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &player_data_version_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_new_player = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(80u /* 80 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_new_player_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 ability_hash_code = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(104u /* 104 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &ability_hash_code_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bytes player_data = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(114u /* 114 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_player_data()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_use_ability_hash = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(120u /* 120 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_use_ability_hash_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bytes sc_info = 151;
      case 151: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(186u /* 1210 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_sc_info()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string birthday = 163;
      case 163: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 1306 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_birthday()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->birthday().data(), static_cast<int>(this->birthday().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.PlayerLoginRsp.birthday"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_audit = 201;
      case 201: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 1608 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_audit_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string country_code = 238;
      case 238: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(114u /* 1906 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_country_code()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->country_code().data(), static_cast<int>(this->country_code().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.PlayerLoginRsp.country_code"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string register_cps = 552;
      case 552: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(66u /* 4418 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_register_cps()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->register_cps().data(), static_cast<int>(this->register_cps().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.PlayerLoginRsp.register_cps"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string client_version_suffix = 624;
      case 624: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(130u /* 4994 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_client_version_suffix()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->client_version_suffix().data(), static_cast<int>(this->client_version_suffix().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.PlayerLoginRsp.client_version_suffix"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.ResVersionConfig res_version_config = 777;
      case 777: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(74u /* 6218 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_res_version_config()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 target_home_owner_uid = 787;
      case 787: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(152u /* 6296 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &target_home_owner_uid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string client_silence_version_suffix = 935;
      case 935: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(58u /* 7482 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_client_silence_version_suffix()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->client_silence_version_suffix().data(), static_cast<int>(this->client_silence_version_suffix().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.PlayerLoginRsp.client_silence_version_suffix"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_transfer = 956;
      case 956: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(224u /* 7648 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_transfer_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string client_silence_md5 = 979;
      case 979: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(154u /* 7834 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_client_silence_md5()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->client_silence_md5().data(), static_cast<int>(this->client_silence_md5().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.PlayerLoginRsp.client_silence_md5"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // map<uint32, .proto.BlockInfo> block_info_map = 982;
      case 982: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(178u /* 7858 & 0xFF */)) {
          PlayerLoginRsp_BlockInfoMapEntry::Parser< ::google::protobuf::internal::MapField<
              PlayerLoginRsp_BlockInfoMapEntry,
              ::google::protobuf::uint32, ::proto::BlockInfo,
              ::google::protobuf::internal::WireFormatLite::TYPE_UINT32,
              ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
              0 >,
            ::google::protobuf::Map< ::google::protobuf::uint32, ::proto::BlockInfo > > parser(&block_info_map_);
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
              input, &parser));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_data_need_relogin = 1021;
      case 1021: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(232u /* 8168 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_data_need_relogin_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string client_md5 = 1070;
      case 1070: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(114u /* 8562 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_client_md5()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->client_md5().data(), static_cast<int>(this->client_md5().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.PlayerLoginRsp.client_md5"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string next_resource_url = 1095;
      case 1095: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(58u /* 8762 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_next_resource_url()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->next_resource_url().data(), static_cast<int>(this->next_resource_url().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.PlayerLoginRsp.next_resource_url"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .proto.ShortAbilityHashPair short_ability_hash_map = 1199;
      case 1199: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(122u /* 9594 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_short_ability_hash_map()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_enable_client_hash_debug = 1254;
      case 1254: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 10032 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_enable_client_hash_debug_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.ResVersionConfig next_res_version_config = 1331;
      case 1331: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(154u /* 10650 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_next_res_version_config()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_login_rsp_split = 1435;
      case 1435: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(216u /* 11480 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_login_rsp_split_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double total_tick_time = 1769;
      case 1769: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(73u /* 14153 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &total_tick_time_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_sc_open = 1852;
      case 1852: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(224u /* 14816 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_sc_open_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .proto.FeatureBlockInfo feature_block_info_list = 2035;
      case 2035: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(154u /* 16282 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_feature_block_info_list()));
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
  // @@protoc_insertion_point(parse_success:proto.PlayerLoginRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.PlayerLoginRsp)
  return false;
#undef DO_
}

void PlayerLoginRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.PlayerLoginRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 retcode = 1;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->retcode(), output);
  }

  // uint32 client_silence_data_version = 2;
  if (this->client_silence_data_version() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->client_silence_data_version(), output);
  }

  // uint32 target_uid = 3;
  if (this->target_uid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->target_uid(), output);
  }

  // string game_biz = 4;
  if (this->game_biz().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->game_biz().data(), static_cast<int>(this->game_biz().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.PlayerLoginRsp.game_biz");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->game_biz(), output);
  }

  // map<string, int32> ability_hash_map = 5;
  if (!this->ability_hash_map().empty()) {
    typedef ::google::protobuf::Map< ::std::string, ::google::protobuf::int32 >::const_pointer
        ConstPtr;
    typedef ConstPtr SortItem;
    typedef ::google::protobuf::internal::CompareByDerefFirst<SortItem> Less;
    struct Utf8Check {
      static void Check(ConstPtr p) {
        ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
          p->first.data(), static_cast<int>(p->first.length()),
          ::google::protobuf::internal::WireFormatLite::SERIALIZE,
          "proto.PlayerLoginRsp.AbilityHashMapEntry.key");
      }
    };

    if (output->IsSerializationDeterministic() &&
        this->ability_hash_map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->ability_hash_map().size()]);
      typedef ::google::protobuf::Map< ::std::string, ::google::protobuf::int32 >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::std::string, ::google::protobuf::int32 >::const_iterator
          it = this->ability_hash_map().begin();
          it != this->ability_hash_map().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<PlayerLoginRsp_AbilityHashMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(ability_hash_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)]->first, items[static_cast<ptrdiff_t>(i)]->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            5, *entry, output);
        Utf8Check::Check(items[static_cast<ptrdiff_t>(i)]);
      }
    } else {
      ::google::protobuf::scoped_ptr<PlayerLoginRsp_AbilityHashMapEntry> entry;
      for (::google::protobuf::Map< ::std::string, ::google::protobuf::int32 >::const_iterator
          it = this->ability_hash_map().begin();
          it != this->ability_hash_map().end(); ++it) {
        entry.reset(ability_hash_map_.NewEntryWrapper(
            it->first, it->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            5, *entry, output);
        Utf8Check::Check(&*it);
      }
    }
  }

  // bool is_relogin = 6;
  if (this->is_relogin() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(6, this->is_relogin(), output);
  }

  // uint32 client_data_version = 7;
  if (this->client_data_version() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->client_data_version(), output);
  }

  // uint64 login_rand = 8;
  if (this->login_rand() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(8, this->login_rand(), output);
  }

  // uint32 player_data_version = 9;
  if (this->player_data_version() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(9, this->player_data_version(), output);
  }

  // bool is_new_player = 10;
  if (this->is_new_player() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(10, this->is_new_player(), output);
  }

  // int32 ability_hash_code = 13;
  if (this->ability_hash_code() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(13, this->ability_hash_code(), output);
  }

  // bytes player_data = 14;
  if (this->player_data().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      14, this->player_data(), output);
  }

  // bool is_use_ability_hash = 15;
  if (this->is_use_ability_hash() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(15, this->is_use_ability_hash(), output);
  }

  // bytes sc_info = 151;
  if (this->sc_info().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      151, this->sc_info(), output);
  }

  // string birthday = 163;
  if (this->birthday().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->birthday().data(), static_cast<int>(this->birthday().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.PlayerLoginRsp.birthday");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      163, this->birthday(), output);
  }

  // bool is_audit = 201;
  if (this->is_audit() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(201, this->is_audit(), output);
  }

  // string country_code = 238;
  if (this->country_code().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->country_code().data(), static_cast<int>(this->country_code().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.PlayerLoginRsp.country_code");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      238, this->country_code(), output);
  }

  // string register_cps = 552;
  if (this->register_cps().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->register_cps().data(), static_cast<int>(this->register_cps().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.PlayerLoginRsp.register_cps");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      552, this->register_cps(), output);
  }

  // string client_version_suffix = 624;
  if (this->client_version_suffix().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->client_version_suffix().data(), static_cast<int>(this->client_version_suffix().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.PlayerLoginRsp.client_version_suffix");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      624, this->client_version_suffix(), output);
  }

  // .proto.ResVersionConfig res_version_config = 777;
  if (this->has_res_version_config()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      777, *this->res_version_config_, output);
  }

  // uint32 target_home_owner_uid = 787;
  if (this->target_home_owner_uid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(787, this->target_home_owner_uid(), output);
  }

  // string client_silence_version_suffix = 935;
  if (this->client_silence_version_suffix().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->client_silence_version_suffix().data(), static_cast<int>(this->client_silence_version_suffix().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.PlayerLoginRsp.client_silence_version_suffix");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      935, this->client_silence_version_suffix(), output);
  }

  // bool is_transfer = 956;
  if (this->is_transfer() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(956, this->is_transfer(), output);
  }

  // string client_silence_md5 = 979;
  if (this->client_silence_md5().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->client_silence_md5().data(), static_cast<int>(this->client_silence_md5().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.PlayerLoginRsp.client_silence_md5");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      979, this->client_silence_md5(), output);
  }

  // map<uint32, .proto.BlockInfo> block_info_map = 982;
  if (!this->block_info_map().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::proto::BlockInfo >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint32, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (output->IsSerializationDeterministic() &&
        this->block_info_map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->block_info_map().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::proto::BlockInfo >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::proto::BlockInfo >::const_iterator
          it = this->block_info_map().begin();
          it != this->block_info_map().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<PlayerLoginRsp_BlockInfoMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(block_info_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            982, *entry, output);
      }
    } else {
      ::google::protobuf::scoped_ptr<PlayerLoginRsp_BlockInfoMapEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::proto::BlockInfo >::const_iterator
          it = this->block_info_map().begin();
          it != this->block_info_map().end(); ++it) {
        entry.reset(block_info_map_.NewEntryWrapper(
            it->first, it->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            982, *entry, output);
      }
    }
  }

  // bool is_data_need_relogin = 1021;
  if (this->is_data_need_relogin() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1021, this->is_data_need_relogin(), output);
  }

  // string client_md5 = 1070;
  if (this->client_md5().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->client_md5().data(), static_cast<int>(this->client_md5().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.PlayerLoginRsp.client_md5");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1070, this->client_md5(), output);
  }

  // string next_resource_url = 1095;
  if (this->next_resource_url().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->next_resource_url().data(), static_cast<int>(this->next_resource_url().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.PlayerLoginRsp.next_resource_url");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1095, this->next_resource_url(), output);
  }

  // repeated .proto.ShortAbilityHashPair short_ability_hash_map = 1199;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->short_ability_hash_map_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1199, this->short_ability_hash_map(static_cast<int>(i)), output);
  }

  // bool is_enable_client_hash_debug = 1254;
  if (this->is_enable_client_hash_debug() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1254, this->is_enable_client_hash_debug(), output);
  }

  // .proto.ResVersionConfig next_res_version_config = 1331;
  if (this->has_next_res_version_config()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1331, *this->next_res_version_config_, output);
  }

  // bool is_login_rsp_split = 1435;
  if (this->is_login_rsp_split() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1435, this->is_login_rsp_split(), output);
  }

  // double total_tick_time = 1769;
  if (this->total_tick_time() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1769, this->total_tick_time(), output);
  }

  // bool is_sc_open = 1852;
  if (this->is_sc_open() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1852, this->is_sc_open(), output);
  }

  // repeated .proto.FeatureBlockInfo feature_block_info_list = 2035;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->feature_block_info_list_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2035, this->feature_block_info_list(static_cast<int>(i)), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.PlayerLoginRsp)
}

::google::protobuf::uint8* PlayerLoginRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.PlayerLoginRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 retcode = 1;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->retcode(), target);
  }

  // uint32 client_silence_data_version = 2;
  if (this->client_silence_data_version() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->client_silence_data_version(), target);
  }

  // uint32 target_uid = 3;
  if (this->target_uid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->target_uid(), target);
  }

  // string game_biz = 4;
  if (this->game_biz().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->game_biz().data(), static_cast<int>(this->game_biz().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.PlayerLoginRsp.game_biz");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->game_biz(), target);
  }

  // map<string, int32> ability_hash_map = 5;
  if (!this->ability_hash_map().empty()) {
    typedef ::google::protobuf::Map< ::std::string, ::google::protobuf::int32 >::const_pointer
        ConstPtr;
    typedef ConstPtr SortItem;
    typedef ::google::protobuf::internal::CompareByDerefFirst<SortItem> Less;
    struct Utf8Check {
      static void Check(ConstPtr p) {
        ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
          p->first.data(), static_cast<int>(p->first.length()),
          ::google::protobuf::internal::WireFormatLite::SERIALIZE,
          "proto.PlayerLoginRsp.AbilityHashMapEntry.key");
      }
    };

    if (deterministic &&
        this->ability_hash_map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->ability_hash_map().size()]);
      typedef ::google::protobuf::Map< ::std::string, ::google::protobuf::int32 >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::std::string, ::google::protobuf::int32 >::const_iterator
          it = this->ability_hash_map().begin();
          it != this->ability_hash_map().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<PlayerLoginRsp_AbilityHashMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(ability_hash_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)]->first, items[static_cast<ptrdiff_t>(i)]->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       5, *entry, deterministic, target);
;
        Utf8Check::Check(items[static_cast<ptrdiff_t>(i)]);
      }
    } else {
      ::google::protobuf::scoped_ptr<PlayerLoginRsp_AbilityHashMapEntry> entry;
      for (::google::protobuf::Map< ::std::string, ::google::protobuf::int32 >::const_iterator
          it = this->ability_hash_map().begin();
          it != this->ability_hash_map().end(); ++it) {
        entry.reset(ability_hash_map_.NewEntryWrapper(
            it->first, it->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       5, *entry, deterministic, target);
;
        Utf8Check::Check(&*it);
      }
    }
  }

  // bool is_relogin = 6;
  if (this->is_relogin() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(6, this->is_relogin(), target);
  }

  // uint32 client_data_version = 7;
  if (this->client_data_version() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(7, this->client_data_version(), target);
  }

  // uint64 login_rand = 8;
  if (this->login_rand() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(8, this->login_rand(), target);
  }

  // uint32 player_data_version = 9;
  if (this->player_data_version() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(9, this->player_data_version(), target);
  }

  // bool is_new_player = 10;
  if (this->is_new_player() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(10, this->is_new_player(), target);
  }

  // int32 ability_hash_code = 13;
  if (this->ability_hash_code() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(13, this->ability_hash_code(), target);
  }

  // bytes player_data = 14;
  if (this->player_data().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        14, this->player_data(), target);
  }

  // bool is_use_ability_hash = 15;
  if (this->is_use_ability_hash() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(15, this->is_use_ability_hash(), target);
  }

  // bytes sc_info = 151;
  if (this->sc_info().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        151, this->sc_info(), target);
  }

  // string birthday = 163;
  if (this->birthday().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->birthday().data(), static_cast<int>(this->birthday().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.PlayerLoginRsp.birthday");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        163, this->birthday(), target);
  }

  // bool is_audit = 201;
  if (this->is_audit() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(201, this->is_audit(), target);
  }

  // string country_code = 238;
  if (this->country_code().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->country_code().data(), static_cast<int>(this->country_code().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.PlayerLoginRsp.country_code");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        238, this->country_code(), target);
  }

  // string register_cps = 552;
  if (this->register_cps().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->register_cps().data(), static_cast<int>(this->register_cps().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.PlayerLoginRsp.register_cps");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        552, this->register_cps(), target);
  }

  // string client_version_suffix = 624;
  if (this->client_version_suffix().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->client_version_suffix().data(), static_cast<int>(this->client_version_suffix().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.PlayerLoginRsp.client_version_suffix");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        624, this->client_version_suffix(), target);
  }

  // .proto.ResVersionConfig res_version_config = 777;
  if (this->has_res_version_config()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        777, *this->res_version_config_, deterministic, target);
  }

  // uint32 target_home_owner_uid = 787;
  if (this->target_home_owner_uid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(787, this->target_home_owner_uid(), target);
  }

  // string client_silence_version_suffix = 935;
  if (this->client_silence_version_suffix().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->client_silence_version_suffix().data(), static_cast<int>(this->client_silence_version_suffix().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.PlayerLoginRsp.client_silence_version_suffix");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        935, this->client_silence_version_suffix(), target);
  }

  // bool is_transfer = 956;
  if (this->is_transfer() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(956, this->is_transfer(), target);
  }

  // string client_silence_md5 = 979;
  if (this->client_silence_md5().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->client_silence_md5().data(), static_cast<int>(this->client_silence_md5().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.PlayerLoginRsp.client_silence_md5");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        979, this->client_silence_md5(), target);
  }

  // map<uint32, .proto.BlockInfo> block_info_map = 982;
  if (!this->block_info_map().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::proto::BlockInfo >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint32, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (deterministic &&
        this->block_info_map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->block_info_map().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::proto::BlockInfo >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::proto::BlockInfo >::const_iterator
          it = this->block_info_map().begin();
          it != this->block_info_map().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<PlayerLoginRsp_BlockInfoMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(block_info_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       982, *entry, deterministic, target);
;
      }
    } else {
      ::google::protobuf::scoped_ptr<PlayerLoginRsp_BlockInfoMapEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::proto::BlockInfo >::const_iterator
          it = this->block_info_map().begin();
          it != this->block_info_map().end(); ++it) {
        entry.reset(block_info_map_.NewEntryWrapper(
            it->first, it->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       982, *entry, deterministic, target);
;
      }
    }
  }

  // bool is_data_need_relogin = 1021;
  if (this->is_data_need_relogin() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1021, this->is_data_need_relogin(), target);
  }

  // string client_md5 = 1070;
  if (this->client_md5().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->client_md5().data(), static_cast<int>(this->client_md5().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.PlayerLoginRsp.client_md5");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1070, this->client_md5(), target);
  }

  // string next_resource_url = 1095;
  if (this->next_resource_url().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->next_resource_url().data(), static_cast<int>(this->next_resource_url().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.PlayerLoginRsp.next_resource_url");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1095, this->next_resource_url(), target);
  }

  // repeated .proto.ShortAbilityHashPair short_ability_hash_map = 1199;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->short_ability_hash_map_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1199, this->short_ability_hash_map(static_cast<int>(i)), deterministic, target);
  }

  // bool is_enable_client_hash_debug = 1254;
  if (this->is_enable_client_hash_debug() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1254, this->is_enable_client_hash_debug(), target);
  }

  // .proto.ResVersionConfig next_res_version_config = 1331;
  if (this->has_next_res_version_config()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1331, *this->next_res_version_config_, deterministic, target);
  }

  // bool is_login_rsp_split = 1435;
  if (this->is_login_rsp_split() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1435, this->is_login_rsp_split(), target);
  }

  // double total_tick_time = 1769;
  if (this->total_tick_time() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1769, this->total_tick_time(), target);
  }

  // bool is_sc_open = 1852;
  if (this->is_sc_open() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1852, this->is_sc_open(), target);
  }

  // repeated .proto.FeatureBlockInfo feature_block_info_list = 2035;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->feature_block_info_list_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2035, this->feature_block_info_list(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.PlayerLoginRsp)
  return target;
}

size_t PlayerLoginRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.PlayerLoginRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // map<string, int32> ability_hash_map = 5;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->ability_hash_map_size());
  {
    ::google::protobuf::scoped_ptr<PlayerLoginRsp_AbilityHashMapEntry> entry;
    for (::google::protobuf::Map< ::std::string, ::google::protobuf::int32 >::const_iterator
        it = this->ability_hash_map().begin();
        it != this->ability_hash_map().end(); ++it) {
      entry.reset(ability_hash_map_.NewEntryWrapper(it->first, it->second));
      total_size += ::google::protobuf::internal::WireFormatLite::
          MessageSizeNoVirtual(*entry);
    }
  }

  // map<uint32, .proto.BlockInfo> block_info_map = 982;
  total_size += 2 *
      ::google::protobuf::internal::FromIntSize(this->block_info_map_size());
  {
    ::google::protobuf::scoped_ptr<PlayerLoginRsp_BlockInfoMapEntry> entry;
    for (::google::protobuf::Map< ::google::protobuf::uint32, ::proto::BlockInfo >::const_iterator
        it = this->block_info_map().begin();
        it != this->block_info_map().end(); ++it) {
      entry.reset(block_info_map_.NewEntryWrapper(it->first, it->second));
      total_size += ::google::protobuf::internal::WireFormatLite::
          MessageSizeNoVirtual(*entry);
    }
  }

  // repeated .proto.ShortAbilityHashPair short_ability_hash_map = 1199;
  {
    unsigned int count = static_cast<unsigned int>(this->short_ability_hash_map_size());
    total_size += 2UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->short_ability_hash_map(static_cast<int>(i)));
    }
  }

  // repeated .proto.FeatureBlockInfo feature_block_info_list = 2035;
  {
    unsigned int count = static_cast<unsigned int>(this->feature_block_info_list_size());
    total_size += 2UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->feature_block_info_list(static_cast<int>(i)));
    }
  }

  // string game_biz = 4;
  if (this->game_biz().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->game_biz());
  }

  // bytes player_data = 14;
  if (this->player_data().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->player_data());
  }

  // bytes sc_info = 151;
  if (this->sc_info().size() > 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->sc_info());
  }

  // string birthday = 163;
  if (this->birthday().size() > 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->birthday());
  }

  // string country_code = 238;
  if (this->country_code().size() > 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->country_code());
  }

  // string register_cps = 552;
  if (this->register_cps().size() > 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->register_cps());
  }

  // string client_version_suffix = 624;
  if (this->client_version_suffix().size() > 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->client_version_suffix());
  }

  // string client_silence_version_suffix = 935;
  if (this->client_silence_version_suffix().size() > 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->client_silence_version_suffix());
  }

  // string client_silence_md5 = 979;
  if (this->client_silence_md5().size() > 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->client_silence_md5());
  }

  // string client_md5 = 1070;
  if (this->client_md5().size() > 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->client_md5());
  }

  // string next_resource_url = 1095;
  if (this->next_resource_url().size() > 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->next_resource_url());
  }

  // .proto.ResVersionConfig res_version_config = 777;
  if (this->has_res_version_config()) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->res_version_config_);
  }

  // .proto.ResVersionConfig next_res_version_config = 1331;
  if (this->has_next_res_version_config()) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->next_res_version_config_);
  }

  // int32 retcode = 1;
  if (this->retcode() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->retcode());
  }

  // uint32 client_silence_data_version = 2;
  if (this->client_silence_data_version() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->client_silence_data_version());
  }

  // uint32 target_uid = 3;
  if (this->target_uid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->target_uid());
  }

  // uint32 client_data_version = 7;
  if (this->client_data_version() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->client_data_version());
  }

  // uint64 login_rand = 8;
  if (this->login_rand() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->login_rand());
  }

  // uint32 player_data_version = 9;
  if (this->player_data_version() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->player_data_version());
  }

  // int32 ability_hash_code = 13;
  if (this->ability_hash_code() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->ability_hash_code());
  }

  // bool is_relogin = 6;
  if (this->is_relogin() != 0) {
    total_size += 1 + 1;
  }

  // bool is_enable_client_hash_debug = 1254;
  if (this->is_enable_client_hash_debug() != 0) {
    total_size += 2 + 1;
  }

  // bool is_login_rsp_split = 1435;
  if (this->is_login_rsp_split() != 0) {
    total_size += 2 + 1;
  }

  // bool is_use_ability_hash = 15;
  if (this->is_use_ability_hash() != 0) {
    total_size += 1 + 1;
  }

  // bool is_sc_open = 1852;
  if (this->is_sc_open() != 0) {
    total_size += 2 + 1;
  }

  // bool is_audit = 201;
  if (this->is_audit() != 0) {
    total_size += 2 + 1;
  }

  // bool is_transfer = 956;
  if (this->is_transfer() != 0) {
    total_size += 2 + 1;
  }

  // bool is_new_player = 10;
  if (this->is_new_player() != 0) {
    total_size += 1 + 1;
  }

  // uint32 target_home_owner_uid = 787;
  if (this->target_home_owner_uid() != 0) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->target_home_owner_uid());
  }

  // bool is_data_need_relogin = 1021;
  if (this->is_data_need_relogin() != 0) {
    total_size += 2 + 1;
  }

  // double total_tick_time = 1769;
  if (this->total_tick_time() != 0) {
    total_size += 2 + 8;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool PlayerLogoutReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.PlayerLogoutReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .proto.PlayerLogoutReq.Reason reason = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_reason(static_cast< ::proto::PlayerLogoutReq_Reason >(value));
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
  // @@protoc_insertion_point(parse_success:proto.PlayerLogoutReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.PlayerLogoutReq)
  return false;
#undef DO_
}

void PlayerLogoutReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.PlayerLogoutReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.PlayerLogoutReq.Reason reason = 1;
  if (this->reason() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->reason(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.PlayerLogoutReq)
}

::google::protobuf::uint8* PlayerLogoutReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.PlayerLogoutReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.PlayerLogoutReq.Reason reason = 1;
  if (this->reason() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->reason(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.PlayerLogoutReq)
  return target;
}

size_t PlayerLogoutReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.PlayerLogoutReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .proto.PlayerLogoutReq.Reason reason = 1;
  if (this->reason() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->reason());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool PlayerLogoutRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.PlayerLogoutRsp)
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
  // @@protoc_insertion_point(parse_success:proto.PlayerLogoutRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.PlayerLogoutRsp)
  return false;
#undef DO_
}

void PlayerLogoutRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.PlayerLogoutRsp)
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
  // @@protoc_insertion_point(serialize_end:proto.PlayerLogoutRsp)
}

::google::protobuf::uint8* PlayerLogoutRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.PlayerLogoutRsp)
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
  // @@protoc_insertion_point(serialize_to_array_end:proto.PlayerLogoutRsp)
  return target;
}

size_t PlayerLogoutRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.PlayerLogoutRsp)
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

bool PlayerLogoutNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.PlayerLogoutNotify)
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
  // @@protoc_insertion_point(parse_success:proto.PlayerLogoutNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.PlayerLogoutNotify)
  return false;
#undef DO_
}

void PlayerLogoutNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.PlayerLogoutNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 retcode = 7;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(7, this->retcode(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.PlayerLogoutNotify)
}

::google::protobuf::uint8* PlayerLogoutNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.PlayerLogoutNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 retcode = 7;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(7, this->retcode(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.PlayerLogoutNotify)
  return target;
}

size_t PlayerLogoutNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.PlayerLogoutNotify)
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

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool PlayerDataNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.PlayerDataNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint64 server_time = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &server_time_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // map<uint32, .proto.PropValue> prop_map = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          PlayerDataNotify_PropMapEntry::Parser< ::google::protobuf::internal::MapField<
              PlayerDataNotify_PropMapEntry,
              ::google::protobuf::uint32, ::proto::PropValue,
              ::google::protobuf::internal::WireFormatLite::TYPE_UINT32,
              ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
              0 >,
            ::google::protobuf::Map< ::google::protobuf::uint32, ::proto::PropValue > > parser(&prop_map_);
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
              input, &parser));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_first_login_today = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_first_login_today_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 region_id = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &region_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string nick_name = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(90u /* 90 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_nick_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->nick_name().data(), static_cast<int>(this->nick_name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.PlayerDataNotify.nick_name"));
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
  // @@protoc_insertion_point(parse_success:proto.PlayerDataNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.PlayerDataNotify)
  return false;
#undef DO_
}

void PlayerDataNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.PlayerDataNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 server_time = 3;
  if (this->server_time() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(3, this->server_time(), output);
  }

  // map<uint32, .proto.PropValue> prop_map = 5;
  if (!this->prop_map().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::proto::PropValue >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint32, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (output->IsSerializationDeterministic() &&
        this->prop_map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->prop_map().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::proto::PropValue >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::proto::PropValue >::const_iterator
          it = this->prop_map().begin();
          it != this->prop_map().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<PlayerDataNotify_PropMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(prop_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            5, *entry, output);
      }
    } else {
      ::google::protobuf::scoped_ptr<PlayerDataNotify_PropMapEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::proto::PropValue >::const_iterator
          it = this->prop_map().begin();
          it != this->prop_map().end(); ++it) {
        entry.reset(prop_map_.NewEntryWrapper(
            it->first, it->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            5, *entry, output);
      }
    }
  }

  // bool is_first_login_today = 7;
  if (this->is_first_login_today() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(7, this->is_first_login_today(), output);
  }

  // uint32 region_id = 9;
  if (this->region_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(9, this->region_id(), output);
  }

  // string nick_name = 11;
  if (this->nick_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->nick_name().data(), static_cast<int>(this->nick_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.PlayerDataNotify.nick_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      11, this->nick_name(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.PlayerDataNotify)
}

::google::protobuf::uint8* PlayerDataNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.PlayerDataNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 server_time = 3;
  if (this->server_time() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(3, this->server_time(), target);
  }

  // map<uint32, .proto.PropValue> prop_map = 5;
  if (!this->prop_map().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::proto::PropValue >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint32, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (deterministic &&
        this->prop_map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->prop_map().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::proto::PropValue >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::proto::PropValue >::const_iterator
          it = this->prop_map().begin();
          it != this->prop_map().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<PlayerDataNotify_PropMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(prop_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       5, *entry, deterministic, target);
;
      }
    } else {
      ::google::protobuf::scoped_ptr<PlayerDataNotify_PropMapEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::proto::PropValue >::const_iterator
          it = this->prop_map().begin();
          it != this->prop_map().end(); ++it) {
        entry.reset(prop_map_.NewEntryWrapper(
            it->first, it->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       5, *entry, deterministic, target);
;
      }
    }
  }

  // bool is_first_login_today = 7;
  if (this->is_first_login_today() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(7, this->is_first_login_today(), target);
  }

  // uint32 region_id = 9;
  if (this->region_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(9, this->region_id(), target);
  }

  // string nick_name = 11;
  if (this->nick_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->nick_name().data(), static_cast<int>(this->nick_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.PlayerDataNotify.nick_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        11, this->nick_name(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.PlayerDataNotify)
  return target;
}

size_t PlayerDataNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.PlayerDataNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // map<uint32, .proto.PropValue> prop_map = 5;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->prop_map_size());
  {
    ::google::protobuf::scoped_ptr<PlayerDataNotify_PropMapEntry> entry;
    for (::google::protobuf::Map< ::google::protobuf::uint32, ::proto::PropValue >::const_iterator
        it = this->prop_map().begin();
        it != this->prop_map().end(); ++it) {
      entry.reset(prop_map_.NewEntryWrapper(it->first, it->second));
      total_size += ::google::protobuf::internal::WireFormatLite::
          MessageSizeNoVirtual(*entry);
    }
  }

  // string nick_name = 11;
  if (this->nick_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->nick_name());
  }

  // uint64 server_time = 3;
  if (this->server_time() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->server_time());
  }

  // bool is_first_login_today = 7;
  if (this->is_first_login_today() != 0) {
    total_size += 1 + 1;
  }

  // uint32 region_id = 9;
  if (this->region_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->region_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool ChangeGameTimeReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.ChangeGameTimeReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bool is_force_set = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_force_set_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 extra_days = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &extra_days_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 game_time = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &game_time_)));
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
  // @@protoc_insertion_point(parse_success:proto.ChangeGameTimeReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.ChangeGameTimeReq)
  return false;
#undef DO_
}

void ChangeGameTimeReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.ChangeGameTimeReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool is_force_set = 6;
  if (this->is_force_set() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(6, this->is_force_set(), output);
  }

  // uint32 extra_days = 7;
  if (this->extra_days() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->extra_days(), output);
  }

  // uint32 game_time = 9;
  if (this->game_time() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(9, this->game_time(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.ChangeGameTimeReq)
}

::google::protobuf::uint8* ChangeGameTimeReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.ChangeGameTimeReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool is_force_set = 6;
  if (this->is_force_set() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(6, this->is_force_set(), target);
  }

  // uint32 extra_days = 7;
  if (this->extra_days() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(7, this->extra_days(), target);
  }

  // uint32 game_time = 9;
  if (this->game_time() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(9, this->game_time(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.ChangeGameTimeReq)
  return target;
}

size_t ChangeGameTimeReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.ChangeGameTimeReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 game_time = 9;
  if (this->game_time() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->game_time());
  }

  // bool is_force_set = 6;
  if (this->is_force_set() != 0) {
    total_size += 1 + 1;
  }

  // uint32 extra_days = 7;
  if (this->extra_days() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->extra_days());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool ChangeGameTimeRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.ChangeGameTimeRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 extra_days = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &extra_days_)));
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

      // uint32 cur_game_time = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(120u /* 120 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &cur_game_time_)));
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
  // @@protoc_insertion_point(parse_success:proto.ChangeGameTimeRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.ChangeGameTimeRsp)
  return false;
#undef DO_
}

void ChangeGameTimeRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.ChangeGameTimeRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 extra_days = 5;
  if (this->extra_days() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->extra_days(), output);
  }

  // int32 retcode = 7;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(7, this->retcode(), output);
  }

  // uint32 cur_game_time = 15;
  if (this->cur_game_time() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(15, this->cur_game_time(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.ChangeGameTimeRsp)
}

::google::protobuf::uint8* ChangeGameTimeRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.ChangeGameTimeRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 extra_days = 5;
  if (this->extra_days() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->extra_days(), target);
  }

  // int32 retcode = 7;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(7, this->retcode(), target);
  }

  // uint32 cur_game_time = 15;
  if (this->cur_game_time() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(15, this->cur_game_time(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.ChangeGameTimeRsp)
  return target;
}

size_t ChangeGameTimeRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.ChangeGameTimeRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 cur_game_time = 15;
  if (this->cur_game_time() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->cur_game_time());
  }

  // uint32 extra_days = 5;
  if (this->extra_days() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->extra_days());
  }

  // int32 retcode = 7;
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

bool PlayerGameTimeNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.PlayerGameTimeNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 game_time = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &game_time_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_home = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_home_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 uid = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(112u /* 112 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &uid_)));
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
  // @@protoc_insertion_point(parse_success:proto.PlayerGameTimeNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.PlayerGameTimeNotify)
  return false;
#undef DO_
}

void PlayerGameTimeNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.PlayerGameTimeNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 game_time = 1;
  if (this->game_time() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->game_time(), output);
  }

  // bool is_home = 3;
  if (this->is_home() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->is_home(), output);
  }

  // uint32 uid = 14;
  if (this->uid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(14, this->uid(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.PlayerGameTimeNotify)
}

::google::protobuf::uint8* PlayerGameTimeNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.PlayerGameTimeNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 game_time = 1;
  if (this->game_time() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->game_time(), target);
  }

  // bool is_home = 3;
  if (this->is_home() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(3, this->is_home(), target);
  }

  // uint32 uid = 14;
  if (this->uid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(14, this->uid(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.PlayerGameTimeNotify)
  return target;
}

size_t PlayerGameTimeNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.PlayerGameTimeNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 game_time = 1;
  if (this->game_time() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->game_time());
  }

  // bool is_home = 3;
  if (this->is_home() != 0) {
    total_size += 1 + 1;
  }

  // uint32 uid = 14;
  if (this->uid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->uid());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool PlayerPropNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.PlayerPropNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // map<uint32, .proto.PropValue> prop_map = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          PlayerPropNotify_PropMapEntry::Parser< ::google::protobuf::internal::MapField<
              PlayerPropNotify_PropMapEntry,
              ::google::protobuf::uint32, ::proto::PropValue,
              ::google::protobuf::internal::WireFormatLite::TYPE_UINT32,
              ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
              0 >,
            ::google::protobuf::Map< ::google::protobuf::uint32, ::proto::PropValue > > parser(&prop_map_);
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
  // @@protoc_insertion_point(parse_success:proto.PlayerPropNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.PlayerPropNotify)
  return false;
#undef DO_
}

void PlayerPropNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.PlayerPropNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // map<uint32, .proto.PropValue> prop_map = 5;
  if (!this->prop_map().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::proto::PropValue >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint32, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (output->IsSerializationDeterministic() &&
        this->prop_map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->prop_map().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::proto::PropValue >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::proto::PropValue >::const_iterator
          it = this->prop_map().begin();
          it != this->prop_map().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<PlayerPropNotify_PropMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(prop_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            5, *entry, output);
      }
    } else {
      ::google::protobuf::scoped_ptr<PlayerPropNotify_PropMapEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::proto::PropValue >::const_iterator
          it = this->prop_map().begin();
          it != this->prop_map().end(); ++it) {
        entry.reset(prop_map_.NewEntryWrapper(
            it->first, it->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            5, *entry, output);
      }
    }
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.PlayerPropNotify)
}

::google::protobuf::uint8* PlayerPropNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.PlayerPropNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // map<uint32, .proto.PropValue> prop_map = 5;
  if (!this->prop_map().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::proto::PropValue >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint32, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (deterministic &&
        this->prop_map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->prop_map().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::proto::PropValue >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::proto::PropValue >::const_iterator
          it = this->prop_map().begin();
          it != this->prop_map().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<PlayerPropNotify_PropMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(prop_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       5, *entry, deterministic, target);
;
      }
    } else {
      ::google::protobuf::scoped_ptr<PlayerPropNotify_PropMapEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::proto::PropValue >::const_iterator
          it = this->prop_map().begin();
          it != this->prop_map().end(); ++it) {
        entry.reset(prop_map_.NewEntryWrapper(
            it->first, it->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       5, *entry, deterministic, target);
;
      }
    }
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.PlayerPropNotify)
  return target;
}

size_t PlayerPropNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.PlayerPropNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // map<uint32, .proto.PropValue> prop_map = 5;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->prop_map_size());
  {
    ::google::protobuf::scoped_ptr<PlayerPropNotify_PropMapEntry> entry;
    for (::google::protobuf::Map< ::google::protobuf::uint32, ::proto::PropValue >::const_iterator
        it = this->prop_map().begin();
        it != this->prop_map().end(); ++it) {
      entry.reset(prop_map_.NewEntryWrapper(it->first, it->second));
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

bool ClientTriggerEventNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.ClientTriggerEventNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .proto.EventTriggerType event_type = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_event_type(static_cast< ::proto::EventTriggerType >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 force_id = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &force_id_)));
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
  // @@protoc_insertion_point(parse_success:proto.ClientTriggerEventNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.ClientTriggerEventNotify)
  return false;
#undef DO_
}

void ClientTriggerEventNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.ClientTriggerEventNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.EventTriggerType event_type = 1;
  if (this->event_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->event_type(), output);
  }

  // uint32 force_id = 5;
  if (this->force_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->force_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.ClientTriggerEventNotify)
}

::google::protobuf::uint8* ClientTriggerEventNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.ClientTriggerEventNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.EventTriggerType event_type = 1;
  if (this->event_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->event_type(), target);
  }

  // uint32 force_id = 5;
  if (this->force_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->force_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.ClientTriggerEventNotify)
  return target;
}

size_t ClientTriggerEventNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.ClientTriggerEventNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .proto.EventTriggerType event_type = 1;
  if (this->event_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->event_type());
  }

  // uint32 force_id = 5;
  if (this->force_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->force_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool SetPlayerPropReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.SetPlayerPropReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .proto.PropValue prop_list = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(66u /* 66 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_prop_list()));
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
  // @@protoc_insertion_point(parse_success:proto.SetPlayerPropReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.SetPlayerPropReq)
  return false;
#undef DO_
}

void SetPlayerPropReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.SetPlayerPropReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.PropValue prop_list = 8;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->prop_list_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      8, this->prop_list(static_cast<int>(i)), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.SetPlayerPropReq)
}

::google::protobuf::uint8* SetPlayerPropReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.SetPlayerPropReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.PropValue prop_list = 8;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->prop_list_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        8, this->prop_list(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.SetPlayerPropReq)
  return target;
}

size_t SetPlayerPropReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.SetPlayerPropReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .proto.PropValue prop_list = 8;
  {
    unsigned int count = static_cast<unsigned int>(this->prop_list_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->prop_list(static_cast<int>(i)));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool SetPlayerPropRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.SetPlayerPropRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
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
  // @@protoc_insertion_point(parse_success:proto.SetPlayerPropRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.SetPlayerPropRsp)
  return false;
#undef DO_
}

void SetPlayerPropRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.SetPlayerPropRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 retcode = 13;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(13, this->retcode(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.SetPlayerPropRsp)
}

::google::protobuf::uint8* SetPlayerPropRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.SetPlayerPropRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 retcode = 13;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(13, this->retcode(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.SetPlayerPropRsp)
  return target;
}

size_t SetPlayerPropRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.SetPlayerPropRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
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

bool SetPlayerBornDataReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.SetPlayerBornDataReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string nick_name = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(82u /* 82 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_nick_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->nick_name().data(), static_cast<int>(this->nick_name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.SetPlayerBornDataReq.nick_name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 avatar_id = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(120u /* 120 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &avatar_id_)));
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
  // @@protoc_insertion_point(parse_success:proto.SetPlayerBornDataReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.SetPlayerBornDataReq)
  return false;
#undef DO_
}

void SetPlayerBornDataReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.SetPlayerBornDataReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string nick_name = 10;
  if (this->nick_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->nick_name().data(), static_cast<int>(this->nick_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.SetPlayerBornDataReq.nick_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      10, this->nick_name(), output);
  }

  // uint32 avatar_id = 15;
  if (this->avatar_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(15, this->avatar_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.SetPlayerBornDataReq)
}

::google::protobuf::uint8* SetPlayerBornDataReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.SetPlayerBornDataReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string nick_name = 10;
  if (this->nick_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->nick_name().data(), static_cast<int>(this->nick_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.SetPlayerBornDataReq.nick_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        10, this->nick_name(), target);
  }

  // uint32 avatar_id = 15;
  if (this->avatar_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(15, this->avatar_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.SetPlayerBornDataReq)
  return target;
}

size_t SetPlayerBornDataReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.SetPlayerBornDataReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string nick_name = 10;
  if (this->nick_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->nick_name());
  }

  // uint32 avatar_id = 15;
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

bool SetPlayerBornDataRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.SetPlayerBornDataRsp)
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
  // @@protoc_insertion_point(parse_success:proto.SetPlayerBornDataRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.SetPlayerBornDataRsp)
  return false;
#undef DO_
}

void SetPlayerBornDataRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.SetPlayerBornDataRsp)
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
  // @@protoc_insertion_point(serialize_end:proto.SetPlayerBornDataRsp)
}

::google::protobuf::uint8* SetPlayerBornDataRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.SetPlayerBornDataRsp)
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
  // @@protoc_insertion_point(serialize_to_array_end:proto.SetPlayerBornDataRsp)
  return target;
}

size_t SetPlayerBornDataRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.SetPlayerBornDataRsp)
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

bool DoSetPlayerBornDataNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.DoSetPlayerBornDataNotify)
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
  // @@protoc_insertion_point(parse_success:proto.DoSetPlayerBornDataNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.DoSetPlayerBornDataNotify)
  return false;
#undef DO_
}

void DoSetPlayerBornDataNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.DoSetPlayerBornDataNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.DoSetPlayerBornDataNotify)
}

::google::protobuf::uint8* DoSetPlayerBornDataNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.DoSetPlayerBornDataNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.DoSetPlayerBornDataNotify)
  return target;
}

size_t DoSetPlayerBornDataNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.DoSetPlayerBornDataNotify)
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

bool PlayerPropChangeNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.PlayerPropChangeNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 prop_delta = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 64 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &prop_delta_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 prop_type = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(96u /* 96 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &prop_type_)));
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
  // @@protoc_insertion_point(parse_success:proto.PlayerPropChangeNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.PlayerPropChangeNotify)
  return false;
#undef DO_
}

void PlayerPropChangeNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.PlayerPropChangeNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 prop_delta = 8;
  if (this->prop_delta() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(8, this->prop_delta(), output);
  }

  // uint32 prop_type = 12;
  if (this->prop_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(12, this->prop_type(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.PlayerPropChangeNotify)
}

::google::protobuf::uint8* PlayerPropChangeNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.PlayerPropChangeNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 prop_delta = 8;
  if (this->prop_delta() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(8, this->prop_delta(), target);
  }

  // uint32 prop_type = 12;
  if (this->prop_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(12, this->prop_type(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.PlayerPropChangeNotify)
  return target;
}

size_t PlayerPropChangeNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.PlayerPropChangeNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 prop_delta = 8;
  if (this->prop_delta() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->prop_delta());
  }

  // uint32 prop_type = 12;
  if (this->prop_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->prop_type());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool SetPlayerNameReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.SetPlayerNameReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string nick_name = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_nick_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->nick_name().data(), static_cast<int>(this->nick_name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.SetPlayerNameReq.nick_name"));
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
  // @@protoc_insertion_point(parse_success:proto.SetPlayerNameReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.SetPlayerNameReq)
  return false;
#undef DO_
}

void SetPlayerNameReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.SetPlayerNameReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string nick_name = 3;
  if (this->nick_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->nick_name().data(), static_cast<int>(this->nick_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.SetPlayerNameReq.nick_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->nick_name(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.SetPlayerNameReq)
}

::google::protobuf::uint8* SetPlayerNameReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.SetPlayerNameReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string nick_name = 3;
  if (this->nick_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->nick_name().data(), static_cast<int>(this->nick_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.SetPlayerNameReq.nick_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->nick_name(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.SetPlayerNameReq)
  return target;
}

size_t SetPlayerNameReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.SetPlayerNameReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string nick_name = 3;
  if (this->nick_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->nick_name());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool SetPlayerNameRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.SetPlayerNameRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 retcode = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(88u /* 88 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &retcode_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string nick_name = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(106u /* 106 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_nick_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->nick_name().data(), static_cast<int>(this->nick_name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.SetPlayerNameRsp.nick_name"));
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
  // @@protoc_insertion_point(parse_success:proto.SetPlayerNameRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.SetPlayerNameRsp)
  return false;
#undef DO_
}

void SetPlayerNameRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.SetPlayerNameRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 retcode = 11;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(11, this->retcode(), output);
  }

  // string nick_name = 13;
  if (this->nick_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->nick_name().data(), static_cast<int>(this->nick_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.SetPlayerNameRsp.nick_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      13, this->nick_name(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.SetPlayerNameRsp)
}

::google::protobuf::uint8* SetPlayerNameRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.SetPlayerNameRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 retcode = 11;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(11, this->retcode(), target);
  }

  // string nick_name = 13;
  if (this->nick_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->nick_name().data(), static_cast<int>(this->nick_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.SetPlayerNameRsp.nick_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        13, this->nick_name(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.SetPlayerNameRsp)
  return target;
}

size_t SetPlayerNameRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.SetPlayerNameRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string nick_name = 13;
  if (this->nick_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->nick_name());
  }

  // int32 retcode = 11;
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

bool SetOpenStateReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.SetOpenStateReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 key = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &key_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 value = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(112u /* 112 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &value_)));
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
  // @@protoc_insertion_point(parse_success:proto.SetOpenStateReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.SetOpenStateReq)
  return false;
#undef DO_
}

void SetOpenStateReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.SetOpenStateReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 key = 7;
  if (this->key() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->key(), output);
  }

  // uint32 value = 14;
  if (this->value() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(14, this->value(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.SetOpenStateReq)
}

::google::protobuf::uint8* SetOpenStateReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.SetOpenStateReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 key = 7;
  if (this->key() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(7, this->key(), target);
  }

  // uint32 value = 14;
  if (this->value() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(14, this->value(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.SetOpenStateReq)
  return target;
}

size_t SetOpenStateReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.SetOpenStateReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 key = 7;
  if (this->key() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->key());
  }

  // uint32 value = 14;
  if (this->value() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->value());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool SetOpenStateRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.SetOpenStateRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
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

      // uint32 key = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(80u /* 80 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &key_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 value = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(120u /* 120 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &value_)));
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
  // @@protoc_insertion_point(parse_success:proto.SetOpenStateRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.SetOpenStateRsp)
  return false;
#undef DO_
}

void SetOpenStateRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.SetOpenStateRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 retcode = 9;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(9, this->retcode(), output);
  }

  // uint32 key = 10;
  if (this->key() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(10, this->key(), output);
  }

  // uint32 value = 15;
  if (this->value() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(15, this->value(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.SetOpenStateRsp)
}

::google::protobuf::uint8* SetOpenStateRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.SetOpenStateRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 retcode = 9;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(9, this->retcode(), target);
  }

  // uint32 key = 10;
  if (this->key() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(10, this->key(), target);
  }

  // uint32 value = 15;
  if (this->value() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(15, this->value(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.SetOpenStateRsp)
  return target;
}

size_t SetOpenStateRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.SetOpenStateRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 value = 15;
  if (this->value() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->value());
  }

  // int32 retcode = 9;
  if (this->retcode() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->retcode());
  }

  // uint32 key = 10;
  if (this->key() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->key());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool OpenStateUpdateNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.OpenStateUpdateNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // map<uint32, uint32> open_state_map = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(74u /* 74 & 0xFF */)) {
          OpenStateUpdateNotify_OpenStateMapEntry::Parser< ::google::protobuf::internal::MapField<
              OpenStateUpdateNotify_OpenStateMapEntry,
              ::google::protobuf::uint32, ::google::protobuf::uint32,
              ::google::protobuf::internal::WireFormatLite::TYPE_UINT32,
              ::google::protobuf::internal::WireFormatLite::TYPE_UINT32,
              0 >,
            ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 > > parser(&open_state_map_);
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
  // @@protoc_insertion_point(parse_success:proto.OpenStateUpdateNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.OpenStateUpdateNotify)
  return false;
#undef DO_
}

void OpenStateUpdateNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.OpenStateUpdateNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // map<uint32, uint32> open_state_map = 9;
  if (!this->open_state_map().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint32, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (output->IsSerializationDeterministic() &&
        this->open_state_map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->open_state_map().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::const_iterator
          it = this->open_state_map().begin();
          it != this->open_state_map().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<OpenStateUpdateNotify_OpenStateMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(open_state_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            9, *entry, output);
      }
    } else {
      ::google::protobuf::scoped_ptr<OpenStateUpdateNotify_OpenStateMapEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::const_iterator
          it = this->open_state_map().begin();
          it != this->open_state_map().end(); ++it) {
        entry.reset(open_state_map_.NewEntryWrapper(
            it->first, it->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            9, *entry, output);
      }
    }
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.OpenStateUpdateNotify)
}

::google::protobuf::uint8* OpenStateUpdateNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.OpenStateUpdateNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // map<uint32, uint32> open_state_map = 9;
  if (!this->open_state_map().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint32, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (deterministic &&
        this->open_state_map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->open_state_map().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::const_iterator
          it = this->open_state_map().begin();
          it != this->open_state_map().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<OpenStateUpdateNotify_OpenStateMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(open_state_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       9, *entry, deterministic, target);
;
      }
    } else {
      ::google::protobuf::scoped_ptr<OpenStateUpdateNotify_OpenStateMapEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::const_iterator
          it = this->open_state_map().begin();
          it != this->open_state_map().end(); ++it) {
        entry.reset(open_state_map_.NewEntryWrapper(
            it->first, it->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       9, *entry, deterministic, target);
;
      }
    }
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.OpenStateUpdateNotify)
  return target;
}

size_t OpenStateUpdateNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.OpenStateUpdateNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // map<uint32, uint32> open_state_map = 9;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->open_state_map_size());
  {
    ::google::protobuf::scoped_ptr<OpenStateUpdateNotify_OpenStateMapEntry> entry;
    for (::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::const_iterator
        it = this->open_state_map().begin();
        it != this->open_state_map().end(); ++it) {
      entry.reset(open_state_map_.NewEntryWrapper(it->first, it->second));
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

bool OpenStateChangeNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.OpenStateChangeNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // map<uint32, uint32> open_state_map = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(122u /* 122 & 0xFF */)) {
          OpenStateChangeNotify_OpenStateMapEntry::Parser< ::google::protobuf::internal::MapField<
              OpenStateChangeNotify_OpenStateMapEntry,
              ::google::protobuf::uint32, ::google::protobuf::uint32,
              ::google::protobuf::internal::WireFormatLite::TYPE_UINT32,
              ::google::protobuf::internal::WireFormatLite::TYPE_UINT32,
              0 >,
            ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 > > parser(&open_state_map_);
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
  // @@protoc_insertion_point(parse_success:proto.OpenStateChangeNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.OpenStateChangeNotify)
  return false;
#undef DO_
}

void OpenStateChangeNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.OpenStateChangeNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // map<uint32, uint32> open_state_map = 15;
  if (!this->open_state_map().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint32, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (output->IsSerializationDeterministic() &&
        this->open_state_map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->open_state_map().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::const_iterator
          it = this->open_state_map().begin();
          it != this->open_state_map().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<OpenStateChangeNotify_OpenStateMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(open_state_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            15, *entry, output);
      }
    } else {
      ::google::protobuf::scoped_ptr<OpenStateChangeNotify_OpenStateMapEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::const_iterator
          it = this->open_state_map().begin();
          it != this->open_state_map().end(); ++it) {
        entry.reset(open_state_map_.NewEntryWrapper(
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
  // @@protoc_insertion_point(serialize_end:proto.OpenStateChangeNotify)
}

::google::protobuf::uint8* OpenStateChangeNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.OpenStateChangeNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // map<uint32, uint32> open_state_map = 15;
  if (!this->open_state_map().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint32, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (deterministic &&
        this->open_state_map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->open_state_map().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::const_iterator
          it = this->open_state_map().begin();
          it != this->open_state_map().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<OpenStateChangeNotify_OpenStateMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(open_state_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       15, *entry, deterministic, target);
;
      }
    } else {
      ::google::protobuf::scoped_ptr<OpenStateChangeNotify_OpenStateMapEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::const_iterator
          it = this->open_state_map().begin();
          it != this->open_state_map().end(); ++it) {
        entry.reset(open_state_map_.NewEntryWrapper(
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
  // @@protoc_insertion_point(serialize_to_array_end:proto.OpenStateChangeNotify)
  return target;
}

size_t OpenStateChangeNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.OpenStateChangeNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // map<uint32, uint32> open_state_map = 15;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->open_state_map_size());
  {
    ::google::protobuf::scoped_ptr<OpenStateChangeNotify_OpenStateMapEntry> entry;
    for (::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::const_iterator
        it = this->open_state_map().begin();
        it != this->open_state_map().end(); ++it) {
      entry.reset(open_state_map_.NewEntryWrapper(it->first, it->second));
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

bool PlayerCookReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.PlayerCookReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 cook_count = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &cook_count_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 assist_avatar = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &assist_avatar_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 qte_quality = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(104u /* 104 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &qte_quality_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 recipe_id = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(120u /* 120 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &recipe_id_)));
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
  // @@protoc_insertion_point(parse_success:proto.PlayerCookReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.PlayerCookReq)
  return false;
#undef DO_
}

void PlayerCookReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.PlayerCookReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 cook_count = 3;
  if (this->cook_count() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->cook_count(), output);
  }

  // uint32 assist_avatar = 6;
  if (this->assist_avatar() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->assist_avatar(), output);
  }

  // uint32 qte_quality = 13;
  if (this->qte_quality() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(13, this->qte_quality(), output);
  }

  // uint32 recipe_id = 15;
  if (this->recipe_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(15, this->recipe_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.PlayerCookReq)
}

::google::protobuf::uint8* PlayerCookReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.PlayerCookReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 cook_count = 3;
  if (this->cook_count() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->cook_count(), target);
  }

  // uint32 assist_avatar = 6;
  if (this->assist_avatar() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, this->assist_avatar(), target);
  }

  // uint32 qte_quality = 13;
  if (this->qte_quality() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(13, this->qte_quality(), target);
  }

  // uint32 recipe_id = 15;
  if (this->recipe_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(15, this->recipe_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.PlayerCookReq)
  return target;
}

size_t PlayerCookReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.PlayerCookReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 cook_count = 3;
  if (this->cook_count() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->cook_count());
  }

  // uint32 assist_avatar = 6;
  if (this->assist_avatar() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->assist_avatar());
  }

  // uint32 qte_quality = 13;
  if (this->qte_quality() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->qte_quality());
  }

  // uint32 recipe_id = 15;
  if (this->recipe_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->recipe_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool PlayerCookRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.PlayerCookRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 qte_quality = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &qte_quality_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.CookRecipeData recipe_data = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_recipe_data()));
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

      // repeated .proto.ItemParam item_list = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(74u /* 74 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_item_list()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 cook_count = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(96u /* 96 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &cook_count_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .proto.ItemParam extral_item_list = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(106u /* 106 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_extral_item_list()));
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
  // @@protoc_insertion_point(parse_success:proto.PlayerCookRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.PlayerCookRsp)
  return false;
#undef DO_
}

void PlayerCookRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.PlayerCookRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 qte_quality = 4;
  if (this->qte_quality() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->qte_quality(), output);
  }

  // .proto.CookRecipeData recipe_data = 5;
  if (this->has_recipe_data()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, *this->recipe_data_, output);
  }

  // int32 retcode = 7;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(7, this->retcode(), output);
  }

  // repeated .proto.ItemParam item_list = 9;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->item_list_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      9, this->item_list(static_cast<int>(i)), output);
  }

  // uint32 cook_count = 12;
  if (this->cook_count() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(12, this->cook_count(), output);
  }

  // repeated .proto.ItemParam extral_item_list = 13;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->extral_item_list_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      13, this->extral_item_list(static_cast<int>(i)), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.PlayerCookRsp)
}

::google::protobuf::uint8* PlayerCookRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.PlayerCookRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 qte_quality = 4;
  if (this->qte_quality() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->qte_quality(), target);
  }

  // .proto.CookRecipeData recipe_data = 5;
  if (this->has_recipe_data()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        5, *this->recipe_data_, deterministic, target);
  }

  // int32 retcode = 7;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(7, this->retcode(), target);
  }

  // repeated .proto.ItemParam item_list = 9;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->item_list_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        9, this->item_list(static_cast<int>(i)), deterministic, target);
  }

  // uint32 cook_count = 12;
  if (this->cook_count() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(12, this->cook_count(), target);
  }

  // repeated .proto.ItemParam extral_item_list = 13;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->extral_item_list_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        13, this->extral_item_list(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.PlayerCookRsp)
  return target;
}

size_t PlayerCookRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.PlayerCookRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .proto.ItemParam item_list = 9;
  {
    unsigned int count = static_cast<unsigned int>(this->item_list_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->item_list(static_cast<int>(i)));
    }
  }

  // repeated .proto.ItemParam extral_item_list = 13;
  {
    unsigned int count = static_cast<unsigned int>(this->extral_item_list_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->extral_item_list(static_cast<int>(i)));
    }
  }

  // .proto.CookRecipeData recipe_data = 5;
  if (this->has_recipe_data()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->recipe_data_);
  }

  // uint32 qte_quality = 4;
  if (this->qte_quality() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->qte_quality());
  }

  // int32 retcode = 7;
  if (this->retcode() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->retcode());
  }

  // uint32 cook_count = 12;
  if (this->cook_count() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->cook_count());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool PlayerRandomCookReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.PlayerRandomCookReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .proto.ItemParam material_list = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_material_list()));
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
  // @@protoc_insertion_point(parse_success:proto.PlayerRandomCookReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.PlayerRandomCookReq)
  return false;
#undef DO_
}

void PlayerRandomCookReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.PlayerRandomCookReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.ItemParam material_list = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->material_list_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->material_list(static_cast<int>(i)), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.PlayerRandomCookReq)
}

::google::protobuf::uint8* PlayerRandomCookReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.PlayerRandomCookReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.ItemParam material_list = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->material_list_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, this->material_list(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.PlayerRandomCookReq)
  return target;
}

size_t PlayerRandomCookReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.PlayerRandomCookReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .proto.ItemParam material_list = 2;
  {
    unsigned int count = static_cast<unsigned int>(this->material_list_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->material_list(static_cast<int>(i)));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool PlayerRandomCookRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.PlayerRandomCookRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
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
  // @@protoc_insertion_point(parse_success:proto.PlayerRandomCookRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.PlayerRandomCookRsp)
  return false;
#undef DO_
}

void PlayerRandomCookRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.PlayerRandomCookRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 retcode = 13;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(13, this->retcode(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.PlayerRandomCookRsp)
}

::google::protobuf::uint8* PlayerRandomCookRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.PlayerRandomCookRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 retcode = 13;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(13, this->retcode(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.PlayerRandomCookRsp)
  return target;
}

size_t PlayerRandomCookRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.PlayerRandomCookRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
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

bool CookRecipeData::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.CookRecipeData)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 proficiency = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &proficiency_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 recipe_id = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &recipe_id_)));
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
  // @@protoc_insertion_point(parse_success:proto.CookRecipeData)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.CookRecipeData)
  return false;
#undef DO_
}

void CookRecipeData::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.CookRecipeData)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 proficiency = 1;
  if (this->proficiency() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->proficiency(), output);
  }

  // uint32 recipe_id = 6;
  if (this->recipe_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->recipe_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.CookRecipeData)
}

::google::protobuf::uint8* CookRecipeData::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.CookRecipeData)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 proficiency = 1;
  if (this->proficiency() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->proficiency(), target);
  }

  // uint32 recipe_id = 6;
  if (this->recipe_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, this->recipe_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.CookRecipeData)
  return target;
}

size_t CookRecipeData::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.CookRecipeData)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 proficiency = 1;
  if (this->proficiency() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->proficiency());
  }

  // uint32 recipe_id = 6;
  if (this->recipe_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->recipe_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool CookDataNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.CookDataNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 grade = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &grade_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .proto.CookRecipeData recipe_data_list = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(74u /* 74 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_recipe_data_list()));
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
  // @@protoc_insertion_point(parse_success:proto.CookDataNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.CookDataNotify)
  return false;
#undef DO_
}

void CookDataNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.CookDataNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 grade = 2;
  if (this->grade() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->grade(), output);
  }

  // repeated .proto.CookRecipeData recipe_data_list = 9;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->recipe_data_list_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      9, this->recipe_data_list(static_cast<int>(i)), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.CookDataNotify)
}

::google::protobuf::uint8* CookDataNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.CookDataNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 grade = 2;
  if (this->grade() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->grade(), target);
  }

  // repeated .proto.CookRecipeData recipe_data_list = 9;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->recipe_data_list_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        9, this->recipe_data_list(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.CookDataNotify)
  return target;
}

size_t CookDataNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.CookDataNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .proto.CookRecipeData recipe_data_list = 9;
  {
    unsigned int count = static_cast<unsigned int>(this->recipe_data_list_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->recipe_data_list(static_cast<int>(i)));
    }
  }

  // uint32 grade = 2;
  if (this->grade() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->grade());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool CookRecipeDataNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.CookRecipeDataNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .proto.CookRecipeData recipe_data = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_recipe_data()));
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
  // @@protoc_insertion_point(parse_success:proto.CookRecipeDataNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.CookRecipeDataNotify)
  return false;
#undef DO_
}

void CookRecipeDataNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.CookRecipeDataNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.CookRecipeData recipe_data = 6;
  if (this->has_recipe_data()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      6, *this->recipe_data_, output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.CookRecipeDataNotify)
}

::google::protobuf::uint8* CookRecipeDataNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.CookRecipeDataNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.CookRecipeData recipe_data = 6;
  if (this->has_recipe_data()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        6, *this->recipe_data_, deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.CookRecipeDataNotify)
  return target;
}

size_t CookRecipeDataNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.CookRecipeDataNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .proto.CookRecipeData recipe_data = 6;
  if (this->has_recipe_data()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->recipe_data_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool CookGradeDataNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.CookGradeDataNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 grade = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &grade_)));
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
  // @@protoc_insertion_point(parse_success:proto.CookGradeDataNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.CookGradeDataNotify)
  return false;
#undef DO_
}

void CookGradeDataNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.CookGradeDataNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 grade = 2;
  if (this->grade() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->grade(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.CookGradeDataNotify)
}

::google::protobuf::uint8* CookGradeDataNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.CookGradeDataNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 grade = 2;
  if (this->grade() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->grade(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.CookGradeDataNotify)
  return target;
}

size_t CookGradeDataNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.CookGradeDataNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 grade = 2;
  if (this->grade() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->grade());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool PlayerCompoundMaterialReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.PlayerCompoundMaterialReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 compound_id = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &compound_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 count = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &count_)));
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
  // @@protoc_insertion_point(parse_success:proto.PlayerCompoundMaterialReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.PlayerCompoundMaterialReq)
  return false;
#undef DO_
}

void PlayerCompoundMaterialReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.PlayerCompoundMaterialReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 compound_id = 2;
  if (this->compound_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->compound_id(), output);
  }

  // uint32 count = 3;
  if (this->count() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->count(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.PlayerCompoundMaterialReq)
}

::google::protobuf::uint8* PlayerCompoundMaterialReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.PlayerCompoundMaterialReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 compound_id = 2;
  if (this->compound_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->compound_id(), target);
  }

  // uint32 count = 3;
  if (this->count() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->count(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.PlayerCompoundMaterialReq)
  return target;
}

size_t PlayerCompoundMaterialReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.PlayerCompoundMaterialReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 compound_id = 2;
  if (this->compound_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->compound_id());
  }

  // uint32 count = 3;
  if (this->count() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->count());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool CompoundQueueData::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.CompoundQueueData)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 wait_count = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 64 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &wait_count_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 compound_id = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &compound_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 output_time = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(88u /* 88 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &output_time_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 output_count = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(96u /* 96 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &output_count_)));
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
  // @@protoc_insertion_point(parse_success:proto.CompoundQueueData)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.CompoundQueueData)
  return false;
#undef DO_
}

void CompoundQueueData::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.CompoundQueueData)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 wait_count = 8;
  if (this->wait_count() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(8, this->wait_count(), output);
  }

  // uint32 compound_id = 9;
  if (this->compound_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(9, this->compound_id(), output);
  }

  // uint32 output_time = 11;
  if (this->output_time() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(11, this->output_time(), output);
  }

  // uint32 output_count = 12;
  if (this->output_count() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(12, this->output_count(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.CompoundQueueData)
}

::google::protobuf::uint8* CompoundQueueData::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.CompoundQueueData)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 wait_count = 8;
  if (this->wait_count() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(8, this->wait_count(), target);
  }

  // uint32 compound_id = 9;
  if (this->compound_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(9, this->compound_id(), target);
  }

  // uint32 output_time = 11;
  if (this->output_time() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(11, this->output_time(), target);
  }

  // uint32 output_count = 12;
  if (this->output_count() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(12, this->output_count(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.CompoundQueueData)
  return target;
}

size_t CompoundQueueData::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.CompoundQueueData)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 wait_count = 8;
  if (this->wait_count() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->wait_count());
  }

  // uint32 compound_id = 9;
  if (this->compound_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->compound_id());
  }

  // uint32 output_time = 11;
  if (this->output_time() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->output_time());
  }

  // uint32 output_count = 12;
  if (this->output_count() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->output_count());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool PlayerCompoundMaterialRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.PlayerCompoundMaterialRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .proto.CompoundQueueData compound_que_data = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(66u /* 66 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_compound_que_data()));
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
  // @@protoc_insertion_point(parse_success:proto.PlayerCompoundMaterialRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.PlayerCompoundMaterialRsp)
  return false;
#undef DO_
}

void PlayerCompoundMaterialRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.PlayerCompoundMaterialRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.CompoundQueueData compound_que_data = 8;
  if (this->has_compound_que_data()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      8, *this->compound_que_data_, output);
  }

  // int32 retcode = 15;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(15, this->retcode(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.PlayerCompoundMaterialRsp)
}

::google::protobuf::uint8* PlayerCompoundMaterialRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.PlayerCompoundMaterialRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.CompoundQueueData compound_que_data = 8;
  if (this->has_compound_que_data()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        8, *this->compound_que_data_, deterministic, target);
  }

  // int32 retcode = 15;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(15, this->retcode(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.PlayerCompoundMaterialRsp)
  return target;
}

size_t PlayerCompoundMaterialRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.PlayerCompoundMaterialRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .proto.CompoundQueueData compound_que_data = 8;
  if (this->has_compound_que_data()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->compound_que_data_);
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

bool TakeCompoundOutputReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.TakeCompoundOutputReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 compound_group_id = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &compound_group_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 compound_id = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(104u /* 104 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &compound_id_)));
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
  // @@protoc_insertion_point(parse_success:proto.TakeCompoundOutputReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.TakeCompoundOutputReq)
  return false;
#undef DO_
}

void TakeCompoundOutputReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.TakeCompoundOutputReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 compound_group_id = 4;
  if (this->compound_group_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->compound_group_id(), output);
  }

  // uint32 compound_id = 13;
  if (this->compound_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(13, this->compound_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.TakeCompoundOutputReq)
}

::google::protobuf::uint8* TakeCompoundOutputReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.TakeCompoundOutputReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 compound_group_id = 4;
  if (this->compound_group_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->compound_group_id(), target);
  }

  // uint32 compound_id = 13;
  if (this->compound_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(13, this->compound_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.TakeCompoundOutputReq)
  return target;
}

size_t TakeCompoundOutputReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.TakeCompoundOutputReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 compound_group_id = 4;
  if (this->compound_group_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->compound_group_id());
  }

  // uint32 compound_id = 13;
  if (this->compound_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->compound_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool TakeCompoundOutputRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.TakeCompoundOutputRsp)
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

      // repeated .proto.ItemParam item_list = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(106u /* 106 & 0xFF */)) {
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
  // @@protoc_insertion_point(parse_success:proto.TakeCompoundOutputRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.TakeCompoundOutputRsp)
  return false;
#undef DO_
}

void TakeCompoundOutputRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.TakeCompoundOutputRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 retcode = 2;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->retcode(), output);
  }

  // repeated .proto.ItemParam item_list = 13;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->item_list_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      13, this->item_list(static_cast<int>(i)), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.TakeCompoundOutputRsp)
}

::google::protobuf::uint8* TakeCompoundOutputRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.TakeCompoundOutputRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 retcode = 2;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->retcode(), target);
  }

  // repeated .proto.ItemParam item_list = 13;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->item_list_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        13, this->item_list(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.TakeCompoundOutputRsp)
  return target;
}

size_t TakeCompoundOutputRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.TakeCompoundOutputRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .proto.ItemParam item_list = 13;
  {
    unsigned int count = static_cast<unsigned int>(this->item_list_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->item_list(static_cast<int>(i)));
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

bool CompoundDataNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.CompoundDataNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated uint32 unlock_compound_list = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_unlock_compound_list())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 1, 42u, input, this->mutable_unlock_compound_list())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .proto.CompoundQueueData compound_que_data_list = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(114u /* 114 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_compound_que_data_list()));
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
  // @@protoc_insertion_point(parse_success:proto.CompoundDataNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.CompoundDataNotify)
  return false;
#undef DO_
}

void CompoundDataNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.CompoundDataNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated uint32 unlock_compound_list = 5;
  if (this->unlock_compound_list_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(5, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _unlock_compound_list_cached_byte_size_));
  }
  for (int i = 0, n = this->unlock_compound_list_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32NoTag(
      this->unlock_compound_list(i), output);
  }

  // repeated .proto.CompoundQueueData compound_que_data_list = 14;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->compound_que_data_list_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      14, this->compound_que_data_list(static_cast<int>(i)), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.CompoundDataNotify)
}

::google::protobuf::uint8* CompoundDataNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.CompoundDataNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated uint32 unlock_compound_list = 5;
  if (this->unlock_compound_list_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      5,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::uint32>(
            _unlock_compound_list_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt32NoTagToArray(this->unlock_compound_list_, target);
  }

  // repeated .proto.CompoundQueueData compound_que_data_list = 14;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->compound_que_data_list_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        14, this->compound_que_data_list(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.CompoundDataNotify)
  return target;
}

size_t CompoundDataNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.CompoundDataNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated uint32 unlock_compound_list = 5;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      UInt32Size(this->unlock_compound_list_);
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _unlock_compound_list_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // repeated .proto.CompoundQueueData compound_que_data_list = 14;
  {
    unsigned int count = static_cast<unsigned int>(this->compound_que_data_list_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->compound_que_data_list(static_cast<int>(i)));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool GetCompoundDataReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.GetCompoundDataReq)
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
  // @@protoc_insertion_point(parse_success:proto.GetCompoundDataReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.GetCompoundDataReq)
  return false;
#undef DO_
}

void GetCompoundDataReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.GetCompoundDataReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.GetCompoundDataReq)
}

::google::protobuf::uint8* GetCompoundDataReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.GetCompoundDataReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.GetCompoundDataReq)
  return target;
}

size_t GetCompoundDataReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.GetCompoundDataReq)
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

bool GetCompoundDataRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.GetCompoundDataRsp)
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

      // repeated .proto.CompoundQueueData compound_que_data_list = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_compound_que_data_list()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated uint32 unlock_compound_list = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(114u /* 114 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_unlock_compound_list())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(112u /* 112 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 1, 114u, input, this->mutable_unlock_compound_list())));
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
  // @@protoc_insertion_point(parse_success:proto.GetCompoundDataRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.GetCompoundDataRsp)
  return false;
#undef DO_
}

void GetCompoundDataRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.GetCompoundDataRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 retcode = 2;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->retcode(), output);
  }

  // repeated .proto.CompoundQueueData compound_que_data_list = 6;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->compound_que_data_list_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      6, this->compound_que_data_list(static_cast<int>(i)), output);
  }

  // repeated uint32 unlock_compound_list = 14;
  if (this->unlock_compound_list_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(14, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _unlock_compound_list_cached_byte_size_));
  }
  for (int i = 0, n = this->unlock_compound_list_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32NoTag(
      this->unlock_compound_list(i), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.GetCompoundDataRsp)
}

::google::protobuf::uint8* GetCompoundDataRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.GetCompoundDataRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 retcode = 2;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->retcode(), target);
  }

  // repeated .proto.CompoundQueueData compound_que_data_list = 6;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->compound_que_data_list_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        6, this->compound_que_data_list(static_cast<int>(i)), deterministic, target);
  }

  // repeated uint32 unlock_compound_list = 14;
  if (this->unlock_compound_list_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      14,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::uint32>(
            _unlock_compound_list_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt32NoTagToArray(this->unlock_compound_list_, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.GetCompoundDataRsp)
  return target;
}

size_t GetCompoundDataRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.GetCompoundDataRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .proto.CompoundQueueData compound_que_data_list = 6;
  {
    unsigned int count = static_cast<unsigned int>(this->compound_que_data_list_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->compound_que_data_list(static_cast<int>(i)));
    }
  }

  // repeated uint32 unlock_compound_list = 14;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      UInt32Size(this->unlock_compound_list_);
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _unlock_compound_list_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
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

bool PlayerTimeNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.PlayerTimeNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bool is_paused = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_paused_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint64 player_time = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(104u /* 104 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &player_time_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint64 server_time = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(120u /* 120 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &server_time_)));
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
  // @@protoc_insertion_point(parse_success:proto.PlayerTimeNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.PlayerTimeNotify)
  return false;
#undef DO_
}

void PlayerTimeNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.PlayerTimeNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool is_paused = 7;
  if (this->is_paused() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(7, this->is_paused(), output);
  }

  // uint64 player_time = 13;
  if (this->player_time() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(13, this->player_time(), output);
  }

  // uint64 server_time = 15;
  if (this->server_time() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(15, this->server_time(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.PlayerTimeNotify)
}

::google::protobuf::uint8* PlayerTimeNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.PlayerTimeNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool is_paused = 7;
  if (this->is_paused() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(7, this->is_paused(), target);
  }

  // uint64 player_time = 13;
  if (this->player_time() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(13, this->player_time(), target);
  }

  // uint64 server_time = 15;
  if (this->server_time() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(15, this->server_time(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.PlayerTimeNotify)
  return target;
}

size_t PlayerTimeNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.PlayerTimeNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // bool is_paused = 7;
  if (this->is_paused() != 0) {
    total_size += 1 + 1;
  }

  // uint64 player_time = 13;
  if (this->player_time() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->player_time());
  }

  // uint64 server_time = 15;
  if (this->server_time() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->server_time());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool PlayerSetPauseReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.PlayerSetPauseReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bool is_paused = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(88u /* 88 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_paused_)));
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
  // @@protoc_insertion_point(parse_success:proto.PlayerSetPauseReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.PlayerSetPauseReq)
  return false;
#undef DO_
}

void PlayerSetPauseReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.PlayerSetPauseReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool is_paused = 11;
  if (this->is_paused() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(11, this->is_paused(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.PlayerSetPauseReq)
}

::google::protobuf::uint8* PlayerSetPauseReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.PlayerSetPauseReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool is_paused = 11;
  if (this->is_paused() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(11, this->is_paused(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.PlayerSetPauseReq)
  return target;
}

size_t PlayerSetPauseReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.PlayerSetPauseReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // bool is_paused = 11;
  if (this->is_paused() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool PlayerSetPauseRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.PlayerSetPauseRsp)
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
  // @@protoc_insertion_point(parse_success:proto.PlayerSetPauseRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.PlayerSetPauseRsp)
  return false;
#undef DO_
}

void PlayerSetPauseRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.PlayerSetPauseRsp)
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
  // @@protoc_insertion_point(serialize_end:proto.PlayerSetPauseRsp)
}

::google::protobuf::uint8* PlayerSetPauseRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.PlayerSetPauseRsp)
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
  // @@protoc_insertion_point(serialize_to_array_end:proto.PlayerSetPauseRsp)
  return target;
}

size_t PlayerSetPauseRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.PlayerSetPauseRsp)
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

bool PlayerSetLanguageReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.PlayerSetLanguageReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 language_type = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &language_type_)));
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
  // @@protoc_insertion_point(parse_success:proto.PlayerSetLanguageReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.PlayerSetLanguageReq)
  return false;
#undef DO_
}

void PlayerSetLanguageReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.PlayerSetLanguageReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 language_type = 3;
  if (this->language_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->language_type(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.PlayerSetLanguageReq)
}

::google::protobuf::uint8* PlayerSetLanguageReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.PlayerSetLanguageReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 language_type = 3;
  if (this->language_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->language_type(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.PlayerSetLanguageReq)
  return target;
}

size_t PlayerSetLanguageReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.PlayerSetLanguageReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 language_type = 3;
  if (this->language_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->language_type());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool PlayerSetLanguageRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.PlayerSetLanguageRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 retcode = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

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
  // @@protoc_insertion_point(parse_success:proto.PlayerSetLanguageRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.PlayerSetLanguageRsp)
  return false;
#undef DO_
}

void PlayerSetLanguageRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.PlayerSetLanguageRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 retcode = 6;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(6, this->retcode(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.PlayerSetLanguageRsp)
}

::google::protobuf::uint8* PlayerSetLanguageRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.PlayerSetLanguageRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 retcode = 6;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(6, this->retcode(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.PlayerSetLanguageRsp)
  return target;
}

size_t PlayerSetLanguageRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.PlayerSetLanguageRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // int32 retcode = 6;
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

bool DataResVersionNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.DataResVersionNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string client_md5 = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_client_md5()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->client_md5().data(), static_cast<int>(this->client_md5().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.DataResVersionNotify.client_md5"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 client_data_version = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &client_data_version_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 client_silence_data_version = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &client_silence_data_version_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_data_need_relogin = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_data_need_relogin_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.ResVersionConfig res_version_config = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(58u /* 58 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_res_version_config()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string client_version_suffix = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(66u /* 66 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_client_version_suffix()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->client_version_suffix().data(), static_cast<int>(this->client_version_suffix().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.DataResVersionNotify.client_version_suffix"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string client_silence_md5 = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(98u /* 98 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_client_silence_md5()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->client_silence_md5().data(), static_cast<int>(this->client_silence_md5().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.DataResVersionNotify.client_silence_md5"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.DataResVersionNotify.DataResVersionOpType op_type = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(112u /* 112 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_op_type(static_cast< ::proto::DataResVersionNotify_DataResVersionOpType >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string client_silence_version_suffix = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(122u /* 122 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_client_silence_version_suffix()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->client_silence_version_suffix().data(), static_cast<int>(this->client_silence_version_suffix().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.DataResVersionNotify.client_silence_version_suffix"));
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
  // @@protoc_insertion_point(parse_success:proto.DataResVersionNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.DataResVersionNotify)
  return false;
#undef DO_
}

void DataResVersionNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.DataResVersionNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string client_md5 = 1;
  if (this->client_md5().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->client_md5().data(), static_cast<int>(this->client_md5().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.DataResVersionNotify.client_md5");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->client_md5(), output);
  }

  // uint32 client_data_version = 3;
  if (this->client_data_version() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->client_data_version(), output);
  }

  // uint32 client_silence_data_version = 5;
  if (this->client_silence_data_version() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->client_silence_data_version(), output);
  }

  // bool is_data_need_relogin = 6;
  if (this->is_data_need_relogin() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(6, this->is_data_need_relogin(), output);
  }

  // .proto.ResVersionConfig res_version_config = 7;
  if (this->has_res_version_config()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      7, *this->res_version_config_, output);
  }

  // string client_version_suffix = 8;
  if (this->client_version_suffix().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->client_version_suffix().data(), static_cast<int>(this->client_version_suffix().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.DataResVersionNotify.client_version_suffix");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      8, this->client_version_suffix(), output);
  }

  // string client_silence_md5 = 12;
  if (this->client_silence_md5().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->client_silence_md5().data(), static_cast<int>(this->client_silence_md5().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.DataResVersionNotify.client_silence_md5");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      12, this->client_silence_md5(), output);
  }

  // .proto.DataResVersionNotify.DataResVersionOpType op_type = 14;
  if (this->op_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      14, this->op_type(), output);
  }

  // string client_silence_version_suffix = 15;
  if (this->client_silence_version_suffix().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->client_silence_version_suffix().data(), static_cast<int>(this->client_silence_version_suffix().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.DataResVersionNotify.client_silence_version_suffix");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      15, this->client_silence_version_suffix(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.DataResVersionNotify)
}

::google::protobuf::uint8* DataResVersionNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.DataResVersionNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string client_md5 = 1;
  if (this->client_md5().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->client_md5().data(), static_cast<int>(this->client_md5().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.DataResVersionNotify.client_md5");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->client_md5(), target);
  }

  // uint32 client_data_version = 3;
  if (this->client_data_version() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->client_data_version(), target);
  }

  // uint32 client_silence_data_version = 5;
  if (this->client_silence_data_version() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->client_silence_data_version(), target);
  }

  // bool is_data_need_relogin = 6;
  if (this->is_data_need_relogin() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(6, this->is_data_need_relogin(), target);
  }

  // .proto.ResVersionConfig res_version_config = 7;
  if (this->has_res_version_config()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        7, *this->res_version_config_, deterministic, target);
  }

  // string client_version_suffix = 8;
  if (this->client_version_suffix().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->client_version_suffix().data(), static_cast<int>(this->client_version_suffix().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.DataResVersionNotify.client_version_suffix");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        8, this->client_version_suffix(), target);
  }

  // string client_silence_md5 = 12;
  if (this->client_silence_md5().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->client_silence_md5().data(), static_cast<int>(this->client_silence_md5().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.DataResVersionNotify.client_silence_md5");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        12, this->client_silence_md5(), target);
  }

  // .proto.DataResVersionNotify.DataResVersionOpType op_type = 14;
  if (this->op_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      14, this->op_type(), target);
  }

  // string client_silence_version_suffix = 15;
  if (this->client_silence_version_suffix().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->client_silence_version_suffix().data(), static_cast<int>(this->client_silence_version_suffix().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.DataResVersionNotify.client_silence_version_suffix");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        15, this->client_silence_version_suffix(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.DataResVersionNotify)
  return target;
}

size_t DataResVersionNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.DataResVersionNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string client_md5 = 1;
  if (this->client_md5().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->client_md5());
  }

  // string client_version_suffix = 8;
  if (this->client_version_suffix().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->client_version_suffix());
  }

  // string client_silence_md5 = 12;
  if (this->client_silence_md5().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->client_silence_md5());
  }

  // string client_silence_version_suffix = 15;
  if (this->client_silence_version_suffix().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->client_silence_version_suffix());
  }

  // .proto.ResVersionConfig res_version_config = 7;
  if (this->has_res_version_config()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->res_version_config_);
  }

  // uint32 client_data_version = 3;
  if (this->client_data_version() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->client_data_version());
  }

  // uint32 client_silence_data_version = 5;
  if (this->client_silence_data_version() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->client_silence_data_version());
  }

  // bool is_data_need_relogin = 6;
  if (this->is_data_need_relogin() != 0) {
    total_size += 1 + 1;
  }

  // .proto.DataResVersionNotify.DataResVersionOpType op_type = 14;
  if (this->op_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->op_type());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool DailyTaskInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.DailyTaskInfo)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bool is_finished = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_finished_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 daily_task_id = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &daily_task_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 progress = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &progress_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 finish_progress = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &finish_progress_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 reward_id = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(112u /* 112 & 0xFF */)) {

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
  // @@protoc_insertion_point(parse_success:proto.DailyTaskInfo)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.DailyTaskInfo)
  return false;
#undef DO_
}

void DailyTaskInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.DailyTaskInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool is_finished = 3;
  if (this->is_finished() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->is_finished(), output);
  }

  // uint32 daily_task_id = 5;
  if (this->daily_task_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->daily_task_id(), output);
  }

  // uint32 progress = 7;
  if (this->progress() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->progress(), output);
  }

  // uint32 finish_progress = 9;
  if (this->finish_progress() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(9, this->finish_progress(), output);
  }

  // uint32 reward_id = 14;
  if (this->reward_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(14, this->reward_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.DailyTaskInfo)
}

::google::protobuf::uint8* DailyTaskInfo::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.DailyTaskInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool is_finished = 3;
  if (this->is_finished() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(3, this->is_finished(), target);
  }

  // uint32 daily_task_id = 5;
  if (this->daily_task_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->daily_task_id(), target);
  }

  // uint32 progress = 7;
  if (this->progress() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(7, this->progress(), target);
  }

  // uint32 finish_progress = 9;
  if (this->finish_progress() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(9, this->finish_progress(), target);
  }

  // uint32 reward_id = 14;
  if (this->reward_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(14, this->reward_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.DailyTaskInfo)
  return target;
}

size_t DailyTaskInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.DailyTaskInfo)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // bool is_finished = 3;
  if (this->is_finished() != 0) {
    total_size += 1 + 1;
  }

  // uint32 daily_task_id = 5;
  if (this->daily_task_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->daily_task_id());
  }

  // uint32 reward_id = 14;
  if (this->reward_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->reward_id());
  }

  // uint32 progress = 7;
  if (this->progress() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->progress());
  }

  // uint32 finish_progress = 9;
  if (this->finish_progress() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->finish_progress());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool DailyTaskDataNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.DailyTaskDataNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 score_reward_id = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &score_reward_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 finished_num = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(88u /* 88 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &finished_num_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_taken_score_reward = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(104u /* 104 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_taken_score_reward_)));
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
  // @@protoc_insertion_point(parse_success:proto.DailyTaskDataNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.DailyTaskDataNotify)
  return false;
#undef DO_
}

void DailyTaskDataNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.DailyTaskDataNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 score_reward_id = 2;
  if (this->score_reward_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->score_reward_id(), output);
  }

  // uint32 finished_num = 11;
  if (this->finished_num() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(11, this->finished_num(), output);
  }

  // bool is_taken_score_reward = 13;
  if (this->is_taken_score_reward() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(13, this->is_taken_score_reward(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.DailyTaskDataNotify)
}

::google::protobuf::uint8* DailyTaskDataNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.DailyTaskDataNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 score_reward_id = 2;
  if (this->score_reward_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->score_reward_id(), target);
  }

  // uint32 finished_num = 11;
  if (this->finished_num() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(11, this->finished_num(), target);
  }

  // bool is_taken_score_reward = 13;
  if (this->is_taken_score_reward() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(13, this->is_taken_score_reward(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.DailyTaskDataNotify)
  return target;
}

size_t DailyTaskDataNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.DailyTaskDataNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // bool is_taken_score_reward = 13;
  if (this->is_taken_score_reward() != 0) {
    total_size += 1 + 1;
  }

  // uint32 score_reward_id = 2;
  if (this->score_reward_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->score_reward_id());
  }

  // uint32 finished_num = 11;
  if (this->finished_num() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->finished_num());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool DailyTaskProgressNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.DailyTaskProgressNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .proto.DailyTaskInfo info = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(98u /* 98 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_info()));
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
  // @@protoc_insertion_point(parse_success:proto.DailyTaskProgressNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.DailyTaskProgressNotify)
  return false;
#undef DO_
}

void DailyTaskProgressNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.DailyTaskProgressNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.DailyTaskInfo info = 12;
  if (this->has_info()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      12, *this->info_, output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.DailyTaskProgressNotify)
}

::google::protobuf::uint8* DailyTaskProgressNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.DailyTaskProgressNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.DailyTaskInfo info = 12;
  if (this->has_info()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        12, *this->info_, deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.DailyTaskProgressNotify)
  return target;
}

size_t DailyTaskProgressNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.DailyTaskProgressNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .proto.DailyTaskInfo info = 12;
  if (this->has_info()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->info_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool DailyTaskScoreRewardNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.DailyTaskScoreRewardNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 reward_id = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {

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
  // @@protoc_insertion_point(parse_success:proto.DailyTaskScoreRewardNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.DailyTaskScoreRewardNotify)
  return false;
#undef DO_
}

void DailyTaskScoreRewardNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.DailyTaskScoreRewardNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 reward_id = 9;
  if (this->reward_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(9, this->reward_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.DailyTaskScoreRewardNotify)
}

::google::protobuf::uint8* DailyTaskScoreRewardNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.DailyTaskScoreRewardNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 reward_id = 9;
  if (this->reward_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(9, this->reward_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.DailyTaskScoreRewardNotify)
  return target;
}

size_t DailyTaskScoreRewardNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.DailyTaskScoreRewardNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 reward_id = 9;
  if (this->reward_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->reward_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool WorldOwnerDailyTaskNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.WorldOwnerDailyTaskNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 finished_daily_task_num = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &finished_daily_task_num_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .proto.DailyTaskInfo task_list = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(74u /* 74 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_task_list()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 filter_city_id = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(120u /* 120 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &filter_city_id_)));
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
  // @@protoc_insertion_point(parse_success:proto.WorldOwnerDailyTaskNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.WorldOwnerDailyTaskNotify)
  return false;
#undef DO_
}

void WorldOwnerDailyTaskNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.WorldOwnerDailyTaskNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 finished_daily_task_num = 4;
  if (this->finished_daily_task_num() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->finished_daily_task_num(), output);
  }

  // repeated .proto.DailyTaskInfo task_list = 9;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->task_list_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      9, this->task_list(static_cast<int>(i)), output);
  }

  // uint32 filter_city_id = 15;
  if (this->filter_city_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(15, this->filter_city_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.WorldOwnerDailyTaskNotify)
}

::google::protobuf::uint8* WorldOwnerDailyTaskNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.WorldOwnerDailyTaskNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 finished_daily_task_num = 4;
  if (this->finished_daily_task_num() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->finished_daily_task_num(), target);
  }

  // repeated .proto.DailyTaskInfo task_list = 9;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->task_list_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        9, this->task_list(static_cast<int>(i)), deterministic, target);
  }

  // uint32 filter_city_id = 15;
  if (this->filter_city_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(15, this->filter_city_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.WorldOwnerDailyTaskNotify)
  return target;
}

size_t WorldOwnerDailyTaskNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.WorldOwnerDailyTaskNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .proto.DailyTaskInfo task_list = 9;
  {
    unsigned int count = static_cast<unsigned int>(this->task_list_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->task_list(static_cast<int>(i)));
    }
  }

  // uint32 finished_daily_task_num = 4;
  if (this->finished_daily_task_num() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->finished_daily_task_num());
  }

  // uint32 filter_city_id = 15;
  if (this->filter_city_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->filter_city_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AddRandTaskInfoNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AddRandTaskInfoNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 rand_task_id = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &rand_task_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.Vector pos = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_pos()));
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
  // @@protoc_insertion_point(parse_success:proto.AddRandTaskInfoNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AddRandTaskInfoNotify)
  return false;
#undef DO_
}

void AddRandTaskInfoNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AddRandTaskInfoNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 rand_task_id = 2;
  if (this->rand_task_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->rand_task_id(), output);
  }

  // .proto.Vector pos = 6;
  if (this->has_pos()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      6, *this->pos_, output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AddRandTaskInfoNotify)
}

::google::protobuf::uint8* AddRandTaskInfoNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AddRandTaskInfoNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 rand_task_id = 2;
  if (this->rand_task_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->rand_task_id(), target);
  }

  // .proto.Vector pos = 6;
  if (this->has_pos()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        6, *this->pos_, deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AddRandTaskInfoNotify)
  return target;
}

size_t AddRandTaskInfoNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AddRandTaskInfoNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .proto.Vector pos = 6;
  if (this->has_pos()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->pos_);
  }

  // uint32 rand_task_id = 2;
  if (this->rand_task_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->rand_task_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool RemoveRandTaskInfoNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.RemoveRandTaskInfoNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .proto.RemoveRandTaskInfoNotify.FinishReason reason = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_reason(static_cast< ::proto::RemoveRandTaskInfoNotify_FinishReason >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_succ = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_succ_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 rand_task_id = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &rand_task_id_)));
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
  // @@protoc_insertion_point(parse_success:proto.RemoveRandTaskInfoNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.RemoveRandTaskInfoNotify)
  return false;
#undef DO_
}

void RemoveRandTaskInfoNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.RemoveRandTaskInfoNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.RemoveRandTaskInfoNotify.FinishReason reason = 2;
  if (this->reason() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->reason(), output);
  }

  // bool is_succ = 7;
  if (this->is_succ() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(7, this->is_succ(), output);
  }

  // uint32 rand_task_id = 9;
  if (this->rand_task_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(9, this->rand_task_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.RemoveRandTaskInfoNotify)
}

::google::protobuf::uint8* RemoveRandTaskInfoNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.RemoveRandTaskInfoNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.RemoveRandTaskInfoNotify.FinishReason reason = 2;
  if (this->reason() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->reason(), target);
  }

  // bool is_succ = 7;
  if (this->is_succ() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(7, this->is_succ(), target);
  }

  // uint32 rand_task_id = 9;
  if (this->rand_task_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(9, this->rand_task_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.RemoveRandTaskInfoNotify)
  return target;
}

size_t RemoveRandTaskInfoNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.RemoveRandTaskInfoNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 rand_task_id = 9;
  if (this->rand_task_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->rand_task_id());
  }

  // .proto.RemoveRandTaskInfoNotify.FinishReason reason = 2;
  if (this->reason() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->reason());
  }

  // bool is_succ = 7;
  if (this->is_succ() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool TakePlayerLevelRewardReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.TakePlayerLevelRewardReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 level = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &level_)));
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
  // @@protoc_insertion_point(parse_success:proto.TakePlayerLevelRewardReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.TakePlayerLevelRewardReq)
  return false;
#undef DO_
}

void TakePlayerLevelRewardReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.TakePlayerLevelRewardReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 level = 9;
  if (this->level() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(9, this->level(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.TakePlayerLevelRewardReq)
}

::google::protobuf::uint8* TakePlayerLevelRewardReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.TakePlayerLevelRewardReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 level = 9;
  if (this->level() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(9, this->level(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.TakePlayerLevelRewardReq)
  return target;
}

size_t TakePlayerLevelRewardReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.TakePlayerLevelRewardReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 level = 9;
  if (this->level() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->level());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool TakePlayerLevelRewardRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.TakePlayerLevelRewardRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 reward_id = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &reward_id_)));
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

      // uint32 level = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &level_)));
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
  // @@protoc_insertion_point(parse_success:proto.TakePlayerLevelRewardRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.TakePlayerLevelRewardRsp)
  return false;
#undef DO_
}

void TakePlayerLevelRewardRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.TakePlayerLevelRewardRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 reward_id = 4;
  if (this->reward_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->reward_id(), output);
  }

  // int32 retcode = 5;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->retcode(), output);
  }

  // uint32 level = 7;
  if (this->level() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->level(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.TakePlayerLevelRewardRsp)
}

::google::protobuf::uint8* TakePlayerLevelRewardRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.TakePlayerLevelRewardRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 reward_id = 4;
  if (this->reward_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->reward_id(), target);
  }

  // int32 retcode = 5;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->retcode(), target);
  }

  // uint32 level = 7;
  if (this->level() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(7, this->level(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.TakePlayerLevelRewardRsp)
  return target;
}

size_t TakePlayerLevelRewardRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.TakePlayerLevelRewardRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 level = 7;
  if (this->level() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->level());
  }

  // uint32 reward_id = 4;
  if (this->reward_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->reward_id());
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

bool PlayerLevelRewardUpdateNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.PlayerLevelRewardUpdateNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated uint32 level_list = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_level_list())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 1, 42u, input, this->mutable_level_list())));
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
  // @@protoc_insertion_point(parse_success:proto.PlayerLevelRewardUpdateNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.PlayerLevelRewardUpdateNotify)
  return false;
#undef DO_
}

void PlayerLevelRewardUpdateNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.PlayerLevelRewardUpdateNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated uint32 level_list = 5;
  if (this->level_list_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(5, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _level_list_cached_byte_size_));
  }
  for (int i = 0, n = this->level_list_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32NoTag(
      this->level_list(i), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.PlayerLevelRewardUpdateNotify)
}

::google::protobuf::uint8* PlayerLevelRewardUpdateNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.PlayerLevelRewardUpdateNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated uint32 level_list = 5;
  if (this->level_list_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      5,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::uint32>(
            _level_list_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt32NoTagToArray(this->level_list_, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.PlayerLevelRewardUpdateNotify)
  return target;
}

size_t PlayerLevelRewardUpdateNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.PlayerLevelRewardUpdateNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated uint32 level_list = 5;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      UInt32Size(this->level_list_);
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _level_list_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool GivingRecord::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.GivingRecord)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bool is_finished = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_finished_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 giving_id = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &giving_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_gadget_giving = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_gadget_giving_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 config_id = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &config_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 last_group_id = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 64 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &last_group_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // map<uint32, uint32> material_cnt_map = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(82u /* 82 & 0xFF */)) {
          GivingRecord_MaterialCntMapEntry::Parser< ::google::protobuf::internal::MapField<
              GivingRecord_MaterialCntMapEntry,
              ::google::protobuf::uint32, ::google::protobuf::uint32,
              ::google::protobuf::internal::WireFormatLite::TYPE_UINT32,
              ::google::protobuf::internal::WireFormatLite::TYPE_UINT32,
              0 >,
            ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 > > parser(&material_cnt_map_);
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
              input, &parser));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 group_id = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(112u /* 112 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &group_id_)));
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
  // @@protoc_insertion_point(parse_success:proto.GivingRecord)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.GivingRecord)
  return false;
#undef DO_
}

void GivingRecord::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.GivingRecord)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool is_finished = 1;
  if (this->is_finished() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->is_finished(), output);
  }

  // uint32 giving_id = 4;
  if (this->giving_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->giving_id(), output);
  }

  // bool is_gadget_giving = 6;
  if (this->is_gadget_giving() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(6, this->is_gadget_giving(), output);
  }

  // uint32 config_id = 7;
  if (this->config_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->config_id(), output);
  }

  // uint32 last_group_id = 8;
  if (this->last_group_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(8, this->last_group_id(), output);
  }

  // map<uint32, uint32> material_cnt_map = 10;
  if (!this->material_cnt_map().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint32, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (output->IsSerializationDeterministic() &&
        this->material_cnt_map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->material_cnt_map().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::const_iterator
          it = this->material_cnt_map().begin();
          it != this->material_cnt_map().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<GivingRecord_MaterialCntMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(material_cnt_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            10, *entry, output);
      }
    } else {
      ::google::protobuf::scoped_ptr<GivingRecord_MaterialCntMapEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::const_iterator
          it = this->material_cnt_map().begin();
          it != this->material_cnt_map().end(); ++it) {
        entry.reset(material_cnt_map_.NewEntryWrapper(
            it->first, it->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            10, *entry, output);
      }
    }
  }

  // uint32 group_id = 14;
  if (this->group_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(14, this->group_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.GivingRecord)
}

::google::protobuf::uint8* GivingRecord::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.GivingRecord)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool is_finished = 1;
  if (this->is_finished() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->is_finished(), target);
  }

  // uint32 giving_id = 4;
  if (this->giving_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->giving_id(), target);
  }

  // bool is_gadget_giving = 6;
  if (this->is_gadget_giving() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(6, this->is_gadget_giving(), target);
  }

  // uint32 config_id = 7;
  if (this->config_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(7, this->config_id(), target);
  }

  // uint32 last_group_id = 8;
  if (this->last_group_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(8, this->last_group_id(), target);
  }

  // map<uint32, uint32> material_cnt_map = 10;
  if (!this->material_cnt_map().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint32, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (deterministic &&
        this->material_cnt_map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->material_cnt_map().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::const_iterator
          it = this->material_cnt_map().begin();
          it != this->material_cnt_map().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<GivingRecord_MaterialCntMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(material_cnt_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       10, *entry, deterministic, target);
;
      }
    } else {
      ::google::protobuf::scoped_ptr<GivingRecord_MaterialCntMapEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::const_iterator
          it = this->material_cnt_map().begin();
          it != this->material_cnt_map().end(); ++it) {
        entry.reset(material_cnt_map_.NewEntryWrapper(
            it->first, it->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       10, *entry, deterministic, target);
;
      }
    }
  }

  // uint32 group_id = 14;
  if (this->group_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(14, this->group_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.GivingRecord)
  return target;
}

size_t GivingRecord::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.GivingRecord)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // map<uint32, uint32> material_cnt_map = 10;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->material_cnt_map_size());
  {
    ::google::protobuf::scoped_ptr<GivingRecord_MaterialCntMapEntry> entry;
    for (::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::const_iterator
        it = this->material_cnt_map().begin();
        it != this->material_cnt_map().end(); ++it) {
      entry.reset(material_cnt_map_.NewEntryWrapper(it->first, it->second));
      total_size += ::google::protobuf::internal::WireFormatLite::
          MessageSizeNoVirtual(*entry);
    }
  }

  // bool is_finished = 1;
  if (this->is_finished() != 0) {
    total_size += 1 + 1;
  }

  // bool is_gadget_giving = 6;
  if (this->is_gadget_giving() != 0) {
    total_size += 1 + 1;
  }

  // uint32 giving_id = 4;
  if (this->giving_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->giving_id());
  }

  // uint32 config_id = 7;
  if (this->config_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->config_id());
  }

  // uint32 last_group_id = 8;
  if (this->last_group_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->last_group_id());
  }

  // uint32 group_id = 14;
  if (this->group_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->group_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool GivingRecordNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.GivingRecordNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .proto.GivingRecord giving_record_list = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_giving_record_list()));
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
  // @@protoc_insertion_point(parse_success:proto.GivingRecordNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.GivingRecordNotify)
  return false;
#undef DO_
}

void GivingRecordNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.GivingRecordNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.GivingRecord giving_record_list = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->giving_record_list_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->giving_record_list(static_cast<int>(i)), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.GivingRecordNotify)
}

::google::protobuf::uint8* GivingRecordNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.GivingRecordNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.GivingRecord giving_record_list = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->giving_record_list_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        4, this->giving_record_list(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.GivingRecordNotify)
  return target;
}

size_t GivingRecordNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.GivingRecordNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .proto.GivingRecord giving_record_list = 4;
  {
    unsigned int count = static_cast<unsigned int>(this->giving_record_list_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->giving_record_list(static_cast<int>(i)));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool GivingRecordChangeNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.GivingRecordChangeNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bool is_deactive = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_deactive_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.GivingRecord giving_record = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(66u /* 66 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_giving_record()));
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
  // @@protoc_insertion_point(parse_success:proto.GivingRecordChangeNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.GivingRecordChangeNotify)
  return false;
#undef DO_
}

void GivingRecordChangeNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.GivingRecordChangeNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool is_deactive = 4;
  if (this->is_deactive() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(4, this->is_deactive(), output);
  }

  // .proto.GivingRecord giving_record = 8;
  if (this->has_giving_record()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      8, *this->giving_record_, output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.GivingRecordChangeNotify)
}

::google::protobuf::uint8* GivingRecordChangeNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.GivingRecordChangeNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool is_deactive = 4;
  if (this->is_deactive() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(4, this->is_deactive(), target);
  }

  // .proto.GivingRecord giving_record = 8;
  if (this->has_giving_record()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        8, *this->giving_record_, deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.GivingRecordChangeNotify)
  return target;
}

size_t GivingRecordChangeNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.GivingRecordChangeNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .proto.GivingRecord giving_record = 8;
  if (this->has_giving_record()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->giving_record_);
  }

  // bool is_deactive = 4;
  if (this->is_deactive() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool ItemGivingReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.ItemGivingReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 giving_id = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &giving_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.ItemGivingReq.ItemGivingType item_giving_type = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 64 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_item_giving_type(static_cast< ::proto::ItemGivingReq_ItemGivingType >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .proto.ItemParam item_param_list = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(74u /* 74 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_item_param_list()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // map<uint64, uint32> item_guid_count_map = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(106u /* 106 & 0xFF */)) {
          ItemGivingReq_ItemGuidCountMapEntry::Parser< ::google::protobuf::internal::MapField<
              ItemGivingReq_ItemGuidCountMapEntry,
              ::google::protobuf::uint64, ::google::protobuf::uint32,
              ::google::protobuf::internal::WireFormatLite::TYPE_UINT64,
              ::google::protobuf::internal::WireFormatLite::TYPE_UINT32,
              0 >,
            ::google::protobuf::Map< ::google::protobuf::uint64, ::google::protobuf::uint32 > > parser(&item_guid_count_map_);
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
  // @@protoc_insertion_point(parse_success:proto.ItemGivingReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.ItemGivingReq)
  return false;
#undef DO_
}

void ItemGivingReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.ItemGivingReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 giving_id = 7;
  if (this->giving_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->giving_id(), output);
  }

  // .proto.ItemGivingReq.ItemGivingType item_giving_type = 8;
  if (this->item_giving_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      8, this->item_giving_type(), output);
  }

  // repeated .proto.ItemParam item_param_list = 9;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->item_param_list_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      9, this->item_param_list(static_cast<int>(i)), output);
  }

  // map<uint64, uint32> item_guid_count_map = 13;
  if (!this->item_guid_count_map().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint64, ::google::protobuf::uint32 >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint64, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (output->IsSerializationDeterministic() &&
        this->item_guid_count_map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->item_guid_count_map().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint64, ::google::protobuf::uint32 >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint64, ::google::protobuf::uint32 >::const_iterator
          it = this->item_guid_count_map().begin();
          it != this->item_guid_count_map().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<ItemGivingReq_ItemGuidCountMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(item_guid_count_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            13, *entry, output);
      }
    } else {
      ::google::protobuf::scoped_ptr<ItemGivingReq_ItemGuidCountMapEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint64, ::google::protobuf::uint32 >::const_iterator
          it = this->item_guid_count_map().begin();
          it != this->item_guid_count_map().end(); ++it) {
        entry.reset(item_guid_count_map_.NewEntryWrapper(
            it->first, it->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            13, *entry, output);
      }
    }
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.ItemGivingReq)
}

::google::protobuf::uint8* ItemGivingReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.ItemGivingReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 giving_id = 7;
  if (this->giving_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(7, this->giving_id(), target);
  }

  // .proto.ItemGivingReq.ItemGivingType item_giving_type = 8;
  if (this->item_giving_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      8, this->item_giving_type(), target);
  }

  // repeated .proto.ItemParam item_param_list = 9;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->item_param_list_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        9, this->item_param_list(static_cast<int>(i)), deterministic, target);
  }

  // map<uint64, uint32> item_guid_count_map = 13;
  if (!this->item_guid_count_map().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint64, ::google::protobuf::uint32 >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint64, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (deterministic &&
        this->item_guid_count_map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->item_guid_count_map().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint64, ::google::protobuf::uint32 >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint64, ::google::protobuf::uint32 >::const_iterator
          it = this->item_guid_count_map().begin();
          it != this->item_guid_count_map().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<ItemGivingReq_ItemGuidCountMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(item_guid_count_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       13, *entry, deterministic, target);
;
      }
    } else {
      ::google::protobuf::scoped_ptr<ItemGivingReq_ItemGuidCountMapEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint64, ::google::protobuf::uint32 >::const_iterator
          it = this->item_guid_count_map().begin();
          it != this->item_guid_count_map().end(); ++it) {
        entry.reset(item_guid_count_map_.NewEntryWrapper(
            it->first, it->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       13, *entry, deterministic, target);
;
      }
    }
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.ItemGivingReq)
  return target;
}

size_t ItemGivingReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.ItemGivingReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .proto.ItemParam item_param_list = 9;
  {
    unsigned int count = static_cast<unsigned int>(this->item_param_list_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->item_param_list(static_cast<int>(i)));
    }
  }

  // map<uint64, uint32> item_guid_count_map = 13;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->item_guid_count_map_size());
  {
    ::google::protobuf::scoped_ptr<ItemGivingReq_ItemGuidCountMapEntry> entry;
    for (::google::protobuf::Map< ::google::protobuf::uint64, ::google::protobuf::uint32 >::const_iterator
        it = this->item_guid_count_map().begin();
        it != this->item_guid_count_map().end(); ++it) {
      entry.reset(item_guid_count_map_.NewEntryWrapper(it->first, it->second));
      total_size += ::google::protobuf::internal::WireFormatLite::
          MessageSizeNoVirtual(*entry);
    }
  }

  // uint32 giving_id = 7;
  if (this->giving_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->giving_id());
  }

  // .proto.ItemGivingReq.ItemGivingType item_giving_type = 8;
  if (this->item_giving_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->item_giving_type());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool ItemGivingRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.ItemGivingRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 giving_id = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &giving_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 giving_group_id = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 64 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &giving_group_id_)));
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
  // @@protoc_insertion_point(parse_success:proto.ItemGivingRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.ItemGivingRsp)
  return false;
#undef DO_
}

void ItemGivingRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.ItemGivingRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 giving_id = 2;
  if (this->giving_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->giving_id(), output);
  }

  // uint32 giving_group_id = 8;
  if (this->giving_group_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(8, this->giving_group_id(), output);
  }

  // int32 retcode = 13;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(13, this->retcode(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.ItemGivingRsp)
}

::google::protobuf::uint8* ItemGivingRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.ItemGivingRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 giving_id = 2;
  if (this->giving_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->giving_id(), target);
  }

  // uint32 giving_group_id = 8;
  if (this->giving_group_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(8, this->giving_group_id(), target);
  }

  // int32 retcode = 13;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(13, this->retcode(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.ItemGivingRsp)
  return target;
}

size_t ItemGivingRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.ItemGivingRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // int32 retcode = 13;
  if (this->retcode() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->retcode());
  }

  // uint32 giving_id = 2;
  if (this->giving_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->giving_id());
  }

  // uint32 giving_group_id = 8;
  if (this->giving_group_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->giving_group_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool PlayerCookArgsReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.PlayerCookArgsReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 recipe_id = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &recipe_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 assist_avatar = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &assist_avatar_)));
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
  // @@protoc_insertion_point(parse_success:proto.PlayerCookArgsReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.PlayerCookArgsReq)
  return false;
#undef DO_
}

void PlayerCookArgsReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.PlayerCookArgsReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 recipe_id = 5;
  if (this->recipe_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->recipe_id(), output);
  }

  // uint32 assist_avatar = 9;
  if (this->assist_avatar() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(9, this->assist_avatar(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.PlayerCookArgsReq)
}

::google::protobuf::uint8* PlayerCookArgsReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.PlayerCookArgsReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 recipe_id = 5;
  if (this->recipe_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->recipe_id(), target);
  }

  // uint32 assist_avatar = 9;
  if (this->assist_avatar() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(9, this->assist_avatar(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.PlayerCookArgsReq)
  return target;
}

size_t PlayerCookArgsReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.PlayerCookArgsReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 recipe_id = 5;
  if (this->recipe_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->recipe_id());
  }

  // uint32 assist_avatar = 9;
  if (this->assist_avatar() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->assist_avatar());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool PlayerCookArgsRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.PlayerCookArgsRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // float qte_range_ratio = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(53u /* 53 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &qte_range_ratio_)));
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
  // @@protoc_insertion_point(parse_success:proto.PlayerCookArgsRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.PlayerCookArgsRsp)
  return false;
#undef DO_
}

void PlayerCookArgsRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.PlayerCookArgsRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // float qte_range_ratio = 6;
  if (this->qte_range_ratio() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(6, this->qte_range_ratio(), output);
  }

  // int32 retcode = 15;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(15, this->retcode(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.PlayerCookArgsRsp)
}

::google::protobuf::uint8* PlayerCookArgsRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.PlayerCookArgsRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // float qte_range_ratio = 6;
  if (this->qte_range_ratio() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(6, this->qte_range_ratio(), target);
  }

  // int32 retcode = 15;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(15, this->retcode(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.PlayerCookArgsRsp)
  return target;
}

size_t PlayerCookArgsRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.PlayerCookArgsRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // float qte_range_ratio = 6;
  if (this->qte_range_ratio() != 0) {
    total_size += 1 + 4;
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

bool PlayerLuaShellNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.PlayerLuaShellNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bytes lua_shell = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_lua_shell()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.LuaShellType shell_type = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_shell_type(static_cast< ::proto::LuaShellType >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 use_type = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 64 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &use_type_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 id = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(96u /* 96 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &id_)));
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
  // @@protoc_insertion_point(parse_success:proto.PlayerLuaShellNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.PlayerLuaShellNotify)
  return false;
#undef DO_
}

void PlayerLuaShellNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.PlayerLuaShellNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes lua_shell = 5;
  if (this->lua_shell().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      5, this->lua_shell(), output);
  }

  // .proto.LuaShellType shell_type = 7;
  if (this->shell_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      7, this->shell_type(), output);
  }

  // uint32 use_type = 8;
  if (this->use_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(8, this->use_type(), output);
  }

  // uint32 id = 12;
  if (this->id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(12, this->id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.PlayerLuaShellNotify)
}

::google::protobuf::uint8* PlayerLuaShellNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.PlayerLuaShellNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes lua_shell = 5;
  if (this->lua_shell().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        5, this->lua_shell(), target);
  }

  // .proto.LuaShellType shell_type = 7;
  if (this->shell_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      7, this->shell_type(), target);
  }

  // uint32 use_type = 8;
  if (this->use_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(8, this->use_type(), target);
  }

  // uint32 id = 12;
  if (this->id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(12, this->id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.PlayerLuaShellNotify)
  return target;
}

size_t PlayerLuaShellNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.PlayerLuaShellNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // bytes lua_shell = 5;
  if (this->lua_shell().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->lua_shell());
  }

  // uint32 id = 12;
  if (this->id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->id());
  }

  // .proto.LuaShellType shell_type = 7;
  if (this->shell_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->shell_type());
  }

  // uint32 use_type = 8;
  if (this->use_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->use_type());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool ServerDisconnectClientNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.ServerDisconnectClientNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 data = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(80u /* 80 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &data_)));
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
  // @@protoc_insertion_point(parse_success:proto.ServerDisconnectClientNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.ServerDisconnectClientNotify)
  return false;
#undef DO_
}

void ServerDisconnectClientNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.ServerDisconnectClientNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 data = 10;
  if (this->data() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(10, this->data(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.ServerDisconnectClientNotify)
}

::google::protobuf::uint8* ServerDisconnectClientNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.ServerDisconnectClientNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 data = 10;
  if (this->data() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(10, this->data(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.ServerDisconnectClientNotify)
  return target;
}

size_t ServerDisconnectClientNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.ServerDisconnectClientNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 data = 10;
  if (this->data() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->data());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AntiAddictNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AntiAddictNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string msg = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_msg()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->msg().data(), static_cast<int>(this->msg().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.AntiAddictNotify.msg"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 msg_type = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(104u /* 104 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &msg_type_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string level = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(114u /* 114 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_level()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->level().data(), static_cast<int>(this->level().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.AntiAddictNotify.level"));
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
  // @@protoc_insertion_point(parse_success:proto.AntiAddictNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AntiAddictNotify)
  return false;
#undef DO_
}

void AntiAddictNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AntiAddictNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string msg = 3;
  if (this->msg().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->msg().data(), static_cast<int>(this->msg().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.AntiAddictNotify.msg");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->msg(), output);
  }

  // int32 msg_type = 13;
  if (this->msg_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(13, this->msg_type(), output);
  }

  // string level = 14;
  if (this->level().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->level().data(), static_cast<int>(this->level().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.AntiAddictNotify.level");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      14, this->level(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AntiAddictNotify)
}

::google::protobuf::uint8* AntiAddictNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AntiAddictNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string msg = 3;
  if (this->msg().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->msg().data(), static_cast<int>(this->msg().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.AntiAddictNotify.msg");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->msg(), target);
  }

  // int32 msg_type = 13;
  if (this->msg_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(13, this->msg_type(), target);
  }

  // string level = 14;
  if (this->level().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->level().data(), static_cast<int>(this->level().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.AntiAddictNotify.level");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        14, this->level(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AntiAddictNotify)
  return target;
}

size_t AntiAddictNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AntiAddictNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string msg = 3;
  if (this->msg().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->msg());
  }

  // string level = 14;
  if (this->level().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->level());
  }

  // int32 msg_type = 13;
  if (this->msg_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->msg_type());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool PlayerForceExitReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.PlayerForceExitReq)
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
  // @@protoc_insertion_point(parse_success:proto.PlayerForceExitReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.PlayerForceExitReq)
  return false;
#undef DO_
}

void PlayerForceExitReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.PlayerForceExitReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.PlayerForceExitReq)
}

::google::protobuf::uint8* PlayerForceExitReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.PlayerForceExitReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.PlayerForceExitReq)
  return target;
}

size_t PlayerForceExitReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.PlayerForceExitReq)
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

bool PlayerForceExitRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.PlayerForceExitRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
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
  // @@protoc_insertion_point(parse_success:proto.PlayerForceExitRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.PlayerForceExitRsp)
  return false;
#undef DO_
}

void PlayerForceExitRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.PlayerForceExitRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 retcode = 13;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(13, this->retcode(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.PlayerForceExitRsp)
}

::google::protobuf::uint8* PlayerForceExitRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.PlayerForceExitRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 retcode = 13;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(13, this->retcode(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.PlayerForceExitRsp)
  return target;
}

size_t PlayerForceExitRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.PlayerForceExitRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
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

bool PlayerInjectFixNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.PlayerInjectFixNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bytes inject_fix = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_inject_fix()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 id = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(112u /* 112 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &id_)));
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
  // @@protoc_insertion_point(parse_success:proto.PlayerInjectFixNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.PlayerInjectFixNotify)
  return false;
#undef DO_
}

void PlayerInjectFixNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.PlayerInjectFixNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes inject_fix = 6;
  if (this->inject_fix().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      6, this->inject_fix(), output);
  }

  // uint32 id = 14;
  if (this->id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(14, this->id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.PlayerInjectFixNotify)
}

::google::protobuf::uint8* PlayerInjectFixNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.PlayerInjectFixNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes inject_fix = 6;
  if (this->inject_fix().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        6, this->inject_fix(), target);
  }

  // uint32 id = 14;
  if (this->id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(14, this->id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.PlayerInjectFixNotify)
  return target;
}

size_t PlayerInjectFixNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.PlayerInjectFixNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // bytes inject_fix = 6;
  if (this->inject_fix().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->inject_fix());
  }

  // uint32 id = 14;
  if (this->id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool TaskVar::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.TaskVar)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 key = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 64 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &key_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated int32 value_list = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(122u /* 122 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_value_list())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(120u /* 120 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 122u, input, this->mutable_value_list())));
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
  // @@protoc_insertion_point(parse_success:proto.TaskVar)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.TaskVar)
  return false;
#undef DO_
}

void TaskVar::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.TaskVar)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 key = 8;
  if (this->key() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(8, this->key(), output);
  }

  // repeated int32 value_list = 15;
  if (this->value_list_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(15, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _value_list_cached_byte_size_));
  }
  for (int i = 0, n = this->value_list_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32NoTag(
      this->value_list(i), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.TaskVar)
}

::google::protobuf::uint8* TaskVar::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.TaskVar)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 key = 8;
  if (this->key() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(8, this->key(), target);
  }

  // repeated int32 value_list = 15;
  if (this->value_list_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      15,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::uint32>(
            _value_list_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32NoTagToArray(this->value_list_, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.TaskVar)
  return target;
}

size_t TaskVar::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.TaskVar)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated int32 value_list = 15;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      Int32Size(this->value_list_);
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _value_list_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // uint32 key = 8;
  if (this->key() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->key());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool TaskVarNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.TaskVarNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .proto.TaskVar task_var_list = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(74u /* 74 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_task_var_list()));
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
  // @@protoc_insertion_point(parse_success:proto.TaskVarNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.TaskVarNotify)
  return false;
#undef DO_
}

void TaskVarNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.TaskVarNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.TaskVar task_var_list = 9;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->task_var_list_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      9, this->task_var_list(static_cast<int>(i)), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.TaskVarNotify)
}

::google::protobuf::uint8* TaskVarNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.TaskVarNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.TaskVar task_var_list = 9;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->task_var_list_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        9, this->task_var_list(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.TaskVarNotify)
  return target;
}

size_t TaskVarNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.TaskVarNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .proto.TaskVar task_var_list = 9;
  {
    unsigned int count = static_cast<unsigned int>(this->task_var_list_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->task_var_list(static_cast<int>(i)));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool ClientLockGameTimeNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.ClientLockGameTimeNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bool is_lock = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_lock_)));
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
  // @@protoc_insertion_point(parse_success:proto.ClientLockGameTimeNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.ClientLockGameTimeNotify)
  return false;
#undef DO_
}

void ClientLockGameTimeNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.ClientLockGameTimeNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool is_lock = 1;
  if (this->is_lock() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->is_lock(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.ClientLockGameTimeNotify)
}

::google::protobuf::uint8* ClientLockGameTimeNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.ClientLockGameTimeNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool is_lock = 1;
  if (this->is_lock() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->is_lock(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.ClientLockGameTimeNotify)
  return target;
}

size_t ClientLockGameTimeNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.ClientLockGameTimeNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // bool is_lock = 1;
  if (this->is_lock() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool GetNextResourceInfoReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.GetNextResourceInfoReq)
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
  // @@protoc_insertion_point(parse_success:proto.GetNextResourceInfoReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.GetNextResourceInfoReq)
  return false;
#undef DO_
}

void GetNextResourceInfoReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.GetNextResourceInfoReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.GetNextResourceInfoReq)
}

::google::protobuf::uint8* GetNextResourceInfoReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.GetNextResourceInfoReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.GetNextResourceInfoReq)
  return target;
}

size_t GetNextResourceInfoReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.GetNextResourceInfoReq)
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

bool GetNextResourceInfoRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.GetNextResourceInfoRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string next_resource_url = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_next_resource_url()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->next_resource_url().data(), static_cast<int>(this->next_resource_url().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.GetNextResourceInfoRsp.next_resource_url"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.ResVersionConfig next_res_version_config = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_next_res_version_config()));
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
  // @@protoc_insertion_point(parse_success:proto.GetNextResourceInfoRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.GetNextResourceInfoRsp)
  return false;
#undef DO_
}

void GetNextResourceInfoRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.GetNextResourceInfoRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string next_resource_url = 1;
  if (this->next_resource_url().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->next_resource_url().data(), static_cast<int>(this->next_resource_url().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.GetNextResourceInfoRsp.next_resource_url");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->next_resource_url(), output);
  }

  // .proto.ResVersionConfig next_res_version_config = 5;
  if (this->has_next_res_version_config()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, *this->next_res_version_config_, output);
  }

  // int32 retcode = 9;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(9, this->retcode(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.GetNextResourceInfoRsp)
}

::google::protobuf::uint8* GetNextResourceInfoRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.GetNextResourceInfoRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string next_resource_url = 1;
  if (this->next_resource_url().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->next_resource_url().data(), static_cast<int>(this->next_resource_url().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.GetNextResourceInfoRsp.next_resource_url");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->next_resource_url(), target);
  }

  // .proto.ResVersionConfig next_res_version_config = 5;
  if (this->has_next_res_version_config()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        5, *this->next_res_version_config_, deterministic, target);
  }

  // int32 retcode = 9;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(9, this->retcode(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.GetNextResourceInfoRsp)
  return target;
}

size_t GetNextResourceInfoRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.GetNextResourceInfoRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string next_resource_url = 1;
  if (this->next_resource_url().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->next_resource_url());
  }

  // .proto.ResVersionConfig next_res_version_config = 5;
  if (this->has_next_res_version_config()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->next_res_version_config_);
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

bool AdjustWorldLevelReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AdjustWorldLevelReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 cur_world_level = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &cur_world_level_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 expect_world_level = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(88u /* 88 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &expect_world_level_)));
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
  // @@protoc_insertion_point(parse_success:proto.AdjustWorldLevelReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AdjustWorldLevelReq)
  return false;
#undef DO_
}

void AdjustWorldLevelReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AdjustWorldLevelReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 cur_world_level = 3;
  if (this->cur_world_level() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->cur_world_level(), output);
  }

  // uint32 expect_world_level = 11;
  if (this->expect_world_level() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(11, this->expect_world_level(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AdjustWorldLevelReq)
}

::google::protobuf::uint8* AdjustWorldLevelReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AdjustWorldLevelReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 cur_world_level = 3;
  if (this->cur_world_level() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->cur_world_level(), target);
  }

  // uint32 expect_world_level = 11;
  if (this->expect_world_level() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(11, this->expect_world_level(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AdjustWorldLevelReq)
  return target;
}

size_t AdjustWorldLevelReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AdjustWorldLevelReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 cur_world_level = 3;
  if (this->cur_world_level() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->cur_world_level());
  }

  // uint32 expect_world_level = 11;
  if (this->expect_world_level() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->expect_world_level());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AdjustWorldLevelRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AdjustWorldLevelRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 cd_over_time = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &cd_over_time_)));
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

      // uint32 after_world_level = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(120u /* 120 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &after_world_level_)));
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
  // @@protoc_insertion_point(parse_success:proto.AdjustWorldLevelRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AdjustWorldLevelRsp)
  return false;
#undef DO_
}

void AdjustWorldLevelRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AdjustWorldLevelRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 cd_over_time = 7;
  if (this->cd_over_time() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->cd_over_time(), output);
  }

  // int32 retcode = 14;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(14, this->retcode(), output);
  }

  // uint32 after_world_level = 15;
  if (this->after_world_level() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(15, this->after_world_level(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AdjustWorldLevelRsp)
}

::google::protobuf::uint8* AdjustWorldLevelRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AdjustWorldLevelRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 cd_over_time = 7;
  if (this->cd_over_time() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(7, this->cd_over_time(), target);
  }

  // int32 retcode = 14;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(14, this->retcode(), target);
  }

  // uint32 after_world_level = 15;
  if (this->after_world_level() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(15, this->after_world_level(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AdjustWorldLevelRsp)
  return target;
}

size_t AdjustWorldLevelRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AdjustWorldLevelRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 after_world_level = 15;
  if (this->after_world_level() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->after_world_level());
  }

  // uint32 cd_over_time = 7;
  if (this->cd_over_time() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->cd_over_time());
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

bool DailyTaskFilterCityReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.DailyTaskFilterCityReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 city_id = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(120u /* 120 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &city_id_)));
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
  // @@protoc_insertion_point(parse_success:proto.DailyTaskFilterCityReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.DailyTaskFilterCityReq)
  return false;
#undef DO_
}

void DailyTaskFilterCityReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.DailyTaskFilterCityReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 city_id = 15;
  if (this->city_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(15, this->city_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.DailyTaskFilterCityReq)
}

::google::protobuf::uint8* DailyTaskFilterCityReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.DailyTaskFilterCityReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 city_id = 15;
  if (this->city_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(15, this->city_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.DailyTaskFilterCityReq)
  return target;
}

size_t DailyTaskFilterCityReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.DailyTaskFilterCityReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 city_id = 15;
  if (this->city_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->city_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool DailyTaskFilterCityRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.DailyTaskFilterCityRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 city_id = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(112u /* 112 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &city_id_)));
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
  // @@protoc_insertion_point(parse_success:proto.DailyTaskFilterCityRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.DailyTaskFilterCityRsp)
  return false;
#undef DO_
}

void DailyTaskFilterCityRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.DailyTaskFilterCityRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 city_id = 14;
  if (this->city_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(14, this->city_id(), output);
  }

  // int32 retcode = 15;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(15, this->retcode(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.DailyTaskFilterCityRsp)
}

::google::protobuf::uint8* DailyTaskFilterCityRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.DailyTaskFilterCityRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 city_id = 14;
  if (this->city_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(14, this->city_id(), target);
  }

  // int32 retcode = 15;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(15, this->retcode(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.DailyTaskFilterCityRsp)
  return target;
}

size_t DailyTaskFilterCityRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.DailyTaskFilterCityRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 city_id = 14;
  if (this->city_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->city_id());
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

bool DailyTaskUnlockedCitiesNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.DailyTaskUnlockedCitiesNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated uint32 unlocked_city_list = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(122u /* 122 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_unlocked_city_list())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(120u /* 120 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 1, 122u, input, this->mutable_unlocked_city_list())));
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
  // @@protoc_insertion_point(parse_success:proto.DailyTaskUnlockedCitiesNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.DailyTaskUnlockedCitiesNotify)
  return false;
#undef DO_
}

void DailyTaskUnlockedCitiesNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.DailyTaskUnlockedCitiesNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated uint32 unlocked_city_list = 15;
  if (this->unlocked_city_list_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(15, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _unlocked_city_list_cached_byte_size_));
  }
  for (int i = 0, n = this->unlocked_city_list_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32NoTag(
      this->unlocked_city_list(i), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.DailyTaskUnlockedCitiesNotify)
}

::google::protobuf::uint8* DailyTaskUnlockedCitiesNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.DailyTaskUnlockedCitiesNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated uint32 unlocked_city_list = 15;
  if (this->unlocked_city_list_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      15,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::uint32>(
            _unlocked_city_list_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt32NoTagToArray(this->unlocked_city_list_, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.DailyTaskUnlockedCitiesNotify)
  return target;
}

size_t DailyTaskUnlockedCitiesNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.DailyTaskUnlockedCitiesNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated uint32 unlocked_city_list = 15;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      UInt32Size(this->unlocked_city_list_);
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _unlocked_city_list_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool ExclusiveRuleInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.ExclusiveRuleInfo)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 rule_type = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &rule_type_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated uint32 object_id_list = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(90u /* 90 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_object_id_list())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(88u /* 88 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 1, 90u, input, this->mutable_object_id_list())));
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
  // @@protoc_insertion_point(parse_success:proto.ExclusiveRuleInfo)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.ExclusiveRuleInfo)
  return false;
#undef DO_
}

void ExclusiveRuleInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.ExclusiveRuleInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 rule_type = 6;
  if (this->rule_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->rule_type(), output);
  }

  // repeated uint32 object_id_list = 11;
  if (this->object_id_list_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(11, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _object_id_list_cached_byte_size_));
  }
  for (int i = 0, n = this->object_id_list_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32NoTag(
      this->object_id_list(i), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.ExclusiveRuleInfo)
}

::google::protobuf::uint8* ExclusiveRuleInfo::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.ExclusiveRuleInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 rule_type = 6;
  if (this->rule_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, this->rule_type(), target);
  }

  // repeated uint32 object_id_list = 11;
  if (this->object_id_list_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      11,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::uint32>(
            _object_id_list_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt32NoTagToArray(this->object_id_list_, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.ExclusiveRuleInfo)
  return target;
}

size_t ExclusiveRuleInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.ExclusiveRuleInfo)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated uint32 object_id_list = 11;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      UInt32Size(this->object_id_list_);
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _object_id_list_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // uint32 rule_type = 6;
  if (this->rule_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->rule_type());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool ExclusiveRuleNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.ExclusiveRuleNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .proto.ExclusiveRuleInfo rule_info_list = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_rule_info_list()));
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
  // @@protoc_insertion_point(parse_success:proto.ExclusiveRuleNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.ExclusiveRuleNotify)
  return false;
#undef DO_
}

void ExclusiveRuleNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.ExclusiveRuleNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.ExclusiveRuleInfo rule_info_list = 6;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->rule_info_list_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      6, this->rule_info_list(static_cast<int>(i)), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.ExclusiveRuleNotify)
}

::google::protobuf::uint8* ExclusiveRuleNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.ExclusiveRuleNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.ExclusiveRuleInfo rule_info_list = 6;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->rule_info_list_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        6, this->rule_info_list(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.ExclusiveRuleNotify)
  return target;
}

size_t ExclusiveRuleNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.ExclusiveRuleNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .proto.ExclusiveRuleInfo rule_info_list = 6;
  {
    unsigned int count = static_cast<unsigned int>(this->rule_info_list_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->rule_info_list(static_cast<int>(i)));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool CompoundUnlockNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.CompoundUnlockNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 compound_id = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &compound_id_)));
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
  // @@protoc_insertion_point(parse_success:proto.CompoundUnlockNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.CompoundUnlockNotify)
  return false;
#undef DO_
}

void CompoundUnlockNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.CompoundUnlockNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 compound_id = 6;
  if (this->compound_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->compound_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.CompoundUnlockNotify)
}

::google::protobuf::uint8* CompoundUnlockNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.CompoundUnlockNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 compound_id = 6;
  if (this->compound_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, this->compound_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.CompoundUnlockNotify)
  return target;
}

size_t CompoundUnlockNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.CompoundUnlockNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 compound_id = 6;
  if (this->compound_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->compound_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool GameplayRecommendationSkillRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.GameplayRecommendationSkillRequest)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 skill_depot_id = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &skill_depot_id_)));
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
  // @@protoc_insertion_point(parse_success:proto.GameplayRecommendationSkillRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.GameplayRecommendationSkillRequest)
  return false;
#undef DO_
}

void GameplayRecommendationSkillRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.GameplayRecommendationSkillRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 skill_depot_id = 9;
  if (this->skill_depot_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(9, this->skill_depot_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.GameplayRecommendationSkillRequest)
}

::google::protobuf::uint8* GameplayRecommendationSkillRequest::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.GameplayRecommendationSkillRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 skill_depot_id = 9;
  if (this->skill_depot_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(9, this->skill_depot_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.GameplayRecommendationSkillRequest)
  return target;
}

size_t GameplayRecommendationSkillRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.GameplayRecommendationSkillRequest)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 skill_depot_id = 9;
  if (this->skill_depot_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->skill_depot_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool GameplayRecommendationReliquaryRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.GameplayRecommendationReliquaryRequest)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 equip_type = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &equip_type_)));
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
  // @@protoc_insertion_point(parse_success:proto.GameplayRecommendationReliquaryRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.GameplayRecommendationReliquaryRequest)
  return false;
#undef DO_
}

void GameplayRecommendationReliquaryRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.GameplayRecommendationReliquaryRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 equip_type = 7;
  if (this->equip_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->equip_type(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.GameplayRecommendationReliquaryRequest)
}

::google::protobuf::uint8* GameplayRecommendationReliquaryRequest::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.GameplayRecommendationReliquaryRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 equip_type = 7;
  if (this->equip_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(7, this->equip_type(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.GameplayRecommendationReliquaryRequest)
  return target;
}

size_t GameplayRecommendationReliquaryRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.GameplayRecommendationReliquaryRequest)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 equip_type = 7;
  if (this->equip_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->equip_type());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool GameplayRecommendationElementReliquaryRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.GameplayRecommendationElementReliquaryRequest)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 equip_type = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &equip_type_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 element_type = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(96u /* 96 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &element_type_)));
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
  // @@protoc_insertion_point(parse_success:proto.GameplayRecommendationElementReliquaryRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.GameplayRecommendationElementReliquaryRequest)
  return false;
#undef DO_
}

void GameplayRecommendationElementReliquaryRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.GameplayRecommendationElementReliquaryRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 equip_type = 7;
  if (this->equip_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->equip_type(), output);
  }

  // uint32 element_type = 12;
  if (this->element_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(12, this->element_type(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.GameplayRecommendationElementReliquaryRequest)
}

::google::protobuf::uint8* GameplayRecommendationElementReliquaryRequest::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.GameplayRecommendationElementReliquaryRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 equip_type = 7;
  if (this->equip_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(7, this->equip_type(), target);
  }

  // uint32 element_type = 12;
  if (this->element_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(12, this->element_type(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.GameplayRecommendationElementReliquaryRequest)
  return target;
}

size_t GameplayRecommendationElementReliquaryRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.GameplayRecommendationElementReliquaryRequest)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 equip_type = 7;
  if (this->equip_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->equip_type());
  }

  // uint32 element_type = 12;
  if (this->element_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->element_type());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool GetGameplayRecommendationReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.GetGameplayRecommendationReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(16383u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 avatar_id = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 64 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &avatar_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.GameplayRecommendationReliquaryRequest reliquary_request = 118;
      case 118: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(178u /* 946 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_reliquary_request()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.GameplayRecommendationElementReliquaryRequest element_reliquary_request = 1105;
      case 1105: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(138u /* 8842 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_element_reliquary_request()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.GameplayRecommendationSkillRequest skill_request = 1689;
      case 1689: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(202u /* 13514 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_skill_request()));
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
  // @@protoc_insertion_point(parse_success:proto.GetGameplayRecommendationReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.GetGameplayRecommendationReq)
  return false;
#undef DO_
}

void GetGameplayRecommendationReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.GetGameplayRecommendationReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 avatar_id = 8;
  if (this->avatar_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(8, this->avatar_id(), output);
  }

  // .proto.GameplayRecommendationReliquaryRequest reliquary_request = 118;
  if (has_reliquary_request()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      118, *detail_.reliquary_request_, output);
  }

  // .proto.GameplayRecommendationElementReliquaryRequest element_reliquary_request = 1105;
  if (has_element_reliquary_request()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1105, *detail_.element_reliquary_request_, output);
  }

  // .proto.GameplayRecommendationSkillRequest skill_request = 1689;
  if (has_skill_request()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1689, *detail_.skill_request_, output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.GetGameplayRecommendationReq)
}

::google::protobuf::uint8* GetGameplayRecommendationReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.GetGameplayRecommendationReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 avatar_id = 8;
  if (this->avatar_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(8, this->avatar_id(), target);
  }

  // .proto.GameplayRecommendationReliquaryRequest reliquary_request = 118;
  if (has_reliquary_request()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        118, *detail_.reliquary_request_, deterministic, target);
  }

  // .proto.GameplayRecommendationElementReliquaryRequest element_reliquary_request = 1105;
  if (has_element_reliquary_request()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1105, *detail_.element_reliquary_request_, deterministic, target);
  }

  // .proto.GameplayRecommendationSkillRequest skill_request = 1689;
  if (has_skill_request()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1689, *detail_.skill_request_, deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.GetGameplayRecommendationReq)
  return target;
}

size_t GetGameplayRecommendationReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.GetGameplayRecommendationReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 avatar_id = 8;
  if (this->avatar_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->avatar_id());
  }

  switch (detail_case()) {
    // .proto.GameplayRecommendationSkillRequest skill_request = 1689;
    case kSkillRequest: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *detail_.skill_request_);
      break;
    }
    // .proto.GameplayRecommendationReliquaryRequest reliquary_request = 118;
    case kReliquaryRequest: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *detail_.reliquary_request_);
      break;
    }
    // .proto.GameplayRecommendationElementReliquaryRequest element_reliquary_request = 1105;
    case kElementReliquaryRequest: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *detail_.element_reliquary_request_);
      break;
    }
    case DETAIL_NOT_SET: {
      break;
    }
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool GameplayRecommendationSkillResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.GameplayRecommendationSkillResponse)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated uint32 skill_id_list = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(66u /* 66 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_skill_id_list())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 64 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 1, 66u, input, this->mutable_skill_id_list())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 skill_depot_id = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(96u /* 96 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &skill_depot_id_)));
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
  // @@protoc_insertion_point(parse_success:proto.GameplayRecommendationSkillResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.GameplayRecommendationSkillResponse)
  return false;
#undef DO_
}

void GameplayRecommendationSkillResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.GameplayRecommendationSkillResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated uint32 skill_id_list = 8;
  if (this->skill_id_list_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(8, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _skill_id_list_cached_byte_size_));
  }
  for (int i = 0, n = this->skill_id_list_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32NoTag(
      this->skill_id_list(i), output);
  }

  // uint32 skill_depot_id = 12;
  if (this->skill_depot_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(12, this->skill_depot_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.GameplayRecommendationSkillResponse)
}

::google::protobuf::uint8* GameplayRecommendationSkillResponse::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.GameplayRecommendationSkillResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated uint32 skill_id_list = 8;
  if (this->skill_id_list_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      8,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::uint32>(
            _skill_id_list_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt32NoTagToArray(this->skill_id_list_, target);
  }

  // uint32 skill_depot_id = 12;
  if (this->skill_depot_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(12, this->skill_depot_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.GameplayRecommendationSkillResponse)
  return target;
}

size_t GameplayRecommendationSkillResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.GameplayRecommendationSkillResponse)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated uint32 skill_id_list = 8;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      UInt32Size(this->skill_id_list_);
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _skill_id_list_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // uint32 skill_depot_id = 12;
  if (this->skill_depot_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->skill_depot_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool GameplayRecommendationReliquaryMainPropData::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.GameplayRecommendationReliquaryMainPropData)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 main_prop_id = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &main_prop_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 permillage = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &permillage_)));
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
  // @@protoc_insertion_point(parse_success:proto.GameplayRecommendationReliquaryMainPropData)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.GameplayRecommendationReliquaryMainPropData)
  return false;
#undef DO_
}

void GameplayRecommendationReliquaryMainPropData::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.GameplayRecommendationReliquaryMainPropData)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 main_prop_id = 6;
  if (this->main_prop_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->main_prop_id(), output);
  }

  // uint32 permillage = 9;
  if (this->permillage() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(9, this->permillage(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.GameplayRecommendationReliquaryMainPropData)
}

::google::protobuf::uint8* GameplayRecommendationReliquaryMainPropData::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.GameplayRecommendationReliquaryMainPropData)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 main_prop_id = 6;
  if (this->main_prop_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, this->main_prop_id(), target);
  }

  // uint32 permillage = 9;
  if (this->permillage() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(9, this->permillage(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.GameplayRecommendationReliquaryMainPropData)
  return target;
}

size_t GameplayRecommendationReliquaryMainPropData::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.GameplayRecommendationReliquaryMainPropData)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 main_prop_id = 6;
  if (this->main_prop_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->main_prop_id());
  }

  // uint32 permillage = 9;
  if (this->permillage() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->permillage());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool GameplayRecommendationReliquaryResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.GameplayRecommendationReliquaryResponse)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .proto.GameplayRecommendationReliquaryMainPropData main_prop_data_list = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(98u /* 98 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_main_prop_data_list()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 equip_type = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(120u /* 120 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &equip_type_)));
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
  // @@protoc_insertion_point(parse_success:proto.GameplayRecommendationReliquaryResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.GameplayRecommendationReliquaryResponse)
  return false;
#undef DO_
}

void GameplayRecommendationReliquaryResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.GameplayRecommendationReliquaryResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.GameplayRecommendationReliquaryMainPropData main_prop_data_list = 12;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->main_prop_data_list_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      12, this->main_prop_data_list(static_cast<int>(i)), output);
  }

  // uint32 equip_type = 15;
  if (this->equip_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(15, this->equip_type(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.GameplayRecommendationReliquaryResponse)
}

::google::protobuf::uint8* GameplayRecommendationReliquaryResponse::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.GameplayRecommendationReliquaryResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.GameplayRecommendationReliquaryMainPropData main_prop_data_list = 12;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->main_prop_data_list_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        12, this->main_prop_data_list(static_cast<int>(i)), deterministic, target);
  }

  // uint32 equip_type = 15;
  if (this->equip_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(15, this->equip_type(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.GameplayRecommendationReliquaryResponse)
  return target;
}

size_t GameplayRecommendationReliquaryResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.GameplayRecommendationReliquaryResponse)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .proto.GameplayRecommendationReliquaryMainPropData main_prop_data_list = 12;
  {
    unsigned int count = static_cast<unsigned int>(this->main_prop_data_list_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->main_prop_data_list(static_cast<int>(i)));
    }
  }

  // uint32 equip_type = 15;
  if (this->equip_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->equip_type());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool GameplayRecommendationElementReliquaryResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.GameplayRecommendationElementReliquaryResponse)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .proto.GameplayRecommendationReliquaryMainPropData main_prop_data_list = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_main_prop_data_list()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 element_type = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &element_type_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 equip_type = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &equip_type_)));
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
  // @@protoc_insertion_point(parse_success:proto.GameplayRecommendationElementReliquaryResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.GameplayRecommendationElementReliquaryResponse)
  return false;
#undef DO_
}

void GameplayRecommendationElementReliquaryResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.GameplayRecommendationElementReliquaryResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.GameplayRecommendationReliquaryMainPropData main_prop_data_list = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->main_prop_data_list_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->main_prop_data_list(static_cast<int>(i)), output);
  }

  // uint32 element_type = 4;
  if (this->element_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->element_type(), output);
  }

  // uint32 equip_type = 7;
  if (this->equip_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->equip_type(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.GameplayRecommendationElementReliquaryResponse)
}

::google::protobuf::uint8* GameplayRecommendationElementReliquaryResponse::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.GameplayRecommendationElementReliquaryResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.GameplayRecommendationReliquaryMainPropData main_prop_data_list = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->main_prop_data_list_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, this->main_prop_data_list(static_cast<int>(i)), deterministic, target);
  }

  // uint32 element_type = 4;
  if (this->element_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->element_type(), target);
  }

  // uint32 equip_type = 7;
  if (this->equip_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(7, this->equip_type(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.GameplayRecommendationElementReliquaryResponse)
  return target;
}

size_t GameplayRecommendationElementReliquaryResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.GameplayRecommendationElementReliquaryResponse)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .proto.GameplayRecommendationReliquaryMainPropData main_prop_data_list = 3;
  {
    unsigned int count = static_cast<unsigned int>(this->main_prop_data_list_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->main_prop_data_list(static_cast<int>(i)));
    }
  }

  // uint32 element_type = 4;
  if (this->element_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->element_type());
  }

  // uint32 equip_type = 7;
  if (this->equip_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->equip_type());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool GetGameplayRecommendationRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.GetGameplayRecommendationRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(16383u);
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

      // .proto.GameplayRecommendationSkillResponse skill_response = 223;
      case 223: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(250u /* 1786 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_skill_response()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.GameplayRecommendationElementReliquaryResponse element_reliquary_response = 1912;
      case 1912: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(194u /* 15298 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_element_reliquary_response()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.GameplayRecommendationReliquaryResponse reliquary_response = 1964;
      case 1964: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(98u /* 15714 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_reliquary_response()));
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
  // @@protoc_insertion_point(parse_success:proto.GetGameplayRecommendationRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.GetGameplayRecommendationRsp)
  return false;
#undef DO_
}

void GetGameplayRecommendationRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.GetGameplayRecommendationRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 avatar_id = 1;
  if (this->avatar_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->avatar_id(), output);
  }

  // int32 retcode = 12;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(12, this->retcode(), output);
  }

  // .proto.GameplayRecommendationSkillResponse skill_response = 223;
  if (has_skill_response()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      223, *detail_.skill_response_, output);
  }

  // .proto.GameplayRecommendationElementReliquaryResponse element_reliquary_response = 1912;
  if (has_element_reliquary_response()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1912, *detail_.element_reliquary_response_, output);
  }

  // .proto.GameplayRecommendationReliquaryResponse reliquary_response = 1964;
  if (has_reliquary_response()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1964, *detail_.reliquary_response_, output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.GetGameplayRecommendationRsp)
}

::google::protobuf::uint8* GetGameplayRecommendationRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.GetGameplayRecommendationRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 avatar_id = 1;
  if (this->avatar_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->avatar_id(), target);
  }

  // int32 retcode = 12;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(12, this->retcode(), target);
  }

  // .proto.GameplayRecommendationSkillResponse skill_response = 223;
  if (has_skill_response()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        223, *detail_.skill_response_, deterministic, target);
  }

  // .proto.GameplayRecommendationElementReliquaryResponse element_reliquary_response = 1912;
  if (has_element_reliquary_response()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1912, *detail_.element_reliquary_response_, deterministic, target);
  }

  // .proto.GameplayRecommendationReliquaryResponse reliquary_response = 1964;
  if (has_reliquary_response()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1964, *detail_.reliquary_response_, deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.GetGameplayRecommendationRsp)
  return target;
}

size_t GetGameplayRecommendationRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.GetGameplayRecommendationRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 avatar_id = 1;
  if (this->avatar_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->avatar_id());
  }

  // int32 retcode = 12;
  if (this->retcode() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->retcode());
  }

  switch (detail_case()) {
    // .proto.GameplayRecommendationSkillResponse skill_response = 223;
    case kSkillResponse: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *detail_.skill_response_);
      break;
    }
    // .proto.GameplayRecommendationReliquaryResponse reliquary_response = 1964;
    case kReliquaryResponse: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *detail_.reliquary_response_);
      break;
    }
    // .proto.GameplayRecommendationElementReliquaryResponse element_reliquary_response = 1912;
    case kElementReliquaryResponse: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *detail_.element_reliquary_response_);
      break;
    }
    case DETAIL_NOT_SET: {
      break;
    }
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool TakeBackGivingItemReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.TakeBackGivingItemReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 giving_id = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(80u /* 80 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &giving_id_)));
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
  // @@protoc_insertion_point(parse_success:proto.TakeBackGivingItemReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.TakeBackGivingItemReq)
  return false;
#undef DO_
}

void TakeBackGivingItemReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.TakeBackGivingItemReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 giving_id = 10;
  if (this->giving_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(10, this->giving_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.TakeBackGivingItemReq)
}

::google::protobuf::uint8* TakeBackGivingItemReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.TakeBackGivingItemReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 giving_id = 10;
  if (this->giving_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(10, this->giving_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.TakeBackGivingItemReq)
  return target;
}

size_t TakeBackGivingItemReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.TakeBackGivingItemReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 giving_id = 10;
  if (this->giving_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->giving_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool TakeBackGivingItemRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.TakeBackGivingItemRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 giving_id = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &giving_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 retcode = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(88u /* 88 & 0xFF */)) {

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
  // @@protoc_insertion_point(parse_success:proto.TakeBackGivingItemRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.TakeBackGivingItemRsp)
  return false;
#undef DO_
}

void TakeBackGivingItemRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.TakeBackGivingItemRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 giving_id = 3;
  if (this->giving_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->giving_id(), output);
  }

  // int32 retcode = 11;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(11, this->retcode(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.TakeBackGivingItemRsp)
}

::google::protobuf::uint8* TakeBackGivingItemRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.TakeBackGivingItemRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 giving_id = 3;
  if (this->giving_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->giving_id(), target);
  }

  // int32 retcode = 11;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(11, this->retcode(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.TakeBackGivingItemRsp)
  return target;
}

size_t TakeBackGivingItemRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.TakeBackGivingItemRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 giving_id = 3;
  if (this->giving_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->giving_id());
  }

  // int32 retcode = 11;
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

bool PlayerNicknameAuditDataNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.PlayerNicknameAuditDataNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .proto.ContentAuditInfo info = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(106u /* 106 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_info()));
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
  // @@protoc_insertion_point(parse_success:proto.PlayerNicknameAuditDataNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.PlayerNicknameAuditDataNotify)
  return false;
#undef DO_
}

void PlayerNicknameAuditDataNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.PlayerNicknameAuditDataNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.ContentAuditInfo info = 13;
  if (this->has_info()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      13, *this->info_, output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.PlayerNicknameAuditDataNotify)
}

::google::protobuf::uint8* PlayerNicknameAuditDataNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.PlayerNicknameAuditDataNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.ContentAuditInfo info = 13;
  if (this->has_info()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        13, *this->info_, deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.PlayerNicknameAuditDataNotify)
  return target;
}

size_t PlayerNicknameAuditDataNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.PlayerNicknameAuditDataNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .proto.ContentAuditInfo info = 13;
  if (this->has_info()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->info_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool PlayerNicknameNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.PlayerNicknameNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string nickname = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(90u /* 90 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_nickname()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->nickname().data(), static_cast<int>(this->nickname().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.PlayerNicknameNotify.nickname"));
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
  // @@protoc_insertion_point(parse_success:proto.PlayerNicknameNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.PlayerNicknameNotify)
  return false;
#undef DO_
}

void PlayerNicknameNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.PlayerNicknameNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string nickname = 11;
  if (this->nickname().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->nickname().data(), static_cast<int>(this->nickname().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.PlayerNicknameNotify.nickname");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      11, this->nickname(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.PlayerNicknameNotify)
}

::google::protobuf::uint8* PlayerNicknameNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.PlayerNicknameNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string nickname = 11;
  if (this->nickname().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->nickname().data(), static_cast<int>(this->nickname().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.PlayerNicknameNotify.nickname");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        11, this->nickname(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.PlayerNicknameNotify)
  return target;
}

size_t PlayerNicknameNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.PlayerNicknameNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string nickname = 11;
  if (this->nickname().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->nickname());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool NicknameAuditConfigNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.NicknameAuditConfigNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bool is_open = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_open_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 submit_limit = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &submit_limit_)));
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
  // @@protoc_insertion_point(parse_success:proto.NicknameAuditConfigNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.NicknameAuditConfigNotify)
  return false;
#undef DO_
}

void NicknameAuditConfigNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.NicknameAuditConfigNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool is_open = 5;
  if (this->is_open() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(5, this->is_open(), output);
  }

  // uint32 submit_limit = 7;
  if (this->submit_limit() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->submit_limit(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.NicknameAuditConfigNotify)
}

::google::protobuf::uint8* NicknameAuditConfigNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.NicknameAuditConfigNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool is_open = 5;
  if (this->is_open() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(5, this->is_open(), target);
  }

  // uint32 submit_limit = 7;
  if (this->submit_limit() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(7, this->submit_limit(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.NicknameAuditConfigNotify)
  return target;
}

size_t NicknameAuditConfigNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.NicknameAuditConfigNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // bool is_open = 5;
  if (this->is_open() != 0) {
    total_size += 1 + 1;
  }

  // uint32 submit_limit = 7;
  if (this->submit_limit() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->submit_limit());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool ReadNicknameAuditReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.ReadNicknameAuditReq)
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
  // @@protoc_insertion_point(parse_success:proto.ReadNicknameAuditReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.ReadNicknameAuditReq)
  return false;
#undef DO_
}

void ReadNicknameAuditReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.ReadNicknameAuditReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.ReadNicknameAuditReq)
}

::google::protobuf::uint8* ReadNicknameAuditReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.ReadNicknameAuditReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.ReadNicknameAuditReq)
  return target;
}

size_t ReadNicknameAuditReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.ReadNicknameAuditReq)
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

bool ReadNicknameAuditRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.ReadNicknameAuditRsp)
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
  // @@protoc_insertion_point(parse_success:proto.ReadNicknameAuditRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.ReadNicknameAuditRsp)
  return false;
#undef DO_
}

void ReadNicknameAuditRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.ReadNicknameAuditRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 retcode = 1;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->retcode(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.ReadNicknameAuditRsp)
}

::google::protobuf::uint8* ReadNicknameAuditRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.ReadNicknameAuditRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 retcode = 1;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->retcode(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.ReadNicknameAuditRsp)
  return target;
}

size_t ReadNicknameAuditRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.ReadNicknameAuditRsp)
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

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool PlayerCompoundMaterialBoostReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.PlayerCompoundMaterialBoostReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 target_compound_group_id = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &target_compound_group_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_boost_all = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 64 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_boost_all_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 consume_material_count = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &consume_material_count_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 consume_material_id = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(104u /* 104 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &consume_material_id_)));
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
  // @@protoc_insertion_point(parse_success:proto.PlayerCompoundMaterialBoostReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.PlayerCompoundMaterialBoostReq)
  return false;
#undef DO_
}

void PlayerCompoundMaterialBoostReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.PlayerCompoundMaterialBoostReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 target_compound_group_id = 3;
  if (this->target_compound_group_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->target_compound_group_id(), output);
  }

  // bool is_boost_all = 8;
  if (this->is_boost_all() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(8, this->is_boost_all(), output);
  }

  // uint32 consume_material_count = 9;
  if (this->consume_material_count() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(9, this->consume_material_count(), output);
  }

  // uint32 consume_material_id = 13;
  if (this->consume_material_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(13, this->consume_material_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.PlayerCompoundMaterialBoostReq)
}

::google::protobuf::uint8* PlayerCompoundMaterialBoostReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.PlayerCompoundMaterialBoostReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 target_compound_group_id = 3;
  if (this->target_compound_group_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->target_compound_group_id(), target);
  }

  // bool is_boost_all = 8;
  if (this->is_boost_all() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(8, this->is_boost_all(), target);
  }

  // uint32 consume_material_count = 9;
  if (this->consume_material_count() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(9, this->consume_material_count(), target);
  }

  // uint32 consume_material_id = 13;
  if (this->consume_material_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(13, this->consume_material_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.PlayerCompoundMaterialBoostReq)
  return target;
}

size_t PlayerCompoundMaterialBoostReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.PlayerCompoundMaterialBoostReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 target_compound_group_id = 3;
  if (this->target_compound_group_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->target_compound_group_id());
  }

  // bool is_boost_all = 8;
  if (this->is_boost_all() != 0) {
    total_size += 1 + 1;
  }

  // uint32 consume_material_count = 9;
  if (this->consume_material_count() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->consume_material_count());
  }

  // uint32 consume_material_id = 13;
  if (this->consume_material_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->consume_material_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool PlayerCompoundMaterialBoostRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.PlayerCompoundMaterialBoostRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .proto.CompoundQueueData compound_que_data_list = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_compound_que_data_list()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.CompoundBoostTakeStatusType take_status = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 64 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_take_status(static_cast< ::proto::CompoundBoostTakeStatusType >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .proto.ItemParam take_item_list = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(114u /* 114 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_take_item_list()));
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
  // @@protoc_insertion_point(parse_success:proto.PlayerCompoundMaterialBoostRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.PlayerCompoundMaterialBoostRsp)
  return false;
#undef DO_
}

void PlayerCompoundMaterialBoostRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.PlayerCompoundMaterialBoostRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.CompoundQueueData compound_que_data_list = 6;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->compound_que_data_list_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      6, this->compound_que_data_list(static_cast<int>(i)), output);
  }

  // .proto.CompoundBoostTakeStatusType take_status = 8;
  if (this->take_status() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      8, this->take_status(), output);
  }

  // repeated .proto.ItemParam take_item_list = 14;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->take_item_list_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      14, this->take_item_list(static_cast<int>(i)), output);
  }

  // int32 retcode = 15;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(15, this->retcode(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.PlayerCompoundMaterialBoostRsp)
}

::google::protobuf::uint8* PlayerCompoundMaterialBoostRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.PlayerCompoundMaterialBoostRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.CompoundQueueData compound_que_data_list = 6;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->compound_que_data_list_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        6, this->compound_que_data_list(static_cast<int>(i)), deterministic, target);
  }

  // .proto.CompoundBoostTakeStatusType take_status = 8;
  if (this->take_status() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      8, this->take_status(), target);
  }

  // repeated .proto.ItemParam take_item_list = 14;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->take_item_list_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        14, this->take_item_list(static_cast<int>(i)), deterministic, target);
  }

  // int32 retcode = 15;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(15, this->retcode(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.PlayerCompoundMaterialBoostRsp)
  return target;
}

size_t PlayerCompoundMaterialBoostRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.PlayerCompoundMaterialBoostRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .proto.CompoundQueueData compound_que_data_list = 6;
  {
    unsigned int count = static_cast<unsigned int>(this->compound_que_data_list_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->compound_que_data_list(static_cast<int>(i)));
    }
  }

  // repeated .proto.ItemParam take_item_list = 14;
  {
    unsigned int count = static_cast<unsigned int>(this->take_item_list_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->take_item_list(static_cast<int>(i)));
    }
  }

  // .proto.CompoundBoostTakeStatusType take_status = 8;
  if (this->take_status() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->take_status());
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

bool PlayerGameTimeByLuaNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.PlayerGameTimeByLuaNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 sim_speed = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &sim_speed_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 game_time = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 64 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &game_time_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 uid = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &uid_)));
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
  // @@protoc_insertion_point(parse_success:proto.PlayerGameTimeByLuaNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.PlayerGameTimeByLuaNotify)
  return false;
#undef DO_
}

void PlayerGameTimeByLuaNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.PlayerGameTimeByLuaNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 sim_speed = 1;
  if (this->sim_speed() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->sim_speed(), output);
  }

  // uint32 game_time = 8;
  if (this->game_time() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(8, this->game_time(), output);
  }

  // uint32 uid = 9;
  if (this->uid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(9, this->uid(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.PlayerGameTimeByLuaNotify)
}

::google::protobuf::uint8* PlayerGameTimeByLuaNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.PlayerGameTimeByLuaNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 sim_speed = 1;
  if (this->sim_speed() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->sim_speed(), target);
  }

  // uint32 game_time = 8;
  if (this->game_time() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(8, this->game_time(), target);
  }

  // uint32 uid = 9;
  if (this->uid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(9, this->uid(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.PlayerGameTimeByLuaNotify)
  return target;
}

size_t PlayerGameTimeByLuaNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.PlayerGameTimeByLuaNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 uid = 9;
  if (this->uid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->uid());
  }

  // uint32 sim_speed = 1;
  if (this->sim_speed() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->sim_speed());
  }

  // uint32 game_time = 8;
  if (this->game_time() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->game_time());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool PlayerIpRegionNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.PlayerIpRegionNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string ip_code = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_ip_code()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->ip_code().data(), static_cast<int>(this->ip_code().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.PlayerIpRegionNotify.ip_code"));
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
  // @@protoc_insertion_point(parse_success:proto.PlayerIpRegionNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.PlayerIpRegionNotify)
  return false;
#undef DO_
}

void PlayerIpRegionNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.PlayerIpRegionNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string ip_code = 6;
  if (this->ip_code().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->ip_code().data(), static_cast<int>(this->ip_code().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.PlayerIpRegionNotify.ip_code");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      6, this->ip_code(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.PlayerIpRegionNotify)
}

::google::protobuf::uint8* PlayerIpRegionNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.PlayerIpRegionNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string ip_code = 6;
  if (this->ip_code().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->ip_code().data(), static_cast<int>(this->ip_code().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.PlayerIpRegionNotify.ip_code");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        6, this->ip_code(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.PlayerIpRegionNotify)
  return target;
}

size_t PlayerIpRegionNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.PlayerIpRegionNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string ip_code = 6;
  if (this->ip_code().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->ip_code());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}
}