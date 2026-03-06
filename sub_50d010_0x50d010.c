// 函数名称: sub_50d010
// 虚拟地址: 0x50d010
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

float __fastcallsub_50d010(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: float xmm0 = data_1151090
    float xmm0 = data_1151090
    float xmm1 = data_1151094
    float xmm0_1 = xmm0 - xmm1
    void var_2c
    int32_t* eax = sub_50cd80(&var_2c)
    uint128_t xmm1_1 = *eax
    int32_t ecx = xmm1_1
    int32_t eax_2 = _mm_bsrli_si128(xmm1_1, 8) - ecx
    float result = sub_50cf10(_mm_cvtepi32_ps(zx.o(arg1 - ecx)) / _mm_cvtepi32_ps(zx.o(eax_2)), 1f)
    uint128_t xmm0_6 = *eax
    int32_t xmm0_7 = _mm_bsrli_si128(xmm0_6, 0xc)
    int32_t xmm1_6 = _mm_bsrli_si128(xmm0_6, 4)
    float xmm0_9 = _mm_cvtepi32_ps(zx.o(xmm0_7 - xmm1_6))
    int32_t eax_5
    float xmm0_13
    eax_5, xmm0_13 =
        sub_50cf10((1f - _mm_cvtepi32_ps(zx.o(arg2 - xmm1_6)) / xmm0_9) * xmm0_1 + xmm1, xmm0_1)
    float var_14 = xmm0_13
    
    if (not(0f <= result))
        result = 0f
    else if (not(result <= 1f))
        result = 1f
    
    if (xmm0 < xmm1)
        sub_489550(eax_5, &data_5b2591, "min <= max", "d:\ax\trunk\ax2017\engine\mathfunctions.cpp", 
            0xe5, "Clamp")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    if (not(xmm1 <= xmm0_13))
        float var_14_1 = xmm1
        return result
    
    if (not(xmm0_13 <= xmm0))
        var_14 = xmm0
    
    return result
}
