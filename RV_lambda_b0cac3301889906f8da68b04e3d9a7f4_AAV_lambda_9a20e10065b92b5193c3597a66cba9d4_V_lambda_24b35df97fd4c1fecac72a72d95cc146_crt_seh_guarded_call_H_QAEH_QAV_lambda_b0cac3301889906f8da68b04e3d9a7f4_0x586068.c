// 函数名称: ??$?RV<lambda_b0cac3301889906f8da68b04e3d9a7f4>@@AAV<lambda_9a20e10065b92b5193c3597a66cba9d4>@@V<lambda_24b35df97fd4c1fecac72a72d95cc146>@@@?$__crt_seh_guarded_call@H@@QAEH$$QAV<lambda_b0cac3301889906f8da68b04e3d9a7f4>@@AAV<lambda_9a20e10065b92b5193c3597a66cba9d4>@@$$QAV<lambda_24b35df97fd4c1fecac72a72d95cc146>@@@Z
// 虚拟地址: 0x586068
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __stdcall??$?RV<lambda_b0cac3301889906f8da68b04e3d9a7f4>@@AAV<lambda_9a20e10065b92b5193c3597a66cba9d4>@@V<lambda_24b35df97fd4c1fecac72a72d95cc146>@@@?$__crt_seh_guarded_call@H@@QAEH$$QAV<lambda_b0cac3301889906f8da68b04e3d9a7f4>@@AAV<lambda_9a20e10065b92b5193c3597a66cba9d4>@@$$QAV<lambda_24b35df97fd4c1fecac72a72d95cc146>@@@Z(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp_1 = 0xc
    int32_t __saved_ebp_1 = 0xc
    int32_t var_8 = 0x61bcc8
    int32_t (* var_10)(int32_t* arg1, void* arg2, void* arg3) = __except_handler4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x61bcc8 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_30
    void* const var_34_1 = &data_586074
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_20 = 0
    __lock_file(*arg1)
    int32_t var_8_1 = 0
    uint32_t result = <lambda_54dcfcba6f8e0c549fa430f4d53fb7dd>::operator()(arg2)
    uint32_t result_1 = result
    int32_t var_8_2 = 0xfffffffe
    $LN7(&__saved_ebp)
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_2 = &data_5860a7
    return result
}
