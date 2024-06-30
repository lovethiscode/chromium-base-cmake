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
#include "protos/perfetto/trace/ftrace/virtio_video.gen.h"

namespace perfetto {
namespace protos {
namespace gen {

VirtioVideoResourceQueueDoneFtraceEvent::VirtioVideoResourceQueueDoneFtraceEvent() = default;
VirtioVideoResourceQueueDoneFtraceEvent::~VirtioVideoResourceQueueDoneFtraceEvent() = default;
VirtioVideoResourceQueueDoneFtraceEvent::VirtioVideoResourceQueueDoneFtraceEvent(const VirtioVideoResourceQueueDoneFtraceEvent&) = default;
VirtioVideoResourceQueueDoneFtraceEvent& VirtioVideoResourceQueueDoneFtraceEvent::operator=(const VirtioVideoResourceQueueDoneFtraceEvent&) = default;
VirtioVideoResourceQueueDoneFtraceEvent::VirtioVideoResourceQueueDoneFtraceEvent(VirtioVideoResourceQueueDoneFtraceEvent&&) noexcept = default;
VirtioVideoResourceQueueDoneFtraceEvent& VirtioVideoResourceQueueDoneFtraceEvent::operator=(VirtioVideoResourceQueueDoneFtraceEvent&&) = default;

bool VirtioVideoResourceQueueDoneFtraceEvent::operator==(const VirtioVideoResourceQueueDoneFtraceEvent& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(data_size0_, other.data_size0_)
   && ::protozero::internal::gen_helpers::EqualsField(data_size1_, other.data_size1_)
   && ::protozero::internal::gen_helpers::EqualsField(data_size2_, other.data_size2_)
   && ::protozero::internal::gen_helpers::EqualsField(data_size3_, other.data_size3_)
   && ::protozero::internal::gen_helpers::EqualsField(queue_type_, other.queue_type_)
   && ::protozero::internal::gen_helpers::EqualsField(resource_id_, other.resource_id_)
   && ::protozero::internal::gen_helpers::EqualsField(stream_id_, other.stream_id_)
   && ::protozero::internal::gen_helpers::EqualsField(timestamp_, other.timestamp_);
}

bool VirtioVideoResourceQueueDoneFtraceEvent::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* data_size0 */:
        field.get(&data_size0_);
        break;
      case 2 /* data_size1 */:
        field.get(&data_size1_);
        break;
      case 3 /* data_size2 */:
        field.get(&data_size2_);
        break;
      case 4 /* data_size3 */:
        field.get(&data_size3_);
        break;
      case 5 /* queue_type */:
        field.get(&queue_type_);
        break;
      case 6 /* resource_id */:
        field.get(&resource_id_);
        break;
      case 7 /* stream_id */:
        field.get(&stream_id_);
        break;
      case 8 /* timestamp */:
        field.get(&timestamp_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string VirtioVideoResourceQueueDoneFtraceEvent::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> VirtioVideoResourceQueueDoneFtraceEvent::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void VirtioVideoResourceQueueDoneFtraceEvent::Serialize(::protozero::Message* msg) const {
  // Field 1: data_size0
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(1, data_size0_, msg);
  }

  // Field 2: data_size1
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(2, data_size1_, msg);
  }

  // Field 3: data_size2
  if (_has_field_[3]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(3, data_size2_, msg);
  }

  // Field 4: data_size3
  if (_has_field_[4]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(4, data_size3_, msg);
  }

  // Field 5: queue_type
  if (_has_field_[5]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(5, queue_type_, msg);
  }

  // Field 6: resource_id
  if (_has_field_[6]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(6, resource_id_, msg);
  }

  // Field 7: stream_id
  if (_has_field_[7]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(7, stream_id_, msg);
  }

  // Field 8: timestamp
  if (_has_field_[8]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(8, timestamp_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


VirtioVideoResourceQueueFtraceEvent::VirtioVideoResourceQueueFtraceEvent() = default;
VirtioVideoResourceQueueFtraceEvent::~VirtioVideoResourceQueueFtraceEvent() = default;
VirtioVideoResourceQueueFtraceEvent::VirtioVideoResourceQueueFtraceEvent(const VirtioVideoResourceQueueFtraceEvent&) = default;
VirtioVideoResourceQueueFtraceEvent& VirtioVideoResourceQueueFtraceEvent::operator=(const VirtioVideoResourceQueueFtraceEvent&) = default;
VirtioVideoResourceQueueFtraceEvent::VirtioVideoResourceQueueFtraceEvent(VirtioVideoResourceQueueFtraceEvent&&) noexcept = default;
VirtioVideoResourceQueueFtraceEvent& VirtioVideoResourceQueueFtraceEvent::operator=(VirtioVideoResourceQueueFtraceEvent&&) = default;

bool VirtioVideoResourceQueueFtraceEvent::operator==(const VirtioVideoResourceQueueFtraceEvent& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(data_size0_, other.data_size0_)
   && ::protozero::internal::gen_helpers::EqualsField(data_size1_, other.data_size1_)
   && ::protozero::internal::gen_helpers::EqualsField(data_size2_, other.data_size2_)
   && ::protozero::internal::gen_helpers::EqualsField(data_size3_, other.data_size3_)
   && ::protozero::internal::gen_helpers::EqualsField(queue_type_, other.queue_type_)
   && ::protozero::internal::gen_helpers::EqualsField(resource_id_, other.resource_id_)
   && ::protozero::internal::gen_helpers::EqualsField(stream_id_, other.stream_id_)
   && ::protozero::internal::gen_helpers::EqualsField(timestamp_, other.timestamp_);
}

bool VirtioVideoResourceQueueFtraceEvent::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* data_size0 */:
        field.get(&data_size0_);
        break;
      case 2 /* data_size1 */:
        field.get(&data_size1_);
        break;
      case 3 /* data_size2 */:
        field.get(&data_size2_);
        break;
      case 4 /* data_size3 */:
        field.get(&data_size3_);
        break;
      case 5 /* queue_type */:
        field.get(&queue_type_);
        break;
      case 6 /* resource_id */:
        field.get(&resource_id_);
        break;
      case 7 /* stream_id */:
        field.get(&stream_id_);
        break;
      case 8 /* timestamp */:
        field.get(&timestamp_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string VirtioVideoResourceQueueFtraceEvent::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> VirtioVideoResourceQueueFtraceEvent::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void VirtioVideoResourceQueueFtraceEvent::Serialize(::protozero::Message* msg) const {
  // Field 1: data_size0
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(1, data_size0_, msg);
  }

  // Field 2: data_size1
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(2, data_size1_, msg);
  }

  // Field 3: data_size2
  if (_has_field_[3]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(3, data_size2_, msg);
  }

  // Field 4: data_size3
  if (_has_field_[4]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(4, data_size3_, msg);
  }

  // Field 5: queue_type
  if (_has_field_[5]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(5, queue_type_, msg);
  }

  // Field 6: resource_id
  if (_has_field_[6]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(6, resource_id_, msg);
  }

  // Field 7: stream_id
  if (_has_field_[7]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(7, stream_id_, msg);
  }

  // Field 8: timestamp
  if (_has_field_[8]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(8, timestamp_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


VirtioVideoCmdDoneFtraceEvent::VirtioVideoCmdDoneFtraceEvent() = default;
VirtioVideoCmdDoneFtraceEvent::~VirtioVideoCmdDoneFtraceEvent() = default;
VirtioVideoCmdDoneFtraceEvent::VirtioVideoCmdDoneFtraceEvent(const VirtioVideoCmdDoneFtraceEvent&) = default;
VirtioVideoCmdDoneFtraceEvent& VirtioVideoCmdDoneFtraceEvent::operator=(const VirtioVideoCmdDoneFtraceEvent&) = default;
VirtioVideoCmdDoneFtraceEvent::VirtioVideoCmdDoneFtraceEvent(VirtioVideoCmdDoneFtraceEvent&&) noexcept = default;
VirtioVideoCmdDoneFtraceEvent& VirtioVideoCmdDoneFtraceEvent::operator=(VirtioVideoCmdDoneFtraceEvent&&) = default;

bool VirtioVideoCmdDoneFtraceEvent::operator==(const VirtioVideoCmdDoneFtraceEvent& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(stream_id_, other.stream_id_)
   && ::protozero::internal::gen_helpers::EqualsField(type_, other.type_);
}

bool VirtioVideoCmdDoneFtraceEvent::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* stream_id */:
        field.get(&stream_id_);
        break;
      case 2 /* type */:
        field.get(&type_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string VirtioVideoCmdDoneFtraceEvent::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> VirtioVideoCmdDoneFtraceEvent::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void VirtioVideoCmdDoneFtraceEvent::Serialize(::protozero::Message* msg) const {
  // Field 1: stream_id
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(1, stream_id_, msg);
  }

  // Field 2: type
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(2, type_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


VirtioVideoCmdFtraceEvent::VirtioVideoCmdFtraceEvent() = default;
VirtioVideoCmdFtraceEvent::~VirtioVideoCmdFtraceEvent() = default;
VirtioVideoCmdFtraceEvent::VirtioVideoCmdFtraceEvent(const VirtioVideoCmdFtraceEvent&) = default;
VirtioVideoCmdFtraceEvent& VirtioVideoCmdFtraceEvent::operator=(const VirtioVideoCmdFtraceEvent&) = default;
VirtioVideoCmdFtraceEvent::VirtioVideoCmdFtraceEvent(VirtioVideoCmdFtraceEvent&&) noexcept = default;
VirtioVideoCmdFtraceEvent& VirtioVideoCmdFtraceEvent::operator=(VirtioVideoCmdFtraceEvent&&) = default;

bool VirtioVideoCmdFtraceEvent::operator==(const VirtioVideoCmdFtraceEvent& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(stream_id_, other.stream_id_)
   && ::protozero::internal::gen_helpers::EqualsField(type_, other.type_);
}

bool VirtioVideoCmdFtraceEvent::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* stream_id */:
        field.get(&stream_id_);
        break;
      case 2 /* type */:
        field.get(&type_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string VirtioVideoCmdFtraceEvent::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> VirtioVideoCmdFtraceEvent::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void VirtioVideoCmdFtraceEvent::Serialize(::protozero::Message* msg) const {
  // Field 1: stream_id
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(1, stream_id_, msg);
  }

  // Field 2: type
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(2, type_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}

}  // namespace perfetto
}  // namespace protos
}  // namespace gen
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif
