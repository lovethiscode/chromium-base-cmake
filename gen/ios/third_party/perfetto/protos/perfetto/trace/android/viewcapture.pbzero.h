// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_ANDROID_VIEWCAPTURE_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_ANDROID_VIEWCAPTURE_PROTO_H_

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
class ViewCapture_View;
} // Namespace pbzero.
} // Namespace protos.
} // Namespace perfetto.

namespace perfetto {
namespace protos {
namespace pbzero {

class ViewCapture_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/3, /*HAS_NONPACKED_REPEATED_FIELDS=*/true> {
 public:
  ViewCapture_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit ViewCapture_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit ViewCapture_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_package_name_iid() const { return at<1>().valid(); }
  int32_t package_name_iid() const { return at<1>().as_int32(); }
  bool has_window_name_iid() const { return at<2>().valid(); }
  int32_t window_name_iid() const { return at<2>().as_int32(); }
  bool has_views() const { return at<3>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstBytes> views() const { return GetRepeated<::protozero::ConstBytes>(3); }
};

class ViewCapture : public ::protozero::Message {
 public:
  using Decoder = ViewCapture_Decoder;
  enum : int32_t {
    kPackageNameIidFieldNumber = 1,
    kWindowNameIidFieldNumber = 2,
    kViewsFieldNumber = 3,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.ViewCapture"; }

  using View = ::perfetto::protos::pbzero::ViewCapture_View;

  using FieldMetadata_PackageNameIid =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      ViewCapture>;

  static constexpr FieldMetadata_PackageNameIid kPackageNameIid{};
  void set_package_name_iid(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_PackageNameIid::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_WindowNameIid =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      ViewCapture>;

  static constexpr FieldMetadata_WindowNameIid kWindowNameIid{};
  void set_window_name_iid(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_WindowNameIid::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Views =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kRepeatedNotPacked,
      ::protozero::proto_utils::ProtoSchemaType::kMessage,
      ViewCapture_View,
      ViewCapture>;

  static constexpr FieldMetadata_Views kViews{};
  template <typename T = ViewCapture_View> T* add_views() {
    return BeginNestedMessage<T>(3);
  }

};

class ViewCapture_View_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/20, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  ViewCapture_View_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit ViewCapture_View_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit ViewCapture_View_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_id() const { return at<1>().valid(); }
  int32_t id() const { return at<1>().as_int32(); }
  bool has_parent_id() const { return at<2>().valid(); }
  int32_t parent_id() const { return at<2>().as_int32(); }
  bool has_hashcode() const { return at<3>().valid(); }
  int32_t hashcode() const { return at<3>().as_int32(); }
  bool has_view_id_iid() const { return at<4>().valid(); }
  int32_t view_id_iid() const { return at<4>().as_int32(); }
  bool has_class_name_iid() const { return at<5>().valid(); }
  int32_t class_name_iid() const { return at<5>().as_int32(); }
  bool has_left() const { return at<6>().valid(); }
  int32_t left() const { return at<6>().as_int32(); }
  bool has_top() const { return at<7>().valid(); }
  int32_t top() const { return at<7>().as_int32(); }
  bool has_width() const { return at<8>().valid(); }
  int32_t width() const { return at<8>().as_int32(); }
  bool has_height() const { return at<9>().valid(); }
  int32_t height() const { return at<9>().as_int32(); }
  bool has_scroll_x() const { return at<10>().valid(); }
  int32_t scroll_x() const { return at<10>().as_int32(); }
  bool has_scroll_y() const { return at<11>().valid(); }
  int32_t scroll_y() const { return at<11>().as_int32(); }
  bool has_translation_x() const { return at<12>().valid(); }
  float translation_x() const { return at<12>().as_float(); }
  bool has_translation_y() const { return at<13>().valid(); }
  float translation_y() const { return at<13>().as_float(); }
  bool has_scale_x() const { return at<14>().valid(); }
  float scale_x() const { return at<14>().as_float(); }
  bool has_scale_y() const { return at<15>().valid(); }
  float scale_y() const { return at<15>().as_float(); }
  bool has_alpha() const { return at<16>().valid(); }
  float alpha() const { return at<16>().as_float(); }
  bool has_will_not_draw() const { return at<17>().valid(); }
  bool will_not_draw() const { return at<17>().as_bool(); }
  bool has_clip_children() const { return at<18>().valid(); }
  bool clip_children() const { return at<18>().as_bool(); }
  bool has_visibility() const { return at<19>().valid(); }
  int32_t visibility() const { return at<19>().as_int32(); }
  bool has_elevation() const { return at<20>().valid(); }
  float elevation() const { return at<20>().as_float(); }
};

class ViewCapture_View : public ::protozero::Message {
 public:
  using Decoder = ViewCapture_View_Decoder;
  enum : int32_t {
    kIdFieldNumber = 1,
    kParentIdFieldNumber = 2,
    kHashcodeFieldNumber = 3,
    kViewIdIidFieldNumber = 4,
    kClassNameIidFieldNumber = 5,
    kLeftFieldNumber = 6,
    kTopFieldNumber = 7,
    kWidthFieldNumber = 8,
    kHeightFieldNumber = 9,
    kScrollXFieldNumber = 10,
    kScrollYFieldNumber = 11,
    kTranslationXFieldNumber = 12,
    kTranslationYFieldNumber = 13,
    kScaleXFieldNumber = 14,
    kScaleYFieldNumber = 15,
    kAlphaFieldNumber = 16,
    kWillNotDrawFieldNumber = 17,
    kClipChildrenFieldNumber = 18,
    kVisibilityFieldNumber = 19,
    kElevationFieldNumber = 20,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.ViewCapture.View"; }


  using FieldMetadata_Id =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      ViewCapture_View>;

  static constexpr FieldMetadata_Id kId{};
  void set_id(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Id::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_ParentId =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      ViewCapture_View>;

  static constexpr FieldMetadata_ParentId kParentId{};
  void set_parent_id(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_ParentId::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Hashcode =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      ViewCapture_View>;

  static constexpr FieldMetadata_Hashcode kHashcode{};
  void set_hashcode(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Hashcode::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_ViewIdIid =
    ::protozero::proto_utils::FieldMetadata<
      4,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      ViewCapture_View>;

  static constexpr FieldMetadata_ViewIdIid kViewIdIid{};
  void set_view_id_iid(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_ViewIdIid::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_ClassNameIid =
    ::protozero::proto_utils::FieldMetadata<
      5,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      ViewCapture_View>;

  static constexpr FieldMetadata_ClassNameIid kClassNameIid{};
  void set_class_name_iid(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_ClassNameIid::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Left =
    ::protozero::proto_utils::FieldMetadata<
      6,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      ViewCapture_View>;

  static constexpr FieldMetadata_Left kLeft{};
  void set_left(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Left::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Top =
    ::protozero::proto_utils::FieldMetadata<
      7,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      ViewCapture_View>;

  static constexpr FieldMetadata_Top kTop{};
  void set_top(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Top::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Width =
    ::protozero::proto_utils::FieldMetadata<
      8,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      ViewCapture_View>;

  static constexpr FieldMetadata_Width kWidth{};
  void set_width(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Width::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Height =
    ::protozero::proto_utils::FieldMetadata<
      9,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      ViewCapture_View>;

  static constexpr FieldMetadata_Height kHeight{};
  void set_height(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Height::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_ScrollX =
    ::protozero::proto_utils::FieldMetadata<
      10,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      ViewCapture_View>;

  static constexpr FieldMetadata_ScrollX kScrollX{};
  void set_scroll_x(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_ScrollX::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_ScrollY =
    ::protozero::proto_utils::FieldMetadata<
      11,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      ViewCapture_View>;

  static constexpr FieldMetadata_ScrollY kScrollY{};
  void set_scroll_y(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_ScrollY::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_TranslationX =
    ::protozero::proto_utils::FieldMetadata<
      12,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kFloat,
      float,
      ViewCapture_View>;

  static constexpr FieldMetadata_TranslationX kTranslationX{};
  void set_translation_x(float value) {
    static constexpr uint32_t field_id = FieldMetadata_TranslationX::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kFloat>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_TranslationY =
    ::protozero::proto_utils::FieldMetadata<
      13,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kFloat,
      float,
      ViewCapture_View>;

  static constexpr FieldMetadata_TranslationY kTranslationY{};
  void set_translation_y(float value) {
    static constexpr uint32_t field_id = FieldMetadata_TranslationY::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kFloat>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_ScaleX =
    ::protozero::proto_utils::FieldMetadata<
      14,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kFloat,
      float,
      ViewCapture_View>;

  static constexpr FieldMetadata_ScaleX kScaleX{};
  void set_scale_x(float value) {
    static constexpr uint32_t field_id = FieldMetadata_ScaleX::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kFloat>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_ScaleY =
    ::protozero::proto_utils::FieldMetadata<
      15,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kFloat,
      float,
      ViewCapture_View>;

  static constexpr FieldMetadata_ScaleY kScaleY{};
  void set_scale_y(float value) {
    static constexpr uint32_t field_id = FieldMetadata_ScaleY::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kFloat>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Alpha =
    ::protozero::proto_utils::FieldMetadata<
      16,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kFloat,
      float,
      ViewCapture_View>;

  static constexpr FieldMetadata_Alpha kAlpha{};
  void set_alpha(float value) {
    static constexpr uint32_t field_id = FieldMetadata_Alpha::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kFloat>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_WillNotDraw =
    ::protozero::proto_utils::FieldMetadata<
      17,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kBool,
      bool,
      ViewCapture_View>;

  static constexpr FieldMetadata_WillNotDraw kWillNotDraw{};
  void set_will_not_draw(bool value) {
    static constexpr uint32_t field_id = FieldMetadata_WillNotDraw::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kBool>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_ClipChildren =
    ::protozero::proto_utils::FieldMetadata<
      18,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kBool,
      bool,
      ViewCapture_View>;

  static constexpr FieldMetadata_ClipChildren kClipChildren{};
  void set_clip_children(bool value) {
    static constexpr uint32_t field_id = FieldMetadata_ClipChildren::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kBool>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Visibility =
    ::protozero::proto_utils::FieldMetadata<
      19,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      ViewCapture_View>;

  static constexpr FieldMetadata_Visibility kVisibility{};
  void set_visibility(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Visibility::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Elevation =
    ::protozero::proto_utils::FieldMetadata<
      20,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kFloat,
      float,
      ViewCapture_View>;

  static constexpr FieldMetadata_Elevation kElevation{};
  void set_elevation(float value) {
    static constexpr uint32_t field_id = FieldMetadata_Elevation::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kFloat>
        ::Append(*this, field_id, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.