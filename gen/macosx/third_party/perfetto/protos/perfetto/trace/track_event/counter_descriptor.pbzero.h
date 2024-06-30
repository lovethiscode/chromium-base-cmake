// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_TRACK_EVENT_COUNTER_DESCRIPTOR_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_TRACK_EVENT_COUNTER_DESCRIPTOR_PROTO_H_

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
namespace perfetto_pbzero_enum_CounterDescriptor {
enum BuiltinCounterType : int32_t;
}  // namespace perfetto_pbzero_enum_CounterDescriptor
using CounterDescriptor_BuiltinCounterType = perfetto_pbzero_enum_CounterDescriptor::BuiltinCounterType;
namespace perfetto_pbzero_enum_CounterDescriptor {
enum Unit : int32_t;
}  // namespace perfetto_pbzero_enum_CounterDescriptor
using CounterDescriptor_Unit = perfetto_pbzero_enum_CounterDescriptor::Unit;
} // Namespace pbzero.
} // Namespace protos.
} // Namespace perfetto.

namespace perfetto {
namespace protos {
namespace pbzero {

namespace perfetto_pbzero_enum_CounterDescriptor {
enum BuiltinCounterType : int32_t {
  COUNTER_UNSPECIFIED = 0,
  COUNTER_THREAD_TIME_NS = 1,
  COUNTER_THREAD_INSTRUCTION_COUNT = 2,
};
} // namespace perfetto_pbzero_enum_CounterDescriptor
using CounterDescriptor_BuiltinCounterType = perfetto_pbzero_enum_CounterDescriptor::BuiltinCounterType;


constexpr CounterDescriptor_BuiltinCounterType CounterDescriptor_BuiltinCounterType_MIN = CounterDescriptor_BuiltinCounterType::COUNTER_UNSPECIFIED;
constexpr CounterDescriptor_BuiltinCounterType CounterDescriptor_BuiltinCounterType_MAX = CounterDescriptor_BuiltinCounterType::COUNTER_THREAD_INSTRUCTION_COUNT;


PERFETTO_PROTOZERO_CONSTEXPR14_OR_INLINE
const char* CounterDescriptor_BuiltinCounterType_Name(::perfetto::protos::pbzero::CounterDescriptor_BuiltinCounterType value) {
  switch (value) {
  case ::perfetto::protos::pbzero::CounterDescriptor_BuiltinCounterType::COUNTER_UNSPECIFIED:
    return "COUNTER_UNSPECIFIED";

  case ::perfetto::protos::pbzero::CounterDescriptor_BuiltinCounterType::COUNTER_THREAD_TIME_NS:
    return "COUNTER_THREAD_TIME_NS";

  case ::perfetto::protos::pbzero::CounterDescriptor_BuiltinCounterType::COUNTER_THREAD_INSTRUCTION_COUNT:
    return "COUNTER_THREAD_INSTRUCTION_COUNT";
  }
  return "PBZERO_UNKNOWN_ENUM_VALUE";
}

namespace perfetto_pbzero_enum_CounterDescriptor {
enum Unit : int32_t {
  UNIT_UNSPECIFIED = 0,
  UNIT_TIME_NS = 1,
  UNIT_COUNT = 2,
  UNIT_SIZE_BYTES = 3,
};
} // namespace perfetto_pbzero_enum_CounterDescriptor
using CounterDescriptor_Unit = perfetto_pbzero_enum_CounterDescriptor::Unit;


constexpr CounterDescriptor_Unit CounterDescriptor_Unit_MIN = CounterDescriptor_Unit::UNIT_UNSPECIFIED;
constexpr CounterDescriptor_Unit CounterDescriptor_Unit_MAX = CounterDescriptor_Unit::UNIT_SIZE_BYTES;


PERFETTO_PROTOZERO_CONSTEXPR14_OR_INLINE
const char* CounterDescriptor_Unit_Name(::perfetto::protos::pbzero::CounterDescriptor_Unit value) {
  switch (value) {
  case ::perfetto::protos::pbzero::CounterDescriptor_Unit::UNIT_UNSPECIFIED:
    return "UNIT_UNSPECIFIED";

  case ::perfetto::protos::pbzero::CounterDescriptor_Unit::UNIT_TIME_NS:
    return "UNIT_TIME_NS";

  case ::perfetto::protos::pbzero::CounterDescriptor_Unit::UNIT_COUNT:
    return "UNIT_COUNT";

  case ::perfetto::protos::pbzero::CounterDescriptor_Unit::UNIT_SIZE_BYTES:
    return "UNIT_SIZE_BYTES";
  }
  return "PBZERO_UNKNOWN_ENUM_VALUE";
}

class CounterDescriptor_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/6, /*HAS_NONPACKED_REPEATED_FIELDS=*/true> {
 public:
  CounterDescriptor_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit CounterDescriptor_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit CounterDescriptor_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_type() const { return at<1>().valid(); }
  int32_t type() const { return at<1>().as_int32(); }
  bool has_categories() const { return at<2>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstChars> categories() const { return GetRepeated<::protozero::ConstChars>(2); }
  bool has_unit() const { return at<3>().valid(); }
  int32_t unit() const { return at<3>().as_int32(); }
  bool has_unit_name() const { return at<6>().valid(); }
  ::protozero::ConstChars unit_name() const { return at<6>().as_string(); }
  bool has_unit_multiplier() const { return at<4>().valid(); }
  int64_t unit_multiplier() const { return at<4>().as_int64(); }
  bool has_is_incremental() const { return at<5>().valid(); }
  bool is_incremental() const { return at<5>().as_bool(); }
};

class CounterDescriptor : public ::protozero::Message {
 public:
  using Decoder = CounterDescriptor_Decoder;
  enum : int32_t {
    kTypeFieldNumber = 1,
    kCategoriesFieldNumber = 2,
    kUnitFieldNumber = 3,
    kUnitNameFieldNumber = 6,
    kUnitMultiplierFieldNumber = 4,
    kIsIncrementalFieldNumber = 5,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.CounterDescriptor"; }


  using BuiltinCounterType = ::perfetto::protos::pbzero::CounterDescriptor_BuiltinCounterType;
  static inline const char* BuiltinCounterType_Name(BuiltinCounterType value) {
    return ::perfetto::protos::pbzero::CounterDescriptor_BuiltinCounterType_Name(value);
  }

  using Unit = ::perfetto::protos::pbzero::CounterDescriptor_Unit;
  static inline const char* Unit_Name(Unit value) {
    return ::perfetto::protos::pbzero::CounterDescriptor_Unit_Name(value);
  }
  static inline const BuiltinCounterType COUNTER_UNSPECIFIED = BuiltinCounterType::COUNTER_UNSPECIFIED;
  static inline const BuiltinCounterType COUNTER_THREAD_TIME_NS = BuiltinCounterType::COUNTER_THREAD_TIME_NS;
  static inline const BuiltinCounterType COUNTER_THREAD_INSTRUCTION_COUNT = BuiltinCounterType::COUNTER_THREAD_INSTRUCTION_COUNT;
  static inline const Unit UNIT_UNSPECIFIED = Unit::UNIT_UNSPECIFIED;
  static inline const Unit UNIT_TIME_NS = Unit::UNIT_TIME_NS;
  static inline const Unit UNIT_COUNT = Unit::UNIT_COUNT;
  static inline const Unit UNIT_SIZE_BYTES = Unit::UNIT_SIZE_BYTES;

  using FieldMetadata_Type =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kEnum,
      CounterDescriptor_BuiltinCounterType,
      CounterDescriptor>;

  static constexpr FieldMetadata_Type kType{};
  void set_type(CounterDescriptor_BuiltinCounterType value) {
    static constexpr uint32_t field_id = FieldMetadata_Type::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kEnum>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Categories =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kRepeatedNotPacked,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      CounterDescriptor>;

  static constexpr FieldMetadata_Categories kCategories{};
  void add_categories(const char* data, size_t size) {
    AppendBytes(FieldMetadata_Categories::kFieldId, data, size);
  }
  void add_categories(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_Categories::kFieldId, chars.data, chars.size);
  }
  void add_categories(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_Categories::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Unit =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kEnum,
      CounterDescriptor_Unit,
      CounterDescriptor>;

  static constexpr FieldMetadata_Unit kUnit{};
  void set_unit(CounterDescriptor_Unit value) {
    static constexpr uint32_t field_id = FieldMetadata_Unit::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kEnum>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_UnitName =
    ::protozero::proto_utils::FieldMetadata<
      6,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      CounterDescriptor>;

  static constexpr FieldMetadata_UnitName kUnitName{};
  void set_unit_name(const char* data, size_t size) {
    AppendBytes(FieldMetadata_UnitName::kFieldId, data, size);
  }
  void set_unit_name(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_UnitName::kFieldId, chars.data, chars.size);
  }
  void set_unit_name(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_UnitName::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_UnitMultiplier =
    ::protozero::proto_utils::FieldMetadata<
      4,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt64,
      int64_t,
      CounterDescriptor>;

  static constexpr FieldMetadata_UnitMultiplier kUnitMultiplier{};
  void set_unit_multiplier(int64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_UnitMultiplier::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_IsIncremental =
    ::protozero::proto_utils::FieldMetadata<
      5,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kBool,
      bool,
      CounterDescriptor>;

  static constexpr FieldMetadata_IsIncremental kIsIncremental{};
  void set_is_incremental(bool value) {
    static constexpr uint32_t field_id = FieldMetadata_IsIncremental::kFieldId;
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
