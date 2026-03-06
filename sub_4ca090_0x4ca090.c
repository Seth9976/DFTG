// 函数名称: sub_4ca090
// 虚拟地址: 0x4ca090
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t (* __convention("regparm")sub_4ca090(int32_t arg1, uint32_t (* arg2)[0x4], int32_t arg3, uint32_t arg4))[0x4]
{
    // 第一条实际指令: uint32_t (* eax)[0x4] = arg2
    uint32_t (* eax)[0x4] = arg2
    uint32_t (* var_8)[0x4] = eax
    char const* const var_24_1
    int32_t var_20
    char const* const var_1c
    char* ecx
    
    if (eax s< 0x100)
        int32_t edx = *(arg3 + (eax << 2) + 0x30)
        
        if (edx != 0)
            eax = zx.d(edx.w)
            
            if (eax u< data_6c9d78)
                eax = data_6c9d74 + eax * 0x1c0
                
                if ((*eax)[0x6f] == edx)
                    return eax
            
            var_1c = "DataArray<struct UIStateElement>::DataArrayGet"
            var_20 = 0x6d
            ecx = "DataArrayTryToGet(id) != NULL"
        else
            eax = data_6c9d84
            
            if (eax u< data_6c9d7c)
                eax = data_6c9d80
                uint32_t (* ebx_1)[0x4] = data_6c9d78
                
                if (eax u<= ebx_1)
                    int32_t ecx_1 = data_6c9d74
                    void* eax_1
                    
                    if (eax != ebx_1)
                        ebx_1 = eax
                        eax_1 = *(eax * 0x1c0 + ecx_1 + 0x1bc)
                    else
                        eax_1 = ebx_1 + 1
                        data_6c9d78 = eax_1
                    
                    data_6c9d80 = eax_1
                    uint32_t (* edi_2)[0x4] = ebx_1 * 0x1c0 + ecx_1
                    _memset(edi_2, 0, 0x68)
                    _memset(&(*edi_2)[0x1b], 0, 0xf4)
                    (*edi_2)[0x1a] = &data_5b2591
                    _memset(&edi_2[0x16], 0, 0x5c)
                    (*edi_2)[0x65] = 0xff000000
                    edi_2[0x1a][0] = 0xff000000
                    (*edi_2)[0x69] = 0xffffffff
                    (*edi_2)[0x6d] = 1
                    (*edi_2)[0x66] = 0x3f800000
                    (*edi_2)[0x6f] = data_6c9d88 << 0x10 | ebx_1
                    int32_t ecx_3 = data_6c9d88 + 1
                    
                    if (ecx_3 == 0x10000)
                        ecx_3 = 1
                    
                    data_6c9d84 += 1
                    data_6c9d88 = ecx_3
                    (*edi_2)[1] = arg4
                    *(arg3 + (var_8 << 2) + 0x30) = (*edi_2)[0x6f]
                    return edi_2
                
                var_1c = "DataArray<struct UIStateElement>::DataArrayAlloc"
                var_20 = 0xf5
                ecx = "mFreeListHead <= mMaxUsedCount"
            else
                var_1c = "DataArray<struct UIStateElement>::DataArrayAlloc"
                var_20 = 0xf4
                ecx = "mUsedCount < mMaxSize"
        
        var_24_1 = "d:\ax\trunk\ax2017\engine\dataarray.h"
    else
        var_1c = "UIStateElementGet"
        var_20 = 0x545
        var_24_1 = "d:\ax\trunk\ax2017\engine\uidef.cpp"
        ecx = "idx < MAX_UI_ELEMENTS"
    
    sub_489550(eax, &data_5b2591, ecx, var_24_1, var_20, var_1c)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
