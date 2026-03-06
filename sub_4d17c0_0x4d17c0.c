// 函数名称: sub_4d17c0
// 虚拟地址: 0x4d17c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_4d17c0(char* arg1)
{
    // 第一条实际指令: void* result
    void* result
    
    if (*arg1 != 0)
        void* eax = _strchr(arg1, 0x5c)
        
        if (eax == 0)
            result = _strchr(arg1, 0x2f)
        
        if (eax == 0 && result == 0)
            result.b = 0
            return result
        
        if (sub_4dfc80(arg1) != 0)
            result.b = 0
            return result
    
    result.b = 1
    return result
}
