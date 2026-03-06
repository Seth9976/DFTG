// 函数名称: sub_498790
// 虚拟地址: 0x498790
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int128_t* __thiscallsub_498790(int32_t* arg1, float arg2 @ xmm2, int128_t* arg3)
{
    // 第一条实际指令: float xmm0_1 = arg2 f- arg1[0x23]
    float xmm0_1 = arg2 f- arg1[0x23]
    float xmm0_2 = sub_4be3e0(arg1, arg2 f- arg1[0x22])
    int32_t eax
    int32_t ecx_1
    int32_t edx
    float xmm0_3
    eax, ecx_1, edx, xmm0_3 = sub_4be3e0(&arg1[0xf], xmm0_1)
    float xmm4 = arg1[0x1e]
    float xmm2_1 = xmm0_1 f- arg1[0x1f]
    int32_t xmm1_3 = 0x3f800000
    xmm4 f- 0
    eax:1.b = (xmm4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4, 0f) ? 1 : 0) << 2 | (xmm4 < 0f ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (p_1)
        if (not(0 f<= xmm2_1))
            xmm1_3 = (zx.o(0)).d
        else if (not(xmm2_1 >= xmm4))
            int32_t var_44_1 = ecx_1
            xmm1_3 = sub_41f710(eax, edx, arg1[0x20], (zx.o(0)).d, xmm4, xmm2_1, zx.o(0), 1f)
    else if (not(0 f<= xmm2_1))
        xmm1_3 = (zx.o(0)).d
    
    float xmm0_7 = arg2 f- arg1[0x47]
    float xmm3_4 = (xmm0_3 - xmm0_2) f* xmm1_3 + xmm0_2
    float xmm0_8 = sub_4be3e0(&arg1[0x24], arg2 f- arg1[0x46])
    int32_t eax_1
    int32_t ecx_5
    int32_t edx_1
    float xmm0_9
    eax_1, ecx_5, edx_1, xmm0_9 = sub_4be3e0(&arg1[0x33], xmm0_7)
    float xmm4_1 = arg1[0x42]
    float xmm0_10 = (zx.o(0)).d
    float xmm1_9 = xmm0_7 f- arg1[0x43]
    xmm4_1 f- 0
    eax_1:1.b =
        (xmm4_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4_1, 0f) ? 1 : 0) << 2 | (xmm4_1 < 0f ? 1 : 0)
    bool p_3 = unimplemented  {test ah, 0x44}
    
    if (p_3)
        if (not(0 f> xmm1_9))
            if (xmm1_9 < xmm4_1)
                int32_t var_44_2 = ecx_5
                xmm0_10 = sub_41f710(eax_1, edx_1, arg1[0x44], xmm0_10, xmm4_1, xmm1_9, zx.o(0), 1f)
            else
                xmm0_10 = 1f
    else if (not(0 f> xmm1_9))
        xmm0_10 = 1f
    
    float xmm2_6 = (xmm0_9 - xmm0_8) * xmm0_10 + xmm0_8
    float xmm0_12 = arg2 f- arg1[0x6b]
    float xmm0_13 = sub_4be3e0(&arg1[0x48], arg2 f- arg1[0x6a])
    int32_t eax_2
    int32_t ecx_9
    int32_t edx_2
    float xmm0_14
    eax_2, ecx_9, edx_2, xmm0_14 = sub_4be3e0(&arg1[0x57], xmm0_12)
    float xmm4_2 = arg1[0x66]
    float xmm0_15 = (zx.o(0)).d
    float xmm1_15 = xmm0_12 f- arg1[0x67]
    xmm4_2 f- 0
    eax_2:1.b =
        (xmm4_2 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4_2, 0f) ? 1 : 0) << 2 | (xmm4_2 < 0f ? 1 : 0)
    bool p_5 = unimplemented  {test ah, 0x44}
    
    if (p_5)
        if (not(0 f> xmm1_15))
            if (xmm1_15 < xmm4_2)
                int32_t var_44_3 = ecx_9
                xmm0_15 = sub_41f710(eax_2, edx_2, arg1[0x68], xmm0_15, xmm4_2, xmm1_15, zx.o(0), 1f)
            else
                xmm0_15 = 1f
    else if (not(0 f> xmm1_15))
        xmm0_15 = 1f
    
    float xmm0_17 = arg2 f- arg1[0x8f]
    float xmm0_18 = sub_4be3e0(&arg1[0x6c], arg2 f- arg1[0x8e])
    int32_t eax_3
    int32_t ecx_13
    int32_t edx_3
    float xmm0_19
    eax_3, ecx_13, edx_3, xmm0_19 = sub_4be3e0(&arg1[0x7b], xmm0_17)
    float xmm4_3 = arg1[0x8a]
    int32_t xmm0_20 = (zx.o(0)).d
    float xmm2_13 = xmm0_17 f- arg1[0x8b]
    xmm4_3 f- 0
    eax_3:1.b =
        (xmm4_3 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4_3, 0f) ? 1 : 0) << 2 | (xmm4_3 < 0f ? 1 : 0)
    bool p_7 = unimplemented  {test ah, 0x44}
    
    if (p_7)
        if (not(0 f> xmm2_13))
            if (xmm2_13 >= xmm4_3)
                xmm0_20 = 0x3f800000
            else
                int32_t var_44_4 = ecx_13
                xmm0_20 = sub_41f710(eax_3, edx_3, arg1[0x8c], xmm0_20, xmm4_3, xmm2_13, zx.o(0), 1f)
    else if (not(0 f> xmm2_13))
        xmm0_20 = 0x3f800000
    
    float var_1c = xmm2_6
    float var_18 = (xmm0_14 - xmm0_13) * xmm0_15 + xmm0_13 + xmm3_4
    float var_14 = (xmm0_19 - xmm0_18) f* xmm0_20 + xmm0_18 + xmm2_6
    *arg3 = xmm3_4.o
    return arg3
}
