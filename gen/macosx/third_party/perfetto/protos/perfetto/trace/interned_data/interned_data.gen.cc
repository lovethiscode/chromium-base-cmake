#include "perfetto/protozero/gen_field_helpers.h"
#include "perfetto/protozero/message.h"
#include "perfetto/protozero/packed_repeated_fields.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/scattered_heap_buffer.h"
// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wfloat-equal"
#endif
#include "protos/perfetto/trace/interned_data/interned_data.gen.h"
#include "protos/perfetto/trace/profiling/profile_common.gen.h"
#include "protos/perfetto/trace/track_event/source_location.gen.h"
#include "protos/perfetto/trace/track_event/track_event.gen.h"
#include "protos/perfetto/trace/track_event/screenshot.gen.h"
#include "protos/perfetto/trace/track_event/pixel_modem.gen.h"
#include "protos/perfetto/trace/track_event/chrome_window_handle_event_info.gen.h"
#include "protos/perfetto/trace/track_event/chrome_user_event.gen.h"
#include "protos/perfetto/trace/track_event/chrome_renderer_scheduler_state.gen.h"
#include "protos/perfetto/trace/track_event/chrome_mojo_event_info.gen.h"
#include "protos/perfetto/trace/track_event/chrome_message_pump.gen.h"
#include "protos/perfetto/trace/track_event/chrome_legacy_ipc.gen.h"
#include "protos/perfetto/trace/track_event/chrome_latency_info.gen.h"
#include "protos/perfetto/trace/track_event/chrome_keyed_service.gen.h"
#include "protos/perfetto/trace/track_event/chrome_histogram_sample.gen.h"
#include "protos/perfetto/trace/track_event/chrome_frame_reporter.gen.h"
#include "protos/perfetto/trace/track_event/chrome_content_settings_event_info.gen.h"
#include "protos/perfetto/trace/track_event/chrome_compositor_scheduler_state.gen.h"
#include "protos/perfetto/trace/track_event/chrome_application_state_info.gen.h"
#include "protos/perfetto/trace/track_event/chrome_active_processes.gen.h"
#include "protos/perfetto/trace/track_event/task_execution.gen.h"
#include "protos/perfetto/trace/track_event/log_message.gen.h"
#include "protos/perfetto/trace/track_event/debug_annotation.gen.h"
#include "protos/perfetto/trace/track_event/log_message.gen.h"
#include "protos/perfetto/trace/track_event/debug_annotation.gen.h"
#include "protos/perfetto/trace/track_event/chrome_histogram_sample.gen.h"
#include "protos/perfetto/trace/gpu/gpu_render_stage_event.gen.h"
#include "protos/perfetto/trace/chrome/v8.gen.h"
#include "protos/perfetto/trace/android/network_trace.gen.h"

namespace perfetto {
namespace protos {
namespace gen {

InternedData::InternedData() = default;
InternedData::~InternedData() = default;
InternedData::InternedData(const InternedData&) = default;
InternedData& InternedData::operator=(const InternedData&) = default;
InternedData::InternedData(InternedData&&) noexcept = default;
InternedData& InternedData::operator=(InternedData&&) = default;

bool InternedData::operator==(const InternedData& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(event_categories_, other.event_categories_)
   && ::protozero::internal::gen_helpers::EqualsField(event_names_, other.event_names_)
   && ::protozero::internal::gen_helpers::EqualsField(debug_annotation_names_, other.debug_annotation_names_)
   && ::protozero::internal::gen_helpers::EqualsField(debug_annotation_value_type_names_, other.debug_annotation_value_type_names_)
   && ::protozero::internal::gen_helpers::EqualsField(source_locations_, other.source_locations_)
   && ::protozero::internal::gen_helpers::EqualsField(unsymbolized_source_locations_, other.unsymbolized_source_locations_)
   && ::protozero::internal::gen_helpers::EqualsField(log_message_body_, other.log_message_body_)
   && ::protozero::internal::gen_helpers::EqualsField(histogram_names_, other.histogram_names_)
   && ::protozero::internal::gen_helpers::EqualsField(build_ids_, other.build_ids_)
   && ::protozero::internal::gen_helpers::EqualsField(mapping_paths_, other.mapping_paths_)
   && ::protozero::internal::gen_helpers::EqualsField(source_paths_, other.source_paths_)
   && ::protozero::internal::gen_helpers::EqualsField(function_names_, other.function_names_)
   && ::protozero::internal::gen_helpers::EqualsField(profiled_frame_symbols_, other.profiled_frame_symbols_)
   && ::protozero::internal::gen_helpers::EqualsField(mappings_, other.mappings_)
   && ::protozero::internal::gen_helpers::EqualsField(frames_, other.frames_)
   && ::protozero::internal::gen_helpers::EqualsField(callstacks_, other.callstacks_)
   && ::protozero::internal::gen_helpers::EqualsField(vulkan_memory_keys_, other.vulkan_memory_keys_)
   && ::protozero::internal::gen_helpers::EqualsField(graphics_contexts_, other.graphics_contexts_)
   && ::protozero::internal::gen_helpers::EqualsField(gpu_specifications_, other.gpu_specifications_)
   && ::protozero::internal::gen_helpers::EqualsField(kernel_symbols_, other.kernel_symbols_)
   && ::protozero::internal::gen_helpers::EqualsField(debug_annotation_string_values_, other.debug_annotation_string_values_)
   && ::protozero::internal::gen_helpers::EqualsField(packet_context_, other.packet_context_)
   && ::protozero::internal::gen_helpers::EqualsField(v8_js_function_name_, other.v8_js_function_name_)
   && ::protozero::internal::gen_helpers::EqualsField(v8_js_function_, other.v8_js_function_)
   && ::protozero::internal::gen_helpers::EqualsField(v8_js_script_, other.v8_js_script_)
   && ::protozero::internal::gen_helpers::EqualsField(v8_wasm_script_, other.v8_wasm_script_)
   && ::protozero::internal::gen_helpers::EqualsField(v8_isolate_, other.v8_isolate_)
   && ::protozero::internal::gen_helpers::EqualsField(protolog_string_args_, other.protolog_string_args_)
   && ::protozero::internal::gen_helpers::EqualsField(protolog_stacktrace_, other.protolog_stacktrace_)
   && ::protozero::internal::gen_helpers::EqualsField(viewcapture_package_name_, other.viewcapture_package_name_)
   && ::protozero::internal::gen_helpers::EqualsField(viewcapture_window_name_, other.viewcapture_window_name_)
   && ::protozero::internal::gen_helpers::EqualsField(viewcapture_view_id_, other.viewcapture_view_id_)
   && ::protozero::internal::gen_helpers::EqualsField(viewcapture_class_name_, other.viewcapture_class_name_);
}

int InternedData::event_categories_size() const { return static_cast<int>(event_categories_.size()); }
void InternedData::clear_event_categories() { event_categories_.clear(); }
EventCategory* InternedData::add_event_categories() { event_categories_.emplace_back(); return &event_categories_.back(); }
int InternedData::event_names_size() const { return static_cast<int>(event_names_.size()); }
void InternedData::clear_event_names() { event_names_.clear(); }
EventName* InternedData::add_event_names() { event_names_.emplace_back(); return &event_names_.back(); }
int InternedData::debug_annotation_names_size() const { return static_cast<int>(debug_annotation_names_.size()); }
void InternedData::clear_debug_annotation_names() { debug_annotation_names_.clear(); }
DebugAnnotationName* InternedData::add_debug_annotation_names() { debug_annotation_names_.emplace_back(); return &debug_annotation_names_.back(); }
int InternedData::debug_annotation_value_type_names_size() const { return static_cast<int>(debug_annotation_value_type_names_.size()); }
void InternedData::clear_debug_annotation_value_type_names() { debug_annotation_value_type_names_.clear(); }
DebugAnnotationValueTypeName* InternedData::add_debug_annotation_value_type_names() { debug_annotation_value_type_names_.emplace_back(); return &debug_annotation_value_type_names_.back(); }
int InternedData::source_locations_size() const { return static_cast<int>(source_locations_.size()); }
void InternedData::clear_source_locations() { source_locations_.clear(); }
SourceLocation* InternedData::add_source_locations() { source_locations_.emplace_back(); return &source_locations_.back(); }
int InternedData::unsymbolized_source_locations_size() const { return static_cast<int>(unsymbolized_source_locations_.size()); }
void InternedData::clear_unsymbolized_source_locations() { unsymbolized_source_locations_.clear(); }
UnsymbolizedSourceLocation* InternedData::add_unsymbolized_source_locations() { unsymbolized_source_locations_.emplace_back(); return &unsymbolized_source_locations_.back(); }
int InternedData::log_message_body_size() const { return static_cast<int>(log_message_body_.size()); }
void InternedData::clear_log_message_body() { log_message_body_.clear(); }
LogMessageBody* InternedData::add_log_message_body() { log_message_body_.emplace_back(); return &log_message_body_.back(); }
int InternedData::histogram_names_size() const { return static_cast<int>(histogram_names_.size()); }
void InternedData::clear_histogram_names() { histogram_names_.clear(); }
HistogramName* InternedData::add_histogram_names() { histogram_names_.emplace_back(); return &histogram_names_.back(); }
int InternedData::build_ids_size() const { return static_cast<int>(build_ids_.size()); }
void InternedData::clear_build_ids() { build_ids_.clear(); }
InternedString* InternedData::add_build_ids() { build_ids_.emplace_back(); return &build_ids_.back(); }
int InternedData::mapping_paths_size() const { return static_cast<int>(mapping_paths_.size()); }
void InternedData::clear_mapping_paths() { mapping_paths_.clear(); }
InternedString* InternedData::add_mapping_paths() { mapping_paths_.emplace_back(); return &mapping_paths_.back(); }
int InternedData::source_paths_size() const { return static_cast<int>(source_paths_.size()); }
void InternedData::clear_source_paths() { source_paths_.clear(); }
InternedString* InternedData::add_source_paths() { source_paths_.emplace_back(); return &source_paths_.back(); }
int InternedData::function_names_size() const { return static_cast<int>(function_names_.size()); }
void InternedData::clear_function_names() { function_names_.clear(); }
InternedString* InternedData::add_function_names() { function_names_.emplace_back(); return &function_names_.back(); }
int InternedData::profiled_frame_symbols_size() const { return static_cast<int>(profiled_frame_symbols_.size()); }
void InternedData::clear_profiled_frame_symbols() { profiled_frame_symbols_.clear(); }
ProfiledFrameSymbols* InternedData::add_profiled_frame_symbols() { profiled_frame_symbols_.emplace_back(); return &profiled_frame_symbols_.back(); }
int InternedData::mappings_size() const { return static_cast<int>(mappings_.size()); }
void InternedData::clear_mappings() { mappings_.clear(); }
Mapping* InternedData::add_mappings() { mappings_.emplace_back(); return &mappings_.back(); }
int InternedData::frames_size() const { return static_cast<int>(frames_.size()); }
void InternedData::clear_frames() { frames_.clear(); }
Frame* InternedData::add_frames() { frames_.emplace_back(); return &frames_.back(); }
int InternedData::callstacks_size() const { return static_cast<int>(callstacks_.size()); }
void InternedData::clear_callstacks() { callstacks_.clear(); }
Callstack* InternedData::add_callstacks() { callstacks_.emplace_back(); return &callstacks_.back(); }
int InternedData::vulkan_memory_keys_size() const { return static_cast<int>(vulkan_memory_keys_.size()); }
void InternedData::clear_vulkan_memory_keys() { vulkan_memory_keys_.clear(); }
InternedString* InternedData::add_vulkan_memory_keys() { vulkan_memory_keys_.emplace_back(); return &vulkan_memory_keys_.back(); }
int InternedData::graphics_contexts_size() const { return static_cast<int>(graphics_contexts_.size()); }
void InternedData::clear_graphics_contexts() { graphics_contexts_.clear(); }
InternedGraphicsContext* InternedData::add_graphics_contexts() { graphics_contexts_.emplace_back(); return &graphics_contexts_.back(); }
int InternedData::gpu_specifications_size() const { return static_cast<int>(gpu_specifications_.size()); }
void InternedData::clear_gpu_specifications() { gpu_specifications_.clear(); }
InternedGpuRenderStageSpecification* InternedData::add_gpu_specifications() { gpu_specifications_.emplace_back(); return &gpu_specifications_.back(); }
int InternedData::kernel_symbols_size() const { return static_cast<int>(kernel_symbols_.size()); }
void InternedData::clear_kernel_symbols() { kernel_symbols_.clear(); }
InternedString* InternedData::add_kernel_symbols() { kernel_symbols_.emplace_back(); return &kernel_symbols_.back(); }
int InternedData::debug_annotation_string_values_size() const { return static_cast<int>(debug_annotation_string_values_.size()); }
void InternedData::clear_debug_annotation_string_values() { debug_annotation_string_values_.clear(); }
InternedString* InternedData::add_debug_annotation_string_values() { debug_annotation_string_values_.emplace_back(); return &debug_annotation_string_values_.back(); }
int InternedData::packet_context_size() const { return static_cast<int>(packet_context_.size()); }
void InternedData::clear_packet_context() { packet_context_.clear(); }
NetworkPacketContext* InternedData::add_packet_context() { packet_context_.emplace_back(); return &packet_context_.back(); }
int InternedData::v8_js_function_name_size() const { return static_cast<int>(v8_js_function_name_.size()); }
void InternedData::clear_v8_js_function_name() { v8_js_function_name_.clear(); }
InternedV8String* InternedData::add_v8_js_function_name() { v8_js_function_name_.emplace_back(); return &v8_js_function_name_.back(); }
int InternedData::v8_js_function_size() const { return static_cast<int>(v8_js_function_.size()); }
void InternedData::clear_v8_js_function() { v8_js_function_.clear(); }
InternedV8JsFunction* InternedData::add_v8_js_function() { v8_js_function_.emplace_back(); return &v8_js_function_.back(); }
int InternedData::v8_js_script_size() const { return static_cast<int>(v8_js_script_.size()); }
void InternedData::clear_v8_js_script() { v8_js_script_.clear(); }
InternedV8JsScript* InternedData::add_v8_js_script() { v8_js_script_.emplace_back(); return &v8_js_script_.back(); }
int InternedData::v8_wasm_script_size() const { return static_cast<int>(v8_wasm_script_.size()); }
void InternedData::clear_v8_wasm_script() { v8_wasm_script_.clear(); }
InternedV8WasmScript* InternedData::add_v8_wasm_script() { v8_wasm_script_.emplace_back(); return &v8_wasm_script_.back(); }
int InternedData::v8_isolate_size() const { return static_cast<int>(v8_isolate_.size()); }
void InternedData::clear_v8_isolate() { v8_isolate_.clear(); }
InternedV8Isolate* InternedData::add_v8_isolate() { v8_isolate_.emplace_back(); return &v8_isolate_.back(); }
int InternedData::protolog_string_args_size() const { return static_cast<int>(protolog_string_args_.size()); }
void InternedData::clear_protolog_string_args() { protolog_string_args_.clear(); }
InternedString* InternedData::add_protolog_string_args() { protolog_string_args_.emplace_back(); return &protolog_string_args_.back(); }
int InternedData::protolog_stacktrace_size() const { return static_cast<int>(protolog_stacktrace_.size()); }
void InternedData::clear_protolog_stacktrace() { protolog_stacktrace_.clear(); }
InternedString* InternedData::add_protolog_stacktrace() { protolog_stacktrace_.emplace_back(); return &protolog_stacktrace_.back(); }
int InternedData::viewcapture_package_name_size() const { return static_cast<int>(viewcapture_package_name_.size()); }
void InternedData::clear_viewcapture_package_name() { viewcapture_package_name_.clear(); }
InternedString* InternedData::add_viewcapture_package_name() { viewcapture_package_name_.emplace_back(); return &viewcapture_package_name_.back(); }
int InternedData::viewcapture_window_name_size() const { return static_cast<int>(viewcapture_window_name_.size()); }
void InternedData::clear_viewcapture_window_name() { viewcapture_window_name_.clear(); }
InternedString* InternedData::add_viewcapture_window_name() { viewcapture_window_name_.emplace_back(); return &viewcapture_window_name_.back(); }
int InternedData::viewcapture_view_id_size() const { return static_cast<int>(viewcapture_view_id_.size()); }
void InternedData::clear_viewcapture_view_id() { viewcapture_view_id_.clear(); }
InternedString* InternedData::add_viewcapture_view_id() { viewcapture_view_id_.emplace_back(); return &viewcapture_view_id_.back(); }
int InternedData::viewcapture_class_name_size() const { return static_cast<int>(viewcapture_class_name_.size()); }
void InternedData::clear_viewcapture_class_name() { viewcapture_class_name_.clear(); }
InternedString* InternedData::add_viewcapture_class_name() { viewcapture_class_name_.emplace_back(); return &viewcapture_class_name_.back(); }
bool InternedData::ParseFromArray(const void* raw, size_t size) {
  event_categories_.clear();
  event_names_.clear();
  debug_annotation_names_.clear();
  debug_annotation_value_type_names_.clear();
  source_locations_.clear();
  unsymbolized_source_locations_.clear();
  log_message_body_.clear();
  histogram_names_.clear();
  build_ids_.clear();
  mapping_paths_.clear();
  source_paths_.clear();
  function_names_.clear();
  profiled_frame_symbols_.clear();
  mappings_.clear();
  frames_.clear();
  callstacks_.clear();
  vulkan_memory_keys_.clear();
  graphics_contexts_.clear();
  gpu_specifications_.clear();
  kernel_symbols_.clear();
  debug_annotation_string_values_.clear();
  packet_context_.clear();
  v8_js_function_name_.clear();
  v8_js_function_.clear();
  v8_js_script_.clear();
  v8_wasm_script_.clear();
  v8_isolate_.clear();
  protolog_string_args_.clear();
  protolog_stacktrace_.clear();
  viewcapture_package_name_.clear();
  viewcapture_window_name_.clear();
  viewcapture_view_id_.clear();
  viewcapture_class_name_.clear();
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* event_categories */:
        event_categories_.emplace_back();
        event_categories_.back().ParseFromArray(field.data(), field.size());
        break;
      case 2 /* event_names */:
        event_names_.emplace_back();
        event_names_.back().ParseFromArray(field.data(), field.size());
        break;
      case 3 /* debug_annotation_names */:
        debug_annotation_names_.emplace_back();
        debug_annotation_names_.back().ParseFromArray(field.data(), field.size());
        break;
      case 27 /* debug_annotation_value_type_names */:
        debug_annotation_value_type_names_.emplace_back();
        debug_annotation_value_type_names_.back().ParseFromArray(field.data(), field.size());
        break;
      case 4 /* source_locations */:
        source_locations_.emplace_back();
        source_locations_.back().ParseFromArray(field.data(), field.size());
        break;
      case 28 /* unsymbolized_source_locations */:
        unsymbolized_source_locations_.emplace_back();
        unsymbolized_source_locations_.back().ParseFromArray(field.data(), field.size());
        break;
      case 20 /* log_message_body */:
        log_message_body_.emplace_back();
        log_message_body_.back().ParseFromArray(field.data(), field.size());
        break;
      case 25 /* histogram_names */:
        histogram_names_.emplace_back();
        histogram_names_.back().ParseFromArray(field.data(), field.size());
        break;
      case 16 /* build_ids */:
        build_ids_.emplace_back();
        build_ids_.back().ParseFromArray(field.data(), field.size());
        break;
      case 17 /* mapping_paths */:
        mapping_paths_.emplace_back();
        mapping_paths_.back().ParseFromArray(field.data(), field.size());
        break;
      case 18 /* source_paths */:
        source_paths_.emplace_back();
        source_paths_.back().ParseFromArray(field.data(), field.size());
        break;
      case 5 /* function_names */:
        function_names_.emplace_back();
        function_names_.back().ParseFromArray(field.data(), field.size());
        break;
      case 21 /* profiled_frame_symbols */:
        profiled_frame_symbols_.emplace_back();
        profiled_frame_symbols_.back().ParseFromArray(field.data(), field.size());
        break;
      case 19 /* mappings */:
        mappings_.emplace_back();
        mappings_.back().ParseFromArray(field.data(), field.size());
        break;
      case 6 /* frames */:
        frames_.emplace_back();
        frames_.back().ParseFromArray(field.data(), field.size());
        break;
      case 7 /* callstacks */:
        callstacks_.emplace_back();
        callstacks_.back().ParseFromArray(field.data(), field.size());
        break;
      case 22 /* vulkan_memory_keys */:
        vulkan_memory_keys_.emplace_back();
        vulkan_memory_keys_.back().ParseFromArray(field.data(), field.size());
        break;
      case 23 /* graphics_contexts */:
        graphics_contexts_.emplace_back();
        graphics_contexts_.back().ParseFromArray(field.data(), field.size());
        break;
      case 24 /* gpu_specifications */:
        gpu_specifications_.emplace_back();
        gpu_specifications_.back().ParseFromArray(field.data(), field.size());
        break;
      case 26 /* kernel_symbols */:
        kernel_symbols_.emplace_back();
        kernel_symbols_.back().ParseFromArray(field.data(), field.size());
        break;
      case 29 /* debug_annotation_string_values */:
        debug_annotation_string_values_.emplace_back();
        debug_annotation_string_values_.back().ParseFromArray(field.data(), field.size());
        break;
      case 30 /* packet_context */:
        packet_context_.emplace_back();
        packet_context_.back().ParseFromArray(field.data(), field.size());
        break;
      case 31 /* v8_js_function_name */:
        v8_js_function_name_.emplace_back();
        v8_js_function_name_.back().ParseFromArray(field.data(), field.size());
        break;
      case 32 /* v8_js_function */:
        v8_js_function_.emplace_back();
        v8_js_function_.back().ParseFromArray(field.data(), field.size());
        break;
      case 33 /* v8_js_script */:
        v8_js_script_.emplace_back();
        v8_js_script_.back().ParseFromArray(field.data(), field.size());
        break;
      case 34 /* v8_wasm_script */:
        v8_wasm_script_.emplace_back();
        v8_wasm_script_.back().ParseFromArray(field.data(), field.size());
        break;
      case 35 /* v8_isolate */:
        v8_isolate_.emplace_back();
        v8_isolate_.back().ParseFromArray(field.data(), field.size());
        break;
      case 36 /* protolog_string_args */:
        protolog_string_args_.emplace_back();
        protolog_string_args_.back().ParseFromArray(field.data(), field.size());
        break;
      case 37 /* protolog_stacktrace */:
        protolog_stacktrace_.emplace_back();
        protolog_stacktrace_.back().ParseFromArray(field.data(), field.size());
        break;
      case 38 /* viewcapture_package_name */:
        viewcapture_package_name_.emplace_back();
        viewcapture_package_name_.back().ParseFromArray(field.data(), field.size());
        break;
      case 39 /* viewcapture_window_name */:
        viewcapture_window_name_.emplace_back();
        viewcapture_window_name_.back().ParseFromArray(field.data(), field.size());
        break;
      case 40 /* viewcapture_view_id */:
        viewcapture_view_id_.emplace_back();
        viewcapture_view_id_.back().ParseFromArray(field.data(), field.size());
        break;
      case 41 /* viewcapture_class_name */:
        viewcapture_class_name_.emplace_back();
        viewcapture_class_name_.back().ParseFromArray(field.data(), field.size());
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string InternedData::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> InternedData::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void InternedData::Serialize(::protozero::Message* msg) const {
  // Field 1: event_categories
  for (auto& it : event_categories_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(1));
  }

  // Field 2: event_names
  for (auto& it : event_names_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(2));
  }

  // Field 3: debug_annotation_names
  for (auto& it : debug_annotation_names_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(3));
  }

  // Field 27: debug_annotation_value_type_names
  for (auto& it : debug_annotation_value_type_names_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(27));
  }

  // Field 4: source_locations
  for (auto& it : source_locations_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(4));
  }

  // Field 28: unsymbolized_source_locations
  for (auto& it : unsymbolized_source_locations_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(28));
  }

  // Field 20: log_message_body
  for (auto& it : log_message_body_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(20));
  }

  // Field 25: histogram_names
  for (auto& it : histogram_names_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(25));
  }

  // Field 16: build_ids
  for (auto& it : build_ids_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(16));
  }

  // Field 17: mapping_paths
  for (auto& it : mapping_paths_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(17));
  }

  // Field 18: source_paths
  for (auto& it : source_paths_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(18));
  }

  // Field 5: function_names
  for (auto& it : function_names_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(5));
  }

  // Field 21: profiled_frame_symbols
  for (auto& it : profiled_frame_symbols_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(21));
  }

  // Field 19: mappings
  for (auto& it : mappings_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(19));
  }

  // Field 6: frames
  for (auto& it : frames_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(6));
  }

  // Field 7: callstacks
  for (auto& it : callstacks_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(7));
  }

  // Field 22: vulkan_memory_keys
  for (auto& it : vulkan_memory_keys_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(22));
  }

  // Field 23: graphics_contexts
  for (auto& it : graphics_contexts_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(23));
  }

  // Field 24: gpu_specifications
  for (auto& it : gpu_specifications_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(24));
  }

  // Field 26: kernel_symbols
  for (auto& it : kernel_symbols_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(26));
  }

  // Field 29: debug_annotation_string_values
  for (auto& it : debug_annotation_string_values_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(29));
  }

  // Field 30: packet_context
  for (auto& it : packet_context_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(30));
  }

  // Field 31: v8_js_function_name
  for (auto& it : v8_js_function_name_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(31));
  }

  // Field 32: v8_js_function
  for (auto& it : v8_js_function_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(32));
  }

  // Field 33: v8_js_script
  for (auto& it : v8_js_script_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(33));
  }

  // Field 34: v8_wasm_script
  for (auto& it : v8_wasm_script_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(34));
  }

  // Field 35: v8_isolate
  for (auto& it : v8_isolate_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(35));
  }

  // Field 36: protolog_string_args
  for (auto& it : protolog_string_args_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(36));
  }

  // Field 37: protolog_stacktrace
  for (auto& it : protolog_stacktrace_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(37));
  }

  // Field 38: viewcapture_package_name
  for (auto& it : viewcapture_package_name_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(38));
  }

  // Field 39: viewcapture_window_name
  for (auto& it : viewcapture_window_name_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(39));
  }

  // Field 40: viewcapture_view_id
  for (auto& it : viewcapture_view_id_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(40));
  }

  // Field 41: viewcapture_class_name
  for (auto& it : viewcapture_class_name_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(41));
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}

}  // namespace perfetto
}  // namespace protos
}  // namespace gen
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif
