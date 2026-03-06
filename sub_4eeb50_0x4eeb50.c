// 函数名称: sub_4eeb50
// 虚拟地址: 0x4eeb50
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __stdcallsub_4eeb50(int32_t arg1)
{
    // 第一条实际指令: int32_t var_c
    int32_t var_c
    char const* const ecx
    
    if (arg1 != 0)
        uint32_t ecx_1 = zx.d(arg1.w)
        
        if (ecx_1 u< data_6cacf8)
            int32_t edx_1 = data_6cacf4
            int32_t ecx_2 = ecx_1 * 0x4d0
            
            if (*(ecx_2 + edx_1 + 0x4cc) == arg1)
                return ecx_2 + edx_1
        
        char const* const var_8_1 = "DataArray<struct FabState>::DataArrayGet"
        var_c = 0x6d
        ecx = "DataArrayTryToGet(id) != NULL"
    else
        char const* const var_8 = "DataArray<struct FabState>::DataArrayGet"
        var_c = 0x6c
        ecx = "id != DATAID_NULL"
    
    sub_489550(arg1, &data_5b2591, ecx, "d:\ax\trunk\ax2017\engine\dataarray.h", var_c, 
        "DataArray<struct FabState>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
