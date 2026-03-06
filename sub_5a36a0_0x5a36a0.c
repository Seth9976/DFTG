// 函数名称: sub_5a36a0
// 虚拟地址: 0x5a36a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD**sub_5a36a0()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59d1b0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_14 = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    
    if (data_aca1f4 != 0)
        result = data_62b2a4
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&data_62b2a4)
            int32_t temp0_1 = result[1]
            result[1] -= 1
            
            if (temp0_1 == 1)
                result = sub_4984f0(result, &result[3][2])
                data_62b2a4 = &data_5b2591
    
    int32_t var_8_2 = 1
    
    if (data_aca1f4 != 0)
        result = data_62b2a0
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&data_62b2a0)
            int32_t temp1_1 = result[1]
            result[1] -= 1
            
            if (temp1_1 == 1)
                result = sub_4984f0(result, &result[3][2])
                data_62b2a0 = &data_5b2591
    
    int32_t var_8_3 = 2
    
    if (data_aca1f4 != 0)
        result = data_62b29c
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&data_62b29c)
            int32_t temp2_1 = result[1]
            result[1] -= 1
            
            if (temp2_1 == 1)
                result = sub_4984f0(result, &result[3][2])
                data_62b29c = &data_5b2591
    
    int32_t var_8_4 = 3
    
    if (data_aca1f4 != 0)
        result = data_62b298
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&data_62b298)
            int32_t temp3_1 = result[1]
            result[1] -= 1
            
            if (temp3_1 == 1)
                result = sub_4984f0(result, &result[3][2])
                data_62b298 = &data_5b2591
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
