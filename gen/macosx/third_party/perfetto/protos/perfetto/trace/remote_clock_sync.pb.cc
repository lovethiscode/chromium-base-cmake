// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/remote_clock_sync.proto

#include "protos/perfetto/trace/remote_clock_sync.pb.h"

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
PROTOBUF_CONSTEXPR RemoteClockSync_SyncedClocks::RemoteClockSync_SyncedClocks(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.client_clocks_)*/nullptr
  , /*decltype(_impl_.host_clocks_)*/nullptr} {}
struct RemoteClockSync_SyncedClocksDefaultTypeInternal {
  PROTOBUF_CONSTEXPR RemoteClockSync_SyncedClocksDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~RemoteClockSync_SyncedClocksDefaultTypeInternal() {}
  union {
    RemoteClockSync_SyncedClocks _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 RemoteClockSync_SyncedClocksDefaultTypeInternal _RemoteClockSync_SyncedClocks_default_instance_;
PROTOBUF_CONSTEXPR RemoteClockSync::RemoteClockSync(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.synced_clocks_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct RemoteClockSyncDefaultTypeInternal {
  PROTOBUF_CONSTEXPR RemoteClockSyncDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~RemoteClockSyncDefaultTypeInternal() {}
  union {
    RemoteClockSync _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 RemoteClockSyncDefaultTypeInternal _RemoteClockSync_default_instance_;
}  // namespace protos
}  // namespace perfetto
namespace perfetto {
namespace protos {

// ===================================================================

class RemoteClockSync_SyncedClocks::_Internal {
 public:
  using HasBits = decltype(std::declval<RemoteClockSync_SyncedClocks>()._impl_._has_bits_);
  static const ::perfetto::protos::ClockSnapshot& client_clocks(const RemoteClockSync_SyncedClocks* msg);
  static void set_has_client_clocks(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static const ::perfetto::protos::ClockSnapshot& host_clocks(const RemoteClockSync_SyncedClocks* msg);
  static void set_has_host_clocks(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

const ::perfetto::protos::ClockSnapshot&
RemoteClockSync_SyncedClocks::_Internal::client_clocks(const RemoteClockSync_SyncedClocks* msg) {
  return *msg->_impl_.client_clocks_;
}
const ::perfetto::protos::ClockSnapshot&
RemoteClockSync_SyncedClocks::_Internal::host_clocks(const RemoteClockSync_SyncedClocks* msg) {
  return *msg->_impl_.host_clocks_;
}
void RemoteClockSync_SyncedClocks::clear_client_clocks() {
  if (_impl_.client_clocks_ != nullptr) _impl_.client_clocks_->Clear();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
void RemoteClockSync_SyncedClocks::clear_host_clocks() {
  if (_impl_.host_clocks_ != nullptr) _impl_.host_clocks_->Clear();
  _impl_._has_bits_[0] &= ~0x00000002u;
}
RemoteClockSync_SyncedClocks::RemoteClockSync_SyncedClocks(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.RemoteClockSync.SyncedClocks)
}
RemoteClockSync_SyncedClocks::RemoteClockSync_SyncedClocks(const RemoteClockSync_SyncedClocks& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite() {
  RemoteClockSync_SyncedClocks* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.client_clocks_){nullptr}
    , decltype(_impl_.host_clocks_){nullptr}};

  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  if (from._internal_has_client_clocks()) {
    _this->_impl_.client_clocks_ = new ::perfetto::protos::ClockSnapshot(*from._impl_.client_clocks_);
  }
  if (from._internal_has_host_clocks()) {
    _this->_impl_.host_clocks_ = new ::perfetto::protos::ClockSnapshot(*from._impl_.host_clocks_);
  }
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.RemoteClockSync.SyncedClocks)
}

inline void RemoteClockSync_SyncedClocks::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.client_clocks_){nullptr}
    , decltype(_impl_.host_clocks_){nullptr}
  };
}

RemoteClockSync_SyncedClocks::~RemoteClockSync_SyncedClocks() {
  // @@protoc_insertion_point(destructor:perfetto.protos.RemoteClockSync.SyncedClocks)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void RemoteClockSync_SyncedClocks::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete _impl_.client_clocks_;
  if (this != internal_default_instance()) delete _impl_.host_clocks_;
}

void RemoteClockSync_SyncedClocks::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void RemoteClockSync_SyncedClocks::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.RemoteClockSync.SyncedClocks)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(_impl_.client_clocks_ != nullptr);
      _impl_.client_clocks_->Clear();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(_impl_.host_clocks_ != nullptr);
      _impl_.host_clocks_->Clear();
    }
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* RemoteClockSync_SyncedClocks::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional .perfetto.protos.ClockSnapshot client_clocks = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_client_clocks(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional .perfetto.protos.ClockSnapshot host_clocks = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_host_clocks(), ptr);
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

uint8_t* RemoteClockSync_SyncedClocks::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.RemoteClockSync.SyncedClocks)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional .perfetto.protos.ClockSnapshot client_clocks = 2;
  if (cached_has_bits & 0x00000001u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, _Internal::client_clocks(this),
        _Internal::client_clocks(this).GetCachedSize(), target, stream);
  }

  // optional .perfetto.protos.ClockSnapshot host_clocks = 3;
  if (cached_has_bits & 0x00000002u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(3, _Internal::host_clocks(this),
        _Internal::host_clocks(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.RemoteClockSync.SyncedClocks)
  return target;
}

size_t RemoteClockSync_SyncedClocks::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.RemoteClockSync.SyncedClocks)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional .perfetto.protos.ClockSnapshot client_clocks = 2;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *_impl_.client_clocks_);
    }

    // optional .perfetto.protos.ClockSnapshot host_clocks = 3;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *_impl_.host_clocks_);
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void RemoteClockSync_SyncedClocks::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const RemoteClockSync_SyncedClocks*>(
      &from));
}

void RemoteClockSync_SyncedClocks::MergeFrom(const RemoteClockSync_SyncedClocks& from) {
  RemoteClockSync_SyncedClocks* const _this = this;
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.RemoteClockSync.SyncedClocks)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_mutable_client_clocks()->::perfetto::protos::ClockSnapshot::MergeFrom(
          from._internal_client_clocks());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_internal_mutable_host_clocks()->::perfetto::protos::ClockSnapshot::MergeFrom(
          from._internal_host_clocks());
    }
  }
  _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void RemoteClockSync_SyncedClocks::CopyFrom(const RemoteClockSync_SyncedClocks& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.RemoteClockSync.SyncedClocks)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RemoteClockSync_SyncedClocks::IsInitialized() const {
  return true;
}

void RemoteClockSync_SyncedClocks::InternalSwap(RemoteClockSync_SyncedClocks* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(RemoteClockSync_SyncedClocks, _impl_.host_clocks_)
      + sizeof(RemoteClockSync_SyncedClocks::_impl_.host_clocks_)
      - PROTOBUF_FIELD_OFFSET(RemoteClockSync_SyncedClocks, _impl_.client_clocks_)>(
          reinterpret_cast<char*>(&_impl_.client_clocks_),
          reinterpret_cast<char*>(&other->_impl_.client_clocks_));
}

std::string RemoteClockSync_SyncedClocks::GetTypeName() const {
  return "perfetto.protos.RemoteClockSync.SyncedClocks";
}


// ===================================================================

class RemoteClockSync::_Internal {
 public:
};

RemoteClockSync::RemoteClockSync(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.RemoteClockSync)
}
RemoteClockSync::RemoteClockSync(const RemoteClockSync& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite() {
  RemoteClockSync* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.synced_clocks_){from._impl_.synced_clocks_}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.RemoteClockSync)
}

inline void RemoteClockSync::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.synced_clocks_){arena}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

RemoteClockSync::~RemoteClockSync() {
  // @@protoc_insertion_point(destructor:perfetto.protos.RemoteClockSync)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void RemoteClockSync::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.synced_clocks_.~RepeatedPtrField();
}

void RemoteClockSync::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void RemoteClockSync::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.RemoteClockSync)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.synced_clocks_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* RemoteClockSync::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .perfetto.protos.RemoteClockSync.SyncedClocks synced_clocks = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_synced_clocks(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
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

uint8_t* RemoteClockSync::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.RemoteClockSync)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .perfetto.protos.RemoteClockSync.SyncedClocks synced_clocks = 1;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_synced_clocks_size()); i < n; i++) {
    const auto& repfield = this->_internal_synced_clocks(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(1, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.RemoteClockSync)
  return target;
}

size_t RemoteClockSync::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.RemoteClockSync)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .perfetto.protos.RemoteClockSync.SyncedClocks synced_clocks = 1;
  total_size += 1UL * this->_internal_synced_clocks_size();
  for (const auto& msg : this->_impl_.synced_clocks_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void RemoteClockSync::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const RemoteClockSync*>(
      &from));
}

void RemoteClockSync::MergeFrom(const RemoteClockSync& from) {
  RemoteClockSync* const _this = this;
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.RemoteClockSync)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.synced_clocks_.MergeFrom(from._impl_.synced_clocks_);
  _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void RemoteClockSync::CopyFrom(const RemoteClockSync& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.RemoteClockSync)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RemoteClockSync::IsInitialized() const {
  return true;
}

void RemoteClockSync::InternalSwap(RemoteClockSync* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.synced_clocks_.InternalSwap(&other->_impl_.synced_clocks_);
}

std::string RemoteClockSync::GetTypeName() const {
  return "perfetto.protos.RemoteClockSync";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::perfetto::protos::RemoteClockSync_SyncedClocks*
Arena::CreateMaybeMessage< ::perfetto::protos::RemoteClockSync_SyncedClocks >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::RemoteClockSync_SyncedClocks >(arena);
}
template<> PROTOBUF_NOINLINE ::perfetto::protos::RemoteClockSync*
Arena::CreateMaybeMessage< ::perfetto::protos::RemoteClockSync >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::RemoteClockSync >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>