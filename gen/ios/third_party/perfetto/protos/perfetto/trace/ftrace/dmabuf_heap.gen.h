// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_DMABUF_HEAP_PROTO_CPP_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_DMABUF_HEAP_PROTO_CPP_H_

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
class DmaHeapStatFtraceEvent;
}  // namespace perfetto
}  // namespace protos
}  // namespace gen

namespace protozero {
class Message;
}  // namespace protozero

namespace perfetto {
namespace protos {
namespace gen {

class PERFETTO_EXPORT_COMPONENT DmaHeapStatFtraceEvent : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kInodeFieldNumber = 1,
    kLenFieldNumber = 2,
    kTotalAllocatedFieldNumber = 3,
  };

  DmaHeapStatFtraceEvent();
  ~DmaHeapStatFtraceEvent() override;
  DmaHeapStatFtraceEvent(DmaHeapStatFtraceEvent&&) noexcept;
  DmaHeapStatFtraceEvent& operator=(DmaHeapStatFtraceEvent&&);
  DmaHeapStatFtraceEvent(const DmaHeapStatFtraceEvent&);
  DmaHeapStatFtraceEvent& operator=(const DmaHeapStatFtraceEvent&);
  bool operator==(const DmaHeapStatFtraceEvent&) const;
  bool operator!=(const DmaHeapStatFtraceEvent& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_inode() const { return _has_field_[1]; }
  uint64_t inode() const { return inode_; }
  void set_inode(uint64_t value) { inode_ = value; _has_field_.set(1); }

  bool has_len() const { return _has_field_[2]; }
  int64_t len() const { return len_; }
  void set_len(int64_t value) { len_ = value; _has_field_.set(2); }

  bool has_total_allocated() const { return _has_field_[3]; }
  uint64_t total_allocated() const { return total_allocated_; }
  void set_total_allocated(uint64_t value) { total_allocated_ = value; _has_field_.set(3); }

 private:
  uint64_t inode_{};
  int64_t len_{};
  uint64_t total_allocated_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<4> _has_field_{};
};

}  // namespace perfetto
}  // namespace protos
}  // namespace gen

#endif  // PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_DMABUF_HEAP_PROTO_CPP_H_