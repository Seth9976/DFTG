// 函数名称: sub_434a00
// 虚拟地址: 0x434a00
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char*sub_434a00()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59d8a0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_3c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* const result_1 = &data_5b2591
    int32_t var_8_1 = 0
    char* const result_2 = &data_5b2591
    char* const result_3 = &data_5b2591
    struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_40)(struct _EXCEPTION_REGISTRATION_RECORD**
        * arg1) = sub_48a3d0
    var_8_1.b = 2
    void var_28
    `eh vector constructor iterator'(&var_28, 4, 4, sub_48a310)
    int32_t var_8_2 = 3
    char* const result_8 = &data_5b2591
    char* const result_4 = result_1
    char* const result_7 = &data_5b2591
    
    if (result_4 != 0)
        result_7 = result_4
    
    if (result_7 != "jgates@gmail.com")
        sub_48a180(result_4, 0x10, &result_1, 0)
        __builtin_strncpy(result_1, "jgates@gmail.com", 0x10)
        result_1[0x10] = 0
    
    char* result_5 = result_2
    
    if (result_5 != 0)
        result_8 = result_5
    
    if (result_8 != "Roll for the Galaxy bug report")
        sub_48a180(result_5, 0x1e, &result_2, 0)
        sub_579300(result_2, "Roll for the Galaxy bug report", 0x1f)
    
    char* const result_6 = result_3
    
    if (result_6 != 0 && result_6 != &data_5b2591)
        if (data_aca1f4 != 0 && *result_6 != 0)
            char* eax_5 = sub_48a080(&result_3)
            int32_t temp1_1 = *(eax_5 + 4)
            *(eax_5 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_4984f0(eax_5, *(eax_5 + 0xc) + 0x10)
        
        result_3 = &data_5b2591
    
    int32_t var_18 = 2
    char* const* var_40_1 = &result_2
    sub_4d44a0(&var_28, &result_1, sub_438ce0(&var_28), &var_28, 2)
    int32_t var_8_3 = 4
    char* result = `eh vector vbase constructor iterator'(&var_28, 4, 4, sub_48a3d0)
    var_8_3.b = 5
    
    if (data_aca1f4 != 0)
        result = result_3
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&result_3)
            int32_t temp0_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp0_1 == 1)
                result = sub_4984f0(result, *(result + 0xc) + 0x10)
                result_3 = &data_5b2591
    
    var_8_3.b = 6
    
    if (data_aca1f4 != 0)
        result = result_2
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&result_2)
            int32_t temp2_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp2_1 == 1)
                result = sub_4984f0(result, *(result + 0xc) + 0x10)
                result_2 = &data_5b2591
    
    var_8_3.b = 7
    
    if (data_aca1f4 != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&result_1)
            int32_t temp3_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp3_1 == 1)
                result = sub_4984f0(result, *(result + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
