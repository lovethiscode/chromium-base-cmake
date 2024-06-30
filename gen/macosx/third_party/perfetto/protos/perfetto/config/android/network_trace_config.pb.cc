// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/config/android/network_trace_config.proto

#include "protos/perfetto/config/android/network_trace_config.pb.h"

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
PROTOBUF_CONSTEXPR NetworkPacketTraceConfig::NetworkPacketTraceConfig(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.poll_ms_)*/0u
  , /*decltype(_impl_.aggregation_threshold_)*/0u
  , /*decltype(_impl_.intern_limit_)*/0u
  , /*decltype(_impl_.drop_local_port_)*/false
  , /*decltype(_impl_.drop_remote_port_)*/false
  , /*decltype(_impl_.drop_tcp_flags_)*/false} {}
struct NetworkPacketTraceConfigDefaultTypeInternal {
  PROTOBUF_CONSTEXPR NetworkPacketTraceConfigDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~NetworkPacketTraceConfigDefaultTypeInternal() {}
  union {
    NetworkPacketTraceConfig _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 NetworkPacketTraceConfigDefaultTypeInternal _NetworkPacketTraceConfig_default_instance_;
}  // namespace protos
}  // namespace perfetto
namespace perfetto {
namespace protos {

// ===================================================================

class NetworkPacketTraceConfig::_Internal {
 public:
  using HasBits = decltype(std::declval<NetworkPacketTraceConfig>()._impl_._has_bits_);
  static void set_has_poll_ms(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_aggregation_threshold(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_intern_limit(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_drop_local_port(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_drop_remote_port(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_drop_tcp_flags(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
};

NetworkPacketTraceConfig::NetworkPacketTraceConfig(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.NetworkPacketTraceConfig)
}
NetworkPacketTraceConfig::NetworkPacketTraceConfig(const NetworkPacketTraceConfig& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite() {
  NetworkPacketTraceConfig* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.poll_ms_){}
    , decltype(_impl_.aggregation_threshold_){}
    , decltype(_impl_.intern_limit_){}
    , decltype(_impl_.drop_local_port_){}
    , decltype(_impl_.drop_remote_port_){}
    , decltype(_impl_.drop_tcp_flags_){}};

  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  ::memcpy(&_impl_.poll_ms_, &from._impl_.poll_ms_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.drop_tcp_flags_) -
    reinterpret_cast<char*>(&_impl_.poll_ms_)) + sizeof(_impl_.drop_tcp_flags_));
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.NetworkPacketTraceConfig)
}

inline void NetworkPacketTraceConfig::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.poll_ms_){0u}
    , decltype(_impl_.aggregation_threshold_){0u}
    , decltype(_impl_.intern_limit_){0u}
    , decltype(_impl_.drop_local_port_){false}
    , decltype(_impl_.drop_remote_port_){false}
    , decltype(_impl_.drop_tcp_flags_){false}
  };
}

NetworkPacketTraceConfig::~NetworkPacketTraceConfig() {
  // @@protoc_insertion_point(destructor:perfetto.protos.NetworkPacketTraceConfig)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void NetworkPacketTraceConfig::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void NetworkPacketTraceConfig::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void NetworkPacketTraceConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.NetworkPacketTraceConfig)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000003fu) {
    ::memset(&_impl_.poll_ms_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&_impl_.drop_tcp_flags_) -
        reinterpret_cast<char*>(&_impl_.poll_ms_)) + sizeof(_impl_.drop_tcp_flags_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* NetworkPacketTraceConfig::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional uint32 poll_ms = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_poll_ms(&has_bits);
          _impl_.poll_ms_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint32 aggregation_threshold = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_aggregation_threshold(&has_bits);
          _impl_.aggregation_threshold_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint32 intern_limit = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _Internal::set_has_intern_limit(&has_bits);
          _impl_.intern_limit_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional bool drop_local_port = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          _Internal::set_has_drop_local_port(&has_bits);
          _impl_.drop_local_port_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional bool drop_remote_port = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 40)) {
          _Internal::set_has_drop_remote_port(&has_bits);
          _impl_.drop_remote_port_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional bool drop_tcp_flags = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 48)) {
          _Internal::set_has_drop_tcp_flags(&has_bits);
          _impl_.drop_tcp_flags_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

uint8_t* NetworkPacketTraceConfig::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.NetworkPacketTraceConfig)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional uint32 poll_ms = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(1, this->_internal_poll_ms(), target);
  }

  // optional uint32 aggregation_threshold = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(2, this->_internal_aggregation_threshold(), target);
  }

  // optional uint32 intern_limit = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(3, this->_internal_intern_limit(), target);
  }

  // optional bool drop_local_port = 4;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(4, this->_internal_drop_local_port(), target);
  }

  // optional bool drop_remote_port = 5;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(5, this->_internal_drop_remote_port(), target);
  }

  // optional bool drop_tcp_flags = 6;
  if (cached_has_bits & 0x00000020u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(6, this->_internal_drop_tcp_flags(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.NetworkPacketTraceConfig)
  return target;
}

size_t NetworkPacketTraceConfig::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.NetworkPacketTraceConfig)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000003fu) {
    // optional uint32 poll_ms = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_poll_ms());
    }

    // optional uint32 aggregation_threshold = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_aggregation_threshold());
    }

    // optional uint32 intern_limit = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_intern_limit());
    }

    // optional bool drop_local_port = 4;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 + 1;
    }

    // optional bool drop_remote_port = 5;
    if (cached_has_bits & 0x00000010u) {
      total_size += 1 + 1;
    }

    // optional bool drop_tcp_flags = 6;
    if (cached_has_bits & 0x00000020u) {
      total_size += 1 + 1;
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void NetworkPacketTraceConfig::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const NetworkPacketTraceConfig*>(
      &from));
}

void NetworkPacketTraceConfig::MergeFrom(const NetworkPacketTraceConfig& from) {
  NetworkPacketTraceConfig* const _this = this;
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.NetworkPacketTraceConfig)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x0000003fu) {
    if (cached_has_bits & 0x00000001u) {
      _this->_impl_.poll_ms_ = from._impl_.poll_ms_;
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.aggregation_threshold_ = from._impl_.aggregation_threshold_;
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_impl_.intern_limit_ = from._impl_.intern_limit_;
    }
    if (cached_has_bits & 0x00000008u) {
      _this->_impl_.drop_local_port_ = from._impl_.drop_local_port_;
    }
    if (cached_has_bits & 0x00000010u) {
      _this->_impl_.drop_remote_port_ = from._impl_.drop_remote_port_;
    }
    if (cached_has_bits & 0x00000020u) {
      _this->_impl_.drop_tcp_flags_ = from._impl_.drop_tcp_flags_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void NetworkPacketTraceConfig::CopyFrom(const NetworkPacketTraceConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.NetworkPacketTraceConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool NetworkPacketTraceConfig::IsInitialized() const {
  return true;
}

void NetworkPacketTraceConfig::InternalSwap(NetworkPacketTraceConfig* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(NetworkPacketTraceConfig, _impl_.drop_tcp_flags_)
      + sizeof(NetworkPacketTraceConfig::_impl_.drop_tcp_flags_)
      - PROTOBUF_FIELD_OFFSET(NetworkPacketTraceConfig, _impl_.poll_ms_)>(
          reinterpret_cast<char*>(&_impl_.poll_ms_),
          reinterpret_cast<char*>(&other->_impl_.poll_ms_));
}

std::string NetworkPacketTraceConfig::GetTypeName() const {
  return "perfetto.protos.NetworkPacketTraceConfig";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::perfetto::protos::NetworkPacketTraceConfig*
Arena::CreateMaybeMessage< ::perfetto::protos::NetworkPacketTraceConfig >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::NetworkPacketTraceConfig >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>