// 函数名称: sub_4858a0
// 虚拟地址: 0x4858a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_4858a0(char** arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59e6e1
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_14 = arg2
    char** result_1 = arg1
    int32_t* result = result_1
    int32_t var_1c = 0
    *result_1 = &data_5b2591
    int32_t var_8_1 = 0
    int32_t i = 0
    char* result_2
    char* result_4 = result_2
    int32_t var_1c_1 = 1
    
    if (*(result_4 + 0x528) s> 0)
        void* result_5 = result_4
        
        do
            int32_t var_8_2 = 1
            char* ecx_1 = &data_5b2591
            char* eax_4 = *sub_483e00(result_1, arg2, &result_2, result_5)
            
            if (eax_4 != 0)
                ecx_1 = eax_4
            
            result_1 = sub_48a670(result, ecx_1)
            int32_t var_8_3 = 2
            
            if (data_aca1f4 != 0)
                result_1 = result_2
                
                if (result_1 != 0 && *result_1 != 0)
                    result_1 = sub_48a080(&result_2)
                    int32_t temp1_1 = result_1[1]
                    result_1[1] = &result_1[1][0xffffffff]
                    
                    if (temp1_1 == 1)
                        result_1 = sub_4984f0(result_1, &result_1[3][0x10])
                        result_2 = &data_5b2591
            
            arg2 = var_14
            i += 1
            var_8_3.b = 0
            result_5 += 0x2c
        while (i s< *(result_4 + 0x528))
    
    int32_t i_1 = 0
    
    if (*(result_4 + 0x964) s> 0)
        int32_t* ebx_1 = &result_4[0x52c]
        
        do
            int32_t var_8_4 = 3
            char* ecx_6 = &data_5b2591
            char* eax_6 = *sub_484cb0(result_1, arg2, &result_2, ebx_1)
            
            if (eax_6 != 0)
                ecx_6 = eax_6
            
            result_1 = sub_48a670(result, ecx_6)
            int32_t var_8_5 = 4
            
            if (data_aca1f4 != 0)
                result_1 = result_2
                
                if (result_1 != 0 && *result_1 != 0)
                    result_1 = sub_48a080(&result_2)
                    int32_t temp2_1 = result_1[1]
                    result_1[1] = &result_1[1][0xffffffff]
                    
                    if (temp2_1 == 1)
                        result_1 = sub_4984f0(result_1, &result_1[3][0x10])
                        result_2 = &data_5b2591
            
            arg2 = var_14
            i_1 += 1
            var_8_5.b = 0
            ebx_1 = &ebx_1[9]
        while (i_1 s< *(result_4 + 0x964))
    
    int32_t var_8_6 = 5
    char* ecx_11 = &data_5b2591
    char* eax_9 =
        *sub_484ed0(result_4 + 0x968, var_14, &result_2, result_4 + 0x968, *(result_4 + 0x9e0))
    
    if (eax_9 != 0)
        ecx_11 = eax_9
    
    sub_48a670(result, ecx_11)
    int32_t var_8_7 = 6
    
    if (data_aca1f4 != 0)
        char* result_3 = result_2
        
        if (result_3 != 0 && *result_3 != 0)
            char* eax_10 = sub_48a080(&result_2)
            int32_t temp0_1 = *(eax_10 + 4)
            *(eax_10 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_4984f0(eax_10, *(eax_10 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
