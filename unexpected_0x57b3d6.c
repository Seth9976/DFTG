// 函数名称: _unexpected
// 虚拟地址: 0x57b3d6
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void_unexpected() __noreturn
{
    // 第一条实际指令: int32_t esi = *(sub_57a0a4() + 4)
    int32_t esi = *(sub_57a0a4() + 4)
    
    if (esi != 0)
        esi()
    
    sub_58afe0()
    noreturn
}
