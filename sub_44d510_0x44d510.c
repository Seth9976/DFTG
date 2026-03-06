// 函数名称: sub_44d510
// 虚拟地址: 0x44d510
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_44d510(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* edi_1 = arg2 * 0x1bc + arg1
    int32_t var_32c[0xc9]
    int32_t eax_3 = sub_4453c0(&var_32c, arg2, arg1, &var_32c, 4)
    int32_t i = 0
    int32_t i_1 = 0
    
    if (*(edi_1 + 0x164) s> 0)
        void* ecx = edi_1 + 0x2b
        void* var_338_1 = ecx
        void* ebx_1 = edi_1 + 0x25
        
        do
            if (*ebx_1 == 4 && *(ebx_1 + 4) == 4)
                if (*(arg1 + 0x10) == 0)
                    int32_t eax_4 = sub_444430(i, 0x2f, arg1, arg2, i, 0, 0, 0)
                    ecx = var_338_1
                    
                    if ((*ecx & 2) != 0)
                        sub_444430(eax_4, 0x2d, arg1, arg2, i_1, 0, 0, 0)
                        ecx = var_338_1
                    
                    i = i_1
                
                *ebx_1 = 1
            
            i += 1
            ecx += 8
            ebx_1 += 8
            i_1 = i
            var_338_1 = ecx
        while (i s< *(edi_1 + 0x164))
    
    int32_t result = 0
    int32_t result_1 = 0
    
    if (eax_3 s> 0)
        do
            int32_t eax_8 = result << 3
            int32_t var_334 = eax_8
            var_328
            void* ebx_2 = *(&var_328 + eax_8)
            
            if ((*(ebx_2 + 4) & 4) != 0)
                int32_t edx_1 = sub_444d70(eax_8, arg2, arg1, 3)
                int32_t ecx_5 = *(ebx_2 + 8) * edx_1
                *(edi_1 + 0x18c) += ecx_5
                *(edi_1 + 0x1ac) += ecx_5
                
                if (*(edi_1 + 0x18c) s> 0xa)
                    ecx_5 += 0xa - *(edi_1 + 0x18c)
                    *(edi_1 + 0x18c) = 0xa
                
                eax_8 = *(arg1 + 0x10)
                
                if (eax_8 == 0)
                    if (ecx_5 != 0)
                        sub_444430(var_334, 0x25, arg1, arg2, *(&var_32c + var_334), ecx_5, eax_8, 
                            eax_8)
                        eax_8 = *(arg1 + 0x10)
                    
                    if (eax_8 == 0 && edx_1 != 0)
                        eax_8 = sub_444430(var_334, 0x15, arg1, arg2, *(&var_32c + var_334), 4, 
                            *(ebx_2 + 8) * edx_1, eax_8)
            
            if ((*(ebx_2 + 4) & 0x80) != 0)
                int32_t edx_3 = sub_444d70(eax_8, arg2, arg1, 4)
                int32_t ecx_10 = *(ebx_2 + 8) * edx_3
                *(edi_1 + 0x18c) += ecx_10
                *(edi_1 + 0x1ac) += ecx_10
                
                if (*(edi_1 + 0x18c) s> 0xa)
                    ecx_10 += 0xa - *(edi_1 + 0x18c)
                    *(edi_1 + 0x18c) = 0xa
                
                eax_8 = *(arg1 + 0x10)
                
                if (eax_8 == 0)
                    if (ecx_10 != 0)
                        sub_444430(var_334, 0x25, arg1, arg2, *(&var_32c + var_334), ecx_10, eax_8, 
                            eax_8)
                        eax_8 = *(arg1 + 0x10)
                    
                    if (eax_8 == 0 && edx_3 != 0)
                        eax_8 = sub_444430(var_334, 0x15, arg1, arg2, *(&var_32c + var_334), 0x80, 
                            *(ebx_2 + 8) * edx_3, eax_8)
            
            if ((*(ebx_2 + 4) & 8) != 0)
                int32_t edx_5 = sub_444ab0(eax_8, arg2, arg1, 3, 5)
                int32_t ecx_15 = *(ebx_2 + 8) * edx_5
                *(edi_1 + 0x18c) += ecx_15
                *(edi_1 + 0x1ac) += ecx_15
                
                if (*(edi_1 + 0x18c) s> 0xa)
                    ecx_15 += 0xa - *(edi_1 + 0x18c)
                    *(edi_1 + 0x18c) = 0xa
                
                int32_t eax_21 = *(arg1 + 0x10)
                
                if (eax_21 == 0)
                    if (ecx_15 != 0)
                        sub_444430(var_334, 0x25, arg1, arg2, *(&var_32c + var_334), ecx_15, eax_21, 
                            eax_21)
                        eax_21 = *(arg1 + 0x10)
                    
                    if (eax_21 == 0 && edx_5 != 0)
                        sub_444430(var_334, 0x15, arg1, arg2, *(&var_32c + var_334), 8, 
                            *(ebx_2 + 8) * edx_5, eax_21)
            
            if ((*(ebx_2 + 4) & 0x10) != 0)
                int32_t ecx_18 = *(ebx_2 + 8)
                *(edi_1 + 0x18c) += ecx_18
                int32_t edx_6 = *(edi_1 + 0x18c)
                *(edi_1 + 0x1ac) += ecx_18
                
                if (edx_6 s> 0xa)
                    *(edi_1 + 0x18c) = 0xa
                    ecx_18 += 0xa - edx_6
                
                int32_t eax_27 = *(arg1 + 0x10)
                
                if (eax_27 == 0)
                    if (ecx_18 != 0)
                        sub_444430(var_334, 0x25, arg1, arg2, *(&var_32c + var_334), ecx_18, eax_27, 
                            eax_27)
                        eax_27 = *(arg1 + 0x10)
                    
                    if (eax_27 == 0)
                        sub_444430(var_334, 0x15, arg1, arg2, *(&var_32c + var_334), 0x10, 
                            *(ebx_2 + 8), eax_27)
            
            result = result_1 + 1
            result_1 = result
        while (result s< eax_3)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
