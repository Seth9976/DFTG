// 函数名称: sub_4a6e20
// 虚拟地址: 0x4a6e20
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

float*sub_4a6e20(void* arg1)
{
    // 第一条实际指令: void* eax = data_114e814
    void* eax = data_114e814
    int128_t xmm0 = *(eax + 0x28)
    int32_t esi = *(eax + 0x38)
    float xmm0_1 = *(arg1 + 0x1080)
    *(arg1 + 0x1080) = xmm0_1 * 0.400000006f
    *(eax + 0x38) = 0
    sub_4a67a0(arg1)
    void* eax_1 = data_114e814
    *(eax_1 + 0x28) = xmm0
    *(eax_1 + 0x38) = esi
    *(arg1 + 0x1080) = xmm0_1
    sub_4a67a0(arg1)
    float* result
    result.b = 0
    return result
}
