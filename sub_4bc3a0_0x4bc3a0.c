// 函数名称: sub_4bc3a0
// 虚拟地址: 0x4bc3a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int128_t* __thiscallsub_4bc3a0(int128_t* arg1, float arg2 @ xmm2, int128_t* arg3)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float xmm0_1 = arg2 f- *(arg1 + 0x11c)
    float var_30
    int128_t* eax_3
    int32_t edx
    int32_t edx_1
    eax_3, edx_1 = sub_4bde10(&var_30, edx, arg1, arg2 f- *(arg1 + 0x118), &var_30)
    int128_t xmm0_2 = *eax_3
    void var_50
    int128_t* eax_5
    int32_t ecx_1
    int32_t edx_2
    eax_5, ecx_1, edx_2 = sub_4bde10(&var_50, edx_1, arg1 + 0x84, xmm0_1, &var_50)
    float xmm1 = *(arg1 + 0x108)
    int32_t xmm4 = (zx.o(0)).d
    xmm1 f- 0
    int128_t xmm0_3 = *eax_5
    eax_5:1.b =
        (xmm1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1, 0f) ? 1 : 0) << 2 | (xmm1 < 0f ? 1 : 0)
    float xmm0_5 = xmm0_1 f- *(arg1 + 0x10c)
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (p_1)
        if (not(0 f> xmm0_5))
            if (xmm0_5 >= xmm1)
                xmm4 = 0x3f800000
            else
                int32_t var_5c_2 = ecx_1
                xmm4 = sub_41f710(eax_5, edx_2, arg1[0x11].d, (zx.o(0)).d, xmm1, xmm0_5, zx.o(0), 1f)
    else if (not(0 f> xmm0_5))
        xmm4 = 0x3f800000
    
    var_30 = (xmm0_3.d f- xmm0_2.d) f* xmm4 f+ xmm0_2.d
    float var_28 = (xmm0_3:8.d f- xmm0_2:8.d) f* xmm4 f+ xmm0_2:8.d
    float var_2c = (xmm0_3:4.d f- xmm0_2:4.d) f* xmm4 f+ xmm0_2:4.d
    float var_24 = (xmm0_3:0xc.d f- xmm0_2:0xc.d) f* xmm4 f+ xmm0_2:0xc.d
    *arg3 = var_30.o
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return arg3
}
