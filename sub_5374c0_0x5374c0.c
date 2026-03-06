// 函数名称: sub_5374c0
// 虚拟地址: 0x5374c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __fastcallsub_5374c0(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a2bb0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* i = *arg1
    
    while (i != 0)
        int32_t* i_1 = i
        i = i[2]
        sub_50c150(i_1)
        result = sub_4984f0(i_1, 0x10)
    
    arg1[2] = 0
    *arg1 = 0
    arg1[1] = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
