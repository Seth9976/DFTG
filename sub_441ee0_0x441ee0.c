// 函数名称: sub_441ee0
// 虚拟地址: 0x441ee0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int64_t* __convention("regparm")sub_441ee0(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t* arg8, int64_t* arg9, int32_t arg10, int32_t arg11, void* arg12, int32_t* arg13, int64_t* arg14)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t i_2 = arg7
    void* edi = arg12
    void* var_c9c = edi
    int64_t* eax_13
    
    if (arg11 != i_2)
        int32_t eax_18 = *(arg6 + (arg11 << 2))
        int32_t edx_7 = arg2 * 0x1bc
        int128_t var_38
        __builtin_memset(&var_38, 0, 0x2c)
        int32_t edx_8 = 0
        int32_t var_cb0_1 = 0
        eax_13 = (sx.d(*(edx_7 + (eax_18 << 3) + arg3 + 0x2a)) + 0xbb) * 3
        int64_t* var_cc0_1 = eax_13
        
        if (arg5 s> 0)
            eax_13 = arg9
            int32_t ecx_13 = 1
            int32_t var_c90_1 = 1
            
            do
                if ((eax_13 & ecx_13) == 0)
                    int32_t eax_23 = *(arg4 + (edx_8 << 2))
                    int32_t eax_24 = edx_7 + (eax_23 << 3)
                    
                    if ((*(eax_24 + arg3 + 0x2b) & 2) != 0
                            || *(&var_38 + (zx.d(*(eax_24 + arg3 + 0x24)) << 2)) == 0)
                        *(&var_38 + (zx.d(*(eax_24 + arg3 + 0x24)) << 2)) = 1
                        arg8[arg11] = eax_23
                        int32_t ecx_16 = arg9 | 1 << (edx_8 u% 0x20)
                        sub_441ee0(arg4, arg5, arg6, arg7, arg8, ecx_16, arg10, arg11 + 1, var_c9c, 
                            arg13, arg14)
                        
                        if ((*(arg3[var_cc0_1] + 0x1c) & 0x200) == 0)
                            sub_441ee0(arg4, arg5, arg6, arg7, arg8, ecx_16, 
                                arg10 | 1 << (arg11 u% 0x20), arg11 + 1, var_c9c, arg13, arg14)
                        
                        edx_8 = var_cb0_1
                        ecx_13 = var_c90_1
                    
                    eax_13 = arg9
                
                edx_8 += 1
                ecx_13 = rol.d(ecx_13, 1)
                var_cb0_1 = edx_8
                var_c90_1 = ecx_13
            while (edx_8 s< arg5)
    else
        void var_c88
        sub_43a6c0(arg11, arg3, &var_c88, arg2)
        
        if (i_2 s> 0)
            int32_t* esi_1 = arg8
            int32_t* ecx_3 = arg6 - esi_1
            int32_t* var_c94_1 = ecx_3
            int32_t edi_1 = 0
            
            do
                int32_t eax_7 = arg10 s>> edi_1.b & 1
                sub_44da80(eax_7, arg2, &var_c88, eax_7, *esi_1, *(ecx_3 + esi_1))
                ecx_3 = var_c94_1
                esi_1 = &esi_1[1]
                edi_1 += 1
            while (edi_1 s< i_2)
            
            edi = var_c9c
        
        sub_44e300(&var_c88, arg2)
        int32_t i = arg2 + 1
        
        if (i s< *(*arg3 + 4))
            void var_adc
            void* ebx_2 = &var_adc + i * 0x1bc
            
            do
                *(ebx_2 - 4) = 0
                *ebx_2 = 0
                *(ebx_2 + 8) = 0
                int32_t j
                
                do
                    j = sub_44e0e0(&var_c88, i)
                while (j != 0)
                sub_4448d0(sub_44e300(&var_c88, i), i, &var_c88, 5)
                i += 1
                ebx_2 += 0x1bc
            while (i s< *(*arg3 + 4))
            
            edi = var_c9c
            i_2 = arg7
        
        int64_t xmm0_1 = sub_43c700()
        eax_13 = arg14
        
        if (not(xmm0_1 f<= *eax_13))
            *eax_13 = xmm0_1
            
            if (i_2 s> 0)
                void* eax_15 = arg8 - edi
                void* var_c8c_1 = eax_15
                int32_t i_1
                
                do
                    int32_t eax_16 = *(eax_15 + edi)
                    edi += 4
                    *(edi - 4) = eax_16
                    eax_15 = var_c8c_1
                    i_1 = i_2
                    i_2 -= 1
                while (i_1 != 1)
            
            *arg13 = arg10
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return arg10
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return eax_13
}
