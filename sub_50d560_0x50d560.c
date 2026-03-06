// 函数名称: sub_50d560
// 虚拟地址: 0x50d560
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char** __fastcallsub_50d560(char** arg1, void* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a1e81
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** var_1c = arg1
    int32_t var_8_1 = 0
    void* const eax_3 = &data_5d2b88
    int32_t var_18 = 0
    char* ecx_1
    
    while (true)
        if (*eax_3 == *(arg2 + 4))
            ecx_1 = *(eax_3 + 4)
            break
        
        eax_3 += 8
        
        if (*(eax_3 + 4) == 0)
            ecx_1 = &data_5b2591
            break
    
    do
        eax_3.b = *ecx_1
        ecx_1 = &ecx_1[1]
    while (eax_3.b != 0)
    
    void* var_30 = arg2
    char* var_14
    sub_4d3870(&var_14, data_1151ad8)
    int32_t var_8_2 = 1
    *arg1 = &data_5b2591
    char* eax_4 = var_14
    int32_t var_18_1 = 1
    int32_t edx_1
    
    if (eax_4 == 0 || *eax_4 == 0)
        edx_1 = 0
    else
        edx_1 = *(sub_48a080(&var_14) + 8)
        eax_4 = var_14
    
    char* ecx_5 = &data_5b2591
    
    if (eax_4 != 0)
        ecx_5 = eax_4
    
    sub_48a6e0(arg1, ecx_5, edx_1 - (ecx_1 - &ecx_1[1] + 1))
    int32_t var_8_3 = 2
    
    if (data_aca1f4 != 0)
        char* eax_6 = var_14
        
        if (eax_6 != 0 && *eax_6 != 0)
            char* eax_7 = sub_48a080(&var_14)
            int32_t temp0_1 = *(eax_7 + 4)
            *(eax_7 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_4984f0(eax_7, *(eax_7 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
