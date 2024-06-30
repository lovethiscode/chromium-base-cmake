// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/ftrace/gpu_mem.proto

#include "protos/perfetto/trace/ftrace/gpu_mem.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace perfetto {
namespace protos {
PROTOBUF_CONSTEXPR GpuMemTotalFtraceEvent::GpuMemTotalFtraceEvent(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.gpu_id_)*/0u
  , /*decltype(_impl_.pid_)*/0u
  , /*decltype(_impl_.size_)*/uint64_t{0u}} {}
struct GpuMemTotalFtraceEventDefaultTypeInternal {
  PROTOBUF_CONSTEXPR GpuMemTotalFtraceEventDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~GpuMemTotalFtraceEventDefaultTypeInternal() {}
  union {
    GpuMemTotalFtraceEvent _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 GpuMemTotalFtraceEventDefaultTypeInternal _GpuMemTotalFtraceEvent_default_instance_;
}  // namespace protos
}  // namespace perfetto
namespace perfetto {
namespace protos {

// ===================================================================

class GpuMemTotalFtraceEvent::_Internal {
 public:
  using HasBits = decltype(std::declval<GpuMemTotalFtraceEvent>()._impl_._has_bits_);
  static void set_has_gpu_id(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_pid(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_size(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
};

GpuMemTotalFtraceEvent::GpuMemTotalFtraceEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.GpuMemTotalFtraceEvent)
}
GpuMemTotalFtraceEvent::GpuMemTotalFtraceEvent(const GpuMemTotalFtraceEvent& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite() {
  GpuMemTotalFtraceEvent* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.gpu_id_){}
    , decltype(_impl_.pid_){}
    , decltype(_impl_.size_){}};

  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  ::memcpy(&_impl_.gpu_id_, &from._impl_.gpu_id_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.size_) -
    reinterpret_cast<char*>(&_impl_.gpu_id_)) + sizeof(_impl_.size_));
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.GpuMemTotalFtraceEvent)
}

inline void GpuMemTotalFtraceEvent::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.gpu_id_){0u}
    , decltype(_impl_.pid_){0u}
    , decltype(_impl_.size_){uint64_t{0u}}
  };
}

GpuMemTotalFtraceEvent::~GpuMemTotalFtraceEvent() {
  // @@protoc_insertion_point(destructor:perfetto.protos.GpuMemTotalFtraceEvent)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void GpuMemTotalFtraceEvent::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void GpuMemTotalFtraceEvent::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void GpuMemTotalFtraceEvent::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.GpuMemTotalFtraceEvent)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    ::memset(&_impl_.gpu_id_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&_impl_.size_) -
        reinterpret_cast<char*>(&_impl_.gpu_id_)) + sizeof(_impl_.size_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* GpuMemTotalFtraceEvent::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional uint32 gpu_id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_gpu_id(&has_bits);
          _impl_.gpu_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint32 pid = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_pid(&has_bits);
          _impl_.pid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint64 size = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _Internal::set_has_size(&has_bits);
          _impl_.size_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<std::string>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _impl_._has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* GpuMemTotalFtraceEvent::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.GpuMemTotalFtraceEvent)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional uint32 gpu_id = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(1, this->_internal_gpu_id(), target);
  }

  // optional uint32 pid = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(2, this->_internal_pid(), target);
  }

  // optional uint64 size = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(3, this->_internal_size(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.GpuMemTotalFtraceEvent)
  return target;
}

size_t GpuMemTotalFtraceEvent::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.GpuMemTotalFtraceEvent)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    // optional uint32 gpu_id = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_gpu_id());
    }

    // optional uint32 pid = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_pid());
    }

    // optional uint64 size = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(this->_internal_size());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void GpuMemTotalFtraceEvent::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const GpuMemTotalFtraceEvent*>(
      &from));
}

void GpuMemTotalFtraceEvent::MergeFrom(const GpuMemTotalFtraceEvent& from) {
  GpuMemTotalFtraceEvent* const _this = this;
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.GpuMemTotalFtraceEvent)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_impl_.gpu_id_ = from._impl_.gpu_id_;
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.pid_ = from._impl_.pid_;
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_impl_.size_ = from._impl_.size_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void GpuMemTotalFtraceEvent::CopyFrom(const GpuMemTotalFtraceEvent& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.GpuMemTotalFtraceEvent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GpuMemTotalFtraceEvent::IsInitialized() const {
  return true;
}

void GpuMemTotalFtraceEvent::InternalSwap(GpuMemTotalFtraceEvent* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(GpuMemTotalFtraceEvent, _impl_.size_)
      + sizeof(GpuMemTotalFtraceEvent::_impl_.size_)
      - PROTOBUF_FIELD_OFFSET(GpuMemTotalFtraceEvent, _impl_.gpu_id_)>(
          reinterpret_cast<char*>(&_impl_.gpu_id_),
          reinterpret_cast<char*>(&other->_impl_.gpu_id_));
}

std::string GpuMemTotalFtraceEvent::GetTypeName() const {
  return "perfetto.protos.GpuMemTotalFtraceEvent";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::perfetto::protos::GpuMemTotalFtraceEvent*
Arena::CreateMaybeMessage< ::perfetto::protos::GpuMemTotalFtraceEvent >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::GpuMemTotalFtraceEvent >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
