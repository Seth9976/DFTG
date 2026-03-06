// 函数名称: sub_439440
// 虚拟地址: 0x439440
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_439440()
{
    // 第一条实际指令: void* eax = data_6d00d0
    void* eax = data_6d00d0
    
    if (eax != 0)
        int32_t result = *(eax + 0x20)
        
        if (result == 0)
            return 2
        
        return result
    
    sub_489550(eax, &data_5b2591, "gGameSettings.localSettings", 
        "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x24c, "GetLocalSettings")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
