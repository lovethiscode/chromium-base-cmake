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
#include "protos/perfetto/trace/system_info/cpu_info.gen.h"

namespace perfetto {
namespace protos {
namespace gen {

CpuInfo::CpuInfo() = default;
CpuInfo::~CpuInfo() = default;
CpuInfo::CpuInfo(const CpuInfo&) = default;
CpuInfo& CpuInfo::operator=(const CpuInfo&) = default;
CpuInfo::CpuInfo(CpuInfo&&) noexcept = default;
CpuInfo& CpuInfo::operator=(CpuInfo&&) = default;

bool CpuInfo::operator==(const CpuInfo& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(cpus_, other.cpus_);
}

int CpuInfo::cpus_size() const { return static_cast<int>(cpus_.size()); }
void CpuInfo::clear_cpus() { cpus_.clear(); }
CpuInfo_Cpu* CpuInfo::add_cpus() { cpus_.emplace_back(); return &cpus_.back(); }
bool CpuInfo::ParseFromArray(const void* raw, size_t size) {
  cpus_.clear();
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* cpus */:
        cpus_.emplace_back();
        cpus_.back().ParseFromArray(field.data(), field.size());
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string CpuInfo::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> CpuInfo::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void CpuInfo::Serialize(::protozero::Message* msg) const {
  // Field 1: cpus
  for (auto& it : cpus_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(1));
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


CpuInfo_Cpu::CpuInfo_Cpu() = default;
CpuInfo_Cpu::~CpuInfo_Cpu() = default;
CpuInfo_Cpu::CpuInfo_Cpu(const CpuInfo_Cpu&) = default;
CpuInfo_Cpu& CpuInfo_Cpu::operator=(const CpuInfo_Cpu&) = default;
CpuInfo_Cpu::CpuInfo_Cpu(CpuInfo_Cpu&&) noexcept = default;
CpuInfo_Cpu& CpuInfo_Cpu::operator=(CpuInfo_Cpu&&) = default;

bool CpuInfo_Cpu::operator==(const CpuInfo_Cpu& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(processor_, other.processor_)
   && ::protozero::internal::gen_helpers::EqualsField(frequencies_, other.frequencies_);
}

bool CpuInfo_Cpu::ParseFromArray(const void* raw, size_t size) {
  frequencies_.clear();
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* processor */:
        ::protozero::internal::gen_helpers::DeserializeString(field, &processor_);
        break;
      case 2 /* frequencies */:
        frequencies_.emplace_back();
        field.get(&frequencies_.back());
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string CpuInfo_Cpu::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> CpuInfo_Cpu::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void CpuInfo_Cpu::Serialize(::protozero::Message* msg) const {
  // Field 1: processor
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeString(1, processor_, msg);
  }

  // Field 2: frequencies
  for (auto& it : frequencies_) {
    ::protozero::internal::gen_helpers::SerializeVarInt(2, it, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}

}  // namespace perfetto
}  // namespace protos
}  // namespace gen
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif
