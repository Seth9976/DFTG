// 函数名称: sub_4aeb40
// 虚拟地址: 0x4aeb40
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* const __fastcallsub_4aeb40(int32_t arg1)
{
    // 第一条实际指令: int32_t var_4 = arg1
    int32_t var_4 = arg1
    int32_t var_c
    void* eax
    char const* const ecx
    
    if (arg1 != 0)
        uint32_t edx_1 = zx.d(arg1.w)
        
        if (edx_1 u< data_63e5ac)
            eax = edx_1 * 0x1418 + data_63e5a8
            
            if (*(eax + 0x1410) == arg1)
                void* ecx_2 = edx_1 * 0x1418 + data_63e5a8
                char* const eax_2 = *(ecx_2 + 0xfb0)
                
                if (eax_2 == 0)
                    char* ecx_3 = *(ecx_2 + 0xfd8)
                    eax_2 = &data_5b2591
                    
                    if (ecx_3 != 0)
                        return ecx_3
                
                return eax_2
        
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
