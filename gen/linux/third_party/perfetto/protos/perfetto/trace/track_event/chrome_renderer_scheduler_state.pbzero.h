// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_TRACK_EVENT_CHROME_RENDERER_SCHEDULER_STATE_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_TRACK_EVENT_CHROME_RENDERER_SCHEDULER_STATE_PROTO_H_

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
enum ChromeRAILMode : int32_t;
} // Namespace pbzero.
} // Namespace protos.
} // Namespace perfetto.

namespace perfetto {
namespace protos {
namespace pbzero {

enum ChromeRAILMode : int32_t {
  RAIL_MODE_NONE = 0,
  RAIL_MODE_RESPONSE = 1,
  RAIL_MODE_ANIMATION = 2,
  RAIL_MODE_IDLE = 3,
  RAIL_MODE_LOAD = 4,
};

constexpr ChromeRAILMode ChromeRAILMode_MIN = ChromeRAILMode::RAIL_MODE_NONE;
constexpr ChromeRAILMode ChromeRAILMode_MAX = ChromeRAILMode::RAIL_MODE_LOAD;


PERFETTO_PROTOZERO_CONSTEXPR14_OR_INLINE
const char* ChromeRAILMode_Name(::perfetto::protos::pbzero::ChromeRAILMode value) {
  switch (value) {
  case ::perfetto::protos::pbzero::ChromeRAILMode::RAIL_MODE_NONE:
    return "RAIL_MODE_NONE";

  case ::perfetto::protos::pbzero::ChromeRAILMode::RAIL_MODE_RESPONSE:
    return "RAIL_MODE_RESPONSE";

  case ::perfetto::protos::pbzero::ChromeRAILMode::RAIL_MODE_ANIMATION:
    return "RAIL_MODE_ANIMATION";

  case ::perfetto::protos::pbzero::ChromeRAILMode::RAIL_MODE_IDLE:
    return "RAIL_MODE_IDLE";

  case ::perfetto::protos::pbzero::ChromeRAILMode::RAIL_MODE_LOAD:
    return "RAIL_MODE_LOAD";
  }
  return "PBZERO_UNKNOWN_ENUM_VALUE";
}

class ChromeRendererSchedulerState_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/3, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  ChromeRendererSchedulerState_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit ChromeRendererSchedulerState_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit ChromeRendererSchedulerState_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_rail_mode() const { return at<1>().valid(); }
  int32_t rail_mode() const { return at<1>().as_int32(); }
  bool has_is_backgrounded() const { return at<2>().valid(); }
  bool is_backgrounded() const { return at<2>().as_bool(); }
  bool has_is_hidden() const { return at<3>().valid(); }
  bool is_hidden() const { return at<3>().as_bool(); }
};

class ChromeRendererSchedulerState : public ::protozero::Message {
 public:
  using Decoder = ChromeRendererSchedulerState_Decoder;
  enum : int32_t {
    kRailModeFieldNumber = 1,
    kIsBackgroundedFieldNumber = 2,
    kIsHiddenFieldNumber = 3,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.ChromeRendererSchedulerState"; }


  using FieldMetadata_RailMode =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kEnum,
      ChromeRAILMode,
      ChromeRendererSchedulerState>;

  static constexpr FieldMetadata_RailMode kRailMode{};
  void set_rail_mode(ChromeRAILMode value) {
    static constexpr uint32_t field_id = FieldMetadata_RailMode::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kEnum>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_IsBackgrounded =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kBool,
      bool,
      ChromeRendererSchedulerState>;

  static constexpr FieldMetadata_IsBackgrounded kIsBackgrounded{};
  void set_is_backgrounded(bool value) {
    static constexpr uint32_t field_id = FieldMetadata_IsBackgrounded::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kBool>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_IsHidden =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kBool,
      bool,
      ChromeRendererSchedulerState>;

  static constexpr FieldMetadata_IsHidden kIsHidden{};
  void set_is_hidden(bool value) {
    static constexpr uint32_t field_id = FieldMetadata_IsHidden::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kBool>
        ::Append(*this, field_id, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
