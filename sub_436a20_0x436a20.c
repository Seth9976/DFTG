// 函数名称: sub_436a20
// 虚拟地址: 0x436a20
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_436a20(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_8
    int32_t var_8
    int32_t eax
    char const* const ecx
    
    if (arg2 s>= 0)
        eax = *(arg1 + 0xec)
        
        if (eax s<= 5)
            if (arg2 s< eax)
                return arg1 + ((arg2 + ((arg2 + 0x11) << 1)) << 3)
            
            char const* const var_4_2 = "LogGet"
            var_8 = 0x3b
            ecx = "who < save.setup.numPlayers"
        else
            char const* const var_4_1 = "LogGet"
            var_8 = 0x3a
            ecx = "save.setup.numPlayers <= MAX_PLAYERS"
    else
        char const* const var_4 = "LogGet"
        var_8 = 0x39
        ecx = "who >= 0"
    
    sub_489550(eax, &data_5b2591, ecx, "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamesave.cpp", 
        var_8, "LogGet")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_489700() __tailcall
    
    breakpoint
}
