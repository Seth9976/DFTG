// 函数名称: sub_45c1c0
// 虚拟地址: 0x45c1c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_45c1c0(void* arg1, int32_t arg2, int32_t arg3, char* arg4, int32_t* arg5, char* arg6, int32_t* arg7, int32_t arg8, int32_t arg9, int32_t arg10)
{
    // 第一条实际指令: void* edi = arg2 * 0x33c
    void* edi = arg2 * 0x33c
    *(edi + 0xa7564c) = arg3
    int32_t eax_4
    
    if (arg5 == 0)
        eax_4 = 0
    else
        sub_579300(edi + 0xa75650, arg4, *arg5 << 2)
        eax_4 = *arg5
    
    *(edi + 0xa757e0) = eax_4
    int32_t eax_8
    
    if (arg7 == 0)
        eax_8 = 0
    else
        sub_579300(edi + 0xa757e4, arg6, *arg7 << 2)
        eax_8 = *arg7
    
    *(edi + 0xa75974) = eax_8
    int32_t ecx = arg2 * 0x1bc
    *(edi + 0xa75978) = arg8
    *(edi + 0xa7597c) = arg9
    *(edi + 0xa75980) = arg10
    int32_t result = *(ecx + arg1 + 0x1c4)
    int32_t var_18_3
    char const* const ecx_1
    
    if (result s>= *(ecx + arg1 + 0x1c0))
        result = *(arg1 + 4)
        
        if (*((arg2 << 3) + &data_a75620) != result || *((arg2 << 3) + &data_a75620:4) == 0)
            *((arg2 << 3) + &data_a75620) = result
            *((arg2 << 3) + &data_a75620:4) = 1
            return result
        
        char const* const var_14_4 = "player_make_choice_roll"
        var_18_3 = 0x28c7
        ecx_1 = "thread.queuedActiveTurn[who].gameId != g->game_id || thread.queuedActiveTurn[who].type "
        "== WAIT_NONE"
    else
        char const* const var_14_3 = "player_make_choice_roll"
        var_18_3 = 0x28bf
        ecx_1 = "Halt"
    
    sub_489550(result, &data_5b2591, ecx_1, "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 
        var_18_3, "player_make_choice_roll")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
