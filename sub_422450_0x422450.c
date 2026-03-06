// 函数名称: sub_422450
// 虚拟地址: 0x422450
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char** __fastcallsub_422450(char** arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59cf89
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char** var_14 = arg1
    int32_t __saved_ebp
    int32_t var_1c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** var_14_1 = arg1
    *arg1 = &data_5b2591
    int32_t var_8_1 = 0
    arg1[1] = &data_5b2591
    struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_20)(struct _EXCEPTION_REGISTRATION_RECORD**
        * arg1) = sub_48a3d0
    var_8_1.b = 1
    `eh vector constructor iterator'(&arg1[2], 4, 8, sub_48a310)
    struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_20_1)(struct _EXCEPTION_REGISTRATION_RECORD
        *** arg1) = sub_48a3d0
    var_8_1.b = 2
    `eh vector constructor iterator'(&arg1[0xa], 4, 8, sub_48a310)
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
