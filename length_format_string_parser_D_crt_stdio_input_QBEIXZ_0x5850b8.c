// 函数名称: ?length@?$format_string_parser@D@__crt_stdio_input@@QBEIXZ
// 虚拟地址: 0x5850b8
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcall?length@?$format_string_parser@D@__crt_stdio_input@@QBEIXZ(void* arg1)
{
    // 第一条实际指令: int32_t eax_4 = *(arg1 + 0x28)
    int32_t eax_4 = *(arg1 + 0x28)
    
    if (eax_4 s>= 0)
        int32_t eax_2
        
        if (eax_4 s<= 1)
            eax_2.b = *(arg1 + 0x24) != 0
            return eax_2 + 1
        
        if (eax_4 s<= 6)
            return __crt_stdio_input::to_integer_length(*(arg1 + 0x20))
        
        if (eax_4 == 7)
            return __crt_stdio_input::to_floating_point_length(*(arg1 + 0x20))
        
        if (eax_4 == 8)
            eax_2.b = *(arg1 + 0x24) != 0
            return eax_2 + 1
        
        if (eax_4 == 9)
            return __crt_stdio_input::to_integer_length(*(arg1 + 0x20))
    
    return 0
}
