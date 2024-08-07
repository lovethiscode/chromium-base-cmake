// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_TRACK_EVENT_DEBUG_ANNOTATION_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_TRACK_EVENT_DEBUG_ANNOTATION_PROTO_H_

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
class DebugAnnotation;
class DebugAnnotation_NestedValue;
namespace perfetto_pbzero_enum_DebugAnnotation_NestedValue {
enum NestedType : int32_t;
}  // namespace perfetto_pbzero_enum_DebugAnnotation_NestedValue
using DebugAnnotation_NestedValue_NestedType = perfetto_pbzero_enum_DebugAnnotation_NestedValue::NestedType;
} // Namespace pbzero.
} // Namespace protos.
} // Namespace perfetto.

namespace perfetto {
namespace protos {
namespace pbzero {

namespace perfetto_pbzero_enum_DebugAnnotation_NestedValue {
enum NestedType : int32_t {
  UNSPECIFIED = 0,
  DICT = 1,
  ARRAY = 2,
};
} // namespace perfetto_pbzero_enum_DebugAnnotation_NestedValue
using DebugAnnotation_NestedValue_NestedType = perfetto_pbzero_enum_DebugAnnotation_NestedValue::NestedType;


constexpr DebugAnnotation_NestedValue_NestedType DebugAnnotation_NestedValue_NestedType_MIN = DebugAnnotation_NestedValue_NestedType::UNSPECIFIED;
constexpr DebugAnnotation_NestedValue_NestedType DebugAnnotation_NestedValue_NestedType_MAX = DebugAnnotation_NestedValue_NestedType::ARRAY;


PERFETTO_PROTOZERO_CONSTEXPR14_OR_INLINE
const char* DebugAnnotation_NestedValue_NestedType_Name(::perfetto::protos::pbzero::DebugAnnotation_NestedValue_NestedType value) {
  switch (value) {
  case ::perfetto::protos::pbzero::DebugAnnotation_NestedValue_NestedType::UNSPECIFIED:
    return "UNSPECIFIED";

  case ::perfetto::protos::pbzero::DebugAnnotation_NestedValue_NestedType::DICT:
    return "DICT";

  case ::perfetto::protos::pbzero::DebugAnnotation_NestedValue_NestedType::ARRAY:
    return "ARRAY";
  }
  return "PBZERO_UNKNOWN_ENUM_VALUE";
}

class DebugAnnotationValueTypeName_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/2, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  DebugAnnotationValueTypeName_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit DebugAnnotationValueTypeName_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit DebugAnnotationValueTypeName_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_iid() const { return at<1>().valid(); }
  uint64_t iid() const { return at<1>().as_uint64(); }
  bool has_name() const { return at<2>().valid(); }
  ::protozero::ConstChars name() const { return at<2>().as_string(); }
};

class DebugAnnotationValueTypeName : public ::protozero::Message {
 public:
  using Decoder = DebugAnnotationValueTypeName_Decoder;
  enum : int32_t {
    kIidFieldNumber = 1,
    kNameFieldNumber = 2,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.DebugAnnotationValueTypeName"; }


  using FieldMetadata_Iid =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      DebugAnnotationValueTypeName>;

  static constexpr FieldMetadata_Iid kIid{};
  void set_iid(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Iid::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Name =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      DebugAnnotationValueTypeName>;

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
};

class DebugAnnotationName_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/2, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  DebugAnnotationName_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit DebugAnnotationName_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit DebugAnnotationName_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_iid() const { return at<1>().valid(); }
  uint64_t iid() const { return at<1>().as_uint64(); }
  bool has_name() const { return at<2>().valid(); }
  ::protozero::ConstChars name() const { return at<2>().as_string(); }
};

class DebugAnnotationName : public ::protozero::Message {
 public:
  using Decoder = DebugAnnotationName_Decoder;
  enum : int32_t {
    kIidFieldNumber = 1,
    kNameFieldNumber = 2,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.DebugAnnotationName"; }


  using FieldMetadata_Iid =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      DebugAnnotationName>;

  static constexpr FieldMetadata_Iid kIid{};
  void set_iid(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Iid::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Name =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      DebugAnnotationName>;

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
};

class DebugAnnotation_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/17, /*HAS_NONPACKED_REPEATED_FIELDS=*/true> {
 public:
  DebugAnnotation_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit DebugAnnotation_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit DebugAnnotation_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_name_iid() const { return at<1>().valid(); }
  uint64_t name_iid() const { return at<1>().as_uint64(); }
  bool has_name() const { return at<10>().valid(); }
  ::protozero::ConstChars name() const { return at<10>().as_string(); }
  bool has_bool_value() const { return at<2>().valid(); }
  bool bool_value() const { return at<2>().as_bool(); }
  bool has_uint_value() const { return at<3>().valid(); }
  uint64_t uint_value() const { return at<3>().as_uint64(); }
  bool has_int_value() const { return at<4>().valid(); }
  int64_t int_value() const { return at<4>().as_int64(); }
  bool has_double_value() const { return at<5>().valid(); }
  double double_value() const { return at<5>().as_double(); }
  bool has_pointer_value() const { return at<7>().valid(); }
  uint64_t pointer_value() const { return at<7>().as_uint64(); }
  bool has_nested_value() const { return at<8>().valid(); }
  ::protozero::ConstBytes nested_value() const { return at<8>().as_bytes(); }
  bool has_legacy_json_value() const { return at<9>().valid(); }
  ::protozero::ConstChars legacy_json_value() const { return at<9>().as_string(); }
  bool has_string_value() const { return at<6>().valid(); }
  ::protozero::ConstChars string_value() const { return at<6>().as_string(); }
  bool has_string_value_iid() const { return at<17>().valid(); }
  uint64_t string_value_iid() const { return at<17>().as_uint64(); }
  bool has_proto_type_name() const { return at<16>().valid(); }
  ::protozero::ConstChars proto_type_name() const { return at<16>().as_string(); }
  bool has_proto_type_name_iid() const { return at<13>().valid(); }
  uint64_t proto_type_name_iid() const { return at<13>().as_uint64(); }
  bool has_proto_value() const { return at<14>().valid(); }
  ::protozero::ConstBytes proto_value() const { return at<14>().as_bytes(); }
  bool has_dict_entries() const { return at<11>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstBytes> dict_entries() const { return GetRepeated<::protozero::ConstBytes>(11); }
  bool has_array_values() const { return at<12>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstBytes> array_values() const { return GetRepeated<::protozero::ConstBytes>(12); }
};

class DebugAnnotation : public ::protozero::Message {
 public:
  using Decoder = DebugAnnotation_Decoder;
  enum : int32_t {
    kNameIidFieldNumber = 1,
    kNameFieldNumber = 10,
    kBoolValueFieldNumber = 2,
    kUintValueFieldNumber = 3,
    kIntValueFieldNumber = 4,
    kDoubleValueFieldNumber = 5,
    kPointerValueFieldNumber = 7,
    kNestedValueFieldNumber = 8,
    kLegacyJsonValueFieldNumber = 9,
    kStringValueFieldNumber = 6,
    kStringValueIidFieldNumber = 17,
    kProtoTypeNameFieldNumber = 16,
    kProtoTypeNameIidFieldNumber = 13,
    kProtoValueFieldNumber = 14,
    kDictEntriesFieldNumber = 11,
    kArrayValuesFieldNumber = 12,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.DebugAnnotation"; }

  using NestedValue = ::perfetto::protos::pbzero::DebugAnnotation_NestedValue;

  using FieldMetadata_NameIid =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      DebugAnnotation>;

  static constexpr FieldMetadata_NameIid kNameIid{};
  void set_name_iid(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_NameIid::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Name =
    ::protozero::proto_utils::FieldMetadata<
      10,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      DebugAnnotation>;

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

  using FieldMetadata_BoolValue =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kBool,
      bool,
      DebugAnnotation>;

  static constexpr FieldMetadata_BoolValue kBoolValue{};
  void set_bool_value(bool value) {
    static constexpr uint32_t field_id = FieldMetadata_BoolValue::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kBool>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_UintValue =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      DebugAnnotation>;

  static constexpr FieldMetadata_UintValue kUintValue{};
  void set_uint_value(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_UintValue::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_IntValue =
    ::protozero::proto_utils::FieldMetadata<
      4,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt64,
      int64_t,
      DebugAnnotation>;

  static constexpr FieldMetadata_IntValue kIntValue{};
  void set_int_value(int64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_IntValue::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_DoubleValue =
    ::protozero::proto_utils::FieldMetadata<
      5,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kDouble,
      double,
      DebugAnnotation>;

  static constexpr FieldMetadata_DoubleValue kDoubleValue{};
  void set_double_value(double value) {
    static constexpr uint32_t field_id = FieldMetadata_DoubleValue::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kDouble>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_PointerValue =
    ::protozero::proto_utils::FieldMetadata<
      7,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      DebugAnnotation>;

  static constexpr FieldMetadata_PointerValue kPointerValue{};
  void set_pointer_value(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_PointerValue::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_NestedValue =
    ::protozero::proto_utils::FieldMetadata<
      8,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kMessage,
      DebugAnnotation_NestedValue,
      DebugAnnotation>;

  static constexpr FieldMetadata_NestedValue kNestedValue{};
  template <typename T = DebugAnnotation_NestedValue> T* set_nested_value() {
    return BeginNestedMessage<T>(8);
  }


  using FieldMetadata_LegacyJsonValue =
    ::protozero::proto_utils::FieldMetadata<
      9,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      DebugAnnotation>;

  static constexpr FieldMetadata_LegacyJsonValue kLegacyJsonValue{};
  void set_legacy_json_value(const char* data, size_t size) {
    AppendBytes(FieldMetadata_LegacyJsonValue::kFieldId, data, size);
  }
  void set_legacy_json_value(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_LegacyJsonValue::kFieldId, chars.data, chars.size);
  }
  void set_legacy_json_value(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_LegacyJsonValue::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_StringValue =
    ::protozero::proto_utils::FieldMetadata<
      6,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      DebugAnnotation>;

  static constexpr FieldMetadata_StringValue kStringValue{};
  void set_string_value(const char* data, size_t size) {
    AppendBytes(FieldMetadata_StringValue::kFieldId, data, size);
  }
  void set_string_value(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_StringValue::kFieldId, chars.data, chars.size);
  }
  void set_string_value(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_StringValue::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_StringValueIid =
    ::protozero::proto_utils::FieldMetadata<
      17,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      DebugAnnotation>;

  static constexpr FieldMetadata_StringValueIid kStringValueIid{};
  void set_string_value_iid(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_StringValueIid::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_ProtoTypeName =
    ::protozero::proto_utils::FieldMetadata<
      16,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      DebugAnnotation>;

  static constexpr FieldMetadata_ProtoTypeName kProtoTypeName{};
  void set_proto_type_name(const char* data, size_t size) {
    AppendBytes(FieldMetadata_ProtoTypeName::kFieldId, data, size);
  }
  void set_proto_type_name(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_ProtoTypeName::kFieldId, chars.data, chars.size);
  }
  void set_proto_type_name(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_ProtoTypeName::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_ProtoTypeNameIid =
    ::protozero::proto_utils::FieldMetadata<
      13,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      DebugAnnotation>;

  static constexpr FieldMetadata_ProtoTypeNameIid kProtoTypeNameIid{};
  void set_proto_type_name_iid(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_ProtoTypeNameIid::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_ProtoValue =
    ::protozero::proto_utils::FieldMetadata<
      14,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kBytes,
      std::string,
      DebugAnnotation>;

  static constexpr FieldMetadata_ProtoValue kProtoValue{};
  void set_proto_value(const uint8_t* data, size_t size) {
    AppendBytes(FieldMetadata_ProtoValue::kFieldId, data, size);
  }
  void set_proto_value(::protozero::ConstBytes bytes) {
    AppendBytes(FieldMetadata_ProtoValue::kFieldId, bytes.data, bytes.size);
  }
  void set_proto_value(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_ProtoValue::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kBytes>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_DictEntries =
    ::protozero::proto_utils::FieldMetadata<
      11,
      ::protozero::proto_utils::RepetitionType::kRepeatedNotPacked,
      ::protozero::proto_utils::ProtoSchemaType::kMessage,
      DebugAnnotation,
      DebugAnnotation>;

  static constexpr FieldMetadata_DictEntries kDictEntries{};
  template <typename T = DebugAnnotation> T* add_dict_entries() {
    return BeginNestedMessage<T>(11);
  }


  using FieldMetadata_ArrayValues =
    ::protozero::proto_utils::FieldMetadata<
      12,
      ::protozero::proto_utils::RepetitionType::kRepeatedNotPacked,
      ::protozero::proto_utils::ProtoSchemaType::kMessage,
      DebugAnnotation,
      DebugAnnotation>;

  static constexpr FieldMetadata_ArrayValues kArrayValues{};
  template <typename T = DebugAnnotation> T* add_array_values() {
    return BeginNestedMessage<T>(12);
  }

};

class DebugAnnotation_NestedValue_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/8, /*HAS_NONPACKED_REPEATED_FIELDS=*/true> {
 public:
  DebugAnnotation_NestedValue_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit DebugAnnotation_NestedValue_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit DebugAnnotation_NestedValue_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_nested_type() const { return at<1>().valid(); }
  int32_t nested_type() const { return at<1>().as_int32(); }
  bool has_dict_keys() const { return at<2>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstChars> dict_keys() const { return GetRepeated<::protozero::ConstChars>(2); }
  bool has_dict_values() const { return at<3>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstBytes> dict_values() const { return GetRepeated<::protozero::ConstBytes>(3); }
  bool has_array_values() const { return at<4>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstBytes> array_values() const { return GetRepeated<::protozero::ConstBytes>(4); }
  bool has_int_value() const { return at<5>().valid(); }
  int64_t int_value() const { return at<5>().as_int64(); }
  bool has_double_value() const { return at<6>().valid(); }
  double double_value() const { return at<6>().as_double(); }
  bool has_bool_value() const { return at<7>().valid(); }
  bool bool_value() const { return at<7>().as_bool(); }
  bool has_string_value() const { return at<8>().valid(); }
  ::protozero::ConstChars string_value() const { return at<8>().as_string(); }
};

class DebugAnnotation_NestedValue : public ::protozero::Message {
 public:
  using Decoder = DebugAnnotation_NestedValue_Decoder;
  enum : int32_t {
    kNestedTypeFieldNumber = 1,
    kDictKeysFieldNumber = 2,
    kDictValuesFieldNumber = 3,
    kArrayValuesFieldNumber = 4,
    kIntValueFieldNumber = 5,
    kDoubleValueFieldNumber = 6,
    kBoolValueFieldNumber = 7,
    kStringValueFieldNumber = 8,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.DebugAnnotation.NestedValue"; }


  using NestedType = ::perfetto::protos::pbzero::DebugAnnotation_NestedValue_NestedType;
  static inline const char* NestedType_Name(NestedType value) {
    return ::perfetto::protos::pbzero::DebugAnnotation_NestedValue_NestedType_Name(value);
  }
  static inline const NestedType UNSPECIFIED = NestedType::UNSPECIFIED;
  static inline const NestedType DICT = NestedType::DICT;
  static inline const NestedType ARRAY = NestedType::ARRAY;

  using FieldMetadata_NestedType =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kEnum,
      DebugAnnotation_NestedValue_NestedType,
      DebugAnnotation_NestedValue>;

  static constexpr FieldMetadata_NestedType kNestedType{};
  void set_nested_type(DebugAnnotation_NestedValue_NestedType value) {
    static constexpr uint32_t field_id = FieldMetadata_NestedType::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kEnum>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_DictKeys =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kRepeatedNotPacked,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      DebugAnnotation_NestedValue>;

  static constexpr FieldMetadata_DictKeys kDictKeys{};
  void add_dict_keys(const char* data, size_t size) {
    AppendBytes(FieldMetadata_DictKeys::kFieldId, data, size);
  }
  void add_dict_keys(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_DictKeys::kFieldId, chars.data, chars.size);
  }
  void add_dict_keys(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_DictKeys::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_DictValues =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kRepeatedNotPacked,
      ::protozero::proto_utils::ProtoSchemaType::kMessage,
      DebugAnnotation_NestedValue,
      DebugAnnotation_NestedValue>;

  static constexpr FieldMetadata_DictValues kDictValues{};
  template <typename T = DebugAnnotation_NestedValue> T* add_dict_values() {
    return BeginNestedMessage<T>(3);
  }


  using FieldMetadata_ArrayValues =
    ::protozero::proto_utils::FieldMetadata<
      4,
      ::protozero::proto_utils::RepetitionType::kRepeatedNotPacked,
      ::protozero::proto_utils::ProtoSchemaType::kMessage,
      DebugAnnotation_NestedValue,
      DebugAnnotation_NestedValue>;

  static constexpr FieldMetadata_ArrayValues kArrayValues{};
  template <typename T = DebugAnnotation_NestedValue> T* add_array_values() {
    return BeginNestedMessage<T>(4);
  }


  using FieldMetadata_IntValue =
    ::protozero::proto_utils::FieldMetadata<
      5,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt64,
      int64_t,
      DebugAnnotation_NestedValue>;

  static constexpr FieldMetadata_IntValue kIntValue{};
  void set_int_value(int64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_IntValue::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_DoubleValue =
    ::protozero::proto_utils::FieldMetadata<
      6,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kDouble,
      double,
      DebugAnnotation_NestedValue>;

  static constexpr FieldMetadata_DoubleValue kDoubleValue{};
  void set_double_value(double value) {
    static constexpr uint32_t field_id = FieldMetadata_DoubleValue::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kDouble>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_BoolValue =
    ::protozero::proto_utils::FieldMetadata<
      7,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kBool,
      bool,
      DebugAnnotation_NestedValue>;

  static constexpr FieldMetadata_BoolValue kBoolValue{};
  void set_bool_value(bool value) {
    static constexpr uint32_t field_id = FieldMetadata_BoolValue::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kBool>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_StringValue =
    ::protozero::proto_utils::FieldMetadata<
      8,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      DebugAnnotation_NestedValue>;

  static constexpr FieldMetadata_StringValue kStringValue{};
  void set_string_value(const char* data, size_t size) {
    AppendBytes(FieldMetadata_StringValue::kFieldId, data, size);
  }
  void set_string_value(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_StringValue::kFieldId, chars.data, chars.size);
  }
  void set_string_value(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_StringValue::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
