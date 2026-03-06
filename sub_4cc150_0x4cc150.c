// 函数名称: sub_4cc150
// 虚拟地址: 0x4cc150
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char** __convention("regparm")sub_4cc150(int32_t arg1, uint32_t (* arg2)[0x4], int32_t arg3, char* arg4)
{
    // 第一条实际指令: int32_t var_14
    int32_t var_14
    char const* const ecx
    
    if (arg3 != 0)
        uint32_t edx = zx.d(arg3.w)
        
        if (edx u< data_6c9d94)
            int32_t esi_1 = data_6c9d90
            arg1 = edx * 0x438
            
            if (*(arg1 + esi_1 + 0x434) == arg3)
                uint32_t (* eax)[0x4] = sub_4ca090(arg1, arg2, edx * 0x438 + esi_1, &data_5b2591)
                (*eax)[0x19] = *eax + 1
                char** result = sub_48a5e0(&(*eax)[0x1a], arg4)
                *(eax + 0x151) = 1
                return result
        
        char const* const var_10_2 = "DataArray<struct UIState>::DataArrayGet"
        var_14 = 0x6d
        ecx = "DataArrayTryToGet(id) != NULL"
    else
        char const* const var_10 = "DataArray<struct UIState>::DataArrayGet"
        var_14 = 0x6c
        ecx = "id != DATAID_NULL"
    
    sub_489550(arg1, &data_5b2591, ecx, "d:\ax\trunk\ax2017\engine\dataarray.h", var_14, 
        "DataArray<struct UIState>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
