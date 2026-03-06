// 函数名称: sub_575530
// 虚拟地址: 0x575530
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

long double __convention("regparm")sub_575530(int32_t arg1, int32_t arg2, void** arg3, float arg4 @ xmm1, float arg5 @ xmm2, int32_t arg6, int32_t arg7, float arg8)
{
    // 第一条实际指令: void* edi = arg3[2]
    void* edi = arg3[2]
    
    if (arg3[0x13] == 0)
        sub_5300c0(arg3)
    
    float xmm4 = *(edi + 0x50)
    float xmm2 = *(edi + 0x54)
    float xmm5 = *(edi + 0x60)
    float xmm3 = *(edi + 0x5c)
    float xmm6_1 = arg4 f- *(edi + 0x58)
    float xmm7_1 = arg5 f- *(edi + 0x64)
    float xmm0_2 = 1f / (xmm4 * xmm5 - xmm2 * xmm3)
    float xmm4_4[0x2] = (xmm4 * xmm7_1 - xmm3 * xmm6_1) * xmm0_2 f- arg3[0xd]
    float xmm5_4[0x2] = (xmm5 * xmm6_1 - xmm2 * xmm7_1) * xmm0_2 f- arg3[0xc]
    float var_c = xmm5_4
    float var_18
    var_18.q = _mm_cvtps_pd(xmm4_4)
    long double result = fconvert.t(var_18.q)
    float var_10 = xmm4_4
    var_18.q = _mm_cvtps_pd(xmm5_4)
    uint32_t eax
    int32_t edx
    int16_t x87control
    eax, edx, x87control = sub_5984f0()
    float xmm2_2 = arg3[0xf]
    var_18.q = fconvert.d(fconvert.t(var_18.q))
    float var_18_1 = arg3[0xf]
    float xmm1_7 = _mm_cvtpd_ps(zx.o(var_18.q)) * 57.2957764f f- arg3[0x11] f- arg3[0xe]
    float var_24 = xmm1_7
    
    if (not(0f <= xmm2_2))
        xmm1_7 = xmm1_7 + 180f
        var_24 = xmm1_7
    
    if (not(xmm1_7 <= 180f))
        xmm1_7 = xmm1_7 - 360f
        var_24 = xmm1_7
    else if (not(-180f <= xmm1_7))
        xmm1_7 = xmm1_7 + 360f
        var_24 = xmm1_7
    
    float var_1c_1 = arg3[0x10]
    float xmm3_2
    
    if (arg2 != 0 || arg6 != 0)
        float xmm0_8 = *(*arg3 + 0xc) * xmm2_2
        int32_t mxcsr
        double xmm0_13
        eax, edx, xmm0_13 =
            __libm_sse2_sqrt_precise(mxcsr, x87control, _mm_cvtps_pd(var_10 * var_10 + var_c * var_c))
        float xmm1_10 = fconvert.s(xmm0_13)
        
        if ((arg2 == 0 || not(xmm0_8 > xmm1_10))
                && (arg6 == 0 || xmm1_10 <= xmm0_8 || xmm0_8 <= 9.99999975e-05f))
            xmm1_7 = var_24
            xmm3_2 = arg8
        else
            xmm3_2 = arg8
            float xmm1_14 = (xmm1_10 / xmm0_8 - 1f) * xmm3_2 + 1f
            var_18_1 = xmm1_14 f* arg3[0xf]
            
            if (arg7 != 0)
                var_1c_1 = arg3[0x10] f* xmm1_14
            
            xmm1_7 = var_24
    else
        xmm3_2 = arg8
    
    sub_52f800(eax, edx, arg3, arg3[0xc], arg3[0xd], xmm3_2 * xmm1_7 f+ arg3[0xe], var_18_1, var_1c_1, 
        arg3[0x11], arg3[0x12])
    return result
}
