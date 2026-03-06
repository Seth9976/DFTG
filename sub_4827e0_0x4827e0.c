// 函数名称: sub_4827e0
// 虚拟地址: 0x4827e0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_4827e0(float arg1 @ xmm0)
{
    // 第一条实际指令: int32_t result
    int32_t result
    int32_t mxcsr
    int16_t x87control
    long double st0
    st0, result = sub_59aa00(mxcsr, x87control, fconvert.d(fconvert.t(fconvert.d(arg1))))
    _mm_cvtpd_ps(zx.o(fconvert.d(st0)))
    return result
}
