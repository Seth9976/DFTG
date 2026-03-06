// 函数名称: _isdigit
// 虚拟地址: 0x57f427
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t_isdigit(char arg1)
{
    // 第一条实际指令: if (data_6cfa04 == 0)
    if (data_6cfa04 == 0)
        return zx.d((*data_61f1d8)[zx.d(arg1)]) & 4
    
    return __isdigit_l(arg1.d, nullptr)
}
