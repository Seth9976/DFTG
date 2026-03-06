// 函数名称: sub_4bc210
// 虚拟地址: 0x4bc210
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4bc210(int32_t* arg1, float arg2 @ xmm1)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    float xmm0_1 = arg2 f- arg1[0x23]
    int32_t eax = sub_4bd960(arg1, arg2 f- arg1[0x22])
    int32_t eax_1
    int32_t ecx_1
    int32_t edx
    eax_1, ecx_1, edx = sub_4bd960(&arg1[0xf], xmm0_1)
    float xmm4 = arg1[0x1e]
    int32_t esi = eax_1
    float xmm1_3 = xmm0_1 f- arg1[0x1f]
    xmm4 f- 0
    eax_1:1.b =
        (xmm4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4, 0f) ? 1 : 0) << 2 | (xmm4 < 0f ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    int32_t xmm2
    
    if (p_1)
        if (not(0 f<= xmm1_3))
            xmm2 = (zx.o(0)).d
        else if (xmm1_3 < xmm4)
            int32_t var_18_1 = ecx_1
            xmm2 = sub_41f710(eax_1, edx, arg1[0x20], (zx.o(0)).d, xmm4, xmm1_3, zx.o(0), 1f)
        else
            xmm2 = 0x3f800000
    else if (0 f<= xmm1_3)
        xmm2 = 0x3f800000
    else
        xmm2 = (zx.o(0)).d
    
    float xmm1_7 = _mm_cvtepi32_ps(zx.o(esi - eax)) f* xmm2
    
    if (0 f<= xmm1_7)
        return int.d(xmm1_7 + 0.5f) + eax
    
    return int.d(xmm1_7 - 0.5f) + eax
}
