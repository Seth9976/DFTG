// 函数名称: ?scan_optional_literal_character_trail_bytes_tchar@?$format_string_parser@D@__crt_stdio_input@@AAE_ND@Z
// 虚拟地址: 0x585a18
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __fastcall?scan_optional_literal_character_trail_bytes_tchar@?$format_string_parser@D@__crt_stdio_input@@AAE_ND@Z(int32_t* arg1)
{
    // 第一条实际指令: char* result
    char* result
    
    if (*(____mb_cur_max_func(arg1) + (zx.d(arg1[5].b) << 1)) s>= 0)
        result.b = 1
    else
        result = arg1[2]
        char ecx = *result
        
        if (ecx != 0)
            *(arg1 + 0x15) = ecx
            arg1[2] = &result[1]
            result.b = 1
        else
            arg1[4] = 0
            result.b = 0
            arg1[5].w = 0
            *(arg1 + 0x16) = 0
            arg1[6] = 0
            arg1[7] = 0
            arg1[8] = 0
            arg1[9].b = 0
            arg1[0xa] = 0
            arg1[3] = 0x2a
    
    return result
}
