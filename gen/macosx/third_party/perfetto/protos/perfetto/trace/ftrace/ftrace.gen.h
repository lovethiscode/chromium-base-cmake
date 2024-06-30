// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_FTRACE_PROTO_CPP_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_FTRACE_PROTO_CPP_H_

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
class FuncgraphExitFtraceEvent;
class FuncgraphEntryFtraceEvent;
class PrintFtraceEvent;
}  // namespace perfetto
}  // namespace protos
}  // namespace gen

namespace protozero {
class Message;
}  // namespace protozero

namespace perfetto {
namespace protos {
namespace gen {

class PERFETTO_EXPORT_COMPONENT FuncgraphExitFtraceEvent : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kCalltimeFieldNumber = 1,
    kDepthFieldNumber = 2,
    kFuncFieldNumber = 3,
    kOverrunFieldNumber = 4,
    kRettimeFieldNumber = 5,
  };

  FuncgraphExitFtraceEvent();
  ~FuncgraphExitFtraceEvent() override;
  FuncgraphExitFtraceEvent(FuncgraphExitFtraceEvent&&) noexcept;
  FuncgraphExitFtraceEvent& operator=(FuncgraphExitFtraceEvent&&);
  FuncgraphExitFtraceEvent(const FuncgraphExitFtraceEvent&);
  FuncgraphExitFtraceEvent& operator=(const FuncgraphExitFtraceEvent&);
  bool operator==(const FuncgraphExitFtraceEvent&) const;
  bool operator!=(const FuncgraphExitFtraceEvent& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_calltime() const { return _has_field_[1]; }
  uint64_t calltime() const { return calltime_; }
  void set_calltime(uint64_t value) { calltime_ = value; _has_field_.set(1); }

  bool has_depth() const { return _has_field_[2]; }
  int32_t depth() const { return depth_; }
  void set_depth(int32_t value) { depth_ = value; _has_field_.set(2); }

  bool has_func() const { return _has_field_[3]; }
  uint64_t func() const { return func_; }
  void set_func(uint64_t value) { func_ = value; _has_field_.set(3); }

  bool has_overrun() const { return _has_field_[4]; }
  uint64_t overrun() const { return overrun_; }
  void set_overrun(uint64_t value) { overrun_ = value; _has_field_.set(4); }

  bool has_rettime() const { return _has_field_[5]; }
  uint64_t rettime() const { return rettime_; }
  void set_rettime(uint64_t value) { rettime_ = value; _has_field_.set(5); }

 private:
  uint64_t calltime_{};
  int32_t depth_{};
  uint64_t func_{};
  uint64_t overrun_{};
  uint64_t rettime_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<6> _has_field_{};
};


class PERFETTO_EXPORT_COMPONENT FuncgraphEntryFtraceEvent : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kDepthFieldNumber = 1,
    kFuncFieldNumber = 2,
  };

  FuncgraphEntryFtraceEvent();
  ~FuncgraphEntryFtraceEvent() override;
  FuncgraphEntryFtraceEvent(FuncgraphEntryFtraceEvent&&) noexcept;
  FuncgraphEntryFtraceEvent& operator=(FuncgraphEntryFtraceEvent&&);
  FuncgraphEntryFtraceEvent(const FuncgraphEntryFtraceEvent&);
  FuncgraphEntryFtraceEvent& operator=(const FuncgraphEntryFtraceEvent&);
  bool operator==(const FuncgraphEntryFtraceEvent&) const;
  bool operator!=(const FuncgraphEntryFtraceEvent& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_depth() const { return _has_field_[1]; }
  int32_t depth() const { return depth_; }
  void set_depth(int32_t value) { depth_ = value; _has_field_.set(1); }

  bool has_func() const { return _has_field_[2]; }
  uint64_t func() const { return func_; }
  void set_func(uint64_t value) { func_ = value; _has_field_.set(2); }

 private:
  int32_t depth_{};
  uint64_t func_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<3> _has_field_{};
};


class PERFETTO_EXPORT_COMPONENT PrintFtraceEvent : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kIpFieldNumber = 1,
    kBufFieldNumber = 2,
  };

  PrintFtraceEvent();
  ~PrintFtraceEvent() override;
  PrintFtraceEvent(PrintFtraceEvent&&) noexcept;
  PrintFtraceEvent& operator=(PrintFtraceEvent&&);
  PrintFtraceEvent(const PrintFtraceEvent&);
  PrintFtraceEvent& operator=(const PrintFtraceEvent&);
  bool operator==(const PrintFtraceEvent&) const;
  bool operator!=(const PrintFtraceEvent& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_ip() const { return _has_field_[1]; }
  uint64_t ip() const { return ip_; }
  void set_ip(uint64_t value) { ip_ = value; _has_field_.set(1); }

  bool has_buf() const { return _has_field_[2]; }
  const std::string& buf() const { return buf_; }
  void set_buf(const std::string& value) { buf_ = value; _has_field_.set(2); }

 private:
  uint64_t ip_{};
  std::string buf_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<3> _has_field_{};
};

}  // namespace perfetto
}  // namespace protos
}  // namespace gen

#endif  // PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_FTRACE_PROTO_CPP_H_