// 函数名称: sub_4bc4e0
// 虚拟地址: 0x4bc4e0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __thiscallsub_4bc4e0(int32_t* arg1, float arg2 @ xmm2, int32_t* arg3)
{
    // 第一条实际指令: float xmm0_1 = arg2 f- arg1[0x2f]
    float xmm0_1 = arg2 f- arg1[0x2f]
    float eax
    float edx
    eax, edx = sub_4be170(arg1, arg2 f- arg1[0x2e])
    float eax_1
    int32_t ecx_1
    float edx_1
    eax_1, ecx_1, edx_1 = sub_4be170(&arg1[0x15], xmm0_1)
    float xmm1_2 = arg1[0x2a]
    int32_t xmm4 = (zx.o(0)).d
    float xmm0_3 = xmm0_1 f- arg1[0x2b]
    xmm1_2 f- 0
    float var_14 = eax_1
    eax_1:1.b =
        (xmm1_2 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_2, 0f) ? 1 : 0) << 2 | (xmm1_2 < 0f ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (p_1)
        if (not(0 f> xmm0_3))
            if (xmm0_3 >= xmm1_2)
                xmm4 = 0x3f800000
            else
                int32_t var_24_1 = ecx_1
                xmm4 = sub_41f710(eax_1, edx_1, arg1[0x2c], (zx.o(0)).d, xmm1_2, xmm0_3, zx.o(0), 1f)
    else if (not(0 f> xmm0_3))
        xmm4 = 0x3f800000
    
    *arg3 = (var_14 - eax) f* xmm4 + eax
    arg3[1] = (edx_1 - edx) f* xmm4 + edx
    return arg3
}
