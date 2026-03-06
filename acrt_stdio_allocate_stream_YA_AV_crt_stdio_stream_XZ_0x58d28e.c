// 函数名称: ?__acrt_stdio_allocate_stream@@YA?AV__crt_stdio_stream@@XZ
// 虚拟地址: 0x58d28e
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t*?__acrt_stdio_allocate_stream@@YA?AV__crt_stdio_stream@@XZ(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp_1 = 0xc
    int32_t __saved_ebp_1 = 0xc
    int32_t var_8 = 0x61bf10
    int32_t (* var_10)(int32_t* arg1, void* arg2, void* arg3) = __except_handler4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x61bf10 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_30
    void* const var_34_1 = &data_58d29a
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    fsbase->NtTib.ExceptionList = &ExceptionList
    *arg1 = 0
    ___acrt_lock(8)
    int32_t var_8_1 = 0
    void var_20
    int32_t* eax_1 = *find_or_allocate_unused_stream_nolock(&var_20)
    *arg1 = eax_1
    
    if (eax_1 != 0)
        eax_1[2] = 0
        eax_1[7] = 0
        *eax_1 = 0
        eax_1[1] = 0
        eax_1[4] = 0xffffffff
    
    int32_t var_8_2 = 0xfffffffe
    $LN8()
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_2 = &data_58d2e0
    return arg1
}
