// 函数名称: ??1_Fac_node@std@@QAE@XZ
// 虚拟地址: 0x576dce
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcall??1_Fac_node@std@@QAE@XZ(void* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59fd30
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t __saved_ebp
    int32_t* result = (*(**(arg1 + 4) + 8))(__security_cookie ^ &__saved_ebp)
    
    if (result != 0)
        result = (**result)(1)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
