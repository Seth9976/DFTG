// 函数名称: sub_4ce210
// 虚拟地址: 0x4ce210
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_4ce210(int32_t arg1, int32_t* arg2, void* arg3, void* arg4)
{
    // 第一条实际指令: uint32_t eax_1 = *(arg3 + 0x10) - 1
    uint32_t eax_1 = *(arg3 + 0x10) - 1
    int32_t var_10
    
    if (eax_1 u> 0xf)
    label_4ce297:
        char const* const var_c_1 = "DefinitionFillShallowFieldWithDefaults"
        var_10 = 0xaf
    label_4ce2b0:
        sub_489550(eax_1, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\definition.cpp", var_10, 
            "DefinitionFillShallowFieldWithDefaults")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    eax_1 = zx.d(lookup_table_4ce2ec[eax_1])
    
    switch (eax_1)
        case 0
            int32_t eax_3 = *(arg4 + 0x24)
            *arg2 = eax_3
            return eax_3
        case 1
            void* eax_4
            eax_4.w = *(arg4 + 0x24)
            *arg2 = eax_4.w
            return eax_4
        case 2
            void* eax_7
            eax_7.b = *(arg4 + 0x24)
            *arg2 = eax_7.b
            return eax_7
        case 3
            void* eax_8
            eax_8.b = *(arg4 + 0x24) != 0
            *arg2 = eax_8.b
            return eax_8
        case 4
            int32_t eax_6 = *(arg4 + 0x24)
            arg2[1] = 0
            *arg2 = eax_6
            return eax_6
        case 5
            int32_t eax_9 = sub_4ce1e0(*(arg4 + 0x24), *(arg4 + 0x20))
            *arg2 = eax_9
            return eax_9
        case 6
            char const* const var_c = "DefinitionFillShallowFieldWithDefaults"
            *arg2 = (zx.o(0)).q
            var_10 = 0x8f
            goto label_4ce2b0
        case 7
            goto label_4ce297
}
