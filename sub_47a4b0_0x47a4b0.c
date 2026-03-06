// 函数名称: sub_47a4b0
// 虚拟地址: 0x47a4b0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_47a4b0(char arg1)
{
    // 第一条实际指令: void* result = data_6d00d0
    void* result = data_6d00d0
    int32_t ebx
    ebx.b = arg1
    
    if (result == 0)
        sub_489550(result, &data_5b2591, "gGameSettings.localSettings", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x24c, "GetLocalSettings")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    if (*(result + 0x30) != 0)
        result = sub_46a6a0()
        
        if (result == 0)
            data_632a60 = 1
            data_632a61 = ebx.b
    
    return result
}
