#include "perfetto/protozero/gen_field_helpers.h"
#include "perfetto/protozero/message.h"
#include "perfetto/protozero/packed_repeated_fields.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/scattered_heap_buffer.h"
// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wfloat-equal"
#endif
#include "protos/perfetto/trace/android/network_trace.gen.h"

namespace perfetto {
namespace protos {
namespace gen {

NetworkPacketContext::NetworkPacketContext() = default;
NetworkPacketContext::~NetworkPacketContext() = default;
NetworkPacketContext::NetworkPacketContext(const NetworkPacketContext&) = default;
NetworkPacketContext& NetworkPacketContext::operator=(const NetworkPacketContext&) = default;
NetworkPacketContext::NetworkPacketContext(NetworkPacketContext&&) noexcept = default;
NetworkPacketContext& NetworkPacketContext::operator=(NetworkPacketContext&&) = default;

bool NetworkPacketContext::operator==(const NetworkPacketContext& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(iid_, other.iid_)
   && ::protozero::internal::gen_helpers::EqualsField(ctx_, other.ctx_);
}

bool NetworkPacketContext::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* iid */:
        field.get(&iid_);
        break;
      case 2 /* ctx */:
        (*ctx_).ParseFromArray(field.data(), field.size());
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string NetworkPacketContext::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> NetworkPacketContext::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void NetworkPacketContext::Serialize(::protozero::Message* msg) const {
  // Field 1: iid
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(1, iid_, msg);
  }

  // Field 2: ctx
  if (_has_field_[2]) {
    (*ctx_).Serialize(msg->BeginNestedMessage<::protozero::Message>(2));
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


NetworkPacketEvent::NetworkPacketEvent() = default;
NetworkPacketEvent::~NetworkPacketEvent() = default;
NetworkPacketEvent::NetworkPacketEvent(const NetworkPacketEvent&) = default;
NetworkPacketEvent& NetworkPacketEvent::operator=(const NetworkPacketEvent&) = default;
NetworkPacketEvent::NetworkPacketEvent(NetworkPacketEvent&&) noexcept = default;
NetworkPacketEvent& NetworkPacketEvent::operator=(NetworkPacketEvent&&) = default;

bool NetworkPacketEvent::operator==(const NetworkPacketEvent& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(direction_, other.direction_)
   && ::protozero::internal::gen_helpers::EqualsField(interface_, other.interface_)
   && ::protozero::internal::gen_helpers::EqualsField(length_, other.length_)
   && ::protozero::internal::gen_helpers::EqualsField(uid_, other.uid_)
   && ::protozero::internal::gen_helpers::EqualsField(tag_, other.tag_)
   && ::protozero::internal::gen_helpers::EqualsField(ip_proto_, other.ip_proto_)
   && ::protozero::internal::gen_helpers::EqualsField(tcp_flags_, other.tcp_flags_)
   && ::protozero::internal::gen_helpers::EqualsField(local_port_, other.local_port_)
   && ::protozero::internal::gen_helpers::EqualsField(remote_port_, other.remote_port_)
   && ::protozero::internal::gen_helpers::EqualsField(icmp_type_, other.icmp_type_)
   && ::protozero::internal::gen_helpers::EqualsField(icmp_code_, other.icmp_code_);
}

bool NetworkPacketEvent::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* direction */:
        field.get(&direction_);
        break;
      case 2 /* interface */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &interface_);
        break;
      case 3 /* length */:
        field.get(&length_);
        break;
      case 4 /* uid */:
        field.get(&uid_);
        break;
      case 5 /* tag */:
        field.get(&tag_);
        break;
      case 6 /* ip_proto */:
        field.get(&ip_proto_);
        break;
      case 7 /* tcp_flags */:
        field.get(&tcp_flags_);
        break;
      case 8 /* local_port */:
        field.get(&local_port_);
        break;
      case 9 /* remote_port */:
        field.get(&remote_port_);
        break;
      case 10 /* icmp_type */:
        field.get(&icmp_type_);
        break;
      case 11 /* icmp_code */:
        field.get(&icmp_code_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string NetworkPacketEvent::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> NetworkPacketEvent::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void NetworkPacketEvent::Serialize(::protozero::Message* msg) const {
  // Field 1: direction
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(1, direction_, msg);
  }

  // Field 2: interface
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeString(2, interface_, msg);
  }

  // Field 3: length
  if (_has_field_[3]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(3, length_, msg);
  }

  // Field 4: uid
  if (_has_field_[4]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(4, uid_, msg);
  }

  // Field 5: tag
  if (_has_field_[5]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(5, tag_, msg);
  }

  // Field 6: ip_proto
  if (_has_field_[6]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(6, ip_proto_, msg);
  }

  // Field 7: tcp_flags
  if (_has_field_[7]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(7, tcp_flags_, msg);
  }

  // Field 8: local_port
  if (_has_field_[8]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(8, local_port_, msg);
  }

  // Field 9: remote_port
  if (_has_field_[9]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(9, remote_port_, msg);
  }

  // Field 10: icmp_type
  if (_has_field_[10]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(10, icmp_type_, msg);
  }

  // Field 11: icmp_code
  if (_has_field_[11]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(11, icmp_code_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


NetworkPacketBundle::NetworkPacketBundle() = default;
NetworkPacketBundle::~NetworkPacketBundle() = default;
NetworkPacketBundle::NetworkPacketBundle(const NetworkPacketBundle&) = default;
NetworkPacketBundle& NetworkPacketBundle::operator=(const NetworkPacketBundle&) = default;
NetworkPacketBundle::NetworkPacketBundle(NetworkPacketBundle&&) noexcept = default;
NetworkPacketBundle& NetworkPacketBundle::operator=(NetworkPacketBundle&&) = default;

bool NetworkPacketBundle::operator==(const NetworkPacketBundle& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(iid_, other.iid_)
   && ::protozero::internal::gen_helpers::EqualsField(ctx_, other.ctx_)
   && ::protozero::internal::gen_helpers::EqualsField(packet_timestamps_, other.packet_timestamps_)
   && ::protozero::internal::gen_helpers::EqualsField(packet_lengths_, other.packet_lengths_)
   && ::protozero::internal::gen_helpers::EqualsField(total_packets_, other.total_packets_)
   && ::protozero::internal::gen_helpers::EqualsField(total_duration_, other.total_duration_)
   && ::protozero::internal::gen_helpers::EqualsField(total_length_, other.total_length_);
}

bool NetworkPacketBundle::ParseFromArray(const void* raw, size_t size) {
  packet_timestamps_.clear();
  packet_lengths_.clear();
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* iid */:
        field.get(&iid_);
        break;
      case 2 /* ctx */:
        (*ctx_).ParseFromArray(field.data(), field.size());
        break;
      case 3 /* packet_timestamps */:
        if (!::protozero::internal::gen_helpers::DeserializePackedRepeated<::protozero::proto_utils::ProtoWireType::kVarInt, uint64_t>(field, &packet_timestamps_)) {
          packed_error = true;}
        break;
      case 4 /* packet_lengths */:
        if (!::protozero::internal::gen_helpers::DeserializePackedRepeated<::protozero::proto_utils::ProtoWireType::kVarInt, uint32_t>(field, &packet_lengths_)) {
          packed_error = true;}
        break;
      case 5 /* total_packets */:
        field.get(&total_packets_);
        break;
      case 6 /* total_duration */:
        field.get(&total_duration_);
        break;
      case 7 /* total_length */:
        field.get(&total_length_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string NetworkPacketBundle::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> NetworkPacketBundle::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void NetworkPacketBundle::Serialize(::protozero::Message* msg) const {
  // Field 1: iid
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(1, iid_, msg);
  }

  // Field 2: ctx
  if (_has_field_[2]) {
    (*ctx_).Serialize(msg->BeginNestedMessage<::protozero::Message>(2));
  }

  // Field 3: packet_timestamps
  {
    ::protozero::PackedVarInt pack;
    for (auto& it : packet_timestamps_)
      pack.Append(it);
    msg->AppendBytes(3, pack.data(), pack.size());
  }

  // Field 4: packet_lengths
  {
    ::protozero::PackedVarInt pack;
    for (auto& it : packet_lengths_)
      pack.Append(it);
    msg->AppendBytes(4, pack.data(), pack.size());
  }

  // Field 5: total_packets
  if (_has_field_[5]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(5, total_packets_, msg);
  }

  // Field 6: total_duration
  if (_has_field_[6]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(6, total_duration_, msg);
  }

  // Field 7: total_length
  if (_has_field_[7]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(7, total_length_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}

}  // namespace perfetto
}  // namespace protos
}  // namespace gen
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif
