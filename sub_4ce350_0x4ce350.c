// 函数名称: sub_4ce350
// 虚拟地址: 0x4ce350
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_4ce350(int32_t arg1, void* arg2, int32_t* arg3, void* arg4)
{
    // 第一条实际指令: int32_t ecx = *(arg2 + 0x10)
    int32_t ecx = *(arg2 + 0x10)
    uint32_t eax = ecx - 1
    
    if (eax u<= 0xf)
        eax = zx.d(lookup_table_4ce418[eax])
        
        switch (eax)
            case 0
                return sub_4ce210(eax, arg3, arg2, arg4)
            case 1
                int32_t result = *(arg4 + 0x24)
                *arg3 = result
                return result
    
    if (ecx s<= 0 || ecx s>= 0x12)
        char* ebx = *(arg4 + 0x24)
        
        if (ebx != 0)
            return sub_4cef30(sub_579300(arg3, ebx, sub_4ce1a0(arg2)), arg2, arg3, nullptr, ebx)
        
        return sub_4ce680(arg3, arg2) __tailcall
    
    sub_489550(eax, &data_5b2591, "!DefTypeIsBuiltIn(pDefMap)", 
        "d:\ax\trunk\ax2017\engine\definition.cpp", 0xdd, "DefinitionFillArrayableFieldWithDefaults")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
