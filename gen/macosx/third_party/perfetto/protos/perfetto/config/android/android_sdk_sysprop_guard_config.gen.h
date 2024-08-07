// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_CONFIG_ANDROID_ANDROID_SDK_SYSPROP_GUARD_CONFIG_PROTO_CPP_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_CONFIG_ANDROID_ANDROID_SDK_SYSPROP_GUARD_CONFIG_PROTO_CPP_H_

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
class AndroidSdkSyspropGuardConfig;
}  // namespace perfetto
}  // namespace protos
}  // namespace gen

namespace protozero {
class Message;
}  // namespace protozero

namespace perfetto {
namespace protos {
namespace gen {

class PERFETTO_EXPORT_COMPONENT AndroidSdkSyspropGuardConfig : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kSurfaceflingerSkiaTrackEventsFieldNumber = 1,
    kHwuiSkiaTrackEventsFieldNumber = 2,
    kHwuiPackageNameFilterFieldNumber = 3,
  };

  AndroidSdkSyspropGuardConfig();
  ~AndroidSdkSyspropGuardConfig() override;
  AndroidSdkSyspropGuardConfig(AndroidSdkSyspropGuardConfig&&) noexcept;
  AndroidSdkSyspropGuardConfig& operator=(AndroidSdkSyspropGuardConfig&&);
  AndroidSdkSyspropGuardConfig(const AndroidSdkSyspropGuardConfig&);
  AndroidSdkSyspropGuardConfig& operator=(const AndroidSdkSyspropGuardConfig&);
  bool operator==(const AndroidSdkSyspropGuardConfig&) const;
  bool operator!=(const AndroidSdkSyspropGuardConfig& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_surfaceflinger_skia_track_events() const { return _has_field_[1]; }
  bool surfaceflinger_skia_track_events() const { return surfaceflinger_skia_track_events_; }
  void set_surfaceflinger_skia_track_events(bool value) { surfaceflinger_skia_track_events_ = value; _has_field_.set(1); }

  bool has_hwui_skia_track_events() const { return _has_field_[2]; }
  bool hwui_skia_track_events() const { return hwui_skia_track_events_; }
  void set_hwui_skia_track_events(bool value) { hwui_skia_track_events_ = value; _has_field_.set(2); }

  const std::vector<std::string>& hwui_package_name_filter() const { return hwui_package_name_filter_; }
  std::vector<std::string>* mutable_hwui_package_name_filter() { return &hwui_package_name_filter_; }
  int hwui_package_name_filter_size() const { return static_cast<int>(hwui_package_name_filter_.size()); }
  void clear_hwui_package_name_filter() { hwui_package_name_filter_.clear(); }
  void add_hwui_package_name_filter(std::string value) { hwui_package_name_filter_.emplace_back(value); }
  std::string* add_hwui_package_name_filter() { hwui_package_name_filter_.emplace_back(); return &hwui_package_name_filter_.back(); }

 private:
  bool surfaceflinger_skia_track_events_{};
  bool hwui_skia_track_events_{};
  std::vector<std::string> hwui_package_name_filter_;

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<4> _has_field_{};
};

}  // namespace perfetto
}  // namespace protos
}  // namespace gen

#endif  // PERFETTO_PROTOS_PROTOS_PERFETTO_CONFIG_ANDROID_ANDROID_SDK_SYSPROP_GUARD_CONFIG_PROTO_CPP_H_
