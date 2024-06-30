// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/trigger.proto

#include "protos/perfetto/trace/trigger.pb.h"

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
PROTOBUF_CONSTEXPR Trigger::Trigger(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.trigger_name_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.producer_name_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.trusted_producer_uid_)*/0} {}
struct TriggerDefaultTypeInternal {
  PROTOBUF_CONSTEXPR TriggerDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~TriggerDefaultTypeInternal() {}
  union {
    Trigger _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 TriggerDefaultTypeInternal _Trigger_default_instance_;
}  // namespace protos
}  // namespace perfetto
namespace perfetto {
namespace protos {

// ===================================================================

class Trigger::_Internal {
 public:
  using HasBits = decltype(std::declval<Trigger>()._impl_._has_bits_);
  static void set_has_trigger_name(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_producer_name(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_trusted_producer_uid(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
};

Trigger::Trigger(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.Trigger)
}
Trigger::Trigger(const Trigger& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite() {
  Trigger* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.trigger_name_){}
    , decltype(_impl_.producer_name_){}
    , decltype(_impl_.trusted_producer_uid_){}};

  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  _impl_.trigger_name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.trigger_name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_trigger_name()) {
    _this->_impl_.trigger_name_.Set(from._internal_trigger_name(), 
      _this->GetArenaForAllocation());
  }
  _impl_.producer_name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.producer_name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_producer_name()) {
    _this->_impl_.producer_name_.Set(from._internal_producer_name(), 
      _this->GetArenaForAllocation());
  }
  _this->_impl_.trusted_producer_uid_ = from._impl_.trusted_producer_uid_;
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.Trigger)
}

inline void Trigger::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.trigger_name_){}
    , decltype(_impl_.producer_name_){}
    , decltype(_impl_.trusted_producer_uid_){0}
  };
  _impl_.trigger_name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.trigger_name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.producer_name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.producer_name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

Trigger::~Trigger() {
  // @@protoc_insertion_point(destructor:perfetto.protos.Trigger)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Trigger::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.trigger_name_.Destroy();
  _impl_.producer_name_.Destroy();
}

void Trigger::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Trigger::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.Trigger)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _impl_.trigger_name_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      _impl_.producer_name_.ClearNonDefaultToEmpty();
    }
  }
  _impl_.trusted_producer_uid_ = 0;
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* Trigger::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional string trigger_name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_trigger_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional string producer_name = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_producer_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional int32 trusted_producer_uid = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _Internal::set_has_trusted_producer_uid(&has_bits);
          _impl_.trusted_producer_uid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
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

uint8_t* Trigger::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.Trigger)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional string trigger_name = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_trigger_name(), target);
  }

  // optional string producer_name = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_producer_name(), target);
  }

  // optional int32 trusted_producer_uid = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(3, this->_internal_trusted_producer_uid(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.Trigger)
  return target;
}

size_t Trigger::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.Trigger)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    // optional string trigger_name = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_trigger_name());
    }

    // optional string producer_name = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_producer_name());
    }

    // optional int32 trusted_producer_uid = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_trusted_producer_uid());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Trigger::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const Trigger*>(
      &from));
}

void Trigger::MergeFrom(const Trigger& from) {
  Trigger* const _this = this;
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.Trigger)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_set_trigger_name(from._internal_trigger_name());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_internal_set_producer_name(from._internal_producer_name());
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_impl_.trusted_producer_uid_ = from._impl_.trusted_producer_uid_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void Trigger::CopyFrom(const Trigger& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.Trigger)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Trigger::IsInitialized() const {
  return true;
}

void Trigger::InternalSwap(Trigger* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.trigger_name_, lhs_arena,
      &other->_impl_.trigger_name_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.producer_name_, lhs_arena,
      &other->_impl_.producer_name_, rhs_arena
  );
  swap(_impl_.trusted_producer_uid_, other->_impl_.trusted_producer_uid_);
}

std::string Trigger::GetTypeName() const {
  return "perfetto.protos.Trigger";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::perfetto::protos::Trigger*
Arena::CreateMaybeMessage< ::perfetto::protos::Trigger >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::Trigger >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
