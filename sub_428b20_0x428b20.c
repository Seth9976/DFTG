// 函数名称: sub_428b20
// 虚拟地址: 0x428b20
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char** __fastcallsub_428b20(char** arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59d291
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** var_1c = arg1
    int32_t var_18 = 0
    *arg1 = &data_5b2591
    int32_t var_8_1 = 0
    int32_t var_18_1 = 1
    char* var_14
    
    if (arg2 s> 0x15180)
        int32_t var_2c = (arg2 + 0xa8c0) s/ 0x15180
        int32_t var_8_2 = 3
        sub_48a560(arg1, sub_48a9d0(&var_14, "%d days"))
        int32_t var_8_3 = 4
    else if (arg2 s<= 0xe10)
        int32_t var_2c_4 = arg2 s% 0x3c
        int32_t var_30_1 = arg2 s/ 0x3c
        int32_t var_8_6 = 7
        sub_48a560(arg1, sub_48a9d0(&var_14, "%02d:%02d"))
        int32_t var_8_7 = 8
    else
        int32_t var_2c_2 = arg2 s/ 0xe10
        int32_t var_8_4 = 5
        sub_48a560(arg1, sub_48a9d0(&var_14, "%d hours"))
        int32_t var_8_5 = 6
    
    if (data_aca1f4 != 0)
        char* eax_19 = var_14
        
        if (eax_19 != 0 && *eax_19 != 0)
            char* eax_20 = sub_48a080(&var_14)
            int32_t temp0_1 = *(eax_20 + 4)
            *(eax_20 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_4984f0(eax_20, *(eax_20 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
