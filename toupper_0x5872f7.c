// 函数名称: _toupper
// 虚拟地址: 0x5872f7
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t_toupper(uint32_t arg1)
{
    // 第一条实际指令: if (data_6cfa04 != 0)
    if (data_6cfa04 != 0)
        return __toupper_l(arg1, nullptr)
    
    if (arg1 - 0x61 u> 0x19)
        return arg1
    
    return arg1 - 0x20
}
