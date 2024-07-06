// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_PROFILING_SMAPS_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_PROFILING_SMAPS_PROTO_H_

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
class SmapsEntry;
} // Namespace pbzero.
} // Namespace protos.
} // Namespace perfetto.

namespace perfetto {
namespace protos {
namespace pbzero {

class SmapsPacket_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/2, /*HAS_NONPACKED_REPEATED_FIELDS=*/true> {
 public:
  SmapsPacket_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit SmapsPacket_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit SmapsPacket_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_pid() const { return at<1>().valid(); }
  uint32_t pid() const { return at<1>().as_uint32(); }
  bool has_entries() const { return at<2>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstBytes> entries() const { return GetRepeated<::protozero::ConstBytes>(2); }
};

class SmapsPacket : public ::protozero::Message {
 public:
  using Decoder = SmapsPacket_Decoder;
  enum : int32_t {
    kPidFieldNumber = 1,
    kEntriesFieldNumber = 2,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.SmapsPacket"; }


  using FieldMetadata_Pid =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      SmapsPacket>;

  static constexpr FieldMetadata_Pid kPid{};
  void set_pid(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Pid::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Entries =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kRepeatedNotPacked,
      ::protozero::proto_utils::ProtoSchemaType::kMessage,
      SmapsEntry,
      SmapsPacket>;

  static constexpr FieldMetadata_Entries kEntries{};
  template <typename T = SmapsEntry> T* add_entries() {
    return BeginNestedMessage<T>(2);
  }

};

class SmapsEntry_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/15, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  SmapsEntry_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit SmapsEntry_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit SmapsEntry_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_path() const { return at<1>().valid(); }
  ::protozero::ConstChars path() const { return at<1>().as_string(); }
  bool has_size_kb() const { return at<2>().valid(); }
  uint64_t size_kb() const { return at<2>().as_uint64(); }
  bool has_private_dirty_kb() const { return at<3>().valid(); }
  uint64_t private_dirty_kb() const { return at<3>().as_uint64(); }
  bool has_swap_kb() const { return at<4>().valid(); }
  uint64_t swap_kb() const { return at<4>().as_uint64(); }
  bool has_file_name() const { return at<5>().valid(); }
  ::protozero::ConstChars file_name() const { return at<5>().as_string(); }
  bool has_start_address() const { return at<6>().valid(); }
  uint64_t start_address() const { return at<6>().as_uint64(); }
  bool has_module_timestamp() const { return at<7>().valid(); }
  uint64_t module_timestamp() const { return at<7>().as_uint64(); }
  bool has_module_debugid() const { return at<8>().valid(); }
  ::protozero::ConstChars module_debugid() const { return at<8>().as_string(); }
  bool has_module_debug_path() const { return at<9>().valid(); }
  ::protozero::ConstChars module_debug_path() const { return at<9>().as_string(); }
  bool has_protection_flags() const { return at<10>().valid(); }
  uint32_t protection_flags() const { return at<10>().as_uint32(); }
  bool has_private_clean_resident_kb() const { return at<11>().valid(); }
  uint64_t private_clean_resident_kb() const { return at<11>().as_uint64(); }
  bool has_shared_dirty_resident_kb() const { return at<12>().valid(); }
  uint64_t shared_dirty_resident_kb() const { return at<12>().as_uint64(); }
  bool has_shared_clean_resident_kb() const { return at<13>().valid(); }
  uint64_t shared_clean_resident_kb() const { return at<13>().as_uint64(); }
  bool has_locked_kb() const { return at<14>().valid(); }
  uint64_t locked_kb() const { return at<14>().as_uint64(); }
  bool has_proportional_resident_kb() const { return at<15>().valid(); }
  uint64_t proportional_resident_kb() const { return at<15>().as_uint64(); }
};

class SmapsEntry : public ::protozero::Message {
 public:
  using Decoder = SmapsEntry_Decoder;
  enum : int32_t {
    kPathFieldNumber = 1,
    kSizeKbFieldNumber = 2,
    kPrivateDirtyKbFieldNumber = 3,
    kSwapKbFieldNumber = 4,
    kFileNameFieldNumber = 5,
    kStartAddressFieldNumber = 6,
    kModuleTimestampFieldNumber = 7,
    kModuleDebugidFieldNumber = 8,
    kModuleDebugPathFieldNumber = 9,
    kProtectionFlagsFieldNumber = 10,
    kPrivateCleanResidentKbFieldNumber = 11,
    kSharedDirtyResidentKbFieldNumber = 12,
    kSharedCleanResidentKbFieldNumber = 13,
    kLockedKbFieldNumber = 14,
    kProportionalResidentKbFieldNumber = 15,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.SmapsEntry"; }


  using FieldMetadata_Path =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      SmapsEntry>;

  static constexpr FieldMetadata_Path kPath{};
  void set_path(const char* data, size_t size) {
    AppendBytes(FieldMetadata_Path::kFieldId, data, size);
  }
  void set_path(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_Path::kFieldId, chars.data, chars.size);
  }
  void set_path(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_Path::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_SizeKb =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      SmapsEntry>;

  static constexpr FieldMetadata_SizeKb kSizeKb{};
  void set_size_kb(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_SizeKb::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_PrivateDirtyKb =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      SmapsEntry>;

  static constexpr FieldMetadata_PrivateDirtyKb kPrivateDirtyKb{};
  void set_private_dirty_kb(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_PrivateDirtyKb::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_SwapKb =
    ::protozero::proto_utils::FieldMetadata<
      4,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      SmapsEntry>;

  static constexpr FieldMetadata_SwapKb kSwapKb{};
  void set_swap_kb(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_SwapKb::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_FileName =
    ::protozero::proto_utils::FieldMetadata<
      5,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      SmapsEntry>;

  static constexpr FieldMetadata_FileName kFileName{};
  void set_file_name(const char* data, size_t size) {
    AppendBytes(FieldMetadata_FileName::kFieldId, data, size);
  }
  void set_file_name(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_FileName::kFieldId, chars.data, chars.size);
  }
  void set_file_name(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_FileName::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_StartAddress =
    ::protozero::proto_utils::FieldMetadata<
      6,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      SmapsEntry>;

  static constexpr FieldMetadata_StartAddress kStartAddress{};
  void set_start_address(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_StartAddress::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_ModuleTimestamp =
    ::protozero::proto_utils::FieldMetadata<
      7,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      SmapsEntry>;

  static constexpr FieldMetadata_ModuleTimestamp kModuleTimestamp{};
  void set_module_timestamp(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_ModuleTimestamp::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_ModuleDebugid =
    ::protozero::proto_utils::FieldMetadata<
      8,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      SmapsEntry>;

  static constexpr FieldMetadata_ModuleDebugid kModuleDebugid{};
  void set_module_debugid(const char* data, size_t size) {
    AppendBytes(FieldMetadata_ModuleDebugid::kFieldId, data, size);
  }
  void set_module_debugid(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_ModuleDebugid::kFieldId, chars.data, chars.size);
  }
  void set_module_debugid(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_ModuleDebugid::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_ModuleDebugPath =
    ::protozero::proto_utils::FieldMetadata<
      9,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      SmapsEntry>;

  static constexpr FieldMetadata_ModuleDebugPath kModuleDebugPath{};
  void set_module_debug_path(const char* data, size_t size) {
    AppendBytes(FieldMetadata_ModuleDebugPath::kFieldId, data, size);
  }
  void set_module_debug_path(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_ModuleDebugPath::kFieldId, chars.data, chars.size);
  }
  void set_module_debug_path(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_ModuleDebugPath::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_ProtectionFlags =
    ::protozero::proto_utils::FieldMetadata<
      10,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      SmapsEntry>;

  static constexpr FieldMetadata_ProtectionFlags kProtectionFlags{};
  void set_protection_flags(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_ProtectionFlags::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_PrivateCleanResidentKb =
    ::protozero::proto_utils::FieldMetadata<
      11,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      SmapsEntry>;

  static constexpr FieldMetadata_PrivateCleanResidentKb kPrivateCleanResidentKb{};
  void set_private_clean_resident_kb(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_PrivateCleanResidentKb::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_SharedDirtyResidentKb =
    ::protozero::proto_utils::FieldMetadata<
      12,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      SmapsEntry>;

  static constexpr FieldMetadata_SharedDirtyResidentKb kSharedDirtyResidentKb{};
  void set_shared_dirty_resident_kb(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_SharedDirtyResidentKb::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_SharedCleanResidentKb =
    ::protozero::proto_utils::FieldMetadata<
      13,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      SmapsEntry>;

  static constexpr FieldMetadata_SharedCleanResidentKb kSharedCleanResidentKb{};
  void set_shared_clean_resident_kb(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_SharedCleanResidentKb::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_LockedKb =
    ::protozero::proto_utils::FieldMetadata<
      14,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      SmapsEntry>;

  static constexpr FieldMetadata_LockedKb kLockedKb{};
  void set_locked_kb(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_LockedKb::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_ProportionalResidentKb =
    ::protozero::proto_utils::FieldMetadata<
      15,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      SmapsEntry>;

  static constexpr FieldMetadata_ProportionalResidentKb kProportionalResidentKb{};
  void set_proportional_resident_kb(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_ProportionalResidentKb::kFieldId;
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
