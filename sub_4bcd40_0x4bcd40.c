// 函数名称: sub_4bcd40
// 虚拟地址: 0x4bcd40
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_4bcd40(int32_t arg1, int32_t, int32_t arg3, int32_t* arg4)
{
    // 第一条实际指令: __builtin_memset(&arg4[1], 0, 0x2c)
    __builtin_memset(&arg4[1], 0, 0x2c)
    arg4[0xe] = 0
    arg4[0xd] = 0xffffffff
    arg4[0xc] = 1
    *arg4 = arg3
    return arg4
}
