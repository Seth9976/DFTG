// 函数名称: sub_423a30
// 虚拟地址: 0x423a30
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __fastcallsub_423a30(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) =
        __ehhandler$?_wcrtomb_s_l@@YAHQAHQADI_WQAU_Mbstatet@@QAU__crt_locale_pointers@@@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* esi = data_6cfe4c
    int32_t* var_14 = esi
    
    if (esi == 0)
        sub_489550(&ExceptionList, &data_5b2591, "gClient", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t edx = *arg1
    struct _EXCEPTION_REGISTRATION_RECORD** eax_3
    
    if (edx != 0)
        uint32_t ecx = zx.d(edx.w)
        int32_t edi_1 = data_aca0dc[1]
        
        if (ecx u< edi_1)
            int32_t* esi_2 = var_14
            eax_3 = *(ecx * 0x4c + *data_aca0dc + 0x48)
            struct _EXCEPTION_REGISTRATION_RECORD** var_20 = eax_3
            
            if (eax_3 == edx)
                if (edx == 0 || ecx u>= edi_1)
                label_423b89:
                    int32_t eax_12 = arg1[1]
                    
                    if (eax_12 s> 0xf4242)
                        if (eax_12 - 0xf4243 u> 0xe)
                        label_4246cc:
                            int32_t eax_15
                            eax_15.b = 0
                            fsbase->NtTib.ExceptionList = ExceptionList
                            return eax_15
                        
                        struct _EXCEPTION_REGISTRATION_RECORD** var_1c
                        struct _EXCEPTION_REGISTRATION_RECORD** var_18
                        int32_t** ecx_92
                        
                        switch (eax_12)
                            case 0xf4243
                                void* eax_19 = sub_437f10(*(data_6d00d8 + 0xbe4))
                                *(eax_19 + 0x22c) = arg1[4]
                                *(eax_19 + 0x230) = arg1[5]
                                sub_48a5e0(eax_19 + 0x234, &arg1[6])
                                sub_48a5e0(eax_19 + 0x238, arg1 + 0x21)
                                
                                if (sub_48a440(eax_19 + 0x238, eax_19 + 4) != 0)
                                    sub_48a5e0(eax_19 + 4, &data_5b2591)
                                
                                sub_437ba0(data_6d00d8)
                                int32_t eax_22 = arg1[3]
                                
                                if (eax_22 == 1)
                                    var_14[7] = 3
                                    int32_t* eax_25
                                    eax_25.b = 1
                                    fsbase->NtTib.ExceptionList = ExceptionList
                                    return eax_25
                                
                                if (eax_22 == 2)
                                    var_14[7] = 7
                                    int32_t* eax_24
                                    eax_24.b = 1
                                    fsbase->NtTib.ExceptionList = ExceptionList
                                    return eax_24
                            case 0xf4244
                                int32_t eax_55 = arg1[3]
                                
                                if (eax_55 != 0)
                                    if (eax_55 != 1)
                                        sub_489550(eax_55 - 1, &data_5b2591, "Halt", 
                                            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameclient.cpp", 
                                            0x931, "GameClientHandleMessage")
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_489700()
                                        noreturn
                                    
                                    void* eax_57 = sub_437f10(*(data_6d00d8 + 0xbe4))
                                    sub_48a560(eax_57 + 0x238, eax_57 + 4)
                                    sub_48a5e0(eax_57 + 4, &data_5b2591)
                            case 0xf4245
                                void* eax_58 = sub_437f10(*(data_6d00d8 + 0xbe4))
                                int32_t ecx_104 = arg1[3]
                                
                                if (ecx_104 == 0)
                                    data_62bbe0 = 0
                                    sub_48a5e0(eax_58 + 0x238, &arg1[4])
                                    sub_48a5e0(eax_58 + 4, &data_5b2591)
                                    sub_437ba0(data_6d00d8)
                                    char* eax_60
                                    eax_60.b = 1
                                    fsbase->NtTib.ExceptionList = ExceptionList
                                    return eax_60
                                
                                if (ecx_104 == 1)
                                    data_62bbe0 = 4
                                    eax_58.b = 1
                                    fsbase->NtTib.ExceptionList = ExceptionList
                                    return eax_58
                                
                                sub_489550(eax_58, &data_5b2591, "Halt", 
                                    "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", 
                                    0xa12, "GameProfileHandleEmailCodeResponse")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_489700()
                                noreturn
                            case 0xf4246
                                sub_42c2d0(&arg1[3])
                                char* eax_54
                                eax_54.b = 1
                                fsbase->NtTib.ExceptionList = ExceptionList
                                return eax_54
                            case 0xf4247
                                if (sub_4c7140(eax_12 - 0xf4243, &arg1[3], &arg1[3], data_126b8f0, 
                                        nullptr, arg1[2]).b != 0)
                                    sub_423230(&arg1[3])
                                    struct _EXCEPTION_REGISTRATION_RECORD** eax_63
                                    eax_63.b = 1
                                    fsbase->NtTib.ExceptionList = ExceptionList
                                    return eax_63
                            case 0xf4248
                                eax_3 = esi_2[0x209]
                                int32_t ecx_114 = 0
                                
                                if (eax_3 s> 0)
                                    void* esi_9 = &esi_2[9]
                                    
                                    while (*esi_9 != arg1[3])
                                        ecx_114 += 1
                                        esi_9 += 0x10
                                        
                                        if (ecx_114 s>= eax_3)
                                            eax_3.b = 1
                                            fsbase->NtTib.ExceptionList = ExceptionList
                                            return eax_3
                                    
                                    if (ecx_114 != 0xffffffff)
                                        sub_422fa0(ecx_114)
                                        char* eax_61
                                        eax_61.b = 1
                                        fsbase->NtTib.ExceptionList = ExceptionList
                                        return eax_61
                            case 0xf4249
                                sub_423060(arg1[3], &arg1[5])
                                int32_t* eax_62
                                eax_62.b = 1
                                fsbase->NtTib.ExceptionList = ExceptionList
                                return eax_62
                            case 0xf424a
                                if (sub_4c7140(eax_12 - 0xf4243, &arg1[3], &arg1[3], data_126b8fc, 
                                        nullptr, arg1[2]).b != 0)
                                    sub_4234e0(&arg1[3])
                                    int32_t* eax_68
                                    eax_68.b = 1
                                    fsbase->NtTib.ExceptionList = ExceptionList
                                    return eax_68
                            case 0xf424b
                                if (sub_4c7140(eax_12 - 0xf4243, &arg1[3], &arg1[3], data_126b908, 
                                        nullptr, arg1[2]).b != 0)
                                    struct _EXCEPTION_REGISTRATION_RECORD** edi_5 = sub_4238a0(arg1[3])
                                    
                                    if (edi_5 != 0)
                                        sub_4236c0(&arg1[3], edi_5)
                                        
                                        if (arg1[7] s> 1)
                                            sub_421a70(edi_5)
                                            void* eax_67
                                            eax_67.b = 1
                                            fsbase->NtTib.ExceptionList = ExceptionList
                                            return eax_67
                            case 0xf424c
                                sub_423940(&arg1[3])
                                int32_t* eax_69
                                eax_69.b = 1
                                fsbase->NtTib.ExceptionList = ExceptionList
                                return eax_69
                            case 0xf424d
                                esi_2[4] = arg1[3]
                                
                                if (arg1[6].b != 0)
                                    eax_3 = sub_4238a0(arg1[4])
                                    
                                    if (eax_3 != 0)
                                        if (esi_2[0x20d] != 2 || esi_2[0x20e] != eax_3)
                                            *(sub_4239d0(sub_4218b0(eax_3), arg1[5]) + 0x20) = 0x3ec
                                            void* eax_66
                                            eax_66.b = 1
                                            fsbase->NtTib.ExceptionList = ExceptionList
                                            return eax_66
                                        
                                        sub_48a2c0(&var_14, &data_5b2591)
                                        int32_t var_8_3 = 0x16
                                        sub_48a2c0(&var_18, &data_5b2591)
                                        var_8_3.b = 0x17
                                        sub_48a2c0(&var_1c, 
                                            "You've run out of time and forfeited the game.")
                                        var_8_3.b = 0x18
                                        int32_t var_38_19 = sub_48a2c0(&var_20, "TIME EXPIRED")
                                        var_8_3.b = 0x19
                                        sub_436200(&var_18, &var_1c, &var_20, 0x1c, &var_18, &var_14, 
                                            sub_424860)
                                        var_8_3.b = 0x1a
                                        
                                        if (data_aca1f4 != 0)
                                            eax_3 = var_20
                                            
                                            if (eax_3 != 0 && *eax_3 != 0)
                                                eax_3 = sub_48a080(&var_20)
                                                int32_t temp13_1 = eax_3[1]
                                                eax_3[1] -= 1
                                                
                                                if (temp13_1 == 1)
                                                    sub_4984f0(eax_3, &eax_3[3][2])
                                        
                                        var_8_3.b = 0x1b
                                        
                                        if (data_aca1f4 != 0)
                                            eax_3 = var_1c
                                            
                                            if (eax_3 != 0 && *eax_3 != 0)
                                                eax_3 = sub_48a080(&var_1c)
                                                int32_t temp14_1 = eax_3[1]
                                                eax_3[1] -= 1
                                                
                                                if (temp14_1 == 1)
                                                    sub_4984f0(eax_3, &eax_3[3][2])
                                        
                                        var_8_3.b = 0x1c
                                        
                                        if (data_aca1f4 != 0)
                                            eax_3 = var_18
                                            
                                            if (eax_3 != 0 && *eax_3 != 0)
                                                eax_3 = sub_48a080(&var_18)
                                                int32_t temp16_1 = eax_3[1]
                                                eax_3[1] -= 1
                                                
                                                if (temp16_1 == 1)
                                                    sub_4984f0(eax_3, &eax_3[3][2])
                                        
                                        int32_t var_8_4 = 0x1d
                                        
                                        if (data_aca1f4 != 0)
                                            eax_3 = var_14
                                            
                                            if (eax_3 != 0 && *eax_3 != 0)
                                                ecx_92 = &var_14
                                            label_424260:
                                                eax_3 = sub_48a080(ecx_92)
                                                int32_t temp18_1 = eax_3[1]
                                                eax_3[1] -= 1
                                                
                                                if (temp18_1 == 1)
                                                    sub_4984f0(eax_3, &eax_3[3][2])
                                                    int32_t eax_53
                                                    eax_53.b = 1
                                                    fsbase->NtTib.ExceptionList = ExceptionList
                                                    return eax_53
                            case 0xf424e
                                eax_3 = sub_4238a0(arg1[3])
                                
                                if (esi_2[0x20d] == 2 && esi_2[0x20e] == eax_3)
                                    int32_t edi_4 = *(sub_437f10(*(data_6d00d8 + 0xbe4)) + 0x230)
                                    struct _EXCEPTION_REGISTRATION_RECORD** eax_35 = arg1[4]
                                    var_1c = eax_35
                                    
                                    if (edi_4 == eax_35 && arg1[5] != 1)
                                        sub_489550(eax_35, &data_5b2591, 
                                            "response.forfeitType == FORFEITTYPE_TIMER", 
                                            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameclient.cpp", 
                                            0x8eb, "GameClientHandleMessage")
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_489700()
                                        noreturn
                                    
                                    int32_t* eax_36 = sub_425de0()
                                    void* eax_37 = sub_4239d0(eax_36, arg1[4])
                                    struct _EXCEPTION_REGISTRATION_RECORD*** var_38_8 = &var_20
                                    char* var_24
                                    sub_421310(eax_37, &eax_36[2], &var_24, eax_37)
                                    int32_t var_8_1 = 0
                                    char* const eax_38 = &data_5b2591
                                    char* esi_6 = var_24
                                    
                                    if (esi_6 != 0)
                                        eax_38 = esi_6
                                    
                                    char* const var_40_2 = eax_38
                                    sub_48a9d0(&var_14, "%s forfeited the game.")
                                    var_8_1.b = 1
                                    int32_t eax_39 = arg1[5]
                                    struct _EXCEPTION_REGISTRATION_RECORD** ebx_1
                                    
                                    if (eax_39 == 0)
                                        char* eax_47 = &data_5b2591
                                        
                                        if (esi_6 != 0)
                                            eax_47 = esi_6
                                        
                                        char* var_38_12 = eax_47
                                        var_8_1.b = 2
                                        sub_48a560(&var_14, 
                                            sub_48a9d0(&var_20, "%s forfeited the game."))
                                        var_8_1.b = 3
                                        
                                        if (data_aca1f4 != 0)
                                            struct _EXCEPTION_REGISTRATION_RECORD** eax_49 = var_20
                                            
                                            if (eax_49 != 0 && *eax_49 != 0)
                                                char* eax_50 = sub_48a080(&var_20)
                                                int32_t temp15_1 = *(eax_50 + 4)
                                                *(eax_50 + 4) -= 1
                                                
                                                if (temp15_1 == 1)
                                                    sub_4984f0(eax_50, *(eax_50 + 0xc) + 0x10)
                                        
                                        var_8_1.b = 1
                                        ebx_1 = var_1c
                                    else
                                        if (eax_39 != 1)
                                            sub_489550(eax_39 - 1, &data_5b2591, "Halt", 
                                                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameclient.cpp", 
                                                0x903, "GameClientHandleMessage")
                                            
                                            if (IsDebuggerPresent() == 1)
                                                breakpoint
                                            
                                            sub_489700()
                                            noreturn
                                        
                                        ebx_1 = var_1c
                                        
                                        if (edi_4 != ebx_1)
                                            char* eax_43 = &data_5b2591
                                            
                                            if (esi_6 != 0)
                                                eax_43 = esi_6
                                            
                                            char* var_38_10 = eax_43
                                            var_8_1.b = 6
                                            sub_48a560(&var_14, 
                                                sub_48a9d0(&var_20, "Time expired for %s."))
                                            var_8_1.b = 7
                                        else
                                            var_8_1.b = 4
                                            sub_48a560(&var_14, 
                                                sub_48a9d0(&var_20, "Your time has expired."))
                                            var_8_1.b = 5
                                        
                                        if (data_aca1f4 != 0)
                                            struct _EXCEPTION_REGISTRATION_RECORD** eax_45 = var_20
                                            
                                            if (eax_45 != 0 && *eax_45 != 0)
                                                char* eax_46 = sub_48a080(&var_20)
                                                int32_t temp17_1 = *(eax_46 + 4)
                                                *(eax_46 + 4) -= 1
                                                
                                                if (temp17_1 == 1)
                                                    sub_4984f0(eax_46, *(eax_46 + 0xc) + 0x10)
                                        
                                        var_8_1.b = 1
                                    
                                    struct _EXCEPTION_REGISTRATION_RECORD*** ecx_79
                                    
                                    if (edi_4 != ebx_1)
                                        sub_48a2c0(&var_18, &data_5b2591)
                                        var_8_1.b = 0xe
                                        sub_48a2c0(&var_1c, &data_5b2591)
                                        var_8_1.b = 0xf
                                        int32_t var_38_15 = sub_48a2c0(&var_20, "OPPONENT FORFEITED")
                                        var_8_1.b = 0x10
                                        sub_436200(&var_1c, &var_14, &var_20, 0x1c, &var_1c, &var_18, 
                                            sub_4248c0)
                                        var_8_1.b = 0x11
                                        
                                        if (data_aca1f4 != 0)
                                            eax_3 = var_20
                                            
                                            if (eax_3 != 0 && *eax_3 != 0)
                                                eax_3 = sub_48a080(&var_20)
                                                int32_t temp19_1 = eax_3[1]
                                                eax_3[1] -= 1
                                                
                                                if (temp19_1 == 1)
                                                    sub_4984f0(eax_3, &eax_3[3][2])
                                        
                                        var_8_1.b = 0x12
                                        
                                        if (data_aca1f4 != 0)
                                            eax_3 = var_1c
                                            
                                            if (eax_3 != 0 && *eax_3 != 0)
                                                eax_3 = sub_48a080(&var_1c)
                                                int32_t temp21_1 = eax_3[1]
                                                eax_3[1] -= 1
                                                
                                                if (temp21_1 == 1)
                                                    sub_4984f0(eax_3, &eax_3[3][2])
                                        
                                        var_8_1.b = 0x13
                                        
                                        if (data_aca1f4 != 0)
                                            eax_3 = var_18
                                            
                                            if (eax_3 != 0 && *eax_3 != 0)
                                                ecx_79 = &var_18
                                            label_4241e5:
                                                eax_3 = sub_48a080(ecx_79)
                                                int32_t temp24_1 = eax_3[1]
                                                eax_3[1] -= 1
                                                
                                                if (temp24_1 == 1)
                                                    sub_4984f0(eax_3, &eax_3[3][2])
                                    else
                                        sub_48a2c0(&var_20, &data_5b2591)
                                        var_8_1.b = 8
                                        sub_48a2c0(&var_1c, &data_5b2591)
                                        var_8_1.b = 9
                                        int32_t var_38_14 = sub_48a2c0(&var_18, "TIME EXPIRED")
                                        var_8_1.b = 0xa
                                        sub_436200(&var_1c, &var_14, &var_18, 0x1c, &var_1c, &var_20, 
                                            sub_424860)
                                        var_8_1.b = 0xb
                                        
                                        if (data_aca1f4 != 0)
                                            eax_3 = var_18
                                            
                                            if (eax_3 != 0 && *eax_3 != 0)
                                                eax_3 = sub_48a080(&var_18)
                                                int32_t temp20_1 = eax_3[1]
                                                eax_3[1] -= 1
                                                
                                                if (temp20_1 == 1)
                                                    sub_4984f0(eax_3, &eax_3[3][2])
                                        
                                        var_8_1.b = 0xc
                                        
                                        if (data_aca1f4 != 0)
                                            eax_3 = var_1c
                                            
                                            if (eax_3 != 0 && *eax_3 != 0)
                                                eax_3 = sub_48a080(&var_1c)
                                                int32_t temp22_1 = eax_3[1]
                                                eax_3[1] -= 1
                                                
                                                if (temp22_1 == 1)
                                                    sub_4984f0(eax_3, &eax_3[3][2])
                                        
                                        var_8_1.b = 0xd
                                        
                                        if (data_aca1f4 != 0)
                                            eax_3 = var_20
                                            
                                            if (eax_3 != 0 && *eax_3 != 0)
                                                ecx_79 = &var_20
                                                goto label_4241e5
                                    var_8_1.b = 0x14
                                    
                                    if (data_aca1f4 != 0)
                                        eax_3 = var_14
                                        
                                        if (eax_3 != 0 && *eax_3 != 0)
                                            eax_3 = sub_48a080(&var_14)
                                            int32_t temp23_1 = eax_3[1]
                                            eax_3[1] -= 1
                                            
                                            if (temp23_1 == 1)
                                                sub_4984f0(eax_3, &eax_3[3][2])
                                                var_14 = &data_5b2591
                                    
                                    int32_t var_8_2 = 0x15
                                    
                                    if (data_aca1f4 != 0 && esi_6 != 0 && *esi_6 != 0)
                                        ecx_92 = &var_24
                                        goto label_424260
                            case 0xf424f
                                if (arg1[3] == 0)
                                    *(sub_437f10(*(data_6d00d8 + 0xbe4)) + 0x248) = 2
                                    sub_437ba0(data_6d00d8)
                                    sub_41fe10(1, 1)
                                    void* eax_71
                                    eax_71.b = 1
                                    fsbase->NtTib.ExceptionList = ExceptionList
                                    return eax_71
                                
                                sub_489550(eax_12 - 0xf4243, &data_5b2591, "Halt", 
                                    "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameclient.cpp", 0x6a, 
                                    "ClientGotLinkResponse")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_489700()
                                noreturn
                            case 0xf4250
                                struct _EXCEPTION_REGISTRATION_RECORD** edx_2 =
                                    sub_437f10(*(data_6d00d8 + 0xbe4))
                                
                                if (edx_2[0x8c] == arg1[3])
                                    int32_t eax_26 = arg1[4]
                                    
                                    if (eax_26 == 0)
                                        edx_2[arg1[5] + 0xa6] = arg1[6]
                                        edx_2[arg1[5] + 0xaa] = arg1[7]
                                        edx_2[arg1[5] + 0xae] = arg1[8]
                                        int32_t eax_33
                                        eax_33.b = 1
                                        fsbase->NtTib.ExceptionList = ExceptionList
                                        return eax_33
                                    
                                    if (eax_26 == 1)
                                        edx_2[arg1[5] + 0x9a] = arg1[6]
                                        edx_2[arg1[5] + 0x9e] = arg1[7]
                                        edx_2[arg1[5] + 0xa2] = arg1[8]
                                        int32_t eax_30
                                        eax_30.b = 1
                                        fsbase->NtTib.ExceptionList = ExceptionList
                                        return eax_30
                            case 0xf4251
                                sub_48a5e0(sub_437f10(*(data_6d00d8 + 0xbe4)) + 0x23c, &arg1[3])
                    else if (eax_12 == 0xf4242)
                        if (sub_4c7140(eax_12, &arg1[3], &arg1[3], data_126b910, nullptr, arg1[2]).b
                                != 0)
                            sub_48a5e0(&esi_2[8], arg1[5])
                            esi_2[0x29c] = *esi_2
                            esi_2[0x29d] = esi_2[1]
                            
                            switch (arg1[3])
                                case nullptr
                                    esi_2[7] = 6
                                    eax_3.b = 1
                                    fsbase->NtTib.ExceptionList = ExceptionList
                                    return eax_3
                                case 1
                                    esi_2[7] = 4
                                    eax_3.b = 1
                                    fsbase->NtTib.ExceptionList = ExceptionList
                                    return eax_3
                                case 2
                                    esi_2[7] = 5
                                    eax_3.b = 1
                                    fsbase->NtTib.ExceptionList = ExceptionList
                                    return eax_3
                                case 3
                                    esi_2[7] = 1
                                    eax_3.b = 1
                                    fsbase->NtTib.ExceptionList = ExceptionList
                                    return eax_3
                    else
                        if (eax_12 == 0x3ea)
                            esi_2[6] = 3
                            int32_t eax_13
                            eax_13.b = 1
                            esi_2[0x2a0] = 1
                            fsbase->NtTib.ExceptionList = ExceptionList
                            return eax_13
                        
                        if (eax_12 == 0x3eb)
                            esi_2[6] = 0
                            int32_t eax_14
                            eax_14.b = 1
                            fsbase->NtTib.ExceptionList = ExceptionList
                            return eax_14
                        
                        if (eax_12 != 0x3ec)
                            goto label_4246cc
                        
                        edx.b = 1
                        esi_2[6] = eax_12 - 0x3ec
                        ecx.b = 1
                        sub_41fe10(ecx.b, edx.b)
                        
                        if (esi_2[7] == 6)
                            esi_2[7] = 0
                            eax_3.b = 1
                            fsbase->NtTib.ExceptionList = ExceptionList
                            return eax_3
                else
                    esi_2 = var_14
                    
                    if (var_20 != edx)
                        goto label_423b89
                    
                    int32_t eax_8 = *(ecx * 0x4c + *data_aca0dc + 0x14)
                    
                    if (eax_8 != 2 && eax_8 != 3)
                        goto label_423b89
                    
                    eax_3 = arg1[1]
                    
                    if (eax_3 != 0x3ea)
                        if (eax_3 != 0xfa0)
                            if (eax_3 != 0xfa2)
                                if (eax_3 == 0x3eb || eax_3 == 0xfa1)
                                    sub_4892e0("analytics connect failed")
                                    int32_t eax_11
                                    eax_11.b = 1
                                    fsbase->NtTib.ExceptionList = ExceptionList
                                    return eax_11
                                
                                struct _EXCEPTION_REGISTRATION_RECORD** var_38_1 = eax_3
                                sub_4892e0("Analytics unknown message type %d")
                                int32_t eax_10
                                eax_10.b = 1
                                fsbase->NtTib.ExceptionList = ExceptionList
                                return eax_10
                        else if (edx != 0 && ecx u< edi_1 && var_20 == edx)
                            sub_48b510(ecx * 0x4c + *data_aca0dc)
                            uint32_t eax_9
                            eax_9.b = 1
                            fsbase->NtTib.ExceptionList = ExceptionList
                            return eax_9
    
    eax_3.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3
}
