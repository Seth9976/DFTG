// 函数名称: __initialize_default_precision
// 虚拟地址: 0x57851a
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t__initialize_default_precision()
{
    // 第一条实际指令: int32_t result = __controlfp_s(nullptr, 0x10000, 0x30000)
    int32_t result = __controlfp_s(nullptr, 0x10000, 0x30000)
    
    if (result == 0)
        return result
    
    ___scrt_fastfail(7)
    breakpoint
}
