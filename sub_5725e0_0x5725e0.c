// 函数名称: sub_5725e0
// 虚拟地址: 0x5725e0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_5725e0(void* arg1)
{
    // 第一条实际指令: int32_t ebx = *(arg1 + 0x24)
    int32_t ebx = *(arg1 + 0x24)
    _free(*(arg1 + 0x6c))
    int32_t ecx = data_1151ae0
    int32_t eax = ebx << 2
    int32_t eax_1
    
    if (ecx == 0)
        int32_t var_10_1 = eax
        eax_1 = _malloc()
    else
        eax_1 =
            ecx(eax, "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\meshattachment.c", 0x80)
    
    float xmm1 = *(arg1 + 0x4c)
    int32_t eax_2 = *(arg1 + 0x60)
    float xmm2 = *(arg1 + 0x50)
    uint128_t xmm3 = zx.o(*(arg1 + 0x40))
    float xmm0_1 = *(arg1 + 0x58) - xmm2
    uint128_t xmm4 = zx.o(*(arg1 + 0x3c))
    float xmm5_1 = *(arg1 + 0x54) - xmm1
    int32_t edx = *(arg1 + 0x34)
    int32_t ecx_1 = *(arg1 + 0x38)
    *(arg1 + 0x6c) = eax_1
    float xmm3_1 = _mm_cvtepi32_ps(xmm3)
    float xmm4_1 = _mm_cvtepi32_ps(xmm4)
    int32_t eax_5
    
    if (eax_2 == 0x5a)
        int32_t edx_2 = *(arg1 + 0x48)
        float xmm3_3 = xmm3_1 / xmm5_1
        int32_t ecx_7 = *(arg1 + 0x44)
        float xmm4_9 = xmm4_1 / xmm0_1
        eax_5 = ecx_7 - *(arg1 + 0x3c) - *(arg1 + 0x34)
        int32_t ecx_8 = 0
        float xmm1_4 = xmm1 - float.s(edx_2 - *(arg1 + 0x40) - ecx_1) / xmm3_3
        float xmm2_4 = xmm2 - float.s(eax_5) / xmm4_9
        
        if (ebx s> 0)
            do
                *(eax_1 + (ecx_8 << 2)) =
                    *(*(arg1 + 0x68) + (ecx_8 << 2) + 4) * float.s(edx_2) / xmm3_3 + xmm1_4
                eax_5 = *(arg1 + 0x68)
                *(eax_1 + (ecx_8 << 2) + 4) =
                    (1f f- *(eax_5 + (ecx_8 << 2))) * float.s(ecx_7) / xmm4_9 + xmm2_4
                ecx_8 += 2
            while (ecx_8 s< ebx)
    else
        float xmm4_2 = xmm4_1 / xmm5_1
        float xmm3_2 = xmm3_1 / xmm0_1
        
        if (eax_2 == 0xb4)
            int32_t ecx_5 = *(arg1 + 0x44)
            eax_5 = ecx_5 - *(arg1 + 0x3c) - edx
            int32_t ecx_6 = 0
            float xmm4_8 = float.s(*(arg1 + 0x48)) / xmm3_2
            float xmm2_3 = xmm2 - float.s(*(arg1 + 0x38)) / xmm3_2
            
            if (ebx s> 0)
                int32_t eax_15
                
                do
                    *(eax_1 + (ecx_6 << 2)) =
                        (1f f- *(*(arg1 + 0x68) + (ecx_6 << 2))) * float.s(ecx_5) / xmm4_2 + xmm1
                        - float.s(eax_5) / xmm4_2
                    eax_15 = *(arg1 + 0x68)
                    *(eax_1 + (ecx_6 << 2) + 4) = (1f f- *(eax_15 + (ecx_6 << 2) + 4)) * xmm4_8 + xmm2_3
                    ecx_6 += 2
                while (ecx_6 s< ebx)
                
                return eax_15
        else
            eax_5 = eax_2 - 0x10e
            
            if (eax_2 == 0x10e)
                int32_t ecx_4 = 0
                float xmm5_6 = float.s(*(arg1 + 0x48)) / xmm4_2
                float xmm4_6 = float.s(*(arg1 + 0x44)) / xmm3_2
                
                if (ebx s> 0)
                    int32_t eax_11
                    
                    do
                        *(eax_1 + (ecx_4 << 2)) = (1f f- *(*(arg1 + 0x68) + (ecx_4 << 2) + 4)) * xmm5_6
                            + xmm1 - float.s(ecx_1) / xmm4_2
                        eax_11 = *(arg1 + 0x68)
                        *(eax_1 + (ecx_4 << 2) + 4) =
                            *(eax_11 + (ecx_4 << 2)) * xmm4_6 + xmm2 - float.s(edx) / xmm3_2
                        ecx_4 += 2
                    while (ecx_4 s< ebx)
                    
                    return eax_11
            else
                int32_t ecx_2 = *(arg1 + 0x48)
                eax_5 = ecx_2 - *(arg1 + 0x40) - *(arg1 + 0x38)
                float xmm5_4 = float.s(*(arg1 + 0x44)) / xmm4_2
                int32_t ecx_3 = 0
                
                if (ebx s> 0)
                    int32_t eax_9
                    
                    do
                        *(eax_1 + (ecx_3 << 2)) =
                            *(*(arg1 + 0x68) + (ecx_3 << 2)) * xmm5_4 + xmm1 - float.s(edx) / xmm4_2
                        eax_9 = *(arg1 + 0x68)
                        *(eax_1 + (ecx_3 << 2) + 4) =
                            *(eax_9 + (ecx_3 << 2) + 4) * float.s(ecx_2) / xmm3_2 + xmm2
                            - float.s(eax_5) / xmm3_2
                        ecx_3 += 2
                    while (ecx_3 s< ebx)
                    
                    return eax_9
    
    return eax_5
}
