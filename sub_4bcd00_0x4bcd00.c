// 函数名称: sub_4bcd00
// 虚拟地址: 0x4bcd00
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int128_t*sub_4bcd00(int128_t* arg1, int128_t arg2)
{
    // 第一条实际指令: _memset(&arg1[1], 0, 0x68)
    _memset(&arg1[1], 0, 0x68)
    arg1[8].d = 0
    *(arg1 + 0x7c) = 0xffffffff
    *(arg1 + 0x78) = 1
    *arg1 = arg2
    return arg1
}
