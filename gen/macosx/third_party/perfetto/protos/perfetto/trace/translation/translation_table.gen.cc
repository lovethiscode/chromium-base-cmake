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
#include "protos/perfetto/trace/translation/translation_table.gen.h"

namespace perfetto {
namespace protos {
namespace gen {

ProcessTrackNameTranslationTable::ProcessTrackNameTranslationTable() = default;
ProcessTrackNameTranslationTable::~ProcessTrackNameTranslationTable() = default;
ProcessTrackNameTranslationTable::ProcessTrackNameTranslationTable(const ProcessTrackNameTranslationTable&) = default;
ProcessTrackNameTranslationTable& ProcessTrackNameTranslationTable::operator=(const ProcessTrackNameTranslationTable&) = default;
ProcessTrackNameTranslationTable::ProcessTrackNameTranslationTable(ProcessTrackNameTranslationTable&&) noexcept = default;
ProcessTrackNameTranslationTable& ProcessTrackNameTranslationTable::operator=(ProcessTrackNameTranslationTable&&) = default;

bool ProcessTrackNameTranslationTable::operator==(const ProcessTrackNameTranslationTable& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(raw_to_deobfuscated_name_, other.raw_to_deobfuscated_name_);
}

int ProcessTrackNameTranslationTable::raw_to_deobfuscated_name_size() const { return static_cast<int>(raw_to_deobfuscated_name_.size()); }
void ProcessTrackNameTranslationTable::clear_raw_to_deobfuscated_name() { raw_to_deobfuscated_name_.clear(); }
ProcessTrackNameTranslationTable_RawToDeobfuscatedNameEntry* ProcessTrackNameTranslationTable::add_raw_to_deobfuscated_name() { raw_to_deobfuscated_name_.emplace_back(); return &raw_to_deobfuscated_name_.back(); }
bool ProcessTrackNameTranslationTable::ParseFromArray(const void* raw, size_t size) {
  raw_to_deobfuscated_name_.clear();
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* raw_to_deobfuscated_name */:
        raw_to_deobfuscated_name_.emplace_back();
        raw_to_deobfuscated_name_.back().ParseFromArray(field.data(), field.size());
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string ProcessTrackNameTranslationTable::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> ProcessTrackNameTranslationTable::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void ProcessTrackNameTranslationTable::Serialize(::protozero::Message* msg) const {
  // Field 1: raw_to_deobfuscated_name
  for (auto& it : raw_to_deobfuscated_name_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(1));
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


ProcessTrackNameTranslationTable_RawToDeobfuscatedNameEntry::ProcessTrackNameTranslationTable_RawToDeobfuscatedNameEntry() = default;
ProcessTrackNameTranslationTable_RawToDeobfuscatedNameEntry::~ProcessTrackNameTranslationTable_RawToDeobfuscatedNameEntry() = default;
ProcessTrackNameTranslationTable_RawToDeobfuscatedNameEntry::ProcessTrackNameTranslationTable_RawToDeobfuscatedNameEntry(const ProcessTrackNameTranslationTable_RawToDeobfuscatedNameEntry&) = default;
ProcessTrackNameTranslationTable_RawToDeobfuscatedNameEntry& ProcessTrackNameTranslationTable_RawToDeobfuscatedNameEntry::operator=(const ProcessTrackNameTranslationTable_RawToDeobfuscatedNameEntry&) = default;
ProcessTrackNameTranslationTable_RawToDeobfuscatedNameEntry::ProcessTrackNameTranslationTable_RawToDeobfuscatedNameEntry(ProcessTrackNameTranslationTable_RawToDeobfuscatedNameEntry&&) noexcept = default;
ProcessTrackNameTranslationTable_RawToDeobfuscatedNameEntry& ProcessTrackNameTranslationTable_RawToDeobfuscatedNameEntry::operator=(ProcessTrackNameTranslationTable_RawToDeobfuscatedNameEntry&&) = default;

bool ProcessTrackNameTranslationTable_RawToDeobfuscatedNameEntry::operator==(const ProcessTrackNameTranslationTable_RawToDeobfuscatedNameEntry& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(key_, other.key_)
   && ::protozero::internal::gen_helpers::EqualsField(value_, other.value_);
}

bool ProcessTrackNameTranslationTable_RawToDeobfuscatedNameEntry::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* key */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &key_);
        break;
      case 2 /* value */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &value_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string ProcessTrackNameTranslationTable_RawToDeobfuscatedNameEntry::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> ProcessTrackNameTranslationTable_RawToDeobfuscatedNameEntry::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void ProcessTrackNameTranslationTable_RawToDeobfuscatedNameEntry::Serialize(::protozero::Message* msg) const {
  // Field 1: key
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeString(1, key_, msg);
  }

  // Field 2: value
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeString(2, value_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


SliceNameTranslationTable::SliceNameTranslationTable() = default;
SliceNameTranslationTable::~SliceNameTranslationTable() = default;
SliceNameTranslationTable::SliceNameTranslationTable(const SliceNameTranslationTable&) = default;
SliceNameTranslationTable& SliceNameTranslationTable::operator=(const SliceNameTranslationTable&) = default;
SliceNameTranslationTable::SliceNameTranslationTable(SliceNameTranslationTable&&) noexcept = default;
SliceNameTranslationTable& SliceNameTranslationTable::operator=(SliceNameTranslationTable&&) = default;

bool SliceNameTranslationTable::operator==(const SliceNameTranslationTable& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(raw_to_deobfuscated_name_, other.raw_to_deobfuscated_name_);
}

int SliceNameTranslationTable::raw_to_deobfuscated_name_size() const { return static_cast<int>(raw_to_deobfuscated_name_.size()); }
void SliceNameTranslationTable::clear_raw_to_deobfuscated_name() { raw_to_deobfuscated_name_.clear(); }
SliceNameTranslationTable_RawToDeobfuscatedNameEntry* SliceNameTranslationTable::add_raw_to_deobfuscated_name() { raw_to_deobfuscated_name_.emplace_back(); return &raw_to_deobfuscated_name_.back(); }
bool SliceNameTranslationTable::ParseFromArray(const void* raw, size_t size) {
  raw_to_deobfuscated_name_.clear();
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* raw_to_deobfuscated_name */:
        raw_to_deobfuscated_name_.emplace_back();
        raw_to_deobfuscated_name_.back().ParseFromArray(field.data(), field.size());
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string SliceNameTranslationTable::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> SliceNameTranslationTable::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void SliceNameTranslationTable::Serialize(::protozero::Message* msg) const {
  // Field 1: raw_to_deobfuscated_name
  for (auto& it : raw_to_deobfuscated_name_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(1));
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


SliceNameTranslationTable_RawToDeobfuscatedNameEntry::SliceNameTranslationTable_RawToDeobfuscatedNameEntry() = default;
SliceNameTranslationTable_RawToDeobfuscatedNameEntry::~SliceNameTranslationTable_RawToDeobfuscatedNameEntry() = default;
SliceNameTranslationTable_RawToDeobfuscatedNameEntry::SliceNameTranslationTable_RawToDeobfuscatedNameEntry(const SliceNameTranslationTable_RawToDeobfuscatedNameEntry&) = default;
SliceNameTranslationTable_RawToDeobfuscatedNameEntry& SliceNameTranslationTable_RawToDeobfuscatedNameEntry::operator=(const SliceNameTranslationTable_RawToDeobfuscatedNameEntry&) = default;
SliceNameTranslationTable_RawToDeobfuscatedNameEntry::SliceNameTranslationTable_RawToDeobfuscatedNameEntry(SliceNameTranslationTable_RawToDeobfuscatedNameEntry&&) noexcept = default;
SliceNameTranslationTable_RawToDeobfuscatedNameEntry& SliceNameTranslationTable_RawToDeobfuscatedNameEntry::operator=(SliceNameTranslationTable_RawToDeobfuscatedNameEntry&&) = default;

bool SliceNameTranslationTable_RawToDeobfuscatedNameEntry::operator==(const SliceNameTranslationTable_RawToDeobfuscatedNameEntry& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(key_, other.key_)
   && ::protozero::internal::gen_helpers::EqualsField(value_, other.value_);
}

bool SliceNameTranslationTable_RawToDeobfuscatedNameEntry::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* key */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &key_);
        break;
      case 2 /* value */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &value_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string SliceNameTranslationTable_RawToDeobfuscatedNameEntry::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> SliceNameTranslationTable_RawToDeobfuscatedNameEntry::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void SliceNameTranslationTable_RawToDeobfuscatedNameEntry::Serialize(::protozero::Message* msg) const {
  // Field 1: key
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeString(1, key_, msg);
  }

  // Field 2: value
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeString(2, value_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


ChromePerformanceMarkTranslationTable::ChromePerformanceMarkTranslationTable() = default;
ChromePerformanceMarkTranslationTable::~ChromePerformanceMarkTranslationTable() = default;
ChromePerformanceMarkTranslationTable::ChromePerformanceMarkTranslationTable(const ChromePerformanceMarkTranslationTable&) = default;
ChromePerformanceMarkTranslationTable& ChromePerformanceMarkTranslationTable::operator=(const ChromePerformanceMarkTranslationTable&) = default;
ChromePerformanceMarkTranslationTable::ChromePerformanceMarkTranslationTable(ChromePerformanceMarkTranslationTable&&) noexcept = default;
ChromePerformanceMarkTranslationTable& ChromePerformanceMarkTranslationTable::operator=(ChromePerformanceMarkTranslationTable&&) = default;

bool ChromePerformanceMarkTranslationTable::operator==(const ChromePerformanceMarkTranslationTable& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(site_hash_to_name_, other.site_hash_to_name_)
   && ::protozero::internal::gen_helpers::EqualsField(mark_hash_to_name_, other.mark_hash_to_name_);
}

int ChromePerformanceMarkTranslationTable::site_hash_to_name_size() const { return static_cast<int>(site_hash_to_name_.size()); }
void ChromePerformanceMarkTranslationTable::clear_site_hash_to_name() { site_hash_to_name_.clear(); }
ChromePerformanceMarkTranslationTable_SiteHashToNameEntry* ChromePerformanceMarkTranslationTable::add_site_hash_to_name() { site_hash_to_name_.emplace_back(); return &site_hash_to_name_.back(); }
int ChromePerformanceMarkTranslationTable::mark_hash_to_name_size() const { return static_cast<int>(mark_hash_to_name_.size()); }
void ChromePerformanceMarkTranslationTable::clear_mark_hash_to_name() { mark_hash_to_name_.clear(); }
ChromePerformanceMarkTranslationTable_MarkHashToNameEntry* ChromePerformanceMarkTranslationTable::add_mark_hash_to_name() { mark_hash_to_name_.emplace_back(); return &mark_hash_to_name_.back(); }
bool ChromePerformanceMarkTranslationTable::ParseFromArray(const void* raw, size_t size) {
  site_hash_to_name_.clear();
  mark_hash_to_name_.clear();
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* site_hash_to_name */:
        site_hash_to_name_.emplace_back();
        site_hash_to_name_.back().ParseFromArray(field.data(), field.size());
        break;
      case 2 /* mark_hash_to_name */:
        mark_hash_to_name_.emplace_back();
        mark_hash_to_name_.back().ParseFromArray(field.data(), field.size());
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string ChromePerformanceMarkTranslationTable::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> ChromePerformanceMarkTranslationTable::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void ChromePerformanceMarkTranslationTable::Serialize(::protozero::Message* msg) const {
  // Field 1: site_hash_to_name
  for (auto& it : site_hash_to_name_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(1));
  }

  // Field 2: mark_hash_to_name
  for (auto& it : mark_hash_to_name_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(2));
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


ChromePerformanceMarkTranslationTable_MarkHashToNameEntry::ChromePerformanceMarkTranslationTable_MarkHashToNameEntry() = default;
ChromePerformanceMarkTranslationTable_MarkHashToNameEntry::~ChromePerformanceMarkTranslationTable_MarkHashToNameEntry() = default;
ChromePerformanceMarkTranslationTable_MarkHashToNameEntry::ChromePerformanceMarkTranslationTable_MarkHashToNameEntry(const ChromePerformanceMarkTranslationTable_MarkHashToNameEntry&) = default;
ChromePerformanceMarkTranslationTable_MarkHashToNameEntry& ChromePerformanceMarkTranslationTable_MarkHashToNameEntry::operator=(const ChromePerformanceMarkTranslationTable_MarkHashToNameEntry&) = default;
ChromePerformanceMarkTranslationTable_MarkHashToNameEntry::ChromePerformanceMarkTranslationTable_MarkHashToNameEntry(ChromePerformanceMarkTranslationTable_MarkHashToNameEntry&&) noexcept = default;
ChromePerformanceMarkTranslationTable_MarkHashToNameEntry& ChromePerformanceMarkTranslationTable_MarkHashToNameEntry::operator=(ChromePerformanceMarkTranslationTable_MarkHashToNameEntry&&) = default;

bool ChromePerformanceMarkTranslationTable_MarkHashToNameEntry::operator==(const ChromePerformanceMarkTranslationTable_MarkHashToNameEntry& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(key_, other.key_)
   && ::protozero::internal::gen_helpers::EqualsField(value_, other.value_);
}

bool ChromePerformanceMarkTranslationTable_MarkHashToNameEntry::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* key */:
        field.get(&key_);
        break;
      case 2 /* value */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &value_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string ChromePerformanceMarkTranslationTable_MarkHashToNameEntry::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> ChromePerformanceMarkTranslationTable_MarkHashToNameEntry::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void ChromePerformanceMarkTranslationTable_MarkHashToNameEntry::Serialize(::protozero::Message* msg) const {
  // Field 1: key
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(1, key_, msg);
  }

  // Field 2: value
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeString(2, value_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


ChromePerformanceMarkTranslationTable_SiteHashToNameEntry::ChromePerformanceMarkTranslationTable_SiteHashToNameEntry() = default;
ChromePerformanceMarkTranslationTable_SiteHashToNameEntry::~ChromePerformanceMarkTranslationTable_SiteHashToNameEntry() = default;
ChromePerformanceMarkTranslationTable_SiteHashToNameEntry::ChromePerformanceMarkTranslationTable_SiteHashToNameEntry(const ChromePerformanceMarkTranslationTable_SiteHashToNameEntry&) = default;
ChromePerformanceMarkTranslationTable_SiteHashToNameEntry& ChromePerformanceMarkTranslationTable_SiteHashToNameEntry::operator=(const ChromePerformanceMarkTranslationTable_SiteHashToNameEntry&) = default;
ChromePerformanceMarkTranslationTable_SiteHashToNameEntry::ChromePerformanceMarkTranslationTable_SiteHashToNameEntry(ChromePerformanceMarkTranslationTable_SiteHashToNameEntry&&) noexcept = default;
ChromePerformanceMarkTranslationTable_SiteHashToNameEntry& ChromePerformanceMarkTranslationTable_SiteHashToNameEntry::operator=(ChromePerformanceMarkTranslationTable_SiteHashToNameEntry&&) = default;

bool ChromePerformanceMarkTranslationTable_SiteHashToNameEntry::operator==(const ChromePerformanceMarkTranslationTable_SiteHashToNameEntry& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(key_, other.key_)
   && ::protozero::internal::gen_helpers::EqualsField(value_, other.value_);
}

bool ChromePerformanceMarkTranslationTable_SiteHashToNameEntry::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* key */:
        field.get(&key_);
        break;
      case 2 /* value */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &value_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string ChromePerformanceMarkTranslationTable_SiteHashToNameEntry::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> ChromePerformanceMarkTranslationTable_SiteHashToNameEntry::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void ChromePerformanceMarkTranslationTable_SiteHashToNameEntry::Serialize(::protozero::Message* msg) const {
  // Field 1: key
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(1, key_, msg);
  }

  // Field 2: value
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeString(2, value_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


ChromeUserEventTranslationTable::ChromeUserEventTranslationTable() = default;
ChromeUserEventTranslationTable::~ChromeUserEventTranslationTable() = default;
ChromeUserEventTranslationTable::ChromeUserEventTranslationTable(const ChromeUserEventTranslationTable&) = default;
ChromeUserEventTranslationTable& ChromeUserEventTranslationTable::operator=(const ChromeUserEventTranslationTable&) = default;
ChromeUserEventTranslationTable::ChromeUserEventTranslationTable(ChromeUserEventTranslationTable&&) noexcept = default;
ChromeUserEventTranslationTable& ChromeUserEventTranslationTable::operator=(ChromeUserEventTranslationTable&&) = default;

bool ChromeUserEventTranslationTable::operator==(const ChromeUserEventTranslationTable& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(action_hash_to_name_, other.action_hash_to_name_);
}

int ChromeUserEventTranslationTable::action_hash_to_name_size() const { return static_cast<int>(action_hash_to_name_.size()); }
void ChromeUserEventTranslationTable::clear_action_hash_to_name() { action_hash_to_name_.clear(); }
ChromeUserEventTranslationTable_ActionHashToNameEntry* ChromeUserEventTranslationTable::add_action_hash_to_name() { action_hash_to_name_.emplace_back(); return &action_hash_to_name_.back(); }
bool ChromeUserEventTranslationTable::ParseFromArray(const void* raw, size_t size) {
  action_hash_to_name_.clear();
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* action_hash_to_name */:
        action_hash_to_name_.emplace_back();
        action_hash_to_name_.back().ParseFromArray(field.data(), field.size());
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string ChromeUserEventTranslationTable::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> ChromeUserEventTranslationTable::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void ChromeUserEventTranslationTable::Serialize(::protozero::Message* msg) const {
  // Field 1: action_hash_to_name
  for (auto& it : action_hash_to_name_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(1));
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


ChromeUserEventTranslationTable_ActionHashToNameEntry::ChromeUserEventTranslationTable_ActionHashToNameEntry() = default;
ChromeUserEventTranslationTable_ActionHashToNameEntry::~ChromeUserEventTranslationTable_ActionHashToNameEntry() = default;
ChromeUserEventTranslationTable_ActionHashToNameEntry::ChromeUserEventTranslationTable_ActionHashToNameEntry(const ChromeUserEventTranslationTable_ActionHashToNameEntry&) = default;
ChromeUserEventTranslationTable_ActionHashToNameEntry& ChromeUserEventTranslationTable_ActionHashToNameEntry::operator=(const ChromeUserEventTranslationTable_ActionHashToNameEntry&) = default;
ChromeUserEventTranslationTable_ActionHashToNameEntry::ChromeUserEventTranslationTable_ActionHashToNameEntry(ChromeUserEventTranslationTable_ActionHashToNameEntry&&) noexcept = default;
ChromeUserEventTranslationTable_ActionHashToNameEntry& ChromeUserEventTranslationTable_ActionHashToNameEntry::operator=(ChromeUserEventTranslationTable_ActionHashToNameEntry&&) = default;

bool ChromeUserEventTranslationTable_ActionHashToNameEntry::operator==(const ChromeUserEventTranslationTable_ActionHashToNameEntry& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(key_, other.key_)
   && ::protozero::internal::gen_helpers::EqualsField(value_, other.value_);
}

bool ChromeUserEventTranslationTable_ActionHashToNameEntry::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* key */:
        field.get(&key_);
        break;
      case 2 /* value */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &value_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string ChromeUserEventTranslationTable_ActionHashToNameEntry::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> ChromeUserEventTranslationTable_ActionHashToNameEntry::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void ChromeUserEventTranslationTable_ActionHashToNameEntry::Serialize(::protozero::Message* msg) const {
  // Field 1: key
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(1, key_, msg);
  }

  // Field 2: value
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeString(2, value_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


ChromeHistorgramTranslationTable::ChromeHistorgramTranslationTable() = default;
ChromeHistorgramTranslationTable::~ChromeHistorgramTranslationTable() = default;
ChromeHistorgramTranslationTable::ChromeHistorgramTranslationTable(const ChromeHistorgramTranslationTable&) = default;
ChromeHistorgramTranslationTable& ChromeHistorgramTranslationTable::operator=(const ChromeHistorgramTranslationTable&) = default;
ChromeHistorgramTranslationTable::ChromeHistorgramTranslationTable(ChromeHistorgramTranslationTable&&) noexcept = default;
ChromeHistorgramTranslationTable& ChromeHistorgramTranslationTable::operator=(ChromeHistorgramTranslationTable&&) = default;

bool ChromeHistorgramTranslationTable::operator==(const ChromeHistorgramTranslationTable& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(hash_to_name_, other.hash_to_name_);
}

int ChromeHistorgramTranslationTable::hash_to_name_size() const { return static_cast<int>(hash_to_name_.size()); }
void ChromeHistorgramTranslationTable::clear_hash_to_name() { hash_to_name_.clear(); }
ChromeHistorgramTranslationTable_HashToNameEntry* ChromeHistorgramTranslationTable::add_hash_to_name() { hash_to_name_.emplace_back(); return &hash_to_name_.back(); }
bool ChromeHistorgramTranslationTable::ParseFromArray(const void* raw, size_t size) {
  hash_to_name_.clear();
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* hash_to_name */:
        hash_to_name_.emplace_back();
        hash_to_name_.back().ParseFromArray(field.data(), field.size());
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string ChromeHistorgramTranslationTable::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> ChromeHistorgramTranslationTable::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void ChromeHistorgramTranslationTable::Serialize(::protozero::Message* msg) const {
  // Field 1: hash_to_name
  for (auto& it : hash_to_name_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(1));
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


ChromeHistorgramTranslationTable_HashToNameEntry::ChromeHistorgramTranslationTable_HashToNameEntry() = default;
ChromeHistorgramTranslationTable_HashToNameEntry::~ChromeHistorgramTranslationTable_HashToNameEntry() = default;
ChromeHistorgramTranslationTable_HashToNameEntry::ChromeHistorgramTranslationTable_HashToNameEntry(const ChromeHistorgramTranslationTable_HashToNameEntry&) = default;
ChromeHistorgramTranslationTable_HashToNameEntry& ChromeHistorgramTranslationTable_HashToNameEntry::operator=(const ChromeHistorgramTranslationTable_HashToNameEntry&) = default;
ChromeHistorgramTranslationTable_HashToNameEntry::ChromeHistorgramTranslationTable_HashToNameEntry(ChromeHistorgramTranslationTable_HashToNameEntry&&) noexcept = default;
ChromeHistorgramTranslationTable_HashToNameEntry& ChromeHistorgramTranslationTable_HashToNameEntry::operator=(ChromeHistorgramTranslationTable_HashToNameEntry&&) = default;

bool ChromeHistorgramTranslationTable_HashToNameEntry::operator==(const ChromeHistorgramTranslationTable_HashToNameEntry& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(key_, other.key_)
   && ::protozero::internal::gen_helpers::EqualsField(value_, other.value_);
}

bool ChromeHistorgramTranslationTable_HashToNameEntry::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* key */:
        field.get(&key_);
        break;
      case 2 /* value */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &value_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string ChromeHistorgramTranslationTable_HashToNameEntry::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> ChromeHistorgramTranslationTable_HashToNameEntry::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void ChromeHistorgramTranslationTable_HashToNameEntry::Serialize(::protozero::Message* msg) const {
  // Field 1: key
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(1, key_, msg);
  }

  // Field 2: value
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeString(2, value_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


TranslationTable::TranslationTable() = default;
TranslationTable::~TranslationTable() = default;
TranslationTable::TranslationTable(const TranslationTable&) = default;
TranslationTable& TranslationTable::operator=(const TranslationTable&) = default;
TranslationTable::TranslationTable(TranslationTable&&) noexcept = default;
TranslationTable& TranslationTable::operator=(TranslationTable&&) = default;

bool TranslationTable::operator==(const TranslationTable& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(chrome_histogram_, other.chrome_histogram_)
   && ::protozero::internal::gen_helpers::EqualsField(chrome_user_event_, other.chrome_user_event_)
   && ::protozero::internal::gen_helpers::EqualsField(chrome_performance_mark_, other.chrome_performance_mark_)
   && ::protozero::internal::gen_helpers::EqualsField(slice_name_, other.slice_name_)
   && ::protozero::internal::gen_helpers::EqualsField(process_track_name_, other.process_track_name_);
}

bool TranslationTable::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* chrome_histogram */:
        (*chrome_histogram_).ParseFromArray(field.data(), field.size());
        break;
      case 2 /* chrome_user_event */:
        (*chrome_user_event_).ParseFromArray(field.data(), field.size());
        break;
      case 3 /* chrome_performance_mark */:
        (*chrome_performance_mark_).ParseFromArray(field.data(), field.size());
        break;
      case 4 /* slice_name */:
        (*slice_name_).ParseFromArray(field.data(), field.size());
        break;
      case 5 /* process_track_name */:
        (*process_track_name_).ParseFromArray(field.data(), field.size());
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string TranslationTable::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> TranslationTable::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void TranslationTable::Serialize(::protozero::Message* msg) const {
  // Field 1: chrome_histogram
  if (_has_field_[1]) {
    (*chrome_histogram_).Serialize(msg->BeginNestedMessage<::protozero::Message>(1));
  }

  // Field 2: chrome_user_event
  if (_has_field_[2]) {
    (*chrome_user_event_).Serialize(msg->BeginNestedMessage<::protozero::Message>(2));
  }

  // Field 3: chrome_performance_mark
  if (_has_field_[3]) {
    (*chrome_performance_mark_).Serialize(msg->BeginNestedMessage<::protozero::Message>(3));
  }

  // Field 4: slice_name
  if (_has_field_[4]) {
    (*slice_name_).Serialize(msg->BeginNestedMessage<::protozero::Message>(4));
  }

  // Field 5: process_track_name
  if (_has_field_[5]) {
    (*process_track_name_).Serialize(msg->BeginNestedMessage<::protozero::Message>(5));
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}

}  // namespace perfetto
}  // namespace protos
}  // namespace gen
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif
