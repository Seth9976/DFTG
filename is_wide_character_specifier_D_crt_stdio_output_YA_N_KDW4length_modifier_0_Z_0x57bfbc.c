// 函数名称: ??$is_wide_character_specifier@D@__crt_stdio_output@@YA_N_KDW4length_modifier@0@@Z
// 虚拟地址: 0x57bfbc
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t??$is_wide_character_specifier@D@__crt_stdio_output@@YA_N_KDW4length_modifier@0@@Z(char arg1, int32_t arg2) __pure
{
    // 第一条实际指令: int32_t result
    int32_t result
    
    if (arg2 != 2)
        if (arg2 == 3 || arg2 == 0xc)
            result.b = 1
            return result
        
        if (arg2 != 0xd)
            result.b = arg1
            
            if (result.b != 0x63 && result.b != 0x73)
                result.b = 1
                return result
    
    result.b = 0
    return result
}
