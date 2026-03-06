// 函数名称: sub_4d4300
// 虚拟地址: 0x4d4300
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char** __fastcallsub_4d4300(char** arg1, char* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a02a1
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** var_20 = arg1
    int32_t var_1c = 0
    int32_t* eax_3 = _fopen(arg2, "rb")
    
    if (eax_3 == 0)
        *arg1 = &data_5b2591
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg1
    
    _fseek(eax_3, 0, 2)
    int32_t* var_40 = eax_3
    uint32_t eax_5 = sub_587c01()
    uint32_t var_14 = eax_5
    _fseek(eax_3, 0, 0)
    uint32_t (* eax_6)[0x4] = sub_4c2e40(eax_5 + 1)
    uint32_t eax_7 = _fread(eax_6, 1, var_14, eax_3)
    _fclose(eax_3)
    uint32_t eax_8 = var_14
    
    if (eax_7 != eax_8)
        if (eax_6 != 0)
            _aligned_free_base(eax_6)
        
        *arg1 = &data_5b2591
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg1
    
    *(eax_6 + eax_8) = 0
    sub_48a320(&var_14, eax_6)
    int32_t var_8_1 = 1
    
    if (eax_6 != 0)
        _aligned_free_base(eax_6)
    
    uint32_t esi_2 = var_14
    *arg1 = esi_2
    
    if (esi_2 != 0 && *esi_2 != 0)
        char* eax_10 = sub_48a080(arg1)
        *(eax_10 + 4) += 1
    
    int32_t var_1c_1 = 1
    int32_t var_8_2 = 2
    
    if (data_aca1f4 != 0 && esi_2 != 0 && *esi_2 != 0)
        char* eax_11 = sub_48a080(&var_14)
        int32_t temp0_1 = *(eax_11 + 4)
        *(eax_11 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_4984f0(eax_11, *(eax_11 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
