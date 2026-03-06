// 函数名称: sub_44bc80
// 虚拟地址: 0x44bc80
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_44bc80(int32_t arg1, int32_t arg2, void** arg3, uint32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t esi = 0
    void** edi = arg3
    void* eax_2 = arg2 * 0x1bc
    void* eax_3 = eax_2 + edi
    void** eax_5 = &edi[(arg4 + 0xbb) * 3]
    void** var_89c = edi
    int32_t var_870 = 0
    void* var_884 = nullptr
    int32_t var_890 = 0
    int32_t var_888 = 0
    int32_t var_86c[0xc8]
    int32_t eax_7 = sub_4453c0(&var_86c, arg2, edi, &var_86c, 3)
    void* edx = eax_3
    int32_t ecx_3 = 0
    void* eax_8 = *(edx + 0x164)
    int32_t var_4ac[0x28]
    
    if (eax_8 s> 0)
        void* edx_1 = edx + 0x25
        
        do
            if (*edx_1 == 6)
                var_4ac[esi] = ecx_3
                esi += 1
            
            ecx_3 += 1
            edx_1 += 8
        while (ecx_3 s< eax_8)
        
        edx = eax_3
        var_870 = esi
    
    if (esi s< arg5)
        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
        return 0
    
    if (esi s> arg5)
        if (*(edx + 0x1c4) s< *(edx + 0x1c0))
            eax_8 = sub_444560(&var_4ac, arg2, edi, 0xb, &var_4ac, &var_870, 0, nullptr)
        else
            eax_8 = (*(*(edx + 0x1c) + 4))(edi, arg2, 0xb, &var_4ac, &var_870, 0, 0, arg5, 1, 0)
            
            if (edi[0x30f] == 0)
                int32_t eax_15 = *(*(eax_3 + 0x1c) + 0xc)
                
                if (eax_15 != 0)
                    eax_15(edi, arg2)
                
                eax_8 = sub_444560(&var_4ac, arg2, edi, 0xb, &var_4ac, &var_870, 0, nullptr)
        
        esi = var_870
    
    int32_t ebx_1 = 0
    
    if (esi s> 0)
        do
            eax_8 = eax_3
            int32_t esi_1 = var_4ac[ebx_1]
            void* ecx_9 = eax_8 + 0x18 + (esi_1 << 3)
            
            if (*(eax_8 + 0x18 + (esi_1 << 3) + 0x10) != 0x48)
            label_44be26:
                
                if (edi[4] == 0)
                    sub_444430(eax_8, 0x1d, edi, arg2, esi_1, 0, 0, 0)
                    eax_8 = &edi[esi_1 * 2]
                    
                    if ((*(eax_8 + eax_2 + 0x2b) & 2) != 0)
                        sub_444430(eax_8, 0x2d, edi, arg2, esi_1, 0, 0, 0)
                
                eax_8.b = 2
            else
                eax_8 = *edi
                
                if (*(eax_8 + 0x11) != 0 || *(eax_8 + 0x12) != 0)
                    goto label_44be26
                
                eax_8.b = 1
            
            *(ecx_9 + 0xd) = eax_8.b
            ebx_1 += 1
            esi = var_870
        while (ebx_1 s< esi)
    
    void* edx_3 = nullptr
    void* var_87c = nullptr
    void var_40c
    
    if (eax_7 s> 0)
        do
            var_868
            void* ebx_4 = *(&var_868 + (edx_3 << 3))
            void* var_880_2 = ebx_4
            
            if ((*(ebx_4 + 4) & 1) != 0)
                eax_8 = nullptr
                int32_t ecx_13 = 0
                var_884 = nullptr
                int32_t var_54c[0x28]
                
                if (esi s> 0)
                    do
                        int32_t edx_4 = var_4ac[ecx_13]
                        
                        if (((*(ebx_4 + 4) & 0x200) == 0 || *(eax_3 + (edx_4 << 3) + 0x24) == 2)
                                && *(eax_3 + (edx_4 << 3) + 0x25) == 2)
                            var_54c[eax_8] = edx_4
                            eax_8 += 1
                            var_884 = eax_8
                        
                        ecx_13 += 1
                    while (ecx_13 s< esi)
                    
                    edi = var_89c
                    edx_3 = var_87c
                
                int32_t ecx_14 = *(ebx_4 + 8)
                
                if (ecx_14 s< eax_8)
                    if (*(eax_3 + 0x1c4) s< *(eax_3 + 0x1c0))
                        edx_3 = sub_444560(&var_54c, arg2, edi, 0xc, &var_54c, &var_884, 0, nullptr)
                    else
                        edx_3 = (*(*(eax_3 + 0x1c) + 4))(edi, arg2, 0xc, &var_54c, &var_884, 0, 0, 
                            ecx_14, var_86c[edx_3 * 2], 0)
                        
                        if (edi[0x30f] == 0)
                            int32_t eax_21 = *(*(eax_3 + 0x1c) + 0xc)
                            
                            if (eax_21 != 0)
                                eax_21(edi, arg2)
                            
                            edx_3 = sub_444560(&var_54c, arg2, edi, 0xc, &var_54c, &var_884, 0, nullptr)
                    
                    eax_8 = var_884
                    esi = var_870
                
                int32_t ebx_3 = 0
                
                if (eax_8 s> 0)
                    void* ecx_16 = eax_3
                    
                    do
                        void* esi_3 = ecx_16 + (var_54c[ebx_3] << 3)
                        
                        if (edi[4] == 0)
                            int32_t var_8b8_3 = (&data_5b4ff0)[zx.d(*(esi_3 + 0x24))]
                            int32_t var_8bc_4 = *(ecx_16 + 0x18)
                            sub_41da20(&var_40c, edx_3, ecx_16, &var_40c, "%s rebates %s.\n")
                            sub_4892e0(&var_40c)
                            int32_t eax_26 = var_54c[ebx_3]
                            sub_444430(eax_26, 0x32, edi, arg2, eax_26, 0, 0, 0)
                            edx_3 = eax_2
                            void* eax_27 = &edi[eax_26 * 2]
                            
                            if ((*(eax_27 + edx_3 + 0x2b) & 2) != 0)
                                edx_3 = sub_444430(eax_27, 0x2d, edi, arg2, eax_26, 0, 0, 0)
                            
                            ecx_16 = eax_3
                        
                        *(esi_3 + 0x25) = 1
                        ebx_3 += 1
                        eax_8 = var_884
                    while (ebx_3 s< eax_8)
                    
                    esi = var_870
                
                if (edi[4] == 0)
                    eax_8 = sub_444430(var_87c, 0x13, edi, arg2, var_86c[var_87c * 2], 1, eax_8, arg4)
                    esi = var_870
                
                edx_3 = var_87c
                ebx_4 = var_880_2
            
            int32_t ecx_23 = *(ebx_4 + 4)
            
            if ((ecx_23.b & 0x40) == 0)
            label_44c1d2:
                
                if ((*(ebx_4 + 4) & 0x80) != 0)
                    int32_t edx_8 = 0
                    
                    if (esi s<= 0)
                        ecx_23 = var_888
                    else
                        int32_t ebx_7 = var_890
                        
                        do
                            ecx_23.b = *(eax_3 + (var_4ac[edx_8] << 3) + 0x24)
                            int32_t eax_34 = ebx_7 + 1
                            
                            if (ecx_23.b != 2)
                                eax_34 = ebx_7
                            
                            ebx_7 = eax_34
                            int32_t eax_36 = var_888 + 1
                            
                            if (ecx_23.b != 5)
                                eax_36 = var_888
                            
                            edx_8 += 1
                            ecx_23 = eax_36
                            var_888 = ecx_23
                        while (edx_8 s< esi)
                        
                        edi = var_89c
                        var_890 = ebx_7
                        var_888 = ecx_23
                    
                    int32_t ebx_8 = ecx_23
                    
                    if (ecx_23 s>= var_890)
                        ebx_8 = var_890
                    
                    int32_t ecx_27 = *(var_880_2 + 8) * ebx_8
                    *(eax_3 + 0x18c) += ecx_27
                    int32_t edx_9 = *(eax_3 + 0x18c)
                    *(eax_3 + 0x1ac) += ecx_27
                    
                    if (edx_9 s> 0xa)
                        ecx_27 += 0xa - edx_9
                        *(eax_3 + 0x18c) = 0xa
                    
                    eax_8 = edi[4]
                    
                    if (eax_8 == 0)
                        if (ecx_27 != 0)
                            sub_444430(var_87c, 0x25, edi, arg2, var_86c[var_87c * 2], ecx_27, eax_8, 
                                eax_8)
                            eax_8 = edi[4]
                            esi = var_870
                        
                        if (eax_8 == 0)
                            eax_8 = sub_444430(var_87c, 0x13, edi, arg2, var_86c[var_87c * 2], 0x80, 
                                *(var_880_2 + 8) * ebx_8, arg4)
                            esi = var_870
                
                edx_3 = var_87c
            else
                if ((ecx_23 & 0x8000) != 0)
                    eax_8 = *eax_5
                
                if ((ecx_23 & 0x8000) == 0 || *(eax_8 + 0x18) != 4)
                    if ((ecx_23 & 0x400) != 0)
                        eax_8 = *eax_5
                    
                    if ((ecx_23 & 0x400) == 0 || *(eax_8 + 0x18) == 4)
                        if ((ecx_23 & 0x800) != 0)
                            eax_8 = *eax_5
                        
                        if ((ecx_23 & 0x800) == 0 || *(eax_8 + 0x18) == 5)
                            if ((ecx_23 & 0x10000) != 0)
                                eax_8 = *eax_5
                            
                            if ((ecx_23 & 0x10000) == 0
                                    || *(eax_8 + (zx.d(*(eax_5 + 7)) << 2) + 0x10) s>= 3)
                                int32_t ebx_6 = var_86c[edx_3 * 2]
                                ecx_23 = *(var_880_2 + 8)
                                *(eax_3 + 0x18c) += ecx_23
                                int32_t edx_6 = *(eax_3 + 0x18c)
                                *(eax_3 + 0x1ac) += ecx_23
                                
                                if (edx_6 s> 0xa)
                                    ecx_23 += 0xa - edx_6
                                    *(eax_3 + 0x18c) = 0xa
                                
                                eax_8 = edi[4]
                                
                                if (eax_8 == 0)
                                    if (ecx_23 != 0)
                                        sub_444430(eax_8, eax_8 + 0x25, edi, arg2, ebx_6, ecx_23, 
                                            eax_8, eax_8)
                                        eax_8 = edi[4]
                                        esi = var_870
                                    
                                    if (eax_8 == 0)
                                        eax_8, ecx_23 = sub_444430(var_880_2, 0x13, edi, arg2, ebx_6, 
                                            0x40, *(var_880_2 + 8), arg4)
                                        esi = var_870
                                
                                ebx_4 = var_880_2
                                goto label_44c1d2
            
            edx_3 += 1
            var_87c = edx_3
        while (edx_3 s< eax_7)
    
    if (edi[4] == 0)
        sub_444430(sub_44bae0(eax_8, arg2, edi, arg4, 1, 0), 0x23, edi, arg2, arg4, 0, 0, 0)
        esi = var_870
    
    int32_t edx_12 = sub_445590(&var_4ac, arg2, edi, arg4, &var_4ac, esi)
    
    if (edi[4] == 0)
        uint32_t ecx_33 = zx.d(*(eax_5 + 7))
        int32_t var_8b8_10 = *(*eax_5 + (ecx_33 << 2))
        int32_t var_8bc_11 = *(eax_3 + 0x18)
        sub_41da20(&var_40c, edx_12, ecx_33, &var_40c, "%s settles %s.\n")
        sub_4892e0(&var_40c)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return 1
}
