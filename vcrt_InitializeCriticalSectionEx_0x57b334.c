// 函数名称: ___vcrt_InitializeCriticalSectionEx
// 虚拟地址: 0x57b334
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

BOOL___vcrt_InitializeCriticalSectionEx(CRITICAL_SECTION* arg1, uint32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t eax = try_get_function(4, "InitializeCriticalSectionEx", 0x5a9398, &data_5a93a0)
    int32_t eax = try_get_function(4, "InitializeCriticalSectionEx", 0x5a9398, &data_5a93a0)
    
    if (eax == 0)
        return InitializeCriticalSectionAndSpinCount(arg1, arg2)
    
    return eax(arg1, arg2, arg3)
}
