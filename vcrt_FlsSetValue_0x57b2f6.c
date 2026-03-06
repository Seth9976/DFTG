// 函数名称: ___vcrt_FlsSetValue
// 虚拟地址: 0x57b2f6
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

BOOL___vcrt_FlsSetValue(uint32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax = try_get_function(3, "FlsSetValue", 0x5a9390, 0x5a9398)
    int32_t eax = try_get_function(3, "FlsSetValue", 0x5a9390, 0x5a9398)
    
    if (eax == 0)
        return TlsSetValue(arg1, arg2)
    
    return eax(arg1, arg2)
}
