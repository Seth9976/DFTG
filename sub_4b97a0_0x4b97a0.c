// 函数名称: sub_4b97a0
// 虚拟地址: 0x4b97a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_4b97a0(int32_t arg1, int32_t* arg2, void* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t var_c = __security_cookie ^ &__saved_ebp
    uint128_t xmm1 = zx.o(*(arg3 + 0xf28))
    float xmm0_1 = _mm_cvtepi32_ps(zx.o(*(arg3 + 0xf24)))
    float xmm1_1 = _mm_cvtepi32_ps(xmm1)
    
    if (arg2 != 0)
        uint128_t xmm1_2 = zx.o(arg2[1])
        xmm0_1 = _mm_cvtepi32_ps(zx.o(*arg2))
        xmm1_1 = _mm_cvtepi32_ps(xmm1_2)
    
    float xmm0_4 = xmm1_1 * xmm0_1
    xmm0_4 - 0f
    int32_t eax_1
    eax_1:1.b =
        (xmm0_4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_4, 0f) ? 1 : 0) << 2 | (xmm0_4 < 0f ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (not(p_1) || *(arg3 + 0x1190) == 0)
        eax_1.b = 0
        @__security_check_cookie@4(var_c ^ &__saved_ebp)
        return eax_1
    
    float xmm3[0x4] = *(arg3 + 0x10a0)
    float xmm2_1 = _mm_shuffle_ps(xmm3, xmm3, 0xaa)
    float xmm1_6 = _mm_shuffle_ps(xmm3, xmm3, 0xff) - _mm_shuffle_ps(xmm3, xmm3, 0x55)
    float var_4c = xmm2_1 f- xmm3
    float var_48 = xmm1_6
    void* eax_2
    int32_t edx
    eax_2, edx = sub_49e970(arg3, 0)
    int32_t ecx = *(arg3 + 0xe84)
    float xmm0_8 = *(eax_2 + 0x10a8) f- *(eax_2 + 0x10a0)
    float xmm1_8 = *(eax_2 + 0x10ac) f- *(eax_2 + 0x10a4)
    float xmm0_11 = *(arg3 + 0xf34)
    float xmm0_12 = *(arg3 + 0xf38)
    float xmm0_13 = *(arg3 + 0xf3c)
    float xmm0_14 = *(arg3 + 0xf40)
    float var_98[0x4] = xmm3
    float eax_4
    float edx_1
    eax_4, edx_1 = sub_49f9b0(&var_98, edx, ecx, var_98, xmm0_8, xmm1_8, xmm0_11, xmm0_12, xmm0_13, 
        xmm0_14, xmm0_1, xmm1_1)
    float xmm1_11 = *(arg3 + 0x1020)
    float var_40 = xmm1_1 * xmm1_8 + xmm1_11 * edx_1 * (xmm1_1 - 1f)
    float var_44 = xmm1_11 * eax_4 * (xmm0_1 - 1f) + xmm0_1 * xmm0_8
    int32_t* eax_6 = sub_4b9660(&var_44, &var_4c, arg3, &var_44, arg4)
    @__security_check_cookie@4(var_c ^ &__saved_ebp)
    return eax_6
}
