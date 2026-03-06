// 函数名称: ?find_next_state@?$output_processor@DV?$console_output_adapter@D@__crt_stdio_output@@V?$format_validation_base@DV?$console_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@ABE?AW4state@2@DW432@@Z
// 虚拟地址: 0x57c474
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __stdcall?find_next_state@?$output_processor@DV?$console_output_adapter@D@__crt_stdio_output@@V?$format_validation_base@DV?$console_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@ABE?AW4state@2@DW432@@Z(char arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    ecx.b = arg1
    int32_t var_8_1 = 0x5a9b80
    int32_t eax_3
    
    if (ecx.b - 0x20 u> 0x5a)
        eax_3 = 0
    else
        eax_3 = zx.d(*(sx.d(ecx.b) + 0x5a9b60)) & 0xf
    
    return zx.d(*(eax_3 * 9 + arg2 + 0x5a9b80)) u>> 4
}
