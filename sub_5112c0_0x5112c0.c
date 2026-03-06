// 函数名称: sub_5112c0
// 虚拟地址: 0x5112c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD**sub_5112c0()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a20c0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_54 = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* ecx = data_1151ad8
    int32_t var_24 = 0
    
    if (ecx != 0 && ecx[1] == 0x19)
        result = sub_4981f0(ecx)
        struct _EXCEPTION_REGISTRATION_RECORD** result_1 = result
        
        if (result != 0)
            result = SendMessageA(GetDlgItem(data_1151080, 0x76), 0x188, 0, 0)
            
            if (result != 0xffffffff)
                void* ecx_2 = sub_50d280(result)
                int32_t i = 0
                void* var_44_1 = ecx_2
                int32_t i_1 = 0
                
                if (ecx_2 + 1 s> 0)
                    void* esi_2 = result + 1 + ecx_2
                    void* edi_2 = (result + 1 + ecx_2) * 0x168
                    void* var_34_1 = esi_2
                    void* var_38_1 = edi_2
                    void* var_1c_1 = result * 0x168
                    
                    do
                        void* var_5c_2 = ecx_2
                        int32_t* eax_9 = sub_4cf8e0(data_12bad08, 0)
                        sub_518870(eax_9, eax_9, result_1, esi_2)
                        sub_510770(esi_2)
                        int32_t j_1 = 0
                        struct _EXCEPTION_REGISTRATION_RECORD* eax_10 = *result_1
                        void* ecx_8 = var_1c_1 + eax_10
                        void* var_40_1 = ecx_8
                        void* edx_2 = edi_2 + eax_10
                        void* var_2c_1 = edx_2
                        *(edx_2 + 0x10) = *(ecx_8 + 0x10)
                        
                        if (*ecx_8 s> 0)
                            int32_t ebx_1 = 0
                            int32_t j
                            
                            do
                                int32_t* eax_12 = *(ecx_8 + 8)
                                int32_t ecx_9 = *(eax_12 + ebx_1)
                                
                                if (ecx_9 != 1)
                                    int32_t var_58_5 = *(eax_12 + ebx_1 + 8)
                                    sub_4f0a90(eax_12, edx_2, &data_626728, ecx_9)
                                else
                                    char* edi_3 = *(eax_12 + ebx_1 + 8)
                                    char* esi_3 = edi_3
                                    void* ecx_10 = &esi_3[1]
                                    
                                    do
                                        eax_12.b = *esi_3
                                        esi_3 = &esi_3[1]
                                    while (eax_12.b != 0)
                                    
                                    void* k_1 = esi_3 - ecx_10
                                    
                                    if (esi_3 != ecx_10)
                                        void* k
                                        
                                        do
                                            eax_12 = _isdigit(*(edi_3 + k_1 - 1))
                                            
                                            if (eax_12 == 0)
                                                break
                                            
                                            k = k_1
                                            k_1 -= 1
                                        while (k != 1)
                                    
                                    if (edi_3 == 0)
                                        sub_489550(eax_12, &data_5b2591, "str", 
                                            "d:\ax\trunk\ax2017\engine\xstring.cpp", 0x9a, 
                                            "XString::XString")
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_489700()
                                        noreturn
                                    
                                    char* const var_18 = &data_5b2591
                                    sub_48a6e0(&var_18, edi_3, k_1)
                                    var_24 |= 1
                                    int32_t var_8_1 = 0
                                    char* const esi_4 = var_18
                                    char* const var_14
                                    sub_510e80(&var_14)
                                    char* const ecx_13 = &data_5b2591
                                    var_8_1.b = 1
                                    char* eax_14 = var_14
                                    
                                    if (eax_14 != 0)
                                        ecx_13 = eax_14
                                    
                                    char* const var_58_4 = ecx_13
                                    sub_4f0a90(eax_14, var_2c_1, &data_626728, 1)
                                    var_8_1.b = 2
                                    
                                    if (data_aca1f4 != 0)
                                        char* eax_15 = var_14
                                        
                                        if (eax_15 != 0 && *eax_15 != 0)
                                            char* eax_16 = sub_48a080(&var_14)
                                            int32_t temp2_1 = *(eax_16 + 4)
                                            *(eax_16 + 4) -= 1
                                            
                                            if (temp2_1 == 1)
                                                sub_4984f0(eax_16, *(eax_16 + 0xc) + 0x10)
                                                var_14 = &data_5b2591
                                    
                                    int32_t var_8_2 = 3
                                    
                                    if (data_aca1f4 != 0 && esi_4 != 0 && *esi_4 != 0)
                                        char* eax_17 = sub_48a080(&var_18)
                                        int32_t temp3_1 = *(eax_17 + 4)
                                        *(eax_17 + 4) -= 1
                                        
                                        if (temp3_1 == 1)
                                            sub_4984f0(eax_17, *(eax_17 + 0xc) + 0x10)
                                            var_18 = &data_5b2591
                                    
                                    int32_t var_8_3 = 0xffffffff
                                
                                ebx_1 += 0x10
                                ecx_8 = var_40_1
                                j = j_1 + 1
                                j_1 = j
                                edx_2 = var_2c_1
                            while (j s< *ecx_8)
                            i = i_1
                            esi_2 = var_34_1
                            edi_2 = var_38_1
                        
                        ecx_2 = var_44_1
                        i += 1
                        var_1c_1 += 0x168
                        esi_2 += 1
                        edi_2 += 0x168
                        i_1 = i
                        var_34_1 = esi_2
                        var_38_1 = edi_2
                    while (i s< ecx_2 + 1)
                
                void* eax_19 = data_1151ad8
                void* ecx_19 = ecx_2 + 1 + result
                
                if (eax_19 != 0)
                    int32_t eax_20 = *(eax_19 + 4)
                    
                    if (eax_20 == 0x19)
                        ecx_19 = sub_50e390(ecx_19, 0xffffffff)
                    else if (eax_20 == 0x1b)
                        ecx_19 = sub_50e950(ecx_19)
                
                sub_50c600(ecx_19)
                sub_546950()
                result = sub_546800()
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
