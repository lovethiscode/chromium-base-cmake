// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_ETW_ETW_EVENT_PROTO_CPP_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_ETW_ETW_EVENT_PROTO_CPP_H_

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
class EtwTraceEvent;
class ReadyThreadEtwEvent;
class CSwitchEtwEvent;
enum ReadyThreadEtwEvent_AdjustReason : int;
enum ReadyThreadEtwEvent_TraceFlag : int;
enum CSwitchEtwEvent_OldThreadWaitReason : int;
enum CSwitchEtwEvent_OldThreadWaitMode : int;
enum CSwitchEtwEvent_OldThreadState : int;
}  // namespace perfetto
}  // namespace protos
}  // namespace gen

namespace protozero {
class Message;
}  // namespace protozero

namespace perfetto {
namespace protos {
namespace gen {

class PERFETTO_EXPORT_COMPONENT EtwTraceEvent : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kTimestampFieldNumber = 1,
    kCpuFieldNumber = 4,
    kCSwitchFieldNumber = 2,
    kReadyThreadFieldNumber = 3,
  };

  EtwTraceEvent();
  ~EtwTraceEvent() override;
  EtwTraceEvent(EtwTraceEvent&&) noexcept;
  EtwTraceEvent& operator=(EtwTraceEvent&&);
  EtwTraceEvent(const EtwTraceEvent&);
  EtwTraceEvent& operator=(const EtwTraceEvent&);
  bool operator==(const EtwTraceEvent&) const;
  bool operator!=(const EtwTraceEvent& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_timestamp() const { return _has_field_[1]; }
  uint64_t timestamp() const { return timestamp_; }
  void set_timestamp(uint64_t value) { timestamp_ = value; _has_field_.set(1); }

  bool has_cpu() const { return _has_field_[4]; }
  uint32_t cpu() const { return cpu_; }
  void set_cpu(uint32_t value) { cpu_ = value; _has_field_.set(4); }

  bool has_c_switch() const { return _has_field_[2]; }
  const CSwitchEtwEvent& c_switch() const { return *c_switch_; }
  CSwitchEtwEvent* mutable_c_switch() { _has_field_.set(2); return c_switch_.get(); }

  bool has_ready_thread() const { return _has_field_[3]; }
  const ReadyThreadEtwEvent& ready_thread() const { return *ready_thread_; }
  ReadyThreadEtwEvent* mutable_ready_thread() { _has_field_.set(3); return ready_thread_.get(); }

 private:
  uint64_t timestamp_{};
  uint32_t cpu_{};
  ::protozero::CopyablePtr<CSwitchEtwEvent> c_switch_;
  ::protozero::CopyablePtr<ReadyThreadEtwEvent> ready_thread_;

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<5> _has_field_{};
};

}  // namespace perfetto
}  // namespace protos
}  // namespace gen

#endif  // PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_ETW_ETW_EVENT_PROTO_CPP_H_
