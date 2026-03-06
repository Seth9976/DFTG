// 函数名称: ??$?RV<lambda_123407a5e2ac06da108355a851863b7a>@@AAV<lambda_2fe9b910cf3cbf4a0ab98a02ba45b3ec>@@V<lambda_ae55bdf541ad94d75914d381c370e64d>@@@?$__crt_seh_guarded_call@H@@QAEH$$QAV<lambda_123407a5e2ac06da108355a851863b7a>@@AAV<lambda_2fe9b910cf3cbf4a0ab98a02ba45b3ec>@@$$QAV<lambda_ae55bdf541ad94d75914d381c370e64d>@@@Z
// 虚拟地址: 0x58d8f8
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __stdcall??$?RV<lambda_123407a5e2ac06da108355a851863b7a>@@AAV<lambda_2fe9b910cf3cbf4a0ab98a02ba45b3ec>@@V<lambda_ae55bdf541ad94d75914d381c370e64d>@@@?$__crt_seh_guarded_call@H@@QAEH$$QAV<lambda_123407a5e2ac06da108355a851863b7a>@@AAV<lambda_2fe9b910cf3cbf4a0ab98a02ba45b3ec>@@$$QAV<lambda_ae55bdf541ad94d75914d381c370e64d>@@@Z(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp_1 = 0xc
    int32_t __saved_ebp_1 = 0xc
    int32_t var_8 = 0x61bf50
    int32_t (* var_10)(int32_t* arg1, void* arg2, void* arg3) = __except_handler4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x61bf50 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_30
    void* const var_34_2 = &data_58d904
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_20 = 0
    ___acrt_lowio_lock_fh(*arg1)
    int32_t var_8_1 = 0
    int32_t esi = **arg2
    int32_t result
    
    if ((*((&data_6cfb08)[esi s>> 6] + (esi & 0x3f) * 0x30 + 0x28) & 1) == 0)
        *__errno() = 9
        result = 0xffffffff
    else
        result = __close_nolock(esi)
    
    int32_t result_1 = result
    int32_t var_8_2 = 0xfffffffe
    $LN7(&__saved_ebp)
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_2 = &data_58d968
    return result
}
