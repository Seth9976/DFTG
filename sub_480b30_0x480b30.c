// 函数名称: sub_480b30
// 虚拟地址: 0x480b30
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_480b30(int32_t arg1)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return 0x74
    
    if (arg1 == 1)
        return 0x75
    
    if (arg1 == 2)
        return 0x76
    
    int32_t eax
    sub_489550(eax, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 0x8c9a, 
        "GameSpecific_AIAvatar")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_489700() __tailcall
    
    breakpoint
}
