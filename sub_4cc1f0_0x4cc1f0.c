// 函数名称: sub_4cc1f0
// 虚拟地址: 0x4cc1f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t (* __fastcallsub_4cc1f0(int32_t arg1, uint32_t (* arg2)[0x4]))[0x4]
{
    // 第一条实际指令: int32_t var_c
    int32_t var_c
    void* eax
    char const* const ecx
    
    if (arg1 != 0)
        uint32_t edx = zx.d(arg1.w)
        
        if (edx u< data_6c9d94)
            eax = edx * 0x438 + data_6c9d90
            
            if (*(eax + 0x434) == arg1)
                uint32_t (* result)[0x4] =
                    sub_4ca090(eax, arg2, edx * 0x438 + data_6c9d90, &data_5b2591)
                *result += 1
                return result
        
        char const* const var_8_1 = "DataArray<struct UIState>::DataArrayGet"
        var_c = 0x6d
        ecx = "DataArrayTryToGet(id) != NULL"
    else
        char const* const var_8 = "DataArray<struct UIState>::DataArrayGet"
        var_c = 0x6c
        ecx = "id != DATAID_NULL"
    
    sub_489550(eax, &data_5b2591, ecx, "d:\ax\trunk\ax2017\engine\dataarray.h", var_c, 
        "DataArray<struct UIState>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
