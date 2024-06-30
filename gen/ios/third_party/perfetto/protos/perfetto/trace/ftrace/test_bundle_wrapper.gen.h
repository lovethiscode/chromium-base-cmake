// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_TEST_BUNDLE_WRAPPER_PROTO_CPP_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_TEST_BUNDLE_WRAPPER_PROTO_CPP_H_

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
class TestBundleWrapper;
class FtraceEventBundle;
class FtraceEventBundle_FtraceError;
class FtraceEventBundle_CompactSched;
class FtraceEvent;
class BclIrqTriggerFtraceEvent;
class MaliMaliPMMCURESETWAITFtraceEvent;
class MaliMaliPMMCUPOWERDOWNFtraceEvent;
class MaliMaliPMMCUPENDONRELOADFtraceEvent;
class MaliMaliPMMCUPENDOFFFtraceEvent;
class MaliMaliPMMCUONSLEEPINITIATEFtraceEvent;
class MaliMaliPMMCUONPENDSLEEPFtraceEvent;
class MaliMaliPMMCUONPENDHALTFtraceEvent;
class MaliMaliPMMCUONHWCNTENABLEFtraceEvent;
class MaliMaliPMMCUONHWCNTDISABLEFtraceEvent;
class MaliMaliPMMCUONHALTFtraceEvent;
class MaliMaliPMMCUONGLBREINITPENDFtraceEvent;
class MaliMaliPMMCUONCOREATTRUPDATEPENDFtraceEvent;
class MaliMaliPMMCUONFtraceEvent;
class MaliMaliPMMCUOFFFtraceEvent;
class MaliMaliPMMCUINSLEEPFtraceEvent;
class MaliMaliPMMCUHCTLSHADERSREADYOFFFtraceEvent;
class MaliMaliPMMCUHCTLSHADERSPENDONFtraceEvent;
class MaliMaliPMMCUHCTLSHADERSPENDOFFFtraceEvent;
class MaliMaliPMMCUHCTLSHADERSCOREOFFPENDFtraceEvent;
class MaliMaliPMMCUHCTLMCUONRECHECKFtraceEvent;
class MaliMaliPMMCUHCTLCOREINACTIVEPENDFtraceEvent;
class MaliMaliPMMCUHCTLCORESNOTIFYPENDFtraceEvent;
class MaliMaliPMMCUHCTLCORESDOWNSCALENOTIFYPENDFtraceEvent;
class KgslGpuFrequencyFtraceEvent;
class DcvshFreqFtraceEvent;
class ThermalExynosAcpmHighOverheadFtraceEvent;
class ThermalExynosAcpmBulkFtraceEvent;
class DevicePmCallbackEndFtraceEvent;
class DevicePmCallbackStartFtraceEvent;
class GoogleIrmEventFtraceEvent;
class GoogleIccEventFtraceEvent;
class FastrpcDmaMapFtraceEvent;
class FastrpcDmaUnmapFtraceEvent;
class FastrpcDmaAllocFtraceEvent;
class FastrpcDmaFreeFtraceEvent;
class F2fsGcEndFtraceEvent;
class F2fsGcBeginFtraceEvent;
class F2fsBackgroundGcFtraceEvent;
class DpuDsiTxFtraceEvent;
class DpuDsiRxFtraceEvent;
class DpuDsiCmdFifoStatusFtraceEvent;
class SchedMigrateTaskFtraceEvent;
class PanelWriteGenericFtraceEvent;
class RpmStatusFtraceEvent;
class GpuWorkPeriodFtraceEvent;
class SchedSwitchWithCtrsFtraceEvent;
class BinderReturnFtraceEvent;
class BinderCommandFtraceEvent;
class SamsungTracingMarkWriteFtraceEvent;
class MaliMaliCSFINTERRUPTENDFtraceEvent;
class MaliMaliCSFINTERRUPTSTARTFtraceEvent;
class SuspendResumeMinimalFtraceEvent;
class HostMemAbortFtraceEvent;
class HostSmcFtraceEvent;
class HostHcallFtraceEvent;
class HypExitFtraceEvent;
class HypEnterFtraceEvent;
class MaliMaliKCPUFENCEWAITENDFtraceEvent;
class MaliMaliKCPUFENCEWAITSTARTFtraceEvent;
class MaliMaliKCPUFENCESIGNALFtraceEvent;
class MaliMaliKCPUCQSWAITENDFtraceEvent;
class MaliMaliKCPUCQSWAITSTARTFtraceEvent;
class MaliMaliKCPUCQSSETFtraceEvent;
class VirtioGpuCmdResponseFtraceEvent;
class VirtioGpuCmdQueueFtraceEvent;
class LwisTracingMarkWriteFtraceEvent;
class CmaAllocInfoFtraceEvent;
class CmaAllocStartFtraceEvent;
class TrustyEnqueueNopFtraceEvent;
class TrustyIpcRxFtraceEvent;
class TrustyIpcReadEndFtraceEvent;
class TrustyIpcReadFtraceEvent;
class TrustyIpcPollFtraceEvent;
class TrustyIpcWriteFtraceEvent;
class TrustyIpcConnectEndFtraceEvent;
class TrustyIpcConnectFtraceEvent;
class TrustyIpcHandleEventFtraceEvent;
class TrustyIrqFtraceEvent;
class TrustyReclaimMemoryDoneFtraceEvent;
class TrustyReclaimMemoryFtraceEvent;
class TrustyShareMemoryDoneFtraceEvent;
class TrustyShareMemoryFtraceEvent;
class TrustyStdCall32DoneFtraceEvent;
class TrustyStdCall32FtraceEvent;
class TrustySmcDoneFtraceEvent;
class TrustySmcFtraceEvent;
class MmShrinkSlabEndFtraceEvent;
class MmShrinkSlabStartFtraceEvent;
class VirtioVideoResourceQueueDoneFtraceEvent;
class VirtioVideoResourceQueueFtraceEvent;
class VirtioVideoCmdDoneFtraceEvent;
class VirtioVideoCmdFtraceEvent;
class FuncgraphExitFtraceEvent;
class FuncgraphEntryFtraceEvent;
class AndroidFsFsyncStartFtraceEvent;
class AndroidFsFsyncEndFtraceEvent;
class AndroidFsDatawriteStartFtraceEvent;
class AndroidFsDatawriteEndFtraceEvent;
class AndroidFsDatareadStartFtraceEvent;
class AndroidFsDatareadEndFtraceEvent;
class DsiTxFtraceEvent;
class DsiRxFtraceEvent;
class DsiCmdFifoStatusFtraceEvent;
class Vb2V4l2DqbufFtraceEvent;
class Vb2V4l2QbufFtraceEvent;
class Vb2V4l2BufDoneFtraceEvent;
class Vb2V4l2BufQueueFtraceEvent;
class V4l2DqbufFtraceEvent;
class V4l2QbufFtraceEvent;
class SchedCpuUtilCfsFtraceEvent;
class F2fsIostatLatencyFtraceEvent;
class F2fsIostatFtraceEvent;
class DmaFenceWaitEndFtraceEvent;
class DmaFenceWaitStartFtraceEvent;
class DmaFenceSignaledFtraceEvent;
class DmaFenceEmitFtraceEvent;
class DmaFenceInitFtraceEvent;
class DrmSchedProcessJobFtraceEvent;
class DrmRunJobFtraceEvent;
class DrmSchedJobFtraceEvent;
class DrmVblankEventDeliveredFtraceEvent;
class DrmVblankEventFtraceEvent;
class ConsoleFtraceEvent;
class UfshcdClkGatingFtraceEvent;
class UfshcdCommandFtraceEvent;
class WakeupSourceDeactivateFtraceEvent;
class WakeupSourceActivateFtraceEvent;
class VgicUpdateIrqPendingFtraceEvent;
class TrapRegFtraceEvent;
class KvmWfxArm64FtraceEvent;
class KvmVcpuWakeupFtraceEvent;
class KvmUserspaceExitFtraceEvent;
class KvmUnmapHvaRangeFtraceEvent;
class KvmToggleCacheFtraceEvent;
class KvmTimerUpdateIrqFtraceEvent;
class KvmTimerSaveStateFtraceEvent;
class KvmTimerRestoreStateFtraceEvent;
class KvmTimerHrtimerExpireFtraceEvent;
class KvmTimerEmulateFtraceEvent;
class KvmTestAgeHvaFtraceEvent;
class KvmSysAccessFtraceEvent;
class KvmSetWayFlushFtraceEvent;
class KvmSetSpteHvaFtraceEvent;
class KvmSetIrqFtraceEvent;
class KvmSetGuestDebugFtraceEvent;
class KvmMmioEmulateFtraceEvent;
class KvmMmioFtraceEvent;
class KvmIrqLineFtraceEvent;
class KvmHvcArm64FtraceEvent;
class KvmHandleSysRegFtraceEvent;
class KvmGuestFaultFtraceEvent;
class KvmGetTimerMapFtraceEvent;
class KvmFpuFtraceEvent;
class KvmExitFtraceEvent;
class KvmEntryFtraceEvent;
class KvmArmSetupDebugFtraceEvent;
class KvmArmSetRegsetFtraceEvent;
class KvmArmSetDreg32FtraceEvent;
class KvmArmClearDebugFtraceEvent;
class KvmAgePageFtraceEvent;
class KvmAgeHvaFtraceEvent;
class KvmAckIrqFtraceEvent;
class KvmAccessFaultFtraceEvent;
class KfreeSkbFtraceEvent;
class NapiGroReceiveExitFtraceEvent;
class NapiGroReceiveEntryFtraceEvent;
class CrosEcSensorhubDataFtraceEvent;
class TcpRetransmitSkbFtraceEvent;
class InetSockSetStateFtraceEvent;
class NetDevXmitFtraceEvent;
class NetifReceiveSkbFtraceEvent;
class RssStatThrottledFtraceEvent;
class SdeSdePerfUpdateBusFtraceEvent;
class SdeSdePerfSetQosLutsFtraceEvent;
class SdeSdePerfCrtcUpdateFtraceEvent;
class SdeSdePerfCalcCrtcFtraceEvent;
class SdeSdeEvtlogFtraceEvent;
class SchedPiSetprioFtraceEvent;
class CpuhpPauseFtraceEvent;
class DmaHeapStatFtraceEvent;
class MaliTracingMarkWriteFtraceEvent;
class G2dTracingMarkWriteFtraceEvent;
class DpuTracingMarkWriteFtraceEvent;
class FastrpcDmaStatFtraceEvent;
class CpuhpLatencyFtraceEvent;
class CpuhpEnterFtraceEvent;
class CpuhpMultiEnterFtraceEvent;
class CpuhpExitFtraceEvent;
class CdevUpdateFtraceEvent;
class ThermalTemperatureFtraceEvent;
class GpuMemTotalFtraceEvent;
class ScmCallEndFtraceEvent;
class ScmCallStartFtraceEvent;
class IonBufferDestroyFtraceEvent;
class IonBufferCreateFtraceEvent;
class IonStatFtraceEvent;
class MarkVictimFtraceEvent;
class SdeTracingMarkWriteFtraceEvent;
class GpuFrequencyFtraceEvent;
class ZeroFtraceEvent;
class SysExitFtraceEvent;
class SysEnterFtraceEvent;
class MmEventRecordFtraceEvent;
class GenericFtraceEvent;
class GenericFtraceEvent_Field;
class OomScoreAdjUpdateFtraceEvent;
class SignalGenerateFtraceEvent;
class SignalDeliverFtraceEvent;
class BinderTransactionAllocBufFtraceEvent;
class ClkSetRateFtraceEvent;
class ClkDisableFtraceEvent;
class ClkEnableFtraceEvent;
class FenceSignaledFtraceEvent;
class FenceEnableSignalFtraceEvent;
class FenceDestroyFtraceEvent;
class FenceInitFtraceEvent;
class IonHeapGrowFtraceEvent;
class IonHeapShrinkFtraceEvent;
class RssStatFtraceEvent;
class MmPagePcpuDrainFtraceEvent;
class MmPageFreeBatchedFtraceEvent;
class MmPageFreeFtraceEvent;
class MmPageAllocZoneLockedFtraceEvent;
class MmPageAllocExtfragFtraceEvent;
class MmPageAllocFtraceEvent;
class MigrateRetryFtraceEvent;
class MigratePagesStartFtraceEvent;
class MigratePagesEndFtraceEvent;
class KmemCacheFreeFtraceEvent;
class KmemCacheAllocNodeFtraceEvent;
class KmemCacheAllocFtraceEvent;
class KmallocNodeFtraceEvent;
class KmallocFtraceEvent;
class KfreeFtraceEvent;
class IonSecureCmaShrinkPoolStartFtraceEvent;
class IonSecureCmaShrinkPoolEndFtraceEvent;
class IonSecureCmaAllocateStartFtraceEvent;
class IonSecureCmaAllocateEndFtraceEvent;
class IonSecureCmaAddToPoolStartFtraceEvent;
class IonSecureCmaAddToPoolEndFtraceEvent;
class IonPrefetchingFtraceEvent;
class IonCpSecureBufferStartFtraceEvent;
class IonCpSecureBufferEndFtraceEvent;
class IonCpAllocRetryFtraceEvent;
class IonAllocBufferStartFtraceEvent;
class IonAllocBufferFallbackFtraceEvent;
class IonAllocBufferFailFtraceEvent;
class IonAllocBufferEndFtraceEvent;
class IommuSecPtblMapRangeStartFtraceEvent;
class IommuSecPtblMapRangeEndFtraceEvent;
class IommuMapRangeFtraceEvent;
class DmaAllocContiguousRetryFtraceEvent;
class AllocPagesSysStartFtraceEvent;
class AllocPagesSysFailFtraceEvent;
class AllocPagesSysEndFtraceEvent;
class AllocPagesIommuStartFtraceEvent;
class AllocPagesIommuFailFtraceEvent;
class AllocPagesIommuEndFtraceEvent;
class F2fsWriteEndFtraceEvent;
class F2fsWriteCheckpointFtraceEvent;
class F2fsWriteBeginFtraceEvent;
class F2fsVmPageMkwriteFtraceEvent;
class F2fsUnlinkExitFtraceEvent;
class F2fsUnlinkEnterFtraceEvent;
class F2fsTruncatePartialNodesFtraceEvent;
class F2fsTruncateNodesExitFtraceEvent;
class F2fsTruncateNodesEnterFtraceEvent;
class F2fsTruncateNodeFtraceEvent;
class F2fsTruncateInodeBlocksExitFtraceEvent;
class F2fsTruncateInodeBlocksEnterFtraceEvent;
class F2fsTruncateDataBlocksRangeFtraceEvent;
class F2fsTruncateBlocksExitFtraceEvent;
class F2fsTruncateBlocksEnterFtraceEvent;
class F2fsTruncateFtraceEvent;
class F2fsSyncFsFtraceEvent;
class F2fsSyncFileExitFtraceEvent;
class F2fsSyncFileEnterFtraceEvent;
class F2fsSubmitWritePageFtraceEvent;
class F2fsSetPageDirtyFtraceEvent;
class F2fsReserveNewBlockFtraceEvent;
class F2fsReadpageFtraceEvent;
class F2fsNewInodeFtraceEvent;
class F2fsIgetExitFtraceEvent;
class F2fsIgetFtraceEvent;
class F2fsGetVictimFtraceEvent;
class F2fsGetDataBlockFtraceEvent;
class F2fsFallocateFtraceEvent;
class F2fsEvictInodeFtraceEvent;
class F2fsDoSubmitBioFtraceEvent;
class SchedProcessWaitFtraceEvent;
class SchedProcessHangFtraceEvent;
class SchedProcessFreeFtraceEvent;
class SchedProcessForkFtraceEvent;
class SchedProcessExitFtraceEvent;
class SchedProcessExecFtraceEvent;
class TaskRenameFtraceEvent;
class TaskNewtaskFtraceEvent;
class Ext4ZeroRangeFtraceEvent;
class Ext4WritepagesResultFtraceEvent;
class Ext4WritepagesFtraceEvent;
class Ext4WritepageFtraceEvent;
class Ext4WriteEndFtraceEvent;
class Ext4WriteBeginFtraceEvent;
class Ext4UnlinkExitFtraceEvent;
class Ext4UnlinkEnterFtraceEvent;
class Ext4TruncateExitFtraceEvent;
class Ext4TruncateEnterFtraceEvent;
class Ext4TrimExtentFtraceEvent;
class Ext4TrimAllFreeFtraceEvent;
class Ext4SyncFsFtraceEvent;
class Ext4RequestInodeFtraceEvent;
class Ext4RequestBlocksFtraceEvent;
class Ext4RemoveBlocksFtraceEvent;
class Ext4ReleasepageFtraceEvent;
class Ext4ReadpageFtraceEvent;
class Ext4ReadBlockBitmapLoadFtraceEvent;
class Ext4PunchHoleFtraceEvent;
class Ext4OtherInodeUpdateTimeFtraceEvent;
class Ext4MballocPreallocFtraceEvent;
class Ext4MballocFreeFtraceEvent;
class Ext4MballocDiscardFtraceEvent;
class Ext4MballocAllocFtraceEvent;
class Ext4MbReleaseInodePaFtraceEvent;
class Ext4MbReleaseGroupPaFtraceEvent;
class Ext4MbNewInodePaFtraceEvent;
class Ext4MbNewGroupPaFtraceEvent;
class Ext4MbDiscardPreallocationsFtraceEvent;
class Ext4MbBuddyBitmapLoadFtraceEvent;
class Ext4MbBitmapLoadFtraceEvent;
class Ext4MarkInodeDirtyFtraceEvent;
class Ext4LoadInodeBitmapFtraceEvent;
class Ext4LoadInodeFtraceEvent;
class Ext4JournalledWriteEndFtraceEvent;
class Ext4JournalledInvalidatepageFtraceEvent;
class Ext4JournalStartReservedFtraceEvent;
class Ext4JournalStartFtraceEvent;
class Ext4InvalidatepageFtraceEvent;
class Ext4InsertRangeFtraceEvent;
class Ext4IndMapBlocksExitFtraceEvent;
class Ext4IndMapBlocksEnterFtraceEvent;
class Ext4GetReservedClusterAllocFtraceEvent;
class Ext4GetImpliedClusterAllocExitFtraceEvent;
class Ext4FreeInodeFtraceEvent;
class Ext4FreeBlocksFtraceEvent;
class Ext4ForgetFtraceEvent;
class Ext4FindDelallocRangeFtraceEvent;
class Ext4FallocateExitFtraceEvent;
class Ext4FallocateEnterFtraceEvent;
class Ext4ExtShowExtentFtraceEvent;
class Ext4ExtRmLeafFtraceEvent;
class Ext4ExtRmIdxFtraceEvent;
class Ext4ExtRemoveSpaceDoneFtraceEvent;
class Ext4ExtRemoveSpaceFtraceEvent;
class Ext4ExtPutInCacheFtraceEvent;
class Ext4ExtMapBlocksExitFtraceEvent;
class Ext4ExtMapBlocksEnterFtraceEvent;
class Ext4ExtLoadExtentFtraceEvent;
class Ext4ExtInCacheFtraceEvent;
class Ext4ExtHandleUnwrittenExtentsFtraceEvent;
class Ext4ExtConvertToInitializedFastpathFtraceEvent;
class Ext4ExtConvertToInitializedEnterFtraceEvent;
class Ext4EvictInodeFtraceEvent;
class Ext4EsShrinkScanExitFtraceEvent;
class Ext4EsShrinkScanEnterFtraceEvent;
class Ext4EsShrinkCountFtraceEvent;
class Ext4EsShrinkFtraceEvent;
class Ext4EsRemoveExtentFtraceEvent;
class Ext4EsLookupExtentExitFtraceEvent;
class Ext4EsLookupExtentEnterFtraceEvent;
class Ext4EsInsertExtentFtraceEvent;
class Ext4EsFindDelayedExtentRangeExitFtraceEvent;
class Ext4EsFindDelayedExtentRangeEnterFtraceEvent;
class Ext4EsCacheExtentFtraceEvent;
class Ext4DropInodeFtraceEvent;
class Ext4DiscardPreallocationsFtraceEvent;
class Ext4DiscardBlocksFtraceEvent;
class Ext4DirectIOExitFtraceEvent;
class Ext4DirectIOEnterFtraceEvent;
class Ext4DaWritePagesExtentFtraceEvent;
class Ext4DaWritePagesFtraceEvent;
class Ext4DaUpdateReserveSpaceFtraceEvent;
class Ext4DaReserveSpaceFtraceEvent;
class Ext4DaReleaseSpaceFtraceEvent;
class Ext4CollapseRangeFtraceEvent;
class Ext4BeginOrderedTruncateFtraceEvent;
class Ext4AllocateInodeFtraceEvent;
class Ext4AllocateBlocksFtraceEvent;
class Ext4AllocDaBlocksFtraceEvent;
class BlockUnplugFtraceEvent;
class BlockTouchBufferFtraceEvent;
class BlockSplitFtraceEvent;
class BlockSleeprqFtraceEvent;
class BlockRqRequeueFtraceEvent;
class BlockRqRemapFtraceEvent;
class BlockRqInsertFtraceEvent;
class BlockRqCompleteFtraceEvent;
class BlockRqAbortFtraceEvent;
class BlockPlugFtraceEvent;
class BlockGetrqFtraceEvent;
class BlockDirtyBufferFtraceEvent;
class BlockBioRemapFtraceEvent;
class BlockBioQueueFtraceEvent;
class BlockBioFrontmergeFtraceEvent;
class BlockBioCompleteFtraceEvent;
class BlockBioBounceFtraceEvent;
class BlockBioBackmergeFtraceEvent;
class SchedWakeupNewFtraceEvent;
class SuspendResumeFtraceEvent;
class MmCompactionWakeupKcompactdFtraceEvent;
class MmCompactionTryToCompactPagesFtraceEvent;
class MmCompactionSuitableFtraceEvent;
class MmCompactionMigratepagesFtraceEvent;
class MmCompactionKcompactdWakeFtraceEvent;
class MmCompactionKcompactdSleepFtraceEvent;
class MmCompactionIsolateMigratepagesFtraceEvent;
class MmCompactionIsolateFreepagesFtraceEvent;
class MmCompactionFinishedFtraceEvent;
class MmCompactionEndFtraceEvent;
class MmCompactionDeferResetFtraceEvent;
class MmCompactionDeferredFtraceEvent;
class MmCompactionDeferCompactionFtraceEvent;
class MmCompactionBeginFtraceEvent;
class MmFilemapDeleteFromPageCacheFtraceEvent;
class MmFilemapAddToPageCacheFtraceEvent;
class RotatorBwAoAsContextFtraceEvent;
class MdpPerfUpdateBusFtraceEvent;
class MdpPerfPrefillCalcFtraceEvent;
class MdpCmdWaitPingpongFtraceEvent;
class MdpVideoUnderrunDoneFtraceEvent;
class MdpPerfSetWmLevelsFtraceEvent;
class MdpMixerUpdateFtraceEvent;
class MdpCmdReleaseBwFtraceEvent;
class MdpTraceCounterFtraceEvent;
class MdpPerfSetQosLutsFtraceEvent;
class MdpMisrCrcFtraceEvent;
class MdpCmdReadptrDoneFtraceEvent;
class MdpSsppSetFtraceEvent;
class MdpPerfSetPanicLutsFtraceEvent;
class MdpCompareBwFtraceEvent;
class MdpCmdPingpongDoneFtraceEvent;
class TracingMarkWriteFtraceEvent;
class MdpSsppChangeFtraceEvent;
class MdpPerfSetOtFtraceEvent;
class MdpCommitFtraceEvent;
class MdpCmdKickoffFtraceEvent;
class CgroupSetupRootFtraceEvent;
class CgroupRenameFtraceEvent;
class CgroupReleaseFtraceEvent;
class CgroupDestroyRootFtraceEvent;
class CgroupTransferTasksFtraceEvent;
class CgroupRmdirFtraceEvent;
class CgroupRemountFtraceEvent;
class CgroupMkdirFtraceEvent;
class CgroupAttachTaskFtraceEvent;
class RegulatorSetVoltageCompleteFtraceEvent;
class RegulatorSetVoltageFtraceEvent;
class RegulatorEnableDelayFtraceEvent;
class RegulatorEnableCompleteFtraceEvent;
class RegulatorEnableFtraceEvent;
class RegulatorDisableCompleteFtraceEvent;
class RegulatorDisableFtraceEvent;
class WorkqueueQueueWorkFtraceEvent;
class WorkqueueExecuteStartFtraceEvent;
class WorkqueueExecuteEndFtraceEvent;
class WorkqueueActivateWorkFtraceEvent;
class BinderUnlockFtraceEvent;
class BinderLockedFtraceEvent;
class BinderLockFtraceEvent;
class BinderSetPriorityFtraceEvent;
class BinderTransactionReceivedFtraceEvent;
class BinderTransactionFtraceEvent;
class MmVmscanKswapdSleepFtraceEvent;
class MmVmscanKswapdWakeFtraceEvent;
class MmVmscanDirectReclaimEndFtraceEvent;
class MmVmscanDirectReclaimBeginFtraceEvent;
class BlockRqIssueFtraceEvent;
class Ext4SyncFileExitFtraceEvent;
class Ext4SyncFileEnterFtraceEvent;
class Ext4DaWriteEndFtraceEvent;
class Ext4DaWriteBeginFtraceEvent;
class SyncWaitFtraceEvent;
class SyncTimelineFtraceEvent;
class SyncPtFtraceEvent;
class IrqHandlerExitFtraceEvent;
class IrqHandlerEntryFtraceEvent;
class LowmemoryKillFtraceEvent;
class SmbusReplyFtraceEvent;
class SmbusResultFtraceEvent;
class SmbusWriteFtraceEvent;
class SmbusReadFtraceEvent;
class I2cReplyFtraceEvent;
class I2cResultFtraceEvent;
class I2cWriteFtraceEvent;
class I2cReadFtraceEvent;
class SoftirqRaiseFtraceEvent;
class SoftirqExitFtraceEvent;
class SoftirqEntryFtraceEvent;
class IpiRaiseFtraceEvent;
class IpiExitFtraceEvent;
class IpiEntryFtraceEvent;
class SchedWakingFtraceEvent;
class SchedCpuHotplugFtraceEvent;
class SchedBlockedReasonFtraceEvent;
class SchedWakeupFtraceEvent;
class ClockSetRateFtraceEvent;
class ClockDisableFtraceEvent;
class ClockEnableFtraceEvent;
class CpuIdleFtraceEvent;
class CpuFrequencyLimitsFtraceEvent;
class CpuFrequencyFtraceEvent;
class SchedSwitchFtraceEvent;
class PrintFtraceEvent;
enum FtraceClock : int;
enum FtraceParseStatus : int;
}  // namespace perfetto
}  // namespace protos
}  // namespace gen

namespace protozero {
class Message;
}  // namespace protozero

namespace perfetto {
namespace protos {
namespace gen {

class PERFETTO_EXPORT_COMPONENT TestBundleWrapper : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kBeforeFieldNumber = 1,
    kBundleFieldNumber = 2,
    kAfterFieldNumber = 3,
  };

  TestBundleWrapper();
  ~TestBundleWrapper() override;
  TestBundleWrapper(TestBundleWrapper&&) noexcept;
  TestBundleWrapper& operator=(TestBundleWrapper&&);
  TestBundleWrapper(const TestBundleWrapper&);
  TestBundleWrapper& operator=(const TestBundleWrapper&);
  bool operator==(const TestBundleWrapper&) const;
  bool operator!=(const TestBundleWrapper& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_before() const { return _has_field_[1]; }
  const std::string& before() const { return before_; }
  void set_before(const std::string& value) { before_ = value; _has_field_.set(1); }

  const std::vector<FtraceEventBundle>& bundle() const { return bundle_; }
  std::vector<FtraceEventBundle>* mutable_bundle() { return &bundle_; }
  int bundle_size() const;
  void clear_bundle();
  FtraceEventBundle* add_bundle();

  bool has_after() const { return _has_field_[3]; }
  const std::string& after() const { return after_; }
  void set_after(const std::string& value) { after_ = value; _has_field_.set(3); }

 private:
  std::string before_{};
  std::vector<FtraceEventBundle> bundle_;
  std::string after_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<4> _has_field_{};
};

}  // namespace perfetto
}  // namespace protos
}  // namespace gen

#endif  // PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_TEST_BUNDLE_WRAPPER_PROTO_CPP_H_
