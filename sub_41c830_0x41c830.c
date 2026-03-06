// 函数名称: sub_41c830
// 虚拟地址: 0x41c830
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __fastcallsub_41c830(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59cd5a
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_14 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_3 = arg1[1]
    struct _EXCEPTION_REGISTRATION_RECORD** eax_4
    
    if (eax_3 s< 0x7d0)
        if (eax_3 s< 0x5dc)
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
            eax_4 = sub_423a30(arg1)
            int32_t var_8_2 = 1
            
            if (data_6cfe4c == 0)
                sub_489550(eax_4, &data_5b2591, "gClient != NULL", 
                    "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x8f, "ExitClient")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            if (data_6cfe48 == 0)
                goto label_41c946
            
            sub_489550(eax_4, &data_5b2591, "gServer == NULL", 
                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x90, "ExitClient")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        if (data_6cfe4c != 0)
            sub_489550(eax_3, &data_5b2591, "gClient == NULL", 
                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x96, "EnterServer")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        if (data_6cfe48 != 0)
            sub_489550(eax_3, &data_5b2591, "gServer == NULL", 
                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x97, "EnterServer")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        data_6cfe48 = 0
    else if (eax_3 s>= 0xbb8 && eax_3 s>= 0x1388)
        if (eax_3 s< 0xf42a4)
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
            int32_t var_8_3 = 3
            eax_4 = sub_423a30(arg1)
            int32_t var_8_4 = 4
            
            if (data_6cfe4c == 0)
                sub_489550(eax_4, &data_5b2591, "gClient != NULL", 
                    "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x8f, "ExitClient")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            if (data_6cfe48 == 0)
            label_41c946:
                data_6cfe4c = 0
                eax_4.b = 1
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_4
            
            sub_489550(eax_4, &data_5b2591, "gServer == NULL", 
                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x90, "ExitClient")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        if (data_6cfe4c != 0)
            sub_489550(eax_3, &data_5b2591, "gClient == NULL", 
                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x96, "EnterServer")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        if (data_6cfe48 != 0)
            sub_489550(eax_3, &data_5b2591, "gServer == NULL", 
                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x97, "EnterServer")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        data_6cfe48 = 0
    eax_3.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3
}
