// 函数名称: sub_49a390
// 虚拟地址: 0x49a390
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_49a390(int32_t arg1, int32_t* arg2, int32_t* arg3, char* arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t ebx = data_63e5c8
    int32_t ebx = data_63e5c8
    int32_t edx = data_63e5c4
    int32_t eax_1 = arg2[2]
    int32_t* var_c = arg3
    int32_t* ecx_1
    int32_t* esi_2
    
    if (eax_1 == 0)
    label_49a3d5:
        int32_t eax_2 = data_63e5d4
        int32_t var_24
        char const* const ecx_2
        
        if (eax_2 u>= data_63e5cc)
            char const* const var_20_1 = "DataArray<struct UI2ExprTreeRT>::DataArrayAlloc"
            var_24 = 0xf4
            ecx_2 = "mUsedCount < mMaxSize"
        label_49a505:
            sub_489550(eax_2, &data_5b2591, ecx_2, "d:\ax\trunk\ax2017\engine\dataarray.h", var_24, 
                "DataArray<struct UI2ExprTreeRT>::DataArrayAlloc")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        eax_2 = data_63e5d0
        
        if (eax_2 u> ebx)
            char const* const var_20_5 = "DataArray<struct UI2ExprTreeRT>::DataArrayAlloc"
            var_24 = 0xf5
            ecx_2 = "mFreeListHead <= mMaxUsedCount"
            goto label_49a505
        
        int32_t eax_3
        
        if (eax_2 != ebx)
            ebx = eax_2
            eax_3 = *(eax_2 * 0x248 + edx + 0x244)
        else
            eax_3 = ebx + 1
            data_63e5c8 = eax_3
        
        data_63e5d0 = eax_3
        esi_2 = ebx * 0x248 + edx
        _memset(esi_2, 0, 0x244)
        void* var_10_1 = &esi_2[1]
        struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_20_2)(void* arg1) = sub_498c00
        `eh vector constructor iterator'(&esi_2[3], 0x34, 2, sub_498be0)
        esi_2[0x91] = data_63e5d8 << 0x10 | ebx
        int32_t eax_11 = data_63e5d8 + 1
        
        if (eax_11 == 0x10000)
            eax_11 = 1
        
        ecx_1 = arg2
        data_63e5d4 += 1
        data_63e5d8 = eax_11
        ecx_1[2] = esi_2[0x91]
    else
        uint32_t ecx = zx.d(eax_1.w)
        
        if (ecx u>= ebx)
            goto label_49a3d5
        
        esi_2 = ecx * 0x248 + edx
        
        if (esi_2[0x91] != eax_1)
            goto label_49a3d5
        
        ecx_1 = arg2
    
    bool cond:1 = *esi_2 != 3
    int32_t eax_13 = *ecx_1
    esi_2[0x1e] = eax_13
    
    if (cond:1)
        sub_49a250(eax_13, esi_2, arg3, arg4, arg5)
        return arg3
    
    struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_20_3)(void* arg1) = sub_498c00
    *arg3 = esi_2[1]
    arg3[1] = esi_2[2]
    (&arg3[2], &esi_2[3], 0x34, 2, sub_498dc0)
    arg3[0x1c] = esi_2[0x1d]
    return arg3
}
