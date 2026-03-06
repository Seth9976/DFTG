// 函数名称: __errcode
// 虚拟地址: 0x58e8e9
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t__errcode(char arg1) __pure
{
    // 第一条实际指令: if ((arg1 & 0x20) != 0)
    if ((arg1 & 0x20) != 0)
        return 5
    
    if ((arg1 & 8) != 0)
        return 1
    
    if ((arg1 & 4) != 0)
        return 2
    
    if ((arg1 & 1) != 0)
        return 3
    
    return (zx.d(arg1) & 2) * 2
}
