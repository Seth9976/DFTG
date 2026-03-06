// 函数名称: sub_41c6b0
// 虚拟地址: 0x41c6b0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int80_tsub_41c6b0()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59cd35
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_14 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    _memset(0x62a5d8, 0, 0xa88)
    uint32_t (* eax_3)[0x4] = _memset(0x62b060, 0, 0x30)
    
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
    int32_t eax_4
    int80_t result
    result, eax_4 = sub_425120()
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
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    sub_489550(eax_4, &data_5b2591, "gServer == NULL", 
        "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x90, "ExitClient")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
