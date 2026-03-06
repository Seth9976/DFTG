// 函数名称: sub_41f120
// 虚拟地址: 0x41f120
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

double*sub_41f120(float arg1 @ xmm0)
{
    // 第一条实际指令: double* result
    double* result
    int32_t mxcsr
    int16_t x87control
    double xmm0_1
    result, xmm0_1 = __libm_sse2_sin_precise(mxcsr, x87control, fconvert.d(arg1))
    return result
}
