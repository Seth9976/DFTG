// 函数名称: sub_4fc7f0
// 虚拟地址: 0x4fc7f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t**sub_4fc7f0(int32_t** arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a1858
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    char* const result_3 = &data_5b2591
    int32_t** result_1
    int32_t** result_2 = result_1
    
    if (result_2 != 0)
        result_3 = result_2
    
    int32_t** result = sub_4d82a0(data_12bacfc, result_3)
    int32_t ebx
    
    if (result != 0)
        sub_4d4bb0(arg1[1])
        int32_t* edx = *arg1
        arg1[1] = 0
        sub_4fbf70(*result, edx)
        result[3]
        sub_4cead0(*result)
        sub_4d4bb0(result[1])
        _aligned_free_base(result)
        ebx.b = 1
    else
        ebx.b = 0
    
    int32_t var_8_2 = 2
    
    if (data_aca1f4 != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&result_1)
            int32_t temp0_1 = result[1]
            result[1] -= 1
            
            if (temp0_1 == 1)
                sub_4984f0(result, &result[3][4])
    
    result.b = ebx.b
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
