// 函数名称: _atexit
// 虚拟地址: 0x5775c9
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t_atexit(int32_t arg1)
{
    // 第一条实际指令: int32_t eax = __onexit(arg1)
    int32_t eax = __onexit(arg1)
    int32_t eax_1 = neg.d(eax)
    return neg.d(sbb.d(eax_1, eax_1, eax != 0)) - 1
}
