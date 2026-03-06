// 函数名称: sub_56e8d0
// 虚拟地址: 0x56e8d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*sub_56e8d0(float arg1, float arg2, float arg3, float arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t* edi = *(*(arg2 i+ 0x14) + (*(arg1 i+ 0x14) << 2))
    int32_t* edi = *(*(arg2 i+ 0x14) + (*(arg1 i+ 0x14) << 2))
    void* result = edi[1]
    
    if (*(result + 0x6c) != 0)
        int32_t* ebx_1 = *(arg1 i+ 0x10)
        
        if (*ebx_1 f<= arg3)
            int32_t edx_3 = *(arg1 i+ 0xc)
            float xmm0_14
            float xmm2_7
            float xmm3_6
            float xmm4_6
            float xmm5_4
            float xmm6_4
            float xmm7_2
            
            if (arg3 f< ebx_1[edx_3 - 8])
                int32_t eax_12 = sub_56da60(result, edx_3, ebx_1, arg3, 8)
                int32_t eax_13
                int32_t edx_4
                edx_4:eax_13 = sx.q(eax_12)
                float xmm0_17
                result, xmm0_17 = sub_56d9a0(arg1, (((edx_4 & 7) + eax_13) s>> 3) - 1, 
                    1f - (arg3 f- ebx_1[eax_12]) / (ebx_1[eax_12 - 8] f- ebx_1[eax_12]))
                xmm3_6 = (ebx_1[eax_12 + 2] f- ebx_1[eax_12 - 6]) * xmm0_17 f+ ebx_1[eax_12 - 6]
                xmm4_6 = (ebx_1[eax_12 + 3] f- ebx_1[eax_12 - 5]) * xmm0_17 f+ ebx_1[eax_12 - 5]
                xmm5_4 = (ebx_1[eax_12 + 4] f- ebx_1[eax_12 - 4]) * xmm0_17 f+ ebx_1[eax_12 - 4]
                xmm6_4 = (ebx_1[eax_12 + 5] f- ebx_1[eax_12 - 3]) * xmm0_17 f+ ebx_1[eax_12 - 3]
                xmm7_2 = (ebx_1[eax_12 + 6] f- ebx_1[eax_12 - 2]) * xmm0_17 f+ ebx_1[eax_12 - 2]
                xmm2_7 = (ebx_1[eax_12 + 1] f- ebx_1[eax_12 - 7]) * xmm0_17 f+ ebx_1[eax_12 - 7]
                xmm0_14 = (ebx_1[eax_12 + 7] f- ebx_1[eax_12 - 1]) * xmm0_17 f+ ebx_1[eax_12 - 1]
            else
                xmm2_7 = ebx_1[edx_3 - 7]
                xmm3_6 = ebx_1[edx_3 - 6]
                xmm4_6 = ebx_1[edx_3 - 5]
                xmm5_4 = ebx_1[edx_3 - 4]
                xmm6_4 = ebx_1[edx_3 - 3]
                xmm7_2 = ebx_1[edx_3 - 2]
                xmm0_14 = ebx_1[edx_3 - 1]
            
            arg4 - 1f
            result:1.b = (arg4 == 1f ? 1 : 0) << 6 | (is_unordered.d(arg4, 1f) ? 1 : 0) << 2
                | (arg4 < 1f ? 1 : 0)
            bool p_1 = unimplemented  {test ah, 0x44}
            
            if (not(p_1))
                edi[2] = xmm2_7
                edi[3] = xmm3_6
                edi[4] = xmm4_6
                edi[5] = xmm5_4
                sub_56d7b0(&edi[2])
                int32_t* ecx_8 = edi[6]
                *ecx_8 = xmm6_4
                ecx_8[1] = xmm7_2
                ecx_8[2] = xmm0_14
                ecx_8[3] = 0x3f800000
                return sub_56d7b0(ecx_8) __tailcall
            
            int32_t* esi_3 = edi[6]
            
            if (arg5 == 0)
                void* ecx_9 = *edi
                edi[2] = *(ecx_9 + 0x10)
                edi[3] = *(ecx_9 + 0x14)
                edi[4] = *(ecx_9 + 0x18)
                edi[5] = *(ecx_9 + 0x1c)
                int32_t* ecx_10 = *(ecx_9 + 0x20)
                *esi_3 = *ecx_10
                esi_3[1] = ecx_10[1]
                esi_3[2] = ecx_10[2]
                esi_3[3] = ecx_10[3]
            
            float xmm3_14 = (xmm3_6 f- edi[3]) * arg4 f+ edi[3]
            float xmm5_9 = (xmm5_4 f- edi[5]) * arg4
            float xmm4_12 = (xmm4_6 f- edi[4]) * arg4 f+ edi[4]
            edi[2] = (xmm2_7 f- edi[2]) * arg4 f+ edi[2]
            float xmm5_10 = xmm5_9 f+ edi[5]
            edi[3] = xmm3_14
            edi[4] = xmm4_12
            edi[5] = xmm5_10
            sub_56d7b0(&edi[2])
            float xmm6_10 = (xmm6_4 f- *esi_3) * arg4 f+ *esi_3
            float xmm1_7 = (xmm0_14 f- esi_3[2]) * arg4
            float xmm7_8 = (xmm7_2 f- esi_3[1]) * arg4 f+ esi_3[1]
            esi_3[3] = esi_3[3] f+ 0f
            float xmm1_8 = xmm1_7 f+ esi_3[2]
            *esi_3 = xmm6_10
            esi_3[1] = xmm7_8
            esi_3[2] = xmm1_8
            return sub_56d7b0(esi_3) __tailcall
        
        if (arg5 == 0)
            void* ecx_3 = *edi
            int32_t* edx_2 = edi[6]
            edi[2] = *(ecx_3 + 0x10)
            edi[3] = *(ecx_3 + 0x14)
            edi[4] = *(ecx_3 + 0x18)
            edi[5] = *(ecx_3 + 0x1c)
            int32_t* ecx_4 = *(ecx_3 + 0x20)
            *edx_2 = *ecx_4
            edx_2[1] = ecx_4[1]
            edx_2[2] = ecx_4[2]
            result = ecx_4[3]
            edx_2[3] = result
        else
            result = arg5 - 1
            
            if (arg5 == 1)
                void* eax_4 = *edi
                float xmm7 = edi[3]
                float xmm5 = edi[4]
                float xmm3_2 = edi[5]
                int32_t* edx_1 = *(eax_4 + 0x20)
                float* esi_1 = edi[6]
                float xmm5_1 = xmm5 + (*(eax_4 + 0x18) - xmm5) * arg4
                float xmm0_4 = *(eax_4 + 0x10) f- edi[2]
                float xmm3_3 = xmm3_2 + (*(eax_4 + 0x1c) - xmm3_2) * arg4
                edi[3] = xmm7 + (*(eax_4 + 0x14) - xmm7) * arg4
                edi[4] = xmm5_1
                edi[5] = xmm3_3
                edi[2] = xmm0_4 * arg4 f+ edi[2]
                sub_56d7b0(&edi[2])
                float xmm5_2 = esi_1[1]
                float xmm3_4 = esi_1[2]
                float xmm4_5 = (edx_1[1] f- xmm5_2) * arg4
                float xmm2_5 = (edx_1[2] f- xmm3_4) * arg4
                *esi_1 = (*edx_1 - *esi_1) * arg4 + *esi_1
                float xmm0_12 = esi_1[3] + 0f
                esi_1[1] = xmm5_2 + xmm4_5
                esi_1[3] = xmm0_12
                esi_1[2] = xmm3_4 + xmm2_5
                return sub_56d7b0(esi_1) __tailcall
    
    return result
}
