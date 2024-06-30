// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/config/android/android_game_intervention_list_config.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2fconfig_2fandroid_2fandroid_5fgame_5fintervention_5flist_5fconfig_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2fconfig_2fandroid_2fandroid_5fgame_5fintervention_5flist_5fconfig_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2fconfig_2fandroid_2fandroid_5fgame_5fintervention_5flist_5fconfig_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2fconfig_2fandroid_2fandroid_5fgame_5fintervention_5flist_5fconfig_2eproto {
  static const uint32_t offsets[];
};
namespace perfetto {
namespace protos {
class AndroidGameInterventionListConfig;
struct AndroidGameInterventionListConfigDefaultTypeInternal;
extern AndroidGameInterventionListConfigDefaultTypeInternal _AndroidGameInterventionListConfig_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> ::perfetto::protos::AndroidGameInterventionListConfig* Arena::CreateMaybeMessage<::perfetto::protos::AndroidGameInterventionListConfig>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace perfetto {
namespace protos {

// ===================================================================

class AndroidGameInterventionListConfig final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.AndroidGameInterventionListConfig) */ {
 public:
  inline AndroidGameInterventionListConfig() : AndroidGameInterventionListConfig(nullptr) {}
  ~AndroidGameInterventionListConfig() override;
  explicit PROTOBUF_CONSTEXPR AndroidGameInterventionListConfig(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  AndroidGameInterventionListConfig(const AndroidGameInterventionListConfig& from);
  AndroidGameInterventionListConfig(AndroidGameInterventionListConfig&& from) noexcept
    : AndroidGameInterventionListConfig() {
    *this = ::std::move(from);
  }

  inline AndroidGameInterventionListConfig& operator=(const AndroidGameInterventionListConfig& from) {
    CopyFrom(from);
    return *this;
  }
  inline AndroidGameInterventionListConfig& operator=(AndroidGameInterventionListConfig&& from) noexcept {
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

  static const AndroidGameInterventionListConfig& default_instance() {
    return *internal_default_instance();
  }
  static inline const AndroidGameInterventionListConfig* internal_default_instance() {
    return reinterpret_cast<const AndroidGameInterventionListConfig*>(
               &_AndroidGameInterventionListConfig_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(AndroidGameInterventionListConfig& a, AndroidGameInterventionListConfig& b) {
    a.Swap(&b);
  }
  PROTOBUF_NOINLINE void Swap(AndroidGameInterventionListConfig* other) {
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
  void UnsafeArenaSwap(AndroidGameInterventionListConfig* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  AndroidGameInterventionListConfig* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<AndroidGameInterventionListConfig>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const AndroidGameInterventionListConfig& from);
  void MergeFrom(const AndroidGameInterventionListConfig& from);
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
  void InternalSwap(AndroidGameInterventionListConfig* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.AndroidGameInterventionListConfig";
  }
  protected:
  explicit AndroidGameInterventionListConfig(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPackageNameFilterFieldNumber = 1,
  };
  // repeated string package_name_filter = 1;
  int package_name_filter_size() const;
  private:
  int _internal_package_name_filter_size() const;
  public:
  void clear_package_name_filter();
  const std::string& package_name_filter(int index) const;
  std::string* mutable_package_name_filter(int index);
  void set_package_name_filter(int index, const std::string& value);
  void set_package_name_filter(int index, std::string&& value);
  void set_package_name_filter(int index, const char* value);
  void set_package_name_filter(int index, const char* value, size_t size);
  std::string* add_package_name_filter();
  void add_package_name_filter(const std::string& value);
  void add_package_name_filter(std::string&& value);
  void add_package_name_filter(const char* value);
  void add_package_name_filter(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& package_name_filter() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_package_name_filter();
  private:
  const std::string& _internal_package_name_filter(int index) const;
  std::string* _internal_add_package_name_filter();
  public:

  // @@protoc_insertion_point(class_scope:perfetto.protos.AndroidGameInterventionListConfig)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> package_name_filter_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fperfetto_2fconfig_2fandroid_2fandroid_5fgame_5fintervention_5flist_5fconfig_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// AndroidGameInterventionListConfig

// repeated string package_name_filter = 1;
inline int AndroidGameInterventionListConfig::_internal_package_name_filter_size() const {
  return _impl_.package_name_filter_.size();
}
inline int AndroidGameInterventionListConfig::package_name_filter_size() const {
  return _internal_package_name_filter_size();
}
inline void AndroidGameInterventionListConfig::clear_package_name_filter() {
  _impl_.package_name_filter_.Clear();
}
inline std::string* AndroidGameInterventionListConfig::add_package_name_filter() {
  std::string* _s = _internal_add_package_name_filter();
  // @@protoc_insertion_point(field_add_mutable:perfetto.protos.AndroidGameInterventionListConfig.package_name_filter)
  return _s;
}
inline const std::string& AndroidGameInterventionListConfig::_internal_package_name_filter(int index) const {
  return _impl_.package_name_filter_.Get(index);
}
inline const std::string& AndroidGameInterventionListConfig::package_name_filter(int index) const {
  // @@protoc_insertion_point(field_get:perfetto.protos.AndroidGameInterventionListConfig.package_name_filter)
  return _internal_package_name_filter(index);
}
inline std::string* AndroidGameInterventionListConfig::mutable_package_name_filter(int index) {
  // @@protoc_insertion_point(field_mutable:perfetto.protos.AndroidGameInterventionListConfig.package_name_filter)
  return _impl_.package_name_filter_.Mutable(index);
}
inline void AndroidGameInterventionListConfig::set_package_name_filter(int index, const std::string& value) {
  _impl_.package_name_filter_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.AndroidGameInterventionListConfig.package_name_filter)
}
inline void AndroidGameInterventionListConfig::set_package_name_filter(int index, std::string&& value) {
  _impl_.package_name_filter_.Mutable(index)->assign(std::move(value));
  // @@protoc_insertion_point(field_set:perfetto.protos.AndroidGameInterventionListConfig.package_name_filter)
}
inline void AndroidGameInterventionListConfig::set_package_name_filter(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _impl_.package_name_filter_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:perfetto.protos.AndroidGameInterventionListConfig.package_name_filter)
}
inline void AndroidGameInterventionListConfig::set_package_name_filter(int index, const char* value, size_t size) {
  _impl_.package_name_filter_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:perfetto.protos.AndroidGameInterventionListConfig.package_name_filter)
}
inline std::string* AndroidGameInterventionListConfig::_internal_add_package_name_filter() {
  return _impl_.package_name_filter_.Add();
}
inline void AndroidGameInterventionListConfig::add_package_name_filter(const std::string& value) {
  _impl_.package_name_filter_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:perfetto.protos.AndroidGameInterventionListConfig.package_name_filter)
}
inline void AndroidGameInterventionListConfig::add_package_name_filter(std::string&& value) {
  _impl_.package_name_filter_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:perfetto.protos.AndroidGameInterventionListConfig.package_name_filter)
}
inline void AndroidGameInterventionListConfig::add_package_name_filter(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _impl_.package_name_filter_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:perfetto.protos.AndroidGameInterventionListConfig.package_name_filter)
}
inline void AndroidGameInterventionListConfig::add_package_name_filter(const char* value, size_t size) {
  _impl_.package_name_filter_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:perfetto.protos.AndroidGameInterventionListConfig.package_name_filter)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
AndroidGameInterventionListConfig::package_name_filter() const {
  // @@protoc_insertion_point(field_list:perfetto.protos.AndroidGameInterventionListConfig.package_name_filter)
  return _impl_.package_name_filter_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
AndroidGameInterventionListConfig::mutable_package_name_filter() {
  // @@protoc_insertion_point(field_mutable_list:perfetto.protos.AndroidGameInterventionListConfig.package_name_filter)
  return &_impl_.package_name_filter_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace perfetto

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2fconfig_2fandroid_2fandroid_5fgame_5fintervention_5flist_5fconfig_2eproto
