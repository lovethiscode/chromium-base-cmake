// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_COMMON_ANDROID_ENERGY_CONSUMER_DESCRIPTOR_PROTO_CPP_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_COMMON_ANDROID_ENERGY_CONSUMER_DESCRIPTOR_PROTO_CPP_H_

#include <stdint.h>
#include <bitset>
#include <vector>
#include <string>
#include <type_traits>

#include "perfetto/protozero/cpp_message_obj.h"
#include "perfetto/protozero/copyable_ptr.h"
#include "perfetto/base/export.h"

namespace perfetto {
namespace protos {
namespace gen {
class AndroidEnergyConsumerDescriptor;
class AndroidEnergyConsumer;
}  // namespace perfetto
}  // namespace protos
}  // namespace gen

namespace protozero {
class Message;
}  // namespace protozero

namespace perfetto {
namespace protos {
namespace gen {

class PERFETTO_EXPORT_COMPONENT AndroidEnergyConsumerDescriptor : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kEnergyConsumersFieldNumber = 1,
  };

  AndroidEnergyConsumerDescriptor();
  ~AndroidEnergyConsumerDescriptor() override;
  AndroidEnergyConsumerDescriptor(AndroidEnergyConsumerDescriptor&&) noexcept;
  AndroidEnergyConsumerDescriptor& operator=(AndroidEnergyConsumerDescriptor&&);
  AndroidEnergyConsumerDescriptor(const AndroidEnergyConsumerDescriptor&);
  AndroidEnergyConsumerDescriptor& operator=(const AndroidEnergyConsumerDescriptor&);
  bool operator==(const AndroidEnergyConsumerDescriptor&) const;
  bool operator!=(const AndroidEnergyConsumerDescriptor& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  const std::vector<AndroidEnergyConsumer>& energy_consumers() const { return energy_consumers_; }
  std::vector<AndroidEnergyConsumer>* mutable_energy_consumers() { return &energy_consumers_; }
  int energy_consumers_size() const;
  void clear_energy_consumers();
  AndroidEnergyConsumer* add_energy_consumers();

 private:
  std::vector<AndroidEnergyConsumer> energy_consumers_;

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<2> _has_field_{};
};


class PERFETTO_EXPORT_COMPONENT AndroidEnergyConsumer : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kEnergyConsumerIdFieldNumber = 1,
    kOrdinalFieldNumber = 2,
    kTypeFieldNumber = 3,
    kNameFieldNumber = 4,
  };

  AndroidEnergyConsumer();
  ~AndroidEnergyConsumer() override;
  AndroidEnergyConsumer(AndroidEnergyConsumer&&) noexcept;
  AndroidEnergyConsumer& operator=(AndroidEnergyConsumer&&);
  AndroidEnergyConsumer(const AndroidEnergyConsumer&);
  AndroidEnergyConsumer& operator=(const AndroidEnergyConsumer&);
  bool operator==(const AndroidEnergyConsumer&) const;
  bool operator!=(const AndroidEnergyConsumer& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_energy_consumer_id() const { return _has_field_[1]; }
  int32_t energy_consumer_id() const { return energy_consumer_id_; }
  void set_energy_consumer_id(int32_t value) { energy_consumer_id_ = value; _has_field_.set(1); }

  bool has_ordinal() const { return _has_field_[2]; }
  int32_t ordinal() const { return ordinal_; }
  void set_ordinal(int32_t value) { ordinal_ = value; _has_field_.set(2); }

  bool has_type() const { return _has_field_[3]; }
  const std::string& type() const { return type_; }
  void set_type(const std::string& value) { type_ = value; _has_field_.set(3); }

  bool has_name() const { return _has_field_[4]; }
  const std::string& name() const { return name_; }
  void set_name(const std::string& value) { name_ = value; _has_field_.set(4); }

 private:
  int32_t energy_consumer_id_{};
  int32_t ordinal_{};
  std::string type_{};
  std::string name_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<5> _has_field_{};
};

}  // namespace perfetto
}  // namespace protos
}  // namespace gen

#endif  // PERFETTO_PROTOS_PROTOS_PERFETTO_COMMON_ANDROID_ENERGY_CONSUMER_DESCRIPTOR_PROTO_CPP_H_