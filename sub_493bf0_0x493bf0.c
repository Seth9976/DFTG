// 函数名称: sub_493bf0
// 虚拟地址: 0x493bf0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

float __convention("regparm")sub_493bf0(int32_t arg1, float* arg2, float* arg3, int32_t* arg4, int32_t* arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t var_24 = arg6
    int32_t var_24 = arg6
    float xmm1_2 = (arg3[0xb] + arg3[2]) * 0.5f
    return sub_493420(xmm1_2, arg2, arg3, arg4, 0, 
        _mm_unpacklo_ps((arg3[9] + *arg3) * 0.5f, (arg3[0xa] + arg3[1]) * 0.5f), xmm1_2, arg5, arg5)
}
