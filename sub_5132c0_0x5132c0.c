// 函数名称: sub_5132c0
// 虚拟地址: 0x5132c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __convention("regparm")sub_5132c0(int32_t arg1, int32_t* arg2, int32_t** arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59ebd8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* result_1
    sub_4e5700(&result_1, *arg2)
    int32_t var_8_1 = 0
    char* const result_2 = &data_5b2591
    char* result_3 = result_1
    char* const result_4 = &data_5b2591
    
    if (result_3 != 0)
        result_4 = result_3
    
    int32_t* eax_3 = sub_518420(result_4)
    
    if (eax_3 == 0)
        eax_3 = *arg3
    else
        *arg3 = eax_3
    
    sub_48a560(arg4, &eax_3[8])
    char* result = *arg4
    
    if (result != 0)
        result_2 = result
    
    *arg2 = result_2
    int32_t var_8_2 = 1
    
    if (data_aca1f4 != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&result_1)
            int32_t temp0_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp0_1 == 1)
                result = sub_4984f0(result, *(result + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
