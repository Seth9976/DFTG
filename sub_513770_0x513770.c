// 函数名称: sub_513770
// 虚拟地址: 0x513770
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

LRESULT __fastcallsub_513770(HWND arg1, char* arg2)
{
    // 第一条实际指令: int32_t __saved_ebx_2
    int32_t __saved_ebx_2
    int32_t __saved_ebx_1 = __saved_ebx_2
    int32_t __saved_ebp_2
    int32_t __saved_ebp_1 = __saved_ebp_2
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_5a2158
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t __saved_esi_1
    int32_t __saved_esi = __saved_esi_1
    int32_t __saved_edi_1
    int32_t __saved_edi = __saved_edi_1
    int32_t var_5c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* var_38 = arg2
    int32_t var_60 = 0
    int32_t var_68 = 0x199
    LRESULT result = SendMessageA(arg1, 0x199, *(arg2 + 0xc), 0)
    LRESULT lParam = result
    
    if (*(arg2 + 0xc) != 0xffffffff && data_1152b94 != 0)
        int32_t edx
        result, edx = sub_549b70(data_1151b94)
        LRESULT result_2 = result
        
        if (result_2 != 0)
            char* const result_1 = &data_5b2591
            int32_t var_14_1 = 0
            int32_t ecx_2 = *(var_38 + 0xc)
            
            if (ecx_2 u> 5)
                int32_t eax_16 = *result_2 - 1
                
                switch (eax_16)
                    case 0
                        if (ecx_2 != 6)
                            char const* const var_60_19 = "OnFabPropGridChange"
                            int32_t var_64_12 = 0x100f
                            char const* const var_68_8 =
                                "d:\ax\trunk\ax2017\engine\windows\editorwindow.cpp"
                            sub_489550(eax_16, &data_5b2591, "Halt", 
                                "d:\ax\trunk\ax2017\engine\windows\editorwindow.cpp", 0x100f, 
                                "OnFabPropGridChange")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_489700()
                            noreturn
                        
                        sub_5132c0(&result_1, &(*(lParam + 0x10))[4], result_2 + 0x40, &result_1)
                    case 1
                        if (ecx_2 != 6)
                            char const* const var_60_18 = "OnFabPropGridChange"
                            int32_t var_64_11 = 0x1005
                            char const* const var_68_7 =
                                "d:\ax\trunk\ax2017\engine\windows\editorwindow.cpp"
                            sub_489550(eax_16, &data_5b2591, "Halt", 
                                "d:\ax\trunk\ax2017\engine\windows\editorwindow.cpp", 0x1005, 
                                "OnFabPropGridChange")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_489700()
                            noreturn
                        
                        sub_5132c0(&result_1, &(*(lParam + 0x10))[4], result_2 + 0x88, &result_1)
                    case 2
                        if (ecx_2 == 6)
                            sub_5132c0(&result_1, &(*(lParam + 0x10))[4], result_2 + 0x60, &result_1)
                        else if (ecx_2 == 7)
                            void* eax_18 = sub_4cf8e0(data_12bac10, 0x68)
                            sub_512fd0(eax_18, result_2 + 0x68, eax_18, lParam + 0x10, &result_1)
                        else
                            if (ecx_2 != 8)
                                char const* const var_60_17 = "OnFabPropGridChange"
                                int32_t var_64_10 = 0xffb
                                char const* const var_68_6 =
                                    "d:\ax\trunk\ax2017\engine\windows\editorwindow.cpp"
                                sub_489550(eax_16, &data_5b2591, "Halt", 
                                    "d:\ax\trunk\ax2017\engine\windows\editorwindow.cpp", 0xffb, 
                                    "OnFabPropGridChange")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_489700()
                                noreturn
                            
                            void* eax_17 = sub_4cf8e0(data_12bac10, 0x80)
                            sub_512fd0(eax_17, result_2 + 0x80, eax_17, lParam + 0x10, &result_1)
                    case 4
                        if (ecx_2 == 6)
                            if (*(result_2 + 0xb0) s<= 0)
                                char const* const var_60_21 = "OnFabPropGridChange"
                                int32_t var_64_14 = 0x1017
                                char const* const var_68_10 =
                                    "d:\ax\trunk\ax2017\engine\windows\editorwindow.cpp"
                                sub_489550(eax_16, &data_5b2591, "el.numSubFabs > 0", 
                                    "d:\ax\trunk\ax2017\engine\windows\editorwindow.cpp", 0x1017, 
                                    "OnFabPropGridChange")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_489700()
                                noreturn
                            
                            sub_5132c0(&result_1, &(*(lParam + 0x10))[4], *(result_2 + 0xa8), &result_1)
                        else
                            if (ecx_2 != 7)
                                char const* const var_60_20 = "OnFabPropGridChange"
                                int32_t var_64_13 = 0x101e
                                char const* const var_68_9 =
                                    "d:\ax\trunk\ax2017\engine\windows\editorwindow.cpp"
                                sub_489550(eax_16, &data_5b2591, "Halt", 
                                    "d:\ax\trunk\ax2017\engine\windows\editorwindow.cpp", 0x101e, 
                                    "OnFabPropGridChange")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_489700()
                                noreturn
                            
                            int32_t var_28
                            int32_t* var_60_10 = &var_28
                            int64_t var_30
                            void* var_64_6 = &var_30:4
                            int64_t* var_68_2 = &var_30
                            char const* const var_6c_2 = " %d %d %d"
                            char* var_70_1 = *(lParam + 0x10)
                            int32_t eax_20 = sub_48d8d0(&var_30, edx, ecx_2 - 7)
                            int32_t eax_21
                            
                            if (eax_20 == 3)
                                eax_21 = var_28
                                *(result_2 + 0x94) = var_30
                                *(result_2 + 0x9c) = eax_21
                            else if (eax_20 == 1)
                                eax_21 = var_30.d
                                int32_t var_4c_1 = eax_21
                                *(result_2 + 0x94) = eax_21.q
                                *(result_2 + 0x9c) = eax_21
                            uint128_t xmm1_1 = zx.o(*(result_2 + 0x98))
                            uint128_t xmm2_1 = zx.o(*(result_2 + 0x94))
                            float xmm0_3[0x2] = _mm_cvtepi32_ps(zx.o(*(result_2 + 0x9c)))
                            float xmm1_2[0x2] = _mm_cvtepi32_ps(xmm1_1)
                            int64_t xmm0_4 = _mm_cvtps_pd(xmm0_3)
                            float xmm2_2[0x2] = _mm_cvtepi32_ps(xmm2_1)
                            var_64_6.q = xmm0_4
                            var_6c_2.q = _mm_cvtps_pd(xmm1_2)
                            int64_t var_74_1 = _mm_cvtps_pd(xmm2_2)
                            char const* const var_78_1 = "%g %g %g"
                            char* const var_3c
                            sub_48a9d0(&var_3c, "%g %g %g")
                            var_14_1.b = 5
                            sub_48a560(&result_1, &var_3c)
                            var_14_1.b = 6
                            
                            if (data_aca1f4 != 0)
                                char* eax_22 = var_3c
                                
                                if (eax_22 != 0 && *eax_22 != 0)
                                    char* eax_23 = sub_48a080(&var_3c)
                                    int32_t temp9_1 = *(eax_23 + 4)
                                    *(eax_23 + 4) -= 1
                                    
                                    if (temp9_1 == 1)
                                        sub_4984f0(eax_23, *(eax_23 + 0xc) + 0x10)
                                        var_3c = &data_5b2591
                            
                            char* const result_3 = result_1
                            char* const result_6 = &data_5b2591
                            
                            if (result_3 != 0)
                                result_6 = result_3
                            
                            *(lParam + 0x10) = result_6
                    case 5
                        if (ecx_2 == 7)
                            sub_513490(&result_1, lParam + 0x10, result_2 + 0xc4, &result_1)
                        else if (ecx_2 == 8)
                            char* ecx_36 = *(lParam + 0x10)
                            uint32_t eax_24
                            eax_24.w = ecx_36.w
                            eax_24.w u>>= 8
                            *(result_2 + 0xb8) = _mm_cvtepi32_ps(zx.o(ecx_36.b)) / 255f
                            *(result_2 + 0xbc) = _mm_cvtepi32_ps(zx.o(eax_24.w)) / 255f
                            *(result_2 + 0xc0) = _mm_cvtepi32_ps(zx.o((ecx_36 u>> 0x10).b)) / 255f
                            HWND var_6c
                            var_6c.o = *(result_2 + 0xb8)
                            int32_t eax_27 = sub_497d80(var_6c)
                            *(lParam + 0x10) =
                                (zx.d((eax_27 u>> 0x10).b) << 8 | zx.d((eax_27 u>> 8).b)) << 8
                                | zx.d(eax_27.b)
                        else
                            if (ecx_2 != 9)
                                char const* const var_60_22 = "OnFabPropGridChange"
                                int32_t var_64_15 = 0x102f
                                char const* const var_68_11 =
                                    "d:\ax\trunk\ax2017\engine\windows\editorwindow.cpp"
                                sub_489550(eax_16, &data_5b2591, "Halt", 
                                    "d:\ax\trunk\ax2017\engine\windows\editorwindow.cpp", 0x102f, 
                                    "OnFabPropGridChange")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_489700()
                                noreturn
                            
                            sub_5132c0(&result_1, &(*(lParam + 0x10))[4], result_2 + 0x40, &result_1)
                    case 7
                        if (ecx_2 != 6)
                            char const* const var_60_23 = "OnFabPropGridChange"
                            int32_t var_64_16 = 0x1039
                            char const* const var_68_12 =
                                "d:\ax\trunk\ax2017\engine\windows\editorwindow.cpp"
                            sub_489550(eax_16, &data_5b2591, "Halt", 
                                "d:\ax\trunk\ax2017\engine\windows\editorwindow.cpp", 0x1039, 
                                "OnFabPropGridChange")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_489700()
                            noreturn
                        
                        sub_5132c0(&result_1, &(*(lParam + 0x10))[4], result_2 + 0xd0, &result_1)
                    default
                        char const* const var_60_15 = "OnFabPropGridChange"
                        int32_t var_64_8 = 0x103d
                        char const* const var_68_4 =
                            "d:\ax\trunk\ax2017\engine\windows\editorwindow.cpp"
                        sub_489550(eax_16, &data_5b2591, "Halt", 
                            "d:\ax\trunk\ax2017\engine\windows\editorwindow.cpp", 0x103d, 
                            "OnFabPropGridChange")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_489700()
                        noreturn
                
                goto label_513cb0
            
            bool cond:3_1
            
            switch (ecx_2)
                case 0
                    result.b = *(lParam + 0x10) != 0
                    *(result_2 + 0x38) = result.b
                label_513cb0:
                    int32_t var_68_3 = 0x19a
                    result = SendMessageA(arg1, 0x19a, *(var_38 + 0xc), lParam)
                    int32_t var_14_4 = 7
                    goto label_513863
                case 1
                    void* eax_4 = sub_4cf8e0(data_12bac10, 8)
                    sub_512fd0(eax_4, result_2 + 8, eax_4, lParam + 0x10, &result_1)
                    int32_t var_68_1 = 0x19a
                    result = SendMessageA(arg1, 0x19a, *(var_38 + 0xc), lParam)
                    int32_t var_14_2 = 1
                label_513863:
                    
                    if (data_aca1f4 != 0)
                        result = result_1
                        
                        if (result != 0)
                            cond:3_1 = *result == 0
                        label_513876:
                            
                            if (not(cond:3_1))
                                result = sub_48a080(&result_1)
                                int32_t temp8_1 = *(result + 4)
                                *(result + 4) -= 1
                                
                                if (temp8_1 == 1)
                                    result = sub_4984f0(result, *(result + 0xc) + 0x10)
                case 2
                    char* edx_4 = *(lParam + 0x10)
                    
                    if (edx_4 == 0)
                        char const* const var_60_16 = "XString::XString"
                        int32_t var_64_9 = 0x94
                        char const* const var_68_5 = "d:\ax\trunk\ax2017\engine\xstring.cpp"
                        sub_489550(result, &data_5b2591, "str", 
                            "d:\ax\trunk\ax2017\engine\xstring.cpp", 0x94, "XString::XString")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_489700()
                        noreturn
                    
                    sub_48a2c0(&var_38, edx_4)
                    var_14_1.b = 2
                    char* eax_6 = *(lParam + 0x10)
                    void* const edi_1 = &data_5d3190
                    char* var_40_1 = eax_6
                    int32_t ecx_12
                    
                    while (true)
                        if (__stricmp(*(edi_1 + 4), eax_6) == 0)
                            ecx_12 = *edi_1
                            *result_2 = ecx_12
                            break
                        
                        eax_6 = var_40_1
                        edi_1 += 8
                        
                        if (*(edi_1 + 4) == 0)
                            ecx_12 = *result_2
                            break
                    
                    void* const eax_8 = &data_5d3190
                    char* const eax_9
                    
                    while (true)
                        if (*eax_8 == ecx_12)
                            eax_9 = *(eax_8 + 4)
                            break
                        
                        eax_8 += 8
                        
                        if (*(eax_8 + 4) == 0)
                            eax_9 = &data_5b2591
                            break
                    
                    sub_48a5e0(&result_1, eax_9)
                    char* const result_4 = result_1
                    char* const result_5 = &data_5b2591
                    
                    if (result_4 != 0)
                        result_5 = result_4
                    
                    *(lParam + 0x10) = result_5
                    var_14_1.b = 3
                    
                    if (data_aca1f4 != 0)
                        char* eax_10 = var_38
                        
                        if (eax_10 != 0 && *eax_10 != 0)
                            char* eax_11 = sub_48a080(&var_38)
                            int32_t temp10_1 = *(eax_11 + 4)
                            *(eax_11 + 4) -= 1
                            
                            if (temp10_1 == 1)
                                sub_4984f0(eax_11, *(eax_11 + 0xc) + 0x10)
                    
                    var_14_1.b = 0
                    result = sub_515670()
                    int32_t var_14_3 = 4
                    
                    if (data_aca1f4 != 0 && result_4 != 0)
                        cond:3_1 = *result_4 == 0
                        goto label_513876
                case 3
                    sub_513100(&result_1, lParam + 0x10, result_2 + 0x10, &result_1)
                    goto label_513cb0
                case 4
                    sub_513100(&result_1, lParam + 0x10, result_2 + 0x1c, &result_1)
                    goto label_513cb0
                case 5
                    sub_513100(&result_1, lParam + 0x10, result_2 + 0x28, &result_1)
                    goto label_513cb0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
