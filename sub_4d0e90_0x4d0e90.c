// 函数名称: sub_4d0e90
// 虚拟地址: 0x4d0e90
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_4d0e90(char* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59d928
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* var_14 = arg1
    int32_t __saved_ebp
    int32_t var_1c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_4d18a0(&ExceptionList, "sys/FailureAsset", &var_14, *(arg1 + 4))
    int32_t var_8_1 = 0
    char* const ecx_1 = &data_5b2591
    char* eax_4 = var_14
    
    if (eax_4 != 0)
        ecx_1 = eax_4
    
    int32_t* result = sub_4d0b50(ecx_1, *(arg1 + 4))
    int32_t var_8_2 = 1
    
    if (data_aca1f4 != 0)
        char* ecx_2 = var_14
        
        if (ecx_2 != 0 && *ecx_2 != 0)
            char* eax_5 = sub_48a080(&var_14)
            int32_t temp0_1 = *(eax_5 + 4)
            *(eax_5 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_4984f0(eax_5, *(eax_5 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
