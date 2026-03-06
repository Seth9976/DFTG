// 函数名称: sub_530fa0
// 虚拟地址: 0x530fa0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_530fa0(int32_t arg1, void* arg2, void* arg3, float arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t ebx = arg5
    int32_t ebx = arg5
    void* var_c = arg3
    int32_t* edi = *(arg2 + 8)
    
    if (edi[2] != 0)
        sub_530fa0(arg4, ebx)
        arg3 = var_c
    
    float xmm1 = *(arg2 + 0x5c)
    xmm1 f- 0
    arg1:1.b = (xmm1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1, 0f) ? 1 : 0) << 2 | (xmm1 < 0f ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    float var_28
    float xmm1_1
    
    if (p_1)
        xmm1_1 = _mm_min_ss(0x3f800000, *(arg2 + 0x58) / xmm1)
        var_28 = xmm1_1
        
        if (ebx != 1)
            ebx = edi[0x1a]
            arg5 = ebx
    else
        xmm1_1 = 1f
        int32_t eax = 0
        var_28 = 1f
        
        if (ebx != 1)
            eax = ebx
        
        ebx = eax
        arg5 = ebx
    
    int32_t var_14
    
    if (edi[8] f<= xmm1_1)
        var_14 = 0
    else
        var_14 = *(arg3 + 0x20)
    
    int32_t xmm4 = edi[0xd]
    float xmm2 = edi[0xb]
    int32_t var_18 = xmm4
    int32_t eax_1
    eax_1.b = edi[9] f> xmm1_1
    float var_8 = xmm2
    float xmm1_2 = edi[0xc]
    int32_t eax_2
    eax_2.b = edi[0xa] f> xmm1_1
    int32_t var_34 = eax_2
    
    if (edi[6] == 0)
        xmm2 = _mm_min_ss(edi[0x10] f+ xmm2, xmm1_2)
        var_8 = xmm2
    else
        float xmm1_3[0x2] = xmm1_2 - xmm2
        xmm1_3 f- 0
        eax_2:1.b = (xmm1_3 f== 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_3, 0f) ? 1 : 0) << 2
            | (xmm1_3 f< 0f ? 1 : 0)
        bool p_3 = unimplemented  {test ah, 0x44}
        
        if (p_3)
            double var_4c_1 = _mm_cvtps_pd(edi[0x10])
            long double x87_r6_1 = fconvert.t(_mm_cvtps_pd(xmm1_3))
            sub_598500()
            xmm4 = var_18
            xmm2 = _mm_cvtpd_ps(zx.o(fconvert.d(x87_r6_1))) + var_8
            var_8 = xmm2
    
    float xmm3_1 = edi[0x15] f* *(arg2 + 0x60)
    void* eax_3 = *edi
    float var_38 = xmm3_1
    int32_t ecx_1 = *(eax_3 + 8)
    int32_t edx_1 = *(eax_3 + 0xc)
    float xmm0_15 = (1f - var_28) * xmm3_1
    int32_t var_1c = ecx_1
    int32_t var_24 = edx_1
    float var_20 = xmm0_15
    
    if (ebx != 3)
        void* eax_6 = edi[0x1b]
        void* eax_7 = edi[0x1c]
        int32_t eax_8 = edi[0x1e]
        int32_t ebx_3
        ebx_3.b = eax_8 == 0
        
        if (eax_8 == 0)
            sub_531d90(edi, ecx_1 * 2)
            xmm0_15 = var_20
            xmm3_1 = var_38
            ecx_1 = var_1c
            edx_1 = var_24
        
        int32_t esi_2 = 0
        double var_4c
        var_4c:4.d = edi[0x1d]
        edi[0x19] = 0
        
        if (ecx_1 s> 0)
            do
                int32_t* eax_10 = *(edx_1 + (esi_2 << 2))
                int32_t ebx_4 = 1
                int32_t ecx_4 = *(*(eax_6 + 8) + (esi_2 << 2))
                int32_t eax_14 = ecx_4 & 3
                int32_t edx_3
                
                if (eax_14 == 0)
                    edx_3 = arg5
                    
                    if (eax_1 != 0 || *eax_10 != 4)
                        goto label_531238
                    
                    if ((ecx_4.b & 4) == 0)
                        edx_3 = 0
                    label_531238:
                        
                        if (var_34 != 0 || *eax_10 != 8)
                            goto label_531247
                else
                    float xmm2_3
                    
                    if (eax_14 == 1)
                        edx_3 = 0
                    label_531247:
                        xmm2_3 = xmm0_15
                    else if (eax_14 == 2)
                        edx_3 = 0
                        xmm2_3 = xmm3_1
                    else
                        edx_3 = 0
                        void* eax_20 = *(*(eax_7 + 8) + (esi_2 << 2))
                        xmm2_3 = _mm_max_ss(0, 1f - *(eax_20 + 0x58) f/ *(eax_20 + 0x5c)) * xmm3_1
                    
                    edi[0x19] = xmm2_3 f+ edi[0x19]
                    int32_t eax_22 = *eax_10
                    
                    if (eax_22 != 0)
                        if (edx_3 == 0)
                            if (eax_22 != 4)
                                if (eax_22 == 8 && var_34 != 0)
                                    ebx_4 = 0
                            else if (eax_1 != edx_3 || (*(*(eax_6 + 8) + (esi_2 << 2)) & 4) != 0)
                                ebx_4 = 0
                        
                        int32_t* ecx_6 = eax_10[1]
                        int32_t* var_68_4 = ecx_6
                        (*ecx_6)(eax_10, arg4, var_18, var_8, var_14, var_c + 0x1c, xmm2_3, edx_3, 
                            ebx_4)
                    else
                        int32_t var_60_2 = ebx_3
                        int32_t eax_23 = esi_2 * 2
                        int32_t* var_70_2 = eax_10
                        sub_531350(eax_23, eax_10, var_8, eax_10, arg4, xmm2_3, edx_3, var_4c:4.d, 
                            eax_23)
                xmm0_15 = var_20
                esi_2 += 1
                xmm3_1 = var_38
                edx_1 = var_24
            while (esi_2 s< var_1c)
    else
        int32_t esi_1 = 0
        
        if (ecx_1 s> 0)
            do
                void* eax_4 = *(edx_1 + (esi_1 << 2))
                int32_t* ecx_2 = *(eax_4 + 4)
                int32_t* var_68_1 = ecx_2
                (*ecx_2)(eax_4, arg4, xmm4, xmm2, var_14, var_c + 0x1c, xmm0_15, 3, 1)
                xmm2 = var_8
                esi_1 += 1
                xmm0_15 = var_20
                xmm4 = var_18
                edx_1 = var_24
            while (esi_1 s< ecx_1)
    
    if (not(*(arg2 + 0x5c) f<= 0))
        sub_531730(var_c, edi, var_8)
    
    *(var_c + 0x1c) = 0
    int32_t result = edi[0x10]
    edi[0xe] = var_8
    edi[0x12] = result
    return result
}
