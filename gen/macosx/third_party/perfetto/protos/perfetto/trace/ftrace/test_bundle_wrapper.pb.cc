// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/ftrace/test_bundle_wrapper.proto

#include "protos/perfetto/trace/ftrace/test_bundle_wrapper.pb.h"

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
PROTOBUF_CONSTEXPR TestBundleWrapper::TestBundleWrapper(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.bundle_)*/{}
  , /*decltype(_impl_.before_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.after_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}} {}
struct TestBundleWrapperDefaultTypeInternal {
  PROTOBUF_CONSTEXPR TestBundleWrapperDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~TestBundleWrapperDefaultTypeInternal() {}
  union {
    TestBundleWrapper _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 TestBundleWrapperDefaultTypeInternal _TestBundleWrapper_default_instance_;
}  // namespace protos
}  // namespace perfetto
namespace perfetto {
namespace protos {

// ===================================================================

class TestBundleWrapper::_Internal {
 public:
  using HasBits = decltype(std::declval<TestBundleWrapper>()._impl_._has_bits_);
  static void set_has_before(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_after(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

void TestBundleWrapper::clear_bundle() {
  _impl_.bundle_.Clear();
}
TestBundleWrapper::TestBundleWrapper(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.TestBundleWrapper)
}
TestBundleWrapper::TestBundleWrapper(const TestBundleWrapper& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite() {
  TestBundleWrapper* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.bundle_){from._impl_.bundle_}
    , decltype(_impl_.before_){}
    , decltype(_impl_.after_){}};

  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  _impl_.before_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.before_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_before()) {
    _this->_impl_.before_.Set(from._internal_before(), 
      _this->GetArenaForAllocation());
  }
  _impl_.after_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.after_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_after()) {
    _this->_impl_.after_.Set(from._internal_after(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.TestBundleWrapper)
}

inline void TestBundleWrapper::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.bundle_){arena}
    , decltype(_impl_.before_){}
    , decltype(_impl_.after_){}
  };
  _impl_.before_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.before_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.after_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.after_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

TestBundleWrapper::~TestBundleWrapper() {
  // @@protoc_insertion_point(destructor:perfetto.protos.TestBundleWrapper)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void TestBundleWrapper::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.bundle_.~RepeatedPtrField();
  _impl_.before_.Destroy();
  _impl_.after_.Destroy();
}

void TestBundleWrapper::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void TestBundleWrapper::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.TestBundleWrapper)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.bundle_.Clear();
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _impl_.before_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      _impl_.after_.ClearNonDefaultToEmpty();
    }
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* TestBundleWrapper::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional string before = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_before();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated .perfetto.protos.FtraceEventBundle bundle = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_bundle(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else
          goto handle_unusual;
        continue;
      // optional string after = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_after();
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

uint8_t* TestBundleWrapper::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.TestBundleWrapper)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional string before = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_before(), target);
  }

  // repeated .perfetto.protos.FtraceEventBundle bundle = 2;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_bundle_size()); i < n; i++) {
    const auto& repfield = this->_internal_bundle(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(2, repfield, repfield.GetCachedSize(), target, stream);
  }

  // optional string after = 3;
  if (cached_has_bits & 0x00000002u) {
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_after(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.TestBundleWrapper)
  return target;
}

size_t TestBundleWrapper::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.TestBundleWrapper)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .perfetto.protos.FtraceEventBundle bundle = 2;
  total_size += 1UL * this->_internal_bundle_size();
  for (const auto& msg : this->_impl_.bundle_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional string before = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_before());
    }

    // optional string after = 3;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_after());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void TestBundleWrapper::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const TestBundleWrapper*>(
      &from));
}

void TestBundleWrapper::MergeFrom(const TestBundleWrapper& from) {
  TestBundleWrapper* const _this = this;
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.TestBundleWrapper)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.bundle_.MergeFrom(from._impl_.bundle_);
  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_set_before(from._internal_before());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_internal_set_after(from._internal_after());
    }
  }
  _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void TestBundleWrapper::CopyFrom(const TestBundleWrapper& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.TestBundleWrapper)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TestBundleWrapper::IsInitialized() const {
  return true;
}

void TestBundleWrapper::InternalSwap(TestBundleWrapper* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  _impl_.bundle_.InternalSwap(&other->_impl_.bundle_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.before_, lhs_arena,
      &other->_impl_.before_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.after_, lhs_arena,
      &other->_impl_.after_, rhs_arena
  );
}

std::string TestBundleWrapper::GetTypeName() const {
  return "perfetto.protos.TestBundleWrapper";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::perfetto::protos::TestBundleWrapper*
Arena::CreateMaybeMessage< ::perfetto::protos::TestBundleWrapper >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::TestBundleWrapper >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
