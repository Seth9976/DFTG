// 函数名称: sub_56e640
// 虚拟地址: 0x56e640
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*sub_56e640(float arg1, void* arg2, float arg3, float arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t* edi = *(*(arg2 + 0x14) + (*(arg1 i+ 0x14) << 2))
    int32_t* edi = *(*(arg2 + 0x14) + (*(arg1 i+ 0x14) << 2))
    void* result = edi[1]
    
    if (*(result + 0x6c) != 0)
        int32_t* ebx_1 = *(arg1 i+ 0x10)
        
        if (*ebx_1 f<= arg3)
            int32_t edx_1 = *(arg1 i+ 0xc)
            float xmm2_4
            float xmm3_3
            float xmm4_2
            float xmm5_3
            
            if (arg3 f< ebx_1[edx_1 - 5])
                int32_t eax_8 = sub_56da60(result, edx_1, ebx_1, arg3, 5)
                int32_t eax_9
                int32_t edx_2
                edx_2:eax_9 = muls.dp.d(0x66666667, eax_8)
                int32_t edx_3 = edx_2 s>> 1
                float xmm0_12
                result, xmm0_12 = sub_56d9a0(arg1, edx_3 + (edx_3 u>> 0x1f) - 1, 
                    1f - (arg3 f- ebx_1[eax_8]) / (ebx_1[eax_8 - 5] f- ebx_1[eax_8]))
                xmm2_4 = (ebx_1[eax_8 + 1] f- ebx_1[eax_8 - 4]) * xmm0_12 f+ ebx_1[eax_8 - 4]
                xmm3_3 = (ebx_1[eax_8 + 2] f- ebx_1[eax_8 - 3]) * xmm0_12 f+ ebx_1[eax_8 - 3]
                xmm4_2 = (ebx_1[eax_8 + 3] f- ebx_1[eax_8 - 2]) * xmm0_12 f+ ebx_1[eax_8 - 2]
                xmm5_3 = (ebx_1[eax_8 + 4] f- ebx_1[eax_8 - 1]) * xmm0_12 f+ ebx_1[eax_8 - 1]
            else
                xmm2_4 = ebx_1[edx_1 - 4]
                xmm3_3 = ebx_1[edx_1 - 3]
                xmm4_2 = ebx_1[edx_1 - 2]
                xmm5_3 = ebx_1[edx_1 - 1]
            
            arg4 - 1f
            result:1.b = (arg4 == 1f ? 1 : 0) << 6 | (is_unordered.d(arg4, 1f) ? 1 : 0) << 2
                | (arg4 < 1f ? 1 : 0)
            bool p_1 = unimplemented  {test ah, 0x44}
            
            if (not(p_1))
                edi[2] = xmm2_4
                edi[3] = xmm3_3
                edi[4] = xmm4_2
                edi[5] = xmm5_3
                return sub_56d7b0(&edi[2]) __tailcall
            
            float xmm1_2
            
            if (arg5 != 0)
                xmm1_2 = edi[2]
            else
                void* ecx_6 = *edi
                xmm1_2 = *(ecx_6 + 0x10)
                edi[2] = xmm1_2
                edi[3] = *(ecx_6 + 0x14)
                edi[4] = *(ecx_6 + 0x18)
                edi[5] = *(ecx_6 + 0x1c)
            
            float xmm4_7 = (xmm4_2 f- edi[4]) * arg4
            float xmm5_8 = (xmm5_3 f- edi[5]) * arg4
            float xmm0_16 = edi[3] f+ (xmm3_3 f- edi[3]) * arg4
            edi[2] = (xmm2_4 - xmm1_2) * arg4 + xmm1_2
            edi[3] = xmm0_16
            edi[4] = edi[4] f+ xmm4_7
            edi[5] = edi[5] f+ xmm5_8
            return sub_56d7b0(&edi[2]) __tailcall
        
        if (arg5 == 0)
            void* ecx_2 = *edi
            edi[2] = *(ecx_2 + 0x10)
            edi[3] = *(ecx_2 + 0x14)
            edi[4] = *(ecx_2 + 0x18)
            result = *(ecx_2 + 0x1c)
            edi[5] = result
        else
            result = arg5 - 1
            
            if (arg5 == 1)
                void* eax_4 = *edi
                float xmm0_2 = edi[3]
                float xmm6 = edi[4]
                float xmm4 = edi[5]
                float xmm7_2 = (*(eax_4 + 0x14) - xmm0_2) * arg4
                float xmm0_6 = (*(eax_4 + 0x10) f- edi[2]) * arg4 f+ edi[2]
                float xmm4_1 = xmm4 + (*(eax_4 + 0x1c) - xmm4) * arg4
                edi[4] = xmm6 + (*(eax_4 + 0x18) - xmm6) * arg4
                edi[2] = xmm0_6
                edi[5] = xmm4_1
                edi[3] = xmm0_2 + xmm7_2
                return sub_56d7b0(&edi[2]) __tailcall
    
    return result
}
