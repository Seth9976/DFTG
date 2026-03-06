// 函数名称: sub_4aee00
// 虚拟地址: 0x4aee00
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4aee00(void* arg1)
{
    // 第一条实际指令: int32_t xmm1[0x4] = __paddd_xmmdq_memdq(data_60c870, data_60c890)
    int32_t xmm1[0x4] = __paddd_xmmdq_memdq(data_60c870, data_60c890)
    int32_t xmm0_1 = _mm_bsrli_si128(xmm1, 4)
    *(xmm1 + &data_12baa80) = 0
    int32_t xmm0_3 = _mm_bsrli_si128(xmm1, 8)
    int32_t xmm1_1 = _mm_bsrli_si128(xmm1, 0xc)
    *(xmm0_1 + &data_12baa80) = 0
    *(xmm0_3 + &data_12baa80) = 0
    *(xmm1_1 + &data_12baa80) = 0
    int32_t result = *(arg1 + 0x1138)
    *(arg1 + 0x1140) = result
    *(arg1 + 0x1185) = 0
    return result
}
