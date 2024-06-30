// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/common/track_event_descriptor.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2fcommon_2ftrack_5fevent_5fdescriptor_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2fcommon_2ftrack_5fevent_5fdescriptor_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2fcommon_2ftrack_5fevent_5fdescriptor_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2fcommon_2ftrack_5fevent_5fdescriptor_2eproto {
  static const uint32_t offsets[];
};
namespace perfetto {
namespace protos {
class TrackEventCategory;
struct TrackEventCategoryDefaultTypeInternal;
extern TrackEventCategoryDefaultTypeInternal _TrackEventCategory_default_instance_;
class TrackEventDescriptor;
struct TrackEventDescriptorDefaultTypeInternal;
extern TrackEventDescriptorDefaultTypeInternal _TrackEventDescriptor_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> ::perfetto::protos::TrackEventCategory* Arena::CreateMaybeMessage<::perfetto::protos::TrackEventCategory>(Arena*);
template<> ::perfetto::protos::TrackEventDescriptor* Arena::CreateMaybeMessage<::perfetto::protos::TrackEventDescriptor>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace perfetto {
namespace protos {

// ===================================================================

class TrackEventCategory final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.TrackEventCategory) */ {
 public:
  inline TrackEventCategory() : TrackEventCategory(nullptr) {}
  ~TrackEventCategory() override;
  explicit PROTOBUF_CONSTEXPR TrackEventCategory(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  TrackEventCategory(const TrackEventCategory& from);
  TrackEventCategory(TrackEventCategory&& from) noexcept
    : TrackEventCategory() {
    *this = ::std::move(from);
  }

  inline TrackEventCategory& operator=(const TrackEventCategory& from) {
    CopyFrom(from);
    return *this;
  }
  inline TrackEventCategory& operator=(TrackEventCategory&& from) noexcept {
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

  static const TrackEventCategory& default_instance() {
    return *internal_default_instance();
  }
  static inline const TrackEventCategory* internal_default_instance() {
    return reinterpret_cast<const TrackEventCategory*>(
               &_TrackEventCategory_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(TrackEventCategory& a, TrackEventCategory& b) {
    a.Swap(&b);
  }
  PROTOBUF_NOINLINE void Swap(TrackEventCategory* other) {
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
  void UnsafeArenaSwap(TrackEventCategory* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  TrackEventCategory* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<TrackEventCategory>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const TrackEventCategory& from);
  void MergeFrom(const TrackEventCategory& from);
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
  void InternalSwap(TrackEventCategory* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.TrackEventCategory";
  }
  protected:
  explicit TrackEventCategory(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTagsFieldNumber = 3,
    kNameFieldNumber = 1,
    kDescriptionFieldNumber = 2,
  };
  // repeated string tags = 3;
  int tags_size() const;
  private:
  int _internal_tags_size() const;
  public:
  void clear_tags();
  const std::string& tags(int index) const;
  std::string* mutable_tags(int index);
  void set_tags(int index, const std::string& value);
  void set_tags(int index, std::string&& value);
  void set_tags(int index, const char* value);
  void set_tags(int index, const char* value, size_t size);
  std::string* add_tags();
  void add_tags(const std::string& value);
  void add_tags(std::string&& value);
  void add_tags(const char* value);
  void add_tags(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& tags() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_tags();
  private:
  const std::string& _internal_tags(int index) const;
  std::string* _internal_add_tags();
  public:

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

  // @@protoc_insertion_point(class_scope:perfetto.protos.TrackEventCategory)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> tags_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr description_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fperfetto_2fcommon_2ftrack_5fevent_5fdescriptor_2eproto;
};
// -------------------------------------------------------------------

class TrackEventDescriptor final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.TrackEventDescriptor) */ {
 public:
  inline TrackEventDescriptor() : TrackEventDescriptor(nullptr) {}
  ~TrackEventDescriptor() override;
  explicit PROTOBUF_CONSTEXPR TrackEventDescriptor(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  TrackEventDescriptor(const TrackEventDescriptor& from);
  TrackEventDescriptor(TrackEventDescriptor&& from) noexcept
    : TrackEventDescriptor() {
    *this = ::std::move(from);
  }

  inline TrackEventDescriptor& operator=(const TrackEventDescriptor& from) {
    CopyFrom(from);
    return *this;
  }
  inline TrackEventDescriptor& operator=(TrackEventDescriptor&& from) noexcept {
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

  static const TrackEventDescriptor& default_instance() {
    return *internal_default_instance();
  }
  static inline const TrackEventDescriptor* internal_default_instance() {
    return reinterpret_cast<const TrackEventDescriptor*>(
               &_TrackEventDescriptor_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(TrackEventDescriptor& a, TrackEventDescriptor& b) {
    a.Swap(&b);
  }
  PROTOBUF_NOINLINE void Swap(TrackEventDescriptor* other) {
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
  void UnsafeArenaSwap(TrackEventDescriptor* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  TrackEventDescriptor* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<TrackEventDescriptor>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const TrackEventDescriptor& from);
  void MergeFrom(const TrackEventDescriptor& from);
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
  void InternalSwap(TrackEventDescriptor* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.TrackEventDescriptor";
  }
  protected:
  explicit TrackEventDescriptor(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kAvailableCategoriesFieldNumber = 1,
  };
  // repeated .perfetto.protos.TrackEventCategory available_categories = 1;
  int available_categories_size() const;
  private:
  int _internal_available_categories_size() const;
  public:
  void clear_available_categories();
  ::perfetto::protos::TrackEventCategory* mutable_available_categories(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::TrackEventCategory >*
      mutable_available_categories();
  private:
  const ::perfetto::protos::TrackEventCategory& _internal_available_categories(int index) const;
  ::perfetto::protos::TrackEventCategory* _internal_add_available_categories();
  public:
  const ::perfetto::protos::TrackEventCategory& available_categories(int index) const;
  ::perfetto::protos::TrackEventCategory* add_available_categories();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::TrackEventCategory >&
      available_categories() const;

  // @@protoc_insertion_point(class_scope:perfetto.protos.TrackEventDescriptor)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::TrackEventCategory > available_categories_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fperfetto_2fcommon_2ftrack_5fevent_5fdescriptor_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TrackEventCategory

// optional string name = 1;
inline bool TrackEventCategory::_internal_has_name() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool TrackEventCategory::has_name() const {
  return _internal_has_name();
}
inline void TrackEventCategory::clear_name() {
  _impl_.name_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& TrackEventCategory::name() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.TrackEventCategory.name)
  return _internal_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void TrackEventCategory::set_name(ArgT0&& arg0, ArgT... args) {
 _impl_._has_bits_[0] |= 0x00000001u;
 _impl_.name_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:perfetto.protos.TrackEventCategory.name)
}
inline std::string* TrackEventCategory::mutable_name() {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:perfetto.protos.TrackEventCategory.name)
  return _s;
}
inline const std::string& TrackEventCategory::_internal_name() const {
  return _impl_.name_.Get();
}
inline void TrackEventCategory::_internal_set_name(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.name_.Set(value, GetArenaForAllocation());
}
inline std::string* TrackEventCategory::_internal_mutable_name() {
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.name_.Mutable(GetArenaForAllocation());
}
inline std::string* TrackEventCategory::release_name() {
  // @@protoc_insertion_point(field_release:perfetto.protos.TrackEventCategory.name)
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
inline void TrackEventCategory::set_allocated_name(std::string* name) {
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
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.TrackEventCategory.name)
}

// optional string description = 2;
inline bool TrackEventCategory::_internal_has_description() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool TrackEventCategory::has_description() const {
  return _internal_has_description();
}
inline void TrackEventCategory::clear_description() {
  _impl_.description_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline const std::string& TrackEventCategory::description() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.TrackEventCategory.description)
  return _internal_description();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void TrackEventCategory::set_description(ArgT0&& arg0, ArgT... args) {
 _impl_._has_bits_[0] |= 0x00000002u;
 _impl_.description_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:perfetto.protos.TrackEventCategory.description)
}
inline std::string* TrackEventCategory::mutable_description() {
  std::string* _s = _internal_mutable_description();
  // @@protoc_insertion_point(field_mutable:perfetto.protos.TrackEventCategory.description)
  return _s;
}
inline const std::string& TrackEventCategory::_internal_description() const {
  return _impl_.description_.Get();
}
inline void TrackEventCategory::_internal_set_description(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.description_.Set(value, GetArenaForAllocation());
}
inline std::string* TrackEventCategory::_internal_mutable_description() {
  _impl_._has_bits_[0] |= 0x00000002u;
  return _impl_.description_.Mutable(GetArenaForAllocation());
}
inline std::string* TrackEventCategory::release_description() {
  // @@protoc_insertion_point(field_release:perfetto.protos.TrackEventCategory.description)
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
inline void TrackEventCategory::set_allocated_description(std::string* description) {
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
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.TrackEventCategory.description)
}

// repeated string tags = 3;
inline int TrackEventCategory::_internal_tags_size() const {
  return _impl_.tags_.size();
}
inline int TrackEventCategory::tags_size() const {
  return _internal_tags_size();
}
inline void TrackEventCategory::clear_tags() {
  _impl_.tags_.Clear();
}
inline std::string* TrackEventCategory::add_tags() {
  std::string* _s = _internal_add_tags();
  // @@protoc_insertion_point(field_add_mutable:perfetto.protos.TrackEventCategory.tags)
  return _s;
}
inline const std::string& TrackEventCategory::_internal_tags(int index) const {
  return _impl_.tags_.Get(index);
}
inline const std::string& TrackEventCategory::tags(int index) const {
  // @@protoc_insertion_point(field_get:perfetto.protos.TrackEventCategory.tags)
  return _internal_tags(index);
}
inline std::string* TrackEventCategory::mutable_tags(int index) {
  // @@protoc_insertion_point(field_mutable:perfetto.protos.TrackEventCategory.tags)
  return _impl_.tags_.Mutable(index);
}
inline void TrackEventCategory::set_tags(int index, const std::string& value) {
  _impl_.tags_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.TrackEventCategory.tags)
}
inline void TrackEventCategory::set_tags(int index, std::string&& value) {
  _impl_.tags_.Mutable(index)->assign(std::move(value));
  // @@protoc_insertion_point(field_set:perfetto.protos.TrackEventCategory.tags)
}
inline void TrackEventCategory::set_tags(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _impl_.tags_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:perfetto.protos.TrackEventCategory.tags)
}
inline void TrackEventCategory::set_tags(int index, const char* value, size_t size) {
  _impl_.tags_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:perfetto.protos.TrackEventCategory.tags)
}
inline std::string* TrackEventCategory::_internal_add_tags() {
  return _impl_.tags_.Add();
}
inline void TrackEventCategory::add_tags(const std::string& value) {
  _impl_.tags_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:perfetto.protos.TrackEventCategory.tags)
}
inline void TrackEventCategory::add_tags(std::string&& value) {
  _impl_.tags_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:perfetto.protos.TrackEventCategory.tags)
}
inline void TrackEventCategory::add_tags(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _impl_.tags_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:perfetto.protos.TrackEventCategory.tags)
}
inline void TrackEventCategory::add_tags(const char* value, size_t size) {
  _impl_.tags_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:perfetto.protos.TrackEventCategory.tags)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
TrackEventCategory::tags() const {
  // @@protoc_insertion_point(field_list:perfetto.protos.TrackEventCategory.tags)
  return _impl_.tags_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
TrackEventCategory::mutable_tags() {
  // @@protoc_insertion_point(field_mutable_list:perfetto.protos.TrackEventCategory.tags)
  return &_impl_.tags_;
}

// -------------------------------------------------------------------

// TrackEventDescriptor

// repeated .perfetto.protos.TrackEventCategory available_categories = 1;
inline int TrackEventDescriptor::_internal_available_categories_size() const {
  return _impl_.available_categories_.size();
}
inline int TrackEventDescriptor::available_categories_size() const {
  return _internal_available_categories_size();
}
inline void TrackEventDescriptor::clear_available_categories() {
  _impl_.available_categories_.Clear();
}
inline ::perfetto::protos::TrackEventCategory* TrackEventDescriptor::mutable_available_categories(int index) {
  // @@protoc_insertion_point(field_mutable:perfetto.protos.TrackEventDescriptor.available_categories)
  return _impl_.available_categories_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::TrackEventCategory >*
TrackEventDescriptor::mutable_available_categories() {
  // @@protoc_insertion_point(field_mutable_list:perfetto.protos.TrackEventDescriptor.available_categories)
  return &_impl_.available_categories_;
}
inline const ::perfetto::protos::TrackEventCategory& TrackEventDescriptor::_internal_available_categories(int index) const {
  return _impl_.available_categories_.Get(index);
}
inline const ::perfetto::protos::TrackEventCategory& TrackEventDescriptor::available_categories(int index) const {
  // @@protoc_insertion_point(field_get:perfetto.protos.TrackEventDescriptor.available_categories)
  return _internal_available_categories(index);
}
inline ::perfetto::protos::TrackEventCategory* TrackEventDescriptor::_internal_add_available_categories() {
  return _impl_.available_categories_.Add();
}
inline ::perfetto::protos::TrackEventCategory* TrackEventDescriptor::add_available_categories() {
  ::perfetto::protos::TrackEventCategory* _add = _internal_add_available_categories();
  // @@protoc_insertion_point(field_add:perfetto.protos.TrackEventDescriptor.available_categories)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::TrackEventCategory >&
TrackEventDescriptor::available_categories() const {
  // @@protoc_insertion_point(field_list:perfetto.protos.TrackEventDescriptor.available_categories)
  return _impl_.available_categories_;
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2fcommon_2ftrack_5fevent_5fdescriptor_2eproto
