// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/ftrace/thermal.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fftrace_2fthermal_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fftrace_2fthermal_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2ftrace_2fftrace_2fthermal_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2ftrace_2fftrace_2fthermal_2eproto {
  static const uint32_t offsets[];
};
namespace perfetto {
namespace protos {
class CdevUpdateFtraceEvent;
struct CdevUpdateFtraceEventDefaultTypeInternal;
extern CdevUpdateFtraceEventDefaultTypeInternal _CdevUpdateFtraceEvent_default_instance_;
class ThermalTemperatureFtraceEvent;
struct ThermalTemperatureFtraceEventDefaultTypeInternal;
extern ThermalTemperatureFtraceEventDefaultTypeInternal _ThermalTemperatureFtraceEvent_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> ::perfetto::protos::CdevUpdateFtraceEvent* Arena::CreateMaybeMessage<::perfetto::protos::CdevUpdateFtraceEvent>(Arena*);
template<> ::perfetto::protos::ThermalTemperatureFtraceEvent* Arena::CreateMaybeMessage<::perfetto::protos::ThermalTemperatureFtraceEvent>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace perfetto {
namespace protos {

// ===================================================================

class ThermalTemperatureFtraceEvent final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.ThermalTemperatureFtraceEvent) */ {
 public:
  inline ThermalTemperatureFtraceEvent() : ThermalTemperatureFtraceEvent(nullptr) {}
  ~ThermalTemperatureFtraceEvent() override;
  explicit PROTOBUF_CONSTEXPR ThermalTemperatureFtraceEvent(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ThermalTemperatureFtraceEvent(const ThermalTemperatureFtraceEvent& from);
  ThermalTemperatureFtraceEvent(ThermalTemperatureFtraceEvent&& from) noexcept
    : ThermalTemperatureFtraceEvent() {
    *this = ::std::move(from);
  }

  inline ThermalTemperatureFtraceEvent& operator=(const ThermalTemperatureFtraceEvent& from) {
    CopyFrom(from);
    return *this;
  }
  inline ThermalTemperatureFtraceEvent& operator=(ThermalTemperatureFtraceEvent&& from) noexcept {
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

  static const ThermalTemperatureFtraceEvent& default_instance() {
    return *internal_default_instance();
  }
  static inline const ThermalTemperatureFtraceEvent* internal_default_instance() {
    return reinterpret_cast<const ThermalTemperatureFtraceEvent*>(
               &_ThermalTemperatureFtraceEvent_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ThermalTemperatureFtraceEvent& a, ThermalTemperatureFtraceEvent& b) {
    a.Swap(&b);
  }
  PROTOBUF_NOINLINE void Swap(ThermalTemperatureFtraceEvent* other) {
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
  void UnsafeArenaSwap(ThermalTemperatureFtraceEvent* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ThermalTemperatureFtraceEvent* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ThermalTemperatureFtraceEvent>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const ThermalTemperatureFtraceEvent& from);
  void MergeFrom(const ThermalTemperatureFtraceEvent& from);
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
  void InternalSwap(ThermalTemperatureFtraceEvent* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.ThermalTemperatureFtraceEvent";
  }
  protected:
  explicit ThermalTemperatureFtraceEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kThermalZoneFieldNumber = 4,
    kIdFieldNumber = 1,
    kTempFieldNumber = 2,
    kTempPrevFieldNumber = 3,
  };
  // optional string thermal_zone = 4;
  bool has_thermal_zone() const;
  private:
  bool _internal_has_thermal_zone() const;
  public:
  void clear_thermal_zone();
  const std::string& thermal_zone() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_thermal_zone(ArgT0&& arg0, ArgT... args);
  std::string* mutable_thermal_zone();
  PROTOBUF_NODISCARD std::string* release_thermal_zone();
  void set_allocated_thermal_zone(std::string* thermal_zone);
  private:
  const std::string& _internal_thermal_zone() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_thermal_zone(const std::string& value);
  std::string* _internal_mutable_thermal_zone();
  public:

  // optional int32 id = 1;
  bool has_id() const;
  private:
  bool _internal_has_id() const;
  public:
  void clear_id();
  int32_t id() const;
  void set_id(int32_t value);
  private:
  int32_t _internal_id() const;
  void _internal_set_id(int32_t value);
  public:

  // optional int32 temp = 2;
  bool has_temp() const;
  private:
  bool _internal_has_temp() const;
  public:
  void clear_temp();
  int32_t temp() const;
  void set_temp(int32_t value);
  private:
  int32_t _internal_temp() const;
  void _internal_set_temp(int32_t value);
  public:

  // optional int32 temp_prev = 3;
  bool has_temp_prev() const;
  private:
  bool _internal_has_temp_prev() const;
  public:
  void clear_temp_prev();
  int32_t temp_prev() const;
  void set_temp_prev(int32_t value);
  private:
  int32_t _internal_temp_prev() const;
  void _internal_set_temp_prev(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:perfetto.protos.ThermalTemperatureFtraceEvent)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr thermal_zone_;
    int32_t id_;
    int32_t temp_;
    int32_t temp_prev_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2fftrace_2fthermal_2eproto;
};
// -------------------------------------------------------------------

class CdevUpdateFtraceEvent final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.CdevUpdateFtraceEvent) */ {
 public:
  inline CdevUpdateFtraceEvent() : CdevUpdateFtraceEvent(nullptr) {}
  ~CdevUpdateFtraceEvent() override;
  explicit PROTOBUF_CONSTEXPR CdevUpdateFtraceEvent(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  CdevUpdateFtraceEvent(const CdevUpdateFtraceEvent& from);
  CdevUpdateFtraceEvent(CdevUpdateFtraceEvent&& from) noexcept
    : CdevUpdateFtraceEvent() {
    *this = ::std::move(from);
  }

  inline CdevUpdateFtraceEvent& operator=(const CdevUpdateFtraceEvent& from) {
    CopyFrom(from);
    return *this;
  }
  inline CdevUpdateFtraceEvent& operator=(CdevUpdateFtraceEvent&& from) noexcept {
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

  static const CdevUpdateFtraceEvent& default_instance() {
    return *internal_default_instance();
  }
  static inline const CdevUpdateFtraceEvent* internal_default_instance() {
    return reinterpret_cast<const CdevUpdateFtraceEvent*>(
               &_CdevUpdateFtraceEvent_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(CdevUpdateFtraceEvent& a, CdevUpdateFtraceEvent& b) {
    a.Swap(&b);
  }
  PROTOBUF_NOINLINE void Swap(CdevUpdateFtraceEvent* other) {
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
  void UnsafeArenaSwap(CdevUpdateFtraceEvent* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  CdevUpdateFtraceEvent* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<CdevUpdateFtraceEvent>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const CdevUpdateFtraceEvent& from);
  void MergeFrom(const CdevUpdateFtraceEvent& from);
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
  void InternalSwap(CdevUpdateFtraceEvent* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.CdevUpdateFtraceEvent";
  }
  protected:
  explicit CdevUpdateFtraceEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTypeFieldNumber = 2,
    kTargetFieldNumber = 1,
  };
  // optional string type = 2;
  bool has_type() const;
  private:
  bool _internal_has_type() const;
  public:
  void clear_type();
  const std::string& type() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_type(ArgT0&& arg0, ArgT... args);
  std::string* mutable_type();
  PROTOBUF_NODISCARD std::string* release_type();
  void set_allocated_type(std::string* type);
  private:
  const std::string& _internal_type() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_type(const std::string& value);
  std::string* _internal_mutable_type();
  public:

  // optional uint64 target = 1;
  bool has_target() const;
  private:
  bool _internal_has_target() const;
  public:
  void clear_target();
  uint64_t target() const;
  void set_target(uint64_t value);
  private:
  uint64_t _internal_target() const;
  void _internal_set_target(uint64_t value);
  public:

  // @@protoc_insertion_point(class_scope:perfetto.protos.CdevUpdateFtraceEvent)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr type_;
    uint64_t target_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2fftrace_2fthermal_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ThermalTemperatureFtraceEvent

// optional int32 id = 1;
inline bool ThermalTemperatureFtraceEvent::_internal_has_id() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool ThermalTemperatureFtraceEvent::has_id() const {
  return _internal_has_id();
}
inline void ThermalTemperatureFtraceEvent::clear_id() {
  _impl_.id_ = 0;
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline int32_t ThermalTemperatureFtraceEvent::_internal_id() const {
  return _impl_.id_;
}
inline int32_t ThermalTemperatureFtraceEvent::id() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ThermalTemperatureFtraceEvent.id)
  return _internal_id();
}
inline void ThermalTemperatureFtraceEvent::_internal_set_id(int32_t value) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.id_ = value;
}
inline void ThermalTemperatureFtraceEvent::set_id(int32_t value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.ThermalTemperatureFtraceEvent.id)
}

// optional int32 temp = 2;
inline bool ThermalTemperatureFtraceEvent::_internal_has_temp() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool ThermalTemperatureFtraceEvent::has_temp() const {
  return _internal_has_temp();
}
inline void ThermalTemperatureFtraceEvent::clear_temp() {
  _impl_.temp_ = 0;
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline int32_t ThermalTemperatureFtraceEvent::_internal_temp() const {
  return _impl_.temp_;
}
inline int32_t ThermalTemperatureFtraceEvent::temp() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ThermalTemperatureFtraceEvent.temp)
  return _internal_temp();
}
inline void ThermalTemperatureFtraceEvent::_internal_set_temp(int32_t value) {
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.temp_ = value;
}
inline void ThermalTemperatureFtraceEvent::set_temp(int32_t value) {
  _internal_set_temp(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.ThermalTemperatureFtraceEvent.temp)
}

// optional int32 temp_prev = 3;
inline bool ThermalTemperatureFtraceEvent::_internal_has_temp_prev() const {
  bool value = (_impl_._has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool ThermalTemperatureFtraceEvent::has_temp_prev() const {
  return _internal_has_temp_prev();
}
inline void ThermalTemperatureFtraceEvent::clear_temp_prev() {
  _impl_.temp_prev_ = 0;
  _impl_._has_bits_[0] &= ~0x00000008u;
}
inline int32_t ThermalTemperatureFtraceEvent::_internal_temp_prev() const {
  return _impl_.temp_prev_;
}
inline int32_t ThermalTemperatureFtraceEvent::temp_prev() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ThermalTemperatureFtraceEvent.temp_prev)
  return _internal_temp_prev();
}
inline void ThermalTemperatureFtraceEvent::_internal_set_temp_prev(int32_t value) {
  _impl_._has_bits_[0] |= 0x00000008u;
  _impl_.temp_prev_ = value;
}
inline void ThermalTemperatureFtraceEvent::set_temp_prev(int32_t value) {
  _internal_set_temp_prev(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.ThermalTemperatureFtraceEvent.temp_prev)
}

// optional string thermal_zone = 4;
inline bool ThermalTemperatureFtraceEvent::_internal_has_thermal_zone() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool ThermalTemperatureFtraceEvent::has_thermal_zone() const {
  return _internal_has_thermal_zone();
}
inline void ThermalTemperatureFtraceEvent::clear_thermal_zone() {
  _impl_.thermal_zone_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& ThermalTemperatureFtraceEvent::thermal_zone() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ThermalTemperatureFtraceEvent.thermal_zone)
  return _internal_thermal_zone();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void ThermalTemperatureFtraceEvent::set_thermal_zone(ArgT0&& arg0, ArgT... args) {
 _impl_._has_bits_[0] |= 0x00000001u;
 _impl_.thermal_zone_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:perfetto.protos.ThermalTemperatureFtraceEvent.thermal_zone)
}
inline std::string* ThermalTemperatureFtraceEvent::mutable_thermal_zone() {
  std::string* _s = _internal_mutable_thermal_zone();
  // @@protoc_insertion_point(field_mutable:perfetto.protos.ThermalTemperatureFtraceEvent.thermal_zone)
  return _s;
}
inline const std::string& ThermalTemperatureFtraceEvent::_internal_thermal_zone() const {
  return _impl_.thermal_zone_.Get();
}
inline void ThermalTemperatureFtraceEvent::_internal_set_thermal_zone(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.thermal_zone_.Set(value, GetArenaForAllocation());
}
inline std::string* ThermalTemperatureFtraceEvent::_internal_mutable_thermal_zone() {
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.thermal_zone_.Mutable(GetArenaForAllocation());
}
inline std::string* ThermalTemperatureFtraceEvent::release_thermal_zone() {
  // @@protoc_insertion_point(field_release:perfetto.protos.ThermalTemperatureFtraceEvent.thermal_zone)
  if (!_internal_has_thermal_zone()) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* p = _impl_.thermal_zone_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.thermal_zone_.IsDefault()) {
    _impl_.thermal_zone_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void ThermalTemperatureFtraceEvent::set_allocated_thermal_zone(std::string* thermal_zone) {
  if (thermal_zone != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.thermal_zone_.SetAllocated(thermal_zone, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.thermal_zone_.IsDefault()) {
    _impl_.thermal_zone_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.ThermalTemperatureFtraceEvent.thermal_zone)
}

// -------------------------------------------------------------------

// CdevUpdateFtraceEvent

// optional uint64 target = 1;
inline bool CdevUpdateFtraceEvent::_internal_has_target() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool CdevUpdateFtraceEvent::has_target() const {
  return _internal_has_target();
}
inline void CdevUpdateFtraceEvent::clear_target() {
  _impl_.target_ = uint64_t{0u};
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline uint64_t CdevUpdateFtraceEvent::_internal_target() const {
  return _impl_.target_;
}
inline uint64_t CdevUpdateFtraceEvent::target() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.CdevUpdateFtraceEvent.target)
  return _internal_target();
}
inline void CdevUpdateFtraceEvent::_internal_set_target(uint64_t value) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.target_ = value;
}
inline void CdevUpdateFtraceEvent::set_target(uint64_t value) {
  _internal_set_target(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.CdevUpdateFtraceEvent.target)
}

// optional string type = 2;
inline bool CdevUpdateFtraceEvent::_internal_has_type() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool CdevUpdateFtraceEvent::has_type() const {
  return _internal_has_type();
}
inline void CdevUpdateFtraceEvent::clear_type() {
  _impl_.type_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& CdevUpdateFtraceEvent::type() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.CdevUpdateFtraceEvent.type)
  return _internal_type();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void CdevUpdateFtraceEvent::set_type(ArgT0&& arg0, ArgT... args) {
 _impl_._has_bits_[0] |= 0x00000001u;
 _impl_.type_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:perfetto.protos.CdevUpdateFtraceEvent.type)
}
inline std::string* CdevUpdateFtraceEvent::mutable_type() {
  std::string* _s = _internal_mutable_type();
  // @@protoc_insertion_point(field_mutable:perfetto.protos.CdevUpdateFtraceEvent.type)
  return _s;
}
inline const std::string& CdevUpdateFtraceEvent::_internal_type() const {
  return _impl_.type_.Get();
}
inline void CdevUpdateFtraceEvent::_internal_set_type(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.type_.Set(value, GetArenaForAllocation());
}
inline std::string* CdevUpdateFtraceEvent::_internal_mutable_type() {
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.type_.Mutable(GetArenaForAllocation());
}
inline std::string* CdevUpdateFtraceEvent::release_type() {
  // @@protoc_insertion_point(field_release:perfetto.protos.CdevUpdateFtraceEvent.type)
  if (!_internal_has_type()) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* p = _impl_.type_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.type_.IsDefault()) {
    _impl_.type_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void CdevUpdateFtraceEvent::set_allocated_type(std::string* type) {
  if (type != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.type_.SetAllocated(type, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.type_.IsDefault()) {
    _impl_.type_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.CdevUpdateFtraceEvent.type)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace perfetto

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fftrace_2fthermal_2eproto
