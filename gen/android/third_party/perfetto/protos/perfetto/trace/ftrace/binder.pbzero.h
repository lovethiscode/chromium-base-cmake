// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_BINDER_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_BINDER_PROTO_H_

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

class BinderReturnFtraceEvent_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/1, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  BinderReturnFtraceEvent_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit BinderReturnFtraceEvent_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit BinderReturnFtraceEvent_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_cmd() const { return at<1>().valid(); }
  uint32_t cmd() const { return at<1>().as_uint32(); }
};

class BinderReturnFtraceEvent : public ::protozero::Message {
 public:
  using Decoder = BinderReturnFtraceEvent_Decoder;
  enum : int32_t {
    kCmdFieldNumber = 1,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.BinderReturnFtraceEvent"; }


  using FieldMetadata_Cmd =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      BinderReturnFtraceEvent>;

  static constexpr FieldMetadata_Cmd kCmd{};
  void set_cmd(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Cmd::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }
};

class BinderCommandFtraceEvent_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/1, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  BinderCommandFtraceEvent_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit BinderCommandFtraceEvent_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit BinderCommandFtraceEvent_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_cmd() const { return at<1>().valid(); }
  uint32_t cmd() const { return at<1>().as_uint32(); }
};

class BinderCommandFtraceEvent : public ::protozero::Message {
 public:
  using Decoder = BinderCommandFtraceEvent_Decoder;
  enum : int32_t {
    kCmdFieldNumber = 1,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.BinderCommandFtraceEvent"; }


  using FieldMetadata_Cmd =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      BinderCommandFtraceEvent>;

  static constexpr FieldMetadata_Cmd kCmd{};
  void set_cmd(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Cmd::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }
};

class BinderTransactionAllocBufFtraceEvent_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/4, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  BinderTransactionAllocBufFtraceEvent_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit BinderTransactionAllocBufFtraceEvent_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit BinderTransactionAllocBufFtraceEvent_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_data_size() const { return at<1>().valid(); }
  uint64_t data_size() const { return at<1>().as_uint64(); }
  bool has_debug_id() const { return at<2>().valid(); }
  int32_t debug_id() const { return at<2>().as_int32(); }
  bool has_offsets_size() const { return at<3>().valid(); }
  uint64_t offsets_size() const { return at<3>().as_uint64(); }
  bool has_extra_buffers_size() const { return at<4>().valid(); }
  uint64_t extra_buffers_size() const { return at<4>().as_uint64(); }
};

class BinderTransactionAllocBufFtraceEvent : public ::protozero::Message {
 public:
  using Decoder = BinderTransactionAllocBufFtraceEvent_Decoder;
  enum : int32_t {
    kDataSizeFieldNumber = 1,
    kDebugIdFieldNumber = 2,
    kOffsetsSizeFieldNumber = 3,
    kExtraBuffersSizeFieldNumber = 4,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.BinderTransactionAllocBufFtraceEvent"; }


  using FieldMetadata_DataSize =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      BinderTransactionAllocBufFtraceEvent>;

  static constexpr FieldMetadata_DataSize kDataSize{};
  void set_data_size(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_DataSize::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_DebugId =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      BinderTransactionAllocBufFtraceEvent>;

  static constexpr FieldMetadata_DebugId kDebugId{};
  void set_debug_id(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_DebugId::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_OffsetsSize =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      BinderTransactionAllocBufFtraceEvent>;

  static constexpr FieldMetadata_OffsetsSize kOffsetsSize{};
  void set_offsets_size(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_OffsetsSize::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_ExtraBuffersSize =
    ::protozero::proto_utils::FieldMetadata<
      4,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      BinderTransactionAllocBufFtraceEvent>;

  static constexpr FieldMetadata_ExtraBuffersSize kExtraBuffersSize{};
  void set_extra_buffers_size(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_ExtraBuffersSize::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }
};

class BinderUnlockFtraceEvent_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/1, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  BinderUnlockFtraceEvent_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit BinderUnlockFtraceEvent_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit BinderUnlockFtraceEvent_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_tag() const { return at<1>().valid(); }
  ::protozero::ConstChars tag() const { return at<1>().as_string(); }
};

class BinderUnlockFtraceEvent : public ::protozero::Message {
 public:
  using Decoder = BinderUnlockFtraceEvent_Decoder;
  enum : int32_t {
    kTagFieldNumber = 1,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.BinderUnlockFtraceEvent"; }


  using FieldMetadata_Tag =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      BinderUnlockFtraceEvent>;

  static constexpr FieldMetadata_Tag kTag{};
  void set_tag(const char* data, size_t size) {
    AppendBytes(FieldMetadata_Tag::kFieldId, data, size);
  }
  void set_tag(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_Tag::kFieldId, chars.data, chars.size);
  }
  void set_tag(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_Tag::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }
};

class BinderLockedFtraceEvent_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/1, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  BinderLockedFtraceEvent_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit BinderLockedFtraceEvent_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit BinderLockedFtraceEvent_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_tag() const { return at<1>().valid(); }
  ::protozero::ConstChars tag() const { return at<1>().as_string(); }
};

class BinderLockedFtraceEvent : public ::protozero::Message {
 public:
  using Decoder = BinderLockedFtraceEvent_Decoder;
  enum : int32_t {
    kTagFieldNumber = 1,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.BinderLockedFtraceEvent"; }


  using FieldMetadata_Tag =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      BinderLockedFtraceEvent>;

  static constexpr FieldMetadata_Tag kTag{};
  void set_tag(const char* data, size_t size) {
    AppendBytes(FieldMetadata_Tag::kFieldId, data, size);
  }
  void set_tag(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_Tag::kFieldId, chars.data, chars.size);
  }
  void set_tag(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_Tag::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }
};

class BinderLockFtraceEvent_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/1, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  BinderLockFtraceEvent_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit BinderLockFtraceEvent_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit BinderLockFtraceEvent_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_tag() const { return at<1>().valid(); }
  ::protozero::ConstChars tag() const { return at<1>().as_string(); }
};

class BinderLockFtraceEvent : public ::protozero::Message {
 public:
  using Decoder = BinderLockFtraceEvent_Decoder;
  enum : int32_t {
    kTagFieldNumber = 1,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.BinderLockFtraceEvent"; }


  using FieldMetadata_Tag =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      BinderLockFtraceEvent>;

  static constexpr FieldMetadata_Tag kTag{};
  void set_tag(const char* data, size_t size) {
    AppendBytes(FieldMetadata_Tag::kFieldId, data, size);
  }
  void set_tag(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_Tag::kFieldId, chars.data, chars.size);
  }
  void set_tag(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_Tag::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }
};

class BinderSetPriorityFtraceEvent_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/5, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  BinderSetPriorityFtraceEvent_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit BinderSetPriorityFtraceEvent_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit BinderSetPriorityFtraceEvent_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_proc() const { return at<1>().valid(); }
  int32_t proc() const { return at<1>().as_int32(); }
  bool has_thread() const { return at<2>().valid(); }
  int32_t thread() const { return at<2>().as_int32(); }
  bool has_old_prio() const { return at<3>().valid(); }
  uint32_t old_prio() const { return at<3>().as_uint32(); }
  bool has_new_prio() const { return at<4>().valid(); }
  uint32_t new_prio() const { return at<4>().as_uint32(); }
  bool has_desired_prio() const { return at<5>().valid(); }
  uint32_t desired_prio() const { return at<5>().as_uint32(); }
};

class BinderSetPriorityFtraceEvent : public ::protozero::Message {
 public:
  using Decoder = BinderSetPriorityFtraceEvent_Decoder;
  enum : int32_t {
    kProcFieldNumber = 1,
    kThreadFieldNumber = 2,
    kOldPrioFieldNumber = 3,
    kNewPrioFieldNumber = 4,
    kDesiredPrioFieldNumber = 5,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.BinderSetPriorityFtraceEvent"; }


  using FieldMetadata_Proc =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      BinderSetPriorityFtraceEvent>;

  static constexpr FieldMetadata_Proc kProc{};
  void set_proc(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Proc::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Thread =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      BinderSetPriorityFtraceEvent>;

  static constexpr FieldMetadata_Thread kThread{};
  void set_thread(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Thread::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_OldPrio =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      BinderSetPriorityFtraceEvent>;

  static constexpr FieldMetadata_OldPrio kOldPrio{};
  void set_old_prio(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_OldPrio::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_NewPrio =
    ::protozero::proto_utils::FieldMetadata<
      4,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      BinderSetPriorityFtraceEvent>;

  static constexpr FieldMetadata_NewPrio kNewPrio{};
  void set_new_prio(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_NewPrio::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_DesiredPrio =
    ::protozero::proto_utils::FieldMetadata<
      5,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      BinderSetPriorityFtraceEvent>;

  static constexpr FieldMetadata_DesiredPrio kDesiredPrio{};
  void set_desired_prio(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_DesiredPrio::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }
};

class BinderTransactionReceivedFtraceEvent_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/1, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  BinderTransactionReceivedFtraceEvent_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit BinderTransactionReceivedFtraceEvent_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit BinderTransactionReceivedFtraceEvent_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_debug_id() const { return at<1>().valid(); }
  int32_t debug_id() const { return at<1>().as_int32(); }
};

class BinderTransactionReceivedFtraceEvent : public ::protozero::Message {
 public:
  using Decoder = BinderTransactionReceivedFtraceEvent_Decoder;
  enum : int32_t {
    kDebugIdFieldNumber = 1,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.BinderTransactionReceivedFtraceEvent"; }


  using FieldMetadata_DebugId =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      BinderTransactionReceivedFtraceEvent>;

  static constexpr FieldMetadata_DebugId kDebugId{};
  void set_debug_id(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_DebugId::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }
};

class BinderTransactionFtraceEvent_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/7, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  BinderTransactionFtraceEvent_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit BinderTransactionFtraceEvent_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit BinderTransactionFtraceEvent_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_debug_id() const { return at<1>().valid(); }
  int32_t debug_id() const { return at<1>().as_int32(); }
  bool has_target_node() const { return at<2>().valid(); }
  int32_t target_node() const { return at<2>().as_int32(); }
  bool has_to_proc() const { return at<3>().valid(); }
  int32_t to_proc() const { return at<3>().as_int32(); }
  bool has_to_thread() const { return at<4>().valid(); }
  int32_t to_thread() const { return at<4>().as_int32(); }
  bool has_reply() const { return at<5>().valid(); }
  int32_t reply() const { return at<5>().as_int32(); }
  bool has_code() const { return at<6>().valid(); }
  uint32_t code() const { return at<6>().as_uint32(); }
  bool has_flags() const { return at<7>().valid(); }
  uint32_t flags() const { return at<7>().as_uint32(); }
};

class BinderTransactionFtraceEvent : public ::protozero::Message {
 public:
  using Decoder = BinderTransactionFtraceEvent_Decoder;
  enum : int32_t {
    kDebugIdFieldNumber = 1,
    kTargetNodeFieldNumber = 2,
    kToProcFieldNumber = 3,
    kToThreadFieldNumber = 4,
    kReplyFieldNumber = 5,
    kCodeFieldNumber = 6,
    kFlagsFieldNumber = 7,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.BinderTransactionFtraceEvent"; }


  using FieldMetadata_DebugId =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      BinderTransactionFtraceEvent>;

  static constexpr FieldMetadata_DebugId kDebugId{};
  void set_debug_id(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_DebugId::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_TargetNode =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      BinderTransactionFtraceEvent>;

  static constexpr FieldMetadata_TargetNode kTargetNode{};
  void set_target_node(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_TargetNode::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_ToProc =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      BinderTransactionFtraceEvent>;

  static constexpr FieldMetadata_ToProc kToProc{};
  void set_to_proc(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_ToProc::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_ToThread =
    ::protozero::proto_utils::FieldMetadata<
      4,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      BinderTransactionFtraceEvent>;

  static constexpr FieldMetadata_ToThread kToThread{};
  void set_to_thread(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_ToThread::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Reply =
    ::protozero::proto_utils::FieldMetadata<
      5,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      BinderTransactionFtraceEvent>;

  static constexpr FieldMetadata_Reply kReply{};
  void set_reply(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Reply::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Code =
    ::protozero::proto_utils::FieldMetadata<
      6,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      BinderTransactionFtraceEvent>;

  static constexpr FieldMetadata_Code kCode{};
  void set_code(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Code::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Flags =
    ::protozero::proto_utils::FieldMetadata<
      7,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      BinderTransactionFtraceEvent>;

  static constexpr FieldMetadata_Flags kFlags{};
  void set_flags(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Flags::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
