// 函数名称: sub_4bcaa0
// 虚拟地址: 0x4bcaa0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t*sub_4bcaa0(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: _memset(&arg1[2], 0, 0x40)
    _memset(&arg1[2], 0, 0x40)
    arg1[0x14] = 0
    arg1[0x13] = 0xffffffff
    arg1[0x12] = 1
    *arg1 = arg2
    arg1[1] = arg3
    return arg1
}
