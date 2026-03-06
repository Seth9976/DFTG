// 函数名称: sub_4eb1a0
// 虚拟地址: 0x4eb1a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int64_t* __convention("regparm")sub_4eb1a0(int32_t arg1, void* arg2, int32_t* arg3, int64_t* arg4)
{
    // 第一条实际指令: float eax_1
    float eax_1
    int128_t xmm0_1
    
    if (*(arg2 + 0x480) s<= *(arg2 + 0x5c))
        eax_1 = arg3[0xc]
        int128_t var_40_1 = *(arg3 + 0x10)
        xmm0_1 = *(arg3 + 0x20)
    else
        eax_1 = *(arg2 + 0x4a4)
        int128_t var_40 = *(arg2 + 0x484)
        xmm0_1 = *(arg2 + 0x494)
    
    void var_50
    int64_t* eax_3 = sub_4eb030(&var_50, arg2, arg3, &var_50)
    int64_t xmm0_3 = *eax_3
    float xmm0_5 = eax_1 f* eax_3[1].d
    *arg4 = _mm_unpacklo_ps(xmm0_3.d f* xmm0_1:8.d, xmm0_3:4.d f* xmm0_1:0xc.d)
    arg4[1].d = xmm0_5
    return arg4
}
