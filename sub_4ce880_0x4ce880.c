// 函数名称: sub_4ce880
// 虚拟地址: 0x4ce880
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __convention("regparm")sub_4ce880(int32_t arg1, int32_t* arg2, int32_t arg3, uint32_t arg4, uint32_t arg5)
{
    // 第一条实际指令: uint32_t result = arg5
    uint32_t result = arg5
    int32_t* edi_1 = *arg2 + arg3
    int32_t* esi = *edi_1
    
    if (result != 0)
        if ((arg2[0xa] & 0x100) == 0 || esi u> 0x100000)
            result = sub_4ce800(result, result, esi, arg2, arg4)
            
            if (esi != 0)
                result = _aligned_free_base(esi)
            
            *edi_1 = 0
    else if (esi != 0)
        sub_489550(result, &data_5b2591, "pArrayStart == NULL", 
            "d:\ax\trunk\ax2017\engine\definition.cpp", 0x1c6, "DefinitionDeleteVariableArray")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    return result
}
