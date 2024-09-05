#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "cmd/cmd_property.pb.h"

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

bool EntityPropNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.EntityPropNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // map<uint32, .proto.PropValue> prop_map = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          EntityPropNotify_PropMapEntry::Parser< ::google::protobuf::internal::MapField<
              EntityPropNotify_PropMapEntry,
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
  // @@protoc_insertion_point(parse_success:proto.EntityPropNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.EntityPropNotify)
  return false;
#undef DO_
}

void EntityPropNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.EntityPropNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // map<uint32, .proto.PropValue> prop_map = 6;
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
      ::google::protobuf::scoped_ptr<EntityPropNotify_PropMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(prop_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            6, *entry, output);
      }
    } else {
      ::google::protobuf::scoped_ptr<EntityPropNotify_PropMapEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::proto::PropValue >::const_iterator
          it = this->prop_map().begin();
          it != this->prop_map().end(); ++it) {
        entry.reset(prop_map_.NewEntryWrapper(
            it->first, it->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            6, *entry, output);
      }
    }
  }

  // uint32 entity_id = 9;
  if (this->entity_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(9, this->entity_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.EntityPropNotify)
}

::google::protobuf::uint8* EntityPropNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.EntityPropNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // map<uint32, .proto.PropValue> prop_map = 6;
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
      ::google::protobuf::scoped_ptr<EntityPropNotify_PropMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(prop_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       6, *entry, deterministic, target);
;
      }
    } else {
      ::google::protobuf::scoped_ptr<EntityPropNotify_PropMapEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::proto::PropValue >::const_iterator
          it = this->prop_map().begin();
          it != this->prop_map().end(); ++it) {
        entry.reset(prop_map_.NewEntryWrapper(
            it->first, it->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       6, *entry, deterministic, target);
;
      }
    }
  }

  // uint32 entity_id = 9;
  if (this->entity_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(9, this->entity_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.EntityPropNotify)
  return target;
}

size_t EntityPropNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.EntityPropNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // map<uint32, .proto.PropValue> prop_map = 6;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->prop_map_size());
  {
    ::google::protobuf::scoped_ptr<EntityPropNotify_PropMapEntry> entry;
    for (::google::protobuf::Map< ::google::protobuf::uint32, ::proto::PropValue >::const_iterator
        it = this->prop_map().begin();
        it != this->prop_map().end(); ++it) {
      entry.reset(prop_map_.NewEntryWrapper(it->first, it->second));
      total_size += ::google::protobuf::internal::WireFormatLite::
          MessageSizeNoVirtual(*entry);
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

bool LifeStateChangeNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.LifeStateChangeNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .proto.ServerBuff server_buff_list = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_server_buff_list()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 move_reliable_seq = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &move_reliable_seq_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.PlayerDieType die_type = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_die_type(static_cast< ::proto::PlayerDieType >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

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

      // uint32 life_state = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &life_state_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string attack_tag = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(106u /* 106 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_attack_tag()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->attack_tag().data(), static_cast<int>(this->attack_tag().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.LifeStateChangeNotify.attack_tag"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 source_entity_id = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(120u /* 120 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &source_entity_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.LifeStateChangeNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.LifeStateChangeNotify)
  return false;
#undef DO_
}

void LifeStateChangeNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.LifeStateChangeNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.ServerBuff server_buff_list = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->server_buff_list_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->server_buff_list(static_cast<int>(i)), output);
  }

  // uint32 move_reliable_seq = 5;
  if (this->move_reliable_seq() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->move_reliable_seq(), output);
  }

  // .proto.PlayerDieType die_type = 6;
  if (this->die_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      6, this->die_type(), output);
  }

  // uint32 entity_id = 7;
  if (this->entity_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->entity_id(), output);
  }

  // uint32 life_state = 9;
  if (this->life_state() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(9, this->life_state(), output);
  }

  // string attack_tag = 13;
  if (this->attack_tag().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->attack_tag().data(), static_cast<int>(this->attack_tag().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.LifeStateChangeNotify.attack_tag");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      13, this->attack_tag(), output);
  }

  // uint32 source_entity_id = 15;
  if (this->source_entity_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(15, this->source_entity_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.LifeStateChangeNotify)
}

::google::protobuf::uint8* LifeStateChangeNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.LifeStateChangeNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.ServerBuff server_buff_list = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->server_buff_list_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, this->server_buff_list(static_cast<int>(i)), deterministic, target);
  }

  // uint32 move_reliable_seq = 5;
  if (this->move_reliable_seq() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->move_reliable_seq(), target);
  }

  // .proto.PlayerDieType die_type = 6;
  if (this->die_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      6, this->die_type(), target);
  }

  // uint32 entity_id = 7;
  if (this->entity_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(7, this->entity_id(), target);
  }

  // uint32 life_state = 9;
  if (this->life_state() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(9, this->life_state(), target);
  }

  // string attack_tag = 13;
  if (this->attack_tag().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->attack_tag().data(), static_cast<int>(this->attack_tag().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.LifeStateChangeNotify.attack_tag");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        13, this->attack_tag(), target);
  }

  // uint32 source_entity_id = 15;
  if (this->source_entity_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(15, this->source_entity_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.LifeStateChangeNotify)
  return target;
}

size_t LifeStateChangeNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.LifeStateChangeNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .proto.ServerBuff server_buff_list = 2;
  {
    unsigned int count = static_cast<unsigned int>(this->server_buff_list_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->server_buff_list(static_cast<int>(i)));
    }
  }

  // string attack_tag = 13;
  if (this->attack_tag().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->attack_tag());
  }

  // uint32 move_reliable_seq = 5;
  if (this->move_reliable_seq() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->move_reliable_seq());
  }

  // .proto.PlayerDieType die_type = 6;
  if (this->die_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->die_type());
  }

  // uint32 entity_id = 7;
  if (this->entity_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->entity_id());
  }

  // uint32 life_state = 9;
  if (this->life_state() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->life_state());
  }

  // uint32 source_entity_id = 15;
  if (this->source_entity_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->source_entity_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool EntityFightPropNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.EntityFightPropNotify)
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

      // map<uint32, float> fight_prop_map = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(122u /* 122 & 0xFF */)) {
          EntityFightPropNotify_FightPropMapEntry::Parser< ::google::protobuf::internal::MapField<
              EntityFightPropNotify_FightPropMapEntry,
              ::google::protobuf::uint32, float,
              ::google::protobuf::internal::WireFormatLite::TYPE_UINT32,
              ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT,
              0 >,
            ::google::protobuf::Map< ::google::protobuf::uint32, float > > parser(&fight_prop_map_);
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
  // @@protoc_insertion_point(parse_success:proto.EntityFightPropNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.EntityFightPropNotify)
  return false;
#undef DO_
}

void EntityFightPropNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.EntityFightPropNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 entity_id = 7;
  if (this->entity_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->entity_id(), output);
  }

  // map<uint32, float> fight_prop_map = 15;
  if (!this->fight_prop_map().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint32, float >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint32, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (output->IsSerializationDeterministic() &&
        this->fight_prop_map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->fight_prop_map().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint32, float >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint32, float >::const_iterator
          it = this->fight_prop_map().begin();
          it != this->fight_prop_map().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<EntityFightPropNotify_FightPropMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(fight_prop_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            15, *entry, output);
      }
    } else {
      ::google::protobuf::scoped_ptr<EntityFightPropNotify_FightPropMapEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint32, float >::const_iterator
          it = this->fight_prop_map().begin();
          it != this->fight_prop_map().end(); ++it) {
        entry.reset(fight_prop_map_.NewEntryWrapper(
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
  // @@protoc_insertion_point(serialize_end:proto.EntityFightPropNotify)
}

::google::protobuf::uint8* EntityFightPropNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.EntityFightPropNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 entity_id = 7;
  if (this->entity_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(7, this->entity_id(), target);
  }

  // map<uint32, float> fight_prop_map = 15;
  if (!this->fight_prop_map().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint32, float >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint32, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (deterministic &&
        this->fight_prop_map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->fight_prop_map().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint32, float >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint32, float >::const_iterator
          it = this->fight_prop_map().begin();
          it != this->fight_prop_map().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<EntityFightPropNotify_FightPropMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(fight_prop_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       15, *entry, deterministic, target);
;
      }
    } else {
      ::google::protobuf::scoped_ptr<EntityFightPropNotify_FightPropMapEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint32, float >::const_iterator
          it = this->fight_prop_map().begin();
          it != this->fight_prop_map().end(); ++it) {
        entry.reset(fight_prop_map_.NewEntryWrapper(
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
  // @@protoc_insertion_point(serialize_to_array_end:proto.EntityFightPropNotify)
  return target;
}

size_t EntityFightPropNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.EntityFightPropNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // map<uint32, float> fight_prop_map = 15;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->fight_prop_map_size());
  {
    ::google::protobuf::scoped_ptr<EntityFightPropNotify_FightPropMapEntry> entry;
    for (::google::protobuf::Map< ::google::protobuf::uint32, float >::const_iterator
        it = this->fight_prop_map().begin();
        it != this->fight_prop_map().end(); ++it) {
      entry.reset(fight_prop_map_.NewEntryWrapper(it->first, it->second));
      total_size += ::google::protobuf::internal::WireFormatLite::
          MessageSizeNoVirtual(*entry);
    }
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

bool EntityFightPropUpdateNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.EntityFightPropUpdateNotify)
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

      // map<uint32, float> fight_prop_map = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(90u /* 90 & 0xFF */)) {
          EntityFightPropUpdateNotify_FightPropMapEntry::Parser< ::google::protobuf::internal::MapField<
              EntityFightPropUpdateNotify_FightPropMapEntry,
              ::google::protobuf::uint32, float,
              ::google::protobuf::internal::WireFormatLite::TYPE_UINT32,
              ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT,
              0 >,
            ::google::protobuf::Map< ::google::protobuf::uint32, float > > parser(&fight_prop_map_);
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
  // @@protoc_insertion_point(parse_success:proto.EntityFightPropUpdateNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.EntityFightPropUpdateNotify)
  return false;
#undef DO_
}

void EntityFightPropUpdateNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.EntityFightPropUpdateNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 entity_id = 7;
  if (this->entity_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->entity_id(), output);
  }

  // map<uint32, float> fight_prop_map = 11;
  if (!this->fight_prop_map().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint32, float >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint32, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (output->IsSerializationDeterministic() &&
        this->fight_prop_map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->fight_prop_map().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint32, float >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint32, float >::const_iterator
          it = this->fight_prop_map().begin();
          it != this->fight_prop_map().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<EntityFightPropUpdateNotify_FightPropMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(fight_prop_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            11, *entry, output);
      }
    } else {
      ::google::protobuf::scoped_ptr<EntityFightPropUpdateNotify_FightPropMapEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint32, float >::const_iterator
          it = this->fight_prop_map().begin();
          it != this->fight_prop_map().end(); ++it) {
        entry.reset(fight_prop_map_.NewEntryWrapper(
            it->first, it->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            11, *entry, output);
      }
    }
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.EntityFightPropUpdateNotify)
}

::google::protobuf::uint8* EntityFightPropUpdateNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.EntityFightPropUpdateNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 entity_id = 7;
  if (this->entity_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(7, this->entity_id(), target);
  }

  // map<uint32, float> fight_prop_map = 11;
  if (!this->fight_prop_map().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint32, float >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint32, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (deterministic &&
        this->fight_prop_map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->fight_prop_map().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint32, float >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint32, float >::const_iterator
          it = this->fight_prop_map().begin();
          it != this->fight_prop_map().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<EntityFightPropUpdateNotify_FightPropMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(fight_prop_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       11, *entry, deterministic, target);
;
      }
    } else {
      ::google::protobuf::scoped_ptr<EntityFightPropUpdateNotify_FightPropMapEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint32, float >::const_iterator
          it = this->fight_prop_map().begin();
          it != this->fight_prop_map().end(); ++it) {
        entry.reset(fight_prop_map_.NewEntryWrapper(
            it->first, it->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       11, *entry, deterministic, target);
;
      }
    }
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.EntityFightPropUpdateNotify)
  return target;
}

size_t EntityFightPropUpdateNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.EntityFightPropUpdateNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // map<uint32, float> fight_prop_map = 11;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->fight_prop_map_size());
  {
    ::google::protobuf::scoped_ptr<EntityFightPropUpdateNotify_FightPropMapEntry> entry;
    for (::google::protobuf::Map< ::google::protobuf::uint32, float >::const_iterator
        it = this->fight_prop_map().begin();
        it != this->fight_prop_map().end(); ++it) {
      entry.reset(fight_prop_map_.NewEntryWrapper(it->first, it->second));
      total_size += ::google::protobuf::internal::WireFormatLite::
          MessageSizeNoVirtual(*entry);
    }
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

bool AvatarFightPropNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AvatarFightPropNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint64 avatar_guid = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(96u /* 96 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &avatar_guid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // map<uint32, float> fight_prop_map = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(106u /* 106 & 0xFF */)) {
          AvatarFightPropNotify_FightPropMapEntry::Parser< ::google::protobuf::internal::MapField<
              AvatarFightPropNotify_FightPropMapEntry,
              ::google::protobuf::uint32, float,
              ::google::protobuf::internal::WireFormatLite::TYPE_UINT32,
              ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT,
              0 >,
            ::google::protobuf::Map< ::google::protobuf::uint32, float > > parser(&fight_prop_map_);
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
  // @@protoc_insertion_point(parse_success:proto.AvatarFightPropNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AvatarFightPropNotify)
  return false;
#undef DO_
}

void AvatarFightPropNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AvatarFightPropNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 avatar_guid = 12;
  if (this->avatar_guid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(12, this->avatar_guid(), output);
  }

  // map<uint32, float> fight_prop_map = 13;
  if (!this->fight_prop_map().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint32, float >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint32, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (output->IsSerializationDeterministic() &&
        this->fight_prop_map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->fight_prop_map().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint32, float >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint32, float >::const_iterator
          it = this->fight_prop_map().begin();
          it != this->fight_prop_map().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<AvatarFightPropNotify_FightPropMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(fight_prop_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            13, *entry, output);
      }
    } else {
      ::google::protobuf::scoped_ptr<AvatarFightPropNotify_FightPropMapEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint32, float >::const_iterator
          it = this->fight_prop_map().begin();
          it != this->fight_prop_map().end(); ++it) {
        entry.reset(fight_prop_map_.NewEntryWrapper(
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
  // @@protoc_insertion_point(serialize_end:proto.AvatarFightPropNotify)
}

::google::protobuf::uint8* AvatarFightPropNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AvatarFightPropNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 avatar_guid = 12;
  if (this->avatar_guid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(12, this->avatar_guid(), target);
  }

  // map<uint32, float> fight_prop_map = 13;
  if (!this->fight_prop_map().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint32, float >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint32, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (deterministic &&
        this->fight_prop_map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->fight_prop_map().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint32, float >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint32, float >::const_iterator
          it = this->fight_prop_map().begin();
          it != this->fight_prop_map().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<AvatarFightPropNotify_FightPropMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(fight_prop_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       13, *entry, deterministic, target);
;
      }
    } else {
      ::google::protobuf::scoped_ptr<AvatarFightPropNotify_FightPropMapEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint32, float >::const_iterator
          it = this->fight_prop_map().begin();
          it != this->fight_prop_map().end(); ++it) {
        entry.reset(fight_prop_map_.NewEntryWrapper(
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
  // @@protoc_insertion_point(serialize_to_array_end:proto.AvatarFightPropNotify)
  return target;
}

size_t AvatarFightPropNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AvatarFightPropNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // map<uint32, float> fight_prop_map = 13;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->fight_prop_map_size());
  {
    ::google::protobuf::scoped_ptr<AvatarFightPropNotify_FightPropMapEntry> entry;
    for (::google::protobuf::Map< ::google::protobuf::uint32, float >::const_iterator
        it = this->fight_prop_map().begin();
        it != this->fight_prop_map().end(); ++it) {
      entry.reset(fight_prop_map_.NewEntryWrapper(it->first, it->second));
      total_size += ::google::protobuf::internal::WireFormatLite::
          MessageSizeNoVirtual(*entry);
    }
  }

  // uint64 avatar_guid = 12;
  if (this->avatar_guid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->avatar_guid());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AvatarFightPropUpdateNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AvatarFightPropUpdateNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint64 avatar_guid = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 64 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &avatar_guid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // map<uint32, float> fight_prop_map = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(82u /* 82 & 0xFF */)) {
          AvatarFightPropUpdateNotify_FightPropMapEntry::Parser< ::google::protobuf::internal::MapField<
              AvatarFightPropUpdateNotify_FightPropMapEntry,
              ::google::protobuf::uint32, float,
              ::google::protobuf::internal::WireFormatLite::TYPE_UINT32,
              ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT,
              0 >,
            ::google::protobuf::Map< ::google::protobuf::uint32, float > > parser(&fight_prop_map_);
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
  // @@protoc_insertion_point(parse_success:proto.AvatarFightPropUpdateNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AvatarFightPropUpdateNotify)
  return false;
#undef DO_
}

void AvatarFightPropUpdateNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AvatarFightPropUpdateNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 avatar_guid = 8;
  if (this->avatar_guid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(8, this->avatar_guid(), output);
  }

  // map<uint32, float> fight_prop_map = 10;
  if (!this->fight_prop_map().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint32, float >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint32, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (output->IsSerializationDeterministic() &&
        this->fight_prop_map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->fight_prop_map().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint32, float >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint32, float >::const_iterator
          it = this->fight_prop_map().begin();
          it != this->fight_prop_map().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<AvatarFightPropUpdateNotify_FightPropMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(fight_prop_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            10, *entry, output);
      }
    } else {
      ::google::protobuf::scoped_ptr<AvatarFightPropUpdateNotify_FightPropMapEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint32, float >::const_iterator
          it = this->fight_prop_map().begin();
          it != this->fight_prop_map().end(); ++it) {
        entry.reset(fight_prop_map_.NewEntryWrapper(
            it->first, it->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            10, *entry, output);
      }
    }
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AvatarFightPropUpdateNotify)
}

::google::protobuf::uint8* AvatarFightPropUpdateNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AvatarFightPropUpdateNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 avatar_guid = 8;
  if (this->avatar_guid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(8, this->avatar_guid(), target);
  }

  // map<uint32, float> fight_prop_map = 10;
  if (!this->fight_prop_map().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint32, float >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint32, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (deterministic &&
        this->fight_prop_map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->fight_prop_map().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint32, float >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint32, float >::const_iterator
          it = this->fight_prop_map().begin();
          it != this->fight_prop_map().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<AvatarFightPropUpdateNotify_FightPropMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(fight_prop_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       10, *entry, deterministic, target);
;
      }
    } else {
      ::google::protobuf::scoped_ptr<AvatarFightPropUpdateNotify_FightPropMapEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint32, float >::const_iterator
          it = this->fight_prop_map().begin();
          it != this->fight_prop_map().end(); ++it) {
        entry.reset(fight_prop_map_.NewEntryWrapper(
            it->first, it->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       10, *entry, deterministic, target);
;
      }
    }
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AvatarFightPropUpdateNotify)
  return target;
}

size_t AvatarFightPropUpdateNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AvatarFightPropUpdateNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // map<uint32, float> fight_prop_map = 10;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->fight_prop_map_size());
  {
    ::google::protobuf::scoped_ptr<AvatarFightPropUpdateNotify_FightPropMapEntry> entry;
    for (::google::protobuf::Map< ::google::protobuf::uint32, float >::const_iterator
        it = this->fight_prop_map().begin();
        it != this->fight_prop_map().end(); ++it) {
      entry.reset(fight_prop_map_.NewEntryWrapper(it->first, it->second));
      total_size += ::google::protobuf::internal::WireFormatLite::
          MessageSizeNoVirtual(*entry);
    }
  }

  // uint64 avatar_guid = 8;
  if (this->avatar_guid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->avatar_guid());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool EntityFightPropChangeReasonNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.EntityFightPropChangeReasonNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated uint32 param_list = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_param_list())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 1, 10u, input, this->mutable_param_list())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.ChangeEnergyReason change_energy_reson = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_change_energy_reson(static_cast< ::proto::ChangeEnergyReason >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float prop_delta = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(37u /* 37 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &prop_delta_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.ChangHpReason change_hp_reason = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_change_hp_reason(static_cast< ::proto::ChangHpReason >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 entity_id = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(96u /* 96 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &entity_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.PropChangeReason reason = 13;
      case 13: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(104u /* 104 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_reason(static_cast< ::proto::PropChangeReason >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 prop_type = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(112u /* 112 & 0xFF */)) {

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
  // @@protoc_insertion_point(parse_success:proto.EntityFightPropChangeReasonNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.EntityFightPropChangeReasonNotify)
  return false;
#undef DO_
}

void EntityFightPropChangeReasonNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.EntityFightPropChangeReasonNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated uint32 param_list = 1;
  if (this->param_list_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(1, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _param_list_cached_byte_size_));
  }
  for (int i = 0, n = this->param_list_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32NoTag(
      this->param_list(i), output);
  }

  // .proto.ChangeEnergyReason change_energy_reson = 3;
  if (this->change_energy_reson() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      3, this->change_energy_reson(), output);
  }

  // float prop_delta = 4;
  if (this->prop_delta() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(4, this->prop_delta(), output);
  }

  // .proto.ChangHpReason change_hp_reason = 6;
  if (this->change_hp_reason() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      6, this->change_hp_reason(), output);
  }

  // uint32 entity_id = 12;
  if (this->entity_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(12, this->entity_id(), output);
  }

  // .proto.PropChangeReason reason = 13;
  if (this->reason() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      13, this->reason(), output);
  }

  // uint32 prop_type = 14;
  if (this->prop_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(14, this->prop_type(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.EntityFightPropChangeReasonNotify)
}

::google::protobuf::uint8* EntityFightPropChangeReasonNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.EntityFightPropChangeReasonNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated uint32 param_list = 1;
  if (this->param_list_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      1,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::uint32>(
            _param_list_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt32NoTagToArray(this->param_list_, target);
  }

  // .proto.ChangeEnergyReason change_energy_reson = 3;
  if (this->change_energy_reson() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      3, this->change_energy_reson(), target);
  }

  // float prop_delta = 4;
  if (this->prop_delta() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(4, this->prop_delta(), target);
  }

  // .proto.ChangHpReason change_hp_reason = 6;
  if (this->change_hp_reason() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      6, this->change_hp_reason(), target);
  }

  // uint32 entity_id = 12;
  if (this->entity_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(12, this->entity_id(), target);
  }

  // .proto.PropChangeReason reason = 13;
  if (this->reason() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      13, this->reason(), target);
  }

  // uint32 prop_type = 14;
  if (this->prop_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(14, this->prop_type(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.EntityFightPropChangeReasonNotify)
  return target;
}

size_t EntityFightPropChangeReasonNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.EntityFightPropChangeReasonNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated uint32 param_list = 1;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      UInt32Size(this->param_list_);
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

  // .proto.ChangeEnergyReason change_energy_reson = 3;
  if (this->change_energy_reson() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->change_energy_reson());
  }

  // float prop_delta = 4;
  if (this->prop_delta() != 0) {
    total_size += 1 + 4;
  }

  // .proto.ChangHpReason change_hp_reason = 6;
  if (this->change_hp_reason() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->change_hp_reason());
  }

  // uint32 entity_id = 12;
  if (this->entity_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->entity_id());
  }

  // .proto.PropChangeReason reason = 13;
  if (this->reason() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->reason());
  }

  // uint32 prop_type = 14;
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

bool AvatarLifeStateChangeNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AvatarLifeStateChangeNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .proto.PlayerDieType die_type = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_die_type(static_cast< ::proto::PlayerDieType >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint64 avatar_guid = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &avatar_guid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .proto.ServerBuff server_buff_list = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_server_buff_list()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 source_entity_id = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &source_entity_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string attack_tag = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_attack_tag()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->attack_tag().data(), static_cast<int>(this->attack_tag().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "proto.AvatarLifeStateChangeNotify.attack_tag"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 life_state = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 64 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &life_state_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 move_reliable_seq = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(80u /* 80 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &move_reliable_seq_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.AvatarLifeStateChangeNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AvatarLifeStateChangeNotify)
  return false;
#undef DO_
}

void AvatarLifeStateChangeNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AvatarLifeStateChangeNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.PlayerDieType die_type = 1;
  if (this->die_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->die_type(), output);
  }

  // uint64 avatar_guid = 3;
  if (this->avatar_guid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(3, this->avatar_guid(), output);
  }

  // repeated .proto.ServerBuff server_buff_list = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->server_buff_list_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->server_buff_list(static_cast<int>(i)), output);
  }

  // uint32 source_entity_id = 5;
  if (this->source_entity_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->source_entity_id(), output);
  }

  // string attack_tag = 6;
  if (this->attack_tag().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->attack_tag().data(), static_cast<int>(this->attack_tag().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.AvatarLifeStateChangeNotify.attack_tag");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      6, this->attack_tag(), output);
  }

  // uint32 life_state = 8;
  if (this->life_state() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(8, this->life_state(), output);
  }

  // uint32 move_reliable_seq = 10;
  if (this->move_reliable_seq() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(10, this->move_reliable_seq(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AvatarLifeStateChangeNotify)
}

::google::protobuf::uint8* AvatarLifeStateChangeNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AvatarLifeStateChangeNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.PlayerDieType die_type = 1;
  if (this->die_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->die_type(), target);
  }

  // uint64 avatar_guid = 3;
  if (this->avatar_guid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(3, this->avatar_guid(), target);
  }

  // repeated .proto.ServerBuff server_buff_list = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->server_buff_list_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        4, this->server_buff_list(static_cast<int>(i)), deterministic, target);
  }

  // uint32 source_entity_id = 5;
  if (this->source_entity_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->source_entity_id(), target);
  }

  // string attack_tag = 6;
  if (this->attack_tag().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->attack_tag().data(), static_cast<int>(this->attack_tag().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "proto.AvatarLifeStateChangeNotify.attack_tag");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        6, this->attack_tag(), target);
  }

  // uint32 life_state = 8;
  if (this->life_state() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(8, this->life_state(), target);
  }

  // uint32 move_reliable_seq = 10;
  if (this->move_reliable_seq() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(10, this->move_reliable_seq(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AvatarLifeStateChangeNotify)
  return target;
}

size_t AvatarLifeStateChangeNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AvatarLifeStateChangeNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .proto.ServerBuff server_buff_list = 4;
  {
    unsigned int count = static_cast<unsigned int>(this->server_buff_list_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->server_buff_list(static_cast<int>(i)));
    }
  }

  // string attack_tag = 6;
  if (this->attack_tag().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->attack_tag());
  }

  // uint64 avatar_guid = 3;
  if (this->avatar_guid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->avatar_guid());
  }

  // .proto.PlayerDieType die_type = 1;
  if (this->die_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->die_type());
  }

  // uint32 source_entity_id = 5;
  if (this->source_entity_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->source_entity_id());
  }

  // uint32 life_state = 8;
  if (this->life_state() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->life_state());
  }

  // uint32 move_reliable_seq = 10;
  if (this->move_reliable_seq() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->move_reliable_seq());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AvatarPropChangeReasonNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AvatarPropChangeReasonNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // float cur_value = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(21u /* 21 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &cur_value_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float old_value = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(37u /* 37 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &old_value_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .proto.PropChangeReason reason = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_reason(static_cast< ::proto::PropChangeReason >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 prop_type = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(80u /* 80 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &prop_type_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint64 avatar_guid = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(96u /* 96 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &avatar_guid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.AvatarPropChangeReasonNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AvatarPropChangeReasonNotify)
  return false;
#undef DO_
}

void AvatarPropChangeReasonNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AvatarPropChangeReasonNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // float cur_value = 2;
  if (this->cur_value() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(2, this->cur_value(), output);
  }

  // float old_value = 4;
  if (this->old_value() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(4, this->old_value(), output);
  }

  // .proto.PropChangeReason reason = 5;
  if (this->reason() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      5, this->reason(), output);
  }

  // uint32 prop_type = 10;
  if (this->prop_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(10, this->prop_type(), output);
  }

  // uint64 avatar_guid = 12;
  if (this->avatar_guid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(12, this->avatar_guid(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AvatarPropChangeReasonNotify)
}

::google::protobuf::uint8* AvatarPropChangeReasonNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AvatarPropChangeReasonNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // float cur_value = 2;
  if (this->cur_value() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(2, this->cur_value(), target);
  }

  // float old_value = 4;
  if (this->old_value() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(4, this->old_value(), target);
  }

  // .proto.PropChangeReason reason = 5;
  if (this->reason() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      5, this->reason(), target);
  }

  // uint32 prop_type = 10;
  if (this->prop_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(10, this->prop_type(), target);
  }

  // uint64 avatar_guid = 12;
  if (this->avatar_guid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(12, this->avatar_guid(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AvatarPropChangeReasonNotify)
  return target;
}

size_t AvatarPropChangeReasonNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AvatarPropChangeReasonNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // float cur_value = 2;
  if (this->cur_value() != 0) {
    total_size += 1 + 4;
  }

  // float old_value = 4;
  if (this->old_value() != 0) {
    total_size += 1 + 4;
  }

  // .proto.PropChangeReason reason = 5;
  if (this->reason() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->reason());
  }

  // uint32 prop_type = 10;
  if (this->prop_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->prop_type());
  }

  // uint64 avatar_guid = 12;
  if (this->avatar_guid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->avatar_guid());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool PlayerPropChangeReasonNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.PlayerPropChangeReasonNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .proto.PropChangeReason reason = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_reason(static_cast< ::proto::PropChangeReason >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 prop_type = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &prop_type_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float cur_value = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(77u /* 77 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &cur_value_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float old_value = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(101u /* 101 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &old_value_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.PlayerPropChangeReasonNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.PlayerPropChangeReasonNotify)
  return false;
#undef DO_
}

void PlayerPropChangeReasonNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.PlayerPropChangeReasonNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.PropChangeReason reason = 1;
  if (this->reason() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->reason(), output);
  }

  // uint32 prop_type = 6;
  if (this->prop_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->prop_type(), output);
  }

  // float cur_value = 9;
  if (this->cur_value() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(9, this->cur_value(), output);
  }

  // float old_value = 12;
  if (this->old_value() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(12, this->old_value(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.PlayerPropChangeReasonNotify)
}

::google::protobuf::uint8* PlayerPropChangeReasonNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.PlayerPropChangeReasonNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .proto.PropChangeReason reason = 1;
  if (this->reason() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->reason(), target);
  }

  // uint32 prop_type = 6;
  if (this->prop_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, this->prop_type(), target);
  }

  // float cur_value = 9;
  if (this->cur_value() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(9, this->cur_value(), target);
  }

  // float old_value = 12;
  if (this->old_value() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(12, this->old_value(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.PlayerPropChangeReasonNotify)
  return target;
}

size_t PlayerPropChangeReasonNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.PlayerPropChangeReasonNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .proto.PropChangeReason reason = 1;
  if (this->reason() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->reason());
  }

  // uint32 prop_type = 6;
  if (this->prop_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->prop_type());
  }

  // float cur_value = 9;
  if (this->cur_value() != 0) {
    total_size += 1 + 4;
  }

  // float old_value = 12;
  if (this->old_value() != 0) {
    total_size += 1 + 4;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AvatarPropNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AvatarPropNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // map<uint32, int64> prop_map = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(90u /* 90 & 0xFF */)) {
          AvatarPropNotify_PropMapEntry::Parser< ::google::protobuf::internal::MapField<
              AvatarPropNotify_PropMapEntry,
              ::google::protobuf::uint32, ::google::protobuf::int64,
              ::google::protobuf::internal::WireFormatLite::TYPE_UINT32,
              ::google::protobuf::internal::WireFormatLite::TYPE_INT64,
              0 >,
            ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::int64 > > parser(&prop_map_);
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
              input, &parser));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint64 avatar_guid = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(120u /* 120 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &avatar_guid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.AvatarPropNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AvatarPropNotify)
  return false;
#undef DO_
}

void AvatarPropNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AvatarPropNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // map<uint32, int64> prop_map = 11;
  if (!this->prop_map().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::int64 >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint32, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (output->IsSerializationDeterministic() &&
        this->prop_map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->prop_map().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::int64 >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::int64 >::const_iterator
          it = this->prop_map().begin();
          it != this->prop_map().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<AvatarPropNotify_PropMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(prop_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            11, *entry, output);
      }
    } else {
      ::google::protobuf::scoped_ptr<AvatarPropNotify_PropMapEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::int64 >::const_iterator
          it = this->prop_map().begin();
          it != this->prop_map().end(); ++it) {
        entry.reset(prop_map_.NewEntryWrapper(
            it->first, it->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            11, *entry, output);
      }
    }
  }

  // uint64 avatar_guid = 15;
  if (this->avatar_guid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(15, this->avatar_guid(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AvatarPropNotify)
}

::google::protobuf::uint8* AvatarPropNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AvatarPropNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // map<uint32, int64> prop_map = 11;
  if (!this->prop_map().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::int64 >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint32, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (deterministic &&
        this->prop_map().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->prop_map().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::int64 >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::int64 >::const_iterator
          it = this->prop_map().begin();
          it != this->prop_map().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<AvatarPropNotify_PropMapEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(prop_map_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       11, *entry, deterministic, target);
;
      }
    } else {
      ::google::protobuf::scoped_ptr<AvatarPropNotify_PropMapEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::int64 >::const_iterator
          it = this->prop_map().begin();
          it != this->prop_map().end(); ++it) {
        entry.reset(prop_map_.NewEntryWrapper(
            it->first, it->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       11, *entry, deterministic, target);
;
      }
    }
  }

  // uint64 avatar_guid = 15;
  if (this->avatar_guid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(15, this->avatar_guid(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AvatarPropNotify)
  return target;
}

size_t AvatarPropNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AvatarPropNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // map<uint32, int64> prop_map = 11;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->prop_map_size());
  {
    ::google::protobuf::scoped_ptr<AvatarPropNotify_PropMapEntry> entry;
    for (::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::int64 >::const_iterator
        it = this->prop_map().begin();
        it != this->prop_map().end(); ++it) {
      entry.reset(prop_map_.NewEntryWrapper(it->first, it->second));
      total_size += ::google::protobuf::internal::WireFormatLite::
          MessageSizeNoVirtual(*entry);
    }
  }

  // uint64 avatar_guid = 15;
  if (this->avatar_guid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->avatar_guid());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool MarkNewNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.MarkNewNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated uint32 id_list = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_id_list())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 1, 10u, input, this->mutable_id_list())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 mark_new_type = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(120u /* 120 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &mark_new_type_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.MarkNewNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.MarkNewNotify)
  return false;
#undef DO_
}

void MarkNewNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.MarkNewNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated uint32 id_list = 1;
  if (this->id_list_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(1, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _id_list_cached_byte_size_));
  }
  for (int i = 0, n = this->id_list_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32NoTag(
      this->id_list(i), output);
  }

  // uint32 mark_new_type = 15;
  if (this->mark_new_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(15, this->mark_new_type(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.MarkNewNotify)
}

::google::protobuf::uint8* MarkNewNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.MarkNewNotify)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated uint32 id_list = 1;
  if (this->id_list_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      1,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::uint32>(
            _id_list_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt32NoTagToArray(this->id_list_, target);
  }

  // uint32 mark_new_type = 15;
  if (this->mark_new_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(15, this->mark_new_type(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.MarkNewNotify)
  return target;
}

size_t MarkNewNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.MarkNewNotify)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated uint32 id_list = 1;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      UInt32Size(this->id_list_);
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _id_list_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // uint32 mark_new_type = 15;
  if (this->mark_new_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->mark_new_type());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}
}