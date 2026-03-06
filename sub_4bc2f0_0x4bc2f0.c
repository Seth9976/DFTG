// 函数名称: sub_4bc2f0
// 虚拟地址: 0x4bc2f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char** __thiscallsub_4bc2f0(int32_t* arg1, float arg2 @ xmm2, char** arg3)
{
    // 第一条实际指令: float xmm0_1 = arg2 f- arg1[0x23]
    float xmm0_1 = arg2 f- arg1[0x23]
    char* var_10 = sub_4bdbe0(arg1, arg2 f- arg1[0x22])
    char* eax_1
    int32_t ecx_1
    int32_t edx
    eax_1, ecx_1, edx = sub_4bdbe0(&arg1[0xf], xmm0_1)
    float xmm4 = arg1[0x1e]
    float xmm0_2 = (zx.o(0)).d
    float xmm1_4 = xmm0_1 f- arg1[0x1f]
    xmm4 f- 0
    char* var_c = eax_1
    eax_1:1.b =
        (xmm4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4, 0f) ? 1 : 0) << 2 | (xmm4 < 0f ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (p_1)
        if (not(0 f> xmm1_4))
            if (xmm1_4 >= xmm4)
                xmm0_2 = 1f
            else
                int32_t var_1c_1 = ecx_1
                xmm0_2 = sub_41f710(eax_1, edx, arg1[0x20], xmm0_2, xmm4, xmm1_4, zx.o(0), 1f)
    else if (not(0 f> xmm1_4))
        xmm0_2 = 1f
    
    *arg3 = sub_4bea10(&var_10, &var_c, xmm0_2)
    return arg3
}
