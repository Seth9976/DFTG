// 函数名称: ___dcrt_write_console
// 虚拟地址: 0x597783
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

BOOL___dcrt_write_console(void* arg1, uint32_t arg2, uint32_t* arg3)
{
    // 第一条实际指令: BOOL lpReserved = WriteConsoleW(data_61f9a0, arg1, arg2, arg3, nullptr)
    BOOL lpReserved = WriteConsoleW(data_61f9a0, arg1, arg2, arg3, nullptr)
    
    if (lpReserved == 0 && GetLastError() == ERROR_INVALID_HANDLE)
        ___termconout()
        ___initconout()
        return WriteConsoleW(data_61f9a0, arg1, arg2, arg3, lpReserved)
    
    return lpReserved
}
