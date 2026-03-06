// 函数名称: ?find_next_state@?$output_processor@DV?$console_output_adapter@D@__crt_stdio_output@@V?$standard_base@DV?$console_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@ABE?AW4state@2@DW432@@Z
// 虚拟地址: 0x57c435
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __stdcall?find_next_state@?$output_processor@DV?$console_output_adapter@D@__crt_stdio_output@@V?$standard_base@DV?$console_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@ABE?AW4state@2@DW432@@Z(char arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    ecx.b = arg1
    int32_t var_8_1 = 0x5a9b20
    int32_t ecx_2
    
    if (ecx.b - 0x20 u> 0x5a)
        ecx_2 = 0
    else
        ecx_2 = zx.d(data_5a9ae4[0x1c][sx.d(ecx.b)]) & 0xf
    
    return zx.d(*(arg2 + (ecx_2 << 3) + 0x5a9b20)) u>> 4
}
