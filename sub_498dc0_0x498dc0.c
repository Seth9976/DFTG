// 函数名称: sub_498dc0
// 虚拟地址: 0x498dc0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __thiscallsub_498dc0(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59ef2b
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t* var_14 = arg1
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_14_1 = arg1
    *arg1 = *arg2
    sub_498e40(&arg1[1], &arg2[1])
    int32_t var_8_1 = 0
    sub_498e40(&arg1[6], &arg2[6])
    arg1[0xb] = arg2[0xb]
    arg1[0xc] = arg2[0xc]
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
