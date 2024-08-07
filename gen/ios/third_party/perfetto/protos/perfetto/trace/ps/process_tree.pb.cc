// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/ps/process_tree.proto

#include "protos/perfetto/trace/ps/process_tree.pb.h"

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
PROTOBUF_CONSTEXPR ProcessTree_Thread::ProcessTree_Thread(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.nstid_)*/{}
  , /*decltype(_impl_.name_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.tid_)*/0
  , /*decltype(_impl_.tgid_)*/0} {}
struct ProcessTree_ThreadDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ProcessTree_ThreadDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ProcessTree_ThreadDefaultTypeInternal() {}
  union {
    ProcessTree_Thread _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ProcessTree_ThreadDefaultTypeInternal _ProcessTree_Thread_default_instance_;
PROTOBUF_CONSTEXPR ProcessTree_Process::ProcessTree_Process(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.cmdline_)*/{}
  , /*decltype(_impl_.nspid_)*/{}
  , /*decltype(_impl_.pid_)*/0
  , /*decltype(_impl_.ppid_)*/0
  , /*decltype(_impl_.process_start_from_boot_)*/uint64_t{0u}
  , /*decltype(_impl_.uid_)*/0} {}
struct ProcessTree_ProcessDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ProcessTree_ProcessDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ProcessTree_ProcessDefaultTypeInternal() {}
  union {
    ProcessTree_Process _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ProcessTree_ProcessDefaultTypeInternal _ProcessTree_Process_default_instance_;
PROTOBUF_CONSTEXPR ProcessTree::ProcessTree(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.processes_)*/{}
  , /*decltype(_impl_.threads_)*/{}
  , /*decltype(_impl_.collection_end_timestamp_)*/uint64_t{0u}} {}
struct ProcessTreeDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ProcessTreeDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ProcessTreeDefaultTypeInternal() {}
  union {
    ProcessTree _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ProcessTreeDefaultTypeInternal _ProcessTree_default_instance_;
}  // namespace protos
}  // namespace perfetto
namespace perfetto {
namespace protos {

// ===================================================================

class ProcessTree_Thread::_Internal {
 public:
  using HasBits = decltype(std::declval<ProcessTree_Thread>()._impl_._has_bits_);
  static void set_has_tid(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_tgid(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_name(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

ProcessTree_Thread::ProcessTree_Thread(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.ProcessTree.Thread)
}
ProcessTree_Thread::ProcessTree_Thread(const ProcessTree_Thread& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite() {
  ProcessTree_Thread* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.nstid_){from._impl_.nstid_}
    , decltype(_impl_.name_){}
    , decltype(_impl_.tid_){}
    , decltype(_impl_.tgid_){}};

  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  _impl_.name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_name()) {
    _this->_impl_.name_.Set(from._internal_name(), 
      _this->GetArenaForAllocation());
  }
  ::memcpy(&_impl_.tid_, &from._impl_.tid_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.tgid_) -
    reinterpret_cast<char*>(&_impl_.tid_)) + sizeof(_impl_.tgid_));
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.ProcessTree.Thread)
}

inline void ProcessTree_Thread::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.nstid_){arena}
    , decltype(_impl_.name_){}
    , decltype(_impl_.tid_){0}
    , decltype(_impl_.tgid_){0}
  };
  _impl_.name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

ProcessTree_Thread::~ProcessTree_Thread() {
  // @@protoc_insertion_point(destructor:perfetto.protos.ProcessTree.Thread)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ProcessTree_Thread::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.nstid_.~RepeatedField();
  _impl_.name_.Destroy();
}

void ProcessTree_Thread::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void ProcessTree_Thread::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.ProcessTree.Thread)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.nstid_.Clear();
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    _impl_.name_.ClearNonDefaultToEmpty();
  }
  if (cached_has_bits & 0x00000006u) {
    ::memset(&_impl_.tid_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&_impl_.tgid_) -
        reinterpret_cast<char*>(&_impl_.tid_)) + sizeof(_impl_.tgid_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* ProcessTree_Thread::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional int32 tid = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_tid(&has_bits);
          _impl_.tid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional string name = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional int32 tgid = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _Internal::set_has_tgid(&has_bits);
          _impl_.tgid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated int32 nstid = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          ptr -= 1;
          do {
            ptr += 1;
            _internal_add_nstid(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr));
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<32>(ptr));
        } else if (static_cast<uint8_t>(tag) == 34) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedInt32Parser(_internal_mutable_nstid(), ptr, ctx);
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

uint8_t* ProcessTree_Thread::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.ProcessTree.Thread)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional int32 tid = 1;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(1, this->_internal_tid(), target);
  }

  // optional string name = 2;
  if (cached_has_bits & 0x00000001u) {
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_name(), target);
  }

  // optional int32 tgid = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(3, this->_internal_tgid(), target);
  }

  // repeated int32 nstid = 4;
  for (int i = 0, n = this->_internal_nstid_size(); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(4, this->_internal_nstid(i), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.ProcessTree.Thread)
  return target;
}

size_t ProcessTree_Thread::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.ProcessTree.Thread)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated int32 nstid = 4;
  {
    size_t data_size = ::_pbi::WireFormatLite::
      Int32Size(this->_impl_.nstid_);
    total_size += 1 *
                  ::_pbi::FromIntSize(this->_internal_nstid_size());
    total_size += data_size;
  }

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    // optional string name = 2;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_name());
    }

    // optional int32 tid = 1;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_tid());
    }

    // optional int32 tgid = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_tgid());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ProcessTree_Thread::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const ProcessTree_Thread*>(
      &from));
}

void ProcessTree_Thread::MergeFrom(const ProcessTree_Thread& from) {
  ProcessTree_Thread* const _this = this;
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.ProcessTree.Thread)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.nstid_.MergeFrom(from._impl_.nstid_);
  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_set_name(from._internal_name());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.tid_ = from._impl_.tid_;
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_impl_.tgid_ = from._impl_.tgid_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void ProcessTree_Thread::CopyFrom(const ProcessTree_Thread& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.ProcessTree.Thread)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ProcessTree_Thread::IsInitialized() const {
  return true;
}

void ProcessTree_Thread::InternalSwap(ProcessTree_Thread* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  _impl_.nstid_.InternalSwap(&other->_impl_.nstid_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.name_, lhs_arena,
      &other->_impl_.name_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(ProcessTree_Thread, _impl_.tgid_)
      + sizeof(ProcessTree_Thread::_impl_.tgid_)
      - PROTOBUF_FIELD_OFFSET(ProcessTree_Thread, _impl_.tid_)>(
          reinterpret_cast<char*>(&_impl_.tid_),
          reinterpret_cast<char*>(&other->_impl_.tid_));
}

std::string ProcessTree_Thread::GetTypeName() const {
  return "perfetto.protos.ProcessTree.Thread";
}


// ===================================================================

class ProcessTree_Process::_Internal {
 public:
  using HasBits = decltype(std::declval<ProcessTree_Process>()._impl_._has_bits_);
  static void set_has_pid(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_ppid(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_uid(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_process_start_from_boot(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
};

ProcessTree_Process::ProcessTree_Process(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.ProcessTree.Process)
}
ProcessTree_Process::ProcessTree_Process(const ProcessTree_Process& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite() {
  ProcessTree_Process* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.cmdline_){from._impl_.cmdline_}
    , decltype(_impl_.nspid_){from._impl_.nspid_}
    , decltype(_impl_.pid_){}
    , decltype(_impl_.ppid_){}
    , decltype(_impl_.process_start_from_boot_){}
    , decltype(_impl_.uid_){}};

  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  ::memcpy(&_impl_.pid_, &from._impl_.pid_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.uid_) -
    reinterpret_cast<char*>(&_impl_.pid_)) + sizeof(_impl_.uid_));
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.ProcessTree.Process)
}

inline void ProcessTree_Process::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.cmdline_){arena}
    , decltype(_impl_.nspid_){arena}
    , decltype(_impl_.pid_){0}
    , decltype(_impl_.ppid_){0}
    , decltype(_impl_.process_start_from_boot_){uint64_t{0u}}
    , decltype(_impl_.uid_){0}
  };
}

ProcessTree_Process::~ProcessTree_Process() {
  // @@protoc_insertion_point(destructor:perfetto.protos.ProcessTree.Process)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ProcessTree_Process::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.cmdline_.~RepeatedPtrField();
  _impl_.nspid_.~RepeatedField();
}

void ProcessTree_Process::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void ProcessTree_Process::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.ProcessTree.Process)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.cmdline_.Clear();
  _impl_.nspid_.Clear();
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    ::memset(&_impl_.pid_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&_impl_.uid_) -
        reinterpret_cast<char*>(&_impl_.pid_)) + sizeof(_impl_.uid_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* ProcessTree_Process::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
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
      // optional int32 ppid = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_ppid(&has_bits);
          _impl_.ppid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated string cmdline = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_cmdline();
            ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<26>(ptr));
        } else
          goto handle_unusual;
        continue;
      // optional int32 uid = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 40)) {
          _Internal::set_has_uid(&has_bits);
          _impl_.uid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated int32 nspid = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 48)) {
          ptr -= 1;
          do {
            ptr += 1;
            _internal_add_nspid(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr));
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<48>(ptr));
        } else if (static_cast<uint8_t>(tag) == 50) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedInt32Parser(_internal_mutable_nspid(), ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint64 process_start_from_boot = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 56)) {
          _Internal::set_has_process_start_from_boot(&has_bits);
          _impl_.process_start_from_boot_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

uint8_t* ProcessTree_Process::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.ProcessTree.Process)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional int32 pid = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(1, this->_internal_pid(), target);
  }

  // optional int32 ppid = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(2, this->_internal_ppid(), target);
  }

  // repeated string cmdline = 3;
  for (int i = 0, n = this->_internal_cmdline_size(); i < n; i++) {
    const auto& s = this->_internal_cmdline(i);
    target = stream->WriteString(3, s, target);
  }

  // optional int32 uid = 5;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(5, this->_internal_uid(), target);
  }

  // repeated int32 nspid = 6;
  for (int i = 0, n = this->_internal_nspid_size(); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(6, this->_internal_nspid(i), target);
  }

  // optional uint64 process_start_from_boot = 7;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(7, this->_internal_process_start_from_boot(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.ProcessTree.Process)
  return target;
}

size_t ProcessTree_Process::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.ProcessTree.Process)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string cmdline = 3;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(_impl_.cmdline_.size());
  for (int i = 0, n = _impl_.cmdline_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      _impl_.cmdline_.Get(i));
  }

  // repeated int32 nspid = 6;
  {
    size_t data_size = ::_pbi::WireFormatLite::
      Int32Size(this->_impl_.nspid_);
    total_size += 1 *
                  ::_pbi::FromIntSize(this->_internal_nspid_size());
    total_size += data_size;
  }

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    // optional int32 pid = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_pid());
    }

    // optional int32 ppid = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_ppid());
    }

    // optional uint64 process_start_from_boot = 7;
    if (cached_has_bits & 0x00000004u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(this->_internal_process_start_from_boot());
    }

    // optional int32 uid = 5;
    if (cached_has_bits & 0x00000008u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_uid());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ProcessTree_Process::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const ProcessTree_Process*>(
      &from));
}

void ProcessTree_Process::MergeFrom(const ProcessTree_Process& from) {
  ProcessTree_Process* const _this = this;
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.ProcessTree.Process)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.cmdline_.MergeFrom(from._impl_.cmdline_);
  _this->_impl_.nspid_.MergeFrom(from._impl_.nspid_);
  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      _this->_impl_.pid_ = from._impl_.pid_;
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.ppid_ = from._impl_.ppid_;
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_impl_.process_start_from_boot_ = from._impl_.process_start_from_boot_;
    }
    if (cached_has_bits & 0x00000008u) {
      _this->_impl_.uid_ = from._impl_.uid_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void ProcessTree_Process::CopyFrom(const ProcessTree_Process& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.ProcessTree.Process)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ProcessTree_Process::IsInitialized() const {
  return true;
}

void ProcessTree_Process::InternalSwap(ProcessTree_Process* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  _impl_.cmdline_.InternalSwap(&other->_impl_.cmdline_);
  _impl_.nspid_.InternalSwap(&other->_impl_.nspid_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(ProcessTree_Process, _impl_.uid_)
      + sizeof(ProcessTree_Process::_impl_.uid_)
      - PROTOBUF_FIELD_OFFSET(ProcessTree_Process, _impl_.pid_)>(
          reinterpret_cast<char*>(&_impl_.pid_),
          reinterpret_cast<char*>(&other->_impl_.pid_));
}

std::string ProcessTree_Process::GetTypeName() const {
  return "perfetto.protos.ProcessTree.Process";
}


// ===================================================================

class ProcessTree::_Internal {
 public:
  using HasBits = decltype(std::declval<ProcessTree>()._impl_._has_bits_);
  static void set_has_collection_end_timestamp(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

ProcessTree::ProcessTree(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.ProcessTree)
}
ProcessTree::ProcessTree(const ProcessTree& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite() {
  ProcessTree* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.processes_){from._impl_.processes_}
    , decltype(_impl_.threads_){from._impl_.threads_}
    , decltype(_impl_.collection_end_timestamp_){}};

  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  _this->_impl_.collection_end_timestamp_ = from._impl_.collection_end_timestamp_;
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.ProcessTree)
}

inline void ProcessTree::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.processes_){arena}
    , decltype(_impl_.threads_){arena}
    , decltype(_impl_.collection_end_timestamp_){uint64_t{0u}}
  };
}

ProcessTree::~ProcessTree() {
  // @@protoc_insertion_point(destructor:perfetto.protos.ProcessTree)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ProcessTree::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.processes_.~RepeatedPtrField();
  _impl_.threads_.~RepeatedPtrField();
}

void ProcessTree::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void ProcessTree::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.ProcessTree)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.processes_.Clear();
  _impl_.threads_.Clear();
  _impl_.collection_end_timestamp_ = uint64_t{0u};
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* ProcessTree::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .perfetto.protos.ProcessTree.Process processes = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_processes(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else
          goto handle_unusual;
        continue;
      // repeated .perfetto.protos.ProcessTree.Thread threads = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_threads(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else
          goto handle_unusual;
        continue;
      // optional uint64 collection_end_timestamp = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _Internal::set_has_collection_end_timestamp(&has_bits);
          _impl_.collection_end_timestamp_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

uint8_t* ProcessTree::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.ProcessTree)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .perfetto.protos.ProcessTree.Process processes = 1;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_processes_size()); i < n; i++) {
    const auto& repfield = this->_internal_processes(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(1, repfield, repfield.GetCachedSize(), target, stream);
  }

  // repeated .perfetto.protos.ProcessTree.Thread threads = 2;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_threads_size()); i < n; i++) {
    const auto& repfield = this->_internal_threads(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(2, repfield, repfield.GetCachedSize(), target, stream);
  }

  cached_has_bits = _impl_._has_bits_[0];
  // optional uint64 collection_end_timestamp = 3;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(3, this->_internal_collection_end_timestamp(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.ProcessTree)
  return target;
}

size_t ProcessTree::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.ProcessTree)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .perfetto.protos.ProcessTree.Process processes = 1;
  total_size += 1UL * this->_internal_processes_size();
  for (const auto& msg : this->_impl_.processes_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // repeated .perfetto.protos.ProcessTree.Thread threads = 2;
  total_size += 1UL * this->_internal_threads_size();
  for (const auto& msg : this->_impl_.threads_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // optional uint64 collection_end_timestamp = 3;
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(this->_internal_collection_end_timestamp());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ProcessTree::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const ProcessTree*>(
      &from));
}

void ProcessTree::MergeFrom(const ProcessTree& from) {
  ProcessTree* const _this = this;
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.ProcessTree)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.processes_.MergeFrom(from._impl_.processes_);
  _this->_impl_.threads_.MergeFrom(from._impl_.threads_);
  if (from._internal_has_collection_end_timestamp()) {
    _this->_internal_set_collection_end_timestamp(from._internal_collection_end_timestamp());
  }
  _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void ProcessTree::CopyFrom(const ProcessTree& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.ProcessTree)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ProcessTree::IsInitialized() const {
  return true;
}

void ProcessTree::InternalSwap(ProcessTree* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  _impl_.processes_.InternalSwap(&other->_impl_.processes_);
  _impl_.threads_.InternalSwap(&other->_impl_.threads_);
  swap(_impl_.collection_end_timestamp_, other->_impl_.collection_end_timestamp_);
}

std::string ProcessTree::GetTypeName() const {
  return "perfetto.protos.ProcessTree";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::perfetto::protos::ProcessTree_Thread*
Arena::CreateMaybeMessage< ::perfetto::protos::ProcessTree_Thread >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::ProcessTree_Thread >(arena);
}
template<> PROTOBUF_NOINLINE ::perfetto::protos::ProcessTree_Process*
Arena::CreateMaybeMessage< ::perfetto::protos::ProcessTree_Process >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::ProcessTree_Process >(arena);
}
template<> PROTOBUF_NOINLINE ::perfetto::protos::ProcessTree*
Arena::CreateMaybeMessage< ::perfetto::protos::ProcessTree >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::ProcessTree >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
