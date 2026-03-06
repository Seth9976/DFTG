// 函数名称: sub_4dee30
// 虚拟地址: 0x4dee30
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_4dee30(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: void* eax_1 = data_114ec70
    void* eax_1 = data_114ec70
    *(eax_1 + 0x24c) = 0
    *(eax_1 + 0xf0) = 2
    *(eax_1 + 0x100) = arg1
    *(eax_1 + 0x104) = arg2
    *(eax_1 + 0x108) = 1
    return sub_4ded00(eax_1, arg2, arg1, 1)
}
