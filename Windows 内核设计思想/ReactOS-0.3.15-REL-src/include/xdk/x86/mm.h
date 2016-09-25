
$if (_NTDDK_)

    extern NTKERNELAPI PVOID MmHighestUserAddress;

extern NTKERNELAPI PVOID MmSystemRangeStart;
extern NTKERNELAPI ULONG MmUserProbeAddress;

#define MM_HIGHEST_USER_ADDRESS MmHighestUserAddress
#define MM_SYSTEM_RANGE_START MmSystemRangeStart
#if defined(_LOCAL_COPY_USER_PROBE_ADDRESS_)
    #define MM_USER_PROBE_ADDRESS _LOCAL_COPY_USER_PROBE_ADDRESS_
    extern ULONG _LOCAL_COPY_USER_PROBE_ADDRESS_;
#else
    #define MM_USER_PROBE_ADDRESS MmUserProbeAddress
#endif
#define MM_LOWEST_USER_ADDRESS (PVOID)0x10000
#define MM_KSEG0_BASE       MM_SYSTEM_RANGE_START
#define MM_SYSTEM_SPACE_END 0xFFFFFFFF
#if !defined (_X86PAE_)
    #define MM_LOWEST_SYSTEM_ADDRESS (PVOID)0xC0800000
#else
    #define MM_LOWEST_SYSTEM_ADDRESS (PVOID)0xC0C00000
#endif

$endif /* _NTDDK_ */
