// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_DRM_PROTO_CPP_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_DRM_PROTO_CPP_H_

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
class DrmVblankEventDeliveredFtraceEvent;
class DrmVblankEventFtraceEvent;
}  // namespace perfetto
}  // namespace protos
}  // namespace gen

namespace protozero {
class Message;
}  // namespace protozero

namespace perfetto {
namespace protos {
namespace gen {

class PERFETTO_EXPORT_COMPONENT DrmVblankEventDeliveredFtraceEvent : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kCrtcFieldNumber = 1,
    kFileFieldNumber = 2,
    kSeqFieldNumber = 3,
  };

  DrmVblankEventDeliveredFtraceEvent();
  ~DrmVblankEventDeliveredFtraceEvent() override;
  DrmVblankEventDeliveredFtraceEvent(DrmVblankEventDeliveredFtraceEvent&&) noexcept;
  DrmVblankEventDeliveredFtraceEvent& operator=(DrmVblankEventDeliveredFtraceEvent&&);
  DrmVblankEventDeliveredFtraceEvent(const DrmVblankEventDeliveredFtraceEvent&);
  DrmVblankEventDeliveredFtraceEvent& operator=(const DrmVblankEventDeliveredFtraceEvent&);
  bool operator==(const DrmVblankEventDeliveredFtraceEvent&) const;
  bool operator!=(const DrmVblankEventDeliveredFtraceEvent& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_crtc() const { return _has_field_[1]; }
  int32_t crtc() const { return crtc_; }
  void set_crtc(int32_t value) { crtc_ = value; _has_field_.set(1); }

  bool has_file() const { return _has_field_[2]; }
  uint64_t file() const { return file_; }
  void set_file(uint64_t value) { file_ = value; _has_field_.set(2); }

  bool has_seq() const { return _has_field_[3]; }
  uint32_t seq() const { return seq_; }
  void set_seq(uint32_t value) { seq_ = value; _has_field_.set(3); }

 private:
  int32_t crtc_{};
  uint64_t file_{};
  uint32_t seq_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<4> _has_field_{};
};


class PERFETTO_EXPORT_COMPONENT DrmVblankEventFtraceEvent : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kCrtcFieldNumber = 1,
    kHighPrecFieldNumber = 2,
    kSeqFieldNumber = 3,
    kTimeFieldNumber = 4,
  };

  DrmVblankEventFtraceEvent();
  ~DrmVblankEventFtraceEvent() override;
  DrmVblankEventFtraceEvent(DrmVblankEventFtraceEvent&&) noexcept;
  DrmVblankEventFtraceEvent& operator=(DrmVblankEventFtraceEvent&&);
  DrmVblankEventFtraceEvent(const DrmVblankEventFtraceEvent&);
  DrmVblankEventFtraceEvent& operator=(const DrmVblankEventFtraceEvent&);
  bool operator==(const DrmVblankEventFtraceEvent&) const;
  bool operator!=(const DrmVblankEventFtraceEvent& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_crtc() const { return _has_field_[1]; }
  int32_t crtc() const { return crtc_; }
  void set_crtc(int32_t value) { crtc_ = value; _has_field_.set(1); }

  bool has_high_prec() const { return _has_field_[2]; }
  uint32_t high_prec() const { return high_prec_; }
  void set_high_prec(uint32_t value) { high_prec_ = value; _has_field_.set(2); }

  bool has_seq() const { return _has_field_[3]; }
  uint32_t seq() const { return seq_; }
  void set_seq(uint32_t value) { seq_ = value; _has_field_.set(3); }

  bool has_time() const { return _has_field_[4]; }
  int64_t time() const { return time_; }
  void set_time(int64_t value) { time_ = value; _has_field_.set(4); }

 private:
  int32_t crtc_{};
  uint32_t high_prec_{};
  uint32_t seq_{};
  int64_t time_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<5> _has_field_{};
};

}  // namespace perfetto
}  // namespace protos
}  // namespace gen

#endif  // PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_DRM_PROTO_CPP_H_
