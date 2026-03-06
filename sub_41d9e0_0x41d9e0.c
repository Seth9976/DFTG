// 函数名称: sub_41d9e0
// 虚拟地址: 0x41d9e0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_41d9e0(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t result = ___stdio_common_vsprintf(data_6cfe38 | 1, data_6cfe3c, arg3, arg2, arg4, nullptr, arg5)
    int32_t result =
        ___stdio_common_vsprintf(data_6cfe38 | 1, data_6cfe3c, arg3, arg2, arg4, nullptr, arg5)
    
    if (result s< 0)
        return 0xffffffff
    
    return result
}
