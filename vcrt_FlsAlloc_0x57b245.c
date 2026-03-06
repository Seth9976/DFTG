// 函数名称: ___vcrt_FlsAlloc
// 虚拟地址: 0x57b245
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t___vcrt_FlsAlloc(int32_t arg1)
{
    // 第一条实际指令: int32_t eax = try_get_function(0, "FlsAlloc", 0x5a9378, 0x5a9380)
    int32_t eax = try_get_function(0, "FlsAlloc", 0x5a9378, 0x5a9380)
    
    if (eax == 0)
        return TlsAlloc() __tailcall
    
    return eax(arg1)
}
