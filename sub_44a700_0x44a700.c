// 函数名称: sub_44a700
// 虚拟地址: 0x44a700
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_44a700(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t var_974 = 0
    int32_t i = 0
    int32_t var_970 = 0
    int32_t eax_2 = *arg1
    
    if (*(eax_2 + 4) s> 0)
        void* edi_1 = &arg1[0x6c]
        void* var_968_1 = edi_1
        
        do
            *(edi_1 - 8) = 0
            *(edi_1 - 4) = 0
            int32_t var_95c[0xc8]
            int32_t eax_4 = sub_4453c0(&var_95c, i, arg1, &var_95c, 1)
            int32_t eax_5 = 0
            int32_t var_960_1 = 0
            var_958
            
            if (eax_4 s> 0)
                do
                    int32_t ecx_2 = eax_5 << 3
                    
                    if ((*(*(&var_958 + ecx_2) + 4) & 0x80) != 0)
                        if (sub_444ec0(arg1, i) != 0)
                            int32_t eax_7 = ecx_2
                            int32_t ecx_5 = *(&var_95c + eax_7)
                            int32_t ecx_7 = *(*(&var_958 + eax_7) + 8)
                            int32_t edx_4 = *(edi_1 - 0x24) + ecx_7
                            *(edi_1 - 4) += ecx_7
                            *(edi_1 - 0x24) = edx_4
                            
                            if (edx_4 s> 0xa)
                                *(edi_1 - 0x24) = 0xa
                                eax_7 = 0xa - edx_4
                                ecx_7 += eax_7
                            
                            if (arg1[4] == 0 && ecx_7 != 0)
                                sub_444430(eax_7, 0x25, arg1, i, ecx_5, ecx_7, 0, 0)
                        
                        eax_5 = var_960_1
                    
                    eax_5 += 1
                    var_960_1 = eax_5
                while (eax_5 s< eax_4)
            
            int32_t j
            
            do
                j = sub_4487d0(arg1, i)
            while (j != 0)
            
            int32_t ecx_10 = eax_4
            int32_t j_1 = j
            
            if (ecx_10 s> 0)
                int32_t j_2 = j
                
                do
                    if ((*(*(&var_958 + (j_2 << 3)) + 4) & 4) != 0)
                        sub_447a90(arg1, i)
                        ecx_10 = eax_4
                    
                    j_2 += 1
                while (j_2 s< ecx_10)
                
                edi_1 = var_968_1
            
            int32_t eax_9 = 0
            int32_t var_960_2 = 0
            
            if (ecx_10 s> 0)
                do
                    void* ecx_12 = *(&var_958 + (eax_9 << 3))
                    
                    if ((*(ecx_12 + 4) & 0x200) == 0)
                    label_44aa69:
                        
                        if ((*(ecx_12 + 4) & 0x100) != 0)
                            int32_t edx_13 = var_95c[eax_9 * 2]
                            void* eax_28 = edx_13 * 0xc + 0x8cd + arg1
                            
                            if (*eax_28 != 0)
                                int32_t eax_29 = *(edi_1 - 0x24)
                                int32_t ecx_23 = 1
                                *(edi_1 - 4) += 1
                                *(edi_1 - 0x24) = eax_29 + 1
                                
                                if (eax_29 + 1 s> 0xa)
                                    *(edi_1 - 0x24) = 0xa
                                    ecx_23 = 0xb - (eax_29 + 1)
                                
                                if (arg1[4] == 0 && ecx_23 != 0)
                                    sub_444430(eax_29 + 1, 0x25, arg1, i, edx_13, ecx_23, 0, 0)
                                
                                *eax_28 = 0
                            
                            eax_9 = var_960_2
                    else
                        if (arg1[4] == 0)
                            int32_t ecx_14 = sub_4450a0(arg1, i)
                            var_970 = 1
                            int32_t var_524 = ecx_14
                            var_974 = 1
                            
                            if (ecx_14 == 0xffffffff)
                                sub_447d40(arg1)
                                ecx_14 = sub_4450a0(arg1, i)
                                var_524 = ecx_14
                                
                                if (ecx_14 == 0xffffffff)
                                    sub_444530("Failed draw extra!\n")
                                    noreturn
                            
                            if (arg1[4] == 0)
                                void* eax_13 = arg1[ecx_14 * 3 + 0x231]
                                sub_444430(eax_13, 0x19, arg1, i, ecx_14, *(eax_13 + 0xc), 0, 0)
                            
                            char var_63c
                            
                            if (*(edi_1 + 0x14) s< *(edi_1 + 0x10))
                                sub_444560(&var_524, i, arg1, 8, &var_524, &var_974, &var_63c, &var_970)
                            else
                                (*(*(edi_1 - 0x194) + 4))(arg1, i, 8, &var_524, &var_974, &var_63c, 
                                    &var_970, 0, 0, 0)
                                
                                if (arg1[0x30f] == 0)
                                    int32_t eax_18 = *(*(edi_1 - 0x194) + 0xc)
                                    
                                    if (eax_18 != 0)
                                        eax_18(arg1, i)
                                    
                                    sub_444560(&var_524, i, arg1, 8, &var_524, &var_974, &var_63c, 
                                        &var_970)
                            
                            int32_t eax_20
                            eax_20.b = var_63c
                            *(&arg1[var_524 * 3] + 0x8cb) = eax_20.b
                            char var_98c_4
                            
                            var_98c_4 = var_63c.d != 0 ? 4 : 3
                            
                            int32_t eax_21 = sub_445280(eax_20, var_524, arg1, i, var_98c_4, 1)
                            
                            if (arg1[4] == 0)
                                int32_t edx_11 =
                                    sub_444430(eax_21, 0x1a, arg1, i, var_524, var_63c.d, 0, 0)
                                int32_t ecx_22 = arg1[var_524 * 3 + 0x231]
                                int32_t var_988_3 = *(ecx_22 + (var_63c.d << 2))
                                int32_t var_98c_5 = *(edi_1 - 0x198)
                                void var_40c
                                sub_41da20(&var_40c, edx_11, ecx_22, &var_40c, 
                                    "%s takes extra tile %s.\n")
                                sub_4892e0(&var_40c)
                            
                            eax_9 = var_960_2
                            goto label_44aa69
                        
                        *edi_1 += 1
                    
                    eax_9 += 1
                    var_960_2 = eax_9
                while (eax_9 s< eax_4)
            
            sub_4448d0(eax_9, i, arg1, 1)
            eax_2 = *arg1
            i += 1
            edi_1 += 0x1bc
            var_968_1 = edi_1
        while (i s< *(eax_2 + 4))
    
    int32_t i_1 = 0
    void* edi_2 = arg1 + 0x8cb
    
    do
        if (*(edi_2 - 2) == 1)
            eax_2 = sub_445280(eax_2, i_1, arg1, 0xffffffff, 0, 0)
            *edi_2 = 0xff
        
        i_1 += 1
        edi_2 += 0xc
    while (i_1 s< 0x46)
    
    void* result = sub_4459a0(arg1)
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
