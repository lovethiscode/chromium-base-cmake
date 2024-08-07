// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_CONFIG_ANDROID_NETWORK_TRACE_CONFIG_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_CONFIG_ANDROID_NETWORK_TRACE_CONFIG_PROTO_H_

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

class NetworkPacketTraceConfig_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/6, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  NetworkPacketTraceConfig_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit NetworkPacketTraceConfig_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit NetworkPacketTraceConfig_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_poll_ms() const { return at<1>().valid(); }
  uint32_t poll_ms() const { return at<1>().as_uint32(); }
  bool has_aggregation_threshold() const { return at<2>().valid(); }
  uint32_t aggregation_threshold() const { return at<2>().as_uint32(); }
  bool has_intern_limit() const { return at<3>().valid(); }
  uint32_t intern_limit() const { return at<3>().as_uint32(); }
  bool has_drop_local_port() const { return at<4>().valid(); }
  bool drop_local_port() const { return at<4>().as_bool(); }
  bool has_drop_remote_port() const { return at<5>().valid(); }
  bool drop_remote_port() const { return at<5>().as_bool(); }
  bool has_drop_tcp_flags() const { return at<6>().valid(); }
  bool drop_tcp_flags() const { return at<6>().as_bool(); }
};

class NetworkPacketTraceConfig : public ::protozero::Message {
 public:
  using Decoder = NetworkPacketTraceConfig_Decoder;
  enum : int32_t {
    kPollMsFieldNumber = 1,
    kAggregationThresholdFieldNumber = 2,
    kInternLimitFieldNumber = 3,
    kDropLocalPortFieldNumber = 4,
    kDropRemotePortFieldNumber = 5,
    kDropTcpFlagsFieldNumber = 6,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.NetworkPacketTraceConfig"; }


  using FieldMetadata_PollMs =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      NetworkPacketTraceConfig>;

  static constexpr FieldMetadata_PollMs kPollMs{};
  void set_poll_ms(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_PollMs::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_AggregationThreshold =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      NetworkPacketTraceConfig>;

  static constexpr FieldMetadata_AggregationThreshold kAggregationThreshold{};
  void set_aggregation_threshold(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_AggregationThreshold::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_InternLimit =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      NetworkPacketTraceConfig>;

  static constexpr FieldMetadata_InternLimit kInternLimit{};
  void set_intern_limit(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_InternLimit::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_DropLocalPort =
    ::protozero::proto_utils::FieldMetadata<
      4,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kBool,
      bool,
      NetworkPacketTraceConfig>;

  static constexpr FieldMetadata_DropLocalPort kDropLocalPort{};
  void set_drop_local_port(bool value) {
    static constexpr uint32_t field_id = FieldMetadata_DropLocalPort::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kBool>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_DropRemotePort =
    ::protozero::proto_utils::FieldMetadata<
      5,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kBool,
      bool,
      NetworkPacketTraceConfig>;

  static constexpr FieldMetadata_DropRemotePort kDropRemotePort{};
  void set_drop_remote_port(bool value) {
    static constexpr uint32_t field_id = FieldMetadata_DropRemotePort::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kBool>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_DropTcpFlags =
    ::protozero::proto_utils::FieldMetadata<
      6,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kBool,
      bool,
      NetworkPacketTraceConfig>;

  static constexpr FieldMetadata_DropTcpFlags kDropTcpFlags{};
  void set_drop_tcp_flags(bool value) {
    static constexpr uint32_t field_id = FieldMetadata_DropTcpFlags::kFieldId;
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
