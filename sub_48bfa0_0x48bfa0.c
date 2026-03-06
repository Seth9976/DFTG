// 函数名称: sub_48bfa0
// 虚拟地址: 0x48bfa0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __convention("regparm")sub_48bfa0(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59ed50
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_3c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    *arg2 = 0
    char* eax_3 = *arg4
    
    if (eax_3 != 0 && eax_3 != &data_5b2591)
        if (data_aca1f4 != 0 && *eax_3 != 0)
            char* eax_4 = sub_48a080(arg4)
            int32_t temp0_1 = *(eax_4 + 4)
            *(eax_4 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_4984f0(eax_4, *(eax_4 + 0xc) + 0x10)
        
        *arg4 = &data_5b2591
    
    char* eax_5 = *arg5
    
    if (eax_5 != 0 && eax_5 != &data_5b2591)
        if (data_aca1f4 != 0 && *eax_5 != 0)
            char* eax_6 = sub_48a080(arg5)
            int32_t temp1_1 = *(eax_6 + 4)
            *(eax_6 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_4984f0(eax_6, *(eax_6 + 0xc) + 0x10)
        
        *arg5 = &data_5b2591
    
    void* var_18 = *arg3
    char* const var_20 = &data_5b2591
    int32_t var_8_1 = 0
    char* result
    int32_t ecx_5
    int32_t edx_5
    result, ecx_5, edx_5 = sub_48bee0(&var_18, &var_20)
    char* const edi_1 = var_20
    int32_t* ebx
    
    if (result.b == 0)
        ebx.b = 0
    else
        char* const esi_2 = &data_5b2591
        int32_t* var_40_1 = arg2
        char* const eax_8 = &data_5b2591
        
        if (edi_1 != 0)
            eax_8 = edi_1
        
        int32_t eax_9
        int32_t ecx_6
        int32_t edx_6
        eax_9, ecx_6, edx_6 = sub_48d8d0(eax_8, edx_5, ecx_5, eax_8, "HTTP/1.1 %d")
        
        if (eax_9 != 1)
            char* const eax_10 = &data_5b2591
            int32_t* var_40_2 = arg2
            
            if (edi_1 != 0)
                eax_10 = edi_1
            
            result = sub_48d8d0(eax_10, edx_6, ecx_6, eax_10, "HTTP/1.0 %d")
        
        if (eax_9 != 1 && result != 1)
            ebx.b = 0
        else
            void* eax_11 = var_18
            
            if (*arg2 == 0xc8)
                char* result_1 = 0xffffffff
                char* const result_2 = &data_5b2591
                var_8_1.b = 4
                int32_t edx_8
                result, edx_8 = sub_48bee0(&var_18, &result_2)
                
                if (result.b == 0)
                label_48c181:
                    var_8_1.b = 5
                    
                    if (data_aca1f4 != 0)
                        result = result_2
                        
                        if (result != 0 && *result != 0)
                            result = sub_48a080(&result_2)
                            int32_t temp4_1 = *(result + 4)
                            *(result + 4) -= 1
                            
                            if (temp4_1 == 1)
                                sub_4984f0(result, *(result + 0xc) + 0x10)
                    
                    ebx.b = 0
                else
                    char* const result_3
                    
                    while (true)
                        result_3 = result_2
                        
                        if (result_3 == 0)
                            break
                        
                        if (*result_3 == 0)
                            break
                        
                        char* const* ecx_8 = &result_2
                        
                        if (*(sub_48a080(ecx_8) + 8) == 0)
                            break
                        
                        int32_t* var_40_4 = &result_1
                        sub_48d8d0(&result_1, edx_8, ecx_8, result_3, "Content-Length: %d")
                        var_8_1.b = 8
                        
                        if (data_aca1f4 != 0 && *result_3 != 0)
                            char* eax_14 = sub_48a080(&result_2)
                            int32_t temp6_1 = *(eax_14 + 4)
                            *(eax_14 + 4) -= 1
                            
                            if (temp6_1 == 1)
                                sub_4984f0(eax_14, *(eax_14 + 0xc) + 0x10)
                        
                        result_2 = &data_5b2591
                        var_8_1.b = 4
                        result, edx_8 = sub_48bee0(&var_18, &result_2)
                        
                        if (result.b == 0)
                            goto label_48c181
                    
                    ebx = var_18
                    sub_48a6e0(arg4, eax_11, ebx - eax_11)
                    var_8_1.b = 7
                    
                    if (data_aca1f4 != 0 && result_3 != 0 && *result_3 != 0)
                        char* eax_17 = sub_48a080(&result_2)
                        int32_t temp5_1 = *(eax_17 + 4)
                        *(eax_17 + 4) -= 1
                        
                        if (temp5_1 == 1)
                            sub_4984f0(eax_17, *(eax_17 + 0xc) + 0x10)
                    
                    var_8_1.b = 0
                    result = result_1
                    
                    if (result s< 0)
                        sub_48a670(arg5, ebx)
                        ebx.b = 1
                    else if (result != 0)
                        void* edx_19 = ebx - *arg3
                        void* ecx_24 = arg3[1] - edx_19
                        
                        if (ecx_24 s>= result)
                            if (ecx_24 s> result)
                                sub_4892e0("extra data after http response")
                                result = result_1
                            
                            sub_48a6e0(arg5, ebx, result)
                            ebx.b = 1
                        else
                            sub_48af30(arg3, edx_19 + &result[1])
                            ebx.b = 0
                    else
                        ebx.b = 1
            else
                if (edi_1 != 0)
                    esi_2 = edi_1
                
                char* const var_40_3 = esi_2
                sub_4892e0("http response line: %s")
                ebx.b = 1
    
    int32_t var_8_2 = 0xc
    
    if (data_aca1f4 != 0 && edi_1 != 0 && *edi_1 != 0)
        result = sub_48a080(&var_20)
        int32_t temp2_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp2_1 == 1)
            sub_4984f0(result, *(result + 0xc) + 0x10)
    
    result.b = ebx.b
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
