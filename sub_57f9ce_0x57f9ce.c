// 函数名称: sub_57f9ce
// 虚拟地址: 0x57f9ce
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_57f9ce()
{
    // 第一条实际指令: __flushall()
    __flushall()
    __fcloseall()
    
    for (int32_t* i = nullptr; i != 0xc; i = &i[1])
        ___acrt_stdio_free_buffer_nolock(*(i + data_6cf758))
        DeleteCriticalSection(*(i + data_6cf758) + 0x20)
    
    int32_t result = __free_base(data_6cf758)
    data_6cf758 = 0
    return result
}
