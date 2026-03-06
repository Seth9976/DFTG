// 函数名称: sub_4d3180
// 虚拟地址: 0x4d3180
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_4d3180(char* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a00a8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* var_14 = arg1
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_4d18a0(&ExceptionList, arg1, &var_14, 3)
    int32_t var_8_1 = 0
    char* eax_4 = var_14
    char* ecx_1 = &data_5b2591
    
    if (eax_4 != 0)
        ecx_1 = eax_4
    
    char* var_28 = ecx_1
    sub_4892e0("Creating %s")
    int32_t* result = sub_4d1350(sub_4d30b0(3))
    
    if (sub_4d1720(result) == 0)
        result = nullptr
    
    int32_t var_8_2 = 2
    
    if (data_aca1f4 != 0)
        char* eax_8 = var_14
        
        if (eax_8 != 0 && *eax_8 != 0)
            char* eax_9 = sub_48a080(&var_14)
            int32_t temp0_1 = *(eax_9 + 4)
            *(eax_9 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_4984f0(eax_9, *(eax_9 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
