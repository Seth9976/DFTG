// 函数名称: sub_477e70
// 虚拟地址: 0x477e70
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_477e70(int32_t* arg1)
{
    // 第一条实际指令: int32_t* var_4 = arg1
    int32_t* var_4 = arg1
    int32_t edx = arg1[1]
    int32_t result = *arg1 + 1
    *arg1 = result
    
    if (edx s> 9)
        arg1[1] = 2
        edx = 2
    
    if (result s> 9)
        *arg1 = 2
        result = 2
    
    if (result != edx)
        arg1[7] = 1
        arg1[2] = 1
        arg1[4].b = 1
        return result
    
    char const* const var_10
    int32_t var_c
    char const* const var_8
    char* ecx
    
    if (result s<= 9)
        if (arg1[6].b == 0)
            goto label_477ed8
        
        int32_t* edx_1 = data_6cfe4c
        
        if (edx_1 != 0)
            data_709198.d = *edx_1
            result = edx_1[1]
            data_709198:4 = result
        label_477ed8:
            arg1[7] = 0
            arg1[4].b = 1
            return result
        
        var_8 = "GetClient"
        var_c = 0x75
        var_10 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx = "gClient"
    else
        var_8 = "OpponentRevealTryAdvanceTurn"
        var_c = 0x74bf
        var_10 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
        ecx = "state.turn <= TURN_MANAGE"
    
    sub_489550(result, &data_5b2591, ecx, var_10, var_c, var_8)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
