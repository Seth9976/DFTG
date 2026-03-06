// 函数名称: sub_58afe0
// 虚拟地址: 0x58afe0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

voidsub_58afe0() __noreturn
{
    // 第一条实际指令: int32_t var_4 = 0xc
    int32_t var_4 = 0xc
    int32_t var_8 = 0x61be10
    int32_t (* var_10)(int32_t* arg1, void* arg2, void* arg3) = __except_handler4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ebp
    var_4 = ebp
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x61be10 ^ __security_cookie_1
    int32_t eax_1 = __security_cookie_1 ^ &var_4
    int32_t var_20 = eax_1
    int32_t var_30 = eax_1
    int32_t* var_1c = &var_30
    void* const var_34 = &data_58afec
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t esi = sub_58c1b2()[3]
    
    if (esi != 0)
        int32_t var_8_1 = 0
        esi()
        int32_t var_8_2 = 0xfffffffe
    
    sub_58a129()
    noreturn
}
