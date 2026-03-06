// 函数名称: ??$make_c_string_character_source@D$$T@__crt_strtox@@YA?AV?$c_string_character_source@D@0@QBD$$T@Z
// 虚拟地址: 0x580080
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t*??$make_c_string_character_source@D$$T@__crt_strtox@@YA?AV?$c_string_character_source@D@0@QBD$$T@Z(int32_t* arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: *arg1 = arg2
    *arg1 = arg2
    arg1[1] = arg3
    
    if (arg3 != 0)
        *arg3 = arg2
    
    return arg1
}
