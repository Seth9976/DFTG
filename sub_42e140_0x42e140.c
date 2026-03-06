// 函数名称: sub_42e140
// 虚拟地址: 0x42e140
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_42e140(void* arg1)
{
    // 第一条实际指令: sub_425aa0(arg1)
    sub_425aa0(arg1)
    void* result = data_6cfe4c
    char const* const var_10
    int32_t var_c
    char const* const var_8
    char* ecx
    
    if (result != 0)
        if (*(result + 0x834) != 2 || *(result + 0x838) != arg1)
            return sub_4274a0(arg1) __tailcall
        
        if (*(result + 0x828) == 0)
            *(result + 0x828) = arg1
            return result
        
        var_8 = "QueueRemoveMultiplayerGame"
        var_c = 0xeb6
        var_10 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamedialogs.cpp"
        ecx = "c.queueRemoveMultiplayerGame == GAMEIDX_NONE"
    else
        var_8 = "GetClient"
        var_c = 0x75
        var_10 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx = "gClient"
    
    sub_489550(result, &data_5b2591, ecx, var_10, var_c, var_8)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
