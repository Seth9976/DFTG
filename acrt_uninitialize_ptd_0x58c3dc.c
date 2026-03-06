// 函数名称: ___acrt_uninitialize_ptd
// 虚拟地址: 0x58c3dc
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

BOOL___acrt_uninitialize_ptd()
{
    // 第一条实际指令: BOOL result = data_61f1d4
    BOOL result = data_61f1d4
    
    if (result != 0xffffffff)
        ___acrt_FlsFree@4(result)
        data_61f1d4 = 0xffffffff
    
    result.b = 1
    return result
}
