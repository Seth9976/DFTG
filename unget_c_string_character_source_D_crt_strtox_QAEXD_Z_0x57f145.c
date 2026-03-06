// 函数名称: ?unget@?$c_string_character_source@D@__crt_strtox@@QAEXD@Z
// 虚拟地址: 0x57f145
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __thiscall?unget@?$c_string_character_source@D@__crt_strtox@@QAEXD@Z(int32_t* arg1, char arg2)
{
    // 第一条实际指令: char* result = *arg1 - 1
    char* result = *arg1 - 1
    *arg1 = result
    arg1.b = arg2
    
    if (arg1.b == 0 || *result == arg1.b)
        return result
    
    *__errno() = 0x16
    return __invalid_parameter_noinfo()
}
