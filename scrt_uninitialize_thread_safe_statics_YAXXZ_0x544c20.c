// 函数名称: ?__scrt_uninitialize_thread_safe_statics@@YAXXZ
// 虚拟地址: 0x544c20
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __fastcall?__scrt_uninitialize_thread_safe_statics@@YAXXZ(void* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59cd10
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* ecx = *(arg1 + 4)
    
    if (ecx != 0)
        int32_t __saved_ebp
        result = (*(*ecx + 8))(__security_cookie ^ &__saved_ebp)
        
        if (result != 0)
            result = (*result)->Next(1)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
