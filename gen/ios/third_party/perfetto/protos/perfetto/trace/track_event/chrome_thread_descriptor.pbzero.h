// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_TRACK_EVENT_CHROME_THREAD_DESCRIPTOR_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_TRACK_EVENT_CHROME_THREAD_DESCRIPTOR_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/protozero/field_writer.h"
#include "perfetto/protozero/message.h"
#include "perfetto/protozero/packed_repeated_fields.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/proto_utils.h"

namespace perfetto {
namespace protos {
namespace pbzero {
namespace perfetto_pbzero_enum_ChromeThreadDescriptor {
enum ThreadType : int32_t;
}  // namespace perfetto_pbzero_enum_ChromeThreadDescriptor
using ChromeThreadDescriptor_ThreadType = perfetto_pbzero_enum_ChromeThreadDescriptor::ThreadType;
} // Namespace pbzero.
} // Namespace protos.
} // Namespace perfetto.

namespace perfetto {
namespace protos {
namespace pbzero {

namespace perfetto_pbzero_enum_ChromeThreadDescriptor {
enum ThreadType : int32_t {
  THREAD_UNSPECIFIED = 0,
  THREAD_MAIN = 1,
  THREAD_IO = 2,
  THREAD_POOL_BG_WORKER = 3,
  THREAD_POOL_FG_WORKER = 4,
  THREAD_POOL_FG_BLOCKING = 5,
  THREAD_POOL_BG_BLOCKING = 6,
  THREAD_POOL_SERVICE = 7,
  THREAD_COMPOSITOR = 8,
  THREAD_VIZ_COMPOSITOR = 9,
  THREAD_COMPOSITOR_WORKER = 10,
  THREAD_SERVICE_WORKER = 11,
  THREAD_NETWORK_SERVICE = 12,
  THREAD_CHILD_IO = 13,
  THREAD_BROWSER_IO = 14,
  THREAD_BROWSER_MAIN = 15,
  THREAD_RENDERER_MAIN = 16,
  THREAD_UTILITY_MAIN = 17,
  THREAD_GPU_MAIN = 18,
  THREAD_CACHE_BLOCKFILE = 19,
  THREAD_MEDIA = 20,
  THREAD_AUDIO_OUTPUTDEVICE = 21,
  THREAD_AUDIO_INPUTDEVICE = 22,
  THREAD_GPU_MEMORY = 23,
  THREAD_GPU_VSYNC = 24,
  THREAD_DXA_VIDEODECODER = 25,
  THREAD_BROWSER_WATCHDOG = 26,
  THREAD_WEBRTC_NETWORK = 27,
  THREAD_WINDOW_OWNER = 28,
  THREAD_WEBRTC_SIGNALING = 29,
  THREAD_WEBRTC_WORKER = 30,
  THREAD_PPAPI_MAIN = 31,
  THREAD_GPU_WATCHDOG = 32,
  THREAD_SWAPPER = 33,
  THREAD_GAMEPAD_POLLING = 34,
  THREAD_WEBCRYPTO = 35,
  THREAD_DATABASE = 36,
  THREAD_PROXYRESOLVER = 37,
  THREAD_DEVTOOLSADB = 38,
  THREAD_NETWORKCONFIGWATCHER = 39,
  THREAD_WASAPI_RENDER = 40,
  THREAD_LOADER_LOCK_SAMPLER = 41,
  THREAD_MEMORY_INFRA = 50,
  THREAD_SAMPLING_PROFILER = 51,
};
} // namespace perfetto_pbzero_enum_ChromeThreadDescriptor
using ChromeThreadDescriptor_ThreadType = perfetto_pbzero_enum_ChromeThreadDescriptor::ThreadType;


constexpr ChromeThreadDescriptor_ThreadType ChromeThreadDescriptor_ThreadType_MIN = ChromeThreadDescriptor_ThreadType::THREAD_UNSPECIFIED;
constexpr ChromeThreadDescriptor_ThreadType ChromeThreadDescriptor_ThreadType_MAX = ChromeThreadDescriptor_ThreadType::THREAD_SAMPLING_PROFILER;


PERFETTO_PROTOZERO_CONSTEXPR14_OR_INLINE
const char* ChromeThreadDescriptor_ThreadType_Name(::perfetto::protos::pbzero::ChromeThreadDescriptor_ThreadType value) {
  switch (value) {
  case ::perfetto::protos::pbzero::ChromeThreadDescriptor_ThreadType::THREAD_UNSPECIFIED:
    return "THREAD_UNSPECIFIED";

  case ::perfetto::protos::pbzero::ChromeThreadDescriptor_ThreadType::THREAD_MAIN:
    return "THREAD_MAIN";

  case ::perfetto::protos::pbzero::ChromeThreadDescriptor_ThreadType::THREAD_IO:
    return "THREAD_IO";

  case ::perfetto::protos::pbzero::ChromeThreadDescriptor_ThreadType::THREAD_POOL_BG_WORKER:
    return "THREAD_POOL_BG_WORKER";

  case ::perfetto::protos::pbzero::ChromeThreadDescriptor_ThreadType::THREAD_POOL_FG_WORKER:
    return "THREAD_POOL_FG_WORKER";

  case ::perfetto::protos::pbzero::ChromeThreadDescriptor_ThreadType::THREAD_POOL_FG_BLOCKING:
    return "THREAD_POOL_FG_BLOCKING";

  case ::perfetto::protos::pbzero::ChromeThreadDescriptor_ThreadType::THREAD_POOL_BG_BLOCKING:
    return "THREAD_POOL_BG_BLOCKING";

  case ::perfetto::protos::pbzero::ChromeThreadDescriptor_ThreadType::THREAD_POOL_SERVICE:
    return "THREAD_POOL_SERVICE";

  case ::perfetto::protos::pbzero::ChromeThreadDescriptor_ThreadType::THREAD_COMPOSITOR:
    return "THREAD_COMPOSITOR";

  case ::perfetto::protos::pbzero::ChromeThreadDescriptor_ThreadType::THREAD_VIZ_COMPOSITOR:
    return "THREAD_VIZ_COMPOSITOR";

  case ::perfetto::protos::pbzero::ChromeThreadDescriptor_ThreadType::THREAD_COMPOSITOR_WORKER:
    return "THREAD_COMPOSITOR_WORKER";

  case ::perfetto::protos::pbzero::ChromeThreadDescriptor_ThreadType::THREAD_SERVICE_WORKER:
    return "THREAD_SERVICE_WORKER";

  case ::perfetto::protos::pbzero::ChromeThreadDescriptor_ThreadType::THREAD_NETWORK_SERVICE:
    return "THREAD_NETWORK_SERVICE";

  case ::perfetto::protos::pbzero::ChromeThreadDescriptor_ThreadType::THREAD_CHILD_IO:
    return "THREAD_CHILD_IO";

  case ::perfetto::protos::pbzero::ChromeThreadDescriptor_ThreadType::THREAD_BROWSER_IO:
    return "THREAD_BROWSER_IO";

  case ::perfetto::protos::pbzero::ChromeThreadDescriptor_ThreadType::THREAD_BROWSER_MAIN:
    return "THREAD_BROWSER_MAIN";

  case ::perfetto::protos::pbzero::ChromeThreadDescriptor_ThreadType::THREAD_RENDERER_MAIN:
    return "THREAD_RENDERER_MAIN";

  case ::perfetto::protos::pbzero::ChromeThreadDescriptor_ThreadType::THREAD_UTILITY_MAIN:
    return "THREAD_UTILITY_MAIN";

  case ::perfetto::protos::pbzero::ChromeThreadDescriptor_ThreadType::THREAD_GPU_MAIN:
    return "THREAD_GPU_MAIN";

  case ::perfetto::protos::pbzero::ChromeThreadDescriptor_ThreadType::THREAD_CACHE_BLOCKFILE:
    return "THREAD_CACHE_BLOCKFILE";

  case ::perfetto::protos::pbzero::ChromeThreadDescriptor_ThreadType::THREAD_MEDIA:
    return "THREAD_MEDIA";

  case ::perfetto::protos::pbzero::ChromeThreadDescriptor_ThreadType::THREAD_AUDIO_OUTPUTDEVICE:
    return "THREAD_AUDIO_OUTPUTDEVICE";

  case ::perfetto::protos::pbzero::ChromeThreadDescriptor_ThreadType::THREAD_AUDIO_INPUTDEVICE:
    return "THREAD_AUDIO_INPUTDEVICE";

  case ::perfetto::protos::pbzero::ChromeThreadDescriptor_ThreadType::THREAD_GPU_MEMORY:
    return "THREAD_GPU_MEMORY";

  case ::perfetto::protos::pbzero::ChromeThreadDescriptor_ThreadType::THREAD_GPU_VSYNC:
    return "THREAD_GPU_VSYNC";

  case ::perfetto::protos::pbzero::ChromeThreadDescriptor_ThreadType::THREAD_DXA_VIDEODECODER:
    return "THREAD_DXA_VIDEODECODER";

  case ::perfetto::protos::pbzero::ChromeThreadDescriptor_ThreadType::THREAD_BROWSER_WATCHDOG:
    return "THREAD_BROWSER_WATCHDOG";

  case ::perfetto::protos::pbzero::ChromeThreadDescriptor_ThreadType::THREAD_WEBRTC_NETWORK:
    return "THREAD_WEBRTC_NETWORK";

  case ::perfetto::protos::pbzero::ChromeThreadDescriptor_ThreadType::THREAD_WINDOW_OWNER:
    return "THREAD_WINDOW_OWNER";

  case ::perfetto::protos::pbzero::ChromeThreadDescriptor_ThreadType::THREAD_WEBRTC_SIGNALING:
    return "THREAD_WEBRTC_SIGNALING";

  case ::perfetto::protos::pbzero::ChromeThreadDescriptor_ThreadType::THREAD_WEBRTC_WORKER:
    return "THREAD_WEBRTC_WORKER";

  case ::perfetto::protos::pbzero::ChromeThreadDescriptor_ThreadType::THREAD_PPAPI_MAIN:
    return "THREAD_PPAPI_MAIN";

  case ::perfetto::protos::pbzero::ChromeThreadDescriptor_ThreadType::THREAD_GPU_WATCHDOG:
    return "THREAD_GPU_WATCHDOG";

  case ::perfetto::protos::pbzero::ChromeThreadDescriptor_ThreadType::THREAD_SWAPPER:
    return "THREAD_SWAPPER";

  case ::perfetto::protos::pbzero::ChromeThreadDescriptor_ThreadType::THREAD_GAMEPAD_POLLING:
    return "THREAD_GAMEPAD_POLLING";

  case ::perfetto::protos::pbzero::ChromeThreadDescriptor_ThreadType::THREAD_WEBCRYPTO:
    return "THREAD_WEBCRYPTO";

  case ::perfetto::protos::pbzero::ChromeThreadDescriptor_ThreadType::THREAD_DATABASE:
    return "THREAD_DATABASE";

  case ::perfetto::protos::pbzero::ChromeThreadDescriptor_ThreadType::THREAD_PROXYRESOLVER:
    return "THREAD_PROXYRESOLVER";

  case ::perfetto::protos::pbzero::ChromeThreadDescriptor_ThreadType::THREAD_DEVTOOLSADB:
    return "THREAD_DEVTOOLSADB";

  case ::perfetto::protos::pbzero::ChromeThreadDescriptor_ThreadType::THREAD_NETWORKCONFIGWATCHER:
    return "THREAD_NETWORKCONFIGWATCHER";

  case ::perfetto::protos::pbzero::ChromeThreadDescriptor_ThreadType::THREAD_WASAPI_RENDER:
    return "THREAD_WASAPI_RENDER";

  case ::perfetto::protos::pbzero::ChromeThreadDescriptor_ThreadType::THREAD_LOADER_LOCK_SAMPLER:
    return "THREAD_LOADER_LOCK_SAMPLER";

  case ::perfetto::protos::pbzero::ChromeThreadDescriptor_ThreadType::THREAD_MEMORY_INFRA:
    return "THREAD_MEMORY_INFRA";

  case ::perfetto::protos::pbzero::ChromeThreadDescriptor_ThreadType::THREAD_SAMPLING_PROFILER:
    return "THREAD_SAMPLING_PROFILER";
  }
  return "PBZERO_UNKNOWN_ENUM_VALUE";
}

class ChromeThreadDescriptor_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/2, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  ChromeThreadDescriptor_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit ChromeThreadDescriptor_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit ChromeThreadDescriptor_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_thread_type() const { return at<1>().valid(); }
  int32_t thread_type() const { return at<1>().as_int32(); }
  bool has_legacy_sort_index() const { return at<2>().valid(); }
  int32_t legacy_sort_index() const { return at<2>().as_int32(); }
};

class ChromeThreadDescriptor : public ::protozero::Message {
 public:
  using Decoder = ChromeThreadDescriptor_Decoder;
  enum : int32_t {
    kThreadTypeFieldNumber = 1,
    kLegacySortIndexFieldNumber = 2,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.ChromeThreadDescriptor"; }


  using ThreadType = ::perfetto::protos::pbzero::ChromeThreadDescriptor_ThreadType;
  static inline const char* ThreadType_Name(ThreadType value) {
    return ::perfetto::protos::pbzero::ChromeThreadDescriptor_ThreadType_Name(value);
  }
  static inline const ThreadType THREAD_UNSPECIFIED = ThreadType::THREAD_UNSPECIFIED;
  static inline const ThreadType THREAD_MAIN = ThreadType::THREAD_MAIN;
  static inline const ThreadType THREAD_IO = ThreadType::THREAD_IO;
  static inline const ThreadType THREAD_POOL_BG_WORKER = ThreadType::THREAD_POOL_BG_WORKER;
  static inline const ThreadType THREAD_POOL_FG_WORKER = ThreadType::THREAD_POOL_FG_WORKER;
  static inline const ThreadType THREAD_POOL_FG_BLOCKING = ThreadType::THREAD_POOL_FG_BLOCKING;
  static inline const ThreadType THREAD_POOL_BG_BLOCKING = ThreadType::THREAD_POOL_BG_BLOCKING;
  static inline const ThreadType THREAD_POOL_SERVICE = ThreadType::THREAD_POOL_SERVICE;
  static inline const ThreadType THREAD_COMPOSITOR = ThreadType::THREAD_COMPOSITOR;
  static inline const ThreadType THREAD_VIZ_COMPOSITOR = ThreadType::THREAD_VIZ_COMPOSITOR;
  static inline const ThreadType THREAD_COMPOSITOR_WORKER = ThreadType::THREAD_COMPOSITOR_WORKER;
  static inline const ThreadType THREAD_SERVICE_WORKER = ThreadType::THREAD_SERVICE_WORKER;
  static inline const ThreadType THREAD_NETWORK_SERVICE = ThreadType::THREAD_NETWORK_SERVICE;
  static inline const ThreadType THREAD_CHILD_IO = ThreadType::THREAD_CHILD_IO;
  static inline const ThreadType THREAD_BROWSER_IO = ThreadType::THREAD_BROWSER_IO;
  static inline const ThreadType THREAD_BROWSER_MAIN = ThreadType::THREAD_BROWSER_MAIN;
  static inline const ThreadType THREAD_RENDERER_MAIN = ThreadType::THREAD_RENDERER_MAIN;
  static inline const ThreadType THREAD_UTILITY_MAIN = ThreadType::THREAD_UTILITY_MAIN;
  static inline const ThreadType THREAD_GPU_MAIN = ThreadType::THREAD_GPU_MAIN;
  static inline const ThreadType THREAD_CACHE_BLOCKFILE = ThreadType::THREAD_CACHE_BLOCKFILE;
  static inline const ThreadType THREAD_MEDIA = ThreadType::THREAD_MEDIA;
  static inline const ThreadType THREAD_AUDIO_OUTPUTDEVICE = ThreadType::THREAD_AUDIO_OUTPUTDEVICE;
  static inline const ThreadType THREAD_AUDIO_INPUTDEVICE = ThreadType::THREAD_AUDIO_INPUTDEVICE;
  static inline const ThreadType THREAD_GPU_MEMORY = ThreadType::THREAD_GPU_MEMORY;
  static inline const ThreadType THREAD_GPU_VSYNC = ThreadType::THREAD_GPU_VSYNC;
  static inline const ThreadType THREAD_DXA_VIDEODECODER = ThreadType::THREAD_DXA_VIDEODECODER;
  static inline const ThreadType THREAD_BROWSER_WATCHDOG = ThreadType::THREAD_BROWSER_WATCHDOG;
  static inline const ThreadType THREAD_WEBRTC_NETWORK = ThreadType::THREAD_WEBRTC_NETWORK;
  static inline const ThreadType THREAD_WINDOW_OWNER = ThreadType::THREAD_WINDOW_OWNER;
  static inline const ThreadType THREAD_WEBRTC_SIGNALING = ThreadType::THREAD_WEBRTC_SIGNALING;
  static inline const ThreadType THREAD_WEBRTC_WORKER = ThreadType::THREAD_WEBRTC_WORKER;
  static inline const ThreadType THREAD_PPAPI_MAIN = ThreadType::THREAD_PPAPI_MAIN;
  static inline const ThreadType THREAD_GPU_WATCHDOG = ThreadType::THREAD_GPU_WATCHDOG;
  static inline const ThreadType THREAD_SWAPPER = ThreadType::THREAD_SWAPPER;
  static inline const ThreadType THREAD_GAMEPAD_POLLING = ThreadType::THREAD_GAMEPAD_POLLING;
  static inline const ThreadType THREAD_WEBCRYPTO = ThreadType::THREAD_WEBCRYPTO;
  static inline const ThreadType THREAD_DATABASE = ThreadType::THREAD_DATABASE;
  static inline const ThreadType THREAD_PROXYRESOLVER = ThreadType::THREAD_PROXYRESOLVER;
  static inline const ThreadType THREAD_DEVTOOLSADB = ThreadType::THREAD_DEVTOOLSADB;
  static inline const ThreadType THREAD_NETWORKCONFIGWATCHER = ThreadType::THREAD_NETWORKCONFIGWATCHER;
  static inline const ThreadType THREAD_WASAPI_RENDER = ThreadType::THREAD_WASAPI_RENDER;
  static inline const ThreadType THREAD_LOADER_LOCK_SAMPLER = ThreadType::THREAD_LOADER_LOCK_SAMPLER;
  static inline const ThreadType THREAD_MEMORY_INFRA = ThreadType::THREAD_MEMORY_INFRA;
  static inline const ThreadType THREAD_SAMPLING_PROFILER = ThreadType::THREAD_SAMPLING_PROFILER;

  using FieldMetadata_ThreadType =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kEnum,
      ChromeThreadDescriptor_ThreadType,
      ChromeThreadDescriptor>;

  static constexpr FieldMetadata_ThreadType kThreadType{};
  void set_thread_type(ChromeThreadDescriptor_ThreadType value) {
    static constexpr uint32_t field_id = FieldMetadata_ThreadType::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kEnum>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_LegacySortIndex =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      ChromeThreadDescriptor>;

  static constexpr FieldMetadata_LegacySortIndex kLegacySortIndex{};
  void set_legacy_sort_index(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_LegacySortIndex::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
