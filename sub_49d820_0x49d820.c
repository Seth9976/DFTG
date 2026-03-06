// 函数名称: sub_49d820
// 虚拟地址: 0x49d820
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_49d820()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59f2f9
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_1c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_14 = 0
    void* var_18 = &data_15156f0
    int32_t var_8_1 = 0
    int32_t var_14_1 = 1
    _memset(&data_15156f0, 0, 0x158)
    sub_4ce640(&data_15156f0, data_126cd2c)
    fsbase->NtTib.ExceptionList = ExceptionList
    return &data_15156f0
}
