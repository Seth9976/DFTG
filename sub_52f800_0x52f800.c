// 函数名称: sub_52f800
// 虚拟地址: 0x52f800
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

double* __convention("regparm")sub_52f800(int32_t arg1, int32_t arg2, int32_t* arg3, float arg4 @ xmm1, float arg5 @ xmm2, float arg6 @ xmm3, float arg7, float arg8, float arg9, float arg10)
{
    // 第一条实际指令: void* edi = arg3[1]
    void* edi = arg3[1]
    int32_t eax
    eax.b = data_15117cc == 0
    void* ecx = arg3[2]
    float xmm0 = *(edi + 0x4c)
    float xmm0_3 = _mm_cvtepi32_ps(zx.o((eax << 1) + 0xffffffff)) f* *(edi + 0x50)
    arg3[0x13] = 1
    arg3[0xc] = arg4
    arg3[0xf] = arg7
    arg3[0x10] = arg8
    arg3[0xd] = arg5
    arg3[0xe] = arg6
    arg3[0x11] = arg9
    arg3[0x12] = arg10
    int32_t mxcsr
    int16_t x87control
    
    if (ecx == 0)
        double xmm0_10 = fconvert.d((arg6 + arg9) * 0.0174532924f)
        int16_t x87control_1
        double xmm0_11
        x87control_1, xmm0_11 = __libm_sse2_cos_precise(mxcsr, x87control, xmm0_10)
        arg3[0x14] = fconvert.s(xmm0_11) * arg7 * xmm0
        float xmm0_18[0x2] = (arg6 + 90f + arg10) * 0.0174532924f
        int16_t x87control_2
        double xmm0_20
        x87control_2, xmm0_20 = __libm_sse2_cos_precise(mxcsr, x87control_1, _mm_cvtps_pd(xmm0_18))
        arg3[0x15] = fconvert.s(xmm0_20) * arg8 * xmm0
        int16_t x87control_3
        double xmm0_22
        x87control_3, xmm0_22 = __libm_sse2_sin_precise(mxcsr, x87control_2, xmm0_10)
        arg3[0x17] = fconvert.s(xmm0_22) * arg7 * xmm0_3
        double* eax_2
        double xmm0_24
        eax_2, xmm0_24 = __libm_sse2_sin_precise(mxcsr, x87control_3, _mm_cvtps_pd(xmm0_18))
        arg3[0x18] = fconvert.s(xmm0_24) * arg8 * xmm0_3
        arg3[0x16] = xmm0 * arg4 f+ *(edi + 0x54)
        arg3[0x19] = xmm0_3 * arg5 f+ *(edi + 0x58)
        return eax_2
    
    float xmm5[0x2] = *(ecx + 0x50)
    float xmm6[0x2] = *(ecx + 0x54)
    double* eax_3 = *arg3
    float xmm4[0x2] = *(ecx + 0x5c)
    float xmm2[0x2] = *(ecx + 0x60)
    float var_30 = xmm5
    float var_28 = xmm6
    float var_2c = xmm4
    float var_34 = xmm2
    float xmm0_34 = xmm2[0] * arg5
    arg3[0x16] = xmm5[0] * arg4 + xmm6[0] * arg5 f+ *(ecx + 0x58)
    arg3[0x19] = xmm4[0] * arg4 + xmm0_34 f+ *(ecx + 0x64)
    int32_t edi_1 = *(eax_3 + 0x2c)
    float xmm1_40
    float xmm2_13
    float xmm3_6
    float xmm4_4
    float xmm5_4
    
    switch (edi_1)
        case 0
            double xmm0_38 = fconvert.d((arg6 + arg9) * 0.0174532924f)
            int16_t x87control_4
            double xmm0_39
            x87control_4, xmm0_39 = __libm_sse2_cos_precise(mxcsr, x87control, xmm0_38)
            float xmm0_41 = fconvert.s(xmm0_39) * arg7
            float xmm0_45[0x2] = (arg6 + 90f + arg10) * 0.0174532924f
            int16_t x87control_5
            double xmm0_47
            x87control_5, xmm0_47 = __libm_sse2_cos_precise(mxcsr, x87control_4, _mm_cvtps_pd(xmm0_45))
            float xmm0_49 = fconvert.s(xmm0_47) * arg8
            int16_t x87control_6
            double xmm0_51
            x87control_6, xmm0_51 = __libm_sse2_sin_precise(mxcsr, x87control_5, xmm0_38)
            float xmm0_53 = fconvert.s(xmm0_51) * arg7
            double* eax_4
            double xmm0_55
            eax_4, xmm0_55 = __libm_sse2_sin_precise(mxcsr, x87control_6, _mm_cvtps_pd(xmm0_45))
            float xmm3_1 = fconvert.s(xmm0_55) * arg8
            arg3[0x14] = xmm0_53 * var_28 + xmm0_41 * var_30
            arg3[0x17] = xmm0_53 * var_34 + xmm0_41 * var_2c
            arg3[0x15] = xmm3_1 * var_28 + xmm0_49 * var_30
            arg3[0x18] = xmm3_1 * var_34 + xmm0_49 * var_2c
            return eax_4
        case 1
            double xmm0_63 = fconvert.d((arg6 + arg9) * 0.0174532924f)
            int16_t x87control_7
            double xmm0_64
            x87control_7, xmm0_64 = __libm_sse2_cos_precise(mxcsr, x87control, xmm0_63)
            arg3[0x14] = fconvert.s(xmm0_64) * arg7
            float xmm0_70[0x2] = (arg6 + 90f + arg10) * 0.0174532924f
            int16_t x87control_8
            double xmm0_72
            x87control_8, xmm0_72 = __libm_sse2_cos_precise(mxcsr, x87control_7, _mm_cvtps_pd(xmm0_70))
            arg3[0x15] = fconvert.s(xmm0_72) * arg8
            int16_t x87control_9
            double xmm0_74
            x87control_9, xmm0_74 = __libm_sse2_sin_precise(mxcsr, x87control_8, xmm0_63)
            arg3[0x17] = fconvert.s(xmm0_74) * arg7
            double xmm0_76
            eax_3, xmm0_76 = __libm_sse2_sin_precise(mxcsr, x87control_9, _mm_cvtps_pd(xmm0_70))
            arg3[0x18] = fconvert.s(xmm0_76) * arg8
        case 2
            float xmm1_33 = xmm4[0] f* xmm4 + xmm5[0] f* xmm5
            int16_t x87control_10
            float xmm2_11
            
            if (xmm1_33 <= 9.99999975e-05f)
                var_30 = 0f
                var_2c = 0f
                double var_18_7 = _mm_cvtps_pd(xmm2)
                long double x87_r6_2 = fconvert.t(_mm_cvtps_pd(xmm6))
                x87control_10 = sub_5984f0()
                xmm2_11 = 90f - _mm_cvtpd_ps(zx.o(fconvert.d(x87_r6_2))) * 57.2957764f
            else
                float xmm2_7 =
                    __andps_xmmxud_memxud(xmm2 f* xmm5 - xmm4[0] f* xmm6, data_60cc70.o) / xmm1_33
                var_34 = xmm2_7 f* xmm5
                var_28 = xmm2_7 f* xmm4
                double var_18_4 = _mm_cvtps_pd(xmm4)
                long double x87_r6_1 = fconvert.t(_mm_cvtps_pd(xmm5))
                x87control_10 = sub_5984f0()
                xmm2_11 = _mm_cvtpd_ps(zx.o(fconvert.d(x87_r6_1))) * 57.2957764f
            
            double xmm0_96 = _mm_cvtps_pd((arg6 + arg9 - xmm2_11) * 0.0174532924f)
            int16_t x87control_11
            double xmm0_97
            x87control_11, xmm0_97 = __libm_sse2_cos_precise(mxcsr, x87control_10, xmm0_96)
            float xmm0_99 = fconvert.s(xmm0_97) * arg7
            float xmm0_104[0x2] = (arg6 + arg10 - xmm2_11 + 90f) * 0.0174532924f
            int16_t x87control_12
            double xmm0_106
            x87control_12, xmm0_106 =
                __libm_sse2_cos_precise(mxcsr, x87control_11, _mm_cvtps_pd(xmm0_104))
            double var_18_6
            var_18_6.d = fconvert.s(xmm0_106) * arg8
            int16_t x87control_13
            double xmm0_110
            x87control_13, xmm0_110 = __libm_sse2_sin_precise(mxcsr, x87control_12, xmm0_96)
            float xmm0_112 = fconvert.s(xmm0_110) * arg7
            double xmm0_114
            eax_3, xmm0_114 = __libm_sse2_sin_precise(mxcsr, x87control_13, _mm_cvtps_pd(xmm0_104))
            float xmm4_3 = var_18_6.d
            xmm5_4 = xmm0_99 * var_2c
            xmm2_13 = xmm0_112 * var_34
            float xmm3_5 = fconvert.s(xmm0_114) * arg8
            xmm3_6 = xmm3_5 * var_34
            arg3[0x14] = xmm0_99 * var_30 - xmm0_112 * var_28
            xmm4_4 = xmm4_3 * var_2c
            xmm1_40 = xmm4_3 * var_30 - xmm3_5 * var_28
        label_530048:
            arg3[0x15] = xmm1_40
            arg3[0x18] = xmm3_6 + xmm4_4
            arg3[0x17] = xmm2_13 + xmm5_4
        case 3, 4
            float xmm3_7 = arg6 * 0.0174532924f
            int16_t x87control_14
            double xmm0_120
            x87control_14, xmm0_120 = __libm_sse2_cos_precise(mxcsr, x87control, fconvert.d(xmm3_7))
            float xmm0_121 = fconvert.s(xmm0_120)
            int16_t x87control_15
            double xmm0_123
            x87control_15, xmm0_123 =
                __libm_sse2_sin_precise(mxcsr, x87control_14, _mm_cvtps_pd(xmm3_7))
            float xmm2_14 = fconvert.s(xmm0_123)
            float xmm3_11 = (xmm2_14 * var_28 + xmm0_121 * var_30) / xmm0
            float xmm2_17 = (xmm2_14 * var_34 + xmm0_121 * var_2c) / xmm0_3
            int16_t x87control_16
            double xmm0_129
            x87control_16, xmm0_129 = __libm_sse2_sqrt_precise(mxcsr, x87control_15, 
                _mm_cvtps_pd(xmm2_17 * xmm2_17 + xmm3_11 * xmm3_11))
            float xmm2_18 = fconvert.s(xmm0_129)
            
            if (not(xmm2_18 <= 9.99999975e-06f))
                xmm2_18 = 1f / xmm2_18
            
            float xmm2_19 = xmm2_18 * xmm2_17
            float xmm3_13 = xmm2_18 * xmm3_11
            float xmm2_20 = fconvert.s(__libm_sse2_sqrt_precise(mxcsr, x87control_16, 
                _mm_cvtps_pd(xmm2_19 * xmm2_19 + xmm3_13 * xmm3_13)))
            float var_20_4 = xmm2_20
            
            if (edi_1 == 3)
                int32_t edx
                edx.b = 0 f> var_34 * var_30 - var_2c * var_28
                int32_t ecx_1
                ecx_1.b = 0 f> xmm0_3
                int32_t eax_5
                eax_5.b = 0 f> xmm0
                
                if (edx != (ecx_1 ^ eax_5))
                    var_20_4 = xmm2_20 ^ (data_60cca0.o).d
            
            double var_10_2 = _mm_cvtps_pd(xmm2_19)
            long double x87_r6_3 = fconvert.t(_mm_cvtps_pd(xmm3_13))
            int16_t x87control_17 = sub_5984f0()
            double xmm0_144 = _mm_cvtps_pd(_mm_cvtpd_ps(zx.o(fconvert.d(x87_r6_3))) + 1.57079637f)
            int16_t x87control_18
            double xmm0_145
            x87control_18, xmm0_145 = __libm_sse2_cos_precise(mxcsr, x87control_17, xmm0_144)
            float xmm0_147 = fconvert.s(xmm0_145) * var_20_4
            int16_t x87control_19
            double xmm0_149
            x87control_19, xmm0_149 = __libm_sse2_sin_precise(mxcsr, x87control_18, xmm0_144)
            float xmm0_151 = fconvert.s(xmm0_149) * var_20_4
            float xmm0_153[0x2] = arg9 * 0.0174532924f
            int16_t x87control_20
            double xmm0_155
            x87control_20, xmm0_155 =
                __libm_sse2_cos_precise(mxcsr, x87control_19, _mm_cvtps_pd(xmm0_153))
            float xmm0_157 = fconvert.s(xmm0_155) * arg7
            float xmm0_160[0x2] = (arg10 + 90f) * 0.0174532924f
            int16_t x87control_21
            double xmm0_162
            x87control_21, xmm0_162 =
                __libm_sse2_cos_precise(mxcsr, x87control_20, _mm_cvtps_pd(xmm0_160))
            float xmm0_164 = fconvert.s(xmm0_162) * arg8
            int16_t x87control_22
            double xmm0_166
            x87control_22, xmm0_166 =
                __libm_sse2_sin_precise(mxcsr, x87control_21, _mm_cvtps_pd(xmm0_153))
            float xmm0_168 = fconvert.s(xmm0_166) * arg7
            double xmm0_170
            eax_3, xmm0_170 = __libm_sse2_sin_precise(mxcsr, x87control_22, _mm_cvtps_pd(xmm0_160))
            xmm2_13 = xmm0_168 * xmm0_151
            xmm5_4 = xmm0_157 * xmm2_19
            float xmm3_15 = fconvert.s(xmm0_170) * arg8
            xmm4_4 = xmm0_164 * xmm2_19
            arg3[0x14] = xmm0_168 * xmm0_147 + xmm0_157 * xmm3_13
            xmm3_6 = xmm3_15 * xmm0_151
            xmm1_40 = xmm3_15 * xmm0_147 + xmm0_164 * xmm3_13
            goto label_530048
    
    arg3[0x14] = xmm0 f* arg3[0x14]
    arg3[0x15] = arg3[0x15] f* xmm0
    arg3[0x17] = arg3[0x17] f* xmm0_3
    arg3[0x18] = arg3[0x18] f* xmm0_3
    return eax_3
}
