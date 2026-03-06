// 函数名称: __wremove
// 虚拟地址: 0x5903d5
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t__wremove(PWSTR arg1)
{
    // 第一条实际指令: if (DeleteFileW(arg1) != 0)
    if (DeleteFileW(arg1) != 0)
        return 0
    
    ___acrt_errno_map_os_error(GetLastError())
    return 0xffffffff
}
