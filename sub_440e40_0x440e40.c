// 函数名称: sub_440e40
// 虚拟地址: 0x440e40
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int64_t* __convention("regparm")sub_440e40(int32_t arg1, int64_t* arg2, int32_t* arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t* arg8, int32_t arg9, int32_t arg10, void* arg11, int64_t* arg12)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t i_3 = arg7
    int64_t* eax_2 = arg2
    void* esi = arg11
    int64_t* var_c8c = eax_2
    
    if (arg10 != i_3)
        int32_t edx_7 = 0
        
        if (arg5 s> 0)
            do
                if ((arg9 & 1 << edx_7.b) == 0)
                    int32_t ecx_13 = *(arg4 + (edx_7 << 2))
                    
                    if (zx.d(*(var_c8c * 0x1bc + arg3 + (ecx_13 << 3) + 0x24))
                            == *(arg3[(*(arg6 + (arg10 << 2)) + 0xbb) * 3] + 0x18))
                        arg8[arg10] = ecx_13
                        int32_t eax_32 = sub_440e40(arg4, arg5, arg6, arg7, arg8, 
                            arg9 | 1 << (edx_7 u% 0x20), arg10 + 1, esi, arg12)
                        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                        return eax_32
                
                edx_7 += 1
            while (edx_7 s< arg5)
            
            eax_2 = var_c8c
        
        int32_t ecx_15 = 0
        int128_t var_38
        __builtin_memset(&var_38, 0, 0x2c)
        int32_t var_c9c_2 = 0
        
        if (arg5 s> 0)
            int32_t* edx_8 = arg3
            int32_t edi_3 = 1
            
            do
                if ((arg9 & edi_3) == 0)
                    int32_t ebx_3 = *(arg4 + (ecx_15 << 2))
                    uint32_t eax_21 = zx.d(*(eax_2 * 0x1bc + edx_8 + (ebx_3 << 3) + 0x24))
                    
                    if (*(&var_38 + (eax_21 << 2)) == 0)
                        *(&var_38 + (eax_21 << 2)) = 1
                        arg8[arg10] = ebx_3
                        sub_440e40(arg4, arg5, arg6, arg7, arg8, arg9 | 1 << (var_c9c_2 u% 0x20), 
                            arg10 + 1, esi, arg12)
                        ecx_15 = var_c9c_2
                        edx_8 = arg3
                
                eax_2 = var_c8c
                ecx_15 += 1
                edi_3 = rol.d(edi_3, 1)
                var_c9c_2 = ecx_15
            while (ecx_15 s< arg5)
    else
        void var_c88
        int32_t* eax_3 = sub_43a6c0(eax_2, arg3, &var_c88, eax_2)
        
        if (i_3 s> 0)
            int32_t i_4 = i_3
            int32_t* edi_1 = arg8
            int32_t* ecx_6 = arg6 - edi_1
            int32_t* var_c94_1 = ecx_6
            int32_t i
            
            do
                eax_3 = sub_44d140(eax_3, var_c8c, &var_c88, *edi_1, *(ecx_6 + edi_1))
                ecx_6 = var_c94_1
                edi_1 = &edi_1[1]
                i = i_4
                i_4 -= 1
            while (i != 1)
            i_3 = arg7
        
        sub_44d510(&var_c88, var_c8c)
        void* i_1 = var_c8c + 1
        
        if (i_1 s< *(*arg3 + 4))
            do
                sub_44d930(&var_c88, i_1)
                i_1 += 1
            while (i_1 s< *(*arg3 + 4))
            
            i_3 = arg7
        
        int64_t xmm0_1 = sub_43c700()
        eax_2 = arg12
        
        if (not(xmm0_1 f<= *eax_2))
            *eax_2 = xmm0_1
            
            if (i_3 s> 0)
                void* eax_7 = arg8 - esi
                void* var_c90_1 = eax_7
                int32_t i_2
                
                do
                    int32_t eax_8 = *(eax_7 + esi)
                    esi += 4
                    *(esi - 4) = eax_8
                    eax_7 = var_c90_1
                    i_2 = i_3
                    i_3 -= 1
                while (i_2 != 1)
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return eax_7
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return eax_2
}
