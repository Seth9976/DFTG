// 函数名称: sub_41d4d0
// 虚拟地址: 0x41d4d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*sub_41d4d0()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59ce25
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_1c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_4894d0("app pause")
    int32_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    bool cond:0 = data_6cfe4c != 0
    data_6cfe50 = performanceCount
    int32_t var_14
    data_6cfe54 = var_14
    data_6cfe58:4 = 0
    
    if (cond:0)
        sub_489550(var_14, &data_5b2591, "gClient == NULL", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x88, "EnterClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    if (data_6cfe48 != 0)
        sub_489550(var_14, &data_5b2591, "gServer == NULL", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x89, "EnterClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    data_6cfe4c = 0x62a5d8
    int32_t var_8_1 = 0
    void* eax_5 = sub_41fe10(1, 0)
    int32_t var_8_2 = 1
    
    if (data_6cfe4c == 0)
        sub_489550(eax_5, &data_5b2591, "gClient != NULL", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x8f, "ExitClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    if (data_6cfe48 == 0)
        data_6cfe4c = 0
        data_632a40 = 0
        void* result = sub_481620(&data_632a10)
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    sub_489550(eax_5, &data_5b2591, "gServer == NULL", 
        "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x90, "ExitClient")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
