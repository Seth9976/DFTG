// 函数名称: sub_5a3b10
// 虚拟地址: 0x5a3b10
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD**sub_5a3b10()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59d330
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_14 = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    
    if (data_aca1f4 != 0)
        result = data_63c47c
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&data_63c47c)
            int32_t temp0_1 = result[1]
            result[1] -= 1
            
            if (temp0_1 == 1)
                result = sub_4984f0(result, &result[3][2])
                data_63c47c = &data_5b2591
    
    int32_t var_8_2 = 1
    
    if (data_aca1f4 != 0)
        result = data_63c46c
        
        if (result != 0 && *result != 0)
            result = sub_48a080(&data_63c46c)
            int32_t temp1_1 = result[1]
            result[1] -= 1
            
            if (temp1_1 == 1)
                result = sub_4984f0(result, &result[3][2])
                data_63c46c = &data_5b2591
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
