// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_ETW_ETW_EVENT_BUNDLE_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_ETW_ETW_EVENT_BUNDLE_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/protozero/field_writer.h"
#include "perfetto/protozero/message.h"
#include "perfetto/protozero/packed_repeated_fields.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/proto_utils.h"

namespace perfetto {
namespace protos {
namespace pbzero {
class EtwTraceEvent;
} // Namespace pbzero.
} // Namespace protos.
} // Namespace perfetto.

namespace perfetto {
namespace protos {
namespace pbzero {

class EtwTraceEventBundle_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/2, /*HAS_NONPACKED_REPEATED_FIELDS=*/true> {
 public:
  EtwTraceEventBundle_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit EtwTraceEventBundle_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit EtwTraceEventBundle_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_cpu() const { return at<1>().valid(); }
  uint32_t cpu() const { return at<1>().as_uint32(); }
  bool has_event() const { return at<2>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstBytes> event() const { return GetRepeated<::protozero::ConstBytes>(2); }
};

class EtwTraceEventBundle : public ::protozero::Message {
 public:
  using Decoder = EtwTraceEventBundle_Decoder;
  enum : int32_t {
    kCpuFieldNumber = 1,
    kEventFieldNumber = 2,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.EtwTraceEventBundle"; }


  using FieldMetadata_Cpu =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      EtwTraceEventBundle>;

  static constexpr FieldMetadata_Cpu kCpu{};
  void set_cpu(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Cpu::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Event =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kRepeatedNotPacked,
      ::protozero::proto_utils::ProtoSchemaType::kMessage,
      EtwTraceEvent,
      EtwTraceEventBundle>;

  static constexpr FieldMetadata_Event kEvent{};
  template <typename T = EtwTraceEvent> T* add_event() {
    return BeginNestedMessage<T>(2);
  }

};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.