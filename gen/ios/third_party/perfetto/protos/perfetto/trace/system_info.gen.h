// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_SYSTEM_INFO_PROTO_CPP_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_SYSTEM_INFO_PROTO_CPP_H_

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
class SystemInfo;
class Utsname;
}  // namespace perfetto
}  // namespace protos
}  // namespace gen

namespace protozero {
class Message;
}  // namespace protozero

namespace perfetto {
namespace protos {
namespace gen {

class PERFETTO_EXPORT_COMPONENT SystemInfo : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kUtsnameFieldNumber = 1,
    kAndroidBuildFingerprintFieldNumber = 2,
    kAndroidSocModelFieldNumber = 9,
    kTracingServiceVersionFieldNumber = 4,
    kAndroidSdkVersionFieldNumber = 5,
    kPageSizeFieldNumber = 6,
    kNumCpusFieldNumber = 8,
    kTimezoneOffMinsFieldNumber = 7,
    kHzFieldNumber = 3,
  };

  SystemInfo();
  ~SystemInfo() override;
  SystemInfo(SystemInfo&&) noexcept;
  SystemInfo& operator=(SystemInfo&&);
  SystemInfo(const SystemInfo&);
  SystemInfo& operator=(const SystemInfo&);
  bool operator==(const SystemInfo&) const;
  bool operator!=(const SystemInfo& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_utsname() const { return _has_field_[1]; }
  const Utsname& utsname() const { return *utsname_; }
  Utsname* mutable_utsname() { _has_field_.set(1); return utsname_.get(); }

  bool has_android_build_fingerprint() const { return _has_field_[2]; }
  const std::string& android_build_fingerprint() const { return android_build_fingerprint_; }
  void set_android_build_fingerprint(const std::string& value) { android_build_fingerprint_ = value; _has_field_.set(2); }

  bool has_android_soc_model() const { return _has_field_[9]; }
  const std::string& android_soc_model() const { return android_soc_model_; }
  void set_android_soc_model(const std::string& value) { android_soc_model_ = value; _has_field_.set(9); }

  bool has_tracing_service_version() const { return _has_field_[4]; }
  const std::string& tracing_service_version() const { return tracing_service_version_; }
  void set_tracing_service_version(const std::string& value) { tracing_service_version_ = value; _has_field_.set(4); }

  bool has_android_sdk_version() const { return _has_field_[5]; }
  uint64_t android_sdk_version() const { return android_sdk_version_; }
  void set_android_sdk_version(uint64_t value) { android_sdk_version_ = value; _has_field_.set(5); }

  bool has_page_size() const { return _has_field_[6]; }
  uint32_t page_size() const { return page_size_; }
  void set_page_size(uint32_t value) { page_size_ = value; _has_field_.set(6); }

  bool has_num_cpus() const { return _has_field_[8]; }
  uint32_t num_cpus() const { return num_cpus_; }
  void set_num_cpus(uint32_t value) { num_cpus_ = value; _has_field_.set(8); }

  bool has_timezone_off_mins() const { return _has_field_[7]; }
  int32_t timezone_off_mins() const { return timezone_off_mins_; }
  void set_timezone_off_mins(int32_t value) { timezone_off_mins_ = value; _has_field_.set(7); }

  bool has_hz() const { return _has_field_[3]; }
  int64_t hz() const { return hz_; }
  void set_hz(int64_t value) { hz_ = value; _has_field_.set(3); }

 private:
  ::protozero::CopyablePtr<Utsname> utsname_;
  std::string android_build_fingerprint_{};
  std::string android_soc_model_{};
  std::string tracing_service_version_{};
  uint64_t android_sdk_version_{};
  uint32_t page_size_{};
  uint32_t num_cpus_{};
  int32_t timezone_off_mins_{};
  int64_t hz_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<10> _has_field_{};
};


class PERFETTO_EXPORT_COMPONENT Utsname : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kSysnameFieldNumber = 1,
    kVersionFieldNumber = 2,
    kReleaseFieldNumber = 3,
    kMachineFieldNumber = 4,
  };

  Utsname();
  ~Utsname() override;
  Utsname(Utsname&&) noexcept;
  Utsname& operator=(Utsname&&);
  Utsname(const Utsname&);
  Utsname& operator=(const Utsname&);
  bool operator==(const Utsname&) const;
  bool operator!=(const Utsname& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_sysname() const { return _has_field_[1]; }
  const std::string& sysname() const { return sysname_; }
  void set_sysname(const std::string& value) { sysname_ = value; _has_field_.set(1); }

  bool has_version() const { return _has_field_[2]; }
  const std::string& version() const { return version_; }
  void set_version(const std::string& value) { version_ = value; _has_field_.set(2); }

  bool has_release() const { return _has_field_[3]; }
  const std::string& release() const { return release_; }
  void set_release(const std::string& value) { release_ = value; _has_field_.set(3); }

  bool has_machine() const { return _has_field_[4]; }
  const std::string& machine() const { return machine_; }
  void set_machine(const std::string& value) { machine_ = value; _has_field_.set(4); }

 private:
  std::string sysname_{};
  std::string version_{};
  std::string release_{};
  std::string machine_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<5> _has_field_{};
};

}  // namespace perfetto
}  // namespace protos
}  // namespace gen

#endif  // PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_SYSTEM_INFO_PROTO_CPP_H_