// 函数名称: sub_56d9a0
// 虚拟地址: 0x56d9a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_56d9a0(void* arg1, int32_t arg2, float arg3 @ xmm2)
{
    // 第一条实际指令: int32_t ecx = *(arg1 + 8)
    int32_t ecx = *(arg1 + 8)
    int32_t edx = arg2 * 0x13
    float xmm0 = *(ecx + (edx << 2))
    float xmm2[0x4]
    
    if (0f <= arg3)
        xmm2 = _mm_min_ss(0x3f800000, arg3)
    else
        xmm2 = zx.o(0)
    
    xmm0 f- 0
    int32_t eax
    eax:1.b = (xmm0 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0, 0f) ? 1 : 0) << 2 | (xmm0 < 0f ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (not(p_1))
        return eax
    
    xmm0 - 1f
    eax:1.b = (xmm0 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm0, 1f) ? 1 : 0) << 2 | (xmm0 < 1f ? 1 : 0)
    bool p_3 = unimplemented  {test ah, 0x44}
    
    if (not(p_3))
        return eax
    
    int32_t i = edx + 1
    int32_t i_1 = i
    int32_t eax_1
    
    for (eax_1 = i + 0x12; i s< eax_1; i += 2)
        if (*(ecx + (i << 2)) f>= xmm2)
            if (i != i_1)
                *(ecx + (i << 2) - 8)
                *(ecx + (i << 2) - 4)
            
            *(ecx + (i << 2) + 4)
            return eax_1
    
    *(ecx + (i << 2) - 4)
    *(ecx + (i << 2) - 4)
    return eax_1
}
