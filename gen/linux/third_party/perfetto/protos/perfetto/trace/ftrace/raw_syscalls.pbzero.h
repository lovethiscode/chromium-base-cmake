// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_RAW_SYSCALLS_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_RAW_SYSCALLS_PROTO_H_

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

class SysExitFtraceEvent_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/2, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  SysExitFtraceEvent_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit SysExitFtraceEvent_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit SysExitFtraceEvent_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_id() const { return at<1>().valid(); }
  int64_t id() const { return at<1>().as_int64(); }
  bool has_ret() const { return at<2>().valid(); }
  int64_t ret() const { return at<2>().as_int64(); }
};

class SysExitFtraceEvent : public ::protozero::Message {
 public:
  using Decoder = SysExitFtraceEvent_Decoder;
  enum : int32_t {
    kIdFieldNumber = 1,
    kRetFieldNumber = 2,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.SysExitFtraceEvent"; }


  using FieldMetadata_Id =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt64,
      int64_t,
      SysExitFtraceEvent>;

  static constexpr FieldMetadata_Id kId{};
  void set_id(int64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Id::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Ret =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt64,
      int64_t,
      SysExitFtraceEvent>;

  static constexpr FieldMetadata_Ret kRet{};
  void set_ret(int64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Ret::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt64>
        ::Append(*this, field_id, value);
  }
};

class SysEnterFtraceEvent_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/2, /*HAS_NONPACKED_REPEATED_FIELDS=*/true> {
 public:
  SysEnterFtraceEvent_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit SysEnterFtraceEvent_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit SysEnterFtraceEvent_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_id() const { return at<1>().valid(); }
  int64_t id() const { return at<1>().as_int64(); }
  bool has_args() const { return at<2>().valid(); }
  ::protozero::RepeatedFieldIterator<uint64_t> args() const { return GetRepeated<uint64_t>(2); }
};

class SysEnterFtraceEvent : public ::protozero::Message {
 public:
  using Decoder = SysEnterFtraceEvent_Decoder;
  enum : int32_t {
    kIdFieldNumber = 1,
    kArgsFieldNumber = 2,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.SysEnterFtraceEvent"; }


  using FieldMetadata_Id =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt64,
      int64_t,
      SysEnterFtraceEvent>;

  static constexpr FieldMetadata_Id kId{};
  void set_id(int64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Id::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Args =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kRepeatedNotPacked,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      SysEnterFtraceEvent>;

  static constexpr FieldMetadata_Args kArgs{};
  void add_args(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Args::kFieldId;
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
