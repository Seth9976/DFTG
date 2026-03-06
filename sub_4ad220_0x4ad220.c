// 函数名称: sub_4ad220
// 虚拟地址: 0x4ad220
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_4ad220(int32_t arg1, char* arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_c = arg3
    int32_t var_c = arg3
    char* var_c_1 = arg2
    int32_t var_20_1
    char const* const ecx
    
    if (arg3 != 0)
        uint32_t ecx_1 = zx.d(arg3.w)
        
        if (ecx_1 u< data_63e5ac)
            int32_t edi_1 = data_63e5a8
            arg1 = ecx_1 * 0x1418
            
            if (*(arg1 + edi_1 + 0x1410) == arg3)
                int32_t eax = arg4
                void* ebx = ecx_1 * 0x1418
                char* ecx_2 = *(ebx + edi_1 + 0xfd8)
                void* ebx_1 = ebx + edi_1
                
                if (*(ebx_1 + 0x109c) == eax || eax == 0xffffffff)
                    char* const eax_1 = &data_5b2591
                    
                    if (ecx_2 != 0)
                        eax_1 = ecx_2
                    
                    if (__stricmp(eax_1, arg2) == 0)
                        return arg3
                    
                    eax = arg4
                
                int32_t i = 0
                
                if (*(ebx_1 + 0x1190) s> 0)
                    void* edi_2 = ebx_1 + 0x1194
                    
                    do
                        *edi_2
                        int32_t eax_3 = sub_4ad220(eax)
                        
                        if (eax_3 != 0)
                            return eax_3
                        
                        eax = arg4
                        i += 1
                        edi_2 += 4
                    while (i s< *(ebx_1 + 0x1190))
                
                return 0
        
        char const* const var_1c_4 = "DataArray<struct UI2>::DataArrayGet"
        var_20_1 = 0x6d
        ecx = "DataArrayTryToGet(id) != NULL"
    else
        char const* const var_1c_1 = "DataArray<struct UI2>::DataArrayGet"
        var_20_1 = 0x6c
        ecx = "id != DATAID_NULL"
    
    sub_489550(arg1, &data_5b2591, ecx, "d:\ax\trunk\ax2017\engine\dataarray.h", var_20_1, 
        "DataArray<struct UI2>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
