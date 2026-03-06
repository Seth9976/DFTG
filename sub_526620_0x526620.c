// 函数名称: sub_526620
// 虚拟地址: 0x526620
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_526620(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a27d0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_1c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_3 = *arg1
    
    if (eax_3 != 0)
        _aligned_free_base(eax_3)
    
    sub_526ca0(&arg1[0x47])
    *arg1 = 0
    int32_t var_8_1 = 0
    int32_t result = sub_526ca0(&arg1[0x47])
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
