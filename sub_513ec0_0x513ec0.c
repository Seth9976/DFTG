// 函数名称: sub_513ec0
// 虚拟地址: 0x513ec0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

LRESULT __fastcallsub_513ec0(HWND arg1, char* arg2)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_5a21a0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_5c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* var_40 = arg2
    LRESULT result = SendMessageA(arg1, 0x199, *(arg2 + 0xc), 0)
    LRESULT lParam = result
    
    if (*(arg2 + 0xc) != 0xffffffff)
        int32_t* ecx = data_1151ad8
        
        if (ecx[1] != 0x1e)
            sub_489550(result, &data_5b2591, "ptr->assetType == ASSET_TYPE_UI", 
                "d:\ax\trunk\ax2017\engine\uidef.cpp", 0x126, "UIDefGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        int32_t eax_4 = sub_4981f0(ecx)
        int32_t edx
        result, edx = sub_54e1b0()
        
        if (result != 0xffffffff)
            char* const result_1 = &data_5b2591
            void* esi_2 = result * 0x178 + *eax_4
            int32_t var_14_1 = 0
            int32_t ecx_2 = *(var_40 + 0xc)
            void* const var_3c
            
            if (ecx_2 - 1 u> 3)
                int32_t eax_19 = *(esi_2 + 4) - 1
                int32_t var_60_21
                int32_t var_60_22
                int32_t var_60_24
                int32_t var_60_25
                int32_t ecx_43
                
                switch (eax_19)
                    case 0, 3
                        if (ecx_2 == 5)
                            sub_5132c0(&result_1, *(lParam + 0x10) + 4, esi_2 + 0x88, &result_1)
                        else if (ecx_2 == 6)
                            eax_19.b = *(lParam + 0x10) != 0
                            *(esi_2 + 0x90) = eax_19.b
                        else
                            if (ecx_2 != 7)
                                sub_489550(eax_19, &data_5b2591, "Halt", 
                                    "d:\ax\trunk\ax2017\engine\windows\editorwindow.cpp", 0x10f1, 
                                    "OnUIPropGridChange")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_489700()
                                noreturn
                            
                            char* eax_33 = *(lParam + 0x10)
                            void* const edi_4 = &data_5d2a38
                            char* var_4c_2 = eax_33
                            
                            if (&data_5f16a4[7] == ecx_2)
                            label_51479c:
                                sub_489550(eax_33, &data_5b2591, "newVal", 
                                    "d:\ax\trunk\ax2017\engine\windows\editorwindow.cpp", 0xf79, 
                                    "DefSetImageAlign")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_489700()
                                noreturn
                            
                            while (true)
                                if (__stricmp(*(edi_4 + 4), eax_33) == 0)
                                    *(esi_2 + 0x94) = *edi_4
                                    break
                                
                                eax_33 = var_4c_2
                                edi_4 += 8
                                
                                if (*(edi_4 + 4) == 0)
                                    goto label_51479c
                    case 1
                        if (ecx_2 - 5 u> 6)
                            sub_489550(eax_19, &data_5b2591, "Halt", 
                                "d:\ax\trunk\ax2017\engine\windows\editorwindow.cpp", 0x110e, 
                                "OnUIPropGridChange")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_489700()
                            noreturn
                        
                        switch (ecx_2)
                            case 5
                                sub_5132c0(&result_1, *(lParam + 0x10) + 4, esi_2 + 0xc8, &result_1)
                            case 6
                                sub_5133c0(&result_1, lParam + 0x10, esi_2 + 0xac, &result_1)
                            case 7
                                sub_5133c0(&result_1, lParam + 0x10, esi_2 + 0xb0, &result_1)
                            case 8
                                sub_513490(&result_1, lParam + 0x10, esi_2 + 0xb4, &result_1)
                            case 9
                                sub_513490(&result_1, lParam + 0x10, esi_2 + 0xb8, &result_1)
                            case 0xa
                                eax_19.b = *(lParam + 0x10) == 0
                                *(esi_2 + 0xd9) = eax_19.b
                            case 0xb
                                eax_19.b = *(lParam + 0x10) != 0
                                *(esi_2 + 0xda) = eax_19.b
                    case 2
                        ecx_43 = ecx_2 - 5
                        
                        if (ecx_43 u> 7)
                            sub_489550(eax_19, &data_5b2591, "Halt", 
                                "d:\ax\trunk\ax2017\engine\windows\editorwindow.cpp", 0x112e, 
                                "OnUIPropGridChange")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_489700()
                            noreturn
                        
                        switch (ecx_43)
                            case 0
                                void* eax_40 = sub_4cf8e0(data_12baaf0, 0xe0)
                                sub_512fd0(eax_40, esi_2 + 0xe0, eax_40, lParam + 0x10, &result_1)
                            case 1
                                sub_5132c0(&result_1, *(lParam + 0x10) + 4, esi_2 + 0xe8, &result_1)
                            case 2
                                var_60_21 = ecx_43
                                sub_513570(esi_2 + 0xf0, lParam + 0x10)
                            case 3
                                var_60_22 = ecx_43
                                sub_513570(esi_2 + 0xf4, lParam + 0x10)
                            case 4
                                sub_513490(&result_1, lParam + 0x10, esi_2 + 0xf8, &result_1)
                            case 5
                                var_60_24 = ecx_43
                                sub_5135a0(esi_2 + 0xfc, *(lParam + 0x10))
                            case 6
                                var_60_25 = ecx_43
                                sub_513690(esi_2 + 0xfc, *(lParam + 0x10))
                            case 7
                                eax_19.b = *(lParam + 0x10) != 0
                                *(esi_2 + 0x100) = eax_19.b
                    case 4
                        ecx_43 = ecx_2 - 5
                        
                        if (ecx_43 u> 0x11)
                            sub_489550(eax_19, &data_5b2591, "Halt", 
                                "d:\ax\trunk\ax2017\engine\windows\editorwindow.cpp", 0x116c, 
                                "OnUIPropGridChange")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_489700()
                            noreturn
                        
                        switch (ecx_43)
                            case 0
                                sub_5132c0(&result_1, *(lParam + 0x10) + 4, esi_2 + 0x88, &result_1)
                            case 1
                                sub_5132c0(&result_1, *(lParam + 0x10) + 4, esi_2 + 0x128, &result_1)
                            case 2
                                sub_5132c0(&result_1, *(lParam + 0x10) + 4, esi_2 + 0x130, &result_1)
                            case 3
                                sub_5132c0(&result_1, *(lParam + 0x10) + 4, esi_2 + 0x138, &result_1)
                            case 4
                                eax_19.b = *(lParam + 0x10) != 0
                                *(esi_2 + 0x90) = eax_19.b
                            case 5
                                void* eax_42 = sub_4cf8e0(data_12baaf0, 0x120)
                                sub_512fd0(eax_42, esi_2 + 0x120, eax_42, lParam + 0x10, &result_1)
                            case 6
                                sub_5132c0(&result_1, *(lParam + 0x10) + 4, esi_2 + 0xe8, &result_1)
                            case 7
                                var_60_21 = ecx_43
                                sub_513570(esi_2 + 0xf0, lParam + 0x10)
                            case 8
                                var_60_22 = ecx_43
                                sub_513570(esi_2 + 0xf4, lParam + 0x10)
                            case 9
                                int32_t var_60_27 = ecx_43
                                sub_513570(esi_2 + 0x140, lParam + 0x10)
                            case 0xa
                                int32_t var_60_28 = ecx_43
                                sub_513570(esi_2 + 0x144, lParam + 0x10)
                            case 0xb
                                sub_513490(&result_1, lParam + 0x10, esi_2 + 0xf8, &result_1)
                            case 0xc
                                sub_513010(&result_1, lParam + 0x10, esi_2 + 0x148, &result_1)
                            case 0xd
                                var_60_24 = ecx_43
                                sub_5135a0(esi_2 + 0xfc, *(lParam + 0x10))
                            case 0xe
                                var_60_25 = ecx_43
                                sub_513690(esi_2 + 0xfc, *(lParam + 0x10))
                            case 0xf
                                sub_5132c0(&result_1, *(lParam + 0x10) + 4, esi_2 + 0x150, &result_1)
                            case 0x10
                                sub_5132c0(&result_1, *(lParam + 0x10) + 4, esi_2 + 0x158, &result_1)
                            case 0x11
                                sub_5132c0(&result_1, *(lParam + 0x10) + 4, esi_2 + 0x160, &result_1)
                    case 5
                        if (ecx_2 - 5 u> 6)
                            sub_489550(eax_19, &data_5b2591, "Halt", 
                                "d:\ax\trunk\ax2017\engine\windows\editorwindow.cpp", 0x10e0, 
                                "OnUIPropGridChange")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_489700()
                            noreturn
                        
                        switch (ecx_2)
                            case 5
                                sub_5133c0(&result_1, lParam + 0x10, esi_2 + 0x68, &result_1)
                            case 6
                                sub_5133c0(&result_1, lParam + 0x10, esi_2 + 0x6c, &result_1)
                            case 7
                                sub_5133c0(&result_1, lParam + 0x10, esi_2 + 0x70, &result_1)
                            case 8
                                sub_513490(&result_1, lParam + 0x10, esi_2 + 0x74, &result_1)
                            case 9
                                sub_513490(&result_1, lParam + 0x10, esi_2 + 0x78, &result_1)
                            case 0xa
                                sub_513010(&result_1, lParam + 0x10, esi_2 + 0x7c, &result_1)
                            case 0xb
                                char* edx_15 = *(lParam + 0x10)
                                
                                if (edx_15 == 0)
                                    sub_489550(eax_19, &data_5b2591, "str", 
                                        "d:\ax\trunk\ax2017\engine\xstring.cpp", 0x94, 
                                        "XString::XString")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_489700()
                                    noreturn
                                
                                char* var_50
                                sub_48a2c0(&var_50, edx_15)
                                var_14_1.b = 7
                                void* eax_26 = &data_5d2928
                                char* ecx_30 = *(lParam + 0x10)
                                char* var_4c_1 = ecx_30
                                var_3c = &data_5d2928
                                int32_t ecx_31
                                
                                while (true)
                                    bool cond:4_1 = __stricmp(*(eax_26 + 4), ecx_30) == 0
                                    void* const eax_28 = var_3c
                                    
                                    if (cond:4_1)
                                        ecx_31 = *eax_28
                                        *(esi_2 + 0x84) = ecx_31
                                        break
                                    
                                    ecx_30 = var_4c_1
                                    eax_26 = eax_28 + 8
                                    var_3c = eax_26
                                    
                                    if (*(eax_26 + 4) == 0)
                                        ecx_31 = *(esi_2 + 0x84)
                                        break
                                
                                void* eax_29 = &data_5d2928
                                char* eax_30
                                
                                while (true)
                                    if (*eax_29 == ecx_31)
                                        eax_30 = *(eax_29 + 4)
                                        break
                                    
                                    eax_29 += 8
                                    
                                    if (*(eax_29 + 4) == 0)
                                        eax_30 = &data_5b2591
                                        break
                                
                                sub_48a5e0(&result_1, eax_30)
                                char* const result_3 = result_1
                                char* const result_7 = &data_5b2591
                                
                                if (result_3 != 0)
                                    result_7 = result_3
                                
                                *(lParam + 0x10) = result_7
                                var_14_1.b = 8
                                
                                if (data_aca1f4 != 0)
                                    char* eax_31 = var_50
                                    
                                    if (eax_31 != 0 && *eax_31 != 0)
                                        char* eax_32 = sub_48a080(&var_50)
                                        int32_t temp6_1 = *(eax_32 + 4)
                                        *(eax_32 + 4) -= 1
                                        
                                        if (temp6_1 == 1)
                                            sub_4984f0(eax_32, *(eax_32 + 0xc) + 0x10)
                                
                                var_14_1.b = 0
                    case 8
                        if (ecx_2 != 5)
                            sub_489550(eax_19, &data_5b2591, "Halt", 
                                "d:\ax\trunk\ax2017\engine\windows\editorwindow.cpp", 0x10c4, 
                                "OnUIPropGridChange")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_489700()
                            noreturn
                        
                        sub_5132c0(&result_1, *(lParam + 0x10) + 4, esi_2 + 0x60, &result_1)
                    default
                        sub_489550(eax_19, &data_5b2591, "Halt", 
                            "d:\ax\trunk\ax2017\engine\windows\editorwindow.cpp", 0x1170, 
                            "OnUIPropGridChange")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_489700()
                        noreturn
                
                goto label_514610
            
            bool cond:5_1
            
            switch (ecx_2)
                case 1
                    int32_t eax_5
                    eax_5.b = *(lParam + 0x10) != 0
                    *(esi_2 + 0x44) = eax_5.b
                label_514610:
                    SendMessageA(arg1, 0x19a, *(var_40 + 0xc), lParam)
                    char* ecx_56
                    ecx_56.b = 1
                    result = sub_54dee0(ecx_56)
                    int32_t var_14_4 = 9
                    goto label_513fd8
                case 2
                    void* eax_6 = sub_4cf8e0(data_12baaf0, 8)
                    sub_512fd0(eax_6, esi_2 + 8, eax_6, lParam + 0x10, &result_1)
                    SendMessageA(arg1, 0x19a, *(var_40 + 0xc), lParam)
                    char* ecx_5
                    ecx_5.b = 1
                    sub_54dee0(ecx_5)
                    sub_5151c0(data_11e6050)
                    result = sub_5539f0()
                    int32_t var_14_2 = 1
                label_513fd8:
                    
                    if (data_aca1f4 != 0)
                        result = result_1
                        
                        if (result != 0)
                            cond:5_1 = *result == 0
                        label_513feb:
                            
                            if (not(cond:5_1))
                                result = sub_48a080(&result_1)
                                int32_t temp4_1 = *(result + 4)
                                *(result + 4) -= 1
                                
                                if (temp4_1 == 1)
                                    result = sub_4984f0(result, *(result + 0xc) + 0x10)
                case 3
                    char* edx_6 = *(lParam + 0x10)
                    
                    if (edx_6 == 0)
                        sub_489550(ecx_2 - 1, &data_5b2591, "str", 
                            "d:\ax\trunk\ax2017\engine\xstring.cpp", 0x94, "XString::XString")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_489700()
                        noreturn
                    
                    sub_48a2c0(&var_40, edx_6)
                    var_14_1.b = 4
                    void* const eax_12 = &data_5d2980
                    char* ecx_16 = *(lParam + 0x10)
                    char* var_44_1 = ecx_16
                    var_3c = &data_5d2980
                    int32_t ecx_20
                    
                    while (true)
                        bool cond:2_1 = __stricmp(*(eax_12 + 4), ecx_16) == 0
                        void* const eax_14 = var_3c
                        
                        if (cond:2_1)
                            ecx_20 = *eax_14
                            *(esi_2 + 4) = ecx_20
                            break
                        
                        ecx_16 = var_44_1
                        eax_12 = eax_14 + 8
                        var_3c = eax_12
                        
                        if (*(eax_12 + 4) == 0)
                            ecx_20 = *(esi_2 + 4)
                            break
                    
                    sub_48a5e0(&result_1, sub_513230(ecx_20))
                    char* const result_4 = result_1
                    char* const result_5 = &data_5b2591
                    
                    if (result_4 != 0)
                        result_5 = result_4
                    
                    *(lParam + 0x10) = result_5
                    var_14_1.b = 5
                    
                    if (data_aca1f4 != 0)
                        char* eax_16 = var_40
                        
                        if (eax_16 != 0 && *eax_16 != 0)
                            char* eax_17 = sub_48a080(&var_40)
                            int32_t temp5_1 = *(eax_17 + 4)
                            *(eax_17 + 4) -= 1
                            
                            if (temp5_1 == 1)
                                sub_4984f0(eax_17, *(eax_17 + 0xc) + 0x10)
                    
                    void** ecx_18
                    ecx_18.b = 1
                    var_14_1.b = 0
                    sub_54dee0(ecx_18)
                    result = sub_516090()
                    int32_t var_14_3 = 6
                    
                    if (data_aca1f4 != 0 && result_4 != 0)
                        cond:5_1 = *result_4 == 0
                        goto label_513feb
                case 4
                    void var_28
                    void* var_60_3 = &var_28
                    void var_2c
                    void* var_64_3 = &var_2c
                    int128_t var_34
                    void* var_68_1 = &var_34:4
                    int128_t* var_6c_2 = &var_34
                    
                    if (sub_48d8d0(&var_34, edx, ecx_2, *(lParam + 0x10), " %f %f %f %f") != 0)
                        *(esi_2 + 0x10) = var_34
                    
                    var_64_3.q = _mm_cvtps_pd(*(esi_2 + 0x1c))
                    var_6c_2.q = _mm_cvtps_pd(*(esi_2 + 0x18))
                    char* var_74_1
                    var_74_1.q = _mm_cvtps_pd(*(esi_2 + 0x14))
                    int64_t var_7c_1 = _mm_cvtps_pd(*(esi_2 + 0x10))
                    sub_48a9d0(&var_3c, "%g %g %g %g")
                    var_14_1.b = 2
                    sub_48a560(&result_1, &var_3c)
                    var_14_1.b = 3
                    
                    if (data_aca1f4 != 0)
                        void* const eax_10 = var_3c
                        
                        if (eax_10 != 0 && *eax_10 != 0)
                            char* eax_11 = sub_48a080(&var_3c)
                            int32_t temp3_1 = *(eax_11 + 4)
                            *(eax_11 + 4) -= 1
                            
                            if (temp3_1 == 1)
                                sub_4984f0(eax_11, *(eax_11 + 0xc) + 0x10)
                    
                    var_14_1.b = 0
                    char* const result_6 = &data_5b2591
                    char* const result_2 = result_1
                    
                    if (result_2 != 0)
                        result_6 = result_2
                    
                    *(lParam + 0x10) = result_6
                    goto label_514610
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
