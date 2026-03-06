// 函数名称: ___scrt_uninitialize_crt
// 虚拟地址: 0x577566
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t___scrt_uninitialize_crt(int32_t arg1, char arg2)
{
    // 第一条实际指令: if (data_6cf320 == 0 || arg2 == 0)
    if (data_6cf320 == 0 || arg2 == 0)
        ___acrt_uninitialize(arg1.b)
        ___vcrt_uninitialize(arg1.b)
    
    int32_t result
    result.b = 1
    return result
}
