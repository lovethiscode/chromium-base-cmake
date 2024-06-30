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
#include "protos/perfetto/trace/android/camera_event.gen.h"

namespace perfetto {
namespace protos {
namespace gen {

AndroidCameraSessionStats::AndroidCameraSessionStats() = default;
AndroidCameraSessionStats::~AndroidCameraSessionStats() = default;
AndroidCameraSessionStats::AndroidCameraSessionStats(const AndroidCameraSessionStats&) = default;
AndroidCameraSessionStats& AndroidCameraSessionStats::operator=(const AndroidCameraSessionStats&) = default;
AndroidCameraSessionStats::AndroidCameraSessionStats(AndroidCameraSessionStats&&) noexcept = default;
AndroidCameraSessionStats& AndroidCameraSessionStats::operator=(AndroidCameraSessionStats&&) = default;

bool AndroidCameraSessionStats::operator==(const AndroidCameraSessionStats& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(session_id_, other.session_id_)
   && ::protozero::internal::gen_helpers::EqualsField(graph_, other.graph_);
}

bool AndroidCameraSessionStats::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* session_id */:
        field.get(&session_id_);
        break;
      case 2 /* graph */:
        (*graph_).ParseFromArray(field.data(), field.size());
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string AndroidCameraSessionStats::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> AndroidCameraSessionStats::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void AndroidCameraSessionStats::Serialize(::protozero::Message* msg) const {
  // Field 1: session_id
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(1, session_id_, msg);
  }

  // Field 2: graph
  if (_has_field_[2]) {
    (*graph_).Serialize(msg->BeginNestedMessage<::protozero::Message>(2));
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


AndroidCameraSessionStats_CameraGraph::AndroidCameraSessionStats_CameraGraph() = default;
AndroidCameraSessionStats_CameraGraph::~AndroidCameraSessionStats_CameraGraph() = default;
AndroidCameraSessionStats_CameraGraph::AndroidCameraSessionStats_CameraGraph(const AndroidCameraSessionStats_CameraGraph&) = default;
AndroidCameraSessionStats_CameraGraph& AndroidCameraSessionStats_CameraGraph::operator=(const AndroidCameraSessionStats_CameraGraph&) = default;
AndroidCameraSessionStats_CameraGraph::AndroidCameraSessionStats_CameraGraph(AndroidCameraSessionStats_CameraGraph&&) noexcept = default;
AndroidCameraSessionStats_CameraGraph& AndroidCameraSessionStats_CameraGraph::operator=(AndroidCameraSessionStats_CameraGraph&&) = default;

bool AndroidCameraSessionStats_CameraGraph::operator==(const AndroidCameraSessionStats_CameraGraph& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(nodes_, other.nodes_)
   && ::protozero::internal::gen_helpers::EqualsField(edges_, other.edges_);
}

int AndroidCameraSessionStats_CameraGraph::nodes_size() const { return static_cast<int>(nodes_.size()); }
void AndroidCameraSessionStats_CameraGraph::clear_nodes() { nodes_.clear(); }
AndroidCameraSessionStats_CameraGraph_CameraNode* AndroidCameraSessionStats_CameraGraph::add_nodes() { nodes_.emplace_back(); return &nodes_.back(); }
int AndroidCameraSessionStats_CameraGraph::edges_size() const { return static_cast<int>(edges_.size()); }
void AndroidCameraSessionStats_CameraGraph::clear_edges() { edges_.clear(); }
AndroidCameraSessionStats_CameraGraph_CameraEdge* AndroidCameraSessionStats_CameraGraph::add_edges() { edges_.emplace_back(); return &edges_.back(); }
bool AndroidCameraSessionStats_CameraGraph::ParseFromArray(const void* raw, size_t size) {
  nodes_.clear();
  edges_.clear();
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* nodes */:
        nodes_.emplace_back();
        nodes_.back().ParseFromArray(field.data(), field.size());
        break;
      case 2 /* edges */:
        edges_.emplace_back();
        edges_.back().ParseFromArray(field.data(), field.size());
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string AndroidCameraSessionStats_CameraGraph::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> AndroidCameraSessionStats_CameraGraph::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void AndroidCameraSessionStats_CameraGraph::Serialize(::protozero::Message* msg) const {
  // Field 1: nodes
  for (auto& it : nodes_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(1));
  }

  // Field 2: edges
  for (auto& it : edges_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(2));
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


AndroidCameraSessionStats_CameraGraph_CameraEdge::AndroidCameraSessionStats_CameraGraph_CameraEdge() = default;
AndroidCameraSessionStats_CameraGraph_CameraEdge::~AndroidCameraSessionStats_CameraGraph_CameraEdge() = default;
AndroidCameraSessionStats_CameraGraph_CameraEdge::AndroidCameraSessionStats_CameraGraph_CameraEdge(const AndroidCameraSessionStats_CameraGraph_CameraEdge&) = default;
AndroidCameraSessionStats_CameraGraph_CameraEdge& AndroidCameraSessionStats_CameraGraph_CameraEdge::operator=(const AndroidCameraSessionStats_CameraGraph_CameraEdge&) = default;
AndroidCameraSessionStats_CameraGraph_CameraEdge::AndroidCameraSessionStats_CameraGraph_CameraEdge(AndroidCameraSessionStats_CameraGraph_CameraEdge&&) noexcept = default;
AndroidCameraSessionStats_CameraGraph_CameraEdge& AndroidCameraSessionStats_CameraGraph_CameraEdge::operator=(AndroidCameraSessionStats_CameraGraph_CameraEdge&&) = default;

bool AndroidCameraSessionStats_CameraGraph_CameraEdge::operator==(const AndroidCameraSessionStats_CameraGraph_CameraEdge& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(output_node_id_, other.output_node_id_)
   && ::protozero::internal::gen_helpers::EqualsField(output_id_, other.output_id_)
   && ::protozero::internal::gen_helpers::EqualsField(input_node_id_, other.input_node_id_)
   && ::protozero::internal::gen_helpers::EqualsField(input_id_, other.input_id_)
   && ::protozero::internal::gen_helpers::EqualsField(vendor_data_version_, other.vendor_data_version_)
   && ::protozero::internal::gen_helpers::EqualsField(vendor_data_, other.vendor_data_);
}

bool AndroidCameraSessionStats_CameraGraph_CameraEdge::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* output_node_id */:
        field.get(&output_node_id_);
        break;
      case 2 /* output_id */:
        field.get(&output_id_);
        break;
      case 3 /* input_node_id */:
        field.get(&input_node_id_);
        break;
      case 4 /* input_id */:
        field.get(&input_id_);
        break;
      case 5 /* vendor_data_version */:
        field.get(&vendor_data_version_);
        break;
      case 6 /* vendor_data */:
        field.get(&vendor_data_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string AndroidCameraSessionStats_CameraGraph_CameraEdge::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> AndroidCameraSessionStats_CameraGraph_CameraEdge::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void AndroidCameraSessionStats_CameraGraph_CameraEdge::Serialize(::protozero::Message* msg) const {
  // Field 1: output_node_id
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(1, output_node_id_, msg);
  }

  // Field 2: output_id
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(2, output_id_, msg);
  }

  // Field 3: input_node_id
  if (_has_field_[3]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(3, input_node_id_, msg);
  }

  // Field 4: input_id
  if (_has_field_[4]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(4, input_id_, msg);
  }

  // Field 5: vendor_data_version
  if (_has_field_[5]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(5, vendor_data_version_, msg);
  }

  // Field 6: vendor_data
  if (_has_field_[6]) {
    ::protozero::internal::gen_helpers::SerializeString(6, vendor_data_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


AndroidCameraSessionStats_CameraGraph_CameraNode::AndroidCameraSessionStats_CameraGraph_CameraNode() = default;
AndroidCameraSessionStats_CameraGraph_CameraNode::~AndroidCameraSessionStats_CameraGraph_CameraNode() = default;
AndroidCameraSessionStats_CameraGraph_CameraNode::AndroidCameraSessionStats_CameraGraph_CameraNode(const AndroidCameraSessionStats_CameraGraph_CameraNode&) = default;
AndroidCameraSessionStats_CameraGraph_CameraNode& AndroidCameraSessionStats_CameraGraph_CameraNode::operator=(const AndroidCameraSessionStats_CameraGraph_CameraNode&) = default;
AndroidCameraSessionStats_CameraGraph_CameraNode::AndroidCameraSessionStats_CameraGraph_CameraNode(AndroidCameraSessionStats_CameraGraph_CameraNode&&) noexcept = default;
AndroidCameraSessionStats_CameraGraph_CameraNode& AndroidCameraSessionStats_CameraGraph_CameraNode::operator=(AndroidCameraSessionStats_CameraGraph_CameraNode&&) = default;

bool AndroidCameraSessionStats_CameraGraph_CameraNode::operator==(const AndroidCameraSessionStats_CameraGraph_CameraNode& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(node_id_, other.node_id_)
   && ::protozero::internal::gen_helpers::EqualsField(input_ids_, other.input_ids_)
   && ::protozero::internal::gen_helpers::EqualsField(output_ids_, other.output_ids_)
   && ::protozero::internal::gen_helpers::EqualsField(vendor_data_version_, other.vendor_data_version_)
   && ::protozero::internal::gen_helpers::EqualsField(vendor_data_, other.vendor_data_);
}

bool AndroidCameraSessionStats_CameraGraph_CameraNode::ParseFromArray(const void* raw, size_t size) {
  input_ids_.clear();
  output_ids_.clear();
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* node_id */:
        field.get(&node_id_);
        break;
      case 2 /* input_ids */:
        input_ids_.emplace_back();
        field.get(&input_ids_.back());
        break;
      case 3 /* output_ids */:
        output_ids_.emplace_back();
        field.get(&output_ids_.back());
        break;
      case 4 /* vendor_data_version */:
        field.get(&vendor_data_version_);
        break;
      case 5 /* vendor_data */:
        field.get(&vendor_data_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string AndroidCameraSessionStats_CameraGraph_CameraNode::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> AndroidCameraSessionStats_CameraGraph_CameraNode::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void AndroidCameraSessionStats_CameraGraph_CameraNode::Serialize(::protozero::Message* msg) const {
  // Field 1: node_id
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(1, node_id_, msg);
  }

  // Field 2: input_ids
  for (auto& it : input_ids_) {
    ::protozero::internal::gen_helpers::SerializeVarInt(2, it, msg);
  }

  // Field 3: output_ids
  for (auto& it : output_ids_) {
    ::protozero::internal::gen_helpers::SerializeVarInt(3, it, msg);
  }

  // Field 4: vendor_data_version
  if (_has_field_[4]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(4, vendor_data_version_, msg);
  }

  // Field 5: vendor_data
  if (_has_field_[5]) {
    ::protozero::internal::gen_helpers::SerializeString(5, vendor_data_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


AndroidCameraFrameEvent::AndroidCameraFrameEvent() = default;
AndroidCameraFrameEvent::~AndroidCameraFrameEvent() = default;
AndroidCameraFrameEvent::AndroidCameraFrameEvent(const AndroidCameraFrameEvent&) = default;
AndroidCameraFrameEvent& AndroidCameraFrameEvent::operator=(const AndroidCameraFrameEvent&) = default;
AndroidCameraFrameEvent::AndroidCameraFrameEvent(AndroidCameraFrameEvent&&) noexcept = default;
AndroidCameraFrameEvent& AndroidCameraFrameEvent::operator=(AndroidCameraFrameEvent&&) = default;

bool AndroidCameraFrameEvent::operator==(const AndroidCameraFrameEvent& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(session_id_, other.session_id_)
   && ::protozero::internal::gen_helpers::EqualsField(camera_id_, other.camera_id_)
   && ::protozero::internal::gen_helpers::EqualsField(frame_number_, other.frame_number_)
   && ::protozero::internal::gen_helpers::EqualsField(request_id_, other.request_id_)
   && ::protozero::internal::gen_helpers::EqualsField(request_received_ns_, other.request_received_ns_)
   && ::protozero::internal::gen_helpers::EqualsField(request_processing_started_ns_, other.request_processing_started_ns_)
   && ::protozero::internal::gen_helpers::EqualsField(start_of_exposure_ns_, other.start_of_exposure_ns_)
   && ::protozero::internal::gen_helpers::EqualsField(start_of_frame_ns_, other.start_of_frame_ns_)
   && ::protozero::internal::gen_helpers::EqualsField(responses_all_sent_ns_, other.responses_all_sent_ns_)
   && ::protozero::internal::gen_helpers::EqualsField(capture_result_status_, other.capture_result_status_)
   && ::protozero::internal::gen_helpers::EqualsField(skipped_sensor_frames_, other.skipped_sensor_frames_)
   && ::protozero::internal::gen_helpers::EqualsField(capture_intent_, other.capture_intent_)
   && ::protozero::internal::gen_helpers::EqualsField(num_streams_, other.num_streams_)
   && ::protozero::internal::gen_helpers::EqualsField(node_processing_details_, other.node_processing_details_)
   && ::protozero::internal::gen_helpers::EqualsField(vendor_data_version_, other.vendor_data_version_)
   && ::protozero::internal::gen_helpers::EqualsField(vendor_data_, other.vendor_data_);
}

int AndroidCameraFrameEvent::node_processing_details_size() const { return static_cast<int>(node_processing_details_.size()); }
void AndroidCameraFrameEvent::clear_node_processing_details() { node_processing_details_.clear(); }
AndroidCameraFrameEvent_CameraNodeProcessingDetails* AndroidCameraFrameEvent::add_node_processing_details() { node_processing_details_.emplace_back(); return &node_processing_details_.back(); }
bool AndroidCameraFrameEvent::ParseFromArray(const void* raw, size_t size) {
  node_processing_details_.clear();
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* session_id */:
        field.get(&session_id_);
        break;
      case 2 /* camera_id */:
        field.get(&camera_id_);
        break;
      case 3 /* frame_number */:
        field.get(&frame_number_);
        break;
      case 4 /* request_id */:
        field.get(&request_id_);
        break;
      case 5 /* request_received_ns */:
        field.get(&request_received_ns_);
        break;
      case 6 /* request_processing_started_ns */:
        field.get(&request_processing_started_ns_);
        break;
      case 7 /* start_of_exposure_ns */:
        field.get(&start_of_exposure_ns_);
        break;
      case 8 /* start_of_frame_ns */:
        field.get(&start_of_frame_ns_);
        break;
      case 9 /* responses_all_sent_ns */:
        field.get(&responses_all_sent_ns_);
        break;
      case 10 /* capture_result_status */:
        field.get(&capture_result_status_);
        break;
      case 11 /* skipped_sensor_frames */:
        field.get(&skipped_sensor_frames_);
        break;
      case 12 /* capture_intent */:
        field.get(&capture_intent_);
        break;
      case 13 /* num_streams */:
        field.get(&num_streams_);
        break;
      case 14 /* node_processing_details */:
        node_processing_details_.emplace_back();
        node_processing_details_.back().ParseFromArray(field.data(), field.size());
        break;
      case 15 /* vendor_data_version */:
        field.get(&vendor_data_version_);
        break;
      case 16 /* vendor_data */:
        field.get(&vendor_data_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string AndroidCameraFrameEvent::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> AndroidCameraFrameEvent::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void AndroidCameraFrameEvent::Serialize(::protozero::Message* msg) const {
  // Field 1: session_id
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(1, session_id_, msg);
  }

  // Field 2: camera_id
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(2, camera_id_, msg);
  }

  // Field 3: frame_number
  if (_has_field_[3]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(3, frame_number_, msg);
  }

  // Field 4: request_id
  if (_has_field_[4]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(4, request_id_, msg);
  }

  // Field 5: request_received_ns
  if (_has_field_[5]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(5, request_received_ns_, msg);
  }

  // Field 6: request_processing_started_ns
  if (_has_field_[6]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(6, request_processing_started_ns_, msg);
  }

  // Field 7: start_of_exposure_ns
  if (_has_field_[7]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(7, start_of_exposure_ns_, msg);
  }

  // Field 8: start_of_frame_ns
  if (_has_field_[8]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(8, start_of_frame_ns_, msg);
  }

  // Field 9: responses_all_sent_ns
  if (_has_field_[9]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(9, responses_all_sent_ns_, msg);
  }

  // Field 10: capture_result_status
  if (_has_field_[10]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(10, capture_result_status_, msg);
  }

  // Field 11: skipped_sensor_frames
  if (_has_field_[11]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(11, skipped_sensor_frames_, msg);
  }

  // Field 12: capture_intent
  if (_has_field_[12]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(12, capture_intent_, msg);
  }

  // Field 13: num_streams
  if (_has_field_[13]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(13, num_streams_, msg);
  }

  // Field 14: node_processing_details
  for (auto& it : node_processing_details_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(14));
  }

  // Field 15: vendor_data_version
  if (_has_field_[15]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(15, vendor_data_version_, msg);
  }

  // Field 16: vendor_data
  if (_has_field_[16]) {
    ::protozero::internal::gen_helpers::SerializeString(16, vendor_data_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


AndroidCameraFrameEvent_CameraNodeProcessingDetails::AndroidCameraFrameEvent_CameraNodeProcessingDetails() = default;
AndroidCameraFrameEvent_CameraNodeProcessingDetails::~AndroidCameraFrameEvent_CameraNodeProcessingDetails() = default;
AndroidCameraFrameEvent_CameraNodeProcessingDetails::AndroidCameraFrameEvent_CameraNodeProcessingDetails(const AndroidCameraFrameEvent_CameraNodeProcessingDetails&) = default;
AndroidCameraFrameEvent_CameraNodeProcessingDetails& AndroidCameraFrameEvent_CameraNodeProcessingDetails::operator=(const AndroidCameraFrameEvent_CameraNodeProcessingDetails&) = default;
AndroidCameraFrameEvent_CameraNodeProcessingDetails::AndroidCameraFrameEvent_CameraNodeProcessingDetails(AndroidCameraFrameEvent_CameraNodeProcessingDetails&&) noexcept = default;
AndroidCameraFrameEvent_CameraNodeProcessingDetails& AndroidCameraFrameEvent_CameraNodeProcessingDetails::operator=(AndroidCameraFrameEvent_CameraNodeProcessingDetails&&) = default;

bool AndroidCameraFrameEvent_CameraNodeProcessingDetails::operator==(const AndroidCameraFrameEvent_CameraNodeProcessingDetails& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(node_id_, other.node_id_)
   && ::protozero::internal::gen_helpers::EqualsField(start_processing_ns_, other.start_processing_ns_)
   && ::protozero::internal::gen_helpers::EqualsField(end_processing_ns_, other.end_processing_ns_)
   && ::protozero::internal::gen_helpers::EqualsField(scheduling_latency_ns_, other.scheduling_latency_ns_);
}

bool AndroidCameraFrameEvent_CameraNodeProcessingDetails::ParseFromArray(const void* raw, size_t size) {
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* node_id */:
        field.get(&node_id_);
        break;
      case 2 /* start_processing_ns */:
        field.get(&start_processing_ns_);
        break;
      case 3 /* end_processing_ns */:
        field.get(&end_processing_ns_);
        break;
      case 4 /* scheduling_latency_ns */:
        field.get(&scheduling_latency_ns_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string AndroidCameraFrameEvent_CameraNodeProcessingDetails::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> AndroidCameraFrameEvent_CameraNodeProcessingDetails::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void AndroidCameraFrameEvent_CameraNodeProcessingDetails::Serialize(::protozero::Message* msg) const {
  // Field 1: node_id
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(1, node_id_, msg);
  }

  // Field 2: start_processing_ns
  if (_has_field_[2]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(2, start_processing_ns_, msg);
  }

  // Field 3: end_processing_ns
  if (_has_field_[3]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(3, end_processing_ns_, msg);
  }

  // Field 4: scheduling_latency_ns
  if (_has_field_[4]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(4, scheduling_latency_ns_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}

}  // namespace perfetto
}  // namespace protos
}  // namespace gen
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif