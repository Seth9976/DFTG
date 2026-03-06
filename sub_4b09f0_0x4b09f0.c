// 函数名称: sub_4b09f0
// 虚拟地址: 0x4b09f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_4b09f0(void* arg1)
{
    // 第一条实际指令: void* i = *(arg1 + 0x112c)
    for (void* i = *(arg1 + 0x112c); i != 0; i = *(arg1 + 0x112c))
        arg1 = i
    
    return sub_49ea50(arg1, 0)
}
