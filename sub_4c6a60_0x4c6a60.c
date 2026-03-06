// 函数名称: sub_4c6a60
// 虚拟地址: 0x4c6a60
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __convention("regparm")sub_4c6a60(int32_t arg1, void* arg2, char** arg3, char* arg4, void* arg5)
{
    // 第一条实际指令: uint32_t (* eax)[0x4] = _memset(arg4, 0xfa, arg5)
    uint32_t (* eax)[0x4] = _memset(arg4, 0xfa, arg5)
    void* edi = *(arg2 + 0xc)
    
    if (edi != 0)
        sub_579300(arg4, arg3, edi)
        char* var_1c = arg4
        int32_t var_18 = 0
        void* var_14 = edi
        char var_10 = 0
        int32_t var_c = 0
        return sub_4c67f0(&var_1c, arg2, arg3, 0, &var_1c)
    
    sub_489550(eax, &data_5b2591, "pDefMap->definitionSize != 0", 
        "d:\ax\trunk\ax2017\engine\definition.cpp", 0x6d, "DefinitionGetSize")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
