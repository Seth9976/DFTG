// 函数名称: ?__scrt_initialize_thread_safe_statics_platform_specific@@YAXXZ
// 虚拟地址: 0x57779a
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t?__scrt_initialize_thread_safe_statics_platform_specific@@YAXXZ()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a2bb0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    InitializeCriticalSectionAndSpinCount(&data_6cf33c, 0xfa0)
    HMODULE hModule = GetModuleHandleW(u"api-ms-win-core-synch-l1-2-0.dll")
    
    if (hModule != 0)
    label_5777fb:
        int32_t eax_5 = GetProcAddress(hModule, "InitializeConditionVariable")
        int32_t eax_6 = GetProcAddress(hModule, "SleepConditionVariableCS")
        int32_t eax_7 = GetProcAddress(hModule, "WakeAllConditionVariable")
        int32_t result
        
        if (eax_5 != 0 && eax_6 != 0 && eax_7 != 0)
            data_6cf358 = 0
            eax_5(0x6cf354)
            data_6cf35c = __crt_fast_encode_pointer<void (__cdecl**)()>(eax_6)
            result = __crt_fast_encode_pointer<void (__cdecl**)()>(eax_7)
            data_6cf360 = result
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
        
        result = CreateEventW(nullptr, 1, 0, nullptr)
        data_6cf358 = result
        
        if (result != 0)
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
    else
        hModule = GetModuleHandleW(u"kernel32.dll")
        
        if (hModule != 0)
            goto label_5777fb
    
    ___scrt_fastfail(7)
    breakpoint
}
