// 函数名称: ___set_fpsr_sse2
// 虚拟地址: 0x58f21c
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD**___set_fpsr_sse2(struct _EXCEPTION_REGISTRATION_RECORD** arg1)
{
    // 第一条实际指令: int32_t __saved_ebp_1 = 8
    int32_t __saved_ebp_1 = 8
    int32_t var_8 = 0x61bfb0
    int32_t (* var_10)(int32_t* arg1, void* arg2, void* arg3) = __except_handler4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x61bfb0 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_2c
    void* const var_30 = &data_58f228
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (data_6cf684 s>= 1)
        result = arg1
        
        if ((result.b & 0x40) == 0 || data_61f2d0 == 0)
            result &= 0xffffffbf
            arg1 = result
        else
            int32_t var_8_1 = 0
            int32_t var_8_2 = 0xfffffffe
    
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_2 = &data_58f291
    return result
}
