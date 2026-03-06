// 函数名称: sub_49e910
// 虚拟地址: 0x49e910
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __fastcallsub_49e910(void* arg1)
{
    // 第一条实际指令: int32_t i = *(arg1 + 0x1190)
    int32_t i = *(arg1 + 0x1190)
    
    if (i s>= *(arg1 + 0x1400))
        *(arg1 + 0x1400) = i
        return 
    
    void* esi_1 = arg1 + 0x1194 + (i << 2)
    
    do
        sub_49a5a0(esi_1)
        *esi_1 = 0
        i += 1
        esi_1 += 4
    while (i s< *(arg1 + 0x1400))
    
    *(arg1 + 0x1400) = *(arg1 + 0x1190)
}
