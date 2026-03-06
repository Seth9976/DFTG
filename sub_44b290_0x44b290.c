// 函数名称: sub_44b290
// 虚拟地址: 0x44b290
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_44b290(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t eax_2 = 0
    void* ecx = arg2 * 0x1bc
    int32_t edx = 0
    int32_t var_478 = 0
    int32_t var_47c = 0
    void* ecx_2 = ecx + 0x18 + arg1
    int32_t ebx = *(ecx_2 + 0x14c)
    int32_t var_ac[0x29]
    
    if (ebx s> 0)
        void* ecx_3 = ecx_2 + 0x11
        
        do
            if (*(ecx_3 - 4) == 4 && *ecx_3 == 2)
                var_ac[eax_2] = edx
                eax_2 += 1
            
            edx += 1
            ecx_3 += 8
        while (edx s< ebx)
        
        var_478 = eax_2
    
    void* edx_1 = ecx_2
    uint32_t ecx_4 = *(edx_1 + 0x15c)
    
    if (ecx_4 s>= 0)
        int32_t edi_2 = sub_44ac90(eax_2, arg2, arg1, ecx_4, 0, 0)
        int32_t ebx_3 = 0
        int32_t i_2 = *(ecx + arg1 + 0x164)
        
        if (i_2 s> 0)
            int32_t ecx_18 = ecx + 0x25 + arg1
            int32_t i
            
            do
                bool cond:0_1 = *ecx_18 != 5
                int32_t eax_13 = ebx_3 + 1
                ecx_18 += 8
                
                if (cond:0_1)
                    eax_13 = ebx_3
                
                ebx_3 = eax_13
                i = i_2
                i_2 -= 1
            while (i != 1)
        
        int32_t var_46c[0xc8]
        int32_t eax_15 = sub_4453c0(&var_46c, arg2, arg1, &var_46c, 2)
        int32_t ecx_20 = var_47c
        int32_t edx_4 = 0
        var_468
        int32_t var_14c[0x28]
        
        if (eax_15 s> 0)
            do
                if ((*(*(&var_468 + (edx_4 << 3)) + 4) & 8) != 0)
                    int32_t eax_18 = edi_2 - ebx_3
                    
                    if (eax_18 == 1 && edi_2 s> eax_18)
                        var_14c[ecx_20] = var_46c[edx_4 * 2]
                        ecx_20 += 1
                        var_47c = ecx_20
                
                edx_4 += 1
            while (edx_4 s< eax_15)
        
        if (var_478 != 0 || ecx_20 != 0)
            if (*(ecx + arg1 + 0x1c4) s< *(ecx + arg1 + 0x1c0))
                sub_444560(&var_ac, arg2, arg1, 0xa, &var_ac, &var_478, &var_14c, &var_47c)
            else
                (*(*(ecx + arg1 + 0x1c) + 4))(arg1, arg2, 0xa, &var_ac, &var_478, &var_14c, &var_47c, 
                    2, 0, 0)
                
                if (arg1[0x30f] == 0)
                    int32_t eax_24 = *(*(ecx + arg1 + 0x1c) + 0xc)
                    
                    if (eax_24 != 0)
                        eax_24(arg1, arg2)
                    
                    sub_444560(&var_ac, arg2, arg1, 0xa, &var_ac, &var_478, &var_14c, &var_47c)
            
            int32_t eax_26 = var_47c
            
            if (var_478 != 0 || eax_26 != 0)
                int32_t var_48c = 0
                bool cond:2 = eax_26 != 0
                
                if (eax_26 s> 0)
                    int32_t ecx_24 = eax_15
                    int32_t (* edx_6)[0x28] = &var_14c
                    int32_t (* var_488_1)[0x28] = &var_14c
                    int32_t ebx_7
                    
                    do
                        int32_t ebx_5 = 0
                        
                        if (ecx_24 s> 0)
                            do
                                if (*edx_6 == var_46c[ebx_5 * 2]
                                        && (*(*(&var_468 + (ebx_5 << 3)) + 4) & 8) != 0)
                                    void* ecx_25 = ecx
                                    int32_t eax_30 = *(ecx_25 + arg1 + 0x18c)
                                    
                                    if (eax_30 s< 1)
                                        sub_444530("Spent too many credits!\n")
                                        noreturn
                                    
                                    *(ecx_25 + arg1 + 0x18c) = eax_30 - 1
                                    
                                    if (arg1[4] == 0)
                                        sub_444430(eax_30 - 1, 0x29, arg1, arg2, 0xffffffff, 
                                            0xffffffff, 0, 0)
                                        ecx_25 = ecx
                                    
                                    void* eax_32 = *arg1
                                    
                                    if (*(eax_32 + 8) != 0 && *(ecx_25 + arg1 + 0x18c) s< 1)
                                        *(ecx_25 + arg1 + 0x18c) = 1
                                        
                                        if (arg1[4] == 0)
                                            sub_444430(eax_32, 0x28, arg1, arg2, 0xffffffff, 1, 0, 0)
                                    
                                    edx_6 = var_488_1
                                    edi_2 -= 1
                                    
                                    if (edi_2 s< 1)
                                        edi_2 = 1
                                
                                ebx_5 += 1
                            while (ebx_5 s< eax_15)
                            
                            eax_26 = var_47c
                            ecx_24 = eax_15
                        
                        edx_6 = &(*edx_6)[1]
                        ebx_7 = var_48c + 1
                        var_488_1 = edx_6
                        var_48c = ebx_7
                    while (ebx_7 s< eax_26)
                    cond:2 = eax_26 != 0
                
                if (not(cond:2))
                    eax_26 = var_ac[0]
                    *(ecx_2 + (eax_26 << 3) + 0xd) = 5
                    
                    if (arg1[4] == 0)
                        eax_26 = sub_444430(eax_26, 0x1b, arg1, arg2, var_ac[0], 0, 0, 0)
                
                sub_44ada0(eax_26, arg2, arg1, ecx_4, edi_2)
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return 1
    else
        int32_t ecx_5 = *(edx_1 + 0x198)
        
        if (ecx_5 s<= 0)
            int32_t edi_1 = 0
            
            if (eax_2 s> 0)
                do
                    if (arg1[4] == 0)
                        int32_t ebx_1 = var_ac[edi_1]
                        sub_444430(eax_2, 0x2f, arg1, arg2, ebx_1, 0, 0, 0)
                        void* eax_6 = ecx + (ebx_1 << 3)
                        
                        if ((*(eax_6 + arg1 + 0x2b) & 2) != 0)
                            sub_444430(eax_6, 0x2d, arg1, arg2, ebx_1, 0, 0, 0)
                        
                        edx_1 = ecx_2
                    
                    eax_2 = var_ac[edi_1]
                    edi_1 += 1
                    *(edx_1 + (eax_2 << 3) + 0xd) = 1
                while (edi_1 s< var_478)
                
                ebx = *(edx_1 + 0x14c)
            
            int32_t i_1 = 0
            
            if (ebx s> 0)
                void* ebx_2 = edx_1 + 0xd
                void* eax_9 = ecx + 0x2b + arg1
                void* var_474_1 = eax_9
                
                do
                    if (*ebx_2 == 5)
                        if (arg1[4] == 0)
                            sub_444430(eax_9, 0x31, arg1, arg2, i_1, 0, 0, 0)
                            eax_9 = var_474_1
                            
                            if ((*eax_9 & 2) != 0)
                                sub_444430(eax_9, 0x2d, arg1, arg2, i_1, 0, 0, 0)
                                eax_9 = var_474_1
                            
                            edx_1 = ecx_2
                        
                        *ebx_2 = 1
                    
                    i_1 += 1
                    eax_9 += 8
                    ebx_2 += 8
                    var_474_1 = eax_9
                while (i_1 s< *(edx_1 + 0x14c))
                
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return 0
        else
            *(edx_1 + 0x184) += eax_2
            int32_t ecx_6 = ecx_5 * 3
            
            if (*(edx_1 + 0x184) s> ecx_6)
                *(edx_1 + 0x184) = ecx_6
            
            int32_t ecx_7 = 0
            
            if (eax_2 s> 0)
                do
                    int32_t eax_3 = var_ac[ecx_7]
                    ecx_7 += 1
                    *(edx_1 + (eax_3 << 3) + 0xd) = 2
                while (ecx_7 s< var_478)
                
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return 0
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return 0
}
