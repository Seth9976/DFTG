// 函数名称: sub_482af0
// 虚拟地址: 0x482af0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int128_t* __convention("regparm")sub_482af0(int32_t arg1, int32_t* arg2, float* arg3, int128_t* arg4)
{
    // 第一条实际指令: float xmm3 = arg2[3]
    float xmm3 = arg2[3]
    float xmm6 = *arg2
    float xmm7 = arg2[1]
    float xmm5 = arg3[1]
    float xmm2 = arg2[2]
    float xmm4 = arg3[2]
    float var_8 = xmm3 * arg3[3] - xmm6 * *arg3 - xmm7 * xmm5 - xmm2 * xmm4
    float var_10 = xmm5 * xmm3 + xmm7 * arg3[3] + xmm2 * *arg3 - xmm4 * xmm6
    float var_c = xmm4 * xmm3 + xmm2 * arg3[3] + xmm5 * xmm6 - xmm7 * *arg3
    *arg4 = (*arg3 * xmm3 + xmm6 * arg3[3] + xmm4 * xmm7 - xmm2 * xmm5).o
    return arg4
}
