// 函数名称: sub_452730
// 虚拟地址: 0x452730
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __thiscallsub_452730(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: *(arg1 + (arg2 << 2) + 0x300) += arg3
    *(arg1 + (arg2 << 2) + 0x300) += arg3
    *(arg1 + (arg2 << 2) + 0x320) = 0
    *(arg1 + 0x328) = 0
    *(arg1 + 0x32c) = 0
    *(arg1 + 0x330) = 0
    return arg3
}
