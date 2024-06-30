// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_ANDROID_WINSCOPE_EXTENSIONS_PROTO_CPP_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_ANDROID_WINSCOPE_EXTENSIONS_PROTO_CPP_H_

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
class WinscopeExtensions;
}  // namespace perfetto
}  // namespace protos
}  // namespace gen

namespace protozero {
class Message;
}  // namespace protozero

namespace perfetto {
namespace protos {
namespace gen {

class PERFETTO_EXPORT_COMPONENT WinscopeExtensions : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
  };

  WinscopeExtensions();
  ~WinscopeExtensions() override;
  WinscopeExtensions(WinscopeExtensions&&) noexcept;
  WinscopeExtensions& operator=(WinscopeExtensions&&);
  WinscopeExtensions(const WinscopeExtensions&);
  WinscopeExtensions& operator=(const WinscopeExtensions&);
  bool operator==(const WinscopeExtensions&) const;
  bool operator!=(const WinscopeExtensions& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

 private:

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<2> _has_field_{};
};

}  // namespace perfetto
}  // namespace protos
}  // namespace gen

#endif  // PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_ANDROID_WINSCOPE_EXTENSIONS_PROTO_CPP_H_