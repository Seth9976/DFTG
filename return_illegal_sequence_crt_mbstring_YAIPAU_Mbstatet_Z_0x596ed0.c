// 函数名称: ?return_illegal_sequence@__crt_mbstring@@YAIPAU_Mbstatet@@@Z
// 虚拟地址: 0x596ed0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t?return_illegal_sequence@__crt_mbstring@@YAIPAU_Mbstatet@@@Z(int32_t* arg1)
{
    // 第一条实际指令: *arg1 = 0
    *arg1 = 0
    arg1[1] = 0
    *__errno() = 0x2a
    return 0xffffffff
}
