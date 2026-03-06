// 函数名称: sub_4cf950
// 虚拟地址: 0x4cf950
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __convention("regparm")sub_4cf950(int32_t arg1, char* arg2, int32_t* arg3, void* arg4)
{
    // 第一条实际指令: int32_t* var_8 = arg3
    int32_t* var_8 = arg3
    int32_t eax_1 = *arg3
    
    if (eax_1 != 0)
        if (eax_1 != *(arg4 + 0x24))
            _aligned_free_base(eax_1)
            *arg3 = 0
        
        return sub_4ceb40(arg3, arg2)
    
    sub_489550(eax_1, &data_5b2591, "*pString", "d:\ax\trunk\ax2017\engine\definition.cpp", 0x17c, 
        "DefinitionDeleteString")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
