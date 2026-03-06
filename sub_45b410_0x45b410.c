// 函数名称: sub_45b410
// 虚拟地址: 0x45b410
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_45b410(void* arg1)
{
    // 第一条实际指令: void* var_4 = arg1
    void* var_4 = arg1
    
    if (*arg1 != 0)
        int32_t eax
        sub_489550(eax, &data_5b2591, "gfx.type == ROLLGFX_TILE", 
            "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 0x8fb, "GetRollT")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t result = 0
    void* eax_1 = nullptr
    void* esi = data_62d6c4
    void* ecx_1 = data_62d6c8 * 0x8ac + esi
    
    while (true)
        if (eax_1 != 0)
            eax_1 += 0x8ac
        else
            eax_1 = esi
        
        if (eax_1 u>= ecx_1)
            break
        
        while ((*(eax_1 + 0x8a8) & 0xffff0000) == 0)
            eax_1 += 0x8ac
            
            if (eax_1 u>= ecx_1)
                return result
        
        if (*eax_1 == 1 && *(eax_1 + 0x10) == 4 && *(eax_1 + 0x1c) == *(arg1 + 0x8a8))
            result += 1
    
    return result
}
