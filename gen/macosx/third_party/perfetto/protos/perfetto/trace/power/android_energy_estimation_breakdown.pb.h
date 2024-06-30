// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/power/android_energy_estimation_breakdown.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fpower_2fandroid_5fenergy_5festimation_5fbreakdown_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fpower_2fandroid_5fenergy_5festimation_5fbreakdown_2eproto

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
#include "protos/perfetto/common/android_energy_consumer_descriptor.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2ftrace_2fpower_2fandroid_5fenergy_5festimation_5fbreakdown_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2ftrace_2fpower_2fandroid_5fenergy_5festimation_5fbreakdown_2eproto {
  static const uint32_t offsets[];
};
namespace perfetto {
namespace protos {
class AndroidEnergyEstimationBreakdown;
struct AndroidEnergyEstimationBreakdownDefaultTypeInternal;
extern AndroidEnergyEstimationBreakdownDefaultTypeInternal _AndroidEnergyEstimationBreakdown_default_instance_;
class AndroidEnergyEstimationBreakdown_EnergyUidBreakdown;
struct AndroidEnergyEstimationBreakdown_EnergyUidBreakdownDefaultTypeInternal;
extern AndroidEnergyEstimationBreakdown_EnergyUidBreakdownDefaultTypeInternal _AndroidEnergyEstimationBreakdown_EnergyUidBreakdown_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> ::perfetto::protos::AndroidEnergyEstimationBreakdown* Arena::CreateMaybeMessage<::perfetto::protos::AndroidEnergyEstimationBreakdown>(Arena*);
template<> ::perfetto::protos::AndroidEnergyEstimationBreakdown_EnergyUidBreakdown* Arena::CreateMaybeMessage<::perfetto::protos::AndroidEnergyEstimationBreakdown_EnergyUidBreakdown>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace perfetto {
namespace protos {

// ===================================================================

class AndroidEnergyEstimationBreakdown_EnergyUidBreakdown final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.AndroidEnergyEstimationBreakdown.EnergyUidBreakdown) */ {
 public:
  inline AndroidEnergyEstimationBreakdown_EnergyUidBreakdown() : AndroidEnergyEstimationBreakdown_EnergyUidBreakdown(nullptr) {}
  ~AndroidEnergyEstimationBreakdown_EnergyUidBreakdown() override;
  explicit PROTOBUF_CONSTEXPR AndroidEnergyEstimationBreakdown_EnergyUidBreakdown(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  AndroidEnergyEstimationBreakdown_EnergyUidBreakdown(const AndroidEnergyEstimationBreakdown_EnergyUidBreakdown& from);
  AndroidEnergyEstimationBreakdown_EnergyUidBreakdown(AndroidEnergyEstimationBreakdown_EnergyUidBreakdown&& from) noexcept
    : AndroidEnergyEstimationBreakdown_EnergyUidBreakdown() {
    *this = ::std::move(from);
  }

  inline AndroidEnergyEstimationBreakdown_EnergyUidBreakdown& operator=(const AndroidEnergyEstimationBreakdown_EnergyUidBreakdown& from) {
    CopyFrom(from);
    return *this;
  }
  inline AndroidEnergyEstimationBreakdown_EnergyUidBreakdown& operator=(AndroidEnergyEstimationBreakdown_EnergyUidBreakdown&& from) noexcept {
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

  static const AndroidEnergyEstimationBreakdown_EnergyUidBreakdown& default_instance() {
    return *internal_default_instance();
  }
  static inline const AndroidEnergyEstimationBreakdown_EnergyUidBreakdown* internal_default_instance() {
    return reinterpret_cast<const AndroidEnergyEstimationBreakdown_EnergyUidBreakdown*>(
               &_AndroidEnergyEstimationBreakdown_EnergyUidBreakdown_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(AndroidEnergyEstimationBreakdown_EnergyUidBreakdown& a, AndroidEnergyEstimationBreakdown_EnergyUidBreakdown& b) {
    a.Swap(&b);
  }
  PROTOBUF_NOINLINE void Swap(AndroidEnergyEstimationBreakdown_EnergyUidBreakdown* other) {
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
  void UnsafeArenaSwap(AndroidEnergyEstimationBreakdown_EnergyUidBreakdown* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  AndroidEnergyEstimationBreakdown_EnergyUidBreakdown* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<AndroidEnergyEstimationBreakdown_EnergyUidBreakdown>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const AndroidEnergyEstimationBreakdown_EnergyUidBreakdown& from);
  void MergeFrom(const AndroidEnergyEstimationBreakdown_EnergyUidBreakdown& from);
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
  void InternalSwap(AndroidEnergyEstimationBreakdown_EnergyUidBreakdown* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.AndroidEnergyEstimationBreakdown.EnergyUidBreakdown";
  }
  protected:
  explicit AndroidEnergyEstimationBreakdown_EnergyUidBreakdown(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kEnergyUwsFieldNumber = 2,
    kUidFieldNumber = 1,
  };
  // optional int64 energy_uws = 2;
  bool has_energy_uws() const;
  private:
  bool _internal_has_energy_uws() const;
  public:
  void clear_energy_uws();
  int64_t energy_uws() const;
  void set_energy_uws(int64_t value);
  private:
  int64_t _internal_energy_uws() const;
  void _internal_set_energy_uws(int64_t value);
  public:

  // optional int32 uid = 1;
  bool has_uid() const;
  private:
  bool _internal_has_uid() const;
  public:
  void clear_uid();
  int32_t uid() const;
  void set_uid(int32_t value);
  private:
  int32_t _internal_uid() const;
  void _internal_set_uid(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:perfetto.protos.AndroidEnergyEstimationBreakdown.EnergyUidBreakdown)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    int64_t energy_uws_;
    int32_t uid_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2fpower_2fandroid_5fenergy_5festimation_5fbreakdown_2eproto;
};
// -------------------------------------------------------------------

class AndroidEnergyEstimationBreakdown final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.AndroidEnergyEstimationBreakdown) */ {
 public:
  inline AndroidEnergyEstimationBreakdown() : AndroidEnergyEstimationBreakdown(nullptr) {}
  ~AndroidEnergyEstimationBreakdown() override;
  explicit PROTOBUF_CONSTEXPR AndroidEnergyEstimationBreakdown(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  AndroidEnergyEstimationBreakdown(const AndroidEnergyEstimationBreakdown& from);
  AndroidEnergyEstimationBreakdown(AndroidEnergyEstimationBreakdown&& from) noexcept
    : AndroidEnergyEstimationBreakdown() {
    *this = ::std::move(from);
  }

  inline AndroidEnergyEstimationBreakdown& operator=(const AndroidEnergyEstimationBreakdown& from) {
    CopyFrom(from);
    return *this;
  }
  inline AndroidEnergyEstimationBreakdown& operator=(AndroidEnergyEstimationBreakdown&& from) noexcept {
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

  static const AndroidEnergyEstimationBreakdown& default_instance() {
    return *internal_default_instance();
  }
  static inline const AndroidEnergyEstimationBreakdown* internal_default_instance() {
    return reinterpret_cast<const AndroidEnergyEstimationBreakdown*>(
               &_AndroidEnergyEstimationBreakdown_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(AndroidEnergyEstimationBreakdown& a, AndroidEnergyEstimationBreakdown& b) {
    a.Swap(&b);
  }
  PROTOBUF_NOINLINE void Swap(AndroidEnergyEstimationBreakdown* other) {
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
  void UnsafeArenaSwap(AndroidEnergyEstimationBreakdown* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  AndroidEnergyEstimationBreakdown* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<AndroidEnergyEstimationBreakdown>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const AndroidEnergyEstimationBreakdown& from);
  void MergeFrom(const AndroidEnergyEstimationBreakdown& from);
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
  void InternalSwap(AndroidEnergyEstimationBreakdown* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.AndroidEnergyEstimationBreakdown";
  }
  protected:
  explicit AndroidEnergyEstimationBreakdown(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  typedef AndroidEnergyEstimationBreakdown_EnergyUidBreakdown EnergyUidBreakdown;

  // accessors -------------------------------------------------------

  enum : int {
    kPerUidBreakdownFieldNumber = 4,
    kEnergyConsumerDescriptorFieldNumber = 1,
    kEnergyUwsFieldNumber = 3,
    kEnergyConsumerIdFieldNumber = 2,
  };
  // repeated .perfetto.protos.AndroidEnergyEstimationBreakdown.EnergyUidBreakdown per_uid_breakdown = 4;
  int per_uid_breakdown_size() const;
  private:
  int _internal_per_uid_breakdown_size() const;
  public:
  void clear_per_uid_breakdown();
  ::perfetto::protos::AndroidEnergyEstimationBreakdown_EnergyUidBreakdown* mutable_per_uid_breakdown(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::AndroidEnergyEstimationBreakdown_EnergyUidBreakdown >*
      mutable_per_uid_breakdown();
  private:
  const ::perfetto::protos::AndroidEnergyEstimationBreakdown_EnergyUidBreakdown& _internal_per_uid_breakdown(int index) const;
  ::perfetto::protos::AndroidEnergyEstimationBreakdown_EnergyUidBreakdown* _internal_add_per_uid_breakdown();
  public:
  const ::perfetto::protos::AndroidEnergyEstimationBreakdown_EnergyUidBreakdown& per_uid_breakdown(int index) const;
  ::perfetto::protos::AndroidEnergyEstimationBreakdown_EnergyUidBreakdown* add_per_uid_breakdown();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::AndroidEnergyEstimationBreakdown_EnergyUidBreakdown >&
      per_uid_breakdown() const;

  // optional .perfetto.protos.AndroidEnergyConsumerDescriptor energy_consumer_descriptor = 1;
  bool has_energy_consumer_descriptor() const;
  private:
  bool _internal_has_energy_consumer_descriptor() const;
  public:
  void clear_energy_consumer_descriptor();
  const ::perfetto::protos::AndroidEnergyConsumerDescriptor& energy_consumer_descriptor() const;
  PROTOBUF_NODISCARD ::perfetto::protos::AndroidEnergyConsumerDescriptor* release_energy_consumer_descriptor();
  ::perfetto::protos::AndroidEnergyConsumerDescriptor* mutable_energy_consumer_descriptor();
  void set_allocated_energy_consumer_descriptor(::perfetto::protos::AndroidEnergyConsumerDescriptor* energy_consumer_descriptor);
  private:
  const ::perfetto::protos::AndroidEnergyConsumerDescriptor& _internal_energy_consumer_descriptor() const;
  ::perfetto::protos::AndroidEnergyConsumerDescriptor* _internal_mutable_energy_consumer_descriptor();
  public:
  void unsafe_arena_set_allocated_energy_consumer_descriptor(
      ::perfetto::protos::AndroidEnergyConsumerDescriptor* energy_consumer_descriptor);
  ::perfetto::protos::AndroidEnergyConsumerDescriptor* unsafe_arena_release_energy_consumer_descriptor();

  // optional int64 energy_uws = 3;
  bool has_energy_uws() const;
  private:
  bool _internal_has_energy_uws() const;
  public:
  void clear_energy_uws();
  int64_t energy_uws() const;
  void set_energy_uws(int64_t value);
  private:
  int64_t _internal_energy_uws() const;
  void _internal_set_energy_uws(int64_t value);
  public:

  // optional int32 energy_consumer_id = 2;
  bool has_energy_consumer_id() const;
  private:
  bool _internal_has_energy_consumer_id() const;
  public:
  void clear_energy_consumer_id();
  int32_t energy_consumer_id() const;
  void set_energy_consumer_id(int32_t value);
  private:
  int32_t _internal_energy_consumer_id() const;
  void _internal_set_energy_consumer_id(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:perfetto.protos.AndroidEnergyEstimationBreakdown)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::AndroidEnergyEstimationBreakdown_EnergyUidBreakdown > per_uid_breakdown_;
    ::perfetto::protos::AndroidEnergyConsumerDescriptor* energy_consumer_descriptor_;
    int64_t energy_uws_;
    int32_t energy_consumer_id_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2fpower_2fandroid_5fenergy_5festimation_5fbreakdown_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// AndroidEnergyEstimationBreakdown_EnergyUidBreakdown

// optional int32 uid = 1;
inline bool AndroidEnergyEstimationBreakdown_EnergyUidBreakdown::_internal_has_uid() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool AndroidEnergyEstimationBreakdown_EnergyUidBreakdown::has_uid() const {
  return _internal_has_uid();
}
inline void AndroidEnergyEstimationBreakdown_EnergyUidBreakdown::clear_uid() {
  _impl_.uid_ = 0;
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline int32_t AndroidEnergyEstimationBreakdown_EnergyUidBreakdown::_internal_uid() const {
  return _impl_.uid_;
}
inline int32_t AndroidEnergyEstimationBreakdown_EnergyUidBreakdown::uid() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.AndroidEnergyEstimationBreakdown.EnergyUidBreakdown.uid)
  return _internal_uid();
}
inline void AndroidEnergyEstimationBreakdown_EnergyUidBreakdown::_internal_set_uid(int32_t value) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.uid_ = value;
}
inline void AndroidEnergyEstimationBreakdown_EnergyUidBreakdown::set_uid(int32_t value) {
  _internal_set_uid(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.AndroidEnergyEstimationBreakdown.EnergyUidBreakdown.uid)
}

// optional int64 energy_uws = 2;
inline bool AndroidEnergyEstimationBreakdown_EnergyUidBreakdown::_internal_has_energy_uws() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool AndroidEnergyEstimationBreakdown_EnergyUidBreakdown::has_energy_uws() const {
  return _internal_has_energy_uws();
}
inline void AndroidEnergyEstimationBreakdown_EnergyUidBreakdown::clear_energy_uws() {
  _impl_.energy_uws_ = int64_t{0};
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline int64_t AndroidEnergyEstimationBreakdown_EnergyUidBreakdown::_internal_energy_uws() const {
  return _impl_.energy_uws_;
}
inline int64_t AndroidEnergyEstimationBreakdown_EnergyUidBreakdown::energy_uws() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.AndroidEnergyEstimationBreakdown.EnergyUidBreakdown.energy_uws)
  return _internal_energy_uws();
}
inline void AndroidEnergyEstimationBreakdown_EnergyUidBreakdown::_internal_set_energy_uws(int64_t value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.energy_uws_ = value;
}
inline void AndroidEnergyEstimationBreakdown_EnergyUidBreakdown::set_energy_uws(int64_t value) {
  _internal_set_energy_uws(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.AndroidEnergyEstimationBreakdown.EnergyUidBreakdown.energy_uws)
}

// -------------------------------------------------------------------

// AndroidEnergyEstimationBreakdown

// optional .perfetto.protos.AndroidEnergyConsumerDescriptor energy_consumer_descriptor = 1;
inline bool AndroidEnergyEstimationBreakdown::_internal_has_energy_consumer_descriptor() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.energy_consumer_descriptor_ != nullptr);
  return value;
}
inline bool AndroidEnergyEstimationBreakdown::has_energy_consumer_descriptor() const {
  return _internal_has_energy_consumer_descriptor();
}
inline const ::perfetto::protos::AndroidEnergyConsumerDescriptor& AndroidEnergyEstimationBreakdown::_internal_energy_consumer_descriptor() const {
  const ::perfetto::protos::AndroidEnergyConsumerDescriptor* p = _impl_.energy_consumer_descriptor_;
  return p != nullptr ? *p : reinterpret_cast<const ::perfetto::protos::AndroidEnergyConsumerDescriptor&>(
      ::perfetto::protos::_AndroidEnergyConsumerDescriptor_default_instance_);
}
inline const ::perfetto::protos::AndroidEnergyConsumerDescriptor& AndroidEnergyEstimationBreakdown::energy_consumer_descriptor() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.AndroidEnergyEstimationBreakdown.energy_consumer_descriptor)
  return _internal_energy_consumer_descriptor();
}
inline void AndroidEnergyEstimationBreakdown::unsafe_arena_set_allocated_energy_consumer_descriptor(
    ::perfetto::protos::AndroidEnergyConsumerDescriptor* energy_consumer_descriptor) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.energy_consumer_descriptor_);
  }
  _impl_.energy_consumer_descriptor_ = energy_consumer_descriptor;
  if (energy_consumer_descriptor) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:perfetto.protos.AndroidEnergyEstimationBreakdown.energy_consumer_descriptor)
}
inline ::perfetto::protos::AndroidEnergyConsumerDescriptor* AndroidEnergyEstimationBreakdown::release_energy_consumer_descriptor() {
  _impl_._has_bits_[0] &= ~0x00000001u;
  ::perfetto::protos::AndroidEnergyConsumerDescriptor* temp = _impl_.energy_consumer_descriptor_;
  _impl_.energy_consumer_descriptor_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::perfetto::protos::AndroidEnergyConsumerDescriptor* AndroidEnergyEstimationBreakdown::unsafe_arena_release_energy_consumer_descriptor() {
  // @@protoc_insertion_point(field_release:perfetto.protos.AndroidEnergyEstimationBreakdown.energy_consumer_descriptor)
  _impl_._has_bits_[0] &= ~0x00000001u;
  ::perfetto::protos::AndroidEnergyConsumerDescriptor* temp = _impl_.energy_consumer_descriptor_;
  _impl_.energy_consumer_descriptor_ = nullptr;
  return temp;
}
inline ::perfetto::protos::AndroidEnergyConsumerDescriptor* AndroidEnergyEstimationBreakdown::_internal_mutable_energy_consumer_descriptor() {
  _impl_._has_bits_[0] |= 0x00000001u;
  if (_impl_.energy_consumer_descriptor_ == nullptr) {
    auto* p = CreateMaybeMessage<::perfetto::protos::AndroidEnergyConsumerDescriptor>(GetArenaForAllocation());
    _impl_.energy_consumer_descriptor_ = p;
  }
  return _impl_.energy_consumer_descriptor_;
}
inline ::perfetto::protos::AndroidEnergyConsumerDescriptor* AndroidEnergyEstimationBreakdown::mutable_energy_consumer_descriptor() {
  ::perfetto::protos::AndroidEnergyConsumerDescriptor* _msg = _internal_mutable_energy_consumer_descriptor();
  // @@protoc_insertion_point(field_mutable:perfetto.protos.AndroidEnergyEstimationBreakdown.energy_consumer_descriptor)
  return _msg;
}
inline void AndroidEnergyEstimationBreakdown::set_allocated_energy_consumer_descriptor(::perfetto::protos::AndroidEnergyConsumerDescriptor* energy_consumer_descriptor) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.energy_consumer_descriptor_);
  }
  if (energy_consumer_descriptor) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(energy_consumer_descriptor));
    if (message_arena != submessage_arena) {
      energy_consumer_descriptor = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, energy_consumer_descriptor, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.energy_consumer_descriptor_ = energy_consumer_descriptor;
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.AndroidEnergyEstimationBreakdown.energy_consumer_descriptor)
}

// optional int32 energy_consumer_id = 2;
inline bool AndroidEnergyEstimationBreakdown::_internal_has_energy_consumer_id() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool AndroidEnergyEstimationBreakdown::has_energy_consumer_id() const {
  return _internal_has_energy_consumer_id();
}
inline void AndroidEnergyEstimationBreakdown::clear_energy_consumer_id() {
  _impl_.energy_consumer_id_ = 0;
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline int32_t AndroidEnergyEstimationBreakdown::_internal_energy_consumer_id() const {
  return _impl_.energy_consumer_id_;
}
inline int32_t AndroidEnergyEstimationBreakdown::energy_consumer_id() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.AndroidEnergyEstimationBreakdown.energy_consumer_id)
  return _internal_energy_consumer_id();
}
inline void AndroidEnergyEstimationBreakdown::_internal_set_energy_consumer_id(int32_t value) {
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.energy_consumer_id_ = value;
}
inline void AndroidEnergyEstimationBreakdown::set_energy_consumer_id(int32_t value) {
  _internal_set_energy_consumer_id(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.AndroidEnergyEstimationBreakdown.energy_consumer_id)
}

// optional int64 energy_uws = 3;
inline bool AndroidEnergyEstimationBreakdown::_internal_has_energy_uws() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool AndroidEnergyEstimationBreakdown::has_energy_uws() const {
  return _internal_has_energy_uws();
}
inline void AndroidEnergyEstimationBreakdown::clear_energy_uws() {
  _impl_.energy_uws_ = int64_t{0};
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline int64_t AndroidEnergyEstimationBreakdown::_internal_energy_uws() const {
  return _impl_.energy_uws_;
}
inline int64_t AndroidEnergyEstimationBreakdown::energy_uws() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.AndroidEnergyEstimationBreakdown.energy_uws)
  return _internal_energy_uws();
}
inline void AndroidEnergyEstimationBreakdown::_internal_set_energy_uws(int64_t value) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.energy_uws_ = value;
}
inline void AndroidEnergyEstimationBreakdown::set_energy_uws(int64_t value) {
  _internal_set_energy_uws(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.AndroidEnergyEstimationBreakdown.energy_uws)
}

// repeated .perfetto.protos.AndroidEnergyEstimationBreakdown.EnergyUidBreakdown per_uid_breakdown = 4;
inline int AndroidEnergyEstimationBreakdown::_internal_per_uid_breakdown_size() const {
  return _impl_.per_uid_breakdown_.size();
}
inline int AndroidEnergyEstimationBreakdown::per_uid_breakdown_size() const {
  return _internal_per_uid_breakdown_size();
}
inline void AndroidEnergyEstimationBreakdown::clear_per_uid_breakdown() {
  _impl_.per_uid_breakdown_.Clear();
}
inline ::perfetto::protos::AndroidEnergyEstimationBreakdown_EnergyUidBreakdown* AndroidEnergyEstimationBreakdown::mutable_per_uid_breakdown(int index) {
  // @@protoc_insertion_point(field_mutable:perfetto.protos.AndroidEnergyEstimationBreakdown.per_uid_breakdown)
  return _impl_.per_uid_breakdown_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::AndroidEnergyEstimationBreakdown_EnergyUidBreakdown >*
AndroidEnergyEstimationBreakdown::mutable_per_uid_breakdown() {
  // @@protoc_insertion_point(field_mutable_list:perfetto.protos.AndroidEnergyEstimationBreakdown.per_uid_breakdown)
  return &_impl_.per_uid_breakdown_;
}
inline const ::perfetto::protos::AndroidEnergyEstimationBreakdown_EnergyUidBreakdown& AndroidEnergyEstimationBreakdown::_internal_per_uid_breakdown(int index) const {
  return _impl_.per_uid_breakdown_.Get(index);
}
inline const ::perfetto::protos::AndroidEnergyEstimationBreakdown_EnergyUidBreakdown& AndroidEnergyEstimationBreakdown::per_uid_breakdown(int index) const {
  // @@protoc_insertion_point(field_get:perfetto.protos.AndroidEnergyEstimationBreakdown.per_uid_breakdown)
  return _internal_per_uid_breakdown(index);
}
inline ::perfetto::protos::AndroidEnergyEstimationBreakdown_EnergyUidBreakdown* AndroidEnergyEstimationBreakdown::_internal_add_per_uid_breakdown() {
  return _impl_.per_uid_breakdown_.Add();
}
inline ::perfetto::protos::AndroidEnergyEstimationBreakdown_EnergyUidBreakdown* AndroidEnergyEstimationBreakdown::add_per_uid_breakdown() {
  ::perfetto::protos::AndroidEnergyEstimationBreakdown_EnergyUidBreakdown* _add = _internal_add_per_uid_breakdown();
  // @@protoc_insertion_point(field_add:perfetto.protos.AndroidEnergyEstimationBreakdown.per_uid_breakdown)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::AndroidEnergyEstimationBreakdown_EnergyUidBreakdown >&
AndroidEnergyEstimationBreakdown::per_uid_breakdown() const {
  // @@protoc_insertion_point(field_list:perfetto.protos.AndroidEnergyEstimationBreakdown.per_uid_breakdown)
  return _impl_.per_uid_breakdown_;
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fpower_2fandroid_5fenergy_5festimation_5fbreakdown_2eproto
