// 函数名称: sub_4d1800
// 虚拟地址: 0x4d1800
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_4d1800(void* arg1)
{
    // 第一条实际指令: void* result = _strrchr(arg1, 0x2e)
    void* result = _strrchr(arg1, 0x2e)
    
    if (result != 0 && __stricmp(result, ".xpack") == 0)
        result.b = 1
        return result
    
    result.b = 0
    return result
}
