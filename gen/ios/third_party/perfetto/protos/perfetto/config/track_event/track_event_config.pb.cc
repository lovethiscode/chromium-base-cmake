// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/config/track_event/track_event_config.proto

#include "protos/perfetto/config/track_event/track_event_config.pb.h"

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
PROTOBUF_CONSTEXPR TrackEventConfig::TrackEventConfig(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.disabled_categories_)*/{}
  , /*decltype(_impl_.enabled_categories_)*/{}
  , /*decltype(_impl_.disabled_tags_)*/{}
  , /*decltype(_impl_.enabled_tags_)*/{}
  , /*decltype(_impl_.timestamp_unit_multiplier_)*/uint64_t{0u}
  , /*decltype(_impl_.disable_incremental_timestamps_)*/false
  , /*decltype(_impl_.filter_debug_annotations_)*/false
  , /*decltype(_impl_.enable_thread_time_sampling_)*/false
  , /*decltype(_impl_.filter_dynamic_event_names_)*/false} {}
struct TrackEventConfigDefaultTypeInternal {
  PROTOBUF_CONSTEXPR TrackEventConfigDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~TrackEventConfigDefaultTypeInternal() {}
  union {
    TrackEventConfig _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 TrackEventConfigDefaultTypeInternal _TrackEventConfig_default_instance_;
}  // namespace protos
}  // namespace perfetto
namespace perfetto {
namespace protos {

// ===================================================================

class TrackEventConfig::_Internal {
 public:
  using HasBits = decltype(std::declval<TrackEventConfig>()._impl_._has_bits_);
  static void set_has_disable_incremental_timestamps(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_timestamp_unit_multiplier(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_filter_debug_annotations(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_enable_thread_time_sampling(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_filter_dynamic_event_names(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
};

TrackEventConfig::TrackEventConfig(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.TrackEventConfig)
}
TrackEventConfig::TrackEventConfig(const TrackEventConfig& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite() {
  TrackEventConfig* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.disabled_categories_){from._impl_.disabled_categories_}
    , decltype(_impl_.enabled_categories_){from._impl_.enabled_categories_}
    , decltype(_impl_.disabled_tags_){from._impl_.disabled_tags_}
    , decltype(_impl_.enabled_tags_){from._impl_.enabled_tags_}
    , decltype(_impl_.timestamp_unit_multiplier_){}
    , decltype(_impl_.disable_incremental_timestamps_){}
    , decltype(_impl_.filter_debug_annotations_){}
    , decltype(_impl_.enable_thread_time_sampling_){}
    , decltype(_impl_.filter_dynamic_event_names_){}};

  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  ::memcpy(&_impl_.timestamp_unit_multiplier_, &from._impl_.timestamp_unit_multiplier_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.filter_dynamic_event_names_) -
    reinterpret_cast<char*>(&_impl_.timestamp_unit_multiplier_)) + sizeof(_impl_.filter_dynamic_event_names_));
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.TrackEventConfig)
}

inline void TrackEventConfig::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.disabled_categories_){arena}
    , decltype(_impl_.enabled_categories_){arena}
    , decltype(_impl_.disabled_tags_){arena}
    , decltype(_impl_.enabled_tags_){arena}
    , decltype(_impl_.timestamp_unit_multiplier_){uint64_t{0u}}
    , decltype(_impl_.disable_incremental_timestamps_){false}
    , decltype(_impl_.filter_debug_annotations_){false}
    , decltype(_impl_.enable_thread_time_sampling_){false}
    , decltype(_impl_.filter_dynamic_event_names_){false}
  };
}

TrackEventConfig::~TrackEventConfig() {
  // @@protoc_insertion_point(destructor:perfetto.protos.TrackEventConfig)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void TrackEventConfig::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.disabled_categories_.~RepeatedPtrField();
  _impl_.enabled_categories_.~RepeatedPtrField();
  _impl_.disabled_tags_.~RepeatedPtrField();
  _impl_.enabled_tags_.~RepeatedPtrField();
}

void TrackEventConfig::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void TrackEventConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.TrackEventConfig)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.disabled_categories_.Clear();
  _impl_.enabled_categories_.Clear();
  _impl_.disabled_tags_.Clear();
  _impl_.enabled_tags_.Clear();
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    ::memset(&_impl_.timestamp_unit_multiplier_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&_impl_.filter_dynamic_event_names_) -
        reinterpret_cast<char*>(&_impl_.timestamp_unit_multiplier_)) + sizeof(_impl_.filter_dynamic_event_names_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* TrackEventConfig::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated string disabled_categories = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_disabled_categories();
            ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else
          goto handle_unusual;
        continue;
      // repeated string enabled_categories = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_enabled_categories();
            ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else
          goto handle_unusual;
        continue;
      // repeated string disabled_tags = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_disabled_tags();
            ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<26>(ptr));
        } else
          goto handle_unusual;
        continue;
      // repeated string enabled_tags = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_enabled_tags();
            ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<34>(ptr));
        } else
          goto handle_unusual;
        continue;
      // optional bool disable_incremental_timestamps = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 40)) {
          _Internal::set_has_disable_incremental_timestamps(&has_bits);
          _impl_.disable_incremental_timestamps_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint64 timestamp_unit_multiplier = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 48)) {
          _Internal::set_has_timestamp_unit_multiplier(&has_bits);
          _impl_.timestamp_unit_multiplier_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional bool filter_debug_annotations = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 56)) {
          _Internal::set_has_filter_debug_annotations(&has_bits);
          _impl_.filter_debug_annotations_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional bool enable_thread_time_sampling = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 64)) {
          _Internal::set_has_enable_thread_time_sampling(&has_bits);
          _impl_.enable_thread_time_sampling_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional bool filter_dynamic_event_names = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 72)) {
          _Internal::set_has_filter_dynamic_event_names(&has_bits);
          _impl_.filter_dynamic_event_names_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

uint8_t* TrackEventConfig::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.TrackEventConfig)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated string disabled_categories = 1;
  for (int i = 0, n = this->_internal_disabled_categories_size(); i < n; i++) {
    const auto& s = this->_internal_disabled_categories(i);
    target = stream->WriteString(1, s, target);
  }

  // repeated string enabled_categories = 2;
  for (int i = 0, n = this->_internal_enabled_categories_size(); i < n; i++) {
    const auto& s = this->_internal_enabled_categories(i);
    target = stream->WriteString(2, s, target);
  }

  // repeated string disabled_tags = 3;
  for (int i = 0, n = this->_internal_disabled_tags_size(); i < n; i++) {
    const auto& s = this->_internal_disabled_tags(i);
    target = stream->WriteString(3, s, target);
  }

  // repeated string enabled_tags = 4;
  for (int i = 0, n = this->_internal_enabled_tags_size(); i < n; i++) {
    const auto& s = this->_internal_enabled_tags(i);
    target = stream->WriteString(4, s, target);
  }

  cached_has_bits = _impl_._has_bits_[0];
  // optional bool disable_incremental_timestamps = 5;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(5, this->_internal_disable_incremental_timestamps(), target);
  }

  // optional uint64 timestamp_unit_multiplier = 6;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(6, this->_internal_timestamp_unit_multiplier(), target);
  }

  // optional bool filter_debug_annotations = 7;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(7, this->_internal_filter_debug_annotations(), target);
  }

  // optional bool enable_thread_time_sampling = 8;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(8, this->_internal_enable_thread_time_sampling(), target);
  }

  // optional bool filter_dynamic_event_names = 9;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(9, this->_internal_filter_dynamic_event_names(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.TrackEventConfig)
  return target;
}

size_t TrackEventConfig::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.TrackEventConfig)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string disabled_categories = 1;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(_impl_.disabled_categories_.size());
  for (int i = 0, n = _impl_.disabled_categories_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      _impl_.disabled_categories_.Get(i));
  }

  // repeated string enabled_categories = 2;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(_impl_.enabled_categories_.size());
  for (int i = 0, n = _impl_.enabled_categories_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      _impl_.enabled_categories_.Get(i));
  }

  // repeated string disabled_tags = 3;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(_impl_.disabled_tags_.size());
  for (int i = 0, n = _impl_.disabled_tags_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      _impl_.disabled_tags_.Get(i));
  }

  // repeated string enabled_tags = 4;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(_impl_.enabled_tags_.size());
  for (int i = 0, n = _impl_.enabled_tags_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      _impl_.enabled_tags_.Get(i));
  }

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    // optional uint64 timestamp_unit_multiplier = 6;
    if (cached_has_bits & 0x00000001u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(this->_internal_timestamp_unit_multiplier());
    }

    // optional bool disable_incremental_timestamps = 5;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 + 1;
    }

    // optional bool filter_debug_annotations = 7;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 + 1;
    }

    // optional bool enable_thread_time_sampling = 8;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 + 1;
    }

    // optional bool filter_dynamic_event_names = 9;
    if (cached_has_bits & 0x00000010u) {
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

void TrackEventConfig::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const TrackEventConfig*>(
      &from));
}

void TrackEventConfig::MergeFrom(const TrackEventConfig& from) {
  TrackEventConfig* const _this = this;
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.TrackEventConfig)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.disabled_categories_.MergeFrom(from._impl_.disabled_categories_);
  _this->_impl_.enabled_categories_.MergeFrom(from._impl_.enabled_categories_);
  _this->_impl_.disabled_tags_.MergeFrom(from._impl_.disabled_tags_);
  _this->_impl_.enabled_tags_.MergeFrom(from._impl_.enabled_tags_);
  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    if (cached_has_bits & 0x00000001u) {
      _this->_impl_.timestamp_unit_multiplier_ = from._impl_.timestamp_unit_multiplier_;
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.disable_incremental_timestamps_ = from._impl_.disable_incremental_timestamps_;
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_impl_.filter_debug_annotations_ = from._impl_.filter_debug_annotations_;
    }
    if (cached_has_bits & 0x00000008u) {
      _this->_impl_.enable_thread_time_sampling_ = from._impl_.enable_thread_time_sampling_;
    }
    if (cached_has_bits & 0x00000010u) {
      _this->_impl_.filter_dynamic_event_names_ = from._impl_.filter_dynamic_event_names_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void TrackEventConfig::CopyFrom(const TrackEventConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.TrackEventConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TrackEventConfig::IsInitialized() const {
  return true;
}

void TrackEventConfig::InternalSwap(TrackEventConfig* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  _impl_.disabled_categories_.InternalSwap(&other->_impl_.disabled_categories_);
  _impl_.enabled_categories_.InternalSwap(&other->_impl_.enabled_categories_);
  _impl_.disabled_tags_.InternalSwap(&other->_impl_.disabled_tags_);
  _impl_.enabled_tags_.InternalSwap(&other->_impl_.enabled_tags_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(TrackEventConfig, _impl_.filter_dynamic_event_names_)
      + sizeof(TrackEventConfig::_impl_.filter_dynamic_event_names_)
      - PROTOBUF_FIELD_OFFSET(TrackEventConfig, _impl_.timestamp_unit_multiplier_)>(
          reinterpret_cast<char*>(&_impl_.timestamp_unit_multiplier_),
          reinterpret_cast<char*>(&other->_impl_.timestamp_unit_multiplier_));
}

std::string TrackEventConfig::GetTypeName() const {
  return "perfetto.protos.TrackEventConfig";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::perfetto::protos::TrackEventConfig*
Arena::CreateMaybeMessage< ::perfetto::protos::TrackEventConfig >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::TrackEventConfig >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>