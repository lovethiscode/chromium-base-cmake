// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/track_event/pixel_modem.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fpixel_5fmodem_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fpixel_5fmodem_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fpixel_5fmodem_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fpixel_5fmodem_2eproto {
  static const uint32_t offsets[];
};
namespace perfetto {
namespace protos {
class PixelModemEventInsight;
struct PixelModemEventInsightDefaultTypeInternal;
extern PixelModemEventInsightDefaultTypeInternal _PixelModemEventInsight_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> ::perfetto::protos::PixelModemEventInsight* Arena::CreateMaybeMessage<::perfetto::protos::PixelModemEventInsight>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace perfetto {
namespace protos {

// ===================================================================

class PixelModemEventInsight final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.PixelModemEventInsight) */ {
 public:
  inline PixelModemEventInsight() : PixelModemEventInsight(nullptr) {}
  ~PixelModemEventInsight() override;
  explicit PROTOBUF_CONSTEXPR PixelModemEventInsight(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  PixelModemEventInsight(const PixelModemEventInsight& from);
  PixelModemEventInsight(PixelModemEventInsight&& from) noexcept
    : PixelModemEventInsight() {
    *this = ::std::move(from);
  }

  inline PixelModemEventInsight& operator=(const PixelModemEventInsight& from) {
    CopyFrom(from);
    return *this;
  }
  inline PixelModemEventInsight& operator=(PixelModemEventInsight&& from) noexcept {
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

  static const PixelModemEventInsight& default_instance() {
    return *internal_default_instance();
  }
  static inline const PixelModemEventInsight* internal_default_instance() {
    return reinterpret_cast<const PixelModemEventInsight*>(
               &_PixelModemEventInsight_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(PixelModemEventInsight& a, PixelModemEventInsight& b) {
    a.Swap(&b);
  }
  PROTOBUF_NOINLINE void Swap(PixelModemEventInsight* other) {
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
  void UnsafeArenaSwap(PixelModemEventInsight* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  PixelModemEventInsight* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<PixelModemEventInsight>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const PixelModemEventInsight& from);
  void MergeFrom(const PixelModemEventInsight& from);
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
  void InternalSwap(PixelModemEventInsight* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.PixelModemEventInsight";
  }
  protected:
  explicit PixelModemEventInsight(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kDetokenizedMessageFieldNumber = 1,
  };
  // optional string detokenized_message = 1;
  bool has_detokenized_message() const;
  private:
  bool _internal_has_detokenized_message() const;
  public:
  void clear_detokenized_message();
  const std::string& detokenized_message() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_detokenized_message(ArgT0&& arg0, ArgT... args);
  std::string* mutable_detokenized_message();
  PROTOBUF_NODISCARD std::string* release_detokenized_message();
  void set_allocated_detokenized_message(std::string* detokenized_message);
  private:
  const std::string& _internal_detokenized_message() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_detokenized_message(const std::string& value);
  std::string* _internal_mutable_detokenized_message();
  public:

  // @@protoc_insertion_point(class_scope:perfetto.protos.PixelModemEventInsight)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr detokenized_message_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fpixel_5fmodem_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PixelModemEventInsight

// optional string detokenized_message = 1;
inline bool PixelModemEventInsight::_internal_has_detokenized_message() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool PixelModemEventInsight::has_detokenized_message() const {
  return _internal_has_detokenized_message();
}
inline void PixelModemEventInsight::clear_detokenized_message() {
  _impl_.detokenized_message_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& PixelModemEventInsight::detokenized_message() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.PixelModemEventInsight.detokenized_message)
  return _internal_detokenized_message();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void PixelModemEventInsight::set_detokenized_message(ArgT0&& arg0, ArgT... args) {
 _impl_._has_bits_[0] |= 0x00000001u;
 _impl_.detokenized_message_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:perfetto.protos.PixelModemEventInsight.detokenized_message)
}
inline std::string* PixelModemEventInsight::mutable_detokenized_message() {
  std::string* _s = _internal_mutable_detokenized_message();
  // @@protoc_insertion_point(field_mutable:perfetto.protos.PixelModemEventInsight.detokenized_message)
  return _s;
}
inline const std::string& PixelModemEventInsight::_internal_detokenized_message() const {
  return _impl_.detokenized_message_.Get();
}
inline void PixelModemEventInsight::_internal_set_detokenized_message(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.detokenized_message_.Set(value, GetArenaForAllocation());
}
inline std::string* PixelModemEventInsight::_internal_mutable_detokenized_message() {
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.detokenized_message_.Mutable(GetArenaForAllocation());
}
inline std::string* PixelModemEventInsight::release_detokenized_message() {
  // @@protoc_insertion_point(field_release:perfetto.protos.PixelModemEventInsight.detokenized_message)
  if (!_internal_has_detokenized_message()) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* p = _impl_.detokenized_message_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.detokenized_message_.IsDefault()) {
    _impl_.detokenized_message_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void PixelModemEventInsight::set_allocated_detokenized_message(std::string* detokenized_message) {
  if (detokenized_message != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.detokenized_message_.SetAllocated(detokenized_message, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.detokenized_message_.IsDefault()) {
    _impl_.detokenized_message_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.PixelModemEventInsight.detokenized_message)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace perfetto

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fpixel_5fmodem_2eproto