// 函数名称: sub_4d8570
// 虚拟地址: 0x4d8570
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_4d8570(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a0461
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_18 = arg1
    int32_t var_14 = 0
    int32_t var_8_1 = 1
    char* const ebx = &data_5b2591
    char* arg_4
    char* eax_3 = arg_4
    char* const edx = &data_5b2591
    
    if (eax_3 != 0)
        edx = eax_3
    
    void* i = _strchr(edx, 0x2f)
    
    if (i == 0)
    label_4d860d:
        sub_48a2c0(arg1, &data_5b2591)
        int32_t var_14_2 = 1
        int32_t var_8_3 = 2
    else
        void* i_1
        
        do
            i_1 = i
            i = _strchr(i + 1, 0x2f)
        while (i != 0)
        
        if (i_1 == 0)
            goto label_4d860d
        
        char* eax_5 = arg_4
        
        if (eax_5 != 0)
            ebx = eax_5
        
        sub_48a370(arg1, ebx, i_1 - ebx)
        int32_t var_14_1 = 1
        int32_t var_8_2 = 3
    
    if (data_aca1f4 != 0)
        char* eax_6 = arg_4
        
        if (eax_6 != 0 && *eax_6 != 0)
            char* eax_7 = sub_48a080(&arg_4)
            int32_t temp0_1 = *(eax_7 + 4)
            *(eax_7 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_4984f0(eax_7, *(eax_7 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
