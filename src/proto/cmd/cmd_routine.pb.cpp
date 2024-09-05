#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "cmd/cmd_routine.pb.h"

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

bool PlayerRoutineInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.PlayerRoutineInfo)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 routine_type = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &routine_type_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 finished_num = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(104u /* 104 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &finished_num_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.PlayerRoutineInfo)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.PlayerRoutineInfo)
  return false;
#undef DO_
}

void PlayerRoutineInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.PlayerRoutineInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 routine_type = 2;
  if (this->routine_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->routine_type(), output);
  }

  // uint32 finished_num = 13;
  if (this->finished_num() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(13, this->finished_num(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.PlayerRoutineInfo)
}

::google::protobuf::uint8* PlayerRoutineInfo::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.PlayerRoutineInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 routine_type = 2;
  if (this->routine_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->routine_type(), target);
  }

  // uint32 finished_num = 13;
  if (this->finished_num() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(13, this->finished_num(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.PlayerRoutineInfo)
  return target;
}

size_t PlayerRoutineInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.PlayerRoutineInfo)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 routine_type = 2;
  if (this->routine_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->routine_type());
  }

  // uint32 finished_num = 13;
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

bool PlayerRoutineDataNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.PlayerRoutineDataNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .proto.PlayerRoutineInfo routine_info_list = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(98u /* 98 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_routine_info_list()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.PlayerRoutineDataNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.PlayerRoutineDataNotify)
  return false;
#undef DO_
}

void PlayerRoutineDataNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.PlayerRoutineDataNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.PlayerRoutineInfo routine_info_list = 12;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->routine_info_list_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      12, this->routine_info_list(static_cast<int>(i)), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.PlayerRoutineDataNotify)
}

::google::protobuf::uint8* PlayerRoutineDataNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.PlayerRoutineDataNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.PlayerRoutineInfo routine_info_list = 12;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->routine_info_list_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        12, this->routine_info_list(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.PlayerRoutineDataNotify)
  return target;
}

size_t PlayerRoutineDataNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.PlayerRoutineDataNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .proto.PlayerRoutineInfo routine_info_list = 12;
  {
    unsigned int count = static_cast<unsigned int>(this->routine_info_list_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->routine_info_list(static_cast<int>(i)));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool WorldRoutineInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.WorldRoutineInfo)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 routine_id = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &routine_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 progress = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &progress_)));
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

      // uint32 finish_progress = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(120u /* 120 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &finish_progress_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.WorldRoutineInfo)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.WorldRoutineInfo)
  return false;
#undef DO_
}

void WorldRoutineInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.WorldRoutineInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 routine_id = 4;
  if (this->routine_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->routine_id(), output);
  }

  // uint32 progress = 5;
  if (this->progress() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->progress(), output);
  }

  // bool is_finished = 9;
  if (this->is_finished() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(9, this->is_finished(), output);
  }

  // uint32 finish_progress = 15;
  if (this->finish_progress() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(15, this->finish_progress(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.WorldRoutineInfo)
}

::google::protobuf::uint8* WorldRoutineInfo::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.WorldRoutineInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 routine_id = 4;
  if (this->routine_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->routine_id(), target);
  }

  // uint32 progress = 5;
  if (this->progress() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->progress(), target);
  }

  // bool is_finished = 9;
  if (this->is_finished() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(9, this->is_finished(), target);
  }

  // uint32 finish_progress = 15;
  if (this->finish_progress() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(15, this->finish_progress(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.WorldRoutineInfo)
  return target;
}

size_t WorldRoutineInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.WorldRoutineInfo)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 routine_id = 4;
  if (this->routine_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->routine_id());
  }

  // uint32 progress = 5;
  if (this->progress() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->progress());
  }

  // bool is_finished = 9;
  if (this->is_finished() != 0) {
    total_size += 1 + 1;
  }

  // uint32 finish_progress = 15;
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

bool WorldRoutineTypeInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.WorldRoutineTypeInfo)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .proto.WorldRoutineInfo world_routine_info_list = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_world_routine_info_list()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 routine_type = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(104u /* 104 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &routine_type_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 next_refresh_time = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(120u /* 120 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &next_refresh_time_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.WorldRoutineTypeInfo)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.WorldRoutineTypeInfo)
  return false;
#undef DO_
}

void WorldRoutineTypeInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.WorldRoutineTypeInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.WorldRoutineInfo world_routine_info_list = 6;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->world_routine_info_list_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      6, this->world_routine_info_list(static_cast<int>(i)), output);
  }

  // uint32 routine_type = 13;
  if (this->routine_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(13, this->routine_type(), output);
  }

  // uint32 next_refresh_time = 15;
  if (this->next_refresh_time() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(15, this->next_refresh_time(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.WorldRoutineTypeInfo)
}

::google::protobuf::uint8* WorldRoutineTypeInfo::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.WorldRoutineTypeInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.WorldRoutineInfo world_routine_info_list = 6;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->world_routine_info_list_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        6, this->world_routine_info_list(static_cast<int>(i)), deterministic, target);
  }

  // uint32 routine_type = 13;
  if (this->routine_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(13, this->routine_type(), target);
  }

  // uint32 next_refresh_time = 15;
  if (this->next_refresh_time() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(15, this->next_refresh_time(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.WorldRoutineTypeInfo)
  return target;
}

size_t WorldRoutineTypeInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.WorldRoutineTypeInfo)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .proto.WorldRoutineInfo world_routine_info_list = 6;
  {
    unsigned int count = static_cast<unsigned int>(this->world_routine_info_list_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->world_routine_info_list(static_cast<int>(i)));
    }
  }

  // uint32 routine_type = 13;
  if (this->routine_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->routine_type());
  }

  // uint32 next_refresh_time = 15;
  if (this->next_refresh_time() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->next_refresh_time());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool WorldAllRoutineTypeNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.WorldAllRoutineTypeNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .proto.WorldRoutineTypeInfo world_routine_type_list = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_world_routine_type_list()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.WorldAllRoutineTypeNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.WorldAllRoutineTypeNotify)
  return false;
#undef DO_
}

void WorldAllRoutineTypeNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.WorldAllRoutineTypeNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.WorldRoutineTypeInfo world_routine_type_list = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->world_routine_type_list_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->world_routine_type_list(static_cast<int>(i)), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.WorldAllRoutineTypeNotify)
}

::google::protobuf::uint8* WorldAllRoutineTypeNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.WorldAllRoutineTypeNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.WorldRoutineTypeInfo world_routine_type_list = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->world_routine_type_list_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        4, this->world_routine_type_list(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.WorldAllRoutineTypeNotify)
  return target;
}

size_t WorldAllRoutineTypeNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.WorldAllRoutineTypeNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .proto.WorldRoutineTypeInfo world_routine_type_list = 4;
  {
    unsigned int count = static_cast<unsigned int>(this->world_routine_type_list_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->world_routine_type_list(static_cast<int>(i)));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool WorldRoutineTypeRefreshNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.WorldRoutineTypeRefreshNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .proto.WorldRoutineTypeInfo world_routine_type = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(122u /* 122 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_world_routine_type()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.WorldRoutineTypeRefreshNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.WorldRoutineTypeRefreshNotify)
  return false;
#undef DO_
}

void WorldRoutineTypeRefreshNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.WorldRoutineTypeRefreshNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.WorldRoutineTypeInfo world_routine_type = 15;
  if (this->has_world_routine_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      15, *this->world_routine_type_, output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.WorldRoutineTypeRefreshNotify)
}

::google::protobuf::uint8* WorldRoutineTypeRefreshNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.WorldRoutineTypeRefreshNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.WorldRoutineTypeInfo world_routine_type = 15;
  if (this->has_world_routine_type()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        15, *this->world_routine_type_, deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.WorldRoutineTypeRefreshNotify)
  return target;
}

size_t WorldRoutineTypeRefreshNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.WorldRoutineTypeRefreshNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .proto.WorldRoutineTypeInfo world_routine_type = 15;
  if (this->has_world_routine_type()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->world_routine_type_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool WorldRoutineChangeNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.WorldRoutineChangeNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .proto.WorldRoutineInfo routine_info = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_routine_info()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 routine_type = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(88u /* 88 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &routine_type_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.WorldRoutineChangeNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.WorldRoutineChangeNotify)
  return false;
#undef DO_
}

void WorldRoutineChangeNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.WorldRoutineChangeNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.WorldRoutineInfo routine_info = 2;
  if (this->has_routine_info()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->routine_info_, output);
  }

  // uint32 routine_type = 11;
  if (this->routine_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(11, this->routine_type(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.WorldRoutineChangeNotify)
}

::google::protobuf::uint8* WorldRoutineChangeNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.WorldRoutineChangeNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.WorldRoutineInfo routine_info = 2;
  if (this->has_routine_info()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->routine_info_, deterministic, target);
  }

  // uint32 routine_type = 11;
  if (this->routine_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(11, this->routine_type(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.WorldRoutineChangeNotify)
  return target;
}

size_t WorldRoutineChangeNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.WorldRoutineChangeNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .proto.WorldRoutineInfo routine_info = 2;
  if (this->has_routine_info()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->routine_info_);
  }

  // uint32 routine_type = 11;
  if (this->routine_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->routine_type());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool WorldRoutineTypeCloseNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.WorldRoutineTypeCloseNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 routine_type = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &routine_type_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.WorldRoutineTypeCloseNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.WorldRoutineTypeCloseNotify)
  return false;
#undef DO_
}

void WorldRoutineTypeCloseNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.WorldRoutineTypeCloseNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 routine_type = 7;
  if (this->routine_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->routine_type(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.WorldRoutineTypeCloseNotify)
}

::google::protobuf::uint8* WorldRoutineTypeCloseNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.WorldRoutineTypeCloseNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 routine_type = 7;
  if (this->routine_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(7, this->routine_type(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.WorldRoutineTypeCloseNotify)
  return target;
}

size_t WorldRoutineTypeCloseNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.WorldRoutineTypeCloseNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 routine_type = 7;
  if (this->routine_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->routine_type());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}
}