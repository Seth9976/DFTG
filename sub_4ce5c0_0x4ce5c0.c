// 函数名称: sub_4ce5c0
// 虚拟地址: 0x4ce5c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t (* __fastcallsub_4ce5c0(int32_t* arg1, void* arg2))[0x4]
{
    // 第一条实际指令: int32_t* var_4 = arg1
    int32_t* var_4 = arg1
    uint32_t eax = sub_4ce0a0(*(arg2 + 0x18))
    void* ecx_1 = *(arg2 + 0x18)
    
    if (eax.b == 0)
        return sub_4ce210(eax, arg1, ecx_1, arg2)
    
    int32_t eax_2 = *(ecx_1 + 0x10)
    
    if (eax_2 == 8)
        int32_t result = *(arg2 + 0x24)
        *arg1 = result
        return result
    
    if (eax_2 - 1 u> 0x10)
        return sub_4ce680(arg1, ecx_1)
    
    sub_489550(eax_2 - 1, &data_5b2591, "!DefTypeIsBuiltIn(pField->pSubDefMap)", 
        "d:\ax\trunk\ax2017\engine\definition.cpp", 0x15e, "DefinitionFillArrayItemWithDefaults")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
