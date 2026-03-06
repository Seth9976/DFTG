// 函数名称: sub_5191b0
// 虚拟地址: 0x5191b0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

float*sub_5191b0(float* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_c = ecx
    _memset(arg1, 0, 0x38)
    int32_t mxcsr
    int16_t x87control
    double xmm0_1 = __libm_sse2_tan_precise(mxcsr, x87control, 0x3fe0c15240000000)
    bool cond:0 = data_1151aec != 2
    void* eax = data_aca1ec
    *arg1 = fconvert.s(xmm0_1)
    uint128_t xmm0_3 = zx.o(*(eax + 0x14))
    float xmm1_1 = _mm_cvtepi32_ps(zx.o(*(eax + 0x18)))
    arg1[2] = 0x3e4ccccd
    arg1[3] = 0x447a0000
    arg1[1] = xmm1_1 / _mm_cvtepi32_ps(xmm0_3)
    
    if (cond:0)
        sub_51b1b0(&data_1151b0c, &data_1151b18, &arg1[4], &data_1151b0c, &data_5d22f4)
        return arg1
    
    sub_51b1b0(&data_5d22f4, &data_5d2324, &arg1[4], &data_5d22f4, &data_5d2300)
    return arg1
}
