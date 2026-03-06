// 函数名称: sub_4e2720
// 虚拟地址: 0x4e2720
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char*sub_4e2720()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a0970
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    char* const esi = &data_5b2591
    char* var_1c
    char* eax_4 = *sub_4e5530(&var_1c, "sys/")
    char* ecx_1 = &data_5b2591
    
    if (eax_4 != 0)
        ecx_1 = eax_4
    
    sub_4e2480(ecx_1)
    int32_t var_8_2 = 1
    
    if (data_aca1f4 != 0)
        char* eax_5 = var_1c
        
        if (eax_5 != 0 && *eax_5 != 0)
            char* eax_6 = sub_48a080(&var_1c)
            int32_t temp0_1 = *(eax_6 + 4)
            *(eax_6 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_4984f0(eax_6, *(eax_6 + 0xc) + 0x10)
    
    int32_t var_8_3 = 0xffffffff
    int32_t var_8_4 = 2
    char* ecx_5 = &data_5b2591
    char* eax_8 = *sub_4e5530(&var_1c, "res/")
    
    if (eax_8 != 0)
        ecx_5 = eax_8
    
    sub_4e2480(ecx_5)
    int32_t var_8_5 = 3
    
    if (data_aca1f4 != 0)
        char* eax_9 = var_1c
        
        if (eax_9 != 0 && *eax_9 != 0)
            char* eax_10 = sub_48a080(&var_1c)
            int32_t temp1_1 = *(eax_10 + 4)
            *(eax_10 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_4984f0(eax_10, *(eax_10 + 0xc) + 0x10)
    
    char const* const eax_11
    
    if (data_1150c9d != 0)
        eax_11 = "xbin/ios/"
    else if (data_1150c9c == 0)
        eax_11 = "xbin/"
    else
        eax_11 = "xbin/web/"
    
    char const* const var_28 = eax_11
    int32_t var_8_6 = 0xffffffff
    char* result_1
    sub_48a9d0(&result_1, "%satlases/")
    int32_t var_8_7 = 9
    char* result_3 = result_1
    char* result_4 = &data_5b2591
    
    if (result_3 != 0)
        result_4 = result_3
    
    var_8_7.b = 0xa
    char* result_2
    char* eax_13 = *sub_4e5530(&result_2, result_4)
    
    if (eax_13 != 0)
        esi = eax_13
    
    char* result = sub_4e2480(esi)
    var_8_7.b = 0xb
    
    if (data_aca1f4 != 0)
        result = result_2
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&result_2)
            int32_t temp2_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp2_1 == 1)
                result = sub_4984f0(result, *(result + 0xc) + 0x10)
                result_2 = &data_5b2591
    
    int32_t var_8_8 = 0xc
    
    if (data_aca1f4 != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&result_1)
            int32_t temp3_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp3_1 == 1)
                result = sub_4984f0(result, *(result + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
