// 函数名称: sub_426d50
// 虚拟地址: 0x426d50
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __fastcallsub_426d50(uint32_t arg1)
{
    // 第一条实际指令: uint32_t var_4 = arg1
    uint32_t var_4 = arg1
    
    if (arg1 s< 0)
        int32_t eax
        sub_489550(eax, &data_5b2591, "(n & 0x80000000) == 0", 
            "d:\ax\trunk\ax2017\engine\mathfunctions.cpp", 0xba, "CeilingPowerOf2")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    if (arg1 u>= 1 && (arg1 == 1 || (arg1 & (arg1 - 1)) == 0))
        return arg1
    
    if (arg1 == 0)
        return 0
    
    int32_t eax_4 = 0
    
    while (arg1 u> 1)
        arg1 u>>= 1
        eax_4 += 1
    
    return (1 << eax_4.b) * 2
}
