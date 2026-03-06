// 函数名称: ___vcrt_initialize_locks
// 虚拟地址: 0x57b0a7
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

BOOL___vcrt_initialize_locks()
{
    // 第一条实际指令: void* edi = &data_6cf6d0
    void* edi = &data_6cf6d0
    int32_t esi = 0
    BOOL result
    
    while (true)
        if (___vcrt_InitializeCriticalSectionEx(edi, 0xfa0, 0) == 0)
            ___vcrt_uninitialize_locks()
            result.b = 0
            break
        
        data_6cf6e8 += 1
        esi += 0x18
        edi += 0x18
        
        if (esi u>= 0x18)
            result.b = 1
            break
    
    return result
}
