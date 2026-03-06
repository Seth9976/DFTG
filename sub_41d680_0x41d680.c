// 函数名称: sub_41d680
// 虚拟地址: 0x41d680
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_41d680()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59cd35
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (data_6cfe40 == 0)
        eax_3 = ___std_fs_remove@4()
        data_6cfe40 = eax_3.b
    
    if (data_6cfe4c != 0)
        sub_489550(eax_3, &data_5b2591, "gClient == NULL", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x88, "EnterClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    if (data_6cfe48 != 0)
        sub_489550(eax_3, &data_5b2591, "gServer == NULL", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x89, "EnterClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    data_6cfe4c = 0x62a5d8
    int32_t var_8_1 = 0
    char* eax_4 = sub_4225c0()
    int32_t var_8_2 = 1
    
    if (data_6cfe4c == 0)
        sub_489550(eax_4, &data_5b2591, "gClient != NULL", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x8f, "ExitClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    if (data_6cfe48 == 0)
        data_6cfe4c = 0
        data_6cfe48 = 0
        int32_t result = SteamAPI_RunCallbacks(eax_2)
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    sub_489550(eax_4, &data_5b2591, "gServer == NULL", 
        "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x90, "ExitClient")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
