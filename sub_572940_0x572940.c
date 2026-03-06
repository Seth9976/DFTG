// 函数名称: sub_572940
// 虚拟地址: 0x572940
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_572940(int32_t* arg1)
{
    // 第一条实际指令: float xmm1 = arg1[6]
    float xmm1 = arg1[6]
    int32_t i_3 = arg1[1]
    int32_t i_2 = i_3
    float xmm2 = arg1[7]
    int32_t eax
    eax.b = xmm1 > 0f
    float esi = *(arg1[3] + 0x1c)
    void* eax_2 = *arg1
    int32_t ecx = *(eax_2 + 0x1c)
    int32_t var_40 = ecx
    int32_t edx
    edx.b = ecx == 2
    int32_t edx_1 = *(eax_2 + 0x20)
    int32_t var_58 = edx_1
    int32_t eax_3
    eax_3.b = edx_1 == 0
    
    if (edx_1 != 0)
        i_3 += 1
    
    int32_t eax_5 = arg1[2]
    void* result
    result.b = xmm2 > 0f
    
    if ((result != 0 || eax != result) && esi != 0 && *(esi i+ 4) == 4)
        int32_t* var_5c_1
        int32_t* esi_1
        
        if (arg1[8] == i_3)
            esi_1 = arg1[9]
            var_5c_1 = esi_1
        else
            int32_t eax_6 = arg1[9]
            
            if (eax_6 != 0)
                _free(eax_6)
            
            int32_t ecx_1 = data_1151ae0
            int32_t eax_7 = i_3 << 2
            
            if (ecx_1 == 0)
                int32_t var_6c_2 = eax_7
                int32_t* eax_9 = _malloc()
                edx_1 = var_58
                esi_1 = eax_9
                ecx = var_40
                var_5c_1 = eax_9
                arg1[9] = esi_1
                arg1[8] = i_3
            else
                edx_1 = var_58
                esi_1 = ecx_1(eax_7, 
                    "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\pathconstraint.c", 0x63)
                ecx = var_40
                var_5c_1 = esi_1
                arg1[9] = esi_1
                arg1[8] = i_3
        
        *esi_1 = 0
        int32_t* ebx = nullptr
        float xmm0_1 = arg1[5]
        
        if (edx_1 == 2)
            if (arg1[0x10] == i_2)
                ebx = arg1[0x11]
            else
                int32_t eax_12 = arg1[0x11]
                
                if (eax_12 != 0)
                    _free(eax_12)
                
                int32_t ecx_5 = data_1151ae0
                int32_t eax_13 = i_2 << 2
                
                if (ecx_5 == 0)
                    int32_t var_6c_4 = eax_13
                    edx_1 = var_58
                    ebx = _malloc()
                    arg1[0x11] = ebx
                    arg1[0x10] = i_2
                else
                    edx_1 = var_58
                    ebx = ecx_5(eax_13, 
                        "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\pathconstraint.c", 
                        0x6e)
                    arg1[0x11] = ebx
                    arg1[0x10] = i_2
            
            goto label_572b0a
        
        int32_t mxcsr
        
        if (ecx != 2)
        label_572b0a:
            int32_t i = 0
            int32_t eax_17 = *(eax_2 + 0x1c)
            
            if (i_3 - 1 s> 0)
                void* eax_20 = 4
                
                do
                    int32_t* ecx_6 = *(eax_5 + (i << 2))
                    float xmm2_1 = *(*ecx_6 + 0xc)
                    float xmm0_2
                    
                    if (not(9.99999975e-06f <= xmm2_1))
                        if (edx_1 == 2)
                            ebx[i] = 0
                        
                        xmm0_2 = (zx.o(0)).d
                    else
                        int16_t x87control
                        
                        if (var_40 != 2)
                            float xmm0_11 = ecx_6[0x17] f* xmm2_1
                            float xmm1_5 = ecx_6[0x14] f* xmm2_1
                            double xmm0_15
                            x87control, xmm0_15 = __libm_sse2_sqrt_precise(mxcsr, x87control, 
                                _mm_cvtps_pd(xmm0_11 * xmm0_11 + xmm1_5 * xmm1_5))
                            edx_1 = var_58
                            float xmm2_2 = fconvert.s(xmm0_15)
                            
                            if (edx_1 == 2)
                                ebx[i] = xmm2_2
                            
                            float xmm0_17
                            
                            if (eax_17 != 0)
                                xmm0_17 = xmm0_1
                            else
                                xmm0_17 = xmm2_1 + xmm0_1
                            
                            xmm0_2 = xmm0_17 * xmm2_2 / xmm2_1
                        else
                            if (edx_1 == 2)
                                float xmm0_4 = ecx_6[0x17] f* xmm2_1
                                float xmm1_2 = ecx_6[0x14] f* xmm2_1
                                double xmm0_8
                                x87control, xmm0_8 = __libm_sse2_sqrt_precise(mxcsr, x87control, 
                                    _mm_cvtps_pd(xmm0_4 * xmm0_4 + xmm1_2 * xmm1_2))
                                edx_1 = var_58
                                ebx[i] = fconvert.s(xmm0_8)
                            
                            xmm0_2 = xmm0_1
                    
                    float* ecx_7 = eax_20
                    i += 1
                    eax_20 = &ecx_7[1]
                    *(ecx_7 + var_5c_1) = xmm0_2
                while (i s< i_3 - 1)
            
            esi_1 = var_5c_1
        else
            int32_t ecx_4
            int32_t edi_2
            
            if (i_3 s> 1)
                edi_2, ecx_4 = __memfill_u32(&esi_1[1], xmm0_1, ((i_3 << 2) + 0xfffffffc) u>> 2)
        
        int32_t eax_23
        eax_23.b = *(eax_2 + 0x18) == 1
        int32_t* eax_24
        int16_t x87control_1
        eax_24, x87control_1 = sub_5732b0(eax_23, esi, arg1, i_3, eax_3, eax_23, edx)
        int32_t* edx_3 = eax_24
        float xmm2_3 = *(*arg1 + 0x24)
        float xmm5_1 = *edx_3
        float xmm4_1 = edx_3[1]
        xmm2_3 f- 0
        float var_34_1 = xmm2_3
        eax_24:1.b = (xmm2_3 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_3, 0f) ? 1 : 0) << 2
            | (xmm2_3 < 0f ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        void* result_2
        int32_t ecx_11
        
        if (p_2)
            result_2 = nullptr
            result = *(arg1[3] + 4)
            float xmm0_21
            
            if (*(result + 0x60) f* *(result + 0x50) - *(result + 0x5c) f* *(result + 0x54) f<= 0)
                xmm0_21 = -0.0174532924f
            else
                xmm0_21 = 0.0174532924f
            
            ecx_11 = var_58
            var_34_1 = xmm2_3 * xmm0_21
        else
            ecx_11 = var_58
            result.b = ecx_11 == 1
            result_2 = result
        
        if (i_2 s> 0)
            void* edi_4 = &edx_3[2]
            result = &esi_1[1]
            void** edx_5 = eax_5 - ebx
            void* result_1 = result
            void** var_48_1 = edx_5
            int32_t i_1
            
            do
                void** esi_3 = *(edx_5 + ebx)
                esi_3[0x16] = (xmm5_1 f- esi_3[0x16]) * xmm2 f+ esi_3[0x16]
                esi_3[0x19] = (xmm4_1 f- esi_3[0x19]) * xmm2 f+ esi_3[0x19]
                float xmm1_11 = *(edi_4 + 4)
                float xmm3_1 = *(edi_4 + 8)
                float xmm2_7[0x2] = xmm1_11 - xmm5_1
                float var_2c_1 = xmm1_11
                float xmm3_2[0x2] = xmm3_1 - xmm4_1
                float var_3c_2 = xmm2_7
                float var_28_2 = xmm3_2
                
                if (ecx_11 == 2)
                    float xmm0_30 = *ebx
                    xmm0_30 f- 0
                    result:1.b = (xmm0_30 == 0f ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_30, 0f) ? 1 : 0) << 2 | (xmm0_30 < 0f ? 1 : 0)
                    bool p_4 = unimplemented  {test ah, 0x44}
                    
                    if (p_4)
                        double xmm0_34
                        x87control_1, xmm0_34 = __libm_sse2_sqrt_precise(mxcsr, x87control_1, 
                            _mm_cvtps_pd(xmm3_2[0] f* xmm3_2 + xmm2_7[0] f* xmm2_7))
                        xmm2_7 = var_3c_2
                        ecx_11 = var_58
                        xmm3_2 = var_28_2
                        float xmm1_19 = (fconvert.s(xmm0_34) f/ *ebx - 1f) * xmm1 + 1f
                        esi_3[0x14] = esi_3[0x14] f* xmm1_19
                        xmm1_11 = var_2c_1
                        esi_3[0x17] = esi_3[0x17] f* xmm1_19
                    
                    result = result_1
                
                xmm5_1 = xmm1_11
                xmm4_1 = xmm3_1
                float var_20_2 = xmm5_1
                float var_54_2 = xmm4_1
                
                if (eax != 0)
                    float xmm0_39 = esi_3[0x14]
                    float xmm0_40 = esi_3[0x15]
                    float var_18
                    float xmm1_20
                    int16_t top
                    
                    if (ecx_11 != 0)
                        float xmm0_41 = *result
                        xmm0_41 f- 0
                        result:1.b = (xmm0_41 == 0f ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_41, 0f) ? 1 : 0) << 2 | (xmm0_41 < 0f ? 1 : 0)
                        bool p_6 = unimplemented  {test ah, 0x44}
                        
                        if (p_6)
                            var_18.q = _mm_cvtps_pd(xmm3_2)
                            unimplemented  {fld st0, qword [esp+0x50]}
                            var_18.q = _mm_cvtps_pd(xmm2_7)
                            unimplemented  {fld st0, qword [esp+0x50]}
                            sub_5984f0()
                            var_18 = fconvert.s(unimplemented  {fstp dword [esp+0x50], st0})
                            unimplemented  {fstp dword [esp+0x50], st0}
                            top -= 1
                            xmm1_20 = var_18
                        else
                            xmm1_20 = *(edi_4 + 0xc)
                    else
                        xmm1_20 = *edi_4
                    
                    var_18.q = _mm_cvtps_pd(esi_3[0x17])
                    unimplemented  {fld st0, qword [esp+0x50]}
                    var_18.q = _mm_cvtps_pd(xmm0_39)
                    unimplemented  {fld st0, qword [esp+0x50]}
                    int16_t x87control_2 = sub_5984f0()
                    var_18.q = fconvert.d(unimplemented  {fstp qword [esp+0x50], st0})
                    unimplemented  {fstp qword [esp+0x50], st0}
                    top -= 1
                    float xmm0_51[0x2] =
                        xmm1_20 - (_mm_cvtpd_ps(zx.o(var_18.q)) - var_34_1 * 0.0174532924f)
                    float var_5c_3 = xmm0_51
                    float xmm0_59
                    float xmm7_1
                    
                    if (result_2 == 0)
                        xmm7_1 = xmm1
                        xmm0_59 = xmm0_51 f+ var_34_1
                    else
                        int16_t x87control_3
                        double xmm0_53
                        x87control_3, xmm0_53 =
                            __libm_sse2_cos_precise(mxcsr, x87control_2, _mm_cvtps_pd(xmm0_51))
                        float xmm0_54 = fconvert.s(xmm0_53)
                        double xmm0_56
                        x87control_2, xmm0_56 =
                            __libm_sse2_sin_precise(mxcsr, x87control_3, _mm_cvtps_pd(var_5c_3))
                        void* eax_26 = *esi_3
                        xmm7_1 = xmm1
                        float xmm2_9 = fconvert.s(xmm0_56)
                        xmm0_59 = var_5c_3
                        var_54_2 = ((xmm0_54 f* esi_3[0x17] + xmm2_9 * xmm0_39) f* *(eax_26 + 0xc)
                            - var_28_2) * xmm7_1 + xmm3_1
                        var_20_2 = ((xmm0_54 * xmm0_39 - xmm2_9 f* esi_3[0x17]) f* *(eax_26 + 0xc)
                            - var_3c_2) * xmm7_1 + var_2c_1
                    
                    if (not(xmm0_59 <= 3.14159274f))
                        xmm0_59 = xmm0_59 - 6.28318548f
                    else if (not(-3.14159274f <= xmm0_59))
                        xmm0_59 = xmm0_59 + 6.28318548f
                    
                    float xmm0_60[0x2] = xmm0_59 * xmm7_1
                    int16_t x87control_4
                    double xmm0_62
                    x87control_4, xmm0_62 =
                        __libm_sse2_cos_precise(mxcsr, x87control_2, _mm_cvtps_pd(xmm0_60))
                    float xmm0_63 = fconvert.s(xmm0_62)
                    double xmm0_65
                    x87control_1, xmm0_65 =
                        __libm_sse2_sin_precise(mxcsr, x87control_4, _mm_cvtps_pd(xmm0_60))
                    float xmm2_11 = fconvert.s(xmm0_65)
                    result = result_1
                    xmm4_1 = var_54_2
                    xmm5_1 = var_20_2
                    float xmm0_69 = xmm2_11 f* esi_3[0x18]
                    esi_3[0x14] = xmm0_63 * xmm0_39 - xmm2_11 f* esi_3[0x17]
                    esi_3[0x15] = xmm0_63 * xmm0_40 - xmm0_69
                    float xmm3_12 = xmm0_63 f* esi_3[0x18] + xmm2_11 * xmm0_40
                    esi_3[0x17] = xmm0_63 f* esi_3[0x17] + xmm2_11 * xmm0_39
                    esi_3[0x18] = xmm3_12
                
                ecx_11 = var_58
                result += 4
                edx_5 = var_48_1
                ebx = &ebx[1]
                edi_4 += 0xc
                esi_3[0x13] = 0xffffffff
                i_1 = i_2
                i_2 -= 1
                result_1 = result
            while (i_1 != 1)
    
    return result
}
