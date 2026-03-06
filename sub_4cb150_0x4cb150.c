// 函数名称: sub_4cb150
// 虚拟地址: 0x4cb150
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int128_t* __convention("regparm")sub_4cb150(int32_t arg1, void* arg2, void* arg3, int128_t* arg4, int128_t* arg5)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t var_14 = eax_1
    
    if (*(arg3 + 4) != 6)
        sub_489550(eax_1, &data_5b2591, "el.type == UI_GROUP", "d:\ax\trunk\ax2017\engine\uidef.cpp", 
            0x834, "UIElementGroupTransform")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    float xmm0 = *(arg2 + 0x10)
    xmm0 - 1f
    eax_1:1.b =
        (xmm0 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm0, 1f) ? 1 : 0) << 2 | (xmm0 < 1f ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (not(p_1))
        *arg4 = *arg5
        arg4[1] = arg5[1]
        arg4[2] = arg5[2]
        arg4[3] = arg5[3]
        arg4[4] = arg5[4]
        arg4[5] = arg5[5]
        @__security_check_cookie@4(var_14 ^ &__saved_ebp)
        return arg4
    
    int32_t ecx_2 = *(arg3 + 0x84)
    float xmm0_7 = xmm0 - 0f
    int32_t xmm5
    
    if (not(0 f< xmm0_7))
        xmm5 = (zx.o(0)).d
    else if (xmm0_7 < 1f)
        xmm5 = sub_41f140(ecx_2, xmm0_7, (zx.o(0)).d, 1f)
    else if (ecx_2 == 0xa || ecx_2 == 0xc || ecx_2 == 0xb || ecx_2 == 0xd || ecx_2 == 0xe
            || ecx_2 == 0xf || ecx_2 == 0x13)
        xmm5 = (zx.o(0)).d
    else
        xmm5 = 0x3f800000
    
    float xmm0_9 = *(arg3 + 0x80)
    float xmm7[0x4] = *arg5
    float xmm6[0x4] = arg5[1]
    int128_t xmm0_10 = arg5[2]
    float xmm1_5 = ((0f - xmm0_9) f* xmm5 + xmm0_9) f* *(arg5 + 0xc)
    int128_t xmm0_11 = arg5[3]
    int128_t xmm0_12 = arg5[4]
    int128_t xmm0_13 = arg5[5]
    float xmm2_5 = ((0f f- *(arg3 + 0x7c)) f* xmm5 f+ *(arg3 + 0x7c)) f* *(arg5 + 0xc)
    int128_t var_28 = xmm0_13
    float xmm7_1 = xmm7 f+ xmm2_5
    float xmm0_15 = xmm7[1] + xmm1_5
    float xmm6_2 = _mm_shuffle_ps(xmm6, xmm6, 0xaa) + xmm2_5
    xmm7[1] = xmm0_15
    float xmm0_17 = xmm6[3] + xmm1_5
    xmm7[0] = xmm7_1
    xmm6[2] = xmm6_2
    xmm6[3] = xmm0_17
    float xmm0_18 = *(arg3 + 0x74)
    float xmm1_8 = (1f - xmm0_18) f* xmm5 + xmm0_18
    int32_t xmm0_19
    
    if (0 f<= xmm1_8)
        xmm0_19 = _mm_min_ss(0x3f800000, xmm1_8)
    else
        xmm0_19 = (zx.o(0)).d
    
    float xmm0_20 = xmm0_19 f* xmm7[2]
    xmm7[2] = xmm0_20
    float xmm0_21 = *(arg3 + 0x78)
    int128_t var_c0
    float xmm1_9[0x4] = *sub_4c8d30(&var_c0, arg3 + 0x10, arg5, &var_c0, arg3 + 0x20)
    float xmm7_3 = _mm_shuffle_ps(xmm6, xmm6, 0x55)
    float xmm0_23 = _mm_shuffle_ps(xmm1_9, xmm1_9, 0xaa)
    float xmm4_2 = (1f - xmm0_21) f* xmm5 + xmm0_21
    int128_t var_1a0 = xmm0_10
    float xmm3_2 = (xmm1_9[0] + xmm0_23) * 0.5f
    int128_t var_190 = xmm0_11
    int128_t var_180 = xmm0_12
    int128_t var_170 = xmm0_13
    int128_t xmm2_9 =
        (_mm_shuffle_ps(xmm1_9, xmm1_9, 0x55) + _mm_shuffle_ps(xmm1_9, xmm1_9, 0xff)) * 0.5f
    var_c0 = xmm2_9
    float var_1c0[0x4] = xmm7
    float xmm4_4 = xmm6[0] * xmm6[0] f* xmm6
    float xmm6_4 = _mm_shuffle_ps(xmm7, xmm7, 0xff)
    float xmm5_3 = _mm_shuffle_ps(xmm6, xmm6, 0x55) * xmm7_3 * xmm7_3
    float var_114 = xmm4_2 * xmm6_4
    float var_11c = var_c0.d + xmm4_2 * (xmm0_15 f- xmm2_9) + 0f
    float xmm6_5 = xmm6[0]
    float var_118 = xmm0_20
    float var_10c = xmm7_3 * xmm5_3
    *arg4 = (xmm3_2 + xmm4_2 * (xmm7_1 - xmm3_2) + 0f).o
    float var_108 = xmm6_2
    float var_104 = xmm6[3]
    int128_t var_1b0 = (xmm6_5 * xmm4_4).o
    var_1b0.d = xmm6_5
    var_1b0:8.d = xmm6_2
    var_1b0:4.d = xmm7_3
    var_1b0:0xc.d = xmm6[3]
    arg4[1] = var_1b0
    int128_t var_100
    arg4[2] = var_100
    arg4[3] = xmm0_10
    arg4[4] = xmm0_11
    arg4[5] = xmm0_12
    @__security_check_cookie@4(var_14 ^ &__saved_ebp)
    return arg4
}
