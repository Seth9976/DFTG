// 函数名称: ___vcrt_initialize_ptd
// 虚拟地址: 0x57a144
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

BOOL___vcrt_initialize_ptd()
{
    // 第一条实际指令: BOOL eax = ___vcrt_FlsAlloc(___vcrt_freefls@4)
    BOOL eax = ___vcrt_FlsAlloc(___vcrt_freefls@4)
    data_61f0a0 = eax
    
    if (eax != 0xffffffff)
        if (___vcrt_FlsSetValue(eax, 0x6cf6a4) != 0)
            BOOL eax_1
            eax_1.b = 1
            return eax_1
        
        ___vcrt_uninitialize_ptd()
    
    eax.b = 0
    return eax
}
