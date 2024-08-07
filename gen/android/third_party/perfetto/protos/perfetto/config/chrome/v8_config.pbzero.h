// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_CONFIG_CHROME_V8_CONFIG_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_CONFIG_CHROME_V8_CONFIG_PROTO_H_

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

class V8Config_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/2, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  V8Config_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit V8Config_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit V8Config_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_log_script_sources() const { return at<1>().valid(); }
  bool log_script_sources() const { return at<1>().as_bool(); }
  bool has_log_instructions() const { return at<2>().valid(); }
  bool log_instructions() const { return at<2>().as_bool(); }
};

class V8Config : public ::protozero::Message {
 public:
  using Decoder = V8Config_Decoder;
  enum : int32_t {
    kLogScriptSourcesFieldNumber = 1,
    kLogInstructionsFieldNumber = 2,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.V8Config"; }


  using FieldMetadata_LogScriptSources =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kBool,
      bool,
      V8Config>;

  static constexpr FieldMetadata_LogScriptSources kLogScriptSources{};
  void set_log_script_sources(bool value) {
    static constexpr uint32_t field_id = FieldMetadata_LogScriptSources::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kBool>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_LogInstructions =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kBool,
      bool,
      V8Config>;

  static constexpr FieldMetadata_LogInstructions kLogInstructions{};
  void set_log_instructions(bool value) {
    static constexpr uint32_t field_id = FieldMetadata_LogInstructions::kFieldId;
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
