// 函数名称: ?validate@?$format_string_parser@D@__crt_stdio_input@@QBE_NXZ
// 虚拟地址: 0x585d1c
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcall?validate@?$format_string_parser@D@__crt_stdio_input@@QBE_NXZ(void* arg1)
{
    // 第一条实际指令: if (*(arg1 + 8) != 0)
    if (*(arg1 + 8) != 0)
        int32_t eax
        eax.b = 1
        return eax
    
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    int32_t eax_2
    eax_2.b = 0
    return eax_2
}
