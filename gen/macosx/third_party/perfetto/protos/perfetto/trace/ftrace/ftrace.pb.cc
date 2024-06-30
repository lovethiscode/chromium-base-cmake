// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/ftrace/ftrace.proto

#include "protos/perfetto/trace/ftrace/ftrace.pb.h"

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
PROTOBUF_CONSTEXPR PrintFtraceEvent::PrintFtraceEvent(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.buf_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.ip_)*/uint64_t{0u}} {}
struct PrintFtraceEventDefaultTypeInternal {
  PROTOBUF_CONSTEXPR PrintFtraceEventDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~PrintFtraceEventDefaultTypeInternal() {}
  union {
    PrintFtraceEvent _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 PrintFtraceEventDefaultTypeInternal _PrintFtraceEvent_default_instance_;
PROTOBUF_CONSTEXPR FuncgraphEntryFtraceEvent::FuncgraphEntryFtraceEvent(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.func_)*/uint64_t{0u}
  , /*decltype(_impl_.depth_)*/0} {}
struct FuncgraphEntryFtraceEventDefaultTypeInternal {
  PROTOBUF_CONSTEXPR FuncgraphEntryFtraceEventDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~FuncgraphEntryFtraceEventDefaultTypeInternal() {}
  union {
    FuncgraphEntryFtraceEvent _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 FuncgraphEntryFtraceEventDefaultTypeInternal _FuncgraphEntryFtraceEvent_default_instance_;
PROTOBUF_CONSTEXPR FuncgraphExitFtraceEvent::FuncgraphExitFtraceEvent(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.calltime_)*/uint64_t{0u}
  , /*decltype(_impl_.func_)*/uint64_t{0u}
  , /*decltype(_impl_.overrun_)*/uint64_t{0u}
  , /*decltype(_impl_.rettime_)*/uint64_t{0u}
  , /*decltype(_impl_.depth_)*/0} {}
struct FuncgraphExitFtraceEventDefaultTypeInternal {
  PROTOBUF_CONSTEXPR FuncgraphExitFtraceEventDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~FuncgraphExitFtraceEventDefaultTypeInternal() {}
  union {
    FuncgraphExitFtraceEvent _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 FuncgraphExitFtraceEventDefaultTypeInternal _FuncgraphExitFtraceEvent_default_instance_;
}  // namespace protos
}  // namespace perfetto
namespace perfetto {
namespace protos {

// ===================================================================

class PrintFtraceEvent::_Internal {
 public:
  using HasBits = decltype(std::declval<PrintFtraceEvent>()._impl_._has_bits_);
  static void set_has_ip(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_buf(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

PrintFtraceEvent::PrintFtraceEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.PrintFtraceEvent)
}
PrintFtraceEvent::PrintFtraceEvent(const PrintFtraceEvent& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite() {
  PrintFtraceEvent* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.buf_){}
    , decltype(_impl_.ip_){}};

  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  _impl_.buf_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.buf_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_buf()) {
    _this->_impl_.buf_.Set(from._internal_buf(), 
      _this->GetArenaForAllocation());
  }
  _this->_impl_.ip_ = from._impl_.ip_;
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.PrintFtraceEvent)
}

inline void PrintFtraceEvent::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.buf_){}
    , decltype(_impl_.ip_){uint64_t{0u}}
  };
  _impl_.buf_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.buf_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

PrintFtraceEvent::~PrintFtraceEvent() {
  // @@protoc_insertion_point(destructor:perfetto.protos.PrintFtraceEvent)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void PrintFtraceEvent::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.buf_.Destroy();
}

void PrintFtraceEvent::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void PrintFtraceEvent::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.PrintFtraceEvent)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    _impl_.buf_.ClearNonDefaultToEmpty();
  }
  _impl_.ip_ = uint64_t{0u};
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* PrintFtraceEvent::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional uint64 ip = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_ip(&has_bits);
          _impl_.ip_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional string buf = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_buf();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
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

uint8_t* PrintFtraceEvent::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.PrintFtraceEvent)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional uint64 ip = 1;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(1, this->_internal_ip(), target);
  }

  // optional string buf = 2;
  if (cached_has_bits & 0x00000001u) {
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_buf(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.PrintFtraceEvent)
  return target;
}

size_t PrintFtraceEvent::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.PrintFtraceEvent)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional string buf = 2;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_buf());
    }

    // optional uint64 ip = 1;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(this->_internal_ip());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void PrintFtraceEvent::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const PrintFtraceEvent*>(
      &from));
}

void PrintFtraceEvent::MergeFrom(const PrintFtraceEvent& from) {
  PrintFtraceEvent* const _this = this;
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.PrintFtraceEvent)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_set_buf(from._internal_buf());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.ip_ = from._impl_.ip_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void PrintFtraceEvent::CopyFrom(const PrintFtraceEvent& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.PrintFtraceEvent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PrintFtraceEvent::IsInitialized() const {
  return true;
}

void PrintFtraceEvent::InternalSwap(PrintFtraceEvent* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.buf_, lhs_arena,
      &other->_impl_.buf_, rhs_arena
  );
  swap(_impl_.ip_, other->_impl_.ip_);
}

std::string PrintFtraceEvent::GetTypeName() const {
  return "perfetto.protos.PrintFtraceEvent";
}


// ===================================================================

class FuncgraphEntryFtraceEvent::_Internal {
 public:
  using HasBits = decltype(std::declval<FuncgraphEntryFtraceEvent>()._impl_._has_bits_);
  static void set_has_depth(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_func(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

FuncgraphEntryFtraceEvent::FuncgraphEntryFtraceEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.FuncgraphEntryFtraceEvent)
}
FuncgraphEntryFtraceEvent::FuncgraphEntryFtraceEvent(const FuncgraphEntryFtraceEvent& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite() {
  FuncgraphEntryFtraceEvent* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.func_){}
    , decltype(_impl_.depth_){}};

  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  ::memcpy(&_impl_.func_, &from._impl_.func_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.depth_) -
    reinterpret_cast<char*>(&_impl_.func_)) + sizeof(_impl_.depth_));
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.FuncgraphEntryFtraceEvent)
}

inline void FuncgraphEntryFtraceEvent::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.func_){uint64_t{0u}}
    , decltype(_impl_.depth_){0}
  };
}

FuncgraphEntryFtraceEvent::~FuncgraphEntryFtraceEvent() {
  // @@protoc_insertion_point(destructor:perfetto.protos.FuncgraphEntryFtraceEvent)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void FuncgraphEntryFtraceEvent::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void FuncgraphEntryFtraceEvent::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void FuncgraphEntryFtraceEvent::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.FuncgraphEntryFtraceEvent)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    ::memset(&_impl_.func_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&_impl_.depth_) -
        reinterpret_cast<char*>(&_impl_.func_)) + sizeof(_impl_.depth_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* FuncgraphEntryFtraceEvent::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional int32 depth = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_depth(&has_bits);
          _impl_.depth_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint64 func = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_func(&has_bits);
          _impl_.func_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

uint8_t* FuncgraphEntryFtraceEvent::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.FuncgraphEntryFtraceEvent)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional int32 depth = 1;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(1, this->_internal_depth(), target);
  }

  // optional uint64 func = 2;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(2, this->_internal_func(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.FuncgraphEntryFtraceEvent)
  return target;
}

size_t FuncgraphEntryFtraceEvent::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.FuncgraphEntryFtraceEvent)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional uint64 func = 2;
    if (cached_has_bits & 0x00000001u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(this->_internal_func());
    }

    // optional int32 depth = 1;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_depth());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void FuncgraphEntryFtraceEvent::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const FuncgraphEntryFtraceEvent*>(
      &from));
}

void FuncgraphEntryFtraceEvent::MergeFrom(const FuncgraphEntryFtraceEvent& from) {
  FuncgraphEntryFtraceEvent* const _this = this;
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.FuncgraphEntryFtraceEvent)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_impl_.func_ = from._impl_.func_;
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.depth_ = from._impl_.depth_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void FuncgraphEntryFtraceEvent::CopyFrom(const FuncgraphEntryFtraceEvent& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.FuncgraphEntryFtraceEvent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FuncgraphEntryFtraceEvent::IsInitialized() const {
  return true;
}

void FuncgraphEntryFtraceEvent::InternalSwap(FuncgraphEntryFtraceEvent* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(FuncgraphEntryFtraceEvent, _impl_.depth_)
      + sizeof(FuncgraphEntryFtraceEvent::_impl_.depth_)
      - PROTOBUF_FIELD_OFFSET(FuncgraphEntryFtraceEvent, _impl_.func_)>(
          reinterpret_cast<char*>(&_impl_.func_),
          reinterpret_cast<char*>(&other->_impl_.func_));
}

std::string FuncgraphEntryFtraceEvent::GetTypeName() const {
  return "perfetto.protos.FuncgraphEntryFtraceEvent";
}


// ===================================================================

class FuncgraphExitFtraceEvent::_Internal {
 public:
  using HasBits = decltype(std::declval<FuncgraphExitFtraceEvent>()._impl_._has_bits_);
  static void set_has_calltime(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_depth(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_func(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_overrun(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_rettime(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
};

FuncgraphExitFtraceEvent::FuncgraphExitFtraceEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.FuncgraphExitFtraceEvent)
}
FuncgraphExitFtraceEvent::FuncgraphExitFtraceEvent(const FuncgraphExitFtraceEvent& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite() {
  FuncgraphExitFtraceEvent* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.calltime_){}
    , decltype(_impl_.func_){}
    , decltype(_impl_.overrun_){}
    , decltype(_impl_.rettime_){}
    , decltype(_impl_.depth_){}};

  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  ::memcpy(&_impl_.calltime_, &from._impl_.calltime_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.depth_) -
    reinterpret_cast<char*>(&_impl_.calltime_)) + sizeof(_impl_.depth_));
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.FuncgraphExitFtraceEvent)
}

inline void FuncgraphExitFtraceEvent::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.calltime_){uint64_t{0u}}
    , decltype(_impl_.func_){uint64_t{0u}}
    , decltype(_impl_.overrun_){uint64_t{0u}}
    , decltype(_impl_.rettime_){uint64_t{0u}}
    , decltype(_impl_.depth_){0}
  };
}

FuncgraphExitFtraceEvent::~FuncgraphExitFtraceEvent() {
  // @@protoc_insertion_point(destructor:perfetto.protos.FuncgraphExitFtraceEvent)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void FuncgraphExitFtraceEvent::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void FuncgraphExitFtraceEvent::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void FuncgraphExitFtraceEvent::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.FuncgraphExitFtraceEvent)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    ::memset(&_impl_.calltime_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&_impl_.depth_) -
        reinterpret_cast<char*>(&_impl_.calltime_)) + sizeof(_impl_.depth_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* FuncgraphExitFtraceEvent::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional uint64 calltime = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_calltime(&has_bits);
          _impl_.calltime_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional int32 depth = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_depth(&has_bits);
          _impl_.depth_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint64 func = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _Internal::set_has_func(&has_bits);
          _impl_.func_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint64 overrun = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          _Internal::set_has_overrun(&has_bits);
          _impl_.overrun_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint64 rettime = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 40)) {
          _Internal::set_has_rettime(&has_bits);
          _impl_.rettime_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

uint8_t* FuncgraphExitFtraceEvent::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.FuncgraphExitFtraceEvent)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional uint64 calltime = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(1, this->_internal_calltime(), target);
  }

  // optional int32 depth = 2;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(2, this->_internal_depth(), target);
  }

  // optional uint64 func = 3;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(3, this->_internal_func(), target);
  }

  // optional uint64 overrun = 4;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(4, this->_internal_overrun(), target);
  }

  // optional uint64 rettime = 5;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(5, this->_internal_rettime(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.FuncgraphExitFtraceEvent)
  return target;
}

size_t FuncgraphExitFtraceEvent::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.FuncgraphExitFtraceEvent)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    // optional uint64 calltime = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(this->_internal_calltime());
    }

    // optional uint64 func = 3;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(this->_internal_func());
    }

    // optional uint64 overrun = 4;
    if (cached_has_bits & 0x00000004u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(this->_internal_overrun());
    }

    // optional uint64 rettime = 5;
    if (cached_has_bits & 0x00000008u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(this->_internal_rettime());
    }

    // optional int32 depth = 2;
    if (cached_has_bits & 0x00000010u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_depth());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void FuncgraphExitFtraceEvent::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const FuncgraphExitFtraceEvent*>(
      &from));
}

void FuncgraphExitFtraceEvent::MergeFrom(const FuncgraphExitFtraceEvent& from) {
  FuncgraphExitFtraceEvent* const _this = this;
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.FuncgraphExitFtraceEvent)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    if (cached_has_bits & 0x00000001u) {
      _this->_impl_.calltime_ = from._impl_.calltime_;
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.func_ = from._impl_.func_;
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_impl_.overrun_ = from._impl_.overrun_;
    }
    if (cached_has_bits & 0x00000008u) {
      _this->_impl_.rettime_ = from._impl_.rettime_;
    }
    if (cached_has_bits & 0x00000010u) {
      _this->_impl_.depth_ = from._impl_.depth_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void FuncgraphExitFtraceEvent::CopyFrom(const FuncgraphExitFtraceEvent& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.FuncgraphExitFtraceEvent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FuncgraphExitFtraceEvent::IsInitialized() const {
  return true;
}

void FuncgraphExitFtraceEvent::InternalSwap(FuncgraphExitFtraceEvent* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(FuncgraphExitFtraceEvent, _impl_.depth_)
      + sizeof(FuncgraphExitFtraceEvent::_impl_.depth_)
      - PROTOBUF_FIELD_OFFSET(FuncgraphExitFtraceEvent, _impl_.calltime_)>(
          reinterpret_cast<char*>(&_impl_.calltime_),
          reinterpret_cast<char*>(&other->_impl_.calltime_));
}

std::string FuncgraphExitFtraceEvent::GetTypeName() const {
  return "perfetto.protos.FuncgraphExitFtraceEvent";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::perfetto::protos::PrintFtraceEvent*
Arena::CreateMaybeMessage< ::perfetto::protos::PrintFtraceEvent >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::PrintFtraceEvent >(arena);
}
template<> PROTOBUF_NOINLINE ::perfetto::protos::FuncgraphEntryFtraceEvent*
Arena::CreateMaybeMessage< ::perfetto::protos::FuncgraphEntryFtraceEvent >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::FuncgraphEntryFtraceEvent >(arena);
}
template<> PROTOBUF_NOINLINE ::perfetto::protos::FuncgraphExitFtraceEvent*
Arena::CreateMaybeMessage< ::perfetto::protos::FuncgraphExitFtraceEvent >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::FuncgraphExitFtraceEvent >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
