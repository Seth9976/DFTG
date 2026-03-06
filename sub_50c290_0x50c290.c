// 函数名称: sub_50c290
// 虚拟地址: 0x50c290
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_50c290(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a1e08
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_1c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_14
    int32_t* var_20 = &var_14
    int32_t* var_18
    sub_4889e0(&var_18, arg1, 0x1d)
    int32_t var_8_1 = 0
    int32_t result = sub_50bf20(var_14)
    int32_t* ecx_2 = var_18
    
    if (ecx_2 != 0)
        ecx_2[7] -= 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
