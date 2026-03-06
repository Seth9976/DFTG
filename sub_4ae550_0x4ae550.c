// 函数名称: sub_4ae550
// 虚拟地址: 0x4ae550
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_4ae550()
{
    // 第一条实际指令: void var_1c
    void var_1c
    int32_t ecx
    int32_t edx
    uint32_t eax_3 = _mm_bsrli_si128(*sub_4add30(&var_1c, edx, ecx, &var_1c), 4) - 0x66
    
    if (eax_3 u<= 0x89)
        eax_3 = zx.d(lookup_table_4ae640[eax_3])
        
        switch (eax_3)
            case 0
                return 0x5f3e40
            case 1
                return &data_5d24e0
            case 2
                return &data_5d2928
            case 3
                return 0x5d3060
            case 4
                return 0x5d2610
            case 5
                return 0x5d2668
            case 6
                return 0x5d2710
            case 7
                return 0x5d26e8
            case 8
                return 0x5d2550
            case 9
                return 0x5d2568
    
    sub_489550(eax_3, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\ui2.cpp", 0x2aab, 
        "FieldGetSymbols")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
