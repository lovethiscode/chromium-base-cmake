#include "perfetto/protozero/gen_field_helpers.h"
#include "perfetto/protozero/message.h"
#include "perfetto/protozero/packed_repeated_fields.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/scattered_heap_buffer.h"
// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wfloat-equal"
#endif
#include "protos/perfetto/trace/android/winscope_extensions.gen.h"

namespace perfetto {
namespace protos {
namespace gen {

WinscopeExtensions::WinscopeExtensions() = default;
WinscopeExtensions::~WinscopeExtensions() = default;
WinscopeExtensions::WinscopeExtensions(const WinscopeExtensions&) = default;
WinscopeExtensions& WinscopeExtensions::operator=(const WinscopeExtensions&) = default;
WinscopeExtensions::WinscopeExtensions(WinscopeExtensions&&) noexcept = default;
WinscopeExtensions& WinscopeExtensions::operator=(WinscopeExtensions&&) = default;

bool WinscopeExtensions::operator==(const WinscopeExtensions& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_);
}

bool WinscopeExtensions::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string WinscopeExtensions::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> WinscopeExtensions::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void WinscopeExtensions::Serialize(::protozero::Message* msg) const {
  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}

}  // namespace perfetto
}  // namespace protos
}  // namespace gen
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif