// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/power/android_entity_state_residency.proto

#include "protos/perfetto/trace/power/android_entity_state_residency.pb.h"

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
PROTOBUF_CONSTEXPR EntityStateResidency_PowerEntityState::EntityStateResidency_PowerEntityState(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.entity_name_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.state_name_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.entity_index_)*/0
  , /*decltype(_impl_.state_index_)*/0} {}
struct EntityStateResidency_PowerEntityStateDefaultTypeInternal {
  PROTOBUF_CONSTEXPR EntityStateResidency_PowerEntityStateDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~EntityStateResidency_PowerEntityStateDefaultTypeInternal() {}
  union {
    EntityStateResidency_PowerEntityState _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 EntityStateResidency_PowerEntityStateDefaultTypeInternal _EntityStateResidency_PowerEntityState_default_instance_;
PROTOBUF_CONSTEXPR EntityStateResidency_StateResidency::EntityStateResidency_StateResidency(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.entity_index_)*/0
  , /*decltype(_impl_.state_index_)*/0
  , /*decltype(_impl_.total_time_in_state_ms_)*/uint64_t{0u}
  , /*decltype(_impl_.total_state_entry_count_)*/uint64_t{0u}
  , /*decltype(_impl_.last_entry_timestamp_ms_)*/uint64_t{0u}} {}
struct EntityStateResidency_StateResidencyDefaultTypeInternal {
  PROTOBUF_CONSTEXPR EntityStateResidency_StateResidencyDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~EntityStateResidency_StateResidencyDefaultTypeInternal() {}
  union {
    EntityStateResidency_StateResidency _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 EntityStateResidency_StateResidencyDefaultTypeInternal _EntityStateResidency_StateResidency_default_instance_;
PROTOBUF_CONSTEXPR EntityStateResidency::EntityStateResidency(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.power_entity_state_)*/{}
  , /*decltype(_impl_.residency_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct EntityStateResidencyDefaultTypeInternal {
  PROTOBUF_CONSTEXPR EntityStateResidencyDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~EntityStateResidencyDefaultTypeInternal() {}
  union {
    EntityStateResidency _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 EntityStateResidencyDefaultTypeInternal _EntityStateResidency_default_instance_;
}  // namespace protos
}  // namespace perfetto
namespace perfetto {
namespace protos {

// ===================================================================

class EntityStateResidency_PowerEntityState::_Internal {
 public:
  using HasBits = decltype(std::declval<EntityStateResidency_PowerEntityState>()._impl_._has_bits_);
  static void set_has_entity_index(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_state_index(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_entity_name(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_state_name(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

EntityStateResidency_PowerEntityState::EntityStateResidency_PowerEntityState(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.EntityStateResidency.PowerEntityState)
}
EntityStateResidency_PowerEntityState::EntityStateResidency_PowerEntityState(const EntityStateResidency_PowerEntityState& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite() {
  EntityStateResidency_PowerEntityState* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.entity_name_){}
    , decltype(_impl_.state_name_){}
    , decltype(_impl_.entity_index_){}
    , decltype(_impl_.state_index_){}};

  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  _impl_.entity_name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.entity_name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_entity_name()) {
    _this->_impl_.entity_name_.Set(from._internal_entity_name(), 
      _this->GetArenaForAllocation());
  }
  _impl_.state_name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.state_name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_state_name()) {
    _this->_impl_.state_name_.Set(from._internal_state_name(), 
      _this->GetArenaForAllocation());
  }
  ::memcpy(&_impl_.entity_index_, &from._impl_.entity_index_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.state_index_) -
    reinterpret_cast<char*>(&_impl_.entity_index_)) + sizeof(_impl_.state_index_));
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.EntityStateResidency.PowerEntityState)
}

inline void EntityStateResidency_PowerEntityState::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.entity_name_){}
    , decltype(_impl_.state_name_){}
    , decltype(_impl_.entity_index_){0}
    , decltype(_impl_.state_index_){0}
  };
  _impl_.entity_name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.entity_name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.state_name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.state_name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

EntityStateResidency_PowerEntityState::~EntityStateResidency_PowerEntityState() {
  // @@protoc_insertion_point(destructor:perfetto.protos.EntityStateResidency.PowerEntityState)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void EntityStateResidency_PowerEntityState::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.entity_name_.Destroy();
  _impl_.state_name_.Destroy();
}

void EntityStateResidency_PowerEntityState::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void EntityStateResidency_PowerEntityState::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.EntityStateResidency.PowerEntityState)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _impl_.entity_name_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      _impl_.state_name_.ClearNonDefaultToEmpty();
    }
  }
  if (cached_has_bits & 0x0000000cu) {
    ::memset(&_impl_.entity_index_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&_impl_.state_index_) -
        reinterpret_cast<char*>(&_impl_.entity_index_)) + sizeof(_impl_.state_index_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* EntityStateResidency_PowerEntityState::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional int32 entity_index = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_entity_index(&has_bits);
          _impl_.entity_index_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional int32 state_index = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_state_index(&has_bits);
          _impl_.state_index_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional string entity_name = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_entity_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional string state_name = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          auto str = _internal_mutable_state_name();
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

uint8_t* EntityStateResidency_PowerEntityState::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.EntityStateResidency.PowerEntityState)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional int32 entity_index = 1;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(1, this->_internal_entity_index(), target);
  }

  // optional int32 state_index = 2;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(2, this->_internal_state_index(), target);
  }

  // optional string entity_name = 3;
  if (cached_has_bits & 0x00000001u) {
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_entity_name(), target);
  }

  // optional string state_name = 4;
  if (cached_has_bits & 0x00000002u) {
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_state_name(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.EntityStateResidency.PowerEntityState)
  return target;
}

size_t EntityStateResidency_PowerEntityState::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.EntityStateResidency.PowerEntityState)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    // optional string entity_name = 3;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_entity_name());
    }

    // optional string state_name = 4;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_state_name());
    }

    // optional int32 entity_index = 1;
    if (cached_has_bits & 0x00000004u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_entity_index());
    }

    // optional int32 state_index = 2;
    if (cached_has_bits & 0x00000008u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_state_index());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void EntityStateResidency_PowerEntityState::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const EntityStateResidency_PowerEntityState*>(
      &from));
}

void EntityStateResidency_PowerEntityState::MergeFrom(const EntityStateResidency_PowerEntityState& from) {
  EntityStateResidency_PowerEntityState* const _this = this;
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.EntityStateResidency.PowerEntityState)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_set_entity_name(from._internal_entity_name());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_internal_set_state_name(from._internal_state_name());
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_impl_.entity_index_ = from._impl_.entity_index_;
    }
    if (cached_has_bits & 0x00000008u) {
      _this->_impl_.state_index_ = from._impl_.state_index_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void EntityStateResidency_PowerEntityState::CopyFrom(const EntityStateResidency_PowerEntityState& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.EntityStateResidency.PowerEntityState)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EntityStateResidency_PowerEntityState::IsInitialized() const {
  return true;
}

void EntityStateResidency_PowerEntityState::InternalSwap(EntityStateResidency_PowerEntityState* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.entity_name_, lhs_arena,
      &other->_impl_.entity_name_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.state_name_, lhs_arena,
      &other->_impl_.state_name_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(EntityStateResidency_PowerEntityState, _impl_.state_index_)
      + sizeof(EntityStateResidency_PowerEntityState::_impl_.state_index_)
      - PROTOBUF_FIELD_OFFSET(EntityStateResidency_PowerEntityState, _impl_.entity_index_)>(
          reinterpret_cast<char*>(&_impl_.entity_index_),
          reinterpret_cast<char*>(&other->_impl_.entity_index_));
}

std::string EntityStateResidency_PowerEntityState::GetTypeName() const {
  return "perfetto.protos.EntityStateResidency.PowerEntityState";
}


// ===================================================================

class EntityStateResidency_StateResidency::_Internal {
 public:
  using HasBits = decltype(std::declval<EntityStateResidency_StateResidency>()._impl_._has_bits_);
  static void set_has_entity_index(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_state_index(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_total_time_in_state_ms(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_total_state_entry_count(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_last_entry_timestamp_ms(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
};

EntityStateResidency_StateResidency::EntityStateResidency_StateResidency(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.EntityStateResidency.StateResidency)
}
EntityStateResidency_StateResidency::EntityStateResidency_StateResidency(const EntityStateResidency_StateResidency& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite() {
  EntityStateResidency_StateResidency* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.entity_index_){}
    , decltype(_impl_.state_index_){}
    , decltype(_impl_.total_time_in_state_ms_){}
    , decltype(_impl_.total_state_entry_count_){}
    , decltype(_impl_.last_entry_timestamp_ms_){}};

  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  ::memcpy(&_impl_.entity_index_, &from._impl_.entity_index_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.last_entry_timestamp_ms_) -
    reinterpret_cast<char*>(&_impl_.entity_index_)) + sizeof(_impl_.last_entry_timestamp_ms_));
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.EntityStateResidency.StateResidency)
}

inline void EntityStateResidency_StateResidency::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.entity_index_){0}
    , decltype(_impl_.state_index_){0}
    , decltype(_impl_.total_time_in_state_ms_){uint64_t{0u}}
    , decltype(_impl_.total_state_entry_count_){uint64_t{0u}}
    , decltype(_impl_.last_entry_timestamp_ms_){uint64_t{0u}}
  };
}

EntityStateResidency_StateResidency::~EntityStateResidency_StateResidency() {
  // @@protoc_insertion_point(destructor:perfetto.protos.EntityStateResidency.StateResidency)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void EntityStateResidency_StateResidency::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void EntityStateResidency_StateResidency::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void EntityStateResidency_StateResidency::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.EntityStateResidency.StateResidency)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    ::memset(&_impl_.entity_index_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&_impl_.last_entry_timestamp_ms_) -
        reinterpret_cast<char*>(&_impl_.entity_index_)) + sizeof(_impl_.last_entry_timestamp_ms_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* EntityStateResidency_StateResidency::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional int32 entity_index = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_entity_index(&has_bits);
          _impl_.entity_index_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional int32 state_index = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_state_index(&has_bits);
          _impl_.state_index_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint64 total_time_in_state_ms = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _Internal::set_has_total_time_in_state_ms(&has_bits);
          _impl_.total_time_in_state_ms_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint64 total_state_entry_count = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          _Internal::set_has_total_state_entry_count(&has_bits);
          _impl_.total_state_entry_count_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint64 last_entry_timestamp_ms = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 40)) {
          _Internal::set_has_last_entry_timestamp_ms(&has_bits);
          _impl_.last_entry_timestamp_ms_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

uint8_t* EntityStateResidency_StateResidency::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.EntityStateResidency.StateResidency)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional int32 entity_index = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(1, this->_internal_entity_index(), target);
  }

  // optional int32 state_index = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(2, this->_internal_state_index(), target);
  }

  // optional uint64 total_time_in_state_ms = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(3, this->_internal_total_time_in_state_ms(), target);
  }

  // optional uint64 total_state_entry_count = 4;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(4, this->_internal_total_state_entry_count(), target);
  }

  // optional uint64 last_entry_timestamp_ms = 5;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(5, this->_internal_last_entry_timestamp_ms(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.EntityStateResidency.StateResidency)
  return target;
}

size_t EntityStateResidency_StateResidency::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.EntityStateResidency.StateResidency)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    // optional int32 entity_index = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_entity_index());
    }

    // optional int32 state_index = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_state_index());
    }

    // optional uint64 total_time_in_state_ms = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(this->_internal_total_time_in_state_ms());
    }

    // optional uint64 total_state_entry_count = 4;
    if (cached_has_bits & 0x00000008u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(this->_internal_total_state_entry_count());
    }

    // optional uint64 last_entry_timestamp_ms = 5;
    if (cached_has_bits & 0x00000010u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(this->_internal_last_entry_timestamp_ms());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void EntityStateResidency_StateResidency::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const EntityStateResidency_StateResidency*>(
      &from));
}

void EntityStateResidency_StateResidency::MergeFrom(const EntityStateResidency_StateResidency& from) {
  EntityStateResidency_StateResidency* const _this = this;
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.EntityStateResidency.StateResidency)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    if (cached_has_bits & 0x00000001u) {
      _this->_impl_.entity_index_ = from._impl_.entity_index_;
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.state_index_ = from._impl_.state_index_;
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_impl_.total_time_in_state_ms_ = from._impl_.total_time_in_state_ms_;
    }
    if (cached_has_bits & 0x00000008u) {
      _this->_impl_.total_state_entry_count_ = from._impl_.total_state_entry_count_;
    }
    if (cached_has_bits & 0x00000010u) {
      _this->_impl_.last_entry_timestamp_ms_ = from._impl_.last_entry_timestamp_ms_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void EntityStateResidency_StateResidency::CopyFrom(const EntityStateResidency_StateResidency& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.EntityStateResidency.StateResidency)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EntityStateResidency_StateResidency::IsInitialized() const {
  return true;
}

void EntityStateResidency_StateResidency::InternalSwap(EntityStateResidency_StateResidency* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(EntityStateResidency_StateResidency, _impl_.last_entry_timestamp_ms_)
      + sizeof(EntityStateResidency_StateResidency::_impl_.last_entry_timestamp_ms_)
      - PROTOBUF_FIELD_OFFSET(EntityStateResidency_StateResidency, _impl_.entity_index_)>(
          reinterpret_cast<char*>(&_impl_.entity_index_),
          reinterpret_cast<char*>(&other->_impl_.entity_index_));
}

std::string EntityStateResidency_StateResidency::GetTypeName() const {
  return "perfetto.protos.EntityStateResidency.StateResidency";
}


// ===================================================================

class EntityStateResidency::_Internal {
 public:
};

EntityStateResidency::EntityStateResidency(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.EntityStateResidency)
}
EntityStateResidency::EntityStateResidency(const EntityStateResidency& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite() {
  EntityStateResidency* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.power_entity_state_){from._impl_.power_entity_state_}
    , decltype(_impl_.residency_){from._impl_.residency_}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.EntityStateResidency)
}

inline void EntityStateResidency::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.power_entity_state_){arena}
    , decltype(_impl_.residency_){arena}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

EntityStateResidency::~EntityStateResidency() {
  // @@protoc_insertion_point(destructor:perfetto.protos.EntityStateResidency)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void EntityStateResidency::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.power_entity_state_.~RepeatedPtrField();
  _impl_.residency_.~RepeatedPtrField();
}

void EntityStateResidency::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void EntityStateResidency::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.EntityStateResidency)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.power_entity_state_.Clear();
  _impl_.residency_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* EntityStateResidency::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .perfetto.protos.EntityStateResidency.PowerEntityState power_entity_state = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_power_entity_state(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else
          goto handle_unusual;
        continue;
      // repeated .perfetto.protos.EntityStateResidency.StateResidency residency = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_residency(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
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

uint8_t* EntityStateResidency::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.EntityStateResidency)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .perfetto.protos.EntityStateResidency.PowerEntityState power_entity_state = 1;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_power_entity_state_size()); i < n; i++) {
    const auto& repfield = this->_internal_power_entity_state(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(1, repfield, repfield.GetCachedSize(), target, stream);
  }

  // repeated .perfetto.protos.EntityStateResidency.StateResidency residency = 2;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_residency_size()); i < n; i++) {
    const auto& repfield = this->_internal_residency(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(2, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.EntityStateResidency)
  return target;
}

size_t EntityStateResidency::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.EntityStateResidency)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .perfetto.protos.EntityStateResidency.PowerEntityState power_entity_state = 1;
  total_size += 1UL * this->_internal_power_entity_state_size();
  for (const auto& msg : this->_impl_.power_entity_state_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // repeated .perfetto.protos.EntityStateResidency.StateResidency residency = 2;
  total_size += 1UL * this->_internal_residency_size();
  for (const auto& msg : this->_impl_.residency_) {
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

void EntityStateResidency::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const EntityStateResidency*>(
      &from));
}

void EntityStateResidency::MergeFrom(const EntityStateResidency& from) {
  EntityStateResidency* const _this = this;
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.EntityStateResidency)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.power_entity_state_.MergeFrom(from._impl_.power_entity_state_);
  _this->_impl_.residency_.MergeFrom(from._impl_.residency_);
  _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void EntityStateResidency::CopyFrom(const EntityStateResidency& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.EntityStateResidency)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EntityStateResidency::IsInitialized() const {
  return true;
}

void EntityStateResidency::InternalSwap(EntityStateResidency* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.power_entity_state_.InternalSwap(&other->_impl_.power_entity_state_);
  _impl_.residency_.InternalSwap(&other->_impl_.residency_);
}

std::string EntityStateResidency::GetTypeName() const {
  return "perfetto.protos.EntityStateResidency";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::perfetto::protos::EntityStateResidency_PowerEntityState*
Arena::CreateMaybeMessage< ::perfetto::protos::EntityStateResidency_PowerEntityState >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::EntityStateResidency_PowerEntityState >(arena);
}
template<> PROTOBUF_NOINLINE ::perfetto::protos::EntityStateResidency_StateResidency*
Arena::CreateMaybeMessage< ::perfetto::protos::EntityStateResidency_StateResidency >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::EntityStateResidency_StateResidency >(arena);
}
template<> PROTOBUF_NOINLINE ::perfetto::protos::EntityStateResidency*
Arena::CreateMaybeMessage< ::perfetto::protos::EntityStateResidency >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::EntityStateResidency >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
