// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_POWER_PROTO_CPP_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_POWER_PROTO_CPP_H_

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
class DevicePmCallbackEndFtraceEvent;
class DevicePmCallbackStartFtraceEvent;
class GpuWorkPeriodFtraceEvent;
class WakeupSourceDeactivateFtraceEvent;
class WakeupSourceActivateFtraceEvent;
class GpuFrequencyFtraceEvent;
class SuspendResumeFtraceEvent;
class ClockSetRateFtraceEvent;
class ClockDisableFtraceEvent;
class ClockEnableFtraceEvent;
class CpuIdleFtraceEvent;
class CpuFrequencyLimitsFtraceEvent;
class CpuFrequencyFtraceEvent;
}  // namespace perfetto
}  // namespace protos
}  // namespace gen

namespace protozero {
class Message;
}  // namespace protozero

namespace perfetto {
namespace protos {
namespace gen {

class PERFETTO_EXPORT_COMPONENT DevicePmCallbackEndFtraceEvent : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kDeviceFieldNumber = 1,
    kDriverFieldNumber = 2,
    kErrorFieldNumber = 3,
  };

  DevicePmCallbackEndFtraceEvent();
  ~DevicePmCallbackEndFtraceEvent() override;
  DevicePmCallbackEndFtraceEvent(DevicePmCallbackEndFtraceEvent&&) noexcept;
  DevicePmCallbackEndFtraceEvent& operator=(DevicePmCallbackEndFtraceEvent&&);
  DevicePmCallbackEndFtraceEvent(const DevicePmCallbackEndFtraceEvent&);
  DevicePmCallbackEndFtraceEvent& operator=(const DevicePmCallbackEndFtraceEvent&);
  bool operator==(const DevicePmCallbackEndFtraceEvent&) const;
  bool operator!=(const DevicePmCallbackEndFtraceEvent& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_device() const { return _has_field_[1]; }
  const std::string& device() const { return device_; }
  void set_device(const std::string& value) { device_ = value; _has_field_.set(1); }

  bool has_driver() const { return _has_field_[2]; }
  const std::string& driver() const { return driver_; }
  void set_driver(const std::string& value) { driver_ = value; _has_field_.set(2); }

  bool has_error() const { return _has_field_[3]; }
  int32_t error() const { return error_; }
  void set_error(int32_t value) { error_ = value; _has_field_.set(3); }

 private:
  std::string device_{};
  std::string driver_{};
  int32_t error_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<4> _has_field_{};
};


class PERFETTO_EXPORT_COMPONENT DevicePmCallbackStartFtraceEvent : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kDeviceFieldNumber = 1,
    kDriverFieldNumber = 2,
    kParentFieldNumber = 3,
    kPmOpsFieldNumber = 4,
    kEventFieldNumber = 5,
  };

  DevicePmCallbackStartFtraceEvent();
  ~DevicePmCallbackStartFtraceEvent() override;
  DevicePmCallbackStartFtraceEvent(DevicePmCallbackStartFtraceEvent&&) noexcept;
  DevicePmCallbackStartFtraceEvent& operator=(DevicePmCallbackStartFtraceEvent&&);
  DevicePmCallbackStartFtraceEvent(const DevicePmCallbackStartFtraceEvent&);
  DevicePmCallbackStartFtraceEvent& operator=(const DevicePmCallbackStartFtraceEvent&);
  bool operator==(const DevicePmCallbackStartFtraceEvent&) const;
  bool operator!=(const DevicePmCallbackStartFtraceEvent& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_device() const { return _has_field_[1]; }
  const std::string& device() const { return device_; }
  void set_device(const std::string& value) { device_ = value; _has_field_.set(1); }

  bool has_driver() const { return _has_field_[2]; }
  const std::string& driver() const { return driver_; }
  void set_driver(const std::string& value) { driver_ = value; _has_field_.set(2); }

  bool has_parent() const { return _has_field_[3]; }
  const std::string& parent() const { return parent_; }
  void set_parent(const std::string& value) { parent_ = value; _has_field_.set(3); }

  bool has_pm_ops() const { return _has_field_[4]; }
  const std::string& pm_ops() const { return pm_ops_; }
  void set_pm_ops(const std::string& value) { pm_ops_ = value; _has_field_.set(4); }

  bool has_event() const { return _has_field_[5]; }
  int32_t event() const { return event_; }
  void set_event(int32_t value) { event_ = value; _has_field_.set(5); }

 private:
  std::string device_{};
  std::string driver_{};
  std::string parent_{};
  std::string pm_ops_{};
  int32_t event_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<6> _has_field_{};
};


class PERFETTO_EXPORT_COMPONENT GpuWorkPeriodFtraceEvent : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kGpuIdFieldNumber = 1,
    kUidFieldNumber = 2,
    kStartTimeNsFieldNumber = 3,
    kEndTimeNsFieldNumber = 4,
    kTotalActiveDurationNsFieldNumber = 5,
  };

  GpuWorkPeriodFtraceEvent();
  ~GpuWorkPeriodFtraceEvent() override;
  GpuWorkPeriodFtraceEvent(GpuWorkPeriodFtraceEvent&&) noexcept;
  GpuWorkPeriodFtraceEvent& operator=(GpuWorkPeriodFtraceEvent&&);
  GpuWorkPeriodFtraceEvent(const GpuWorkPeriodFtraceEvent&);
  GpuWorkPeriodFtraceEvent& operator=(const GpuWorkPeriodFtraceEvent&);
  bool operator==(const GpuWorkPeriodFtraceEvent&) const;
  bool operator!=(const GpuWorkPeriodFtraceEvent& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_gpu_id() const { return _has_field_[1]; }
  uint32_t gpu_id() const { return gpu_id_; }
  void set_gpu_id(uint32_t value) { gpu_id_ = value; _has_field_.set(1); }

  bool has_uid() const { return _has_field_[2]; }
  uint32_t uid() const { return uid_; }
  void set_uid(uint32_t value) { uid_ = value; _has_field_.set(2); }

  bool has_start_time_ns() const { return _has_field_[3]; }
  uint64_t start_time_ns() const { return start_time_ns_; }
  void set_start_time_ns(uint64_t value) { start_time_ns_ = value; _has_field_.set(3); }

  bool has_end_time_ns() const { return _has_field_[4]; }
  uint64_t end_time_ns() const { return end_time_ns_; }
  void set_end_time_ns(uint64_t value) { end_time_ns_ = value; _has_field_.set(4); }

  bool has_total_active_duration_ns() const { return _has_field_[5]; }
  uint64_t total_active_duration_ns() const { return total_active_duration_ns_; }
  void set_total_active_duration_ns(uint64_t value) { total_active_duration_ns_ = value; _has_field_.set(5); }

 private:
  uint32_t gpu_id_{};
  uint32_t uid_{};
  uint64_t start_time_ns_{};
  uint64_t end_time_ns_{};
  uint64_t total_active_duration_ns_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<6> _has_field_{};
};


class PERFETTO_EXPORT_COMPONENT WakeupSourceDeactivateFtraceEvent : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kNameFieldNumber = 1,
    kStateFieldNumber = 2,
  };

  WakeupSourceDeactivateFtraceEvent();
  ~WakeupSourceDeactivateFtraceEvent() override;
  WakeupSourceDeactivateFtraceEvent(WakeupSourceDeactivateFtraceEvent&&) noexcept;
  WakeupSourceDeactivateFtraceEvent& operator=(WakeupSourceDeactivateFtraceEvent&&);
  WakeupSourceDeactivateFtraceEvent(const WakeupSourceDeactivateFtraceEvent&);
  WakeupSourceDeactivateFtraceEvent& operator=(const WakeupSourceDeactivateFtraceEvent&);
  bool operator==(const WakeupSourceDeactivateFtraceEvent&) const;
  bool operator!=(const WakeupSourceDeactivateFtraceEvent& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_name() const { return _has_field_[1]; }
  const std::string& name() const { return name_; }
  void set_name(const std::string& value) { name_ = value; _has_field_.set(1); }

  bool has_state() const { return _has_field_[2]; }
  uint64_t state() const { return state_; }
  void set_state(uint64_t value) { state_ = value; _has_field_.set(2); }

 private:
  std::string name_{};
  uint64_t state_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<3> _has_field_{};
};


class PERFETTO_EXPORT_COMPONENT WakeupSourceActivateFtraceEvent : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kNameFieldNumber = 1,
    kStateFieldNumber = 2,
  };

  WakeupSourceActivateFtraceEvent();
  ~WakeupSourceActivateFtraceEvent() override;
  WakeupSourceActivateFtraceEvent(WakeupSourceActivateFtraceEvent&&) noexcept;
  WakeupSourceActivateFtraceEvent& operator=(WakeupSourceActivateFtraceEvent&&);
  WakeupSourceActivateFtraceEvent(const WakeupSourceActivateFtraceEvent&);
  WakeupSourceActivateFtraceEvent& operator=(const WakeupSourceActivateFtraceEvent&);
  bool operator==(const WakeupSourceActivateFtraceEvent&) const;
  bool operator!=(const WakeupSourceActivateFtraceEvent& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_name() const { return _has_field_[1]; }
  const std::string& name() const { return name_; }
  void set_name(const std::string& value) { name_ = value; _has_field_.set(1); }

  bool has_state() const { return _has_field_[2]; }
  uint64_t state() const { return state_; }
  void set_state(uint64_t value) { state_ = value; _has_field_.set(2); }

 private:
  std::string name_{};
  uint64_t state_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<3> _has_field_{};
};


class PERFETTO_EXPORT_COMPONENT GpuFrequencyFtraceEvent : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kGpuIdFieldNumber = 1,
    kStateFieldNumber = 2,
  };

  GpuFrequencyFtraceEvent();
  ~GpuFrequencyFtraceEvent() override;
  GpuFrequencyFtraceEvent(GpuFrequencyFtraceEvent&&) noexcept;
  GpuFrequencyFtraceEvent& operator=(GpuFrequencyFtraceEvent&&);
  GpuFrequencyFtraceEvent(const GpuFrequencyFtraceEvent&);
  GpuFrequencyFtraceEvent& operator=(const GpuFrequencyFtraceEvent&);
  bool operator==(const GpuFrequencyFtraceEvent&) const;
  bool operator!=(const GpuFrequencyFtraceEvent& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_gpu_id() const { return _has_field_[1]; }
  uint32_t gpu_id() const { return gpu_id_; }
  void set_gpu_id(uint32_t value) { gpu_id_ = value; _has_field_.set(1); }

  bool has_state() const { return _has_field_[2]; }
  uint32_t state() const { return state_; }
  void set_state(uint32_t value) { state_ = value; _has_field_.set(2); }

 private:
  uint32_t gpu_id_{};
  uint32_t state_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<3> _has_field_{};
};


class PERFETTO_EXPORT_COMPONENT SuspendResumeFtraceEvent : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kActionFieldNumber = 1,
    kValFieldNumber = 2,
    kStartFieldNumber = 3,
  };

  SuspendResumeFtraceEvent();
  ~SuspendResumeFtraceEvent() override;
  SuspendResumeFtraceEvent(SuspendResumeFtraceEvent&&) noexcept;
  SuspendResumeFtraceEvent& operator=(SuspendResumeFtraceEvent&&);
  SuspendResumeFtraceEvent(const SuspendResumeFtraceEvent&);
  SuspendResumeFtraceEvent& operator=(const SuspendResumeFtraceEvent&);
  bool operator==(const SuspendResumeFtraceEvent&) const;
  bool operator!=(const SuspendResumeFtraceEvent& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_action() const { return _has_field_[1]; }
  const std::string& action() const { return action_; }
  void set_action(const std::string& value) { action_ = value; _has_field_.set(1); }

  bool has_val() const { return _has_field_[2]; }
  int32_t val() const { return val_; }
  void set_val(int32_t value) { val_ = value; _has_field_.set(2); }

  bool has_start() const { return _has_field_[3]; }
  uint32_t start() const { return start_; }
  void set_start(uint32_t value) { start_ = value; _has_field_.set(3); }

 private:
  std::string action_{};
  int32_t val_{};
  uint32_t start_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<4> _has_field_{};
};


class PERFETTO_EXPORT_COMPONENT ClockSetRateFtraceEvent : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kNameFieldNumber = 1,
    kStateFieldNumber = 2,
    kCpuIdFieldNumber = 3,
  };

  ClockSetRateFtraceEvent();
  ~ClockSetRateFtraceEvent() override;
  ClockSetRateFtraceEvent(ClockSetRateFtraceEvent&&) noexcept;
  ClockSetRateFtraceEvent& operator=(ClockSetRateFtraceEvent&&);
  ClockSetRateFtraceEvent(const ClockSetRateFtraceEvent&);
  ClockSetRateFtraceEvent& operator=(const ClockSetRateFtraceEvent&);
  bool operator==(const ClockSetRateFtraceEvent&) const;
  bool operator!=(const ClockSetRateFtraceEvent& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_name() const { return _has_field_[1]; }
  const std::string& name() const { return name_; }
  void set_name(const std::string& value) { name_ = value; _has_field_.set(1); }

  bool has_state() const { return _has_field_[2]; }
  uint64_t state() const { return state_; }
  void set_state(uint64_t value) { state_ = value; _has_field_.set(2); }

  bool has_cpu_id() const { return _has_field_[3]; }
  uint64_t cpu_id() const { return cpu_id_; }
  void set_cpu_id(uint64_t value) { cpu_id_ = value; _has_field_.set(3); }

 private:
  std::string name_{};
  uint64_t state_{};
  uint64_t cpu_id_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<4> _has_field_{};
};


class PERFETTO_EXPORT_COMPONENT ClockDisableFtraceEvent : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kNameFieldNumber = 1,
    kStateFieldNumber = 2,
    kCpuIdFieldNumber = 3,
  };

  ClockDisableFtraceEvent();
  ~ClockDisableFtraceEvent() override;
  ClockDisableFtraceEvent(ClockDisableFtraceEvent&&) noexcept;
  ClockDisableFtraceEvent& operator=(ClockDisableFtraceEvent&&);
  ClockDisableFtraceEvent(const ClockDisableFtraceEvent&);
  ClockDisableFtraceEvent& operator=(const ClockDisableFtraceEvent&);
  bool operator==(const ClockDisableFtraceEvent&) const;
  bool operator!=(const ClockDisableFtraceEvent& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_name() const { return _has_field_[1]; }
  const std::string& name() const { return name_; }
  void set_name(const std::string& value) { name_ = value; _has_field_.set(1); }

  bool has_state() const { return _has_field_[2]; }
  uint64_t state() const { return state_; }
  void set_state(uint64_t value) { state_ = value; _has_field_.set(2); }

  bool has_cpu_id() const { return _has_field_[3]; }
  uint64_t cpu_id() const { return cpu_id_; }
  void set_cpu_id(uint64_t value) { cpu_id_ = value; _has_field_.set(3); }

 private:
  std::string name_{};
  uint64_t state_{};
  uint64_t cpu_id_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<4> _has_field_{};
};


class PERFETTO_EXPORT_COMPONENT ClockEnableFtraceEvent : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kNameFieldNumber = 1,
    kStateFieldNumber = 2,
    kCpuIdFieldNumber = 3,
  };

  ClockEnableFtraceEvent();
  ~ClockEnableFtraceEvent() override;
  ClockEnableFtraceEvent(ClockEnableFtraceEvent&&) noexcept;
  ClockEnableFtraceEvent& operator=(ClockEnableFtraceEvent&&);
  ClockEnableFtraceEvent(const ClockEnableFtraceEvent&);
  ClockEnableFtraceEvent& operator=(const ClockEnableFtraceEvent&);
  bool operator==(const ClockEnableFtraceEvent&) const;
  bool operator!=(const ClockEnableFtraceEvent& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_name() const { return _has_field_[1]; }
  const std::string& name() const { return name_; }
  void set_name(const std::string& value) { name_ = value; _has_field_.set(1); }

  bool has_state() const { return _has_field_[2]; }
  uint64_t state() const { return state_; }
  void set_state(uint64_t value) { state_ = value; _has_field_.set(2); }

  bool has_cpu_id() const { return _has_field_[3]; }
  uint64_t cpu_id() const { return cpu_id_; }
  void set_cpu_id(uint64_t value) { cpu_id_ = value; _has_field_.set(3); }

 private:
  std::string name_{};
  uint64_t state_{};
  uint64_t cpu_id_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<4> _has_field_{};
};


class PERFETTO_EXPORT_COMPONENT CpuIdleFtraceEvent : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kStateFieldNumber = 1,
    kCpuIdFieldNumber = 2,
  };

  CpuIdleFtraceEvent();
  ~CpuIdleFtraceEvent() override;
  CpuIdleFtraceEvent(CpuIdleFtraceEvent&&) noexcept;
  CpuIdleFtraceEvent& operator=(CpuIdleFtraceEvent&&);
  CpuIdleFtraceEvent(const CpuIdleFtraceEvent&);
  CpuIdleFtraceEvent& operator=(const CpuIdleFtraceEvent&);
  bool operator==(const CpuIdleFtraceEvent&) const;
  bool operator!=(const CpuIdleFtraceEvent& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_state() const { return _has_field_[1]; }
  uint32_t state() const { return state_; }
  void set_state(uint32_t value) { state_ = value; _has_field_.set(1); }

  bool has_cpu_id() const { return _has_field_[2]; }
  uint32_t cpu_id() const { return cpu_id_; }
  void set_cpu_id(uint32_t value) { cpu_id_ = value; _has_field_.set(2); }

 private:
  uint32_t state_{};
  uint32_t cpu_id_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<3> _has_field_{};
};


class PERFETTO_EXPORT_COMPONENT CpuFrequencyLimitsFtraceEvent : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kMinFreqFieldNumber = 1,
    kMaxFreqFieldNumber = 2,
    kCpuIdFieldNumber = 3,
  };

  CpuFrequencyLimitsFtraceEvent();
  ~CpuFrequencyLimitsFtraceEvent() override;
  CpuFrequencyLimitsFtraceEvent(CpuFrequencyLimitsFtraceEvent&&) noexcept;
  CpuFrequencyLimitsFtraceEvent& operator=(CpuFrequencyLimitsFtraceEvent&&);
  CpuFrequencyLimitsFtraceEvent(const CpuFrequencyLimitsFtraceEvent&);
  CpuFrequencyLimitsFtraceEvent& operator=(const CpuFrequencyLimitsFtraceEvent&);
  bool operator==(const CpuFrequencyLimitsFtraceEvent&) const;
  bool operator!=(const CpuFrequencyLimitsFtraceEvent& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_min_freq() const { return _has_field_[1]; }
  uint32_t min_freq() const { return min_freq_; }
  void set_min_freq(uint32_t value) { min_freq_ = value; _has_field_.set(1); }

  bool has_max_freq() const { return _has_field_[2]; }
  uint32_t max_freq() const { return max_freq_; }
  void set_max_freq(uint32_t value) { max_freq_ = value; _has_field_.set(2); }

  bool has_cpu_id() const { return _has_field_[3]; }
  uint32_t cpu_id() const { return cpu_id_; }
  void set_cpu_id(uint32_t value) { cpu_id_ = value; _has_field_.set(3); }

 private:
  uint32_t min_freq_{};
  uint32_t max_freq_{};
  uint32_t cpu_id_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<4> _has_field_{};
};


class PERFETTO_EXPORT_COMPONENT CpuFrequencyFtraceEvent : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kStateFieldNumber = 1,
    kCpuIdFieldNumber = 2,
  };

  CpuFrequencyFtraceEvent();
  ~CpuFrequencyFtraceEvent() override;
  CpuFrequencyFtraceEvent(CpuFrequencyFtraceEvent&&) noexcept;
  CpuFrequencyFtraceEvent& operator=(CpuFrequencyFtraceEvent&&);
  CpuFrequencyFtraceEvent(const CpuFrequencyFtraceEvent&);
  CpuFrequencyFtraceEvent& operator=(const CpuFrequencyFtraceEvent&);
  bool operator==(const CpuFrequencyFtraceEvent&) const;
  bool operator!=(const CpuFrequencyFtraceEvent& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_state() const { return _has_field_[1]; }
  uint32_t state() const { return state_; }
  void set_state(uint32_t value) { state_ = value; _has_field_.set(1); }

  bool has_cpu_id() const { return _has_field_[2]; }
  uint32_t cpu_id() const { return cpu_id_; }
  void set_cpu_id(uint32_t value) { cpu_id_ = value; _has_field_.set(2); }

 private:
  uint32_t state_{};
  uint32_t cpu_id_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<3> _has_field_{};
};

}  // namespace perfetto
}  // namespace protos
}  // namespace gen

#endif  // PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_POWER_PROTO_CPP_H_
