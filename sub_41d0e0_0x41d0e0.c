// 函数名称: sub_41d0e0
// 虚拟地址: 0x41d0e0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_41d0e0()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59cde5
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_14 = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
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
    void* eax_4 = sub_4254e0()
    int32_t var_8_2 = 1
    
    if (data_6cfe4c == 0)
        sub_489550(eax_4, &data_5b2591, "gClient != NULL", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x8f, "ExitClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    if (data_6cfe48 != 0)
        sub_489550(eax_4, &data_5b2591, "gServer == NULL", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x90, "ExitClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    data_6cfe4c = 0
    int32_t var_8_3 = 0xffffffff
    int32_t* ecx = data_6d00d0
    data_6cfe48 = 0
    
    if (ecx != 0)
        data_126b918
        sub_4cead0(ecx)
        data_6d00d0 = 0
    
    int32_t* ecx_1 = data_6d00d4
    
    if (ecx_1 != 0)
        data_126b920
        sub_4cead0(ecx_1)
        data_6d00d4 = 0
    
    int32_t result = data_6d00d8
    
    if (result != 0)
        int32_t var_8_4 = 3
        `eh vector vbase constructor iterator'(result, 0x2f8, 4, sub_437150)
        int32_t var_8_5 = 0xffffffff
        result = sub_4984f0(data_6d00d8, 0xbf0)
        data_6d00d8 = 0
    
    int32_t* ecx_3 = data_6d00dc
    
    if (ecx_3 != 0)
        data_126b958
        result = sub_4cead0(ecx_3)
        data_6d00dc = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
