// 函数名称: sub_5718f0
// 虚拟地址: 0x5718f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*sub_5718f0(void* arg1, void* arg2, float arg3, float arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t eax_1 = *(arg2 + 0x30)
    int32_t eax_1 = *(arg2 + 0x30)
    int32_t* edi = *(eax_1 + (*(arg1 + 0x14) << 2))
    
    if (edi[0x1c] != 0)
        int32_t* ebx_1 = *(arg1 + 0x10)
        
        if (*ebx_1 f<= arg3)
            int32_t edx_1 = *(arg1 + 0xc)
            float xmm2_1
            float xmm3_2
            
            if (arg3 f< ebx_1[edx_1 - 3])
                int32_t eax_7 = sub_56da60(eax_1, edx_1, ebx_1, arg3, 3)
                int32_t eax_8
                int32_t edx_2
                edx_2:eax_8 = muls.dp.d(0x55555556, eax_7)
                float xmm0_12
                eax_1, xmm0_12 = sub_56d9a0(arg1, edx_2 + (edx_2 u>> 0x1f) - 1, 
                    1f - (arg3 f- ebx_1[eax_7]) / (ebx_1[eax_7 - 3] f- ebx_1[eax_7]))
                xmm2_1 = (ebx_1[eax_7 + 1] f- ebx_1[eax_7 - 2]) * xmm0_12 f+ ebx_1[eax_7 - 2]
                xmm3_2 = (ebx_1[eax_7 + 2] f- ebx_1[eax_7 - 1]) * xmm0_12 f+ ebx_1[eax_7 - 1]
            else
                xmm2_1 = ebx_1[edx_1 - 2]
                xmm3_2 = ebx_1[edx_1 - 1]
            
            if (arg5 == 0)
                void* eax_12 = *edi
                edi[6] = (xmm2_1 f- *(eax_12 + 0x30)) * arg4 f+ *(eax_12 + 0x30)
                edi[7] = (xmm3_2 f- *(eax_12 + 0x34)) * arg4 f+ *(eax_12 + 0x34)
                return eax_12
            
            float xmm3_13 = (xmm3_2 f- edi[7]) * arg4 f+ edi[7]
            edi[6] = (xmm2_1 f- edi[6]) * arg4 f+ edi[6]
            edi[7] = xmm3_13
        else
            if (arg5 == 0)
                void* ecx_1 = *edi
                edi[6] = *(ecx_1 + 0x30)
                int32_t eax_6 = *(ecx_1 + 0x34)
                edi[7] = eax_6
                return eax_6
            
            eax_1 = arg5 - 1
            
            if (arg5 == 1)
                void* eax_4 = *edi
                edi[6] = (*(eax_4 + 0x30) f- edi[6]) * arg4 f+ edi[6]
                edi[7] = (*(eax_4 + 0x34) f- edi[7]) * arg4 f+ edi[7]
                return eax_4
    
    return eax_1
}
