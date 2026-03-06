// 函数名称: sub_4a3580
// 虚拟地址: 0x4a3580
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_4a3580(void* arg1)
{
    // 第一条实际指令: void* i = *(arg1 + 0x112c)
    void* i = *(arg1 + 0x112c)
    *(arg1 + 0xe2c) = 2
    
    for (; i != 0; i = *(i + 0x112c))
        *(i + 0xe2c) = 2
    
    return i
}
