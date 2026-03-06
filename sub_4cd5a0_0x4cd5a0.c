// 函数名称: sub_4cd5a0
// 虚拟地址: 0x4cd5a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t (* __convention("regparm")sub_4cd5a0(void* arg1, uint32_t (* arg2)[0x4], int32_t arg3, uint32_t arg4))[0x4]
{
    // 第一条实际指令: int32_t var_10
    int32_t var_10
    char const* const ecx
    
    if (arg3 != 0)
        uint32_t edx = zx.d(arg3.w)
        
        if (edx u< data_6c9d94)
            arg1 = edx * 0x438 + data_6c9d90
            
            if (*(arg1 + 0x434) == arg3)
                uint32_t (* result)[0x4] =
                    sub_4ca090(arg1, arg2, edx * 0x438 + data_6c9d90, &data_5b2591)
                (*result)[0x4f] = *result + 1
                result[0x14][0] = arg4
                return result
        
        char const* const var_c_1 = "DataArray<struct UIState>::DataArrayGet"
        var_10 = 0x6d
        ecx = "DataArrayTryToGet(id) != NULL"
    else
        char const* const var_c = "DataArray<struct UIState>::DataArrayGet"
        var_10 = 0x6c
        ecx = "id != DATAID_NULL"
    
    sub_489550(arg1, &data_5b2591, ecx, "d:\ax\trunk\ax2017\engine\dataarray.h", var_10, 
        "DataArray<struct UIState>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
