// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_ETW_ETW_EVENT_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_ETW_ETW_EVENT_PROTO_H_

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
class CSwitchEtwEvent;
class ReadyThreadEtwEvent;
} // Namespace pbzero.
} // Namespace protos.
} // Namespace perfetto.

namespace perfetto {
namespace protos {
namespace pbzero {

class EtwTraceEvent_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/4, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  EtwTraceEvent_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit EtwTraceEvent_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit EtwTraceEvent_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_timestamp() const { return at<1>().valid(); }
  uint64_t timestamp() const { return at<1>().as_uint64(); }
  bool has_cpu() const { return at<4>().valid(); }
  uint32_t cpu() const { return at<4>().as_uint32(); }
  bool has_c_switch() const { return at<2>().valid(); }
  ::protozero::ConstBytes c_switch() const { return at<2>().as_bytes(); }
  bool has_ready_thread() const { return at<3>().valid(); }
  ::protozero::ConstBytes ready_thread() const { return at<3>().as_bytes(); }
};

class EtwTraceEvent : public ::protozero::Message {
 public:
  using Decoder = EtwTraceEvent_Decoder;
  enum : int32_t {
    kTimestampFieldNumber = 1,
    kCpuFieldNumber = 4,
    kCSwitchFieldNumber = 2,
    kReadyThreadFieldNumber = 3,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.EtwTraceEvent"; }


  using FieldMetadata_Timestamp =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      EtwTraceEvent>;

  static constexpr FieldMetadata_Timestamp kTimestamp{};
  void set_timestamp(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Timestamp::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Cpu =
    ::protozero::proto_utils::FieldMetadata<
      4,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      EtwTraceEvent>;

  static constexpr FieldMetadata_Cpu kCpu{};
  void set_cpu(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Cpu::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_CSwitch =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kMessage,
      CSwitchEtwEvent,
      EtwTraceEvent>;

  static constexpr FieldMetadata_CSwitch kCSwitch{};
  template <typename T = CSwitchEtwEvent> T* set_c_switch() {
    return BeginNestedMessage<T>(2);
  }


  using FieldMetadata_ReadyThread =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kMessage,
      ReadyThreadEtwEvent,
      EtwTraceEvent>;

  static constexpr FieldMetadata_ReadyThread kReadyThread{};
  template <typename T = ReadyThreadEtwEvent> T* set_ready_thread() {
    return BeginNestedMessage<T>(3);
  }

};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
