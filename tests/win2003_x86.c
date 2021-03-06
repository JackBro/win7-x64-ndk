/* Version definitions */
#undef NTDDI_VERSION
#define NTDDI_VERSION NTDDI_WS03SP1
#undef _WIN32_WINNT
#define _WIN32_WINNT _WIN32_WINNT_WS03

#include <..\ndk\ntifs.h>
#include <..\ndk\ndk/ntndk.h>

#define C_ASSERT_FIELD(Type, Offset, MemberType, MemberName) C_ASSERT(FIELD_OFFSET(Type, MemberName) == Offset);

/* KTHREAD */
C_ASSERT_FIELD(KTHREAD, 0x000, DISPATCHER_HEADER, Header)
C_ASSERT_FIELD(KTHREAD, 0x010, LIST_ENTRY, MutantListHead)
C_ASSERT_FIELD(KTHREAD, 0x018, PVOID, InitialStack)
C_ASSERT_FIELD(KTHREAD, 0x01C, PVOID, StackLimit)
C_ASSERT_FIELD(KTHREAD, 0x020, PVOID, KernelStack)
C_ASSERT_FIELD(KTHREAD, 0x024, ULONG, ThreadLock)
C_ASSERT_FIELD(KTHREAD, 0x028, KAPC_STATE, ApcState)
C_ASSERT_FIELD(KTHREAD, 0x028, UCHAR, ApcStateFill)
C_ASSERT_FIELD(KTHREAD, 0x03F, UCHAR, ApcQueueable)
C_ASSERT_FIELD(KTHREAD, 0x040, UCHAR, NextProcessor)
C_ASSERT_FIELD(KTHREAD, 0x041, UCHAR, DeferredProcessor)
C_ASSERT_FIELD(KTHREAD, 0x042, UCHAR, AdjustReason)
C_ASSERT_FIELD(KTHREAD, 0x043, CHAR, AdjustIncrement)
C_ASSERT_FIELD(KTHREAD, 0x044, ULONG, ApcQueueLock)
C_ASSERT_FIELD(KTHREAD, 0x048, ULONG, ContextSwitches)
C_ASSERT_FIELD(KTHREAD, 0x04C, UCHAR, State)
C_ASSERT_FIELD(KTHREAD, 0x04D, UCHAR, NpxState)
C_ASSERT_FIELD(KTHREAD, 0x04E, UCHAR, WaitIrql)
C_ASSERT_FIELD(KTHREAD, 0x04F, CHAR, WaitMode)
C_ASSERT_FIELD(KTHREAD, 0x050, LONG, WaitStatus)
C_ASSERT_FIELD(KTHREAD, 0x054, PKWAIT_BLOCK,  WaitBlockList)
C_ASSERT_FIELD(KTHREAD, 0x054, PKGATE, GateObject)
C_ASSERT_FIELD(KTHREAD, 0x058, UCHAR, Alertable)
C_ASSERT_FIELD(KTHREAD, 0x059, UCHAR, WaitNext)
C_ASSERT_FIELD(KTHREAD, 0x05A, UCHAR, WaitReason)
C_ASSERT_FIELD(KTHREAD, 0x05B, CHAR, Priority)
C_ASSERT_FIELD(KTHREAD, 0x05C, UCHAR, EnableStackSwap)
C_ASSERT_FIELD(KTHREAD, 0x05D, UCHAR, SwapBusy)
C_ASSERT_FIELD(KTHREAD, 0x05E, UCHAR, Alerted)
C_ASSERT_FIELD(KTHREAD, 0x060, LIST_ENTRY, WaitListEntry)
C_ASSERT_FIELD(KTHREAD, 0x060, SINGLE_LIST_ENTRY, SwapListEntry)
C_ASSERT_FIELD(KTHREAD, 0x068, KQUEUE*, Queue)
C_ASSERT_FIELD(KTHREAD, 0x06C, ULONG, WaitTime)
C_ASSERT_FIELD(KTHREAD, 0x070, INT16, KernelApcDisable)
C_ASSERT_FIELD(KTHREAD, 0x072, INT16, SpecialApcDisable)
C_ASSERT_FIELD(KTHREAD, 0x070, ULONG, CombinedApcDisable)
C_ASSERT_FIELD(KTHREAD, 0x074, PVOID, Teb)
C_ASSERT_FIELD(KTHREAD, 0x078, KTIMER, Timer)
C_ASSERT_FIELD(KTHREAD, 0x078, UCHAR, TimerFill)
//C_ASSERT_FIELD(KTHREAD, 0x0A0, LONG, AutoAlignment)
//C_ASSERT_FIELD(KTHREAD, 0x0A0, LONG, DisableBoost)
//C_ASSERT_FIELD(KTHREAD, 0x0A0, LONG, ReservedFlags)
C_ASSERT_FIELD(KTHREAD, 0x0A0, LONG, ThreadFlags)
C_ASSERT_FIELD(KTHREAD, 0x0A8, KWAIT_BLOCK, WaitBlock)
C_ASSERT_FIELD(KTHREAD, 0x0A8, UCHAR, WaitBlockFill0)
C_ASSERT_FIELD(KTHREAD, 0x0BF, UCHAR, SystemAffinityActive)
C_ASSERT_FIELD(KTHREAD, 0x0A8, UCHAR, WaitBlockFill1)
C_ASSERT_FIELD(KTHREAD, 0x0D7, CHAR, PreviousMode)
C_ASSERT_FIELD(KTHREAD, 0x0A8, UCHAR, WaitBlockFill2)
C_ASSERT_FIELD(KTHREAD, 0x0EF, UCHAR, ResourceIndex)
C_ASSERT_FIELD(KTHREAD, 0x0A8, UCHAR, WaitBlockFill3)
C_ASSERT_FIELD(KTHREAD, 0x107, UCHAR, LargeStack)
C_ASSERT_FIELD(KTHREAD, 0x108, LIST_ENTRY, QueueListEntry)
C_ASSERT_FIELD(KTHREAD, 0x110, PKTRAP_FRAME, TrapFrame)
C_ASSERT_FIELD(KTHREAD, 0x114, PVOID, CallbackStack)
C_ASSERT_FIELD(KTHREAD, 0x118, PVOID, ServiceTable)
C_ASSERT_FIELD(KTHREAD, 0x11C, UCHAR, ApcStateIndex)
C_ASSERT_FIELD(KTHREAD, 0x11D, UCHAR, IdealProcessor)
C_ASSERT_FIELD(KTHREAD, 0x11E, UCHAR, Preempted)
C_ASSERT_FIELD(KTHREAD, 0x11F, UCHAR, ProcessReadyQueue)
C_ASSERT_FIELD(KTHREAD, 0x120, UCHAR, KernelStackResident)
C_ASSERT_FIELD(KTHREAD, 0x121, CHAR, BasePriority)
C_ASSERT_FIELD(KTHREAD, 0x122, CHAR, PriorityDecrement)
C_ASSERT_FIELD(KTHREAD, 0x123, CHAR, Saturation)
C_ASSERT_FIELD(KTHREAD, 0x124, ULONG, UserAffinity)
C_ASSERT_FIELD(KTHREAD, 0x128, PKPROCESS, Process)
C_ASSERT_FIELD(KTHREAD, 0x12C, ULONG, Affinity)
C_ASSERT_FIELD(KTHREAD, 0x130, PKAPC_STATE, ApcStatePointer)
C_ASSERT_FIELD(KTHREAD, 0x138, KAPC_STATE, SavedApcState)
C_ASSERT_FIELD(KTHREAD, 0x138, UCHAR, SavedApcStateFill)
C_ASSERT_FIELD(KTHREAD, 0x14F, CHAR, FreezeCount)
C_ASSERT_FIELD(KTHREAD, 0x150, CHAR, SuspendCount)
C_ASSERT_FIELD(KTHREAD, 0x151, UCHAR, UserIdealProcessor)
C_ASSERT_FIELD(KTHREAD, 0x152, UCHAR, CalloutActive)
C_ASSERT_FIELD(KTHREAD, 0x153, UCHAR, Iopl)

