// 函数名称: __fflush_nolock
// 虚拟地址: 0x58655e
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t__fflush_nolock(int32_t* arg1)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        int32_t* var_c = arg1
        return common_flush_all()
    
    if (___acrt_stdio_flush_nolock(arg1) == 0)
        if (((arg1[3] u>> 0xb).b & 1) == 0)
            return 0
        
        if (__commit(__fileno(arg1)) == 0)
            return 0
    
    return 0xffffffff
}
