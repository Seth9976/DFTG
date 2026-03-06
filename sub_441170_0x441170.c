// 函数名称: sub_441170
// 虚拟地址: 0x441170
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_441170(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t* arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, void* arg9, int32_t arg10, void* arg11, void* arg12)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* esi = arg11
    int32_t i_3 = arg5
    int32_t var_d30 = 0
    int32_t* edi = arg4
    void* eax_9
    
    if (arg10 != i_3)
        int32_t eax_13 = edi[arg10]
        int32_t edx_5 = 0
        int128_t var_b0
        __builtin_memset(&var_b0, 0, 0x2c)
        int32_t var_d18_1 = 0
        eax_9 = arg2 * 0x1bc + arg3
        int32_t ecx_6 = arg7
        void* var_d34_1 = eax_9
        
        if (ecx_6 s> 0)
            eax_9 = arg9
            int32_t ecx_7 = 1
            int32_t var_d1c_1 = 1
            
            do
                if ((eax_9 & ecx_7) == 0)
                    int32_t eax_16 = *(arg6 + (edx_5 << 2))
                    int32_t ebx_3 = *(arg3[eax_16 * 3 + 0x231] + 0x18)
                    
                    if (zx.d(*(var_d34_1 + (eax_13 << 3) + 0x24)) == ebx_3)
                        *(&var_b0 + (ebx_3 << 2)) = 1
                        *(arg8 + (arg10 << 2)) = eax_16
                        sub_441170(edi, arg5, arg6, arg7, arg8, arg9 | 1 << (edx_5 u% 0x20), arg10 + 1, 
                            esi, arg12)
                        ecx_7 = var_d1c_1
                        edx_5 = var_d18_1
                        var_d30 = 1
                    
                    eax_9 = arg9
                
                edx_5 += 1
                ecx_7 = rol.d(ecx_7, 1)
                var_d18_1 = edx_5
                var_d1c_1 = ecx_7
            while (edx_5 s< arg7)
            
            ecx_6 = arg7
        
        int32_t edx_7 = 0
        int32_t var_d18_2 = 0
        
        if (ecx_6 s> 0)
            eax_9 = arg9
            int32_t ecx_10 = 1
            int32_t var_d0c_2 = 1
            
            do
                if ((eax_9 & ecx_10) == 0)
                    int32_t eax_28 = *(arg6 + (edx_7 << 2))
                    int32_t eax_31 = *(arg3[eax_28 * 3 + 0x231] + 0x18)
                    
                    if (*(&var_b0 + (eax_31 << 2)) == 0
                            && (var_d30 == 0 || eax_31 s>= zx.d(*(var_d34_1 + (eax_13 << 3) + 0x24))))
                        *(&var_b0 + (eax_31 << 2)) = 1
                        *(arg8 + (arg10 << 2)) = eax_28
                        sub_441170(edi, arg5, arg6, arg7, arg8, arg9 | 1 << (edx_7 u% 0x20), arg10 + 1, 
                            esi, arg12)
                        ecx_10 = var_d0c_2
                        edx_7 = var_d18_2
                    
                    eax_9 = arg9
                
                edx_7 += 1
                ecx_10 = rol.d(ecx_10, 1)
                var_d18_2 = edx_7
                var_d0c_2 = ecx_10
            while (edx_7 s< arg7)
    else
        void var_d00
        int32_t* eax_5 = sub_43a6c0(arg10, arg3, &var_d00, arg2)
        
        if (i_3 s> 0)
            int32_t* esi_2 = arg8 - edi
            int32_t i
            
            do
                eax_5 = sub_44d140(eax_5, arg2, &var_d00, *edi, *(esi_2 + edi))
                edi = &edi[1]
                i = i_3
                i_3 -= 1
            while (i != 1)
            i_3 = arg5
        
        sub_44d510(&var_d00, arg2)
        int32_t i_1 = arg2 + 1
        
        if (i_1 s< *(*arg3 + 4))
            do
                sub_44d930(&var_d00, i_1)
                i_1 += 1
            while (i_1 s< *(*arg3 + 4))
            
            i_3 = arg5
        
        int64_t xmm0_1 = sub_43c700()
        eax_9 = arg12
        
        if (not(xmm0_1 f<= *eax_9))
            *eax_9 = xmm0_1
            
            if (i_3 s> 0)
                int32_t* eax_11 = arg8 - esi
                int32_t* var_d04_1 = eax_11
                int32_t i_2
                
                do
                    int32_t eax_12 = *(eax_11 + esi)
                    esi += 4
                    *(esi - 4) = eax_12
                    eax_11 = var_d04_1
                    i_2 = i_3
                    i_3 -= 1
                while (i_2 != 1)
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return eax_11
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return eax_9
}
