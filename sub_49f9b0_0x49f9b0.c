// 函数名称: sub_49f9b0
// 虚拟地址: 0x49f9b0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

float __convention("regparm")sub_49f9b0(int32_t arg1, int32_t arg2, int32_t arg3, float arg4, float arg5, float arg6, float arg7, float arg8, float arg9, float arg10, float arg11, float arg12, float arg13, float arg14, float arg15)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t var_8 = eax_1
    
    if (arg3 == 7)
        @__security_check_cookie@4(var_8 ^ &__saved_ebp)
        return arg10
    
    float xmm3_1 = arg7 - arg5
    float xmm4_1 = arg6 - arg4
    float xmm0_1
    
    if (not(0 f> arg10))
        xmm0_1 = arg11
    
    float xmm6
    float xmm7
    
    if (0 f> arg10 || 0 f> xmm0_1)
        xmm7 = arg13
        xmm6 = arg12
    else
        if (not(arg10 f>= 0) && xmm0_1 f< 0)
            sub_489550(eax_1, &data_5b2591, "minSpacing.x >= 0 || minSpacing.y >= 0", 
                "d:\ax\trunk\ax2017\engine\ui2.cpp", 0x144e, "UI2CalcSpacing")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        xmm6 = arg12
        
        if (not(xmm6 f< 0))
            xmm6 = _mm_max_ss(arg10, xmm6)
            xmm0_1 = arg11
        
        xmm7 = arg13
        
        if (not(xmm7 f< 0))
            xmm7 = _mm_max_ss(xmm0_1, xmm7)
    
    float xmm2_1 = arg14 - 1f
    float xmm2_3 = arg15 - 1f
    float xmm2_9 = xmm2_1 * arg10 + arg8 * arg14
    float xmm1_5 = xmm2_3 * arg11 + arg9 * arg15
    xmm2_9 f- 0
    eax_1:1.b =
        (xmm2_9 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_9, 0f) ? 1 : 0) << 2 | (xmm2_9 < 0f ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    float xmm1_6
    
    if (p_1)
        xmm1_6 = xmm4_1 / xmm2_9
    else
        xmm1_6 = (zx.o(0)).d
    
    xmm1_5 f- 0
    eax_1:1.b =
        (xmm1_5 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_5, 0f) ? 1 : 0) << 2 | (xmm1_5 < 0f ? 1 : 0)
    bool p_3 = unimplemented  {test ah, 0x44}
    float xmm0_9
    
    if (p_3)
        xmm0_9 = xmm3_1 / xmm1_5
    else
        xmm0_9 = (zx.o(0)).d
    
    if (0 f<= arg10 || not(arg14 > 1f))
        if (0 f<= arg11 || not(arg15 > 1f))
            xmm1_6 = _mm_min_ss(xmm1_6, xmm0_9)
        
        xmm0_9 = xmm1_6
    
    xmm0_9 f- 0
    eax_1:1.b =
        (xmm0_9 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_9, 0f) ? 1 : 0) << 2 | (xmm0_9 < 0f ? 1 : 0)
    bool p_5 = unimplemented  {test ah, 0x44}
    
    if (not(p_5))
        @__security_check_cookie@4(var_8 ^ &__saved_ebp)
        return 0
    
    float xmm4_3
    
    if (arg14 <= 1f)
        xmm4_3 = (zx.o(0)).d
    else
        xmm4_3 = (xmm4_1 - arg8 * xmm0_9 * arg14) / xmm2_1
    
    float xmm3_3
    
    if (arg15 <= 1f)
        xmm3_3 = (zx.o(0)).d
    else
        xmm3_3 = (xmm3_1 - arg9 * xmm0_9 * arg15) / xmm2_3
    
    float xmm2_18 = xmm0_9 * xmm6
    float xmm1_13 = xmm0_9 * xmm7
    
    if (not(xmm2_18 > xmm4_3))
        xmm4_3 = xmm2_18
    
    if (not(xmm1_13 > xmm3_3))
        xmm3_3 = xmm1_13
    
    float xmm5_1 = 1f / xmm0_9
    float var_18_1 = xmm3_3 * xmm5_1
    @__security_check_cookie@4(var_8 ^ &__saved_ebp)
    return xmm4_3 * xmm5_1
}
