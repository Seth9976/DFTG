// 函数名称: sub_5745b0
// 虚拟地址: 0x5745b0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

double* __fastcallsub_5745b0(int32_t* arg1)
{
    // 第一条实际指令: void* ebx = arg1[3]
    void* ebx = arg1[3]
    float xmm0 = arg1[7]
    float xmm2 = arg1[4]
    float xmm3 = arg1[5]
    float xmm5[0x2] = *(ebx + 0x5c)
    float xmm6 = *(ebx + 0x54)
    float xmm4[0x2] = *(ebx + 0x50)
    float xmm7 = arg1[6]
    float xmm0_1 = *(ebx + 0x60)
    float var_38 = xmm2
    float var_5c = xmm3
    float var_64 = xmm7
    int32_t var_34 = xmm4
    int32_t var_30 = xmm5
    float xmm0_4
    
    if (xmm0_1 f* xmm4 - xmm5[0] * xmm6 f<= 0)
        xmm0_4 = -0.0174532924f
    else
        xmm0_4 = 0.0174532924f
    
    double* result = *arg1
    int32_t i = 0
    int32_t i_1 = 0
    float xmm1_4 = result[5].d * xmm0_4
    float xmm1_6 = *(result + 0x3c) * xmm0_4
    
    if (arg1[1] s> 0)
        double xmm0_7 = _mm_cvtps_pd(xmm5[0] f* xmm5 + xmm4[0] f* xmm4)
        double xmm0_10 = _mm_cvtps_pd(xmm0_1 * xmm0_1 + xmm6 * xmm6)
        
        do
            void* esi_1 = *(arg1[2] + (i << 2))
            int32_t ecx = 0
            xmm2 f- 0
            result:1.b = (xmm2 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2, 0f) ? 1 : 0) << 2
                | (xmm2 < 0f ? 1 : 0)
            bool p_2 = unimplemented  {test ah, 0x44}
            double var_50
            double var_48
            int32_t mxcsr
            int16_t x87control
            int16_t top
            
            if (p_2)
                float xmm0_11 = *(esi_1 + 0x50)
                float xmm0_12 = *(esi_1 + 0x54)
                int64_t var_48_1 = _mm_cvtps_pd(xmm5)
                unimplemented  {fld st0, qword [esp+0x30]}
                int64_t var_48_2 = _mm_cvtps_pd(xmm4)
                unimplemented  {fld st0, qword [esp+0x30]}
                sub_5984f0()
                int64_t xmm0_16 = _mm_cvtps_pd(*(esi_1 + 0x5c))
                var_50 = fconvert.d(unimplemented  {fstp qword [esp+0x28], st0})
                unimplemented  {fstp qword [esp+0x28], st0}
                int64_t var_48_3 = xmm0_16
                unimplemented  {fld st0, qword [esp+0x30]}
                int64_t var_48_4 = _mm_cvtps_pd(xmm0_11)
                unimplemented  {fld st0, qword [esp+0x30]}
                int16_t x87control_1 = sub_5984f0()
                var_48 = fconvert.d(unimplemented  {fstp qword [esp+0x30], st0})
                unimplemented  {fstp qword [esp+0x30], st0}
                top -= 2
                float xmm1_16 = _mm_cvtpd_ps(zx.o(var_50)) - _mm_cvtpd_ps(zx.o(var_48)) + xmm1_4
                
                if (not(xmm1_16 <= 3.14159274f))
                    xmm1_16 = xmm1_16 - 6.28318548f
                else if (not(-3.14159274f <= xmm1_16))
                    xmm1_16 = xmm1_16 + 6.28318548f
                
                float xmm1_17[0x2] = xmm1_16 * var_38
                var_48.d = xmm1_17
                int16_t x87control_2
                double xmm0_22
                x87control_2, xmm0_22 =
                    __libm_sse2_cos_precise(mxcsr, x87control_1, _mm_cvtps_pd(xmm1_17))
                var_50.d = fconvert.s(xmm0_22)
                double xmm0_25
                result, x87control, xmm0_25 =
                    __libm_sse2_sin_precise(mxcsr, x87control_2, _mm_cvtps_pd(var_48.d))
                float xmm3_1 = var_50.d
                float xmm2_1 = fconvert.s(xmm0_25)
                ecx = 1
                xmm7 = var_64
                float xmm0_29 = xmm2_1 f* *(esi_1 + 0x60)
                *(esi_1 + 0x50) = xmm3_1 * xmm0_11 - xmm2_1 f* *(esi_1 + 0x5c)
                *(esi_1 + 0x54) = xmm3_1 * xmm0_12 - xmm0_29
                float xmm1_27 = xmm3_1 f* *(esi_1 + 0x5c) + xmm2_1 * xmm0_11
                *(esi_1 + 0x60) = xmm3_1 f* *(esi_1 + 0x60) + xmm2_1 * xmm0_12
                xmm3 = var_5c
                *(esi_1 + 0x5c) = xmm1_27
            
            xmm3 f- 0
            result:1.b = (xmm3 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm3, 0f) ? 1 : 0) << 2
                | (xmm3 < 0f ? 1 : 0)
            bool p_4 = unimplemented  {test ah, 0x44}
            
            if (p_4)
                result = *arg1
                ecx = 1
                float xmm5_7 = (*(ebx + 0x5c) f* *(result + 0x2c)
                    + result[6].d f* *(ebx + 0x60) f+ *(ebx + 0x64) f- *(esi_1 + 0x64)) * var_5c f+
                    *(esi_1 + 0x64)
                float xmm1_33 = (*(ebx + 0x54) * result[6].d
                    + *(ebx + 0x50) f* *(result + 0x2c) f+ *(ebx + 0x58) f- *(esi_1 + 0x58)) * var_5c
                *(esi_1 + 0x64) = xmm5_7
                *(esi_1 + 0x58) = xmm1_33 f+ *(esi_1 + 0x58)
            
            if (not(xmm7 f<= 0))
                float xmm0_36 = *(esi_1 + 0x5c)
                float xmm2_3 = *(esi_1 + 0x50)
                var_50.d = xmm0_36
                var_48.d = xmm2_3
                int16_t x87control_3
                double xmm0_40
                x87control_3, xmm0_40 = __libm_sse2_sqrt_precise(mxcsr, x87control, 
                    _mm_cvtps_pd(xmm0_36 * xmm0_36 + xmm2_3 * xmm2_3))
                float xmm1_38 = fconvert.s(xmm0_40)
                
                if (not(xmm1_38 <= 9.99999975e-06f))
                    double xmm0_42
                    x87control_3, xmm0_42 = __libm_sse2_sqrt_precise(mxcsr, x87control_3, xmm0_7)
                    xmm1_38 = ((fconvert.s(xmm0_42) - xmm1_38 f+ *(*arg1 + 0x34)) * var_64 + xmm1_38)
                        / xmm1_38
                
                float xmm2_4 = *(esi_1 + 0x54)
                float xmm0_50 = var_48.d * xmm1_38
                var_48.d = xmm2_4
                *(esi_1 + 0x50) = xmm0_50
                *(esi_1 + 0x5c) = var_50.d * xmm1_38
                float xmm0_53 = *(esi_1 + 0x60)
                var_50.d = xmm0_53
                double xmm0_57
                result, x87control, xmm0_57 = __libm_sse2_sqrt_precise(mxcsr, x87control_3, 
                    _mm_cvtps_pd(xmm0_53 * xmm0_53 + xmm2_4 * xmm2_4))
                float xmm1_43 = fconvert.s(xmm0_57)
                
                if (not(xmm1_43 <= 9.99999975e-06f))
                    double xmm0_59
                    x87control, xmm0_59 = __libm_sse2_sqrt_precise(mxcsr, x87control, xmm0_10)
                    result = *arg1
                    xmm1_43 =
                        ((fconvert.s(xmm0_59) - xmm1_43 + result[7].d) * var_64 + xmm1_43) / xmm1_43
                
                ecx = 1
                *(esi_1 + 0x54) = var_48.d * xmm1_43
                *(esi_1 + 0x60) = var_50.d * xmm1_43
            
            if (not(xmm0 f<= 0))
                float var_28
                var_28.q = _mm_cvtps_pd(*(esi_1 + 0x60))
                unimplemented  {fld st0, qword [esp+0x50]}
                var_28.q = _mm_cvtps_pd(*(esi_1 + 0x54))
                unimplemented  {fld st0, qword [esp+0x50]}
                sub_5984f0()
                int64_t xmm0_76 = _mm_cvtps_pd(xmm0_1)
                var_50.d = fconvert.s(unimplemented  {fstp dword [esp+0x28], st0})
                unimplemented  {fstp dword [esp+0x28], st0}
                var_28.q = xmm0_76
                unimplemented  {fld st0, qword [esp+0x50]}
                var_28.q = _mm_cvtps_pd(xmm6)
                unimplemented  {fld st0, qword [esp+0x50]}
                sub_5984f0()
                int64_t xmm0_80 = _mm_cvtps_pd(var_30)
                var_48 = fconvert.d(unimplemented  {fstp qword [esp+0x30], st0})
                unimplemented  {fstp qword [esp+0x30], st0}
                var_28.q = xmm0_80
                unimplemented  {fld st0, qword [esp+0x50]}
                var_28.q = _mm_cvtps_pd(var_34)
                unimplemented  {fld st0, qword [esp+0x50]}
                sub_5984f0()
                var_28.q = fconvert.d(unimplemented  {fstp qword [esp+0x50], st0})
                unimplemented  {fstp qword [esp+0x50], st0}
                float xmm0_84 = _mm_cvtpd_ps(zx.o(var_28.q))
                float xmm1_47 = _mm_cvtpd_ps(zx.o(var_48)) - xmm0_84
                var_28.q = _mm_cvtps_pd(*(esi_1 + 0x5c))
                unimplemented  {fld st0, qword [esp+0x50]}
                var_28.q = _mm_cvtps_pd(*(esi_1 + 0x50))
                unimplemented  {fld st0, qword [esp+0x50]}
                int16_t x87control_4 = sub_5984f0()
                var_28.q = fconvert.d(unimplemented  {fstp qword [esp+0x50], st0})
                unimplemented  {fstp qword [esp+0x50], st0}
                top -= 4
                float xmm1_51 = xmm1_47 - (var_50.d - _mm_cvtpd_ps(zx.o(var_28.q)))
                float xmm0_91 = *(esi_1 + 0x60)
                float xmm1_52 = *(esi_1 + 0x54)
                int16_t x87control_5
                double xmm0_95
                x87control_5, xmm0_95 = __libm_sse2_sqrt_precise(mxcsr, x87control_4, 
                    _mm_cvtps_pd(xmm0_91 * xmm0_91 + xmm1_52 * xmm1_52))
                var_48.d = fconvert.s(xmm0_95)
                float xmm0_97 = xmm1_51
                
                if (not(xmm0_97 <= 3.14159274f))
                    xmm0_97 = xmm0_97 - 6.28318548f
                else if (not(-3.14159274f <= xmm0_97))
                    xmm0_97 = xmm0_97 + 6.28318548f
                
                float xmm0_100[0x2] = (xmm0_97 + xmm1_6) * xmm0 f+ var_50.d
                int16_t x87control_6
                double xmm0_102
                x87control_6, xmm0_102 =
                    __libm_sse2_cos_precise(mxcsr, x87control_5, _mm_cvtps_pd(xmm0_100))
                *(esi_1 + 0x54) = fconvert.s(xmm0_102) f* var_48.d
                double xmm0_104
                result, x87control, xmm0_104 =
                    __libm_sse2_sin_precise(mxcsr, x87control_6, _mm_cvtps_pd(xmm0_100))
                *(esi_1 + 0x60) = fconvert.s(xmm0_104) f* var_48.d
                *(esi_1 + 0x4c) = 0
            else if (ecx != 0)
                *(esi_1 + 0x4c) = 0
            
            xmm7 = var_64
            i = i_1 + 1
            xmm3 = var_5c
            xmm2 = var_38
            xmm4 = var_34
            xmm5 = var_30
            i_1 = i
        while (i s< arg1[1])
    
    return result
}
