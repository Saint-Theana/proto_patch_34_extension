#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "cmd/cmd_ability.pb.h"

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

bool AbilityInvokeEntryHead::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AbilityInvokeEntryHead)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 instanced_ability_id = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &instanced_ability_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 target_id = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &target_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 local_id = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &local_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 modifier_config_local_id = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 64 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &modifier_config_local_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 instanced_modifier_id = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &instanced_modifier_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_serverbuff_modifier = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(80u /* 80 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_serverbuff_modifier_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 server_buff_uid = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(120u /* 120 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &server_buff_uid_)));
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
  // @@protoc_insertion_point(parse_success:proto.AbilityInvokeEntryHead)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AbilityInvokeEntryHead)
  return false;
#undef DO_
}

void AbilityInvokeEntryHead::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AbilityInvokeEntryHead)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 instanced_ability_id = 2;
  if (this->instanced_ability_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->instanced_ability_id(), output);
  }

  // uint32 target_id = 5;
  if (this->target_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->target_id(), output);
  }

  // int32 local_id = 7;
  if (this->local_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(7, this->local_id(), output);
  }

  // int32 modifier_config_local_id = 8;
  if (this->modifier_config_local_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(8, this->modifier_config_local_id(), output);
  }

  // uint32 instanced_modifier_id = 9;
  if (this->instanced_modifier_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(9, this->instanced_modifier_id(), output);
  }

  // bool is_serverbuff_modifier = 10;
  if (this->is_serverbuff_modifier() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(10, this->is_serverbuff_modifier(), output);
  }

  // uint32 server_buff_uid = 15;
  if (this->server_buff_uid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(15, this->server_buff_uid(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AbilityInvokeEntryHead)
}

::google::protobuf::uint8* AbilityInvokeEntryHead::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AbilityInvokeEntryHead)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 instanced_ability_id = 2;
  if (this->instanced_ability_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->instanced_ability_id(), target);
  }

  // uint32 target_id = 5;
  if (this->target_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->target_id(), target);
  }

  // int32 local_id = 7;
  if (this->local_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(7, this->local_id(), target);
  }

  // int32 modifier_config_local_id = 8;
  if (this->modifier_config_local_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(8, this->modifier_config_local_id(), target);
  }

  // uint32 instanced_modifier_id = 9;
  if (this->instanced_modifier_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(9, this->instanced_modifier_id(), target);
  }

  // bool is_serverbuff_modifier = 10;
  if (this->is_serverbuff_modifier() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(10, this->is_serverbuff_modifier(), target);
  }

  // uint32 server_buff_uid = 15;
  if (this->server_buff_uid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(15, this->server_buff_uid(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AbilityInvokeEntryHead)
  return target;
}

size_t AbilityInvokeEntryHead::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AbilityInvokeEntryHead)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 instanced_ability_id = 2;
  if (this->instanced_ability_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->instanced_ability_id());
  }

  // uint32 target_id = 5;
  if (this->target_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->target_id());
  }

  // int32 local_id = 7;
  if (this->local_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->local_id());
  }

  // int32 modifier_config_local_id = 8;
  if (this->modifier_config_local_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->modifier_config_local_id());
  }

  // uint32 server_buff_uid = 15;
  if (this->server_buff_uid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->server_buff_uid());
  }

  // uint32 instanced_modifier_id = 9;
  if (this->instanced_modifier_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->instanced_modifier_id());
  }

  // bool is_serverbuff_modifier = 10;
  if (this->is_serverbuff_modifier() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AbilityInvokeEntry::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AbilityInvokeEntry)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bytes ability_data = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_ability_data()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_ignore_auth = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_ignore_auth_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 event_id = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 64 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &event_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 forward_peer = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(80u /* 80 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &forward_peer_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 entity_id = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(88u /* 88 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &entity_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.AbilityInvokeArgument argument_type = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(96u /* 96 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_argument_type(static_cast< ::proto::AbilityInvokeArgument >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.AbilityInvokeEntryHead head = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(106u /* 106 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_head()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double total_tick_time = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(113u /* 113 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &total_tick_time_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.ForwardType forward_type = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(120u /* 120 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_forward_type(static_cast< ::proto::ForwardType >(value));
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
  // @@protoc_insertion_point(parse_success:proto.AbilityInvokeEntry)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AbilityInvokeEntry)
  return false;
#undef DO_
}

void AbilityInvokeEntry::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AbilityInvokeEntry)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes ability_data = 4;
  if (this->ability_data().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      4, this->ability_data(), output);
  }

  // bool is_ignore_auth = 6;
  if (this->is_ignore_auth() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(6, this->is_ignore_auth(), output);
  }

  // uint32 event_id = 8;
  if (this->event_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(8, this->event_id(), output);
  }

  // uint32 forward_peer = 10;
  if (this->forward_peer() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(10, this->forward_peer(), output);
  }

  // uint32 entity_id = 11;
  if (this->entity_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(11, this->entity_id(), output);
  }

  // .proto.AbilityInvokeArgument argument_type = 12;
  if (this->argument_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      12, this->argument_type(), output);
  }

  // .proto.AbilityInvokeEntryHead head = 13;
  if (this->has_head()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      13, *this->head_, output);
  }

  // double total_tick_time = 14;
  if (this->total_tick_time() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(14, this->total_tick_time(), output);
  }

  // .proto.ForwardType forward_type = 15;
  if (this->forward_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      15, this->forward_type(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AbilityInvokeEntry)
}

::google::protobuf::uint8* AbilityInvokeEntry::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AbilityInvokeEntry)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes ability_data = 4;
  if (this->ability_data().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        4, this->ability_data(), target);
  }

  // bool is_ignore_auth = 6;
  if (this->is_ignore_auth() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(6, this->is_ignore_auth(), target);
  }

  // uint32 event_id = 8;
  if (this->event_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(8, this->event_id(), target);
  }

  // uint32 forward_peer = 10;
  if (this->forward_peer() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(10, this->forward_peer(), target);
  }

  // uint32 entity_id = 11;
  if (this->entity_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(11, this->entity_id(), target);
  }

  // .proto.AbilityInvokeArgument argument_type = 12;
  if (this->argument_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      12, this->argument_type(), target);
  }

  // .proto.AbilityInvokeEntryHead head = 13;
  if (this->has_head()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        13, *this->head_, deterministic, target);
  }

  // double total_tick_time = 14;
  if (this->total_tick_time() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(14, this->total_tick_time(), target);
  }

  // .proto.ForwardType forward_type = 15;
  if (this->forward_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      15, this->forward_type(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AbilityInvokeEntry)
  return target;
}

size_t AbilityInvokeEntry::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AbilityInvokeEntry)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // bytes ability_data = 4;
  if (this->ability_data().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->ability_data());
  }

  // .proto.AbilityInvokeEntryHead head = 13;
  if (this->has_head()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->head_);
  }

  // bool is_ignore_auth = 6;
  if (this->is_ignore_auth() != 0) {
    total_size += 1 + 1;
  }

  // uint32 event_id = 8;
  if (this->event_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->event_id());
  }

  // uint32 forward_peer = 10;
  if (this->forward_peer() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->forward_peer());
  }

  // uint32 entity_id = 11;
  if (this->entity_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->entity_id());
  }

  // .proto.AbilityInvokeArgument argument_type = 12;
  if (this->argument_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->argument_type());
  }

  // .proto.ForwardType forward_type = 15;
  if (this->forward_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->forward_type());
  }

  // double total_tick_time = 14;
  if (this->total_tick_time() != 0) {
    total_size += 1 + 8;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AbilityInvocationFixedNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AbilityInvocationFixedNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .proto.AbilityInvokeEntry invoke1st = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_invoke1st()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.AbilityInvokeEntry invoke2nd = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_invoke2nd()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.AbilityInvokeEntry invoke4th = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_invoke4th()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.AbilityInvokeEntry invoke3rd = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_invoke3rd()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.AbilityInvokeEntry invoke5th = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(66u /* 66 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_invoke5th()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.AbilityInvokeEntry invoke6th = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(122u /* 122 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_invoke6th()));
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
  // @@protoc_insertion_point(parse_success:proto.AbilityInvocationFixedNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AbilityInvocationFixedNotify)
  return false;
#undef DO_
}

void AbilityInvocationFixedNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AbilityInvocationFixedNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.AbilityInvokeEntry invoke1st = 1;
  if (this->has_invoke1st()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->invoke1st_, output);
  }

  // .proto.AbilityInvokeEntry invoke2nd = 3;
  if (this->has_invoke2nd()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, *this->invoke2nd_, output);
  }

  // .proto.AbilityInvokeEntry invoke4th = 5;
  if (this->has_invoke4th()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, *this->invoke4th_, output);
  }

  // .proto.AbilityInvokeEntry invoke3rd = 6;
  if (this->has_invoke3rd()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      6, *this->invoke3rd_, output);
  }

  // .proto.AbilityInvokeEntry invoke5th = 8;
  if (this->has_invoke5th()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      8, *this->invoke5th_, output);
  }

  // .proto.AbilityInvokeEntry invoke6th = 15;
  if (this->has_invoke6th()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      15, *this->invoke6th_, output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AbilityInvocationFixedNotify)
}

::google::protobuf::uint8* AbilityInvocationFixedNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AbilityInvocationFixedNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.AbilityInvokeEntry invoke1st = 1;
  if (this->has_invoke1st()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->invoke1st_, deterministic, target);
  }

  // .proto.AbilityInvokeEntry invoke2nd = 3;
  if (this->has_invoke2nd()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, *this->invoke2nd_, deterministic, target);
  }

  // .proto.AbilityInvokeEntry invoke4th = 5;
  if (this->has_invoke4th()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        5, *this->invoke4th_, deterministic, target);
  }

  // .proto.AbilityInvokeEntry invoke3rd = 6;
  if (this->has_invoke3rd()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        6, *this->invoke3rd_, deterministic, target);
  }

  // .proto.AbilityInvokeEntry invoke5th = 8;
  if (this->has_invoke5th()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        8, *this->invoke5th_, deterministic, target);
  }

  // .proto.AbilityInvokeEntry invoke6th = 15;
  if (this->has_invoke6th()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        15, *this->invoke6th_, deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AbilityInvocationFixedNotify)
  return target;
}

size_t AbilityInvocationFixedNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AbilityInvocationFixedNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .proto.AbilityInvokeEntry invoke1st = 1;
  if (this->has_invoke1st()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->invoke1st_);
  }

  // .proto.AbilityInvokeEntry invoke2nd = 3;
  if (this->has_invoke2nd()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->invoke2nd_);
  }

  // .proto.AbilityInvokeEntry invoke4th = 5;
  if (this->has_invoke4th()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->invoke4th_);
  }

  // .proto.AbilityInvokeEntry invoke3rd = 6;
  if (this->has_invoke3rd()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->invoke3rd_);
  }

  // .proto.AbilityInvokeEntry invoke5th = 8;
  if (this->has_invoke5th()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->invoke5th_);
  }

  // .proto.AbilityInvokeEntry invoke6th = 15;
  if (this->has_invoke6th()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->invoke6th_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AbilityInvocationsNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AbilityInvocationsNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .proto.AbilityInvokeEntry invokes = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(90u /* 90 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_invokes()));
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
  // @@protoc_insertion_point(parse_success:proto.AbilityInvocationsNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AbilityInvocationsNotify)
  return false;
#undef DO_
}

void AbilityInvocationsNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AbilityInvocationsNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.AbilityInvokeEntry invokes = 11;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->invokes_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      11, this->invokes(static_cast<int>(i)), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AbilityInvocationsNotify)
}

::google::protobuf::uint8* AbilityInvocationsNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AbilityInvocationsNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.AbilityInvokeEntry invokes = 11;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->invokes_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        11, this->invokes(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AbilityInvocationsNotify)
  return target;
}

size_t AbilityInvocationsNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AbilityInvocationsNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .proto.AbilityInvokeEntry invokes = 11;
  {
    unsigned int count = static_cast<unsigned int>(this->invokes_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->invokes(static_cast<int>(i)));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AbilityMetaReInitOverrideMap::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AbilityMetaReInitOverrideMap)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .proto.AbilityScalarValueEntry override_map = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_override_map()));
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
  // @@protoc_insertion_point(parse_success:proto.AbilityMetaReInitOverrideMap)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AbilityMetaReInitOverrideMap)
  return false;
#undef DO_
}

void AbilityMetaReInitOverrideMap::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AbilityMetaReInitOverrideMap)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.AbilityScalarValueEntry override_map = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->override_map_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->override_map(static_cast<int>(i)), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AbilityMetaReInitOverrideMap)
}

::google::protobuf::uint8* AbilityMetaReInitOverrideMap::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AbilityMetaReInitOverrideMap)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.AbilityScalarValueEntry override_map = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->override_map_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, this->override_map(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AbilityMetaReInitOverrideMap)
  return target;
}

size_t AbilityMetaReInitOverrideMap::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AbilityMetaReInitOverrideMap)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .proto.AbilityScalarValueEntry override_map = 2;
  {
    unsigned int count = static_cast<unsigned int>(this->override_map_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->override_map(static_cast<int>(i)));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AbilityMetaAddAbility::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AbilityMetaAddAbility)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .proto.AbilityAppliedAbility ability = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_ability()));
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
  // @@protoc_insertion_point(parse_success:proto.AbilityMetaAddAbility)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AbilityMetaAddAbility)
  return false;
#undef DO_
}

void AbilityMetaAddAbility::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AbilityMetaAddAbility)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.AbilityAppliedAbility ability = 4;
  if (this->has_ability()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, *this->ability_, output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AbilityMetaAddAbility)
}

::google::protobuf::uint8* AbilityMetaAddAbility::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AbilityMetaAddAbility)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.AbilityAppliedAbility ability = 4;
  if (this->has_ability()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        4, *this->ability_, deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AbilityMetaAddAbility)
  return target;
}

size_t AbilityMetaAddAbility::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AbilityMetaAddAbility)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .proto.AbilityAppliedAbility ability = 4;
  if (this->has_ability()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->ability_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool ModifierProperty::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.ModifierProperty)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .proto.AbilityString key = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(66u /* 66 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_key()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float value = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(117u /* 117 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
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
  // @@protoc_insertion_point(parse_success:proto.ModifierProperty)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.ModifierProperty)
  return false;
#undef DO_
}

void ModifierProperty::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.ModifierProperty)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.AbilityString key = 8;
  if (this->has_key()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      8, *this->key_, output);
  }

  // float value = 14;
  if (this->value() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(14, this->value(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.ModifierProperty)
}

::google::protobuf::uint8* ModifierProperty::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.ModifierProperty)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.AbilityString key = 8;
  if (this->has_key()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        8, *this->key_, deterministic, target);
  }

  // float value = 14;
  if (this->value() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(14, this->value(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.ModifierProperty)
  return target;
}

size_t ModifierProperty::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.ModifierProperty)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .proto.AbilityString key = 8;
  if (this->has_key()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->key_);
  }

  // float value = 14;
  if (this->value() != 0) {
    total_size += 1 + 4;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AbilityMetaModifierChange::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AbilityMetaModifierChange)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bool is_durability_zero = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_durability_zero_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.ModifierAction action = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_action(static_cast< ::proto::ModifierAction >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_attached_parent_ability = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_attached_parent_ability_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.AbilityString parent_ability_override = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_parent_ability_override()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 modifier_local_id = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &modifier_local_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.AbilityAttachedModifier attached_instanced_modifier = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(58u /* 58 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_attached_instanced_modifier()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 apply_entity_id = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 64 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &apply_entity_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 server_buff_uid = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &server_buff_uid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.AbilityString parent_ability_name = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(82u /* 82 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_parent_ability_name()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_mute_remote = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(88u /* 88 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_mute_remote_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .proto.ModifierProperty properties = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(106u /* 106 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_properties()));
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
  // @@protoc_insertion_point(parse_success:proto.AbilityMetaModifierChange)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AbilityMetaModifierChange)
  return false;
#undef DO_
}

void AbilityMetaModifierChange::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AbilityMetaModifierChange)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool is_durability_zero = 1;
  if (this->is_durability_zero() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->is_durability_zero(), output);
  }

  // .proto.ModifierAction action = 2;
  if (this->action() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->action(), output);
  }

  // bool is_attached_parent_ability = 3;
  if (this->is_attached_parent_ability() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->is_attached_parent_ability(), output);
  }

  // .proto.AbilityString parent_ability_override = 5;
  if (this->has_parent_ability_override()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, *this->parent_ability_override_, output);
  }

  // int32 modifier_local_id = 6;
  if (this->modifier_local_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(6, this->modifier_local_id(), output);
  }

  // .proto.AbilityAttachedModifier attached_instanced_modifier = 7;
  if (this->has_attached_instanced_modifier()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      7, *this->attached_instanced_modifier_, output);
  }

  // uint32 apply_entity_id = 8;
  if (this->apply_entity_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(8, this->apply_entity_id(), output);
  }

  // uint32 server_buff_uid = 9;
  if (this->server_buff_uid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(9, this->server_buff_uid(), output);
  }

  // .proto.AbilityString parent_ability_name = 10;
  if (this->has_parent_ability_name()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      10, *this->parent_ability_name_, output);
  }

  // bool is_mute_remote = 11;
  if (this->is_mute_remote() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(11, this->is_mute_remote(), output);
  }

  // repeated .proto.ModifierProperty properties = 13;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->properties_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      13, this->properties(static_cast<int>(i)), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AbilityMetaModifierChange)
}

::google::protobuf::uint8* AbilityMetaModifierChange::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AbilityMetaModifierChange)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool is_durability_zero = 1;
  if (this->is_durability_zero() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->is_durability_zero(), target);
  }

  // .proto.ModifierAction action = 2;
  if (this->action() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->action(), target);
  }

  // bool is_attached_parent_ability = 3;
  if (this->is_attached_parent_ability() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(3, this->is_attached_parent_ability(), target);
  }

  // .proto.AbilityString parent_ability_override = 5;
  if (this->has_parent_ability_override()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        5, *this->parent_ability_override_, deterministic, target);
  }

  // int32 modifier_local_id = 6;
  if (this->modifier_local_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(6, this->modifier_local_id(), target);
  }

  // .proto.AbilityAttachedModifier attached_instanced_modifier = 7;
  if (this->has_attached_instanced_modifier()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        7, *this->attached_instanced_modifier_, deterministic, target);
  }

  // uint32 apply_entity_id = 8;
  if (this->apply_entity_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(8, this->apply_entity_id(), target);
  }

  // uint32 server_buff_uid = 9;
  if (this->server_buff_uid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(9, this->server_buff_uid(), target);
  }

  // .proto.AbilityString parent_ability_name = 10;
  if (this->has_parent_ability_name()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        10, *this->parent_ability_name_, deterministic, target);
  }

  // bool is_mute_remote = 11;
  if (this->is_mute_remote() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(11, this->is_mute_remote(), target);
  }

  // repeated .proto.ModifierProperty properties = 13;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->properties_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        13, this->properties(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AbilityMetaModifierChange)
  return target;
}

size_t AbilityMetaModifierChange::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AbilityMetaModifierChange)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .proto.ModifierProperty properties = 13;
  {
    unsigned int count = static_cast<unsigned int>(this->properties_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->properties(static_cast<int>(i)));
    }
  }

  // .proto.AbilityString parent_ability_override = 5;
  if (this->has_parent_ability_override()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->parent_ability_override_);
  }

  // .proto.AbilityAttachedModifier attached_instanced_modifier = 7;
  if (this->has_attached_instanced_modifier()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->attached_instanced_modifier_);
  }

  // .proto.AbilityString parent_ability_name = 10;
  if (this->has_parent_ability_name()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->parent_ability_name_);
  }

  // .proto.ModifierAction action = 2;
  if (this->action() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->action());
  }

  // bool is_attached_parent_ability = 3;
  if (this->is_attached_parent_ability() != 0) {
    total_size += 1 + 1;
  }

  // bool is_mute_remote = 11;
  if (this->is_mute_remote() != 0) {
    total_size += 1 + 1;
  }

  // bool is_durability_zero = 1;
  if (this->is_durability_zero() != 0) {
    total_size += 1 + 1;
  }

  // int32 modifier_local_id = 6;
  if (this->modifier_local_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->modifier_local_id());
  }

  // uint32 apply_entity_id = 8;
  if (this->apply_entity_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->apply_entity_id());
  }

  // uint32 server_buff_uid = 9;
  if (this->server_buff_uid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->server_buff_uid());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AbilityMetaDurabilityIsZero::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AbilityMetaDurabilityIsZero)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bool is_zero = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 64 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_zero_)));
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
  // @@protoc_insertion_point(parse_success:proto.AbilityMetaDurabilityIsZero)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AbilityMetaDurabilityIsZero)
  return false;
#undef DO_
}

void AbilityMetaDurabilityIsZero::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AbilityMetaDurabilityIsZero)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool is_zero = 8;
  if (this->is_zero() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(8, this->is_zero(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AbilityMetaDurabilityIsZero)
}

::google::protobuf::uint8* AbilityMetaDurabilityIsZero::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AbilityMetaDurabilityIsZero)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool is_zero = 8;
  if (this->is_zero() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(8, this->is_zero(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AbilityMetaDurabilityIsZero)
  return target;
}

size_t AbilityMetaDurabilityIsZero::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AbilityMetaDurabilityIsZero)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // bool is_zero = 8;
  if (this->is_zero() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AbilityMetaSpecialFloatArgument::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AbilityMetaSpecialFloatArgument)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // float argument_value = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(21u /* 21 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &argument_value_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_on = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_on_)));
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
  // @@protoc_insertion_point(parse_success:proto.AbilityMetaSpecialFloatArgument)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AbilityMetaSpecialFloatArgument)
  return false;
#undef DO_
}

void AbilityMetaSpecialFloatArgument::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AbilityMetaSpecialFloatArgument)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // float argument_value = 2;
  if (this->argument_value() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(2, this->argument_value(), output);
  }

  // bool is_on = 9;
  if (this->is_on() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(9, this->is_on(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AbilityMetaSpecialFloatArgument)
}

::google::protobuf::uint8* AbilityMetaSpecialFloatArgument::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AbilityMetaSpecialFloatArgument)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // float argument_value = 2;
  if (this->argument_value() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(2, this->argument_value(), target);
  }

  // bool is_on = 9;
  if (this->is_on() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(9, this->is_on(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AbilityMetaSpecialFloatArgument)
  return target;
}

size_t AbilityMetaSpecialFloatArgument::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AbilityMetaSpecialFloatArgument)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // float argument_value = 2;
  if (this->argument_value() != 0) {
    total_size += 1 + 4;
  }

  // bool is_on = 9;
  if (this->is_on() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AbilityMetaAddOrGetAbilityAndTrigger::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AbilityMetaAddOrGetAbilityAndTrigger)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .proto.AbilityString ability_override = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_ability_override()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.AbilityString ability_name = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_ability_name()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float trigger_argument = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(125u /* 125 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &trigger_argument_)));
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
  // @@protoc_insertion_point(parse_success:proto.AbilityMetaAddOrGetAbilityAndTrigger)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AbilityMetaAddOrGetAbilityAndTrigger)
  return false;
#undef DO_
}

void AbilityMetaAddOrGetAbilityAndTrigger::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AbilityMetaAddOrGetAbilityAndTrigger)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.AbilityString ability_override = 4;
  if (this->has_ability_override()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, *this->ability_override_, output);
  }

  // .proto.AbilityString ability_name = 6;
  if (this->has_ability_name()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      6, *this->ability_name_, output);
  }

  // float trigger_argument = 15;
  if (this->trigger_argument() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(15, this->trigger_argument(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AbilityMetaAddOrGetAbilityAndTrigger)
}

::google::protobuf::uint8* AbilityMetaAddOrGetAbilityAndTrigger::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AbilityMetaAddOrGetAbilityAndTrigger)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.AbilityString ability_override = 4;
  if (this->has_ability_override()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        4, *this->ability_override_, deterministic, target);
  }

  // .proto.AbilityString ability_name = 6;
  if (this->has_ability_name()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        6, *this->ability_name_, deterministic, target);
  }

  // float trigger_argument = 15;
  if (this->trigger_argument() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(15, this->trigger_argument(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AbilityMetaAddOrGetAbilityAndTrigger)
  return target;
}

size_t AbilityMetaAddOrGetAbilityAndTrigger::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AbilityMetaAddOrGetAbilityAndTrigger)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .proto.AbilityString ability_override = 4;
  if (this->has_ability_override()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->ability_override_);
  }

  // .proto.AbilityString ability_name = 6;
  if (this->has_ability_name()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->ability_name_);
  }

  // float trigger_argument = 15;
  if (this->trigger_argument() != 0) {
    total_size += 1 + 4;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AbilityMetaSetKilledState::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AbilityMetaSetKilledState)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bool killed = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &killed_)));
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
  // @@protoc_insertion_point(parse_success:proto.AbilityMetaSetKilledState)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AbilityMetaSetKilledState)
  return false;
#undef DO_
}

void AbilityMetaSetKilledState::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AbilityMetaSetKilledState)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool killed = 1;
  if (this->killed() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->killed(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AbilityMetaSetKilledState)
}

::google::protobuf::uint8* AbilityMetaSetKilledState::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AbilityMetaSetKilledState)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool killed = 1;
  if (this->killed() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->killed(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AbilityMetaSetKilledState)
  return target;
}

size_t AbilityMetaSetKilledState::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AbilityMetaSetKilledState)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // bool killed = 1;
  if (this->killed() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AbilityMetaSetAbilityTrigger::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AbilityMetaSetAbilityTrigger)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 trigger_ability_entity_id = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(120u /* 120 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &trigger_ability_entity_id_)));
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
  // @@protoc_insertion_point(parse_success:proto.AbilityMetaSetAbilityTrigger)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AbilityMetaSetAbilityTrigger)
  return false;
#undef DO_
}

void AbilityMetaSetAbilityTrigger::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AbilityMetaSetAbilityTrigger)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 trigger_ability_entity_id = 15;
  if (this->trigger_ability_entity_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(15, this->trigger_ability_entity_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AbilityMetaSetAbilityTrigger)
}

::google::protobuf::uint8* AbilityMetaSetAbilityTrigger::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AbilityMetaSetAbilityTrigger)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 trigger_ability_entity_id = 15;
  if (this->trigger_ability_entity_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(15, this->trigger_ability_entity_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AbilityMetaSetAbilityTrigger)
  return target;
}

size_t AbilityMetaSetAbilityTrigger::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AbilityMetaSetAbilityTrigger)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 trigger_ability_entity_id = 15;
  if (this->trigger_ability_entity_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->trigger_ability_entity_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AbilityMetaSetModifierApplyEntityId::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AbilityMetaSetModifierApplyEntityId)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 apply_entity_id = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &apply_entity_id_)));
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
  // @@protoc_insertion_point(parse_success:proto.AbilityMetaSetModifierApplyEntityId)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AbilityMetaSetModifierApplyEntityId)
  return false;
#undef DO_
}

void AbilityMetaSetModifierApplyEntityId::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AbilityMetaSetModifierApplyEntityId)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 apply_entity_id = 6;
  if (this->apply_entity_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->apply_entity_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AbilityMetaSetModifierApplyEntityId)
}

::google::protobuf::uint8* AbilityMetaSetModifierApplyEntityId::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AbilityMetaSetModifierApplyEntityId)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 apply_entity_id = 6;
  if (this->apply_entity_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, this->apply_entity_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AbilityMetaSetModifierApplyEntityId)
  return target;
}

size_t AbilityMetaSetModifierApplyEntityId::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AbilityMetaSetModifierApplyEntityId)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 apply_entity_id = 6;
  if (this->apply_entity_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->apply_entity_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AbilityMetaModifierDurabilityChange::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AbilityMetaModifierDurabilityChange)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // float reduce_durability = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(61u /* 61 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &reduce_durability_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float remain_durability = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(117u /* 117 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &remain_durability_)));
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
  // @@protoc_insertion_point(parse_success:proto.AbilityMetaModifierDurabilityChange)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AbilityMetaModifierDurabilityChange)
  return false;
#undef DO_
}

void AbilityMetaModifierDurabilityChange::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AbilityMetaModifierDurabilityChange)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // float reduce_durability = 7;
  if (this->reduce_durability() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(7, this->reduce_durability(), output);
  }

  // float remain_durability = 14;
  if (this->remain_durability() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(14, this->remain_durability(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AbilityMetaModifierDurabilityChange)
}

::google::protobuf::uint8* AbilityMetaModifierDurabilityChange::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AbilityMetaModifierDurabilityChange)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // float reduce_durability = 7;
  if (this->reduce_durability() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(7, this->reduce_durability(), target);
  }

  // float remain_durability = 14;
  if (this->remain_durability() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(14, this->remain_durability(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AbilityMetaModifierDurabilityChange)
  return target;
}

size_t AbilityMetaModifierDurabilityChange::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AbilityMetaModifierDurabilityChange)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // float reduce_durability = 7;
  if (this->reduce_durability() != 0) {
    total_size += 1 + 4;
  }

  // float remain_durability = 14;
  if (this->remain_durability() != 0) {
    total_size += 1 + 4;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AbilityMetaElementReactionVisual::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AbilityMetaElementReactionVisual)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 element_reactor_type = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &element_reactor_type_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 element_source_type = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &element_source_type_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 element_reaction_type = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &element_reaction_type_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 hit_index = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(96u /* 96 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &hit_index_)));
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
  // @@protoc_insertion_point(parse_success:proto.AbilityMetaElementReactionVisual)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AbilityMetaElementReactionVisual)
  return false;
#undef DO_
}

void AbilityMetaElementReactionVisual::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AbilityMetaElementReactionVisual)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 element_reactor_type = 2;
  if (this->element_reactor_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->element_reactor_type(), output);
  }

  // uint32 element_source_type = 3;
  if (this->element_source_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->element_source_type(), output);
  }

  // uint32 element_reaction_type = 7;
  if (this->element_reaction_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->element_reaction_type(), output);
  }

  // int32 hit_index = 12;
  if (this->hit_index() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(12, this->hit_index(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AbilityMetaElementReactionVisual)
}

::google::protobuf::uint8* AbilityMetaElementReactionVisual::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AbilityMetaElementReactionVisual)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 element_reactor_type = 2;
  if (this->element_reactor_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->element_reactor_type(), target);
  }

  // uint32 element_source_type = 3;
  if (this->element_source_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->element_source_type(), target);
  }

  // uint32 element_reaction_type = 7;
  if (this->element_reaction_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(7, this->element_reaction_type(), target);
  }

  // int32 hit_index = 12;
  if (this->hit_index() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(12, this->hit_index(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AbilityMetaElementReactionVisual)
  return target;
}

size_t AbilityMetaElementReactionVisual::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AbilityMetaElementReactionVisual)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 element_reactor_type = 2;
  if (this->element_reactor_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->element_reactor_type());
  }

  // uint32 element_source_type = 3;
  if (this->element_source_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->element_source_type());
  }

  // uint32 element_reaction_type = 7;
  if (this->element_reaction_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->element_reaction_type());
  }

  // int32 hit_index = 12;
  if (this->hit_index() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->hit_index());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AbilityMetaTriggerElementReaction::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AbilityMetaTriggerElementReaction)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 hit_index = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &hit_index_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 element_reaction_type = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &element_reaction_type_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 trigger_entity_id = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(80u /* 80 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &trigger_entity_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 element_source_type = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(88u /* 88 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &element_source_type_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 element_reactor_type = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(120u /* 120 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &element_reactor_type_)));
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
  // @@protoc_insertion_point(parse_success:proto.AbilityMetaTriggerElementReaction)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AbilityMetaTriggerElementReaction)
  return false;
#undef DO_
}

void AbilityMetaTriggerElementReaction::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AbilityMetaTriggerElementReaction)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 hit_index = 5;
  if (this->hit_index() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->hit_index(), output);
  }

  // uint32 element_reaction_type = 6;
  if (this->element_reaction_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->element_reaction_type(), output);
  }

  // uint32 trigger_entity_id = 10;
  if (this->trigger_entity_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(10, this->trigger_entity_id(), output);
  }

  // uint32 element_source_type = 11;
  if (this->element_source_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(11, this->element_source_type(), output);
  }

  // uint32 element_reactor_type = 15;
  if (this->element_reactor_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(15, this->element_reactor_type(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AbilityMetaTriggerElementReaction)
}

::google::protobuf::uint8* AbilityMetaTriggerElementReaction::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AbilityMetaTriggerElementReaction)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 hit_index = 5;
  if (this->hit_index() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->hit_index(), target);
  }

  // uint32 element_reaction_type = 6;
  if (this->element_reaction_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, this->element_reaction_type(), target);
  }

  // uint32 trigger_entity_id = 10;
  if (this->trigger_entity_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(10, this->trigger_entity_id(), target);
  }

  // uint32 element_source_type = 11;
  if (this->element_source_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(11, this->element_source_type(), target);
  }

  // uint32 element_reactor_type = 15;
  if (this->element_reactor_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(15, this->element_reactor_type(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AbilityMetaTriggerElementReaction)
  return target;
}

size_t AbilityMetaTriggerElementReaction::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AbilityMetaTriggerElementReaction)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // int32 hit_index = 5;
  if (this->hit_index() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->hit_index());
  }

  // uint32 element_reaction_type = 6;
  if (this->element_reaction_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->element_reaction_type());
  }

  // uint32 element_reactor_type = 15;
  if (this->element_reactor_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->element_reactor_type());
  }

  // uint32 trigger_entity_id = 10;
  if (this->trigger_entity_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->trigger_entity_id());
  }

  // uint32 element_source_type = 11;
  if (this->element_source_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->element_source_type());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AbilityMetaLoseHp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AbilityMetaLoseHp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 lose_hp_config_idx = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &lose_hp_config_idx_)));
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
  // @@protoc_insertion_point(parse_success:proto.AbilityMetaLoseHp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AbilityMetaLoseHp)
  return false;
#undef DO_
}

void AbilityMetaLoseHp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AbilityMetaLoseHp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 lose_hp_config_idx = 4;
  if (this->lose_hp_config_idx() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->lose_hp_config_idx(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AbilityMetaLoseHp)
}

::google::protobuf::uint8* AbilityMetaLoseHp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AbilityMetaLoseHp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 lose_hp_config_idx = 4;
  if (this->lose_hp_config_idx() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->lose_hp_config_idx(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AbilityMetaLoseHp)
  return target;
}

size_t AbilityMetaLoseHp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AbilityMetaLoseHp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 lose_hp_config_idx = 4;
  if (this->lose_hp_config_idx() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->lose_hp_config_idx());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AbilityMetaSetPoseParameter::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AbilityMetaSetPoseParameter)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .proto.AnimatorParameterValueInfoPair value = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_value()));
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
  // @@protoc_insertion_point(parse_success:proto.AbilityMetaSetPoseParameter)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AbilityMetaSetPoseParameter)
  return false;
#undef DO_
}

void AbilityMetaSetPoseParameter::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AbilityMetaSetPoseParameter)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.AnimatorParameterValueInfoPair value = 2;
  if (this->has_value()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->value_, output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AbilityMetaSetPoseParameter)
}

::google::protobuf::uint8* AbilityMetaSetPoseParameter::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AbilityMetaSetPoseParameter)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.AnimatorParameterValueInfoPair value = 2;
  if (this->has_value()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->value_, deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AbilityMetaSetPoseParameter)
  return target;
}

size_t AbilityMetaSetPoseParameter::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AbilityMetaSetPoseParameter)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .proto.AnimatorParameterValueInfoPair value = 2;
  if (this->has_value()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->value_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AbilityMetaUpdateBaseReactionDamage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AbilityMetaUpdateBaseReactionDamage)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .proto.AbilityString ability_name = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(90u /* 90 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_ability_name()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 reaction_type = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(96u /* 96 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &reaction_type_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.AbilityString global_value_key = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(106u /* 106 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_global_value_key()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 source_caster_id = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(112u /* 112 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &source_caster_id_)));
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
  // @@protoc_insertion_point(parse_success:proto.AbilityMetaUpdateBaseReactionDamage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AbilityMetaUpdateBaseReactionDamage)
  return false;
#undef DO_
}

void AbilityMetaUpdateBaseReactionDamage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AbilityMetaUpdateBaseReactionDamage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.AbilityString ability_name = 11;
  if (this->has_ability_name()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      11, *this->ability_name_, output);
  }

  // uint32 reaction_type = 12;
  if (this->reaction_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(12, this->reaction_type(), output);
  }

  // .proto.AbilityString global_value_key = 13;
  if (this->has_global_value_key()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      13, *this->global_value_key_, output);
  }

  // uint32 source_caster_id = 14;
  if (this->source_caster_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(14, this->source_caster_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AbilityMetaUpdateBaseReactionDamage)
}

::google::protobuf::uint8* AbilityMetaUpdateBaseReactionDamage::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AbilityMetaUpdateBaseReactionDamage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.AbilityString ability_name = 11;
  if (this->has_ability_name()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        11, *this->ability_name_, deterministic, target);
  }

  // uint32 reaction_type = 12;
  if (this->reaction_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(12, this->reaction_type(), target);
  }

  // .proto.AbilityString global_value_key = 13;
  if (this->has_global_value_key()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        13, *this->global_value_key_, deterministic, target);
  }

  // uint32 source_caster_id = 14;
  if (this->source_caster_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(14, this->source_caster_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AbilityMetaUpdateBaseReactionDamage)
  return target;
}

size_t AbilityMetaUpdateBaseReactionDamage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AbilityMetaUpdateBaseReactionDamage)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .proto.AbilityString ability_name = 11;
  if (this->has_ability_name()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->ability_name_);
  }

  // .proto.AbilityString global_value_key = 13;
  if (this->has_global_value_key()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->global_value_key_);
  }

  // uint32 reaction_type = 12;
  if (this->reaction_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->reaction_type());
  }

  // uint32 source_caster_id = 14;
  if (this->source_caster_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->source_caster_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AbilityActionTriggerAbility::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AbilityActionTriggerAbility)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 other_id = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(80u /* 80 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &other_id_)));
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
  // @@protoc_insertion_point(parse_success:proto.AbilityActionTriggerAbility)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AbilityActionTriggerAbility)
  return false;
#undef DO_
}

void AbilityActionTriggerAbility::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AbilityActionTriggerAbility)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 other_id = 10;
  if (this->other_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(10, this->other_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AbilityActionTriggerAbility)
}

::google::protobuf::uint8* AbilityActionTriggerAbility::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AbilityActionTriggerAbility)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 other_id = 10;
  if (this->other_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(10, this->other_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AbilityActionTriggerAbility)
  return target;
}

size_t AbilityActionTriggerAbility::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AbilityActionTriggerAbility)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 other_id = 10;
  if (this->other_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->other_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AbilityActionSetCrashDamage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AbilityActionSetCrashDamage)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // float damage = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(37u /* 37 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &damage_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.Vector hit_pos = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(82u /* 82 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_hit_pos()));
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
  // @@protoc_insertion_point(parse_success:proto.AbilityActionSetCrashDamage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AbilityActionSetCrashDamage)
  return false;
#undef DO_
}

void AbilityActionSetCrashDamage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AbilityActionSetCrashDamage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // float damage = 4;
  if (this->damage() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(4, this->damage(), output);
  }

  // .proto.Vector hit_pos = 10;
  if (this->has_hit_pos()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      10, *this->hit_pos_, output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AbilityActionSetCrashDamage)
}

::google::protobuf::uint8* AbilityActionSetCrashDamage::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AbilityActionSetCrashDamage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // float damage = 4;
  if (this->damage() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(4, this->damage(), target);
  }

  // .proto.Vector hit_pos = 10;
  if (this->has_hit_pos()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        10, *this->hit_pos_, deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AbilityActionSetCrashDamage)
  return target;
}

size_t AbilityActionSetCrashDamage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AbilityActionSetCrashDamage)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .proto.Vector hit_pos = 10;
  if (this->has_hit_pos()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->hit_pos_);
  }

  // float damage = 4;
  if (this->damage() != 0) {
    total_size += 1 + 4;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AbilityBornType::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AbilityBornType)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .proto.Vector pos = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(58u /* 58 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_pos()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.Vector rot = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(74u /* 74 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_rot()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.Vector move_dir = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(98u /* 98 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_move_dir()));
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
  // @@protoc_insertion_point(parse_success:proto.AbilityBornType)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AbilityBornType)
  return false;
#undef DO_
}

void AbilityBornType::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AbilityBornType)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.Vector pos = 7;
  if (this->has_pos()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      7, *this->pos_, output);
  }

  // .proto.Vector rot = 9;
  if (this->has_rot()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      9, *this->rot_, output);
  }

  // .proto.Vector move_dir = 12;
  if (this->has_move_dir()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      12, *this->move_dir_, output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AbilityBornType)
}

::google::protobuf::uint8* AbilityBornType::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AbilityBornType)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.Vector pos = 7;
  if (this->has_pos()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        7, *this->pos_, deterministic, target);
  }

  // .proto.Vector rot = 9;
  if (this->has_rot()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        9, *this->rot_, deterministic, target);
  }

  // .proto.Vector move_dir = 12;
  if (this->has_move_dir()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        12, *this->move_dir_, deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AbilityBornType)
  return target;
}

size_t AbilityBornType::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AbilityBornType)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .proto.Vector pos = 7;
  if (this->has_pos()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->pos_);
  }

  // .proto.Vector rot = 9;
  if (this->has_rot()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->rot_);
  }

  // .proto.Vector move_dir = 12;
  if (this->has_move_dir()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->move_dir_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AbilityFireworkBornType::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AbilityFireworkBornType)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .proto.Vector move_dir = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_move_dir()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 effect_index = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &effect_index_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.Vector pos = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(66u /* 66 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_pos()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.Vector rot = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(98u /* 98 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_rot()));
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
  // @@protoc_insertion_point(parse_success:proto.AbilityFireworkBornType)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AbilityFireworkBornType)
  return false;
#undef DO_
}

void AbilityFireworkBornType::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AbilityFireworkBornType)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.Vector move_dir = 1;
  if (this->has_move_dir()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->move_dir_, output);
  }

  // uint32 effect_index = 2;
  if (this->effect_index() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->effect_index(), output);
  }

  // .proto.Vector pos = 8;
  if (this->has_pos()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      8, *this->pos_, output);
  }

  // .proto.Vector rot = 12;
  if (this->has_rot()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      12, *this->rot_, output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AbilityFireworkBornType)
}

::google::protobuf::uint8* AbilityFireworkBornType::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AbilityFireworkBornType)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.Vector move_dir = 1;
  if (this->has_move_dir()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->move_dir_, deterministic, target);
  }

  // uint32 effect_index = 2;
  if (this->effect_index() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->effect_index(), target);
  }

  // .proto.Vector pos = 8;
  if (this->has_pos()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        8, *this->pos_, deterministic, target);
  }

  // .proto.Vector rot = 12;
  if (this->has_rot()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        12, *this->rot_, deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AbilityFireworkBornType)
  return target;
}

size_t AbilityFireworkBornType::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AbilityFireworkBornType)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .proto.Vector move_dir = 1;
  if (this->has_move_dir()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->move_dir_);
  }

  // .proto.Vector pos = 8;
  if (this->has_pos()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->pos_);
  }

  // .proto.Vector rot = 12;
  if (this->has_rot()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->rot_);
  }

  // uint32 effect_index = 2;
  if (this->effect_index() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->effect_index());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AbilityActionSummon::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AbilityActionSummon)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .proto.Vector rot = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(82u /* 82 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_rot()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.Vector pos = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(114u /* 114 & 0xFF */)) {
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
  // @@protoc_insertion_point(parse_success:proto.AbilityActionSummon)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AbilityActionSummon)
  return false;
#undef DO_
}

void AbilityActionSummon::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AbilityActionSummon)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.Vector rot = 10;
  if (this->has_rot()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      10, *this->rot_, output);
  }

  // .proto.Vector pos = 14;
  if (this->has_pos()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      14, *this->pos_, output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AbilityActionSummon)
}

::google::protobuf::uint8* AbilityActionSummon::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AbilityActionSummon)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.Vector rot = 10;
  if (this->has_rot()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        10, *this->rot_, deterministic, target);
  }

  // .proto.Vector pos = 14;
  if (this->has_pos()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        14, *this->pos_, deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AbilityActionSummon)
  return target;
}

size_t AbilityActionSummon::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AbilityActionSummon)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .proto.Vector rot = 10;
  if (this->has_rot()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->rot_);
  }

  // .proto.Vector pos = 14;
  if (this->has_pos()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->pos_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AbilityActionBlink::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AbilityActionBlink)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .proto.Vector rot = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_rot()));
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
  // @@protoc_insertion_point(parse_success:proto.AbilityActionBlink)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AbilityActionBlink)
  return false;
#undef DO_
}

void AbilityActionBlink::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AbilityActionBlink)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.Vector rot = 5;
  if (this->has_rot()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, *this->rot_, output);
  }

  // .proto.Vector pos = 9;
  if (this->has_pos()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      9, *this->pos_, output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AbilityActionBlink)
}

::google::protobuf::uint8* AbilityActionBlink::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AbilityActionBlink)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.Vector rot = 5;
  if (this->has_rot()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        5, *this->rot_, deterministic, target);
  }

  // .proto.Vector pos = 9;
  if (this->has_pos()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        9, *this->pos_, deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AbilityActionBlink)
  return target;
}

size_t AbilityActionBlink::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AbilityActionBlink)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .proto.Vector rot = 5;
  if (this->has_rot()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->rot_);
  }

  // .proto.Vector pos = 9;
  if (this->has_pos()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->pos_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AbilityActionCreateGadget::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AbilityActionCreateGadget)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .proto.Vector rot = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_rot()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 room_id = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &room_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.Vector pos = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(122u /* 122 & 0xFF */)) {
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
  // @@protoc_insertion_point(parse_success:proto.AbilityActionCreateGadget)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AbilityActionCreateGadget)
  return false;
#undef DO_
}

void AbilityActionCreateGadget::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AbilityActionCreateGadget)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.Vector rot = 2;
  if (this->has_rot()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->rot_, output);
  }

  // uint32 room_id = 9;
  if (this->room_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(9, this->room_id(), output);
  }

  // .proto.Vector pos = 15;
  if (this->has_pos()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      15, *this->pos_, output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AbilityActionCreateGadget)
}

::google::protobuf::uint8* AbilityActionCreateGadget::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AbilityActionCreateGadget)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.Vector rot = 2;
  if (this->has_rot()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->rot_, deterministic, target);
  }

  // uint32 room_id = 9;
  if (this->room_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(9, this->room_id(), target);
  }

  // .proto.Vector pos = 15;
  if (this->has_pos()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        15, *this->pos_, deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AbilityActionCreateGadget)
  return target;
}

size_t AbilityActionCreateGadget::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AbilityActionCreateGadget)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .proto.Vector rot = 2;
  if (this->has_rot()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->rot_);
  }

  // .proto.Vector pos = 15;
  if (this->has_pos()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->pos_);
  }

  // uint32 room_id = 9;
  if (this->room_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->room_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AbilityActionSetRandomOverrideMapValue::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AbilityActionSetRandomOverrideMapValue)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // float random_value = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(77u /* 77 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &random_value_)));
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
  // @@protoc_insertion_point(parse_success:proto.AbilityActionSetRandomOverrideMapValue)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AbilityActionSetRandomOverrideMapValue)
  return false;
#undef DO_
}

void AbilityActionSetRandomOverrideMapValue::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AbilityActionSetRandomOverrideMapValue)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // float random_value = 9;
  if (this->random_value() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(9, this->random_value(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AbilityActionSetRandomOverrideMapValue)
}

::google::protobuf::uint8* AbilityActionSetRandomOverrideMapValue::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AbilityActionSetRandomOverrideMapValue)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // float random_value = 9;
  if (this->random_value() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(9, this->random_value(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AbilityActionSetRandomOverrideMapValue)
  return target;
}

size_t AbilityActionSetRandomOverrideMapValue::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AbilityActionSetRandomOverrideMapValue)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // float random_value = 9;
  if (this->random_value() != 0) {
    total_size += 1 + 4;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AbilityActionServerMonsterLog::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AbilityActionServerMonsterLog)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated int32 param_list = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_param_list())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 42u, input, this->mutable_param_list())));
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
  // @@protoc_insertion_point(parse_success:proto.AbilityActionServerMonsterLog)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AbilityActionServerMonsterLog)
  return false;
#undef DO_
}

void AbilityActionServerMonsterLog::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AbilityActionServerMonsterLog)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated int32 param_list = 5;
  if (this->param_list_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(5, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _param_list_cached_byte_size_));
  }
  for (int i = 0, n = this->param_list_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32NoTag(
      this->param_list(i), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AbilityActionServerMonsterLog)
}

::google::protobuf::uint8* AbilityActionServerMonsterLog::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AbilityActionServerMonsterLog)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated int32 param_list = 5;
  if (this->param_list_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      5,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::uint32>(
            _param_list_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32NoTagToArray(this->param_list_, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AbilityActionServerMonsterLog)
  return target;
}

size_t AbilityActionServerMonsterLog::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AbilityActionServerMonsterLog)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated int32 param_list = 5;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      Int32Size(this->param_list_);
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _param_list_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AbilityActionCreateTile::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AbilityActionCreateTile)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .proto.Vector pos = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_pos()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.Vector rot = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(58u /* 58 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_rot()));
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
  // @@protoc_insertion_point(parse_success:proto.AbilityActionCreateTile)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AbilityActionCreateTile)
  return false;
#undef DO_
}

void AbilityActionCreateTile::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AbilityActionCreateTile)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.Vector pos = 2;
  if (this->has_pos()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->pos_, output);
  }

  // .proto.Vector rot = 7;
  if (this->has_rot()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      7, *this->rot_, output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AbilityActionCreateTile)
}

::google::protobuf::uint8* AbilityActionCreateTile::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AbilityActionCreateTile)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.Vector pos = 2;
  if (this->has_pos()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->pos_, deterministic, target);
  }

  // .proto.Vector rot = 7;
  if (this->has_rot()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        7, *this->rot_, deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AbilityActionCreateTile)
  return target;
}

size_t AbilityActionCreateTile::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AbilityActionCreateTile)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .proto.Vector pos = 2;
  if (this->has_pos()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->pos_);
  }

  // .proto.Vector rot = 7;
  if (this->has_rot()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->rot_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AbilityActionDestroyTile::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AbilityActionDestroyTile)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .proto.Vector pos = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(66u /* 66 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_pos()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.Vector rot = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(90u /* 90 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_rot()));
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
  // @@protoc_insertion_point(parse_success:proto.AbilityActionDestroyTile)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AbilityActionDestroyTile)
  return false;
#undef DO_
}

void AbilityActionDestroyTile::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AbilityActionDestroyTile)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.Vector pos = 8;
  if (this->has_pos()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      8, *this->pos_, output);
  }

  // .proto.Vector rot = 11;
  if (this->has_rot()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      11, *this->rot_, output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AbilityActionDestroyTile)
}

::google::protobuf::uint8* AbilityActionDestroyTile::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AbilityActionDestroyTile)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.Vector pos = 8;
  if (this->has_pos()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        8, *this->pos_, deterministic, target);
  }

  // .proto.Vector rot = 11;
  if (this->has_rot()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        11, *this->rot_, deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AbilityActionDestroyTile)
  return target;
}

size_t AbilityActionDestroyTile::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AbilityActionDestroyTile)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .proto.Vector pos = 8;
  if (this->has_pos()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->pos_);
  }

  // .proto.Vector rot = 11;
  if (this->has_rot()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->rot_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AbilityActionFireAfterImgae::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AbilityActionFireAfterImgae)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .proto.Vector dir = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_dir()));
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
  // @@protoc_insertion_point(parse_success:proto.AbilityActionFireAfterImgae)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AbilityActionFireAfterImgae)
  return false;
#undef DO_
}

void AbilityActionFireAfterImgae::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AbilityActionFireAfterImgae)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.Vector dir = 2;
  if (this->has_dir()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->dir_, output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AbilityActionFireAfterImgae)
}

::google::protobuf::uint8* AbilityActionFireAfterImgae::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AbilityActionFireAfterImgae)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.Vector dir = 2;
  if (this->has_dir()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->dir_, deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AbilityActionFireAfterImgae)
  return target;
}

size_t AbilityActionFireAfterImgae::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AbilityActionFireAfterImgae)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .proto.Vector dir = 2;
  if (this->has_dir()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->dir_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AbilityApplyLevelModifier::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AbilityApplyLevelModifier)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 apply_entity_id = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &apply_entity_id_)));
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
  // @@protoc_insertion_point(parse_success:proto.AbilityApplyLevelModifier)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AbilityApplyLevelModifier)
  return false;
#undef DO_
}

void AbilityApplyLevelModifier::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AbilityApplyLevelModifier)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 apply_entity_id = 6;
  if (this->apply_entity_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->apply_entity_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AbilityApplyLevelModifier)
}

::google::protobuf::uint8* AbilityApplyLevelModifier::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AbilityApplyLevelModifier)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 apply_entity_id = 6;
  if (this->apply_entity_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, this->apply_entity_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AbilityApplyLevelModifier)
  return target;
}

size_t AbilityApplyLevelModifier::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AbilityApplyLevelModifier)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 apply_entity_id = 6;
  if (this->apply_entity_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->apply_entity_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AbilityActionGenerateElemBall::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AbilityActionGenerateElemBall)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 room_id = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &room_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.Vector pos = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(58u /* 58 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_pos()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.Vector rot = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(122u /* 122 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_rot()));
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
  // @@protoc_insertion_point(parse_success:proto.AbilityActionGenerateElemBall)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AbilityActionGenerateElemBall)
  return false;
#undef DO_
}

void AbilityActionGenerateElemBall::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AbilityActionGenerateElemBall)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 room_id = 6;
  if (this->room_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->room_id(), output);
  }

  // .proto.Vector pos = 7;
  if (this->has_pos()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      7, *this->pos_, output);
  }

  // .proto.Vector rot = 15;
  if (this->has_rot()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      15, *this->rot_, output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AbilityActionGenerateElemBall)
}

::google::protobuf::uint8* AbilityActionGenerateElemBall::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AbilityActionGenerateElemBall)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 room_id = 6;
  if (this->room_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, this->room_id(), target);
  }

  // .proto.Vector pos = 7;
  if (this->has_pos()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        7, *this->pos_, deterministic, target);
  }

  // .proto.Vector rot = 15;
  if (this->has_rot()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        15, *this->rot_, deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AbilityActionGenerateElemBall)
  return target;
}

size_t AbilityActionGenerateElemBall::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AbilityActionGenerateElemBall)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .proto.Vector pos = 7;
  if (this->has_pos()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->pos_);
  }

  // .proto.Vector rot = 15;
  if (this->has_rot()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->rot_);
  }

  // uint32 room_id = 6;
  if (this->room_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->room_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AbilityActionDeductStamina::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AbilityActionDeductStamina)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bool is_swim = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_swim_)));
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
  // @@protoc_insertion_point(parse_success:proto.AbilityActionDeductStamina)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AbilityActionDeductStamina)
  return false;
#undef DO_
}

void AbilityActionDeductStamina::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AbilityActionDeductStamina)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool is_swim = 1;
  if (this->is_swim() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->is_swim(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AbilityActionDeductStamina)
}

::google::protobuf::uint8* AbilityActionDeductStamina::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AbilityActionDeductStamina)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool is_swim = 1;
  if (this->is_swim() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->is_swim(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AbilityActionDeductStamina)
  return target;
}

size_t AbilityActionDeductStamina::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AbilityActionDeductStamina)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // bool is_swim = 1;
  if (this->is_swim() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AbilityActionHitEffect::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AbilityActionHitEffect)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 trigger_id = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(112u /* 112 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &trigger_id_)));
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
  // @@protoc_insertion_point(parse_success:proto.AbilityActionHitEffect)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AbilityActionHitEffect)
  return false;
#undef DO_
}

void AbilityActionHitEffect::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AbilityActionHitEffect)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 trigger_id = 14;
  if (this->trigger_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(14, this->trigger_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AbilityActionHitEffect)
}

::google::protobuf::uint8* AbilityActionHitEffect::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AbilityActionHitEffect)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 trigger_id = 14;
  if (this->trigger_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(14, this->trigger_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AbilityActionHitEffect)
  return target;
}

size_t AbilityActionHitEffect::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AbilityActionHitEffect)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 trigger_id = 14;
  if (this->trigger_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->trigger_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AbilityActionSetBulletTrackTarget::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AbilityActionSetBulletTrackTarget)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 chased_entity_id = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &chased_entity_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 lock_point_index = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &lock_point_index_)));
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
  // @@protoc_insertion_point(parse_success:proto.AbilityActionSetBulletTrackTarget)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AbilityActionSetBulletTrackTarget)
  return false;
#undef DO_
}

void AbilityActionSetBulletTrackTarget::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AbilityActionSetBulletTrackTarget)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 chased_entity_id = 5;
  if (this->chased_entity_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->chased_entity_id(), output);
  }

  // uint32 lock_point_index = 7;
  if (this->lock_point_index() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->lock_point_index(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AbilityActionSetBulletTrackTarget)
}

::google::protobuf::uint8* AbilityActionSetBulletTrackTarget::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AbilityActionSetBulletTrackTarget)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 chased_entity_id = 5;
  if (this->chased_entity_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->chased_entity_id(), target);
  }

  // uint32 lock_point_index = 7;
  if (this->lock_point_index() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(7, this->lock_point_index(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AbilityActionSetBulletTrackTarget)
  return target;
}

size_t AbilityActionSetBulletTrackTarget::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AbilityActionSetBulletTrackTarget)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 chased_entity_id = 5;
  if (this->chased_entity_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->chased_entity_id());
  }

  // uint32 lock_point_index = 7;
  if (this->lock_point_index() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->lock_point_index());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AbilityMixinEmpty::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AbilityMixinEmpty)
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
  // @@protoc_insertion_point(parse_success:proto.AbilityMixinEmpty)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AbilityMixinEmpty)
  return false;
#undef DO_
}

void AbilityMixinEmpty::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AbilityMixinEmpty)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AbilityMixinEmpty)
}

::google::protobuf::uint8* AbilityMixinEmpty::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AbilityMixinEmpty)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AbilityMixinEmpty)
  return target;
}

size_t AbilityMixinEmpty::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AbilityMixinEmpty)
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

bool AbilityMixinAvatarSteerByCamera::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AbilityMixinAvatarSteerByCamera)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .proto.Vector target_dir = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_target_dir()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.Vector target_pos = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_target_pos()));
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
  // @@protoc_insertion_point(parse_success:proto.AbilityMixinAvatarSteerByCamera)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AbilityMixinAvatarSteerByCamera)
  return false;
#undef DO_
}

void AbilityMixinAvatarSteerByCamera::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AbilityMixinAvatarSteerByCamera)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.Vector target_dir = 2;
  if (this->has_target_dir()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->target_dir_, output);
  }

  // .proto.Vector target_pos = 4;
  if (this->has_target_pos()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, *this->target_pos_, output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AbilityMixinAvatarSteerByCamera)
}

::google::protobuf::uint8* AbilityMixinAvatarSteerByCamera::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AbilityMixinAvatarSteerByCamera)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.Vector target_dir = 2;
  if (this->has_target_dir()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->target_dir_, deterministic, target);
  }

  // .proto.Vector target_pos = 4;
  if (this->has_target_pos()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        4, *this->target_pos_, deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AbilityMixinAvatarSteerByCamera)
  return target;
}

size_t AbilityMixinAvatarSteerByCamera::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AbilityMixinAvatarSteerByCamera)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .proto.Vector target_dir = 2;
  if (this->has_target_dir()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->target_dir_);
  }

  // .proto.Vector target_pos = 4;
  if (this->has_target_pos()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->target_pos_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AbilityMixinWindZone::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AbilityMixinWindZone)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated uint32 entity_ids = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(90u /* 90 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_entity_ids())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(88u /* 88 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 1, 90u, input, this->mutable_entity_ids())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated uint32 zone_id_list = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(98u /* 98 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_zone_id_list())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(96u /* 96 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 1, 98u, input, this->mutable_zone_id_list())));
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
  // @@protoc_insertion_point(parse_success:proto.AbilityMixinWindZone)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AbilityMixinWindZone)
  return false;
#undef DO_
}

void AbilityMixinWindZone::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AbilityMixinWindZone)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated uint32 entity_ids = 11;
  if (this->entity_ids_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(11, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _entity_ids_cached_byte_size_));
  }
  for (int i = 0, n = this->entity_ids_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32NoTag(
      this->entity_ids(i), output);
  }

  // repeated uint32 zone_id_list = 12;
  if (this->zone_id_list_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(12, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _zone_id_list_cached_byte_size_));
  }
  for (int i = 0, n = this->zone_id_list_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32NoTag(
      this->zone_id_list(i), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AbilityMixinWindZone)
}

::google::protobuf::uint8* AbilityMixinWindZone::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AbilityMixinWindZone)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated uint32 entity_ids = 11;
  if (this->entity_ids_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      11,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::uint32>(
            _entity_ids_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt32NoTagToArray(this->entity_ids_, target);
  }

  // repeated uint32 zone_id_list = 12;
  if (this->zone_id_list_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      12,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::uint32>(
            _zone_id_list_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt32NoTagToArray(this->zone_id_list_, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AbilityMixinWindZone)
  return target;
}

size_t AbilityMixinWindZone::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AbilityMixinWindZone)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated uint32 entity_ids = 11;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      UInt32Size(this->entity_ids_);
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _entity_ids_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // repeated uint32 zone_id_list = 12;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      UInt32Size(this->zone_id_list_);
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _zone_id_list_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AbilityMixinCostStamina::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AbilityMixinCostStamina)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bool is_swim = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(104u /* 104 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_swim_)));
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
  // @@protoc_insertion_point(parse_success:proto.AbilityMixinCostStamina)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AbilityMixinCostStamina)
  return false;
#undef DO_
}

void AbilityMixinCostStamina::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AbilityMixinCostStamina)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool is_swim = 13;
  if (this->is_swim() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(13, this->is_swim(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AbilityMixinCostStamina)
}

::google::protobuf::uint8* AbilityMixinCostStamina::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AbilityMixinCostStamina)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool is_swim = 13;
  if (this->is_swim() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(13, this->is_swim(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AbilityMixinCostStamina)
  return target;
}

size_t AbilityMixinCostStamina::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AbilityMixinCostStamina)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // bool is_swim = 13;
  if (this->is_swim() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AbilityMixinEliteShield::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AbilityMixinEliteShield)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // float sub_shield = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(109u /* 109 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &sub_shield_)));
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
  // @@protoc_insertion_point(parse_success:proto.AbilityMixinEliteShield)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AbilityMixinEliteShield)
  return false;
#undef DO_
}

void AbilityMixinEliteShield::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AbilityMixinEliteShield)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // float sub_shield = 13;
  if (this->sub_shield() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(13, this->sub_shield(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AbilityMixinEliteShield)
}

::google::protobuf::uint8* AbilityMixinEliteShield::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AbilityMixinEliteShield)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // float sub_shield = 13;
  if (this->sub_shield() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(13, this->sub_shield(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AbilityMixinEliteShield)
  return target;
}

size_t AbilityMixinEliteShield::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AbilityMixinEliteShield)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // float sub_shield = 13;
  if (this->sub_shield() != 0) {
    total_size += 1 + 4;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AbilityMixinElementShield::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AbilityMixinElementShield)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 absorb_type = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &absorb_type_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float shield = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(21u /* 21 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &shield_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float max_shield = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(69u /* 69 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &max_shield_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_shield_broken = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(96u /* 96 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_shield_broken_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float sub_shield = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(109u /* 109 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &sub_shield_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 player_num = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(120u /* 120 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &player_num_)));
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
  // @@protoc_insertion_point(parse_success:proto.AbilityMixinElementShield)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AbilityMixinElementShield)
  return false;
#undef DO_
}

void AbilityMixinElementShield::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AbilityMixinElementShield)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 absorb_type = 1;
  if (this->absorb_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->absorb_type(), output);
  }

  // float shield = 2;
  if (this->shield() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(2, this->shield(), output);
  }

  // float max_shield = 8;
  if (this->max_shield() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(8, this->max_shield(), output);
  }

  // bool is_shield_broken = 12;
  if (this->is_shield_broken() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(12, this->is_shield_broken(), output);
  }

  // float sub_shield = 13;
  if (this->sub_shield() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(13, this->sub_shield(), output);
  }

  // uint32 player_num = 15;
  if (this->player_num() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(15, this->player_num(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AbilityMixinElementShield)
}

::google::protobuf::uint8* AbilityMixinElementShield::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AbilityMixinElementShield)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 absorb_type = 1;
  if (this->absorb_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->absorb_type(), target);
  }

  // float shield = 2;
  if (this->shield() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(2, this->shield(), target);
  }

  // float max_shield = 8;
  if (this->max_shield() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(8, this->max_shield(), target);
  }

  // bool is_shield_broken = 12;
  if (this->is_shield_broken() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(12, this->is_shield_broken(), target);
  }

  // float sub_shield = 13;
  if (this->sub_shield() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(13, this->sub_shield(), target);
  }

  // uint32 player_num = 15;
  if (this->player_num() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(15, this->player_num(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AbilityMixinElementShield)
  return target;
}

size_t AbilityMixinElementShield::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AbilityMixinElementShield)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 absorb_type = 1;
  if (this->absorb_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->absorb_type());
  }

  // float shield = 2;
  if (this->shield() != 0) {
    total_size += 1 + 4;
  }

  // float max_shield = 8;
  if (this->max_shield() != 0) {
    total_size += 1 + 4;
  }

  // bool is_shield_broken = 12;
  if (this->is_shield_broken() != 0) {
    total_size += 1 + 1;
  }

  // float sub_shield = 13;
  if (this->sub_shield() != 0) {
    total_size += 1 + 4;
  }

  // uint32 player_num = 15;
  if (this->player_num() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->player_num());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AbilityMixinGlobalShield::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AbilityMixinGlobalShield)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // float sub_shield = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(21u /* 21 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &sub_shield_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float max_shield = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(29u /* 29 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &max_shield_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string shield_effect_name = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_shield_effect_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->shield_effect_name().data(), static_cast<int>(this->shield_effect_name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.AbilityMixinGlobalShield.shield_effect_name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float height_offset = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(53u /* 53 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &height_offset_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 avatar_id = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &avatar_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_create_effect = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(104u /* 104 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_create_effect_)));
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
  // @@protoc_insertion_point(parse_success:proto.AbilityMixinGlobalShield)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AbilityMixinGlobalShield)
  return false;
#undef DO_
}

void AbilityMixinGlobalShield::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AbilityMixinGlobalShield)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // float sub_shield = 2;
  if (this->sub_shield() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(2, this->sub_shield(), output);
  }

  // float max_shield = 3;
  if (this->max_shield() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(3, this->max_shield(), output);
  }

  // string shield_effect_name = 5;
  if (this->shield_effect_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->shield_effect_name().data(), static_cast<int>(this->shield_effect_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.AbilityMixinGlobalShield.shield_effect_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      5, this->shield_effect_name(), output);
  }

  // float height_offset = 6;
  if (this->height_offset() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(6, this->height_offset(), output);
  }

  // uint32 avatar_id = 7;
  if (this->avatar_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->avatar_id(), output);
  }

  // bool is_create_effect = 13;
  if (this->is_create_effect() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(13, this->is_create_effect(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AbilityMixinGlobalShield)
}

::google::protobuf::uint8* AbilityMixinGlobalShield::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AbilityMixinGlobalShield)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // float sub_shield = 2;
  if (this->sub_shield() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(2, this->sub_shield(), target);
  }

  // float max_shield = 3;
  if (this->max_shield() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(3, this->max_shield(), target);
  }

  // string shield_effect_name = 5;
  if (this->shield_effect_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->shield_effect_name().data(), static_cast<int>(this->shield_effect_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.AbilityMixinGlobalShield.shield_effect_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->shield_effect_name(), target);
  }

  // float height_offset = 6;
  if (this->height_offset() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(6, this->height_offset(), target);
  }

  // uint32 avatar_id = 7;
  if (this->avatar_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(7, this->avatar_id(), target);
  }

  // bool is_create_effect = 13;
  if (this->is_create_effect() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(13, this->is_create_effect(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AbilityMixinGlobalShield)
  return target;
}

size_t AbilityMixinGlobalShield::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AbilityMixinGlobalShield)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string shield_effect_name = 5;
  if (this->shield_effect_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->shield_effect_name());
  }

  // float sub_shield = 2;
  if (this->sub_shield() != 0) {
    total_size += 1 + 4;
  }

  // float max_shield = 3;
  if (this->max_shield() != 0) {
    total_size += 1 + 4;
  }

  // float height_offset = 6;
  if (this->height_offset() != 0) {
    total_size += 1 + 4;
  }

  // uint32 avatar_id = 7;
  if (this->avatar_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->avatar_id());
  }

  // bool is_create_effect = 13;
  if (this->is_create_effect() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AbilityMixinShieldBar::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AbilityMixinShieldBar)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 element_type = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &element_type_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 player_num = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &player_num_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float shield = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(69u /* 69 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &shield_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float max_shield = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(93u /* 93 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &max_shield_)));
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
  // @@protoc_insertion_point(parse_success:proto.AbilityMixinShieldBar)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AbilityMixinShieldBar)
  return false;
#undef DO_
}

void AbilityMixinShieldBar::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AbilityMixinShieldBar)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 element_type = 1;
  if (this->element_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->element_type(), output);
  }

  // uint32 player_num = 7;
  if (this->player_num() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->player_num(), output);
  }

  // float shield = 8;
  if (this->shield() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(8, this->shield(), output);
  }

  // float max_shield = 11;
  if (this->max_shield() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(11, this->max_shield(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AbilityMixinShieldBar)
}

::google::protobuf::uint8* AbilityMixinShieldBar::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AbilityMixinShieldBar)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 element_type = 1;
  if (this->element_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->element_type(), target);
  }

  // uint32 player_num = 7;
  if (this->player_num() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(7, this->player_num(), target);
  }

  // float shield = 8;
  if (this->shield() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(8, this->shield(), target);
  }

  // float max_shield = 11;
  if (this->max_shield() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(11, this->max_shield(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AbilityMixinShieldBar)
  return target;
}

size_t AbilityMixinShieldBar::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AbilityMixinShieldBar)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 element_type = 1;
  if (this->element_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->element_type());
  }

  // uint32 player_num = 7;
  if (this->player_num() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->player_num());
  }

  // float shield = 8;
  if (this->shield() != 0) {
    total_size += 1 + 4;
  }

  // float max_shield = 11;
  if (this->max_shield() != 0) {
    total_size += 1 + 4;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AbilityMixinWindSeedSpawner_AddSignal::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AbilityMixinWindSeedSpawner.AddSignal)
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
  // @@protoc_insertion_point(parse_success:proto.AbilityMixinWindSeedSpawner.AddSignal)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AbilityMixinWindSeedSpawner.AddSignal)
  return false;
#undef DO_
}

void AbilityMixinWindSeedSpawner_AddSignal::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AbilityMixinWindSeedSpawner.AddSignal)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AbilityMixinWindSeedSpawner.AddSignal)
}

::google::protobuf::uint8* AbilityMixinWindSeedSpawner_AddSignal::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AbilityMixinWindSeedSpawner.AddSignal)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AbilityMixinWindSeedSpawner.AddSignal)
  return target;
}

size_t AbilityMixinWindSeedSpawner_AddSignal::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AbilityMixinWindSeedSpawner.AddSignal)
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

bool AbilityMixinWindSeedSpawner_RefreshSeed::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AbilityMixinWindSeedSpawner.RefreshSeed)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .proto.Vector pos_list = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_pos_list()));
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
  // @@protoc_insertion_point(parse_success:proto.AbilityMixinWindSeedSpawner.RefreshSeed)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AbilityMixinWindSeedSpawner.RefreshSeed)
  return false;
#undef DO_
}

void AbilityMixinWindSeedSpawner_RefreshSeed::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AbilityMixinWindSeedSpawner.RefreshSeed)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.Vector pos_list = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->pos_list_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->pos_list(static_cast<int>(i)), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AbilityMixinWindSeedSpawner.RefreshSeed)
}

::google::protobuf::uint8* AbilityMixinWindSeedSpawner_RefreshSeed::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AbilityMixinWindSeedSpawner.RefreshSeed)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.Vector pos_list = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->pos_list_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, this->pos_list(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AbilityMixinWindSeedSpawner.RefreshSeed)
  return target;
}

size_t AbilityMixinWindSeedSpawner_RefreshSeed::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AbilityMixinWindSeedSpawner.RefreshSeed)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .proto.Vector pos_list = 1;
  {
    unsigned int count = static_cast<unsigned int>(this->pos_list_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->pos_list(static_cast<int>(i)));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AbilityMixinWindSeedSpawner_CatchSeed::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AbilityMixinWindSeedSpawner.CatchSeed)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 entity_id = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &entity_id_)));
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
  // @@protoc_insertion_point(parse_success:proto.AbilityMixinWindSeedSpawner.CatchSeed)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AbilityMixinWindSeedSpawner.CatchSeed)
  return false;
#undef DO_
}

void AbilityMixinWindSeedSpawner_CatchSeed::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AbilityMixinWindSeedSpawner.CatchSeed)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 entity_id = 5;
  if (this->entity_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->entity_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AbilityMixinWindSeedSpawner.CatchSeed)
}

::google::protobuf::uint8* AbilityMixinWindSeedSpawner_CatchSeed::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AbilityMixinWindSeedSpawner.CatchSeed)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 entity_id = 5;
  if (this->entity_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->entity_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AbilityMixinWindSeedSpawner.CatchSeed)
  return target;
}

size_t AbilityMixinWindSeedSpawner_CatchSeed::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AbilityMixinWindSeedSpawner.CatchSeed)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 entity_id = 5;
  if (this->entity_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->entity_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AbilityMixinWindSeedSpawner::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AbilityMixinWindSeedSpawner)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .proto.AbilityMixinWindSeedSpawner.RefreshSeed refresh_seed = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_refresh_seed()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.AbilityMixinWindSeedSpawner.CatchSeed catch_seed = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_catch_seed()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.AbilityMixinWindSeedSpawner.AddSignal add_signal = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(106u /* 106 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_add_signal()));
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
  // @@protoc_insertion_point(parse_success:proto.AbilityMixinWindSeedSpawner)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AbilityMixinWindSeedSpawner)
  return false;
#undef DO_
}

void AbilityMixinWindSeedSpawner::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AbilityMixinWindSeedSpawner)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.AbilityMixinWindSeedSpawner.RefreshSeed refresh_seed = 3;
  if (has_refresh_seed()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, *cmd_.refresh_seed_, output);
  }

  // .proto.AbilityMixinWindSeedSpawner.CatchSeed catch_seed = 4;
  if (has_catch_seed()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, *cmd_.catch_seed_, output);
  }

  // .proto.AbilityMixinWindSeedSpawner.AddSignal add_signal = 13;
  if (has_add_signal()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      13, *cmd_.add_signal_, output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AbilityMixinWindSeedSpawner)
}

::google::protobuf::uint8* AbilityMixinWindSeedSpawner::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AbilityMixinWindSeedSpawner)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.AbilityMixinWindSeedSpawner.RefreshSeed refresh_seed = 3;
  if (has_refresh_seed()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, *cmd_.refresh_seed_, deterministic, target);
  }

  // .proto.AbilityMixinWindSeedSpawner.CatchSeed catch_seed = 4;
  if (has_catch_seed()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        4, *cmd_.catch_seed_, deterministic, target);
  }

  // .proto.AbilityMixinWindSeedSpawner.AddSignal add_signal = 13;
  if (has_add_signal()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        13, *cmd_.add_signal_, deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AbilityMixinWindSeedSpawner)
  return target;
}

size_t AbilityMixinWindSeedSpawner::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AbilityMixinWindSeedSpawner)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  switch (cmd_case()) {
    // .proto.AbilityMixinWindSeedSpawner.AddSignal add_signal = 13;
    case kAddSignal: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.add_signal_);
      break;
    }
    // .proto.AbilityMixinWindSeedSpawner.RefreshSeed refresh_seed = 3;
    case kRefreshSeed: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.refresh_seed_);
      break;
    }
    // .proto.AbilityMixinWindSeedSpawner.CatchSeed catch_seed = 4;
    case kCatchSeed: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.catch_seed_);
      break;
    }
    case CMD_NOT_SET: {
      break;
    }
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AbilityMixinDoActionByElementReaction::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AbilityMixinDoActionByElementReaction)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 target_entity_id = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(80u /* 80 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &target_entity_id_)));
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
  // @@protoc_insertion_point(parse_success:proto.AbilityMixinDoActionByElementReaction)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AbilityMixinDoActionByElementReaction)
  return false;
#undef DO_
}

void AbilityMixinDoActionByElementReaction::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AbilityMixinDoActionByElementReaction)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 target_entity_id = 10;
  if (this->target_entity_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(10, this->target_entity_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AbilityMixinDoActionByElementReaction)
}

::google::protobuf::uint8* AbilityMixinDoActionByElementReaction::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AbilityMixinDoActionByElementReaction)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 target_entity_id = 10;
  if (this->target_entity_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(10, this->target_entity_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AbilityMixinDoActionByElementReaction)
  return target;
}

size_t AbilityMixinDoActionByElementReaction::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AbilityMixinDoActionByElementReaction)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 target_entity_id = 10;
  if (this->target_entity_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->target_entity_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AbilityMixinFieldEntityCountChange::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AbilityMixinFieldEntityCountChange)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 field_entity_count = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &field_entity_count_)));
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
  // @@protoc_insertion_point(parse_success:proto.AbilityMixinFieldEntityCountChange)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AbilityMixinFieldEntityCountChange)
  return false;
#undef DO_
}

void AbilityMixinFieldEntityCountChange::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AbilityMixinFieldEntityCountChange)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 field_entity_count = 4;
  if (this->field_entity_count() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->field_entity_count(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AbilityMixinFieldEntityCountChange)
}

::google::protobuf::uint8* AbilityMixinFieldEntityCountChange::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AbilityMixinFieldEntityCountChange)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 field_entity_count = 4;
  if (this->field_entity_count() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->field_entity_count(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AbilityMixinFieldEntityCountChange)
  return target;
}

size_t AbilityMixinFieldEntityCountChange::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AbilityMixinFieldEntityCountChange)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 field_entity_count = 4;
  if (this->field_entity_count() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->field_entity_count());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AbilityMixinScenePropSync::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AbilityMixinScenePropSync)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bool is_clear_all = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_clear_all_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated int64 delete_id_list = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(82u /* 82 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, this->mutable_delete_id_list())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(80u /* 80 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 1, 82u, input, this->mutable_delete_id_list())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .proto.MassivePropSyncInfo massive_prop_list = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(90u /* 90 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_massive_prop_list()));
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
  // @@protoc_insertion_point(parse_success:proto.AbilityMixinScenePropSync)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AbilityMixinScenePropSync)
  return false;
#undef DO_
}

void AbilityMixinScenePropSync::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AbilityMixinScenePropSync)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool is_clear_all = 2;
  if (this->is_clear_all() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->is_clear_all(), output);
  }

  // repeated int64 delete_id_list = 10;
  if (this->delete_id_list_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(10, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _delete_id_list_cached_byte_size_));
  }
  for (int i = 0, n = this->delete_id_list_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64NoTag(
      this->delete_id_list(i), output);
  }

  // repeated .proto.MassivePropSyncInfo massive_prop_list = 11;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->massive_prop_list_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      11, this->massive_prop_list(static_cast<int>(i)), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AbilityMixinScenePropSync)
}

::google::protobuf::uint8* AbilityMixinScenePropSync::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AbilityMixinScenePropSync)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool is_clear_all = 2;
  if (this->is_clear_all() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(2, this->is_clear_all(), target);
  }

  // repeated int64 delete_id_list = 10;
  if (this->delete_id_list_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      10,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::uint32>(
            _delete_id_list_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt64NoTagToArray(this->delete_id_list_, target);
  }

  // repeated .proto.MassivePropSyncInfo massive_prop_list = 11;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->massive_prop_list_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        11, this->massive_prop_list(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AbilityMixinScenePropSync)
  return target;
}

size_t AbilityMixinScenePropSync::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AbilityMixinScenePropSync)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated int64 delete_id_list = 10;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      Int64Size(this->delete_id_list_);
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _delete_id_list_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // repeated .proto.MassivePropSyncInfo massive_prop_list = 11;
  {
    unsigned int count = static_cast<unsigned int>(this->massive_prop_list_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->massive_prop_list(static_cast<int>(i)));
    }
  }

  // bool is_clear_all = 2;
  if (this->is_clear_all() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AbilityMixinWidgetMpSupport::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AbilityMixinWidgetMpSupport)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 target_entity_id = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &target_entity_id_)));
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
  // @@protoc_insertion_point(parse_success:proto.AbilityMixinWidgetMpSupport)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AbilityMixinWidgetMpSupport)
  return false;
#undef DO_
}

void AbilityMixinWidgetMpSupport::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AbilityMixinWidgetMpSupport)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 target_entity_id = 7;
  if (this->target_entity_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->target_entity_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AbilityMixinWidgetMpSupport)
}

::google::protobuf::uint8* AbilityMixinWidgetMpSupport::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AbilityMixinWidgetMpSupport)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 target_entity_id = 7;
  if (this->target_entity_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(7, this->target_entity_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AbilityMixinWidgetMpSupport)
  return target;
}

size_t AbilityMixinWidgetMpSupport::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AbilityMixinWidgetMpSupport)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 target_entity_id = 7;
  if (this->target_entity_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->target_entity_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AbilityMixinDoActionBySelfModifierElementDurabilityRatio::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AbilityMixinDoActionBySelfModifierElementDurabilityRatio)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // float last_duability_ratio = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(13u /* 13 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &last_duability_ratio_)));
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
  // @@protoc_insertion_point(parse_success:proto.AbilityMixinDoActionBySelfModifierElementDurabilityRatio)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AbilityMixinDoActionBySelfModifierElementDurabilityRatio)
  return false;
#undef DO_
}

void AbilityMixinDoActionBySelfModifierElementDurabilityRatio::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AbilityMixinDoActionBySelfModifierElementDurabilityRatio)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // float last_duability_ratio = 1;
  if (this->last_duability_ratio() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(1, this->last_duability_ratio(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AbilityMixinDoActionBySelfModifierElementDurabilityRatio)
}

::google::protobuf::uint8* AbilityMixinDoActionBySelfModifierElementDurabilityRatio::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AbilityMixinDoActionBySelfModifierElementDurabilityRatio)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // float last_duability_ratio = 1;
  if (this->last_duability_ratio() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(1, this->last_duability_ratio(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AbilityMixinDoActionBySelfModifierElementDurabilityRatio)
  return target;
}

size_t AbilityMixinDoActionBySelfModifierElementDurabilityRatio::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AbilityMixinDoActionBySelfModifierElementDurabilityRatio)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // float last_duability_ratio = 1;
  if (this->last_duability_ratio() != 0) {
    total_size += 1 + 4;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AbilityMixinFireworksLauncher::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AbilityMixinFireworksLauncher)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 turn_index = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &turn_index_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 phase = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &phase_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 start_count_down_time = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &start_count_down_time_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated uint32 fireworks_config = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(90u /* 90 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_fireworks_config())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(88u /* 88 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 1, 90u, input, this->mutable_fireworks_config())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 fired_bullet_count = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(104u /* 104 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &fired_bullet_count_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 invoke_type = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(120u /* 120 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &invoke_type_)));
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
  // @@protoc_insertion_point(parse_success:proto.AbilityMixinFireworksLauncher)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AbilityMixinFireworksLauncher)
  return false;
#undef DO_
}

void AbilityMixinFireworksLauncher::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AbilityMixinFireworksLauncher)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 turn_index = 2;
  if (this->turn_index() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->turn_index(), output);
  }

  // uint32 phase = 4;
  if (this->phase() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->phase(), output);
  }

  // uint32 start_count_down_time = 6;
  if (this->start_count_down_time() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->start_count_down_time(), output);
  }

  // repeated uint32 fireworks_config = 11;
  if (this->fireworks_config_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(11, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _fireworks_config_cached_byte_size_));
  }
  for (int i = 0, n = this->fireworks_config_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32NoTag(
      this->fireworks_config(i), output);
  }

  // uint32 fired_bullet_count = 13;
  if (this->fired_bullet_count() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(13, this->fired_bullet_count(), output);
  }

  // uint32 invoke_type = 15;
  if (this->invoke_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(15, this->invoke_type(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AbilityMixinFireworksLauncher)
}

::google::protobuf::uint8* AbilityMixinFireworksLauncher::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AbilityMixinFireworksLauncher)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 turn_index = 2;
  if (this->turn_index() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->turn_index(), target);
  }

  // uint32 phase = 4;
  if (this->phase() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->phase(), target);
  }

  // uint32 start_count_down_time = 6;
  if (this->start_count_down_time() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, this->start_count_down_time(), target);
  }

  // repeated uint32 fireworks_config = 11;
  if (this->fireworks_config_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      11,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::uint32>(
            _fireworks_config_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt32NoTagToArray(this->fireworks_config_, target);
  }

  // uint32 fired_bullet_count = 13;
  if (this->fired_bullet_count() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(13, this->fired_bullet_count(), target);
  }

  // uint32 invoke_type = 15;
  if (this->invoke_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(15, this->invoke_type(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AbilityMixinFireworksLauncher)
  return target;
}

size_t AbilityMixinFireworksLauncher::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AbilityMixinFireworksLauncher)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated uint32 fireworks_config = 11;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      UInt32Size(this->fireworks_config_);
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _fireworks_config_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // uint32 turn_index = 2;
  if (this->turn_index() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->turn_index());
  }

  // uint32 phase = 4;
  if (this->phase() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->phase());
  }

  // uint32 invoke_type = 15;
  if (this->invoke_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->invoke_type());
  }

  // uint32 start_count_down_time = 6;
  if (this->start_count_down_time() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->start_count_down_time());
  }

  // uint32 fired_bullet_count = 13;
  if (this->fired_bullet_count() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->fired_bullet_count());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AbilityMixinUGCTimeControl::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AbilityMixinUGCTimeControl)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint64 start_move_time_ms = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &start_move_time_ms_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 start_move_time = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &start_move_time_)));
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
  // @@protoc_insertion_point(parse_success:proto.AbilityMixinUGCTimeControl)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AbilityMixinUGCTimeControl)
  return false;
#undef DO_
}

void AbilityMixinUGCTimeControl::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AbilityMixinUGCTimeControl)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 start_move_time_ms = 5;
  if (this->start_move_time_ms() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(5, this->start_move_time_ms(), output);
  }

  // uint32 start_move_time = 6;
  if (this->start_move_time() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->start_move_time(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AbilityMixinUGCTimeControl)
}

::google::protobuf::uint8* AbilityMixinUGCTimeControl::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AbilityMixinUGCTimeControl)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 start_move_time_ms = 5;
  if (this->start_move_time_ms() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(5, this->start_move_time_ms(), target);
  }

  // uint32 start_move_time = 6;
  if (this->start_move_time() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, this->start_move_time(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AbilityMixinUGCTimeControl)
  return target;
}

size_t AbilityMixinUGCTimeControl::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AbilityMixinUGCTimeControl)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 start_move_time = 6;
  if (this->start_move_time() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->start_move_time());
  }

  // uint64 start_move_time_ms = 5;
  if (this->start_move_time_ms() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->start_move_time_ms());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AbilityMixinUIInteract::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AbilityMixinUIInteract)
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
  // @@protoc_insertion_point(parse_success:proto.AbilityMixinUIInteract)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AbilityMixinUIInteract)
  return false;
#undef DO_
}

void AbilityMixinUIInteract::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AbilityMixinUIInteract)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AbilityMixinUIInteract)
}

::google::protobuf::uint8* AbilityMixinUIInteract::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AbilityMixinUIInteract)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AbilityMixinUIInteract)
  return target;
}

size_t AbilityMixinUIInteract::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AbilityMixinUIInteract)
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

bool AbilityMixinAvatarCombat::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AbilityMixinAvatarCombat)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bool is_enter_combat = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(120u /* 120 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_enter_combat_)));
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
  // @@protoc_insertion_point(parse_success:proto.AbilityMixinAvatarCombat)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AbilityMixinAvatarCombat)
  return false;
#undef DO_
}

void AbilityMixinAvatarCombat::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AbilityMixinAvatarCombat)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool is_enter_combat = 15;
  if (this->is_enter_combat() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(15, this->is_enter_combat(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AbilityMixinAvatarCombat)
}

::google::protobuf::uint8* AbilityMixinAvatarCombat::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AbilityMixinAvatarCombat)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool is_enter_combat = 15;
  if (this->is_enter_combat() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(15, this->is_enter_combat(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AbilityMixinAvatarCombat)
  return target;
}

size_t AbilityMixinAvatarCombat::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AbilityMixinAvatarCombat)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // bool is_enter_combat = 15;
  if (this->is_enter_combat() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AbilityMixinShootFromCamera::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AbilityMixinShootFromCamera)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .proto.Vector init_pos = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_init_pos()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.Vector forward = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(74u /* 74 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_forward()));
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
  // @@protoc_insertion_point(parse_success:proto.AbilityMixinShootFromCamera)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AbilityMixinShootFromCamera)
  return false;
#undef DO_
}

void AbilityMixinShootFromCamera::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AbilityMixinShootFromCamera)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.Vector init_pos = 6;
  if (this->has_init_pos()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      6, *this->init_pos_, output);
  }

  // .proto.Vector forward = 9;
  if (this->has_forward()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      9, *this->forward_, output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AbilityMixinShootFromCamera)
}

::google::protobuf::uint8* AbilityMixinShootFromCamera::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AbilityMixinShootFromCamera)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.Vector init_pos = 6;
  if (this->has_init_pos()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        6, *this->init_pos_, deterministic, target);
  }

  // .proto.Vector forward = 9;
  if (this->has_forward()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        9, *this->forward_, deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AbilityMixinShootFromCamera)
  return target;
}

size_t AbilityMixinShootFromCamera::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AbilityMixinShootFromCamera)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .proto.Vector init_pos = 6;
  if (this->has_init_pos()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->init_pos_);
  }

  // .proto.Vector forward = 9;
  if (this->has_forward()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->forward_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AbilityMixinEraseBrickActivity::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AbilityMixinEraseBrickActivity)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated uint32 data = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(66u /* 66 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_data())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 64 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 1, 66u, input, this->mutable_data())));
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
  // @@protoc_insertion_point(parse_success:proto.AbilityMixinEraseBrickActivity)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AbilityMixinEraseBrickActivity)
  return false;
#undef DO_
}

void AbilityMixinEraseBrickActivity::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AbilityMixinEraseBrickActivity)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated uint32 data = 8;
  if (this->data_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(8, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _data_cached_byte_size_));
  }
  for (int i = 0, n = this->data_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32NoTag(
      this->data(i), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AbilityMixinEraseBrickActivity)
}

::google::protobuf::uint8* AbilityMixinEraseBrickActivity::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AbilityMixinEraseBrickActivity)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated uint32 data = 8;
  if (this->data_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      8,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::uint32>(
            _data_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt32NoTagToArray(this->data_, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AbilityMixinEraseBrickActivity)
  return target;
}

size_t AbilityMixinEraseBrickActivity::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AbilityMixinEraseBrickActivity)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated uint32 data = 8;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      UInt32Size(this->data_);
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _data_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool BreakoutSyncCreateConnect::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.BreakoutSyncCreateConnect)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .proto.BreakoutSyncConnectUidInfo uid_info_list = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_uid_info_list()));
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
  // @@protoc_insertion_point(parse_success:proto.BreakoutSyncCreateConnect)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.BreakoutSyncCreateConnect)
  return false;
#undef DO_
}

void BreakoutSyncCreateConnect::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.BreakoutSyncCreateConnect)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.BreakoutSyncConnectUidInfo uid_info_list = 6;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->uid_info_list_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      6, this->uid_info_list(static_cast<int>(i)), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.BreakoutSyncCreateConnect)
}

::google::protobuf::uint8* BreakoutSyncCreateConnect::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.BreakoutSyncCreateConnect)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.BreakoutSyncConnectUidInfo uid_info_list = 6;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->uid_info_list_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        6, this->uid_info_list(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.BreakoutSyncCreateConnect)
  return target;
}

size_t BreakoutSyncCreateConnect::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.BreakoutSyncCreateConnect)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .proto.BreakoutSyncConnectUidInfo uid_info_list = 6;
  {
    unsigned int count = static_cast<unsigned int>(this->uid_info_list_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->uid_info_list(static_cast<int>(i)));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool BreakoutSyncPing::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.BreakoutSyncPing)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint64 server_game_time = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &server_game_time_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint64 client_game_time = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(96u /* 96 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &client_game_time_)));
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
  // @@protoc_insertion_point(parse_success:proto.BreakoutSyncPing)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.BreakoutSyncPing)
  return false;
#undef DO_
}

void BreakoutSyncPing::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.BreakoutSyncPing)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 server_game_time = 7;
  if (this->server_game_time() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(7, this->server_game_time(), output);
  }

  // uint64 client_game_time = 12;
  if (this->client_game_time() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(12, this->client_game_time(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.BreakoutSyncPing)
}

::google::protobuf::uint8* BreakoutSyncPing::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.BreakoutSyncPing)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 server_game_time = 7;
  if (this->server_game_time() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(7, this->server_game_time(), target);
  }

  // uint64 client_game_time = 12;
  if (this->client_game_time() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(12, this->client_game_time(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.BreakoutSyncPing)
  return target;
}

size_t BreakoutSyncPing::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.BreakoutSyncPing)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint64 server_game_time = 7;
  if (this->server_game_time() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->server_game_time());
  }

  // uint64 client_game_time = 12;
  if (this->client_game_time() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->client_game_time());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool BreakoutSyncFinishGame::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.BreakoutSyncFinishGame)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bool is_win = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_win_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint64 server_game_time = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &server_game_time_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_stop_gallery = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 64 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_stop_gallery_)));
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
  // @@protoc_insertion_point(parse_success:proto.BreakoutSyncFinishGame)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.BreakoutSyncFinishGame)
  return false;
#undef DO_
}

void BreakoutSyncFinishGame::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.BreakoutSyncFinishGame)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool is_win = 1;
  if (this->is_win() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->is_win(), output);
  }

  // uint64 server_game_time = 5;
  if (this->server_game_time() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(5, this->server_game_time(), output);
  }

  // bool is_stop_gallery = 8;
  if (this->is_stop_gallery() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(8, this->is_stop_gallery(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.BreakoutSyncFinishGame)
}

::google::protobuf::uint8* BreakoutSyncFinishGame::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.BreakoutSyncFinishGame)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool is_win = 1;
  if (this->is_win() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->is_win(), target);
  }

  // uint64 server_game_time = 5;
  if (this->server_game_time() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(5, this->server_game_time(), target);
  }

  // bool is_stop_gallery = 8;
  if (this->is_stop_gallery() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(8, this->is_stop_gallery(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.BreakoutSyncFinishGame)
  return target;
}

size_t BreakoutSyncFinishGame::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.BreakoutSyncFinishGame)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // bool is_win = 1;
  if (this->is_win() != 0) {
    total_size += 1 + 1;
  }

  // bool is_stop_gallery = 8;
  if (this->is_stop_gallery() != 0) {
    total_size += 1 + 1;
  }

  // uint64 server_game_time = 5;
  if (this->server_game_time() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->server_game_time());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool BreakoutSyncSnapShot::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.BreakoutSyncSnapShot)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .proto.BreakoutSnapShot snap_shot = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_snap_shot()));
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
  // @@protoc_insertion_point(parse_success:proto.BreakoutSyncSnapShot)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.BreakoutSyncSnapShot)
  return false;
#undef DO_
}

void BreakoutSyncSnapShot::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.BreakoutSyncSnapShot)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.BreakoutSnapShot snap_shot = 3;
  if (this->has_snap_shot()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, *this->snap_shot_, output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.BreakoutSyncSnapShot)
}

::google::protobuf::uint8* BreakoutSyncSnapShot::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.BreakoutSyncSnapShot)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.BreakoutSnapShot snap_shot = 3;
  if (this->has_snap_shot()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, *this->snap_shot_, deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.BreakoutSyncSnapShot)
  return target;
}

size_t BreakoutSyncSnapShot::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.BreakoutSyncSnapShot)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .proto.BreakoutSnapShot snap_shot = 3;
  if (this->has_snap_shot()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->snap_shot_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool BreakoutSyncAction::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.BreakoutSyncAction)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .proto.BreakoutAction action = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(74u /* 74 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_action()));
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
  // @@protoc_insertion_point(parse_success:proto.BreakoutSyncAction)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.BreakoutSyncAction)
  return false;
#undef DO_
}

void BreakoutSyncAction::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.BreakoutSyncAction)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.BreakoutAction action = 9;
  if (this->has_action()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      9, *this->action_, output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.BreakoutSyncAction)
}

::google::protobuf::uint8* BreakoutSyncAction::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.BreakoutSyncAction)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.BreakoutAction action = 9;
  if (this->has_action()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        9, *this->action_, deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.BreakoutSyncAction)
  return target;
}

size_t BreakoutSyncAction::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.BreakoutSyncAction)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .proto.BreakoutAction action = 9;
  if (this->has_action()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->action_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AbilityMixinBreakout::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AbilityMixinBreakout)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .proto.AbilityMixinBreakout.SyncType sync_type = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_sync_type(static_cast< ::proto::AbilityMixinBreakout_SyncType >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.BreakoutSyncPing sync_ping = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_sync_ping()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.BreakoutSyncFinishGame sync_finish_game = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(58u /* 58 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_sync_finish_game()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.BreakoutSyncSnapShot sync_snap_shot = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(82u /* 82 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_sync_snap_shot()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.BreakoutSyncAction sync_action = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(98u /* 98 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_sync_action()));
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

      // .proto.BreakoutSyncCreateConnect sync_create_connect = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(114u /* 114 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_sync_create_connect()));
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
  // @@protoc_insertion_point(parse_success:proto.AbilityMixinBreakout)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AbilityMixinBreakout)
  return false;
#undef DO_
}

void AbilityMixinBreakout::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AbilityMixinBreakout)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.AbilityMixinBreakout.SyncType sync_type = 3;
  if (this->sync_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      3, this->sync_type(), output);
  }

  // .proto.BreakoutSyncPing sync_ping = 4;
  if (has_sync_ping()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, *sync_.sync_ping_, output);
  }

  // .proto.BreakoutSyncFinishGame sync_finish_game = 7;
  if (has_sync_finish_game()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      7, *sync_.sync_finish_game_, output);
  }

  // .proto.BreakoutSyncSnapShot sync_snap_shot = 10;
  if (has_sync_snap_shot()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      10, *sync_.sync_snap_shot_, output);
  }

  // .proto.BreakoutSyncAction sync_action = 12;
  if (has_sync_action()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      12, *sync_.sync_action_, output);
  }

  // int32 retcode = 13;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(13, this->retcode(), output);
  }

  // .proto.BreakoutSyncCreateConnect sync_create_connect = 14;
  if (has_sync_create_connect()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      14, *sync_.sync_create_connect_, output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AbilityMixinBreakout)
}

::google::protobuf::uint8* AbilityMixinBreakout::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AbilityMixinBreakout)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.AbilityMixinBreakout.SyncType sync_type = 3;
  if (this->sync_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      3, this->sync_type(), target);
  }

  // .proto.BreakoutSyncPing sync_ping = 4;
  if (has_sync_ping()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        4, *sync_.sync_ping_, deterministic, target);
  }

  // .proto.BreakoutSyncFinishGame sync_finish_game = 7;
  if (has_sync_finish_game()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        7, *sync_.sync_finish_game_, deterministic, target);
  }

  // .proto.BreakoutSyncSnapShot sync_snap_shot = 10;
  if (has_sync_snap_shot()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        10, *sync_.sync_snap_shot_, deterministic, target);
  }

  // .proto.BreakoutSyncAction sync_action = 12;
  if (has_sync_action()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        12, *sync_.sync_action_, deterministic, target);
  }

  // int32 retcode = 13;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(13, this->retcode(), target);
  }

  // .proto.BreakoutSyncCreateConnect sync_create_connect = 14;
  if (has_sync_create_connect()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        14, *sync_.sync_create_connect_, deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AbilityMixinBreakout)
  return target;
}

size_t AbilityMixinBreakout::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AbilityMixinBreakout)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .proto.AbilityMixinBreakout.SyncType sync_type = 3;
  if (this->sync_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->sync_type());
  }

  // int32 retcode = 13;
  if (this->retcode() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->retcode());
  }

  switch (sync_case()) {
    // .proto.BreakoutSyncCreateConnect sync_create_connect = 14;
    case kSyncCreateConnect: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *sync_.sync_create_connect_);
      break;
    }
    // .proto.BreakoutSyncPing sync_ping = 4;
    case kSyncPing: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *sync_.sync_ping_);
      break;
    }
    // .proto.BreakoutSyncFinishGame sync_finish_game = 7;
    case kSyncFinishGame: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *sync_.sync_finish_game_);
      break;
    }
    // .proto.BreakoutSyncSnapShot sync_snap_shot = 10;
    case kSyncSnapShot: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *sync_.sync_snap_shot_);
      break;
    }
    // .proto.BreakoutSyncAction sync_action = 12;
    case kSyncAction: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *sync_.sync_action_);
      break;
    }
    case SYNC_NOT_SET: {
      break;
    }
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AttackResultCreateCount::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AttackResultCreateCount)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated uint32 create_count_no_cost_list = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_create_count_no_cost_list())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 1, 34u, input, this->mutable_create_count_no_cost_list())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated uint32 create_count_list = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(98u /* 98 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_create_count_list())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(96u /* 96 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 1, 98u, input, this->mutable_create_count_list())));
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
  // @@protoc_insertion_point(parse_success:proto.AttackResultCreateCount)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AttackResultCreateCount)
  return false;
#undef DO_
}

void AttackResultCreateCount::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AttackResultCreateCount)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated uint32 create_count_no_cost_list = 4;
  if (this->create_count_no_cost_list_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(4, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _create_count_no_cost_list_cached_byte_size_));
  }
  for (int i = 0, n = this->create_count_no_cost_list_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32NoTag(
      this->create_count_no_cost_list(i), output);
  }

  // repeated uint32 create_count_list = 12;
  if (this->create_count_list_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(12, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _create_count_list_cached_byte_size_));
  }
  for (int i = 0, n = this->create_count_list_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32NoTag(
      this->create_count_list(i), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AttackResultCreateCount)
}

::google::protobuf::uint8* AttackResultCreateCount::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AttackResultCreateCount)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated uint32 create_count_no_cost_list = 4;
  if (this->create_count_no_cost_list_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      4,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::uint32>(
            _create_count_no_cost_list_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt32NoTagToArray(this->create_count_no_cost_list_, target);
  }

  // repeated uint32 create_count_list = 12;
  if (this->create_count_list_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      12,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::uint32>(
            _create_count_list_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt32NoTagToArray(this->create_count_list_, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AttackResultCreateCount)
  return target;
}

size_t AttackResultCreateCount::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AttackResultCreateCount)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated uint32 create_count_no_cost_list = 4;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      UInt32Size(this->create_count_no_cost_list_);
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _create_count_no_cost_list_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // repeated uint32 create_count_list = 12;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      UInt32Size(this->create_count_list_);
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _create_count_list_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool ClientAbilityInitBeginNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.ClientAbilityInitBeginNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 entity_id = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &entity_id_)));
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
  // @@protoc_insertion_point(parse_success:proto.ClientAbilityInitBeginNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.ClientAbilityInitBeginNotify)
  return false;
#undef DO_
}

void ClientAbilityInitBeginNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.ClientAbilityInitBeginNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 entity_id = 2;
  if (this->entity_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->entity_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.ClientAbilityInitBeginNotify)
}

::google::protobuf::uint8* ClientAbilityInitBeginNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.ClientAbilityInitBeginNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 entity_id = 2;
  if (this->entity_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->entity_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.ClientAbilityInitBeginNotify)
  return target;
}

size_t ClientAbilityInitBeginNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.ClientAbilityInitBeginNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 entity_id = 2;
  if (this->entity_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->entity_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool ClientAbilityInitFinishNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.ClientAbilityInitFinishNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 entity_id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &entity_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .proto.AbilityInvokeEntry invokes = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(114u /* 114 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_invokes()));
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
  // @@protoc_insertion_point(parse_success:proto.ClientAbilityInitFinishNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.ClientAbilityInitFinishNotify)
  return false;
#undef DO_
}

void ClientAbilityInitFinishNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.ClientAbilityInitFinishNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 entity_id = 1;
  if (this->entity_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->entity_id(), output);
  }

  // repeated .proto.AbilityInvokeEntry invokes = 14;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->invokes_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      14, this->invokes(static_cast<int>(i)), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.ClientAbilityInitFinishNotify)
}

::google::protobuf::uint8* ClientAbilityInitFinishNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.ClientAbilityInitFinishNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 entity_id = 1;
  if (this->entity_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->entity_id(), target);
  }

  // repeated .proto.AbilityInvokeEntry invokes = 14;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->invokes_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        14, this->invokes(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.ClientAbilityInitFinishNotify)
  return target;
}

size_t ClientAbilityInitFinishNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.ClientAbilityInitFinishNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .proto.AbilityInvokeEntry invokes = 14;
  {
    unsigned int count = static_cast<unsigned int>(this->invokes_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->invokes(static_cast<int>(i)));
    }
  }

  // uint32 entity_id = 1;
  if (this->entity_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->entity_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AbilityInvocationFailNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AbilityInvocationFailNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string reason = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_reason()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->reason().data(), static_cast<int>(this->reason().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.AbilityInvocationFailNotify.reason"));
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

      // .proto.AbilityInvokeEntry invoke = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(114u /* 114 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_invoke()));
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
  // @@protoc_insertion_point(parse_success:proto.AbilityInvocationFailNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AbilityInvocationFailNotify)
  return false;
#undef DO_
}

void AbilityInvocationFailNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AbilityInvocationFailNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string reason = 4;
  if (this->reason().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->reason().data(), static_cast<int>(this->reason().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.AbilityInvocationFailNotify.reason");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->reason(), output);
  }

  // uint32 entity_id = 13;
  if (this->entity_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(13, this->entity_id(), output);
  }

  // .proto.AbilityInvokeEntry invoke = 14;
  if (this->has_invoke()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      14, *this->invoke_, output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AbilityInvocationFailNotify)
}

::google::protobuf::uint8* AbilityInvocationFailNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AbilityInvocationFailNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string reason = 4;
  if (this->reason().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->reason().data(), static_cast<int>(this->reason().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.AbilityInvocationFailNotify.reason");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->reason(), target);
  }

  // uint32 entity_id = 13;
  if (this->entity_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(13, this->entity_id(), target);
  }

  // .proto.AbilityInvokeEntry invoke = 14;
  if (this->has_invoke()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        14, *this->invoke_, deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AbilityInvocationFailNotify)
  return target;
}

size_t AbilityInvocationFailNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AbilityInvocationFailNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string reason = 4;
  if (this->reason().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->reason());
  }

  // .proto.AbilityInvokeEntry invoke = 14;
  if (this->has_invoke()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->invoke_);
  }

  // uint32 entity_id = 13;
  if (this->entity_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->entity_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool EntityAbilityInvokeEntry::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.EntityAbilityInvokeEntry)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .proto.AbilityInvokeEntry invokes = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_invokes()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 entity_id = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &entity_id_)));
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
  // @@protoc_insertion_point(parse_success:proto.EntityAbilityInvokeEntry)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.EntityAbilityInvokeEntry)
  return false;
#undef DO_
}

void EntityAbilityInvokeEntry::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.EntityAbilityInvokeEntry)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.AbilityInvokeEntry invokes = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->invokes_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->invokes(static_cast<int>(i)), output);
  }

  // uint32 entity_id = 9;
  if (this->entity_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(9, this->entity_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.EntityAbilityInvokeEntry)
}

::google::protobuf::uint8* EntityAbilityInvokeEntry::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.EntityAbilityInvokeEntry)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.AbilityInvokeEntry invokes = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->invokes_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        4, this->invokes(static_cast<int>(i)), deterministic, target);
  }

  // uint32 entity_id = 9;
  if (this->entity_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(9, this->entity_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.EntityAbilityInvokeEntry)
  return target;
}

size_t EntityAbilityInvokeEntry::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.EntityAbilityInvokeEntry)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .proto.AbilityInvokeEntry invokes = 4;
  {
    unsigned int count = static_cast<unsigned int>(this->invokes_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->invokes(static_cast<int>(i)));
    }
  }

  // uint32 entity_id = 9;
  if (this->entity_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->entity_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool ClientAbilitiesInitFinishCombineNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.ClientAbilitiesInitFinishCombineNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .proto.EntityAbilityInvokeEntry entity_invoke_list = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_entity_invoke_list()));
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
  // @@protoc_insertion_point(parse_success:proto.ClientAbilitiesInitFinishCombineNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.ClientAbilitiesInitFinishCombineNotify)
  return false;
#undef DO_
}

void ClientAbilitiesInitFinishCombineNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.ClientAbilitiesInitFinishCombineNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.EntityAbilityInvokeEntry entity_invoke_list = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->entity_invoke_list_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->entity_invoke_list(static_cast<int>(i)), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.ClientAbilitiesInitFinishCombineNotify)
}

::google::protobuf::uint8* ClientAbilitiesInitFinishCombineNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.ClientAbilitiesInitFinishCombineNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.EntityAbilityInvokeEntry entity_invoke_list = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->entity_invoke_list_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        4, this->entity_invoke_list(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.ClientAbilitiesInitFinishCombineNotify)
  return target;
}

size_t ClientAbilitiesInitFinishCombineNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.ClientAbilitiesInitFinishCombineNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .proto.EntityAbilityInvokeEntry entity_invoke_list = 4;
  {
    unsigned int count = static_cast<unsigned int>(this->entity_invoke_list_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->entity_invoke_list(static_cast<int>(i)));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool WindSeedClientNotify_RefreshNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.WindSeedClientNotify.RefreshNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 refresh_num = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(104u /* 104 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &refresh_num_)));
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
  // @@protoc_insertion_point(parse_success:proto.WindSeedClientNotify.RefreshNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.WindSeedClientNotify.RefreshNotify)
  return false;
#undef DO_
}

void WindSeedClientNotify_RefreshNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.WindSeedClientNotify.RefreshNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 refresh_num = 13;
  if (this->refresh_num() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(13, this->refresh_num(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.WindSeedClientNotify.RefreshNotify)
}

::google::protobuf::uint8* WindSeedClientNotify_RefreshNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.WindSeedClientNotify.RefreshNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 refresh_num = 13;
  if (this->refresh_num() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(13, this->refresh_num(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.WindSeedClientNotify.RefreshNotify)
  return target;
}

size_t WindSeedClientNotify_RefreshNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.WindSeedClientNotify.RefreshNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 refresh_num = 13;
  if (this->refresh_num() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->refresh_num());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool WindSeedClientNotify_AddWindBulletNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.WindSeedClientNotify.AddWindBulletNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 seed_entity_id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &seed_entity_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.Vector seed_pos = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(82u /* 82 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_seed_pos()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 catch_player_uid = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(104u /* 104 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &catch_player_uid_)));
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
  // @@protoc_insertion_point(parse_success:proto.WindSeedClientNotify.AddWindBulletNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.WindSeedClientNotify.AddWindBulletNotify)
  return false;
#undef DO_
}

void WindSeedClientNotify_AddWindBulletNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.WindSeedClientNotify.AddWindBulletNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 seed_entity_id = 1;
  if (this->seed_entity_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->seed_entity_id(), output);
  }

  // .proto.Vector seed_pos = 10;
  if (this->has_seed_pos()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      10, *this->seed_pos_, output);
  }

  // uint32 catch_player_uid = 13;
  if (this->catch_player_uid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(13, this->catch_player_uid(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.WindSeedClientNotify.AddWindBulletNotify)
}

::google::protobuf::uint8* WindSeedClientNotify_AddWindBulletNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.WindSeedClientNotify.AddWindBulletNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 seed_entity_id = 1;
  if (this->seed_entity_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->seed_entity_id(), target);
  }

  // .proto.Vector seed_pos = 10;
  if (this->has_seed_pos()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        10, *this->seed_pos_, deterministic, target);
  }

  // uint32 catch_player_uid = 13;
  if (this->catch_player_uid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(13, this->catch_player_uid(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.WindSeedClientNotify.AddWindBulletNotify)
  return target;
}

size_t WindSeedClientNotify_AddWindBulletNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.WindSeedClientNotify.AddWindBulletNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .proto.Vector seed_pos = 10;
  if (this->has_seed_pos()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->seed_pos_);
  }

  // uint32 seed_entity_id = 1;
  if (this->seed_entity_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->seed_entity_id());
  }

  // uint32 catch_player_uid = 13;
  if (this->catch_player_uid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->catch_player_uid());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool WindSeedClientNotify_AreaNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.WindSeedClientNotify.AreaNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bytes area_code = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_area_code()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 area_type = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &area_type_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 area_id = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(96u /* 96 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &area_id_)));
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
  // @@protoc_insertion_point(parse_success:proto.WindSeedClientNotify.AreaNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.WindSeedClientNotify.AreaNotify)
  return false;
#undef DO_
}

void WindSeedClientNotify_AreaNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.WindSeedClientNotify.AreaNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes area_code = 1;
  if (this->area_code().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      1, this->area_code(), output);
  }

  // uint32 area_type = 5;
  if (this->area_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->area_type(), output);
  }

  // uint32 area_id = 12;
  if (this->area_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(12, this->area_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.WindSeedClientNotify.AreaNotify)
}

::google::protobuf::uint8* WindSeedClientNotify_AreaNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.WindSeedClientNotify.AreaNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes area_code = 1;
  if (this->area_code().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        1, this->area_code(), target);
  }

  // uint32 area_type = 5;
  if (this->area_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->area_type(), target);
  }

  // uint32 area_id = 12;
  if (this->area_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(12, this->area_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.WindSeedClientNotify.AreaNotify)
  return target;
}

size_t WindSeedClientNotify_AreaNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.WindSeedClientNotify.AreaNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // bytes area_code = 1;
  if (this->area_code().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->area_code());
  }

  // uint32 area_type = 5;
  if (this->area_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->area_type());
  }

  // uint32 area_id = 12;
  if (this->area_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->area_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool WindSeedClientNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.WindSeedClientNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .proto.WindSeedClientNotify.AreaNotify area_notify = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_area_notify()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.WindSeedClientNotify.AddWindBulletNotify add_wind_bullet_notify = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(66u /* 66 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_add_wind_bullet_notify()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.WindSeedClientNotify.RefreshNotify refresh_notify = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(90u /* 90 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_refresh_notify()));
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
  // @@protoc_insertion_point(parse_success:proto.WindSeedClientNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.WindSeedClientNotify)
  return false;
#undef DO_
}

void WindSeedClientNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.WindSeedClientNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.WindSeedClientNotify.AreaNotify area_notify = 2;
  if (has_area_notify()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *notify_.area_notify_, output);
  }

  // .proto.WindSeedClientNotify.AddWindBulletNotify add_wind_bullet_notify = 8;
  if (has_add_wind_bullet_notify()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      8, *notify_.add_wind_bullet_notify_, output);
  }

  // .proto.WindSeedClientNotify.RefreshNotify refresh_notify = 11;
  if (has_refresh_notify()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      11, *notify_.refresh_notify_, output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.WindSeedClientNotify)
}

::google::protobuf::uint8* WindSeedClientNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.WindSeedClientNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.WindSeedClientNotify.AreaNotify area_notify = 2;
  if (has_area_notify()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *notify_.area_notify_, deterministic, target);
  }

  // .proto.WindSeedClientNotify.AddWindBulletNotify add_wind_bullet_notify = 8;
  if (has_add_wind_bullet_notify()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        8, *notify_.add_wind_bullet_notify_, deterministic, target);
  }

  // .proto.WindSeedClientNotify.RefreshNotify refresh_notify = 11;
  if (has_refresh_notify()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        11, *notify_.refresh_notify_, deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.WindSeedClientNotify)
  return target;
}

size_t WindSeedClientNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.WindSeedClientNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  switch (notify_case()) {
    // .proto.WindSeedClientNotify.RefreshNotify refresh_notify = 11;
    case kRefreshNotify: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *notify_.refresh_notify_);
      break;
    }
    // .proto.WindSeedClientNotify.AddWindBulletNotify add_wind_bullet_notify = 8;
    case kAddWindBulletNotify: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *notify_.add_wind_bullet_notify_);
      break;
    }
    // .proto.WindSeedClientNotify.AreaNotify area_notify = 2;
    case kAreaNotify: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *notify_.area_notify_);
      break;
    }
    case NOTIFY_NOT_SET: {
      break;
    }
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AbilityChangeNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AbilityChangeNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 entity_id = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &entity_id_)));
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
  // @@protoc_insertion_point(parse_success:proto.AbilityChangeNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AbilityChangeNotify)
  return false;
#undef DO_
}

void AbilityChangeNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AbilityChangeNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 entity_id = 7;
  if (this->entity_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->entity_id(), output);
  }

  // .proto.AbilityControlBlock ability_control_block = 10;
  if (this->has_ability_control_block()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      10, *this->ability_control_block_, output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AbilityChangeNotify)
}

::google::protobuf::uint8* AbilityChangeNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AbilityChangeNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 entity_id = 7;
  if (this->entity_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(7, this->entity_id(), target);
  }

  // .proto.AbilityControlBlock ability_control_block = 10;
  if (this->has_ability_control_block()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        10, *this->ability_control_block_, deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AbilityChangeNotify)
  return target;
}

size_t AbilityChangeNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AbilityChangeNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .proto.AbilityControlBlock ability_control_block = 10;
  if (this->has_ability_control_block()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->ability_control_block_);
  }

  // uint32 entity_id = 7;
  if (this->entity_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->entity_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool ClientAbilityChangeNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.ClientAbilityChangeNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bool is_init_hash = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_init_hash_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 entity_id = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &entity_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .proto.AbilityInvokeEntry invokes = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(82u /* 82 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_invokes()));
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
  // @@protoc_insertion_point(parse_success:proto.ClientAbilityChangeNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.ClientAbilityChangeNotify)
  return false;
#undef DO_
}

void ClientAbilityChangeNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.ClientAbilityChangeNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool is_init_hash = 4;
  if (this->is_init_hash() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(4, this->is_init_hash(), output);
  }

  // uint32 entity_id = 9;
  if (this->entity_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(9, this->entity_id(), output);
  }

  // repeated .proto.AbilityInvokeEntry invokes = 10;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->invokes_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      10, this->invokes(static_cast<int>(i)), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.ClientAbilityChangeNotify)
}

::google::protobuf::uint8* ClientAbilityChangeNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.ClientAbilityChangeNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool is_init_hash = 4;
  if (this->is_init_hash() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(4, this->is_init_hash(), target);
  }

  // uint32 entity_id = 9;
  if (this->entity_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(9, this->entity_id(), target);
  }

  // repeated .proto.AbilityInvokeEntry invokes = 10;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->invokes_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        10, this->invokes(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.ClientAbilityChangeNotify)
  return target;
}

size_t ClientAbilityChangeNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.ClientAbilityChangeNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .proto.AbilityInvokeEntry invokes = 10;
  {
    unsigned int count = static_cast<unsigned int>(this->invokes_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->invokes(static_cast<int>(i)));
    }
  }

  // bool is_init_hash = 4;
  if (this->is_init_hash() != 0) {
    total_size += 1 + 1;
  }

  // uint32 entity_id = 9;
  if (this->entity_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->entity_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool ServerUpdateGlobalValueNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.ServerUpdateGlobalValueNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // float value = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(21u /* 21 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &value_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 entity_id = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &entity_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.ServerUpdateGlobalValueNotify.UpdateType update_type = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 64 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_update_type(static_cast< ::proto::ServerUpdateGlobalValueNotify_UpdateType >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 key_hash = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(80u /* 80 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &key_hash_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float delta = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(101u /* 101 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &delta_)));
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
  // @@protoc_insertion_point(parse_success:proto.ServerUpdateGlobalValueNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.ServerUpdateGlobalValueNotify)
  return false;
#undef DO_
}

void ServerUpdateGlobalValueNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.ServerUpdateGlobalValueNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // float value = 2;
  if (this->value() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(2, this->value(), output);
  }

  // uint32 entity_id = 3;
  if (this->entity_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->entity_id(), output);
  }

  // .proto.ServerUpdateGlobalValueNotify.UpdateType update_type = 8;
  if (this->update_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      8, this->update_type(), output);
  }

  // uint32 key_hash = 10;
  if (this->key_hash() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(10, this->key_hash(), output);
  }

  // float delta = 12;
  if (this->delta() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(12, this->delta(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.ServerUpdateGlobalValueNotify)
}

::google::protobuf::uint8* ServerUpdateGlobalValueNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.ServerUpdateGlobalValueNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // float value = 2;
  if (this->value() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(2, this->value(), target);
  }

  // uint32 entity_id = 3;
  if (this->entity_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->entity_id(), target);
  }

  // .proto.ServerUpdateGlobalValueNotify.UpdateType update_type = 8;
  if (this->update_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      8, this->update_type(), target);
  }

  // uint32 key_hash = 10;
  if (this->key_hash() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(10, this->key_hash(), target);
  }

  // float delta = 12;
  if (this->delta() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(12, this->delta(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.ServerUpdateGlobalValueNotify)
  return target;
}

size_t ServerUpdateGlobalValueNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.ServerUpdateGlobalValueNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // float value = 2;
  if (this->value() != 0) {
    total_size += 1 + 4;
  }

  // uint32 entity_id = 3;
  if (this->entity_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->entity_id());
  }

  // float delta = 12;
  if (this->delta() != 0) {
    total_size += 1 + 4;
  }

  // .proto.ServerUpdateGlobalValueNotify.UpdateType update_type = 8;
  if (this->update_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->update_type());
  }

  // uint32 key_hash = 10;
  if (this->key_hash() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->key_hash());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool ServerGlobalValueChangeNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.ServerGlobalValueChangeNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 key_hash = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &key_hash_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float value = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(85u /* 85 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &value_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 entity_id = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(88u /* 88 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &entity_id_)));
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
  // @@protoc_insertion_point(parse_success:proto.ServerGlobalValueChangeNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.ServerGlobalValueChangeNotify)
  return false;
#undef DO_
}

void ServerGlobalValueChangeNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.ServerGlobalValueChangeNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 key_hash = 6;
  if (this->key_hash() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->key_hash(), output);
  }

  // float value = 10;
  if (this->value() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(10, this->value(), output);
  }

  // uint32 entity_id = 11;
  if (this->entity_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(11, this->entity_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.ServerGlobalValueChangeNotify)
}

::google::protobuf::uint8* ServerGlobalValueChangeNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.ServerGlobalValueChangeNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 key_hash = 6;
  if (this->key_hash() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, this->key_hash(), target);
  }

  // float value = 10;
  if (this->value() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(10, this->value(), target);
  }

  // uint32 entity_id = 11;
  if (this->entity_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(11, this->entity_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.ServerGlobalValueChangeNotify)
  return target;
}

size_t ServerGlobalValueChangeNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.ServerGlobalValueChangeNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 entity_id = 11;
  if (this->entity_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->entity_id());
  }

  // uint32 key_hash = 6;
  if (this->key_hash() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->key_hash());
  }

  // float value = 10;
  if (this->value() != 0) {
    total_size += 1 + 4;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool ClientAIStateNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.ClientAIStateNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 entity_id = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &entity_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 cur_tactic = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(80u /* 80 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &cur_tactic_)));
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
  // @@protoc_insertion_point(parse_success:proto.ClientAIStateNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.ClientAIStateNotify)
  return false;
#undef DO_
}

void ClientAIStateNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.ClientAIStateNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 entity_id = 6;
  if (this->entity_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->entity_id(), output);
  }

  // uint32 cur_tactic = 10;
  if (this->cur_tactic() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(10, this->cur_tactic(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.ClientAIStateNotify)
}

::google::protobuf::uint8* ClientAIStateNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.ClientAIStateNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 entity_id = 6;
  if (this->entity_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, this->entity_id(), target);
  }

  // uint32 cur_tactic = 10;
  if (this->cur_tactic() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(10, this->cur_tactic(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.ClientAIStateNotify)
  return target;
}

size_t ClientAIStateNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.ClientAIStateNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 entity_id = 6;
  if (this->entity_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->entity_id());
  }

  // uint32 cur_tactic = 10;
  if (this->cur_tactic() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->cur_tactic());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool ServerCombatEndNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.ServerCombatEndNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated uint32 combat_end_type_list = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(122u /* 122 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_combat_end_type_list())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(120u /* 120 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 1, 122u, input, this->mutable_combat_end_type_list())));
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
  // @@protoc_insertion_point(parse_success:proto.ServerCombatEndNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.ServerCombatEndNotify)
  return false;
#undef DO_
}

void ServerCombatEndNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.ServerCombatEndNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated uint32 combat_end_type_list = 15;
  if (this->combat_end_type_list_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(15, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _combat_end_type_list_cached_byte_size_));
  }
  for (int i = 0, n = this->combat_end_type_list_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32NoTag(
      this->combat_end_type_list(i), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.ServerCombatEndNotify)
}

::google::protobuf::uint8* ServerCombatEndNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.ServerCombatEndNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated uint32 combat_end_type_list = 15;
  if (this->combat_end_type_list_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      15,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::uint32>(
            _combat_end_type_list_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt32NoTagToArray(this->combat_end_type_list_, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.ServerCombatEndNotify)
  return target;
}

size_t ServerCombatEndNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.ServerCombatEndNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated uint32 combat_end_type_list = 15;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      UInt32Size(this->combat_end_type_list_);
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _combat_end_type_list_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool ClientRemoveCombatEndModifierNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.ClientRemoveCombatEndModifierNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated uint32 combat_end_type_list = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(98u /* 98 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_combat_end_type_list())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(96u /* 96 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 1, 98u, input, this->mutable_combat_end_type_list())));
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
  // @@protoc_insertion_point(parse_success:proto.ClientRemoveCombatEndModifierNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.ClientRemoveCombatEndModifierNotify)
  return false;
#undef DO_
}

void ClientRemoveCombatEndModifierNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.ClientRemoveCombatEndModifierNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated uint32 combat_end_type_list = 12;
  if (this->combat_end_type_list_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(12, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _combat_end_type_list_cached_byte_size_));
  }
  for (int i = 0, n = this->combat_end_type_list_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32NoTag(
      this->combat_end_type_list(i), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.ClientRemoveCombatEndModifierNotify)
}

::google::protobuf::uint8* ClientRemoveCombatEndModifierNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.ClientRemoveCombatEndModifierNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated uint32 combat_end_type_list = 12;
  if (this->combat_end_type_list_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      12,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::uint32>(
            _combat_end_type_list_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt32NoTagToArray(this->combat_end_type_list_, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.ClientRemoveCombatEndModifierNotify)
  return target;
}

size_t ClientRemoveCombatEndModifierNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.ClientRemoveCombatEndModifierNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated uint32 combat_end_type_list = 12;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      UInt32Size(this->combat_end_type_list_);
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _combat_end_type_list_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool PerformOperationNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.PerformOperationNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .proto.Vector rot = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_rot()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 entity_id = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &entity_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.PerformOperationNotify.OperateType operate_type = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_operate_type(static_cast< ::proto::PerformOperationNotify_OperateType >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 index = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(80u /* 80 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &index_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.Vector pos = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(114u /* 114 & 0xFF */)) {
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
  // @@protoc_insertion_point(parse_success:proto.PerformOperationNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.PerformOperationNotify)
  return false;
#undef DO_
}

void PerformOperationNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.PerformOperationNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.Vector rot = 1;
  if (this->has_rot()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->rot_, output);
  }

  // uint32 entity_id = 3;
  if (this->entity_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->entity_id(), output);
  }

  // .proto.PerformOperationNotify.OperateType operate_type = 5;
  if (this->operate_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      5, this->operate_type(), output);
  }

  // uint32 index = 10;
  if (this->index() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(10, this->index(), output);
  }

  // .proto.Vector pos = 14;
  if (this->has_pos()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      14, *this->pos_, output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.PerformOperationNotify)
}

::google::protobuf::uint8* PerformOperationNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.PerformOperationNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.Vector rot = 1;
  if (this->has_rot()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->rot_, deterministic, target);
  }

  // uint32 entity_id = 3;
  if (this->entity_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->entity_id(), target);
  }

  // .proto.PerformOperationNotify.OperateType operate_type = 5;
  if (this->operate_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      5, this->operate_type(), target);
  }

  // uint32 index = 10;
  if (this->index() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(10, this->index(), target);
  }

  // .proto.Vector pos = 14;
  if (this->has_pos()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        14, *this->pos_, deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.PerformOperationNotify)
  return target;
}

size_t PerformOperationNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.PerformOperationNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .proto.Vector rot = 1;
  if (this->has_rot()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->rot_);
  }

  // .proto.Vector pos = 14;
  if (this->has_pos()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->pos_);
  }

  // uint32 entity_id = 3;
  if (this->entity_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->entity_id());
  }

  // .proto.PerformOperationNotify.OperateType operate_type = 5;
  if (this->operate_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->operate_type());
  }

  // uint32 index = 10;
  if (this->index() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->index());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}
}