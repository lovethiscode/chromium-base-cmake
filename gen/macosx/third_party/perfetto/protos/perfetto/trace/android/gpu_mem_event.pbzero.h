// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_ANDROID_GPU_MEM_EVENT_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_ANDROID_GPU_MEM_EVENT_PROTO_H_

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

class GpuMemTotalEvent_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/3, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  GpuMemTotalEvent_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit GpuMemTotalEvent_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit GpuMemTotalEvent_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_gpu_id() const { return at<1>().valid(); }
  uint32_t gpu_id() const { return at<1>().as_uint32(); }
  bool has_pid() const { return at<2>().valid(); }
  uint32_t pid() const { return at<2>().as_uint32(); }
  bool has_size() const { return at<3>().valid(); }
  uint64_t size() const { return at<3>().as_uint64(); }
};

class GpuMemTotalEvent : public ::protozero::Message {
 public:
  using Decoder = GpuMemTotalEvent_Decoder;
  enum : int32_t {
    kGpuIdFieldNumber = 1,
    kPidFieldNumber = 2,
    kSizeFieldNumber = 3,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.GpuMemTotalEvent"; }


  using FieldMetadata_GpuId =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      GpuMemTotalEvent>;

  static constexpr FieldMetadata_GpuId kGpuId{};
  void set_gpu_id(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_GpuId::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Pid =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      GpuMemTotalEvent>;

  static constexpr FieldMetadata_Pid kPid{};
  void set_pid(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Pid::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Size =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      GpuMemTotalEvent>;

  static constexpr FieldMetadata_Size kSize{};
  void set_size(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Size::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
