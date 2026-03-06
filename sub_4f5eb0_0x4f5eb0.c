// 函数名称: sub_4f5eb0
// 虚拟地址: 0x4f5eb0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_4f5eb0(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a13c1
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_3c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_20 = 0
    char* esi = arg2[1]
    
    if (_isalpha(*esi) == 0 && *esi != 0x5f)
        arg1[2] = &data_5b2591
        *arg1 = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg1
    
    while (true)
        char eax_6 = esi[1]
        esi = &esi[1]
        
        if (_isalpha(eax_6) == 0)
            int32_t eax_7
            eax_7.b = *esi
            
            if (eax_7.b != 0x5f && _isdigit(eax_7.b) == 0)
                break
    
    int32_t edi_1 = arg2[1]
    void* eax_10 = sub_4f5990(*arg2)
    *eax_10 = 0xa
    *(eax_10 + 4) = edi_1
    *(eax_10 + 8) = esi - edi_1
    arg2[1] = esi
    sub_4f59f0(arg2)
    *arg1 = 3
    arg1[1] = eax_10
    arg1[2] = &data_5b2591
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
