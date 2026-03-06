// 函数名称: __wmkdir
// 虚拟地址: 0x5903fd
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t__wmkdir(PWSTR arg1)
{
    // 第一条实际指令: if (CreateDirectoryW(arg1, nullptr) != 0)
    if (CreateDirectoryW(arg1, nullptr) != 0)
        return 0
    
    ___acrt_errno_map_os_error(GetLastError())
    return 0xffffffff
}
