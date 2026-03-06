// 函数名称: ___vcrt_uninitialize_locks
// 虚拟地址: 0x57b0e3
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t___vcrt_uninitialize_locks()
{
    // 第一条实际指令: int32_t i_1 = data_6cf6e8
    int32_t i_1 = data_6cf6e8
    
    if (i_1 != 0)
        CRITICAL_SECTION* lpCriticalSection = i_1 * 0x18 + 0x6cf6b8
        int32_t i
        
        do
            DeleteCriticalSection(lpCriticalSection)
            data_6cf6e8 -= 1
            lpCriticalSection -= 0x18
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    int32_t result
    result.b = 1
    return result
}
