// 函数名称: __fcloseall
// 虚拟地址: 0x58d81a
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t__fcloseall()
{
    // 第一条实际指令: int32_t __saved_ebp_1 = 0x10
    int32_t __saved_ebp_1 = 0x10
    int32_t var_8 = 0x61bf30
    int32_t (* var_10)(int32_t* arg1, void* arg2, void* arg3) = __except_handler4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x61bf30 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_34
    void* const var_38_4 = &data_58d826
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t result = 0
    ___acrt_lock(8)
    int32_t var_8_1 = 0
    int32_t var_38 = 3
    int32_t esi = 3
    
    while (true)
        int32_t var_24_1 = esi
        
        if (esi == data_6cf754)
            break
        
        void* eax_1 = *(data_6cf758 + (esi << 2))
        
        if (eax_1 != 0)
            if (((*(eax_1 + 0xc) u>> 0xd).b & 1) != 0
                    && _fclose(*(data_6cf758 + (esi << 2))) != 0xffffffff)
                result += 1
            
            DeleteCriticalSection(*(data_6cf758 + (esi << 2)) + 0x20)
            __free_base(*(data_6cf758 + (esi << 2)))
            *(data_6cf758 + (esi << 2)) = 0
        
        esi += 1
    
    int32_t var_8_2 = 0xfffffffe
    $LN10()
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_2 = &data_58d8b0
    return result
}
