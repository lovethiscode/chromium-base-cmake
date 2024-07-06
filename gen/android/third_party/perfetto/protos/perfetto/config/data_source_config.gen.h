// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_CONFIG_DATA_SOURCE_CONFIG_PROTO_CPP_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_CONFIG_DATA_SOURCE_CONFIG_PROTO_CPP_H_

#include <stdint.h>
#include <bitset>
#include <vector>
#include <string>
#include <type_traits>

#include "perfetto/protozero/cpp_message_obj.h"
#include "perfetto/protozero/copyable_ptr.h"
#include "perfetto/base/export.h"

namespace perfetto {
namespace protos {
namespace gen {
class DataSourceConfig;
class TestConfig;
class TestConfig_DummyFields;
class InterceptorConfig;
class ConsoleConfig;
class ChromeConfig;
class SystemInfoConfig;
enum DataSourceConfig_SessionInitiator : int;
enum ConsoleConfig_Output : int;
enum ChromeConfig_ClientPriority : int;
}  // namespace perfetto
}  // namespace protos
}  // namespace gen

namespace protozero {
class Message;
}  // namespace protozero

namespace perfetto {
namespace protos {
namespace gen {
enum DataSourceConfig_SessionInitiator : int {
  DataSourceConfig_SessionInitiator_SESSION_INITIATOR_UNSPECIFIED = 0,
  DataSourceConfig_SessionInitiator_SESSION_INITIATOR_TRUSTED_SYSTEM = 1,
};

class PERFETTO_EXPORT_COMPONENT DataSourceConfig : public ::protozero::CppMessageObj {
 public:
  using SessionInitiator = DataSourceConfig_SessionInitiator;
  static constexpr auto SESSION_INITIATOR_UNSPECIFIED = DataSourceConfig_SessionInitiator_SESSION_INITIATOR_UNSPECIFIED;
  static constexpr auto SESSION_INITIATOR_TRUSTED_SYSTEM = DataSourceConfig_SessionInitiator_SESSION_INITIATOR_TRUSTED_SYSTEM;
  static constexpr auto SessionInitiator_MIN = DataSourceConfig_SessionInitiator_SESSION_INITIATOR_UNSPECIFIED;
  static constexpr auto SessionInitiator_MAX = DataSourceConfig_SessionInitiator_SESSION_INITIATOR_TRUSTED_SYSTEM;
  enum FieldNumbers {
    kNameFieldNumber = 1,
    kTargetBufferFieldNumber = 2,
    kTraceDurationMsFieldNumber = 3,
    kPreferSuspendClockForDurationFieldNumber = 122,
    kStopTimeoutMsFieldNumber = 7,
    kEnableExtraGuardrailsFieldNumber = 6,
    kSessionInitiatorFieldNumber = 8,
    kTracingSessionIdFieldNumber = 4,
    kFtraceConfigFieldNumber = 100,
    kInodeFileConfigFieldNumber = 102,
    kProcessStatsConfigFieldNumber = 103,
    kSysStatsConfigFieldNumber = 104,
    kHeapprofdConfigFieldNumber = 105,
    kJavaHprofConfigFieldNumber = 110,
    kAndroidPowerConfigFieldNumber = 106,
    kAndroidLogConfigFieldNumber = 107,
    kGpuCounterConfigFieldNumber = 108,
    kAndroidGameInterventionListConfigFieldNumber = 116,
    kPackagesListConfigFieldNumber = 109,
    kPerfEventConfigFieldNumber = 111,
    kVulkanMemoryConfigFieldNumber = 112,
    kTrackEventConfigFieldNumber = 113,
    kAndroidPolledStateConfigFieldNumber = 114,
    kAndroidSystemPropertyConfigFieldNumber = 118,
    kStatsdTracingConfigFieldNumber = 117,
    kSystemInfoConfigFieldNumber = 119,
    kChromeConfigFieldNumber = 101,
    kV8ConfigFieldNumber = 127,
    kInterceptorConfigFieldNumber = 115,
    kNetworkPacketTraceConfigFieldNumber = 120,
    kSurfaceflingerLayersConfigFieldNumber = 121,
    kSurfaceflingerTransactionsConfigFieldNumber = 123,
    kAndroidSdkSyspropGuardConfigFieldNumber = 124,
    kEtwConfigFieldNumber = 125,
    kProtologConfigFieldNumber = 126,
    kAndroidInputEventConfigFieldNumber = 128,
    kPixelModemConfigFieldNumber = 129,
    kLegacyConfigFieldNumber = 1000,
    kForTestingFieldNumber = 1001,
  };

  DataSourceConfig();
  ~DataSourceConfig() override;
  DataSourceConfig(DataSourceConfig&&) noexcept;
  DataSourceConfig& operator=(DataSourceConfig&&);
  DataSourceConfig(const DataSourceConfig&);
  DataSourceConfig& operator=(const DataSourceConfig&);
  bool operator==(const DataSourceConfig&) const;
  bool operator!=(const DataSourceConfig& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_name() const { return _has_field_[1]; }
  const std::string& name() const { return name_; }
  void set_name(const std::string& value) { name_ = value; _has_field_.set(1); }

  bool has_target_buffer() const { return _has_field_[2]; }
  uint32_t target_buffer() const { return target_buffer_; }
  void set_target_buffer(uint32_t value) { target_buffer_ = value; _has_field_.set(2); }

  bool has_trace_duration_ms() const { return _has_field_[3]; }
  uint32_t trace_duration_ms() const { return trace_duration_ms_; }
  void set_trace_duration_ms(uint32_t value) { trace_duration_ms_ = value; _has_field_.set(3); }

  bool has_prefer_suspend_clock_for_duration() const { return _has_field_[122]; }
  bool prefer_suspend_clock_for_duration() const { return prefer_suspend_clock_for_duration_; }
  void set_prefer_suspend_clock_for_duration(bool value) { prefer_suspend_clock_for_duration_ = value; _has_field_.set(122); }

  bool has_stop_timeout_ms() const { return _has_field_[7]; }
  uint32_t stop_timeout_ms() const { return stop_timeout_ms_; }
  void set_stop_timeout_ms(uint32_t value) { stop_timeout_ms_ = value; _has_field_.set(7); }

  bool has_enable_extra_guardrails() const { return _has_field_[6]; }
  bool enable_extra_guardrails() const { return enable_extra_guardrails_; }
  void set_enable_extra_guardrails(bool value) { enable_extra_guardrails_ = value; _has_field_.set(6); }

  bool has_session_initiator() const { return _has_field_[8]; }
  DataSourceConfig_SessionInitiator session_initiator() const { return session_initiator_; }
  void set_session_initiator(DataSourceConfig_SessionInitiator value) { session_initiator_ = value; _has_field_.set(8); }

  bool has_tracing_session_id() const { return _has_field_[4]; }
  uint64_t tracing_session_id() const { return tracing_session_id_; }
  void set_tracing_session_id(uint64_t value) { tracing_session_id_ = value; _has_field_.set(4); }

  const std::string& ftrace_config_raw() const { return ftrace_config_; }
  void set_ftrace_config_raw(const std::string& raw) { ftrace_config_ = raw; _has_field_.set(100); }

  const std::string& inode_file_config_raw() const { return inode_file_config_; }
  void set_inode_file_config_raw(const std::string& raw) { inode_file_config_ = raw; _has_field_.set(102); }

  const std::string& process_stats_config_raw() const { return process_stats_config_; }
  void set_process_stats_config_raw(const std::string& raw) { process_stats_config_ = raw; _has_field_.set(103); }

  const std::string& sys_stats_config_raw() const { return sys_stats_config_; }
  void set_sys_stats_config_raw(const std::string& raw) { sys_stats_config_ = raw; _has_field_.set(104); }

  const std::string& heapprofd_config_raw() const { return heapprofd_config_; }
  void set_heapprofd_config_raw(const std::string& raw) { heapprofd_config_ = raw; _has_field_.set(105); }

  const std::string& java_hprof_config_raw() const { return java_hprof_config_; }
  void set_java_hprof_config_raw(const std::string& raw) { java_hprof_config_ = raw; _has_field_.set(110); }

  const std::string& android_power_config_raw() const { return android_power_config_; }
  void set_android_power_config_raw(const std::string& raw) { android_power_config_ = raw; _has_field_.set(106); }

  const std::string& android_log_config_raw() const { return android_log_config_; }
  void set_android_log_config_raw(const std::string& raw) { android_log_config_ = raw; _has_field_.set(107); }

  const std::string& gpu_counter_config_raw() const { return gpu_counter_config_; }
  void set_gpu_counter_config_raw(const std::string& raw) { gpu_counter_config_ = raw; _has_field_.set(108); }

  const std::string& android_game_intervention_list_config_raw() const { return android_game_intervention_list_config_; }
  void set_android_game_intervention_list_config_raw(const std::string& raw) { android_game_intervention_list_config_ = raw; _has_field_.set(116); }

  const std::string& packages_list_config_raw() const { return packages_list_config_; }
  void set_packages_list_config_raw(const std::string& raw) { packages_list_config_ = raw; _has_field_.set(109); }

  const std::string& perf_event_config_raw() const { return perf_event_config_; }
  void set_perf_event_config_raw(const std::string& raw) { perf_event_config_ = raw; _has_field_.set(111); }

  const std::string& vulkan_memory_config_raw() const { return vulkan_memory_config_; }
  void set_vulkan_memory_config_raw(const std::string& raw) { vulkan_memory_config_ = raw; _has_field_.set(112); }

  const std::string& track_event_config_raw() const { return track_event_config_; }
  void set_track_event_config_raw(const std::string& raw) { track_event_config_ = raw; _has_field_.set(113); }

  const std::string& android_polled_state_config_raw() const { return android_polled_state_config_; }
  void set_android_polled_state_config_raw(const std::string& raw) { android_polled_state_config_ = raw; _has_field_.set(114); }

  const std::string& android_system_property_config_raw() const { return android_system_property_config_; }
  void set_android_system_property_config_raw(const std::string& raw) { android_system_property_config_ = raw; _has_field_.set(118); }

  const std::string& statsd_tracing_config_raw() const { return statsd_tracing_config_; }
  void set_statsd_tracing_config_raw(const std::string& raw) { statsd_tracing_config_ = raw; _has_field_.set(117); }

  bool has_system_info_config() const { return _has_field_[119]; }
  const SystemInfoConfig& system_info_config() const { return *system_info_config_; }
  SystemInfoConfig* mutable_system_info_config() { _has_field_.set(119); return system_info_config_.get(); }

  bool has_chrome_config() const { return _has_field_[101]; }
  const ChromeConfig& chrome_config() const { return *chrome_config_; }
  ChromeConfig* mutable_chrome_config() { _has_field_.set(101); return chrome_config_.get(); }

  const std::string& v8_config_raw() const { return v8_config_; }
  void set_v8_config_raw(const std::string& raw) { v8_config_ = raw; _has_field_.set(127); }

  bool has_interceptor_config() const { return _has_field_[115]; }
  const InterceptorConfig& interceptor_config() const { return *interceptor_config_; }
  InterceptorConfig* mutable_interceptor_config() { _has_field_.set(115); return interceptor_config_.get(); }

  const std::string& network_packet_trace_config_raw() const { return network_packet_trace_config_; }
  void set_network_packet_trace_config_raw(const std::string& raw) { network_packet_trace_config_ = raw; _has_field_.set(120); }

  const std::string& surfaceflinger_layers_config_raw() const { return surfaceflinger_layers_config_; }
  void set_surfaceflinger_layers_config_raw(const std::string& raw) { surfaceflinger_layers_config_ = raw; _has_field_.set(121); }

  const std::string& surfaceflinger_transactions_config_raw() const { return surfaceflinger_transactions_config_; }
  void set_surfaceflinger_transactions_config_raw(const std::string& raw) { surfaceflinger_transactions_config_ = raw; _has_field_.set(123); }

  const std::string& android_sdk_sysprop_guard_config_raw() const { return android_sdk_sysprop_guard_config_; }
  void set_android_sdk_sysprop_guard_config_raw(const std::string& raw) { android_sdk_sysprop_guard_config_ = raw; _has_field_.set(124); }

  const std::string& etw_config_raw() const { return etw_config_; }
  void set_etw_config_raw(const std::string& raw) { etw_config_ = raw; _has_field_.set(125); }

  const std::string& protolog_config_raw() const { return protolog_config_; }
  void set_protolog_config_raw(const std::string& raw) { protolog_config_ = raw; _has_field_.set(126); }

  const std::string& android_input_event_config_raw() const { return android_input_event_config_; }
  void set_android_input_event_config_raw(const std::string& raw) { android_input_event_config_ = raw; _has_field_.set(128); }

  const std::string& pixel_modem_config_raw() const { return pixel_modem_config_; }
  void set_pixel_modem_config_raw(const std::string& raw) { pixel_modem_config_ = raw; _has_field_.set(129); }

  bool has_legacy_config() const { return _has_field_[1000]; }
  const std::string& legacy_config() const { return legacy_config_; }
  void set_legacy_config(const std::string& value) { legacy_config_ = value; _has_field_.set(1000); }

  bool has_for_testing() const { return _has_field_[1001]; }
  const TestConfig& for_testing() const { return *for_testing_; }
  TestConfig* mutable_for_testing() { _has_field_.set(1001); return for_testing_.get(); }

 private:
  std::string name_{};
  uint32_t target_buffer_{};
  uint32_t trace_duration_ms_{};
  bool prefer_suspend_clock_for_duration_{};
  uint32_t stop_timeout_ms_{};
  bool enable_extra_guardrails_{};
  DataSourceConfig_SessionInitiator session_initiator_{};
  uint64_t tracing_session_id_{};
  std::string ftrace_config_;  // [lazy=true]
  std::string inode_file_config_;  // [lazy=true]
  std::string process_stats_config_;  // [lazy=true]
  std::string sys_stats_config_;  // [lazy=true]
  std::string heapprofd_config_;  // [lazy=true]
  std::string java_hprof_config_;  // [lazy=true]
  std::string android_power_config_;  // [lazy=true]
  std::string android_log_config_;  // [lazy=true]
  std::string gpu_counter_config_;  // [lazy=true]
  std::string android_game_intervention_list_config_;  // [lazy=true]
  std::string packages_list_config_;  // [lazy=true]
  std::string perf_event_config_;  // [lazy=true]
  std::string vulkan_memory_config_;  // [lazy=true]
  std::string track_event_config_;  // [lazy=true]
  std::string android_polled_state_config_;  // [lazy=true]
  std::string android_system_property_config_;  // [lazy=true]
  std::string statsd_tracing_config_;  // [lazy=true]
  ::protozero::CopyablePtr<SystemInfoConfig> system_info_config_;
  ::protozero::CopyablePtr<ChromeConfig> chrome_config_;
  std::string v8_config_;  // [lazy=true]
  ::protozero::CopyablePtr<InterceptorConfig> interceptor_config_;
  std::string network_packet_trace_config_;  // [lazy=true]
  std::string surfaceflinger_layers_config_;  // [lazy=true]
  std::string surfaceflinger_transactions_config_;  // [lazy=true]
  std::string android_sdk_sysprop_guard_config_;  // [lazy=true]
  std::string etw_config_;  // [lazy=true]
  std::string protolog_config_;  // [lazy=true]
  std::string android_input_event_config_;  // [lazy=true]
  std::string pixel_modem_config_;  // [lazy=true]
  std::string legacy_config_{};
  ::protozero::CopyablePtr<TestConfig> for_testing_;

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<1002> _has_field_{};
};

}  // namespace perfetto
}  // namespace protos
}  // namespace gen

#endif  // PERFETTO_PROTOS_PROTOS_PERFETTO_CONFIG_DATA_SOURCE_CONFIG_PROTO_CPP_H_
