// 函数名称: sub_561250
// 虚拟地址: 0x561250
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_561250(void* arg1)
{
    // 第一条实际指令: void* eax_1 = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
    void* eax_1 = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
    *(arg1 + 0xa8) = arg1 + 0x28
    
    if (eax_1 != 0)
        void* result = eax_1 + 0x28 + arg1
        *(arg1 + 0xac) = result
        return result
    
    *(arg1 + 0x20) = eax_1
    *(arg1 + 0xac) = arg1 + 0x29
    *(arg1 + 0x28) = 0
    return arg1 + 0x28
}
