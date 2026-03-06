// 函数名称: sub_482bd0
// 虚拟地址: 0x482bd0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_482bd0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t* arg9)
{
    // 第一条实际指令: int32_t var_18
    int32_t var_18
    char const* const ecx
    
    if (arg7 s> arg8)
        if (arg3 s< arg2 || arg3 == 0)
            int32_t i = 0
            
            if (arg7 s> 0)
                if (arg7 u>= 0x10)
                    int32_t xmm1_2[0x4] = data_60c870
                    int32_t ecx_2 = arg7 & 0x8000000f
                    
                    if (ecx_2 s< 0)
                        ecx_2 = ((ecx_2 - 1) | 0xfffffff0) + 1
                    
                    void* edx_1 = &arg9[8]
                    
                    do
                        edx_1 += 0x40
                        *(edx_1 - 0x60) = _mm_add_epi32(_mm_shuffle_epi32(zx.o(i), 0), xmm1_2)
                        *(edx_1 - 0x50) = _mm_add_epi32(_mm_shuffle_epi32(zx.o(i + 4), 0), xmm1_2)
                        int32_t ecx_7 = i + 0xc
                        uint32_t xmm0_20[0x4] = _mm_shuffle_epi32(zx.o(i + 8), 0)
                        i += 0x10
                        *(edx_1 - 0x40) = _mm_add_epi32(xmm0_20, xmm1_2)
                        *(edx_1 - 0x30) = _mm_add_epi32(_mm_shuffle_epi32(zx.o(ecx_7), 0), xmm1_2)
                    while (i s< arg7 - ecx_2)
                
                for (; i s< arg7; i += 1)
                    arg9[i] = i
            
            return arg7
        
        if (arg3 == arg2)
            if (arg4 s< arg5)
                return 0
            
            if (arg4 s< arg6)
                *arg9 = arg8
                return 1
            
            int32_t i_1 = 0
            
            if (arg7 s> 0)
                if (arg7 u>= 0x10)
                    int32_t xmm1_1[0x4] = data_60c870
                    int32_t eax_5 = arg7 & 0x8000000f
                    
                    if (eax_5 s< 0)
                        eax_5 = ((eax_5 - 1) | 0xfffffff0) + 1
                    
                    void* edx = &arg9[8]
                    
                    do
                        edx += 0x40
                        *(edx - 0x60) = _mm_add_epi32(_mm_shuffle_epi32(zx.o(i_1), 0), xmm1_1)
                        *(edx - 0x50) = _mm_add_epi32(_mm_shuffle_epi32(zx.o(i_1 + 4), 0), xmm1_1)
                        int32_t eax_10 = i_1 + 0xc
                        uint32_t xmm0_8[0x4] = _mm_shuffle_epi32(zx.o(i_1 + 8), 0)
                        i_1 += 0x10
                        *(edx - 0x40) = _mm_add_epi32(xmm0_8, xmm1_1)
                        *(edx - 0x30) = _mm_add_epi32(_mm_shuffle_epi32(zx.o(eax_10), 0), xmm1_1)
                    while (i_1 s< arg7 - eax_5)
                
                if (i_1 s< arg7)
                    do
                        arg9[i_1] = i_1
                        i_1 += 1
                    while (i_1 s< arg7)
            
            return arg7
        
        char const* const var_14_1 = "DisplayPlayers"
        var_18 = 0x1c
        ecx = "displayRound == currentRound"
    else
        char const* const var_14 = "DisplayPlayers"
        var_18 = 0x15
        ecx = "numPlayers > localWho"
    
    sub_489550(arg1, &data_5b2591, ecx, "d:\ax\trunk\ax2017\jams\roll\code\rolllog.cpp", var_18, 
        "DisplayPlayers")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
