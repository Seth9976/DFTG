// 函数名称: sub_591e94
// 虚拟地址: 0x591e94
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

long doublesub_591e94(int16_t arg1 @ x87control, int16_t arg2 @ x87status, int16_t arg3 @ x87tag, long double arg4 @ st0, long double arg5 @ st1)
{
    // 第一条实际指令: int16_t x87control
    int16_t x87control
    int16_t x87status
    int16_t x87tag
    uint864_t temp0
    temp0, x87control, x87tag, x87status = __fnsave_memmem108(arg1, arg3, arg2)
    double var_78
    __powhlp(fconvert.d(arg5), fconvert.d(arg4), &var_78)
    __frstor_memmem108(temp0)
    return fconvert.t(var_78)
}
