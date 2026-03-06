// 函数名称: sub_459a20
// 虚拟地址: 0x459a20
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_459a20()
{
    // 第一条实际指令: if (sub_46a6a0() != 0)
    if (sub_46a6a0() != 0)
        return 0
    
    void* eax_2 = data_6d00d0
    
    if (eax_2 != 0)
        return *(eax_2 + 8)
    
    sub_489550(eax_2, &data_5b2591, "gGameSettings.localSettings", 
        "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x24c, "GetLocalSettings")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
