// 函数名称: sub_574bd0
// 虚拟地址: 0x574bd0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

double* __fastcallsub_574bd0(int32_t* arg1)
{
    // 第一条实际指令: void* ebx = arg1[3]
    void* ebx = arg1[3]
    float xmm0 = arg1[7]
    float xmm4 = arg1[4]
    float xmm6 = arg1[5]
    float xmm3[0x2] = *(ebx + 0x5c)
    float xmm5 = *(ebx + 0x54)
    float xmm2[0x2] = *(ebx + 0x50)
    float xmm7 = arg1[6]
    float xmm0_1 = *(ebx + 0x60)
    float var_38 = xmm4
    float var_44 = xmm6
    float var_64 = xmm7
    int32_t var_40 = xmm2
    int32_t var_3c = xmm3
    float xmm0_4
    
    if (xmm0_1 f* xmm2 - xmm3[0] * xmm5 f<= 0)
        xmm0_4 = -0.0174532924f
    else
        xmm0_4 = 0.0174532924f
    
    double* result = *arg1
    int32_t i = 0
    int32_t i_1 = 0
    float xmm1_4 = result[5].d * xmm0_4
    float xmm1_6 = *(result + 0x3c) * xmm0_4
    
    if (arg1[1] s> 0)
        double xmm0_7 = _mm_cvtps_pd(xmm3[0] f* xmm3 + xmm2[0] f* xmm2)
        double xmm0_10 = _mm_cvtps_pd(xmm0_1 * xmm0_1 + xmm5 * xmm5)
        
        do
            void* esi_1 = *(arg1[2] + (i << 2))
            int32_t ecx = 0
            xmm4 f- 0
            result:1.b = (xmm4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4, 0f) ? 1 : 0) << 2
                | (xmm4 < 0f ? 1 : 0)
            bool p_2 = unimplemented  {test ah, 0x44}
            double var_50
            int32_t mxcsr
            int16_t x87control
            int16_t top
            
            if (p_2)
                float xmm0_11 = *(esi_1 + 0x50)
                float xmm0_12 = *(esi_1 + 0x54)
                int64_t var_50_1 = _mm_cvtps_pd(xmm3)
                unimplemented  {fld st0, qword [esp+0x20]}
                int64_t var_50_2 = _mm_cvtps_pd(xmm2)
                unimplemented  {fld st0, qword [esp+0x20]}
                int16_t x87control_1 = sub_5984f0()
                var_50 = fconvert.d(unimplemented  {fstp qword [esp+0x20], st0})
                unimplemented  {fstp qword [esp+0x20], st0}
                top -= 1
                float xmm0_17 = _mm_cvtpd_ps(zx.o(var_50)) + xmm1_4
                
                if (not(xmm0_17 <= 3.14159274f))
                    xmm0_17 = xmm0_17 - 6.28318548f
                else if (not(-3.14159274f <= xmm0_17))
                    xmm0_17 = xmm0_17 + 6.28318548f
                
                float xmm0_18[0x2] = xmm0_17 * var_38
                var_50.d = xmm0_18
                int16_t x87control_2
                double xmm0_20
                x87control_2, xmm0_20 =
                    __libm_sse2_cos_precise(mxcsr, x87control_1, _mm_cvtps_pd(xmm0_18))
                float xmm0_21 = fconvert.s(xmm0_20)
                double xmm0_23
                result, x87control, xmm0_23 =
                    __libm_sse2_sin_precise(mxcsr, x87control_2, _mm_cvtps_pd(var_50.d))
                float xmm2_1 = fconvert.s(xmm0_23)
                ecx = 1
                xmm6 = var_44
                xmm7 = var_64
                float xmm0_27 = xmm2_1 f* *(esi_1 + 0x60)
                *(esi_1 + 0x50) = xmm0_21 * xmm0_11 - xmm2_1 f* *(esi_1 + 0x5c)
                *(esi_1 + 0x54) = xmm0_21 * xmm0_12 - xmm0_27
                float xmm3_3 = xmm0_21 f* *(esi_1 + 0x60) + xmm2_1 * xmm0_12
                *(esi_1 + 0x5c) = xmm0_21 f* *(esi_1 + 0x5c) + xmm2_1 * xmm0_11
                *(esi_1 + 0x60) = xmm3_3
            
            xmm6 f- 0
            result:1.b = (xmm6 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm6, 0f) ? 1 : 0) << 2
                | (xmm6 < 0f ? 1 : 0)
            bool p_4 = unimplemented  {test ah, 0x44}
            
            if (p_4)
                result = *arg1
                ecx = 1
                float xmm1_27 = (*(ebx + 0x54) * result[6].d
                    + *(ebx + 0x50) f* *(result + 0x2c) f+ *(ebx + 0x58)) * xmm6
                *(esi_1 + 0x64) = (*(ebx + 0x5c) f* *(result + 0x2c)
                    + result[6].d f* *(ebx + 0x60) f+ *(ebx + 0x64)) * xmm6 f+ *(esi_1 + 0x64)
                *(esi_1 + 0x58) = xmm1_27 f+ *(esi_1 + 0x58)
            
            if (not(xmm7 f<= 0))
                int16_t x87control_3
                double xmm0_35
                x87control_3, xmm0_35 = __libm_sse2_sqrt_precise(mxcsr, x87control, xmm0_7)
                float xmm1_33 = (fconvert.s(xmm0_35) - 1f f+ *(*arg1 + 0x34)) * var_64 + 1f
                *(esi_1 + 0x50) = *(esi_1 + 0x50) * xmm1_33
                *(esi_1 + 0x5c) = *(esi_1 + 0x5c) * xmm1_33
                double xmm0_41
                x87control, xmm0_41 = __libm_sse2_sqrt_precise(mxcsr, x87control_3, xmm0_10)
                result = *arg1
                ecx = 1
                float xmm1_38 = (fconvert.s(xmm0_41) - 1f + result[7].d) * var_64 + 1f
                *(esi_1 + 0x54) = xmm1_38 f* *(esi_1 + 0x54)
                *(esi_1 + 0x60) = *(esi_1 + 0x60) * xmm1_38
            
            if (not(xmm0 f<= 0))
                float var_28
                var_28.q = _mm_cvtps_pd(xmm0_1)
                unimplemented  {fld st0, qword [esp+0x48]}
                var_28.q = _mm_cvtps_pd(xmm5)
                unimplemented  {fld st0, qword [esp+0x48]}
                sub_5984f0()
                int64_t xmm0_52 = _mm_cvtps_pd(var_3c)
                var_28.q = fconvert.d(unimplemented  {fstp qword [esp+0x48], st0})
                unimplemented  {fstp qword [esp+0x48], st0}
                float var_30
                var_30.q = xmm0_52
                unimplemented  {fld st0, qword [esp+0x40]}
                var_30.q = _mm_cvtps_pd(var_40)
                unimplemented  {fld st0, qword [esp+0x40]}
                int16_t x87control_4 = sub_5984f0()
                var_30.q = fconvert.d(unimplemented  {fstp qword [esp+0x40], st0})
                unimplemented  {fstp qword [esp+0x40], st0}
                float xmm0_56 = _mm_cvtpd_ps(zx.o(var_30.q))
                float xmm1_41 = _mm_cvtpd_ps(zx.o(var_28.q)) - xmm0_56
                float var_5c_2 = xmm1_41
                
                if (not(xmm1_41 <= 3.14159274f))
                    var_5c_2 = xmm1_41 - 6.28318548f
                else if (not(-3.14159274f <= xmm1_41))
                    var_5c_2 = xmm1_41 + 6.28318548f
                
                float xmm1_43 = *(esi_1 + 0x60)
                float xmm0_57 = *(esi_1 + 0x54)
                var_50.d = fconvert.s(__libm_sse2_sqrt_precise(mxcsr, x87control_4, 
                    _mm_cvtps_pd(xmm1_43 * xmm1_43 + xmm0_57 * xmm0_57)))
                var_28.q = _mm_cvtps_pd(*(esi_1 + 0x60))
                unimplemented  {fld st0, qword [esp+0x48]}
                var_28.q = _mm_cvtps_pd(*(esi_1 + 0x54))
                unimplemented  {fld st0, qword [esp+0x48]}
                int16_t x87control_5 = sub_5984f0()
                var_28.q = fconvert.d(unimplemented  {fstp qword [esp+0x48], st0})
                unimplemented  {fstp qword [esp+0x48], st0}
                top -= 3
                double xmm0_69 = _mm_cvtps_pd(_mm_cvtpd_ps(zx.o(var_28.q))
                    + (var_5c_2 - 1.57079637f + xmm1_6) * xmm0)
                var_28.q = xmm0_69
                int16_t x87control_6
                double xmm0_70
                x87control_6, xmm0_70 = __libm_sse2_cos_precise(mxcsr, x87control_5, xmm0_69)
                *(esi_1 + 0x54) = fconvert.s(xmm0_70) f* var_50.d
                double xmm0_72
                result, x87control, xmm0_72 = __libm_sse2_sin_precise(mxcsr, x87control_6, var_28.q)
                *(esi_1 + 0x60) = fconvert.s(xmm0_72) f* var_50.d
                *(esi_1 + 0x4c) = 0
            else if (ecx != 0)
                *(esi_1 + 0x4c) = 0
            
            xmm6 = var_44
            i = i_1 + 1
            xmm7 = var_64
            xmm2 = var_40
            xmm3 = var_3c
            xmm4 = var_38
            i_1 = i
        while (i s< arg1[1])
    
    return result
}
