// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/common/tracing_service_capabilities.proto

#include "protos/perfetto/common/tracing_service_capabilities.pb.h"

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
PROTOBUF_CONSTEXPR TracingServiceCapabilities::TracingServiceCapabilities(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.observable_events_)*/{}
  , /*decltype(_impl_.has_query_capabilities_)*/false
  , /*decltype(_impl_.has_trace_config_output_path_)*/false
  , /*decltype(_impl_.has_clone_session_)*/false} {}
struct TracingServiceCapabilitiesDefaultTypeInternal {
  PROTOBUF_CONSTEXPR TracingServiceCapabilitiesDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~TracingServiceCapabilitiesDefaultTypeInternal() {}
  union {
    TracingServiceCapabilities _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 TracingServiceCapabilitiesDefaultTypeInternal _TracingServiceCapabilities_default_instance_;
}  // namespace protos
}  // namespace perfetto
namespace perfetto {
namespace protos {

// ===================================================================

class TracingServiceCapabilities::_Internal {
 public:
  using HasBits = decltype(std::declval<TracingServiceCapabilities>()._impl_._has_bits_);
  static void set_has_has_query_capabilities(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_has_trace_config_output_path(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_has_clone_session(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
};

TracingServiceCapabilities::TracingServiceCapabilities(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.TracingServiceCapabilities)
}
TracingServiceCapabilities::TracingServiceCapabilities(const TracingServiceCapabilities& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite() {
  TracingServiceCapabilities* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.observable_events_){from._impl_.observable_events_}
    , decltype(_impl_.has_query_capabilities_){}
    , decltype(_impl_.has_trace_config_output_path_){}
    , decltype(_impl_.has_clone_session_){}};

  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  ::memcpy(&_impl_.has_query_capabilities_, &from._impl_.has_query_capabilities_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.has_clone_session_) -
    reinterpret_cast<char*>(&_impl_.has_query_capabilities_)) + sizeof(_impl_.has_clone_session_));
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.TracingServiceCapabilities)
}

inline void TracingServiceCapabilities::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.observable_events_){arena}
    , decltype(_impl_.has_query_capabilities_){false}
    , decltype(_impl_.has_trace_config_output_path_){false}
    , decltype(_impl_.has_clone_session_){false}
  };
}

TracingServiceCapabilities::~TracingServiceCapabilities() {
  // @@protoc_insertion_point(destructor:perfetto.protos.TracingServiceCapabilities)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void TracingServiceCapabilities::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.observable_events_.~RepeatedField();
}

void TracingServiceCapabilities::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void TracingServiceCapabilities::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.TracingServiceCapabilities)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.observable_events_.Clear();
  ::memset(&_impl_.has_query_capabilities_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.has_clone_session_) -
      reinterpret_cast<char*>(&_impl_.has_query_capabilities_)) + sizeof(_impl_.has_clone_session_));
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* TracingServiceCapabilities::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional bool has_query_capabilities = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_has_query_capabilities(&has_bits);
          _impl_.has_query_capabilities_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated .perfetto.protos.ObservableEvents.Type observable_events = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          ptr -= 1;
          do {
            ptr += 1;
            uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
            CHK_(ptr);
            if (PROTOBUF_PREDICT_TRUE(::perfetto::protos::ObservableEvents_Type_IsValid(val))) {
              _internal_add_observable_events(static_cast<::perfetto::protos::ObservableEvents_Type>(val));
            } else {
              ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(2, val, mutable_unknown_fields());
            }
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<16>(ptr));
        } else if (static_cast<uint8_t>(tag) == 18) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedEnumParser<std::string>(_internal_mutable_observable_events(), ptr, ctx, ::perfetto::protos::ObservableEvents_Type_IsValid, &_internal_metadata_, 2);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional bool has_trace_config_output_path = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _Internal::set_has_has_trace_config_output_path(&has_bits);
          _impl_.has_trace_config_output_path_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional bool has_clone_session = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          _Internal::set_has_has_clone_session(&has_bits);
          _impl_.has_clone_session_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

uint8_t* TracingServiceCapabilities::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.TracingServiceCapabilities)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional bool has_query_capabilities = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(1, this->_internal_has_query_capabilities(), target);
  }

  // repeated .perfetto.protos.ObservableEvents.Type observable_events = 2;
  for (int i = 0, n = this->_internal_observable_events_size(); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
        2, this->_internal_observable_events(i), target);
  }

  // optional bool has_trace_config_output_path = 3;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(3, this->_internal_has_trace_config_output_path(), target);
  }

  // optional bool has_clone_session = 4;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(4, this->_internal_has_clone_session(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.TracingServiceCapabilities)
  return target;
}

size_t TracingServiceCapabilities::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.TracingServiceCapabilities)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .perfetto.protos.ObservableEvents.Type observable_events = 2;
  {
    size_t data_size = 0;
    unsigned int count = static_cast<unsigned int>(this->_internal_observable_events_size());for (unsigned int i = 0; i < count; i++) {
      data_size += ::_pbi::WireFormatLite::EnumSize(
        this->_internal_observable_events(static_cast<int>(i)));
    }
    total_size += (1UL * count) + data_size;
  }

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    // optional bool has_query_capabilities = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 + 1;
    }

    // optional bool has_trace_config_output_path = 3;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 + 1;
    }

    // optional bool has_clone_session = 4;
    if (cached_has_bits & 0x00000004u) {
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

void TracingServiceCapabilities::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const TracingServiceCapabilities*>(
      &from));
}

void TracingServiceCapabilities::MergeFrom(const TracingServiceCapabilities& from) {
  TracingServiceCapabilities* const _this = this;
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.TracingServiceCapabilities)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.observable_events_.MergeFrom(from._impl_.observable_events_);
  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_impl_.has_query_capabilities_ = from._impl_.has_query_capabilities_;
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.has_trace_config_output_path_ = from._impl_.has_trace_config_output_path_;
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_impl_.has_clone_session_ = from._impl_.has_clone_session_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void TracingServiceCapabilities::CopyFrom(const TracingServiceCapabilities& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.TracingServiceCapabilities)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TracingServiceCapabilities::IsInitialized() const {
  return true;
}

void TracingServiceCapabilities::InternalSwap(TracingServiceCapabilities* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  _impl_.observable_events_.InternalSwap(&other->_impl_.observable_events_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(TracingServiceCapabilities, _impl_.has_clone_session_)
      + sizeof(TracingServiceCapabilities::_impl_.has_clone_session_)
      - PROTOBUF_FIELD_OFFSET(TracingServiceCapabilities, _impl_.has_query_capabilities_)>(
          reinterpret_cast<char*>(&_impl_.has_query_capabilities_),
          reinterpret_cast<char*>(&other->_impl_.has_query_capabilities_));
}

std::string TracingServiceCapabilities::GetTypeName() const {
  return "perfetto.protos.TracingServiceCapabilities";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::perfetto::protos::TracingServiceCapabilities*
Arena::CreateMaybeMessage< ::perfetto::protos::TracingServiceCapabilities >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::TracingServiceCapabilities >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
