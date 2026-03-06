// 函数名称: sub_538d90
// 虚拟地址: 0x538d90
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __fastcallsub_538d90(void* arg1)
{
    // 第一条实际指令: int32_t* edx = *(arg1 + 4)
    int32_t* edx = *(arg1 + 4)
    
    if (edx != 0)
        (*(*edx + 8))(edx)
        *(arg1 + 4) = 0
}
