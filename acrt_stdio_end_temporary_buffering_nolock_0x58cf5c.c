// 函数名称: ___acrt_stdio_end_temporary_buffering_nolock
// 虚拟地址: 0x58cf5c
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void___acrt_stdio_end_temporary_buffering_nolock(char arg1, int32_t* arg2)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return 
    
    int32_t edi
    int32_t var_c_1 = edi
    
    if (((arg2[3] u>> 9).b & 1) == 0)
        return 
    
    ___acrt_stdio_flush_nolock(arg2)
    arg2[3] &= 0xfffffd7f
    arg2[6] = 0
    arg2[1] = 0
    *arg2 = 0
}
