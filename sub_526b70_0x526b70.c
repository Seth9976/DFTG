// 函数名称: sub_526b70
// 虚拟地址: 0x526b70
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __fastcallsub_526b70(void* arg1, char* arg2)
{
    // 第一条实际指令: void* var_4 = arg1
    void* var_4 = arg1
    char* result
    
    if (*(arg1 + 4) == 3)
        result = sub_526a60(arg1)
    
    if ((*(arg1 + 4) != 3 || result.b != 0) && *(arg1 + 4) == 1
            && __strnicmp(arg2, *(arg1 + 0xc), *(arg1 + 0x10)) == 0 && sub_526a60(arg1).b != 0)
        result.b = 1
        return result
    
    result.b = 0
    return result
}
