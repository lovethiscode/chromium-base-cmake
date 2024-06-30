// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_TRACK_EVENT_TRACK_DESCRIPTOR_PROTO_CPP_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_TRACK_EVENT_TRACK_DESCRIPTOR_PROTO_CPP_H_

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
class TrackDescriptor;
class CounterDescriptor;
class ChromeThreadDescriptor;
class ThreadDescriptor;
class ChromeProcessDescriptor;
class ProcessDescriptor;
enum CounterDescriptor_BuiltinCounterType : int;
enum CounterDescriptor_Unit : int;
enum ChromeThreadDescriptor_ThreadType : int;
enum ThreadDescriptor_ChromeThreadType : int;
enum ChromeProcessDescriptor_ProcessType : int;
enum ProcessDescriptor_ChromeProcessType : int;
}  // namespace perfetto
}  // namespace protos
}  // namespace gen

namespace protozero {
class Message;
}  // namespace protozero

namespace perfetto {
namespace protos {
namespace gen {

class PERFETTO_EXPORT_COMPONENT TrackDescriptor : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kUuidFieldNumber = 1,
    kParentUuidFieldNumber = 5,
    kNameFieldNumber = 2,
    kStaticNameFieldNumber = 10,
    kProcessFieldNumber = 3,
    kChromeProcessFieldNumber = 6,
    kThreadFieldNumber = 4,
    kChromeThreadFieldNumber = 7,
    kCounterFieldNumber = 8,
    kDisallowMergingWithSystemTracksFieldNumber = 9,
  };

  TrackDescriptor();
  ~TrackDescriptor() override;
  TrackDescriptor(TrackDescriptor&&) noexcept;
  TrackDescriptor& operator=(TrackDescriptor&&);
  TrackDescriptor(const TrackDescriptor&);
  TrackDescriptor& operator=(const TrackDescriptor&);
  bool operator==(const TrackDescriptor&) const;
  bool operator!=(const TrackDescriptor& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_uuid() const { return _has_field_[1]; }
  uint64_t uuid() const { return uuid_; }
  void set_uuid(uint64_t value) { uuid_ = value; _has_field_.set(1); }

  bool has_parent_uuid() const { return _has_field_[5]; }
  uint64_t parent_uuid() const { return parent_uuid_; }
  void set_parent_uuid(uint64_t value) { parent_uuid_ = value; _has_field_.set(5); }

  bool has_name() const { return _has_field_[2]; }
  const std::string& name() const { return name_; }
  void set_name(const std::string& value) { name_ = value; _has_field_.set(2); }

  bool has_static_name() const { return _has_field_[10]; }
  const std::string& static_name() const { return static_name_; }
  void set_static_name(const std::string& value) { static_name_ = value; _has_field_.set(10); }

  bool has_process() const { return _has_field_[3]; }
  const ProcessDescriptor& process() const { return *process_; }
  ProcessDescriptor* mutable_process() { _has_field_.set(3); return process_.get(); }

  bool has_chrome_process() const { return _has_field_[6]; }
  const ChromeProcessDescriptor& chrome_process() const { return *chrome_process_; }
  ChromeProcessDescriptor* mutable_chrome_process() { _has_field_.set(6); return chrome_process_.get(); }

  bool has_thread() const { return _has_field_[4]; }
  const ThreadDescriptor& thread() const { return *thread_; }
  ThreadDescriptor* mutable_thread() { _has_field_.set(4); return thread_.get(); }

  bool has_chrome_thread() const { return _has_field_[7]; }
  const ChromeThreadDescriptor& chrome_thread() const { return *chrome_thread_; }
  ChromeThreadDescriptor* mutable_chrome_thread() { _has_field_.set(7); return chrome_thread_.get(); }

  bool has_counter() const { return _has_field_[8]; }
  const CounterDescriptor& counter() const { return *counter_; }
  CounterDescriptor* mutable_counter() { _has_field_.set(8); return counter_.get(); }

  bool has_disallow_merging_with_system_tracks() const { return _has_field_[9]; }
  bool disallow_merging_with_system_tracks() const { return disallow_merging_with_system_tracks_; }
  void set_disallow_merging_with_system_tracks(bool value) { disallow_merging_with_system_tracks_ = value; _has_field_.set(9); }

 private:
  uint64_t uuid_{};
  uint64_t parent_uuid_{};
  std::string name_{};
  std::string static_name_{};
  ::protozero::CopyablePtr<ProcessDescriptor> process_;
  ::protozero::CopyablePtr<ChromeProcessDescriptor> chrome_process_;
  ::protozero::CopyablePtr<ThreadDescriptor> thread_;
  ::protozero::CopyablePtr<ChromeThreadDescriptor> chrome_thread_;
  ::protozero::CopyablePtr<CounterDescriptor> counter_;
  bool disallow_merging_with_system_tracks_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<11> _has_field_{};
};

}  // namespace perfetto
}  // namespace protos
}  // namespace gen

#endif  // PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_TRACK_EVENT_TRACK_DESCRIPTOR_PROTO_CPP_H_
