// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/power/battery_counters.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fpower_2fbattery_5fcounters_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fpower_2fbattery_5fcounters_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021012 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2ftrace_2fpower_2fbattery_5fcounters_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2ftrace_2fpower_2fbattery_5fcounters_2eproto {
  static const uint32_t offsets[];
};
namespace perfetto {
namespace protos {
class BatteryCounters;
struct BatteryCountersDefaultTypeInternal;
extern BatteryCountersDefaultTypeInternal _BatteryCounters_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> ::perfetto::protos::BatteryCounters* Arena::CreateMaybeMessage<::perfetto::protos::BatteryCounters>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace perfetto {
namespace protos {

// ===================================================================

class BatteryCounters final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.BatteryCounters) */ {
 public:
  inline BatteryCounters() : BatteryCounters(nullptr) {}
  ~BatteryCounters() override;
  explicit PROTOBUF_CONSTEXPR BatteryCounters(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  BatteryCounters(const BatteryCounters& from);
  BatteryCounters(BatteryCounters&& from) noexcept
    : BatteryCounters() {
    *this = ::std::move(from);
  }

  inline BatteryCounters& operator=(const BatteryCounters& from) {
    CopyFrom(from);
    return *this;
  }
  inline BatteryCounters& operator=(BatteryCounters&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString);
  }
  inline std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<std::string>();
  }

  static const BatteryCounters& default_instance() {
    return *internal_default_instance();
  }
  static inline const BatteryCounters* internal_default_instance() {
    return reinterpret_cast<const BatteryCounters*>(
               &_BatteryCounters_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(BatteryCounters& a, BatteryCounters& b) {
    a.Swap(&b);
  }
  PROTOBUF_NOINLINE void Swap(BatteryCounters* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(BatteryCounters* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  BatteryCounters* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<BatteryCounters>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const BatteryCounters& from);
  void MergeFrom(const BatteryCounters& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(BatteryCounters* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.BatteryCounters";
  }
  protected:
  explicit BatteryCounters(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 5,
    kChargeCounterUahFieldNumber = 1,
    kCurrentUaFieldNumber = 3,
    kCurrentAvgUaFieldNumber = 4,
    kEnergyCounterUwhFieldNumber = 6,
    kVoltageUvFieldNumber = 7,
    kCapacityPercentFieldNumber = 2,
  };
  // optional string name = 5;
  bool has_name() const;
  private:
  bool _internal_has_name() const;
  public:
  void clear_name();
  const std::string& name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_name();
  PROTOBUF_NODISCARD std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // optional int64 charge_counter_uah = 1;
  bool has_charge_counter_uah() const;
  private:
  bool _internal_has_charge_counter_uah() const;
  public:
  void clear_charge_counter_uah();
  int64_t charge_counter_uah() const;
  void set_charge_counter_uah(int64_t value);
  private:
  int64_t _internal_charge_counter_uah() const;
  void _internal_set_charge_counter_uah(int64_t value);
  public:

  // optional int64 current_ua = 3;
  bool has_current_ua() const;
  private:
  bool _internal_has_current_ua() const;
  public:
  void clear_current_ua();
  int64_t current_ua() const;
  void set_current_ua(int64_t value);
  private:
  int64_t _internal_current_ua() const;
  void _internal_set_current_ua(int64_t value);
  public:

  // optional int64 current_avg_ua = 4;
  bool has_current_avg_ua() const;
  private:
  bool _internal_has_current_avg_ua() const;
  public:
  void clear_current_avg_ua();
  int64_t current_avg_ua() const;
  void set_current_avg_ua(int64_t value);
  private:
  int64_t _internal_current_avg_ua() const;
  void _internal_set_current_avg_ua(int64_t value);
  public:

  // optional int64 energy_counter_uwh = 6;
  bool has_energy_counter_uwh() const;
  private:
  bool _internal_has_energy_counter_uwh() const;
  public:
  void clear_energy_counter_uwh();
  int64_t energy_counter_uwh() const;
  void set_energy_counter_uwh(int64_t value);
  private:
  int64_t _internal_energy_counter_uwh() const;
  void _internal_set_energy_counter_uwh(int64_t value);
  public:

  // optional int64 voltage_uv = 7;
  bool has_voltage_uv() const;
  private:
  bool _internal_has_voltage_uv() const;
  public:
  void clear_voltage_uv();
  int64_t voltage_uv() const;
  void set_voltage_uv(int64_t value);
  private:
  int64_t _internal_voltage_uv() const;
  void _internal_set_voltage_uv(int64_t value);
  public:

  // optional float capacity_percent = 2;
  bool has_capacity_percent() const;
  private:
  bool _internal_has_capacity_percent() const;
  public:
  void clear_capacity_percent();
  float capacity_percent() const;
  void set_capacity_percent(float value);
  private:
  float _internal_capacity_percent() const;
  void _internal_set_capacity_percent(float value);
  public:

  // @@protoc_insertion_point(class_scope:perfetto.protos.BatteryCounters)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
    int64_t charge_counter_uah_;
    int64_t current_ua_;
    int64_t current_avg_ua_;
    int64_t energy_counter_uwh_;
    int64_t voltage_uv_;
    float capacity_percent_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2fpower_2fbattery_5fcounters_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// BatteryCounters

// optional int64 charge_counter_uah = 1;
inline bool BatteryCounters::_internal_has_charge_counter_uah() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool BatteryCounters::has_charge_counter_uah() const {
  return _internal_has_charge_counter_uah();
}
inline void BatteryCounters::clear_charge_counter_uah() {
  _impl_.charge_counter_uah_ = int64_t{0};
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline int64_t BatteryCounters::_internal_charge_counter_uah() const {
  return _impl_.charge_counter_uah_;
}
inline int64_t BatteryCounters::charge_counter_uah() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.BatteryCounters.charge_counter_uah)
  return _internal_charge_counter_uah();
}
inline void BatteryCounters::_internal_set_charge_counter_uah(int64_t value) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.charge_counter_uah_ = value;
}
inline void BatteryCounters::set_charge_counter_uah(int64_t value) {
  _internal_set_charge_counter_uah(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.BatteryCounters.charge_counter_uah)
}

// optional float capacity_percent = 2;
inline bool BatteryCounters::_internal_has_capacity_percent() const {
  bool value = (_impl_._has_bits_[0] & 0x00000040u) != 0;
  return value;
}
inline bool BatteryCounters::has_capacity_percent() const {
  return _internal_has_capacity_percent();
}
inline void BatteryCounters::clear_capacity_percent() {
  _impl_.capacity_percent_ = 0;
  _impl_._has_bits_[0] &= ~0x00000040u;
}
inline float BatteryCounters::_internal_capacity_percent() const {
  return _impl_.capacity_percent_;
}
inline float BatteryCounters::capacity_percent() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.BatteryCounters.capacity_percent)
  return _internal_capacity_percent();
}
inline void BatteryCounters::_internal_set_capacity_percent(float value) {
  _impl_._has_bits_[0] |= 0x00000040u;
  _impl_.capacity_percent_ = value;
}
inline void BatteryCounters::set_capacity_percent(float value) {
  _internal_set_capacity_percent(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.BatteryCounters.capacity_percent)
}

// optional int64 current_ua = 3;
inline bool BatteryCounters::_internal_has_current_ua() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool BatteryCounters::has_current_ua() const {
  return _internal_has_current_ua();
}
inline void BatteryCounters::clear_current_ua() {
  _impl_.current_ua_ = int64_t{0};
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline int64_t BatteryCounters::_internal_current_ua() const {
  return _impl_.current_ua_;
}
inline int64_t BatteryCounters::current_ua() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.BatteryCounters.current_ua)
  return _internal_current_ua();
}
inline void BatteryCounters::_internal_set_current_ua(int64_t value) {
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.current_ua_ = value;
}
inline void BatteryCounters::set_current_ua(int64_t value) {
  _internal_set_current_ua(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.BatteryCounters.current_ua)
}

// optional int64 current_avg_ua = 4;
inline bool BatteryCounters::_internal_has_current_avg_ua() const {
  bool value = (_impl_._has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool BatteryCounters::has_current_avg_ua() const {
  return _internal_has_current_avg_ua();
}
inline void BatteryCounters::clear_current_avg_ua() {
  _impl_.current_avg_ua_ = int64_t{0};
  _impl_._has_bits_[0] &= ~0x00000008u;
}
inline int64_t BatteryCounters::_internal_current_avg_ua() const {
  return _impl_.current_avg_ua_;
}
inline int64_t BatteryCounters::current_avg_ua() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.BatteryCounters.current_avg_ua)
  return _internal_current_avg_ua();
}
inline void BatteryCounters::_internal_set_current_avg_ua(int64_t value) {
  _impl_._has_bits_[0] |= 0x00000008u;
  _impl_.current_avg_ua_ = value;
}
inline void BatteryCounters::set_current_avg_ua(int64_t value) {
  _internal_set_current_avg_ua(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.BatteryCounters.current_avg_ua)
}

// optional string name = 5;
inline bool BatteryCounters::_internal_has_name() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool BatteryCounters::has_name() const {
  return _internal_has_name();
}
inline void BatteryCounters::clear_name() {
  _impl_.name_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& BatteryCounters::name() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.BatteryCounters.name)
  return _internal_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void BatteryCounters::set_name(ArgT0&& arg0, ArgT... args) {
 _impl_._has_bits_[0] |= 0x00000001u;
 _impl_.name_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:perfetto.protos.BatteryCounters.name)
}
inline std::string* BatteryCounters::mutable_name() {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:perfetto.protos.BatteryCounters.name)
  return _s;
}
inline const std::string& BatteryCounters::_internal_name() const {
  return _impl_.name_.Get();
}
inline void BatteryCounters::_internal_set_name(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.name_.Set(value, GetArenaForAllocation());
}
inline std::string* BatteryCounters::_internal_mutable_name() {
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.name_.Mutable(GetArenaForAllocation());
}
inline std::string* BatteryCounters::release_name() {
  // @@protoc_insertion_point(field_release:perfetto.protos.BatteryCounters.name)
  if (!_internal_has_name()) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* p = _impl_.name_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.name_.IsDefault()) {
    _impl_.name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void BatteryCounters::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.name_.SetAllocated(name, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.name_.IsDefault()) {
    _impl_.name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.BatteryCounters.name)
}

// optional int64 energy_counter_uwh = 6;
inline bool BatteryCounters::_internal_has_energy_counter_uwh() const {
  bool value = (_impl_._has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool BatteryCounters::has_energy_counter_uwh() const {
  return _internal_has_energy_counter_uwh();
}
inline void BatteryCounters::clear_energy_counter_uwh() {
  _impl_.energy_counter_uwh_ = int64_t{0};
  _impl_._has_bits_[0] &= ~0x00000010u;
}
inline int64_t BatteryCounters::_internal_energy_counter_uwh() const {
  return _impl_.energy_counter_uwh_;
}
inline int64_t BatteryCounters::energy_counter_uwh() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.BatteryCounters.energy_counter_uwh)
  return _internal_energy_counter_uwh();
}
inline void BatteryCounters::_internal_set_energy_counter_uwh(int64_t value) {
  _impl_._has_bits_[0] |= 0x00000010u;
  _impl_.energy_counter_uwh_ = value;
}
inline void BatteryCounters::set_energy_counter_uwh(int64_t value) {
  _internal_set_energy_counter_uwh(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.BatteryCounters.energy_counter_uwh)
}

// optional int64 voltage_uv = 7;
inline bool BatteryCounters::_internal_has_voltage_uv() const {
  bool value = (_impl_._has_bits_[0] & 0x00000020u) != 0;
  return value;
}
inline bool BatteryCounters::has_voltage_uv() const {
  return _internal_has_voltage_uv();
}
inline void BatteryCounters::clear_voltage_uv() {
  _impl_.voltage_uv_ = int64_t{0};
  _impl_._has_bits_[0] &= ~0x00000020u;
}
inline int64_t BatteryCounters::_internal_voltage_uv() const {
  return _impl_.voltage_uv_;
}
inline int64_t BatteryCounters::voltage_uv() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.BatteryCounters.voltage_uv)
  return _internal_voltage_uv();
}
inline void BatteryCounters::_internal_set_voltage_uv(int64_t value) {
  _impl_._has_bits_[0] |= 0x00000020u;
  _impl_.voltage_uv_ = value;
}
inline void BatteryCounters::set_voltage_uv(int64_t value) {
  _internal_set_voltage_uv(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.BatteryCounters.voltage_uv)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace perfetto

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fpower_2fbattery_5fcounters_2eproto