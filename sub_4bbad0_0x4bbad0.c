// 函数名称: sub_4bbad0
// 虚拟地址: 0x4bbad0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* const __fastcallsub_4bbad0(int32_t arg1)
{
    // 第一条实际指令: int32_t var_c
    int32_t var_c
    int32_t eax
    char const* const ecx
    
    if (arg1 != 0)
        uint32_t edx_1 = zx.d(arg1.w)
        
        if (edx_1 u< data_63e5ac)
            int32_t esi_1 = data_63e5a8
            eax = edx_1 * 0x1418
            
            if (*(eax + esi_1 + 0x1410) == arg1)
                char* result = *(edx_1 * 0x1418 + esi_1 + 0xfd8)
                
                if (result != 0)
                    return result
                
                return &data_5b2591
        
        char const* const var_8_1 = "DataArray<struct UI2>::DataArrayGet"
        var_c = 0x6d
        ecx = "DataArrayTryToGet(id) != NULL"
    else
        char const* const var_8 = "DataArray<struct UI2>::DataArrayGet"
        var_c = 0x6c
        ecx = "id != DATAID_NULL"
    
    sub_489550(eax, &data_5b2591, ecx, "d:\ax\trunk\ax2017\engine\dataarray.h", var_c, 
        "DataArray<struct UI2>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
