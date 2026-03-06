// 函数名称: sub_56e460
// 虚拟地址: 0x56e460
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*sub_56e460(void* arg1, void* arg2, float arg3, float arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t eax_1 = *(arg2 + 8)
    int32_t eax_1 = *(arg2 + 8)
    int32_t* edi = *(eax_1 + (*(arg1 + 0x14) << 2))
    
    if (edi[0x1b] != 0)
        int32_t* ebx_1 = *(arg1 + 0x10)
        int32_t edx_1 = *(arg1 + 0xc)
        
        if (*ebx_1 f<= arg3)
            float xmm2_1
            float xmm3_2
            
            if (arg3 f< ebx_1[edx_1 - 3])
                int32_t eax_7 = sub_56da60(eax_1, edx_1, ebx_1, arg3, 3)
                int32_t eax_8
                int32_t edx_2
                edx_2:eax_8 = muls.dp.d(0x55555556, eax_7)
                float xmm0_12 = sub_56d9a0(arg1, edx_2 + (edx_2 u>> 0x1f) - 1, 
                    1f - (arg3 f- ebx_1[eax_7]) / (ebx_1[eax_7 - 3] f- ebx_1[eax_7]))
                xmm2_1 = (ebx_1[eax_7 + 1] f- ebx_1[eax_7 - 2]) * xmm0_12 f+ ebx_1[eax_7 - 2]
                xmm3_2 = (ebx_1[eax_7 + 2] f- ebx_1[eax_7 - 1]) * xmm0_12 f+ ebx_1[eax_7 - 1]
            else
                xmm2_1 = ebx_1[edx_1 - 2]
                xmm3_2 = ebx_1[edx_1 - 1]
            
            eax_1 = arg5
            
            switch (eax_1)
                case 0
                    void* eax_12 = *edi
                    edi[0xa] = xmm2_1 * arg4 f+ *(eax_12 + 0x24)
                    edi[0xb] = xmm3_2 * arg4 f+ *(eax_12 + 0x28)
                    return eax_12
                case 1, 2
                    void* eax_13 = *edi
                    edi[0xa] = (*(eax_13 + 0x24) + xmm2_1 f- edi[0xa]) * arg4 f+ edi[0xa]
                    edi[0xb] = (*(eax_13 + 0x28) + xmm3_2 f- edi[0xb]) * arg4 f+ edi[0xb]
                    return eax_13
                case 3
                    float xmm3_11 = xmm3_2 * arg4 f+ edi[0xb]
                    edi[0xa] = xmm2_1 * arg4 f+ edi[0xa]
                    edi[0xb] = xmm3_11
        else
            if (arg5 == 0)
                void* ecx_1 = *edi
                edi[0xa] = *(ecx_1 + 0x24)
                int32_t eax_6 = *(ecx_1 + 0x28)
                edi[0xb] = eax_6
                return eax_6
            
            eax_1 = arg5 - 1
            
            if (arg5 == 1)
                void* eax_4 = *edi
                edi[0xa] = (*(eax_4 + 0x24) f- edi[0xa]) * arg4 f+ edi[0xa]
                edi[0xb] = (*(eax_4 + 0x28) f- edi[0xb]) * arg4 f+ edi[0xb]
                return eax_4
    
    return eax_1
}
