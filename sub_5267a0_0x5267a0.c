// 函数名称: sub_5267a0
// 虚拟地址: 0x5267a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_5267a0(void* arg1)
{
    // 第一条实际指令: char* edx = *(arg1 + 8)
    char* edx = *(arg1 + 8)
    
    while (true)
        char result = *edx
        
        if (result != 0x20 && result != 9 && result != 0xd && result != 0xa)
            return result
        
        if (result == 0xa)
            *(arg1 + 0x118) += 1
        
        edx = &edx[1]
        *(arg1 + 8) = edx
}
