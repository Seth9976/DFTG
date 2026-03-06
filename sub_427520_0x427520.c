// 函数名称: sub_427520
// 虚拟地址: 0x427520
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_427520(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_8
    int32_t var_8
    char const* const ecx
    
    if (arg2 s< 5)
        if (arg2 s>= 0)
            return arg2 * 0x2c + 8 + arg1
        
        char const* const var_4_1 = "PlayerConfigFromSlot"
        var_8 = 0x2f3
        ecx = "slot >= 0"
    else
        char const* const var_4 = "PlayerConfigFromSlot"
        var_8 = 0x2f2
        ecx = "slot < GameSpecific_MaxPlayers()"
    
    int32_t eax
    sub_489550(eax, &data_5b2591, ecx, "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", 
        var_8, "PlayerConfigFromSlot")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_489700() __tailcall
    
    breakpoint
}
