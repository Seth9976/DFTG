// 函数名称: sub_498600
// 虚拟地址: 0x498600
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_498600(int32_t arg1, void* arg2)
{
    // 第一条实际指令: if (arg1 != 7)
    if (arg1 != 7)
        if (arg1 == 8)
            return *(arg2 + 4)
        
        return 0xffffffff
    
    float xmm3 = *(arg2 + 0x10)
    float xmm0_1
    
    if (0f <= xmm3)
        int32_t xmm0 = _mm_min_ss(0x437f0000, xmm3)
        
        if (0 f<= xmm0)
            xmm0_1 = xmm0 f+ 0.5f
        else
            xmm0_1 = xmm0 f- 0.5f
    else
        xmm0_1 = (zx.o(0)).d f+ 0.5f
    
    float xmm4 = *(arg2 + 0xc)
    float xmm0_3
    
    if (0f <= xmm4)
        int32_t xmm0_2 = _mm_min_ss(0x437f0000, xmm4)
        
        if (0 f<= xmm0_2)
            xmm0_3 = xmm0_2 f+ 0.5f
        else
            xmm0_3 = xmm0_2 f- 0.5f
    else
        xmm0_3 = (zx.o(0)).d f+ 0.5f
    
    float xmm4_1 = *(arg2 + 8)
    float xmm0_5
    
    if (0f <= xmm4_1)
        int32_t xmm0_4 = _mm_min_ss(0x437f0000, xmm4_1)
        
        if (0 f<= xmm0_4)
            xmm0_5 = xmm0_4 f+ 0.5f
        else
            xmm0_5 = xmm0_4 f- 0.5f
    else
        xmm0_5 = (zx.o(0)).d f+ 0.5f
    
    int32_t xmm0_6 = *(arg2 + 4)
    float xmm1_1
    
    if (0 f<= xmm0_6)
        int32_t xmm1 = _mm_min_ss(0x437f0000, xmm0_6)
        
        if (0 f<= xmm1)
            xmm1_1 = xmm1 f+ 0.5f
        else
            xmm1_1 = xmm1 f- 0.5f
    else
        xmm1_1 = (zx.o(0)).d f+ 0.5f
    
    char var_6 = (int.d(xmm0_3)).b
    char var_7 = (int.d(xmm0_5)).b
    char var_5 = (int.d(xmm0_1)).b
    return (int.d(xmm1_1)).b.d
}
