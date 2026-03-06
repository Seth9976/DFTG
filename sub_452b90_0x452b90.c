// 函数名称: sub_452b90
// 虚拟地址: 0x452b90
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_452b90(int32_t arg1)
{
    // 第一条实际指令: int32_t var_c
    int32_t var_c
    int32_t eax
    char const* const ecx
    
    if (arg1 s>= 0)
        eax = sub_425e70()
        
        if (arg1 s< eax)
            return &(&data_62d6e0)[arg1 * 0x3ec]
        
        char const* const var_8_1 = "RollPlayerGui"
        var_c = 0x212
        ecx = "who < RollNumPlayers()"
    else
        char const* const var_8 = "RollPlayerGui"
        var_c = 0x211
        ecx = "who >= 0"
    
    sub_489550(eax, &data_5b2591, ecx, "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", var_c, 
        "RollPlayerGui")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
