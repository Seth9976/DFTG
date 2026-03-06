// 函数名称: sub_51ade0
// 虚拟地址: 0x51ade0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t (* __fastcallsub_51ade0(int32_t* arg1))[0x4]
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a2568
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* result_1 = arg1
    int32_t __saved_ebp
    int32_t var_1c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* result_6 = data_1151ad8
    
    if (result_6 != 0)
        int32_t eax_3 = *(result_6 + 4)
        
        if (eax_3 == 0x22 || eax_3 == 0x1d || eax_3 == 0x19 || eax_3 == 0x1b || eax_3 == 0x1e
                || eax_3 == 0x20)
            *(result_6 + 0x1c) -= 1
    
    void* result_5 = arg1[8]
    data_1151ad8 = arg1
    void* result_4 = result_6
    result_4 = result_5
    
    if (result_5 != 0 && *result_5 != 0)
        char* eax_4 = sub_48a080(&result_4)
        *(eax_4 + 4) += 1
    
    sub_4e6720(&result_1)
    int32_t var_8_1 = 0
    char* const result_3 = &data_5b2591
    char* result_2 = result_1
    
    if (result_2 != 0)
        result_3 = result_2
    
    result_4 = result_3
    sub_5888dd()
    sub_4e28f0()
    uint32_t (* result)[0x4] = arg1[1]
    
    if (result == 0x22 || result == 0x1d || result == 0x19 || result == 0x1b || result == 0x1e
            || result == 0x20)
        if (*arg1 == 0)
            result_4 = 1
            result = sub_4d0ff0(result, 0, arg1, result_4.b)
        
        arg1[7] += 1
    
    if (data_1151ad0 != 0)
        result_4 = 0x9c
        data_1151aec = 2
        result = _memset(&data_1151af0, 0, result_4)
        int32_t xmm0_1 = data_620d84
        data_1151b0c = 0x43c80000
        data_1151b10 = 0x44160000
        data_1151b44 = 0x3f800000
        data_1151b48 = arg1
        data_1151b84 = xmm0_1
    
    int32_t var_8_2 = 2
    
    if (data_aca1f4 != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&result_1)
            uint32_t temp0_1 = (*result)[1]
            (*result)[1] -= 1
            
            if (temp0_1 == 1)
                result = sub_4984f0(result, (*result)[3] + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
