// 函数名称: sub_4bc5c0
// 虚拟地址: 0x4bc5c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4bc5c0(int32_t* arg1, float arg2 @ xmm1)
{
    // 第一条实际指令: float xmm0_1 = arg2 f- arg1[0x23]
    float xmm0_1 = arg2 f- arg1[0x23]
    sub_4be3e0(arg1, arg2 f- arg1[0x22])
    int32_t result
    int32_t ecx_1
    int32_t edx
    float xmm0_3
    result, ecx_1, edx, xmm0_3 = sub_4be3e0(&arg1[0xf], xmm0_1)
    float xmm4 = arg1[0x1e]
    float xmm2_1 = xmm0_1 f- arg1[0x1f]
    xmm4 f- 0
    result:1.b =
        (xmm4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4, 0f) ? 1 : 0) << 2 | (xmm4 < 0f ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (p_1 && not(0 f> xmm2_1))
        if (xmm2_1 >= xmm4)
            return result
        
        int32_t var_18_1 = ecx_1
        int32_t xmm0_4
        result, xmm0_4 = sub_41f710(result, edx, arg1[0x20], (zx.o(0)).d, xmm4, xmm2_1, zx.o(0), 1f)
    
    return result
}
