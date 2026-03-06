// 函数名称: sub_4404c0
// 虚拟地址: 0x4404c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int64_t* __convention("regparm")sub_4404c0(int32_t arg1, int64_t* arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9, void* arg10, int32_t arg11, int64_t* arg12, int64_t* arg13, int64_t** arg14)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int64_t* eax_2 = arg2
    int32_t edx = arg8
    void* esi = arg10
    int32_t i_1 = arg5
    int32_t var_c6c = edx
    
    if (edx != i_1)
        int32_t ecx_11 = 0
        int32_t var_c64_1 = 0
        
        if (i_1 s> 0)
            eax_2 = 1
            int64_t* var_c68_2 = 1
            
            do
                if ((arg11 & eax_2) == 0)
                    *(arg9 + (edx << 2)) = *(arg4 + (ecx_11 << 2))
                    int32_t eax_14 = arg11 | 1 << (ecx_11 u% 0x20)
                    sub_4404c0(arg4, arg5, arg6, arg7, edx + 1, arg9, esi, eax_14, arg12, arg13, arg14)
                    
                    if (arg6 != 0)
                        sub_4404c0(arg4, arg5, arg6, arg7, var_c6c + 1, arg9, esi, eax_14, 
                            arg12 | 1 << (var_c6c u% 0x20), arg13, arg14)
                    
                    edx = var_c6c
                    ecx_11 = var_c64_1
                    eax_2 = var_c68_2
                
                ecx_11 += 1
                eax_2 = rol.d(eax_2, 1)
                var_c64_1 = ecx_11
                var_c68_2 = eax_2
            while (ecx_11 s< arg5)
    else
        void var_c60
        sub_43a6c0(eax_2, arg3, &var_c60, eax_2)
        int32_t eax_3 = 0
        int32_t var_c68_1 = 0
        
        if (i_1 s> 0)
            int32_t ebx_1 = 1
            
            do
                int32_t eax_4 = *(arg9 + (eax_3 << 2))
                int32_t edx_3 = ebx_1 & arg7
                char var_395[0x389]
                var_395[eax_4 * 0xc] = edx_3 != 0
                int32_t eax_6
                eax_6.b = (ebx_1 & arg12) == 0
                int32_t eax_7
                eax_7.b = edx_3 != 0
                sub_445280(eax_7 + 3, eax_4, &var_c60, eax_2, (eax_7 + 3).b, eax_6)
                eax_3 = var_c68_1 + 1
                ebx_1 = rol.d(ebx_1, 1)
                var_c68_1 = eax_3
            while (eax_3 s< i_1)
        
        int64_t xmm0_1 = sub_43c700()
        eax_2 = arg13
        
        if (not(xmm0_1 f<= *eax_2))
            *eax_2 = xmm0_1
            eax_2 = arg12
            *arg14 = eax_2
            
            if (i_1 s> 0)
                int32_t* ebx_2 = arg9 - esi
                int32_t eax_10
                int32_t i
                
                do
                    eax_10 = *(ebx_2 + esi)
                    esi += 4
                    *(esi - 4) = eax_10
                    i = i_1
                    i_1 -= 1
                while (i != 1)
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return eax_10
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return eax_2
}
