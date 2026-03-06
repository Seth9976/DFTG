// 函数名称: sub_449eb0
// 虚拟地址: 0x449eb0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_449eb0(int32_t arg1, int32_t* arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* var_53c
    int32_t var_534
    int32_t var_528
    void var_128
    int32_t eax_3 = sub_444560(&var_528, arg4, arg3, arg2[1], &var_528, &var_53c, &var_128, &var_534)
    int32_t edx_1 = arg2[1]
    int64_t var_530 = 0
    void* ecx_1 = arg4 * 0x1c0 + *(arg3 + 0xc44)
    
    if (edx_1 - 6 u<= 0xc)
        uint32_t eax_5 = zx.d(*(edx_1 + &jump_table_44a124[4]:2))
        
        switch (eax_5)
            case 0
                int32_t eax_6 = var_528
                *(ecx_1 + 8) = eax_6
                sub_4489f0(eax_6, arg4, arg3, eax_6)
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return 1
            case 1
                if (eax_3 != 1)
                    int32_t eax_9 = sub_449ae0(&var_528, arg4, arg3, *(ecx_1 + 8), &var_528, var_53c)
                    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                    return eax_9
                
                sub_448220(eax_5, arg4, arg3, ecx_1 + 8, 1)
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return var_530.d
            case 2
                sub_448d60(&var_528, arg4, arg3, &var_528, &var_128, var_534, *(ecx_1 + 0x1bc))
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return var_530.d
            case 3
                sub_449670(&var_528, arg4, arg3, &var_528, &var_128, var_534)
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return var_530.d
            case 4
                int32_t eax_15 = *(arg3 + 0xc44)
                int32_t edx_9 = var_528
                *(eax_15 + (arg4 << 2) + 0x8c4) = 3
                sub_445280(eax_15, edx_9, arg3, 0xffffffff, 1, 0)
                
                if (*(arg3 + 0x10) == 0)
                    int32_t edx_10 = var_528
                    void* esi_1 = arg3 + (edx_10 + 0xbb) * 0xc
                    uint32_t ecx_22 = zx.d(*(arg3 + edx_10 * 0xc + 0x8cb))
                    int32_t var_554_5 = *(*esi_1 + (ecx_22 << 2))
                    int32_t var_558_5 = edx_10
                    int32_t var_55c_4 = *(arg4 * 0x1bc + arg3 + 0x18)
                    void var_410
                    sub_41da20(&var_410, edx_10, ecx_22, &var_410, "%s forced to abandon %d %s.\n")
                    sub_4892e0(&var_410)
                    void* eax_22 = *esi_1
                    sub_444430(eax_22, 0x18, arg3, arg4, var_528, *(eax_22 + 0xc), 0, 0)
                
                int32_t eax_23 = *(arg3 + 0xc44)
                int32_t ecx_24 = *(eax_23 + (arg4 << 3) + 0x8d8)
                *(eax_23 + (arg4 << 3) + 0x8dc)
                *(eax_23 + (arg4 << 3) + 0x8d8) = 0
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return ecx_24
    
    int32_t var_554_7 = arg4
    int32_t var_558_6 = edx_1
    int32_t var_55c_6 = *arg2
    sub_444530("expected a explore choice but was waiting for %d %d instead who %d.")
    noreturn
}
