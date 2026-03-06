// 函数名称: ___acrt_errno_map_os_error
// 虚拟地址: 0x589dce
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*___acrt_errno_map_os_error(int32_t arg1)
{
    // 第一条实际指令: *___doserrno() = arg1
    *___doserrno() = arg1
    int32_t eax_1 = ___acrt_errno_from_os_error(arg1)
    void* result = __errno()
    *result = eax_1
    return result
}
