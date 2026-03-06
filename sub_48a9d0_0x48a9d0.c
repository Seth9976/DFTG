// 函数名称: sub_48a9d0
// 虚拟地址: 0x48a9d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char**sub_48a9d0(char** arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59ec39
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ecx
    int32_t var_14 = ecx
    int32_t __saved_ebp
    int32_t var_1c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_14_1 = 0
    *arg1 = &data_5b2591
    int32_t var_8_1 = 0
    int32_t var_14_2 = 1
    void arg_c
    sub_48a930(arg1, arg2, &arg_c)
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
