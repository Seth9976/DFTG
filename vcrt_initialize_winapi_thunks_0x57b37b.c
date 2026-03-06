// 函数名称: ___vcrt_initialize_winapi_thunks
// 虚拟地址: 0x57b37b
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*___vcrt_initialize_winapi_thunks()
{
    // 第一条实际指令: void* result = &data_6cf6f8
    void* result = &data_6cf6f8
    int32_t i = 0
    uint32_t __security_cookie_1 = __security_cookie
    
    do
        i += 1
        *result = __security_cookie_1
        result += 4
    while (i != (sbb.d(0x6cf70c, 0x6cf70c, false) & 0xfffffffb) + 5)
    
    return result
}
