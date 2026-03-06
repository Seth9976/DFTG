// 函数名称: sub_4df2c0
// 虚拟地址: 0x4df2c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_4df2c0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: void* esi = data_114ec70
    void* esi = data_114ec70
    *(esi + 0x24c) += 1
    int32_t eax_1 = *(esi + 0x24c) * 5
    *(esi + (eax_1 << 2) + 0x10c) = 2
    *(esi + (eax_1 << 2) + 0x114) = arg1
    *(esi + (eax_1 << 2) + 0x118) = arg2
    *(esi + (eax_1 << 2) + 0x11c) = 0
    return sub_4ded00(eax_1, arg2, arg1, 0)
}
