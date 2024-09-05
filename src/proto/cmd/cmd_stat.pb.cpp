#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "cmd/cmd_stat.pb.h"

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

bool AISnapshotEntitySkillCycle::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AISnapshotEntitySkillCycle)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bool failed = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &failed_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool selected = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &selected_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool success = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &success_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool trydoskill = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(96u /* 96 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &trydoskill_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 skill_id = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(120u /* 120 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &skill_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.AISnapshotEntitySkillCycle)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AISnapshotEntitySkillCycle)
  return false;
#undef DO_
}

void AISnapshotEntitySkillCycle::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AISnapshotEntitySkillCycle)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool failed = 3;
  if (this->failed() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->failed(), output);
  }

  // bool selected = 4;
  if (this->selected() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(4, this->selected(), output);
  }

  // bool success = 9;
  if (this->success() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(9, this->success(), output);
  }

  // bool trydoskill = 12;
  if (this->trydoskill() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(12, this->trydoskill(), output);
  }

  // uint32 skill_id = 15;
  if (this->skill_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(15, this->skill_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AISnapshotEntitySkillCycle)
}

::google::protobuf::uint8* AISnapshotEntitySkillCycle::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AISnapshotEntitySkillCycle)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool failed = 3;
  if (this->failed() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(3, this->failed(), target);
  }

  // bool selected = 4;
  if (this->selected() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(4, this->selected(), target);
  }

  // bool success = 9;
  if (this->success() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(9, this->success(), target);
  }

  // bool trydoskill = 12;
  if (this->trydoskill() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(12, this->trydoskill(), target);
  }

  // uint32 skill_id = 15;
  if (this->skill_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(15, this->skill_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AISnapshotEntitySkillCycle)
  return target;
}

size_t AISnapshotEntitySkillCycle::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AISnapshotEntitySkillCycle)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // bool failed = 3;
  if (this->failed() != 0) {
    total_size += 1 + 1;
  }

  // bool trydoskill = 12;
  if (this->trydoskill() != 0) {
    total_size += 1 + 1;
  }

  // bool success = 9;
  if (this->success() != 0) {
    total_size += 1 + 1;
  }

  // bool selected = 4;
  if (this->selected() != 0) {
    total_size += 1 + 1;
  }

  // uint32 skill_id = 15;
  if (this->skill_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->skill_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AISnapshotEntityData::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AISnapshotEntityData)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .proto.AISnapshotEntitySkillCycle finished_skill_cycles = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_finished_skill_cycles()));
        } else {
          goto handle_unusual;
        }
        break;
      }

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

      // float real_time = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(29u /* 29 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &real_time_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 ai_target_id = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &ai_target_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 threat_list_size = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &threat_list_size_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float moved_distance = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(53u /* 53 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &moved_distance_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 threat_target_id = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &threat_target_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 tactic = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(72u /* 72 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &tactic_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float tick_time = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(93u /* 93 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &tick_time_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // map<uint32, uint32> hitting_avatars = 12;
      case 12: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(98u /* 98 & 0xFF */)) {
          AISnapshotEntityData_HittingAvatarsEntry::Parser< ::google::protobuf::internal::MapField<
              AISnapshotEntityData_HittingAvatarsEntry,
              ::google::protobuf::uint32, ::google::protobuf::uint32,
              ::google::protobuf::internal::WireFormatLite::TYPE_UINT32,
              ::google::protobuf::internal::WireFormatLite::TYPE_UINT32,
              0 >,
            ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 > > parser(&hitting_avatars_);
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
              input, &parser));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float distance_to_player = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(117u /* 117 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &distance_to_player_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 attack_target_id = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(120u /* 120 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &attack_target_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.AISnapshotEntityData)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AISnapshotEntityData)
  return false;
#undef DO_
}

void AISnapshotEntityData::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AISnapshotEntityData)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.AISnapshotEntitySkillCycle finished_skill_cycles = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->finished_skill_cycles_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->finished_skill_cycles(static_cast<int>(i)), output);
  }

  // uint32 entity_id = 2;
  if (this->entity_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->entity_id(), output);
  }

  // float real_time = 3;
  if (this->real_time() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(3, this->real_time(), output);
  }

  // uint32 ai_target_id = 4;
  if (this->ai_target_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->ai_target_id(), output);
  }

  // uint32 threat_list_size = 5;
  if (this->threat_list_size() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->threat_list_size(), output);
  }

  // float moved_distance = 6;
  if (this->moved_distance() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(6, this->moved_distance(), output);
  }

  // uint32 threat_target_id = 7;
  if (this->threat_target_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(7, this->threat_target_id(), output);
  }

  // uint32 tactic = 9;
  if (this->tactic() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(9, this->tactic(), output);
  }

  // float tick_time = 11;
  if (this->tick_time() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(11, this->tick_time(), output);
  }

  // map<uint32, uint32> hitting_avatars = 12;
  if (!this->hitting_avatars().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint32, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (output->IsSerializationDeterministic() &&
        this->hitting_avatars().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->hitting_avatars().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::const_iterator
          it = this->hitting_avatars().begin();
          it != this->hitting_avatars().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<AISnapshotEntityData_HittingAvatarsEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(hitting_avatars_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            12, *entry, output);
      }
    } else {
      ::google::protobuf::scoped_ptr<AISnapshotEntityData_HittingAvatarsEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::const_iterator
          it = this->hitting_avatars().begin();
          it != this->hitting_avatars().end(); ++it) {
        entry.reset(hitting_avatars_.NewEntryWrapper(
            it->first, it->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            12, *entry, output);
      }
    }
  }

  // float distance_to_player = 14;
  if (this->distance_to_player() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(14, this->distance_to_player(), output);
  }

  // uint32 attack_target_id = 15;
  if (this->attack_target_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(15, this->attack_target_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AISnapshotEntityData)
}

::google::protobuf::uint8* AISnapshotEntityData::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AISnapshotEntityData)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.AISnapshotEntitySkillCycle finished_skill_cycles = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->finished_skill_cycles_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, this->finished_skill_cycles(static_cast<int>(i)), deterministic, target);
  }

  // uint32 entity_id = 2;
  if (this->entity_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->entity_id(), target);
  }

  // float real_time = 3;
  if (this->real_time() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(3, this->real_time(), target);
  }

  // uint32 ai_target_id = 4;
  if (this->ai_target_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->ai_target_id(), target);
  }

  // uint32 threat_list_size = 5;
  if (this->threat_list_size() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->threat_list_size(), target);
  }

  // float moved_distance = 6;
  if (this->moved_distance() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(6, this->moved_distance(), target);
  }

  // uint32 threat_target_id = 7;
  if (this->threat_target_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(7, this->threat_target_id(), target);
  }

  // uint32 tactic = 9;
  if (this->tactic() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(9, this->tactic(), target);
  }

  // float tick_time = 11;
  if (this->tick_time() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(11, this->tick_time(), target);
  }

  // map<uint32, uint32> hitting_avatars = 12;
  if (!this->hitting_avatars().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint32, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (deterministic &&
        this->hitting_avatars().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->hitting_avatars().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::const_iterator
          it = this->hitting_avatars().begin();
          it != this->hitting_avatars().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<AISnapshotEntityData_HittingAvatarsEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(hitting_avatars_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       12, *entry, deterministic, target);
;
      }
    } else {
      ::google::protobuf::scoped_ptr<AISnapshotEntityData_HittingAvatarsEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::const_iterator
          it = this->hitting_avatars().begin();
          it != this->hitting_avatars().end(); ++it) {
        entry.reset(hitting_avatars_.NewEntryWrapper(
            it->first, it->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       12, *entry, deterministic, target);
;
      }
    }
  }

  // float distance_to_player = 14;
  if (this->distance_to_player() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(14, this->distance_to_player(), target);
  }

  // uint32 attack_target_id = 15;
  if (this->attack_target_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(15, this->attack_target_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AISnapshotEntityData)
  return target;
}

size_t AISnapshotEntityData::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AISnapshotEntityData)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .proto.AISnapshotEntitySkillCycle finished_skill_cycles = 1;
  {
    unsigned int count = static_cast<unsigned int>(this->finished_skill_cycles_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->finished_skill_cycles(static_cast<int>(i)));
    }
  }

  // map<uint32, uint32> hitting_avatars = 12;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->hitting_avatars_size());
  {
    ::google::protobuf::scoped_ptr<AISnapshotEntityData_HittingAvatarsEntry> entry;
    for (::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >::const_iterator
        it = this->hitting_avatars().begin();
        it != this->hitting_avatars().end(); ++it) {
      entry.reset(hitting_avatars_.NewEntryWrapper(it->first, it->second));
      total_size += ::google::protobuf::internal::WireFormatLite::
          MessageSizeNoVirtual(*entry);
    }
  }

  // uint32 entity_id = 2;
  if (this->entity_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->entity_id());
  }

  // float real_time = 3;
  if (this->real_time() != 0) {
    total_size += 1 + 4;
  }

  // uint32 ai_target_id = 4;
  if (this->ai_target_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->ai_target_id());
  }

  // uint32 threat_list_size = 5;
  if (this->threat_list_size() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->threat_list_size());
  }

  // float moved_distance = 6;
  if (this->moved_distance() != 0) {
    total_size += 1 + 4;
  }

  // uint32 threat_target_id = 7;
  if (this->threat_target_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->threat_target_id());
  }

  // uint32 tactic = 9;
  if (this->tactic() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->tactic());
  }

  // float tick_time = 11;
  if (this->tick_time() != 0) {
    total_size += 1 + 4;
  }

  // float distance_to_player = 14;
  if (this->distance_to_player() != 0) {
    total_size += 1 + 4;
  }

  // uint32 attack_target_id = 15;
  if (this->attack_target_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->attack_target_id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

bool AISnapshotInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.AISnapshotInfo)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .proto.AISnapshotEntityData ai_snapshots = 14;
      case 14: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(114u /* 114 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_ai_snapshots()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));;
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.AISnapshotInfo)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.AISnapshotInfo)
  return false;
#undef DO_
}

void AISnapshotInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.AISnapshotInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.AISnapshotEntityData ai_snapshots = 14;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->ai_snapshots_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      14, this->ai_snapshots(static_cast<int>(i)), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.AISnapshotInfo)
}

::google::protobuf::uint8* AISnapshotInfo::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.AISnapshotInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .proto.AISnapshotEntityData ai_snapshots = 14;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->ai_snapshots_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        14, this->ai_snapshots(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.AISnapshotInfo)
  return target;
}

size_t AISnapshotInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.AISnapshotInfo)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .proto.AISnapshotEntityData ai_snapshots = 14;
  {
    unsigned int count = static_cast<unsigned int>(this->ai_snapshots_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->ai_snapshots(static_cast<int>(i)));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}
}