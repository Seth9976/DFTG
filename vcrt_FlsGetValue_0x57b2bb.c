// 函数名称: ___vcrt_FlsGetValue
// 虚拟地址: 0x57b2bb
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t___vcrt_FlsGetValue(uint32_t arg1)
{
    // 第一条实际指令: int32_t eax = try_get_function(2, "FlsGetValue", 0x5a9388, 0x5a9390)
    int32_t eax = try_get_function(2, "FlsGetValue", 0x5a9388, 0x5a9390)
    
    if (eax == 0)
        return TlsGetValue(arg1)
    
    return eax(arg1)
}
