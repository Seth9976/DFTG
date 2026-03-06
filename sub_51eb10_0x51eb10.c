// 函数名称: sub_51eb10
// 虚拟地址: 0x51eb10
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __stdcallsub_51eb10(uint128_t arg1)
{
    // 第一条实际指令: void* result = data_1151adc
    void* result = data_1151adc
    int32_t xmm0_1 = _mm_bsrli_si128(arg1, 0xc)
    int32_t y = _mm_bsrli_si128(arg1, 4)
    int32_t x = arg1
    int32_t height = xmm0_1 - y
    int32_t width = _mm_bsrli_si128(arg1, 8) - x
    
    if (*(result + 0x419c) == x && *(result + 0x41a0) == y && *(result + 0x41a4) == width
            && *(result + 0x41a8) == height)
        return result
    
    *(result + 0x419c) = x
    *(result + 0x41a0) = y
    *(result + 0x41a4) = width
    *(result + 0x41a8) = height
    return glScissor(x, y, width, height)
}
