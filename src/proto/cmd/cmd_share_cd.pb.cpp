#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "cmd/cmd_share_cd.pb.h"

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

bool ShareCDInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.ShareCDInfo)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint64 cd_start_time = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &cd_start_time_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 index = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(88u /* 88 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &index_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 share_cd_id = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(104u /* 104 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &share_cd_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.ShareCDInfo)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.ShareCDInfo)
  return false;
#undef DO_
}

void ShareCDInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.ShareCDInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 cd_start_time = 1;
  if (this->cd_start_time() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->cd_start_time(), output);
  }

  // uint32 index = 11;
  if (this->index() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(11, this->index(), output);
  }

  // uint32 share_cd_id = 13;
  if (this->share_cd_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(13, this->share_cd_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.ShareCDInfo)
}

::google::protobuf::uint8* ShareCDInfo::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.ShareCDInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 cd_start_time = 1;
  if (this->cd_start_time() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(1, this->cd_start_time(), target);
  }

  // uint32 index = 11;
  if (this->index() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(11, this->index(), target);
  }

  // uint32 share_cd_id = 13;
  if (this->share_cd_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(13, this->share_cd_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.ShareCDInfo)
  return target;
}

size_t ShareCDInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.ShareCDInfo)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint64 cd_start_time = 1;
  if (this->cd_start_time() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->cd_start_time());
  }

  // uint32 index = 11;
  if (this->index() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->index());
  }

  // uint32 share_cd_id = 13;
  if (this->share_cd_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->share_cd_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AllShareCDDataNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AllShareCDDataNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // map<uint32, .proto.ShareCDInfo> share_cd_info_map = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          AllShareCDDataNotify_ShareCdInfoMapEntry::Parser< ::google::protobuf::internal::MapField<
              AllShareCDDataNotify_ShareCdInfoMapEntry,
              ::google::protobuf::uint32, ::proto::ShareCDInfo,
              ::google::protobuf::internal::WireFormatLite::TYPE_UINT32,
              ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
              0 >,
            ::google::protobuf::Map< ::google::protobuf::uint32, ::proto::ShareCDInfo > > parser(&share_cd_info_map_);
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
  // @@protoc_insertion_point(parse_success:proto.AllShareCDDataNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AllShareCDDataNotify)
  return false;
#undef DO_
}

void AllShareCDDataNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AllShareCDDataNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // map<uint32, .proto.ShareCDInfo> share_cd_info_map = 2;
  if (!this->share_cd_info_map().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::proto::ShareCDInfo >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint32, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (output->IsSerializationDeterministic() &&
        this->share_cd_info_map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->share_cd_info_map().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::proto::ShareCDInfo >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::proto::ShareCDInfo >::const_iterator
          it = this->share_cd_info_map().begin();
          it != this->share_cd_info_map().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<AllShareCDDataNotify_ShareCdInfoMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(share_cd_info_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            2, *entry, output);
      }
    } else {
      ::google::protobuf::scoped_ptr<AllShareCDDataNotify_ShareCdInfoMapEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::proto::ShareCDInfo >::const_iterator
          it = this->share_cd_info_map().begin();
          it != this->share_cd_info_map().end(); ++it) {
        entry.reset(share_cd_info_map_.NewEntryWrapper(
            it->first, it->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            2, *entry, output);
      }
    }
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AllShareCDDataNotify)
}

::google::protobuf::uint8* AllShareCDDataNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AllShareCDDataNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // map<uint32, .proto.ShareCDInfo> share_cd_info_map = 2;
  if (!this->share_cd_info_map().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::proto::ShareCDInfo >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint32, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (deterministic &&
        this->share_cd_info_map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->share_cd_info_map().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::proto::ShareCDInfo >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::proto::ShareCDInfo >::const_iterator
          it = this->share_cd_info_map().begin();
          it != this->share_cd_info_map().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<AllShareCDDataNotify_ShareCdInfoMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(share_cd_info_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       2, *entry, deterministic, target);
;
      }
    } else {
      ::google::protobuf::scoped_ptr<AllShareCDDataNotify_ShareCdInfoMapEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::proto::ShareCDInfo >::const_iterator
          it = this->share_cd_info_map().begin();
          it != this->share_cd_info_map().end(); ++it) {
        entry.reset(share_cd_info_map_.NewEntryWrapper(
            it->first, it->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       2, *entry, deterministic, target);
;
      }
    }
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AllShareCDDataNotify)
  return target;
}

size_t AllShareCDDataNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AllShareCDDataNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // map<uint32, .proto.ShareCDInfo> share_cd_info_map = 2;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->share_cd_info_map_size());
  {
    ::google::protobuf::scoped_ptr<AllShareCDDataNotify_ShareCdInfoMapEntry> entry;
    for (::google::protobuf::Map< ::google::protobuf::uint32, ::proto::ShareCDInfo >::const_iterator
        it = this->share_cd_info_map().begin();
        it != this->share_cd_info_map().end(); ++it) {
      entry.reset(share_cd_info_map_.NewEntryWrapper(it->first, it->second));
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
}