#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "cmd/cmd_group_link.pb.h"

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

bool GroupLinkBundle::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.GroupLinkBundle)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .proto.Vector center = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_center()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_activated = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_activated_)));
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

      // uint32 bundle_id = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &bundle_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_show_mark = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(96u /* 96 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_show_mark_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 radius = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(104u /* 104 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &radius_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.GroupLinkBundle)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.GroupLinkBundle)
  return false;
#undef DO_
}

void GroupLinkBundle::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.GroupLinkBundle)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.Vector center = 6;
  if (this->has_center()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      6, *this->center_, output);
  }

  // bool is_activated = 7;
  if (this->is_activated() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(7, this->is_activated(), output);
  }

  // uint32 scene_id = 8;
  if (this->scene_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(8, this->scene_id(), output);
  }

  // uint32 bundle_id = 9;
  if (this->bundle_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(9, this->bundle_id(), output);
  }

  // bool is_show_mark = 12;
  if (this->is_show_mark() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(12, this->is_show_mark(), output);
  }

  // uint32 radius = 13;
  if (this->radius() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(13, this->radius(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.GroupLinkBundle)
}

::google::protobuf::uint8* GroupLinkBundle::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.GroupLinkBundle)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.Vector center = 6;
  if (this->has_center()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        6, *this->center_, deterministic, target);
  }

  // bool is_activated = 7;
  if (this->is_activated() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(7, this->is_activated(), target);
  }

  // uint32 scene_id = 8;
  if (this->scene_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(8, this->scene_id(), target);
  }

  // uint32 bundle_id = 9;
  if (this->bundle_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(9, this->bundle_id(), target);
  }

  // bool is_show_mark = 12;
  if (this->is_show_mark() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(12, this->is_show_mark(), target);
  }

  // uint32 radius = 13;
  if (this->radius() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(13, this->radius(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.GroupLinkBundle)
  return target;
}

size_t GroupLinkBundle::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.GroupLinkBundle)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .proto.Vector center = 6;
  if (this->has_center()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->center_);
  }

  // uint32 scene_id = 8;
  if (this->scene_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->scene_id());
  }

  // uint32 bundle_id = 9;
  if (this->bundle_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->bundle_id());
  }

  // bool is_activated = 7;
  if (this->is_activated() != 0) {
    total_size += 1 + 1;
  }

  // bool is_show_mark = 12;
  if (this->is_show_mark() != 0) {
    total_size += 1 + 1;
  }

  // uint32 radius = 13;
  if (this->radius() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->radius());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool GroupLinkAllNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.GroupLinkAllNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .proto.GroupLinkBundle bundle_list = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(122u /* 122 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_bundle_list()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.GroupLinkAllNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.GroupLinkAllNotify)
  return false;
#undef DO_
}

void GroupLinkAllNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.GroupLinkAllNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.GroupLinkBundle bundle_list = 15;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->bundle_list_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      15, this->bundle_list(static_cast<int>(i)), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.GroupLinkAllNotify)
}

::google::protobuf::uint8* GroupLinkAllNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.GroupLinkAllNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.GroupLinkBundle bundle_list = 15;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->bundle_list_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        15, this->bundle_list(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.GroupLinkAllNotify)
  return target;
}

size_t GroupLinkAllNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.GroupLinkAllNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .proto.GroupLinkBundle bundle_list = 15;
  {
    unsigned int count = static_cast<unsigned int>(this->bundle_list_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->bundle_list(static_cast<int>(i)));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool GroupLinkChangeNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.GroupLinkChangeNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .proto.GroupLinkBundle bundle = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_bundle()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.GroupLinkChangeNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.GroupLinkChangeNotify)
  return false;
#undef DO_
}

void GroupLinkChangeNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.GroupLinkChangeNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.GroupLinkBundle bundle = 2;
  if (this->has_bundle()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->bundle_, output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.GroupLinkChangeNotify)
}

::google::protobuf::uint8* GroupLinkChangeNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.GroupLinkChangeNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.GroupLinkBundle bundle = 2;
  if (this->has_bundle()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->bundle_, deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.GroupLinkChangeNotify)
  return target;
}

size_t GroupLinkChangeNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.GroupLinkChangeNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .proto.GroupLinkBundle bundle = 2;
  if (this->has_bundle()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->bundle_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool GroupLinkDeleteNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.GroupLinkDeleteNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 bundle_id = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(104u /* 104 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &bundle_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.GroupLinkDeleteNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.GroupLinkDeleteNotify)
  return false;
#undef DO_
}

void GroupLinkDeleteNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.GroupLinkDeleteNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 bundle_id = 13;
  if (this->bundle_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(13, this->bundle_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.GroupLinkDeleteNotify)
}

::google::protobuf::uint8* GroupLinkDeleteNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.GroupLinkDeleteNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 bundle_id = 13;
  if (this->bundle_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(13, this->bundle_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.GroupLinkDeleteNotify)
  return target;
}

size_t GroupLinkDeleteNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.GroupLinkDeleteNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 bundle_id = 13;
  if (this->bundle_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->bundle_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool GroupLinkMarkUpdateNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.GroupLinkMarkUpdateNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .proto.GroupLinkBundle bundle = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(58u /* 58 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_bundle()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.GroupLinkMarkUpdateNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.GroupLinkMarkUpdateNotify)
  return false;
#undef DO_
}

void GroupLinkMarkUpdateNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.GroupLinkMarkUpdateNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.GroupLinkBundle bundle = 7;
  if (this->has_bundle()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      7, *this->bundle_, output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.GroupLinkMarkUpdateNotify)
}

::google::protobuf::uint8* GroupLinkMarkUpdateNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.GroupLinkMarkUpdateNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.GroupLinkBundle bundle = 7;
  if (this->has_bundle()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        7, *this->bundle_, deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.GroupLinkMarkUpdateNotify)
  return target;
}

size_t GroupLinkMarkUpdateNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.GroupLinkMarkUpdateNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .proto.GroupLinkBundle bundle = 7;
  if (this->has_bundle()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->bundle_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}
}