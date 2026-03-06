// 函数名称: sub_4d8120
// 虚拟地址: 0x4d8120
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_4d8120(char** arg1, void* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a03db
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_14c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_13c
    _memset(&var_13c, 0, 0x128)
    int32_t var_8_1 = 0
    int32_t* result
    
    if (sub_526690(&var_13c, arg2) == 0)
        result = nullptr
    else
        void* edi_1 = data_114e86c
        *(edi_1 + 0x1c) += 1
        result = *(edi_1 + 0x10)
        
        if (result == 0)
            sub_4d7960(edi_1 + 0x10)
            result = *(edi_1 + 0x10)
        
        *(edi_1 + 0x10) = *result
        result[2] = 0
        result[3] = 0
        result[4] = 0
        *result = &data_5b2591
        result[1] = 0
        result[2] = 0
        result[3] = 0
        sub_48a5e0(result, *arg1)
        int32_t var_138
        int32_t eax_5 = var_138
        char* edi_2 = *arg1
        
        if (eax_5 != 3)
            goto label_4d81ff
        
        if (sub_526a60(&var_13c) == 0)
            sub_4d4bb0(result)
            result = nullptr
        else
            eax_5 = var_138
        label_4d81ff:
            char* var_130
            int32_t var_12c
            
            if (eax_5 != 1)
                sub_4d4bb0(result)
                result = nullptr
            else if (__strnicmp(edi_2, var_130, var_12c) != 0)
                sub_4d4bb0(result)
                result = nullptr
            else if (sub_526a60(&var_13c) == 0)
                sub_4d4bb0(result)
                result = nullptr
            else if (sub_4d7ef0(result, &var_13c) == 0)
                sub_4d4bb0(result)
                result = nullptr
    
    int32_t var_8_2 = 1
    int32_t eax_10 = var_13c
    
    if (eax_10 != 0)
        _aligned_free_base(eax_10)
    
    void var_20
    sub_526ca0(&var_20)
    var_13c = 0
    var_8_2.b = 2
    sub_526ca0(&var_20)
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
