// 函数名称: sub_444b80
// 虚拟地址: 0x444b80
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_444b80(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* eax_3 = arg2 * 0x1bc
    int32_t ecx = 0
    int32_t edx = 0
    int32_t var_4b8 = 0
    void* var_4b4 = eax_3
    int32_t ebx = *(eax_3 + arg3 + 0x164)
    int32_t var_4b0[0x28]
    
    if (ebx s> 0)
        char* eax_5 = eax_3 + 0x24 + arg3
        
        do
            if (*eax_5 != 0 && (eax_5[7] & 2) == 0)
                var_4b0[ecx] = edx
                ecx += 1
            
            edx += 1
            eax_5 = &eax_5[8]
        while (edx s< ebx)
        
        eax_3 = var_4b4
        var_4b8 = ecx
    
    if (*(eax_3 + arg3 + 0x1c4) s< *(var_4b4 + arg3 + 0x1c0))
        sub_444560(&var_4b0, arg2, arg3, 0x10, &var_4b0, &var_4b8, 0, nullptr)
    else
        (*(*(var_4b4 + arg3 + 0x1c) + 4))(arg3, arg2, 0x10, &var_4b0, &var_4b8, 0, 0, 1, arg4, 0)
        
        if (*(arg3 + 0xc3c) == 0)
            int32_t eax_10 = *(*(var_4b4 + arg3 + 0x1c) + 0xc)
            
            if (eax_10 != 0)
                eax_10(arg3, arg2)
            
            sub_444560(&var_4b0, arg2, arg3, 0x10, &var_4b0, &var_4b8, 0, nullptr)
    
    int32_t eax_15 = var_4b0[0]
    void* ecx_2 = eax_15 << 3
    void* ebx_2 = var_4b4 + arg3
    
    if (*(ecx_2 + ebx_2 + 0x2a) != 0xff)
        ecx_2 += var_4b4
        int32_t eax_14 = (sx.d(*(ecx_2 + arg3 + 0x2a)) + 0xbb) * 3
        *(arg3 + (eax_14 << 2) + 8) -= 1
        *(ecx_2 + arg3 + 0x25) = 0
        *(ecx_2 + arg3 + 0x2a) = 0xff
        eax_15 = var_4b0[0]
    
    if (*(arg3 + 0x10) == 0)
        int32_t var_4cc_2 = (&data_5b4ff0)[zx.d(*(ebx_2 + (eax_15 << 3) + 0x24))]
        int32_t var_4d0_3 = *(ebx_2 + 0x18)
        void var_410
        sub_41da20(&var_410, var_4b4, ecx_2, &var_410, "%s removes %s die.\n")
        sub_4892e0(&var_410)
        eax_15 = var_4b0[0]
    
    uint32_t ecx_3 = zx.d(*(ebx_2 + (eax_15 << 3) + 0x24))
    *(ebx_2 + (eax_15 << 3) + 0x24) = 0
    *(ebx_2 + (var_4b0[0] << 3) + 0x25) = 0
    int32_t result = *(arg3 + 0x10)
    
    if (result == 0)
        sub_444430(result, result + 0x2e, arg3, arg2, var_4b0[0], result, result, result)
        result = *(arg3 + 0x10)
        
        if (result == 0)
            uint32_t eax_20 = zx.d(*(arg3 + arg4 * 0xc + 0x8cb))
            result = sub_444430(eax_20, 0x14, arg3, arg2, arg4, 1, ecx_3, eax_20)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
