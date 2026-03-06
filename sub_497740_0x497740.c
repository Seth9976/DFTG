// 函数名称: sub_497740
// 虚拟地址: 0x497740
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

float (*sub_497740(float (* arg1)[0x4], int32_t arg2))[0x4]
{
    // 第一条实际指令: *arg1 = __divps_xmmps_memps(_mm_cvtepi32_ps(_mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(arg2), 0), 0)), data_60cbe0)
    *arg1 = __divps_xmmps_memps(
        _mm_cvtepi32_ps(_mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(arg2), 0), 0)), data_60cbe0)
    return arg1
}
