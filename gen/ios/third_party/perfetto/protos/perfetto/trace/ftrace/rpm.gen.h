// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_RPM_PROTO_CPP_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_RPM_PROTO_CPP_H_

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
class RpmStatusFtraceEvent;
}  // namespace perfetto
}  // namespace protos
}  // namespace gen

namespace protozero {
class Message;
}  // namespace protozero

namespace perfetto {
namespace protos {
namespace gen {

class PERFETTO_EXPORT_COMPONENT RpmStatusFtraceEvent : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kNameFieldNumber = 1,
    kStatusFieldNumber = 2,
  };

  RpmStatusFtraceEvent();
  ~RpmStatusFtraceEvent() override;
  RpmStatusFtraceEvent(RpmStatusFtraceEvent&&) noexcept;
  RpmStatusFtraceEvent& operator=(RpmStatusFtraceEvent&&);
  RpmStatusFtraceEvent(const RpmStatusFtraceEvent&);
  RpmStatusFtraceEvent& operator=(const RpmStatusFtraceEvent&);
  bool operator==(const RpmStatusFtraceEvent&) const;
  bool operator!=(const RpmStatusFtraceEvent& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_name() const { return _has_field_[1]; }
  const std::string& name() const { return name_; }
  void set_name(const std::string& value) { name_ = value; _has_field_.set(1); }

  bool has_status() const { return _has_field_[2]; }
  int32_t status() const { return status_; }
  void set_status(int32_t value) { status_ = value; _has_field_.set(2); }

 private:
  std::string name_{};
  int32_t status_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<3> _has_field_{};
};

}  // namespace perfetto
}  // namespace protos
}  // namespace gen

#endif  // PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_RPM_PROTO_CPP_H_
