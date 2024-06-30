// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_LOWMEMORYKILLER_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_LOWMEMORYKILLER_PROTO_H_

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

class LowmemoryKillFtraceEvent_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/5, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  LowmemoryKillFtraceEvent_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit LowmemoryKillFtraceEvent_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit LowmemoryKillFtraceEvent_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_comm() const { return at<1>().valid(); }
  ::protozero::ConstChars comm() const { return at<1>().as_string(); }
  bool has_pid() const { return at<2>().valid(); }
  int32_t pid() const { return at<2>().as_int32(); }
  bool has_pagecache_size() const { return at<3>().valid(); }
  int64_t pagecache_size() const { return at<3>().as_int64(); }
  bool has_pagecache_limit() const { return at<4>().valid(); }
  int64_t pagecache_limit() const { return at<4>().as_int64(); }
  bool has_free() const { return at<5>().valid(); }
  int64_t free() const { return at<5>().as_int64(); }
};

class LowmemoryKillFtraceEvent : public ::protozero::Message {
 public:
  using Decoder = LowmemoryKillFtraceEvent_Decoder;
  enum : int32_t {
    kCommFieldNumber = 1,
    kPidFieldNumber = 2,
    kPagecacheSizeFieldNumber = 3,
    kPagecacheLimitFieldNumber = 4,
    kFreeFieldNumber = 5,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.LowmemoryKillFtraceEvent"; }


  using FieldMetadata_Comm =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      LowmemoryKillFtraceEvent>;

  static constexpr FieldMetadata_Comm kComm{};
  void set_comm(const char* data, size_t size) {
    AppendBytes(FieldMetadata_Comm::kFieldId, data, size);
  }
  void set_comm(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_Comm::kFieldId, chars.data, chars.size);
  }
  void set_comm(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_Comm::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Pid =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      LowmemoryKillFtraceEvent>;

  static constexpr FieldMetadata_Pid kPid{};
  void set_pid(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Pid::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_PagecacheSize =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt64,
      int64_t,
      LowmemoryKillFtraceEvent>;

  static constexpr FieldMetadata_PagecacheSize kPagecacheSize{};
  void set_pagecache_size(int64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_PagecacheSize::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_PagecacheLimit =
    ::protozero::proto_utils::FieldMetadata<
      4,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt64,
      int64_t,
      LowmemoryKillFtraceEvent>;

  static constexpr FieldMetadata_PagecacheLimit kPagecacheLimit{};
  void set_pagecache_limit(int64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_PagecacheLimit::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Free =
    ::protozero::proto_utils::FieldMetadata<
      5,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt64,
      int64_t,
      LowmemoryKillFtraceEvent>;

  static constexpr FieldMetadata_Free kFree{};
  void set_free(int64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Free::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt64>
        ::Append(*this, field_id, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
