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
#include "protos/perfetto/trace/ftrace/task.gen.h"

namespace perfetto {
namespace protos {
namespace gen {

TaskRenameFtraceEvent::TaskRenameFtraceEvent() = default;
TaskRenameFtraceEvent::~TaskRenameFtraceEvent() = default;
TaskRenameFtraceEvent::TaskRenameFtraceEvent(const TaskRenameFtraceEvent&) = default;
TaskRenameFtraceEvent& TaskRenameFtraceEvent::operator=(const TaskRenameFtraceEvent&) = default;
TaskRenameFtraceEvent::TaskRenameFtraceEvent(TaskRenameFtraceEvent&&) noexcept = default;
TaskRenameFtraceEvent& TaskRenameFtraceEvent::operator=(TaskRenameFtraceEvent&&) = default;

bool TaskRenameFtraceEvent::operator==(const TaskRenameFtraceEvent& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(pid_, other.pid_)
   && ::protozero::internal::gen_helpers::EqualsField(oldcomm_, other.oldcomm_)
   && ::protozero::internal::gen_helpers::EqualsField(newcomm_, other.newcomm_)
   && ::protozero::internal::gen_helpers::EqualsField(oom_score_adj_, other.oom_score_adj_);
}

bool TaskRenameFtraceEvent::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* pid */:
        field.get(&pid_);
        break;
      case 2 /* oldcomm */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &oldcomm_);
        break;
      case 3 /* newcomm */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &newcomm_);
        break;
      case 4 /* oom_score_adj */:
        field.get(&oom_score_adj_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string TaskRenameFtraceEvent::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> TaskRenameFtraceEvent::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void TaskRenameFtraceEvent::Serialize(::protozero::Message* msg) const {
  // Field 1: pid
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(1, pid_, msg);
  }

  // Field 2: oldcomm
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeString(2, oldcomm_, msg);
  }

  // Field 3: newcomm
  if (_has_field_[3]) {
    ::protozero::internal::gen_helpers::SerializeString(3, newcomm_, msg);
  }

  // Field 4: oom_score_adj
  if (_has_field_[4]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(4, oom_score_adj_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


TaskNewtaskFtraceEvent::TaskNewtaskFtraceEvent() = default;
TaskNewtaskFtraceEvent::~TaskNewtaskFtraceEvent() = default;
TaskNewtaskFtraceEvent::TaskNewtaskFtraceEvent(const TaskNewtaskFtraceEvent&) = default;
TaskNewtaskFtraceEvent& TaskNewtaskFtraceEvent::operator=(const TaskNewtaskFtraceEvent&) = default;
TaskNewtaskFtraceEvent::TaskNewtaskFtraceEvent(TaskNewtaskFtraceEvent&&) noexcept = default;
TaskNewtaskFtraceEvent& TaskNewtaskFtraceEvent::operator=(TaskNewtaskFtraceEvent&&) = default;

bool TaskNewtaskFtraceEvent::operator==(const TaskNewtaskFtraceEvent& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(pid_, other.pid_)
   && ::protozero::internal::gen_helpers::EqualsField(comm_, other.comm_)
   && ::protozero::internal::gen_helpers::EqualsField(clone_flags_, other.clone_flags_)
   && ::protozero::internal::gen_helpers::EqualsField(oom_score_adj_, other.oom_score_adj_);
}

bool TaskNewtaskFtraceEvent::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* pid */:
        field.get(&pid_);
        break;
      case 2 /* comm */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &comm_);
        break;
      case 3 /* clone_flags */:
        field.get(&clone_flags_);
        break;
      case 4 /* oom_score_adj */:
        field.get(&oom_score_adj_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string TaskNewtaskFtraceEvent::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> TaskNewtaskFtraceEvent::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void TaskNewtaskFtraceEvent::Serialize(::protozero::Message* msg) const {
  // Field 1: pid
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(1, pid_, msg);
  }

  // Field 2: comm
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeString(2, comm_, msg);
  }

  // Field 3: clone_flags
  if (_has_field_[3]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(3, clone_flags_, msg);
  }

  // Field 4: oom_score_adj
  if (_has_field_[4]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(4, oom_score_adj_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}

}  // namespace perfetto
}  // namespace protos
}  // namespace gen
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif
