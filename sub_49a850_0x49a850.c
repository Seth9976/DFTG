// 函数名称: sub_49a850
// 虚拟地址: 0x49a850
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t (* __fastcallsub_49a850(uint32_t arg1))[0x4]
{
    // 第一条实际指令: int32_t eax = *(arg1 + 0x1190)
    int32_t eax = *(arg1 + 0x1190)
    int32_t var_c
    char const* const ecx
    
    if (eax s< 0x96)
        if (eax == *(arg1 + 0x1400))
            uint32_t (* result)[0x4] = sub_49a520(arg1)
            *(arg1 + (*(arg1 + 0x1190) << 2) + 0x1194) = result[0x141][0]
            *(arg1 + 0x1190) += 1
            *(arg1 + 0x1400) = *(arg1 + 0x1190)
            return result
        
        char const* const var_8_1 = "UI2AllocChild"
        var_c = 0xbf7
        ecx = "parent.numChildren == parent.numTotalChildren"
    else
        char const* const var_8 = "UI2AllocChild"
        var_c = 0xbf6
        ecx = "parent.numChildren < MAX_CHILDREN"
    
    sub_489550(eax, &data_5b2591, ecx, "d:\ax\trunk\ax2017\engine\ui2.cpp", var_c, "UI2AllocChild")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
