// 函数名称: ??1formatting_buffer@__crt_stdio_output@@QAE@XZ
// 虚拟地址: 0x57c28a
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcall??1formatting_buffer@__crt_stdio_output@@QAE@XZ(void* arg1)
{
    // 第一条实际指令: int32_t result = __free_base(*(arg1 + 0x404))
    int32_t result = __free_base(*(arg1 + 0x404))
    *(arg1 + 0x404) = 0
    return result
}
