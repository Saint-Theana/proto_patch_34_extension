#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "cmd/cmd_quest.pb.h"

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

bool QuestListNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.QuestListNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .proto.Quest quest_list = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(106u /* 106 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_quest_list()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.QuestListNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.QuestListNotify)
  return false;
#undef DO_
}

void QuestListNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.QuestListNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.Quest quest_list = 13;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->quest_list_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      13, this->quest_list(static_cast<int>(i)), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.QuestListNotify)
}

::google::protobuf::uint8* QuestListNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.QuestListNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.Quest quest_list = 13;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->quest_list_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        13, this->quest_list(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.QuestListNotify)
  return target;
}

size_t QuestListNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.QuestListNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .proto.Quest quest_list = 13;
  {
    unsigned int count = static_cast<unsigned int>(this->quest_list_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->quest_list(static_cast<int>(i)));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool QuestListUpdateNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.QuestListUpdateNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .proto.Quest quest_list = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(106u /* 106 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_quest_list()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.QuestListUpdateNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.QuestListUpdateNotify)
  return false;
#undef DO_
}

void QuestListUpdateNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.QuestListUpdateNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.Quest quest_list = 13;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->quest_list_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      13, this->quest_list(static_cast<int>(i)), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.QuestListUpdateNotify)
}

::google::protobuf::uint8* QuestListUpdateNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.QuestListUpdateNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.Quest quest_list = 13;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->quest_list_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        13, this->quest_list(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.QuestListUpdateNotify)
  return target;
}

size_t QuestListUpdateNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.QuestListUpdateNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .proto.Quest quest_list = 13;
  {
    unsigned int count = static_cast<unsigned int>(this->quest_list_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->quest_list(static_cast<int>(i)));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool QuestDelNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.QuestDelNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 quest_id = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(120u /* 120 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &quest_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.QuestDelNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.QuestDelNotify)
  return false;
#undef DO_
}

void QuestDelNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.QuestDelNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 quest_id = 15;
  if (this->quest_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(15, this->quest_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.QuestDelNotify)
}

::google::protobuf::uint8* QuestDelNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.QuestDelNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 quest_id = 15;
  if (this->quest_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(15, this->quest_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.QuestDelNotify)
  return target;
}

size_t QuestDelNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.QuestDelNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 quest_id = 15;
  if (this->quest_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->quest_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool ChildQuest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.ChildQuest)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 quest_id = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &quest_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 quest_config_id = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(80u /* 80 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &quest_config_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 state = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(96u /* 96 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &state_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.ChildQuest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.ChildQuest)
  return false;
#undef DO_
}

void ChildQuest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.ChildQuest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 quest_id = 5;
  if (this->quest_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->quest_id(), output);
  }

  // uint32 quest_config_id = 10;
  if (this->quest_config_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(10, this->quest_config_id(), output);
  }

  // uint32 state = 12;
  if (this->state() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(12, this->state(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.ChildQuest)
}

::google::protobuf::uint8* ChildQuest::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.ChildQuest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 quest_id = 5;
  if (this->quest_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->quest_id(), target);
  }

  // uint32 quest_config_id = 10;
  if (this->quest_config_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(10, this->quest_config_id(), target);
  }

  // uint32 state = 12;
  if (this->state() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(12, this->state(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.ChildQuest)
  return target;
}

size_t ChildQuest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.ChildQuest)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 state = 12;
  if (this->state() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->state());
  }

  // uint32 quest_id = 5;
  if (this->quest_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->quest_id());
  }

  // uint32 quest_config_id = 10;
  if (this->quest_config_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->quest_config_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool ParentQuestRandomInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.ParentQuestRandomInfo)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 entrance_id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &entrance_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated uint32 factor_list = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_factor_list())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 1, 26u, input, this->mutable_factor_list())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 template_id = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &template_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.ParentQuestRandomInfo)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.ParentQuestRandomInfo)
  return false;
#undef DO_
}

void ParentQuestRandomInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.ParentQuestRandomInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 entrance_id = 1;
  if (this->entrance_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->entrance_id(), output);
  }

  // repeated uint32 factor_list = 3;
  if (this->factor_list_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(3, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _factor_list_cached_byte_size_));
  }
  for (int i = 0, n = this->factor_list_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32NoTag(
      this->factor_list(i), output);
  }

  // uint32 template_id = 6;
  if (this->template_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->template_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.ParentQuestRandomInfo)
}

::google::protobuf::uint8* ParentQuestRandomInfo::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.ParentQuestRandomInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 entrance_id = 1;
  if (this->entrance_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->entrance_id(), target);
  }

  // repeated uint32 factor_list = 3;
  if (this->factor_list_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      3,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::uint32>(
            _factor_list_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt32NoTagToArray(this->factor_list_, target);
  }

  // uint32 template_id = 6;
  if (this->template_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, this->template_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.ParentQuestRandomInfo)
  return target;
}

size_t ParentQuestRandomInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.ParentQuestRandomInfo)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated uint32 factor_list = 3;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      UInt32Size(this->factor_list_);
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _factor_list_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // uint32 entrance_id = 1;
  if (this->entrance_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->entrance_id());
  }

  // uint32 template_id = 6;
  if (this->template_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->template_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool InfernceWordInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.InfernceWordInfo)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bool is_associate = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_associate_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_submit = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_submit_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 word_id = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &word_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_interpret = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_interpret_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 unlock_by_word_id = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(104u /* 104 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &unlock_by_word_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.InfernceWordInfo)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.InfernceWordInfo)
  return false;
#undef DO_
}

void InfernceWordInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.InfernceWordInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool is_associate = 3;
  if (this->is_associate() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->is_associate(), output);
  }

  // bool is_submit = 4;
  if (this->is_submit() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(4, this->is_submit(), output);
  }

  // uint32 word_id = 5;
  if (this->word_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->word_id(), output);
  }

  // bool is_interpret = 7;
  if (this->is_interpret() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(7, this->is_interpret(), output);
  }

  // uint32 unlock_by_word_id = 13;
  if (this->unlock_by_word_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(13, this->unlock_by_word_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.InfernceWordInfo)
}

::google::protobuf::uint8* InfernceWordInfo::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.InfernceWordInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool is_associate = 3;
  if (this->is_associate() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(3, this->is_associate(), target);
  }

  // bool is_submit = 4;
  if (this->is_submit() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(4, this->is_submit(), target);
  }

  // uint32 word_id = 5;
  if (this->word_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->word_id(), target);
  }

  // bool is_interpret = 7;
  if (this->is_interpret() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(7, this->is_interpret(), target);
  }

  // uint32 unlock_by_word_id = 13;
  if (this->unlock_by_word_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(13, this->unlock_by_word_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.InfernceWordInfo)
  return target;
}

size_t InfernceWordInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.InfernceWordInfo)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // bool is_interpret = 7;
  if (this->is_interpret() != 0) {
    total_size += 1 + 1;
  }

  // bool is_submit = 4;
  if (this->is_submit() != 0) {
    total_size += 1 + 1;
  }

  // bool is_associate = 3;
  if (this->is_associate() != 0) {
    total_size += 1 + 1;
  }

  // uint32 word_id = 5;
  if (this->word_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->word_id());
  }

  // uint32 unlock_by_word_id = 13;
  if (this->unlock_by_word_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->unlock_by_word_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool InferencePageInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.InferencePageInfo)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 page_id = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &page_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .proto.InfernceWordInfo unlock_word_list = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(66u /* 66 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_unlock_word_list()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.InferencePageInfo)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.InferencePageInfo)
  return false;
#undef DO_
}

void InferencePageInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.InferencePageInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 page_id = 6;
  if (this->page_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->page_id(), output);
  }

  // repeated .proto.InfernceWordInfo unlock_word_list = 8;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->unlock_word_list_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      8, this->unlock_word_list(static_cast<int>(i)), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.InferencePageInfo)
}

::google::protobuf::uint8* InferencePageInfo::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.InferencePageInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 page_id = 6;
  if (this->page_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, this->page_id(), target);
  }

  // repeated .proto.InfernceWordInfo unlock_word_list = 8;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->unlock_word_list_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        8, this->unlock_word_list(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.InferencePageInfo)
  return target;
}

size_t InferencePageInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.InferencePageInfo)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .proto.InfernceWordInfo unlock_word_list = 8;
  {
    unsigned int count = static_cast<unsigned int>(this->unlock_word_list_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->unlock_word_list(static_cast<int>(i)));
    }
  }

  // uint32 page_id = 6;
  if (this->page_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->page_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool ParentQuest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.ParentQuest)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 parent_quest_id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &parent_quest_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint64 video_key = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &video_key_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 quest_var_seq = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &quest_var_seq_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .proto.InferencePageInfo inference_page_list = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_inference_page_list()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.ParentQuestRandomInfo random_info = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(58u /* 58 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_random_info()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated int32 quest_var = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(66u /* 66 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_quest_var())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 64 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 66u, input, this->mutable_quest_var())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_finished = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_finished_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .proto.ChildQuest child_quest_list = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(82u /* 82 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_child_quest_list()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_random = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(88u /* 88 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_random_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // map<uint32, uint32> time_var_map = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(98u /* 98 & 0xFF */)) {
          ParentQuest_TimeVarMapEntry::Parser< ::google::protobuf::internal::MapField<
              ParentQuest_TimeVarMapEntry,
              ::google::protobuf::uint32, ::google::protobuf::uint32,
              ::google::protobuf::internal::WireFormatLite::TYPE_UINT32,
              ::google::protobuf::internal::WireFormatLite::TYPE_UINT32,
              0 >,
            ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 > > parser(&time_var_map_);
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
              input, &parser));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 parent_quest_state = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(120u /* 120 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &parent_quest_state_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.ParentQuest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.ParentQuest)
  return false;
#undef DO_
}

void ParentQuest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.ParentQuest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 parent_quest_id = 1;
  if (this->parent_quest_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->parent_quest_id(), output);
  }

  // uint64 video_key = 2;
  if (this->video_key() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(2, this->video_key(), output);
  }

  // uint32 quest_var_seq = 4;
  if (this->quest_var_seq() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->quest_var_seq(), output);
  }

  // repeated .proto.InferencePageInfo inference_page_list = 5;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->inference_page_list_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, this->inference_page_list(static_cast<int>(i)), output);
  }

  // .proto.ParentQuestRandomInfo random_info = 7;
  if (this->has_random_info()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      7, *this->random_info_, output);
  }

  // repeated int32 quest_var = 8;
  if (this->quest_var_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(8, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _quest_var_cached_byte_size_));
  }
  for (int i = 0, n = this->quest_var_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32NoTag(
      this->quest_var(i), output);
  }

  // bool is_finished = 9;
  if (this->is_finished() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(9, this->is_finished(), output);
  }

  // repeated .proto.ChildQuest child_quest_list = 10;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->child_quest_list_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      10, this->child_quest_list(static_cast<int>(i)), output);
  }

  // bool is_random = 11;
  if (this->is_random() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(11, this->is_random(), output);
  }

  // map<uint32, uint32> time_var_map = 12;
  if (!this->time_var_map().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint32, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (output->IsSerializationDeterministic() &&
        this->time_var_map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->time_var_map().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::const_iterator
          it = this->time_var_map().begin();
          it != this->time_var_map().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<ParentQuest_TimeVarMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(time_var_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            12, *entry, output);
      }
    } else {
      ::google::protobuf::scoped_ptr<ParentQuest_TimeVarMapEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::const_iterator
          it = this->time_var_map().begin();
          it != this->time_var_map().end(); ++it) {
        entry.reset(time_var_map_.NewEntryWrapper(
            it->first, it->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            12, *entry, output);
      }
    }
  }

  // uint32 parent_quest_state = 15;
  if (this->parent_quest_state() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(15, this->parent_quest_state(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.ParentQuest)
}

::google::protobuf::uint8* ParentQuest::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.ParentQuest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 parent_quest_id = 1;
  if (this->parent_quest_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->parent_quest_id(), target);
  }

  // uint64 video_key = 2;
  if (this->video_key() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(2, this->video_key(), target);
  }

  // uint32 quest_var_seq = 4;
  if (this->quest_var_seq() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->quest_var_seq(), target);
  }

  // repeated .proto.InferencePageInfo inference_page_list = 5;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->inference_page_list_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        5, this->inference_page_list(static_cast<int>(i)), deterministic, target);
  }

  // .proto.ParentQuestRandomInfo random_info = 7;
  if (this->has_random_info()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        7, *this->random_info_, deterministic, target);
  }

  // repeated int32 quest_var = 8;
  if (this->quest_var_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      8,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::uint32>(
            _quest_var_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32NoTagToArray(this->quest_var_, target);
  }

  // bool is_finished = 9;
  if (this->is_finished() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(9, this->is_finished(), target);
  }

  // repeated .proto.ChildQuest child_quest_list = 10;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->child_quest_list_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        10, this->child_quest_list(static_cast<int>(i)), deterministic, target);
  }

  // bool is_random = 11;
  if (this->is_random() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(11, this->is_random(), target);
  }

  // map<uint32, uint32> time_var_map = 12;
  if (!this->time_var_map().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint32, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (deterministic &&
        this->time_var_map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->time_var_map().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::const_iterator
          it = this->time_var_map().begin();
          it != this->time_var_map().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<ParentQuest_TimeVarMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(time_var_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       12, *entry, deterministic, target);
;
      }
    } else {
      ::google::protobuf::scoped_ptr<ParentQuest_TimeVarMapEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::const_iterator
          it = this->time_var_map().begin();
          it != this->time_var_map().end(); ++it) {
        entry.reset(time_var_map_.NewEntryWrapper(
            it->first, it->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       12, *entry, deterministic, target);
;
      }
    }
  }

  // uint32 parent_quest_state = 15;
  if (this->parent_quest_state() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(15, this->parent_quest_state(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.ParentQuest)
  return target;
}

size_t ParentQuest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.ParentQuest)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .proto.InferencePageInfo inference_page_list = 5;
  {
    unsigned int count = static_cast<unsigned int>(this->inference_page_list_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->inference_page_list(static_cast<int>(i)));
    }
  }

  // repeated int32 quest_var = 8;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      Int32Size(this->quest_var_);
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _quest_var_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // repeated .proto.ChildQuest child_quest_list = 10;
  {
    unsigned int count = static_cast<unsigned int>(this->child_quest_list_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->child_quest_list(static_cast<int>(i)));
    }
  }

  // map<uint32, uint32> time_var_map = 12;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->time_var_map_size());
  {
    ::google::protobuf::scoped_ptr<ParentQuest_TimeVarMapEntry> entry;
    for (::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::const_iterator
        it = this->time_var_map().begin();
        it != this->time_var_map().end(); ++it) {
      entry.reset(time_var_map_.NewEntryWrapper(it->first, it->second));
      total_size += ::google::protobuf::internal::WireFormatLite::
          MessageSizeNoVirtual(*entry);
    }
  }

  // .proto.ParentQuestRandomInfo random_info = 7;
  if (this->has_random_info()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->random_info_);
  }

  // uint64 video_key = 2;
  if (this->video_key() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->video_key());
  }

  // uint32 parent_quest_id = 1;
  if (this->parent_quest_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->parent_quest_id());
  }

  // uint32 quest_var_seq = 4;
  if (this->quest_var_seq() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->quest_var_seq());
  }

  // bool is_finished = 9;
  if (this->is_finished() != 0) {
    total_size += 1 + 1;
  }

  // bool is_random = 11;
  if (this->is_random() != 0) {
    total_size += 1 + 1;
  }

  // uint32 parent_quest_state = 15;
  if (this->parent_quest_state() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->parent_quest_state());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool FinishedParentQuestNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.FinishedParentQuestNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .proto.ParentQuest parent_quest_list = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_parent_quest_list()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.FinishedParentQuestNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.FinishedParentQuestNotify)
  return false;
#undef DO_
}

void FinishedParentQuestNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.FinishedParentQuestNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.ParentQuest parent_quest_list = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->parent_quest_list_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->parent_quest_list(static_cast<int>(i)), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.FinishedParentQuestNotify)
}

::google::protobuf::uint8* FinishedParentQuestNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.FinishedParentQuestNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.ParentQuest parent_quest_list = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->parent_quest_list_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, this->parent_quest_list(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.FinishedParentQuestNotify)
  return target;
}

size_t FinishedParentQuestNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.FinishedParentQuestNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .proto.ParentQuest parent_quest_list = 3;
  {
    unsigned int count = static_cast<unsigned int>(this->parent_quest_list_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->parent_quest_list(static_cast<int>(i)));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool FinishedParentQuestUpdateNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.FinishedParentQuestUpdateNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .proto.ParentQuest parent_quest_list = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(122u /* 122 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_parent_quest_list()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.FinishedParentQuestUpdateNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.FinishedParentQuestUpdateNotify)
  return false;
#undef DO_
}

void FinishedParentQuestUpdateNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.FinishedParentQuestUpdateNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.ParentQuest parent_quest_list = 15;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->parent_quest_list_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      15, this->parent_quest_list(static_cast<int>(i)), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.FinishedParentQuestUpdateNotify)
}

::google::protobuf::uint8* FinishedParentQuestUpdateNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.FinishedParentQuestUpdateNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.ParentQuest parent_quest_list = 15;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->parent_quest_list_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        15, this->parent_quest_list(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.FinishedParentQuestUpdateNotify)
  return target;
}

size_t FinishedParentQuestUpdateNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.FinishedParentQuestUpdateNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .proto.ParentQuest parent_quest_list = 15;
  {
    unsigned int count = static_cast<unsigned int>(this->parent_quest_list_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->parent_quest_list(static_cast<int>(i)));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AddQuestContentProgressReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AddQuestContentProgressReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 add_progress = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &add_progress_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 param = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &param_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 content_type = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(112u /* 112 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &content_type_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.AddQuestContentProgressReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AddQuestContentProgressReq)
  return false;
#undef DO_
}

void AddQuestContentProgressReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AddQuestContentProgressReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 add_progress = 2;
  if (this->add_progress() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->add_progress(), output);
  }

  // uint32 param = 9;
  if (this->param() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(9, this->param(), output);
  }

  // uint32 content_type = 14;
  if (this->content_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(14, this->content_type(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AddQuestContentProgressReq)
}

::google::protobuf::uint8* AddQuestContentProgressReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AddQuestContentProgressReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 add_progress = 2;
  if (this->add_progress() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->add_progress(), target);
  }

  // uint32 param = 9;
  if (this->param() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(9, this->param(), target);
  }

  // uint32 content_type = 14;
  if (this->content_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(14, this->content_type(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AddQuestContentProgressReq)
  return target;
}

size_t AddQuestContentProgressReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AddQuestContentProgressReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 content_type = 14;
  if (this->content_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->content_type());
  }

  // uint32 add_progress = 2;
  if (this->add_progress() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->add_progress());
  }

  // uint32 param = 9;
  if (this->param() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->param());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AddQuestContentProgressRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AddQuestContentProgressRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
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

      // uint32 content_type = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(104u /* 104 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &content_type_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.AddQuestContentProgressRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AddQuestContentProgressRsp)
  return false;
#undef DO_
}

void AddQuestContentProgressRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AddQuestContentProgressRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 retcode = 8;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(8, this->retcode(), output);
  }

  // uint32 content_type = 13;
  if (this->content_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(13, this->content_type(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AddQuestContentProgressRsp)
}

::google::protobuf::uint8* AddQuestContentProgressRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AddQuestContentProgressRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 retcode = 8;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(8, this->retcode(), target);
  }

  // uint32 content_type = 13;
  if (this->content_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(13, this->content_type(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AddQuestContentProgressRsp)
  return target;
}

size_t AddQuestContentProgressRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AddQuestContentProgressRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // int32 retcode = 8;
  if (this->retcode() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->retcode());
  }

  // uint32 content_type = 13;
  if (this->content_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->content_type());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool GetQuestTalkHistoryReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.GetQuestTalkHistoryReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 parent_quest_id = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &parent_quest_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.GetQuestTalkHistoryReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.GetQuestTalkHistoryReq)
  return false;
#undef DO_
}

void GetQuestTalkHistoryReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.GetQuestTalkHistoryReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 parent_quest_id = 5;
  if (this->parent_quest_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->parent_quest_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.GetQuestTalkHistoryReq)
}

::google::protobuf::uint8* GetQuestTalkHistoryReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.GetQuestTalkHistoryReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 parent_quest_id = 5;
  if (this->parent_quest_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->parent_quest_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.GetQuestTalkHistoryReq)
  return target;
}

size_t GetQuestTalkHistoryReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.GetQuestTalkHistoryReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 parent_quest_id = 5;
  if (this->parent_quest_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->parent_quest_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool GetQuestTalkHistoryRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.GetQuestTalkHistoryRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated uint32 talk_id_list = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(58u /* 58 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_talk_id_list())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 1, 58u, input, this->mutable_talk_id_list())));
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

      // uint32 parent_quest_id = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(104u /* 104 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &parent_quest_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.GetQuestTalkHistoryRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.GetQuestTalkHistoryRsp)
  return false;
#undef DO_
}

void GetQuestTalkHistoryRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.GetQuestTalkHistoryRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated uint32 talk_id_list = 7;
  if (this->talk_id_list_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(7, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _talk_id_list_cached_byte_size_));
  }
  for (int i = 0, n = this->talk_id_list_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32NoTag(
      this->talk_id_list(i), output);
  }

  // int32 retcode = 8;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(8, this->retcode(), output);
  }

  // uint32 parent_quest_id = 13;
  if (this->parent_quest_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(13, this->parent_quest_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.GetQuestTalkHistoryRsp)
}

::google::protobuf::uint8* GetQuestTalkHistoryRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.GetQuestTalkHistoryRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated uint32 talk_id_list = 7;
  if (this->talk_id_list_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      7,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::uint32>(
            _talk_id_list_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt32NoTagToArray(this->talk_id_list_, target);
  }

  // int32 retcode = 8;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(8, this->retcode(), target);
  }

  // uint32 parent_quest_id = 13;
  if (this->parent_quest_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(13, this->parent_quest_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.GetQuestTalkHistoryRsp)
  return target;
}

size_t GetQuestTalkHistoryRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.GetQuestTalkHistoryRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated uint32 talk_id_list = 7;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      UInt32Size(this->talk_id_list_);
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _talk_id_list_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // int32 retcode = 8;
  if (this->retcode() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->retcode());
  }

  // uint32 parent_quest_id = 13;
  if (this->parent_quest_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->parent_quest_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool QuestCreateEntityReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.QuestCreateEntityReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 parent_quest_id = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &parent_quest_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 quest_id = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(80u /* 80 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &quest_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.CreateEntityInfo entity = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(90u /* 90 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_entity()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_rewind = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(96u /* 96 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_rewind_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.QuestCreateEntityReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.QuestCreateEntityReq)
  return false;
#undef DO_
}

void QuestCreateEntityReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.QuestCreateEntityReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 parent_quest_id = 4;
  if (this->parent_quest_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->parent_quest_id(), output);
  }

  // uint32 quest_id = 10;
  if (this->quest_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(10, this->quest_id(), output);
  }

  // .proto.CreateEntityInfo entity = 11;
  if (this->has_entity()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      11, *this->entity_, output);
  }

  // bool is_rewind = 12;
  if (this->is_rewind() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(12, this->is_rewind(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.QuestCreateEntityReq)
}

::google::protobuf::uint8* QuestCreateEntityReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.QuestCreateEntityReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 parent_quest_id = 4;
  if (this->parent_quest_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->parent_quest_id(), target);
  }

  // uint32 quest_id = 10;
  if (this->quest_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(10, this->quest_id(), target);
  }

  // .proto.CreateEntityInfo entity = 11;
  if (this->has_entity()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        11, *this->entity_, deterministic, target);
  }

  // bool is_rewind = 12;
  if (this->is_rewind() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(12, this->is_rewind(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.QuestCreateEntityReq)
  return target;
}

size_t QuestCreateEntityReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.QuestCreateEntityReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .proto.CreateEntityInfo entity = 11;
  if (this->has_entity()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->entity_);
  }

  // bool is_rewind = 12;
  if (this->is_rewind() != 0) {
    total_size += 1 + 1;
  }

  // uint32 parent_quest_id = 4;
  if (this->parent_quest_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->parent_quest_id());
  }

  // uint32 quest_id = 10;
  if (this->quest_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->quest_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool QuestCreateEntityRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.QuestCreateEntityRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 quest_id = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &quest_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

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

      // uint32 parent_quest_id = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &parent_quest_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.CreateEntityInfo entity = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(98u /* 98 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_entity()));
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

      // bool is_rewind = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(112u /* 112 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_rewind_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.QuestCreateEntityRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.QuestCreateEntityRsp)
  return false;
#undef DO_
}

void QuestCreateEntityRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.QuestCreateEntityRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 quest_id = 3;
  if (this->quest_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->quest_id(), output);
  }

  // uint32 entity_id = 6;
  if (this->entity_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->entity_id(), output);
  }

  // uint32 parent_quest_id = 7;
  if (this->parent_quest_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->parent_quest_id(), output);
  }

  // .proto.CreateEntityInfo entity = 12;
  if (this->has_entity()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      12, *this->entity_, output);
  }

  // int32 retcode = 13;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(13, this->retcode(), output);
  }

  // bool is_rewind = 14;
  if (this->is_rewind() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(14, this->is_rewind(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.QuestCreateEntityRsp)
}

::google::protobuf::uint8* QuestCreateEntityRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.QuestCreateEntityRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 quest_id = 3;
  if (this->quest_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->quest_id(), target);
  }

  // uint32 entity_id = 6;
  if (this->entity_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, this->entity_id(), target);
  }

  // uint32 parent_quest_id = 7;
  if (this->parent_quest_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(7, this->parent_quest_id(), target);
  }

  // .proto.CreateEntityInfo entity = 12;
  if (this->has_entity()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        12, *this->entity_, deterministic, target);
  }

  // int32 retcode = 13;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(13, this->retcode(), target);
  }

  // bool is_rewind = 14;
  if (this->is_rewind() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(14, this->is_rewind(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.QuestCreateEntityRsp)
  return target;
}

size_t QuestCreateEntityRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.QuestCreateEntityRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .proto.CreateEntityInfo entity = 12;
  if (this->has_entity()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->entity_);
  }

  // uint32 quest_id = 3;
  if (this->quest_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->quest_id());
  }

  // uint32 entity_id = 6;
  if (this->entity_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->entity_id());
  }

  // bool is_rewind = 14;
  if (this->is_rewind() != 0) {
    total_size += 1 + 1;
  }

  // uint32 parent_quest_id = 7;
  if (this->parent_quest_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->parent_quest_id());
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

bool QuestDestroyEntityReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.QuestDestroyEntityReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 entity_id = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(80u /* 80 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &entity_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 quest_id = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(96u /* 96 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &quest_id_)));
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

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.QuestDestroyEntityReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.QuestDestroyEntityReq)
  return false;
#undef DO_
}

void QuestDestroyEntityReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.QuestDestroyEntityReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 entity_id = 10;
  if (this->entity_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(10, this->entity_id(), output);
  }

  // uint32 quest_id = 12;
  if (this->quest_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(12, this->quest_id(), output);
  }

  // uint32 scene_id = 13;
  if (this->scene_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(13, this->scene_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.QuestDestroyEntityReq)
}

::google::protobuf::uint8* QuestDestroyEntityReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.QuestDestroyEntityReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 entity_id = 10;
  if (this->entity_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(10, this->entity_id(), target);
  }

  // uint32 quest_id = 12;
  if (this->quest_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(12, this->quest_id(), target);
  }

  // uint32 scene_id = 13;
  if (this->scene_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(13, this->scene_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.QuestDestroyEntityReq)
  return target;
}

size_t QuestDestroyEntityReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.QuestDestroyEntityReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 scene_id = 13;
  if (this->scene_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->scene_id());
  }

  // uint32 entity_id = 10;
  if (this->entity_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->entity_id());
  }

  // uint32 quest_id = 12;
  if (this->quest_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->quest_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool QuestDestroyEntityRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.QuestDestroyEntityRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
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

      // uint32 quest_id = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(104u /* 104 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &quest_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 scene_id = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(120u /* 120 & 0xFF */)) {

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
  // @@protoc_insertion_point(parse_success:proto.QuestDestroyEntityRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.QuestDestroyEntityRsp)
  return false;
#undef DO_
}

void QuestDestroyEntityRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.QuestDestroyEntityRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 retcode = 8;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(8, this->retcode(), output);
  }

  // uint32 entity_id = 9;
  if (this->entity_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(9, this->entity_id(), output);
  }

  // uint32 quest_id = 13;
  if (this->quest_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(13, this->quest_id(), output);
  }

  // uint32 scene_id = 15;
  if (this->scene_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(15, this->scene_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.QuestDestroyEntityRsp)
}

::google::protobuf::uint8* QuestDestroyEntityRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.QuestDestroyEntityRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 retcode = 8;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(8, this->retcode(), target);
  }

  // uint32 entity_id = 9;
  if (this->entity_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(9, this->entity_id(), target);
  }

  // uint32 quest_id = 13;
  if (this->quest_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(13, this->quest_id(), target);
  }

  // uint32 scene_id = 15;
  if (this->scene_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(15, this->scene_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.QuestDestroyEntityRsp)
  return target;
}

size_t QuestDestroyEntityRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.QuestDestroyEntityRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // int32 retcode = 8;
  if (this->retcode() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->retcode());
  }

  // uint32 entity_id = 9;
  if (this->entity_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->entity_id());
  }

  // uint32 quest_id = 13;
  if (this->quest_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->quest_id());
  }

  // uint32 scene_id = 15;
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

bool ChapterStateNotify_NeedPlayerLevel::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.ChapterStateNotify.NeedPlayerLevel)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 config_need_player_level = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &config_need_player_level_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_limit = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(112u /* 112 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_limit_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.ChapterStateNotify.NeedPlayerLevel)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.ChapterStateNotify.NeedPlayerLevel)
  return false;
#undef DO_
}

void ChapterStateNotify_NeedPlayerLevel::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.ChapterStateNotify.NeedPlayerLevel)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 config_need_player_level = 4;
  if (this->config_need_player_level() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->config_need_player_level(), output);
  }

  // bool is_limit = 14;
  if (this->is_limit() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(14, this->is_limit(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.ChapterStateNotify.NeedPlayerLevel)
}

::google::protobuf::uint8* ChapterStateNotify_NeedPlayerLevel::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.ChapterStateNotify.NeedPlayerLevel)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 config_need_player_level = 4;
  if (this->config_need_player_level() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->config_need_player_level(), target);
  }

  // bool is_limit = 14;
  if (this->is_limit() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(14, this->is_limit(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.ChapterStateNotify.NeedPlayerLevel)
  return target;
}

size_t ChapterStateNotify_NeedPlayerLevel::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.ChapterStateNotify.NeedPlayerLevel)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 config_need_player_level = 4;
  if (this->config_need_player_level() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->config_need_player_level());
  }

  // bool is_limit = 14;
  if (this->is_limit() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool ChapterStateNotify_NeedBeginTime::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.ChapterStateNotify.NeedBeginTime)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bool is_limit = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_limit_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 config_need_begin_time = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &config_need_begin_time_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.ChapterStateNotify.NeedBeginTime)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.ChapterStateNotify.NeedBeginTime)
  return false;
#undef DO_
}

void ChapterStateNotify_NeedBeginTime::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.ChapterStateNotify.NeedBeginTime)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool is_limit = 4;
  if (this->is_limit() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(4, this->is_limit(), output);
  }

  // uint32 config_need_begin_time = 5;
  if (this->config_need_begin_time() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->config_need_begin_time(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.ChapterStateNotify.NeedBeginTime)
}

::google::protobuf::uint8* ChapterStateNotify_NeedBeginTime::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.ChapterStateNotify.NeedBeginTime)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool is_limit = 4;
  if (this->is_limit() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(4, this->is_limit(), target);
  }

  // uint32 config_need_begin_time = 5;
  if (this->config_need_begin_time() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->config_need_begin_time(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.ChapterStateNotify.NeedBeginTime)
  return target;
}

size_t ChapterStateNotify_NeedBeginTime::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.ChapterStateNotify.NeedBeginTime)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // bool is_limit = 4;
  if (this->is_limit() != 0) {
    total_size += 1 + 1;
  }

  // uint32 config_need_begin_time = 5;
  if (this->config_need_begin_time() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->config_need_begin_time());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool ChapterStateNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.ChapterStateNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .proto.ChapterStateNotify.NeedPlayerLevel need_player_level = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_need_player_level()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.ChapterStateNotify.NeedBeginTime need_begin_time = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(74u /* 74 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_need_begin_time()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.ChapterState chapter_state = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(104u /* 104 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_chapter_state(static_cast< ::proto::ChapterState >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 chapter_id = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(120u /* 120 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &chapter_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.ChapterStateNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.ChapterStateNotify)
  return false;
#undef DO_
}

void ChapterStateNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.ChapterStateNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.ChapterStateNotify.NeedPlayerLevel need_player_level = 2;
  if (this->has_need_player_level()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->need_player_level_, output);
  }

  // .proto.ChapterStateNotify.NeedBeginTime need_begin_time = 9;
  if (this->has_need_begin_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      9, *this->need_begin_time_, output);
  }

  // .proto.ChapterState chapter_state = 13;
  if (this->chapter_state() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      13, this->chapter_state(), output);
  }

  // uint32 chapter_id = 15;
  if (this->chapter_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(15, this->chapter_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.ChapterStateNotify)
}

::google::protobuf::uint8* ChapterStateNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.ChapterStateNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.ChapterStateNotify.NeedPlayerLevel need_player_level = 2;
  if (this->has_need_player_level()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->need_player_level_, deterministic, target);
  }

  // .proto.ChapterStateNotify.NeedBeginTime need_begin_time = 9;
  if (this->has_need_begin_time()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        9, *this->need_begin_time_, deterministic, target);
  }

  // .proto.ChapterState chapter_state = 13;
  if (this->chapter_state() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      13, this->chapter_state(), target);
  }

  // uint32 chapter_id = 15;
  if (this->chapter_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(15, this->chapter_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.ChapterStateNotify)
  return target;
}

size_t ChapterStateNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.ChapterStateNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .proto.ChapterStateNotify.NeedPlayerLevel need_player_level = 2;
  if (this->has_need_player_level()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->need_player_level_);
  }

  // .proto.ChapterStateNotify.NeedBeginTime need_begin_time = 9;
  if (this->has_need_begin_time()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->need_begin_time_);
  }

  // .proto.ChapterState chapter_state = 13;
  if (this->chapter_state() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->chapter_state());
  }

  // uint32 chapter_id = 15;
  if (this->chapter_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->chapter_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool QuestProgressUpdateNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.QuestProgressUpdateNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated uint32 finish_progress_list = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_finish_progress_list())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 1, 10u, input, this->mutable_finish_progress_list())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 quest_id = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &quest_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated uint32 fail_progress_list = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(90u /* 90 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_fail_progress_list())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(88u /* 88 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 1, 90u, input, this->mutable_fail_progress_list())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.QuestProgressUpdateNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.QuestProgressUpdateNotify)
  return false;
#undef DO_
}

void QuestProgressUpdateNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.QuestProgressUpdateNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated uint32 finish_progress_list = 1;
  if (this->finish_progress_list_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(1, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _finish_progress_list_cached_byte_size_));
  }
  for (int i = 0, n = this->finish_progress_list_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32NoTag(
      this->finish_progress_list(i), output);
  }

  // uint32 quest_id = 9;
  if (this->quest_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(9, this->quest_id(), output);
  }

  // repeated uint32 fail_progress_list = 11;
  if (this->fail_progress_list_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(11, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _fail_progress_list_cached_byte_size_));
  }
  for (int i = 0, n = this->fail_progress_list_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32NoTag(
      this->fail_progress_list(i), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.QuestProgressUpdateNotify)
}

::google::protobuf::uint8* QuestProgressUpdateNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.QuestProgressUpdateNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated uint32 finish_progress_list = 1;
  if (this->finish_progress_list_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      1,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::uint32>(
            _finish_progress_list_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt32NoTagToArray(this->finish_progress_list_, target);
  }

  // uint32 quest_id = 9;
  if (this->quest_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(9, this->quest_id(), target);
  }

  // repeated uint32 fail_progress_list = 11;
  if (this->fail_progress_list_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      11,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::uint32>(
            _fail_progress_list_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt32NoTagToArray(this->fail_progress_list_, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.QuestProgressUpdateNotify)
  return target;
}

size_t QuestProgressUpdateNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.QuestProgressUpdateNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated uint32 finish_progress_list = 1;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      UInt32Size(this->finish_progress_list_);
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _finish_progress_list_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // repeated uint32 fail_progress_list = 11;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      UInt32Size(this->fail_progress_list_);
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _fail_progress_list_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // uint32 quest_id = 9;
  if (this->quest_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->quest_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool QuestVarOp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.QuestVarOp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bool is_add = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_add_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 value = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &value_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 index = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(112u /* 112 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &index_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.QuestVarOp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.QuestVarOp)
  return false;
#undef DO_
}

void QuestVarOp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.QuestVarOp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool is_add = 5;
  if (this->is_add() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(5, this->is_add(), output);
  }

  // int32 value = 6;
  if (this->value() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(6, this->value(), output);
  }

  // uint32 index = 14;
  if (this->index() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(14, this->index(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.QuestVarOp)
}

::google::protobuf::uint8* QuestVarOp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.QuestVarOp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool is_add = 5;
  if (this->is_add() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(5, this->is_add(), target);
  }

  // int32 value = 6;
  if (this->value() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(6, this->value(), target);
  }

  // uint32 index = 14;
  if (this->index() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(14, this->index(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.QuestVarOp)
  return target;
}

size_t QuestVarOp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.QuestVarOp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 index = 14;
  if (this->index() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->index());
  }

  // bool is_add = 5;
  if (this->is_add() != 0) {
    total_size += 1 + 1;
  }

  // int32 value = 6;
  if (this->value() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->value());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool QuestUpdateQuestVarReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.QuestUpdateQuestVarReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 quest_id = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &quest_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .proto.QuestVarOp quest_var_op_list = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_quest_var_op_list()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 parent_quest_var_seq = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &parent_quest_var_seq_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 parent_quest_id = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(96u /* 96 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &parent_quest_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.QuestUpdateQuestVarReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.QuestUpdateQuestVarReq)
  return false;
#undef DO_
}

void QuestUpdateQuestVarReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.QuestUpdateQuestVarReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 quest_id = 3;
  if (this->quest_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->quest_id(), output);
  }

  // repeated .proto.QuestVarOp quest_var_op_list = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->quest_var_op_list_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->quest_var_op_list(static_cast<int>(i)), output);
  }

  // uint32 parent_quest_var_seq = 9;
  if (this->parent_quest_var_seq() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(9, this->parent_quest_var_seq(), output);
  }

  // uint32 parent_quest_id = 12;
  if (this->parent_quest_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(12, this->parent_quest_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.QuestUpdateQuestVarReq)
}

::google::protobuf::uint8* QuestUpdateQuestVarReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.QuestUpdateQuestVarReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 quest_id = 3;
  if (this->quest_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->quest_id(), target);
  }

  // repeated .proto.QuestVarOp quest_var_op_list = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->quest_var_op_list_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        4, this->quest_var_op_list(static_cast<int>(i)), deterministic, target);
  }

  // uint32 parent_quest_var_seq = 9;
  if (this->parent_quest_var_seq() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(9, this->parent_quest_var_seq(), target);
  }

  // uint32 parent_quest_id = 12;
  if (this->parent_quest_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(12, this->parent_quest_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.QuestUpdateQuestVarReq)
  return target;
}

size_t QuestUpdateQuestVarReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.QuestUpdateQuestVarReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .proto.QuestVarOp quest_var_op_list = 4;
  {
    unsigned int count = static_cast<unsigned int>(this->quest_var_op_list_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->quest_var_op_list(static_cast<int>(i)));
    }
  }

  // uint32 parent_quest_id = 12;
  if (this->parent_quest_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->parent_quest_id());
  }

  // uint32 quest_id = 3;
  if (this->quest_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->quest_id());
  }

  // uint32 parent_quest_var_seq = 9;
  if (this->parent_quest_var_seq() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->parent_quest_var_seq());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool QuestUpdateQuestVarRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.QuestUpdateQuestVarRsp)
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

      // uint32 parent_quest_id = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &parent_quest_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 quest_id = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &quest_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 parent_quest_var_seq = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(120u /* 120 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &parent_quest_var_seq_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.QuestUpdateQuestVarRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.QuestUpdateQuestVarRsp)
  return false;
#undef DO_
}

void QuestUpdateQuestVarRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.QuestUpdateQuestVarRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 retcode = 2;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->retcode(), output);
  }

  // uint32 parent_quest_id = 4;
  if (this->parent_quest_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->parent_quest_id(), output);
  }

  // uint32 quest_id = 9;
  if (this->quest_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(9, this->quest_id(), output);
  }

  // uint32 parent_quest_var_seq = 15;
  if (this->parent_quest_var_seq() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(15, this->parent_quest_var_seq(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.QuestUpdateQuestVarRsp)
}

::google::protobuf::uint8* QuestUpdateQuestVarRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.QuestUpdateQuestVarRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 retcode = 2;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->retcode(), target);
  }

  // uint32 parent_quest_id = 4;
  if (this->parent_quest_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->parent_quest_id(), target);
  }

  // uint32 quest_id = 9;
  if (this->quest_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(9, this->quest_id(), target);
  }

  // uint32 parent_quest_var_seq = 15;
  if (this->parent_quest_var_seq() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(15, this->parent_quest_var_seq(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.QuestUpdateQuestVarRsp)
  return target;
}

size_t QuestUpdateQuestVarRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.QuestUpdateQuestVarRsp)
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

  // uint32 parent_quest_id = 4;
  if (this->parent_quest_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->parent_quest_id());
  }

  // uint32 quest_id = 9;
  if (this->quest_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->quest_id());
  }

  // uint32 parent_quest_var_seq = 15;
  if (this->parent_quest_var_seq() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->parent_quest_var_seq());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool QuestUpdateQuestVarNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.QuestUpdateQuestVarNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated int32 quest_var = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(58u /* 58 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_quest_var())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 58u, input, this->mutable_quest_var())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 parent_quest_id = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(88u /* 88 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &parent_quest_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 parent_quest_var_seq = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(112u /* 112 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &parent_quest_var_seq_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.QuestUpdateQuestVarNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.QuestUpdateQuestVarNotify)
  return false;
#undef DO_
}

void QuestUpdateQuestVarNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.QuestUpdateQuestVarNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated int32 quest_var = 7;
  if (this->quest_var_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(7, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _quest_var_cached_byte_size_));
  }
  for (int i = 0, n = this->quest_var_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32NoTag(
      this->quest_var(i), output);
  }

  // uint32 parent_quest_id = 11;
  if (this->parent_quest_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(11, this->parent_quest_id(), output);
  }

  // uint32 parent_quest_var_seq = 14;
  if (this->parent_quest_var_seq() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(14, this->parent_quest_var_seq(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.QuestUpdateQuestVarNotify)
}

::google::protobuf::uint8* QuestUpdateQuestVarNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.QuestUpdateQuestVarNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated int32 quest_var = 7;
  if (this->quest_var_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      7,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::uint32>(
            _quest_var_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32NoTagToArray(this->quest_var_, target);
  }

  // uint32 parent_quest_id = 11;
  if (this->parent_quest_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(11, this->parent_quest_id(), target);
  }

  // uint32 parent_quest_var_seq = 14;
  if (this->parent_quest_var_seq() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(14, this->parent_quest_var_seq(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.QuestUpdateQuestVarNotify)
  return target;
}

size_t QuestUpdateQuestVarNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.QuestUpdateQuestVarNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated int32 quest_var = 7;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      Int32Size(this->quest_var_);
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _quest_var_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // uint32 parent_quest_id = 11;
  if (this->parent_quest_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->parent_quest_id());
  }

  // uint32 parent_quest_var_seq = 14;
  if (this->parent_quest_var_seq() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->parent_quest_var_seq());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool QuestDestroyNpcReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.QuestDestroyNpcReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 parent_quest_id = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &parent_quest_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 npc_id = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &npc_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.QuestDestroyNpcReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.QuestDestroyNpcReq)
  return false;
#undef DO_
}

void QuestDestroyNpcReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.QuestDestroyNpcReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 parent_quest_id = 4;
  if (this->parent_quest_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->parent_quest_id(), output);
  }

  // uint32 npc_id = 7;
  if (this->npc_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->npc_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.QuestDestroyNpcReq)
}

::google::protobuf::uint8* QuestDestroyNpcReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.QuestDestroyNpcReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 parent_quest_id = 4;
  if (this->parent_quest_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->parent_quest_id(), target);
  }

  // uint32 npc_id = 7;
  if (this->npc_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(7, this->npc_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.QuestDestroyNpcReq)
  return target;
}

size_t QuestDestroyNpcReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.QuestDestroyNpcReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 parent_quest_id = 4;
  if (this->parent_quest_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->parent_quest_id());
  }

  // uint32 npc_id = 7;
  if (this->npc_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->npc_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool QuestDestroyNpcRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.QuestDestroyNpcRsp)
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

      // uint32 npc_id = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &npc_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 parent_quest_id = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &parent_quest_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.QuestDestroyNpcRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.QuestDestroyNpcRsp)
  return false;
#undef DO_
}

void QuestDestroyNpcRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.QuestDestroyNpcRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 retcode = 2;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->retcode(), output);
  }

  // uint32 npc_id = 4;
  if (this->npc_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->npc_id(), output);
  }

  // uint32 parent_quest_id = 6;
  if (this->parent_quest_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->parent_quest_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.QuestDestroyNpcRsp)
}

::google::protobuf::uint8* QuestDestroyNpcRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.QuestDestroyNpcRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 retcode = 2;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->retcode(), target);
  }

  // uint32 npc_id = 4;
  if (this->npc_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->npc_id(), target);
  }

  // uint32 parent_quest_id = 6;
  if (this->parent_quest_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, this->parent_quest_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.QuestDestroyNpcRsp)
  return target;
}

size_t QuestDestroyNpcRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.QuestDestroyNpcRsp)
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

  // uint32 npc_id = 4;
  if (this->npc_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->npc_id());
  }

  // uint32 parent_quest_id = 6;
  if (this->parent_quest_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->parent_quest_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool BargainSnapshot::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.BargainSnapshot)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 expected_price = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &expected_price_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 bargain_id = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &bargain_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 price_low_limit = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(80u /* 80 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &price_low_limit_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 cur_mood = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(104u /* 104 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &cur_mood_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.BargainSnapshot)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.BargainSnapshot)
  return false;
#undef DO_
}

void BargainSnapshot::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.BargainSnapshot)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 expected_price = 6;
  if (this->expected_price() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->expected_price(), output);
  }

  // uint32 bargain_id = 7;
  if (this->bargain_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->bargain_id(), output);
  }

  // uint32 price_low_limit = 10;
  if (this->price_low_limit() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(10, this->price_low_limit(), output);
  }

  // int32 cur_mood = 13;
  if (this->cur_mood() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(13, this->cur_mood(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.BargainSnapshot)
}

::google::protobuf::uint8* BargainSnapshot::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.BargainSnapshot)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 expected_price = 6;
  if (this->expected_price() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, this->expected_price(), target);
  }

  // uint32 bargain_id = 7;
  if (this->bargain_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(7, this->bargain_id(), target);
  }

  // uint32 price_low_limit = 10;
  if (this->price_low_limit() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(10, this->price_low_limit(), target);
  }

  // int32 cur_mood = 13;
  if (this->cur_mood() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(13, this->cur_mood(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.BargainSnapshot)
  return target;
}

size_t BargainSnapshot::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.BargainSnapshot)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 expected_price = 6;
  if (this->expected_price() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->expected_price());
  }

  // uint32 bargain_id = 7;
  if (this->bargain_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->bargain_id());
  }

  // uint32 price_low_limit = 10;
  if (this->price_low_limit() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->price_low_limit());
  }

  // int32 cur_mood = 13;
  if (this->cur_mood() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->cur_mood());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool BargainStartNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.BargainStartNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .proto.BargainSnapshot snapshot = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_snapshot()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 bargain_id = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(96u /* 96 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &bargain_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.BargainStartNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.BargainStartNotify)
  return false;
#undef DO_
}

void BargainStartNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.BargainStartNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.BargainSnapshot snapshot = 2;
  if (this->has_snapshot()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->snapshot_, output);
  }

  // uint32 bargain_id = 12;
  if (this->bargain_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(12, this->bargain_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.BargainStartNotify)
}

::google::protobuf::uint8* BargainStartNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.BargainStartNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.BargainSnapshot snapshot = 2;
  if (this->has_snapshot()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->snapshot_, deterministic, target);
  }

  // uint32 bargain_id = 12;
  if (this->bargain_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(12, this->bargain_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.BargainStartNotify)
  return target;
}

size_t BargainStartNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.BargainStartNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .proto.BargainSnapshot snapshot = 2;
  if (this->has_snapshot()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->snapshot_);
  }

  // uint32 bargain_id = 12;
  if (this->bargain_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->bargain_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool BargainOfferPriceReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.BargainOfferPriceReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 price = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &price_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 bargain_id = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(96u /* 96 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &bargain_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.BargainOfferPriceReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.BargainOfferPriceReq)
  return false;
#undef DO_
}

void BargainOfferPriceReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.BargainOfferPriceReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 price = 7;
  if (this->price() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->price(), output);
  }

  // uint32 bargain_id = 12;
  if (this->bargain_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(12, this->bargain_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.BargainOfferPriceReq)
}

::google::protobuf::uint8* BargainOfferPriceReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.BargainOfferPriceReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 price = 7;
  if (this->price() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(7, this->price(), target);
  }

  // uint32 bargain_id = 12;
  if (this->bargain_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(12, this->bargain_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.BargainOfferPriceReq)
  return target;
}

size_t BargainOfferPriceReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.BargainOfferPriceReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 price = 7;
  if (this->price() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->price());
  }

  // uint32 bargain_id = 12;
  if (this->bargain_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->bargain_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool BargainOfferPriceRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.BargainOfferPriceRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .proto.BargainResultType bargain_result = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_bargain_result(static_cast< ::proto::BargainResultType >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 cur_mood = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &cur_mood_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 result_param = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(88u /* 88 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &result_param_)));
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
  // @@protoc_insertion_point(parse_success:proto.BargainOfferPriceRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.BargainOfferPriceRsp)
  return false;
#undef DO_
}

void BargainOfferPriceRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.BargainOfferPriceRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.BargainResultType bargain_result = 2;
  if (this->bargain_result() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->bargain_result(), output);
  }

  // int32 cur_mood = 7;
  if (this->cur_mood() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(7, this->cur_mood(), output);
  }

  // uint32 result_param = 11;
  if (this->result_param() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(11, this->result_param(), output);
  }

  // int32 retcode = 13;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(13, this->retcode(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.BargainOfferPriceRsp)
}

::google::protobuf::uint8* BargainOfferPriceRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.BargainOfferPriceRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.BargainResultType bargain_result = 2;
  if (this->bargain_result() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->bargain_result(), target);
  }

  // int32 cur_mood = 7;
  if (this->cur_mood() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(7, this->cur_mood(), target);
  }

  // uint32 result_param = 11;
  if (this->result_param() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(11, this->result_param(), target);
  }

  // int32 retcode = 13;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(13, this->retcode(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.BargainOfferPriceRsp)
  return target;
}

size_t BargainOfferPriceRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.BargainOfferPriceRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .proto.BargainResultType bargain_result = 2;
  if (this->bargain_result() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->bargain_result());
  }

  // int32 cur_mood = 7;
  if (this->cur_mood() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->cur_mood());
  }

  // uint32 result_param = 11;
  if (this->result_param() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->result_param());
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

bool BargainTerminateNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.BargainTerminateNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 bargain_id = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(112u /* 112 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &bargain_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.BargainTerminateNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.BargainTerminateNotify)
  return false;
#undef DO_
}

void BargainTerminateNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.BargainTerminateNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 bargain_id = 14;
  if (this->bargain_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(14, this->bargain_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.BargainTerminateNotify)
}

::google::protobuf::uint8* BargainTerminateNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.BargainTerminateNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 bargain_id = 14;
  if (this->bargain_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(14, this->bargain_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.BargainTerminateNotify)
  return target;
}

size_t BargainTerminateNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.BargainTerminateNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 bargain_id = 14;
  if (this->bargain_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->bargain_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool GetBargainDataReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.GetBargainDataReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 bargain_id = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(112u /* 112 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &bargain_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.GetBargainDataReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.GetBargainDataReq)
  return false;
#undef DO_
}

void GetBargainDataReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.GetBargainDataReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 bargain_id = 14;
  if (this->bargain_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(14, this->bargain_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.GetBargainDataReq)
}

::google::protobuf::uint8* GetBargainDataReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.GetBargainDataReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 bargain_id = 14;
  if (this->bargain_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(14, this->bargain_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.GetBargainDataReq)
  return target;
}

size_t GetBargainDataReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.GetBargainDataReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 bargain_id = 14;
  if (this->bargain_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->bargain_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool GetBargainDataRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.GetBargainDataRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 bargain_id = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 64 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &bargain_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.BargainSnapshot snapshot = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(106u /* 106 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_snapshot()));
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
  // @@protoc_insertion_point(parse_success:proto.GetBargainDataRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.GetBargainDataRsp)
  return false;
#undef DO_
}

void GetBargainDataRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.GetBargainDataRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 bargain_id = 8;
  if (this->bargain_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(8, this->bargain_id(), output);
  }

  // .proto.BargainSnapshot snapshot = 13;
  if (this->has_snapshot()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      13, *this->snapshot_, output);
  }

  // int32 retcode = 14;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(14, this->retcode(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.GetBargainDataRsp)
}

::google::protobuf::uint8* GetBargainDataRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.GetBargainDataRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 bargain_id = 8;
  if (this->bargain_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(8, this->bargain_id(), target);
  }

  // .proto.BargainSnapshot snapshot = 13;
  if (this->has_snapshot()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        13, *this->snapshot_, deterministic, target);
  }

  // int32 retcode = 14;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(14, this->retcode(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.GetBargainDataRsp)
  return target;
}

size_t GetBargainDataRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.GetBargainDataRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .proto.BargainSnapshot snapshot = 13;
  if (this->has_snapshot()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->snapshot_);
  }

  // uint32 bargain_id = 8;
  if (this->bargain_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->bargain_id());
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

bool GetAllActivatedBargainDataReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.GetAllActivatedBargainDataReq)
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
  // @@protoc_insertion_point(parse_success:proto.GetAllActivatedBargainDataReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.GetAllActivatedBargainDataReq)
  return false;
#undef DO_
}

void GetAllActivatedBargainDataReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.GetAllActivatedBargainDataReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.GetAllActivatedBargainDataReq)
}

::google::protobuf::uint8* GetAllActivatedBargainDataReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.GetAllActivatedBargainDataReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.GetAllActivatedBargainDataReq)
  return target;
}

size_t GetAllActivatedBargainDataReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.GetAllActivatedBargainDataReq)
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

bool GetAllActivatedBargainDataRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.GetAllActivatedBargainDataRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .proto.BargainSnapshot snapshot_list = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_snapshot_list()));
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
  // @@protoc_insertion_point(parse_success:proto.GetAllActivatedBargainDataRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.GetAllActivatedBargainDataRsp)
  return false;
#undef DO_
}

void GetAllActivatedBargainDataRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.GetAllActivatedBargainDataRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.BargainSnapshot snapshot_list = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->snapshot_list_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->snapshot_list(static_cast<int>(i)), output);
  }

  // int32 retcode = 14;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(14, this->retcode(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.GetAllActivatedBargainDataRsp)
}

::google::protobuf::uint8* GetAllActivatedBargainDataRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.GetAllActivatedBargainDataRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.BargainSnapshot snapshot_list = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->snapshot_list_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, this->snapshot_list(static_cast<int>(i)), deterministic, target);
  }

  // int32 retcode = 14;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(14, this->retcode(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.GetAllActivatedBargainDataRsp)
  return target;
}

size_t GetAllActivatedBargainDataRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.GetAllActivatedBargainDataRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .proto.BargainSnapshot snapshot_list = 2;
  {
    unsigned int count = static_cast<unsigned int>(this->snapshot_list_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->snapshot_list(static_cast<int>(i)));
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

bool ServerCondMeetQuestListUpdateNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.ServerCondMeetQuestListUpdateNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated uint32 add_quest_id_list = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_add_quest_id_list())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 1, 18u, input, this->mutable_add_quest_id_list())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated uint32 del_quest_id_list = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(58u /* 58 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_del_quest_id_list())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 1, 58u, input, this->mutable_del_quest_id_list())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.ServerCondMeetQuestListUpdateNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.ServerCondMeetQuestListUpdateNotify)
  return false;
#undef DO_
}

void ServerCondMeetQuestListUpdateNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.ServerCondMeetQuestListUpdateNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated uint32 add_quest_id_list = 2;
  if (this->add_quest_id_list_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(2, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _add_quest_id_list_cached_byte_size_));
  }
  for (int i = 0, n = this->add_quest_id_list_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32NoTag(
      this->add_quest_id_list(i), output);
  }

  // repeated uint32 del_quest_id_list = 7;
  if (this->del_quest_id_list_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(7, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _del_quest_id_list_cached_byte_size_));
  }
  for (int i = 0, n = this->del_quest_id_list_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32NoTag(
      this->del_quest_id_list(i), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.ServerCondMeetQuestListUpdateNotify)
}

::google::protobuf::uint8* ServerCondMeetQuestListUpdateNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.ServerCondMeetQuestListUpdateNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated uint32 add_quest_id_list = 2;
  if (this->add_quest_id_list_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      2,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::uint32>(
            _add_quest_id_list_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt32NoTagToArray(this->add_quest_id_list_, target);
  }

  // repeated uint32 del_quest_id_list = 7;
  if (this->del_quest_id_list_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      7,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::uint32>(
            _del_quest_id_list_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt32NoTagToArray(this->del_quest_id_list_, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.ServerCondMeetQuestListUpdateNotify)
  return target;
}

size_t ServerCondMeetQuestListUpdateNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.ServerCondMeetQuestListUpdateNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated uint32 add_quest_id_list = 2;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      UInt32Size(this->add_quest_id_list_);
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _add_quest_id_list_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // repeated uint32 del_quest_id_list = 7;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      UInt32Size(this->del_quest_id_list_);
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _del_quest_id_list_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool QuestGlobalVar::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.QuestGlobalVar)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 key = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &key_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 value = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(112u /* 112 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
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
  // @@protoc_insertion_point(parse_success:proto.QuestGlobalVar)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.QuestGlobalVar)
  return false;
#undef DO_
}

void QuestGlobalVar::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.QuestGlobalVar)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 key = 9;
  if (this->key() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(9, this->key(), output);
  }

  // int32 value = 14;
  if (this->value() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(14, this->value(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.QuestGlobalVar)
}

::google::protobuf::uint8* QuestGlobalVar::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.QuestGlobalVar)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 key = 9;
  if (this->key() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(9, this->key(), target);
  }

  // int32 value = 14;
  if (this->value() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(14, this->value(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.QuestGlobalVar)
  return target;
}

size_t QuestGlobalVar::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.QuestGlobalVar)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 key = 9;
  if (this->key() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->key());
  }

  // int32 value = 14;
  if (this->value() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->value());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool QuestGlobalVarNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.QuestGlobalVarNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .proto.QuestGlobalVar var_list = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(98u /* 98 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_var_list()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.QuestGlobalVarNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.QuestGlobalVarNotify)
  return false;
#undef DO_
}

void QuestGlobalVarNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.QuestGlobalVarNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.QuestGlobalVar var_list = 12;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->var_list_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      12, this->var_list(static_cast<int>(i)), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.QuestGlobalVarNotify)
}

::google::protobuf::uint8* QuestGlobalVarNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.QuestGlobalVarNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.QuestGlobalVar var_list = 12;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->var_list_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        12, this->var_list(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.QuestGlobalVarNotify)
  return target;
}

size_t QuestGlobalVarNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.QuestGlobalVarNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .proto.QuestGlobalVar var_list = 12;
  {
    unsigned int count = static_cast<unsigned int>(this->var_list_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->var_list(static_cast<int>(i)));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool QuestTransmitReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.QuestTransmitReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 point_id = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &point_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 quest_id = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(80u /* 80 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &quest_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.QuestTransmitReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.QuestTransmitReq)
  return false;
#undef DO_
}

void QuestTransmitReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.QuestTransmitReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 point_id = 3;
  if (this->point_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->point_id(), output);
  }

  // uint32 quest_id = 10;
  if (this->quest_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(10, this->quest_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.QuestTransmitReq)
}

::google::protobuf::uint8* QuestTransmitReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.QuestTransmitReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 point_id = 3;
  if (this->point_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->point_id(), target);
  }

  // uint32 quest_id = 10;
  if (this->quest_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(10, this->quest_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.QuestTransmitReq)
  return target;
}

size_t QuestTransmitReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.QuestTransmitReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 point_id = 3;
  if (this->point_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->point_id());
  }

  // uint32 quest_id = 10;
  if (this->quest_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->quest_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool QuestTransmitRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.QuestTransmitRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 quest_id = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &quest_id_)));
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

      // uint32 point_id = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 64 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &point_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.QuestTransmitRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.QuestTransmitRsp)
  return false;
#undef DO_
}

void QuestTransmitRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.QuestTransmitRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 quest_id = 5;
  if (this->quest_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->quest_id(), output);
  }

  // int32 retcode = 7;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(7, this->retcode(), output);
  }

  // uint32 point_id = 8;
  if (this->point_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(8, this->point_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.QuestTransmitRsp)
}

::google::protobuf::uint8* QuestTransmitRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.QuestTransmitRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 quest_id = 5;
  if (this->quest_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->quest_id(), target);
  }

  // int32 retcode = 7;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(7, this->retcode(), target);
  }

  // uint32 point_id = 8;
  if (this->point_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(8, this->point_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.QuestTransmitRsp)
  return target;
}

size_t QuestTransmitRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.QuestTransmitRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 point_id = 8;
  if (this->point_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->point_id());
  }

  // uint32 quest_id = 5;
  if (this->quest_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->quest_id());
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

bool PersonalLineAllDataReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.PersonalLineAllDataReq)
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
  // @@protoc_insertion_point(parse_success:proto.PersonalLineAllDataReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.PersonalLineAllDataReq)
  return false;
#undef DO_
}

void PersonalLineAllDataReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.PersonalLineAllDataReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.PersonalLineAllDataReq)
}

::google::protobuf::uint8* PersonalLineAllDataReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.PersonalLineAllDataReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.PersonalLineAllDataReq)
  return target;
}

size_t PersonalLineAllDataReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.PersonalLineAllDataReq)
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

bool LockedPersonallineData::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.LockedPersonallineData)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .proto.LockedPersonallineData.LockReason lock_reason = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_lock_reason(static_cast< ::proto::LockedPersonallineData_LockReason >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 chapter_id = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {
          clear_param();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &param_.chapter_id_)));
          set_has_chapter_id();
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 personal_line_id = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &personal_line_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 level = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(104u /* 104 & 0xFF */)) {
          clear_param();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &param_.level_)));
          set_has_level();
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.LockedPersonallineData)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.LockedPersonallineData)
  return false;
#undef DO_
}

void LockedPersonallineData::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.LockedPersonallineData)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.LockedPersonallineData.LockReason lock_reason = 4;
  if (this->lock_reason() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      4, this->lock_reason(), output);
  }

  // uint32 chapter_id = 5;
  if (has_chapter_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->chapter_id(), output);
  }

  // uint32 personal_line_id = 6;
  if (this->personal_line_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->personal_line_id(), output);
  }

  // uint32 level = 13;
  if (has_level()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(13, this->level(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.LockedPersonallineData)
}

::google::protobuf::uint8* LockedPersonallineData::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.LockedPersonallineData)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.LockedPersonallineData.LockReason lock_reason = 4;
  if (this->lock_reason() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      4, this->lock_reason(), target);
  }

  // uint32 chapter_id = 5;
  if (has_chapter_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->chapter_id(), target);
  }

  // uint32 personal_line_id = 6;
  if (this->personal_line_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, this->personal_line_id(), target);
  }

  // uint32 level = 13;
  if (has_level()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(13, this->level(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.LockedPersonallineData)
  return target;
}

size_t LockedPersonallineData::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.LockedPersonallineData)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .proto.LockedPersonallineData.LockReason lock_reason = 4;
  if (this->lock_reason() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->lock_reason());
  }

  // uint32 personal_line_id = 6;
  if (this->personal_line_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->personal_line_id());
  }

  switch (param_case()) {
    // uint32 chapter_id = 5;
    case kChapterId: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->chapter_id());
      break;
    }
    // uint32 level = 13;
    case kLevel: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->level());
      break;
    }
    case PARAM_NOT_SET: {
      break;
    }
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool PersonalLineAllDataRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.PersonalLineAllDataRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 cur_finished_daily_task_count = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &cur_finished_daily_task_count_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated uint32 can_be_unlocked_personal_line_list = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_can_be_unlocked_personal_line_list())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 1, 34u, input, this->mutable_can_be_unlocked_personal_line_list())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated uint32 ongoing_personal_line_list = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_ongoing_personal_line_list())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 1, 42u, input, this->mutable_ongoing_personal_line_list())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 legendary_key_count = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &legendary_key_count_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .proto.LockedPersonallineData locked_personal_line_list = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(82u /* 82 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_locked_personal_line_list()));
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
  // @@protoc_insertion_point(parse_success:proto.PersonalLineAllDataRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.PersonalLineAllDataRsp)
  return false;
#undef DO_
}

void PersonalLineAllDataRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.PersonalLineAllDataRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 cur_finished_daily_task_count = 2;
  if (this->cur_finished_daily_task_count() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->cur_finished_daily_task_count(), output);
  }

  // repeated uint32 can_be_unlocked_personal_line_list = 4;
  if (this->can_be_unlocked_personal_line_list_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(4, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _can_be_unlocked_personal_line_list_cached_byte_size_));
  }
  for (int i = 0, n = this->can_be_unlocked_personal_line_list_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32NoTag(
      this->can_be_unlocked_personal_line_list(i), output);
  }

  // repeated uint32 ongoing_personal_line_list = 5;
  if (this->ongoing_personal_line_list_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(5, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _ongoing_personal_line_list_cached_byte_size_));
  }
  for (int i = 0, n = this->ongoing_personal_line_list_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32NoTag(
      this->ongoing_personal_line_list(i), output);
  }

  // uint32 legendary_key_count = 7;
  if (this->legendary_key_count() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->legendary_key_count(), output);
  }

  // repeated .proto.LockedPersonallineData locked_personal_line_list = 10;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->locked_personal_line_list_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      10, this->locked_personal_line_list(static_cast<int>(i)), output);
  }

  // int32 retcode = 11;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(11, this->retcode(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.PersonalLineAllDataRsp)
}

::google::protobuf::uint8* PersonalLineAllDataRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.PersonalLineAllDataRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 cur_finished_daily_task_count = 2;
  if (this->cur_finished_daily_task_count() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->cur_finished_daily_task_count(), target);
  }

  // repeated uint32 can_be_unlocked_personal_line_list = 4;
  if (this->can_be_unlocked_personal_line_list_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      4,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::uint32>(
            _can_be_unlocked_personal_line_list_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt32NoTagToArray(this->can_be_unlocked_personal_line_list_, target);
  }

  // repeated uint32 ongoing_personal_line_list = 5;
  if (this->ongoing_personal_line_list_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      5,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::uint32>(
            _ongoing_personal_line_list_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt32NoTagToArray(this->ongoing_personal_line_list_, target);
  }

  // uint32 legendary_key_count = 7;
  if (this->legendary_key_count() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(7, this->legendary_key_count(), target);
  }

  // repeated .proto.LockedPersonallineData locked_personal_line_list = 10;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->locked_personal_line_list_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        10, this->locked_personal_line_list(static_cast<int>(i)), deterministic, target);
  }

  // int32 retcode = 11;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(11, this->retcode(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.PersonalLineAllDataRsp)
  return target;
}

size_t PersonalLineAllDataRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.PersonalLineAllDataRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated uint32 can_be_unlocked_personal_line_list = 4;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      UInt32Size(this->can_be_unlocked_personal_line_list_);
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _can_be_unlocked_personal_line_list_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // repeated uint32 ongoing_personal_line_list = 5;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      UInt32Size(this->ongoing_personal_line_list_);
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _ongoing_personal_line_list_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // repeated .proto.LockedPersonallineData locked_personal_line_list = 10;
  {
    unsigned int count = static_cast<unsigned int>(this->locked_personal_line_list_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->locked_personal_line_list(static_cast<int>(i)));
    }
  }

  // uint32 cur_finished_daily_task_count = 2;
  if (this->cur_finished_daily_task_count() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->cur_finished_daily_task_count());
  }

  // uint32 legendary_key_count = 7;
  if (this->legendary_key_count() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->legendary_key_count());
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

bool RedeemLegendaryKeyReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.RedeemLegendaryKeyReq)
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
  // @@protoc_insertion_point(parse_success:proto.RedeemLegendaryKeyReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.RedeemLegendaryKeyReq)
  return false;
#undef DO_
}

void RedeemLegendaryKeyReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.RedeemLegendaryKeyReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.RedeemLegendaryKeyReq)
}

::google::protobuf::uint8* RedeemLegendaryKeyReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.RedeemLegendaryKeyReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.RedeemLegendaryKeyReq)
  return target;
}

size_t RedeemLegendaryKeyReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.RedeemLegendaryKeyReq)
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

bool RedeemLegendaryKeyRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.RedeemLegendaryKeyRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 legendary_key_count = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &legendary_key_count_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

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
  // @@protoc_insertion_point(parse_success:proto.RedeemLegendaryKeyRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.RedeemLegendaryKeyRsp)
  return false;
#undef DO_
}

void RedeemLegendaryKeyRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.RedeemLegendaryKeyRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 legendary_key_count = 4;
  if (this->legendary_key_count() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->legendary_key_count(), output);
  }

  // int32 retcode = 6;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(6, this->retcode(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.RedeemLegendaryKeyRsp)
}

::google::protobuf::uint8* RedeemLegendaryKeyRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.RedeemLegendaryKeyRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 legendary_key_count = 4;
  if (this->legendary_key_count() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->legendary_key_count(), target);
  }

  // int32 retcode = 6;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(6, this->retcode(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.RedeemLegendaryKeyRsp)
  return target;
}

size_t RedeemLegendaryKeyRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.RedeemLegendaryKeyRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 legendary_key_count = 4;
  if (this->legendary_key_count() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->legendary_key_count());
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

bool UnlockPersonalLineReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.UnlockPersonalLineReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 personal_line_id = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &personal_line_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.UnlockPersonalLineReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.UnlockPersonalLineReq)
  return false;
#undef DO_
}

void UnlockPersonalLineReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.UnlockPersonalLineReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 personal_line_id = 7;
  if (this->personal_line_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->personal_line_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.UnlockPersonalLineReq)
}

::google::protobuf::uint8* UnlockPersonalLineReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.UnlockPersonalLineReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 personal_line_id = 7;
  if (this->personal_line_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(7, this->personal_line_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.UnlockPersonalLineReq)
  return target;
}

size_t UnlockPersonalLineReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.UnlockPersonalLineReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 personal_line_id = 7;
  if (this->personal_line_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->personal_line_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool UnlockPersonalLineRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.UnlockPersonalLineRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 level = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {
          clear_param();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &param_.level_)));
          set_has_level();
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

      // uint32 personal_line_id = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &personal_line_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 chapter_id = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(112u /* 112 & 0xFF */)) {
          clear_param();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &param_.chapter_id_)));
          set_has_chapter_id();
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.UnlockPersonalLineRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.UnlockPersonalLineRsp)
  return false;
#undef DO_
}

void UnlockPersonalLineRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.UnlockPersonalLineRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 level = 3;
  if (has_level()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->level(), output);
  }

  // int32 retcode = 5;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->retcode(), output);
  }

  // uint32 personal_line_id = 6;
  if (this->personal_line_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->personal_line_id(), output);
  }

  // uint32 chapter_id = 14;
  if (has_chapter_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(14, this->chapter_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.UnlockPersonalLineRsp)
}

::google::protobuf::uint8* UnlockPersonalLineRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.UnlockPersonalLineRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 level = 3;
  if (has_level()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->level(), target);
  }

  // int32 retcode = 5;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->retcode(), target);
  }

  // uint32 personal_line_id = 6;
  if (this->personal_line_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, this->personal_line_id(), target);
  }

  // uint32 chapter_id = 14;
  if (has_chapter_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(14, this->chapter_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.UnlockPersonalLineRsp)
  return target;
}

size_t UnlockPersonalLineRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.UnlockPersonalLineRsp)
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

  // uint32 personal_line_id = 6;
  if (this->personal_line_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->personal_line_id());
  }

  switch (param_case()) {
    // uint32 level = 3;
    case kLevel: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->level());
      break;
    }
    // uint32 chapter_id = 14;
    case kChapterId: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->chapter_id());
      break;
    }
    case PARAM_NOT_SET: {
      break;
    }
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool CancelFinishParentQuestNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.CancelFinishParentQuestNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 parent_quest_id = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(80u /* 80 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &parent_quest_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.CancelFinishParentQuestNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.CancelFinishParentQuestNotify)
  return false;
#undef DO_
}

void CancelFinishParentQuestNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.CancelFinishParentQuestNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 parent_quest_id = 10;
  if (this->parent_quest_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(10, this->parent_quest_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.CancelFinishParentQuestNotify)
}

::google::protobuf::uint8* CancelFinishParentQuestNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.CancelFinishParentQuestNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 parent_quest_id = 10;
  if (this->parent_quest_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(10, this->parent_quest_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.CancelFinishParentQuestNotify)
  return target;
}

size_t CancelFinishParentQuestNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.CancelFinishParentQuestNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 parent_quest_id = 10;
  if (this->parent_quest_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->parent_quest_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool QuestUpdateQuestTimeVarNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.QuestUpdateQuestTimeVarNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 parent_quest_id = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &parent_quest_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // map<uint32, uint32> time_var_map = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(66u /* 66 & 0xFF */)) {
          QuestUpdateQuestTimeVarNotify_TimeVarMapEntry::Parser< ::google::protobuf::internal::MapField<
              QuestUpdateQuestTimeVarNotify_TimeVarMapEntry,
              ::google::protobuf::uint32, ::google::protobuf::uint32,
              ::google::protobuf::internal::WireFormatLite::TYPE_UINT32,
              ::google::protobuf::internal::WireFormatLite::TYPE_UINT32,
              0 >,
            ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 > > parser(&time_var_map_);
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
  // @@protoc_insertion_point(parse_success:proto.QuestUpdateQuestTimeVarNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.QuestUpdateQuestTimeVarNotify)
  return false;
#undef DO_
}

void QuestUpdateQuestTimeVarNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.QuestUpdateQuestTimeVarNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 parent_quest_id = 5;
  if (this->parent_quest_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->parent_quest_id(), output);
  }

  // map<uint32, uint32> time_var_map = 8;
  if (!this->time_var_map().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint32, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (output->IsSerializationDeterministic() &&
        this->time_var_map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->time_var_map().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::const_iterator
          it = this->time_var_map().begin();
          it != this->time_var_map().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<QuestUpdateQuestTimeVarNotify_TimeVarMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(time_var_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            8, *entry, output);
      }
    } else {
      ::google::protobuf::scoped_ptr<QuestUpdateQuestTimeVarNotify_TimeVarMapEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::const_iterator
          it = this->time_var_map().begin();
          it != this->time_var_map().end(); ++it) {
        entry.reset(time_var_map_.NewEntryWrapper(
            it->first, it->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            8, *entry, output);
      }
    }
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.QuestUpdateQuestTimeVarNotify)
}

::google::protobuf::uint8* QuestUpdateQuestTimeVarNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.QuestUpdateQuestTimeVarNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 parent_quest_id = 5;
  if (this->parent_quest_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->parent_quest_id(), target);
  }

  // map<uint32, uint32> time_var_map = 8;
  if (!this->time_var_map().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint32, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (deterministic &&
        this->time_var_map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->time_var_map().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::const_iterator
          it = this->time_var_map().begin();
          it != this->time_var_map().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<QuestUpdateQuestTimeVarNotify_TimeVarMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(time_var_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       8, *entry, deterministic, target);
;
      }
    } else {
      ::google::protobuf::scoped_ptr<QuestUpdateQuestTimeVarNotify_TimeVarMapEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::const_iterator
          it = this->time_var_map().begin();
          it != this->time_var_map().end(); ++it) {
        entry.reset(time_var_map_.NewEntryWrapper(
            it->first, it->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       8, *entry, deterministic, target);
;
      }
    }
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.QuestUpdateQuestTimeVarNotify)
  return target;
}

size_t QuestUpdateQuestTimeVarNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.QuestUpdateQuestTimeVarNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // map<uint32, uint32> time_var_map = 8;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->time_var_map_size());
  {
    ::google::protobuf::scoped_ptr<QuestUpdateQuestTimeVarNotify_TimeVarMapEntry> entry;
    for (::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::const_iterator
        it = this->time_var_map().begin();
        it != this->time_var_map().end(); ++it) {
      entry.reset(time_var_map_.NewEntryWrapper(it->first, it->second));
      total_size += ::google::protobuf::internal::WireFormatLite::
          MessageSizeNoVirtual(*entry);
    }
  }

  // uint32 parent_quest_id = 5;
  if (this->parent_quest_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->parent_quest_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool PersonalLineNewUnlockNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.PersonalLineNewUnlockNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated uint32 personal_line_id_list = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(90u /* 90 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_personal_line_id_list())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(88u /* 88 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 1, 90u, input, this->mutable_personal_line_id_list())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.PersonalLineNewUnlockNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.PersonalLineNewUnlockNotify)
  return false;
#undef DO_
}

void PersonalLineNewUnlockNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.PersonalLineNewUnlockNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated uint32 personal_line_id_list = 11;
  if (this->personal_line_id_list_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(11, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _personal_line_id_list_cached_byte_size_));
  }
  for (int i = 0, n = this->personal_line_id_list_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32NoTag(
      this->personal_line_id_list(i), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.PersonalLineNewUnlockNotify)
}

::google::protobuf::uint8* PersonalLineNewUnlockNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.PersonalLineNewUnlockNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated uint32 personal_line_id_list = 11;
  if (this->personal_line_id_list_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      11,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::uint32>(
            _personal_line_id_list_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt32NoTagToArray(this->personal_line_id_list_, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.PersonalLineNewUnlockNotify)
  return target;
}

size_t PersonalLineNewUnlockNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.PersonalLineNewUnlockNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated uint32 personal_line_id_list = 11;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      UInt32Size(this->personal_line_id_list_);
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _personal_line_id_list_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool NpcTalkStateNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.NpcTalkStateNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bool is_ban = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_ban_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.NpcTalkStateNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.NpcTalkStateNotify)
  return false;
#undef DO_
}

void NpcTalkStateNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.NpcTalkStateNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool is_ban = 1;
  if (this->is_ban() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->is_ban(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.NpcTalkStateNotify)
}

::google::protobuf::uint8* NpcTalkStateNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.NpcTalkStateNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool is_ban = 1;
  if (this->is_ban() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->is_ban(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.NpcTalkStateNotify)
  return target;
}

size_t NpcTalkStateNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.NpcTalkStateNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // bool is_ban = 1;
  if (this->is_ban() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool GetQuestLackingResourceReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.GetQuestLackingResourceReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 quest_id = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(120u /* 120 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &quest_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.GetQuestLackingResourceReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.GetQuestLackingResourceReq)
  return false;
#undef DO_
}

void GetQuestLackingResourceReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.GetQuestLackingResourceReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 quest_id = 15;
  if (this->quest_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(15, this->quest_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.GetQuestLackingResourceReq)
}

::google::protobuf::uint8* GetQuestLackingResourceReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.GetQuestLackingResourceReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 quest_id = 15;
  if (this->quest_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(15, this->quest_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.GetQuestLackingResourceReq)
  return target;
}

size_t GetQuestLackingResourceReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.GetQuestLackingResourceReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 quest_id = 15;
  if (this->quest_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->quest_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool GetQuestLackingResourceRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.GetQuestLackingResourceRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // map<uint32, uint32> lacked_place_map = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          GetQuestLackingResourceRsp_LackedPlaceMapEntry::Parser< ::google::protobuf::internal::MapField<
              GetQuestLackingResourceRsp_LackedPlaceMapEntry,
              ::google::protobuf::uint32, ::google::protobuf::uint32,
              ::google::protobuf::internal::WireFormatLite::TYPE_UINT32,
              ::google::protobuf::internal::WireFormatLite::TYPE_UINT32,
              0 >,
            ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 > > parser(&lacked_place_map_);
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
              input, &parser));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // map<uint32, uint32> lacked_npc_map = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          GetQuestLackingResourceRsp_LackedNpcMapEntry::Parser< ::google::protobuf::internal::MapField<
              GetQuestLackingResourceRsp_LackedNpcMapEntry,
              ::google::protobuf::uint32, ::google::protobuf::uint32,
              ::google::protobuf::internal::WireFormatLite::TYPE_UINT32,
              ::google::protobuf::internal::WireFormatLite::TYPE_UINT32,
              0 >,
            ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 > > parser(&lacked_npc_map_);
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
              input, &parser));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 quest_id = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &quest_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated uint32 lacked_place_list = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(74u /* 74 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_lacked_place_list())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 1, 74u, input, this->mutable_lacked_place_list())));
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

      // repeated uint32 lacked_npc_list = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(122u /* 122 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_lacked_npc_list())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(120u /* 120 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 1, 122u, input, this->mutable_lacked_npc_list())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.GetQuestLackingResourceRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.GetQuestLackingResourceRsp)
  return false;
#undef DO_
}

void GetQuestLackingResourceRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.GetQuestLackingResourceRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // map<uint32, uint32> lacked_place_map = 1;
  if (!this->lacked_place_map().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint32, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (output->IsSerializationDeterministic() &&
        this->lacked_place_map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->lacked_place_map().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::const_iterator
          it = this->lacked_place_map().begin();
          it != this->lacked_place_map().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<GetQuestLackingResourceRsp_LackedPlaceMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(lacked_place_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            1, *entry, output);
      }
    } else {
      ::google::protobuf::scoped_ptr<GetQuestLackingResourceRsp_LackedPlaceMapEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::const_iterator
          it = this->lacked_place_map().begin();
          it != this->lacked_place_map().end(); ++it) {
        entry.reset(lacked_place_map_.NewEntryWrapper(
            it->first, it->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            1, *entry, output);
      }
    }
  }

  // map<uint32, uint32> lacked_npc_map = 3;
  if (!this->lacked_npc_map().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint32, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (output->IsSerializationDeterministic() &&
        this->lacked_npc_map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->lacked_npc_map().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::const_iterator
          it = this->lacked_npc_map().begin();
          it != this->lacked_npc_map().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<GetQuestLackingResourceRsp_LackedNpcMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(lacked_npc_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            3, *entry, output);
      }
    } else {
      ::google::protobuf::scoped_ptr<GetQuestLackingResourceRsp_LackedNpcMapEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::const_iterator
          it = this->lacked_npc_map().begin();
          it != this->lacked_npc_map().end(); ++it) {
        entry.reset(lacked_npc_map_.NewEntryWrapper(
            it->first, it->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            3, *entry, output);
      }
    }
  }

  // uint32 quest_id = 6;
  if (this->quest_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->quest_id(), output);
  }

  // repeated uint32 lacked_place_list = 9;
  if (this->lacked_place_list_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(9, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _lacked_place_list_cached_byte_size_));
  }
  for (int i = 0, n = this->lacked_place_list_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32NoTag(
      this->lacked_place_list(i), output);
  }

  // int32 retcode = 14;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(14, this->retcode(), output);
  }

  // repeated uint32 lacked_npc_list = 15;
  if (this->lacked_npc_list_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(15, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _lacked_npc_list_cached_byte_size_));
  }
  for (int i = 0, n = this->lacked_npc_list_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32NoTag(
      this->lacked_npc_list(i), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.GetQuestLackingResourceRsp)
}

::google::protobuf::uint8* GetQuestLackingResourceRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.GetQuestLackingResourceRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // map<uint32, uint32> lacked_place_map = 1;
  if (!this->lacked_place_map().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint32, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (deterministic &&
        this->lacked_place_map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->lacked_place_map().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::const_iterator
          it = this->lacked_place_map().begin();
          it != this->lacked_place_map().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<GetQuestLackingResourceRsp_LackedPlaceMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(lacked_place_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       1, *entry, deterministic, target);
;
      }
    } else {
      ::google::protobuf::scoped_ptr<GetQuestLackingResourceRsp_LackedPlaceMapEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::const_iterator
          it = this->lacked_place_map().begin();
          it != this->lacked_place_map().end(); ++it) {
        entry.reset(lacked_place_map_.NewEntryWrapper(
            it->first, it->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       1, *entry, deterministic, target);
;
      }
    }
  }

  // map<uint32, uint32> lacked_npc_map = 3;
  if (!this->lacked_npc_map().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint32, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (deterministic &&
        this->lacked_npc_map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->lacked_npc_map().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::const_iterator
          it = this->lacked_npc_map().begin();
          it != this->lacked_npc_map().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<GetQuestLackingResourceRsp_LackedNpcMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(lacked_npc_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       3, *entry, deterministic, target);
;
      }
    } else {
      ::google::protobuf::scoped_ptr<GetQuestLackingResourceRsp_LackedNpcMapEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::const_iterator
          it = this->lacked_npc_map().begin();
          it != this->lacked_npc_map().end(); ++it) {
        entry.reset(lacked_npc_map_.NewEntryWrapper(
            it->first, it->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       3, *entry, deterministic, target);
;
      }
    }
  }

  // uint32 quest_id = 6;
  if (this->quest_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, this->quest_id(), target);
  }

  // repeated uint32 lacked_place_list = 9;
  if (this->lacked_place_list_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      9,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::uint32>(
            _lacked_place_list_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt32NoTagToArray(this->lacked_place_list_, target);
  }

  // int32 retcode = 14;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(14, this->retcode(), target);
  }

  // repeated uint32 lacked_npc_list = 15;
  if (this->lacked_npc_list_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      15,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::uint32>(
            _lacked_npc_list_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt32NoTagToArray(this->lacked_npc_list_, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.GetQuestLackingResourceRsp)
  return target;
}

size_t GetQuestLackingResourceRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.GetQuestLackingResourceRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // map<uint32, uint32> lacked_place_map = 1;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->lacked_place_map_size());
  {
    ::google::protobuf::scoped_ptr<GetQuestLackingResourceRsp_LackedPlaceMapEntry> entry;
    for (::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::const_iterator
        it = this->lacked_place_map().begin();
        it != this->lacked_place_map().end(); ++it) {
      entry.reset(lacked_place_map_.NewEntryWrapper(it->first, it->second));
      total_size += ::google::protobuf::internal::WireFormatLite::
          MessageSizeNoVirtual(*entry);
    }
  }

  // map<uint32, uint32> lacked_npc_map = 3;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->lacked_npc_map_size());
  {
    ::google::protobuf::scoped_ptr<GetQuestLackingResourceRsp_LackedNpcMapEntry> entry;
    for (::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::const_iterator
        it = this->lacked_npc_map().begin();
        it != this->lacked_npc_map().end(); ++it) {
      entry.reset(lacked_npc_map_.NewEntryWrapper(it->first, it->second));
      total_size += ::google::protobuf::internal::WireFormatLite::
          MessageSizeNoVirtual(*entry);
    }
  }

  // repeated uint32 lacked_place_list = 9;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      UInt32Size(this->lacked_place_list_);
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _lacked_place_list_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // repeated uint32 lacked_npc_list = 15;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      UInt32Size(this->lacked_npc_list_);
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _lacked_npc_list_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // uint32 quest_id = 6;
  if (this->quest_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->quest_id());
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

bool GetParentQuestVideoKeyReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.GetParentQuestVideoKeyReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 parent_quest_id = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(112u /* 112 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &parent_quest_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.GetParentQuestVideoKeyReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.GetParentQuestVideoKeyReq)
  return false;
#undef DO_
}

void GetParentQuestVideoKeyReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.GetParentQuestVideoKeyReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 parent_quest_id = 14;
  if (this->parent_quest_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(14, this->parent_quest_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.GetParentQuestVideoKeyReq)
}

::google::protobuf::uint8* GetParentQuestVideoKeyReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.GetParentQuestVideoKeyReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 parent_quest_id = 14;
  if (this->parent_quest_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(14, this->parent_quest_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.GetParentQuestVideoKeyReq)
  return target;
}

size_t GetParentQuestVideoKeyReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.GetParentQuestVideoKeyReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 parent_quest_id = 14;
  if (this->parent_quest_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->parent_quest_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool GetParentQuestVideoKeyRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.GetParentQuestVideoKeyRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint64 video_key = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &video_key_)));
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

      // uint32 parent_quest_id = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(88u /* 88 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &parent_quest_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.GetParentQuestVideoKeyRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.GetParentQuestVideoKeyRsp)
  return false;
#undef DO_
}

void GetParentQuestVideoKeyRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.GetParentQuestVideoKeyRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 video_key = 2;
  if (this->video_key() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(2, this->video_key(), output);
  }

  // int32 retcode = 9;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(9, this->retcode(), output);
  }

  // uint32 parent_quest_id = 11;
  if (this->parent_quest_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(11, this->parent_quest_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.GetParentQuestVideoKeyRsp)
}

::google::protobuf::uint8* GetParentQuestVideoKeyRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.GetParentQuestVideoKeyRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 video_key = 2;
  if (this->video_key() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(2, this->video_key(), target);
  }

  // int32 retcode = 9;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(9, this->retcode(), target);
  }

  // uint32 parent_quest_id = 11;
  if (this->parent_quest_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(11, this->parent_quest_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.GetParentQuestVideoKeyRsp)
  return target;
}

size_t GetParentQuestVideoKeyRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.GetParentQuestVideoKeyRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint64 video_key = 2;
  if (this->video_key() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->video_key());
  }

  // int32 retcode = 9;
  if (this->retcode() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->retcode());
  }

  // uint32 parent_quest_id = 11;
  if (this->parent_quest_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->parent_quest_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool ParentQuestInferenceDataNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.ParentQuestInferenceDataNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 parent_quest_id = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 64 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &parent_quest_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .proto.InferencePageInfo inference_page_list = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(90u /* 90 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_inference_page_list()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.ParentQuestInferenceDataNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.ParentQuestInferenceDataNotify)
  return false;
#undef DO_
}

void ParentQuestInferenceDataNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.ParentQuestInferenceDataNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 parent_quest_id = 8;
  if (this->parent_quest_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(8, this->parent_quest_id(), output);
  }

  // repeated .proto.InferencePageInfo inference_page_list = 11;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->inference_page_list_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      11, this->inference_page_list(static_cast<int>(i)), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.ParentQuestInferenceDataNotify)
}

::google::protobuf::uint8* ParentQuestInferenceDataNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.ParentQuestInferenceDataNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 parent_quest_id = 8;
  if (this->parent_quest_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(8, this->parent_quest_id(), target);
  }

  // repeated .proto.InferencePageInfo inference_page_list = 11;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->inference_page_list_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        11, this->inference_page_list(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.ParentQuestInferenceDataNotify)
  return target;
}

size_t ParentQuestInferenceDataNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.ParentQuestInferenceDataNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .proto.InferencePageInfo inference_page_list = 11;
  {
    unsigned int count = static_cast<unsigned int>(this->inference_page_list_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->inference_page_list(static_cast<int>(i)));
    }
  }

  // uint32 parent_quest_id = 8;
  if (this->parent_quest_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->parent_quest_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool InterpretInferenceWordReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.InterpretInferenceWordReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 page_id = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(80u /* 80 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &page_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 word_id = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(96u /* 96 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &word_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.InterpretInferenceWordReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.InterpretInferenceWordReq)
  return false;
#undef DO_
}

void InterpretInferenceWordReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.InterpretInferenceWordReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 page_id = 10;
  if (this->page_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(10, this->page_id(), output);
  }

  // uint32 word_id = 12;
  if (this->word_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(12, this->word_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.InterpretInferenceWordReq)
}

::google::protobuf::uint8* InterpretInferenceWordReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.InterpretInferenceWordReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 page_id = 10;
  if (this->page_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(10, this->page_id(), target);
  }

  // uint32 word_id = 12;
  if (this->word_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(12, this->word_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.InterpretInferenceWordReq)
  return target;
}

size_t InterpretInferenceWordReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.InterpretInferenceWordReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 page_id = 10;
  if (this->page_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->page_id());
  }

  // uint32 word_id = 12;
  if (this->word_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->word_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool InterpretInferenceWordRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.InterpretInferenceWordRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 page_id = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &page_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 word_id = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &word_id_)));
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
  // @@protoc_insertion_point(parse_success:proto.InterpretInferenceWordRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.InterpretInferenceWordRsp)
  return false;
#undef DO_
}

void InterpretInferenceWordRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.InterpretInferenceWordRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 page_id = 2;
  if (this->page_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->page_id(), output);
  }

  // uint32 word_id = 6;
  if (this->word_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->word_id(), output);
  }

  // int32 retcode = 13;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(13, this->retcode(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.InterpretInferenceWordRsp)
}

::google::protobuf::uint8* InterpretInferenceWordRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.InterpretInferenceWordRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 page_id = 2;
  if (this->page_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->page_id(), target);
  }

  // uint32 word_id = 6;
  if (this->word_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, this->word_id(), target);
  }

  // int32 retcode = 13;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(13, this->retcode(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.InterpretInferenceWordRsp)
  return target;
}

size_t InterpretInferenceWordRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.InterpretInferenceWordRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 page_id = 2;
  if (this->page_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->page_id());
  }

  // uint32 word_id = 6;
  if (this->word_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->word_id());
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

bool AssociateInferenceWordReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AssociateInferenceWordReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 page_id = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &page_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 base_word_id = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(88u /* 88 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &base_word_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 associate_word_id = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(104u /* 104 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &associate_word_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.AssociateInferenceWordReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AssociateInferenceWordReq)
  return false;
#undef DO_
}

void AssociateInferenceWordReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AssociateInferenceWordReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 page_id = 3;
  if (this->page_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->page_id(), output);
  }

  // uint32 base_word_id = 11;
  if (this->base_word_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(11, this->base_word_id(), output);
  }

  // uint32 associate_word_id = 13;
  if (this->associate_word_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(13, this->associate_word_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AssociateInferenceWordReq)
}

::google::protobuf::uint8* AssociateInferenceWordReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AssociateInferenceWordReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 page_id = 3;
  if (this->page_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->page_id(), target);
  }

  // uint32 base_word_id = 11;
  if (this->base_word_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(11, this->base_word_id(), target);
  }

  // uint32 associate_word_id = 13;
  if (this->associate_word_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(13, this->associate_word_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AssociateInferenceWordReq)
  return target;
}

size_t AssociateInferenceWordReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AssociateInferenceWordReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 associate_word_id = 13;
  if (this->associate_word_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->associate_word_id());
  }

  // uint32 page_id = 3;
  if (this->page_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->page_id());
  }

  // uint32 base_word_id = 11;
  if (this->base_word_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->base_word_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AssociateInferenceWordRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AssociateInferenceWordRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 base_word_id = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &base_word_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 page_id = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(88u /* 88 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &page_id_)));
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

      // uint32 associate_word_id = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(112u /* 112 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &associate_word_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.AssociateInferenceWordRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AssociateInferenceWordRsp)
  return false;
#undef DO_
}

void AssociateInferenceWordRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AssociateInferenceWordRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 base_word_id = 5;
  if (this->base_word_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->base_word_id(), output);
  }

  // uint32 page_id = 11;
  if (this->page_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(11, this->page_id(), output);
  }

  // int32 retcode = 13;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(13, this->retcode(), output);
  }

  // uint32 associate_word_id = 14;
  if (this->associate_word_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(14, this->associate_word_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AssociateInferenceWordRsp)
}

::google::protobuf::uint8* AssociateInferenceWordRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AssociateInferenceWordRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 base_word_id = 5;
  if (this->base_word_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->base_word_id(), target);
  }

  // uint32 page_id = 11;
  if (this->page_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(11, this->page_id(), target);
  }

  // int32 retcode = 13;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(13, this->retcode(), target);
  }

  // uint32 associate_word_id = 14;
  if (this->associate_word_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(14, this->associate_word_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AssociateInferenceWordRsp)
  return target;
}

size_t AssociateInferenceWordRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AssociateInferenceWordRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 base_word_id = 5;
  if (this->base_word_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->base_word_id());
  }

  // uint32 page_id = 11;
  if (this->page_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->page_id());
  }

  // int32 retcode = 13;
  if (this->retcode() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->retcode());
  }

  // uint32 associate_word_id = 14;
  if (this->associate_word_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->associate_word_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool SubmitInferenceWordReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.SubmitInferenceWordReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 word_id = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &word_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 page_id = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(104u /* 104 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &page_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.SubmitInferenceWordReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.SubmitInferenceWordReq)
  return false;
#undef DO_
}

void SubmitInferenceWordReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.SubmitInferenceWordReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 word_id = 9;
  if (this->word_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(9, this->word_id(), output);
  }

  // uint32 page_id = 13;
  if (this->page_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(13, this->page_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.SubmitInferenceWordReq)
}

::google::protobuf::uint8* SubmitInferenceWordReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.SubmitInferenceWordReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 word_id = 9;
  if (this->word_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(9, this->word_id(), target);
  }

  // uint32 page_id = 13;
  if (this->page_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(13, this->page_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.SubmitInferenceWordReq)
  return target;
}

size_t SubmitInferenceWordReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.SubmitInferenceWordReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 word_id = 9;
  if (this->word_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->word_id());
  }

  // uint32 page_id = 13;
  if (this->page_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->page_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool SubmitInferenceWordRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.SubmitInferenceWordRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 word_id = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &word_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 conclusion_id = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &conclusion_id_)));
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

      // uint32 page_id = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(104u /* 104 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &page_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.SubmitInferenceWordRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.SubmitInferenceWordRsp)
  return false;
#undef DO_
}

void SubmitInferenceWordRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.SubmitInferenceWordRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 word_id = 6;
  if (this->word_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->word_id(), output);
  }

  // uint32 conclusion_id = 7;
  if (this->conclusion_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->conclusion_id(), output);
  }

  // int32 retcode = 8;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(8, this->retcode(), output);
  }

  // uint32 page_id = 13;
  if (this->page_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(13, this->page_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.SubmitInferenceWordRsp)
}

::google::protobuf::uint8* SubmitInferenceWordRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.SubmitInferenceWordRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 word_id = 6;
  if (this->word_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, this->word_id(), target);
  }

  // uint32 conclusion_id = 7;
  if (this->conclusion_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(7, this->conclusion_id(), target);
  }

  // int32 retcode = 8;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(8, this->retcode(), target);
  }

  // uint32 page_id = 13;
  if (this->page_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(13, this->page_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.SubmitInferenceWordRsp)
  return target;
}

size_t SubmitInferenceWordRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.SubmitInferenceWordRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 word_id = 6;
  if (this->word_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->word_id());
  }

  // uint32 conclusion_id = 7;
  if (this->conclusion_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->conclusion_id());
  }

  // int32 retcode = 8;
  if (this->retcode() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->retcode());
  }

  // uint32 page_id = 13;
  if (this->page_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->page_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool QuestRenameAvatarReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.QuestRenameAvatarReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bool is_check = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_check_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 rename_id = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &rename_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string avatar_name = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(90u /* 90 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_avatar_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->avatar_name().data(), static_cast<int>(this->avatar_name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.QuestRenameAvatarReq.avatar_name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.QuestRenameAvatarReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.QuestRenameAvatarReq)
  return false;
#undef DO_
}

void QuestRenameAvatarReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.QuestRenameAvatarReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool is_check = 6;
  if (this->is_check() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(6, this->is_check(), output);
  }

  // uint32 rename_id = 9;
  if (this->rename_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(9, this->rename_id(), output);
  }

  // string avatar_name = 11;
  if (this->avatar_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->avatar_name().data(), static_cast<int>(this->avatar_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.QuestRenameAvatarReq.avatar_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      11, this->avatar_name(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.QuestRenameAvatarReq)
}

::google::protobuf::uint8* QuestRenameAvatarReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.QuestRenameAvatarReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool is_check = 6;
  if (this->is_check() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(6, this->is_check(), target);
  }

  // uint32 rename_id = 9;
  if (this->rename_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(9, this->rename_id(), target);
  }

  // string avatar_name = 11;
  if (this->avatar_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->avatar_name().data(), static_cast<int>(this->avatar_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.QuestRenameAvatarReq.avatar_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        11, this->avatar_name(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.QuestRenameAvatarReq)
  return target;
}

size_t QuestRenameAvatarReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.QuestRenameAvatarReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string avatar_name = 11;
  if (this->avatar_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->avatar_name());
  }

  // bool is_check = 6;
  if (this->is_check() != 0) {
    total_size += 1 + 1;
  }

  // uint32 rename_id = 9;
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

bool QuestRenameAvatarRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.QuestRenameAvatarRsp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bool is_check = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_check_)));
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

      // uint32 rename_id = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(104u /* 104 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &rename_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string avatar_name = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(122u /* 122 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_avatar_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->avatar_name().data(), static_cast<int>(this->avatar_name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.QuestRenameAvatarRsp.avatar_name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.QuestRenameAvatarRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.QuestRenameAvatarRsp)
  return false;
#undef DO_
}

void QuestRenameAvatarRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.QuestRenameAvatarRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool is_check = 2;
  if (this->is_check() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->is_check(), output);
  }

  // int32 retcode = 10;
  if (this->retcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(10, this->retcode(), output);
  }

  // uint32 rename_id = 13;
  if (this->rename_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(13, this->rename_id(), output);
  }

  // string avatar_name = 15;
  if (this->avatar_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->avatar_name().data(), static_cast<int>(this->avatar_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.QuestRenameAvatarRsp.avatar_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      15, this->avatar_name(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.QuestRenameAvatarRsp)
}

::google::protobuf::uint8* QuestRenameAvatarRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.QuestRenameAvatarRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool is_check = 2;
  if (this->is_check() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(2, this->is_check(), target);
  }

  // int32 retcode = 10;
  if (this->retcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(10, this->retcode(), target);
  }

  // uint32 rename_id = 13;
  if (this->rename_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(13, this->rename_id(), target);
  }

  // string avatar_name = 15;
  if (this->avatar_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->avatar_name().data(), static_cast<int>(this->avatar_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.QuestRenameAvatarRsp.avatar_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        15, this->avatar_name(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.QuestRenameAvatarRsp)
  return target;
}

size_t QuestRenameAvatarRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.QuestRenameAvatarRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string avatar_name = 15;
  if (this->avatar_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->avatar_name());
  }

  // uint32 rename_id = 13;
  if (this->rename_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->rename_id());
  }

  // bool is_check = 2;
  if (this->is_check() != 0) {
    total_size += 1 + 1;
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
}