// 函数名称: sub_4ce780
// 虚拟地址: 0x4ce780
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_4ce780(int32_t arg1, void* arg2, int32_t* arg3, uint32_t arg4)
{
    // 第一条实际指令: int32_t* var_8 = arg3
    int32_t* var_8 = arg3
    char result = sub_4ce0a0(*(arg2 + 0x18))
    
    if (result == 0)
        return result
    
    void* edx = *(arg2 + 0x18)
    int32_t eax = *(edx + 0x10)
    
    if (eax == 8)
        return sub_4ce720(arg3, *(arg2 + 0x24))
    
    if (eax - 1 u> 0x10)
        return sub_4cea80(eax - 1, edx, arg3, arg4)
    
    sub_489550(eax - 1, &data_5b2591, "!DefTypeIsBuiltIn(pField->pSubDefMap)", 
        "d:\ax\trunk\ax2017\engine\definition.cpp", 0x191, "DefinitionDeleteVariableArrayField")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
