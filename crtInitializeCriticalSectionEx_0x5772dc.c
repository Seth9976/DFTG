// 函数名称: ___crtInitializeCriticalSectionEx
// 虚拟地址: 0x5772dc
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t___crtInitializeCriticalSectionEx(CRITICAL_SECTION* arg1, uint32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t esi_1 = data_6cf288 ^ __security_cookie
    int32_t esi_1 = data_6cf288 ^ __security_cookie
    
    if (esi_1 != 0)
        return esi_1(arg1, arg2, arg3)
    
    InitializeCriticalSectionAndSpinCount(arg1, arg2)
    return 1
}
