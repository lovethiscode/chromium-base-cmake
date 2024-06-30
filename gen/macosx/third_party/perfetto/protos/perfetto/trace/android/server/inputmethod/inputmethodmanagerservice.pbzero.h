// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_ANDROID_SERVER_INPUTMETHOD_INPUTMETHODMANAGERSERVICE_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_ANDROID_SERVER_INPUTMETHOD_INPUTMETHODMANAGERSERVICE_PROTO_H_

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
class EditorInfoProto;
} // Namespace pbzero.
} // Namespace protos.
} // Namespace perfetto.

namespace perfetto {
namespace protos {
namespace pbzero {

class InputMethodManagerServiceProto_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/24, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  InputMethodManagerServiceProto_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit InputMethodManagerServiceProto_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit InputMethodManagerServiceProto_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_cur_method_id() const { return at<1>().valid(); }
  ::protozero::ConstChars cur_method_id() const { return at<1>().as_string(); }
  bool has_cur_seq() const { return at<2>().valid(); }
  int32_t cur_seq() const { return at<2>().as_int32(); }
  bool has_cur_client() const { return at<3>().valid(); }
  ::protozero::ConstChars cur_client() const { return at<3>().as_string(); }
  bool has_cur_focused_window_name() const { return at<4>().valid(); }
  ::protozero::ConstChars cur_focused_window_name() const { return at<4>().as_string(); }
  bool has_last_ime_target_window_name() const { return at<5>().valid(); }
  ::protozero::ConstChars last_ime_target_window_name() const { return at<5>().as_string(); }
  bool has_cur_focused_window_soft_input_mode() const { return at<6>().valid(); }
  ::protozero::ConstChars cur_focused_window_soft_input_mode() const { return at<6>().as_string(); }
  bool has_cur_attribute() const { return at<7>().valid(); }
  ::protozero::ConstBytes cur_attribute() const { return at<7>().as_bytes(); }
  bool has_cur_id() const { return at<8>().valid(); }
  ::protozero::ConstChars cur_id() const { return at<8>().as_string(); }
  bool has_show_explicitly_requested() const { return at<10>().valid(); }
  bool show_explicitly_requested() const { return at<10>().as_bool(); }
  bool has_show_forced() const { return at<11>().valid(); }
  bool show_forced() const { return at<11>().as_bool(); }
  bool has_input_shown() const { return at<12>().valid(); }
  bool input_shown() const { return at<12>().as_bool(); }
  bool has_in_fullscreen_mode() const { return at<13>().valid(); }
  bool in_fullscreen_mode() const { return at<13>().as_bool(); }
  bool has_cur_token() const { return at<14>().valid(); }
  ::protozero::ConstChars cur_token() const { return at<14>().as_string(); }
  bool has_cur_token_display_id() const { return at<15>().valid(); }
  int32_t cur_token_display_id() const { return at<15>().as_int32(); }
  bool has_system_ready() const { return at<16>().valid(); }
  bool system_ready() const { return at<16>().as_bool(); }
  bool has_last_switch_user_id() const { return at<17>().valid(); }
  int32_t last_switch_user_id() const { return at<17>().as_int32(); }
  bool has_have_connection() const { return at<18>().valid(); }
  bool have_connection() const { return at<18>().as_bool(); }
  bool has_bound_to_method() const { return at<19>().valid(); }
  bool bound_to_method() const { return at<19>().as_bool(); }
  bool has_is_interactive() const { return at<20>().valid(); }
  bool is_interactive() const { return at<20>().as_bool(); }
  bool has_back_disposition() const { return at<21>().valid(); }
  int32_t back_disposition() const { return at<21>().as_int32(); }
  bool has_ime_window_visibility() const { return at<22>().valid(); }
  int32_t ime_window_visibility() const { return at<22>().as_int32(); }
  bool has_show_ime_with_hard_keyboard() const { return at<23>().valid(); }
  bool show_ime_with_hard_keyboard() const { return at<23>().as_bool(); }
  bool has_accessibility_requesting_no_soft_keyboard() const { return at<24>().valid(); }
  bool accessibility_requesting_no_soft_keyboard() const { return at<24>().as_bool(); }
};

class InputMethodManagerServiceProto : public ::protozero::Message {
 public:
  using Decoder = InputMethodManagerServiceProto_Decoder;
  enum : int32_t {
    kCurMethodIdFieldNumber = 1,
    kCurSeqFieldNumber = 2,
    kCurClientFieldNumber = 3,
    kCurFocusedWindowNameFieldNumber = 4,
    kLastImeTargetWindowNameFieldNumber = 5,
    kCurFocusedWindowSoftInputModeFieldNumber = 6,
    kCurAttributeFieldNumber = 7,
    kCurIdFieldNumber = 8,
    kShowExplicitlyRequestedFieldNumber = 10,
    kShowForcedFieldNumber = 11,
    kInputShownFieldNumber = 12,
    kInFullscreenModeFieldNumber = 13,
    kCurTokenFieldNumber = 14,
    kCurTokenDisplayIdFieldNumber = 15,
    kSystemReadyFieldNumber = 16,
    kLastSwitchUserIdFieldNumber = 17,
    kHaveConnectionFieldNumber = 18,
    kBoundToMethodFieldNumber = 19,
    kIsInteractiveFieldNumber = 20,
    kBackDispositionFieldNumber = 21,
    kImeWindowVisibilityFieldNumber = 22,
    kShowImeWithHardKeyboardFieldNumber = 23,
    kAccessibilityRequestingNoSoftKeyboardFieldNumber = 24,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.InputMethodManagerServiceProto"; }


  using FieldMetadata_CurMethodId =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      InputMethodManagerServiceProto>;

  static constexpr FieldMetadata_CurMethodId kCurMethodId{};
  void set_cur_method_id(const char* data, size_t size) {
    AppendBytes(FieldMetadata_CurMethodId::kFieldId, data, size);
  }
  void set_cur_method_id(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_CurMethodId::kFieldId, chars.data, chars.size);
  }
  void set_cur_method_id(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_CurMethodId::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_CurSeq =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      InputMethodManagerServiceProto>;

  static constexpr FieldMetadata_CurSeq kCurSeq{};
  void set_cur_seq(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_CurSeq::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_CurClient =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      InputMethodManagerServiceProto>;

  static constexpr FieldMetadata_CurClient kCurClient{};
  void set_cur_client(const char* data, size_t size) {
    AppendBytes(FieldMetadata_CurClient::kFieldId, data, size);
  }
  void set_cur_client(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_CurClient::kFieldId, chars.data, chars.size);
  }
  void set_cur_client(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_CurClient::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_CurFocusedWindowName =
    ::protozero::proto_utils::FieldMetadata<
      4,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      InputMethodManagerServiceProto>;

  static constexpr FieldMetadata_CurFocusedWindowName kCurFocusedWindowName{};
  void set_cur_focused_window_name(const char* data, size_t size) {
    AppendBytes(FieldMetadata_CurFocusedWindowName::kFieldId, data, size);
  }
  void set_cur_focused_window_name(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_CurFocusedWindowName::kFieldId, chars.data, chars.size);
  }
  void set_cur_focused_window_name(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_CurFocusedWindowName::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_LastImeTargetWindowName =
    ::protozero::proto_utils::FieldMetadata<
      5,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      InputMethodManagerServiceProto>;

  static constexpr FieldMetadata_LastImeTargetWindowName kLastImeTargetWindowName{};
  void set_last_ime_target_window_name(const char* data, size_t size) {
    AppendBytes(FieldMetadata_LastImeTargetWindowName::kFieldId, data, size);
  }
  void set_last_ime_target_window_name(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_LastImeTargetWindowName::kFieldId, chars.data, chars.size);
  }
  void set_last_ime_target_window_name(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_LastImeTargetWindowName::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_CurFocusedWindowSoftInputMode =
    ::protozero::proto_utils::FieldMetadata<
      6,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      InputMethodManagerServiceProto>;

  static constexpr FieldMetadata_CurFocusedWindowSoftInputMode kCurFocusedWindowSoftInputMode{};
  void set_cur_focused_window_soft_input_mode(const char* data, size_t size) {
    AppendBytes(FieldMetadata_CurFocusedWindowSoftInputMode::kFieldId, data, size);
  }
  void set_cur_focused_window_soft_input_mode(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_CurFocusedWindowSoftInputMode::kFieldId, chars.data, chars.size);
  }
  void set_cur_focused_window_soft_input_mode(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_CurFocusedWindowSoftInputMode::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_CurAttribute =
    ::protozero::proto_utils::FieldMetadata<
      7,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kMessage,
      EditorInfoProto,
      InputMethodManagerServiceProto>;

  static constexpr FieldMetadata_CurAttribute kCurAttribute{};
  template <typename T = EditorInfoProto> T* set_cur_attribute() {
    return BeginNestedMessage<T>(7);
  }


  using FieldMetadata_CurId =
    ::protozero::proto_utils::FieldMetadata<
      8,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      InputMethodManagerServiceProto>;

  static constexpr FieldMetadata_CurId kCurId{};
  void set_cur_id(const char* data, size_t size) {
    AppendBytes(FieldMetadata_CurId::kFieldId, data, size);
  }
  void set_cur_id(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_CurId::kFieldId, chars.data, chars.size);
  }
  void set_cur_id(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_CurId::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_ShowExplicitlyRequested =
    ::protozero::proto_utils::FieldMetadata<
      10,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kBool,
      bool,
      InputMethodManagerServiceProto>;

  static constexpr FieldMetadata_ShowExplicitlyRequested kShowExplicitlyRequested{};
  void set_show_explicitly_requested(bool value) {
    static constexpr uint32_t field_id = FieldMetadata_ShowExplicitlyRequested::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kBool>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_ShowForced =
    ::protozero::proto_utils::FieldMetadata<
      11,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kBool,
      bool,
      InputMethodManagerServiceProto>;

  static constexpr FieldMetadata_ShowForced kShowForced{};
  void set_show_forced(bool value) {
    static constexpr uint32_t field_id = FieldMetadata_ShowForced::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kBool>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_InputShown =
    ::protozero::proto_utils::FieldMetadata<
      12,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kBool,
      bool,
      InputMethodManagerServiceProto>;

  static constexpr FieldMetadata_InputShown kInputShown{};
  void set_input_shown(bool value) {
    static constexpr uint32_t field_id = FieldMetadata_InputShown::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kBool>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_InFullscreenMode =
    ::protozero::proto_utils::FieldMetadata<
      13,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kBool,
      bool,
      InputMethodManagerServiceProto>;

  static constexpr FieldMetadata_InFullscreenMode kInFullscreenMode{};
  void set_in_fullscreen_mode(bool value) {
    static constexpr uint32_t field_id = FieldMetadata_InFullscreenMode::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kBool>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_CurToken =
    ::protozero::proto_utils::FieldMetadata<
      14,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      InputMethodManagerServiceProto>;

  static constexpr FieldMetadata_CurToken kCurToken{};
  void set_cur_token(const char* data, size_t size) {
    AppendBytes(FieldMetadata_CurToken::kFieldId, data, size);
  }
  void set_cur_token(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_CurToken::kFieldId, chars.data, chars.size);
  }
  void set_cur_token(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_CurToken::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_CurTokenDisplayId =
    ::protozero::proto_utils::FieldMetadata<
      15,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      InputMethodManagerServiceProto>;

  static constexpr FieldMetadata_CurTokenDisplayId kCurTokenDisplayId{};
  void set_cur_token_display_id(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_CurTokenDisplayId::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_SystemReady =
    ::protozero::proto_utils::FieldMetadata<
      16,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kBool,
      bool,
      InputMethodManagerServiceProto>;

  static constexpr FieldMetadata_SystemReady kSystemReady{};
  void set_system_ready(bool value) {
    static constexpr uint32_t field_id = FieldMetadata_SystemReady::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kBool>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_LastSwitchUserId =
    ::protozero::proto_utils::FieldMetadata<
      17,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      InputMethodManagerServiceProto>;

  static constexpr FieldMetadata_LastSwitchUserId kLastSwitchUserId{};
  void set_last_switch_user_id(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_LastSwitchUserId::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_HaveConnection =
    ::protozero::proto_utils::FieldMetadata<
      18,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kBool,
      bool,
      InputMethodManagerServiceProto>;

  static constexpr FieldMetadata_HaveConnection kHaveConnection{};
  void set_have_connection(bool value) {
    static constexpr uint32_t field_id = FieldMetadata_HaveConnection::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kBool>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_BoundToMethod =
    ::protozero::proto_utils::FieldMetadata<
      19,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kBool,
      bool,
      InputMethodManagerServiceProto>;

  static constexpr FieldMetadata_BoundToMethod kBoundToMethod{};
  void set_bound_to_method(bool value) {
    static constexpr uint32_t field_id = FieldMetadata_BoundToMethod::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kBool>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_IsInteractive =
    ::protozero::proto_utils::FieldMetadata<
      20,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kBool,
      bool,
      InputMethodManagerServiceProto>;

  static constexpr FieldMetadata_IsInteractive kIsInteractive{};
  void set_is_interactive(bool value) {
    static constexpr uint32_t field_id = FieldMetadata_IsInteractive::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kBool>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_BackDisposition =
    ::protozero::proto_utils::FieldMetadata<
      21,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      InputMethodManagerServiceProto>;

  static constexpr FieldMetadata_BackDisposition kBackDisposition{};
  void set_back_disposition(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_BackDisposition::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_ImeWindowVisibility =
    ::protozero::proto_utils::FieldMetadata<
      22,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      InputMethodManagerServiceProto>;

  static constexpr FieldMetadata_ImeWindowVisibility kImeWindowVisibility{};
  void set_ime_window_visibility(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_ImeWindowVisibility::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_ShowImeWithHardKeyboard =
    ::protozero::proto_utils::FieldMetadata<
      23,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kBool,
      bool,
      InputMethodManagerServiceProto>;

  static constexpr FieldMetadata_ShowImeWithHardKeyboard kShowImeWithHardKeyboard{};
  void set_show_ime_with_hard_keyboard(bool value) {
    static constexpr uint32_t field_id = FieldMetadata_ShowImeWithHardKeyboard::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kBool>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_AccessibilityRequestingNoSoftKeyboard =
    ::protozero::proto_utils::FieldMetadata<
      24,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kBool,
      bool,
      InputMethodManagerServiceProto>;

  static constexpr FieldMetadata_AccessibilityRequestingNoSoftKeyboard kAccessibilityRequestingNoSoftKeyboard{};
  void set_accessibility_requesting_no_soft_keyboard(bool value) {
    static constexpr uint32_t field_id = FieldMetadata_AccessibilityRequestingNoSoftKeyboard::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kBool>
        ::Append(*this, field_id, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.