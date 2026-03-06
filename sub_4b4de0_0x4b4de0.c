// 函数名称: sub_4b4de0
// 虚拟地址: 0x4b4de0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_4b4de0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t var_c = arg2
    int32_t var_c = arg2
    int32_t var_28
    char const* const ecx
    
    if (arg3 != 0)
        uint32_t edx = zx.d(arg3.w)
        
        if (edx u< data_63e5ac)
            int32_t edi_1 = data_63e5a8
            arg1 = edx * 0x1418
            
            if (*(arg1 + edi_1 + 0x1410) == arg3)
                int32_t result = edx * 0x1418
                int32_t result_1 = result
                
                if (*(result + edi_1 + 0x1130) != 0)
                    return result
                
                int32_t eax = *arg4
                *(arg2 + (eax << 2)) = arg3
                arg1 = eax + 1
                *arg4 = arg1
                
                if (edx u< data_63e5ac)
                    arg1 = edx * 0x1418
                    void* edx_1 = data_63e5a8
                    
                    if (*(arg1 + edx_1 + 0x1410) == arg3)
                        result = result_1
                        int32_t i = 0
                        
                        if (*(result + edx_1 + 0x1190) s> 0)
                            int32_t* esi_2 = edx_1 + 0x1194 + result
                            
                            do
                                *esi_2
                                sub_4b4de0(arg4)
                                result = result_1
                                esi_2 = &esi_2[1]
                                i += 1
                            while (i s< *(result + edx_1 + 0x1190))
                        
                        return result
        
        char const* const var_24_3 = "DataArray<struct UI2>::DataArrayGet"
        ecx = "DataArrayTryToGet(id) != NULL"
        var_28 = 0x6d
    else
        char const* const var_24_1 = "DataArray<struct UI2>::DataArrayGet"
        var_28 = 0x6c
        ecx = "id != DATAID_NULL"
    
    sub_489550(arg1, &data_5b2591, ecx, "d:\ax\trunk\ax2017\engine\dataarray.h", var_28, 
        "DataArray<struct UI2>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
