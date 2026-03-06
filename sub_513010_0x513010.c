// 函数名称: sub_513010
// 虚拟地址: 0x513010
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __convention("regparm")sub_513010(int32_t arg1, char** arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a20e8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_1c
    int32_t* var_34 = &var_1c
    int32_t var_20
    int32_t* var_38 = &var_20
    
    if (sub_48d8d0(&var_20, arg2, arg3, *arg2, " %f %f") != 0)
        *arg3 = var_20
        arg3[1] = var_1c
    
    var_38.q = _mm_cvtps_pd(arg3[1])
    char* var_40
    var_40.q = _mm_cvtps_pd(*arg3)
    char* var_18
    sub_48a9d0(&var_18, "%g %g")
    int32_t var_8_1 = 0
    sub_48a560(arg4, &var_18)
    int32_t var_8_2 = 1
    
    if (data_aca1f4 != 0)
        char* eax_7 = var_18
        
        if (eax_7 != 0 && *eax_7 != 0)
            char* eax_8 = sub_48a080(&var_18)
            int32_t temp0_1 = *(eax_8 + 4)
            *(eax_8 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_4984f0(eax_8, *(eax_8 + 0xc) + 0x10)
    
    char* result = *arg4
    char* result_1 = &data_5b2591
    
    if (result != 0)
        result_1 = result
    
    *arg2 = result_1
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
