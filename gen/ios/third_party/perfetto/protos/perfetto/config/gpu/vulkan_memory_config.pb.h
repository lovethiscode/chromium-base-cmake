// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/config/gpu/vulkan_memory_config.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2fconfig_2fgpu_2fvulkan_5fmemory_5fconfig_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2fconfig_2fgpu_2fvulkan_5fmemory_5fconfig_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2fconfig_2fgpu_2fvulkan_5fmemory_5fconfig_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2fconfig_2fgpu_2fvulkan_5fmemory_5fconfig_2eproto {
  static const uint32_t offsets[];
};
namespace perfetto {
namespace protos {
class VulkanMemoryConfig;
struct VulkanMemoryConfigDefaultTypeInternal;
extern VulkanMemoryConfigDefaultTypeInternal _VulkanMemoryConfig_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> ::perfetto::protos::VulkanMemoryConfig* Arena::CreateMaybeMessage<::perfetto::protos::VulkanMemoryConfig>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace perfetto {
namespace protos {

// ===================================================================

class VulkanMemoryConfig final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.VulkanMemoryConfig) */ {
 public:
  inline VulkanMemoryConfig() : VulkanMemoryConfig(nullptr) {}
  ~VulkanMemoryConfig() override;
  explicit PROTOBUF_CONSTEXPR VulkanMemoryConfig(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  VulkanMemoryConfig(const VulkanMemoryConfig& from);
  VulkanMemoryConfig(VulkanMemoryConfig&& from) noexcept
    : VulkanMemoryConfig() {
    *this = ::std::move(from);
  }

  inline VulkanMemoryConfig& operator=(const VulkanMemoryConfig& from) {
    CopyFrom(from);
    return *this;
  }
  inline VulkanMemoryConfig& operator=(VulkanMemoryConfig&& from) noexcept {
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

  static const VulkanMemoryConfig& default_instance() {
    return *internal_default_instance();
  }
  static inline const VulkanMemoryConfig* internal_default_instance() {
    return reinterpret_cast<const VulkanMemoryConfig*>(
               &_VulkanMemoryConfig_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(VulkanMemoryConfig& a, VulkanMemoryConfig& b) {
    a.Swap(&b);
  }
  PROTOBUF_NOINLINE void Swap(VulkanMemoryConfig* other) {
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
  void UnsafeArenaSwap(VulkanMemoryConfig* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  VulkanMemoryConfig* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<VulkanMemoryConfig>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const VulkanMemoryConfig& from);
  void MergeFrom(const VulkanMemoryConfig& from);
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
  void InternalSwap(VulkanMemoryConfig* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.VulkanMemoryConfig";
  }
  protected:
  explicit VulkanMemoryConfig(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTrackDriverMemoryUsageFieldNumber = 1,
    kTrackDeviceMemoryUsageFieldNumber = 2,
  };
  // optional bool track_driver_memory_usage = 1;
  bool has_track_driver_memory_usage() const;
  private:
  bool _internal_has_track_driver_memory_usage() const;
  public:
  void clear_track_driver_memory_usage();
  bool track_driver_memory_usage() const;
  void set_track_driver_memory_usage(bool value);
  private:
  bool _internal_track_driver_memory_usage() const;
  void _internal_set_track_driver_memory_usage(bool value);
  public:

  // optional bool track_device_memory_usage = 2;
  bool has_track_device_memory_usage() const;
  private:
  bool _internal_has_track_device_memory_usage() const;
  public:
  void clear_track_device_memory_usage();
  bool track_device_memory_usage() const;
  void set_track_device_memory_usage(bool value);
  private:
  bool _internal_track_device_memory_usage() const;
  void _internal_set_track_device_memory_usage(bool value);
  public:

  // @@protoc_insertion_point(class_scope:perfetto.protos.VulkanMemoryConfig)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    bool track_driver_memory_usage_;
    bool track_device_memory_usage_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fperfetto_2fconfig_2fgpu_2fvulkan_5fmemory_5fconfig_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// VulkanMemoryConfig

// optional bool track_driver_memory_usage = 1;
inline bool VulkanMemoryConfig::_internal_has_track_driver_memory_usage() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool VulkanMemoryConfig::has_track_driver_memory_usage() const {
  return _internal_has_track_driver_memory_usage();
}
inline void VulkanMemoryConfig::clear_track_driver_memory_usage() {
  _impl_.track_driver_memory_usage_ = false;
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline bool VulkanMemoryConfig::_internal_track_driver_memory_usage() const {
  return _impl_.track_driver_memory_usage_;
}
inline bool VulkanMemoryConfig::track_driver_memory_usage() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.VulkanMemoryConfig.track_driver_memory_usage)
  return _internal_track_driver_memory_usage();
}
inline void VulkanMemoryConfig::_internal_set_track_driver_memory_usage(bool value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.track_driver_memory_usage_ = value;
}
inline void VulkanMemoryConfig::set_track_driver_memory_usage(bool value) {
  _internal_set_track_driver_memory_usage(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.VulkanMemoryConfig.track_driver_memory_usage)
}

// optional bool track_device_memory_usage = 2;
inline bool VulkanMemoryConfig::_internal_has_track_device_memory_usage() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool VulkanMemoryConfig::has_track_device_memory_usage() const {
  return _internal_has_track_device_memory_usage();
}
inline void VulkanMemoryConfig::clear_track_device_memory_usage() {
  _impl_.track_device_memory_usage_ = false;
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline bool VulkanMemoryConfig::_internal_track_device_memory_usage() const {
  return _impl_.track_device_memory_usage_;
}
inline bool VulkanMemoryConfig::track_device_memory_usage() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.VulkanMemoryConfig.track_device_memory_usage)
  return _internal_track_device_memory_usage();
}
inline void VulkanMemoryConfig::_internal_set_track_device_memory_usage(bool value) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.track_device_memory_usage_ = value;
}
inline void VulkanMemoryConfig::set_track_device_memory_usage(bool value) {
  _internal_set_track_device_memory_usage(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.VulkanMemoryConfig.track_device_memory_usage)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace perfetto

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2fconfig_2fgpu_2fvulkan_5fmemory_5fconfig_2eproto