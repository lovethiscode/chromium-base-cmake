// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/common/ftrace_descriptor.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2fcommon_2fftrace_5fdescriptor_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2fcommon_2fftrace_5fdescriptor_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2fcommon_2fftrace_5fdescriptor_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2fcommon_2fftrace_5fdescriptor_2eproto {
  static const uint32_t offsets[];
};
namespace perfetto {
namespace protos {
class FtraceDescriptor;
struct FtraceDescriptorDefaultTypeInternal;
extern FtraceDescriptorDefaultTypeInternal _FtraceDescriptor_default_instance_;
class FtraceDescriptor_AtraceCategory;
struct FtraceDescriptor_AtraceCategoryDefaultTypeInternal;
extern FtraceDescriptor_AtraceCategoryDefaultTypeInternal _FtraceDescriptor_AtraceCategory_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> ::perfetto::protos::FtraceDescriptor* Arena::CreateMaybeMessage<::perfetto::protos::FtraceDescriptor>(Arena*);
template<> ::perfetto::protos::FtraceDescriptor_AtraceCategory* Arena::CreateMaybeMessage<::perfetto::protos::FtraceDescriptor_AtraceCategory>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace perfetto {
namespace protos {

// ===================================================================

class FtraceDescriptor_AtraceCategory final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.FtraceDescriptor.AtraceCategory) */ {
 public:
  inline FtraceDescriptor_AtraceCategory() : FtraceDescriptor_AtraceCategory(nullptr) {}
  ~FtraceDescriptor_AtraceCategory() override;
  explicit PROTOBUF_CONSTEXPR FtraceDescriptor_AtraceCategory(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  FtraceDescriptor_AtraceCategory(const FtraceDescriptor_AtraceCategory& from);
  FtraceDescriptor_AtraceCategory(FtraceDescriptor_AtraceCategory&& from) noexcept
    : FtraceDescriptor_AtraceCategory() {
    *this = ::std::move(from);
  }

  inline FtraceDescriptor_AtraceCategory& operator=(const FtraceDescriptor_AtraceCategory& from) {
    CopyFrom(from);
    return *this;
  }
  inline FtraceDescriptor_AtraceCategory& operator=(FtraceDescriptor_AtraceCategory&& from) noexcept {
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

  static const FtraceDescriptor_AtraceCategory& default_instance() {
    return *internal_default_instance();
  }
  static inline const FtraceDescriptor_AtraceCategory* internal_default_instance() {
    return reinterpret_cast<const FtraceDescriptor_AtraceCategory*>(
               &_FtraceDescriptor_AtraceCategory_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(FtraceDescriptor_AtraceCategory& a, FtraceDescriptor_AtraceCategory& b) {
    a.Swap(&b);
  }
  PROTOBUF_NOINLINE void Swap(FtraceDescriptor_AtraceCategory* other) {
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
  void UnsafeArenaSwap(FtraceDescriptor_AtraceCategory* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  FtraceDescriptor_AtraceCategory* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<FtraceDescriptor_AtraceCategory>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const FtraceDescriptor_AtraceCategory& from);
  void MergeFrom(const FtraceDescriptor_AtraceCategory& from);
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
  void InternalSwap(FtraceDescriptor_AtraceCategory* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.FtraceDescriptor.AtraceCategory";
  }
  protected:
  explicit FtraceDescriptor_AtraceCategory(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 1,
    kDescriptionFieldNumber = 2,
  };
  // optional string name = 1;
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

  // optional string description = 2;
  bool has_description() const;
  private:
  bool _internal_has_description() const;
  public:
  void clear_description();
  const std::string& description() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_description(ArgT0&& arg0, ArgT... args);
  std::string* mutable_description();
  PROTOBUF_NODISCARD std::string* release_description();
  void set_allocated_description(std::string* description);
  private:
  const std::string& _internal_description() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_description(const std::string& value);
  std::string* _internal_mutable_description();
  public:

  // @@protoc_insertion_point(class_scope:perfetto.protos.FtraceDescriptor.AtraceCategory)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr description_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fperfetto_2fcommon_2fftrace_5fdescriptor_2eproto;
};
// -------------------------------------------------------------------

class FtraceDescriptor final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.FtraceDescriptor) */ {
 public:
  inline FtraceDescriptor() : FtraceDescriptor(nullptr) {}
  ~FtraceDescriptor() override;
  explicit PROTOBUF_CONSTEXPR FtraceDescriptor(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  FtraceDescriptor(const FtraceDescriptor& from);
  FtraceDescriptor(FtraceDescriptor&& from) noexcept
    : FtraceDescriptor() {
    *this = ::std::move(from);
  }

  inline FtraceDescriptor& operator=(const FtraceDescriptor& from) {
    CopyFrom(from);
    return *this;
  }
  inline FtraceDescriptor& operator=(FtraceDescriptor&& from) noexcept {
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

  static const FtraceDescriptor& default_instance() {
    return *internal_default_instance();
  }
  static inline const FtraceDescriptor* internal_default_instance() {
    return reinterpret_cast<const FtraceDescriptor*>(
               &_FtraceDescriptor_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(FtraceDescriptor& a, FtraceDescriptor& b) {
    a.Swap(&b);
  }
  PROTOBUF_NOINLINE void Swap(FtraceDescriptor* other) {
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
  void UnsafeArenaSwap(FtraceDescriptor* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  FtraceDescriptor* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<FtraceDescriptor>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const FtraceDescriptor& from);
  void MergeFrom(const FtraceDescriptor& from);
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
  void InternalSwap(FtraceDescriptor* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.FtraceDescriptor";
  }
  protected:
  explicit FtraceDescriptor(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  typedef FtraceDescriptor_AtraceCategory AtraceCategory;

  // accessors -------------------------------------------------------

  enum : int {
    kAtraceCategoriesFieldNumber = 1,
  };
  // repeated .perfetto.protos.FtraceDescriptor.AtraceCategory atrace_categories = 1;
  int atrace_categories_size() const;
  private:
  int _internal_atrace_categories_size() const;
  public:
  void clear_atrace_categories();
  ::perfetto::protos::FtraceDescriptor_AtraceCategory* mutable_atrace_categories(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::FtraceDescriptor_AtraceCategory >*
      mutable_atrace_categories();
  private:
  const ::perfetto::protos::FtraceDescriptor_AtraceCategory& _internal_atrace_categories(int index) const;
  ::perfetto::protos::FtraceDescriptor_AtraceCategory* _internal_add_atrace_categories();
  public:
  const ::perfetto::protos::FtraceDescriptor_AtraceCategory& atrace_categories(int index) const;
  ::perfetto::protos::FtraceDescriptor_AtraceCategory* add_atrace_categories();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::FtraceDescriptor_AtraceCategory >&
      atrace_categories() const;

  // @@protoc_insertion_point(class_scope:perfetto.protos.FtraceDescriptor)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::FtraceDescriptor_AtraceCategory > atrace_categories_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fperfetto_2fcommon_2fftrace_5fdescriptor_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// FtraceDescriptor_AtraceCategory

// optional string name = 1;
inline bool FtraceDescriptor_AtraceCategory::_internal_has_name() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool FtraceDescriptor_AtraceCategory::has_name() const {
  return _internal_has_name();
}
inline void FtraceDescriptor_AtraceCategory::clear_name() {
  _impl_.name_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& FtraceDescriptor_AtraceCategory::name() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.FtraceDescriptor.AtraceCategory.name)
  return _internal_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void FtraceDescriptor_AtraceCategory::set_name(ArgT0&& arg0, ArgT... args) {
 _impl_._has_bits_[0] |= 0x00000001u;
 _impl_.name_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:perfetto.protos.FtraceDescriptor.AtraceCategory.name)
}
inline std::string* FtraceDescriptor_AtraceCategory::mutable_name() {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:perfetto.protos.FtraceDescriptor.AtraceCategory.name)
  return _s;
}
inline const std::string& FtraceDescriptor_AtraceCategory::_internal_name() const {
  return _impl_.name_.Get();
}
inline void FtraceDescriptor_AtraceCategory::_internal_set_name(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.name_.Set(value, GetArenaForAllocation());
}
inline std::string* FtraceDescriptor_AtraceCategory::_internal_mutable_name() {
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.name_.Mutable(GetArenaForAllocation());
}
inline std::string* FtraceDescriptor_AtraceCategory::release_name() {
  // @@protoc_insertion_point(field_release:perfetto.protos.FtraceDescriptor.AtraceCategory.name)
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
inline void FtraceDescriptor_AtraceCategory::set_allocated_name(std::string* name) {
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
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.FtraceDescriptor.AtraceCategory.name)
}

// optional string description = 2;
inline bool FtraceDescriptor_AtraceCategory::_internal_has_description() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool FtraceDescriptor_AtraceCategory::has_description() const {
  return _internal_has_description();
}
inline void FtraceDescriptor_AtraceCategory::clear_description() {
  _impl_.description_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline const std::string& FtraceDescriptor_AtraceCategory::description() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.FtraceDescriptor.AtraceCategory.description)
  return _internal_description();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void FtraceDescriptor_AtraceCategory::set_description(ArgT0&& arg0, ArgT... args) {
 _impl_._has_bits_[0] |= 0x00000002u;
 _impl_.description_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:perfetto.protos.FtraceDescriptor.AtraceCategory.description)
}
inline std::string* FtraceDescriptor_AtraceCategory::mutable_description() {
  std::string* _s = _internal_mutable_description();
  // @@protoc_insertion_point(field_mutable:perfetto.protos.FtraceDescriptor.AtraceCategory.description)
  return _s;
}
inline const std::string& FtraceDescriptor_AtraceCategory::_internal_description() const {
  return _impl_.description_.Get();
}
inline void FtraceDescriptor_AtraceCategory::_internal_set_description(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.description_.Set(value, GetArenaForAllocation());
}
inline std::string* FtraceDescriptor_AtraceCategory::_internal_mutable_description() {
  _impl_._has_bits_[0] |= 0x00000002u;
  return _impl_.description_.Mutable(GetArenaForAllocation());
}
inline std::string* FtraceDescriptor_AtraceCategory::release_description() {
  // @@protoc_insertion_point(field_release:perfetto.protos.FtraceDescriptor.AtraceCategory.description)
  if (!_internal_has_description()) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000002u;
  auto* p = _impl_.description_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.description_.IsDefault()) {
    _impl_.description_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void FtraceDescriptor_AtraceCategory::set_allocated_description(std::string* description) {
  if (description != nullptr) {
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  _impl_.description_.SetAllocated(description, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.description_.IsDefault()) {
    _impl_.description_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.FtraceDescriptor.AtraceCategory.description)
}

// -------------------------------------------------------------------

// FtraceDescriptor

// repeated .perfetto.protos.FtraceDescriptor.AtraceCategory atrace_categories = 1;
inline int FtraceDescriptor::_internal_atrace_categories_size() const {
  return _impl_.atrace_categories_.size();
}
inline int FtraceDescriptor::atrace_categories_size() const {
  return _internal_atrace_categories_size();
}
inline void FtraceDescriptor::clear_atrace_categories() {
  _impl_.atrace_categories_.Clear();
}
inline ::perfetto::protos::FtraceDescriptor_AtraceCategory* FtraceDescriptor::mutable_atrace_categories(int index) {
  // @@protoc_insertion_point(field_mutable:perfetto.protos.FtraceDescriptor.atrace_categories)
  return _impl_.atrace_categories_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::FtraceDescriptor_AtraceCategory >*
FtraceDescriptor::mutable_atrace_categories() {
  // @@protoc_insertion_point(field_mutable_list:perfetto.protos.FtraceDescriptor.atrace_categories)
  return &_impl_.atrace_categories_;
}
inline const ::perfetto::protos::FtraceDescriptor_AtraceCategory& FtraceDescriptor::_internal_atrace_categories(int index) const {
  return _impl_.atrace_categories_.Get(index);
}
inline const ::perfetto::protos::FtraceDescriptor_AtraceCategory& FtraceDescriptor::atrace_categories(int index) const {
  // @@protoc_insertion_point(field_get:perfetto.protos.FtraceDescriptor.atrace_categories)
  return _internal_atrace_categories(index);
}
inline ::perfetto::protos::FtraceDescriptor_AtraceCategory* FtraceDescriptor::_internal_add_atrace_categories() {
  return _impl_.atrace_categories_.Add();
}
inline ::perfetto::protos::FtraceDescriptor_AtraceCategory* FtraceDescriptor::add_atrace_categories() {
  ::perfetto::protos::FtraceDescriptor_AtraceCategory* _add = _internal_add_atrace_categories();
  // @@protoc_insertion_point(field_add:perfetto.protos.FtraceDescriptor.atrace_categories)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::FtraceDescriptor_AtraceCategory >&
FtraceDescriptor::atrace_categories() const {
  // @@protoc_insertion_point(field_list:perfetto.protos.FtraceDescriptor.atrace_categories)
  return _impl_.atrace_categories_;
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2fcommon_2fftrace_5fdescriptor_2eproto
