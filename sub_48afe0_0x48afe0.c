// 函数名称: sub_48afe0
// 虚拟地址: 0x48afe0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __convention("regparm")sub_48afe0(int32_t arg1, char* arg2, int16_t* arg3, uint16_t arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59ed18
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* edi = arg2
    void* eax_3 = _strchr(edi, 0x3a)
    char* const esi = &data_5b2591
    char* const var_14 = &data_5b2591
    int32_t var_8_1 = 0
    
    if (eax_3 != 0)
        sub_48a5e0(&var_14, edi)
        sub_48a6e0(&var_14, edi, eax_3 - edi)
        uint16_t eax_7 = __atoi64(eax_3 + 1)
        esi = var_14
        arg4 = eax_7
        edi = &data_5b2591
        
        if (esi != 0)
            edi = esi
    
    uint32_t eax_8 = inet_addr(edi)
    
    if (eax_8 != 0xffffffff)
        goto label_48b097
    
    char* result = gethostbyname(edi)
    int16_t* ebx
    
    if (result == 0 || *(result + 0xa) != 4 || *(result + 8) != 2)
        ebx.b = 0
    else
        eax_8 = ***(result + 0xc)
    label_48b097:
        *(arg3 + 4) = eax_8
        *arg3 = 2
        arg3[1] = htons(arg4).w
        ebx.b = 1
    
    int32_t var_8_2 = 2
    
    if (data_aca1f4 != 0 && esi != 0 && *esi != 0)
        result = sub_48a080(&var_14)
        int32_t temp0_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp0_1 == 1)
            sub_4984f0(result, *(result + 0xc) + 0x10)
    
    result.b = ebx.b
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
