// 函数名称: sub_4d05c0
// 虚拟地址: 0x4d05c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_4d05c0(void* arg1, char* arg2)
{
    // 第一条实际指令: void* result = arg1
    void* result = arg1
    char* i = *(result + 4)
    
    while (i != 0)
        if (__stricmp(i, arg2) == 0)
            return result
        
        i = *(result + 0xc)
        result += 8
    
    return 0
}
