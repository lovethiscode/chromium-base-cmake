// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_TRACK_EVENT_CHROME_ACTIVE_PROCESSES_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_TRACK_EVENT_CHROME_ACTIVE_PROCESSES_PROTO_H_

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

class ChromeActiveProcesses_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/1, /*HAS_NONPACKED_REPEATED_FIELDS=*/true> {
 public:
  ChromeActiveProcesses_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit ChromeActiveProcesses_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit ChromeActiveProcesses_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_pid() const { return at<1>().valid(); }
  ::protozero::RepeatedFieldIterator<int32_t> pid() const { return GetRepeated<int32_t>(1); }
};

class ChromeActiveProcesses : public ::protozero::Message {
 public:
  using Decoder = ChromeActiveProcesses_Decoder;
  enum : int32_t {
    kPidFieldNumber = 1,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.ChromeActiveProcesses"; }


  using FieldMetadata_Pid =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kRepeatedNotPacked,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      ChromeActiveProcesses>;

  static constexpr FieldMetadata_Pid kPid{};
  void add_pid(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Pid::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
