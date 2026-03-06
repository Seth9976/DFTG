// 函数名称: sub_4ada50
// 虚拟地址: 0x4ada50
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_4ada50(void* arg1)
{
    // 第一条实际指令: void* i = *(arg1 + 0x112c)
    void* i = *(arg1 + 0x112c)
    *(arg1 + 0xe24) = 0
    *(arg1 + 0xe28) = 0
    *(arg1 + 0x1080) = 0x3f800000
    
    for (; i != 0; i = *(i + 0x112c))
        *(i + 0xe24) = 0
        *(i + 0xe28) = 0
        *(i + 0x1080) = 0x3f800000
    
    return i
}
