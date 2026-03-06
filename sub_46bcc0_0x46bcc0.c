// 函数名称: sub_46bcc0
// 虚拟地址: 0x46bcc0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_46bcc0(int32_t* arg1)
{
    // 第一条实际指令: int32_t* var_4 = arg1
    int32_t* var_4 = arg1
    char const* const var_10
    int32_t var_c
    char const* const var_8
    void* result
    char* ecx
    
    if (*arg1 == 1)
        int32_t ecx_1 = arg1[6]
        
        if (ecx_1 != 0xffffffff)
            result = data_6cfe4c
            
            if (result != 0)
                result.b = ecx_1 != *(result + 0xa68)
                return result
            
            var_8 = "GetClient"
            var_c = 0x75
            var_10 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
            ecx = "gClient"
        else
            var_8 = "IsOpponentDie"
            var_c = 0x5a73
            var_10 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
            ecx = "gfx.die.owner != PLAYER_NONE"
    else
        var_8 = "IsOpponentDie"
        var_c = 0x5a72
        var_10 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
        ecx = "gfx.type == ROLLGFX_DIE"
    
    sub_489550(result, &data_5b2591, ecx, var_10, var_c, var_8)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
