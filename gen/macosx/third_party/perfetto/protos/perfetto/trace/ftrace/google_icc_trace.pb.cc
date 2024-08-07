// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/ftrace/google_icc_trace.proto

#include "protos/perfetto/trace/ftrace/google_icc_trace.pb.h"

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
PROTOBUF_CONSTEXPR GoogleIccEventFtraceEvent::GoogleIccEventFtraceEvent(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.event_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.timestamp_)*/uint64_t{0u}} {}
struct GoogleIccEventFtraceEventDefaultTypeInternal {
  PROTOBUF_CONSTEXPR GoogleIccEventFtraceEventDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~GoogleIccEventFtraceEventDefaultTypeInternal() {}
  union {
    GoogleIccEventFtraceEvent _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 GoogleIccEventFtraceEventDefaultTypeInternal _GoogleIccEventFtraceEvent_default_instance_;
}  // namespace protos
}  // namespace perfetto
namespace perfetto {
namespace protos {

// ===================================================================

class GoogleIccEventFtraceEvent::_Internal {
 public:
  using HasBits = decltype(std::declval<GoogleIccEventFtraceEvent>()._impl_._has_bits_);
  static void set_has_event(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_timestamp(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

GoogleIccEventFtraceEvent::GoogleIccEventFtraceEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.GoogleIccEventFtraceEvent)
}
GoogleIccEventFtraceEvent::GoogleIccEventFtraceEvent(const GoogleIccEventFtraceEvent& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite() {
  GoogleIccEventFtraceEvent* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.event_){}
    , decltype(_impl_.timestamp_){}};

  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  _impl_.event_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.event_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_event()) {
    _this->_impl_.event_.Set(from._internal_event(), 
      _this->GetArenaForAllocation());
  }
  _this->_impl_.timestamp_ = from._impl_.timestamp_;
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.GoogleIccEventFtraceEvent)
}

inline void GoogleIccEventFtraceEvent::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.event_){}
    , decltype(_impl_.timestamp_){uint64_t{0u}}
  };
  _impl_.event_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.event_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

GoogleIccEventFtraceEvent::~GoogleIccEventFtraceEvent() {
  // @@protoc_insertion_point(destructor:perfetto.protos.GoogleIccEventFtraceEvent)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void GoogleIccEventFtraceEvent::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.event_.Destroy();
}

void GoogleIccEventFtraceEvent::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void GoogleIccEventFtraceEvent::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.GoogleIccEventFtraceEvent)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    _impl_.event_.ClearNonDefaultToEmpty();
  }
  _impl_.timestamp_ = uint64_t{0u};
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* GoogleIccEventFtraceEvent::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional string event = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_event();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint64 timestamp = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_timestamp(&has_bits);
          _impl_.timestamp_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

uint8_t* GoogleIccEventFtraceEvent::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.GoogleIccEventFtraceEvent)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional string event = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_event(), target);
  }

  // optional uint64 timestamp = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(2, this->_internal_timestamp(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.GoogleIccEventFtraceEvent)
  return target;
}

size_t GoogleIccEventFtraceEvent::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.GoogleIccEventFtraceEvent)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional string event = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_event());
    }

    // optional uint64 timestamp = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(this->_internal_timestamp());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void GoogleIccEventFtraceEvent::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const GoogleIccEventFtraceEvent*>(
      &from));
}

void GoogleIccEventFtraceEvent::MergeFrom(const GoogleIccEventFtraceEvent& from) {
  GoogleIccEventFtraceEvent* const _this = this;
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.GoogleIccEventFtraceEvent)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_set_event(from._internal_event());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.timestamp_ = from._impl_.timestamp_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void GoogleIccEventFtraceEvent::CopyFrom(const GoogleIccEventFtraceEvent& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.GoogleIccEventFtraceEvent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GoogleIccEventFtraceEvent::IsInitialized() const {
  return true;
}

void GoogleIccEventFtraceEvent::InternalSwap(GoogleIccEventFtraceEvent* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.event_, lhs_arena,
      &other->_impl_.event_, rhs_arena
  );
  swap(_impl_.timestamp_, other->_impl_.timestamp_);
}

std::string GoogleIccEventFtraceEvent::GetTypeName() const {
  return "perfetto.protos.GoogleIccEventFtraceEvent";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::perfetto::protos::GoogleIccEventFtraceEvent*
Arena::CreateMaybeMessage< ::perfetto::protos::GoogleIccEventFtraceEvent >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::GoogleIccEventFtraceEvent >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
