// 函数名称: sub_483370
// 虚拟地址: 0x483370
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char** __convention("regparm")sub_483370(int32_t arg1, char arg2, char** arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59e319
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** var_1c = arg3
    int32_t var_18 = 0
    *arg3 = &data_5b2591
    int32_t var_8_1 = 0
    int32_t var_18_1 = 1
    char* var_14
    
    if (arg2 != 0)
        int32_t var_28_1 = **(data_632804 + arg4 * 0xc + 0x8c4)
        int32_t var_8_4 = 3
        sub_48a560(arg3, sub_48a9d0(&var_14, "with an extra shipper from %s "))
        int32_t var_8_5 = 4
    else
        int32_t var_8_2 = 1
        sub_48a560(arg3, sub_48a9d0(&var_14, &data_5b2591))
        int32_t var_8_3 = 2
    
    if (data_aca1f4 != 0)
        char* eax_8 = var_14
        
        if (eax_8 != 0 && *eax_8 != 0)
            char* eax_9 = sub_48a080(&var_14)
            int32_t temp0_1 = *(eax_9 + 4)
            *(eax_9 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_4984f0(eax_9, *(eax_9 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg3
}
