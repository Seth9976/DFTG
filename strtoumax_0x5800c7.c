// 函数名称: _strtoumax
// 虚拟地址: 0x5800c7
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")_strtoumax(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4, int32_t* arg5, char arg6)
{
    // 第一条实际指令: int32_t* var_8 = arg3
    int32_t* var_8 = arg3
    int32_t var_c = 0
    int32_t* var_18 = arg3
    __crt_strtox::make_c_string_character_source<char,std::nullptr>(&var_18, arg4, arg5)
    return __crt_strtox::parse_integer<uint64_t,class __crt_strtox::c_string_character_source<char> >(
        nullptr, var_18, arg3, arg6)
}
