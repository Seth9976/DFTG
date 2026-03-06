// 函数名称: sub_5300c0
// 虚拟地址: 0x5300c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_5300c0(void* arg1)
{
    // 第一条实际指令: void* eax = *(arg1 + 8)
    void* eax = *(arg1 + 8)
    *(arg1 + 0x4c) = 1
    int32_t mxcsr
    
    if (eax == 0)
        int32_t eax_1 = *(arg1 + 0x58)
        int64_t xmm0_1 = _mm_cvtps_pd(*(arg1 + 0x5c))
        *(arg1 + 0x30) = eax_1
        *(arg1 + 0x34) = *(arg1 + 0x64)
        int32_t var_10
        var_10.q = xmm0_1
        var_10.q = _mm_cvtps_pd(*(arg1 + 0x50))
        int16_t x87control_1 = sub_5984f0()
        float xmm1 = *(arg1 + 0x50)
        var_10.q = fconvert.d(fconvert.t(var_10.q))
        *(arg1 + 0x38) = _mm_cvtpd_ps(zx.o(var_10.q)) * 57.2957764f
        float xmm0_7 = *(arg1 + 0x5c)
        int16_t x87control_2
        double xmm0_10
        x87control_2, xmm0_10 =
            __libm_sse2_sqrt_precise(mxcsr, x87control_1, _mm_cvtps_pd(xmm1 * xmm1 + xmm0_7 * xmm0_7))
        float xmm1_3 = *(arg1 + 0x60)
        *(arg1 + 0x3c) = fconvert.s(xmm0_10)
        float xmm0_12 = *(arg1 + 0x54)
        double xmm0_15 = __libm_sse2_sqrt_precise(mxcsr, x87control_2, 
            _mm_cvtps_pd(xmm1_3 * xmm1_3 + xmm0_12 * xmm0_12))
        float xmm5 = *(arg1 + 0x50)
        float xmm3 = *(arg1 + 0x54)
        float xmm5_1 = xmm5 f* *(arg1 + 0x60)
        *(arg1 + 0x44) = 0
        float xmm3_1 = xmm3 f* *(arg1 + 0x5c)
        *(arg1 + 0x40) = fconvert.s(xmm0_15)
        var_10.q = _mm_cvtps_pd(xmm5 * xmm3 + *(arg1 + 0x60) f* *(arg1 + 0x5c))
        var_10.q = _mm_cvtps_pd(xmm5_1 - xmm3_1)
        int32_t eax_3 = sub_5984f0()
        var_10.q = fconvert.d(fconvert.t(var_10.q))
        *(arg1 + 0x48) = _mm_cvtpd_ps(zx.o(var_10.q)) * 57.2957764f
        return eax_3
    
    float xmm7 = *(eax + 0x60)
    float xmm2 = *(eax + 0x50)
    float xmm0_24 = *(eax + 0x5c)
    float xmm0_27 = *(arg1 + 0x58) f- *(eax + 0x58)
    float xmm3_2 = 1f / (xmm7 * xmm2 - xmm0_24 f* *(eax + 0x54))
    float xmm0_29 = *(arg1 + 0x64) f- *(eax + 0x64)
    float xmm6_1 = xmm3_2 * xmm2
    float xmm2_2 = xmm3_2 f* *(eax + 0x54)
    float xmm3_3 = *(arg1 + 0x50)
    float xmm4_1 = xmm3_2 * xmm7
    float xmm5_4 = xmm3_2 * xmm0_24
    float xmm1_14 = xmm3_3 * xmm4_1 - *(arg1 + 0x5c) * xmm2_2
    float xmm1_15 = *(arg1 + 0x54)
    float xmm4_2 = *(arg1 + 0x60)
    float xmm2_4 = xmm1_15 * xmm4_1 - xmm4_2 * xmm2_2
    float xmm4_4 = xmm4_2 * xmm6_1 - xmm1_15 * xmm5_4
    float xmm0_38 = *(arg1 + 0x5c) * xmm6_1 - xmm3_3 * xmm5_4
    float xmm0_40 = xmm0_29 f* *(eax + 0x54)
    *(arg1 + 0x44) = 0
    *(arg1 + 0x30) = xmm0_27 * xmm7 * xmm3_2 - xmm0_40 * xmm3_2
    *(arg1 + 0x34) = xmm0_29 * xmm2 * xmm3_2 - xmm0_27 * xmm0_24 * xmm3_2
    int16_t x87control
    int16_t x87control_3
    double xmm0_45
    x87control_3, xmm0_45 =
        __libm_sse2_sqrt_precise(mxcsr, x87control, _mm_cvtps_pd(xmm0_38 * xmm0_38 + xmm1_14 * xmm1_14))
    float xmm6_2 = fconvert.s(xmm0_45)
    *(arg1 + 0x3c) = xmm6_2
    float var_10_1
    
    if (xmm6_2 <= 9.99999975e-05f)
        *(arg1 + 0x3c) = 0
        float xmm0_66 = fconvert.s(__libm_sse2_sqrt_precise(mxcsr, x87control_3, 
            _mm_cvtps_pd(xmm4_4 * xmm4_4 + xmm2_4 * xmm2_4)))
        *(arg1 + 0x48) = 0
        *(arg1 + 0x40) = xmm0_66
        var_10_1.q = _mm_cvtps_pd(xmm4_4)
        var_10_1.q = _mm_cvtps_pd(xmm2_4)
        int32_t eax_5 = sub_5984f0()
        var_10_1.q = fconvert.d(fconvert.t(var_10_1.q))
        *(arg1 + 0x38) = 90f - _mm_cvtpd_ps(zx.o(var_10_1.q)) * 57.2957764f
        return eax_5
    
    float xmm1_26[0x2] = xmm4_4 * xmm1_14 - xmm0_38 * xmm2_4
    *(arg1 + 0x40) = xmm1_26[0] / xmm6_2
    var_10_1.q = _mm_cvtps_pd(xmm4_4 * xmm0_38 + xmm2_4 * xmm1_14)
    var_10_1.q = _mm_cvtps_pd(xmm1_26)
    sub_5984f0()
    var_10_1.q = fconvert.d(fconvert.t(var_10_1.q))
    *(arg1 + 0x48) = _mm_cvtpd_ps(zx.o(var_10_1.q)) * 57.2957764f
    var_10_1.q = _mm_cvtps_pd(xmm0_38)
    var_10_1.q = _mm_cvtps_pd(xmm1_14)
    int32_t eax_4 = sub_5984f0()
    var_10_1.q = fconvert.d(fconvert.t(var_10_1.q))
    *(arg1 + 0x38) = _mm_cvtpd_ps(zx.o(var_10_1.q)) * 57.2957764f
    return eax_4
}
