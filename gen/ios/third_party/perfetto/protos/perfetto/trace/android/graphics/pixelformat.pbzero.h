// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_ANDROID_GRAPHICS_PIXELFORMAT_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_ANDROID_GRAPHICS_PIXELFORMAT_PROTO_H_

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

namespace perfetto_pbzero_enum_PixelFormatProto {
enum Format : int32_t {
  UNKNOWN = 0,
  TRANSLUCENT = -3,
  TRANSPARENT = -2,
  OPAQUE = -1,
  RGBA_8888 = 1,
  RGBX_8888 = 2,
  RGB_888 = 3,
  RGB_565 = 4,
  RGBA_F16 = 22,
  RGBA_1010102 = 43,
};
} // namespace perfetto_pbzero_enum_PixelFormatProto
using PixelFormatProto_Format = perfetto_pbzero_enum_PixelFormatProto::Format;


constexpr PixelFormatProto_Format PixelFormatProto_Format_MIN = PixelFormatProto_Format::TRANSLUCENT;
constexpr PixelFormatProto_Format PixelFormatProto_Format_MAX = PixelFormatProto_Format::RGBA_1010102;


PERFETTO_PROTOZERO_CONSTEXPR14_OR_INLINE
const char* PixelFormatProto_Format_Name(::perfetto::protos::pbzero::PixelFormatProto_Format value) {
  switch (value) {
  case ::perfetto::protos::pbzero::PixelFormatProto_Format::UNKNOWN:
    return "UNKNOWN";

  case ::perfetto::protos::pbzero::PixelFormatProto_Format::TRANSLUCENT:
    return "TRANSLUCENT";

  case ::perfetto::protos::pbzero::PixelFormatProto_Format::TRANSPARENT:
    return "TRANSPARENT";

  case ::perfetto::protos::pbzero::PixelFormatProto_Format::OPAQUE:
    return "OPAQUE";

  case ::perfetto::protos::pbzero::PixelFormatProto_Format::RGBA_8888:
    return "RGBA_8888";

  case ::perfetto::protos::pbzero::PixelFormatProto_Format::RGBX_8888:
    return "RGBX_8888";

  case ::perfetto::protos::pbzero::PixelFormatProto_Format::RGB_888:
    return "RGB_888";

  case ::perfetto::protos::pbzero::PixelFormatProto_Format::RGB_565:
    return "RGB_565";

  case ::perfetto::protos::pbzero::PixelFormatProto_Format::RGBA_F16:
    return "RGBA_F16";

  case ::perfetto::protos::pbzero::PixelFormatProto_Format::RGBA_1010102:
    return "RGBA_1010102";
  }
  return "PBZERO_UNKNOWN_ENUM_VALUE";
}

class PixelFormatProto_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/0, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  PixelFormatProto_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit PixelFormatProto_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit PixelFormatProto_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
};

class PixelFormatProto : public ::protozero::Message {
 public:
  using Decoder = PixelFormatProto_Decoder;
  static constexpr const char* GetName() { return ".perfetto.protos.PixelFormatProto"; }


  using Format = ::perfetto::protos::pbzero::PixelFormatProto_Format;
  static inline const char* Format_Name(Format value) {
    return ::perfetto::protos::pbzero::PixelFormatProto_Format_Name(value);
  }
  static inline const Format UNKNOWN = Format::UNKNOWN;
  static inline const Format TRANSLUCENT = Format::TRANSLUCENT;
  static inline const Format TRANSPARENT = Format::TRANSPARENT;
  static inline const Format OPAQUE = Format::OPAQUE;
  static inline const Format RGBA_8888 = Format::RGBA_8888;
  static inline const Format RGBX_8888 = Format::RGBX_8888;
  static inline const Format RGB_888 = Format::RGB_888;
  static inline const Format RGB_565 = Format::RGB_565;
  static inline const Format RGBA_F16 = Format::RGBA_F16;
  static inline const Format RGBA_1010102 = Format::RGBA_1010102;
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
