// 函数名称: ?_msize_base@@YAIQAX@Z
// 虚拟地址: 0x58f3ac
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t?_msize_base@@YAIQAX@Z(int32_t arg1)
{
    // 第一条实际指令: if (arg1 != 0)
    if (arg1 != 0)
        return HeapSize(data_6cfe18, HEAP_NONE, arg1)
    
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return 0xffffffff
}
