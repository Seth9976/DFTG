// 函数名称: sub_5757b0
// 虚拟地址: 0x5757b0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

double* __convention("regparm")sub_5757b0(int32_t arg1, int32_t* arg2, int32_t* arg3, float arg4 @ xmm2, float arg5 @ xmm3, int32_t arg6, int32_t arg7, float arg8, float arg9)
{
    // 第一条实际指令: arg9 - 0f
    arg9 - 0f
    int32_t* edi = arg2
    double* var_48 = arg3[2]
    double* eax
    eax:1.b = (arg9 == 0f ? 1 : 0) << 6 | (is_unordered.d(arg9, 0f) ? 1 : 0) << 2 | (arg9 < 0f ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    float var_60
    float xmm0_1
    float xmm1_1
    float xmm2
    float xmm3
    float xmm4
    float xmm5
    
    if (p_1)
        int16_t x87control
        
        if (arg3[0x13] == 0)
            x87control = sub_5300c0(arg3)
        
        if (edi[0x13] == 0)
            x87control = sub_5300c0(edi)
        
        int128_t xmm0_2 = arg3[0xf]
        int32_t xmm1_2 = (zx.o(0)).d
        int128_t xmm2_1 = arg3[0x10]
        float xmm5_1 = xmm0_2.d
        float xmm3_1 = edi[0xf]
        int32_t xmm6_1 = xmm2_1.d
        float var_54_1 = xmm0_2
        float var_64_1 = xmm0_2
        float var_44_1 = xmm0_2
        float var_50_1 = xmm2_1
        float var_5c_1 = xmm3_1
        
        if (not(0f f<= xmm0_2))
            xmm0_2 ^= 0x80000000
            var_64_1 = xmm0_2
        
        0 f- xmm5_1
        int32_t edx = 0xb4
        int32_t ecx_1 = 0xb4
        
        if (0f <= xmm5_1)
            ecx_1 = 0
        
        int32_t eax_1
        eax_1.b = 0f <= xmm5_1
        
        if (not(0f f<= xmm2_1))
            xmm2_1 ^= 0x80000000
            var_50_1 = xmm2_1
        
        void* ecx_3 = neg.d((eax_1 << 1) + 0xffffffff)
        
        if (0 f<= xmm6_1)
            ecx_3 = (eax_1 << 1) + 0xffffffff
        
        if (not(0f <= xmm3_1))
            var_5c_1 = xmm3_1 ^ 0x80000000
        
        float xmm4_1 = edi[0xc]
        float xmm0_4 = __andps_xmmxud_memxud(xmm0_2 f- xmm2_1, data_60cc70.o)
        
        if (0f <= xmm3_1)
            edx = 0
        
        int32_t eax_3
        eax_3.b = 9.99999975e-05f >= xmm0_4
        float xmm2_3
        float xmm3_4
        
        if (eax_3 != 0)
            xmm1_2 = edi[0xd]
            xmm3_4 = arg3[0x15] f* xmm1_2 + arg3[0x14] f* xmm4_1
            xmm2_3 = arg3[0x18] f* xmm1_2 + arg3[0x17] f* xmm4_1
        else
            xmm3_4 = arg3[0x14] f* xmm4_1
            xmm2_3 = arg3[0x17] f* xmm4_1
        
        var_60 = xmm1_2
        float xmm2_7 = xmm2_3 f+ arg3[0x19] f- *(var_48 + 0x64)
        float xmm3_8 = xmm3_4 f+ arg3[0x16] - var_48[0xb].d
        float xmm4_2 = 1f / (var_48[0xc].d * var_48[0xa].d - *(var_48 + 0x5c) f* *(var_48 + 0x54))
        float xmm2_11 = (xmm2_7 * var_48[0xa].d - xmm3_8 f* *(var_48 + 0x5c)) * xmm4_2 f- arg3[0xd]
        float xmm1_10 = (xmm3_8 * var_48[0xc].d - xmm2_7 f* *(var_48 + 0x54)) * xmm4_2 f- arg3[0xc]
        int32_t mxcsr
        int16_t x87control_1
        double xmm0_14
        x87control_1, xmm0_14 = __libm_sse2_sqrt_precise(mxcsr, x87control, 
            _mm_cvtps_pd(xmm2_11 * xmm2_11 + xmm1_10 * xmm1_10))
        float xmm6_2[0x2] = fconvert.s(xmm0_14)
        float xmm7_3 = *(*edi + 0xc) * var_5c_1
        float var_68_1 = xmm6_2
        
        if (0.0001 <= _mm_cvtps_pd(xmm6_2))
            float xmm1_33 = arg5 f- *(var_48 + 0x64)
            float xmm4_4 = arg4 - var_48[0xb].d
            float xmm3_19[0x2] =
                (xmm4_4 * var_48[0xc].d - xmm1_33 f* *(var_48 + 0x54)) * xmm4_2 f- arg3[0xc]
            float xmm1_37[0x2] =
                (xmm1_33 * var_48[0xa].d - xmm4_4 f* *(var_48 + 0x5c)) * xmm4_2 f- arg3[0xd]
            float var_54_2 = xmm3_19
            float var_6c_2 = xmm1_37
            float xmm4_8[0x2] = xmm1_37[0] f* xmm1_37 + xmm3_19[0] f* xmm3_19
            arg8 f- 0
            float var_58_2 = xmm4_8
            double* eax_8
            eax_8:1.b = (arg8 == 0f ? 1 : 0) << 6 | (is_unordered.d(arg8, 0f) ? 1 : 0) << 2
                | (arg8 < 0f ? 1 : 0)
            bool p_3 = unimplemented  {test ah, 0x44}
            
            if (p_3)
                float xmm2_20 = (var_5c_1 + 1f) * var_64_1 * 0.5f * arg8
                double xmm0_46
                x87control_1, xmm0_46 =
                    __libm_sse2_sqrt_precise(mxcsr, x87control_1, _mm_cvtps_pd(xmm4_8))
                xmm6_2 = var_68_1
                float xmm0_47 = fconvert.s(xmm0_46)
                float xmm4_12 = xmm0_47 f- xmm6_2 - xmm7_3 * var_64_1 + xmm2_20
                
                if (xmm4_12 <= 0f)
                    xmm1_37 = var_6c_2
                    xmm3_19 = var_54_2
                    xmm4_8 = var_58_2
                else
                    float xmm2_22 = _mm_min_ss(0x3f800000, xmm4_12 / (xmm2_20 + xmm2_20)) - 1f
                    float xmm4_14 = (xmm4_12 - (1f - xmm2_22 * xmm2_22) * xmm2_20) / xmm0_47
                    xmm1_37 = var_6c_2 - xmm4_14 * var_6c_2
                    xmm3_19 = var_54_2 - xmm4_14 * var_54_2
                    var_6c_2 = xmm1_37
                    var_54_2 = xmm3_19
                    xmm4_8 = xmm1_37[0] f* xmm1_37 + xmm3_19[0] f* xmm3_19
                    var_58_2 = xmm4_8
            
            float xmm2_25 = xmm7_3 * var_64_1
            float xmm0_59 = xmm6_2[0] f* xmm6_2
            float var_58_3
            float var_54_4
            
            if (eax_3 == 0)
                float xmm7_9 = xmm7_3 * var_50_1
                float xmm0_82 = xmm2_25 * xmm2_25
                float xmm0_84 = xmm7_9 * xmm7_9
                double var_28_3 = _mm_cvtps_pd(xmm1_37)
                long double x87_r6_3 = fconvert.t(_mm_cvtps_pd(xmm3_19))
                int16_t x87control_4 = sub_5984f0()
                float xmm6_3 = xmm0_82
                float xmm3_25 = var_68_1
                float xmm4_19 = xmm0_84 - xmm6_3
                float var_48_1 = fconvert.s(x87_r6_3)
                float xmm1_60 = xmm6_3 * var_58_2 + xmm0_84 * xmm0_59 - xmm0_84 * xmm6_3
                float xmm0_93 = xmm0_84 * -2f * xmm3_25
                int32_t xmm1_61 = (zx.o(0)).d
                float xmm2_31[0x2] = xmm0_93 * xmm0_93 - xmm4_19 * 4f * xmm1_60
                
                if (xmm2_31 f< 0)
                    goto label_576133
                
                double xmm0_98
                x87control_4, xmm0_98 =
                    __libm_sse2_sqrt_precise(mxcsr, x87control_4, _mm_cvtps_pd(xmm2_31))
                int128_t xmm1_62 = fconvert.s(xmm0_98)
                
                if (not(0 f<= xmm0_93))
                    xmm1_62 ^= 0x80000000
                
                float xmm1_64 = (xmm1_62 f+ xmm0_93) * -0.5f
                uint32_t xmm2_34[0x4] = xmm1_64 / xmm4_19
                uint32_t xmm3_27[0x4] = xmm1_60 / xmm1_64
                float var_6c_4 = xmm2_34
                int32_t xmm1_66 = _mm_and_ps(xmm2_34, 0x7fffffff)
                
                if (not(_mm_and_ps(xmm3_27, 0x7fffffff) f> xmm1_66))
                    xmm2_34 = xmm3_27
                    var_6c_4 = xmm2_34
                
                float xmm1_68 = xmm2_34[0] f* xmm2_34
                
                if (var_58_2 < xmm1_68)
                    xmm3_25 = var_68_1
                    xmm1_61 = (zx.o(0)).d
                    xmm6_3 = xmm0_82
                label_576133:
                    int64_t xmm6_4 = xmm6_3 - xmm0_84
                    float var_6c_5 = 3.14159274f
                    uint64_t xmm5_6[0x2] = xmm3_25 - xmm2_25
                    uint64_t xmm4_21[0x2] = xmm3_25 + xmm2_25
                    float var_38_8 = 0f
                    int32_t var_64_4 = 0
                    float xmm2_36 = xmm5_6[0].d f* xmm5_6
                    float xmm3_30 = (xmm3_25 * xmm2_25 f/ xmm6_4) ^ 0x80000000
                    float xmm2_38 = xmm4_21[0].d f* xmm4_21
                    double var_28_4
                    var_28_4.d = xmm4_21
                    float xmm3_34
                    float xmm7_10
                    
                    if (xmm3_30 < -1f || 1f < xmm3_30)
                        xmm7_10 = xmm2_36
                        xmm3_34 = 0f
                    else
                        int16_t x87control_5
                        double xmm0_121
                        x87control_5, xmm0_121 = __libm_sse2_acos_precise(mxcsr, x87control_4, 
                            fconvert.d(xmm3_30), xmm5_6, xmm6_4)
                        float xmm0_122 = fconvert.s(xmm0_121)
                        int16_t x87control_6
                        double xmm0_124
                        x87control_6, xmm0_124 =
                            __libm_sse2_cos_precise(mxcsr, x87control_5, fconvert.d(xmm0_122))
                        xmm4_21 = fconvert.s(xmm0_124) * xmm2_25 + var_68_1
                        xmm7_10 = xmm2_36
                        float xmm6_6 = fconvert.s(__libm_sse2_sin_precise(mxcsr, x87control_6, 
                            _mm_cvtps_pd(xmm0_122))) * xmm7_9
                        float xmm3_33 = xmm6_6 * xmm6_6 + xmm4_21[0].d f* xmm4_21
                        
                        if (xmm7_10 <= xmm3_33)
                            xmm1_61 = (zx.o(0)).d
                        else
                            var_6c_5 = xmm0_122
                            xmm7_10 = xmm3_33
                            xmm5_6 = xmm4_21
                            xmm1_61 = xmm6_6
                        
                        if (xmm3_33 <= xmm2_38)
                            xmm4_21 = var_28_4.d
                            xmm3_34 = 0f
                        else
                            xmm2_38 = xmm3_33
                            var_38_8 = xmm0_122
                            xmm3_34 = xmm6_6
                    
                    float xmm0_134 = _mm_cvtepi32_ps(zx.o(arg6))
                    float xmm0_141
                    float xmm1_56
                    
                    if ((xmm2_38 + xmm7_10) * 0.5f < var_58_2)
                        double var_28_13 = _mm_cvtps_pd(xmm0_134 * xmm3_34)
                        long double x87_r5_4 = fconvert.t(_mm_cvtps_pd(xmm4_21))
                        sub_5984f0()
                        xmm1_56 = var_48_1 - _mm_cvtpd_ps(zx.o(fconvert.d(x87_r5_4)))
                        xmm0_141 = float.s(arg6) * var_38_8
                    else
                        double var_28_10 = _mm_cvtps_pd(xmm0_134 f* xmm1_61)
                        long double x87_r5_3 = fconvert.t(_mm_cvtps_pd(xmm5_6))
                        sub_5984f0()
                        xmm1_56 = var_48_1 - _mm_cvtpd_ps(zx.o(fconvert.d(x87_r5_3)))
                        xmm0_141 = float.s(arg6) * var_6c_5
                    
                    var_58_3 = xmm0_141
                    var_54_4 = xmm1_56
                else
                    float xmm1_70[0x2] = fconvert.s(__libm_sse2_sqrt_precise(mxcsr, x87control_4, 
                        _mm_cvtps_pd(var_58_2 - xmm1_68))) * float.s(arg6)
                    double var_28_5 = _mm_cvtps_pd(xmm1_70)
                    long double x87_r5_1 = fconvert.t(_mm_cvtps_pd(var_6c_4))
                    sub_5984f0()
                    var_54_4 = var_48_1 - _mm_cvtpd_ps(zx.o(fconvert.d(x87_r5_1)))
                    double var_28_8 = _mm_cvtps_pd(xmm1_70 / var_50_1)
                    long double x87_r4_1 = fconvert.t(_mm_cvtps_pd((var_6c_4 - var_68_1) / var_64_1))
                    sub_5984f0()
                    var_58_3 = fconvert.s(x87_r4_1)
            else
                float xmm1_44[0x2] =
                    (xmm4_8[0] - xmm0_59 - xmm2_25 * xmm2_25) / ((xmm6_2[0] f+ xmm6_2) * xmm2_25)
                float var_64_2 = xmm1_44
                
                if (not(-1f f<= xmm1_44))
                    xmm1_44 = 0xbf800000
                    var_64_2 = -1f
                else if (not(xmm1_44 f<= 1f))
                    xmm1_44 = 0x3f800000
                    var_64_2 = 1f
                    
                    if (arg7 != 0)
                        double xmm0_66
                        x87control_1, xmm0_66 =
                            __libm_sse2_sqrt_precise(mxcsr, x87control_1, _mm_cvtps_pd(xmm4_8))
                        var_44_1 =
                            ((fconvert.s(xmm0_66) / (xmm2_25 + var_68_1) - 1f) * arg9 + 1f) * var_44_1
                        xmm1_44 = 0x3f800000
                
                int16_t x87control_3
                double xmm0_70
                x87control_3, xmm0_70 = __libm_sse2_acos_precise(mxcsr, x87control_1, 
                    _mm_cvtps_pd(xmm1_44), 0x3f800000, xmm6_2)
                float xmm1_52[0x2] = fconvert.s(xmm0_70) * float.s(arg6)
                var_58_3 = xmm1_52
                float xmm0_74 = var_64_2 * xmm2_25 + var_68_1
                float xmm2_27 =
                    fconvert.s(__libm_sse2_sin_precise(mxcsr, x87control_3, _mm_cvtps_pd(xmm1_52)))
                    * xmm2_25
                double var_28_1 = _mm_cvtps_pd(var_6c_2 * xmm0_74 - var_54_2 * xmm2_27)
                long double x87_r6_2 = fconvert.t(_mm_cvtps_pd(var_6c_2 * xmm2_27 + var_54_2 * xmm0_74))
                sub_5984f0()
                var_54_4 = fconvert.s(x87_r6_2)
            
            float xmm0_148 = float.s(ecx_3)
            void* var_20_1
            var_20_1.q = _mm_cvtps_pd(var_60)
            unimplemented  {fld st0, qword [esp+0x58]}
            var_20_1.q = _mm_cvtps_pd(xmm4_1)
            unimplemented  {fld st0, qword [esp+0x58]}
            int32_t eax_9
            int32_t edx_2
            eax_9, edx_2 = sub_5984f0()
            var_20_1.q = fconvert.d(unimplemented  {fstp qword [esp+0x58], st0})
            unimplemented  {fstp qword [esp+0x58], st0}
            float xmm0_155 = _mm_cvtpd_ps(zx.o(var_20_1.q)) * xmm0_148
            float xmm1_80 = (var_54_4 - xmm0_155) * 57.2957764f + float.s(ecx_1) f- arg3[0xe]
            
            if (not(xmm1_80 <= 180f))
                xmm1_80 = xmm1_80 - 360f
            else if (not(-180f <= xmm1_80))
                xmm1_80 = xmm1_80 + 360f
            
            eax, arg2 = sub_52f800(eax_9, edx_2, arg3, arg3[0xc], arg3[0xd], xmm1_80 * arg9 f+ arg3[7], 
                var_44_1, arg3[0x10], 0f, 0f)
            xmm2 = edi[0x11]
            float xmm4_22 = edi[0xe]
            float xmm1_90 = ((xmm0_155 + var_58_3) * 57.2957764f - xmm2) * xmm0_148
                + _mm_cvtepi32_ps(zx.o(edx)) - xmm4_22
            
            if (not(xmm1_90 <= 180f))
                xmm1_90 = xmm1_90 - 360f
            else if (not(-180f <= xmm1_90))
                xmm1_90 = xmm1_90 + 360f
            
            xmm1_1 = xmm1_90 * arg9 + xmm4_22
        else
            void* eax_6 = arg3[2]
            
            if (arg3[0x13] == 0)
                sub_5300c0(arg3)
                var_54_1 = arg3[0xf]
            
            float xmm0_20 = arg4 f- *(eax_6 + 0x58)
            float xmm3_10 =
                1f / (*(eax_6 + 0x50) f* *(eax_6 + 0x60) - *(eax_6 + 0x54) f* *(eax_6 + 0x5c))
            float xmm1_17 = arg5 f- *(eax_6 + 0x64)
            float xmm7_8[0x2] =
                (xmm0_20 f* *(eax_6 + 0x60) - xmm1_17 f* *(eax_6 + 0x54)) * xmm3_10 f- arg3[0xc]
            float xmm1_21[0x2] =
                (xmm1_17 f* *(eax_6 + 0x50) - xmm0_20 f* *(eax_6 + 0x5c)) * xmm3_10 f- arg3[0xd]
            float var_38_3 = xmm7_8
            float var_6c_1 = xmm1_21
            int32_t var_10_1
            var_10_1.q = _mm_cvtps_pd(xmm1_21)
            var_10_1.q = _mm_cvtps_pd(xmm7_8)
            void* eax_7
            int32_t edx_1
            int16_t x87control_2
            eax_7, edx_1, x87control_2 = sub_5984f0()
            var_10_1.q = fconvert.d(fconvert.t(var_10_1.q))
            bool cond:9_1 = 0f f<= arg3[0xf]
            float xmm1_26 = _mm_cvtpd_ps(zx.o(var_10_1.q)) * 57.2957764f f- arg3[0x11] f- arg3[0xe]
            float var_68_2 = xmm1_26
            
            if (not(cond:9_1))
                xmm1_26 = xmm1_26 + 180f
                var_68_2 = xmm1_26
            
            if (not(xmm1_26 <= 180f))
                xmm1_26 = xmm1_26 - 360f
                var_68_2 = xmm1_26
            else if (not(-180f <= xmm1_26))
                xmm1_26 = xmm1_26 + 360f
                var_68_2 = xmm1_26
            
            if (arg7 != 0)
                double xmm0_30
                edx_1, xmm0_30 = __libm_sse2_sqrt_precise(mxcsr, x87control_2, 
                    _mm_cvtps_pd(var_6c_1 * var_6c_1 + var_38_3 * var_38_3))
                eax_7 = *arg3
                float xmm2_15 = arg3[0xf]
                float xmm0_31 = fconvert.s(xmm0_30)
                float xmm1_28 = *(eax_7 + 0xc) * xmm2_15
                
                if (not(xmm0_31 <= xmm1_28) && not(xmm1_28 <= 9.99999975e-05f))
                    var_54_1 = ((xmm0_31 / xmm1_28 - 1f) * arg9 + 1f) * xmm2_15
                
                xmm1_26 = var_68_2
            
            eax, arg2 = sub_52f800(eax_7, edx_1, arg3, arg3[0xc], arg3[0xd], 
                xmm1_26 * arg9 f+ arg3[0xe], var_54_1, arg3[0x10], arg3[0x11], arg3[0x12])
            xmm2 = edi[0x11]
            xmm1_1 = (zx.o(0)).d
        
        xmm5 = edi[0x12]
        xmm4 = edi[0x10]
        xmm3 = edi[0xf]
        xmm0_1 = xmm4_1
    else
        xmm0_1 = edi[5]
        xmm3 = edi[8]
        xmm4 = edi[9]
        xmm2 = edi[0xa]
        xmm5 = edi[0xb]
        var_60 = edi[6]
        xmm1_1 = edi[7]
    
    return sub_52f800(eax, arg2, edi, xmm0_1, var_60, xmm1_1, xmm3, xmm4, xmm2, xmm5)
}
