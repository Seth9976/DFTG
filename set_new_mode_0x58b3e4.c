// 函数名称: __set_new_mode
// 虚拟地址: 0x58b3e4
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t__set_new_mode(int32_t arg1)
{
    // 第一条实际指令: if (arg1 != 0 && arg1 != 1)
    if (arg1 != 0 && arg1 != 1)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        return 0xffffffff
    
    int32_t result = data_6cfa08
    data_6cfa08 = arg1
    return result
}
