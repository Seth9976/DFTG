// 函数名称: sub_44da80
// 虚拟地址: 0x44da80
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_44da80(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: void* var_75c
    void* var_75c
    int32_t eax_1 = __security_cookie ^ &var_75c
    void* ebx = arg2 * 0x1bc
    int32_t result_1 = 0
    void* edi_1 = &arg3[6] + ebx
    int32_t var_730[0xc8]
    var_75c = sub_4453c0(arg2, arg2, arg3, &var_730, 5)
    void* eax_3
    
    if (*(edi_1 + (arg5 << 3) + 0x10) != 0x60)
        eax_3.b = 2
    else
        void* ecx_4 = *arg3
        
        if (*(ecx_4 + 0x11) != 0)
            eax_3.b = 2
        else
            eax_3.b = 1
            
            if (*(ecx_4 + 0x12) != 0)
                eax_3.b = 2
    
    *(edi_1 + (arg5 << 3) + 0xd) = eax_3.b
    int32_t eax_4 = sx.d(*(edi_1 + (arg6 << 3) + 0x12))
    
    if (eax_4 s< 0)
        int32_t var_76c_3 = eax_4
        int32_t var_770_3 = arg6
        sub_444530("invalid good die %d, covering %d")
        noreturn
    
    void* edi_2 = &arg3[eax_4 * 3 + 0x231]
    void* eax_7
    
    if (*(ebx + arg3 + (arg6 << 3) + 0x28) == 0x50)
        eax_7 = *arg3
    
    int32_t eax_10
    void* ecx_6
    
    if (*(ebx + arg3 + (arg6 << 3) + 0x28) != 0x50 || *(eax_7 + 0x11) != 0 || *(eax_7 + 0x12) != 0)
        ecx_6 = ebx + (arg6 << 3)
        eax_10 = (sx.d(*(ecx_6 + arg3 + 0x2a)) + 0xbb) * 3
        arg3[eax_10 + 2].b -= 1
        eax_10.b = 2
    else
        ecx_6 = ebx + (arg6 << 3)
        eax_10 = (sx.d(*(ecx_6 + arg3 + 0x2a)) + 0xbb) * 3
        arg3[eax_10 + 2].b -= 1
        eax_10.b = 1
    
    *(ecx_6 + arg3 + 0x25) = eax_10.b
    *(ecx_6 + arg3 + 0x2a) = 0xff
    int32_t result
    var_72c
    
    if (arg4 == 0)
        uint32_t ecx_17 = zx.d(*(edi_1 + (arg6 << 3) + 0xc))
        int32_t edi_5 = *(*edi_2 + 0x18)
        int32_t eax_27
        
        if (ecx_17 == 7)
            eax_27 = ecx_17 - 6
        else if (ecx_17 == 8)
            eax_27 = ecx_17 - 7
        else if (ecx_17 != 0xa || edi_5 != 3)
            eax_27.b = edi_5 == ecx_17
        else
            eax_27 = ecx_17 - 9
        
        int32_t ebx_2 = eax_27 + 1
        uint32_t edx_8 = zx.d(*(edi_1 + (arg5 << 3) + 0xc))
        int32_t ecx_19
        
        if (edx_8 == 7)
            ecx_19 = edx_8 - 6
        else if (edx_8 == 8)
            ecx_19 = edx_8 - 7
        else if (edx_8 != 0xa || edi_5 != 3)
            ecx_19.b = edi_5 == edx_8
        else
            ecx_19 = edx_8 - 9
        
        if (ecx_19 == 0)
            ebx_2 = eax_27
        
        result = ebx_2 + 1
        result_1 = result
        
        if (arg3[4] == 0)
            sub_444430(result, 0x37, arg3, arg2, result, arg5, arg6, 0)
            result = result_1
        
        *(ebx + arg3 + 0x190) += result
        *(ebx + arg3 + 0x1a8) += result
        int32_t temp0_1 = arg3[0x304]
        arg3[0x304] -= result
        
        if (temp0_1 - result s< 0)
            arg3[0x304] = 0
        
        int32_t ecx_21 = 0
        int32_t var_74c_2 = 0
        
        if (var_75c s> 0)
            void* eax_28 = var_75c
            
            do
                int32_t edx_10 = ecx_21 << 3
                void* edi_6 = *(&var_72c + edx_10)
                int32_t ecx_22 = *(edi_6 + 4)
                
                if ((ecx_22.b & 1) != 0)
                    if ((ecx_22 & 0x800) != 0)
                        eax_28 = *edi_2
                    
                    if ((ecx_22 & 0x800) != 0 && *(eax_28 + 0x18) != 3)
                        eax_28 = var_75c
                    else
                        if ((ecx_22 & 0x1000) != 0)
                            eax_28 = *edi_2
                        
                        if ((ecx_22 & 0x1000) != 0 && *(eax_28 + 0x18) != 4)
                            eax_28 = var_75c
                        else
                            if ((ecx_22 & 0x2000) != 0)
                                eax_28 = *edi_2
                            
                            if ((ecx_22 & 0x2000) != 0 && *(eax_28 + 0x18) != 5)
                                eax_28 = var_75c
                            else
                                if ((ecx_22 & 0x4000) != 0)
                                    eax_28 = *edi_2
                                
                                if ((ecx_22 & 0x4000) != 0 && *(eax_28 + 0x18) != 6)
                                    eax_28 = var_75c
                                else
                                    if ((ecx_22 & 0x10000) != 0)
                                        void* ecx_23 = *(edi_6 + 8)
                                        *(ebx + arg3 + 0x18c) += ecx_23
                                        int32_t edx_9 = *(ebx + arg3 + 0x18c)
                                        *(ebx + arg3 + 0x1ac) += ecx_23
                                        
                                        if (edx_9 s> 0xa)
                                            *(ebx + arg3 + 0x18c) = 0xa
                                            eax_28 = 0xa - edx_9
                                            ecx_23 += eax_28
                                        
                                        if (arg3[4] == 0 && ecx_23 != 0)
                                            eax_28 = sub_444430(edx_10, 0x26, arg3, arg2, 
                                                var_730[ecx_21 * 2], ecx_23, 0, 0)
                                    
                                    if ((*(edi_6 + 4) & 0x20000) == 0)
                                        eax_28 = var_75c
                                    else
                                        int32_t edi_7 = *(edi_6 + 8)
                                        
                                        if (arg3[4] == 0)
                                            sub_444430(eax_28, 0x37, arg3, arg2, edi_7, 
                                                var_730[ecx_21 * 2], 0xffffffff, 0)
                                        
                                        *(ebx + arg3 + 0x190) += edi_7
                                        *(ebx + arg3 + 0x1a8) += edi_7
                                        int32_t temp3_1 = arg3[0x304]
                                        arg3[0x304] -= edi_7
                                        eax_28 = var_75c
                                        
                                        if (temp3_1 - edi_7 s< 0)
                                            arg3[0x304] = 0
                
                ecx_21 = var_74c_2 + 1
                var_74c_2 = ecx_21
            while (ecx_21 s< eax_28)
            
            result = result_1
            result_1 = result
    else
        void* ecx_7 = *edi_2
        
        if ((*(ecx_7 + 0x1c) & 0x200) != 0)
            sub_444530("Attempt to trade from no trade world!\n")
            noreturn
        
        int32_t ecx_8 = *(ecx_7 + 0x18)
        *(ebx + arg3 + 0x18c) += ecx_8
        int32_t edx_2 = *(ebx + arg3 + 0x18c)
        *(ebx + arg3 + 0x1ac) += ecx_8
        
        if (edx_2 s> 0xa)
            *(ebx + arg3 + 0x18c) = 0xa
            eax_10 = 0xa - edx_2
            ecx_8 += eax_10
        
        if (arg3[4] == 0 && ecx_8 != 0)
            sub_444430(eax_10, 0x27, arg3, arg2, arg5, ecx_8, 0, 0)
        
        int32_t eax_13 = 0
        int32_t var_750_1 = 0
        
        if (var_75c s> 0)
            do
                void* edi_4 = *(&var_72c + (eax_13 << 3))
                int32_t eax_14 = *(edi_4 + 4)
                
                if ((eax_14.b & 2) != 0)
                    if (eax_14.b s>= 0)
                    label_44dcbf:
                        
                        if ((*(edi_4 + 4) & 0x20000) != 0)
                            int32_t edi_3 = *(edi_4 + 8)
                            
                            if (arg3[4] == 0)
                                sub_444430(var_750_1, 0x37, arg3, arg2, edi_3, var_730[var_750_1 * 2], 
                                    0xffffffff, 0)
                            
                            *(ebx + arg3 + 0x190) += edi_3
                            *(ebx + arg3 + 0x1a8) += edi_3
                            int32_t temp2_1 = arg3[0x304]
                            arg3[0x304] -= edi_3
                            
                            if (temp2_1 - edi_3 s< 0)
                                arg3[0x304] = 0
                        
                        int32_t ecx_14 = *(edi_4 + 4)
                        
                        if ((ecx_14 & 0x10000) != 0 && ((ecx_14 & 0x800) == 0 || *(*edi_2 + 0x18) == 3)
                                && ((ecx_14 & 0x1000) == 0 || *(*edi_2 + 0x18) == 4))
                            int32_t ecx_15 = *(edi_4 + 8)
                            *(ebx + arg3 + 0x18c) += ecx_15
                            int32_t edx_5 = *(ebx + arg3 + 0x18c)
                            *(ebx + arg3 + 0x1ac) += ecx_15
                            
                            if (edx_5 s> 0xa)
                                *(ebx + arg3 + 0x18c) = 0xa
                                ecx_15 += 0xa - edx_5
                            
                            if (arg3[4] == 0 && ecx_15 != 0)
                                sub_444430(var_750_1, 0x26, arg3, arg2, var_730[var_750_1 * 2], ecx_15, 
                                    0, 0)
                    else if (sub_444640(eax_14, arg2, arg3, 0xf, 0, nullptr, 0, nullptr, 0, 0, 0) != 0)
                        int32_t eax_16 = *(ebx + arg3 + 0x18c)
                        
                        if (eax_16 s< 1)
                            sub_444530("Spent too many credits!\n")
                            noreturn
                        
                        *(ebx + arg3 + 0x18c) = eax_16 - 1
                        
                        if (arg3[4] == 0)
                            sub_444430(eax_16 - 1, 0x29, arg3, arg2, 0xffffffff, 0xffffffff, 0, 0)
                        
                        void* eax_18 = *arg3
                        
                        if (*(eax_18 + 8) != 0 && *(ebx + arg3 + 0x18c) s< 1)
                            *(ebx + arg3 + 0x18c) = 1
                            
                            if (arg3[4] == 0)
                                sub_444430(eax_18, 0x28, arg3, arg2, 0xffffffff, 1, 0, 0)
                        
                        goto label_44dcbf
                
                eax_13 = var_750_1 + 1
                var_750_1 = eax_13
            while (eax_13 s< var_75c)
        
        result = 0
    *(edi_1 + 0x19c) += 1
    
    if (arg3[4] == 0)
        void* edx_6 = *edi_2
        int32_t result_2
        
        if (arg4 == 0)
            result_2 = result
        else
            result_2 = *(edx_6 + 0x18)
        
        char const* const eax_34 = "credits"
        
        if (arg4 == 0)
            eax_34 = &data_5d596c
        
        char const* const var_76c_1 = eax_34
        int32_t result_3 = result_2
        int32_t var_774_7 = *(edx_6 + (zx.d(*(edi_2 + 7)) << 2))
        char const* const eax_36 = "trades"
        
        if (arg4 == 0)
            eax_36 = "consumes"
        
        char const* const var_778_7 = eax_36
        int32_t var_77c_9 = *edi_1
        void var_410
        sub_41da20(&var_410, edx_6, "consumes", &var_410, "%s %s from %s for %d %s.\n")
        void* eax_38 = sub_4892e0(&var_410)
        int32_t result_4
        int32_t edx_11
        
        if (arg4 == 0)
            edx_11 = 0x36
            result_4 = result_1
        else
            eax_38 = *edi_2
            edx_11 = 0x35
            result_4 = *(eax_38 + 0x18)
        
        result = sub_444430(eax_38, edx_11, arg3, arg2, arg5, arg6, eax_4, result_4)
    
    @__security_check_cookie@4(eax_1 ^ &var_75c)
    return result
}
