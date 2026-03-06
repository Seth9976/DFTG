// 函数名称: ___acrt_uninitialize
// 虚拟地址: 0x58afae
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t___acrt_uninitialize(char arg1)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return ___acrt_execute_uninitializers(&data_5ab0b0, &data_5ab130)
    
    if (data_6cf758 != 0)
        __flushall()
    
    int32_t result
    result.b = 1
    return result
}
