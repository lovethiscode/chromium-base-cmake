// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/android/graphics/rect.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fandroid_2fgraphics_2frect_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fandroid_2fgraphics_2frect_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2ftrace_2fandroid_2fgraphics_2frect_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2ftrace_2fandroid_2fgraphics_2frect_2eproto {
  static const uint32_t offsets[];
};
namespace perfetto {
namespace protos {
class RectProto;
struct RectProtoDefaultTypeInternal;
extern RectProtoDefaultTypeInternal _RectProto_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> ::perfetto::protos::RectProto* Arena::CreateMaybeMessage<::perfetto::protos::RectProto>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace perfetto {
namespace protos {

// ===================================================================

class RectProto final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.RectProto) */ {
 public:
  inline RectProto() : RectProto(nullptr) {}
  ~RectProto() override;
  explicit PROTOBUF_CONSTEXPR RectProto(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  RectProto(const RectProto& from);
  RectProto(RectProto&& from) noexcept
    : RectProto() {
    *this = ::std::move(from);
  }

  inline RectProto& operator=(const RectProto& from) {
    CopyFrom(from);
    return *this;
  }
  inline RectProto& operator=(RectProto&& from) noexcept {
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

  static const RectProto& default_instance() {
    return *internal_default_instance();
  }
  static inline const RectProto* internal_default_instance() {
    return reinterpret_cast<const RectProto*>(
               &_RectProto_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(RectProto& a, RectProto& b) {
    a.Swap(&b);
  }
  PROTOBUF_NOINLINE void Swap(RectProto* other) {
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
  void UnsafeArenaSwap(RectProto* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  RectProto* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<RectProto>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const RectProto& from);
  void MergeFrom(const RectProto& from);
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
  void InternalSwap(RectProto* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.RectProto";
  }
  protected:
  explicit RectProto(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kLeftFieldNumber = 1,
    kTopFieldNumber = 2,
    kRightFieldNumber = 3,
    kBottomFieldNumber = 4,
  };
  // optional int32 left = 1;
  bool has_left() const;
  private:
  bool _internal_has_left() const;
  public:
  void clear_left();
  int32_t left() const;
  void set_left(int32_t value);
  private:
  int32_t _internal_left() const;
  void _internal_set_left(int32_t value);
  public:

  // optional int32 top = 2;
  bool has_top() const;
  private:
  bool _internal_has_top() const;
  public:
  void clear_top();
  int32_t top() const;
  void set_top(int32_t value);
  private:
  int32_t _internal_top() const;
  void _internal_set_top(int32_t value);
  public:

  // optional int32 right = 3;
  bool has_right() const;
  private:
  bool _internal_has_right() const;
  public:
  void clear_right();
  int32_t right() const;
  void set_right(int32_t value);
  private:
  int32_t _internal_right() const;
  void _internal_set_right(int32_t value);
  public:

  // optional int32 bottom = 4;
  bool has_bottom() const;
  private:
  bool _internal_has_bottom() const;
  public:
  void clear_bottom();
  int32_t bottom() const;
  void set_bottom(int32_t value);
  private:
  int32_t _internal_bottom() const;
  void _internal_set_bottom(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:perfetto.protos.RectProto)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    int32_t left_;
    int32_t top_;
    int32_t right_;
    int32_t bottom_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2fandroid_2fgraphics_2frect_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// RectProto

// optional int32 left = 1;
inline bool RectProto::_internal_has_left() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool RectProto::has_left() const {
  return _internal_has_left();
}
inline void RectProto::clear_left() {
  _impl_.left_ = 0;
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline int32_t RectProto::_internal_left() const {
  return _impl_.left_;
}
inline int32_t RectProto::left() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.RectProto.left)
  return _internal_left();
}
inline void RectProto::_internal_set_left(int32_t value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.left_ = value;
}
inline void RectProto::set_left(int32_t value) {
  _internal_set_left(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.RectProto.left)
}

// optional int32 top = 2;
inline bool RectProto::_internal_has_top() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool RectProto::has_top() const {
  return _internal_has_top();
}
inline void RectProto::clear_top() {
  _impl_.top_ = 0;
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline int32_t RectProto::_internal_top() const {
  return _impl_.top_;
}
inline int32_t RectProto::top() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.RectProto.top)
  return _internal_top();
}
inline void RectProto::_internal_set_top(int32_t value) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.top_ = value;
}
inline void RectProto::set_top(int32_t value) {
  _internal_set_top(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.RectProto.top)
}

// optional int32 right = 3;
inline bool RectProto::_internal_has_right() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool RectProto::has_right() const {
  return _internal_has_right();
}
inline void RectProto::clear_right() {
  _impl_.right_ = 0;
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline int32_t RectProto::_internal_right() const {
  return _impl_.right_;
}
inline int32_t RectProto::right() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.RectProto.right)
  return _internal_right();
}
inline void RectProto::_internal_set_right(int32_t value) {
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.right_ = value;
}
inline void RectProto::set_right(int32_t value) {
  _internal_set_right(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.RectProto.right)
}

// optional int32 bottom = 4;
inline bool RectProto::_internal_has_bottom() const {
  bool value = (_impl_._has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool RectProto::has_bottom() const {
  return _internal_has_bottom();
}
inline void RectProto::clear_bottom() {
  _impl_.bottom_ = 0;
  _impl_._has_bits_[0] &= ~0x00000008u;
}
inline int32_t RectProto::_internal_bottom() const {
  return _impl_.bottom_;
}
inline int32_t RectProto::bottom() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.RectProto.bottom)
  return _internal_bottom();
}
inline void RectProto::_internal_set_bottom(int32_t value) {
  _impl_._has_bits_[0] |= 0x00000008u;
  _impl_.bottom_ = value;
}
inline void RectProto::set_bottom(int32_t value) {
  _internal_set_bottom(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.RectProto.bottom)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace perfetto

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fandroid_2fgraphics_2frect_2eproto
