// 函数名称: sub_4be840
// 虚拟地址: 0x4be840
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_4be840(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: arg3[6] = 0
    arg3[6] = 0
    arg3[7] = 0
    arg3[8] = 0x3f800000
    int32_t xmm1 = *arg4
    int32_t xmm2 = arg4[1]
    int32_t eax_1 = *arg2
    arg3[3] = xmm1
    int32_t xmm1_1 = xmm1 ^ (data_60cca0.o).d
    arg3[2] = eax_1
    int32_t result = arg2[1]
    *arg3 = xmm2
    arg3[1] = xmm1_1
    arg3[4] = xmm2
    arg3[5] = result
    return result
}
