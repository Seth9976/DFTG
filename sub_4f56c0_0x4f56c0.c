// 函数名称: sub_4f56c0
// 虚拟地址: 0x4f56c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4f56c0(int32_t* arg1, uint64_t (* arg2)[0x2] @ esi, float arg3 @ xmm0)
{
    // 第一条实际指令: int64_t var_50
    int64_t var_50
    int32_t result
    int32_t mxcsr
    int16_t x87control
    long double st0
    st0, result = sub_588f50(mxcsr, x87control, fconvert.d(arg3), &var_50, arg2)
    double var_48 = fconvert.d(st0)
    *arg1 = _mm_cvtpd_ps(zx.o(var_50))
    _mm_cvtpd_ps(zx.o(var_48))
    return result
}
