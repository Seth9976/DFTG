// 函数名称: ?destroy_fls@@YGXPAX@Z
// 虚拟地址: 0x58c077
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __stdcall?destroy_fls@@YGXPAX@Z(int32_t* arg1)
{
    // 第一条实际指令: if (arg1 != 0)
    if (arg1 != 0)
        destroy_ptd(arg1)
        __free_base(arg1)
}
