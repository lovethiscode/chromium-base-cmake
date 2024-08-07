// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/track_event/chrome_active_processes.proto

#include "protos/perfetto/trace/track_event/chrome_active_processes.pb.h"

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
PROTOBUF_CONSTEXPR ChromeActiveProcesses::ChromeActiveProcesses(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.pid_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct ChromeActiveProcessesDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ChromeActiveProcessesDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ChromeActiveProcessesDefaultTypeInternal() {}
  union {
    ChromeActiveProcesses _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ChromeActiveProcessesDefaultTypeInternal _ChromeActiveProcesses_default_instance_;
}  // namespace protos
}  // namespace perfetto
namespace perfetto {
namespace protos {

// ===================================================================

class ChromeActiveProcesses::_Internal {
 public:
};

ChromeActiveProcesses::ChromeActiveProcesses(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.ChromeActiveProcesses)
}
ChromeActiveProcesses::ChromeActiveProcesses(const ChromeActiveProcesses& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite() {
  ChromeActiveProcesses* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.pid_){from._impl_.pid_}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.ChromeActiveProcesses)
}

inline void ChromeActiveProcesses::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.pid_){arena}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

ChromeActiveProcesses::~ChromeActiveProcesses() {
  // @@protoc_insertion_point(destructor:perfetto.protos.ChromeActiveProcesses)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ChromeActiveProcesses::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.pid_.~RepeatedField();
}

void ChromeActiveProcesses::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void ChromeActiveProcesses::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.ChromeActiveProcesses)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.pid_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* ChromeActiveProcesses::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated int32 pid = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          ptr -= 1;
          do {
            ptr += 1;
            _internal_add_pid(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr));
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<8>(ptr));
        } else if (static_cast<uint8_t>(tag) == 10) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedInt32Parser(_internal_mutable_pid(), ptr, ctx);
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

uint8_t* ChromeActiveProcesses::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.ChromeActiveProcesses)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated int32 pid = 1;
  for (int i = 0, n = this->_internal_pid_size(); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(1, this->_internal_pid(i), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.ChromeActiveProcesses)
  return target;
}

size_t ChromeActiveProcesses::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.ChromeActiveProcesses)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated int32 pid = 1;
  {
    size_t data_size = ::_pbi::WireFormatLite::
      Int32Size(this->_impl_.pid_);
    total_size += 1 *
                  ::_pbi::FromIntSize(this->_internal_pid_size());
    total_size += data_size;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ChromeActiveProcesses::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const ChromeActiveProcesses*>(
      &from));
}

void ChromeActiveProcesses::MergeFrom(const ChromeActiveProcesses& from) {
  ChromeActiveProcesses* const _this = this;
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.ChromeActiveProcesses)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.pid_.MergeFrom(from._impl_.pid_);
  _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void ChromeActiveProcesses::CopyFrom(const ChromeActiveProcesses& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.ChromeActiveProcesses)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ChromeActiveProcesses::IsInitialized() const {
  return true;
}

void ChromeActiveProcesses::InternalSwap(ChromeActiveProcesses* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.pid_.InternalSwap(&other->_impl_.pid_);
}

std::string ChromeActiveProcesses::GetTypeName() const {
  return "perfetto.protos.ChromeActiveProcesses";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::perfetto::protos::ChromeActiveProcesses*
Arena::CreateMaybeMessage< ::perfetto::protos::ChromeActiveProcesses >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::ChromeActiveProcesses >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
