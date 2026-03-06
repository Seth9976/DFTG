// 函数名称: ___vcrt_uninitialize_winapi_thunks
// 虚拟地址: 0x57b3a4
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void___vcrt_uninitialize_winapi_thunks(char arg1)
{
    // 第一条实际指令: if (arg1 != 0)
    if (arg1 != 0)
        return 
    
    for (void* i = &data_6cf6ec; i != &data_6cf6f8; i += 4)
        if (*i != 0)
            if (*i != 0xffffffff)
                FreeLibrary(*i)
            
            *i = 0
}
