// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_ANDROID_VIEW_SURFACECONTROL_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_ANDROID_VIEW_SURFACECONTROL_PROTO_H_

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

class SurfaceControlProto_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/3, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  SurfaceControlProto_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit SurfaceControlProto_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit SurfaceControlProto_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_hash_code() const { return at<1>().valid(); }
  int32_t hash_code() const { return at<1>().as_int32(); }
  bool has_name() const { return at<2>().valid(); }
  ::protozero::ConstChars name() const { return at<2>().as_string(); }
  bool has_layerid() const { return at<3>().valid(); }
  int32_t layerid() const { return at<3>().as_int32(); }
};

class SurfaceControlProto : public ::protozero::Message {
 public:
  using Decoder = SurfaceControlProto_Decoder;
  enum : int32_t {
    kHashCodeFieldNumber = 1,
    kNameFieldNumber = 2,
    kLayerIdFieldNumber = 3,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.SurfaceControlProto"; }


  using FieldMetadata_HashCode =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      SurfaceControlProto>;

  static constexpr FieldMetadata_HashCode kHashCode{};
  void set_hash_code(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_HashCode::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Name =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      SurfaceControlProto>;

  static constexpr FieldMetadata_Name kName{};
  void set_name(const char* data, size_t size) {
    AppendBytes(FieldMetadata_Name::kFieldId, data, size);
  }
  void set_name(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_Name::kFieldId, chars.data, chars.size);
  }
  void set_name(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_Name::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_LayerId =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      SurfaceControlProto>;

  static constexpr FieldMetadata_LayerId kLayerId{};
  void set_layerid(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_LayerId::kFieldId;
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