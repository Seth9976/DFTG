// 函数名称: sub_46bc10
// 虚拟地址: 0x46bc10
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_46bc10(void* arg1)
{
    // 第一条实际指令: char eax
    char eax
    
    if (*(arg1 + 0x34) == 4)
        eax = sub_4584c0(3, *(arg1 + 0x3c))
    
    if (*(arg1 + 0x34) != 4 || eax == 0)
        if (*(arg1 + 0x34) == 5)
            eax = sub_4584c0(4, *(arg1 + 0x3c))
        
        if (*(arg1 + 0x34) != 5 || eax == 0)
            return 0
    
    return 1
}
