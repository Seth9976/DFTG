// 函数名称: ___vcrt_initialize
// 虚拟地址: 0x57a004
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t___vcrt_initialize()
{
    // 第一条实际指令: sub_57af29()
    sub_57af29()
    ___vcrt_initialize_winapi_thunks()
    
    if (___vcrt_initialize_locks() != 0)
        if (___vcrt_initialize_ptd() != 0)
            return 1
        
        ___vcrt_uninitialize_locks()
    
    return 0
}
