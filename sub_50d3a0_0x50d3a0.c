// 函数名称: sub_50d3a0
// 虚拟地址: 0x50d3a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char** __fastcallsub_50d3a0(char** arg1, float arg2 @ xmm1)
{
    // 第一条实际指令: double xmm0 = fconvert.d(arg2)
    double xmm0 = fconvert.d(arg2)
    char** var_54 = arg1
    int32_t mxcsr
    int16_t x87control
    int16_t x87control_1
    long double st0
    st0, x87control_1 = sub_59aa00(mxcsr, x87control, fconvert.d(fconvert.t(fconvert.d(arg2 + 0.5f))))
    
    if (not(9.99999975e-06f f<= sub_426e40(arg2 - _mm_cvtpd_ps(zx.o(fconvert.d(st0))))))
        double var_88_1 = xmm0
        sub_48a9d0(arg1, "%.0f")
        return arg1
    
    float xmm0_9 = arg2 * 10f
    double var_60_1
    var_60_1.d = xmm0_9
    int16_t x87control_2
    long double st0_1
    st0_1, x87control_2 =
        sub_59aa00(mxcsr, x87control_1, fconvert.d(fconvert.t(_mm_cvtps_pd(xmm0_9 + 0.5f))))
    
    if (not(9.99999975e-06f f<= sub_426e40(var_60_1.d - _mm_cvtpd_ps(zx.o(fconvert.d(st0_1))))))
        double var_88_3 = xmm0
        sub_48a9d0(arg1, "%.1f")
        return arg1
    
    float xmm0_17 = arg2 * 100f
    double var_88_5 = xmm0
    
    if (9.99999975e-06f <= sub_426e40(xmm0_17 - _mm_cvtpd_ps(zx.o(fconvert.d(sub_59aa00(mxcsr, 
            x87control_2, fconvert.d(fconvert.t(_mm_cvtps_pd(xmm0_17 + 0.5f)))))))))
        sub_48a9d0(arg1, &data_5fd99c)
        return arg1
    
    sub_48a9d0(arg1, "%.2f")
    return arg1
}
