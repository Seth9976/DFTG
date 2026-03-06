// 函数名称: sub_4992e0
// 虚拟地址: 0x4992e0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_4992e0(int32_t* arg1, int32_t arg2 @ xmm1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59efa9
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_1c = arg1
    struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_2c)(void* arg1) = sub_498c00
    int32_t var_8_1 = 0
    int32_t var_14 = 0
    `eh vector constructor iterator'(&arg1[2], 0x34, 2, sub_498be0)
    int32_t var_8_2 = 0
    arg1[1] = 0
    *arg1 = 2
    int32_t var_14_1 = 1
    arg1[4] = arg2
    sub_48a560(&arg1[8], &arg1[3])
    arg1[9] = arg1[4]
    arg1[9] = arg1[4]
    *(arg1 + 0x24) = *(arg1 + 0x10)
    *(arg1 + 0x24) = *(arg1 + 0x10)
    arg1[0xb] = arg1[6]
    arg1[9] = arg1[4]
    arg1[0xa] = arg1[5]
    arg1[9] = arg1[4]
    arg1[9] = arg1[4]
    arg1[0x1c] = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
