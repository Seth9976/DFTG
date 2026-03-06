// 函数名称: sub_4eed40
// 虚拟地址: 0x4eed40
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4eed40(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = arg1
    int32_t var_8 = arg1
    int32_t ebx = data_6c9db0
    void* eax = nullptr
    void* edi = data_6c9dac
    void* edx_1 = ebx * 0xf10 + edi
    
    while (true)
        if (eax != 0)
            eax += 0xf10
        else
            eax = edi
        
        if (eax u>= edx_1)
            break
        
        while (true)
            int32_t result = *(eax + 0xf0c)
            
            if ((result & 0xffff0000) != 0)
                if (*eax != arg1)
                    break
                
                return result
            
            eax += 0xf10
            
            if (eax u>= edx_1)
                goto label_4eed97
    
    label_4eed97:
    int32_t eax_2 = data_6c9dbc
    int32_t var_1c
    char const* const ecx
    
    if (eax_2 u< data_6c9db4)
        eax_2 = data_6c9db8
        
        if (eax_2 u<= ebx)
            int32_t eax_3
            
            if (eax_2 != ebx)
                ebx = eax_2
                eax_3 = *(eax_2 * 0xf10 + edi + 0xf0c)
            else
                eax_3 = ebx + 1
                data_6c9db0 = eax_3
            
            data_6c9db8 = eax_3
            void* esi_2 = ebx * 0xf10 + edi
            _memset(esi_2, 0, 0xf0c)
            *(esi_2 + 0xf0c) = data_6c9dc0 << 0x10 | ebx
            int32_t eax_9 = data_6c9dc0 + 1
            
            if (eax_9 == 0x10000)
                eax_9 = 1
            
            data_6c9dbc += 1
            data_6c9dc0 = eax_9
            *esi_2 = arg1
            return *(esi_2 + 0xf0c)
        
        char const* const var_18_1 = "DataArray<struct MaterialCacheItem>::DataArrayAlloc"
        var_1c = 0xf5
        ecx = "mFreeListHead <= mMaxUsedCount"
    else
        char const* const var_18 = "DataArray<struct MaterialCacheItem>::DataArrayAlloc"
        var_1c = 0xf4
        ecx = "mUsedCount < mMaxSize"
    
    sub_489550(eax_2, &data_5b2591, ecx, "d:\ax\trunk\ax2017\engine\dataarray.h", var_1c, 
        "DataArray<struct MaterialCacheItem>::DataArrayAlloc")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
