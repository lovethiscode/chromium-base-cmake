// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_LWIS_PROTO_CPP_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_LWIS_PROTO_CPP_H_

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
class LwisTracingMarkWriteFtraceEvent;
}  // namespace perfetto
}  // namespace protos
}  // namespace gen

namespace protozero {
class Message;
}  // namespace protozero

namespace perfetto {
namespace protos {
namespace gen {

class PERFETTO_EXPORT_COMPONENT LwisTracingMarkWriteFtraceEvent : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kLwisNameFieldNumber = 1,
    kTypeFieldNumber = 2,
    kPidFieldNumber = 3,
    kFuncNameFieldNumber = 4,
    kValueFieldNumber = 5,
  };

  LwisTracingMarkWriteFtraceEvent();
  ~LwisTracingMarkWriteFtraceEvent() override;
  LwisTracingMarkWriteFtraceEvent(LwisTracingMarkWriteFtraceEvent&&) noexcept;
  LwisTracingMarkWriteFtraceEvent& operator=(LwisTracingMarkWriteFtraceEvent&&);
  LwisTracingMarkWriteFtraceEvent(const LwisTracingMarkWriteFtraceEvent&);
  LwisTracingMarkWriteFtraceEvent& operator=(const LwisTracingMarkWriteFtraceEvent&);
  bool operator==(const LwisTracingMarkWriteFtraceEvent&) const;
  bool operator!=(const LwisTracingMarkWriteFtraceEvent& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_lwis_name() const { return _has_field_[1]; }
  const std::string& lwis_name() const { return lwis_name_; }
  void set_lwis_name(const std::string& value) { lwis_name_ = value; _has_field_.set(1); }

  bool has_type() const { return _has_field_[2]; }
  uint32_t type() const { return type_; }
  void set_type(uint32_t value) { type_ = value; _has_field_.set(2); }

  bool has_pid() const { return _has_field_[3]; }
  int32_t pid() const { return pid_; }
  void set_pid(int32_t value) { pid_ = value; _has_field_.set(3); }

  bool has_func_name() const { return _has_field_[4]; }
  const std::string& func_name() const { return func_name_; }
  void set_func_name(const std::string& value) { func_name_ = value; _has_field_.set(4); }

  bool has_value() const { return _has_field_[5]; }
  int64_t value() const { return value_; }
  void set_value(int64_t value) { value_ = value; _has_field_.set(5); }

 private:
  std::string lwis_name_{};
  uint32_t type_{};
  int32_t pid_{};
  std::string func_name_{};
  int64_t value_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<6> _has_field_{};
};

}  // namespace perfetto
}  // namespace protos
}  // namespace gen

#endif  // PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_LWIS_PROTO_CPP_H_