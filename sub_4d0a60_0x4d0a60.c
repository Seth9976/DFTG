// 函数名称: sub_4d0a60
// 虚拟地址: 0x4d0a60
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4d0a60(char* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59fdd8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* var_24 = arg1
    int32_t var_8_1 = 0
    char* arg_4
    char* eax_3 = arg_4
    var_24 = eax_3
    
    if (eax_3 != 0 && *eax_3 != 0)
        char* eax_4 = sub_48a080(&var_24)
        *(eax_4 + 4) += 1
    
    char* const var_14
    sub_4d1ba0(&var_14)
    var_24 = &var_14
    void* eax_5 = sub_4d1db0(var_24)
    int32_t result
    
    if (eax_5 == 0)
        result = 0
    else
        result = *eax_5
    
    var_8_1.b = 3
    
    if (data_aca1f4 != 0)
        char* eax_6 = var_14
        
        if (eax_6 != 0 && *eax_6 != 0)
            char* eax_7 = sub_48a080(&var_14)
            int32_t temp0_1 = *(eax_7 + 4)
            *(eax_7 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_4984f0(eax_7, *(eax_7 + 0xc) + 0x10)
                var_14 = &data_5b2591
    
    int32_t var_8_2 = 4
    
    if (data_aca1f4 != 0)
        char* eax_8 = arg_4
        
        if (eax_8 != 0 && *eax_8 != 0)
            char* eax_9 = sub_48a080(&arg_4)
            int32_t temp1_1 = *(eax_9 + 4)
            *(eax_9 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_4984f0(eax_9, *(eax_9 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
