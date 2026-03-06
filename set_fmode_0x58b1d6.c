// 函数名称: __set_fmode
// 虚拟地址: 0x58b1d6
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t__set_fmode(int32_t arg1)
{
    // 第一条实际指令: if (arg1 == 0x4000 || arg1 == 0x8000 || arg1 == 0x10000)
    if (arg1 == 0x4000 || arg1 == 0x8000 || arg1 == 0x10000)
        data_6cfe1c = arg1
        return 0
    
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return 0x16
}
