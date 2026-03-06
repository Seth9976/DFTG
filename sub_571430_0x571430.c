// 函数名称: sub_571430
// 虚拟地址: 0x571430
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*sub_571430(void* arg1, void* arg2, float arg3, float arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t eax_1 = *(arg2 + 0x28)
    int32_t eax_1 = *(arg2 + 0x28)
    int32_t* edi = *(eax_1 + (*(arg1 + 0x14) << 2))
    
    if (edi[8] != 0)
        int32_t* ebx_1 = *(arg1 + 0x10)
        
        if (*ebx_1 f<= arg3)
            int32_t edx_1 = *(arg1 + 0xc)
            float xmm2_2
            float xmm3_2
            float xmm4_1
            float xmm5_1
            
            if (arg3 f< ebx_1[edx_1 - 5])
                int32_t eax_8 = sub_56da60(eax_1, edx_1, ebx_1, arg3, 5)
                int32_t eax_9
                int32_t edx_2
                edx_2:eax_9 = muls.dp.d(0x66666667, eax_8)
                int32_t edx_3 = edx_2 s>> 1
                float xmm0_20
                eax_1, xmm0_20 = sub_56d9a0(arg1, edx_3 + (edx_3 u>> 0x1f) - 1, 
                    1f - (arg3 f- ebx_1[eax_8]) / (ebx_1[eax_8 - 5] f- ebx_1[eax_8]))
                xmm2_2 = (ebx_1[eax_8 + 1] f- ebx_1[eax_8 - 4]) * xmm0_20 f+ ebx_1[eax_8 - 4]
                xmm3_2 = (ebx_1[eax_8 + 2] f- ebx_1[eax_8 - 3]) * xmm0_20 f+ ebx_1[eax_8 - 3]
                xmm4_1 = (ebx_1[eax_8 + 3] f- ebx_1[eax_8 - 2]) * xmm0_20 f+ ebx_1[eax_8 - 2]
                xmm5_1 = (ebx_1[eax_8 + 4] f- ebx_1[eax_8 - 1]) * xmm0_20 f+ ebx_1[eax_8 - 1]
            else
                xmm2_2 = ebx_1[edx_1 - 4]
                xmm3_2 = ebx_1[edx_1 - 3]
                xmm4_1 = ebx_1[edx_1 - 2]
                xmm5_1 = ebx_1[edx_1 - 1]
            
            if (arg5 == 0)
                void* eax_13 = *edi
                edi[4] = (xmm2_2 f- *(eax_13 + 0x18)) * arg4 f+ *(eax_13 + 0x18)
                edi[5] = (xmm3_2 f- *(eax_13 + 0x1c)) * arg4 f+ *(eax_13 + 0x1c)
                edi[6] = (xmm4_1 f- *(eax_13 + 0x20)) * arg4 f+ *(eax_13 + 0x20)
                edi[7] = (xmm5_1 f- *(eax_13 + 0x24)) * arg4 f+ *(eax_13 + 0x24)
                return eax_13
            
            float xmm3_13 = (xmm3_2 f- edi[5]) * arg4 f+ edi[5]
            float xmm5_9 = (xmm5_1 f- edi[7]) * arg4
            float xmm4_10 = (xmm4_1 f- edi[6]) * arg4 f+ edi[6]
            edi[4] = (xmm2_2 f- edi[4]) * arg4 f+ edi[4]
            float xmm5_10 = xmm5_9 f+ edi[7]
            edi[5] = xmm3_13
            edi[6] = xmm4_10
            edi[7] = xmm5_10
        else
            void* ecx_1 = *edi
            
            if (arg5 == 0)
                edi[4] = *(ecx_1 + 0x18)
                edi[5] = *(ecx_1 + 0x1c)
                edi[6] = *(ecx_1 + 0x20)
                int32_t eax_7 = *(ecx_1 + 0x24)
                edi[7] = eax_7
                return eax_7
            
            eax_1 = arg5 - 1
            
            if (arg5 == 1)
                edi[4] = (*(ecx_1 + 0x18) f- edi[4]) * arg4 f+ edi[4]
                edi[5] = (*(ecx_1 + 0x1c) f- edi[5]) * arg4 f+ edi[5]
                edi[6] = (*(ecx_1 + 0x20) f- edi[6]) * arg4 f+ edi[6]
                edi[7] = (*(ecx_1 + 0x24) f- edi[7]) * arg4 f+ edi[7]
    
    return eax_1
}
