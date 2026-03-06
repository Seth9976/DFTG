// 函数名称: ___vcrt_FlsFree
// 虚拟地址: 0x57b280
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

BOOL___vcrt_FlsFree(uint32_t arg1)
{
    // 第一条实际指令: int32_t eax = try_get_function(1, "FlsFree", 0x5a9380, 0x5a9388)
    int32_t eax = try_get_function(1, "FlsFree", 0x5a9380, 0x5a9388)
    
    if (eax == 0)
        return TlsFree(arg1)
    
    return eax(arg1)
}
