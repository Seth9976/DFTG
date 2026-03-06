// 函数名称: sub_41f710
// 虚拟地址: 0x41f710
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __convention("regparm")sub_41f710(int32_t arg1, int32_t arg2, int32_t arg3, float arg4 @ xmm0, float arg5 @ xmm1, float arg6 @ xmm2, int128_t arg7 @ xmm3, float arg8)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    float xmm3_2 = (arg6 - arg4) / (arg5 - arg4)
    
    if (0 f< xmm3_2 && xmm3_2 < 1f)
        sub_41f140(arg3, xmm3_2, arg7.d, arg8)
}
