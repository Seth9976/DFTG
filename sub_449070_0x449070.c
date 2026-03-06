// 函数名称: sub_449070
// 虚拟地址: 0x449070
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_449070(int32_t arg1, int32_t arg2, void* arg3, void* arg4, int32_t* arg5, int32_t* arg6, char arg7)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* eax_2 = arg4
    int32_t ebx = arg2
    int32_t* edx = arg5
    int32_t* ecx_1 = *arg6
    int32_t var_5a0 = ebx
    int32_t* var_5ac = edx
    int32_t* var_5a8 = ecx_1
    void var_59c
    
    if (ecx_1 s< eax_2)
        int32_t* ecx_2 = ebx * 0x1c0
        int64_t var_5cc_1 = 0
        void* eax_4 = ebx * 0x1bc + arg3
        int32_t* eax_5 = eax_4 + 0x17c
        int32_t* var_5b4_1 = ecx_2
        int32_t* var_5c0 = eax_5
        
        while (true)
            int32_t* var_5b8 = ecx_2
            void* var_5a4_1 = eax_5
            void var_40c
            int32_t edi_1
            
            while (true)
                edi_1 = *eax_5
                
                if (edi_1 != 0xffffffff)
                    edx = sub_445280(eax_5, edi_1, arg3, 0xffffffff, 0xff, 0)
                    eax_5 = var_5a4_1
                    ecx_2 = var_5b8
                    
                    if (edi_1 != 0xffffffff)
                        break
                
                if (ebx == 0)
                    edi_1 = sub_4450a0(arg3, var_5a0)
                    
                    if (edi_1 == 0xffffffff)
                        edi_1 = 0xfffffffe
                    
                    break
                
                ecx_2 -= 0x1c0
                var_5a4_1 = eax_5 - 0x1bc
                ebx -= 1
                int32_t eax_7 = *(arg3 + 0xc44)
                var_5b8 = ecx_2
                
                if (*(ecx_2 + eax_7) != 0)
                    if (*(arg3 + 0x10) == 0)
                        int32_t var_5e0_3 = *(eax_4 + 0x18)
                        sub_41da20(&var_40c, edx, ecx_2, &var_40c, 
                            "%s draw tile, but waiting for others.\n")
                        sub_4892e0(&var_40c)
                    
                    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                    return 2
                
                eax_5 = var_5a4_1
            
            int32_t* eax_9 = *arg6
            
            if (edi_1 == 0xfffffffe)
                int32_t edx_6 = 0
                void* ecx_11 = arg4 - eax_9
                var_5c0 = eax_9
                var_5b8 = eax_9
                arg4 = ecx_11
                *arg6 = 0
                
                if (eax_9 s> 0)
                    sub_444640(&var_5c0, var_5a0, arg3, 8, var_5ac, &var_5c0, &var_59c, &var_5b8, 0, 0, 
                        0)
                    sub_448d60(&var_59c, var_5a0, arg3, var_5ac, &var_59c, var_5b8, 
                        *(*(arg3 + 0xc44) + var_5b4_1 + 0x1bc))
                    edx_6 = *arg6
                    ecx_11 = arg4
                
                int32_t i_1 = ecx_11 - edx_6
                void* ebx_3 = *(arg3 + 0xc44) + var_5b4_1
                int32_t var_5a8_1 = 0
                *(ebx_3 + 0x1b8) = 0
                *(ebx_3 + 0x1b4) = i_1
                int32_t eax_24 = *(*arg3 + 4)
                
                if (eax_24 s> 0)
                    int32_t* var_5ac_1 = arg3 + 0x178
                    int32_t* edi_2 = arg3 + 0x178
                    int32_t* var_5a4_2 = arg3 + 0x178
                    int32_t ebx_6
                    
                    do
                        int32_t i = edi_2[-1]
                        edx_6 = 0
                        int32_t var_124[0x47]
                        
                        while (i != 0xffffffff)
                            var_124[edx_6] = i
                            i = sx.d(*(arg3 + i * 0xc + 0x8ca))
                            edx_6 += 1
                        
                        i_1 = *edi_2
                        int32_t ebx_4 = 0
                        
                        if (i_1 != 0xffffffff)
                            int32_t* edi_3 = &var_124[edx_6]
                            
                            do
                                *edi_3 = i_1
                                i_1 = sx.d(*(arg3 + i_1 * 0xc + 0x8ca))
                                edi_3 = &edi_3[1]
                                ebx_4 += 1
                            while (i_1 != 0xffffffff)
                            
                            edi_2 = var_5a4_2
                        
                        if (ebx_4 + edx_6 s>= 3)
                            int32_t i_3 = 0
                            *(*(arg3 + 0xc44) + 0x8c0) = var_5a0
                            int32_t eax_33 = *(arg3 + 0xc44)
                            int32_t* ecx_18 = var_5b4_1
                            *(ecx_18 + eax_33) = 3
                            *(ecx_18 + eax_33 + 4) = 0
                            
                            if (*(*arg3 + 4) s> 0)
                                int32_t* edi_4 = 0x8c4
                                void* var_5b0_2 = nullptr
                                int32_t* var_5a0_1 = 0x8c4
                                int32_t* var_5a4_3 = 0x8d8
                                int32_t i_2
                                
                                do
                                    int32_t* eax_36 = var_5ac_1
                                    int32_t edx_10 = 0
                                    int32_t j = eax_36[-1]
                                    
                                    if (j != 0xffffffff)
                                        do
                                            edx_10 += 1
                                            j = sx.d(*(arg3 + j * 0xc + 0x8ca))
                                        while (j != 0xffffffff)
                                        
                                        eax_36 = var_5ac_1
                                    
                                    int32_t j_1 = *eax_36
                                    int32_t ebx_7 = 0
                                    
                                    if (j_1 != 0xffffffff)
                                        void* edi_5 = &var_124[edx_10]
                                        
                                        do
                                            ebx_7 += 1
                                            j_1 = sx.d(*(arg3 + j_1 * 0xc + 0x8ca))
                                            edi_5 += 4
                                        while (j_1 != 0xffffffff)
                                        
                                        edi_4 = var_5a0_1
                                    
                                    int32_t* ebx_8 = var_5b0_2
                                    
                                    if (ebx_7 + edx_10 s>= 3)
                                        *(edi_4 + *(arg3 + 0xc44)) = 1
                                        int32_t eax_41 = *(ebx_8 + *(arg3 + 0xc44))
                                        
                                        if (eax_41 == 3 || eax_41 == 2 || eax_41 == 0)
                                            int32_t eax_42 = sub_448f40(arg3, i_3)
                                            int32_t edi_6 = *(arg3 + 0xc44)
                                            
                                            if (eax_42 == 0)
                                                *(var_5a0_1 + edi_6) = 3
                                            else
                                                *(var_5a4_3 + edi_6) = *(ebx_8 + edi_6)
                                                *(var_5a4_3 + edi_6 + 4) = *(ebx_8 + edi_6 + 4)
                                                int32_t eax_44 = *(arg3 + 0xc44)
                                                *(ebx_8 + eax_44) = eax_42
                                                *(ebx_8 + eax_44 + 4) = 0x12
                                            
                                            edi_4 = var_5a0_1
                                    
                                    edi_4 = &edi_4[1]
                                    i_2 = i_3 + 1
                                    var_5a4_3 = &var_5a4_3[2]
                                    var_5ac_1 = &var_5ac_1[0x6f]
                                    i_3 = i_2
                                    var_5a0_1 = edi_4
                                    var_5b0_2 = &ebx_8[0x70]
                                while (i_2 s< *(*arg3 + 4))
                                ecx_18 = var_5b4_1
                            
                            int32_t edx_12 = *(arg3 + 0xc44)
                            int32_t result = *(ecx_18 + edx_12)
                            *(ecx_18 + edx_12 + 4)
                            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                            return result
                        
                        edi_2 = &edi_2[0x6f]
                        ebx_6 = var_5a8_1 + 1
                        var_5a4_2 = edi_2
                        var_5a8_1 = ebx_6
                    while (ebx_6 s< eax_24)
                
                if (*(arg3 + 0x10) == 0)
                    int32_t var_5e0_5 = *(eax_4 + 0x18)
                    sub_41da20(&var_40c, edx_6, i_1, &var_40c, 
                        "%s draw tile, but bag completely empty.\n")
                    sub_4892e0(&var_40c)
                
                *(ebx_3 + 0x1b4) = 0
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return var_5cc_1.d
            
            var_5ac[eax_9] = edi_1
            *arg6 += 1
            
            if (*(arg3 + 0x10) != 0)
                ebx = var_5a0
            else
                int32_t ecx_6 = var_5ac[var_5a8]
                int32_t var_5e0_1 = **(arg3 + ecx_6 * 0xc + 0x8c4)
                int32_t var_5e4_1 = ecx_6
                int32_t var_5e8_1 = *(eax_4 + 0x18)
                sub_41da20(&var_40c, var_5ac, ecx_6, &var_40c, "%s draw tile %d %s.\n")
                sub_4892e0(&var_40c)
                ebx = var_5a0
                void* eax_15 = *(arg3 + edi_1 * 0xc + 0x8c4)
                sub_444430(eax_15, 0x19, arg3, ebx, edi_1, *(eax_15 + 0xc), 0, 0)
            
            eax_2 = arg4
            edx = var_5a8 + 1
            var_5a8 = edx
            
            if (edx s>= eax_2)
                edx = var_5ac
                break
            
            eax_5 = var_5c0
            ecx_2 = var_5b4_1
    
    int32_t ecx_26 = ebx * 0x1bc
    void* var_5d0 = eax_2
    
    if (*(ecx_26 + arg3 + 0x1c4) s>= *(ecx_26 + arg3 + 0x1c0))
        (*(*(ecx_26 + arg3 + 0x1c) + 4))(arg3, ebx, 8, edx, &arg4, &var_59c, &var_5d0, zx.d(arg7), 0, 0)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return 1
}
