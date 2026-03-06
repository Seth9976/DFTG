// 函数名称: sub_43d3b0
// 虚拟地址: 0x43d3b0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_43d3b0(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4, int32_t arg5, int32_t arg6, char arg7, int32_t arg8, int32_t arg9, int32_t arg10, int32_t* arg11, void* arg12)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* esi = arg11
    int32_t* edx = arg3
    int32_t i_2 = arg6
    int32_t eax_3 = arg8
    int32_t* var_40 = edx
    int32_t var_3c = 5
    
    if (arg9 != i_2 && eax_3 != 0)
        sub_43d3b0(arg4, arg5, i_2, arg7.d, eax_3, arg9 + 1, arg10, esi, arg12)
        int32_t ecx_3 = arg2 * 0x1bc
        int32_t eax_5 = arg9 << 2
        int32_t edx_3 = arg7.d
        int32_t ecx_4 = ecx_3 + (*(eax_5 + arg5) << 3)
        
        if ((edx_3.b & 1) == 0)
            eax_3.b = *(ecx_4 + var_40 + 0x29)
        
        if ((edx_3.b & 1) != 0 || eax_3.b == *(ecx_4 + var_40 + 0x27))
            void* eax_6 = *var_40
            int32_t eax_7
            
            if (*(eax_6 + 0x11) != 0 || *(eax_6 + 0x12) != 0)
                eax_7 = 6
                var_3c = 6
            else
                eax_7 = 5
            
            int32_t ecx_5 = 1
            int32_t ebx_2 = 2
            int32_t var_4c_1 = 1
            
            do
                if ((edx_3 & ebx_2) != 0)
                    if (zx.d(*(ecx_3 + (*(eax_5 + arg5) << 3) + var_40 + 0x29)) != ecx_5)
                        esi[arg9] = ecx_5
                        sub_43d3b0(arg4, arg5, arg6, edx_3, arg8 - 1, arg9 + 1, 
                            arg10 | 1 << (arg9 u% 0x20), esi, arg12)
                        ecx_5 = var_4c_1
                        edx_3 = arg7.d
                    
                    eax_7 = var_3c
                
                ecx_5 += 1
                ebx_2 = rol.d(ebx_2, 1)
                var_4c_1 = ecx_5
            while (ecx_5 s<= eax_7)
            
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return eax_7
    else if (arg10 != 0 && ((arg7 & 1) == 0 || eax_3 s<= 0))
        eax_3 = arg4
        int32_t ecx_10 = 0
        int32_t var_34 = 2
        int32_t var_30_1 = eax_3
        int32_t var_1c_1 = 0
        int32_t var_2c[0x2]
        int32_t var_18
        
        if (eax_3 s>= 0)
            if (i_2 s> 0)
                int32_t edx_9 = 1
                void* eax_37 = arg5 - esi
                void* var_38_1 = eax_37
                int32_t i
                
                do
                    if ((arg10 & edx_9) != 0)
                        var_2c[ecx_10] = *(esi + eax_37)
                        (&var_18)[var_1c_1] = *esi
                        eax_37 = var_38_1
                        ecx_10 = var_1c_1 + 1
                        var_1c_1 = ecx_10
                    
                    esi = &esi[1]
                    edx_9 = rol.d(edx_9, 1)
                    i = i_2
                    i_2 -= 1
                while (i != 1)
            
            eax_3 = sub_43d340(arg12, &var_34)
        else
            int32_t var_44_1 = 0
            
            if (i_2 s> 0)
                int32_t eax_18 = 1
                int32_t var_3c_1 = 1
                
                do
                    if ((arg10 & eax_18) == 0)
                        int32_t ecx_11 = *(arg5 + (ecx_10 << 2))
                        int32_t eax_20 = arg2 * 0x1bc
                        void* esi_2 = eax_20 + (ecx_11 << 3) + edx
                        int32_t ecx_12 = 0
                        int32_t* edx_5 = esi
                        int32_t* eax_22 = arg5 - edx_5
                        
                        while (true)
                            if ((arg10 & 1 << ecx_12.b) != 0)
                                int32_t eax_26
                                eax_26.b = *(eax_20 + (*(eax_22 + edx_5) << 3) + var_40 + 0x24)
                                i_2 = arg6
                                
                                if (eax_26.b == *(esi_2 + 0x24))
                                    if (*edx_5 == zx.d(*(esi_2 + 0x29)))
                                        break
                                    
                                    if (*(esi_2 + 0x27) == 0)
                                        break
                            
                            ecx_12 += 1
                            edx_5 = &edx_5[1]
                            
                            if (ecx_12 s>= i_2)
                                int32_t edx_6 = 1
                                int32_t* esi_3 = esi
                                var_2c[0] = ecx_11
                                int32_t eax_29 = 1
                                var_18 = 0
                                int32_t var_1c_2 = 1
                                int32_t i_1
                                
                                do
                                    if ((arg10 & eax_29) != 0)
                                        var_2c[edx_6] = *(esi_3 + eax_22)
                                        (&var_18)[var_1c_2] = *esi_3
                                        edx_6 = var_1c_2 + 1
                                        var_1c_2 = edx_6
                                    
                                    esi_3 = &esi_3[1]
                                    eax_29 = rol.d(eax_29, 1)
                                    i_1 = i_2
                                    i_2 -= 1
                                while (i_1 != 1)
                                *(arg12 + 0x28) += 1
                                int32_t var_6c_3 = *(arg12 + 0x28) * 0x2c
                                int32_t var_70_3 = *(arg12 + 0x24)
                                int32_t eax_31 = sub_57fb2f()
                                void* ecx_16 = *(arg12 + 0x28) * 0x2c
                                int128_t xmm0_1 = var_34.o
                                *(arg12 + 0x24) = eax_31
                                *(ecx_16 + eax_31 - 0x2c) = xmm0_1
                                void* ecx_17 = ecx_16 + eax_31
                                int128_t var_24
                                *(ecx_17 - 0x1c) = var_24
                                int64_t var_14
                                *(ecx_17 - 0xc) = var_14
                                int32_t var_c
                                *(ecx_17 - 4) = var_c
                                int32_t var_74_3 = *(arg12 + 0x28) << 2
                                int32_t var_78_3 = *(arg12 + 0x2c)
                                int32_t eax_35 = sub_57fb2f()
                                int32_t ecx_18 = *(arg12 + 0x28)
                                *(arg12 + 0x2c) = eax_35
                                *(eax_35 + (ecx_18 << 2) - 4) = i_2
                                i_2 = arg6
                                break
                        
                        eax_18 = var_3c_1
                        edx = var_40
                        ecx_10 = var_44_1
                    
                    ecx_10 += 1
                    eax_18 = rol.d(eax_18, 1)
                    var_44_1 = ecx_10
                    var_3c_1 = eax_18
                while (ecx_10 s< i_2)
                
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return eax_18
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return eax_3
}
