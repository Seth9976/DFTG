// 函数名称: sub_5349d0
// 虚拟地址: 0x5349d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_5349d0(int32_t arg1, char* arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a28e8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_38 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_3c = arg3[1]
    void var_2c
    void* eax_4 = sub_534260(arg3, &var_2c, arg4, *arg3)
    
    if (arg2 == 0)
        sub_489550(eax_4, &data_5b2591, "str", "d:\ax\trunk\ax2017\engine\xstring.cpp", 0x94, 
            "XString::XString")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    char* var_30
    sub_48a2c0(&var_30, arg2)
    int32_t var_8_1 = 0
    int32_t eax_5
    int32_t ecx_3
    eax_5, ecx_3 = sub_48a670(&var_30, "_env")
    int32_t var_3c_1 = 1
    int32_t* result = sub_533d90(eax_5, &var_2c, ecx_3)
    sub_4d1720(result)
    sub_4d0720(result)
    int32_t var_8_2 = 1
    
    if (data_aca1f4 != 0)
        char* eax_6 = var_30
        
        if (eax_6 != 0 && *eax_6 != 0)
            char* eax_7 = sub_48a080(&var_30)
            int32_t temp0_1 = *(eax_7 + 4)
            *(eax_7 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_4984f0(eax_7, *(eax_7 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
