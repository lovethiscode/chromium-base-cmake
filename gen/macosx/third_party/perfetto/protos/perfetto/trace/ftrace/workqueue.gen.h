// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_WORKQUEUE_PROTO_CPP_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_WORKQUEUE_PROTO_CPP_H_

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
class WorkqueueQueueWorkFtraceEvent;
class WorkqueueExecuteStartFtraceEvent;
class WorkqueueExecuteEndFtraceEvent;
class WorkqueueActivateWorkFtraceEvent;
}  // namespace perfetto
}  // namespace protos
}  // namespace gen

namespace protozero {
class Message;
}  // namespace protozero

namespace perfetto {
namespace protos {
namespace gen {

class PERFETTO_EXPORT_COMPONENT WorkqueueQueueWorkFtraceEvent : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kWorkFieldNumber = 1,
    kFunctionFieldNumber = 2,
    kWorkqueueFieldNumber = 3,
    kReqCpuFieldNumber = 4,
    kCpuFieldNumber = 5,
  };

  WorkqueueQueueWorkFtraceEvent();
  ~WorkqueueQueueWorkFtraceEvent() override;
  WorkqueueQueueWorkFtraceEvent(WorkqueueQueueWorkFtraceEvent&&) noexcept;
  WorkqueueQueueWorkFtraceEvent& operator=(WorkqueueQueueWorkFtraceEvent&&);
  WorkqueueQueueWorkFtraceEvent(const WorkqueueQueueWorkFtraceEvent&);
  WorkqueueQueueWorkFtraceEvent& operator=(const WorkqueueQueueWorkFtraceEvent&);
  bool operator==(const WorkqueueQueueWorkFtraceEvent&) const;
  bool operator!=(const WorkqueueQueueWorkFtraceEvent& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_work() const { return _has_field_[1]; }
  uint64_t work() const { return work_; }
  void set_work(uint64_t value) { work_ = value; _has_field_.set(1); }

  bool has_function() const { return _has_field_[2]; }
  uint64_t function() const { return function_; }
  void set_function(uint64_t value) { function_ = value; _has_field_.set(2); }

  bool has_workqueue() const { return _has_field_[3]; }
  uint64_t workqueue() const { return workqueue_; }
  void set_workqueue(uint64_t value) { workqueue_ = value; _has_field_.set(3); }

  bool has_req_cpu() const { return _has_field_[4]; }
  uint32_t req_cpu() const { return req_cpu_; }
  void set_req_cpu(uint32_t value) { req_cpu_ = value; _has_field_.set(4); }

  bool has_cpu() const { return _has_field_[5]; }
  uint32_t cpu() const { return cpu_; }
  void set_cpu(uint32_t value) { cpu_ = value; _has_field_.set(5); }

 private:
  uint64_t work_{};
  uint64_t function_{};
  uint64_t workqueue_{};
  uint32_t req_cpu_{};
  uint32_t cpu_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<6> _has_field_{};
};


class PERFETTO_EXPORT_COMPONENT WorkqueueExecuteStartFtraceEvent : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kWorkFieldNumber = 1,
    kFunctionFieldNumber = 2,
  };

  WorkqueueExecuteStartFtraceEvent();
  ~WorkqueueExecuteStartFtraceEvent() override;
  WorkqueueExecuteStartFtraceEvent(WorkqueueExecuteStartFtraceEvent&&) noexcept;
  WorkqueueExecuteStartFtraceEvent& operator=(WorkqueueExecuteStartFtraceEvent&&);
  WorkqueueExecuteStartFtraceEvent(const WorkqueueExecuteStartFtraceEvent&);
  WorkqueueExecuteStartFtraceEvent& operator=(const WorkqueueExecuteStartFtraceEvent&);
  bool operator==(const WorkqueueExecuteStartFtraceEvent&) const;
  bool operator!=(const WorkqueueExecuteStartFtraceEvent& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_work() const { return _has_field_[1]; }
  uint64_t work() const { return work_; }
  void set_work(uint64_t value) { work_ = value; _has_field_.set(1); }

  bool has_function() const { return _has_field_[2]; }
  uint64_t function() const { return function_; }
  void set_function(uint64_t value) { function_ = value; _has_field_.set(2); }

 private:
  uint64_t work_{};
  uint64_t function_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<3> _has_field_{};
};


class PERFETTO_EXPORT_COMPONENT WorkqueueExecuteEndFtraceEvent : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kWorkFieldNumber = 1,
    kFunctionFieldNumber = 2,
  };

  WorkqueueExecuteEndFtraceEvent();
  ~WorkqueueExecuteEndFtraceEvent() override;
  WorkqueueExecuteEndFtraceEvent(WorkqueueExecuteEndFtraceEvent&&) noexcept;
  WorkqueueExecuteEndFtraceEvent& operator=(WorkqueueExecuteEndFtraceEvent&&);
  WorkqueueExecuteEndFtraceEvent(const WorkqueueExecuteEndFtraceEvent&);
  WorkqueueExecuteEndFtraceEvent& operator=(const WorkqueueExecuteEndFtraceEvent&);
  bool operator==(const WorkqueueExecuteEndFtraceEvent&) const;
  bool operator!=(const WorkqueueExecuteEndFtraceEvent& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_work() const { return _has_field_[1]; }
  uint64_t work() const { return work_; }
  void set_work(uint64_t value) { work_ = value; _has_field_.set(1); }

  bool has_function() const { return _has_field_[2]; }
  uint64_t function() const { return function_; }
  void set_function(uint64_t value) { function_ = value; _has_field_.set(2); }

 private:
  uint64_t work_{};
  uint64_t function_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<3> _has_field_{};
};


class PERFETTO_EXPORT_COMPONENT WorkqueueActivateWorkFtraceEvent : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kWorkFieldNumber = 1,
  };

  WorkqueueActivateWorkFtraceEvent();
  ~WorkqueueActivateWorkFtraceEvent() override;
  WorkqueueActivateWorkFtraceEvent(WorkqueueActivateWorkFtraceEvent&&) noexcept;
  WorkqueueActivateWorkFtraceEvent& operator=(WorkqueueActivateWorkFtraceEvent&&);
  WorkqueueActivateWorkFtraceEvent(const WorkqueueActivateWorkFtraceEvent&);
  WorkqueueActivateWorkFtraceEvent& operator=(const WorkqueueActivateWorkFtraceEvent&);
  bool operator==(const WorkqueueActivateWorkFtraceEvent&) const;
  bool operator!=(const WorkqueueActivateWorkFtraceEvent& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_work() const { return _has_field_[1]; }
  uint64_t work() const { return work_; }
  void set_work(uint64_t value) { work_ = value; _has_field_.set(1); }

 private:
  uint64_t work_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<2> _has_field_{};
};

}  // namespace perfetto
}  // namespace protos
}  // namespace gen

#endif  // PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_WORKQUEUE_PROTO_CPP_H_
