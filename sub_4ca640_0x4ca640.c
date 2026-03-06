// 函数名称: sub_4ca640
// 虚拟地址: 0x4ca640
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_4ca640(int32_t arg1, int32_t* arg2, void* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t* result
    int32_t* result
    
    if (data_aca1f0[6].b != 0)
        void var_28
        int128_t* eax_2 = sub_4c8d30(&var_28, arg3 + 0x10, arg2, &var_28, arg3 + 0x20)
        float xmm4_1 = *(arg3 + 0xa0)
        float xmm3_1 = *(arg3 + 0x9c)
        float xmm2_1 = *(arg3 + 0xa4)
        float xmm1_1[0x4] = *eax_2
        float xmm5_1 = *(arg3 + 0x168)
        float xmm7_1 = *(arg3 + 0x16c)
        float xmm0_3 = _mm_shuffle_ps(xmm1_1, xmm1_1, 0xaa) f- xmm1_1
        float xmm6_2 = xmm0_3 f* *(arg3 + 0x98)
        float xmm0_5 = _mm_shuffle_ps(xmm1_1, xmm1_1, 0xff)
        float xmm4_3 = xmm4_1 * xmm0_3 f+ xmm1_1
        float xmm6_3 = xmm6_2 f+ xmm1_1
        float xmm1_2 = _mm_shuffle_ps(xmm1_1, xmm1_1, 0x55)
        float xmm0_6 = xmm0_5 - xmm1_2
        float xmm3_3 = xmm3_1 * xmm0_6 + xmm1_2
        float xmm2_3 = xmm2_1 * xmm0_6 + xmm1_2
        float xmm1_3 = arg2[3]
        int32_t var_38_2
        char const* const var_34_2
        
        if (xmm4_3 < xmm6_3 || xmm2_3 < xmm3_3)
            var_34_2 = "RectInflate"
            var_38_2 = 0xb3
        label_4ca7c9:
            sub_489550(eax_2, &data_5b2591, "RectIsNormalized(r)", 
                "d:\ax\trunk\ax2017\engine\rect.cpp", var_38_2, var_34_2)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        float xmm4_4 = xmm4_3 + (*(arg3 + 0x170) - 0f) * xmm1_3 + 0f
        float xmm2_4 = xmm2_3 + (*(arg3 + 0x174) - 0f) * xmm1_3 + 0f
        float xmm5_5 = (xmm5_1 - 0f) * xmm1_3 + 0f + xmm6_3
        float xmm3_13 = xmm3_3 + (xmm7_1 - 0f) * xmm1_3 + 0f
        
        if (xmm4_4 < xmm5_5 || xmm2_4 < xmm3_13)
            var_34_2 = "RectContains"
            var_38_2 = 0xa4
            goto label_4ca7c9
        
        int32_t xmm1_4 = *arg4
        
        if (not(xmm1_4 f< xmm5_5))
            int32_t xmm0_7 = arg4[1]
            
            if (not(xmm0_7 f< xmm3_13) && not(xmm4_4 f< xmm1_4) && not(xmm2_4 f< xmm0_7))
                result.b = 1
                return result
    
    result.b = 0
    return result
}
