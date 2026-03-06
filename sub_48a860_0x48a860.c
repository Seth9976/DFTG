// 函数名称: sub_48a860
// 虚拟地址: 0x48a860
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __thiscallsub_48a860(int32_t* arg1, int32_t* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59ec39
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t* var_14 = arg1
    int32_t __saved_ebp
    int32_t var_1c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    int32_t var_14_1 = 0
    char* eax_3 = *arg1
    *arg2 = eax_3
    
    if (eax_3 != 0 && *eax_3 != 0)
        char* eax_4 = sub_48a080(arg2)
        *(eax_4 + 4) += 1
    
    char* const edx = &data_5b2591
    int32_t var_8_2 = 0
    int32_t var_14_2 = 1
    char* ecx_2 = *arg3
    
    if (ecx_2 != 0)
        edx = ecx_2
    
    sub_48a670(arg2, edx)
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg2
}
