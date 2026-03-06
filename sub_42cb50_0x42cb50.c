// 函数名称: sub_42cb50
// 虚拟地址: 0x42cb50
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __convention("regparm")sub_42cb50(int32_t arg1, int32_t arg2, char* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59d548
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* const var_14 = arg3
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_4b2440(arg4, sub_42c8c0)
    int32_t ecx_3 =
        sub_4a8930(sub_4b24c0(arg4, sub_42cad0), &data_62be58, arg4, &data_62b2b8, 0xffffffff)
    var_14 = &data_5b2591
    int32_t var_8_1 = 0
    
    if (sub_4bb1d0(ecx_3, &var_14) == 0)
        sub_48a560(&var_14, &data_62b2b8)
    
    char* const esi = var_14
    char* const edi = &data_5b2591
    
    if (esi != 0)
        edi = esi
    
    char* eax_5 = sub_4cfa30(edi, U"@.")
    char* result
    
    if (eax_5 == 0 || eax_5 == edi)
    label_42cc14:
        result = sub_42a4f0(edi)
        
        if (result.b == 0)
            int32_t var_28_1 = 0xffffffff
            result = sub_4a8570(arg4)
    else
        char* ecx_7 = sub_4cfa30(eax_5, &data_5b3a68)
        
        if (ecx_7 == 0)
            goto label_42cc14
        
        do
            result.b = *ecx_7
            ecx_7 = &ecx_7[1]
        while (result.b != 0)
        
        if (ecx_7 - &ecx_7[1] u< 3)
            goto label_42cc14
    
    int32_t var_8_2 = 1
    
    if (data_aca1f4 != 0 && esi != 0 && *esi != 0)
        result = sub_48a080(&var_14)
        int32_t temp0_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp0_1 == 1)
            result = sub_4984f0(result, *(result + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
