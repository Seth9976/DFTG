// 函数名称: sub_4ce910
// 虚拟地址: 0x4ce910
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __convention("regparm")sub_4ce910(int32_t arg1, int32_t* arg2, int32_t* arg3, uint32_t arg4)
{
    // 第一条实际指令: uint32_t eax = sub_4ce0a0(arg2[3])
    uint32_t eax = sub_4ce0a0(arg2[3])
    
    if (eax.b != 0)
        void* edx = arg2[3]
        int32_t ecx_1 = *(edx + 0x10)
        uint32_t eax_1 = ecx_1 - 5
        int32_t var_18
        char* ecx_2
        
        if (eax_1 u> 0xc)
        label_4ce9e6:
            
            if (ecx_1 s> 0 && ecx_1 s< 0x12)
                char const* const var_14_7 = "DefinitionDeleteField"
                var_18 = 0x21f
                ecx_2 = "!DefTypeIsBuiltIn(pField->pDefMap)"
                goto label_4cea2e
            
            uint32_t eax_10 = arg4
            
            if (eax_10 == 0 && (ecx_1 == 0x13 || ecx_1 == 0x14))
                eax_10 = arg2[7]
            
            return sub_4cea80(eax_10, edx, *arg2 + arg3, eax_10)
        
        eax_1 = zx.d(lookup_table_4cea64[eax_1])
        
        switch (eax_1)
            case 0
                uint32_t* esi = arg2[4]
                uint32_t eax_2 = sub_4ce880(eax_1, arg2, arg3, arg4, *(esi + arg3))
                *(esi + arg3) = 0
                return eax_2
            case 1
                return sub_4ce800(eax_1, arg2[7], *arg2 + arg3, arg2, arg4)
            case 2
                return sub_4ce720(*arg2 + arg3, arg2[9]) __tailcall
            case 3
                eax = arg2[4]
                int32_t edx_6 = *(arg3 + eax)
                
                if (edx_6 != 0xffffffff)
                    int32_t* eax_8 = *arg2 + arg3
                    return sub_4f0880(eax_8, edx_6, arg4, eax_8)
            case 4
                int32_t eax_5 = *arg2
                uint32_t ecx_9
                ecx_9.b = *(arg3 + eax_5) != 0
                return sub_4ce880(eax_5, arg2, arg3, arg4, ecx_9)
            case 5
                char const* const var_14_1 = "DefinitionDeleteField"
                var_18 = 0x1f4
                ecx_2 = "Halt"
            label_4cea2e:
                sub_489550(eax_1, &data_5b2591, ecx_2, "d:\ax\trunk\ax2017\engine\definition.cpp", 
                    var_18, "DefinitionDeleteField")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            case 6
                goto label_4ce9e6
    
    return eax
}
