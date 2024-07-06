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
#include "protos/perfetto/config/chrome/scenario_config.gen.h"
#include "protos/perfetto/config/trace_config.gen.h"
#include "protos/perfetto/config/data_source_config.gen.h"
#include "protos/perfetto/config/system_info/system_info.gen.h"
#include "protos/perfetto/config/track_event/track_event_config.gen.h"
#include "protos/perfetto/config/test_config.gen.h"
#include "protos/perfetto/config/sys_stats/sys_stats_config.gen.h"
#include "protos/perfetto/common/sys_stats_counters.gen.h"
#include "protos/perfetto/config/profiling/perf_event_config.gen.h"
#include "protos/perfetto/common/perf_events.gen.h"
#include "protos/perfetto/config/profiling/java_hprof_config.gen.h"
#include "protos/perfetto/config/profiling/heapprofd_config.gen.h"
#include "protos/perfetto/config/process_stats/process_stats_config.gen.h"
#include "protos/perfetto/config/statsd/statsd_tracing_config.gen.h"
#include "protos/perfetto/config/statsd/atom_ids.gen.h"
#include "protos/perfetto/config/power/android_power_config.gen.h"
#include "protos/perfetto/config/interceptor_config.gen.h"
#include "protos/perfetto/config/interceptors/console_config.gen.h"
#include "protos/perfetto/config/inode_file/inode_file_config.gen.h"
#include "protos/perfetto/config/gpu/vulkan_memory_config.gen.h"
#include "protos/perfetto/config/gpu/gpu_counter_config.gen.h"
#include "protos/perfetto/config/ftrace/ftrace_config.gen.h"
#include "protos/perfetto/config/etw/etw_config.gen.h"
#include "protos/perfetto/config/chrome/v8_config.gen.h"
#include "protos/perfetto/config/chrome/chrome_config.gen.h"
#include "protos/perfetto/config/android/surfaceflinger_transactions_config.gen.h"
#include "protos/perfetto/config/android/surfaceflinger_layers_config.gen.h"
#include "protos/perfetto/config/android/protolog_config.gen.h"
#include "protos/perfetto/common/protolog_common.gen.h"
#include "protos/perfetto/config/android/pixel_modem_config.gen.h"
#include "protos/perfetto/config/android/packages_list_config.gen.h"
#include "protos/perfetto/config/android/network_trace_config.gen.h"
#include "protos/perfetto/config/android/android_sdk_sysprop_guard_config.gen.h"
#include "protos/perfetto/config/android/android_system_property_config.gen.h"
#include "protos/perfetto/config/android/android_polled_state_config.gen.h"
#include "protos/perfetto/config/android/android_log_config.gen.h"
#include "protos/perfetto/common/android_log_constants.gen.h"
#include "protos/perfetto/config/android/android_input_event_config.gen.h"
#include "protos/perfetto/config/android/android_game_intervention_list_config.gen.h"
#include "protos/perfetto/common/builtin_clock.gen.h"

namespace perfetto {
namespace protos {
namespace gen {

TracingTriggerRulesConfig::TracingTriggerRulesConfig() = default;
TracingTriggerRulesConfig::~TracingTriggerRulesConfig() = default;
TracingTriggerRulesConfig::TracingTriggerRulesConfig(const TracingTriggerRulesConfig&) = default;
TracingTriggerRulesConfig& TracingTriggerRulesConfig::operator=(const TracingTriggerRulesConfig&) = default;
TracingTriggerRulesConfig::TracingTriggerRulesConfig(TracingTriggerRulesConfig&&) noexcept = default;
TracingTriggerRulesConfig& TracingTriggerRulesConfig::operator=(TracingTriggerRulesConfig&&) = default;

bool TracingTriggerRulesConfig::operator==(const TracingTriggerRulesConfig& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(rules_, other.rules_);
}

int TracingTriggerRulesConfig::rules_size() const { return static_cast<int>(rules_.size()); }
void TracingTriggerRulesConfig::clear_rules() { rules_.clear(); }
TriggerRule* TracingTriggerRulesConfig::add_rules() { rules_.emplace_back(); return &rules_.back(); }
bool TracingTriggerRulesConfig::ParseFromArray(const void* raw, size_t size) {
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

std::string TracingTriggerRulesConfig::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> TracingTriggerRulesConfig::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void TracingTriggerRulesConfig::Serialize(::protozero::Message* msg) const {
  // Field 1: rules
  for (auto& it : rules_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(1));
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


TriggerRule::TriggerRule() = default;
TriggerRule::~TriggerRule() = default;
TriggerRule::TriggerRule(const TriggerRule&) = default;
TriggerRule& TriggerRule::operator=(const TriggerRule&) = default;
TriggerRule::TriggerRule(TriggerRule&&) noexcept = default;
TriggerRule& TriggerRule::operator=(TriggerRule&&) = default;

bool TriggerRule::operator==(const TriggerRule& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(name_, other.name_)
   && ::protozero::internal::gen_helpers::EqualsField(trigger_chance_, other.trigger_chance_)
   && ::protozero::internal::gen_helpers::EqualsField(delay_ms_, other.delay_ms_)
   && ::protozero::internal::gen_helpers::EqualsField(activation_delay_ms_, other.activation_delay_ms_)
   && ::protozero::internal::gen_helpers::EqualsField(manual_trigger_name_, other.manual_trigger_name_)
   && ::protozero::internal::gen_helpers::EqualsField(histogram_, other.histogram_)
   && ::protozero::internal::gen_helpers::EqualsField(repeating_interval_, other.repeating_interval_);
}

bool TriggerRule::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* name */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &name_);
        break;
      case 2 /* trigger_chance */:
        field.get(&trigger_chance_);
        break;
      case 3 /* delay_ms */:
        field.get(&delay_ms_);
        break;
      case 8 /* activation_delay_ms */:
        field.get(&activation_delay_ms_);
        break;
      case 4 /* manual_trigger_name */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &manual_trigger_name_);
        break;
      case 5 /* histogram */:
        (*histogram_).ParseFromArray(field.data(), field.size());
        break;
      case 6 /* repeating_interval */:
        (*repeating_interval_).ParseFromArray(field.data(), field.size());
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string TriggerRule::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> TriggerRule::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void TriggerRule::Serialize(::protozero::Message* msg) const {
  // Field 1: name
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeString(1, name_, msg);
  }

  // Field 2: trigger_chance
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeFixed(2, trigger_chance_, msg);
  }

  // Field 3: delay_ms
  if (_has_field_[3]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(3, delay_ms_, msg);
  }

  // Field 8: activation_delay_ms
  if (_has_field_[8]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(8, activation_delay_ms_, msg);
  }

  // Field 4: manual_trigger_name
  if (_has_field_[4]) {
    ::protozero::internal::gen_helpers::SerializeString(4, manual_trigger_name_, msg);
  }

  // Field 5: histogram
  if (_has_field_[5]) {
    (*histogram_).Serialize(msg->BeginNestedMessage<::protozero::Message>(5));
  }

  // Field 6: repeating_interval
  if (_has_field_[6]) {
    (*repeating_interval_).Serialize(msg->BeginNestedMessage<::protozero::Message>(6));
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


TriggerRule_RepeatingInterval::TriggerRule_RepeatingInterval() = default;
TriggerRule_RepeatingInterval::~TriggerRule_RepeatingInterval() = default;
TriggerRule_RepeatingInterval::TriggerRule_RepeatingInterval(const TriggerRule_RepeatingInterval&) = default;
TriggerRule_RepeatingInterval& TriggerRule_RepeatingInterval::operator=(const TriggerRule_RepeatingInterval&) = default;
TriggerRule_RepeatingInterval::TriggerRule_RepeatingInterval(TriggerRule_RepeatingInterval&&) noexcept = default;
TriggerRule_RepeatingInterval& TriggerRule_RepeatingInterval::operator=(TriggerRule_RepeatingInterval&&) = default;

bool TriggerRule_RepeatingInterval::operator==(const TriggerRule_RepeatingInterval& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(period_ms_, other.period_ms_)
   && ::protozero::internal::gen_helpers::EqualsField(randomized_, other.randomized_);
}

bool TriggerRule_RepeatingInterval::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* period_ms */:
        field.get(&period_ms_);
        break;
      case 2 /* randomized */:
        field.get(&randomized_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string TriggerRule_RepeatingInterval::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> TriggerRule_RepeatingInterval::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void TriggerRule_RepeatingInterval::Serialize(::protozero::Message* msg) const {
  // Field 1: period_ms
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(1, period_ms_, msg);
  }

  // Field 2: randomized
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeTinyVarInt(2, randomized_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


TriggerRule_HistogramTrigger::TriggerRule_HistogramTrigger() = default;
TriggerRule_HistogramTrigger::~TriggerRule_HistogramTrigger() = default;
TriggerRule_HistogramTrigger::TriggerRule_HistogramTrigger(const TriggerRule_HistogramTrigger&) = default;
TriggerRule_HistogramTrigger& TriggerRule_HistogramTrigger::operator=(const TriggerRule_HistogramTrigger&) = default;
TriggerRule_HistogramTrigger::TriggerRule_HistogramTrigger(TriggerRule_HistogramTrigger&&) noexcept = default;
TriggerRule_HistogramTrigger& TriggerRule_HistogramTrigger::operator=(TriggerRule_HistogramTrigger&&) = default;

bool TriggerRule_HistogramTrigger::operator==(const TriggerRule_HistogramTrigger& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(histogram_name_, other.histogram_name_)
   && ::protozero::internal::gen_helpers::EqualsField(min_value_, other.min_value_)
   && ::protozero::internal::gen_helpers::EqualsField(max_value_, other.max_value_);
}

bool TriggerRule_HistogramTrigger::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* histogram_name */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &histogram_name_);
        break;
      case 2 /* min_value */:
        field.get(&min_value_);
        break;
      case 3 /* max_value */:
        field.get(&max_value_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string TriggerRule_HistogramTrigger::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> TriggerRule_HistogramTrigger::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void TriggerRule_HistogramTrigger::Serialize(::protozero::Message* msg) const {
  // Field 1: histogram_name
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeString(1, histogram_name_, msg);
  }

  // Field 2: min_value
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(2, min_value_, msg);
  }

  // Field 3: max_value
  if (_has_field_[3]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(3, max_value_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


ChromeFieldTracingConfig::ChromeFieldTracingConfig() = default;
ChromeFieldTracingConfig::~ChromeFieldTracingConfig() = default;
ChromeFieldTracingConfig::ChromeFieldTracingConfig(const ChromeFieldTracingConfig&) = default;
ChromeFieldTracingConfig& ChromeFieldTracingConfig::operator=(const ChromeFieldTracingConfig&) = default;
ChromeFieldTracingConfig::ChromeFieldTracingConfig(ChromeFieldTracingConfig&&) noexcept = default;
ChromeFieldTracingConfig& ChromeFieldTracingConfig::operator=(ChromeFieldTracingConfig&&) = default;

bool ChromeFieldTracingConfig::operator==(const ChromeFieldTracingConfig& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(scenarios_, other.scenarios_);
}

int ChromeFieldTracingConfig::scenarios_size() const { return static_cast<int>(scenarios_.size()); }
void ChromeFieldTracingConfig::clear_scenarios() { scenarios_.clear(); }
ScenarioConfig* ChromeFieldTracingConfig::add_scenarios() { scenarios_.emplace_back(); return &scenarios_.back(); }
bool ChromeFieldTracingConfig::ParseFromArray(const void* raw, size_t size) {
  scenarios_.clear();
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* scenarios */:
        scenarios_.emplace_back();
        scenarios_.back().ParseFromArray(field.data(), field.size());
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string ChromeFieldTracingConfig::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> ChromeFieldTracingConfig::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void ChromeFieldTracingConfig::Serialize(::protozero::Message* msg) const {
  // Field 1: scenarios
  for (auto& it : scenarios_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(1));
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


ScenarioConfig::ScenarioConfig() = default;
ScenarioConfig::~ScenarioConfig() = default;
ScenarioConfig::ScenarioConfig(const ScenarioConfig&) = default;
ScenarioConfig& ScenarioConfig::operator=(const ScenarioConfig&) = default;
ScenarioConfig::ScenarioConfig(ScenarioConfig&&) noexcept = default;
ScenarioConfig& ScenarioConfig::operator=(ScenarioConfig&&) = default;

bool ScenarioConfig::operator==(const ScenarioConfig& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(scenario_name_, other.scenario_name_)
   && ::protozero::internal::gen_helpers::EqualsField(start_rules_, other.start_rules_)
   && ::protozero::internal::gen_helpers::EqualsField(stop_rules_, other.stop_rules_)
   && ::protozero::internal::gen_helpers::EqualsField(upload_rules_, other.upload_rules_)
   && ::protozero::internal::gen_helpers::EqualsField(setup_rules_, other.setup_rules_)
   && ::protozero::internal::gen_helpers::EqualsField(trace_config_, other.trace_config_)
   && ::protozero::internal::gen_helpers::EqualsField(nested_scenarios_, other.nested_scenarios_);
}

int ScenarioConfig::start_rules_size() const { return static_cast<int>(start_rules_.size()); }
void ScenarioConfig::clear_start_rules() { start_rules_.clear(); }
TriggerRule* ScenarioConfig::add_start_rules() { start_rules_.emplace_back(); return &start_rules_.back(); }
int ScenarioConfig::stop_rules_size() const { return static_cast<int>(stop_rules_.size()); }
void ScenarioConfig::clear_stop_rules() { stop_rules_.clear(); }
TriggerRule* ScenarioConfig::add_stop_rules() { stop_rules_.emplace_back(); return &stop_rules_.back(); }
int ScenarioConfig::upload_rules_size() const { return static_cast<int>(upload_rules_.size()); }
void ScenarioConfig::clear_upload_rules() { upload_rules_.clear(); }
TriggerRule* ScenarioConfig::add_upload_rules() { upload_rules_.emplace_back(); return &upload_rules_.back(); }
int ScenarioConfig::setup_rules_size() const { return static_cast<int>(setup_rules_.size()); }
void ScenarioConfig::clear_setup_rules() { setup_rules_.clear(); }
TriggerRule* ScenarioConfig::add_setup_rules() { setup_rules_.emplace_back(); return &setup_rules_.back(); }
int ScenarioConfig::nested_scenarios_size() const { return static_cast<int>(nested_scenarios_.size()); }
void ScenarioConfig::clear_nested_scenarios() { nested_scenarios_.clear(); }
NestedScenarioConfig* ScenarioConfig::add_nested_scenarios() { nested_scenarios_.emplace_back(); return &nested_scenarios_.back(); }
bool ScenarioConfig::ParseFromArray(const void* raw, size_t size) {
  start_rules_.clear();
  stop_rules_.clear();
  upload_rules_.clear();
  setup_rules_.clear();
  nested_scenarios_.clear();
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* scenario_name */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &scenario_name_);
        break;
      case 2 /* start_rules */:
        start_rules_.emplace_back();
        start_rules_.back().ParseFromArray(field.data(), field.size());
        break;
      case 3 /* stop_rules */:
        stop_rules_.emplace_back();
        stop_rules_.back().ParseFromArray(field.data(), field.size());
        break;
      case 4 /* upload_rules */:
        upload_rules_.emplace_back();
        upload_rules_.back().ParseFromArray(field.data(), field.size());
        break;
      case 5 /* setup_rules */:
        setup_rules_.emplace_back();
        setup_rules_.back().ParseFromArray(field.data(), field.size());
        break;
      case 6 /* trace_config */:
        (*trace_config_).ParseFromArray(field.data(), field.size());
        break;
      case 7 /* nested_scenarios */:
        nested_scenarios_.emplace_back();
        nested_scenarios_.back().ParseFromArray(field.data(), field.size());
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string ScenarioConfig::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> ScenarioConfig::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void ScenarioConfig::Serialize(::protozero::Message* msg) const {
  // Field 1: scenario_name
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeString(1, scenario_name_, msg);
  }

  // Field 2: start_rules
  for (auto& it : start_rules_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(2));
  }

  // Field 3: stop_rules
  for (auto& it : stop_rules_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(3));
  }

  // Field 4: upload_rules
  for (auto& it : upload_rules_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(4));
  }

  // Field 5: setup_rules
  for (auto& it : setup_rules_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(5));
  }

  // Field 6: trace_config
  if (_has_field_[6]) {
    (*trace_config_).Serialize(msg->BeginNestedMessage<::protozero::Message>(6));
  }

  // Field 7: nested_scenarios
  for (auto& it : nested_scenarios_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(7));
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


NestedScenarioConfig::NestedScenarioConfig() = default;
NestedScenarioConfig::~NestedScenarioConfig() = default;
NestedScenarioConfig::NestedScenarioConfig(const NestedScenarioConfig&) = default;
NestedScenarioConfig& NestedScenarioConfig::operator=(const NestedScenarioConfig&) = default;
NestedScenarioConfig::NestedScenarioConfig(NestedScenarioConfig&&) noexcept = default;
NestedScenarioConfig& NestedScenarioConfig::operator=(NestedScenarioConfig&&) = default;

bool NestedScenarioConfig::operator==(const NestedScenarioConfig& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(scenario_name_, other.scenario_name_)
   && ::protozero::internal::gen_helpers::EqualsField(start_rules_, other.start_rules_)
   && ::protozero::internal::gen_helpers::EqualsField(stop_rules_, other.stop_rules_)
   && ::protozero::internal::gen_helpers::EqualsField(upload_rules_, other.upload_rules_);
}

int NestedScenarioConfig::start_rules_size() const { return static_cast<int>(start_rules_.size()); }
void NestedScenarioConfig::clear_start_rules() { start_rules_.clear(); }
TriggerRule* NestedScenarioConfig::add_start_rules() { start_rules_.emplace_back(); return &start_rules_.back(); }
int NestedScenarioConfig::stop_rules_size() const { return static_cast<int>(stop_rules_.size()); }
void NestedScenarioConfig::clear_stop_rules() { stop_rules_.clear(); }
TriggerRule* NestedScenarioConfig::add_stop_rules() { stop_rules_.emplace_back(); return &stop_rules_.back(); }
int NestedScenarioConfig::upload_rules_size() const { return static_cast<int>(upload_rules_.size()); }
void NestedScenarioConfig::clear_upload_rules() { upload_rules_.clear(); }
TriggerRule* NestedScenarioConfig::add_upload_rules() { upload_rules_.emplace_back(); return &upload_rules_.back(); }
bool NestedScenarioConfig::ParseFromArray(const void* raw, size_t size) {
  start_rules_.clear();
  stop_rules_.clear();
  upload_rules_.clear();
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* scenario_name */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &scenario_name_);
        break;
      case 2 /* start_rules */:
        start_rules_.emplace_back();
        start_rules_.back().ParseFromArray(field.data(), field.size());
        break;
      case 3 /* stop_rules */:
        stop_rules_.emplace_back();
        stop_rules_.back().ParseFromArray(field.data(), field.size());
        break;
      case 4 /* upload_rules */:
        upload_rules_.emplace_back();
        upload_rules_.back().ParseFromArray(field.data(), field.size());
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string NestedScenarioConfig::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> NestedScenarioConfig::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void NestedScenarioConfig::Serialize(::protozero::Message* msg) const {
  // Field 1: scenario_name
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeString(1, scenario_name_, msg);
  }

  // Field 2: start_rules
  for (auto& it : start_rules_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(2));
  }

  // Field 3: stop_rules
  for (auto& it : stop_rules_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(3));
  }

  // Field 4: upload_rules
  for (auto& it : upload_rules_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(4));
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}

}  // namespace perfetto
}  // namespace protos
}  // namespace gen
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif
