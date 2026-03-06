// 函数名称: sub_425d00
// 虚拟地址: 0x425d00
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_425d00(int32_t* arg1)
{
    // 第一条实际指令: int32_t* var_4 = arg1
    int32_t* var_4 = arg1
    
    if (*arg1 == 2)
        return sub_4218b0(arg1[1])
    
    int32_t eax
    sub_489550(eax, &data_5b2591, "handle.gameType == GAME_NETWORK", 
        "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameclient.cpp", 0xb28, "GetNetworkGame")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
