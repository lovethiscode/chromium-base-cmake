// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/android/pixel_modem_events.proto

#include "protos/perfetto/trace/android/pixel_modem_events.pb.h"

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
PROTOBUF_CONSTEXPR PixelModemEvents::PixelModemEvents(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.events_)*/{}
  , /*decltype(_impl_.event_time_nanos_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct PixelModemEventsDefaultTypeInternal {
  PROTOBUF_CONSTEXPR PixelModemEventsDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~PixelModemEventsDefaultTypeInternal() {}
  union {
    PixelModemEvents _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 PixelModemEventsDefaultTypeInternal _PixelModemEvents_default_instance_;
PROTOBUF_CONSTEXPR PixelModemTokenDatabase::PixelModemTokenDatabase(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.database_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}} {}
struct PixelModemTokenDatabaseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR PixelModemTokenDatabaseDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~PixelModemTokenDatabaseDefaultTypeInternal() {}
  union {
    PixelModemTokenDatabase _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 PixelModemTokenDatabaseDefaultTypeInternal _PixelModemTokenDatabase_default_instance_;
}  // namespace protos
}  // namespace perfetto
namespace perfetto {
namespace protos {

// ===================================================================

class PixelModemEvents::_Internal {
 public:
};

PixelModemEvents::PixelModemEvents(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.PixelModemEvents)
}
PixelModemEvents::PixelModemEvents(const PixelModemEvents& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite() {
  PixelModemEvents* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.events_){from._impl_.events_}
    , decltype(_impl_.event_time_nanos_){from._impl_.event_time_nanos_}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.PixelModemEvents)
}

inline void PixelModemEvents::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.events_){arena}
    , decltype(_impl_.event_time_nanos_){arena}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

PixelModemEvents::~PixelModemEvents() {
  // @@protoc_insertion_point(destructor:perfetto.protos.PixelModemEvents)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void PixelModemEvents::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.events_.~RepeatedPtrField();
  _impl_.event_time_nanos_.~RepeatedField();
}

void PixelModemEvents::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void PixelModemEvents::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.PixelModemEvents)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.events_.Clear();
  _impl_.event_time_nanos_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* PixelModemEvents::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated bytes events = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_events();
            ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else
          goto handle_unusual;
        continue;
      // repeated uint64 event_time_nanos = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          ptr -= 1;
          do {
            ptr += 1;
            _internal_add_event_time_nanos(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr));
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<16>(ptr));
        } else if (static_cast<uint8_t>(tag) == 18) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedUInt64Parser(_internal_mutable_event_time_nanos(), ptr, ctx);
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
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* PixelModemEvents::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.PixelModemEvents)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated bytes events = 1;
  for (int i = 0, n = this->_internal_events_size(); i < n; i++) {
    const auto& s = this->_internal_events(i);
    target = stream->WriteBytes(1, s, target);
  }

  // repeated uint64 event_time_nanos = 2;
  for (int i = 0, n = this->_internal_event_time_nanos_size(); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(2, this->_internal_event_time_nanos(i), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.PixelModemEvents)
  return target;
}

size_t PixelModemEvents::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.PixelModemEvents)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated bytes events = 1;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(_impl_.events_.size());
  for (int i = 0, n = _impl_.events_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
      _impl_.events_.Get(i));
  }

  // repeated uint64 event_time_nanos = 2;
  {
    size_t data_size = ::_pbi::WireFormatLite::
      UInt64Size(this->_impl_.event_time_nanos_);
    total_size += 1 *
                  ::_pbi::FromIntSize(this->_internal_event_time_nanos_size());
    total_size += data_size;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void PixelModemEvents::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const PixelModemEvents*>(
      &from));
}

void PixelModemEvents::MergeFrom(const PixelModemEvents& from) {
  PixelModemEvents* const _this = this;
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.PixelModemEvents)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.events_.MergeFrom(from._impl_.events_);
  _this->_impl_.event_time_nanos_.MergeFrom(from._impl_.event_time_nanos_);
  _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void PixelModemEvents::CopyFrom(const PixelModemEvents& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.PixelModemEvents)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PixelModemEvents::IsInitialized() const {
  return true;
}

void PixelModemEvents::InternalSwap(PixelModemEvents* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.events_.InternalSwap(&other->_impl_.events_);
  _impl_.event_time_nanos_.InternalSwap(&other->_impl_.event_time_nanos_);
}

std::string PixelModemEvents::GetTypeName() const {
  return "perfetto.protos.PixelModemEvents";
}


// ===================================================================

class PixelModemTokenDatabase::_Internal {
 public:
  using HasBits = decltype(std::declval<PixelModemTokenDatabase>()._impl_._has_bits_);
  static void set_has_database(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

PixelModemTokenDatabase::PixelModemTokenDatabase(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.PixelModemTokenDatabase)
}
PixelModemTokenDatabase::PixelModemTokenDatabase(const PixelModemTokenDatabase& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite() {
  PixelModemTokenDatabase* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.database_){}};

  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  _impl_.database_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.database_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_database()) {
    _this->_impl_.database_.Set(from._internal_database(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.PixelModemTokenDatabase)
}

inline void PixelModemTokenDatabase::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.database_){}
  };
  _impl_.database_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.database_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

PixelModemTokenDatabase::~PixelModemTokenDatabase() {
  // @@protoc_insertion_point(destructor:perfetto.protos.PixelModemTokenDatabase)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void PixelModemTokenDatabase::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.database_.Destroy();
}

void PixelModemTokenDatabase::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void PixelModemTokenDatabase::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.PixelModemTokenDatabase)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    _impl_.database_.ClearNonDefaultToEmpty();
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* PixelModemTokenDatabase::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional bytes database = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_database();
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

uint8_t* PixelModemTokenDatabase::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.PixelModemTokenDatabase)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional bytes database = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->WriteBytesMaybeAliased(
        1, this->_internal_database(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.PixelModemTokenDatabase)
  return target;
}

size_t PixelModemTokenDatabase::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.PixelModemTokenDatabase)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // optional bytes database = 1;
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_database());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void PixelModemTokenDatabase::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const PixelModemTokenDatabase*>(
      &from));
}

void PixelModemTokenDatabase::MergeFrom(const PixelModemTokenDatabase& from) {
  PixelModemTokenDatabase* const _this = this;
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.PixelModemTokenDatabase)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_database()) {
    _this->_internal_set_database(from._internal_database());
  }
  _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void PixelModemTokenDatabase::CopyFrom(const PixelModemTokenDatabase& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.PixelModemTokenDatabase)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PixelModemTokenDatabase::IsInitialized() const {
  return true;
}

void PixelModemTokenDatabase::InternalSwap(PixelModemTokenDatabase* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.database_, lhs_arena,
      &other->_impl_.database_, rhs_arena
  );
}

std::string PixelModemTokenDatabase::GetTypeName() const {
  return "perfetto.protos.PixelModemTokenDatabase";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::perfetto::protos::PixelModemEvents*
Arena::CreateMaybeMessage< ::perfetto::protos::PixelModemEvents >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::PixelModemEvents >(arena);
}
template<> PROTOBUF_NOINLINE ::perfetto::protos::PixelModemTokenDatabase*
Arena::CreateMaybeMessage< ::perfetto::protos::PixelModemTokenDatabase >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::PixelModemTokenDatabase >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
