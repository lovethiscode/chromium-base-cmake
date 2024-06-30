// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/config/sys_stats/sys_stats_config.proto

#include "protos/perfetto/config/sys_stats/sys_stats_config.pb.h"

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
PROTOBUF_CONSTEXPR SysStatsConfig::SysStatsConfig(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.meminfo_counters_)*/{}
  , /*decltype(_impl_.vmstat_counters_)*/{}
  , /*decltype(_impl_.stat_counters_)*/{}
  , /*decltype(_impl_.meminfo_period_ms_)*/0u
  , /*decltype(_impl_.vmstat_period_ms_)*/0u
  , /*decltype(_impl_.stat_period_ms_)*/0u
  , /*decltype(_impl_.devfreq_period_ms_)*/0u
  , /*decltype(_impl_.cpufreq_period_ms_)*/0u
  , /*decltype(_impl_.buddyinfo_period_ms_)*/0u
  , /*decltype(_impl_.diskstat_period_ms_)*/0u
  , /*decltype(_impl_.psi_period_ms_)*/0u} {}
struct SysStatsConfigDefaultTypeInternal {
  PROTOBUF_CONSTEXPR SysStatsConfigDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~SysStatsConfigDefaultTypeInternal() {}
  union {
    SysStatsConfig _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 SysStatsConfigDefaultTypeInternal _SysStatsConfig_default_instance_;
}  // namespace protos
}  // namespace perfetto
namespace perfetto {
namespace protos {
bool SysStatsConfig_StatCounters_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

static ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<std::string> SysStatsConfig_StatCounters_strings[5] = {};

static const char SysStatsConfig_StatCounters_names[] =
  "STAT_CPU_TIMES"
  "STAT_FORK_COUNT"
  "STAT_IRQ_COUNTS"
  "STAT_SOFTIRQ_COUNTS"
  "STAT_UNSPECIFIED";

static const ::PROTOBUF_NAMESPACE_ID::internal::EnumEntry SysStatsConfig_StatCounters_entries[] = {
  { {SysStatsConfig_StatCounters_names + 0, 14}, 1 },
  { {SysStatsConfig_StatCounters_names + 14, 15}, 4 },
  { {SysStatsConfig_StatCounters_names + 29, 15}, 2 },
  { {SysStatsConfig_StatCounters_names + 44, 19}, 3 },
  { {SysStatsConfig_StatCounters_names + 63, 16}, 0 },
};

static const int SysStatsConfig_StatCounters_entries_by_number[] = {
  4, // 0 -> STAT_UNSPECIFIED
  0, // 1 -> STAT_CPU_TIMES
  2, // 2 -> STAT_IRQ_COUNTS
  3, // 3 -> STAT_SOFTIRQ_COUNTS
  1, // 4 -> STAT_FORK_COUNT
};

const std::string& SysStatsConfig_StatCounters_Name(
    SysStatsConfig_StatCounters value) {
  static const bool dummy =
      ::PROTOBUF_NAMESPACE_ID::internal::InitializeEnumStrings(
          SysStatsConfig_StatCounters_entries,
          SysStatsConfig_StatCounters_entries_by_number,
          5, SysStatsConfig_StatCounters_strings);
  (void) dummy;
  int idx = ::PROTOBUF_NAMESPACE_ID::internal::LookUpEnumName(
      SysStatsConfig_StatCounters_entries,
      SysStatsConfig_StatCounters_entries_by_number,
      5, value);
  return idx == -1 ? ::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString() :
                     SysStatsConfig_StatCounters_strings[idx].get();
}
bool SysStatsConfig_StatCounters_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, SysStatsConfig_StatCounters* value) {
  int int_value;
  bool success = ::PROTOBUF_NAMESPACE_ID::internal::LookUpEnumValue(
      SysStatsConfig_StatCounters_entries, 5, name, &int_value);
  if (success) {
    *value = static_cast<SysStatsConfig_StatCounters>(int_value);
  }
  return success;
}
#if (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
constexpr SysStatsConfig_StatCounters SysStatsConfig::STAT_UNSPECIFIED;
constexpr SysStatsConfig_StatCounters SysStatsConfig::STAT_CPU_TIMES;
constexpr SysStatsConfig_StatCounters SysStatsConfig::STAT_IRQ_COUNTS;
constexpr SysStatsConfig_StatCounters SysStatsConfig::STAT_SOFTIRQ_COUNTS;
constexpr SysStatsConfig_StatCounters SysStatsConfig::STAT_FORK_COUNT;
constexpr SysStatsConfig_StatCounters SysStatsConfig::StatCounters_MIN;
constexpr SysStatsConfig_StatCounters SysStatsConfig::StatCounters_MAX;
constexpr int SysStatsConfig::StatCounters_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))

// ===================================================================

class SysStatsConfig::_Internal {
 public:
  using HasBits = decltype(std::declval<SysStatsConfig>()._impl_._has_bits_);
  static void set_has_meminfo_period_ms(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_vmstat_period_ms(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_stat_period_ms(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_devfreq_period_ms(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_cpufreq_period_ms(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_buddyinfo_period_ms(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
  static void set_has_diskstat_period_ms(HasBits* has_bits) {
    (*has_bits)[0] |= 64u;
  }
  static void set_has_psi_period_ms(HasBits* has_bits) {
    (*has_bits)[0] |= 128u;
  }
};

SysStatsConfig::SysStatsConfig(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.SysStatsConfig)
}
SysStatsConfig::SysStatsConfig(const SysStatsConfig& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite() {
  SysStatsConfig* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.meminfo_counters_){from._impl_.meminfo_counters_}
    , decltype(_impl_.vmstat_counters_){from._impl_.vmstat_counters_}
    , decltype(_impl_.stat_counters_){from._impl_.stat_counters_}
    , decltype(_impl_.meminfo_period_ms_){}
    , decltype(_impl_.vmstat_period_ms_){}
    , decltype(_impl_.stat_period_ms_){}
    , decltype(_impl_.devfreq_period_ms_){}
    , decltype(_impl_.cpufreq_period_ms_){}
    , decltype(_impl_.buddyinfo_period_ms_){}
    , decltype(_impl_.diskstat_period_ms_){}
    , decltype(_impl_.psi_period_ms_){}};

  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  ::memcpy(&_impl_.meminfo_period_ms_, &from._impl_.meminfo_period_ms_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.psi_period_ms_) -
    reinterpret_cast<char*>(&_impl_.meminfo_period_ms_)) + sizeof(_impl_.psi_period_ms_));
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.SysStatsConfig)
}

inline void SysStatsConfig::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.meminfo_counters_){arena}
    , decltype(_impl_.vmstat_counters_){arena}
    , decltype(_impl_.stat_counters_){arena}
    , decltype(_impl_.meminfo_period_ms_){0u}
    , decltype(_impl_.vmstat_period_ms_){0u}
    , decltype(_impl_.stat_period_ms_){0u}
    , decltype(_impl_.devfreq_period_ms_){0u}
    , decltype(_impl_.cpufreq_period_ms_){0u}
    , decltype(_impl_.buddyinfo_period_ms_){0u}
    , decltype(_impl_.diskstat_period_ms_){0u}
    , decltype(_impl_.psi_period_ms_){0u}
  };
}

SysStatsConfig::~SysStatsConfig() {
  // @@protoc_insertion_point(destructor:perfetto.protos.SysStatsConfig)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void SysStatsConfig::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.meminfo_counters_.~RepeatedField();
  _impl_.vmstat_counters_.~RepeatedField();
  _impl_.stat_counters_.~RepeatedField();
}

void SysStatsConfig::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void SysStatsConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.SysStatsConfig)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.meminfo_counters_.Clear();
  _impl_.vmstat_counters_.Clear();
  _impl_.stat_counters_.Clear();
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    ::memset(&_impl_.meminfo_period_ms_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&_impl_.psi_period_ms_) -
        reinterpret_cast<char*>(&_impl_.meminfo_period_ms_)) + sizeof(_impl_.psi_period_ms_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* SysStatsConfig::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional uint32 meminfo_period_ms = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_meminfo_period_ms(&has_bits);
          _impl_.meminfo_period_ms_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated .perfetto.protos.MeminfoCounters meminfo_counters = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          ptr -= 1;
          do {
            ptr += 1;
            uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
            CHK_(ptr);
            if (PROTOBUF_PREDICT_TRUE(::perfetto::protos::MeminfoCounters_IsValid(val))) {
              _internal_add_meminfo_counters(static_cast<::perfetto::protos::MeminfoCounters>(val));
            } else {
              ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(2, val, mutable_unknown_fields());
            }
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<16>(ptr));
        } else if (static_cast<uint8_t>(tag) == 18) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedEnumParser<std::string>(_internal_mutable_meminfo_counters(), ptr, ctx, ::perfetto::protos::MeminfoCounters_IsValid, &_internal_metadata_, 2);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint32 vmstat_period_ms = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _Internal::set_has_vmstat_period_ms(&has_bits);
          _impl_.vmstat_period_ms_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated .perfetto.protos.VmstatCounters vmstat_counters = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          ptr -= 1;
          do {
            ptr += 1;
            uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
            CHK_(ptr);
            if (PROTOBUF_PREDICT_TRUE(::perfetto::protos::VmstatCounters_IsValid(val))) {
              _internal_add_vmstat_counters(static_cast<::perfetto::protos::VmstatCounters>(val));
            } else {
              ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(4, val, mutable_unknown_fields());
            }
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<32>(ptr));
        } else if (static_cast<uint8_t>(tag) == 34) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedEnumParser<std::string>(_internal_mutable_vmstat_counters(), ptr, ctx, ::perfetto::protos::VmstatCounters_IsValid, &_internal_metadata_, 4);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint32 stat_period_ms = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 40)) {
          _Internal::set_has_stat_period_ms(&has_bits);
          _impl_.stat_period_ms_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated .perfetto.protos.SysStatsConfig.StatCounters stat_counters = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 48)) {
          ptr -= 1;
          do {
            ptr += 1;
            uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
            CHK_(ptr);
            if (PROTOBUF_PREDICT_TRUE(::perfetto::protos::SysStatsConfig_StatCounters_IsValid(val))) {
              _internal_add_stat_counters(static_cast<::perfetto::protos::SysStatsConfig_StatCounters>(val));
            } else {
              ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(6, val, mutable_unknown_fields());
            }
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<48>(ptr));
        } else if (static_cast<uint8_t>(tag) == 50) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedEnumParser<std::string>(_internal_mutable_stat_counters(), ptr, ctx, ::perfetto::protos::SysStatsConfig_StatCounters_IsValid, &_internal_metadata_, 6);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint32 devfreq_period_ms = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 56)) {
          _Internal::set_has_devfreq_period_ms(&has_bits);
          _impl_.devfreq_period_ms_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint32 cpufreq_period_ms = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 64)) {
          _Internal::set_has_cpufreq_period_ms(&has_bits);
          _impl_.cpufreq_period_ms_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint32 buddyinfo_period_ms = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 72)) {
          _Internal::set_has_buddyinfo_period_ms(&has_bits);
          _impl_.buddyinfo_period_ms_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint32 diskstat_period_ms = 10;
      case 10:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 80)) {
          _Internal::set_has_diskstat_period_ms(&has_bits);
          _impl_.diskstat_period_ms_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint32 psi_period_ms = 11;
      case 11:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 88)) {
          _Internal::set_has_psi_period_ms(&has_bits);
          _impl_.psi_period_ms_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
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

uint8_t* SysStatsConfig::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.SysStatsConfig)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional uint32 meminfo_period_ms = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(1, this->_internal_meminfo_period_ms(), target);
  }

  // repeated .perfetto.protos.MeminfoCounters meminfo_counters = 2;
  for (int i = 0, n = this->_internal_meminfo_counters_size(); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
        2, this->_internal_meminfo_counters(i), target);
  }

  // optional uint32 vmstat_period_ms = 3;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(3, this->_internal_vmstat_period_ms(), target);
  }

  // repeated .perfetto.protos.VmstatCounters vmstat_counters = 4;
  for (int i = 0, n = this->_internal_vmstat_counters_size(); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
        4, this->_internal_vmstat_counters(i), target);
  }

  // optional uint32 stat_period_ms = 5;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(5, this->_internal_stat_period_ms(), target);
  }

  // repeated .perfetto.protos.SysStatsConfig.StatCounters stat_counters = 6;
  for (int i = 0, n = this->_internal_stat_counters_size(); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
        6, this->_internal_stat_counters(i), target);
  }

  // optional uint32 devfreq_period_ms = 7;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(7, this->_internal_devfreq_period_ms(), target);
  }

  // optional uint32 cpufreq_period_ms = 8;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(8, this->_internal_cpufreq_period_ms(), target);
  }

  // optional uint32 buddyinfo_period_ms = 9;
  if (cached_has_bits & 0x00000020u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(9, this->_internal_buddyinfo_period_ms(), target);
  }

  // optional uint32 diskstat_period_ms = 10;
  if (cached_has_bits & 0x00000040u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(10, this->_internal_diskstat_period_ms(), target);
  }

  // optional uint32 psi_period_ms = 11;
  if (cached_has_bits & 0x00000080u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(11, this->_internal_psi_period_ms(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.SysStatsConfig)
  return target;
}

size_t SysStatsConfig::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.SysStatsConfig)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .perfetto.protos.MeminfoCounters meminfo_counters = 2;
  {
    size_t data_size = 0;
    unsigned int count = static_cast<unsigned int>(this->_internal_meminfo_counters_size());for (unsigned int i = 0; i < count; i++) {
      data_size += ::_pbi::WireFormatLite::EnumSize(
        this->_internal_meminfo_counters(static_cast<int>(i)));
    }
    total_size += (1UL * count) + data_size;
  }

  // repeated .perfetto.protos.VmstatCounters vmstat_counters = 4;
  {
    size_t data_size = 0;
    unsigned int count = static_cast<unsigned int>(this->_internal_vmstat_counters_size());for (unsigned int i = 0; i < count; i++) {
      data_size += ::_pbi::WireFormatLite::EnumSize(
        this->_internal_vmstat_counters(static_cast<int>(i)));
    }
    total_size += (1UL * count) + data_size;
  }

  // repeated .perfetto.protos.SysStatsConfig.StatCounters stat_counters = 6;
  {
    size_t data_size = 0;
    unsigned int count = static_cast<unsigned int>(this->_internal_stat_counters_size());for (unsigned int i = 0; i < count; i++) {
      data_size += ::_pbi::WireFormatLite::EnumSize(
        this->_internal_stat_counters(static_cast<int>(i)));
    }
    total_size += (1UL * count) + data_size;
  }

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    // optional uint32 meminfo_period_ms = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_meminfo_period_ms());
    }

    // optional uint32 vmstat_period_ms = 3;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_vmstat_period_ms());
    }

    // optional uint32 stat_period_ms = 5;
    if (cached_has_bits & 0x00000004u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_stat_period_ms());
    }

    // optional uint32 devfreq_period_ms = 7;
    if (cached_has_bits & 0x00000008u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_devfreq_period_ms());
    }

    // optional uint32 cpufreq_period_ms = 8;
    if (cached_has_bits & 0x00000010u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_cpufreq_period_ms());
    }

    // optional uint32 buddyinfo_period_ms = 9;
    if (cached_has_bits & 0x00000020u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_buddyinfo_period_ms());
    }

    // optional uint32 diskstat_period_ms = 10;
    if (cached_has_bits & 0x00000040u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_diskstat_period_ms());
    }

    // optional uint32 psi_period_ms = 11;
    if (cached_has_bits & 0x00000080u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_psi_period_ms());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SysStatsConfig::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const SysStatsConfig*>(
      &from));
}

void SysStatsConfig::MergeFrom(const SysStatsConfig& from) {
  SysStatsConfig* const _this = this;
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.SysStatsConfig)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.meminfo_counters_.MergeFrom(from._impl_.meminfo_counters_);
  _this->_impl_.vmstat_counters_.MergeFrom(from._impl_.vmstat_counters_);
  _this->_impl_.stat_counters_.MergeFrom(from._impl_.stat_counters_);
  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    if (cached_has_bits & 0x00000001u) {
      _this->_impl_.meminfo_period_ms_ = from._impl_.meminfo_period_ms_;
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.vmstat_period_ms_ = from._impl_.vmstat_period_ms_;
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_impl_.stat_period_ms_ = from._impl_.stat_period_ms_;
    }
    if (cached_has_bits & 0x00000008u) {
      _this->_impl_.devfreq_period_ms_ = from._impl_.devfreq_period_ms_;
    }
    if (cached_has_bits & 0x00000010u) {
      _this->_impl_.cpufreq_period_ms_ = from._impl_.cpufreq_period_ms_;
    }
    if (cached_has_bits & 0x00000020u) {
      _this->_impl_.buddyinfo_period_ms_ = from._impl_.buddyinfo_period_ms_;
    }
    if (cached_has_bits & 0x00000040u) {
      _this->_impl_.diskstat_period_ms_ = from._impl_.diskstat_period_ms_;
    }
    if (cached_has_bits & 0x00000080u) {
      _this->_impl_.psi_period_ms_ = from._impl_.psi_period_ms_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void SysStatsConfig::CopyFrom(const SysStatsConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.SysStatsConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SysStatsConfig::IsInitialized() const {
  return true;
}

void SysStatsConfig::InternalSwap(SysStatsConfig* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  _impl_.meminfo_counters_.InternalSwap(&other->_impl_.meminfo_counters_);
  _impl_.vmstat_counters_.InternalSwap(&other->_impl_.vmstat_counters_);
  _impl_.stat_counters_.InternalSwap(&other->_impl_.stat_counters_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(SysStatsConfig, _impl_.psi_period_ms_)
      + sizeof(SysStatsConfig::_impl_.psi_period_ms_)
      - PROTOBUF_FIELD_OFFSET(SysStatsConfig, _impl_.meminfo_period_ms_)>(
          reinterpret_cast<char*>(&_impl_.meminfo_period_ms_),
          reinterpret_cast<char*>(&other->_impl_.meminfo_period_ms_));
}

std::string SysStatsConfig::GetTypeName() const {
  return "perfetto.protos.SysStatsConfig";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::perfetto::protos::SysStatsConfig*
Arena::CreateMaybeMessage< ::perfetto::protos::SysStatsConfig >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::SysStatsConfig >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
