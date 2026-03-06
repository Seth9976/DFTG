// 函数名称: sub_44f3f0
// 虚拟地址: 0x44f3f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_44f3f0(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* ebx = arg3
    int32_t esi = 0
    void* eax_2 = nullptr
    void* var_3c = ebx
    void* edi_1 = arg2 * 0x1bc + ebx
    
    if (arg4 - 1 u> 0x13)
        eax_2 = nullptr
    else
        switch (arg4 + &jump_table_44f898[9]:3)
            case &lookup_table_44f8c0, &lookup_table_44f8c0[1], &lookup_table_44f8c0[5], 
                    &lookup_table_44f8c0[8]
                int32_t i = *(edi_1 + 0x170)
                int32_t i_5 = i
                
                while (i != 0xffffffff)
                    void* ecx_4 = ebx + ((i * 3 + 0x231) << 2)
                    
                    if (*(ebx + ((i * 3 + 0x231) << 2) + 7) == 0)
                        void* ecx_5 = *ecx_4
                        int32_t edi_2 = 0
                        int32_t ebx_1 = *(ecx_5 + 0x34)
                        int32_t edi_3
                        
                        if (ebx_1 s<= 0)
                        label_44f485:
                            edi_3 = 0
                        else
                            void* ecx_6 = ecx_5 + 0x38
                            
                            while (*ecx_6 != 0)
                                edi_2 += 1
                                ecx_6 += 0xc
                                
                                if (edi_2 s>= ebx_1)
                                    goto label_44f485
                            
                            edi_3 = 1
                        
                        if (arg4 == 1)
                            esi += *(*ecx_4 + 0x10)
                        else if (arg4 == 6 && edi_3 != 0)
                            esi += *(*ecx_4 + 0x10)
                        
                        ebx = var_3c
                        void* ecx_8 = eax_2 + 1
                        
                        if (arg4 != 2)
                            ecx_8 = eax_2
                        
                        eax_2 = ecx_8
                        
                        if (arg4 == 9 && edi_3 == 0)
                            eax_2 = ecx_8 + 1
                    
                    i = sx.d(*(ebx + i_5 * 0xc + 0x8ca))
                    i_5 = i
                
                if (arg5 == 0xffffffff)
                label_44f550:
                    
                    if (arg4 == 1)
                        goto label_44f55d
                    
                    if (arg4 == 6)
                        goto label_44f57f
                    
                    if (arg4 != 2 && arg4 != 9)
                        goto label_44f5ad
                else
                    int32_t edi_4 = 0
                    void* ecx_13 = *(ebx + arg5 * 0xc + 0x8c4)
                    int32_t ebx_3 = *(ecx_13 + 0x34)
                    int32_t edi_5
                    
                    if (ebx_3 s<= 0)
                    label_44f4fd:
                        edi_5 = 0
                    else
                        void* ecx_14 = ecx_13 + 0x38
                        
                        while (*ecx_14 != 0)
                            edi_4 += 1
                            ecx_14 += 0xc
                            
                            if (edi_4 s>= ebx_3)
                                goto label_44f4fd
                        
                        edi_5 = 1
                    
                    if (arg4 == 1)
                        esi += *(ecx_13 + 0x10)
                    else if (arg4 == 6 && edi_5 != 0)
                        esi += *(ecx_13 + 0x10)
                    
                    void* ecx_16 = eax_2 + 1
                    
                    if (arg4 != 2)
                        ecx_16 = eax_2
                    
                    eax_2 = ecx_16
                    
                    if (arg4 != 9)
                        goto label_44f550
                    
                    if (edi_5 == 0)
                        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                        return ecx_16 + 1
            case &lookup_table_44f8c0[2]
            label_44f5ad:
                int32_t edi_6 = 0
                int128_t var_34
                __builtin_memset(&var_34, 0, 0x2c)
                int32_t i_7 = *(edi_1 + 0x164)
                
                if (i_7 s> 0)
                    void* ecx_25 = edi_1 + 0x24
                    int32_t i_1
                    
                    do
                        if ((*(ecx_25 + 7) & 2) == 0)
                            *(&var_34 + (zx.d(*ecx_25) << 2)) = 1
                        
                        ecx_25 += 8
                        i_1 = i_7
                        i_7 -= 1
                    while (i_1 != 1)
                    int32_t var_c
                    edi_6 = var_c
                
                int32_t eax_13 = esi + 1
                
                if (var_34:4.d == 0)
                    eax_13 = esi
                
                int32_t ecx_26 = eax_13 + 1
                
                if (var_34:8.d == 0)
                    ecx_26 = eax_13
                
                int32_t eax_14 = ecx_26 + 1
                
                if (var_34:0xc.d == 0)
                    eax_14 = ecx_26
                
                int32_t ecx_27 = eax_14 + 1
                int128_t var_24
                
                if (var_24.d == 0)
                    ecx_27 = eax_14
                
                int32_t eax_15 = ecx_27 + 1
                
                if (var_24:4.d == 0)
                    eax_15 = ecx_27
                
                int32_t ecx_28 = eax_15 + 1
                
                if (var_24:8.d == 0)
                    ecx_28 = eax_15
                
                int32_t eax_16 = ecx_28 + 1
                
                if (var_24:0xc.d == 0)
                    eax_16 = ecx_28
                
                int32_t ecx_29 = eax_16 + 1
                int64_t var_14
                
                if (var_14.d == 0)
                    ecx_29 = eax_16
                
                int32_t edx_3 = ecx_29 + 1
                
                if (var_14:4.d == 0)
                    edx_3 = ecx_29
                
                int32_t eax_17 = edx_3 + 1
                
                if (edi_6 == 0)
                    eax_17 = edx_3
                
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return eax_17
            case &lookup_table_44f8c0[3], &lookup_table_44f8c0[4], &lookup_table_44f8c0[0x13]
                int32_t i_6 = *(edi_1 + 0x164)
                
                if (i_6 s> 0)
                    eax_2 = edi_1 + 0x24
                    int32_t i_2
                    
                    do
                        if ((*(eax_2 + 7) & 2) == 0)
                            if ((arg4 == 4 || arg4 == 5) && *eax_2 == 2)
                                esi += 1
                            
                            if (arg4 == 0x14)
                                esi += 1
                        
                        eax_2 += 8
                        i_2 = i_6
                        i_6 -= 1
                    while (i_2 != 1)
                
                if (arg4 == 4)
                    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                    return (esi + 2) s/ 3 * 2
                
                if (arg4 == 5)
                    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                    return esi
                
                if (arg4 == 0x14)
                    goto label_44f55d
                
                goto label_44f6e5
            case &lookup_table_44f8c0[6]
            label_44f6e5:
                int32_t eax_23 = sub_444a70(eax_2, arg2, ebx, 3)
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return eax_23
            case &lookup_table_44f8c0[7]
                int32_t ecx_40 = *(edi_1 + 0x190)
                int32_t eax_24 = 1
                int32_t ecx_41 = ecx_40 - 1
                
                if (ecx_40 - 1 s>= 0)
                    int32_t temp1_1
                    
                    do
                        eax_24 += 1
                        temp1_1 = ecx_41
                        ecx_41 -= eax_24
                    while (temp1_1 - eax_24 s>= 0)
                
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return eax_24 - 1
            case &lookup_table_44f8c0[9], &lookup_table_44f8c0[0x12]
                int32_t i_3 = *(edi_1 + 0x170)
                
                if (i_3 != 0xffffffff)
                    do
                        int32_t ecx_44 = i_3 * 3
                        
                        if (*(ebx + (ecx_44 << 2) + 0x8cb) == 1)
                            void* eax_26
                            bool cond:12_1
                            
                            if (arg4 == 0xa)
                                eax_26 = *(ebx + (ecx_44 << 2) + 0x8c4)
                                cond:12_1 = *(eax_26 + 0x18) != 3
                            label_44f768:
                                
                                if (not(cond:12_1))
                                    esi += *(eax_26 + 0x14)
                            else if (arg4 == 0x13)
                                eax_26 = *(ebx + (ecx_44 << 2) + 0x8c4)
                                int32_t ecx_45 = *(eax_26 + 0x18)
                                
                                if (ecx_45 != 5)
                                    cond:12_1 = ecx_45 != 6
                                    goto label_44f768
                                
                                esi += *(eax_26 + 0x14)
                        
                        i_3 = sx.d(*(ebx + i_3 * 0xc + 0x8ca))
                    while (i_3 != 0xffffffff)
                    
                    eax_2 = nullptr
                
                if (arg4 == 0xa)
                label_44f57f:
                    int32_t eax_9
                    int32_t edx_2
                    edx_2:eax_9 = sx.q(esi + 1)
                    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                    return (eax_9 - edx_2) s>> 1
                
                if (arg4 != 0x13)
                    goto label_44f794
                
            label_44f55d:
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return (esi + 2) s/ 3
            case &lookup_table_44f8c0[0xa], &lookup_table_44f8c0[0xe], &lookup_table_44f8c0[0xf], 
                &lookup_table_44f8c0[0x10], &lookup_table_44f8c0[0x11]
            label_44f794:
                
                for (int32_t i_4 = *(edi_1 + 0x170); i_4 != 0xffffffff; 
                        i_4 = sx.d(*(ebx + i_4 * 0xc + 0x8ca)))
                    int32_t ecx_48 = (i_4 + 0xbb) * 3
                    int32_t* ecx_49 = ebx + (ecx_48 << 2)
                    
                    if (*(ebx + (ecx_48 << 2) + 7) == 1)
                        if (arg4 != 0xb)
                            if (arg4 != 0x10)
                                if (arg4 != 0x11)
                                    if (arg4 != 0xf)
                                        if (arg4 == 0x12 && *(*ecx_49 + 0x18) != 0)
                                            eax_2 += 1
                                    else if (*(*ecx_49 + 0x14) s>= 4)
                                        eax_2 += 1
                                else if (*(*ecx_49 + 0x18) == 6)
                                    eax_2 += 1
                            else if (*(*ecx_49 + 0x18) == 5)
                                eax_2 += 1
                        else if (*(*ecx_49 + 0x18) == 4)
                            eax_2 += 1
                
                if (arg4 == 0xb)
                    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                    return eax_2 * 2
                
                if (arg4 == 0xf)
                    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                    return eax_2 * 3
                
                if (arg4 == 0x11)
                    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                    return eax_2 * 2
                
                if (arg4 != 0x10 && arg4 != 0x12)
                    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                    return 2
            case &lookup_table_44f8c0[0xb]
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return 2
            case &lookup_table_44f8c0[0xc]
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return 3
            case &lookup_table_44f8c0[0xd]
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return 4
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return eax_2
}
