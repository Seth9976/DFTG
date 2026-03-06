// 函数名称: sub_54e220
// 虚拟地址: 0x54e220
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

float*sub_54e220(float* arg1)
{
    // 第一条实际指令: float xmm2_1 = data_1267870 ^ (data_60cca0.o).d
    float xmm2_1 = data_1267870 ^ (data_60cca0.o).d
    float xmm1_1 = data_1267874 ^ (data_60cca0.o).d
    __builtin_memset(&arg1[4], 0, 0x1c)
    float xmm0 = data_126786c
    arg1[0x17] = 0
    arg1[2] = 0x3f800000
    arg1[3] = xmm0
    *(arg1 + 0x2c) = data_60cc20
    int128_t xmm0_2 = data_5d2770
    *arg1 = xmm2_1 * xmm0
    *(arg1 + 0x3c) = xmm0_2
    int128_t xmm0_3 = data_60cc20
    arg1[1] = xmm1_1 * xmm0
    *(arg1 + 0x4c) = xmm0_3
    return arg1
}
