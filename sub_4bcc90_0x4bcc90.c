// 函数名称: sub_4bcc90
// 虚拟地址: 0x4bcc90
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t*sub_4bcc90(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: __builtin_memset(&arg1[1], 0, 0x2c)
    __builtin_memset(&arg1[1], 0, 0x2c)
    arg1[0xe] = 0
    arg1[0xd] = 0xffffffff
    arg1[0xc] = 1
    *arg1 = arg2
    return arg1
}
