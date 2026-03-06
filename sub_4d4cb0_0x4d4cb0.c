// 函数名称: sub_4d4cb0
// 虚拟地址: 0x4d4cb0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __fastcallsub_4d4cb0(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a02f8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* eax_3 = *(arg2 + 4)
    char* var_30 = arg1
    var_30 = eax_3
    
    if (eax_3 != 0 && *eax_3 != 0)
        char* eax_4 = sub_48a080(&var_30)
        *(eax_4 + 4) += 1
    
    char* result_1
    sub_4d3250(&result_1)
    int32_t var_8_1 = 0
    char* const result_2 = &data_5b2591
    char* result_3 = result_1
    char* const result_7 = &data_5b2591
    
    if (result_3 != 0)
        result_7 = result_3
    
    char* result
    int32_t* ebx
    
    if (sub_4d1830(result_7) != 0)
    label_4d4e31:
        result = result_1
        
        if (result != 0)
            result_2 = result
        
        int32_t edx_4 = *(*(arg2 + 0xc) + 0x20)
        int32_t* ecx_14
        
        if (edx_4 != 0)
            ecx_14 = sub_4d0b50(result_2, edx_4)
            result = result_1
        else if (*result_2 != edx_4.b)
            if (edx_4 == 0)
                edx_4 = sub_4dfc80(result_2)
            
            ecx_14 = sub_4d0b50(result_2, edx_4)
            result = result_1
        else
            ecx_14 = nullptr
        
        *arg1 = ecx_14
        ebx.b = 1
    else
        char* result_4 = result_1
        char* result_9 = &data_5b2591
        
        if (result_4 != 0)
            result_9 = result_4
        
        char* const var_18
        sub_4e1cb0(&var_18, result_9)
        var_8_1.b = 1
        
        if (*(*(arg2 + 0xc) + 0x20) == 0)
            var_30 = &var_18
            sub_48a560(&result_1, var_30)
        label_4d4df2:
            var_8_1.b = 6
            
            if (data_aca1f4 != 0)
                char* eax_14 = var_18
                
                if (eax_14 != 0 && *eax_14 != 0)
                    char* eax_15 = sub_48a080(&var_18)
                    int32_t temp0_1 = *(eax_15 + 4)
                    *(eax_15 + 4) -= 1
                    
                    if (temp0_1 == 1)
                        sub_4984f0(eax_15, *(eax_15 + 0xc) + 0x10)
                        var_18 = &data_5b2591
            
            var_8_1.b = 0
            goto label_4d4e31
        
        char* const eax_7 = var_18
        char* const ecx_4 = &data_5b2591
        
        if (eax_7 != 0)
            ecx_4 = eax_7
        
        if (sub_4dfc80(ecx_4) == *(*(arg2 + 0xc) + 0x20))
            var_30 = &var_18
            sub_48a560(&result_1, var_30)
            goto label_4d4df2
        
        char* result_5 = result_1
        char* result_8 = &data_5b2591
        
        if (result_5 != 0)
            result_8 = result_5
        
        if (sub_4d17c0(result_8) != 0)
            char* result_6 = result_1
            char* result_10 = &data_5b2591
            
            if (result_6 != 0)
                result_10 = result_6
            
            void* eax_10 = *(arg2 + 0xc)
            var_30 = *(eax_10 + 0x20)
            char* const var_1c
            var_30 = sub_4d18a0(eax_10, result_10, &var_1c, var_30)
            var_8_1.b = 2
            sub_48a560(&result_1, var_30)
            var_8_1.b = 3
            
            if (data_aca1f4 != 0)
                char* eax_12 = var_1c
                
                if (eax_12 != 0 && *eax_12 != 0)
                    char* eax_13 = sub_48a080(&var_1c)
                    int32_t temp3_1 = *(eax_13 + 4)
                    *(eax_13 + 4) -= 1
                    
                    if (temp3_1 == 1)
                        sub_4984f0(eax_13, *(eax_13 + 0xc) + 0x10)
                        var_1c = &data_5b2591
            
            goto label_4d4df2
        
        var_8_1.b = 4
        
        if (data_aca1f4 != 0)
            char* const eax_16 = var_18
            
            if (eax_16 != 0 && *eax_16 != 0)
                char* eax_17 = sub_48a080(&var_18)
                int32_t temp2_1 = *(eax_17 + 4)
                *(eax_17 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_4984f0(eax_17, *(eax_17 + 0xc) + 0x10)
                    var_18 = &data_5b2591
        
        result = result_1
        ebx.b = 0
    
    int32_t var_8_2 = 7
    
    if (data_aca1f4 != 0 && result != 0 && *result != 0)
        result = sub_48a080(&result_1)
        int32_t temp1_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp1_1 == 1)
            sub_4984f0(result, *(result + 0xc) + 0x10)
    
    result.b = ebx.b
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
