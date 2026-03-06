// 函数名称: sub_539480
// 虚拟地址: 0x539480
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __stdcallsub_539480(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a2d28
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_48 = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* esi = arg1
    
    if (*(esi + 0x59) != 0 && *(esi + 0x5a) != 0)
        int32_t* ebx_1 = esi[2]
        void var_38
        int32_t var_24
        
        if ((*(*ebx_1 + 0x10))(ebx_1, &var_24, &var_38) != 0)
            int32_t eax_7 = (*(*ebx_1 + 0x48))(ebx_1)
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_7
        
        eax_3 = esi[7]
        char edx_1 = 0
        int32_t edi_1 = var_24
        arg1:3.b = 0
        
        if (eax_3 s> edi_1)
            edi_1 = esi[5]
            edx_1 = 1
            arg1:3.b = 1
        
        int32_t ecx_3 = esi[9]
        void* edi_2 = edi_1 - eax_3
        
        if (ecx_3 s<= 0 || eax_3 s>= ecx_3)
        label_53952b:
            
            if (edi_2 s>= 0x2000 || edx_1 != 0)
                void* edi_3 = edi_2 & 0xfffffffc
                void* var_28
                int32_t* var_4c_4 = &var_28
                int32_t* var_34
                sub_4889e0(&var_34, *esi, 0x15)
                int32_t var_8_1 = 0
                void* ecx_5 = esi[6]
                void* var_18_1 = edi_3
                void* var_14_1 = nullptr
                int32_t edx_2 = *(*(var_28 + 0x38) + 0xc)
                
                if (ecx_5 + edi_3 s> edx_2)
                    void* eax_14 = ecx_5 - edx_2 + edi_3
                    var_14_1 = eax_14
                    var_18_1 = edi_3 - eax_14
                    
                    if (eax_14 s>= esi[5])
                        sub_489550(eax_14, &data_5b2591, 
                            "sourceWrapSize < pSoundInstance->mBufferSize", 
                            "d:\ax\trunk\ax2017\engine\windows\windowssound.cpp", 0x234, 
                            "WindowsSoundInterface::SoundInterfaceUpdate")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_489700()
                        noreturn
                
                int32_t var_30
                int32_t var_2c
                uint32_t (* var_20)[0x4]
                int32_t var_1c
                int32_t eax_16 =
                    (*(*ebx_1 + 0x2c))(ebx_1, esi[7], edi_3, &var_20, &var_1c, &var_2c, &var_30, 0)
                
                if (eax_16 != 0)
                    sub_489550(eax_16, &data_5b2591, "hr == S_OK", 
                        "d:\ax\trunk\ax2017\engine\windows\windowssound.cpp", 0x23d, 
                        "WindowsSoundInterface::SoundInterfaceUpdate")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                if (var_1c != edi_3)
                    sub_489550(eax_16, &data_5b2591, "(int)lockedSize == writeLen", 
                        "d:\ax\trunk\ax2017\engine\windows\windowssound.cpp", 0x23e, 
                        "WindowsSoundInterface::SoundInterfaceUpdate")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                if (var_2c != eax_16)
                    sub_489550(eax_16, &data_5b2591, "pLockedPtr2 == NULL", 
                        "d:\ax\trunk\ax2017\engine\windows\windowssound.cpp", 0x23f, 
                        "WindowsSoundInterface::SoundInterfaceUpdate")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                if (var_30 != eax_16)
                    sub_489550(eax_16, &data_5b2591, "lockedSize2 == 0", 
                        "d:\ax\trunk\ax2017\engine\windows\windowssound.cpp", 0x240, 
                        "WindowsSoundInterface::SoundInterfaceUpdate")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                sub_538e20(eax_16, var_20, esi, var_18_1, var_14_1)
                int32_t eax_18 = (*(*ebx_1 + 0x4c))(ebx_1, var_20, var_1c, 0, 0)
                
                if (eax_18 != 0)
                    sub_489550(eax_18, &data_5b2591, "hr == S_OK", 
                        "d:\ax\trunk\ax2017\engine\windows\windowssound.cpp", 0x247, 
                        "WindowsSoundInterface::SoundInterfaceUpdate")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                if (arg1:3.b == eax_18.b)
                    esi[7] += edi_3
                else
                    esi[7] = eax_18
                
                eax_3 = var_34
                
                if (eax_3 != 0)
                    eax_3[7] -= 1
        else
            eax_3 += edi_2
            
            if (eax_3 s< ecx_3)
                goto label_53952b
            
            eax_3 = (*(*ebx_1 + 0x48))(ebx_1)
            
            if (eax_3 != 0)
                sub_489550(eax_3, &data_5b2591, "hr == S_OK", 
                    "d:\ax\trunk\ax2017\engine\windows\windowssound.cpp", 0x219, 
                    "WindowsSoundInterface::SoundInterfaceUpdate")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3
}
