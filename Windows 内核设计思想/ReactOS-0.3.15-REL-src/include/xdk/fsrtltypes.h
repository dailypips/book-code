
$if (_NTIFS_)
    /* FSRTL Types */

    typedef ULONG LBN;

typedef LBN *PLBN;

typedef ULONG VBN;
typedef VBN *PVBN;

#define FSRTL_COMMON_FCB_HEADER_LAYOUT \
    CSHORT NodeTypeCode; \
    CSHORT NodeByteSize; \
    UCHAR Flags; \
    UCHAR IsFastIoPossible; \
    UCHAR Flags2; \
    UCHAR Reserved:4; \
    UCHAR Version:4; \
    PERESOURCE Resource; \
    PERESOURCE PagingIoResource; \
    LARGE_INTEGER AllocationSize; \
    LARGE_INTEGER FileSize; \
    LARGE_INTEGER ValidDataLength;

typedef struct _FSRTL_COMMON_FCB_HEADER {
    FSRTL_COMMON_FCB_HEADER_LAYOUT
} FSRTL_COMMON_FCB_HEADER, *PFSRTL_COMMON_FCB_HEADER;

#ifdef __cplusplus
typedef struct _FSRTL_ADVANCED_FCB_HEADER: FSRTL_COMMON_FCB_HEADER {
#else /* __cplusplus */
typedef struct _FSRTL_ADVANCED_FCB_HEADER {
    FSRTL_COMMON_FCB_HEADER_LAYOUT
#endif  /* __cplusplus */
    PFAST_MUTEX FastMutex;
    LIST_ENTRY FilterContexts;
#if (NTDDI_VERSION >= NTDDI_VISTA)
    EX_PUSH_LOCK PushLock;
    PVOID *FileContextSupportPointer;
#endif
} FSRTL_ADVANCED_FCB_HEADER, *PFSRTL_ADVANCED_FCB_HEADER;

#define FSRTL_FCB_HEADER_V0             (0x00)
#define FSRTL_FCB_HEADER_V1             (0x01)

#define FSRTL_FLAG_FILE_MODIFIED        (0x01)
#define FSRTL_FLAG_FILE_LENGTH_CHANGED  (0x02)
#define FSRTL_FLAG_LIMIT_MODIFIED_PAGES (0x04)
#define FSRTL_FLAG_ACQUIRE_MAIN_RSRC_EX (0x08)
#define FSRTL_FLAG_ACQUIRE_MAIN_RSRC_SH (0x10)
#define FSRTL_FLAG_USER_MAPPED_FILE     (0x20)
#define FSRTL_FLAG_ADVANCED_HEADER      (0x40)
#define FSRTL_FLAG_EOF_ADVANCE_ACTIVE   (0x80)

#define FSRTL_FLAG2_DO_MODIFIED_WRITE        (0x01)
#define FSRTL_FLAG2_SUPPORTS_FILTER_CONTEXTS (0x02)
#define FSRTL_FLAG2_PURGE_WHEN_MAPPED        (0x04)
#define FSRTL_FLAG2_IS_PAGING_FILE           (0x08)

#define FSRTL_FSP_TOP_LEVEL_IRP         (0x01)
#define FSRTL_CACHE_TOP_LEVEL_IRP       (0x02)
#define FSRTL_MOD_WRITE_TOP_LEVEL_IRP   (0x03)
#define FSRTL_FAST_IO_TOP_LEVEL_IRP     (0x04)
#define FSRTL_NETWORK1_TOP_LEVEL_IRP    ((LONG_PTR)0x05)
#define FSRTL_NETWORK2_TOP_LEVEL_IRP    ((LONG_PTR)0x06)
#define FSRTL_MAX_TOP_LEVEL_IRP_FLAG    ((LONG_PTR)0xFFFF)

typedef struct _FSRTL_AUXILIARY_BUFFER {
    PVOID Buffer;
    ULONG Length;
    ULONG Flags;
    PMDL Mdl;
} FSRTL_AUXILIARY_BUFFER, *PFSRTL_AUXILIARY_BUFFER;

#define FSRTL_AUXILIARY_FLAG_DEALLOCATE 0x00000001

typedef enum _FSRTL_COMPARISON_RESULT {
    LessThan = -1,
    EqualTo = 0,
    GreaterThan = 1
} FSRTL_COMPARISON_RESULT;

#define FSRTL_FAT_LEGAL                 0x01
#define FSRTL_HPFS_LEGAL                0x02
#define FSRTL_NTFS_LEGAL                0x04
#define FSRTL_WILD_CHARACTER            0x08
#define FSRTL_OLE_LEGAL                 0x10
#define FSRTL_NTFS_STREAM_LEGAL         (FSRTL_NTFS_LEGAL | FSRTL_OLE_LEGAL)

#define FSRTL_VOLUME_DISMOUNT           1
#define FSRTL_VOLUME_DISMOUNT_FAILED    2
#define FSRTL_VOLUME_LOCK               3
#define FSRTL_VOLUME_LOCK_FAILED        4
#define FSRTL_VOLUME_UNLOCK             5
#define FSRTL_VOLUME_MOUNT              6
#define FSRTL_VOLUME_NEEDS_CHKDSK       7
#define FSRTL_VOLUME_WORM_NEAR_FULL     8
#define FSRTL_VOLUME_WEARING_OUT        9
#define FSRTL_VOLUME_FORCED_CLOSED      10
#define FSRTL_VOLUME_INFO_MAKE_COMPAT   11
#define FSRTL_VOLUME_PREPARING_EJECT    12
#define FSRTL_VOLUME_CHANGE_SIZE        13
#define FSRTL_VOLUME_BACKGROUND_FORMAT  14

typedef VOID
(NTAPI *PFSRTL_STACK_OVERFLOW_ROUTINE)(
    _In_ PVOID Context,
    _In_ PKEVENT Event);

#if (NTDDI_VERSION >= NTDDI_VISTA)

#define FSRTL_UNC_PROVIDER_FLAGS_MAILSLOTS_SUPPORTED    0x00000001
#define FSRTL_UNC_PROVIDER_FLAGS_CSC_ENABLED            0x00000002
#define FSRTL_UNC_PROVIDER_FLAGS_DOMAIN_SVC_AWARE       0x00000004

#define FSRTL_ALLOCATE_ECPLIST_FLAG_CHARGE_QUOTA        0x00000001

#define FSRTL_ALLOCATE_ECP_FLAG_CHARGE_QUOTA            0x00000001
#define FSRTL_ALLOCATE_ECP_FLAG_NONPAGED_POOL           0x00000002

#define FSRTL_ECP_LOOKASIDE_FLAG_NONPAGED_POOL          0x00000002

#define FSRTL_VIRTDISK_FULLY_ALLOCATED  0x00000001
#define FSRTL_VIRTDISK_NO_DRIVE_LETTER  0x00000002

typedef struct _FSRTL_MUP_PROVIDER_INFO_LEVEL_1 {
    ULONG32 ProviderId;
} FSRTL_MUP_PROVIDER_INFO_LEVEL_1, *PFSRTL_MUP_PROVIDER_INFO_LEVEL_1;

typedef struct _FSRTL_MUP_PROVIDER_INFO_LEVEL_2 {
    ULONG32 ProviderId;
    UNICODE_STRING ProviderName;
} FSRTL_MUP_PROVIDER_INFO_LEVEL_2, *PFSRTL_MUP_PROVIDER_INFO_LEVEL_2;

typedef VOID
(*PFSRTL_EXTRA_CREATE_PARAMETER_CLEANUP_CALLBACK)(
    _Inout_ PVOID EcpContext,
    _In_ LPCGUID EcpType);

typedef struct _ECP_LIST ECP_LIST, *PECP_LIST;

typedef ULONG FSRTL_ALLOCATE_ECPLIST_FLAGS;
typedef ULONG FSRTL_ALLOCATE_ECP_FLAGS;
typedef ULONG FSRTL_ECP_LOOKASIDE_FLAGS;

typedef enum _FSRTL_CHANGE_BACKING_TYPE {
    ChangeDataControlArea,
    ChangeImageControlArea,
    ChangeSharedCacheMap
} FSRTL_CHANGE_BACKING_TYPE, *PFSRTL_CHANGE_BACKING_TYPE;

#endif /* (NTDDI_VERSION >= NTDDI_VISTA) */

typedef struct _FSRTL_PER_FILE_CONTEXT {
    LIST_ENTRY Links;
    PVOID OwnerId;
    PVOID InstanceId;
    PFREE_FUNCTION FreeCallback;
} FSRTL_PER_FILE_CONTEXT, *PFSRTL_PER_FILE_CONTEXT;

typedef struct _FSRTL_PER_STREAM_CONTEXT {
    LIST_ENTRY Links;
    PVOID OwnerId;
    PVOID InstanceId;
    PFREE_FUNCTION FreeCallback;
} FSRTL_PER_STREAM_CONTEXT, *PFSRTL_PER_STREAM_CONTEXT;

#if (NTDDI_VERSION >= NTDDI_WIN2K)
typedef VOID
(*PFN_FSRTLTEARDOWNPERSTREAMCONTEXTS)(
    _In_ PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader);
#endif

typedef struct _FSRTL_PER_FILEOBJECT_CONTEXT {
    LIST_ENTRY Links;
    PVOID OwnerId;
    PVOID InstanceId;
} FSRTL_PER_FILEOBJECT_CONTEXT, *PFSRTL_PER_FILEOBJECT_CONTEXT;

#define FSRTL_CC_FLUSH_ERROR_FLAG_NO_HARD_ERROR  0x1
#define FSRTL_CC_FLUSH_ERROR_FLAG_NO_LOG_ENTRY   0x2

typedef NTSTATUS
(NTAPI *PCOMPLETE_LOCK_IRP_ROUTINE)(
    _In_ PVOID Context,
    _In_ PIRP Irp);

typedef struct _FILE_LOCK_INFO {
    LARGE_INTEGER StartingByte;
    LARGE_INTEGER Length;
    BOOLEAN ExclusiveLock;
    ULONG Key;
    PFILE_OBJECT FileObject;
    PVOID ProcessId;
    LARGE_INTEGER EndingByte;
} FILE_LOCK_INFO, *PFILE_LOCK_INFO;

typedef VOID
(NTAPI *PUNLOCK_ROUTINE)(
    _In_ PVOID Context,
    _In_ PFILE_LOCK_INFO FileLockInfo);

typedef struct _FILE_LOCK {
    PCOMPLETE_LOCK_IRP_ROUTINE CompleteLockIrpRoutine;
    PUNLOCK_ROUTINE UnlockRoutine;
    BOOLEAN FastIoIsQuestionable;
    BOOLEAN SpareC[3];
    PVOID LockInformation;
    FILE_LOCK_INFO LastReturnedLockInfo;
    PVOID LastReturnedLock;
    LONG volatile LockRequestsInProgress;
} FILE_LOCK, *PFILE_LOCK;

typedef struct _TUNNEL {
    FAST_MUTEX Mutex;
    PRTL_SPLAY_LINKS Cache;
    LIST_ENTRY TimerQueue;
    USHORT NumEntries;
} TUNNEL, *PTUNNEL;

typedef struct _BASE_MCB {
    ULONG MaximumPairCount;
    ULONG PairCount;
    USHORT PoolType;
    USHORT Flags;
    PVOID Mapping;
} BASE_MCB, *PBASE_MCB;

typedef struct _LARGE_MCB {
    PKGUARDED_MUTEX GuardedMutex;
    BASE_MCB BaseMcb;
} LARGE_MCB, *PLARGE_MCB;

#define MCB_FLAG_RAISE_ON_ALLOCATION_FAILURE 1

typedef struct _MCB {
    LARGE_MCB DummyFieldThatSizesThisStructureCorrectly;
} MCB, *PMCB;

typedef enum _FAST_IO_POSSIBLE {
    FastIoIsNotPossible = 0,
    FastIoIsPossible,
    FastIoIsQuestionable
} FAST_IO_POSSIBLE;

typedef struct _EOF_WAIT_BLOCK {
    LIST_ENTRY EofWaitLinks;
    KEVENT Event;
} EOF_WAIT_BLOCK, *PEOF_WAIT_BLOCK;

typedef PVOID OPLOCK, *POPLOCK;

typedef VOID
(NTAPI *POPLOCK_WAIT_COMPLETE_ROUTINE)(
    _In_ PVOID Context,
    _In_ PIRP Irp);

typedef VOID
(NTAPI *POPLOCK_FS_PREPOST_IRP)(
    _In_ PVOID Context,
    _In_ PIRP Irp);

#if (NTDDI_VERSION >= NTDDI_VISTASP1)
    #define OPLOCK_FLAG_COMPLETE_IF_OPLOCKED    0x00000001
#endif

#if (NTDDI_VERSION >= NTDDI_WIN7)
    #define OPLOCK_FLAG_OPLOCK_KEY_CHECK_ONLY   0x00000002
    #define OPLOCK_FLAG_BACK_OUT_ATOMIC_OPLOCK  0x00000004
    #define OPLOCK_FLAG_IGNORE_OPLOCK_KEYS      0x00000008
    #define OPLOCK_FSCTRL_FLAG_ALL_KEYS_MATCH   0x00000001
#endif

#if (NTDDI_VERSION >= NTDDI_WIN7)

typedef struct _OPLOCK_KEY_ECP_CONTEXT {
    GUID OplockKey;
    ULONG Reserved;
} OPLOCK_KEY_ECP_CONTEXT, *POPLOCK_KEY_ECP_CONTEXT;

DEFINE_GUID(GUID_ECP_OPLOCK_KEY, 0x48850596, 0x3050, 0x4be7, 0x98, 0x63, 0xfe, 0xc3, 0x50, 0xce, 0x8d, 0x7f);

#endif

typedef PVOID PNOTIFY_SYNC;

#if (NTDDI_VERSION >= NTDDI_WIN7)
    typedef struct _ECP_HEADER ECP_HEADER, *PECP_HEADER;
#endif

typedef BOOLEAN
(NTAPI *PCHECK_FOR_TRAVERSE_ACCESS)(
    _In_ PVOID NotifyContext,
    _In_opt_ PVOID TargetContext,
    _In_ PSECURITY_SUBJECT_CONTEXT SubjectContext);

typedef BOOLEAN
(NTAPI *PFILTER_REPORT_CHANGE)(
    _In_ PVOID NotifyContext,
    _In_ PVOID FilterContext);
$endif(_NTIFS_)
