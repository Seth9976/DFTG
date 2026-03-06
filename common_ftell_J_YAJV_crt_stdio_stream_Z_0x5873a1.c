// 函数名称: ??$common_ftell@J@@YAJV__crt_stdio_stream@@@Z
// 虚拟地址: 0x5873a1
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t??$common_ftell@J@@YAJV__crt_stdio_stream@@@Z(int32_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp_1 = 0xc
    int32_t __saved_ebp_1 = 0xc
    int32_t var_8 = 0x61bd48
    int32_t (* var_10)(int32_t* arg1, void* arg2, void* arg3) = __except_handler4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x61bd48 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_30
    void* const var_34_2 = &data_5873ad
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t result
    
    if (arg1 != 0 && (arg4 == 0 || arg4 == 1 || arg4 == 2))
        int32_t var_20_1 = 0xffffffff
        __lock_file(arg1)
        int32_t var_8_1 = 0
        int32_t result_1 = common_fseek_nolock(arg1, arg2, arg3, arg4)
        int32_t result_2 = result_1
        int32_t var_8_2 = 0xfffffffe
        $LN11(&__saved_ebp)
        result = result_1
    else
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        result = 0xffffffff
    
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_2 = &data_587414
    return result
}
