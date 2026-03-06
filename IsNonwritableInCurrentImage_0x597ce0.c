// 函数名称: __IsNonwritableInCurrentImage
// 虚拟地址: 0x597ce0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t__IsNonwritableInCurrentImage(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xfffffffe
    int32_t var_8 = 0xfffffffe
    int32_t var_c = 0x61c138
    int32_t (* var_10)(int32_t* arg1, void* arg2, void* arg3) = __except_handler4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_c_1 = var_c ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie_1 ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_1c = &var_2c
    int32_t var_8_1 = 0
    
    if (__ValidateImageBase(&__dos_header) != 0)
        void* eax_5 = __FindPESection(&__dos_header, arg1 - &__dos_header)
        
        if (eax_5 != 0)
            int32_t var_8_2 = 0xfffffffe
            fsbase->NtTib.ExceptionList = ExceptionList
            return not.d(*(eax_5 + 0x24) u>> 0x1f) & 1
    
    int32_t var_8_3 = 0xfffffffe
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
