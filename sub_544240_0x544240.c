// 函数名称: sub_544240
// 虚拟地址: 0x544240
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __fastcallsub_544240(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59cd10
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_14 = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (data_aca1f4 != 0 && *arg1 != 0)
        int32_t eax_3 = arg1[2]
        arg1[1] = 0
        result = sub_4984f0(*arg1, eax_3 * 0x1c)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
