// 函数名称: sub_4ce800
// 虚拟地址: 0x4ce800
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __convention("regparm")sub_4ce800(int32_t arg1, int32_t arg2, int32_t* arg3, uint32_t arg4, uint32_t arg5)
{
    // 第一条实际指令: int32_t* var_8 = arg3
    int32_t* var_8 = arg3
    uint32_t ebx = arg4
    int32_t* esi = arg3
    int32_t i_1 = arg2
    uint32_t result = sub_4ce0a0(*(ebx + 0x18))
    
    if (result.b != 0)
        result = *(*(ebx + 0x18) + 0xc)
        arg4 = result
        
        if (result == 0)
            sub_489550(result, &data_5b2591, "pDefMap->definitionSize != 0", 
                "d:\ax\trunk\ax2017\engine\definition.cpp", 0x6d, "DefinitionGetSize")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        if (i_1 s> 0)
            int32_t i
            
            do
                result = sub_4ce780(result, ebx, esi, arg5)
                esi += arg4
                i = i_1
                i_1 -= 1
            while (i != 1)
    
    return result
}
