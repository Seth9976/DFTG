// 函数名称: sub_4c99f0
// 虚拟地址: 0x4c99f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __fastcallsub_4c99f0(void* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59cfb0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_1c = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    
    if (data_aca1f4 != 0)
        result = *(arg1 + 0x160)
        
        if (result != 0 && *result != 0)
            result = sub_48a080(arg1 + 0x160)
            int32_t temp0_1 = result[1]
            result[1] -= 1
            
            if (temp0_1 == 1)
                result = sub_4984f0(result, &result[3][2])
                *(arg1 + 0x160) = &data_5b2591
    
    int32_t var_8_2 = 1
    
    if (data_aca1f4 != 0)
        result = *(arg1 + 0x68)
        
        if (result != 0 && *result != 0)
            result = sub_48a080(arg1 + 0x68)
            int32_t temp1_1 = result[1]
            result[1] -= 1
            
            if (temp1_1 == 1)
                result = sub_4984f0(result, &result[3][2])
                *(arg1 + 0x68) = &data_5b2591
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
