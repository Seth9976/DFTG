// 函数名称: sub_5717c0
// 虚拟地址: 0x5717c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*sub_5717c0(void* arg1, void* arg2, float arg3, float arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t eax_1 = *(arg2 + 0x30)
    int32_t eax_1 = *(arg2 + 0x30)
    int32_t* edi = *(eax_1 + (*(arg1 + 0x14) << 2))
    
    if (edi[0x1c] != 0)
        int32_t* ebx_1 = *(arg1 + 0x10)
        
        if (*ebx_1 f<= arg3)
            int32_t edx_1 = *(arg1 + 0xc)
            float xmm2_1
            
            if (arg3 f< ebx_1[edx_1 - 2])
                int32_t eax_7 = sub_56da60(eax_1, edx_1, ebx_1, arg3, 2)
                int32_t eax_8
                int32_t edx_2
                edx_2:eax_8 = sx.q(eax_7)
                float xmm0_8
                eax_1, xmm0_8 = sub_56d9a0(arg1, ((eax_8 - edx_2) s>> 1) - 1, 
                    1f - (arg3 f- ebx_1[eax_7]) / (ebx_1[eax_7 - 2] f- ebx_1[eax_7]))
                xmm2_1 = xmm0_8 * (ebx_1[eax_7 + 1] f- ebx_1[eax_7 - 1]) f+ ebx_1[eax_7 - 1]
            else
                xmm2_1 = ebx_1[edx_1 - 1]
            
            if (arg5 == 0)
                void* eax_11 = *edi
                edi[5] = (xmm2_1 f- *(eax_11 + 0x2c)) * arg4 f+ *(eax_11 + 0x2c)
                return eax_11
            
            edi[5] = (xmm2_1 f- edi[5]) * arg4 f+ edi[5]
        else
            if (arg5 == 0)
                int32_t eax_6 = *(*edi + 0x2c)
                edi[5] = eax_6
                return eax_6
            
            eax_1 = arg5 - 1
            
            if (arg5 == 1)
                void* eax_4 = *edi
                edi[5] = (*(eax_4 + 0x2c) f- edi[5]) * arg4 f+ edi[5]
                return eax_4
    
    return eax_1
}
