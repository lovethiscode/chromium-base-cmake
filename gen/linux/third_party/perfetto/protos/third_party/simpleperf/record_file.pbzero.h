// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_THIRD_PARTY_SIMPLEPERF_PROTO_PROTOS_THIRD_PARTY_SIMPLEPERF_RECORD_FILE_PROTO_H_
#define PERFETTO_THIRD_PARTY_SIMPLEPERF_PROTO_PROTOS_THIRD_PARTY_SIMPLEPERF_RECORD_FILE_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/protozero/field_writer.h"
#include "perfetto/protozero/message.h"
#include "perfetto/protozero/packed_repeated_fields.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/proto_utils.h"

namespace perfetto {
namespace third_party {
namespace simpleperf {
namespace proto {
namespace pbzero {
class DebugUnwindFeature_File;
class FileFeature_DexFile;
class FileFeature_ElfFile;
class FileFeature_KernelModule;
class FileFeature_Symbol;
namespace perfetto_pbzero_enum_FileFeature {
enum DsoType : int32_t;
}  // namespace perfetto_pbzero_enum_FileFeature
using FileFeature_DsoType = perfetto_pbzero_enum_FileFeature::DsoType;
} // Namespace pbzero.
} // Namespace proto.
} // Namespace simpleperf.
} // Namespace third_party.
} // Namespace perfetto.

namespace perfetto {
namespace third_party {
namespace simpleperf {
namespace proto {
namespace pbzero {

namespace perfetto_pbzero_enum_FileFeature {
enum DsoType : int32_t {
  DSO_KERNEL = 0,
  DSO_KERNEL_MODULE = 1,
  DSO_ELF_FILE = 2,
  DSO_DEX_FILE = 3,
  DSO_SYMBOL_MAP_FILE = 4,
  DSO_UNKNOWN_FILE = 5,
};
} // namespace perfetto_pbzero_enum_FileFeature
using FileFeature_DsoType = perfetto_pbzero_enum_FileFeature::DsoType;


constexpr FileFeature_DsoType FileFeature_DsoType_MIN = FileFeature_DsoType::DSO_KERNEL;
constexpr FileFeature_DsoType FileFeature_DsoType_MAX = FileFeature_DsoType::DSO_UNKNOWN_FILE;


PERFETTO_PROTOZERO_CONSTEXPR14_OR_INLINE
const char* FileFeature_DsoType_Name(::perfetto::third_party::simpleperf::proto::pbzero::FileFeature_DsoType value) {
  switch (value) {
  case ::perfetto::third_party::simpleperf::proto::pbzero::FileFeature_DsoType::DSO_KERNEL:
    return "DSO_KERNEL";

  case ::perfetto::third_party::simpleperf::proto::pbzero::FileFeature_DsoType::DSO_KERNEL_MODULE:
    return "DSO_KERNEL_MODULE";

  case ::perfetto::third_party::simpleperf::proto::pbzero::FileFeature_DsoType::DSO_ELF_FILE:
    return "DSO_ELF_FILE";

  case ::perfetto::third_party::simpleperf::proto::pbzero::FileFeature_DsoType::DSO_DEX_FILE:
    return "DSO_DEX_FILE";

  case ::perfetto::third_party::simpleperf::proto::pbzero::FileFeature_DsoType::DSO_SYMBOL_MAP_FILE:
    return "DSO_SYMBOL_MAP_FILE";

  case ::perfetto::third_party::simpleperf::proto::pbzero::FileFeature_DsoType::DSO_UNKNOWN_FILE:
    return "DSO_UNKNOWN_FILE";
  }
  return "PBZERO_UNKNOWN_ENUM_VALUE";
}

class FileFeature_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/7, /*HAS_NONPACKED_REPEATED_FIELDS=*/true> {
 public:
  FileFeature_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit FileFeature_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit FileFeature_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_path() const { return at<1>().valid(); }
  ::protozero::ConstChars path() const { return at<1>().as_string(); }
  bool has_type() const { return at<2>().valid(); }
  int32_t type() const { return at<2>().as_int32(); }
  bool has_min_vaddr() const { return at<3>().valid(); }
  uint64_t min_vaddr() const { return at<3>().as_uint64(); }
  bool has_symbol() const { return at<4>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstBytes> symbol() const { return GetRepeated<::protozero::ConstBytes>(4); }
  bool has_dex_file() const { return at<5>().valid(); }
  ::protozero::ConstBytes dex_file() const { return at<5>().as_bytes(); }
  bool has_elf_file() const { return at<6>().valid(); }
  ::protozero::ConstBytes elf_file() const { return at<6>().as_bytes(); }
  bool has_kernel_module() const { return at<7>().valid(); }
  ::protozero::ConstBytes kernel_module() const { return at<7>().as_bytes(); }
};

class FileFeature : public ::protozero::Message {
 public:
  using Decoder = FileFeature_Decoder;
  enum : int32_t {
    kPathFieldNumber = 1,
    kTypeFieldNumber = 2,
    kMinVaddrFieldNumber = 3,
    kSymbolFieldNumber = 4,
    kDexFileFieldNumber = 5,
    kElfFileFieldNumber = 6,
    kKernelModuleFieldNumber = 7,
  };
  static constexpr const char* GetName() { return ".perfetto.third_party.simpleperf.proto.FileFeature"; }

  using Symbol = ::perfetto::third_party::simpleperf::proto::pbzero::FileFeature_Symbol;
  using DexFile = ::perfetto::third_party::simpleperf::proto::pbzero::FileFeature_DexFile;
  using ElfFile = ::perfetto::third_party::simpleperf::proto::pbzero::FileFeature_ElfFile;
  using KernelModule = ::perfetto::third_party::simpleperf::proto::pbzero::FileFeature_KernelModule;

  using DsoType = ::perfetto::third_party::simpleperf::proto::pbzero::FileFeature_DsoType;
  static inline const char* DsoType_Name(DsoType value) {
    return ::perfetto::third_party::simpleperf::proto::pbzero::FileFeature_DsoType_Name(value);
  }
  static inline const DsoType DSO_KERNEL = DsoType::DSO_KERNEL;
  static inline const DsoType DSO_KERNEL_MODULE = DsoType::DSO_KERNEL_MODULE;
  static inline const DsoType DSO_ELF_FILE = DsoType::DSO_ELF_FILE;
  static inline const DsoType DSO_DEX_FILE = DsoType::DSO_DEX_FILE;
  static inline const DsoType DSO_SYMBOL_MAP_FILE = DsoType::DSO_SYMBOL_MAP_FILE;
  static inline const DsoType DSO_UNKNOWN_FILE = DsoType::DSO_UNKNOWN_FILE;

  using FieldMetadata_Path =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      FileFeature>;

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

  using FieldMetadata_Type =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kEnum,
      FileFeature_DsoType,
      FileFeature>;

  static constexpr FieldMetadata_Type kType{};
  void set_type(FileFeature_DsoType value) {
    static constexpr uint32_t field_id = FieldMetadata_Type::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kEnum>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_MinVaddr =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      FileFeature>;

  static constexpr FieldMetadata_MinVaddr kMinVaddr{};
  void set_min_vaddr(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_MinVaddr::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Symbol =
    ::protozero::proto_utils::FieldMetadata<
      4,
      ::protozero::proto_utils::RepetitionType::kRepeatedNotPacked,
      ::protozero::proto_utils::ProtoSchemaType::kMessage,
      FileFeature_Symbol,
      FileFeature>;

  static constexpr FieldMetadata_Symbol kSymbol{};
  template <typename T = FileFeature_Symbol> T* add_symbol() {
    return BeginNestedMessage<T>(4);
  }


  using FieldMetadata_DexFile =
    ::protozero::proto_utils::FieldMetadata<
      5,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kMessage,
      FileFeature_DexFile,
      FileFeature>;

  static constexpr FieldMetadata_DexFile kDexFile{};
  template <typename T = FileFeature_DexFile> T* set_dex_file() {
    return BeginNestedMessage<T>(5);
  }


  using FieldMetadata_ElfFile =
    ::protozero::proto_utils::FieldMetadata<
      6,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kMessage,
      FileFeature_ElfFile,
      FileFeature>;

  static constexpr FieldMetadata_ElfFile kElfFile{};
  template <typename T = FileFeature_ElfFile> T* set_elf_file() {
    return BeginNestedMessage<T>(6);
  }


  using FieldMetadata_KernelModule =
    ::protozero::proto_utils::FieldMetadata<
      7,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kMessage,
      FileFeature_KernelModule,
      FileFeature>;

  static constexpr FieldMetadata_KernelModule kKernelModule{};
  template <typename T = FileFeature_KernelModule> T* set_kernel_module() {
    return BeginNestedMessage<T>(7);
  }

};

class FileFeature_KernelModule_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/1, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  FileFeature_KernelModule_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit FileFeature_KernelModule_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit FileFeature_KernelModule_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_memory_offset_of_min_vaddr() const { return at<1>().valid(); }
  uint64_t memory_offset_of_min_vaddr() const { return at<1>().as_uint64(); }
};

class FileFeature_KernelModule : public ::protozero::Message {
 public:
  using Decoder = FileFeature_KernelModule_Decoder;
  enum : int32_t {
    kMemoryOffsetOfMinVaddrFieldNumber = 1,
  };
  static constexpr const char* GetName() { return ".perfetto.third_party.simpleperf.proto.FileFeature.KernelModule"; }


  using FieldMetadata_MemoryOffsetOfMinVaddr =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      FileFeature_KernelModule>;

  static constexpr FieldMetadata_MemoryOffsetOfMinVaddr kMemoryOffsetOfMinVaddr{};
  void set_memory_offset_of_min_vaddr(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_MemoryOffsetOfMinVaddr::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }
};

class FileFeature_ElfFile_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/1, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  FileFeature_ElfFile_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit FileFeature_ElfFile_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit FileFeature_ElfFile_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_file_offset_of_min_vaddr() const { return at<1>().valid(); }
  uint64_t file_offset_of_min_vaddr() const { return at<1>().as_uint64(); }
};

class FileFeature_ElfFile : public ::protozero::Message {
 public:
  using Decoder = FileFeature_ElfFile_Decoder;
  enum : int32_t {
    kFileOffsetOfMinVaddrFieldNumber = 1,
  };
  static constexpr const char* GetName() { return ".perfetto.third_party.simpleperf.proto.FileFeature.ElfFile"; }


  using FieldMetadata_FileOffsetOfMinVaddr =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      FileFeature_ElfFile>;

  static constexpr FieldMetadata_FileOffsetOfMinVaddr kFileOffsetOfMinVaddr{};
  void set_file_offset_of_min_vaddr(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_FileOffsetOfMinVaddr::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }
};

class FileFeature_DexFile_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/1, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  FileFeature_DexFile_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit FileFeature_DexFile_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit FileFeature_DexFile_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_dex_file_offset() const { return at<1>().valid(); }
  ::protozero::PackedRepeatedFieldIterator<::protozero::proto_utils::ProtoWireType::kVarInt, uint64_t> dex_file_offset(bool* parse_error_ptr) const { return GetPackedRepeated<::protozero::proto_utils::ProtoWireType::kVarInt, uint64_t>(1, parse_error_ptr); }
};

class FileFeature_DexFile : public ::protozero::Message {
 public:
  using Decoder = FileFeature_DexFile_Decoder;
  enum : int32_t {
    kDexFileOffsetFieldNumber = 1,
  };
  static constexpr const char* GetName() { return ".perfetto.third_party.simpleperf.proto.FileFeature.DexFile"; }


  using FieldMetadata_DexFileOffset =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kRepeatedPacked,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      FileFeature_DexFile>;

  static constexpr FieldMetadata_DexFileOffset kDexFileOffset{};
  void set_dex_file_offset(const ::protozero::PackedVarInt& packed_buffer) {
    AppendBytes(FieldMetadata_DexFileOffset::kFieldId, packed_buffer.data(),
                packed_buffer.size());
  }
};

class FileFeature_Symbol_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/3, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  FileFeature_Symbol_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit FileFeature_Symbol_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit FileFeature_Symbol_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_vaddr() const { return at<1>().valid(); }
  uint64_t vaddr() const { return at<1>().as_uint64(); }
  bool has_len() const { return at<2>().valid(); }
  uint32_t len() const { return at<2>().as_uint32(); }
  bool has_name() const { return at<3>().valid(); }
  ::protozero::ConstChars name() const { return at<3>().as_string(); }
};

class FileFeature_Symbol : public ::protozero::Message {
 public:
  using Decoder = FileFeature_Symbol_Decoder;
  enum : int32_t {
    kVaddrFieldNumber = 1,
    kLenFieldNumber = 2,
    kNameFieldNumber = 3,
  };
  static constexpr const char* GetName() { return ".perfetto.third_party.simpleperf.proto.FileFeature.Symbol"; }


  using FieldMetadata_Vaddr =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      FileFeature_Symbol>;

  static constexpr FieldMetadata_Vaddr kVaddr{};
  void set_vaddr(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Vaddr::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Len =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      FileFeature_Symbol>;

  static constexpr FieldMetadata_Len kLen{};
  void set_len(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Len::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Name =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      FileFeature_Symbol>;

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

class DebugUnwindFeature_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/1, /*HAS_NONPACKED_REPEATED_FIELDS=*/true> {
 public:
  DebugUnwindFeature_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit DebugUnwindFeature_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit DebugUnwindFeature_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_file() const { return at<1>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstBytes> file() const { return GetRepeated<::protozero::ConstBytes>(1); }
};

class DebugUnwindFeature : public ::protozero::Message {
 public:
  using Decoder = DebugUnwindFeature_Decoder;
  enum : int32_t {
    kFileFieldNumber = 1,
  };
  static constexpr const char* GetName() { return ".perfetto.third_party.simpleperf.proto.DebugUnwindFeature"; }

  using File = ::perfetto::third_party::simpleperf::proto::pbzero::DebugUnwindFeature_File;

  using FieldMetadata_File =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kRepeatedNotPacked,
      ::protozero::proto_utils::ProtoSchemaType::kMessage,
      DebugUnwindFeature_File,
      DebugUnwindFeature>;

  static constexpr FieldMetadata_File kFile{};
  template <typename T = DebugUnwindFeature_File> T* add_file() {
    return BeginNestedMessage<T>(1);
  }

};

class DebugUnwindFeature_File_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/2, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  DebugUnwindFeature_File_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit DebugUnwindFeature_File_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit DebugUnwindFeature_File_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_path() const { return at<1>().valid(); }
  ::protozero::ConstChars path() const { return at<1>().as_string(); }
  bool has_size() const { return at<2>().valid(); }
  uint64_t size() const { return at<2>().as_uint64(); }
};

class DebugUnwindFeature_File : public ::protozero::Message {
 public:
  using Decoder = DebugUnwindFeature_File_Decoder;
  enum : int32_t {
    kPathFieldNumber = 1,
    kSizeFieldNumber = 2,
  };
  static constexpr const char* GetName() { return ".perfetto.third_party.simpleperf.proto.DebugUnwindFeature.File"; }


  using FieldMetadata_Path =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      DebugUnwindFeature_File>;

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

  using FieldMetadata_Size =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      DebugUnwindFeature_File>;

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
} // Namespace.
} // Namespace.
#endif  // Include guard.
