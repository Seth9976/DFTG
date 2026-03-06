// 函数名称: ?validate_and_update_state_at_end_of_format_string@?$format_validation_base@_WV?$stream_output_adapter@_W@__crt_stdio_output@@@__crt_stdio_output@@IBE_NXZ
// 虚拟地址: 0x57e5a1
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcall?validate_and_update_state_at_end_of_format_string@?$format_validation_base@_WV?$stream_output_adapter@_W@__crt_stdio_output@@@__crt_stdio_output@@IBE_NXZ(void* arg1)
{
    // 第一条实际指令: if (*(arg1 + 0x1c) == 0 || *(arg1 + 0x1c) == 7)
    if (*(arg1 + 0x1c) == 0 || *(arg1 + 0x1c) == 7)
        int32_t eax
        eax.b = 1
        return eax
    
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    int32_t eax_2
    eax_2.b = 0
    return eax_2
}
