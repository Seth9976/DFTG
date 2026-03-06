// 函数名称: sub_442270
// 虚拟地址: 0x442270
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_442270(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t* arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, void* arg9, int32_t arg10, int32_t arg11, void* arg12, int32_t* arg13, void* arg14)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* ebx = arg12
    int32_t i_2 = arg5
    void* var_cbc = ebx
    void* eax_15
    
    if (arg11 != i_2)
        int32_t var_60
        __builtin_memset(&var_60, 0, 0x54)
        eax_15 = arg2 * 0x1bc + arg3
        int32_t ecx_10 = 0
        void* var_cc8_2 = eax_15
        int32_t var_ce4_1 = 0
        
        if (arg7 s> 0)
            eax_15 = arg9
            int32_t edx_7 = 1
            int32_t var_cbc_1 = 1
            
            do
                if ((eax_15 & edx_7) == 0)
                    int32_t var_ccc_1 = 1
                    int32_t esi_3 = *(arg6 + (ecx_10 << 2))
                    int32_t edi_3 = (sx.d(*(var_cc8_2 + (esi_3 << 3) + 0x2a)) + 0xbb) * 3
                    uint32_t eax_26 = zx.d(*(var_cc8_2 + (esi_3 << 3) + 0x24))
                    int32_t eax_29 = *(arg3[edi_3] + 0x18)
                    int32_t var_28
                    int32_t var_44
                    
                    if (eax_26 == 7 || eax_26 == 8 || (eax_26 == 0xa && eax_29 == 3)
                            || eax_29 == eax_26)
                        if ((&var_44)[eax_29] == 0)
                            (&var_44)[eax_29] = 1
                        else
                            var_ccc_1 = 0
                    else if ((&var_28)[eax_29] == 0)
                        (&var_28)[eax_29] = 1
                    else
                        var_ccc_1 = 0
                    *(arg8 + (arg11 << 2)) = esi_3
                    
                    if (var_ccc_1 != 0)
                        sub_442270(arg4, arg5, arg6, arg7, arg8, arg9 | 1 << (ecx_10 u% 0x20), arg10, 
                            arg11 + 1, ebx, arg13, arg14)
                        ecx_10 = var_ce4_1
                        edx_7 = var_cbc_1
                    
                    void* eax_36 = arg3[edi_3]
                    
                    if ((*(eax_36 + 0x1c) & 0x200) == 0)
                        int32_t eax_37 = *(eax_36 + 0x18)
                        
                        if ((&var_60)[eax_37] == 0)
                            (&var_60)[eax_37] = 1
                            sub_442270(arg4, arg5, arg6, arg7, arg8, arg9 | 1 << (ecx_10 u% 0x20), 
                                arg10 | 1 << (arg11 u% 0x20), arg11 + 1, ebx, arg13, arg14)
                            ecx_10 = var_ce4_1
                            edx_7 = var_cbc_1
                    
                    eax_15 = arg9
                
                ecx_10 += 1
                edx_7 = rol.d(edx_7, 1)
                var_ce4_1 = ecx_10
                var_cbc_1 = edx_7
            while (ecx_10 s< arg7)
    else
        void var_cb0
        sub_43a6c0(arg11, arg3, &var_cb0, arg2)
        int32_t esi_1 = 0
        
        if (i_2 s> 0)
            int32_t* ebx_1 = arg4
            int32_t* eax_6 = arg8 - ebx_1
            int32_t* var_cc8_1 = eax_6
            
            do
                int32_t eax_9 = arg10 s>> esi_1.b & 1
                sub_44da80(eax_9, arg2, &var_cb0, eax_9, *ebx_1, *(eax_6 + ebx_1))
                eax_6 = var_cc8_1
                ebx_1 = &ebx_1[1]
                esi_1 += 1
            while (esi_1 s< i_2)
            
            ebx = var_cbc
        
        sub_44e300(&var_cb0, arg2)
        int32_t i = arg2 + 1
        
        if (i s< *(*arg3 + 4))
            void var_b04
            void* edi_2 = &var_b04 + i * 0x1bc
            
            do
                *(edi_2 - 4) = 0
                *edi_2 = 0
                *(edi_2 + 8) = 0
                int32_t j
                
                do
                    j = sub_44e0e0(&var_cb0, i)
                while (j != 0)
                sub_4448d0(sub_44e300(&var_cb0, i), i, &var_cb0, 5)
                i += 1
                edi_2 += 0x1bc
            while (i s< *(*arg3 + 4))
            
            ebx = var_cbc
            i_2 = arg5
        
        int64_t xmm0_1 = sub_43c700()
        eax_15 = arg14
        
        if (not(xmm0_1 f<= *eax_15))
            *eax_15 = xmm0_1
            
            if (i_2 s> 0)
                int32_t* eax_17 = arg8 - ebx
                int32_t* var_cb4_1 = eax_17
                int32_t i_1
                
                do
                    int32_t eax_18 = *(eax_17 + ebx)
                    ebx += 4
                    *(ebx - 4) = eax_18
                    eax_17 = var_cb4_1
                    i_1 = i_2
                    i_2 -= 1
                while (i_1 != 1)
            
            *arg13 = arg10
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return arg10
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return eax_15
}
