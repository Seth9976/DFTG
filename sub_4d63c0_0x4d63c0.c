// 函数名称: sub_4d63c0
// 虚拟地址: 0x4d63c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_4d63c0(void* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a0328
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    int32_t* esi = data_114e86c
    esi[3] += 1
    int32_t* edi = *esi
    
    if (edi == 0)
        sub_4d79e0(esi)
        edi = *esi
    
    *esi = *edi
    edi[2] = 0
    edi[3] = 0
    edi[4] = 0
    *edi = &data_5b2591
    edi[1] = &data_5b2591
    int32_t* var_14 = edi
    sub_4362d0(arg1 + 4, &var_14)
    char* arg_4
    sub_48a560(edi, &arg_4)
    void* ebx_1 = data_114e86c
    *(ebx_1 + 0x1c) += 1
    int32_t* result = *(ebx_1 + 0x10)
    
    if (result == 0)
        sub_4d7960(ebx_1 + 0x10)
        result = *(ebx_1 + 0x10)
    
    *(ebx_1 + 0x10) = *result
    result[2] = 0
    result[3] = 0
    result[4] = 0
    *result = &data_5b2591
    result[1] = 0
    result[2] = 0
    result[3] = 0
    edi[2] = result
    int32_t var_8_2 = 1
    
    if (data_aca1f4 != 0)
        char* eax_5 = arg_4
        
        if (eax_5 != 0 && *eax_5 != 0)
            char* eax_6 = sub_48a080(&arg_4)
            int32_t temp0_1 = *(eax_6 + 4)
            *(eax_6 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_4984f0(eax_6, *(eax_6 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
