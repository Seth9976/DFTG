// 函数名称: sub_438600
// 虚拟地址: 0x438600
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_438600()
{
    // 第一条实际指令: int32_t result = data_6d00d0
    int32_t result = data_6d00d0
    
    if (result != 0)
        return result
    
    sub_489550(result, &data_5b2591, "gGameSettings.localSettings", 
        "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x24c, "GetLocalSettings")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_489700() __tailcall
    
    breakpoint
}
