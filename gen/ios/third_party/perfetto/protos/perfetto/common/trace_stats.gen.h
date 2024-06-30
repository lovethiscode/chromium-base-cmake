// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_COMMON_TRACE_STATS_PROTO_CPP_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_COMMON_TRACE_STATS_PROTO_CPP_H_

#include <stdint.h>
#include <bitset>
#include <vector>
#include <string>
#include <type_traits>

#include "perfetto/protozero/cpp_message_obj.h"
#include "perfetto/protozero/copyable_ptr.h"
#include "perfetto/base/export.h"

namespace perfetto {
namespace protos {
namespace gen {
class TraceStats;
class TraceStats_FilterStats;
class TraceStats_WriterStats;
class TraceStats_BufferStats;
enum TraceStats_FinalFlushOutcome : int;
}  // namespace perfetto
}  // namespace protos
}  // namespace gen

namespace protozero {
class Message;
}  // namespace protozero

namespace perfetto {
namespace protos {
namespace gen {
enum TraceStats_FinalFlushOutcome : int {
  TraceStats_FinalFlushOutcome_FINAL_FLUSH_UNSPECIFIED = 0,
  TraceStats_FinalFlushOutcome_FINAL_FLUSH_SUCCEEDED = 1,
  TraceStats_FinalFlushOutcome_FINAL_FLUSH_FAILED = 2,
};

class PERFETTO_EXPORT_COMPONENT TraceStats : public ::protozero::CppMessageObj {
 public:
  using BufferStats = TraceStats_BufferStats;
  using WriterStats = TraceStats_WriterStats;
  using FilterStats = TraceStats_FilterStats;
  using FinalFlushOutcome = TraceStats_FinalFlushOutcome;
  static constexpr auto FINAL_FLUSH_UNSPECIFIED = TraceStats_FinalFlushOutcome_FINAL_FLUSH_UNSPECIFIED;
  static constexpr auto FINAL_FLUSH_SUCCEEDED = TraceStats_FinalFlushOutcome_FINAL_FLUSH_SUCCEEDED;
  static constexpr auto FINAL_FLUSH_FAILED = TraceStats_FinalFlushOutcome_FINAL_FLUSH_FAILED;
  static constexpr auto FinalFlushOutcome_MIN = TraceStats_FinalFlushOutcome_FINAL_FLUSH_UNSPECIFIED;
  static constexpr auto FinalFlushOutcome_MAX = TraceStats_FinalFlushOutcome_FINAL_FLUSH_FAILED;
  enum FieldNumbers {
    kBufferStatsFieldNumber = 1,
    kChunkPayloadHistogramDefFieldNumber = 17,
    kWriterStatsFieldNumber = 18,
    kProducersConnectedFieldNumber = 2,
    kProducersSeenFieldNumber = 3,
    kDataSourcesRegisteredFieldNumber = 4,
    kDataSourcesSeenFieldNumber = 5,
    kTracingSessionsFieldNumber = 6,
    kTotalBuffersFieldNumber = 7,
    kChunksDiscardedFieldNumber = 8,
    kPatchesDiscardedFieldNumber = 9,
    kInvalidPacketsFieldNumber = 10,
    kFilterStatsFieldNumber = 11,
    kFlushesRequestedFieldNumber = 12,
    kFlushesSucceededFieldNumber = 13,
    kFlushesFailedFieldNumber = 14,
    kFinalFlushOutcomeFieldNumber = 15,
  };

  TraceStats();
  ~TraceStats() override;
  TraceStats(TraceStats&&) noexcept;
  TraceStats& operator=(TraceStats&&);
  TraceStats(const TraceStats&);
  TraceStats& operator=(const TraceStats&);
  bool operator==(const TraceStats&) const;
  bool operator!=(const TraceStats& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  const std::vector<TraceStats_BufferStats>& buffer_stats() const { return buffer_stats_; }
  std::vector<TraceStats_BufferStats>* mutable_buffer_stats() { return &buffer_stats_; }
  int buffer_stats_size() const;
  void clear_buffer_stats();
  TraceStats_BufferStats* add_buffer_stats();

  const std::vector<int64_t>& chunk_payload_histogram_def() const { return chunk_payload_histogram_def_; }
  std::vector<int64_t>* mutable_chunk_payload_histogram_def() { return &chunk_payload_histogram_def_; }
  int chunk_payload_histogram_def_size() const { return static_cast<int>(chunk_payload_histogram_def_.size()); }
  void clear_chunk_payload_histogram_def() { chunk_payload_histogram_def_.clear(); }
  void add_chunk_payload_histogram_def(int64_t value) { chunk_payload_histogram_def_.emplace_back(value); }
  int64_t* add_chunk_payload_histogram_def() { chunk_payload_histogram_def_.emplace_back(); return &chunk_payload_histogram_def_.back(); }

  const std::vector<TraceStats_WriterStats>& writer_stats() const { return writer_stats_; }
  std::vector<TraceStats_WriterStats>* mutable_writer_stats() { return &writer_stats_; }
  int writer_stats_size() const;
  void clear_writer_stats();
  TraceStats_WriterStats* add_writer_stats();

  bool has_producers_connected() const { return _has_field_[2]; }
  uint32_t producers_connected() const { return producers_connected_; }
  void set_producers_connected(uint32_t value) { producers_connected_ = value; _has_field_.set(2); }

  bool has_producers_seen() const { return _has_field_[3]; }
  uint64_t producers_seen() const { return producers_seen_; }
  void set_producers_seen(uint64_t value) { producers_seen_ = value; _has_field_.set(3); }

  bool has_data_sources_registered() const { return _has_field_[4]; }
  uint32_t data_sources_registered() const { return data_sources_registered_; }
  void set_data_sources_registered(uint32_t value) { data_sources_registered_ = value; _has_field_.set(4); }

  bool has_data_sources_seen() const { return _has_field_[5]; }
  uint64_t data_sources_seen() const { return data_sources_seen_; }
  void set_data_sources_seen(uint64_t value) { data_sources_seen_ = value; _has_field_.set(5); }

  bool has_tracing_sessions() const { return _has_field_[6]; }
  uint32_t tracing_sessions() const { return tracing_sessions_; }
  void set_tracing_sessions(uint32_t value) { tracing_sessions_ = value; _has_field_.set(6); }

  bool has_total_buffers() const { return _has_field_[7]; }
  uint32_t total_buffers() const { return total_buffers_; }
  void set_total_buffers(uint32_t value) { total_buffers_ = value; _has_field_.set(7); }

  bool has_chunks_discarded() const { return _has_field_[8]; }
  uint64_t chunks_discarded() const { return chunks_discarded_; }
  void set_chunks_discarded(uint64_t value) { chunks_discarded_ = value; _has_field_.set(8); }

  bool has_patches_discarded() const { return _has_field_[9]; }
  uint64_t patches_discarded() const { return patches_discarded_; }
  void set_patches_discarded(uint64_t value) { patches_discarded_ = value; _has_field_.set(9); }

  bool has_invalid_packets() const { return _has_field_[10]; }
  uint64_t invalid_packets() const { return invalid_packets_; }
  void set_invalid_packets(uint64_t value) { invalid_packets_ = value; _has_field_.set(10); }

  bool has_filter_stats() const { return _has_field_[11]; }
  const TraceStats_FilterStats& filter_stats() const { return *filter_stats_; }
  TraceStats_FilterStats* mutable_filter_stats() { _has_field_.set(11); return filter_stats_.get(); }

  bool has_flushes_requested() const { return _has_field_[12]; }
  uint64_t flushes_requested() const { return flushes_requested_; }
  void set_flushes_requested(uint64_t value) { flushes_requested_ = value; _has_field_.set(12); }

  bool has_flushes_succeeded() const { return _has_field_[13]; }
  uint64_t flushes_succeeded() const { return flushes_succeeded_; }
  void set_flushes_succeeded(uint64_t value) { flushes_succeeded_ = value; _has_field_.set(13); }

  bool has_flushes_failed() const { return _has_field_[14]; }
  uint64_t flushes_failed() const { return flushes_failed_; }
  void set_flushes_failed(uint64_t value) { flushes_failed_ = value; _has_field_.set(14); }

  bool has_final_flush_outcome() const { return _has_field_[15]; }
  TraceStats_FinalFlushOutcome final_flush_outcome() const { return final_flush_outcome_; }
  void set_final_flush_outcome(TraceStats_FinalFlushOutcome value) { final_flush_outcome_ = value; _has_field_.set(15); }

 private:
  std::vector<TraceStats_BufferStats> buffer_stats_;
  std::vector<int64_t> chunk_payload_histogram_def_;
  std::vector<TraceStats_WriterStats> writer_stats_;
  uint32_t producers_connected_{};
  uint64_t producers_seen_{};
  uint32_t data_sources_registered_{};
  uint64_t data_sources_seen_{};
  uint32_t tracing_sessions_{};
  uint32_t total_buffers_{};
  uint64_t chunks_discarded_{};
  uint64_t patches_discarded_{};
  uint64_t invalid_packets_{};
  ::protozero::CopyablePtr<TraceStats_FilterStats> filter_stats_;
  uint64_t flushes_requested_{};
  uint64_t flushes_succeeded_{};
  uint64_t flushes_failed_{};
  TraceStats_FinalFlushOutcome final_flush_outcome_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<19> _has_field_{};
};


class PERFETTO_EXPORT_COMPONENT TraceStats_FilterStats : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kInputPacketsFieldNumber = 1,
    kInputBytesFieldNumber = 2,
    kOutputBytesFieldNumber = 3,
    kErrorsFieldNumber = 4,
    kTimeTakenNsFieldNumber = 5,
    kBytesDiscardedPerBufferFieldNumber = 20,
  };

  TraceStats_FilterStats();
  ~TraceStats_FilterStats() override;
  TraceStats_FilterStats(TraceStats_FilterStats&&) noexcept;
  TraceStats_FilterStats& operator=(TraceStats_FilterStats&&);
  TraceStats_FilterStats(const TraceStats_FilterStats&);
  TraceStats_FilterStats& operator=(const TraceStats_FilterStats&);
  bool operator==(const TraceStats_FilterStats&) const;
  bool operator!=(const TraceStats_FilterStats& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_input_packets() const { return _has_field_[1]; }
  uint64_t input_packets() const { return input_packets_; }
  void set_input_packets(uint64_t value) { input_packets_ = value; _has_field_.set(1); }

  bool has_input_bytes() const { return _has_field_[2]; }
  uint64_t input_bytes() const { return input_bytes_; }
  void set_input_bytes(uint64_t value) { input_bytes_ = value; _has_field_.set(2); }

  bool has_output_bytes() const { return _has_field_[3]; }
  uint64_t output_bytes() const { return output_bytes_; }
  void set_output_bytes(uint64_t value) { output_bytes_ = value; _has_field_.set(3); }

  bool has_errors() const { return _has_field_[4]; }
  uint64_t errors() const { return errors_; }
  void set_errors(uint64_t value) { errors_ = value; _has_field_.set(4); }

  bool has_time_taken_ns() const { return _has_field_[5]; }
  uint64_t time_taken_ns() const { return time_taken_ns_; }
  void set_time_taken_ns(uint64_t value) { time_taken_ns_ = value; _has_field_.set(5); }

  const std::vector<uint64_t>& bytes_discarded_per_buffer() const { return bytes_discarded_per_buffer_; }
  std::vector<uint64_t>* mutable_bytes_discarded_per_buffer() { return &bytes_discarded_per_buffer_; }
  int bytes_discarded_per_buffer_size() const { return static_cast<int>(bytes_discarded_per_buffer_.size()); }
  void clear_bytes_discarded_per_buffer() { bytes_discarded_per_buffer_.clear(); }
  void add_bytes_discarded_per_buffer(uint64_t value) { bytes_discarded_per_buffer_.emplace_back(value); }
  uint64_t* add_bytes_discarded_per_buffer() { bytes_discarded_per_buffer_.emplace_back(); return &bytes_discarded_per_buffer_.back(); }

 private:
  uint64_t input_packets_{};
  uint64_t input_bytes_{};
  uint64_t output_bytes_{};
  uint64_t errors_{};
  uint64_t time_taken_ns_{};
  std::vector<uint64_t> bytes_discarded_per_buffer_;

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<21> _has_field_{};
};


class PERFETTO_EXPORT_COMPONENT TraceStats_WriterStats : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kSequenceIdFieldNumber = 1,
    kBufferFieldNumber = 4,
    kChunkPayloadHistogramCountsFieldNumber = 2,
    kChunkPayloadHistogramSumFieldNumber = 3,
  };

  TraceStats_WriterStats();
  ~TraceStats_WriterStats() override;
  TraceStats_WriterStats(TraceStats_WriterStats&&) noexcept;
  TraceStats_WriterStats& operator=(TraceStats_WriterStats&&);
  TraceStats_WriterStats(const TraceStats_WriterStats&);
  TraceStats_WriterStats& operator=(const TraceStats_WriterStats&);
  bool operator==(const TraceStats_WriterStats&) const;
  bool operator!=(const TraceStats_WriterStats& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_sequence_id() const { return _has_field_[1]; }
  uint64_t sequence_id() const { return sequence_id_; }
  void set_sequence_id(uint64_t value) { sequence_id_ = value; _has_field_.set(1); }

  bool has_buffer() const { return _has_field_[4]; }
  uint32_t buffer() const { return buffer_; }
  void set_buffer(uint32_t value) { buffer_ = value; _has_field_.set(4); }

  const std::vector<uint64_t>& chunk_payload_histogram_counts() const { return chunk_payload_histogram_counts_; }
  std::vector<uint64_t>* mutable_chunk_payload_histogram_counts() { return &chunk_payload_histogram_counts_; }
  int chunk_payload_histogram_counts_size() const { return static_cast<int>(chunk_payload_histogram_counts_.size()); }
  void clear_chunk_payload_histogram_counts() { chunk_payload_histogram_counts_.clear(); }
  void add_chunk_payload_histogram_counts(uint64_t value) { chunk_payload_histogram_counts_.emplace_back(value); }
  uint64_t* add_chunk_payload_histogram_counts() { chunk_payload_histogram_counts_.emplace_back(); return &chunk_payload_histogram_counts_.back(); }

  const std::vector<int64_t>& chunk_payload_histogram_sum() const { return chunk_payload_histogram_sum_; }
  std::vector<int64_t>* mutable_chunk_payload_histogram_sum() { return &chunk_payload_histogram_sum_; }
  int chunk_payload_histogram_sum_size() const { return static_cast<int>(chunk_payload_histogram_sum_.size()); }
  void clear_chunk_payload_histogram_sum() { chunk_payload_histogram_sum_.clear(); }
  void add_chunk_payload_histogram_sum(int64_t value) { chunk_payload_histogram_sum_.emplace_back(value); }
  int64_t* add_chunk_payload_histogram_sum() { chunk_payload_histogram_sum_.emplace_back(); return &chunk_payload_histogram_sum_.back(); }

 private:
  uint64_t sequence_id_{};
  uint32_t buffer_{};
  std::vector<uint64_t> chunk_payload_histogram_counts_;
  std::vector<int64_t> chunk_payload_histogram_sum_;

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<5> _has_field_{};
};


class PERFETTO_EXPORT_COMPONENT TraceStats_BufferStats : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kBufferSizeFieldNumber = 12,
    kBytesWrittenFieldNumber = 1,
    kBytesOverwrittenFieldNumber = 13,
    kBytesReadFieldNumber = 14,
    kPaddingBytesWrittenFieldNumber = 15,
    kPaddingBytesClearedFieldNumber = 16,
    kChunksWrittenFieldNumber = 2,
    kChunksRewrittenFieldNumber = 10,
    kChunksOverwrittenFieldNumber = 3,
    kChunksDiscardedFieldNumber = 18,
    kChunksReadFieldNumber = 17,
    kChunksCommittedOutOfOrderFieldNumber = 11,
    kWriteWrapCountFieldNumber = 4,
    kPatchesSucceededFieldNumber = 5,
    kPatchesFailedFieldNumber = 6,
    kReadaheadsSucceededFieldNumber = 7,
    kReadaheadsFailedFieldNumber = 8,
    kAbiViolationsFieldNumber = 9,
    kTraceWriterPacketLossFieldNumber = 19,
  };

  TraceStats_BufferStats();
  ~TraceStats_BufferStats() override;
  TraceStats_BufferStats(TraceStats_BufferStats&&) noexcept;
  TraceStats_BufferStats& operator=(TraceStats_BufferStats&&);
  TraceStats_BufferStats(const TraceStats_BufferStats&);
  TraceStats_BufferStats& operator=(const TraceStats_BufferStats&);
  bool operator==(const TraceStats_BufferStats&) const;
  bool operator!=(const TraceStats_BufferStats& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_buffer_size() const { return _has_field_[12]; }
  uint64_t buffer_size() const { return buffer_size_; }
  void set_buffer_size(uint64_t value) { buffer_size_ = value; _has_field_.set(12); }

  bool has_bytes_written() const { return _has_field_[1]; }
  uint64_t bytes_written() const { return bytes_written_; }
  void set_bytes_written(uint64_t value) { bytes_written_ = value; _has_field_.set(1); }

  bool has_bytes_overwritten() const { return _has_field_[13]; }
  uint64_t bytes_overwritten() const { return bytes_overwritten_; }
  void set_bytes_overwritten(uint64_t value) { bytes_overwritten_ = value; _has_field_.set(13); }

  bool has_bytes_read() const { return _has_field_[14]; }
  uint64_t bytes_read() const { return bytes_read_; }
  void set_bytes_read(uint64_t value) { bytes_read_ = value; _has_field_.set(14); }

  bool has_padding_bytes_written() const { return _has_field_[15]; }
  uint64_t padding_bytes_written() const { return padding_bytes_written_; }
  void set_padding_bytes_written(uint64_t value) { padding_bytes_written_ = value; _has_field_.set(15); }

  bool has_padding_bytes_cleared() const { return _has_field_[16]; }
  uint64_t padding_bytes_cleared() const { return padding_bytes_cleared_; }
  void set_padding_bytes_cleared(uint64_t value) { padding_bytes_cleared_ = value; _has_field_.set(16); }

  bool has_chunks_written() const { return _has_field_[2]; }
  uint64_t chunks_written() const { return chunks_written_; }
  void set_chunks_written(uint64_t value) { chunks_written_ = value; _has_field_.set(2); }

  bool has_chunks_rewritten() const { return _has_field_[10]; }
  uint64_t chunks_rewritten() const { return chunks_rewritten_; }
  void set_chunks_rewritten(uint64_t value) { chunks_rewritten_ = value; _has_field_.set(10); }

  bool has_chunks_overwritten() const { return _has_field_[3]; }
  uint64_t chunks_overwritten() const { return chunks_overwritten_; }
  void set_chunks_overwritten(uint64_t value) { chunks_overwritten_ = value; _has_field_.set(3); }

  bool has_chunks_discarded() const { return _has_field_[18]; }
  uint64_t chunks_discarded() const { return chunks_discarded_; }
  void set_chunks_discarded(uint64_t value) { chunks_discarded_ = value; _has_field_.set(18); }

  bool has_chunks_read() const { return _has_field_[17]; }
  uint64_t chunks_read() const { return chunks_read_; }
  void set_chunks_read(uint64_t value) { chunks_read_ = value; _has_field_.set(17); }

  bool has_chunks_committed_out_of_order() const { return _has_field_[11]; }
  uint64_t chunks_committed_out_of_order() const { return chunks_committed_out_of_order_; }
  void set_chunks_committed_out_of_order(uint64_t value) { chunks_committed_out_of_order_ = value; _has_field_.set(11); }

  bool has_write_wrap_count() const { return _has_field_[4]; }
  uint64_t write_wrap_count() const { return write_wrap_count_; }
  void set_write_wrap_count(uint64_t value) { write_wrap_count_ = value; _has_field_.set(4); }

  bool has_patches_succeeded() const { return _has_field_[5]; }
  uint64_t patches_succeeded() const { return patches_succeeded_; }
  void set_patches_succeeded(uint64_t value) { patches_succeeded_ = value; _has_field_.set(5); }

  bool has_patches_failed() const { return _has_field_[6]; }
  uint64_t patches_failed() const { return patches_failed_; }
  void set_patches_failed(uint64_t value) { patches_failed_ = value; _has_field_.set(6); }

  bool has_readaheads_succeeded() const { return _has_field_[7]; }
  uint64_t readaheads_succeeded() const { return readaheads_succeeded_; }
  void set_readaheads_succeeded(uint64_t value) { readaheads_succeeded_ = value; _has_field_.set(7); }

  bool has_readaheads_failed() const { return _has_field_[8]; }
  uint64_t readaheads_failed() const { return readaheads_failed_; }
  void set_readaheads_failed(uint64_t value) { readaheads_failed_ = value; _has_field_.set(8); }

  bool has_abi_violations() const { return _has_field_[9]; }
  uint64_t abi_violations() const { return abi_violations_; }
  void set_abi_violations(uint64_t value) { abi_violations_ = value; _has_field_.set(9); }

  bool has_trace_writer_packet_loss() const { return _has_field_[19]; }
  uint64_t trace_writer_packet_loss() const { return trace_writer_packet_loss_; }
  void set_trace_writer_packet_loss(uint64_t value) { trace_writer_packet_loss_ = value; _has_field_.set(19); }

 private:
  uint64_t buffer_size_{};
  uint64_t bytes_written_{};
  uint64_t bytes_overwritten_{};
  uint64_t bytes_read_{};
  uint64_t padding_bytes_written_{};
  uint64_t padding_bytes_cleared_{};
  uint64_t chunks_written_{};
  uint64_t chunks_rewritten_{};
  uint64_t chunks_overwritten_{};
  uint64_t chunks_discarded_{};
  uint64_t chunks_read_{};
  uint64_t chunks_committed_out_of_order_{};
  uint64_t write_wrap_count_{};
  uint64_t patches_succeeded_{};
  uint64_t patches_failed_{};
  uint64_t readaheads_succeeded_{};
  uint64_t readaheads_failed_{};
  uint64_t abi_violations_{};
  uint64_t trace_writer_packet_loss_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<20> _has_field_{};
};

}  // namespace perfetto
}  // namespace protos
}  // namespace gen

#endif  // PERFETTO_PROTOS_PROTOS_PERFETTO_COMMON_TRACE_STATS_PROTO_CPP_H_
