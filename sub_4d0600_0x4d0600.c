// 函数名称: sub_4d0600
// 虚拟地址: 0x4d0600
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4d0600(void* arg1, int32_t arg2)
{
    // 第一条实际指令: while (*(arg1 + 4) != 0)
    while (*(arg1 + 4) != 0)
        if (*arg1 == arg2)
            return *(arg1 + 4)
        
        arg1 += 8
    
    return &data_5b2591
}
