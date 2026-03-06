// 函数名称: sub_4d1830
// 虚拟地址: 0x4d1830
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_4d1830(char* arg1)
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
        
        int32_t xmm0[0x4]
        int32_t xmm0_1[0x4]
        result, xmm0_1 = _strstr(xmm0, arg1, 0x5f5fe0)
        
        if (result != 0)
            result.b = 0
            return result
        
        if (_strstr(xmm0_1, arg1, 0x5f5fe4) != 0)
            result.b = 0
            return result
        
        if (sub_4d1800(arg1).b == 0 && sub_4dfc80(arg1) == 0)
            result.b = 0
            return result
    
    result.b = 1
    return result
}
