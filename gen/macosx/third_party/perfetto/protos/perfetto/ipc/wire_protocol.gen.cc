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
#include "protos/perfetto/ipc/wire_protocol.gen.h"

namespace perfetto {
namespace protos {
namespace gen {

IPCFrame::IPCFrame() = default;
IPCFrame::~IPCFrame() = default;
IPCFrame::IPCFrame(const IPCFrame&) = default;
IPCFrame& IPCFrame::operator=(const IPCFrame&) = default;
IPCFrame::IPCFrame(IPCFrame&&) noexcept = default;
IPCFrame& IPCFrame::operator=(IPCFrame&&) = default;

bool IPCFrame::operator==(const IPCFrame& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(request_id_, other.request_id_)
   && ::protozero::internal::gen_helpers::EqualsField(msg_bind_service_, other.msg_bind_service_)
   && ::protozero::internal::gen_helpers::EqualsField(msg_bind_service_reply_, other.msg_bind_service_reply_)
   && ::protozero::internal::gen_helpers::EqualsField(msg_invoke_method_, other.msg_invoke_method_)
   && ::protozero::internal::gen_helpers::EqualsField(msg_invoke_method_reply_, other.msg_invoke_method_reply_)
   && ::protozero::internal::gen_helpers::EqualsField(msg_request_error_, other.msg_request_error_)
   && ::protozero::internal::gen_helpers::EqualsField(set_peer_identity_, other.set_peer_identity_)
   && ::protozero::internal::gen_helpers::EqualsField(data_for_testing_, other.data_for_testing_);
}

bool IPCFrame::ParseFromArray(const void* raw, size_t size) {
  data_for_testing_.clear();
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 2 /* request_id */:
        field.get(&request_id_);
        break;
      case 3 /* msg_bind_service */:
        (*msg_bind_service_).ParseFromArray(field.data(), field.size());
        break;
      case 4 /* msg_bind_service_reply */:
        (*msg_bind_service_reply_).ParseFromArray(field.data(), field.size());
        break;
      case 5 /* msg_invoke_method */:
        (*msg_invoke_method_).ParseFromArray(field.data(), field.size());
        break;
      case 6 /* msg_invoke_method_reply */:
        (*msg_invoke_method_reply_).ParseFromArray(field.data(), field.size());
        break;
      case 7 /* msg_request_error */:
        (*msg_request_error_).ParseFromArray(field.data(), field.size());
        break;
      case 8 /* set_peer_identity */:
        (*set_peer_identity_).ParseFromArray(field.data(), field.size());
        break;
      case 1 /* data_for_testing */:
        data_for_testing_.emplace_back();
        field.get(&data_for_testing_.back());
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string IPCFrame::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> IPCFrame::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void IPCFrame::Serialize(::protozero::Message* msg) const {
  // Field 2: request_id
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(2, request_id_, msg);
  }

  // Field 3: msg_bind_service
  if (_has_field_[3]) {
    (*msg_bind_service_).Serialize(msg->BeginNestedMessage<::protozero::Message>(3));
  }

  // Field 4: msg_bind_service_reply
  if (_has_field_[4]) {
    (*msg_bind_service_reply_).Serialize(msg->BeginNestedMessage<::protozero::Message>(4));
  }

  // Field 5: msg_invoke_method
  if (_has_field_[5]) {
    (*msg_invoke_method_).Serialize(msg->BeginNestedMessage<::protozero::Message>(5));
  }

  // Field 6: msg_invoke_method_reply
  if (_has_field_[6]) {
    (*msg_invoke_method_reply_).Serialize(msg->BeginNestedMessage<::protozero::Message>(6));
  }

  // Field 7: msg_request_error
  if (_has_field_[7]) {
    (*msg_request_error_).Serialize(msg->BeginNestedMessage<::protozero::Message>(7));
  }

  // Field 8: set_peer_identity
  if (_has_field_[8]) {
    (*set_peer_identity_).Serialize(msg->BeginNestedMessage<::protozero::Message>(8));
  }

  // Field 1: data_for_testing
  for (auto& it : data_for_testing_) {
    ::protozero::internal::gen_helpers::SerializeString(1, it, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


IPCFrame_SetPeerIdentity::IPCFrame_SetPeerIdentity() = default;
IPCFrame_SetPeerIdentity::~IPCFrame_SetPeerIdentity() = default;
IPCFrame_SetPeerIdentity::IPCFrame_SetPeerIdentity(const IPCFrame_SetPeerIdentity&) = default;
IPCFrame_SetPeerIdentity& IPCFrame_SetPeerIdentity::operator=(const IPCFrame_SetPeerIdentity&) = default;
IPCFrame_SetPeerIdentity::IPCFrame_SetPeerIdentity(IPCFrame_SetPeerIdentity&&) noexcept = default;
IPCFrame_SetPeerIdentity& IPCFrame_SetPeerIdentity::operator=(IPCFrame_SetPeerIdentity&&) = default;

bool IPCFrame_SetPeerIdentity::operator==(const IPCFrame_SetPeerIdentity& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(pid_, other.pid_)
   && ::protozero::internal::gen_helpers::EqualsField(uid_, other.uid_)
   && ::protozero::internal::gen_helpers::EqualsField(machine_id_hint_, other.machine_id_hint_);
}

bool IPCFrame_SetPeerIdentity::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* pid */:
        field.get(&pid_);
        break;
      case 2 /* uid */:
        field.get(&uid_);
        break;
      case 3 /* machine_id_hint */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &machine_id_hint_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string IPCFrame_SetPeerIdentity::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> IPCFrame_SetPeerIdentity::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void IPCFrame_SetPeerIdentity::Serialize(::protozero::Message* msg) const {
  // Field 1: pid
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(1, pid_, msg);
  }

  // Field 2: uid
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(2, uid_, msg);
  }

  // Field 3: machine_id_hint
  if (_has_field_[3]) {
    ::protozero::internal::gen_helpers::SerializeString(3, machine_id_hint_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


IPCFrame_RequestError::IPCFrame_RequestError() = default;
IPCFrame_RequestError::~IPCFrame_RequestError() = default;
IPCFrame_RequestError::IPCFrame_RequestError(const IPCFrame_RequestError&) = default;
IPCFrame_RequestError& IPCFrame_RequestError::operator=(const IPCFrame_RequestError&) = default;
IPCFrame_RequestError::IPCFrame_RequestError(IPCFrame_RequestError&&) noexcept = default;
IPCFrame_RequestError& IPCFrame_RequestError::operator=(IPCFrame_RequestError&&) = default;

bool IPCFrame_RequestError::operator==(const IPCFrame_RequestError& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(error_, other.error_);
}

bool IPCFrame_RequestError::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* error */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &error_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string IPCFrame_RequestError::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> IPCFrame_RequestError::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void IPCFrame_RequestError::Serialize(::protozero::Message* msg) const {
  // Field 1: error
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeString(1, error_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


IPCFrame_InvokeMethodReply::IPCFrame_InvokeMethodReply() = default;
IPCFrame_InvokeMethodReply::~IPCFrame_InvokeMethodReply() = default;
IPCFrame_InvokeMethodReply::IPCFrame_InvokeMethodReply(const IPCFrame_InvokeMethodReply&) = default;
IPCFrame_InvokeMethodReply& IPCFrame_InvokeMethodReply::operator=(const IPCFrame_InvokeMethodReply&) = default;
IPCFrame_InvokeMethodReply::IPCFrame_InvokeMethodReply(IPCFrame_InvokeMethodReply&&) noexcept = default;
IPCFrame_InvokeMethodReply& IPCFrame_InvokeMethodReply::operator=(IPCFrame_InvokeMethodReply&&) = default;

bool IPCFrame_InvokeMethodReply::operator==(const IPCFrame_InvokeMethodReply& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(success_, other.success_)
   && ::protozero::internal::gen_helpers::EqualsField(has_more_, other.has_more_)
   && ::protozero::internal::gen_helpers::EqualsField(reply_proto_, other.reply_proto_);
}

bool IPCFrame_InvokeMethodReply::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* success */:
        field.get(&success_);
        break;
      case 2 /* has_more */:
        field.get(&has_more_);
        break;
      case 3 /* reply_proto */:
        field.get(&reply_proto_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string IPCFrame_InvokeMethodReply::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> IPCFrame_InvokeMethodReply::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void IPCFrame_InvokeMethodReply::Serialize(::protozero::Message* msg) const {
  // Field 1: success
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeTinyVarInt(1, success_, msg);
  }

  // Field 2: has_more
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeTinyVarInt(2, has_more_, msg);
  }

  // Field 3: reply_proto
  if (_has_field_[3]) {
    ::protozero::internal::gen_helpers::SerializeString(3, reply_proto_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


IPCFrame_InvokeMethod::IPCFrame_InvokeMethod() = default;
IPCFrame_InvokeMethod::~IPCFrame_InvokeMethod() = default;
IPCFrame_InvokeMethod::IPCFrame_InvokeMethod(const IPCFrame_InvokeMethod&) = default;
IPCFrame_InvokeMethod& IPCFrame_InvokeMethod::operator=(const IPCFrame_InvokeMethod&) = default;
IPCFrame_InvokeMethod::IPCFrame_InvokeMethod(IPCFrame_InvokeMethod&&) noexcept = default;
IPCFrame_InvokeMethod& IPCFrame_InvokeMethod::operator=(IPCFrame_InvokeMethod&&) = default;

bool IPCFrame_InvokeMethod::operator==(const IPCFrame_InvokeMethod& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(service_id_, other.service_id_)
   && ::protozero::internal::gen_helpers::EqualsField(method_id_, other.method_id_)
   && ::protozero::internal::gen_helpers::EqualsField(args_proto_, other.args_proto_)
   && ::protozero::internal::gen_helpers::EqualsField(drop_reply_, other.drop_reply_);
}

bool IPCFrame_InvokeMethod::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* service_id */:
        field.get(&service_id_);
        break;
      case 2 /* method_id */:
        field.get(&method_id_);
        break;
      case 3 /* args_proto */:
        field.get(&args_proto_);
        break;
      case 4 /* drop_reply */:
        field.get(&drop_reply_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string IPCFrame_InvokeMethod::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> IPCFrame_InvokeMethod::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void IPCFrame_InvokeMethod::Serialize(::protozero::Message* msg) const {
  // Field 1: service_id
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(1, service_id_, msg);
  }

  // Field 2: method_id
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(2, method_id_, msg);
  }

  // Field 3: args_proto
  if (_has_field_[3]) {
    ::protozero::internal::gen_helpers::SerializeString(3, args_proto_, msg);
  }

  // Field 4: drop_reply
  if (_has_field_[4]) {
    ::protozero::internal::gen_helpers::SerializeTinyVarInt(4, drop_reply_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


IPCFrame_BindServiceReply::IPCFrame_BindServiceReply() = default;
IPCFrame_BindServiceReply::~IPCFrame_BindServiceReply() = default;
IPCFrame_BindServiceReply::IPCFrame_BindServiceReply(const IPCFrame_BindServiceReply&) = default;
IPCFrame_BindServiceReply& IPCFrame_BindServiceReply::operator=(const IPCFrame_BindServiceReply&) = default;
IPCFrame_BindServiceReply::IPCFrame_BindServiceReply(IPCFrame_BindServiceReply&&) noexcept = default;
IPCFrame_BindServiceReply& IPCFrame_BindServiceReply::operator=(IPCFrame_BindServiceReply&&) = default;

bool IPCFrame_BindServiceReply::operator==(const IPCFrame_BindServiceReply& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(success_, other.success_)
   && ::protozero::internal::gen_helpers::EqualsField(service_id_, other.service_id_)
   && ::protozero::internal::gen_helpers::EqualsField(methods_, other.methods_);
}

int IPCFrame_BindServiceReply::methods_size() const { return static_cast<int>(methods_.size()); }
void IPCFrame_BindServiceReply::clear_methods() { methods_.clear(); }
IPCFrame_BindServiceReply_MethodInfo* IPCFrame_BindServiceReply::add_methods() { methods_.emplace_back(); return &methods_.back(); }
bool IPCFrame_BindServiceReply::ParseFromArray(const void* raw, size_t size) {
  methods_.clear();
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* success */:
        field.get(&success_);
        break;
      case 2 /* service_id */:
        field.get(&service_id_);
        break;
      case 3 /* methods */:
        methods_.emplace_back();
        methods_.back().ParseFromArray(field.data(), field.size());
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string IPCFrame_BindServiceReply::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> IPCFrame_BindServiceReply::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void IPCFrame_BindServiceReply::Serialize(::protozero::Message* msg) const {
  // Field 1: success
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeTinyVarInt(1, success_, msg);
  }

  // Field 2: service_id
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(2, service_id_, msg);
  }

  // Field 3: methods
  for (auto& it : methods_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(3));
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


IPCFrame_BindServiceReply_MethodInfo::IPCFrame_BindServiceReply_MethodInfo() = default;
IPCFrame_BindServiceReply_MethodInfo::~IPCFrame_BindServiceReply_MethodInfo() = default;
IPCFrame_BindServiceReply_MethodInfo::IPCFrame_BindServiceReply_MethodInfo(const IPCFrame_BindServiceReply_MethodInfo&) = default;
IPCFrame_BindServiceReply_MethodInfo& IPCFrame_BindServiceReply_MethodInfo::operator=(const IPCFrame_BindServiceReply_MethodInfo&) = default;
IPCFrame_BindServiceReply_MethodInfo::IPCFrame_BindServiceReply_MethodInfo(IPCFrame_BindServiceReply_MethodInfo&&) noexcept = default;
IPCFrame_BindServiceReply_MethodInfo& IPCFrame_BindServiceReply_MethodInfo::operator=(IPCFrame_BindServiceReply_MethodInfo&&) = default;

bool IPCFrame_BindServiceReply_MethodInfo::operator==(const IPCFrame_BindServiceReply_MethodInfo& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(id_, other.id_)
   && ::protozero::internal::gen_helpers::EqualsField(name_, other.name_);
}

bool IPCFrame_BindServiceReply_MethodInfo::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* id */:
        field.get(&id_);
        break;
      case 2 /* name */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &name_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string IPCFrame_BindServiceReply_MethodInfo::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> IPCFrame_BindServiceReply_MethodInfo::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void IPCFrame_BindServiceReply_MethodInfo::Serialize(::protozero::Message* msg) const {
  // Field 1: id
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(1, id_, msg);
  }

  // Field 2: name
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeString(2, name_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


IPCFrame_BindService::IPCFrame_BindService() = default;
IPCFrame_BindService::~IPCFrame_BindService() = default;
IPCFrame_BindService::IPCFrame_BindService(const IPCFrame_BindService&) = default;
IPCFrame_BindService& IPCFrame_BindService::operator=(const IPCFrame_BindService&) = default;
IPCFrame_BindService::IPCFrame_BindService(IPCFrame_BindService&&) noexcept = default;
IPCFrame_BindService& IPCFrame_BindService::operator=(IPCFrame_BindService&&) = default;

bool IPCFrame_BindService::operator==(const IPCFrame_BindService& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(service_name_, other.service_name_);
}

bool IPCFrame_BindService::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* service_name */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &service_name_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string IPCFrame_BindService::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> IPCFrame_BindService::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void IPCFrame_BindService::Serialize(::protozero::Message* msg) const {
  // Field 1: service_name
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeString(1, service_name_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}

}  // namespace perfetto
}  // namespace protos
}  // namespace gen
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif
