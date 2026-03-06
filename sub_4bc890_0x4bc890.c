// 函数名称: sub_4bc890
// 虚拟地址: 0x4bc890
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t (* __fastcallsub_4bc890(int32_t* arg1))[0x4]
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    int32_t eax = arg1[4]
    int32_t var_1c
    char const* const ecx
    
    if (eax u< arg1[2])
        eax = arg1[3]
        int32_t ebx_1 = arg1[1]
        
        if (eax u<= ebx_1)
            int32_t ecx_1 = *arg1
            int32_t eax_1
            
            if (eax != ebx_1)
                ebx_1 = eax
                eax_1 = *(eax * 0x1418 + ecx_1 + 0x1410)
            else
                eax_1 = ebx_1 + 1
                arg1[1] = eax_1
            
            arg1[3] = eax_1
            uint32_t (* result)[0x4] = ebx_1 * 0x1418 + ecx_1
            _memset(result, 0, 0xe34)
            _memset(&(*result)[0x38e], 0, 0x19c)
            result[0xfe] = zx.o(0)
            _memset(&(*result)[0x3fd], 0, 0x114)
            *(result + 0x110c) = 0
            *(result + 0x1118) = 0
            *(result + 0x1124) = zx.o(0)
            _memset(&result[0x119], 0, 0x280)
            (*result)[0x38d] = &data_5b2591
            (*result)[0x3f5] = &data_5b2591
            (*result)[0x3f6] = &data_5b2591
            (*result)[0x3f7] = 0
            result[0xfe][0] = 0
            (*result)[0x3f9] = 0
            result[0xff][0] = &data_5b2591
            __builtin_memset(&(*result)[0x442], 0, 0x24)
            _memset(&(*result)[0x44d], 0, 0x5c)
            (*result)[0x45a] = 0xff000000
            (*result)[0x45d] = 0xff000000
            (*result)[0x45e] = 0xffffffff
            (*result)[0x462] = 1
            (*result)[0x45b] = 0x3f800000
            result[0x141][0] = arg1[5] << 0x10 | ebx_1
            arg1[5] += 1
            
            if (arg1[5] == 0x10000)
                arg1[5] = 1
            
            arg1[4] += 1
            return result
        
        char const* const var_18_1 = "DataArray<struct UI2>::DataArrayAlloc"
        var_1c = 0xf5
        ecx = "mFreeListHead <= mMaxUsedCount"
    else
        char const* const var_18 = "DataArray<struct UI2>::DataArrayAlloc"
        var_1c = 0xf4
        ecx = "mUsedCount < mMaxSize"
    
    sub_489550(eax, &data_5b2591, ecx, "d:\ax\trunk\ax2017\engine\dataarray.h", var_1c, 
        "DataArray<struct UI2>::DataArrayAlloc")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
