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
#include "protos/perfetto/config/android/protolog_config.gen.h"
#include "protos/perfetto/common/protolog_common.gen.h"

namespace perfetto {
namespace protos {
namespace gen {

ProtoLogGroup::ProtoLogGroup() = default;
ProtoLogGroup::~ProtoLogGroup() = default;
ProtoLogGroup::ProtoLogGroup(const ProtoLogGroup&) = default;
ProtoLogGroup& ProtoLogGroup::operator=(const ProtoLogGroup&) = default;
ProtoLogGroup::ProtoLogGroup(ProtoLogGroup&&) noexcept = default;
ProtoLogGroup& ProtoLogGroup::operator=(ProtoLogGroup&&) = default;

bool ProtoLogGroup::operator==(const ProtoLogGroup& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(group_name_, other.group_name_)
   && ::protozero::internal::gen_helpers::EqualsField(log_from_, other.log_from_)
   && ::protozero::internal::gen_helpers::EqualsField(collect_stacktrace_, other.collect_stacktrace_);
}

bool ProtoLogGroup::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* group_name */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &group_name_);
        break;
      case 2 /* log_from */:
        field.get(&log_from_);
        break;
      case 3 /* collect_stacktrace */:
        field.get(&collect_stacktrace_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string ProtoLogGroup::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> ProtoLogGroup::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void ProtoLogGroup::Serialize(::protozero::Message* msg) const {
  // Field 1: group_name
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeString(1, group_name_, msg);
  }

  // Field 2: log_from
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(2, log_from_, msg);
  }

  // Field 3: collect_stacktrace
  if (_has_field_[3]) {
    ::protozero::internal::gen_helpers::SerializeTinyVarInt(3, collect_stacktrace_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


ProtoLogConfig::ProtoLogConfig() = default;
ProtoLogConfig::~ProtoLogConfig() = default;
ProtoLogConfig::ProtoLogConfig(const ProtoLogConfig&) = default;
ProtoLogConfig& ProtoLogConfig::operator=(const ProtoLogConfig&) = default;
ProtoLogConfig::ProtoLogConfig(ProtoLogConfig&&) noexcept = default;
ProtoLogConfig& ProtoLogConfig::operator=(ProtoLogConfig&&) = default;

bool ProtoLogConfig::operator==(const ProtoLogConfig& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(group_overrides_, other.group_overrides_)
   && ::protozero::internal::gen_helpers::EqualsField(tracing_mode_, other.tracing_mode_);
}

int ProtoLogConfig::group_overrides_size() const { return static_cast<int>(group_overrides_.size()); }
void ProtoLogConfig::clear_group_overrides() { group_overrides_.clear(); }
ProtoLogGroup* ProtoLogConfig::add_group_overrides() { group_overrides_.emplace_back(); return &group_overrides_.back(); }
bool ProtoLogConfig::ParseFromArray(const void* raw, size_t size) {
  group_overrides_.clear();
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* group_overrides */:
        group_overrides_.emplace_back();
        group_overrides_.back().ParseFromArray(field.data(), field.size());
        break;
      case 2 /* tracing_mode */:
        field.get(&tracing_mode_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string ProtoLogConfig::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> ProtoLogConfig::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void ProtoLogConfig::Serialize(::protozero::Message* msg) const {
  // Field 1: group_overrides
  for (auto& it : group_overrides_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(1));
  }

  // Field 2: tracing_mode
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(2, tracing_mode_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}

}  // namespace perfetto
}  // namespace protos
}  // namespace gen
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif