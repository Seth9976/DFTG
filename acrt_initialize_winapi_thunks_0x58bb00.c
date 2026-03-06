// 函数名称: ___acrt_initialize_winapi_thunks
// 虚拟地址: 0x58bb00
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*___acrt_initialize_winapi_thunks()
{
    // 第一条实际指令: int32_t var_8 = 0x20
    int32_t var_8 = 0x20
    void* result = &data_6cfa68
    int32_t i = 0
    int32_t __security_cookie_1 = __security_cookie
    
    do
        i += 1
        *result = __security_cookie_1
        result += 4
    while (i != (sbb.d(&data_6cfaf0, &data_6cfaf0, false) & 0xffffffde) + 0x22)
    
    result.b = 1
    return result
}
