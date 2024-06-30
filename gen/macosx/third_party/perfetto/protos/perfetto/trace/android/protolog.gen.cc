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
#include "protos/perfetto/trace/android/protolog.gen.h"
#include "protos/perfetto/common/protolog_common.gen.h"

namespace perfetto {
namespace protos {
namespace gen {

ProtoLogViewerConfig::ProtoLogViewerConfig() = default;
ProtoLogViewerConfig::~ProtoLogViewerConfig() = default;
ProtoLogViewerConfig::ProtoLogViewerConfig(const ProtoLogViewerConfig&) = default;
ProtoLogViewerConfig& ProtoLogViewerConfig::operator=(const ProtoLogViewerConfig&) = default;
ProtoLogViewerConfig::ProtoLogViewerConfig(ProtoLogViewerConfig&&) noexcept = default;
ProtoLogViewerConfig& ProtoLogViewerConfig::operator=(ProtoLogViewerConfig&&) = default;

bool ProtoLogViewerConfig::operator==(const ProtoLogViewerConfig& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(messages_, other.messages_)
   && ::protozero::internal::gen_helpers::EqualsField(groups_, other.groups_);
}

int ProtoLogViewerConfig::messages_size() const { return static_cast<int>(messages_.size()); }
void ProtoLogViewerConfig::clear_messages() { messages_.clear(); }
ProtoLogViewerConfig_MessageData* ProtoLogViewerConfig::add_messages() { messages_.emplace_back(); return &messages_.back(); }
int ProtoLogViewerConfig::groups_size() const { return static_cast<int>(groups_.size()); }
void ProtoLogViewerConfig::clear_groups() { groups_.clear(); }
ProtoLogViewerConfig_Group* ProtoLogViewerConfig::add_groups() { groups_.emplace_back(); return &groups_.back(); }
bool ProtoLogViewerConfig::ParseFromArray(const void* raw, size_t size) {
  messages_.clear();
  groups_.clear();
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* messages */:
        messages_.emplace_back();
        messages_.back().ParseFromArray(field.data(), field.size());
        break;
      case 2 /* groups */:
        groups_.emplace_back();
        groups_.back().ParseFromArray(field.data(), field.size());
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string ProtoLogViewerConfig::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> ProtoLogViewerConfig::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void ProtoLogViewerConfig::Serialize(::protozero::Message* msg) const {
  // Field 1: messages
  for (auto& it : messages_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(1));
  }

  // Field 2: groups
  for (auto& it : groups_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(2));
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


ProtoLogViewerConfig_Group::ProtoLogViewerConfig_Group() = default;
ProtoLogViewerConfig_Group::~ProtoLogViewerConfig_Group() = default;
ProtoLogViewerConfig_Group::ProtoLogViewerConfig_Group(const ProtoLogViewerConfig_Group&) = default;
ProtoLogViewerConfig_Group& ProtoLogViewerConfig_Group::operator=(const ProtoLogViewerConfig_Group&) = default;
ProtoLogViewerConfig_Group::ProtoLogViewerConfig_Group(ProtoLogViewerConfig_Group&&) noexcept = default;
ProtoLogViewerConfig_Group& ProtoLogViewerConfig_Group::operator=(ProtoLogViewerConfig_Group&&) = default;

bool ProtoLogViewerConfig_Group::operator==(const ProtoLogViewerConfig_Group& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(id_, other.id_)
   && ::protozero::internal::gen_helpers::EqualsField(name_, other.name_)
   && ::protozero::internal::gen_helpers::EqualsField(tag_, other.tag_);
}

bool ProtoLogViewerConfig_Group::ParseFromArray(const void* raw, size_t size) {
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
      case 3 /* tag */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &tag_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string ProtoLogViewerConfig_Group::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> ProtoLogViewerConfig_Group::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void ProtoLogViewerConfig_Group::Serialize(::protozero::Message* msg) const {
  // Field 1: id
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(1, id_, msg);
  }

  // Field 2: name
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeString(2, name_, msg);
  }

  // Field 3: tag
  if (_has_field_[3]) {
    ::protozero::internal::gen_helpers::SerializeString(3, tag_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


ProtoLogViewerConfig_MessageData::ProtoLogViewerConfig_MessageData() = default;
ProtoLogViewerConfig_MessageData::~ProtoLogViewerConfig_MessageData() = default;
ProtoLogViewerConfig_MessageData::ProtoLogViewerConfig_MessageData(const ProtoLogViewerConfig_MessageData&) = default;
ProtoLogViewerConfig_MessageData& ProtoLogViewerConfig_MessageData::operator=(const ProtoLogViewerConfig_MessageData&) = default;
ProtoLogViewerConfig_MessageData::ProtoLogViewerConfig_MessageData(ProtoLogViewerConfig_MessageData&&) noexcept = default;
ProtoLogViewerConfig_MessageData& ProtoLogViewerConfig_MessageData::operator=(ProtoLogViewerConfig_MessageData&&) = default;

bool ProtoLogViewerConfig_MessageData::operator==(const ProtoLogViewerConfig_MessageData& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(message_id_, other.message_id_)
   && ::protozero::internal::gen_helpers::EqualsField(message_, other.message_)
   && ::protozero::internal::gen_helpers::EqualsField(level_, other.level_)
   && ::protozero::internal::gen_helpers::EqualsField(group_id_, other.group_id_);
}

bool ProtoLogViewerConfig_MessageData::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* message_id */:
        field.get(&message_id_);
        break;
      case 2 /* message */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &message_);
        break;
      case 3 /* level */:
        field.get(&level_);
        break;
      case 4 /* group_id */:
        field.get(&group_id_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string ProtoLogViewerConfig_MessageData::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> ProtoLogViewerConfig_MessageData::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void ProtoLogViewerConfig_MessageData::Serialize(::protozero::Message* msg) const {
  // Field 1: message_id
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeFixed(1, message_id_, msg);
  }

  // Field 2: message
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeString(2, message_, msg);
  }

  // Field 3: level
  if (_has_field_[3]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(3, level_, msg);
  }

  // Field 4: group_id
  if (_has_field_[4]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(4, group_id_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


ProtoLogMessage::ProtoLogMessage() = default;
ProtoLogMessage::~ProtoLogMessage() = default;
ProtoLogMessage::ProtoLogMessage(const ProtoLogMessage&) = default;
ProtoLogMessage& ProtoLogMessage::operator=(const ProtoLogMessage&) = default;
ProtoLogMessage::ProtoLogMessage(ProtoLogMessage&&) noexcept = default;
ProtoLogMessage& ProtoLogMessage::operator=(ProtoLogMessage&&) = default;

bool ProtoLogMessage::operator==(const ProtoLogMessage& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(message_id_, other.message_id_)
   && ::protozero::internal::gen_helpers::EqualsField(str_param_iids_, other.str_param_iids_)
   && ::protozero::internal::gen_helpers::EqualsField(sint64_params_, other.sint64_params_)
   && ::protozero::internal::gen_helpers::EqualsField(double_params_, other.double_params_)
   && ::protozero::internal::gen_helpers::EqualsField(boolean_params_, other.boolean_params_)
   && ::protozero::internal::gen_helpers::EqualsField(stacktrace_iid_, other.stacktrace_iid_);
}

bool ProtoLogMessage::ParseFromArray(const void* raw, size_t size) {
  str_param_iids_.clear();
  sint64_params_.clear();
  double_params_.clear();
  boolean_params_.clear();
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* message_id */:
        field.get(&message_id_);
        break;
      case 2 /* str_param_iids */:
        str_param_iids_.emplace_back();
        field.get(&str_param_iids_.back());
        break;
      case 3 /* sint64_params */:
        sint64_params_.emplace_back();
        field.get_signed(&sint64_params_.back());
        break;
      case 4 /* double_params */:
        double_params_.emplace_back();
        field.get(&double_params_.back());
        break;
      case 5 /* boolean_params */:
        boolean_params_.emplace_back();
        field.get(&boolean_params_.back());
        break;
      case 6 /* stacktrace_iid */:
        field.get(&stacktrace_iid_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string ProtoLogMessage::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> ProtoLogMessage::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void ProtoLogMessage::Serialize(::protozero::Message* msg) const {
  // Field 1: message_id
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeFixed(1, message_id_, msg);
  }

  // Field 2: str_param_iids
  for (auto& it : str_param_iids_) {
    ::protozero::internal::gen_helpers::SerializeVarInt(2, it, msg);
  }

  // Field 3: sint64_params
  for (auto& it : sint64_params_) {
    ::protozero::internal::gen_helpers::SerializeSignedVarInt(3, it, msg);
  }

  // Field 4: double_params
  for (auto& it : double_params_) {
    ::protozero::internal::gen_helpers::SerializeFixed(4, it, msg);
  }

  // Field 5: boolean_params
  for (auto& it : boolean_params_) {
    ::protozero::internal::gen_helpers::SerializeVarInt(5, it, msg);
  }

  // Field 6: stacktrace_iid
  if (_has_field_[6]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(6, stacktrace_iid_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}

}  // namespace perfetto
}  // namespace protos
}  // namespace gen
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif
