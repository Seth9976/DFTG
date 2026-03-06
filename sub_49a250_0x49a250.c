// 函数名称: sub_49a250
// 虚拟地址: 0x49a250
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_49a250(int32_t arg1, int32_t* arg2, int32_t* arg3, char* arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59f1f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_18 = arg3
    int32_t eax_3 = sub_4f9100(arg2)
    
    if (eax_3 == 3)
        struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_28_1)(void* arg1) = sub_498c00
        *arg3 = arg2[1]
        arg3[1] = arg2[2]
        (&arg3[2], &arg2[3], 0x34, 2, sub_498dc0)
        arg3[0x1c] = arg2[0x1d]
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg3
    
    char* var_14
    
    if (eax_3 == 2)
        int32_t* edx_3 = arg2[0x1f]
        
        if (edx_3 == 0)
            sub_48a2c0(&var_14, "null root")
            int32_t var_8_3 = 2
            sub_4990c0(arg3, &var_14)
            int32_t var_8_4 = 3
            goto label_49a2f1
        
        sub_4997f0(eax_3, edx_3, arg3, arg4, arg5)
    else
        sub_48a320(&var_14, arg2[0x1e])
        int32_t var_8_1 = 0
        sub_4990c0(arg3, &var_14)
        int32_t var_8_2 = 1
    label_49a2f1:
        
        if (data_aca1f4 != 0)
            char* eax_10 = var_14
            
            if (eax_10 != 0 && *eax_10 != 0)
                char* eax_11 = sub_48a080(&var_14)
                int32_t temp0_1 = *(eax_11 + 4)
                *(eax_11 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_4984f0(eax_11, *(eax_11 + 0xc) + 0x10)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return arg3
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg3
}
