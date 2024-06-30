// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_GOOGLE_IRM_TRACE_PROTO_CPP_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_GOOGLE_IRM_TRACE_PROTO_CPP_H_

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
class GoogleIrmEventFtraceEvent;
}  // namespace perfetto
}  // namespace protos
}  // namespace gen

namespace protozero {
class Message;
}  // namespace protozero

namespace perfetto {
namespace protos {
namespace gen {

class PERFETTO_EXPORT_COMPONENT GoogleIrmEventFtraceEvent : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kEventFieldNumber = 1,
    kTimestampFieldNumber = 2,
  };

  GoogleIrmEventFtraceEvent();
  ~GoogleIrmEventFtraceEvent() override;
  GoogleIrmEventFtraceEvent(GoogleIrmEventFtraceEvent&&) noexcept;
  GoogleIrmEventFtraceEvent& operator=(GoogleIrmEventFtraceEvent&&);
  GoogleIrmEventFtraceEvent(const GoogleIrmEventFtraceEvent&);
  GoogleIrmEventFtraceEvent& operator=(const GoogleIrmEventFtraceEvent&);
  bool operator==(const GoogleIrmEventFtraceEvent&) const;
  bool operator!=(const GoogleIrmEventFtraceEvent& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_event() const { return _has_field_[1]; }
  const std::string& event() const { return event_; }
  void set_event(const std::string& value) { event_ = value; _has_field_.set(1); }

  bool has_timestamp() const { return _has_field_[2]; }
  uint64_t timestamp() const { return timestamp_; }
  void set_timestamp(uint64_t value) { timestamp_ = value; _has_field_.set(2); }

 private:
  std::string event_{};
  uint64_t timestamp_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<3> _has_field_{};
};

}  // namespace perfetto
}  // namespace protos
}  // namespace gen

#endif  // PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_GOOGLE_IRM_TRACE_PROTO_CPP_H_