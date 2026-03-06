// 函数名称: sub_4a8830
// 虚拟地址: 0x4a8830
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_4a8830(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    int32_t var_1c
    char const* const ecx
    
    if (arg3 != 0)
        uint32_t edx = zx.d(arg3.w)
        
        if (edx u< data_63e5ac)
            int32_t edi_1 = data_63e5a8
            arg1 = edx * 0x1418
            
            if (*(arg1 + edi_1 + 0x1410) == arg3)
                void* ebx = edx * 0x1418
                int32_t ecx_1 = 0
                int32_t edx_1 = *(ebx + edi_1 + 0x110c)
                void* ebx_1 = ebx + edi_1
                int32_t* eax = *(ebx_1 + 0x1108)
                
                if (edx_1 s> 0)
                    while (eax[1] != arg5 || *eax != arg2)
                        ecx_1 += 1
                        eax = &eax[7]
                        
                        if (ecx_1 s>= edx_1)
                            goto label_4a88ab
                
                if (edx_1 s<= 0 || eax == 0)
                label_4a88ab:
                    void* ecx_2
                    
                    if (*(ebx_1 + 0x1110) != 0)
                        ecx_2 = ebx_1 + 0x1108
                    else
                        ecx_2 = ebx_1 + 0x1108
                        *ecx_2 = sub_498490(0x3800)
                        *(ecx_2 + 4) = 0
                        *(ecx_2 + 8) = 0x200
                    
                    eax = sub_4bc680(ecx_2)
                
                *eax = arg2
                eax[1] = arg5
                eax[2] = 1
                eax[6] = arg4
                return sub_4a3580(ebx_1)
        
        char const* const var_18_1 = "DataArray<struct UI2>::DataArrayGet"
        var_1c = 0x6d
        ecx = "DataArrayTryToGet(id) != NULL"
    else
        char const* const var_18 = "DataArray<struct UI2>::DataArrayGet"
        var_1c = 0x6c
        ecx = "id != DATAID_NULL"
    
    sub_489550(arg1, &data_5b2591, ecx, "d:\ax\trunk\ax2017\engine\dataarray.h", var_1c, 
        "DataArray<struct UI2>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
