// 函数名称: sub_488b10
// 虚拟地址: 0x488b10
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char*sub_488b10(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59eb48
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_90 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    char* const result_3 = &data_5b2591
    int32_t* edi = *arg1
    char* result_1
    char* result_2 = result_1
    
    if (result_2 != 0)
        result_3 = result_2
    
    char* i_2 = _fopen(result_3, U"r")
    char* i_4 = i_2
    
    if (i_2 == 0)
    label_488d13:
        i_2.b = 0
    else
        void* var_94_1 = &edi[2]
        int32_t* var_98_1 = &edi[1]
        int32_t var_68
        int32_t* var_9c_1 = &var_68
        
        if (sub_450480(i_2, "%d %d %d\n") != 3)
        label_488d13_1:
            i_2.b = 0
        else
            int32_t ecx_2 = (edi[1] + 1) * edi[2]
            edi[0xa] = ecx_2
            edi[8] = sub_4c2e40(ecx_2 << 3)
            int32_t i_7
            int32_t* var_94_2 = &i_7
            void* var_98_2 = &edi[0xb]
            
            if (sub_450480(i_2, "%d %d\n") != 2)
            label_488d13_2:
                i_2.b = 0
            else
                void var_80
                void* var_94_3 = &var_80
                sub_450480(i_2, 0x5d8f88)
                int32_t esi_2 = 0
                
                if (var_68 s> 0)
                    do
                        int32_t var_6c
                        int32_t* var_94_4 = &var_6c
                        int32_t var_78
                        int32_t* var_98_3 = &var_78
                        sub_450480(i_2, "%d %d\t")
                        char* i_3 = i_2
                        int32_t var_a8_1 = 0x50
                        void var_64
                        void* var_ac_1 = &var_64
                        sub_5801b2()
                        int32_t edx_1 = var_78
                        void* ecx_4
                        
                        if (edx_1 s< 0)
                            ecx_4 = &edi[0xc]
                            
                            if (edi[0xc] s<= var_6c)
                                goto label_488c22
                        else if (edi[edx_1 + 0xc] s<= var_6c)
                            ecx_4 = &edi[0xc]
                        label_488c22:
                            int32_t i_6 = i_7
                            *edi += 1
                            
                            if (edx_1 s>= 0)
                                edi[edx_1 + 0xc] += 1
                            else if (i_6 s> 0)
                                int32_t i
                                
                                do
                                    *ecx_4 += 1
                                    ecx_4 += 4
                                    i = i_6
                                    i_6 -= 1
                                while (i != 1)
                            
                            if (esi_2 == var_68 - 1)
                                edi[0xc] += 1
                        esi_2 += 1
                    while (esi_2 s< var_68)
                
                int32_t ecx_6 = edi[0xb] * edi[0xc]
                edi[6] = ecx_6
                edi[4] = sub_4c2e40(ecx_6 << 3)
                int32_t i_1 = 0
                int32_t i_5 = 0
                
                if (edi[0xc] s> 0)
                    do
                        int32_t ecx_10 = edi[0xb]
                        int32_t esi_3 = 0
                        
                        if (ecx_10 s> 0)
                            do
                                int32_t var_94_5 = edi[4] + ((ecx_10 * i_1 + esi_3) << 3)
                                
                                if (sub_450480(i_2, "%lf\n") != 1)
                                    goto label_488d13_2
                                
                                ecx_10 = edi[0xb]
                                esi_3 += 1
                                i_1 = i_5
                            while (esi_3 s< ecx_10)
                        
                        i_1 += 1
                        i_5 = i_1
                    while (i_1 s< edi[0xc])
                
                i_2 = nullptr
                void* ecx_11 = &edi[2]
                
                if (*ecx_11 s> 0)
                    do
                        int32_t j = 0
                        
                        if (edi[1] + 1 s> 0)
                            do
                                int32_t var_94_6 = edi[8] + ((*ecx_11 * j + i_2) << 3)
                                
                                if (sub_450480(i_4, "%lf\n") != 1)
                                    goto label_488d13_2
                                
                                ecx_11 = &edi[2]
                                j += 1
                            while (j s< edi[1] + 1)
                        
                        i_2 = &i_2[1]
                    while (i_2 s< *ecx_11)
                
                _fclose(i_4)
                i_2.b = 1
    
    int32_t var_8_2 = 6
    char* result
    
    if (data_aca1f4 != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&result_1)
            int32_t temp0_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp0_1 == 1)
                sub_4984f0(result, *(result + 0xc) + 0x10)
    
    result.b = i_2.b
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
