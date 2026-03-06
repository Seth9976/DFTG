// 函数名称: sub_576980
// 虚拟地址: 0x576980
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_576980(int32_t arg1, void* arg2, void* arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: int32_t esi = arg7
    int32_t esi = arg7
    int32_t edi = *(arg2 + 0x24)
    int32_t eax_2 = esi + (arg5 s>> 1 << 1)
    void* result = *(arg2 + 4)
    int32_t edx = *(arg2 + 0x28)
    int32_t ebx_1 = *(arg3 + 0x20)
    int32_t ebx_2 = *(arg3 + 0x18)
    int32_t var_18 = ebx_2
    
    if (ebx_2 != 0)
        int32_t edx_1 = 0
        int32_t var_14_1 = 0
        int32_t edi_2 = 0
        int32_t var_10_1 = 0
        int32_t ecx_2 = 0
        int32_t var_8_1 = 0
        int32_t edx_6
        
        if (arg4 s<= 0)
            edx_6 = 0
        else
            if (arg4 + 1 s>= 4)
                int32_t i_1 = ((arg4 - 3) u>> 2) + 1
                var_10_1 = i_1 << 2
                int32_t i
                
                do
                    int32_t eax_6 = *(ebx_2 + (ecx_2 << 2))
                    int32_t ecx_3 = ecx_2 + eax_6
                    edi_2 += eax_6
                    int32_t eax_7 = *(ebx_2 + (ecx_3 << 2) + 4)
                    var_8_1 += eax_7
                    ecx_2 = ecx_3 + 2 + eax_7
                    i = i_1
                    i_1 -= 1
                while (i != 1)
                edx_1 = var_8_1
            
            if (var_10_1 s< arg4)
                int32_t eax_9 = *(ebx_2 + (ecx_2 << 2))
                var_14_1 = eax_9
                ecx_2 = ecx_2 + 1 + eax_9
            
            edx_6 = var_14_1 + edx_1 + edi_2
        
        int32_t eax_12 = *(*(result + 4) + 8)
        result = edx_6 * 3
        
        if (edi != 0)
            int32_t var_10_2 = edx_6 * 2
            
            while (esi s< eax_2)
                int32_t edx_12 = *(ebx_2 + (ecx_2 << 2))
                int32_t xmm5_3 = (zx.o(0)).d
                ecx_2 += 1
                int32_t edx_13 = edx_12 + ecx_2
                int32_t xmm6_2 = (zx.o(0)).d
                
                if (ecx_2 s< edx_13)
                    float* edi_7 = ebx_1 + 8 + (result << 2)
                    int32_t esi_3 = var_10_2
                    
                    do
                        int32_t eax_19 = *(ebx_2 + (ecx_2 << 2))
                        ecx_2 += 1
                        void* eax_20 = *(eax_12 + (eax_19 << 2))
                        float xmm4_2 = *(edx + (esi_3 << 2))
                        float xmm2_2 = *(edx + (esi_3 << 2) + 4)
                        esi_3 += 2
                        float xmm4_3 = xmm4_2 + edi_7[-2]
                        float xmm2_3 = xmm2_2 + edi_7[-1]
                        ebx_2 = var_18
                        xmm5_3 = xmm5_3 f+ (*(eax_20 + 0x54) * xmm2_3
                            + *(eax_20 + 0x50) * xmm4_3 f+ *(eax_20 + 0x58)) * *edi_7
                        float xmm1_28 = (*(eax_20 + 0x60) * xmm2_3
                            + *(eax_20 + 0x5c) * xmm4_3 f+ *(eax_20 + 0x64)) * *edi_7
                        edi_7 = &edi_7[3]
                        xmm6_2 = xmm6_2 f+ xmm1_28
                    while (ecx_2 s< edx_13)
                    
                    result += edx_12 * 3
                    var_10_2 = esi_3
                    esi = arg7
                
                *(arg6 + (esi << 2)) = xmm5_3
                *(arg6 + (esi << 2) + 4) = xmm6_2
                esi += 2
                arg7 = esi
        else if (esi s< eax_2)
            int32_t edx_7 = arg6
            
            do
                int32_t edi_3 = *(ebx_2 + (ecx_2 << 2))
                int32_t xmm5_2 = (zx.o(0)).d
                ecx_2 += 1
                int32_t edi_4 = edi_3 + ecx_2
                int32_t xmm6_1 = (zx.o(0)).d
                
                if (ecx_2 s< edi_4)
                    float* edx_10 = ebx_1 + (result << 2) + 8
                    ebx_2 = var_18
                    
                    do
                        int32_t eax_15 = *(ebx_2 + (ecx_2 << 2))
                        ecx_2 += 1
                        void* eax_16 = *(eax_12 + (eax_15 << 2))
                        xmm5_2 = xmm5_2 f+ (*(eax_16 + 0x54) * edx_10[-1]
                            + *(eax_16 + 0x50) * edx_10[-2] f+ *(eax_16 + 0x58)) * *edx_10
                        float xmm1_18 = (*(eax_16 + 0x60) * edx_10[-1]
                            + *(eax_16 + 0x5c) * edx_10[-2] f+ *(eax_16 + 0x64)) * *edx_10
                        edx_10 = &edx_10[3]
                        xmm6_1 = xmm6_1 f+ xmm1_18
                    while (ecx_2 s< edi_4)
                    
                    esi = arg7
                    result += edi_3 * 3
                    edx_7 = arg6
                
                *(edx_7 + (esi << 2)) = xmm5_2
                *(edx_7 + (esi << 2) + 4) = xmm6_1
                esi += 2
                arg7 = esi
            while (esi s< eax_2)
    else
        float xmm4_1 = *(result + 0x58)
        
        if (edi s<= 0)
            edx = ebx_1
        
        float xmm5_1 = *(result + 0x64)
        
        if (esi s< eax_2)
            int32_t ecx_1 = arg4 << 2
            
            do
                float xmm3_1 = *(ecx_1 + edx)
                float xmm2_1 = *(ecx_1 + edx + 4)
                ecx_1 += 8
                *(arg6 + (esi << 2)) = *(result + 0x54) * xmm2_1 + *(result + 0x50) * xmm3_1 + xmm4_1
                *(arg6 + (esi << 2) + 4) =
                    *(result + 0x60) * xmm2_1 + *(result + 0x5c) * xmm3_1 + xmm5_1
                esi += 2
            while (esi s< eax_2)
    
    return result
}
