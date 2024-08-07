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
#include "protos/perfetto/trace/power/android_energy_estimation_breakdown.gen.h"
#include "protos/perfetto/common/android_energy_consumer_descriptor.gen.h"

namespace perfetto {
namespace protos {
namespace gen {

AndroidEnergyEstimationBreakdown::AndroidEnergyEstimationBreakdown() = default;
AndroidEnergyEstimationBreakdown::~AndroidEnergyEstimationBreakdown() = default;
AndroidEnergyEstimationBreakdown::AndroidEnergyEstimationBreakdown(const AndroidEnergyEstimationBreakdown&) = default;
AndroidEnergyEstimationBreakdown& AndroidEnergyEstimationBreakdown::operator=(const AndroidEnergyEstimationBreakdown&) = default;
AndroidEnergyEstimationBreakdown::AndroidEnergyEstimationBreakdown(AndroidEnergyEstimationBreakdown&&) noexcept = default;
AndroidEnergyEstimationBreakdown& AndroidEnergyEstimationBreakdown::operator=(AndroidEnergyEstimationBreakdown&&) = default;

bool AndroidEnergyEstimationBreakdown::operator==(const AndroidEnergyEstimationBreakdown& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(energy_consumer_descriptor_, other.energy_consumer_descriptor_)
   && ::protozero::internal::gen_helpers::EqualsField(energy_consumer_id_, other.energy_consumer_id_)
   && ::protozero::internal::gen_helpers::EqualsField(energy_uws_, other.energy_uws_)
   && ::protozero::internal::gen_helpers::EqualsField(per_uid_breakdown_, other.per_uid_breakdown_);
}

int AndroidEnergyEstimationBreakdown::per_uid_breakdown_size() const { return static_cast<int>(per_uid_breakdown_.size()); }
void AndroidEnergyEstimationBreakdown::clear_per_uid_breakdown() { per_uid_breakdown_.clear(); }
AndroidEnergyEstimationBreakdown_EnergyUidBreakdown* AndroidEnergyEstimationBreakdown::add_per_uid_breakdown() { per_uid_breakdown_.emplace_back(); return &per_uid_breakdown_.back(); }
bool AndroidEnergyEstimationBreakdown::ParseFromArray(const void* raw, size_t size) {
  per_uid_breakdown_.clear();
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* energy_consumer_descriptor */:
        (*energy_consumer_descriptor_).ParseFromArray(field.data(), field.size());
        break;
      case 2 /* energy_consumer_id */:
        field.get(&energy_consumer_id_);
        break;
      case 3 /* energy_uws */:
        field.get(&energy_uws_);
        break;
      case 4 /* per_uid_breakdown */:
        per_uid_breakdown_.emplace_back();
        per_uid_breakdown_.back().ParseFromArray(field.data(), field.size());
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string AndroidEnergyEstimationBreakdown::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> AndroidEnergyEstimationBreakdown::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void AndroidEnergyEstimationBreakdown::Serialize(::protozero::Message* msg) const {
  // Field 1: energy_consumer_descriptor
  if (_has_field_[1]) {
    (*energy_consumer_descriptor_).Serialize(msg->BeginNestedMessage<::protozero::Message>(1));
  }

  // Field 2: energy_consumer_id
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(2, energy_consumer_id_, msg);
  }

  // Field 3: energy_uws
  if (_has_field_[3]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(3, energy_uws_, msg);
  }

  // Field 4: per_uid_breakdown
  for (auto& it : per_uid_breakdown_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(4));
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


AndroidEnergyEstimationBreakdown_EnergyUidBreakdown::AndroidEnergyEstimationBreakdown_EnergyUidBreakdown() = default;
AndroidEnergyEstimationBreakdown_EnergyUidBreakdown::~AndroidEnergyEstimationBreakdown_EnergyUidBreakdown() = default;
AndroidEnergyEstimationBreakdown_EnergyUidBreakdown::AndroidEnergyEstimationBreakdown_EnergyUidBreakdown(const AndroidEnergyEstimationBreakdown_EnergyUidBreakdown&) = default;
AndroidEnergyEstimationBreakdown_EnergyUidBreakdown& AndroidEnergyEstimationBreakdown_EnergyUidBreakdown::operator=(const AndroidEnergyEstimationBreakdown_EnergyUidBreakdown&) = default;
AndroidEnergyEstimationBreakdown_EnergyUidBreakdown::AndroidEnergyEstimationBreakdown_EnergyUidBreakdown(AndroidEnergyEstimationBreakdown_EnergyUidBreakdown&&) noexcept = default;
AndroidEnergyEstimationBreakdown_EnergyUidBreakdown& AndroidEnergyEstimationBreakdown_EnergyUidBreakdown::operator=(AndroidEnergyEstimationBreakdown_EnergyUidBreakdown&&) = default;

bool AndroidEnergyEstimationBreakdown_EnergyUidBreakdown::operator==(const AndroidEnergyEstimationBreakdown_EnergyUidBreakdown& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(uid_, other.uid_)
   && ::protozero::internal::gen_helpers::EqualsField(energy_uws_, other.energy_uws_);
}

bool AndroidEnergyEstimationBreakdown_EnergyUidBreakdown::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* uid */:
        field.get(&uid_);
        break;
      case 2 /* energy_uws */:
        field.get(&energy_uws_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string AndroidEnergyEstimationBreakdown_EnergyUidBreakdown::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> AndroidEnergyEstimationBreakdown_EnergyUidBreakdown::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void AndroidEnergyEstimationBreakdown_EnergyUidBreakdown::Serialize(::protozero::Message* msg) const {
  // Field 1: uid
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(1, uid_, msg);
  }

  // Field 2: energy_uws
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(2, energy_uws_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}

}  // namespace perfetto
}  // namespace protos
}  // namespace gen
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif
