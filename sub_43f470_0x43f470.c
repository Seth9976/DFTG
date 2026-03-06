// 函数名称: sub_43f470
// 虚拟地址: 0x43f470
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_43f470(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int64_t* arg8, int32_t* arg9, int32_t* arg10)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t ebx = arg4
    int32_t esi = arg2
    int32_t var_c68 = esi
    int32_t var_c64 = ebx
    void var_c60
    sub_43a6c0(arg10, arg3, &var_c60, esi)
    int32_t edi = arg5
    int32_t edx_1 = 0
    void var_c3c
    char var_c3b[0x167]
    int32_t var_ad4[0x2b2]
    
    if (edi s> 0)
        do
            edi = arg5
            int32_t ebx_1 = esi * 0x1bc + (*(ebx + (edx_1 << 2)) << 3)
            uint32_t ecx_1 = zx.d(*(&var_c3c + ebx_1))
            
            if ((arg6 & 1 << ecx_1.b) != 0 && ecx_1 != arg7)
                var_c3b[ebx_1] = 1
                var_ad4[esi * 0x6f] -= 1
            
            ebx = var_c64
            edx_1 += 1
        while (edx_1 s< edi)
        
        esi = var_c68
    
    int32_t ecx_2 = 0
    
    if (edi s> 0)
        edx_1 = esi * 0x1bc
        
        do
            int32_t esi_2 = edx_1 + (*(var_c64 + (ecx_2 << 2)) << 3)
            
            if (zx.d(*(&var_c3c + esi_2)) == arg7)
                var_c3b[esi_2] = 1
                int32_t temp0_1 = *(&var_ad4 + edx_1)
                *(&var_ad4 + edx_1) -= 1
                
                if (temp0_1 == 1)
                    break
            
            ecx_2 += 1
        while (ecx_2 s< edi)
    
    int32_t eax_10 = var_ad4[var_c68 * 0x6f]
    
    if (eax_10 s< 0)
        sub_4394f0(eax_10, edx_1, ecx_2, "Recruited to negative credits!\n")
        eax_10 = var_ad4[var_c68 * 0x6f]
    
    if (eax_10 s< 1)
        var_ad4[var_c68 * 0x6f] = 1
    
    int32_t* result
    int64_t xmm0
    result, xmm0 = sub_43c700()
    
    if (not(xmm0 f<= *arg8))
        *arg9 = arg6
        result = arg10
        *result = arg7
        *arg8 = xmm0
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
