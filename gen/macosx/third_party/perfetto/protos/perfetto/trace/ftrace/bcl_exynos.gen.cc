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
#include "protos/perfetto/trace/ftrace/bcl_exynos.gen.h"

namespace perfetto {
namespace protos {
namespace gen {

BclIrqTriggerFtraceEvent::BclIrqTriggerFtraceEvent() = default;
BclIrqTriggerFtraceEvent::~BclIrqTriggerFtraceEvent() = default;
BclIrqTriggerFtraceEvent::BclIrqTriggerFtraceEvent(const BclIrqTriggerFtraceEvent&) = default;
BclIrqTriggerFtraceEvent& BclIrqTriggerFtraceEvent::operator=(const BclIrqTriggerFtraceEvent&) = default;
BclIrqTriggerFtraceEvent::BclIrqTriggerFtraceEvent(BclIrqTriggerFtraceEvent&&) noexcept = default;
BclIrqTriggerFtraceEvent& BclIrqTriggerFtraceEvent::operator=(BclIrqTriggerFtraceEvent&&) = default;

bool BclIrqTriggerFtraceEvent::operator==(const BclIrqTriggerFtraceEvent& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(id_, other.id_)
   && ::protozero::internal::gen_helpers::EqualsField(throttle_, other.throttle_)
   && ::protozero::internal::gen_helpers::EqualsField(cpu0_limit_, other.cpu0_limit_)
   && ::protozero::internal::gen_helpers::EqualsField(cpu1_limit_, other.cpu1_limit_)
   && ::protozero::internal::gen_helpers::EqualsField(cpu2_limit_, other.cpu2_limit_)
   && ::protozero::internal::gen_helpers::EqualsField(tpu_limit_, other.tpu_limit_)
   && ::protozero::internal::gen_helpers::EqualsField(gpu_limit_, other.gpu_limit_)
   && ::protozero::internal::gen_helpers::EqualsField(voltage_, other.voltage_)
   && ::protozero::internal::gen_helpers::EqualsField(capacity_, other.capacity_);
}

bool BclIrqTriggerFtraceEvent::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* id */:
        field.get(&id_);
        break;
      case 2 /* throttle */:
        field.get(&throttle_);
        break;
      case 3 /* cpu0_limit */:
        field.get(&cpu0_limit_);
        break;
      case 4 /* cpu1_limit */:
        field.get(&cpu1_limit_);
        break;
      case 5 /* cpu2_limit */:
        field.get(&cpu2_limit_);
        break;
      case 6 /* tpu_limit */:
        field.get(&tpu_limit_);
        break;
      case 7 /* gpu_limit */:
        field.get(&gpu_limit_);
        break;
      case 8 /* voltage */:
        field.get(&voltage_);
        break;
      case 9 /* capacity */:
        field.get(&capacity_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string BclIrqTriggerFtraceEvent::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> BclIrqTriggerFtraceEvent::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void BclIrqTriggerFtraceEvent::Serialize(::protozero::Message* msg) const {
  // Field 1: id
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(1, id_, msg);
  }

  // Field 2: throttle
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(2, throttle_, msg);
  }

  // Field 3: cpu0_limit
  if (_has_field_[3]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(3, cpu0_limit_, msg);
  }

  // Field 4: cpu1_limit
  if (_has_field_[4]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(4, cpu1_limit_, msg);
  }

  // Field 5: cpu2_limit
  if (_has_field_[5]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(5, cpu2_limit_, msg);
  }

  // Field 6: tpu_limit
  if (_has_field_[6]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(6, tpu_limit_, msg);
  }

  // Field 7: gpu_limit
  if (_has_field_[7]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(7, gpu_limit_, msg);
  }

  // Field 8: voltage
  if (_has_field_[8]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(8, voltage_, msg);
  }

  // Field 9: capacity
  if (_has_field_[9]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(9, capacity_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}

}  // namespace perfetto
}  // namespace protos
}  // namespace gen
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif
