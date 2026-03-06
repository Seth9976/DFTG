// 函数名称: ??$__crt_fast_encode_pointer@P6GXPAU_RTL_CONDITION_VARIABLE@@@Z@@YAP6GXPAU_RTL_CONDITION_VARIABLE@@@ZQ6GX0@Z@Z
// 虚拟地址: 0x57f4f4
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t??$__crt_fast_encode_pointer@P6GXPAU_RTL_CONDITION_VARIABLE@@@Z@@YAP6GXPAU_RTL_CONDITION_VARIABLE@@@ZQ6GX0@Z@Z(int32_t arg1)
{
    // 第一条实际指令: return ror.d(arg1, 0x20 - ((__security_cookie).b & 0x1f)) ^ __security_cookie
    return ror.d(arg1, 0x20 - ((__security_cookie).b & 0x1f)) ^ __security_cookie
}
