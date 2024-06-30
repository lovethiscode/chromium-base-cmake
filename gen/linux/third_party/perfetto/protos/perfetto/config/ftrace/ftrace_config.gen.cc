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
#include "protos/perfetto/config/ftrace/ftrace_config.gen.h"

namespace perfetto {
namespace protos {
namespace gen {

FtraceConfig::FtraceConfig() = default;
FtraceConfig::~FtraceConfig() = default;
FtraceConfig::FtraceConfig(const FtraceConfig&) = default;
FtraceConfig& FtraceConfig::operator=(const FtraceConfig&) = default;
FtraceConfig::FtraceConfig(FtraceConfig&&) noexcept = default;
FtraceConfig& FtraceConfig::operator=(FtraceConfig&&) = default;

bool FtraceConfig::operator==(const FtraceConfig& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(ftrace_events_, other.ftrace_events_)
   && ::protozero::internal::gen_helpers::EqualsField(atrace_categories_, other.atrace_categories_)
   && ::protozero::internal::gen_helpers::EqualsField(atrace_apps_, other.atrace_apps_)
   && ::protozero::internal::gen_helpers::EqualsField(atrace_categories_prefer_sdk_, other.atrace_categories_prefer_sdk_)
   && ::protozero::internal::gen_helpers::EqualsField(buffer_size_kb_, other.buffer_size_kb_)
   && ::protozero::internal::gen_helpers::EqualsField(drain_period_ms_, other.drain_period_ms_)
   && ::protozero::internal::gen_helpers::EqualsField(drain_buffer_percent_, other.drain_buffer_percent_)
   && ::protozero::internal::gen_helpers::EqualsField(compact_sched_, other.compact_sched_)
   && ::protozero::internal::gen_helpers::EqualsField(print_filter_, other.print_filter_)
   && ::protozero::internal::gen_helpers::EqualsField(symbolize_ksyms_, other.symbolize_ksyms_)
   && ::protozero::internal::gen_helpers::EqualsField(ksyms_mem_policy_, other.ksyms_mem_policy_)
   && ::protozero::internal::gen_helpers::EqualsField(initialize_ksyms_synchronously_for_testing_, other.initialize_ksyms_synchronously_for_testing_)
   && ::protozero::internal::gen_helpers::EqualsField(throttle_rss_stat_, other.throttle_rss_stat_)
   && ::protozero::internal::gen_helpers::EqualsField(disable_generic_events_, other.disable_generic_events_)
   && ::protozero::internal::gen_helpers::EqualsField(syscall_events_, other.syscall_events_)
   && ::protozero::internal::gen_helpers::EqualsField(enable_function_graph_, other.enable_function_graph_)
   && ::protozero::internal::gen_helpers::EqualsField(function_filters_, other.function_filters_)
   && ::protozero::internal::gen_helpers::EqualsField(function_graph_roots_, other.function_graph_roots_)
   && ::protozero::internal::gen_helpers::EqualsField(preserve_ftrace_buffer_, other.preserve_ftrace_buffer_)
   && ::protozero::internal::gen_helpers::EqualsField(use_monotonic_raw_clock_, other.use_monotonic_raw_clock_)
   && ::protozero::internal::gen_helpers::EqualsField(instance_name_, other.instance_name_)
   && ::protozero::internal::gen_helpers::EqualsField(buffer_size_lower_bound_, other.buffer_size_lower_bound_);
}

bool FtraceConfig::ParseFromArray(const void* raw, size_t size) {
  ftrace_events_.clear();
  atrace_categories_.clear();
  atrace_apps_.clear();
  atrace_categories_prefer_sdk_.clear();
  syscall_events_.clear();
  function_filters_.clear();
  function_graph_roots_.clear();
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* ftrace_events */:
        ftrace_events_.emplace_back();
        ::protozero::internal::gen_helpers::DeserializeString(field, &ftrace_events_.back());
        break;
      case 2 /* atrace_categories */:
        atrace_categories_.emplace_back();
        ::protozero::internal::gen_helpers::DeserializeString(field, &atrace_categories_.back());
        break;
      case 3 /* atrace_apps */:
        atrace_apps_.emplace_back();
        ::protozero::internal::gen_helpers::DeserializeString(field, &atrace_apps_.back());
        break;
      case 28 /* atrace_categories_prefer_sdk */:
        atrace_categories_prefer_sdk_.emplace_back();
        ::protozero::internal::gen_helpers::DeserializeString(field, &atrace_categories_prefer_sdk_.back());
        break;
      case 10 /* buffer_size_kb */:
        field.get(&buffer_size_kb_);
        break;
      case 11 /* drain_period_ms */:
        field.get(&drain_period_ms_);
        break;
      case 26 /* drain_buffer_percent */:
        field.get(&drain_buffer_percent_);
        break;
      case 12 /* compact_sched */:
        (*compact_sched_).ParseFromArray(field.data(), field.size());
        break;
      case 22 /* print_filter */:
        (*print_filter_).ParseFromArray(field.data(), field.size());
        break;
      case 13 /* symbolize_ksyms */:
        field.get(&symbolize_ksyms_);
        break;
      case 17 /* ksyms_mem_policy */:
        field.get(&ksyms_mem_policy_);
        break;
      case 14 /* initialize_ksyms_synchronously_for_testing */:
        field.get(&initialize_ksyms_synchronously_for_testing_);
        break;
      case 15 /* throttle_rss_stat */:
        field.get(&throttle_rss_stat_);
        break;
      case 16 /* disable_generic_events */:
        field.get(&disable_generic_events_);
        break;
      case 18 /* syscall_events */:
        syscall_events_.emplace_back();
        ::protozero::internal::gen_helpers::DeserializeString(field, &syscall_events_.back());
        break;
      case 19 /* enable_function_graph */:
        field.get(&enable_function_graph_);
        break;
      case 20 /* function_filters */:
        function_filters_.emplace_back();
        ::protozero::internal::gen_helpers::DeserializeString(field, &function_filters_.back());
        break;
      case 21 /* function_graph_roots */:
        function_graph_roots_.emplace_back();
        ::protozero::internal::gen_helpers::DeserializeString(field, &function_graph_roots_.back());
        break;
      case 23 /* preserve_ftrace_buffer */:
        field.get(&preserve_ftrace_buffer_);
        break;
      case 24 /* use_monotonic_raw_clock */:
        field.get(&use_monotonic_raw_clock_);
        break;
      case 25 /* instance_name */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &instance_name_);
        break;
      case 27 /* buffer_size_lower_bound */:
        field.get(&buffer_size_lower_bound_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string FtraceConfig::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> FtraceConfig::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void FtraceConfig::Serialize(::protozero::Message* msg) const {
  // Field 1: ftrace_events
  for (auto& it : ftrace_events_) {
    ::protozero::internal::gen_helpers::SerializeString(1, it, msg);
  }

  // Field 2: atrace_categories
  for (auto& it : atrace_categories_) {
    ::protozero::internal::gen_helpers::SerializeString(2, it, msg);
  }

  // Field 3: atrace_apps
  for (auto& it : atrace_apps_) {
    ::protozero::internal::gen_helpers::SerializeString(3, it, msg);
  }

  // Field 28: atrace_categories_prefer_sdk
  for (auto& it : atrace_categories_prefer_sdk_) {
    ::protozero::internal::gen_helpers::SerializeString(28, it, msg);
  }

  // Field 10: buffer_size_kb
  if (_has_field_[10]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(10, buffer_size_kb_, msg);
  }

  // Field 11: drain_period_ms
  if (_has_field_[11]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(11, drain_period_ms_, msg);
  }

  // Field 26: drain_buffer_percent
  if (_has_field_[26]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(26, drain_buffer_percent_, msg);
  }

  // Field 12: compact_sched
  if (_has_field_[12]) {
    (*compact_sched_).Serialize(msg->BeginNestedMessage<::protozero::Message>(12));
  }

  // Field 22: print_filter
  if (_has_field_[22]) {
    (*print_filter_).Serialize(msg->BeginNestedMessage<::protozero::Message>(22));
  }

  // Field 13: symbolize_ksyms
  if (_has_field_[13]) {
    ::protozero::internal::gen_helpers::SerializeTinyVarInt(13, symbolize_ksyms_, msg);
  }

  // Field 17: ksyms_mem_policy
  if (_has_field_[17]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(17, ksyms_mem_policy_, msg);
  }

  // Field 14: initialize_ksyms_synchronously_for_testing
  if (_has_field_[14]) {
    ::protozero::internal::gen_helpers::SerializeTinyVarInt(14, initialize_ksyms_synchronously_for_testing_, msg);
  }

  // Field 15: throttle_rss_stat
  if (_has_field_[15]) {
    ::protozero::internal::gen_helpers::SerializeTinyVarInt(15, throttle_rss_stat_, msg);
  }

  // Field 16: disable_generic_events
  if (_has_field_[16]) {
    ::protozero::internal::gen_helpers::SerializeTinyVarInt(16, disable_generic_events_, msg);
  }

  // Field 18: syscall_events
  for (auto& it : syscall_events_) {
    ::protozero::internal::gen_helpers::SerializeString(18, it, msg);
  }

  // Field 19: enable_function_graph
  if (_has_field_[19]) {
    ::protozero::internal::gen_helpers::SerializeTinyVarInt(19, enable_function_graph_, msg);
  }

  // Field 20: function_filters
  for (auto& it : function_filters_) {
    ::protozero::internal::gen_helpers::SerializeString(20, it, msg);
  }

  // Field 21: function_graph_roots
  for (auto& it : function_graph_roots_) {
    ::protozero::internal::gen_helpers::SerializeString(21, it, msg);
  }

  // Field 23: preserve_ftrace_buffer
  if (_has_field_[23]) {
    ::protozero::internal::gen_helpers::SerializeTinyVarInt(23, preserve_ftrace_buffer_, msg);
  }

  // Field 24: use_monotonic_raw_clock
  if (_has_field_[24]) {
    ::protozero::internal::gen_helpers::SerializeTinyVarInt(24, use_monotonic_raw_clock_, msg);
  }

  // Field 25: instance_name
  if (_has_field_[25]) {
    ::protozero::internal::gen_helpers::SerializeString(25, instance_name_, msg);
  }

  // Field 27: buffer_size_lower_bound
  if (_has_field_[27]) {
    ::protozero::internal::gen_helpers::SerializeTinyVarInt(27, buffer_size_lower_bound_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


FtraceConfig_PrintFilter::FtraceConfig_PrintFilter() = default;
FtraceConfig_PrintFilter::~FtraceConfig_PrintFilter() = default;
FtraceConfig_PrintFilter::FtraceConfig_PrintFilter(const FtraceConfig_PrintFilter&) = default;
FtraceConfig_PrintFilter& FtraceConfig_PrintFilter::operator=(const FtraceConfig_PrintFilter&) = default;
FtraceConfig_PrintFilter::FtraceConfig_PrintFilter(FtraceConfig_PrintFilter&&) noexcept = default;
FtraceConfig_PrintFilter& FtraceConfig_PrintFilter::operator=(FtraceConfig_PrintFilter&&) = default;

bool FtraceConfig_PrintFilter::operator==(const FtraceConfig_PrintFilter& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(rules_, other.rules_);
}

int FtraceConfig_PrintFilter::rules_size() const { return static_cast<int>(rules_.size()); }
void FtraceConfig_PrintFilter::clear_rules() { rules_.clear(); }
FtraceConfig_PrintFilter_Rule* FtraceConfig_PrintFilter::add_rules() { rules_.emplace_back(); return &rules_.back(); }
bool FtraceConfig_PrintFilter::ParseFromArray(const void* raw, size_t size) {
  rules_.clear();
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* rules */:
        rules_.emplace_back();
        rules_.back().ParseFromArray(field.data(), field.size());
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string FtraceConfig_PrintFilter::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> FtraceConfig_PrintFilter::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void FtraceConfig_PrintFilter::Serialize(::protozero::Message* msg) const {
  // Field 1: rules
  for (auto& it : rules_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(1));
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


FtraceConfig_PrintFilter_Rule::FtraceConfig_PrintFilter_Rule() = default;
FtraceConfig_PrintFilter_Rule::~FtraceConfig_PrintFilter_Rule() = default;
FtraceConfig_PrintFilter_Rule::FtraceConfig_PrintFilter_Rule(const FtraceConfig_PrintFilter_Rule&) = default;
FtraceConfig_PrintFilter_Rule& FtraceConfig_PrintFilter_Rule::operator=(const FtraceConfig_PrintFilter_Rule&) = default;
FtraceConfig_PrintFilter_Rule::FtraceConfig_PrintFilter_Rule(FtraceConfig_PrintFilter_Rule&&) noexcept = default;
FtraceConfig_PrintFilter_Rule& FtraceConfig_PrintFilter_Rule::operator=(FtraceConfig_PrintFilter_Rule&&) = default;

bool FtraceConfig_PrintFilter_Rule::operator==(const FtraceConfig_PrintFilter_Rule& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(prefix_, other.prefix_)
   && ::protozero::internal::gen_helpers::EqualsField(atrace_msg_, other.atrace_msg_)
   && ::protozero::internal::gen_helpers::EqualsField(allow_, other.allow_);
}

bool FtraceConfig_PrintFilter_Rule::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* prefix */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &prefix_);
        break;
      case 3 /* atrace_msg */:
        (*atrace_msg_).ParseFromArray(field.data(), field.size());
        break;
      case 2 /* allow */:
        field.get(&allow_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string FtraceConfig_PrintFilter_Rule::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> FtraceConfig_PrintFilter_Rule::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void FtraceConfig_PrintFilter_Rule::Serialize(::protozero::Message* msg) const {
  // Field 1: prefix
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeString(1, prefix_, msg);
  }

  // Field 3: atrace_msg
  if (_has_field_[3]) {
    (*atrace_msg_).Serialize(msg->BeginNestedMessage<::protozero::Message>(3));
  }

  // Field 2: allow
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeTinyVarInt(2, allow_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


FtraceConfig_PrintFilter_Rule_AtraceMessage::FtraceConfig_PrintFilter_Rule_AtraceMessage() = default;
FtraceConfig_PrintFilter_Rule_AtraceMessage::~FtraceConfig_PrintFilter_Rule_AtraceMessage() = default;
FtraceConfig_PrintFilter_Rule_AtraceMessage::FtraceConfig_PrintFilter_Rule_AtraceMessage(const FtraceConfig_PrintFilter_Rule_AtraceMessage&) = default;
FtraceConfig_PrintFilter_Rule_AtraceMessage& FtraceConfig_PrintFilter_Rule_AtraceMessage::operator=(const FtraceConfig_PrintFilter_Rule_AtraceMessage&) = default;
FtraceConfig_PrintFilter_Rule_AtraceMessage::FtraceConfig_PrintFilter_Rule_AtraceMessage(FtraceConfig_PrintFilter_Rule_AtraceMessage&&) noexcept = default;
FtraceConfig_PrintFilter_Rule_AtraceMessage& FtraceConfig_PrintFilter_Rule_AtraceMessage::operator=(FtraceConfig_PrintFilter_Rule_AtraceMessage&&) = default;

bool FtraceConfig_PrintFilter_Rule_AtraceMessage::operator==(const FtraceConfig_PrintFilter_Rule_AtraceMessage& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(type_, other.type_)
   && ::protozero::internal::gen_helpers::EqualsField(prefix_, other.prefix_);
}

bool FtraceConfig_PrintFilter_Rule_AtraceMessage::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* type */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &type_);
        break;
      case 2 /* prefix */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &prefix_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string FtraceConfig_PrintFilter_Rule_AtraceMessage::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> FtraceConfig_PrintFilter_Rule_AtraceMessage::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void FtraceConfig_PrintFilter_Rule_AtraceMessage::Serialize(::protozero::Message* msg) const {
  // Field 1: type
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeString(1, type_, msg);
  }

  // Field 2: prefix
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeString(2, prefix_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


FtraceConfig_CompactSchedConfig::FtraceConfig_CompactSchedConfig() = default;
FtraceConfig_CompactSchedConfig::~FtraceConfig_CompactSchedConfig() = default;
FtraceConfig_CompactSchedConfig::FtraceConfig_CompactSchedConfig(const FtraceConfig_CompactSchedConfig&) = default;
FtraceConfig_CompactSchedConfig& FtraceConfig_CompactSchedConfig::operator=(const FtraceConfig_CompactSchedConfig&) = default;
FtraceConfig_CompactSchedConfig::FtraceConfig_CompactSchedConfig(FtraceConfig_CompactSchedConfig&&) noexcept = default;
FtraceConfig_CompactSchedConfig& FtraceConfig_CompactSchedConfig::operator=(FtraceConfig_CompactSchedConfig&&) = default;

bool FtraceConfig_CompactSchedConfig::operator==(const FtraceConfig_CompactSchedConfig& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(enabled_, other.enabled_);
}

bool FtraceConfig_CompactSchedConfig::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* enabled */:
        field.get(&enabled_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string FtraceConfig_CompactSchedConfig::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> FtraceConfig_CompactSchedConfig::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void FtraceConfig_CompactSchedConfig::Serialize(::protozero::Message* msg) const {
  // Field 1: enabled
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeTinyVarInt(1, enabled_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}

}  // namespace perfetto
}  // namespace protos
}  // namespace gen
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif
