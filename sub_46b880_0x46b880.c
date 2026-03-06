// 函数名称: sub_46b880
// 虚拟地址: 0x46b880
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

floatsub_46b880()
{
    // 第一条实际指令: void var_14
    void var_14
    void* ecx
    int32_t edx
    float xmm2[0x4] = *sub_46b7c0(&var_14, edx, ecx, &var_14)
    float xmm1_1 = _mm_shuffle_ps(xmm2, xmm2, 0x55)
    float xmm3 = xmm2[0]
    float xmm0_1 = _mm_shuffle_ps(xmm2, xmm2, 0xaa)
    float var_8 = (xmm1_1 + _mm_shuffle_ps(xmm2, xmm2, 0xff)) * 0.5f
    return (xmm3 + xmm0_1) * 0.5f
}
