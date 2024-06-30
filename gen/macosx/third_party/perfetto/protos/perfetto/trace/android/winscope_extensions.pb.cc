// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/android/winscope_extensions.proto

#include "protos/perfetto/trace/android/winscope_extensions.pb.h"

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
PROTOBUF_CONSTEXPR WinscopeExtensions::WinscopeExtensions(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._extensions_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct WinscopeExtensionsDefaultTypeInternal {
  PROTOBUF_CONSTEXPR WinscopeExtensionsDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~WinscopeExtensionsDefaultTypeInternal() {}
  union {
    WinscopeExtensions _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 WinscopeExtensionsDefaultTypeInternal _WinscopeExtensions_default_instance_;
}  // namespace protos
}  // namespace perfetto
namespace perfetto {
namespace protos {

// ===================================================================

class WinscopeExtensions::_Internal {
 public:
};

WinscopeExtensions::WinscopeExtensions(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.WinscopeExtensions)
}
WinscopeExtensions::WinscopeExtensions(const WinscopeExtensions& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite() {
  WinscopeExtensions* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      /*decltype(_impl_._extensions_)*/{}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  _impl_._extensions_.MergeFrom(internal_default_instance(), from._impl_._extensions_);
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.WinscopeExtensions)
}

inline void WinscopeExtensions::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      /*decltype(_impl_._extensions_)*/{::_pbi::ArenaInitialized(), arena}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

WinscopeExtensions::~WinscopeExtensions() {
  // @@protoc_insertion_point(destructor:perfetto.protos.WinscopeExtensions)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void WinscopeExtensions::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_._extensions_.~ExtensionSet();
}

void WinscopeExtensions::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void WinscopeExtensions::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.WinscopeExtensions)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_._extensions_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* WinscopeExtensions::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    if ((8u <= tag && tag < 48u)) {
      ptr = _impl_._extensions_.ParseField(tag, ptr, internal_default_instance(), &_internal_metadata_, ctx);
      CHK_(ptr != nullptr);
      continue;
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

uint8_t* WinscopeExtensions::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.WinscopeExtensions)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // Extension range [1, 6)
  target = _impl_._extensions_._InternalSerialize(
  internal_default_instance(), 1, 6, target, stream);

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.WinscopeExtensions)
  return target;
}

size_t WinscopeExtensions::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.WinscopeExtensions)
  size_t total_size = 0;

  total_size += _impl_._extensions_.ByteSize();

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void WinscopeExtensions::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const WinscopeExtensions*>(
      &from));
}

void WinscopeExtensions::MergeFrom(const WinscopeExtensions& from) {
  WinscopeExtensions* const _this = this;
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.WinscopeExtensions)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_._extensions_.MergeFrom(internal_default_instance(), from._impl_._extensions_);
  _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void WinscopeExtensions::CopyFrom(const WinscopeExtensions& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.WinscopeExtensions)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool WinscopeExtensions::IsInitialized() const {
  if (!_impl_._extensions_.IsInitialized()) {
    return false;
  }

  return true;
}

void WinscopeExtensions::InternalSwap(WinscopeExtensions* other) {
  using std::swap;
  _impl_._extensions_.InternalSwap(&other->_impl_._extensions_);
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
}

std::string WinscopeExtensions::GetTypeName() const {
  return "perfetto.protos.WinscopeExtensions";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::perfetto::protos::WinscopeExtensions*
Arena::CreateMaybeMessage< ::perfetto::protos::WinscopeExtensions >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::WinscopeExtensions >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
