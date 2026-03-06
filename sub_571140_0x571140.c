// 函数名称: sub_571140
// 虚拟地址: 0x571140
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_571140(void* arg1, void* arg2, float arg3, float arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t eax_1 = *(arg2 + 0x20)
    int32_t eax_1 = *(arg2 + 0x20)
    int32_t* esi = *(eax_1 + (*(arg1 + 0x14) << 2))
    
    if (esi[9] != 0)
        int32_t* edi_1 = *(arg1 + 0x10)
        
        if (*edi_1 f<= arg3)
            int32_t edx_1 = *(arg1 + 0xc)
            
            if (arg3 f< edi_1[edx_1 - 6])
                int32_t eax_14 = sub_56da60(eax_1, edx_1, edi_1, arg3, 6)
                int32_t eax_15
                int32_t edx_2
                edx_2:eax_15 = muls.dp.d(0x2aaaaaab, eax_14)
                float xmm6_1 = edi_1[eax_14 - 5]
                float xmm5_1 = edi_1[eax_14 - 4]
                float xmm0_29
                eax_1, xmm0_29 = sub_56d9a0(arg1, edx_2 + (edx_2 u>> 0x1f) - 1, 
                    1f - (arg3 f- edi_1[eax_14]) / (edi_1[eax_14 - 6] f- edi_1[eax_14]))
                float xmm1_4 = (edi_1[eax_14 + 1] f- xmm6_1) * xmm0_29 + xmm6_1
                
                if (arg5 == 0)
                    void* ecx_5 = *esi
                    esi[7] = (xmm1_4 f- *(ecx_5 + 0x28)) * arg4 f+ *(ecx_5 + 0x28)
                    esi[8] = ((edi_1[eax_14 + 2] f- xmm5_1) * xmm0_29 + xmm5_1 f- *(ecx_5 + 0x2c))
                        * arg4 f+ *(ecx_5 + 0x2c)
                    
                    if (arg6 != 1)
                        goto label_5713d5
                    
                    esi[4] = *(ecx_5 + 0x18)
                    esi[5] = *(ecx_5 + 0x1c)
                    int32_t eax_21 = *(ecx_5 + 0x20)
                    esi[6] = eax_21
                    return eax_21
                
                esi[7] = (xmm1_4 f- esi[7]) * arg4 f+ esi[7]
                esi[8] = ((edi_1[eax_14 + 2] f- xmm5_1) * xmm0_29 + xmm5_1 f- esi[8]) * arg4 f+ esi[8]
                
                if (arg6 == 0)
                label_5713d5:
                    esi[4] = int.d(fconvert.t(edi_1[eax_14 - 3]))
                    float xmm0_44 = edi_1[eax_14 - 2]
                    xmm0_44 f- 0
                    int32_t eax_22
                    eax_22:1.b = (xmm0_44 == 0f ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_44, 0f) ? 1 : 0) << 2 | (xmm0_44 < 0f ? 1 : 0)
                    bool p_6 = unimplemented  {test ah, 0x44}
                    int32_t eax_23
                    
                    eax_23 = not(p_6) ? 0 : 1
                    
                    esi[5] = eax_23
                    float xmm0_45 = edi_1[eax_14 - 1]
                    xmm0_45 f- 0
                    eax_23:1.b = (xmm0_45 == 0f ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_45, 0f) ? 1 : 0) << 2 | (xmm0_45 < 0f ? 1 : 0)
                    bool p_8 = unimplemented  {test ah, 0x44}
                    
                    if (p_8)
                        esi[6] = 1
                        return 1
                    
                    eax_1 = 0
                    esi[6] = 0
            else
                float xmm0_10 = edi_1[edx_1 - 5]
                
                if (arg5 == 0)
                    void* ecx_2 = *esi
                    esi[7] = (xmm0_10 f- *(ecx_2 + 0x28)) * arg4 f+ *(ecx_2 + 0x28)
                    esi[8] = (edi_1[edx_1 - 4] f- *(ecx_2 + 0x2c)) * arg4 f+ *(ecx_2 + 0x2c)
                    
                    if (arg6 != 1)
                        goto label_571281
                    
                    esi[4] = *(ecx_2 + 0x18)
                    esi[5] = *(ecx_2 + 0x1c)
                    int32_t eax_11 = *(ecx_2 + 0x20)
                    esi[6] = eax_11
                    return eax_11
                
                esi[7] = (xmm0_10 f- esi[7]) * arg4 f+ esi[7]
                esi[8] = (edi_1[edx_1 - 4] f- esi[8]) * arg4 f+ esi[8]
                
                if (arg6 == 0)
                label_571281:
                    esi[4] = int.d(fconvert.t(edi_1[edx_1 - 3]))
                    float xmm0_25 = edi_1[edx_1 - 2]
                    xmm0_25 f- 0
                    int32_t eax_12
                    eax_12:1.b = (xmm0_25 == 0f ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_25, 0f) ? 1 : 0) << 2 | (xmm0_25 < 0f ? 1 : 0)
                    bool p_2 = unimplemented  {test ah, 0x44}
                    int32_t eax_13
                    
                    eax_13 = not(p_2) ? 0 : 1
                    
                    esi[5] = eax_13
                    float xmm0_26 = edi_1[edx_1 - 1]
                    xmm0_26 f- 0
                    eax_13:1.b = (xmm0_26 == 0f ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_26, 0f) ? 1 : 0) << 2 | (xmm0_26 < 0f ? 1 : 0)
                    bool p_4 = unimplemented  {test ah, 0x44}
                    
                    if (not(p_4))
                        esi[6] = 0
                        return 0
                    
                    esi[6] = 1
                    return 1
        else
            void* ecx_1
            
            if (arg5 == 0)
                ecx_1 = *esi
                esi[7] = *(ecx_1 + 0x28)
                esi[8] = *(ecx_1 + 0x2c)
            label_5711c7:
                esi[4] = *(ecx_1 + 0x18)
                esi[5] = *(ecx_1 + 0x1c)
                int32_t eax_8 = *(ecx_1 + 0x20)
                esi[6] = eax_8
                return eax_8
            
            eax_1 = arg5 - 1
            
            if (arg5 == 1)
                ecx_1 = *esi
                esi[7] = (*(ecx_1 + 0x28) f- esi[7]) * arg4 f+ esi[7]
                esi[8] = (*(ecx_1 + 0x2c) f- esi[8]) * arg4 f+ esi[8]
                goto label_5711c7
    
    return eax_1
}
