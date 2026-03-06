// 函数名称: sub_573080
// 虚拟地址: 0x573080
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

float __convention("regparm")sub_573080(int32_t arg1, int32_t arg2, int32_t arg3, float arg4 @ xmm0, float arg5 @ xmm1, float arg6 @ xmm2, float arg7 @ xmm3, float arg8, float arg9, float arg10, float arg11, float arg12, int32_t arg13)
{
    // 第一条实际指令: arg4 f- 0
    arg4 f- 0
    arg1:1.b = (arg4 == 0f ? 1 : 0) << 6 | (is_unordered.d(arg4, 0f) ? 1 : 0) << 2 | (arg4 < 0f ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    float eax
    
    if (p_1)
        eax = arg4
    
    if (not(p_1) || eax == 0f / 0f)
        *(arg3 + (arg2 << 2)) = arg5
        *(arg3 + (arg2 << 2) + 4) = arg6
        double var_24_5 = _mm_cvtps_pd(arg8 - arg6)
        eax = sub_5984f0()
        *(arg3 + (arg2 << 2) + 8) = fconvert.s(fconvert.t(fconvert.d(arg7 - arg5)))
    else
        float xmm0 = arg4 * arg4
        int64_t var_24
        var_24:4.d = xmm0
        float xmm0_1 = 1f - arg4
        float xmm3_2 = xmm0 * arg4
        float xmm1_1 = xmm0_1 * xmm0_1
        float xmm6_2 = xmm0_1 * arg4
        float xmm1_2 = xmm1_1 * xmm0_1
        float xmm2_1 = xmm6_2 * 3f
        float xmm2_2 = xmm2_1 * arg4
        float xmm1_4 = xmm2_1 * xmm0_1
        float xmm7_4 = xmm1_2 * arg5 + xmm1_4 * arg7 + xmm2_2 * arg9 + xmm3_2 * arg11
        *(arg3 + (arg2 << 2)) = xmm7_4
        float xmm0_14 = xmm1_2 * arg6 + xmm1_4 * arg8 + xmm2_2 * arg10 + xmm3_2 * arg12
        *(arg3 + (arg2 << 2) + 4) = xmm0_14
        
        if (arg13 != 0)
            if (not(0x3f50624dd2f1a9fc f<= fconvert.d(arg4)))
                double var_24_1 = _mm_cvtps_pd(arg8 - arg6)
                int32_t eax_1 = sub_5984f0()
                *(arg3 + (arg2 << 2) + 8) = fconvert.s(fconvert.t(fconvert.d(arg7 - arg5)))
                return eax_1
            
            float xmm3_4 = var_24:4.d
            float xmm1_8 = xmm6_2 * arg8
            float xmm6_3 = xmm6_2 * arg7
            double var_24_3 = _mm_cvtps_pd(xmm0_14 - (xmm1_8 + xmm1_8 + xmm1_1 * arg6 + xmm3_4 * arg10))
            long double x87_r6_2 =
                fconvert.t(_mm_cvtps_pd(xmm7_4 - (xmm6_3 + xmm6_3 + xmm1_1 * arg5 + xmm3_4 * arg9)))
            int32_t eax_2 = sub_5984f0()
            *(arg3 + (arg2 << 2) + 8) = fconvert.s(x87_r6_2)
            return eax_2
    
    return eax
}
