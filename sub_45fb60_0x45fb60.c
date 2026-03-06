// 函数名称: sub_45fb60
// 虚拟地址: 0x45fb60
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_45fb60(int32_t* arg1)
{
    // 第一条实际指令: if (*arg1 != 0)
    if (*arg1 != 0)
        int32_t eax
        sub_489550(eax, &data_5b2591, "tile.type == ROLLGFX_TILE", 
            "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 0x38f5, "TileGetColorWorld")
        
        if (IsDebuggerPresent() != 1)
            noreturn sub_489700() __tailcall
        
        breakpoint
    
    int32_t* eax_2 = arg1[0xc]
    int32_t ecx
    
    if (*eax_2 != 1)
        ecx = arg1[0xe]
    
    int32_t result
    
    if (*eax_2 == 1 || ecx == 2 || ecx == 4)
        result = eax_2[6]
    else
        result = eax_2[0xc]
    
    if (result == 0)
        return 7
    
    if (result == 1)
        return 7
    
    return result
}
