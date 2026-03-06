// 函数名称: sub_436260
// 虚拟地址: 0x436260
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_436260(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax_3 = arg2 * 5
    int32_t eax_3 = arg2 * 5
    
    if ((&data_62b1ac)[eax_3 * 2] == arg1)
        return (&data_62b1b0)[eax_3 * 2]
    
    if ((&data_62b1bc)[eax_3 * 2] != arg1)
        return 0
    
    return (&data_62b1c0)[eax_3 * 2]
}
