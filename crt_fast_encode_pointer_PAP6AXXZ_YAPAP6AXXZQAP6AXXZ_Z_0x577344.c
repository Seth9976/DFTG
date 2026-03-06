// 函数名称: ??$__crt_fast_encode_pointer@PAP6AXXZ@@YAPAP6AXXZQAP6AXXZ@Z
// 虚拟地址: 0x577344
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t??$__crt_fast_encode_pointer@PAP6AXXZ@@YAPAP6AXXZQAP6AXXZ@Z(int32_t arg1)
{
    // 第一条实际指令: return ror.d(arg1, 0x20 - ((__security_cookie).b & 0x1f)) ^ __security_cookie
    return ror.d(arg1, 0x20 - ((__security_cookie).b & 0x1f)) ^ __security_cookie
}
