// 函数名称: sub_42a2b0
// 虚拟地址: 0x42a2b0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_42a2b0()
{
    // 第一条实际指令: int32_t eax_1 = *(sub_437f10(*(data_6d00d8 + 0xbe4)) + 0x248)
    int32_t eax_1 = *(sub_437f10(*(data_6d00d8 + 0xbe4)) + 0x248)
    
    if (eax_1 == 0)
        int32_t result
        result.b = *(sub_41c5b0() + 0x1c) != 6
        return result
    
    if (eax_1 == 1)
        return 3
    
    if (eax_1 == 2)
        return 2
    
    sub_489550(eax_1 - 2, &data_5b2591, "Halt", 
        "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", 0x972, "GetUserOnlineState")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_489700() __tailcall
    
    breakpoint
}
