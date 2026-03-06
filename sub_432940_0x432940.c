// 函数名称: sub_432940
// 虚拟地址: 0x432940
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_432940(int32_t arg1, int32_t arg2, char* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59d7c0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* var_14 = arg3
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_3 = sub_4b2440(arg4, sub_42fb00)
    void* ecx_1 = data_6d00d0
    
    if (ecx_1 == 0)
        sub_489550(eax_3, &data_5b2591, "gGameSettings.localSettings", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x24c, "GetLocalSettings")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    void* const eax_4 = &data_5b4f58
    char* const edx
    
    while (true)
        if (*eax_4 == *(ecx_1 + 0xc))
            edx = *(eax_4 + 4)
            
            if (edx != 0)
                break
            
            sub_489550(eax_4, &data_5b2591, "str", "d:\ax\trunk\ax2017\engine\xstring.cpp", 0x94, 
                "XString::XString")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        eax_4 += 8
        
        if (*(eax_4 + 4) == 0)
            edx = &data_5b2591
            break
    
    sub_48a2c0(&var_14, edx)
    int32_t var_8_1 = 0
    int32_t eax_6 = sub_4a8930(&var_14, &data_62c560, arg4, &var_14, 0xffffffff)
    int32_t var_8_2 = 1
    
    if (data_aca1f4 != 0)
        eax_6 = var_14
        
        if (eax_6 != 0 && *eax_6 != 0)
            eax_6 = sub_48a080(&var_14)
            int32_t temp0_1 = *(eax_6 + 4)
            *(eax_6 + 4) -= 1
            
            if (temp0_1 == 1)
                eax_6 = sub_4984f0(eax_6, *(eax_6 + 0xc) + 0x10)
                var_14 = &data_5b2591
    
    int32_t var_8_3 = 0xffffffff
    void* ecx_7 = data_6d00d0
    
    if (ecx_7 == 0)
        sub_489550(eax_6, &data_5b2591, "gGameSettings.localSettings", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x24c, "GetLocalSettings")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    void* const eax_7 = &data_5b4f48
    char* const edx_3
    
    while (true)
        if (*eax_7 == *(ecx_7 + 0x24))
            edx_3 = *(eax_7 + 4)
            
            if (edx_3 != 0)
                break
            
            sub_489550(eax_7, &data_5b2591, "str", "d:\ax\trunk\ax2017\engine\xstring.cpp", 0x94, 
                "XString::XString")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        eax_7 += 8
        
        if (*(eax_7 + 4) == 0)
            edx_3 = &data_5b2591
            break
    
    sub_48a2c0(&var_14, edx_3)
    int32_t var_8_4 = 2
    int32_t eax_9 = sub_4a8930(&var_14, &data_62c5ec, arg4, &var_14, 0xffffffff)
    int32_t var_8_5 = 3
    
    if (data_aca1f4 != 0)
        eax_9 = var_14
        
        if (eax_9 != 0 && *eax_9 != 0)
            eax_9 = sub_48a080(&var_14)
            int32_t temp1_1 = *(eax_9 + 4)
            *(eax_9 + 4) -= 1
            
            if (temp1_1 == 1)
                eax_9 = sub_4984f0(eax_9, *(eax_9 + 0xc) + 0x10)
                var_14 = &data_5b2591
    
    int32_t var_8_6 = 0xffffffff
    void* ecx_13 = data_6d00d0
    
    if (ecx_13 == 0)
        sub_489550(eax_9, &data_5b2591, "gGameSettings.localSettings", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x24c, "GetLocalSettings")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    void* const eax_10 = &data_5b4f68
    char* const edx_6
    
    while (true)
        if (*eax_10 == *(ecx_13 + 8))
            edx_6 = *(eax_10 + 4)
            
            if (edx_6 != 0)
                break
            
            sub_489550(eax_10, &data_5b2591, "str", "d:\ax\trunk\ax2017\engine\xstring.cpp", 0x94, 
                "XString::XString")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        eax_10 += 8
        
        if (*(eax_10 + 4) == 0)
            edx_6 = &data_5b2591
            break
    
    sub_48a2c0(&var_14, edx_6)
    int32_t var_8_7 = 4
    int32_t eax_12 = sub_4a8930(&var_14, &data_62c57c, arg4, &var_14, 0xffffffff)
    int32_t var_8_8 = 5
    
    if (data_aca1f4 != 0)
        eax_12 = var_14
        
        if (eax_12 != 0 && *eax_12 != 0)
            eax_12 = sub_48a080(&var_14)
            int32_t temp2_1 = *(eax_12 + 4)
            *(eax_12 + 4) -= 1
            
            if (temp2_1 == 1)
                eax_12 = sub_4984f0(eax_12, *(eax_12 + 0xc) + 0x10)
                var_14 = &data_5b2591
    
    int32_t var_8_9 = 0xffffffff
    void* ecx_19 = data_6d00d0
    
    if (ecx_19 == 0)
        sub_489550(eax_12, &data_5b2591, "gGameSettings.localSettings", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x24c, "GetLocalSettings")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    void* const eax_13 = &data_5b4f38
    char* const edx_9
    
    while (true)
        if (*eax_13 == *(ecx_19 + 0x30))
            edx_9 = *(eax_13 + 4)
            
            if (edx_9 != 0)
                break
            
            sub_489550(eax_13, &data_5b2591, "str", "d:\ax\trunk\ax2017\engine\xstring.cpp", 0x94, 
                "XString::XString")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        eax_13 += 8
        
        if (*(eax_13 + 4) == 0)
            edx_9 = &data_5b2591
            break
    
    sub_48a2c0(&var_14, edx_9)
    int32_t var_8_10 = 6
    sub_4a8930(&var_14, &data_62c598, arg4, &var_14, 0xffffffff)
    int32_t var_8_11 = 7
    
    if (data_aca1f4 != 0)
        char* eax_15 = var_14
        
        if (eax_15 != 0 && *eax_15 != 0)
            char* eax_16 = sub_48a080(&var_14)
            int32_t temp3_1 = *(eax_16 + 4)
            *(eax_16 + 4) -= 1
            
            if (temp3_1 == 1)
                sub_4984f0(eax_16, *(eax_16 + 0xc) + 0x10)
                var_14 = &data_5b2591
    
    int32_t var_8_12 = 0xffffffff
    void* eax_17 = data_6d00d0
    
    if (eax_17 == 0)
        sub_489550(eax_17, &data_5b2591, "gGameSettings.localSettings", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x24c, "GetLocalSettings")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t eax_18 = *(eax_17 + 0x20)
    
    if (eax_18 == 0)
        eax_18 = 2
    
    if (eax_18 == 1)
        sub_48a2c0(&var_14, "Drag")
        int32_t var_8_15 = 8
        sub_4a8930(&var_14, &data_62c608, arg4, &var_14, 0xffffffff)
        int32_t var_8_16 = 9
    else
        if (eax_18 != 2)
            sub_489550(eax_18 - 2, &data_5b2591, "Halt", 
                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", 0x14d7, "OptionsUpdate")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        sub_48a2c0(&var_14, "Click")
        int32_t var_8_13 = 0xc
        sub_4a8930(&var_14, &data_62c608, arg4, &var_14, 0xffffffff)
        int32_t var_8_14 = 0xd
    
    if (data_aca1f4 != 0)
        char* eax_23 = var_14
        
        if (eax_23 != 0 && *eax_23 != 0)
            char* eax_24 = sub_48a080(&var_14)
            int32_t temp6_1 = *(eax_24 + 4)
            *(eax_24 + 4) -= 1
            
            if (temp6_1 == 1)
                sub_4984f0(eax_24, *(eax_24 + 0xc) + 0x10)
                var_14 = &data_5b2591
    
    int32_t var_8_17 = 0xffffffff
    int32_t eax_25 = data_6d00d0
    
    if (eax_25 == 0)
        sub_489550(eax_25, &data_5b2591, "gGameSettings.localSettings", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x24c, "GetLocalSettings")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    char const* const edx_14 = "Show Moons"
    
    if (*(eax_25 + 0x2c) == 0)
        edx_14 = &data_5b4890
    
    sub_48a2c0(&var_14, edx_14)
    int32_t var_8_18 = 0xe
    sub_4a8930(&var_14, &data_62c5b4, arg4, &var_14, 0xffffffff)
    int32_t var_8_19 = 0xf
    
    if (data_aca1f4 != 0)
        char* eax_27 = var_14
        
        if (eax_27 != 0 && *eax_27 != 0)
            char* eax_28 = sub_48a080(&var_14)
            int32_t temp7_1 = *(eax_28 + 4)
            *(eax_28 + 4) -= 1
            
            if (temp7_1 == 1)
                sub_4984f0(eax_28, *(eax_28 + 0xc) + 0x10)
                var_14 = &data_5b2591
    
    int32_t var_8_20 = 0xffffffff
    int32_t eax_29 = data_6d00d0
    
    if (eax_29 == 0)
        sub_489550(eax_29, &data_5b2591, "gGameSettings.localSettings", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x24c, "GetLocalSettings")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    char const* const edx_17 = "Light"
    
    if (*(eax_29 + 0x2d) == 0)
        edx_17 = "Night"
    
    sub_48a2c0(&var_14, edx_17)
    int32_t var_8_21 = 0x10
    sub_4a8930(&var_14, &data_62c5d0, arg4, &var_14, 0xffffffff)
    int32_t var_8_22 = 0x11
    
    if (data_aca1f4 != 0)
        char* eax_31 = var_14
        
        if (eax_31 != 0 && *eax_31 != 0)
            char* eax_32 = sub_48a080(&var_14)
            int32_t temp8_1 = *(eax_32 + 4)
            *(eax_32 + 4) -= 1
            
            if (temp8_1 == 1)
                sub_4984f0(eax_32, *(eax_32 + 0xc) + 0x10)
                var_14 = &data_5b2591
    
    int32_t var_8_23 = 0xffffffff
    int32_t eax_33 = sub_426e60(0x15128f0, arg4, "sliderMusic")
    
    if (eax_33 != 0)
        int32_t* ecx_39 = data_6d00d0
        
        if (ecx_39 == 0)
            sub_489550(eax_33, &data_5b2591, "gGameSettings.localSettings", 
                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x24c, 
                "GetLocalSettings")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        sub_432590(eax_33, &data_6cfe7c, *ecx_39)
    
    int32_t eax_34 = sub_426e60(0x1512914, arg4, "sliderEffects")
    
    if (eax_34 != 0)
        void* ecx_41 = data_6d00d0
        
        if (ecx_41 == 0)
            sub_489550(eax_34, &data_5b2591, "gGameSettings.localSettings", 
                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x24c, 
                "GetLocalSettings")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        sub_432590(eax_34, &data_6cfe84, *(ecx_41 + 4))
    
    int32_t eax_35 = sub_426e60(0x1512938, arg4, "btnWidescreen")
    
    if (eax_35 != 0)
        int32_t eax_36 = data_6d00d0
        
        if (eax_36 == 0)
            sub_489550(eax_36, &data_5b2591, "gGameSettings.localSettings", 
                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x24c, 
                "GetLocalSettings")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        int32_t var_28_1 = 0xffffffff
        *(eax_36 + 0x14)
        sub_4a8570(eax_35)
        void* eax_37 = data_6d00d0
        
        if (eax_37 == 0)
            sub_489550(eax_37, &data_5b2591, "gGameSettings.localSettings", 
                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x24c, 
                "GetLocalSettings")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        if (*(eax_37 + 0x18) != 0)
            int32_t var_28_2 = 0xffffffff
            sub_4a8570(eax_35)
    
    int32_t result = sub_426e60(0x151295c, arg4, "btnFullscreen")
    
    if (result != 0)
        int32_t ecx_45 = data_6d00d0
        
        if (ecx_45 == 0)
            sub_489550(result, &data_5b2591, "gGameSettings.localSettings", 
                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x24c, 
                "GetLocalSettings")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        int32_t var_28_3 = 0xffffffff
        *(ecx_45 + 0x18)
        result = sub_4a8570(result)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
