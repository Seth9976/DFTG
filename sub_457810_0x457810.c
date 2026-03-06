// 函数名称: sub_457810
// 虚拟地址: 0x457810
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_457810(void* arg1)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    int32_t i = 0
    int32_t edx = *(arg1 + 0x3c0)
    
    if (edx s> 0)
        if (edx u>= 8)
            int32_t eax_1 = edx & 0x80000007
            
            if (eax_1 s< 0)
                eax_1 = ((eax_1 - 1) | 0xfffffff8) + 1
            
            int32_t xmm7_1[0x4] = data_60c810
            int32_t xmm5_1[0x4] = zx.o(0)
            void* eax_4 = arg1 + 0x34
            int32_t xmm4_1[0x4] = zx.o(0)
            
            do
                uint64_t xmm2_1 = zx.q(*(eax_4 + 0x18))
                eax_4 += 0xc0
                i += 8
                int32_t xmm1_1[0x4] = zx.o(*(eax_4 - 0xd8))
                int32_t xmm3_2[0x4] = _mm_unpacklo_epi32(zx.o(*(eax_4 - 0xf0)), zx.q(*(eax_4 - 0xc0)))
                int64_t xmm1_2 = _mm_unpacklo_epi32(xmm1_1, xmm2_1)
                int32_t xmm0_3[0x4] = _mm_add_epi32(xmm7_1, xmm5_1)
                int64_t xmm2_2 = zx.q(*(eax_4 - 0x48))
                int32_t xmm3_3[0x4] = _mm_unpacklo_epi32(xmm3_2, xmm1_2)
                int32_t xmm1_3[0x4] = zx.o(*(eax_4 - 0x78))
                int32_t xmm3_4[0x4] = _mm_cmpeq_epi32(xmm3_3, zx.o(0))
                int64_t xmm1_4 = _mm_unpacklo_epi32(xmm1_3, xmm2_2)
                xmm5_1 = (xmm0_3 & xmm3_4) | (xmm3_4 & not.o(xmm5_1))
                int32_t xmm3_8[0x4] = _mm_unpacklo_epi32(
                    _mm_unpacklo_epi32(zx.o(*(eax_4 - 0x90)), zx.q(*(eax_4 - 0x60))), xmm1_4)
                int32_t xmm0_8[0x4] = _mm_add_epi32(xmm7_1, xmm4_1)
                int32_t xmm3_9[0x4] = _mm_cmpeq_epi32(xmm3_8, zx.o(0))
                xmm4_1 = (xmm0_8 & xmm3_9) | (xmm3_9 & not.o(xmm4_1))
            while (i s< edx - eax_1)
            
            int32_t xmm4_2[0x4] = _mm_add_epi32(xmm4_1, xmm5_1)
            int32_t xmm4_3[0x4] = _mm_add_epi32(xmm4_2, _mm_bsrli_si128(xmm4_2, 8))
            result = _mm_add_epi32(xmm4_3, _mm_bsrli_si128(xmm4_3, 4))
        
        if (i s< edx)
            void* esi_2 = arg1 + i * 0x18 + 4
            int32_t i_2 = edx - i
            int32_t i_1
            
            do
                bool cond:1_1 = *esi_2 != 0
                int32_t result_1 = result + 1
                esi_2 += 0x18
                
                if (cond:1_1)
                    result_1 = result
                
                result = result_1
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
    
    result.b = result != 0
    return result
}
