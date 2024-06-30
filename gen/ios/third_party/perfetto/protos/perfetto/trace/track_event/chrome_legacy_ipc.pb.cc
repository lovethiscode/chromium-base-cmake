// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/track_event/chrome_legacy_ipc.proto

#include "protos/perfetto/trace/track_event/chrome_legacy_ipc.pb.h"

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
PROTOBUF_CONSTEXPR ChromeLegacyIpc::ChromeLegacyIpc(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.message_class_)*/0
  , /*decltype(_impl_.message_line_)*/0u} {}
struct ChromeLegacyIpcDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ChromeLegacyIpcDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ChromeLegacyIpcDefaultTypeInternal() {}
  union {
    ChromeLegacyIpc _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ChromeLegacyIpcDefaultTypeInternal _ChromeLegacyIpc_default_instance_;
}  // namespace protos
}  // namespace perfetto
namespace perfetto {
namespace protos {
bool ChromeLegacyIpc_MessageClass_IsValid(int value) {
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
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 31:
    case 32:
    case 33:
    case 34:
    case 35:
    case 36:
    case 37:
      return true;
    default:
      return false;
  }
}

static ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<std::string> ChromeLegacyIpc_MessageClass_strings[38] = {};

static const char ChromeLegacyIpc_MessageClass_names[] =
  "CLASS_ACCESSIBILITY"
  "CLASS_ANDROID_WEB_VIEW"
  "CLASS_AUTOMATION"
  "CLASS_BLINK_TEST"
  "CLASS_BROWSER_PLUGIN"
  "CLASS_CAST"
  "CLASS_CHROME"
  "CLASS_CHROME_UTILITY_PRINTING"
  "CLASS_CHROMOTING"
  "CLASS_DRAG"
  "CLASS_ENCRYPTED_MEDIA"
  "CLASS_EXTENSION"
  "CLASS_EXTENSIONS_GUEST_VIEW"
  "CLASS_EXTENSION_WORKER"
  "CLASS_FRAME"
  "CLASS_GIN_JAVA_BRIDGE"
  "CLASS_GPU_CHANNEL"
  "CLASS_GUEST_VIEW"
  "CLASS_INPUT"
  "CLASS_MEDIA"
  "CLASS_MEDIA_PLAYER_DELEGATE"
  "CLASS_NACL"
  "CLASS_NACL_HOST"
  "CLASS_NETWORK_HINTS"
  "CLASS_OZONE_GPU"
  "CLASS_PAGE"
  "CLASS_PPAPI"
  "CLASS_PRERENDER"
  "CLASS_PRINT"
  "CLASS_SUBRESOURCE_FILTER"
  "CLASS_TEST"
  "CLASS_TEXT_INPUT_CLIENT"
  "CLASS_UNFREEZABLE_FRAME"
  "CLASS_UNSPECIFIED"
  "CLASS_VIEW"
  "CLASS_WEB_TEST"
  "CLASS_WIDGET"
  "CLASS_WORKER";

static const ::PROTOBUF_NAMESPACE_ID::internal::EnumEntry ChromeLegacyIpc_MessageClass_entries[] = {
  { {ChromeLegacyIpc_MessageClass_names + 0, 19}, 19 },
  { {ChromeLegacyIpc_MessageClass_names + 19, 22}, 23 },
  { {ChromeLegacyIpc_MessageClass_names + 41, 16}, 1 },
  { {ChromeLegacyIpc_MessageClass_names + 57, 16}, 18 },
  { {ChromeLegacyIpc_MessageClass_names + 73, 20}, 22 },
  { {ChromeLegacyIpc_MessageClass_names + 93, 10}, 26 },
  { {ChromeLegacyIpc_MessageClass_names + 103, 12}, 13 },
  { {ChromeLegacyIpc_MessageClass_names + 115, 29}, 28 },
  { {ChromeLegacyIpc_MessageClass_names + 144, 16}, 21 },
  { {ChromeLegacyIpc_MessageClass_names + 160, 10}, 14 },
  { {ChromeLegacyIpc_MessageClass_names + 170, 21}, 25 },
  { {ChromeLegacyIpc_MessageClass_names + 191, 15}, 16 },
  { {ChromeLegacyIpc_MessageClass_names + 206, 27}, 32 },
  { {ChromeLegacyIpc_MessageClass_names + 233, 22}, 35 },
  { {ChromeLegacyIpc_MessageClass_names + 255, 11}, 2 },
  { {ChromeLegacyIpc_MessageClass_names + 266, 21}, 27 },
  { {ChromeLegacyIpc_MessageClass_names + 287, 17}, 10 },
  { {ChromeLegacyIpc_MessageClass_names + 304, 16}, 33 },
  { {ChromeLegacyIpc_MessageClass_names + 320, 11}, 6 },
  { {ChromeLegacyIpc_MessageClass_names + 331, 11}, 11 },
  { {ChromeLegacyIpc_MessageClass_names + 342, 27}, 34 },
  { {ChromeLegacyIpc_MessageClass_names + 369, 10}, 9 },
  { {ChromeLegacyIpc_MessageClass_names + 379, 15}, 24 },
  { {ChromeLegacyIpc_MessageClass_names + 394, 19}, 31 },
  { {ChromeLegacyIpc_MessageClass_names + 413, 15}, 29 },
  { {ChromeLegacyIpc_MessageClass_names + 428, 10}, 3 },
  { {ChromeLegacyIpc_MessageClass_names + 438, 11}, 12 },
  { {ChromeLegacyIpc_MessageClass_names + 449, 15}, 20 },
  { {ChromeLegacyIpc_MessageClass_names + 464, 11}, 15 },
  { {ChromeLegacyIpc_MessageClass_names + 475, 24}, 36 },
  { {ChromeLegacyIpc_MessageClass_names + 499, 10}, 7 },
  { {ChromeLegacyIpc_MessageClass_names + 509, 23}, 17 },
  { {ChromeLegacyIpc_MessageClass_names + 532, 23}, 37 },
  { {ChromeLegacyIpc_MessageClass_names + 555, 17}, 0 },
  { {ChromeLegacyIpc_MessageClass_names + 572, 10}, 4 },
  { {ChromeLegacyIpc_MessageClass_names + 582, 14}, 30 },
  { {ChromeLegacyIpc_MessageClass_names + 596, 12}, 5 },
  { {ChromeLegacyIpc_MessageClass_names + 608, 12}, 8 },
};

static const int ChromeLegacyIpc_MessageClass_entries_by_number[] = {
  33, // 0 -> CLASS_UNSPECIFIED
  2, // 1 -> CLASS_AUTOMATION
  14, // 2 -> CLASS_FRAME
  25, // 3 -> CLASS_PAGE
  34, // 4 -> CLASS_VIEW
  36, // 5 -> CLASS_WIDGET
  18, // 6 -> CLASS_INPUT
  30, // 7 -> CLASS_TEST
  37, // 8 -> CLASS_WORKER
  21, // 9 -> CLASS_NACL
  16, // 10 -> CLASS_GPU_CHANNEL
  19, // 11 -> CLASS_MEDIA
  26, // 12 -> CLASS_PPAPI
  6, // 13 -> CLASS_CHROME
  9, // 14 -> CLASS_DRAG
  28, // 15 -> CLASS_PRINT
  11, // 16 -> CLASS_EXTENSION
  31, // 17 -> CLASS_TEXT_INPUT_CLIENT
  3, // 18 -> CLASS_BLINK_TEST
  0, // 19 -> CLASS_ACCESSIBILITY
  27, // 20 -> CLASS_PRERENDER
  8, // 21 -> CLASS_CHROMOTING
  4, // 22 -> CLASS_BROWSER_PLUGIN
  1, // 23 -> CLASS_ANDROID_WEB_VIEW
  22, // 24 -> CLASS_NACL_HOST
  10, // 25 -> CLASS_ENCRYPTED_MEDIA
  5, // 26 -> CLASS_CAST
  15, // 27 -> CLASS_GIN_JAVA_BRIDGE
  7, // 28 -> CLASS_CHROME_UTILITY_PRINTING
  24, // 29 -> CLASS_OZONE_GPU
  35, // 30 -> CLASS_WEB_TEST
  23, // 31 -> CLASS_NETWORK_HINTS
  12, // 32 -> CLASS_EXTENSIONS_GUEST_VIEW
  17, // 33 -> CLASS_GUEST_VIEW
  20, // 34 -> CLASS_MEDIA_PLAYER_DELEGATE
  13, // 35 -> CLASS_EXTENSION_WORKER
  29, // 36 -> CLASS_SUBRESOURCE_FILTER
  32, // 37 -> CLASS_UNFREEZABLE_FRAME
};

const std::string& ChromeLegacyIpc_MessageClass_Name(
    ChromeLegacyIpc_MessageClass value) {
  static const bool dummy =
      ::PROTOBUF_NAMESPACE_ID::internal::InitializeEnumStrings(
          ChromeLegacyIpc_MessageClass_entries,
          ChromeLegacyIpc_MessageClass_entries_by_number,
          38, ChromeLegacyIpc_MessageClass_strings);
  (void) dummy;
  int idx = ::PROTOBUF_NAMESPACE_ID::internal::LookUpEnumName(
      ChromeLegacyIpc_MessageClass_entries,
      ChromeLegacyIpc_MessageClass_entries_by_number,
      38, value);
  return idx == -1 ? ::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString() :
                     ChromeLegacyIpc_MessageClass_strings[idx].get();
}
bool ChromeLegacyIpc_MessageClass_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, ChromeLegacyIpc_MessageClass* value) {
  int int_value;
  bool success = ::PROTOBUF_NAMESPACE_ID::internal::LookUpEnumValue(
      ChromeLegacyIpc_MessageClass_entries, 38, name, &int_value);
  if (success) {
    *value = static_cast<ChromeLegacyIpc_MessageClass>(int_value);
  }
  return success;
}
#if (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_UNSPECIFIED;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_AUTOMATION;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_FRAME;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_PAGE;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_VIEW;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_WIDGET;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_INPUT;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_TEST;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_WORKER;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_NACL;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_GPU_CHANNEL;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_MEDIA;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_PPAPI;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_CHROME;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_DRAG;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_PRINT;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_EXTENSION;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_TEXT_INPUT_CLIENT;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_BLINK_TEST;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_ACCESSIBILITY;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_PRERENDER;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_CHROMOTING;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_BROWSER_PLUGIN;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_ANDROID_WEB_VIEW;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_NACL_HOST;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_ENCRYPTED_MEDIA;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_CAST;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_GIN_JAVA_BRIDGE;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_CHROME_UTILITY_PRINTING;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_OZONE_GPU;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_WEB_TEST;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_NETWORK_HINTS;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_EXTENSIONS_GUEST_VIEW;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_GUEST_VIEW;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_MEDIA_PLAYER_DELEGATE;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_EXTENSION_WORKER;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_SUBRESOURCE_FILTER;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::CLASS_UNFREEZABLE_FRAME;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::MessageClass_MIN;
constexpr ChromeLegacyIpc_MessageClass ChromeLegacyIpc::MessageClass_MAX;
constexpr int ChromeLegacyIpc::MessageClass_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))

// ===================================================================

class ChromeLegacyIpc::_Internal {
 public:
  using HasBits = decltype(std::declval<ChromeLegacyIpc>()._impl_._has_bits_);
  static void set_has_message_class(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_message_line(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

ChromeLegacyIpc::ChromeLegacyIpc(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.ChromeLegacyIpc)
}
ChromeLegacyIpc::ChromeLegacyIpc(const ChromeLegacyIpc& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite() {
  ChromeLegacyIpc* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.message_class_){}
    , decltype(_impl_.message_line_){}};

  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  ::memcpy(&_impl_.message_class_, &from._impl_.message_class_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.message_line_) -
    reinterpret_cast<char*>(&_impl_.message_class_)) + sizeof(_impl_.message_line_));
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.ChromeLegacyIpc)
}

inline void ChromeLegacyIpc::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.message_class_){0}
    , decltype(_impl_.message_line_){0u}
  };
}

ChromeLegacyIpc::~ChromeLegacyIpc() {
  // @@protoc_insertion_point(destructor:perfetto.protos.ChromeLegacyIpc)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ChromeLegacyIpc::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void ChromeLegacyIpc::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void ChromeLegacyIpc::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.ChromeLegacyIpc)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    ::memset(&_impl_.message_class_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&_impl_.message_line_) -
        reinterpret_cast<char*>(&_impl_.message_class_)) + sizeof(_impl_.message_line_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* ChromeLegacyIpc::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional .perfetto.protos.ChromeLegacyIpc.MessageClass message_class = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::perfetto::protos::ChromeLegacyIpc_MessageClass_IsValid(val))) {
            _internal_set_message_class(static_cast<::perfetto::protos::ChromeLegacyIpc_MessageClass>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(1, val, mutable_unknown_fields());
          }
        } else
          goto handle_unusual;
        continue;
      // optional uint32 message_line = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_message_line(&has_bits);
          _impl_.message_line_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
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

uint8_t* ChromeLegacyIpc::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.ChromeLegacyIpc)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional .perfetto.protos.ChromeLegacyIpc.MessageClass message_class = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      1, this->_internal_message_class(), target);
  }

  // optional uint32 message_line = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(2, this->_internal_message_line(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.ChromeLegacyIpc)
  return target;
}

size_t ChromeLegacyIpc::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.ChromeLegacyIpc)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional .perfetto.protos.ChromeLegacyIpc.MessageClass message_class = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::_pbi::WireFormatLite::EnumSize(this->_internal_message_class());
    }

    // optional uint32 message_line = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_message_line());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ChromeLegacyIpc::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const ChromeLegacyIpc*>(
      &from));
}

void ChromeLegacyIpc::MergeFrom(const ChromeLegacyIpc& from) {
  ChromeLegacyIpc* const _this = this;
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.ChromeLegacyIpc)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_impl_.message_class_ = from._impl_.message_class_;
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.message_line_ = from._impl_.message_line_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void ChromeLegacyIpc::CopyFrom(const ChromeLegacyIpc& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.ChromeLegacyIpc)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ChromeLegacyIpc::IsInitialized() const {
  return true;
}

void ChromeLegacyIpc::InternalSwap(ChromeLegacyIpc* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(ChromeLegacyIpc, _impl_.message_line_)
      + sizeof(ChromeLegacyIpc::_impl_.message_line_)
      - PROTOBUF_FIELD_OFFSET(ChromeLegacyIpc, _impl_.message_class_)>(
          reinterpret_cast<char*>(&_impl_.message_class_),
          reinterpret_cast<char*>(&other->_impl_.message_class_));
}

std::string ChromeLegacyIpc::GetTypeName() const {
  return "perfetto.protos.ChromeLegacyIpc";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::perfetto::protos::ChromeLegacyIpc*
Arena::CreateMaybeMessage< ::perfetto::protos::ChromeLegacyIpc >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::ChromeLegacyIpc >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
