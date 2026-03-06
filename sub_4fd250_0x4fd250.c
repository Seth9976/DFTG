// 函数名称: sub_4fd250
// 虚拟地址: 0x4fd250
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* const __fastcallsub_4fd250(int32_t arg1)
{
    // 第一条实际指令: int32_t var_4 = arg1
    int32_t var_4 = arg1
    void* eax = data_114e818
    
    if (eax == 0)
        sub_489550(eax, &data_5b2591, "gpGameData", "d:\ax\trunk\ax2017\engine\game.h", 0x45, 
            "GetGameData")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    void* edx = *(eax + 0x10)
    
    if (arg1 != 0)
        uint32_t eax_2 = zx.d(arg1.w)
        
        if (eax_2 u< *(edx + 4))
            void* const result = eax_2 * 0x7c + *edx
            
            if (*(result + 0x78) != arg1)
                return nullptr
            
            return result
    
    return 0
}
