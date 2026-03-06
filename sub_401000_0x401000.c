// 函数名称: sub_401000
// 虚拟地址: 0x401000
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_401000()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59ccaa
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_14 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_18)(void* arg1) = sub_41c530
    int32_t var_8_1 = 0
    `eh vector constructor iterator'(0x62a5fc, 0x10, 0x80, sub_41c520)
    __builtin_memset(&data_62ae20, 0, 0x14)
    data_62ae34 = 1
    data_62ae38 = 0
    data_62b020 = 0
    data_62b024 = 0
    data_62b028 = 0
    int32_t result = _atexit(sub_5a35e0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
