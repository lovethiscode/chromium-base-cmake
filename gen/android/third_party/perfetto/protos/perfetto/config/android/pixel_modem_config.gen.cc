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
#include "protos/perfetto/config/android/pixel_modem_config.gen.h"

namespace perfetto {
namespace protos {
namespace gen {

PixelModemConfig::PixelModemConfig() = default;
PixelModemConfig::~PixelModemConfig() = default;
PixelModemConfig::PixelModemConfig(const PixelModemConfig&) = default;
PixelModemConfig& PixelModemConfig::operator=(const PixelModemConfig&) = default;
PixelModemConfig::PixelModemConfig(PixelModemConfig&&) noexcept = default;
PixelModemConfig& PixelModemConfig::operator=(PixelModemConfig&&) = default;

bool PixelModemConfig::operator==(const PixelModemConfig& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(event_group_, other.event_group_)
   && ::protozero::internal::gen_helpers::EqualsField(pigweed_hash_allow_list_, other.pigweed_hash_allow_list_)
   && ::protozero::internal::gen_helpers::EqualsField(pigweed_hash_deny_list_, other.pigweed_hash_deny_list_);
}

bool PixelModemConfig::ParseFromArray(const void* raw, size_t size) {
  pigweed_hash_allow_list_.clear();
  pigweed_hash_deny_list_.clear();
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* event_group */:
        field.get(&event_group_);
        break;
      case 2 /* pigweed_hash_allow_list */:
        pigweed_hash_allow_list_.emplace_back();
        field.get(&pigweed_hash_allow_list_.back());
        break;
      case 3 /* pigweed_hash_deny_list */:
        pigweed_hash_deny_list_.emplace_back();
        field.get(&pigweed_hash_deny_list_.back());
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string PixelModemConfig::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> PixelModemConfig::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void PixelModemConfig::Serialize(::protozero::Message* msg) const {
  // Field 1: event_group
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(1, event_group_, msg);
  }

  // Field 2: pigweed_hash_allow_list
  for (auto& it : pigweed_hash_allow_list_) {
    ::protozero::internal::gen_helpers::SerializeVarInt(2, it, msg);
  }

  // Field 3: pigweed_hash_deny_list
  for (auto& it : pigweed_hash_deny_list_) {
    ::protozero::internal::gen_helpers::SerializeVarInt(3, it, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}

}  // namespace perfetto
}  // namespace protos
}  // namespace gen
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif
