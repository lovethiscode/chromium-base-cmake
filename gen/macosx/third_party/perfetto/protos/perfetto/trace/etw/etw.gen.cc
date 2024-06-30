#include "perfetto/protozero/gen_field_helpers.h"
#include "perfetto/protozero/message.h"
#include "perfetto/protozero/packed_repeated_fields.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/scattered_heap_buffer.h"
// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wfloat-equal"
#endif
#include "protos/perfetto/trace/etw/etw.gen.h"

namespace perfetto {
namespace protos {
namespace gen {

ReadyThreadEtwEvent::ReadyThreadEtwEvent() = default;
ReadyThreadEtwEvent::~ReadyThreadEtwEvent() = default;
ReadyThreadEtwEvent::ReadyThreadEtwEvent(const ReadyThreadEtwEvent&) = default;
ReadyThreadEtwEvent& ReadyThreadEtwEvent::operator=(const ReadyThreadEtwEvent&) = default;
ReadyThreadEtwEvent::ReadyThreadEtwEvent(ReadyThreadEtwEvent&&) noexcept = default;
ReadyThreadEtwEvent& ReadyThreadEtwEvent::operator=(ReadyThreadEtwEvent&&) = default;

bool ReadyThreadEtwEvent::operator==(const ReadyThreadEtwEvent& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(t_thread_id_, other.t_thread_id_)
   && ::protozero::internal::gen_helpers::EqualsField(adjust_reason_, other.adjust_reason_)
   && ::protozero::internal::gen_helpers::EqualsField(adjust_increment_, other.adjust_increment_)
   && ::protozero::internal::gen_helpers::EqualsField(flag_, other.flag_);
}

bool ReadyThreadEtwEvent::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* t_thread_id */:
        field.get(&t_thread_id_);
        break;
      case 2 /* adjust_reason */:
        field.get(&adjust_reason_);
        break;
      case 3 /* adjust_increment */:
        field.get_signed(&adjust_increment_);
        break;
      case 4 /* flag */:
        field.get(&flag_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string ReadyThreadEtwEvent::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> ReadyThreadEtwEvent::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void ReadyThreadEtwEvent::Serialize(::protozero::Message* msg) const {
  // Field 1: t_thread_id
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(1, t_thread_id_, msg);
  }

  // Field 2: adjust_reason
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(2, adjust_reason_, msg);
  }

  // Field 3: adjust_increment
  if (_has_field_[3]) {
    ::protozero::internal::gen_helpers::SerializeSignedVarInt(3, adjust_increment_, msg);
  }

  // Field 4: flag
  if (_has_field_[4]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(4, flag_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


CSwitchEtwEvent::CSwitchEtwEvent() = default;
CSwitchEtwEvent::~CSwitchEtwEvent() = default;
CSwitchEtwEvent::CSwitchEtwEvent(const CSwitchEtwEvent&) = default;
CSwitchEtwEvent& CSwitchEtwEvent::operator=(const CSwitchEtwEvent&) = default;
CSwitchEtwEvent::CSwitchEtwEvent(CSwitchEtwEvent&&) noexcept = default;
CSwitchEtwEvent& CSwitchEtwEvent::operator=(CSwitchEtwEvent&&) = default;

bool CSwitchEtwEvent::operator==(const CSwitchEtwEvent& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(new_thread_id_, other.new_thread_id_)
   && ::protozero::internal::gen_helpers::EqualsField(old_thread_id_, other.old_thread_id_)
   && ::protozero::internal::gen_helpers::EqualsField(new_thread_priority_, other.new_thread_priority_)
   && ::protozero::internal::gen_helpers::EqualsField(old_thread_priority_, other.old_thread_priority_)
   && ::protozero::internal::gen_helpers::EqualsField(previous_c_state_, other.previous_c_state_)
   && ::protozero::internal::gen_helpers::EqualsField(old_thread_wait_reason_, other.old_thread_wait_reason_)
   && ::protozero::internal::gen_helpers::EqualsField(old_thread_wait_mode_, other.old_thread_wait_mode_)
   && ::protozero::internal::gen_helpers::EqualsField(old_thread_state_, other.old_thread_state_)
   && ::protozero::internal::gen_helpers::EqualsField(old_thread_wait_ideal_processor_, other.old_thread_wait_ideal_processor_)
   && ::protozero::internal::gen_helpers::EqualsField(new_thread_wait_time_, other.new_thread_wait_time_);
}

bool CSwitchEtwEvent::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* new_thread_id */:
        field.get(&new_thread_id_);
        break;
      case 2 /* old_thread_id */:
        field.get(&old_thread_id_);
        break;
      case 3 /* new_thread_priority */:
        field.get_signed(&new_thread_priority_);
        break;
      case 4 /* old_thread_priority */:
        field.get_signed(&old_thread_priority_);
        break;
      case 5 /* previous_c_state */:
        field.get(&previous_c_state_);
        break;
      case 6 /* old_thread_wait_reason */:
        field.get(&old_thread_wait_reason_);
        break;
      case 7 /* old_thread_wait_mode */:
        field.get(&old_thread_wait_mode_);
        break;
      case 8 /* old_thread_state */:
        field.get(&old_thread_state_);
        break;
      case 9 /* old_thread_wait_ideal_processor */:
        field.get_signed(&old_thread_wait_ideal_processor_);
        break;
      case 10 /* new_thread_wait_time */:
        field.get(&new_thread_wait_time_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string CSwitchEtwEvent::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> CSwitchEtwEvent::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void CSwitchEtwEvent::Serialize(::protozero::Message* msg) const {
  // Field 1: new_thread_id
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(1, new_thread_id_, msg);
  }

  // Field 2: old_thread_id
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(2, old_thread_id_, msg);
  }

  // Field 3: new_thread_priority
  if (_has_field_[3]) {
    ::protozero::internal::gen_helpers::SerializeSignedVarInt(3, new_thread_priority_, msg);
  }

  // Field 4: old_thread_priority
  if (_has_field_[4]) {
    ::protozero::internal::gen_helpers::SerializeSignedVarInt(4, old_thread_priority_, msg);
  }

  // Field 5: previous_c_state
  if (_has_field_[5]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(5, previous_c_state_, msg);
  }

  // Field 6: old_thread_wait_reason
  if (_has_field_[6]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(6, old_thread_wait_reason_, msg);
  }

  // Field 7: old_thread_wait_mode
  if (_has_field_[7]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(7, old_thread_wait_mode_, msg);
  }

  // Field 8: old_thread_state
  if (_has_field_[8]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(8, old_thread_state_, msg);
  }

  // Field 9: old_thread_wait_ideal_processor
  if (_has_field_[9]) {
    ::protozero::internal::gen_helpers::SerializeSignedVarInt(9, old_thread_wait_ideal_processor_, msg);
  }

  // Field 10: new_thread_wait_time
  if (_has_field_[10]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(10, new_thread_wait_time_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}

}  // namespace perfetto
}  // namespace protos
}  // namespace gen
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif
