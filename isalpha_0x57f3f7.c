// 函数名称: _isalpha
// 虚拟地址: 0x57f3f7
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t_isalpha(char arg1)
{
    // 第一条实际指令: if (data_6cfa04 == 0)
    if (data_6cfa04 == 0)
        return zx.d((*data_61f1d8)[zx.d(arg1)]) & 0x103
    
    return __isalpha_l(arg1.d, nullptr)
}
