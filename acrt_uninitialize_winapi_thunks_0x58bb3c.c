// 函数名称: ___acrt_uninitialize_winapi_thunks
// 虚拟地址: 0x58bb3c
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

BOOL___acrt_uninitialize_winapi_thunks(char arg1)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        for (void* i = &data_6cfa18; i != &data_6cfa68; i += 4)
            if (*i != 0)
                if (*i != 0xffffffff)
                    FreeLibrary(*i)
                
                *i = 0
    
    BOOL result
    result.b = 1
    return result
}
