// 函数名称: sub_513490
// 虚拟地址: 0x513490
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __convention("regparm")sub_513490(int32_t arg1, char** arg2, int64_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59ebd8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_18
    int32_t* var_2c = &var_18
    void* const var_30 = &data_5fd99c
    int32_t eax_4 = sub_48d8d0(&var_18, arg2, arg3, *arg2, &data_5fd99c)
    float xmm0[0x2] = var_18
    
    if (eax_4 != 0)
        *arg3 = xmm0
    
    var_30.q = _mm_cvtps_pd(xmm0)
    char* var_14
    sub_48a9d0(&var_14, &data_5f2124)
    int32_t var_8_1 = 0
    sub_48a560(arg4, &var_14)
    int32_t var_8_2 = 1
    
    if (data_aca1f4 != 0)
        char* eax_5 = var_14
        
        if (eax_5 != 0 && *eax_5 != 0)
            char* eax_6 = sub_48a080(&var_14)
            int32_t temp0_1 = *(eax_6 + 4)
            *(eax_6 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_4984f0(eax_6, *(eax_6 + 0xc) + 0x10)
    
    char* result = *arg4
    char* result_1 = &data_5b2591
    
    if (result != 0)
        result_1 = result
    
    *arg2 = result_1
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
