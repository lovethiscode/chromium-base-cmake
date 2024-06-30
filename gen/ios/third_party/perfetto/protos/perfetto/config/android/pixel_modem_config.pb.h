// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/config/android/pixel_modem_config.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2fconfig_2fandroid_2fpixel_5fmodem_5fconfig_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2fconfig_2fandroid_2fpixel_5fmodem_5fconfig_2eproto

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
#include <google/protobuf/generated_enum_util.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2fconfig_2fandroid_2fpixel_5fmodem_5fconfig_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2fconfig_2fandroid_2fpixel_5fmodem_5fconfig_2eproto {
  static const uint32_t offsets[];
};
namespace perfetto {
namespace protos {
class PixelModemConfig;
struct PixelModemConfigDefaultTypeInternal;
extern PixelModemConfigDefaultTypeInternal _PixelModemConfig_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> ::perfetto::protos::PixelModemConfig* Arena::CreateMaybeMessage<::perfetto::protos::PixelModemConfig>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace perfetto {
namespace protos {

enum PixelModemConfig_EventGroup : int {
  PixelModemConfig_EventGroup_EVENT_GROUP_UNKNOWN = 0,
  PixelModemConfig_EventGroup_EVENT_GROUP_LOW_BANDWIDTH = 1,
  PixelModemConfig_EventGroup_EVENT_GROUP_HIGH_AND_LOW_BANDWIDTH = 2
};
bool PixelModemConfig_EventGroup_IsValid(int value);
constexpr PixelModemConfig_EventGroup PixelModemConfig_EventGroup_EventGroup_MIN = PixelModemConfig_EventGroup_EVENT_GROUP_UNKNOWN;
constexpr PixelModemConfig_EventGroup PixelModemConfig_EventGroup_EventGroup_MAX = PixelModemConfig_EventGroup_EVENT_GROUP_HIGH_AND_LOW_BANDWIDTH;
constexpr int PixelModemConfig_EventGroup_EventGroup_ARRAYSIZE = PixelModemConfig_EventGroup_EventGroup_MAX + 1;

const std::string& PixelModemConfig_EventGroup_Name(PixelModemConfig_EventGroup value);
template<typename T>
inline const std::string& PixelModemConfig_EventGroup_Name(T enum_t_value) {
  static_assert(::std::is_same<T, PixelModemConfig_EventGroup>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function PixelModemConfig_EventGroup_Name.");
  return PixelModemConfig_EventGroup_Name(static_cast<PixelModemConfig_EventGroup>(enum_t_value));
}
bool PixelModemConfig_EventGroup_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, PixelModemConfig_EventGroup* value);
// ===================================================================

class PixelModemConfig final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.PixelModemConfig) */ {
 public:
  inline PixelModemConfig() : PixelModemConfig(nullptr) {}
  ~PixelModemConfig() override;
  explicit PROTOBUF_CONSTEXPR PixelModemConfig(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  PixelModemConfig(const PixelModemConfig& from);
  PixelModemConfig(PixelModemConfig&& from) noexcept
    : PixelModemConfig() {
    *this = ::std::move(from);
  }

  inline PixelModemConfig& operator=(const PixelModemConfig& from) {
    CopyFrom(from);
    return *this;
  }
  inline PixelModemConfig& operator=(PixelModemConfig&& from) noexcept {
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

  static const PixelModemConfig& default_instance() {
    return *internal_default_instance();
  }
  static inline const PixelModemConfig* internal_default_instance() {
    return reinterpret_cast<const PixelModemConfig*>(
               &_PixelModemConfig_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(PixelModemConfig& a, PixelModemConfig& b) {
    a.Swap(&b);
  }
  PROTOBUF_NOINLINE void Swap(PixelModemConfig* other) {
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
  void UnsafeArenaSwap(PixelModemConfig* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  PixelModemConfig* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<PixelModemConfig>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const PixelModemConfig& from);
  void MergeFrom(const PixelModemConfig& from);
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
  void InternalSwap(PixelModemConfig* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.PixelModemConfig";
  }
  protected:
  explicit PixelModemConfig(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  typedef PixelModemConfig_EventGroup EventGroup;
  static constexpr EventGroup EVENT_GROUP_UNKNOWN =
    PixelModemConfig_EventGroup_EVENT_GROUP_UNKNOWN;
  static constexpr EventGroup EVENT_GROUP_LOW_BANDWIDTH =
    PixelModemConfig_EventGroup_EVENT_GROUP_LOW_BANDWIDTH;
  static constexpr EventGroup EVENT_GROUP_HIGH_AND_LOW_BANDWIDTH =
    PixelModemConfig_EventGroup_EVENT_GROUP_HIGH_AND_LOW_BANDWIDTH;
  static inline bool EventGroup_IsValid(int value) {
    return PixelModemConfig_EventGroup_IsValid(value);
  }
  static constexpr EventGroup EventGroup_MIN =
    PixelModemConfig_EventGroup_EventGroup_MIN;
  static constexpr EventGroup EventGroup_MAX =
    PixelModemConfig_EventGroup_EventGroup_MAX;
  static constexpr int EventGroup_ARRAYSIZE =
    PixelModemConfig_EventGroup_EventGroup_ARRAYSIZE;
  template<typename T>
  static inline const std::string& EventGroup_Name(T enum_t_value) {
    static_assert(::std::is_same<T, EventGroup>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function EventGroup_Name.");
    return PixelModemConfig_EventGroup_Name(enum_t_value);
  }
  static inline bool EventGroup_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      EventGroup* value) {
    return PixelModemConfig_EventGroup_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kPigweedHashAllowListFieldNumber = 2,
    kPigweedHashDenyListFieldNumber = 3,
    kEventGroupFieldNumber = 1,
  };
  // repeated int64 pigweed_hash_allow_list = 2;
  int pigweed_hash_allow_list_size() const;
  private:
  int _internal_pigweed_hash_allow_list_size() const;
  public:
  void clear_pigweed_hash_allow_list();
  private:
  int64_t _internal_pigweed_hash_allow_list(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int64_t >&
      _internal_pigweed_hash_allow_list() const;
  void _internal_add_pigweed_hash_allow_list(int64_t value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< int64_t >*
      _internal_mutable_pigweed_hash_allow_list();
  public:
  int64_t pigweed_hash_allow_list(int index) const;
  void set_pigweed_hash_allow_list(int index, int64_t value);
  void add_pigweed_hash_allow_list(int64_t value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int64_t >&
      pigweed_hash_allow_list() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< int64_t >*
      mutable_pigweed_hash_allow_list();

  // repeated int64 pigweed_hash_deny_list = 3;
  int pigweed_hash_deny_list_size() const;
  private:
  int _internal_pigweed_hash_deny_list_size() const;
  public:
  void clear_pigweed_hash_deny_list();
  private:
  int64_t _internal_pigweed_hash_deny_list(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int64_t >&
      _internal_pigweed_hash_deny_list() const;
  void _internal_add_pigweed_hash_deny_list(int64_t value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< int64_t >*
      _internal_mutable_pigweed_hash_deny_list();
  public:
  int64_t pigweed_hash_deny_list(int index) const;
  void set_pigweed_hash_deny_list(int index, int64_t value);
  void add_pigweed_hash_deny_list(int64_t value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int64_t >&
      pigweed_hash_deny_list() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< int64_t >*
      mutable_pigweed_hash_deny_list();

  // optional .perfetto.protos.PixelModemConfig.EventGroup event_group = 1;
  bool has_event_group() const;
  private:
  bool _internal_has_event_group() const;
  public:
  void clear_event_group();
  ::perfetto::protos::PixelModemConfig_EventGroup event_group() const;
  void set_event_group(::perfetto::protos::PixelModemConfig_EventGroup value);
  private:
  ::perfetto::protos::PixelModemConfig_EventGroup _internal_event_group() const;
  void _internal_set_event_group(::perfetto::protos::PixelModemConfig_EventGroup value);
  public:

  // @@protoc_insertion_point(class_scope:perfetto.protos.PixelModemConfig)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::RepeatedField< int64_t > pigweed_hash_allow_list_;
    ::PROTOBUF_NAMESPACE_ID::RepeatedField< int64_t > pigweed_hash_deny_list_;
    int event_group_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fperfetto_2fconfig_2fandroid_2fpixel_5fmodem_5fconfig_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PixelModemConfig

// optional .perfetto.protos.PixelModemConfig.EventGroup event_group = 1;
inline bool PixelModemConfig::_internal_has_event_group() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool PixelModemConfig::has_event_group() const {
  return _internal_has_event_group();
}
inline void PixelModemConfig::clear_event_group() {
  _impl_.event_group_ = 0;
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline ::perfetto::protos::PixelModemConfig_EventGroup PixelModemConfig::_internal_event_group() const {
  return static_cast< ::perfetto::protos::PixelModemConfig_EventGroup >(_impl_.event_group_);
}
inline ::perfetto::protos::PixelModemConfig_EventGroup PixelModemConfig::event_group() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.PixelModemConfig.event_group)
  return _internal_event_group();
}
inline void PixelModemConfig::_internal_set_event_group(::perfetto::protos::PixelModemConfig_EventGroup value) {
  assert(::perfetto::protos::PixelModemConfig_EventGroup_IsValid(value));
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.event_group_ = value;
}
inline void PixelModemConfig::set_event_group(::perfetto::protos::PixelModemConfig_EventGroup value) {
  _internal_set_event_group(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.PixelModemConfig.event_group)
}

// repeated int64 pigweed_hash_allow_list = 2;
inline int PixelModemConfig::_internal_pigweed_hash_allow_list_size() const {
  return _impl_.pigweed_hash_allow_list_.size();
}
inline int PixelModemConfig::pigweed_hash_allow_list_size() const {
  return _internal_pigweed_hash_allow_list_size();
}
inline void PixelModemConfig::clear_pigweed_hash_allow_list() {
  _impl_.pigweed_hash_allow_list_.Clear();
}
inline int64_t PixelModemConfig::_internal_pigweed_hash_allow_list(int index) const {
  return _impl_.pigweed_hash_allow_list_.Get(index);
}
inline int64_t PixelModemConfig::pigweed_hash_allow_list(int index) const {
  // @@protoc_insertion_point(field_get:perfetto.protos.PixelModemConfig.pigweed_hash_allow_list)
  return _internal_pigweed_hash_allow_list(index);
}
inline void PixelModemConfig::set_pigweed_hash_allow_list(int index, int64_t value) {
  _impl_.pigweed_hash_allow_list_.Set(index, value);
  // @@protoc_insertion_point(field_set:perfetto.protos.PixelModemConfig.pigweed_hash_allow_list)
}
inline void PixelModemConfig::_internal_add_pigweed_hash_allow_list(int64_t value) {
  _impl_.pigweed_hash_allow_list_.Add(value);
}
inline void PixelModemConfig::add_pigweed_hash_allow_list(int64_t value) {
  _internal_add_pigweed_hash_allow_list(value);
  // @@protoc_insertion_point(field_add:perfetto.protos.PixelModemConfig.pigweed_hash_allow_list)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int64_t >&
PixelModemConfig::_internal_pigweed_hash_allow_list() const {
  return _impl_.pigweed_hash_allow_list_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int64_t >&
PixelModemConfig::pigweed_hash_allow_list() const {
  // @@protoc_insertion_point(field_list:perfetto.protos.PixelModemConfig.pigweed_hash_allow_list)
  return _internal_pigweed_hash_allow_list();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< int64_t >*
PixelModemConfig::_internal_mutable_pigweed_hash_allow_list() {
  return &_impl_.pigweed_hash_allow_list_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< int64_t >*
PixelModemConfig::mutable_pigweed_hash_allow_list() {
  // @@protoc_insertion_point(field_mutable_list:perfetto.protos.PixelModemConfig.pigweed_hash_allow_list)
  return _internal_mutable_pigweed_hash_allow_list();
}

// repeated int64 pigweed_hash_deny_list = 3;
inline int PixelModemConfig::_internal_pigweed_hash_deny_list_size() const {
  return _impl_.pigweed_hash_deny_list_.size();
}
inline int PixelModemConfig::pigweed_hash_deny_list_size() const {
  return _internal_pigweed_hash_deny_list_size();
}
inline void PixelModemConfig::clear_pigweed_hash_deny_list() {
  _impl_.pigweed_hash_deny_list_.Clear();
}
inline int64_t PixelModemConfig::_internal_pigweed_hash_deny_list(int index) const {
  return _impl_.pigweed_hash_deny_list_.Get(index);
}
inline int64_t PixelModemConfig::pigweed_hash_deny_list(int index) const {
  // @@protoc_insertion_point(field_get:perfetto.protos.PixelModemConfig.pigweed_hash_deny_list)
  return _internal_pigweed_hash_deny_list(index);
}
inline void PixelModemConfig::set_pigweed_hash_deny_list(int index, int64_t value) {
  _impl_.pigweed_hash_deny_list_.Set(index, value);
  // @@protoc_insertion_point(field_set:perfetto.protos.PixelModemConfig.pigweed_hash_deny_list)
}
inline void PixelModemConfig::_internal_add_pigweed_hash_deny_list(int64_t value) {
  _impl_.pigweed_hash_deny_list_.Add(value);
}
inline void PixelModemConfig::add_pigweed_hash_deny_list(int64_t value) {
  _internal_add_pigweed_hash_deny_list(value);
  // @@protoc_insertion_point(field_add:perfetto.protos.PixelModemConfig.pigweed_hash_deny_list)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int64_t >&
PixelModemConfig::_internal_pigweed_hash_deny_list() const {
  return _impl_.pigweed_hash_deny_list_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int64_t >&
PixelModemConfig::pigweed_hash_deny_list() const {
  // @@protoc_insertion_point(field_list:perfetto.protos.PixelModemConfig.pigweed_hash_deny_list)
  return _internal_pigweed_hash_deny_list();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< int64_t >*
PixelModemConfig::_internal_mutable_pigweed_hash_deny_list() {
  return &_impl_.pigweed_hash_deny_list_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< int64_t >*
PixelModemConfig::mutable_pigweed_hash_deny_list() {
  // @@protoc_insertion_point(field_mutable_list:perfetto.protos.PixelModemConfig.pigweed_hash_deny_list)
  return _internal_mutable_pigweed_hash_deny_list();
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace perfetto

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::perfetto::protos::PixelModemConfig_EventGroup> : ::std::true_type {};

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2fconfig_2fandroid_2fpixel_5fmodem_5fconfig_2eproto