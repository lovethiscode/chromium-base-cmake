// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_FASTRPC_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_FASTRPC_PROTO_H_

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

class FastrpcDmaMapFtraceEvent_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/7, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  FastrpcDmaMapFtraceEvent_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit FastrpcDmaMapFtraceEvent_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit FastrpcDmaMapFtraceEvent_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_cid() const { return at<1>().valid(); }
  int32_t cid() const { return at<1>().as_int32(); }
  bool has_fd() const { return at<2>().valid(); }
  int32_t fd() const { return at<2>().as_int32(); }
  bool has_phys() const { return at<3>().valid(); }
  uint64_t phys() const { return at<3>().as_uint64(); }
  bool has_size() const { return at<4>().valid(); }
  uint64_t size() const { return at<4>().as_uint64(); }
  bool has_len() const { return at<5>().valid(); }
  uint64_t len() const { return at<5>().as_uint64(); }
  bool has_attr() const { return at<6>().valid(); }
  uint32_t attr() const { return at<6>().as_uint32(); }
  bool has_mflags() const { return at<7>().valid(); }
  int32_t mflags() const { return at<7>().as_int32(); }
};

class FastrpcDmaMapFtraceEvent : public ::protozero::Message {
 public:
  using Decoder = FastrpcDmaMapFtraceEvent_Decoder;
  enum : int32_t {
    kCidFieldNumber = 1,
    kFdFieldNumber = 2,
    kPhysFieldNumber = 3,
    kSizeFieldNumber = 4,
    kLenFieldNumber = 5,
    kAttrFieldNumber = 6,
    kMflagsFieldNumber = 7,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.FastrpcDmaMapFtraceEvent"; }


  using FieldMetadata_Cid =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      FastrpcDmaMapFtraceEvent>;

  static constexpr FieldMetadata_Cid kCid{};
  void set_cid(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Cid::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Fd =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      FastrpcDmaMapFtraceEvent>;

  static constexpr FieldMetadata_Fd kFd{};
  void set_fd(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Fd::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Phys =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      FastrpcDmaMapFtraceEvent>;

  static constexpr FieldMetadata_Phys kPhys{};
  void set_phys(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Phys::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Size =
    ::protozero::proto_utils::FieldMetadata<
      4,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      FastrpcDmaMapFtraceEvent>;

  static constexpr FieldMetadata_Size kSize{};
  void set_size(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Size::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Len =
    ::protozero::proto_utils::FieldMetadata<
      5,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      FastrpcDmaMapFtraceEvent>;

  static constexpr FieldMetadata_Len kLen{};
  void set_len(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Len::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Attr =
    ::protozero::proto_utils::FieldMetadata<
      6,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      FastrpcDmaMapFtraceEvent>;

  static constexpr FieldMetadata_Attr kAttr{};
  void set_attr(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Attr::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Mflags =
    ::protozero::proto_utils::FieldMetadata<
      7,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      FastrpcDmaMapFtraceEvent>;

  static constexpr FieldMetadata_Mflags kMflags{};
  void set_mflags(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Mflags::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }
};

class FastrpcDmaUnmapFtraceEvent_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/3, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  FastrpcDmaUnmapFtraceEvent_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit FastrpcDmaUnmapFtraceEvent_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit FastrpcDmaUnmapFtraceEvent_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_cid() const { return at<1>().valid(); }
  int32_t cid() const { return at<1>().as_int32(); }
  bool has_phys() const { return at<2>().valid(); }
  uint64_t phys() const { return at<2>().as_uint64(); }
  bool has_size() const { return at<3>().valid(); }
  uint64_t size() const { return at<3>().as_uint64(); }
};

class FastrpcDmaUnmapFtraceEvent : public ::protozero::Message {
 public:
  using Decoder = FastrpcDmaUnmapFtraceEvent_Decoder;
  enum : int32_t {
    kCidFieldNumber = 1,
    kPhysFieldNumber = 2,
    kSizeFieldNumber = 3,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.FastrpcDmaUnmapFtraceEvent"; }


  using FieldMetadata_Cid =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      FastrpcDmaUnmapFtraceEvent>;

  static constexpr FieldMetadata_Cid kCid{};
  void set_cid(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Cid::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Phys =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      FastrpcDmaUnmapFtraceEvent>;

  static constexpr FieldMetadata_Phys kPhys{};
  void set_phys(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Phys::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Size =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      FastrpcDmaUnmapFtraceEvent>;

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

class FastrpcDmaAllocFtraceEvent_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/5, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  FastrpcDmaAllocFtraceEvent_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit FastrpcDmaAllocFtraceEvent_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit FastrpcDmaAllocFtraceEvent_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_cid() const { return at<1>().valid(); }
  int32_t cid() const { return at<1>().as_int32(); }
  bool has_phys() const { return at<2>().valid(); }
  uint64_t phys() const { return at<2>().as_uint64(); }
  bool has_size() const { return at<3>().valid(); }
  uint64_t size() const { return at<3>().as_uint64(); }
  bool has_attr() const { return at<4>().valid(); }
  uint64_t attr() const { return at<4>().as_uint64(); }
  bool has_mflags() const { return at<5>().valid(); }
  int32_t mflags() const { return at<5>().as_int32(); }
};

class FastrpcDmaAllocFtraceEvent : public ::protozero::Message {
 public:
  using Decoder = FastrpcDmaAllocFtraceEvent_Decoder;
  enum : int32_t {
    kCidFieldNumber = 1,
    kPhysFieldNumber = 2,
    kSizeFieldNumber = 3,
    kAttrFieldNumber = 4,
    kMflagsFieldNumber = 5,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.FastrpcDmaAllocFtraceEvent"; }


  using FieldMetadata_Cid =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      FastrpcDmaAllocFtraceEvent>;

  static constexpr FieldMetadata_Cid kCid{};
  void set_cid(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Cid::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Phys =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      FastrpcDmaAllocFtraceEvent>;

  static constexpr FieldMetadata_Phys kPhys{};
  void set_phys(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Phys::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Size =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      FastrpcDmaAllocFtraceEvent>;

  static constexpr FieldMetadata_Size kSize{};
  void set_size(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Size::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Attr =
    ::protozero::proto_utils::FieldMetadata<
      4,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      FastrpcDmaAllocFtraceEvent>;

  static constexpr FieldMetadata_Attr kAttr{};
  void set_attr(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Attr::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Mflags =
    ::protozero::proto_utils::FieldMetadata<
      5,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      FastrpcDmaAllocFtraceEvent>;

  static constexpr FieldMetadata_Mflags kMflags{};
  void set_mflags(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Mflags::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }
};

class FastrpcDmaFreeFtraceEvent_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/3, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  FastrpcDmaFreeFtraceEvent_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit FastrpcDmaFreeFtraceEvent_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit FastrpcDmaFreeFtraceEvent_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_cid() const { return at<1>().valid(); }
  int32_t cid() const { return at<1>().as_int32(); }
  bool has_phys() const { return at<2>().valid(); }
  uint64_t phys() const { return at<2>().as_uint64(); }
  bool has_size() const { return at<3>().valid(); }
  uint64_t size() const { return at<3>().as_uint64(); }
};

class FastrpcDmaFreeFtraceEvent : public ::protozero::Message {
 public:
  using Decoder = FastrpcDmaFreeFtraceEvent_Decoder;
  enum : int32_t {
    kCidFieldNumber = 1,
    kPhysFieldNumber = 2,
    kSizeFieldNumber = 3,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.FastrpcDmaFreeFtraceEvent"; }


  using FieldMetadata_Cid =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      FastrpcDmaFreeFtraceEvent>;

  static constexpr FieldMetadata_Cid kCid{};
  void set_cid(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Cid::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Phys =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      FastrpcDmaFreeFtraceEvent>;

  static constexpr FieldMetadata_Phys kPhys{};
  void set_phys(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Phys::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Size =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      FastrpcDmaFreeFtraceEvent>;

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

class FastrpcDmaStatFtraceEvent_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/3, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  FastrpcDmaStatFtraceEvent_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit FastrpcDmaStatFtraceEvent_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit FastrpcDmaStatFtraceEvent_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_cid() const { return at<1>().valid(); }
  int32_t cid() const { return at<1>().as_int32(); }
  bool has_len() const { return at<2>().valid(); }
  int64_t len() const { return at<2>().as_int64(); }
  bool has_total_allocated() const { return at<3>().valid(); }
  uint64_t total_allocated() const { return at<3>().as_uint64(); }
};

class FastrpcDmaStatFtraceEvent : public ::protozero::Message {
 public:
  using Decoder = FastrpcDmaStatFtraceEvent_Decoder;
  enum : int32_t {
    kCidFieldNumber = 1,
    kLenFieldNumber = 2,
    kTotalAllocatedFieldNumber = 3,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.FastrpcDmaStatFtraceEvent"; }


  using FieldMetadata_Cid =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      FastrpcDmaStatFtraceEvent>;

  static constexpr FieldMetadata_Cid kCid{};
  void set_cid(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Cid::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Len =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt64,
      int64_t,
      FastrpcDmaStatFtraceEvent>;

  static constexpr FieldMetadata_Len kLen{};
  void set_len(int64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Len::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_TotalAllocated =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      FastrpcDmaStatFtraceEvent>;

  static constexpr FieldMetadata_TotalAllocated kTotalAllocated{};
  void set_total_allocated(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_TotalAllocated::kFieldId;
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