// 函数名称: ?__acrt_stdio_parse_mode_T@@YA_NAAU__acrt_stdio_stream_mode@@@Z
// 虚拟地址: 0x58d6ba
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t?__acrt_stdio_parse_mode_T@@YA_NAAU__acrt_stdio_stream_mode@@@Z(int32_t* arg1)
{
    // 第一条实际指令: int32_t eax = *arg1
    int32_t eax = *arg1
    
    if ((0x1000 & eax) != 0)
        eax.b = 0
        return eax
    
    *arg1 = eax | 0x1000
    int32_t eax_1
    eax_1.b = 1
    return eax_1
}
