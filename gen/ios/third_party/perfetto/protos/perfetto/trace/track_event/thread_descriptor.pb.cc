// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/track_event/thread_descriptor.proto

#include "protos/perfetto/trace/track_event/thread_descriptor.pb.h"

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
PROTOBUF_CONSTEXPR ThreadDescriptor::ThreadDescriptor(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.thread_name_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.pid_)*/0
  , /*decltype(_impl_.tid_)*/0
  , /*decltype(_impl_.legacy_sort_index_)*/0
  , /*decltype(_impl_.chrome_thread_type_)*/0
  , /*decltype(_impl_.reference_timestamp_us_)*/int64_t{0}
  , /*decltype(_impl_.reference_thread_time_us_)*/int64_t{0}
  , /*decltype(_impl_.reference_thread_instruction_count_)*/int64_t{0}} {}
struct ThreadDescriptorDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ThreadDescriptorDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ThreadDescriptorDefaultTypeInternal() {}
  union {
    ThreadDescriptor _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ThreadDescriptorDefaultTypeInternal _ThreadDescriptor_default_instance_;
}  // namespace protos
}  // namespace perfetto
namespace perfetto {
namespace protos {
bool ThreadDescriptor_ChromeThreadType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 50:
    case 51:
      return true;
    default:
      return false;
  }
}

static ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<std::string> ThreadDescriptor_ChromeThreadType_strings[14] = {};

static const char ThreadDescriptor_ChromeThreadType_names[] =
  "CHROME_THREAD_COMPOSITOR"
  "CHROME_THREAD_COMPOSITOR_WORKER"
  "CHROME_THREAD_IO"
  "CHROME_THREAD_MAIN"
  "CHROME_THREAD_MEMORY_INFRA"
  "CHROME_THREAD_POOL_BG_BLOCKING"
  "CHROME_THREAD_POOL_BG_WORKER"
  "CHROME_THREAD_POOL_FB_BLOCKING"
  "CHROME_THREAD_POOL_FG_WORKER"
  "CHROME_THREAD_POOL_SERVICE"
  "CHROME_THREAD_SAMPLING_PROFILER"
  "CHROME_THREAD_SERVICE_WORKER"
  "CHROME_THREAD_UNSPECIFIED"
  "CHROME_THREAD_VIZ_COMPOSITOR";

static const ::PROTOBUF_NAMESPACE_ID::internal::EnumEntry ThreadDescriptor_ChromeThreadType_entries[] = {
  { {ThreadDescriptor_ChromeThreadType_names + 0, 24}, 8 },
  { {ThreadDescriptor_ChromeThreadType_names + 24, 31}, 10 },
  { {ThreadDescriptor_ChromeThreadType_names + 55, 16}, 2 },
  { {ThreadDescriptor_ChromeThreadType_names + 71, 18}, 1 },
  { {ThreadDescriptor_ChromeThreadType_names + 89, 26}, 50 },
  { {ThreadDescriptor_ChromeThreadType_names + 115, 30}, 6 },
  { {ThreadDescriptor_ChromeThreadType_names + 145, 28}, 3 },
  { {ThreadDescriptor_ChromeThreadType_names + 173, 30}, 5 },
  { {ThreadDescriptor_ChromeThreadType_names + 203, 28}, 4 },
  { {ThreadDescriptor_ChromeThreadType_names + 231, 26}, 7 },
  { {ThreadDescriptor_ChromeThreadType_names + 257, 31}, 51 },
  { {ThreadDescriptor_ChromeThreadType_names + 288, 28}, 11 },
  { {ThreadDescriptor_ChromeThreadType_names + 316, 25}, 0 },
  { {ThreadDescriptor_ChromeThreadType_names + 341, 28}, 9 },
};

static const int ThreadDescriptor_ChromeThreadType_entries_by_number[] = {
  12, // 0 -> CHROME_THREAD_UNSPECIFIED
  3, // 1 -> CHROME_THREAD_MAIN
  2, // 2 -> CHROME_THREAD_IO
  6, // 3 -> CHROME_THREAD_POOL_BG_WORKER
  8, // 4 -> CHROME_THREAD_POOL_FG_WORKER
  7, // 5 -> CHROME_THREAD_POOL_FB_BLOCKING
  5, // 6 -> CHROME_THREAD_POOL_BG_BLOCKING
  9, // 7 -> CHROME_THREAD_POOL_SERVICE
  0, // 8 -> CHROME_THREAD_COMPOSITOR
  13, // 9 -> CHROME_THREAD_VIZ_COMPOSITOR
  1, // 10 -> CHROME_THREAD_COMPOSITOR_WORKER
  11, // 11 -> CHROME_THREAD_SERVICE_WORKER
  4, // 50 -> CHROME_THREAD_MEMORY_INFRA
  10, // 51 -> CHROME_THREAD_SAMPLING_PROFILER
};

const std::string& ThreadDescriptor_ChromeThreadType_Name(
    ThreadDescriptor_ChromeThreadType value) {
  static const bool dummy =
      ::PROTOBUF_NAMESPACE_ID::internal::InitializeEnumStrings(
          ThreadDescriptor_ChromeThreadType_entries,
          ThreadDescriptor_ChromeThreadType_entries_by_number,
          14, ThreadDescriptor_ChromeThreadType_strings);
  (void) dummy;
  int idx = ::PROTOBUF_NAMESPACE_ID::internal::LookUpEnumName(
      ThreadDescriptor_ChromeThreadType_entries,
      ThreadDescriptor_ChromeThreadType_entries_by_number,
      14, value);
  return idx == -1 ? ::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString() :
                     ThreadDescriptor_ChromeThreadType_strings[idx].get();
}
bool ThreadDescriptor_ChromeThreadType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, ThreadDescriptor_ChromeThreadType* value) {
  int int_value;
  bool success = ::PROTOBUF_NAMESPACE_ID::internal::LookUpEnumValue(
      ThreadDescriptor_ChromeThreadType_entries, 14, name, &int_value);
  if (success) {
    *value = static_cast<ThreadDescriptor_ChromeThreadType>(int_value);
  }
  return success;
}
#if (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
constexpr ThreadDescriptor_ChromeThreadType ThreadDescriptor::CHROME_THREAD_UNSPECIFIED;
constexpr ThreadDescriptor_ChromeThreadType ThreadDescriptor::CHROME_THREAD_MAIN;
constexpr ThreadDescriptor_ChromeThreadType ThreadDescriptor::CHROME_THREAD_IO;
constexpr ThreadDescriptor_ChromeThreadType ThreadDescriptor::CHROME_THREAD_POOL_BG_WORKER;
constexpr ThreadDescriptor_ChromeThreadType ThreadDescriptor::CHROME_THREAD_POOL_FG_WORKER;
constexpr ThreadDescriptor_ChromeThreadType ThreadDescriptor::CHROME_THREAD_POOL_FB_BLOCKING;
constexpr ThreadDescriptor_ChromeThreadType ThreadDescriptor::CHROME_THREAD_POOL_BG_BLOCKING;
constexpr ThreadDescriptor_ChromeThreadType ThreadDescriptor::CHROME_THREAD_POOL_SERVICE;
constexpr ThreadDescriptor_ChromeThreadType ThreadDescriptor::CHROME_THREAD_COMPOSITOR;
constexpr ThreadDescriptor_ChromeThreadType ThreadDescriptor::CHROME_THREAD_VIZ_COMPOSITOR;
constexpr ThreadDescriptor_ChromeThreadType ThreadDescriptor::CHROME_THREAD_COMPOSITOR_WORKER;
constexpr ThreadDescriptor_ChromeThreadType ThreadDescriptor::CHROME_THREAD_SERVICE_WORKER;
constexpr ThreadDescriptor_ChromeThreadType ThreadDescriptor::CHROME_THREAD_MEMORY_INFRA;
constexpr ThreadDescriptor_ChromeThreadType ThreadDescriptor::CHROME_THREAD_SAMPLING_PROFILER;
constexpr ThreadDescriptor_ChromeThreadType ThreadDescriptor::ChromeThreadType_MIN;
constexpr ThreadDescriptor_ChromeThreadType ThreadDescriptor::ChromeThreadType_MAX;
constexpr int ThreadDescriptor::ChromeThreadType_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))

// ===================================================================

class ThreadDescriptor::_Internal {
 public:
  using HasBits = decltype(std::declval<ThreadDescriptor>()._impl_._has_bits_);
  static void set_has_pid(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_tid(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_thread_name(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_chrome_thread_type(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_reference_timestamp_us(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
  static void set_has_reference_thread_time_us(HasBits* has_bits) {
    (*has_bits)[0] |= 64u;
  }
  static void set_has_reference_thread_instruction_count(HasBits* has_bits) {
    (*has_bits)[0] |= 128u;
  }
  static void set_has_legacy_sort_index(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
};

ThreadDescriptor::ThreadDescriptor(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.ThreadDescriptor)
}
ThreadDescriptor::ThreadDescriptor(const ThreadDescriptor& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite() {
  ThreadDescriptor* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.thread_name_){}
    , decltype(_impl_.pid_){}
    , decltype(_impl_.tid_){}
    , decltype(_impl_.legacy_sort_index_){}
    , decltype(_impl_.chrome_thread_type_){}
    , decltype(_impl_.reference_timestamp_us_){}
    , decltype(_impl_.reference_thread_time_us_){}
    , decltype(_impl_.reference_thread_instruction_count_){}};

  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  _impl_.thread_name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.thread_name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_thread_name()) {
    _this->_impl_.thread_name_.Set(from._internal_thread_name(), 
      _this->GetArenaForAllocation());
  }
  ::memcpy(&_impl_.pid_, &from._impl_.pid_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.reference_thread_instruction_count_) -
    reinterpret_cast<char*>(&_impl_.pid_)) + sizeof(_impl_.reference_thread_instruction_count_));
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.ThreadDescriptor)
}

inline void ThreadDescriptor::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.thread_name_){}
    , decltype(_impl_.pid_){0}
    , decltype(_impl_.tid_){0}
    , decltype(_impl_.legacy_sort_index_){0}
    , decltype(_impl_.chrome_thread_type_){0}
    , decltype(_impl_.reference_timestamp_us_){int64_t{0}}
    , decltype(_impl_.reference_thread_time_us_){int64_t{0}}
    , decltype(_impl_.reference_thread_instruction_count_){int64_t{0}}
  };
  _impl_.thread_name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.thread_name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

ThreadDescriptor::~ThreadDescriptor() {
  // @@protoc_insertion_point(destructor:perfetto.protos.ThreadDescriptor)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ThreadDescriptor::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.thread_name_.Destroy();
}

void ThreadDescriptor::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void ThreadDescriptor::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.ThreadDescriptor)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    _impl_.thread_name_.ClearNonDefaultToEmpty();
  }
  if (cached_has_bits & 0x000000feu) {
    ::memset(&_impl_.pid_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&_impl_.reference_thread_instruction_count_) -
        reinterpret_cast<char*>(&_impl_.pid_)) + sizeof(_impl_.reference_thread_instruction_count_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* ThreadDescriptor::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional int32 pid = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_pid(&has_bits);
          _impl_.pid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional int32 tid = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_tid(&has_bits);
          _impl_.tid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional int32 legacy_sort_index = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _Internal::set_has_legacy_sort_index(&has_bits);
          _impl_.legacy_sort_index_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional .perfetto.protos.ThreadDescriptor.ChromeThreadType chrome_thread_type = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::perfetto::protos::ThreadDescriptor_ChromeThreadType_IsValid(val))) {
            _internal_set_chrome_thread_type(static_cast<::perfetto::protos::ThreadDescriptor_ChromeThreadType>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(4, val, mutable_unknown_fields());
          }
        } else
          goto handle_unusual;
        continue;
      // optional string thread_name = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 42)) {
          auto str = _internal_mutable_thread_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional int64 reference_timestamp_us = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 48)) {
          _Internal::set_has_reference_timestamp_us(&has_bits);
          _impl_.reference_timestamp_us_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional int64 reference_thread_time_us = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 56)) {
          _Internal::set_has_reference_thread_time_us(&has_bits);
          _impl_.reference_thread_time_us_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional int64 reference_thread_instruction_count = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 64)) {
          _Internal::set_has_reference_thread_instruction_count(&has_bits);
          _impl_.reference_thread_instruction_count_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

uint8_t* ThreadDescriptor::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.ThreadDescriptor)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional int32 pid = 1;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(1, this->_internal_pid(), target);
  }

  // optional int32 tid = 2;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(2, this->_internal_tid(), target);
  }

  // optional int32 legacy_sort_index = 3;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(3, this->_internal_legacy_sort_index(), target);
  }

  // optional .perfetto.protos.ThreadDescriptor.ChromeThreadType chrome_thread_type = 4;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      4, this->_internal_chrome_thread_type(), target);
  }

  // optional string thread_name = 5;
  if (cached_has_bits & 0x00000001u) {
    target = stream->WriteStringMaybeAliased(
        5, this->_internal_thread_name(), target);
  }

  // optional int64 reference_timestamp_us = 6;
  if (cached_has_bits & 0x00000020u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(6, this->_internal_reference_timestamp_us(), target);
  }

  // optional int64 reference_thread_time_us = 7;
  if (cached_has_bits & 0x00000040u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(7, this->_internal_reference_thread_time_us(), target);
  }

  // optional int64 reference_thread_instruction_count = 8;
  if (cached_has_bits & 0x00000080u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(8, this->_internal_reference_thread_instruction_count(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.ThreadDescriptor)
  return target;
}

size_t ThreadDescriptor::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.ThreadDescriptor)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    // optional string thread_name = 5;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_thread_name());
    }

    // optional int32 pid = 1;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_pid());
    }

    // optional int32 tid = 2;
    if (cached_has_bits & 0x00000004u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_tid());
    }

    // optional int32 legacy_sort_index = 3;
    if (cached_has_bits & 0x00000008u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_legacy_sort_index());
    }

    // optional .perfetto.protos.ThreadDescriptor.ChromeThreadType chrome_thread_type = 4;
    if (cached_has_bits & 0x00000010u) {
      total_size += 1 +
        ::_pbi::WireFormatLite::EnumSize(this->_internal_chrome_thread_type());
    }

    // optional int64 reference_timestamp_us = 6;
    if (cached_has_bits & 0x00000020u) {
      total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_reference_timestamp_us());
    }

    // optional int64 reference_thread_time_us = 7;
    if (cached_has_bits & 0x00000040u) {
      total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_reference_thread_time_us());
    }

    // optional int64 reference_thread_instruction_count = 8;
    if (cached_has_bits & 0x00000080u) {
      total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_reference_thread_instruction_count());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ThreadDescriptor::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const ThreadDescriptor*>(
      &from));
}

void ThreadDescriptor::MergeFrom(const ThreadDescriptor& from) {
  ThreadDescriptor* const _this = this;
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.ThreadDescriptor)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_set_thread_name(from._internal_thread_name());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.pid_ = from._impl_.pid_;
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_impl_.tid_ = from._impl_.tid_;
    }
    if (cached_has_bits & 0x00000008u) {
      _this->_impl_.legacy_sort_index_ = from._impl_.legacy_sort_index_;
    }
    if (cached_has_bits & 0x00000010u) {
      _this->_impl_.chrome_thread_type_ = from._impl_.chrome_thread_type_;
    }
    if (cached_has_bits & 0x00000020u) {
      _this->_impl_.reference_timestamp_us_ = from._impl_.reference_timestamp_us_;
    }
    if (cached_has_bits & 0x00000040u) {
      _this->_impl_.reference_thread_time_us_ = from._impl_.reference_thread_time_us_;
    }
    if (cached_has_bits & 0x00000080u) {
      _this->_impl_.reference_thread_instruction_count_ = from._impl_.reference_thread_instruction_count_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void ThreadDescriptor::CopyFrom(const ThreadDescriptor& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.ThreadDescriptor)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ThreadDescriptor::IsInitialized() const {
  return true;
}

void ThreadDescriptor::InternalSwap(ThreadDescriptor* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.thread_name_, lhs_arena,
      &other->_impl_.thread_name_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(ThreadDescriptor, _impl_.reference_thread_instruction_count_)
      + sizeof(ThreadDescriptor::_impl_.reference_thread_instruction_count_)
      - PROTOBUF_FIELD_OFFSET(ThreadDescriptor, _impl_.pid_)>(
          reinterpret_cast<char*>(&_impl_.pid_),
          reinterpret_cast<char*>(&other->_impl_.pid_));
}

std::string ThreadDescriptor::GetTypeName() const {
  return "perfetto.protos.ThreadDescriptor";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::perfetto::protos::ThreadDescriptor*
Arena::CreateMaybeMessage< ::perfetto::protos::ThreadDescriptor >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::ThreadDescriptor >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>