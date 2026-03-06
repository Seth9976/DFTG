// 函数名称: ___vcrt_uninitialize_ptd
// 虚拟地址: 0x57a177
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

BOOL___vcrt_uninitialize_ptd()
{
    // 第一条实际指令: BOOL result = data_61f0a0
    BOOL result = data_61f0a0
    
    if (result != 0xffffffff)
        ___vcrt_FlsFree(result)
        data_61f0a0 = 0xffffffff
    
    result.b = 1
    return result
}
