// 函数名称: sub_4bcae0
// 虚拟地址: 0x4bcae0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t*sub_4bcae0(int32_t arg1 @ xmm1, int32_t* arg2)
{
    // 第一条实际指令: __builtin_memset(&arg2[1], 0, 0x2c)
    __builtin_memset(&arg2[1], 0, 0x2c)
    arg2[0xe] = 0
    arg2[0xd] = 0xffffffff
    arg2[0xc] = 1
    *arg2 = arg1
    return arg2
}
