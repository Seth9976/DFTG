// 函数名称: sub_49fc30
// 虚拟地址: 0x49fc30
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_49fc30(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t* var_8 = arg3
    int32_t* var_8 = arg3
    int32_t var_1c
    int32_t eax_5
    char* ecx_4
    char* const edx_10
    
    if (arg2 != 0)
        int32_t ecx_5 = arg3[1]
        int32_t ebx_1 = *arg3
        
        if (arg5 s< ecx_5 * ebx_1)
            return sub_49fc30(arg4, arg5)
        
        eax_5 = arg4
        
        if (eax_5 == 0)
            return arg5 - (ecx_5 - 1) * ebx_1
        
        if (eax_5 == 1)
            return arg5 - (ecx_5 - 1) * ebx_1
        
        char const* const var_18_2 = "TableIndextToSlot"
        var_1c = 0x14a5
        edx_10 = "unexpected table alignment"
        ecx_4 = "HaltMsg"
    else
        int32_t esi = *arg3
        
        if (esi == 0)
            return 0
        
        int32_t ebx = mods.dp.d(sx.q(arg5), esi)
        eax_5 = divs.dp.d(sx.q(arg5), esi)
        int32_t edx_4 = arg3[1]
        int32_t ecx = ebx
        
        if (eax_5 s>= edx_4)
            ecx = (eax_5 - edx_4) * esi + ebx
        
        if (arg4 u> 3)
            char const* const var_18 = "TableIndextToSlot"
            var_1c = 0x1497
            edx_10 = &data_5b2591
            ecx_4 = "Halt"
        else
            switch (arg4)
                case 0
                    return ecx
                case 1
                    return ecx
                case 2
                    if (eax_5 s< esi)
                        return eax_5
                    
                    return esi - 1
                case 3
                    return esi - ecx - 1
    
    sub_489550(eax_5, edx_10, ecx_4, "d:\ax\trunk\ax2017\engine\ui2.cpp", var_1c, "TableIndextToSlot")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
