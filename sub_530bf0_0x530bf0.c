// 函数名称: sub_530bf0
// 虚拟地址: 0x530bf0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_530bf0(void* arg1, float arg2 @ edx)
{
    // 第一条实际指令: float var_14 = arg2
    float var_14 = arg2
    void* var_c = arg1
    int32_t result = 0
    
    if (*(arg1 + 0x34) != 0)
        int32_t ebx_1 = *(arg1 + 4)
        int32_t edi_1 = 0
        *(arg1 + 0x34) = 0
        *(arg1 + 0x2c) = 0
        
        if (ebx_1 s> 0)
            do
                int32_t* i_4 = *(*(arg1 + 8) + (edi_1 << 2))
                
                if (i_4 != 0)
                    for (int32_t* i = i_4[2]; i != 0; i = i_4[2])
                        i_4 = i
                    
                    int32_t* i_1
                    
                    do
                        i_1 = i_4[3]
                        
                        if (i_1 == 0 || i_4[0x1a] != 3)
                            sub_531ee0(i_4, arg1)
                            i_1 = i_4[3]
                            arg1 = var_c
                        
                        i_4 = i_1
                    while (i_1 != 0)
                
                edi_1 += 1
            while (edi_1 s< ebx_1)
            
            ebx_1 = *(arg1 + 4)
        
        int32_t edx_1 = ebx_1 - 1
        *(arg1 + 0x2c) = 0
        int32_t var_1c_1 = edx_1
        
        if (edx_1 s>= 0)
            bool cond:1_1
            
            do
                int32_t* i_2 = *(*(arg1 + 8) + (edx_1 << 2))
                int32_t* i_3 = i_2
                
                while (i_2 != 0)
                    void* eax_3 = *i_2
                    int32_t j_1 = *(eax_3 + 8)
                    int32_t* esi_1 = *(i_2[0x1b] + 8)
                    
                    if (j_1 s> 0)
                        void* ebx_3 = *(eax_3 + 0xc) - esi_1
                        int32_t j
                        
                        do
                            int32_t* edx_2 = *(esi_1 + ebx_3)
                            
                            if (*edx_2 == 4)
                                int32_t eax_5 = sub_531e10(arg1, edx_2[4])
                                arg1 = var_c
                                
                                if (eax_5 == 0)
                                    *esi_1 |= 4
                            
                            esi_1 = &esi_1[1]
                            j = j_1
                            j_1 -= 1
                        while (j != 1)
                        i_2 = i_3
                    
                    i_2 = i_2[2]
                    i_3 = i_2
                
                edx_1 = var_1c_1 - 1
                cond:1_1 = var_1c_1 - 1 s>= 0
                var_1c_1 = edx_1
            while (cond:1_1)
        
        arg2 = var_14
    
    int32_t eax_6 = *(arg1 + 4)
    int32_t ebx_4 = 0
    int32_t var_30 = 0
    
    if (eax_6 s> 0)
        do
            int32_t* edi_2 = *(*(arg1 + 8) + (ebx_4 << 2))
            
            if (edi_2 != 0 && not(edi_2[0xf] f> 0))
                result = 0xffffffff
                int32_t eax_8 = 1
                
                if (ebx_4 != 0)
                    eax_8 = edi_2[0x1a]
                
                int32_t var_18_1 = eax_8
                float var_8_1 = edi_2[0x15]
                float xmm1_1[0x2]
                
                if (edi_2[2] == 0)
                    float xmm0_5[0x2] = edi_2[0x10]
                    xmm1_1 = xmm0_5
                    
                    if (not(xmm0_5 f< edi_2[0x13]) && edi_2[1] == 0)
                        var_8_1 = 0f
                else
                    float xmm0_3
                    eax_8, xmm0_3 = sub_530fa0(eax_8, edi_2, arg1, arg2, eax_8)
                    xmm1_1 = edi_2[0x10]
                    var_8_1 = xmm0_3 * var_8_1
                
                int32_t xmm3_1 = edi_2[0xd]
                float xmm0_6 = edi_2[0xb]
                float xmm2_1 = edi_2[0xc]
                int32_t var_1c_2 = xmm3_1
                float var_10_1 = xmm0_6
                double var_44
                
                if (edi_2[6] == 0)
                    xmm0_6 = _mm_min_ss(xmm0_6 f+ xmm1_1, xmm2_1)
                    var_10_1 = xmm0_6
                else
                    float xmm2_2[0x2] = xmm2_1 - xmm0_6
                    xmm2_2 f- 0
                    eax_8:1.b = (xmm2_2 f== 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_2, 0f) ? 1 : 0) << 2
                        | (xmm2_2 f< 0f ? 1 : 0)
                    bool p_2 = unimplemented  {test ah, 0x44}
                    
                    if (p_2)
                        int64_t var_44_1 = _mm_cvtps_pd(xmm1_1)
                        unimplemented  {fld st0, qword [ebp-0x40]}
                        int64_t var_44_2 = _mm_cvtps_pd(xmm2_2)
                        unimplemented  {fld st0, qword [ebp-0x40]}
                        sub_598500()
                        xmm3_1 = var_1c_2
                        var_44 = fconvert.d(unimplemented  {fstp qword [ebp-0x40], st0})
                        unimplemented  {fstp qword [ebp-0x40], st0}
                        int16_t top = top - 1
                        xmm0_6 = _mm_cvtpd_ps(zx.o(var_44)) + var_10_1
                        var_10_1 = xmm0_6
                
                void* eax_9 = *edi_2
                float xmm1_2 = var_8_1
                int32_t esi_2 = *(eax_9 + 8)
                int32_t ecx_1 = *(eax_9 + 0xc)
                int32_t var_20_1 = ecx_1
                bool p_4
                
                if (ebx_4 == 0)
                    xmm1_2 - 1f
                    eax_9:1.b = (xmm1_2 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm1_2, 1f) ? 1 : 0) << 2
                        | (xmm1_2 < 1f ? 1 : 0)
                    p_4 = unimplemented  {test ah, 0x44}
                
                void* esi_3
                int32_t edx_6
                
                if (ebx_4 == 0 && not(p_4))
                    edx_6 = var_18_1
                label_530e9f:
                    int32_t ebx_6 = 0
                    esi_3 = var_c
                    
                    if (esi_2 s> 0)
                        do
                            void* eax_15 = *(ecx_1 + (ebx_6 << 2))
                            int32_t* ecx_5 = *(eax_15 + 4)
                            int32_t* var_60_2 = ecx_5
                            (*ecx_5)(eax_15, var_14, xmm3_1, xmm0_6, *(esi_3 + 0x20), esi_3 + 0x1c, 
                                xmm1_2, edx_6, 0)
                            xmm0_6 = var_10_1
                            ebx_6 += 1
                            xmm1_2 = var_8_1
                            xmm3_1 = var_1c_2
                            edx_6 = var_18_1
                            ecx_1 = var_20_1
                        while (ebx_6 s< esi_2)
                else
                    edx_6 = var_18_1
                    
                    if (edx_6 == 3)
                        goto label_530e9f
                    
                    int32_t eax_10 = edi_2[0x1e]
                    void* edx_7 = edi_2[0x1b]
                    void* var_28_1 = edx_7
                    int32_t ecx_2
                    ecx_2.b = eax_10 == 0
                    
                    if (eax_10 == 0)
                        sub_531d90(edi_2, esi_2 * 2)
                        edx_7 = var_28_1
                    
                    int32_t ebx_5 = 0
                    var_44:4.d = edi_2[0x1d]
                    esi_3 = var_c
                    
                    if (esi_2 s> 0)
                        do
                            int32_t* ecx_4 = *(var_20_1 + (ebx_5 << 2))
                            int32_t edx_9 = 0
                            
                            if ((*(*(edx_7 + 8) + (ebx_5 << 2)) & 3) == 0)
                                edx_9 = var_18_1
                            
                            if (*ecx_4 != 0)
                                int32_t* ecx_6 = ecx_4[1]
                                int32_t* var_60_4 = ecx_6
                                (*ecx_6)(*(var_20_1 + (ebx_5 << 2)), var_14, var_1c_2, var_10_1, 
                                    *(esi_3 + 0x20), esi_3 + 0x1c, var_8_1, edx_9, 0)
                            else
                                int32_t var_58_2 = ecx_2
                                int32_t eax_14 = ebx_5 * 2
                                int32_t* var_68_1 = ecx_4
                                sub_531350(eax_14, ecx_4, var_10_1, ecx_4, var_14, var_8_1, edx_9, 
                                    var_44:4.d, eax_14)
                            
                            edx_7 = var_28_1
                            ebx_5 += 1
                        while (ebx_5 s< esi_2)
                sub_531730(esi_3, edi_2, var_10_1)
                arg1 = var_c
                ebx_4 = var_30
                *(arg1 + 0x1c) = 0
                int32_t eax_20 = edi_2[0x10]
                edi_2[0xe] = var_10_1
                edi_2[0x12] = eax_20
            
            arg2 = var_14
            ebx_4 += 1
            var_30 = ebx_4
        while (ebx_4 s< eax_6)
    
    sub_530590(*(arg1 + 0x24))
    return result
}
