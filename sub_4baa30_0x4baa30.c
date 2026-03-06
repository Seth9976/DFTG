// 函数名称: sub_4baa30
// 虚拟地址: 0x4baa30
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4baa30(int32_t arg1, char* arg2)
{
    // 第一条实际指令: int32_t var_c = arg1
    int32_t var_c = arg1
    char* var_c_1 = arg2
    int32_t var_20
    int32_t eax
    char const* const ecx
    
    if (arg1 != 0)
        uint32_t ecx_1 = zx.d(arg1.w)
        
        if (ecx_1 u< data_63e5ac)
            int32_t edi_1 = data_63e5a8
            eax = ecx_1 * 0x1418
            
            if (*(eax + edi_1 + 0x1410) == arg1)
                char* const ecx_2 = &data_5b2591
                void* ebx_1 = ecx_1 * 0x1418 + edi_1
                char* eax_1 = *(ebx_1 + 0xfd8)
                
                if (eax_1 != 0)
                    ecx_2 = eax_1
                
                if (__stricmp(ecx_2, arg2) == 0)
                    return arg1
                
                int32_t i = 0
                
                if (*(ebx_1 + 0x1190) s> 0)
                    void* edi_2 = ebx_1 + 0x1194
                    
                    do
                        *edi_2
                        int32_t eax_3 = sub_4baa30()
                        
                        if (eax_3 != 0)
                            return eax_3
                        
                        i += 1
                        edi_2 += 4
                    while (i s< *(ebx_1 + 0x1190))
                
                return 0
        
        char const* const var_1c_2 = "DataArray<struct UI2>::DataArrayGet"
        var_20 = 0x6d
        ecx = "DataArrayTryToGet(id) != NULL"
    else
        char const* const var_1c = "DataArray<struct UI2>::DataArrayGet"
        var_20 = 0x6c
        ecx = "id != DATAID_NULL"
    
    sub_489550(eax, &data_5b2591, ecx, "d:\ax\trunk\ax2017\engine\dataarray.h", var_20, 
        "DataArray<struct UI2>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
