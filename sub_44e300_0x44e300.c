// 函数名称: sub_44e300
// 虚拟地址: 0x44e300
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_44e300(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_34c
    int32_t var_34c
    int32_t eax_1 = __security_cookie ^ &var_34c
    var_34c = arg2
    void* edi_1 = arg2 * 0x1bc + arg1
    int32_t var_330[0xc9]
    int32_t eax_3 = sub_4453c0(&var_330, arg2, arg1, &var_330, 5)
    int32_t i = 0
    int32_t i_1 = 0
    
    if (*(edi_1 + 0x164) s> 0)
        void* edx = edi_1 + 0x2b
        void* eax_4 = edi_1 + 0x25
        void* var_348_1 = edx
        void* var_344_1 = eax_4
        
        do
            if (*eax_4 == 4 && *(eax_4 + 4) == 5)
                if (arg1[4] == 0)
                    int32_t eax_5 = sub_444430(eax_4, 0x2f, arg1, arg2, i, 0, 0, 0)
                    edx = var_348_1
                    
                    if ((*edx & 2) != 0)
                        sub_444430(eax_5, 0x2d, arg1, arg2, i_1, 0, 0, 0)
                        edx = var_348_1
                    
                    i = i_1
                    eax_4 = var_344_1
                
                *eax_4 = 1
            
            i += 1
            eax_4 += 8
            edx += 8
            i_1 = i
            var_344_1 = eax_4
            var_348_1 = edx
        while (i s< *(edi_1 + 0x164))
    
    int32_t result = 0
    int32_t result_1 = 0
    
    if (eax_3 s> 0)
        do
            var_32c
            void* ecx_4 = *(&var_32c + (result << 3))
            int32_t edi_2 = 0
            void* var_348_2 = ecx_4
            int32_t var_338_1 = 0
            int32_t ebx_1 = *(ecx_4 + 4)
            int32_t eax_6 = ebx_1
            
            if ((ebx_1.b & 8) != 0)
                int32_t edi_3 = *(ecx_4 + 8)
                edi_2 = divs.dp.d(sx.q(sub_444ab0(eax_6, var_34c, arg1, 2, 2) - 1 + edi_3), edi_3)
                eax_6 = ebx_1
                
                if (arg1[4] != 0 || edi_2 == 0)
                    ecx_4 = var_348_2
                else
                    sub_444430(result_1, 0x16, arg1, var_34c, var_330[result_1 * 2], 8, edi_2, 0)
                    ecx_4 = var_348_2
                    ebx_1 = *(ecx_4 + 4)
                    eax_6 = ebx_1
            
            if ((eax_6.b & 0x10) == 0)
            label_44e607:
                
                if ((eax_6.b & 0x40) == 0)
                    goto label_44e65f
                
                int32_t eax_27 = sub_444dd0(arg1)
                int32_t ecx_13 = var_34c
                
                if (eax_27 == ecx_13)
                    eax_6 = ebx_1
                    
                    if ((ebx_1 & 0x10000) != 0)
                        int32_t edx_6 = *(var_348_2 + 8)
                        edi_2 += edx_6
                        eax_6 = ebx_1
                        
                        if (arg1[4] == 0)
                            sub_444430(result_1, 0x16, arg1, ecx_13, var_330[result_1 * 2], 0x40, 
                                edx_6, 0)
                            ebx_1 = *(var_348_2 + 4)
                            eax_6 = ebx_1
                        label_44e65f:
                            ecx_13 = var_34c
                    
                    if ((eax_6.b & 0x20) == 0)
                    label_44e6cb:
                        
                        if ((eax_6 & 0x10100) == 0x10100)
                            int32_t eax_38
                            int32_t edx_8
                            edx_8:eax_38 = sx.q(*(edi_1 + 0x1b4) + 1)
                            int32_t eax_40 = (eax_38 - edx_8) s>> 1
                            edi_2 += eax_40
                            
                            if (arg1[4] == 0 && eax_40 != 0)
                                sub_444430(result_1, 0x16, arg1, ecx_13, var_330[result_1 * 2], 0x100, 
                                    eax_40, 0)
                        
                        int32_t edi_5
                        
                        if (edi_2 == 0)
                            edi_5 = var_34c
                        else
                            *(edi_1 + 0x18c) += edi_2
                            int32_t eax_42 = *(edi_1 + 0x18c)
                            *(edi_1 + 0x1ac) += edi_2
                            
                            if (eax_42 s> 0xa)
                                *(edi_1 + 0x18c) = 0xa
                                edi_2 = edi_2 - eax_42 + 0xa
                            
                            if (arg1[4] != 0 || edi_2 == 0)
                                edi_5 = var_34c
                            else
                                edi_5 = var_34c
                                sub_444430(result_1, 0x25, arg1, edi_5, var_330[result_1 * 2], edi_2, 
                                    0, 0)
                        
                        int32_t eax_44 = var_338_1
                        
                        if (eax_44 != 0)
                            if (arg1[4] == 0)
                                sub_444430(eax_44, 0x39, arg1, edi_5, eax_44, var_330[result_1 * 2], 0, 
                                    0)
                                eax_44 = var_338_1
                            
                            *(edi_1 + 0x190) += eax_44
                            *(edi_1 + 0x1a8) += eax_44
                            int32_t temp2_1 = arg1[0x304]
                            arg1[0x304] -= eax_44
                            
                            if (temp2_1 - eax_44 s< 0)
                                arg1[0x304] = 0
                    else
                        int32_t eax_31 = sub_444dd0(arg1)
                        ecx_13 = var_34c
                        
                        if (eax_31 != ecx_13)
                            eax_6 = ebx_1
                            
                            if ((ebx_1 & 0x10000) != 0)
                                int32_t edx_7 = *(var_348_2 + 8)
                                edi_2 += edx_7
                                eax_6 = ebx_1
                                
                                if (arg1[4] == 0)
                                    sub_444430(result_1, 0x16, arg1, ecx_13, var_330[result_1 * 2], 
                                        0x20, edx_7, 0)
                                    ecx_13 = var_34c
                                    eax_6 = *(var_348_2 + 4)
                            
                            goto label_44e6cb
            else
                int32_t ecx_5 = *(ecx_4 + 8)
                int32_t var_340 = ecx_5
                
                if (eax_6.b s>= 0)
                label_44e57a:
                    ebx_1 = *(var_348_2 + 4)
                    int32_t edx_5 = ebx_1
                    
                    if ((ebx_1 & 0x10000) != 0)
                        edi_2 += ecx_5
                        
                        if (arg1[4] == 0 && ecx_5 != 0)
                            sub_444430(result_1, 0x16, arg1, var_34c, var_330[result_1 * 2], 0x10000, 
                                ecx_5, 0)
                            ebx_1 = *(var_348_2 + 4)
                            edx_5 = ebx_1
                    
                    eax_6 = edx_5
                    
                    if ((edx_5 & 0x20000) != 0)
                        var_338_1 = var_340
                        
                        if (arg1[4] == 0 && var_340 != 0)
                            sub_444430(result_1, 0x16, arg1, var_34c, var_330[result_1 * 2], 0x20000, 
                                var_340, 0)
                            ebx_1 = *(var_348_2 + 4)
                            eax_6 = ebx_1
                    
                    goto label_44e607
                
                int32_t eax_13 = *(edi_1 + 0x1c4)
                
                if (eax_13 s>= *(edi_1 + 0x1c0))
                    (*(*(edi_1 + 0x1c) + 4))(arg1, var_34c, 0xf, 0, 0, 0, 0, ecx_5, 0, 0)
                    
                    if (arg1[0x30f] == 0)
                        eax_13 = *(*(edi_1 + 0x1c) + 0xc)
                        
                        if (eax_13 != 0)
                            eax_13 = eax_13(arg1, var_34c)
                        
                        goto label_44e4e5
                    
                    ecx_5 = 0xffffffff
                    var_340 = 0xffffffff
                label_44e4f6:
                    int32_t eax_18 = *(edi_1 + 0x18c)
                    
                    if (ecx_5 s> eax_18)
                        sub_444530("Spent too many credits!\n")
                        noreturn
                    
                    *(edi_1 + 0x18c) = eax_18 - ecx_5
                    
                    if (arg1[4] == 0)
                        int32_t eax_21 = neg.d(ecx_5)
                        
                        if (eax_21 != 0)
                            sub_444430(eax_21, 0x29, arg1, var_34c, 0xffffffff, eax_21, 0, 0)
                            ecx_5 = var_340
                    
                    void* eax_22 = *arg1
                    
                    if (*(eax_22 + 8) != 0 && *(edi_1 + 0x18c) s< 1)
                        *(edi_1 + 0x18c) = 1
                        
                        if (arg1[4] == 0)
                            sub_444430(eax_22, 0x28, arg1, var_34c, 0xffffffff, 1, 0, 0)
                            ecx_5 = var_340
                    
                    goto label_44e57a
                
            label_44e4e5:
                ecx_5 = sub_444560(eax_13, var_34c, arg1, 0xf, 0, nullptr, 0, nullptr)
                var_340 = ecx_5
                
                if (ecx_5 != 0)
                    goto label_44e4f6
            
            result = result_1 + 1
            result_1 = result
        while (result s< eax_3)
    
    @__security_check_cookie@4(eax_1 ^ &var_34c)
    return result
}
