// 函数名称: sub_43d6e0
// 虚拟地址: 0x43d6e0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_43d6e0(int32_t arg1, int32_t arg2, int32_t* arg3, void* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t ebx = 5
    int32_t var_188 = 5
    void* ecx = *arg3
    void* eax_4 = arg2 * 0x1bc + arg3
    void* var_190 = eax_4
    
    if (*(ecx + 0x11) != 0 || *(ecx + 0x12) != 0)
        ebx = 6
        var_188 = 6
    
    int32_t edx = *(eax_4 + 0x164)
    int128_t var_28
    int64_t var_18
    int32_t var_10
    
    if (*(eax_4 + 0x180) != 0)
        int32_t ecx_5 = 0
        
        if (edx s> 0)
            void* eax_10 = eax_4 + 0x29
            
            do
                if (*(eax_10 - 4) == 4 && *eax_10 == 0 && *(eax_10 - 1) == 0)
                    int32_t var_38_2 = 0
                    int32_t edi_4 = 1
                    int32_t var_20_2 = 1
                    int32_t var_30_1 = ecx_5
                    int32_t eax_20
                    
                    do
                        *(arg4 + 0x28) += 1
                        int32_t var_1c_2 = edi_4
                        int32_t var_1ac_4 = *(arg4 + 0x28) * 0x2c
                        int32_t var_1b0_3 = *(arg4 + 0x24)
                        int32_t eax_17 = sub_57fb2f()
                        int32_t ecx_13 = *(arg4 + 0x28) * 0x2c
                        *(arg4 + 0x24) = eax_17
                        *(ecx_13 + eax_17 - 0x2c) = var_38_2.o
                        *(ecx_13 + eax_17 - 0x1c) = var_28
                        *(ecx_13 + eax_17 - 0xc) = var_18
                        *(ecx_13 + eax_17 - 4) = var_10
                        int32_t var_1b4_3 = *(arg4 + 0x28) << 2
                        int32_t var_1b8_3 = *(arg4 + 0x2c)
                        eax_20 = sub_57fb2f()
                        int32_t ecx_14 = *(arg4 + 0x28)
                        edi_4 += 1
                        *(arg4 + 0x2c) = eax_20
                        *(eax_20 + (ecx_14 << 2) - 4) = 0
                    while (edi_4 s<= ebx)
                    
                    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                    return eax_20
                
                ecx_5 += 1
                eax_10 += 8
            while (ecx_5 s< edx)
            
            eax_4 = var_190
            edx = *(eax_4 + 0x164)
        
        int32_t ecx_6 = 0
        
        if (edx s> 0)
            void* eax_11 = eax_4 + 0x29
            
            do
                if (*(eax_11 - 4) == 4 && *eax_11 == 0)
                    int32_t edi_5 = 1
                    int32_t var_30_2 = ecx_6
                    int32_t var_38_3 = 3
                    int32_t var_20_3 = 1
                    int32_t ebx_3 = 2
                    void* ecx_17 = var_190 + 0x28 + (ecx_6 << 3)
                    int32_t eax_23 = var_188
                    void* var_184_2 = ecx_17
                    
                    do
                        if ((*ecx_17 & ebx_3.b) != 0)
                            *(arg4 + 0x28) += 1
                            int32_t var_1c_3 = edi_5
                            int32_t var_1ac_5 = *(arg4 + 0x28) * 0x2c
                            int32_t var_1b0_4 = *(arg4 + 0x24)
                            int32_t eax_25 = sub_57fb2f()
                            int32_t ecx_18 = *(arg4 + 0x28) * 0x2c
                            *(arg4 + 0x24) = eax_25
                            *(ecx_18 + eax_25 - 0x2c) = var_38_3.o
                            *(ecx_18 + eax_25 - 0x1c) = var_28
                            *(ecx_18 + eax_25 - 0xc) = var_18
                            *(ecx_18 + eax_25 - 4) = var_10
                            int32_t var_1b4_4 = *(arg4 + 0x28) << 2
                            int32_t var_1b8_4 = *(arg4 + 0x2c)
                            int32_t eax_28 = sub_57fb2f()
                            int32_t ecx_19 = *(arg4 + 0x28)
                            *(arg4 + 0x2c) = eax_28
                            *(eax_28 + (ecx_19 << 2) - 4) = 0
                            eax_23 = var_188
                            ecx_17 = var_184_2
                        
                        edi_5 += 1
                        ebx_3 = rol.d(ebx_3, 1)
                    while (edi_5 s<= eax_23)
                    
                    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                    return eax_23
                
                ecx_6 += 1
                eax_11 += 8
            while (ecx_6 s< edx)
        
        *(arg4 + 0x20) = 1
        void var_3c
        eax_4 = sub_446900(&var_3c, arg2, arg3, &var_3c)
        void* var_198_1 = eax_4
        int32_t edi_3 = 0
        
        if (eax_4 s> 0)
            do
                int32_t ebx_2 = *(&var_3c + (edi_3 << 2))
                
                if (ebx_2 s>= 0 || *(var_190 + 0x1cc) s>= 2)
                    int32_t var_194
                    void var_180
                    void var_e0
                    sub_43d3b0(&var_e0, arg2, arg3, ebx_2, &var_e0, 
                        sub_4465f0(&var_e0, arg2, arg3, ebx_2, &var_e0, &var_194, &var_188), var_194.b, 
                        var_188, 0, 0, &var_180, arg4)
                    eax_4 = var_198_1
                
                edi_3 += 1
            while (edi_3 s< eax_4)
    else
        int32_t i = 0
        int32_t var_38_1 = 1
        int32_t var_20_1 = 1
        int32_t i_1 = 0
        
        if (edx s> 0)
            void* edi_1 = eax_4 + 0x2b
            void* var_184_1 = edi_1
            
            do
                if (*(edi_1 - 6) == 4 && (*edi_1 & 2) == 0)
                    int32_t i_2 = i
                    int32_t edi_2 = 1
                    int32_t ebx_1 = var_188
                    
                    do
                        *(arg4 + 0x28) += 1
                        int32_t var_1c_1 = edi_2
                        int32_t var_1ac_1 = *(arg4 + 0x28) * 0x2c
                        int32_t var_1b0_1 = *(arg4 + 0x24)
                        int32_t eax_6 = sub_57fb2f()
                        int32_t ecx_1 = *(arg4 + 0x28) * 0x2c
                        *(arg4 + 0x24) = eax_6
                        *(ecx_1 + eax_6 - 0x2c) = var_38_1.o
                        *(ecx_1 + eax_6 - 0x1c) = var_28
                        *(ecx_1 + eax_6 - 0xc) = var_18
                        *(ecx_1 + eax_6 - 4) = var_10
                        int32_t var_1b4_1 = *(arg4 + 0x28) << 2
                        int32_t var_1b8_1 = *(arg4 + 0x2c)
                        int32_t eax_9 = sub_57fb2f()
                        int32_t ecx_2 = *(arg4 + 0x28)
                        edi_2 += 1
                        *(arg4 + 0x2c) = eax_9
                        *(eax_9 + (ecx_2 << 2) - 4) = 0
                    while (edi_2 s<= ebx_1)
                    
                    edi_1 = var_184_1
                    i = i_1
                    eax_4 = var_190
                
                i += 1
                edi_1 += 8
                i_1 = i
                var_184_1 = edi_1
            while (i s< *(eax_4 + 0x164))
            
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return eax_4
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return eax_4
}
