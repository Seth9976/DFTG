// 函数名称: sub_4f78d0
// 虚拟地址: 0x4f78d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __fastcallsub_4f78d0(void* arg1)
{
    // 第一条实际指令: char* result
    char* result
    result.b = **(arg1 + 4)
    
    if (result.b != 0 && result.b != 0x5d && result.b != 0x2c && result.b != 0x24)
        result.b = 0
        return result
    
    result.b = 1
    return result
}
