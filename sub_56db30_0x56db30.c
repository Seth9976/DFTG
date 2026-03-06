// 函数名称: sub_56db30
// 虚拟地址: 0x56db30
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*sub_56db30(void* arg1, void* arg2, float arg3, float arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t eax_1 = *(arg2 + 8)
    int32_t eax_1 = *(arg2 + 8)
    int32_t* esi = *(eax_1 + (*(arg1 + 0x14) << 2))
    
    if (esi[0x1b] != 0)
        int32_t* edi_1 = *(arg1 + 0x10)
        
        if (*edi_1 f<= arg3)
            int32_t edx_1 = *(arg1 + 0xc)
            
            if (arg3 f< edi_1[edx_1 - 2])
                int32_t eax_12 = sub_56da60(eax_1, edx_1, edi_1, arg3, 2)
                float xmm6_1 = edi_1[eax_12 - 1]
                float xmm5_2 = edi_1[eax_12 + 1] f- xmm6_1
                double xmm4_1 = 16384.499999999996
                eax_1 = arg5
                float xmm3_6 = sub_56d9a0(arg1, (eax_12 s>> 1) - 1, 
                    1f - (arg3 f- edi_1[eax_12]) / (edi_1[eax_12 - 2] f- edi_1[eax_12])) * (xmm5_2 -
                    _mm_cvtepi32_ps(zx.o((0x4000 - int.d(xmm4_1 - _mm_cvtps_pd(xmm5_2 / 360f)))
                    * 0x168))) + xmm6_1
                
                switch (eax_1)
                    case 0
                        void* eax_18 = *esi
                        esi[7] = (xmm3_6 - _mm_cvtepi32_ps(zx.o((0x4000
                            - int.d(fconvert.d(xmm3_6 / -360f) + xmm4_1)) * 0x168))) * arg4 f+
                            *(eax_18 + 0x18)
                        return eax_18
                    case 1, 2
                        xmm3_6 = *(*esi + 0x18) f- esi[7] + xmm3_6
                        eax_1 = (0x4000 - int.d(fconvert.d(xmm3_6 / -360f) + xmm4_1)) * 0x168
                        esi[7] = (xmm3_6 - _mm_cvtepi32_ps(zx.o(eax_1))) * arg4 f+ esi[7]
                    case 3
                        eax_1 = (0x4000 - int.d(fconvert.d(xmm3_6 / -360f) + xmm4_1)) * 0x168
                        esi[7] = (xmm3_6 - _mm_cvtepi32_ps(zx.o(eax_1))) * arg4 f+ esi[7]
            else
                eax_1 = arg5
                float xmm1_3 = edi_1[edx_1 - 1]
                
                switch (eax_1)
                    case 0
                        void* eax_9 = *esi
                        esi[7] = xmm1_3 * arg4 f+ *(eax_9 + 0x18)
                        return eax_9
                    case 1, 2
                        float xmm1_6 = xmm1_3 + *(*esi + 0x18) f- esi[7]
                        eax_1 =
                            (0x4000 - int.d(_mm_cvtps_pd(xmm1_6 / -360f) + 16384.499999999996)) * 0x168
                        esi[7] = (xmm1_6 - _mm_cvtepi32_ps(zx.o(eax_1))) * arg4 f+ esi[7]
                    case 3
                        esi[7] = xmm1_3 * arg4 f+ esi[7]
        else
            if (arg5 == 0)
                int32_t eax_8 = *(*esi + 0x18)
                esi[7] = eax_8
                return eax_8
            
            eax_1 = arg5 - 1
            
            if (arg5 == 1)
                float xmm2_2 = *(*esi + 0x18) f- esi[7]
                int32_t eax_6 =
                    (0x4000 - int.d(16384.499999999996 - _mm_cvtps_pd(xmm2_2 / 360f))) * 0x168
                esi[7] = (xmm2_2 - _mm_cvtepi32_ps(zx.o(eax_6))) * arg4 f+ esi[7]
                return eax_6
    
    return eax_1
}
