#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "cmd/cmd_recharge.pb.h"

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

bool RechargeReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.RechargeReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .proto.ShopConcertProduct concert_product = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_concert_product()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.ShopCardProduct card_product = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_card_product()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.PlayProduct play_product = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_play_product()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.ShopMcoinProduct mcoin_product = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(90u /* 90 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_mcoin_product()));
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
  // @@protoc_insertion_point(parse_success:proto.RechargeReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.RechargeReq)
  return false;
#undef DO_
}

void RechargeReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.RechargeReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.ShopConcertProduct concert_product = 3;
  if (this->has_concert_product()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, *this->concert_product_, output);
  }

  // .proto.ShopCardProduct card_product = 5;
  if (this->has_card_product()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, *this->card_product_, output);
  }

  // .proto.PlayProduct play_product = 6;
  if (this->has_play_product()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      6, *this->play_product_, output);
  }

  // .proto.ShopMcoinProduct mcoin_product = 11;
  if (this->has_mcoin_product()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      11, *this->mcoin_product_, output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.RechargeReq)
}

::google::protobuf::uint8* RechargeReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.RechargeReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.ShopConcertProduct concert_product = 3;
  if (this->has_concert_product()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, *this->concert_product_, deterministic, target);
  }

  // .proto.ShopCardProduct card_product = 5;
  if (this->has_card_product()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        5, *this->card_product_, deterministic, target);
  }

  // .proto.PlayProduct play_product = 6;
  if (this->has_play_product()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        6, *this->play_product_, deterministic, target);
  }

  // .proto.ShopMcoinProduct mcoin_product = 11;
  if (this->has_mcoin_product()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        11, *this->mcoin_product_, deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.RechargeReq)
  return target;
}

size_t RechargeReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.RechargeReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .proto.ShopConcertProduct concert_product = 3;
  if (this->has_concert_product()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->concert_product_);
  }

  // .proto.ShopCardProduct card_product = 5;
  if (this->has_card_product()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->card_product_);
  }

  // .proto.PlayProduct play_product = 6;
  if (this->has_play_product()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->play_product_);
  }

  // .proto.ShopMcoinProduct mcoin_product = 11;
  if (this->has_mcoin_product()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->mcoin_product_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool RechargeRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.RechargeRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bool is_show_minors_hint = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_show_minors_hint_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 retcode = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 64 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &retcode_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string product_id = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(90u /* 90 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_product_id()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->product_id().data(), static_cast<int>(this->product_id().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.RechargeRsp.product_id"));
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
  // @@protoc_insertion_point(parse_success:proto.RechargeRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.RechargeRsp)
  return false;
#undef DO_
}

void RechargeRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.RechargeRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool is_show_minors_hint = 5;
  if (this->is_show_minors_hint() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(5, this->is_show_minors_hint(), output);
  }

  // int32 retcode = 8;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(8, this->retcode(), output);
  }

  // string product_id = 11;
  if (this->product_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->product_id().data(), static_cast<int>(this->product_id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.RechargeRsp.product_id");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      11, this->product_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.RechargeRsp)
}

::google::protobuf::uint8* RechargeRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.RechargeRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool is_show_minors_hint = 5;
  if (this->is_show_minors_hint() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(5, this->is_show_minors_hint(), target);
  }

  // int32 retcode = 8;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(8, this->retcode(), target);
  }

  // string product_id = 11;
  if (this->product_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->product_id().data(), static_cast<int>(this->product_id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.RechargeRsp.product_id");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        11, this->product_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.RechargeRsp)
  return target;
}

size_t RechargeRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.RechargeRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string product_id = 11;
  if (this->product_id().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->product_id());
  }

  // bool is_show_minors_hint = 5;
  if (this->is_show_minors_hint() != 0) {
    total_size += 1 + 1;
  }

  // int32 retcode = 8;
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

bool OrderFinishNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.OrderFinishNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 card_product_remain_days = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &card_product_remain_days_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 add_mcoin = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &add_mcoin_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 order_id = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &order_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .proto.ItemParam item_list = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(66u /* 66 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_item_list()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string product_id = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(106u /* 106 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_product_id()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->product_id().data(), static_cast<int>(this->product_id().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.OrderFinishNotify.product_id"));
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
  // @@protoc_insertion_point(parse_success:proto.OrderFinishNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.OrderFinishNotify)
  return false;
#undef DO_
}

void OrderFinishNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.OrderFinishNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 card_product_remain_days = 3;
  if (this->card_product_remain_days() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->card_product_remain_days(), output);
  }

  // uint32 add_mcoin = 4;
  if (this->add_mcoin() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->add_mcoin(), output);
  }

  // uint32 order_id = 5;
  if (this->order_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->order_id(), output);
  }

  // repeated .proto.ItemParam item_list = 8;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->item_list_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      8, this->item_list(static_cast<int>(i)), output);
  }

  // string product_id = 13;
  if (this->product_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->product_id().data(), static_cast<int>(this->product_id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.OrderFinishNotify.product_id");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      13, this->product_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.OrderFinishNotify)
}

::google::protobuf::uint8* OrderFinishNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.OrderFinishNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 card_product_remain_days = 3;
  if (this->card_product_remain_days() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->card_product_remain_days(), target);
  }

  // uint32 add_mcoin = 4;
  if (this->add_mcoin() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->add_mcoin(), target);
  }

  // uint32 order_id = 5;
  if (this->order_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->order_id(), target);
  }

  // repeated .proto.ItemParam item_list = 8;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->item_list_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        8, this->item_list(static_cast<int>(i)), deterministic, target);
  }

  // string product_id = 13;
  if (this->product_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->product_id().data(), static_cast<int>(this->product_id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.OrderFinishNotify.product_id");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        13, this->product_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.OrderFinishNotify)
  return target;
}

size_t OrderFinishNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.OrderFinishNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .proto.ItemParam item_list = 8;
  {
    unsigned int count = static_cast<unsigned int>(this->item_list_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->item_list(static_cast<int>(i)));
    }
  }

  // string product_id = 13;
  if (this->product_id().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->product_id());
  }

  // uint32 card_product_remain_days = 3;
  if (this->card_product_remain_days() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->card_product_remain_days());
  }

  // uint32 add_mcoin = 4;
  if (this->add_mcoin() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->add_mcoin());
  }

  // uint32 order_id = 5;
  if (this->order_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->order_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool CardProductRewardNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.CardProductRewardNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 hcoin = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &hcoin_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 remain_days = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &remain_days_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string product_id = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(74u /* 74 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_product_id()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->product_id().data(), static_cast<int>(this->product_id().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.CardProductRewardNotify.product_id"));
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
  // @@protoc_insertion_point(parse_success:proto.CardProductRewardNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.CardProductRewardNotify)
  return false;
#undef DO_
}

void CardProductRewardNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.CardProductRewardNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 hcoin = 6;
  if (this->hcoin() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->hcoin(), output);
  }

  // uint32 remain_days = 7;
  if (this->remain_days() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->remain_days(), output);
  }

  // string product_id = 9;
  if (this->product_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->product_id().data(), static_cast<int>(this->product_id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.CardProductRewardNotify.product_id");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      9, this->product_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.CardProductRewardNotify)
}

::google::protobuf::uint8* CardProductRewardNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.CardProductRewardNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 hcoin = 6;
  if (this->hcoin() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, this->hcoin(), target);
  }

  // uint32 remain_days = 7;
  if (this->remain_days() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(7, this->remain_days(), target);
  }

  // string product_id = 9;
  if (this->product_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->product_id().data(), static_cast<int>(this->product_id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.CardProductRewardNotify.product_id");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        9, this->product_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.CardProductRewardNotify)
  return target;
}

size_t CardProductRewardNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.CardProductRewardNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string product_id = 9;
  if (this->product_id().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->product_id());
  }

  // uint32 hcoin = 6;
  if (this->hcoin() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->hcoin());
  }

  // uint32 remain_days = 7;
  if (this->remain_days() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->remain_days());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool ProductPriceTier::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.ProductPriceTier)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string price_tier = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_price_tier()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->price_tier().data(), static_cast<int>(this->price_tier().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.ProductPriceTier.price_tier"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string product_id = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(82u /* 82 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_product_id()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->product_id().data(), static_cast<int>(this->product_id().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.ProductPriceTier.product_id"));
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
  // @@protoc_insertion_point(parse_success:proto.ProductPriceTier)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.ProductPriceTier)
  return false;
#undef DO_
}

void ProductPriceTier::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.ProductPriceTier)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string price_tier = 6;
  if (this->price_tier().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->price_tier().data(), static_cast<int>(this->price_tier().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.ProductPriceTier.price_tier");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      6, this->price_tier(), output);
  }

  // string product_id = 10;
  if (this->product_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->product_id().data(), static_cast<int>(this->product_id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.ProductPriceTier.product_id");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      10, this->product_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.ProductPriceTier)
}

::google::protobuf::uint8* ProductPriceTier::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.ProductPriceTier)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string price_tier = 6;
  if (this->price_tier().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->price_tier().data(), static_cast<int>(this->price_tier().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.ProductPriceTier.price_tier");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        6, this->price_tier(), target);
  }

  // string product_id = 10;
  if (this->product_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->product_id().data(), static_cast<int>(this->product_id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.ProductPriceTier.product_id");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        10, this->product_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.ProductPriceTier)
  return target;
}

size_t ProductPriceTier::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.ProductPriceTier)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string price_tier = 6;
  if (this->price_tier().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->price_tier());
  }

  // string product_id = 10;
  if (this->product_id().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->product_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool ResinCardData::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.ResinCardData)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 expire_time = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &expire_time_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 last_daily_reward_time = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &last_daily_reward_time_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 remain_reward_days = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(80u /* 80 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &remain_reward_days_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 config_id = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(112u /* 112 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &config_id_)));
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
  // @@protoc_insertion_point(parse_success:proto.ResinCardData)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.ResinCardData)
  return false;
#undef DO_
}

void ResinCardData::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.ResinCardData)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 expire_time = 5;
  if (this->expire_time() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->expire_time(), output);
  }

  // uint32 last_daily_reward_time = 7;
  if (this->last_daily_reward_time() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->last_daily_reward_time(), output);
  }

  // uint32 remain_reward_days = 10;
  if (this->remain_reward_days() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(10, this->remain_reward_days(), output);
  }

  // uint32 config_id = 14;
  if (this->config_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(14, this->config_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.ResinCardData)
}

::google::protobuf::uint8* ResinCardData::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.ResinCardData)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 expire_time = 5;
  if (this->expire_time() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->expire_time(), target);
  }

  // uint32 last_daily_reward_time = 7;
  if (this->last_daily_reward_time() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(7, this->last_daily_reward_time(), target);
  }

  // uint32 remain_reward_days = 10;
  if (this->remain_reward_days() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(10, this->remain_reward_days(), target);
  }

  // uint32 config_id = 14;
  if (this->config_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(14, this->config_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.ResinCardData)
  return target;
}

size_t ResinCardData::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.ResinCardData)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 expire_time = 5;
  if (this->expire_time() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->expire_time());
  }

  // uint32 last_daily_reward_time = 7;
  if (this->last_daily_reward_time() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->last_daily_reward_time());
  }

  // uint32 remain_reward_days = 10;
  if (this->remain_reward_days() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->remain_reward_days());
  }

  // uint32 config_id = 14;
  if (this->config_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->config_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool PlayerRechargeDataNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.PlayerRechargeDataNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .proto.ProductPriceTier product_price_tier_list = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(82u /* 82 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_product_price_tier_list()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 card_product_remain_days = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(112u /* 112 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &card_product_remain_days_)));
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
  // @@protoc_insertion_point(parse_success:proto.PlayerRechargeDataNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.PlayerRechargeDataNotify)
  return false;
#undef DO_
}

void PlayerRechargeDataNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.PlayerRechargeDataNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.ProductPriceTier product_price_tier_list = 10;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->product_price_tier_list_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      10, this->product_price_tier_list(static_cast<int>(i)), output);
  }

  // uint32 card_product_remain_days = 14;
  if (this->card_product_remain_days() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(14, this->card_product_remain_days(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.PlayerRechargeDataNotify)
}

::google::protobuf::uint8* PlayerRechargeDataNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.PlayerRechargeDataNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.ProductPriceTier product_price_tier_list = 10;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->product_price_tier_list_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        10, this->product_price_tier_list(static_cast<int>(i)), deterministic, target);
  }

  // uint32 card_product_remain_days = 14;
  if (this->card_product_remain_days() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(14, this->card_product_remain_days(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.PlayerRechargeDataNotify)
  return target;
}

size_t PlayerRechargeDataNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.PlayerRechargeDataNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .proto.ProductPriceTier product_price_tier_list = 10;
  {
    unsigned int count = static_cast<unsigned int>(this->product_price_tier_list_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->product_price_tier_list(static_cast<int>(i)));
    }
  }

  // uint32 card_product_remain_days = 14;
  if (this->card_product_remain_days() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->card_product_remain_days());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool OrderDisplayNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.OrderDisplayNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 order_id = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &order_id_)));
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
  // @@protoc_insertion_point(parse_success:proto.OrderDisplayNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.OrderDisplayNotify)
  return false;
#undef DO_
}

void OrderDisplayNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.OrderDisplayNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 order_id = 9;
  if (this->order_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(9, this->order_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.OrderDisplayNotify)
}

::google::protobuf::uint8* OrderDisplayNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.OrderDisplayNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 order_id = 9;
  if (this->order_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(9, this->order_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.OrderDisplayNotify)
  return target;
}

size_t OrderDisplayNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.OrderDisplayNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 order_id = 9;
  if (this->order_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->order_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool ReportTrackingIOInfoNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.ReportTrackingIOInfoNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string client_tz = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_client_tz()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->client_tz().data(), static_cast<int>(this->client_tz().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.ReportTrackingIOInfoNotify.client_tz"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string mac = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_mac()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->mac().data(), static_cast<int>(this->mac().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.ReportTrackingIOInfoNotify.mac"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string appid = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_appid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->appid().data(), static_cast<int>(this->appid().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.ReportTrackingIOInfoNotify.appid"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string rydevicetype = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(66u /* 66 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_rydevicetype()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->rydevicetype().data(), static_cast<int>(this->rydevicetype().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.ReportTrackingIOInfoNotify.rydevicetype"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string deviceid = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(74u /* 74 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_deviceid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->deviceid().data(), static_cast<int>(this->deviceid().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.ReportTrackingIOInfoNotify.deviceid"));
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
  // @@protoc_insertion_point(parse_success:proto.ReportTrackingIOInfoNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.ReportTrackingIOInfoNotify)
  return false;
#undef DO_
}

void ReportTrackingIOInfoNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.ReportTrackingIOInfoNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string client_tz = 2;
  if (this->client_tz().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->client_tz().data(), static_cast<int>(this->client_tz().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.ReportTrackingIOInfoNotify.client_tz");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->client_tz(), output);
  }

  // string mac = 3;
  if (this->mac().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->mac().data(), static_cast<int>(this->mac().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.ReportTrackingIOInfoNotify.mac");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->mac(), output);
  }

  // string appid = 5;
  if (this->appid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->appid().data(), static_cast<int>(this->appid().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.ReportTrackingIOInfoNotify.appid");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      5, this->appid(), output);
  }

  // string rydevicetype = 8;
  if (this->rydevicetype().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->rydevicetype().data(), static_cast<int>(this->rydevicetype().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.ReportTrackingIOInfoNotify.rydevicetype");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      8, this->rydevicetype(), output);
  }

  // string deviceid = 9;
  if (this->deviceid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->deviceid().data(), static_cast<int>(this->deviceid().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.ReportTrackingIOInfoNotify.deviceid");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      9, this->deviceid(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.ReportTrackingIOInfoNotify)
}

::google::protobuf::uint8* ReportTrackingIOInfoNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.ReportTrackingIOInfoNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string client_tz = 2;
  if (this->client_tz().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->client_tz().data(), static_cast<int>(this->client_tz().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.ReportTrackingIOInfoNotify.client_tz");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->client_tz(), target);
  }

  // string mac = 3;
  if (this->mac().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->mac().data(), static_cast<int>(this->mac().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.ReportTrackingIOInfoNotify.mac");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->mac(), target);
  }

  // string appid = 5;
  if (this->appid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->appid().data(), static_cast<int>(this->appid().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.ReportTrackingIOInfoNotify.appid");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->appid(), target);
  }

  // string rydevicetype = 8;
  if (this->rydevicetype().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->rydevicetype().data(), static_cast<int>(this->rydevicetype().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.ReportTrackingIOInfoNotify.rydevicetype");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        8, this->rydevicetype(), target);
  }

  // string deviceid = 9;
  if (this->deviceid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->deviceid().data(), static_cast<int>(this->deviceid().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.ReportTrackingIOInfoNotify.deviceid");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        9, this->deviceid(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.ReportTrackingIOInfoNotify)
  return target;
}

size_t ReportTrackingIOInfoNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.ReportTrackingIOInfoNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string client_tz = 2;
  if (this->client_tz().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->client_tz());
  }

  // string mac = 3;
  if (this->mac().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->mac());
  }

  // string appid = 5;
  if (this->appid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->appid());
  }

  // string rydevicetype = 8;
  if (this->rydevicetype().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->rydevicetype());
  }

  // string deviceid = 9;
  if (this->deviceid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->deviceid());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool TakeResinCardDailyRewardReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.TakeResinCardDailyRewardReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 product_config_id = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(80u /* 80 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &product_config_id_)));
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
  // @@protoc_insertion_point(parse_success:proto.TakeResinCardDailyRewardReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.TakeResinCardDailyRewardReq)
  return false;
#undef DO_
}

void TakeResinCardDailyRewardReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.TakeResinCardDailyRewardReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 product_config_id = 10;
  if (this->product_config_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(10, this->product_config_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.TakeResinCardDailyRewardReq)
}

::google::protobuf::uint8* TakeResinCardDailyRewardReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.TakeResinCardDailyRewardReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 product_config_id = 10;
  if (this->product_config_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(10, this->product_config_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.TakeResinCardDailyRewardReq)
  return target;
}

size_t TakeResinCardDailyRewardReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.TakeResinCardDailyRewardReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 product_config_id = 10;
  if (this->product_config_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->product_config_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool TakeResinCardDailyRewardRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.TakeResinCardDailyRewardRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 product_config_id = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &product_config_id_)));
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

      // repeated .proto.ItemParam item_vec = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(122u /* 122 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_item_vec()));
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
  // @@protoc_insertion_point(parse_success:proto.TakeResinCardDailyRewardRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.TakeResinCardDailyRewardRsp)
  return false;
#undef DO_
}

void TakeResinCardDailyRewardRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.TakeResinCardDailyRewardRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 product_config_id = 4;
  if (this->product_config_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->product_config_id(), output);
  }

  // int32 retcode = 9;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(9, this->retcode(), output);
  }

  // repeated .proto.ItemParam item_vec = 15;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->item_vec_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      15, this->item_vec(static_cast<int>(i)), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.TakeResinCardDailyRewardRsp)
}

::google::protobuf::uint8* TakeResinCardDailyRewardRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.TakeResinCardDailyRewardRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 product_config_id = 4;
  if (this->product_config_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->product_config_id(), target);
  }

  // int32 retcode = 9;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(9, this->retcode(), target);
  }

  // repeated .proto.ItemParam item_vec = 15;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->item_vec_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        15, this->item_vec(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.TakeResinCardDailyRewardRsp)
  return target;
}

size_t TakeResinCardDailyRewardRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.TakeResinCardDailyRewardRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .proto.ItemParam item_vec = 15;
  {
    unsigned int count = static_cast<unsigned int>(this->item_vec_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->item_vec(static_cast<int>(i)));
    }
  }

  // uint32 product_config_id = 4;
  if (this->product_config_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->product_config_id());
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

bool ResinCardDataUpdateNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.ResinCardDataUpdateNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .proto.ResinCardData card_data_list = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(82u /* 82 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_card_data_list()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 today_start_time = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(120u /* 120 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &today_start_time_)));
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
  // @@protoc_insertion_point(parse_success:proto.ResinCardDataUpdateNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.ResinCardDataUpdateNotify)
  return false;
#undef DO_
}

void ResinCardDataUpdateNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.ResinCardDataUpdateNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.ResinCardData card_data_list = 10;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->card_data_list_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      10, this->card_data_list(static_cast<int>(i)), output);
  }

  // uint32 today_start_time = 15;
  if (this->today_start_time() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(15, this->today_start_time(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.ResinCardDataUpdateNotify)
}

::google::protobuf::uint8* ResinCardDataUpdateNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.ResinCardDataUpdateNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.ResinCardData card_data_list = 10;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->card_data_list_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        10, this->card_data_list(static_cast<int>(i)), deterministic, target);
  }

  // uint32 today_start_time = 15;
  if (this->today_start_time() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(15, this->today_start_time(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.ResinCardDataUpdateNotify)
  return target;
}

size_t ResinCardDataUpdateNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.ResinCardDataUpdateNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .proto.ResinCardData card_data_list = 10;
  {
    unsigned int count = static_cast<unsigned int>(this->card_data_list_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->card_data_list(static_cast<int>(i)));
    }
  }

  // uint32 today_start_time = 15;
  if (this->today_start_time() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->today_start_time());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}
}