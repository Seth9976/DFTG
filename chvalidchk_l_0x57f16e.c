// 函数名称: __chvalidchk_l
// 虚拟地址: 0x57f16e
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t__chvalidchk_l(char arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t eax_2
    int32_t eax_2
    int32_t* ecx
    
    if (arg3 == 0)
        eax_2 = ____mb_cur_max_func(ecx)
    else
        eax_2 = **arg3
    return zx.d(*(eax_2 + (zx.d(arg1) << 1))) & arg2
}
