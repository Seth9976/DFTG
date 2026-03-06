// 函数名称: ?write_character_without_count_update@?$stream_output_adapter@D@__crt_stdio_output@@QBE_ND@Z
// 虚拟地址: 0x57e75f
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __thiscall?write_character_without_count_update@?$stream_output_adapter@D@__crt_stdio_output@@QBE_ND@Z(int32_t* arg1, char arg2)
{
    // 第一条实际指令: uint32_t result
    uint32_t result
    
    if (((*(*arg1 + 0xc) u>> 0xc).b & 1) == 0 || *(*arg1 + 4) != 0)
        result.b = __fputc_nolock(arg2, *arg1) != 0xffffffff
    else
        result.b = 1
    
    return result
}
