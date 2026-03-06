// 函数名称: sub_4eea70
// 虚拟地址: 0x4eea70
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t (*sub_4eea70())[0x4]
{
    // 第一条实际指令: int32_t eax = data_6cad04
    int32_t eax = data_6cad04
    int32_t var_10
    char const* const ecx
    
    if (eax u< data_6cacfc)
        eax = data_6cad00
        int32_t edi_1 = data_6cacf8
        
        if (eax u<= edi_1)
            int32_t ecx_1 = data_6cacf4
            int32_t eax_1
            
            if (eax != edi_1)
                edi_1 = eax
                eax_1 = *(eax * 0x4d0 + ecx_1 + 0x4cc)
            else
                eax_1 = edi_1 + 1
                data_6cacf8 = eax_1
            
            data_6cad00 = eax_1
            uint32_t (* result)[0x4] = edi_1 * 0x4d0 + ecx_1
            _memset(result, 0, 0x4cc)
            (*result)[0x133] = data_6cad08 << 0x10 | edi_1
            int32_t ecx_3 = data_6cad08 + 1
            
            if (ecx_3 == 0x10000)
                ecx_3 = 1
            
            data_6cad04 += 1
            data_6cad08 = ecx_3
            return result
        
        char const* const var_c_1 = "DataArray<struct FabState>::DataArrayAlloc"
        var_10 = 0xf5
        ecx = "mFreeListHead <= mMaxUsedCount"
    else
        char const* const var_c = "DataArray<struct FabState>::DataArrayAlloc"
        var_10 = 0xf4
        ecx = "mUsedCount < mMaxSize"
    
    sub_489550(eax, &data_5b2591, ecx, "d:\ax\trunk\ax2017\engine\dataarray.h", var_10, 
        "DataArray<struct FabState>::DataArrayAlloc")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
