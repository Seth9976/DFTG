// 函数名称: ?get@?$string_input_adapter@D@__crt_stdio_input@@QAEHXZ
// 虚拟地址: 0x584fdc
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __fastcall?get@?$string_input_adapter@D@__crt_stdio_input@@QAEHXZ(void* arg1)
{
    // 第一条实际指令: char* ecx = *(arg1 + 8)
    char* ecx = *(arg1 + 8)
    
    if (ecx == *(arg1 + 4))
        return 0xffffffff
    
    uint32_t result = zx.d(*ecx)
    *(arg1 + 8) = &ecx[1]
    return result
}
