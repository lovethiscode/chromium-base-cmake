// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/test_event.proto

#include "protos/perfetto/trace/test_event.pb.h"

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
PROTOBUF_CONSTEXPR TestEvent_TestPayload::TestEvent_TestPayload(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.str_)*/{}
  , /*decltype(_impl_.nested_)*/{}
  , /*decltype(_impl_.repeated_ints_)*/{}
  , /*decltype(_impl_.debug_annotations_)*/{}
  , /*decltype(_impl_.single_string_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.remaining_nesting_depth_)*/0u
  , /*decltype(_impl_.single_int_)*/0} {}
struct TestEvent_TestPayloadDefaultTypeInternal {
  PROTOBUF_CONSTEXPR TestEvent_TestPayloadDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~TestEvent_TestPayloadDefaultTypeInternal() {}
  union {
    TestEvent_TestPayload _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 TestEvent_TestPayloadDefaultTypeInternal _TestEvent_TestPayload_default_instance_;
PROTOBUF_CONSTEXPR TestEvent::TestEvent(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.str_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.payload_)*/nullptr
  , /*decltype(_impl_.counter_)*/uint64_t{0u}
  , /*decltype(_impl_.seq_value_)*/0u
  , /*decltype(_impl_.is_last_)*/false} {}
struct TestEventDefaultTypeInternal {
  PROTOBUF_CONSTEXPR TestEventDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~TestEventDefaultTypeInternal() {}
  union {
    TestEvent _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 TestEventDefaultTypeInternal _TestEvent_default_instance_;
}  // namespace protos
}  // namespace perfetto
namespace perfetto {
namespace protos {

// ===================================================================

class TestEvent_TestPayload::_Internal {
 public:
  using HasBits = decltype(std::declval<TestEvent_TestPayload>()._impl_._has_bits_);
  static void set_has_single_string(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_single_int(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_remaining_nesting_depth(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

void TestEvent_TestPayload::clear_debug_annotations() {
  _impl_.debug_annotations_.Clear();
}
TestEvent_TestPayload::TestEvent_TestPayload(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.TestEvent.TestPayload)
}
TestEvent_TestPayload::TestEvent_TestPayload(const TestEvent_TestPayload& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite() {
  TestEvent_TestPayload* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.str_){from._impl_.str_}
    , decltype(_impl_.nested_){from._impl_.nested_}
    , decltype(_impl_.repeated_ints_){from._impl_.repeated_ints_}
    , decltype(_impl_.debug_annotations_){from._impl_.debug_annotations_}
    , decltype(_impl_.single_string_){}
    , decltype(_impl_.remaining_nesting_depth_){}
    , decltype(_impl_.single_int_){}};

  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  _impl_.single_string_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.single_string_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_single_string()) {
    _this->_impl_.single_string_.Set(from._internal_single_string(), 
      _this->GetArenaForAllocation());
  }
  ::memcpy(&_impl_.remaining_nesting_depth_, &from._impl_.remaining_nesting_depth_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.single_int_) -
    reinterpret_cast<char*>(&_impl_.remaining_nesting_depth_)) + sizeof(_impl_.single_int_));
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.TestEvent.TestPayload)
}

inline void TestEvent_TestPayload::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.str_){arena}
    , decltype(_impl_.nested_){arena}
    , decltype(_impl_.repeated_ints_){arena}
    , decltype(_impl_.debug_annotations_){arena}
    , decltype(_impl_.single_string_){}
    , decltype(_impl_.remaining_nesting_depth_){0u}
    , decltype(_impl_.single_int_){0}
  };
  _impl_.single_string_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.single_string_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

TestEvent_TestPayload::~TestEvent_TestPayload() {
  // @@protoc_insertion_point(destructor:perfetto.protos.TestEvent.TestPayload)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void TestEvent_TestPayload::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.str_.~RepeatedPtrField();
  _impl_.nested_.~RepeatedPtrField();
  _impl_.repeated_ints_.~RepeatedField();
  _impl_.debug_annotations_.~RepeatedPtrField();
  _impl_.single_string_.Destroy();
}

void TestEvent_TestPayload::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void TestEvent_TestPayload::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.TestEvent.TestPayload)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.str_.Clear();
  _impl_.nested_.Clear();
  _impl_.repeated_ints_.Clear();
  _impl_.debug_annotations_.Clear();
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    _impl_.single_string_.ClearNonDefaultToEmpty();
  }
  if (cached_has_bits & 0x00000006u) {
    ::memset(&_impl_.remaining_nesting_depth_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&_impl_.single_int_) -
        reinterpret_cast<char*>(&_impl_.remaining_nesting_depth_)) + sizeof(_impl_.single_int_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* TestEvent_TestPayload::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated string str = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_str();
            ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else
          goto handle_unusual;
        continue;
      // repeated .perfetto.protos.TestEvent.TestPayload nested = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_nested(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else
          goto handle_unusual;
        continue;
      // optional uint32 remaining_nesting_depth = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _Internal::set_has_remaining_nesting_depth(&has_bits);
          _impl_.remaining_nesting_depth_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional string single_string = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          auto str = _internal_mutable_single_string();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional int32 single_int = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 40)) {
          _Internal::set_has_single_int(&has_bits);
          _impl_.single_int_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated int32 repeated_ints = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 48)) {
          ptr -= 1;
          do {
            ptr += 1;
            _internal_add_repeated_ints(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr));
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<48>(ptr));
        } else if (static_cast<uint8_t>(tag) == 50) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedInt32Parser(_internal_mutable_repeated_ints(), ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated .perfetto.protos.DebugAnnotation debug_annotations = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 58)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_debug_annotations(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<58>(ptr));
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

uint8_t* TestEvent_TestPayload::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.TestEvent.TestPayload)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated string str = 1;
  for (int i = 0, n = this->_internal_str_size(); i < n; i++) {
    const auto& s = this->_internal_str(i);
    target = stream->WriteString(1, s, target);
  }

  // repeated .perfetto.protos.TestEvent.TestPayload nested = 2;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_nested_size()); i < n; i++) {
    const auto& repfield = this->_internal_nested(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(2, repfield, repfield.GetCachedSize(), target, stream);
  }

  cached_has_bits = _impl_._has_bits_[0];
  // optional uint32 remaining_nesting_depth = 3;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(3, this->_internal_remaining_nesting_depth(), target);
  }

  // optional string single_string = 4;
  if (cached_has_bits & 0x00000001u) {
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_single_string(), target);
  }

  // optional int32 single_int = 5;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(5, this->_internal_single_int(), target);
  }

  // repeated int32 repeated_ints = 6;
  for (int i = 0, n = this->_internal_repeated_ints_size(); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(6, this->_internal_repeated_ints(i), target);
  }

  // repeated .perfetto.protos.DebugAnnotation debug_annotations = 7;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_debug_annotations_size()); i < n; i++) {
    const auto& repfield = this->_internal_debug_annotations(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(7, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.TestEvent.TestPayload)
  return target;
}

size_t TestEvent_TestPayload::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.TestEvent.TestPayload)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string str = 1;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(_impl_.str_.size());
  for (int i = 0, n = _impl_.str_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      _impl_.str_.Get(i));
  }

  // repeated .perfetto.protos.TestEvent.TestPayload nested = 2;
  total_size += 1UL * this->_internal_nested_size();
  for (const auto& msg : this->_impl_.nested_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // repeated int32 repeated_ints = 6;
  {
    size_t data_size = ::_pbi::WireFormatLite::
      Int32Size(this->_impl_.repeated_ints_);
    total_size += 1 *
                  ::_pbi::FromIntSize(this->_internal_repeated_ints_size());
    total_size += data_size;
  }

  // repeated .perfetto.protos.DebugAnnotation debug_annotations = 7;
  total_size += 1UL * this->_internal_debug_annotations_size();
  for (const auto& msg : this->_impl_.debug_annotations_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    // optional string single_string = 4;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_single_string());
    }

    // optional uint32 remaining_nesting_depth = 3;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_remaining_nesting_depth());
    }

    // optional int32 single_int = 5;
    if (cached_has_bits & 0x00000004u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_single_int());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void TestEvent_TestPayload::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const TestEvent_TestPayload*>(
      &from));
}

void TestEvent_TestPayload::MergeFrom(const TestEvent_TestPayload& from) {
  TestEvent_TestPayload* const _this = this;
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.TestEvent.TestPayload)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.str_.MergeFrom(from._impl_.str_);
  _this->_impl_.nested_.MergeFrom(from._impl_.nested_);
  _this->_impl_.repeated_ints_.MergeFrom(from._impl_.repeated_ints_);
  _this->_impl_.debug_annotations_.MergeFrom(from._impl_.debug_annotations_);
  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_set_single_string(from._internal_single_string());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.remaining_nesting_depth_ = from._impl_.remaining_nesting_depth_;
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_impl_.single_int_ = from._impl_.single_int_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void TestEvent_TestPayload::CopyFrom(const TestEvent_TestPayload& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.TestEvent.TestPayload)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TestEvent_TestPayload::IsInitialized() const {
  return true;
}

void TestEvent_TestPayload::InternalSwap(TestEvent_TestPayload* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  _impl_.str_.InternalSwap(&other->_impl_.str_);
  _impl_.nested_.InternalSwap(&other->_impl_.nested_);
  _impl_.repeated_ints_.InternalSwap(&other->_impl_.repeated_ints_);
  _impl_.debug_annotations_.InternalSwap(&other->_impl_.debug_annotations_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.single_string_, lhs_arena,
      &other->_impl_.single_string_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(TestEvent_TestPayload, _impl_.single_int_)
      + sizeof(TestEvent_TestPayload::_impl_.single_int_)
      - PROTOBUF_FIELD_OFFSET(TestEvent_TestPayload, _impl_.remaining_nesting_depth_)>(
          reinterpret_cast<char*>(&_impl_.remaining_nesting_depth_),
          reinterpret_cast<char*>(&other->_impl_.remaining_nesting_depth_));
}

std::string TestEvent_TestPayload::GetTypeName() const {
  return "perfetto.protos.TestEvent.TestPayload";
}


// ===================================================================

class TestEvent::_Internal {
 public:
  using HasBits = decltype(std::declval<TestEvent>()._impl_._has_bits_);
  static void set_has_str(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_seq_value(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_counter(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_is_last(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static const ::perfetto::protos::TestEvent_TestPayload& payload(const TestEvent* msg);
  static void set_has_payload(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

const ::perfetto::protos::TestEvent_TestPayload&
TestEvent::_Internal::payload(const TestEvent* msg) {
  return *msg->_impl_.payload_;
}
TestEvent::TestEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.TestEvent)
}
TestEvent::TestEvent(const TestEvent& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite() {
  TestEvent* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.str_){}
    , decltype(_impl_.payload_){nullptr}
    , decltype(_impl_.counter_){}
    , decltype(_impl_.seq_value_){}
    , decltype(_impl_.is_last_){}};

  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  _impl_.str_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.str_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_str()) {
    _this->_impl_.str_.Set(from._internal_str(), 
      _this->GetArenaForAllocation());
  }
  if (from._internal_has_payload()) {
    _this->_impl_.payload_ = new ::perfetto::protos::TestEvent_TestPayload(*from._impl_.payload_);
  }
  ::memcpy(&_impl_.counter_, &from._impl_.counter_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.is_last_) -
    reinterpret_cast<char*>(&_impl_.counter_)) + sizeof(_impl_.is_last_));
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.TestEvent)
}

inline void TestEvent::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.str_){}
    , decltype(_impl_.payload_){nullptr}
    , decltype(_impl_.counter_){uint64_t{0u}}
    , decltype(_impl_.seq_value_){0u}
    , decltype(_impl_.is_last_){false}
  };
  _impl_.str_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.str_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

TestEvent::~TestEvent() {
  // @@protoc_insertion_point(destructor:perfetto.protos.TestEvent)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void TestEvent::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.str_.Destroy();
  if (this != internal_default_instance()) delete _impl_.payload_;
}

void TestEvent::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void TestEvent::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.TestEvent)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _impl_.str_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(_impl_.payload_ != nullptr);
      _impl_.payload_->Clear();
    }
  }
  if (cached_has_bits & 0x0000001cu) {
    ::memset(&_impl_.counter_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&_impl_.is_last_) -
        reinterpret_cast<char*>(&_impl_.counter_)) + sizeof(_impl_.is_last_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* TestEvent::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional string str = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_str();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint32 seq_value = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_seq_value(&has_bits);
          _impl_.seq_value_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint64 counter = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _Internal::set_has_counter(&has_bits);
          _impl_.counter_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional bool is_last = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          _Internal::set_has_is_last(&has_bits);
          _impl_.is_last_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional .perfetto.protos.TestEvent.TestPayload payload = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 42)) {
          ptr = ctx->ParseMessage(_internal_mutable_payload(), ptr);
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

uint8_t* TestEvent::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.TestEvent)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional string str = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_str(), target);
  }

  // optional uint32 seq_value = 2;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(2, this->_internal_seq_value(), target);
  }

  // optional uint64 counter = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(3, this->_internal_counter(), target);
  }

  // optional bool is_last = 4;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(4, this->_internal_is_last(), target);
  }

  // optional .perfetto.protos.TestEvent.TestPayload payload = 5;
  if (cached_has_bits & 0x00000002u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(5, _Internal::payload(this),
        _Internal::payload(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.TestEvent)
  return target;
}

size_t TestEvent::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.TestEvent)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    // optional string str = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_str());
    }

    // optional .perfetto.protos.TestEvent.TestPayload payload = 5;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *_impl_.payload_);
    }

    // optional uint64 counter = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(this->_internal_counter());
    }

    // optional uint32 seq_value = 2;
    if (cached_has_bits & 0x00000008u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_seq_value());
    }

    // optional bool is_last = 4;
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

void TestEvent::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const TestEvent*>(
      &from));
}

void TestEvent::MergeFrom(const TestEvent& from) {
  TestEvent* const _this = this;
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.TestEvent)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_set_str(from._internal_str());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_internal_mutable_payload()->::perfetto::protos::TestEvent_TestPayload::MergeFrom(
          from._internal_payload());
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_impl_.counter_ = from._impl_.counter_;
    }
    if (cached_has_bits & 0x00000008u) {
      _this->_impl_.seq_value_ = from._impl_.seq_value_;
    }
    if (cached_has_bits & 0x00000010u) {
      _this->_impl_.is_last_ = from._impl_.is_last_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void TestEvent::CopyFrom(const TestEvent& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.TestEvent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TestEvent::IsInitialized() const {
  return true;
}

void TestEvent::InternalSwap(TestEvent* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.str_, lhs_arena,
      &other->_impl_.str_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(TestEvent, _impl_.is_last_)
      + sizeof(TestEvent::_impl_.is_last_)
      - PROTOBUF_FIELD_OFFSET(TestEvent, _impl_.payload_)>(
          reinterpret_cast<char*>(&_impl_.payload_),
          reinterpret_cast<char*>(&other->_impl_.payload_));
}

std::string TestEvent::GetTypeName() const {
  return "perfetto.protos.TestEvent";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::perfetto::protos::TestEvent_TestPayload*
Arena::CreateMaybeMessage< ::perfetto::protos::TestEvent_TestPayload >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::TestEvent_TestPayload >(arena);
}
template<> PROTOBUF_NOINLINE ::perfetto::protos::TestEvent*
Arena::CreateMaybeMessage< ::perfetto::protos::TestEvent >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::TestEvent >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
