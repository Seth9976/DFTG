// 函数名称: sub_44eba0
// 虚拟地址: 0x44eba0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_44eba0(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t i = 0
    int32_t i_1 = 0
    void* result = *arg1
    
    if (*(result + 4) s> 0)
        void* var_4b0_1 = &arg1[6]
        
        do
            void* eax_3 = var_4b0_1
            int32_t ecx_1 = 0
            int32_t edx_1 = 1
            int32_t var_4b8 = 0
            int32_t j = 0
            int32_t var_4b4_1 = 1
            int32_t var_4ac[0x28]
            
            if (*(eax_3 + 0x14c) s> 0)
                void* edx_3 = eax_3 + 0xd
                
                do
                    if ((*(edx_3 + 6) & 2) == 0)
                        eax_3.b = *edx_3
                        
                        if (eax_3.b == 5 || eax_3.b == 6 || eax_3.b == 3)
                            var_4ac[ecx_1] = j
                            ecx_1 += 1
                        
                        if (eax_3.b == 1 || eax_3.b == 2)
                            var_4b4_1 = 0
                        
                        eax_3 = var_4b0_1
                    
                    j += 1
                    edx_3 += 8
                while (j s< *(eax_3 + 0x14c))
                
                edx_1 = var_4b4_1
                var_4b8 = ecx_1
            
            int32_t edi_2 = 0xffffffe8 - arg1 + eax_3
            
            if (arg1[0x30f] == 0)
                if (*(arg1 + edi_2 + 0x1c4) s< *(arg1 + edi_2 + 0x1c0))
                    sub_444560(&var_4ac, i, arg1, 0x11, &var_4ac, &var_4b8, 0, nullptr)
                else
                    (*(*(arg1 + edi_2 + 0x1c) + 4))(arg1, i, 0x11, &var_4ac, &var_4b8, 0, 0, edx_1, 0, 
                        0)
                    
                    if (arg1[0x30f] == 0)
                        int32_t eax_12 = *(*(arg1 + edi_2 + 0x1c) + 0xc)
                        
                        if (eax_12 != 0)
                            eax_12(arg1, i)
                        
                        sub_444560(&var_4ac, i, arg1, 0x11, &var_4ac, &var_4b8, 0, nullptr)
                
                ecx_1 = var_4b8
                *(var_4b0_1 + 0x1b8) = 1
            else
                for (int32_t j_1 = *(arg1 + edi_2 + 0x170); j_1 != 0xffffffff; 
                        j_1 = sx.d(*(&arg1[j_1 * 3] + 0x8ca)))
                    if (*(arg1[j_1 * 3 + 0x231] + 0x5c) == 7)
                        ecx_1 = 0
                        int32_t edx_4 = 0
                        var_4b8 = 0
                        int32_t edi_3 = *(var_4b0_1 + 0x14c)
                        
                        if (edi_3 s> 0)
                            char* eax_7 = var_4b0_1 + 0xd
                            
                            do
                                if ((eax_7[6] & 2) == 0)
                                    void* ebx
                                    ebx.b = *eax_7
                                    
                                    if (ebx.b == 5 || ebx.b == 6)
                                        var_4ac[ecx_1] = edx_4
                                        ecx_1 += 1
                                
                                edx_4 += 1
                                eax_7 = &eax_7[8]
                            while (edx_4 s< edi_3)
                            
                            var_4b8 = ecx_1
                        
                        break
            
            int32_t ebx_1 = 0
            
            if (ecx_1 s> 0)
                int32_t edx_6 = edi_2
                
                do
                    int32_t edi_4 = var_4ac[ebx_1]
                    int32_t eax_15 = arg1[4]
                    
                    if (*(var_4b0_1 + (edi_4 << 3) + 0xd) != 3)
                        if (eax_15 == 0)
                            sub_444430(eax_15, eax_15 + 0x3a, arg1, i_1, edi_4, eax_15, eax_15, eax_15)
                            int32_t eax_23 = edi_2 + (edi_4 << 3)
                            
                            if ((*(eax_23 + arg1 + 0x2b) & 2) != 0)
                                sub_444430(eax_23, 0x2d, arg1, i_1, edi_4, 0, 0, 0)
                            
                            edx_6 = edi_2
                        
                        *(var_4b0_1 + (edi_4 << 3) + 0xd) = 1
                    else
                        if (eax_15 == 0)
                            sub_444430(eax_15, eax_15 + 0x3a, arg1, i_1, edi_4, eax_15, eax_15, eax_15)
                            int32_t eax_17 = edi_2 + (edi_4 << 3)
                            
                            if ((*(eax_17 + arg1 + 0x2b) & 2) != 0)
                                sub_444430(eax_17, 0x2d, arg1, i_1, edi_4, 0, 0, 0)
                            
                            edx_6 = edi_2
                        
                        int32_t ecx_6 = edx_6 + (var_4ac[ebx_1] << 3)
                        int32_t eax_21 = (sx.d(*(ecx_6 + arg1 + 0x2a)) + 0xbb) * 3
                        arg1[eax_21 + 2].b -= 1
                        *(ecx_6 + arg1 + 0x25) = 1
                        *(ecx_6 + arg1 + 0x2a) = 0xff
                    
                    ecx_1 = var_4b8
                    ebx_1 += 1
                while (ebx_1 s< ecx_1)
            
            if (arg1[4] == 0 && ecx_1 s> 0)
                void* const eax_25 = &data_5d59fc
                
                if (ecx_1 != 1)
                    eax_25 = "dice"
                
                void* const var_4d0_4 = eax_25
                int32_t var_4d4_4 = ecx_1
                int32_t var_4d8_5 = *var_4b0_1
                void var_40c
                sub_41da20(&var_40c, "dice", ecx_1, &var_40c, "%s recalls %d %s.\n")
                sub_4892e0(&var_40c)
            
            result = *arg1
            i = i_1 + 1
            var_4b0_1 += 0x1bc
            i_1 = i
        while (i s< *(result + 4))
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
