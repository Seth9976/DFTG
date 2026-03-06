// 函数名称: sub_42fb00
// 虚拟地址: 0x42fb00
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __convention("regparm")sub_42fb00(int32_t arg1, int32_t arg2, char* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59d6c8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* const result_1 = arg3
    int32_t ebx
    int32_t var_18 = ebx
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_48a2c0(&result_1, "btnBack")
    char* const result_24 = &data_5b2591
    char* result_3 = result_1
    char* const result_14 = &data_5b2591
    char* edx = arg4[1]
    
    if (result_3 != 0)
        result_14 = result_3
    
    int32_t ecx_2
    
    while (true)
        ebx.b = *result_14
        char temp0_1 = *edx
        bool c_1 = ebx.b u< temp0_1
        
        if (ebx.b == temp0_1)
            if (ebx.b == 0)
                ecx_2 = 0
                break
            
            ebx.b = result_14[1]
            char temp1_1 = edx[1]
            c_1 = ebx.b u< temp1_1
            
            if (ebx.b == temp1_1)
                result_14 = &result_14[2]
                edx = &edx[2]
                
                if (ebx.b != 0)
                    continue
                
                ecx_2 = 0
                break
        
        ecx_2 = sbb.d(result_14, result_14, c_1) | 1
        break
    
    if (ecx_2 == 0 || arg4[6] == 2)
        ebx.b = 1
    else
        ebx.b = 0
    
    int32_t var_8_1 = 0
    
    if (data_aca1f4 != 0 && result_3 != 0 && *result_3 != 0)
        char* eax_3 = sub_48a080(&result_1)
        int32_t temp2_1 = *(eax_3 + 4)
        *(eax_3 + 4) -= 1
        
        if (temp2_1 == 1)
            sub_4984f0(eax_3, *(eax_3 + 0xc) + 0x10)
            result_1 = &data_5b2591
    
    int32_t var_8_2 = 0xffffffff
    
    if (ebx.b != 0)
        int32_t eax_4
        
        if (data_62b1ac != 0x21)
            if (data_62b1bc == 0x21)
                eax_4 = data_62b1c0
                goto label_42fbe1
            
            data_62b220 = 3
        else
            eax_4 = data_62b1b0
        label_42fbe1:
            
            if (eax_4 == 0)
                data_62b220 = 3
            else
                sub_4361a0(3)
    
    sub_48a2c0(&result_1, "btnGraphics")
    char* const result_4 = result_1
    char* const result_15 = &data_5b2591
    char* edx_3 = arg4[1]
    
    if (result_4 != 0)
        result_15 = result_4
    
    int32_t esi_1
    
    while (true)
        ebx.b = *result_15
        char temp3_1 = *edx_3
        bool c_2 = ebx.b u< temp3_1
        
        if (ebx.b == temp3_1)
            if (ebx.b == 0)
                esi_1 = 0
                break
            
            ebx.b = result_15[1]
            char temp4_1 = edx_3[1]
            c_2 = ebx.b u< temp4_1
            
            if (ebx.b == temp4_1)
                result_15 = &result_15[2]
                edx_3 = &edx_3[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_1 = 0
                break
        
        esi_1 = sbb.d(arg4, arg4, c_2) | 1
        break
    
    int32_t var_8_3 = 1
    
    if (data_aca1f4 != 0 && result_4 != 0 && *result_4 != 0)
        result_4 = sub_48a080(&result_1)
        int32_t temp5_1 = *(result_4 + 4)
        *(result_4 + 4) -= 1
        
        if (temp5_1 == 1)
            result_4 = sub_4984f0(result_4, *(result_4 + 0xc) + 0x10)
            result_1 = &data_5b2591
    
    int32_t var_8_4 = 0xffffffff
    
    if (esi_1 == 0)
        void* ecx_8 = data_6d00d0
        
        if (ecx_8 == 0)
            sub_489550(result_4, &data_5b2591, "gGameSettings.localSettings", 
                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x24c, 
                "GetLocalSettings")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        int32_t eax_5
        eax_5.b = *(ecx_8 + 0xc) != 1
        *(ecx_8 + 0xc) = eax_5
        sub_436df0()
    
    sub_48a2c0(&result_1, "btnGameSpeed")
    char* const result_16 = &data_5b2591
    char* edx_6 = arg4[1]
    char* const result_5 = result_1
    
    if (result_5 != 0)
        result_16 = result_5
    
    int32_t esi_3
    
    while (true)
        ebx.b = *result_16
        char temp6_1 = *edx_6
        bool c_3 = ebx.b u< temp6_1
        
        if (ebx.b == temp6_1)
            if (ebx.b == 0)
                esi_3 = 0
                break
            
            ebx.b = result_16[1]
            char temp7_1 = edx_6[1]
            c_3 = ebx.b u< temp7_1
            
            if (ebx.b == temp7_1)
                result_16 = &result_16[2]
                edx_6 = &edx_6[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_3 = 0
                break
        
        esi_3 = sbb.d(esi_1, esi_1, c_3) | 1
        break
    
    int32_t var_8_5 = 2
    
    if (data_aca1f4 != 0 && result_5 != 0 && *result_5 != 0)
        char* eax_7 = sub_48a080(&result_1)
        int32_t temp8_1 = *(eax_7 + 4)
        *(eax_7 + 4) -= 1
        
        if (temp8_1 == 1)
            sub_4984f0(eax_7, *(eax_7 + 0xc) + 0x10)
            result_1 = &data_5b2591
    
    int32_t var_8_6 = 0xffffffff
    
    if (esi_3 == 0)
        void* eax_8 = data_6d00d0
        
        if (eax_8 == 0)
            sub_489550(eax_8, &data_5b2591, "gGameSettings.localSettings", 
                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x24c, 
                "GetLocalSettings")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        *(eax_8 + 8) += 1
        
        if (*(eax_8 + 8) s>= 3)
            *(eax_8 + 8) = esi_3
        
        sub_436df0()
    
    sub_48a2c0(&result_1, "btnAutomation")
    char* const result_17 = &data_5b2591
    char* edx_9 = arg4[1]
    char* const result_6 = result_1
    
    if (result_6 != 0)
        result_17 = result_6
    
    int32_t esi_5
    
    while (true)
        ebx.b = *result_17
        char temp9_1 = *edx_9
        bool c_4 = ebx.b u< temp9_1
        
        if (ebx.b == temp9_1)
            if (ebx.b == 0)
                esi_5 = 0
                break
            
            ebx.b = result_17[1]
            char temp10_1 = edx_9[1]
            c_4 = ebx.b u< temp10_1
            
            if (ebx.b == temp10_1)
                result_17 = &result_17[2]
                edx_9 = &edx_9[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_5 = 0
                break
        
        esi_5 = sbb.d(esi_3, esi_3, c_4) | 1
        break
    
    int32_t var_8_7 = 3
    
    if (data_aca1f4 != 0 && result_6 != 0 && *result_6 != 0)
        char* eax_10 = sub_48a080(&result_1)
        int32_t temp11_1 = *(eax_10 + 4)
        *(eax_10 + 4) -= 1
        
        if (temp11_1 == 1)
            sub_4984f0(eax_10, *(eax_10 + 0xc) + 0x10)
            result_1 = &data_5b2591
    
    int32_t var_8_8 = 0xffffffff
    
    if (esi_5 == 0)
        void* eax_11 = data_6d00d0
        
        if (eax_11 == 0)
            sub_489550(eax_11, &data_5b2591, "gGameSettings.localSettings", 
                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x24c, 
                "GetLocalSettings")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        *(eax_11 + 0x30) += 1
        
        if (*(eax_11 + 0x30) s>= 2)
            *(eax_11 + 0x30) = esi_5
        
        sub_436df0()
    
    sub_48a2c0(&result_1, "btnJumbo")
    char* const result_18 = &data_5b2591
    char* edx_12 = arg4[1]
    char* const result_7 = result_1
    
    if (result_7 != 0)
        result_18 = result_7
    
    int32_t esi_7
    
    while (true)
        ebx.b = *result_18
        char temp12_1 = *edx_12
        bool c_5 = ebx.b u< temp12_1
        
        if (ebx.b == temp12_1)
            if (ebx.b == 0)
                esi_7 = 0
                break
            
            ebx.b = result_18[1]
            char temp13_1 = edx_12[1]
            c_5 = ebx.b u< temp13_1
            
            if (ebx.b == temp13_1)
                result_18 = &result_18[2]
                edx_12 = &edx_12[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_7 = 0
                break
        
        esi_7 = sbb.d(esi_5, esi_5, c_5) | 1
        break
    
    int32_t var_8_9 = 4
    
    if (data_aca1f4 != 0 && result_7 != 0 && *result_7 != 0)
        char* eax_13 = sub_48a080(&result_1)
        int32_t temp14_1 = *(eax_13 + 4)
        *(eax_13 + 4) -= 1
        
        if (temp14_1 == 1)
            sub_4984f0(eax_13, *(eax_13 + 0xc) + 0x10)
            result_1 = &data_5b2591
    
    int32_t var_8_10 = 0xffffffff
    
    if (esi_7 == 0)
        void* eax_14 = data_6d00d0
        
        if (eax_14 == 0)
            sub_489550(eax_14, &data_5b2591, "gGameSettings.localSettings", 
                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x24c, 
                "GetLocalSettings")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        *(eax_14 + 0x24) += 1
        
        if (*(eax_14 + 0x24) s>= 2)
            *(eax_14 + 0x24) = esi_7
        
        sub_436df0()
    
    sub_48a2c0(&result_1, "btnControls")
    char* const result_19 = &data_5b2591
    char* edx_15 = arg4[1]
    char* const result_8 = result_1
    
    if (result_8 != 0)
        result_19 = result_8
    
    void* esi_9
    
    while (true)
        ebx.b = *result_19
        char temp15_1 = *edx_15
        bool c_6 = ebx.b u< temp15_1
        
        if (ebx.b == temp15_1)
            if (ebx.b == 0)
                esi_9 = nullptr
                break
            
            ebx.b = result_19[1]
            char temp16_1 = edx_15[1]
            c_6 = ebx.b u< temp16_1
            
            if (ebx.b == temp16_1)
                result_19 = &result_19[2]
                edx_15 = &edx_15[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_9 = nullptr
                break
        
        esi_9 = sbb.d(esi_7, esi_7, c_6) | 1
        break
    
    int32_t var_8_11 = 5
    
    if (data_aca1f4 != 0 && result_8 != 0 && *result_8 != 0)
        result_8 = sub_48a080(&result_1)
        int32_t temp17_1 = *(result_8 + 4)
        *(result_8 + 4) -= 1
        
        if (temp17_1 == 1)
            result_8 = sub_4984f0(result_8, *(result_8 + 0xc) + 0x10)
            result_1 = &data_5b2591
    
    int32_t var_8_12 = 0xffffffff
    
    if (esi_9 == 0)
        esi_9 = data_6d00d0
        
        if (esi_9 == 0)
            sub_489550(result_8, &data_5b2591, "gGameSettings.localSettings", 
                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x24c, 
                "GetLocalSettings")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        int32_t ecx_21
        ecx_21.b = sub_439440() != 2
        *(esi_9 + 0x20) = ecx_21 + 1
        sub_436df0()
    
    sub_48a2c0(&result_1, "btnWidescreen")
    char* const result_20 = &data_5b2591
    char* edx_18 = arg4[1]
    char* const result_9 = result_1
    
    if (result_9 != 0)
        result_20 = result_9
    
    int32_t esi_11
    
    while (true)
        ebx.b = *result_20
        char temp18_1 = *edx_18
        bool c_7 = ebx.b u< temp18_1
        
        if (ebx.b == temp18_1)
            if (ebx.b == 0)
                esi_11 = 0
                break
            
            ebx.b = result_20[1]
            char temp19_1 = edx_18[1]
            c_7 = ebx.b u< temp19_1
            
            if (ebx.b == temp19_1)
                result_20 = &result_20[2]
                edx_18 = &edx_18[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_11 = 0
                break
        
        esi_11 = sbb.d(esi_9, esi_9, c_7) | 1
        break
    
    int32_t var_8_13 = 6
    
    if (data_aca1f4 != 0 && result_9 != 0 && *result_9 != 0)
        char* eax_18 = sub_48a080(&result_1)
        int32_t temp20_1 = *(eax_18 + 4)
        *(eax_18 + 4) -= 1
        
        if (temp20_1 == 1)
            sub_4984f0(eax_18, *(eax_18 + 0xc) + 0x10)
            result_1 = &data_5b2591
    
    int32_t var_8_14 = 0xffffffff
    
    if (esi_11 == 0)
        sub_420070()
    
    sub_48a2c0(&result_1, "btnFullscreen")
    char* const result_21 = &data_5b2591
    char* edx_21 = arg4[1]
    char* const result_10 = result_1
    
    if (result_10 != 0)
        result_21 = result_10
    
    int32_t esi_13
    
    while (true)
        ebx.b = *result_21
        char temp21_1 = *edx_21
        bool c_8 = ebx.b u< temp21_1
        
        if (ebx.b == temp21_1)
            if (ebx.b == 0)
                esi_13 = 0
                break
            
            ebx.b = result_21[1]
            char temp22_1 = edx_21[1]
            c_8 = ebx.b u< temp22_1
            
            if (ebx.b == temp22_1)
                result_21 = &result_21[2]
                edx_21 = &edx_21[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_13 = 0
                break
        
        esi_13 = sbb.d(esi_11, esi_11, c_8) | 1
        break
    
    int32_t var_8_15 = 7
    
    if (data_aca1f4 != 0 && result_10 != 0 && *result_10 != 0)
        char* eax_20 = sub_48a080(&result_1)
        int32_t temp23_1 = *(eax_20 + 4)
        *(eax_20 + 4) -= 1
        
        if (temp23_1 == 1)
            sub_4984f0(eax_20, *(eax_20 + 0xc) + 0x10)
            result_1 = &data_5b2591
    
    int32_t var_8_16 = 0xffffffff
    
    if (esi_13 == 0)
        sub_41ffc0()
    
    sub_48a2c0(&result_1, "btnColorblind")
    char* result_22 = &data_5b2591
    char* edx_24 = arg4[1]
    char* result_11 = result_1
    
    if (result_11 != 0)
        result_22 = result_11
    
    int32_t esi_15
    
    while (true)
        ebx.b = *result_22
        char temp24_1 = *edx_24
        bool c_9 = ebx.b u< temp24_1
        
        if (ebx.b == temp24_1)
            if (ebx.b == 0)
                esi_15 = 0
                break
            
            ebx.b = result_22[1]
            char temp25_1 = edx_24[1]
            c_9 = ebx.b u< temp25_1
            
            if (ebx.b == temp25_1)
                result_22 = &result_22[2]
                edx_24 = &edx_24[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_15 = 0
                break
        
        esi_15 = sbb.d(esi_13, esi_13, c_9) | 1
        break
    
    int32_t var_8_17 = 8
    
    if (data_aca1f4 != 0 && result_11 != 0 && *result_11 != 0)
        result_11 = sub_48a080(&result_1)
        int32_t temp26_1 = *(result_11 + 4)
        *(result_11 + 4) -= 1
        
        if (temp26_1 == 1)
            result_11 = sub_4984f0(result_11, *(result_11 + 0xc) + 0x10)
            result_1 = &data_5b2591
    
    int32_t var_8_18 = 0xffffffff
    
    if (esi_15 == 0)
        void* ecx_32 = data_6d00d0
        
        if (ecx_32 == 0)
            sub_489550(result_11, &data_5b2591, "gGameSettings.localSettings", 
                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x24c, 
                "GetLocalSettings")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        result_11.b = *(ecx_32 + 0x2c) == 0
        *(ecx_32 + 0x2c) = result_11.b
        sub_436df0()
    
    sub_48a2c0(&result_1, "btnColorScheme")
    char* result_23 = &data_5b2591
    char* edx_27 = arg4[1]
    char* result_12 = result_1
    
    if (result_12 != 0)
        result_23 = result_12
    
    int32_t esi_17
    
    while (true)
        ebx.b = *result_23
        char temp27_1 = *edx_27
        bool c_10 = ebx.b u< temp27_1
        
        if (ebx.b == temp27_1)
            if (ebx.b == 0)
                esi_17 = 0
                break
            
            ebx.b = result_23[1]
            char temp28_1 = edx_27[1]
            c_10 = ebx.b u< temp28_1
            
            if (ebx.b == temp28_1)
                result_23 = &result_23[2]
                edx_27 = &edx_27[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_17 = 0
                break
        
        esi_17 = sbb.d(esi_15, esi_15, c_10) | 1
        break
    
    int32_t var_8_19 = 9
    
    if (data_aca1f4 != 0 && result_12 != 0 && *result_12 != 0)
        result_12 = sub_48a080(&result_1)
        int32_t temp29_1 = *(result_12 + 4)
        *(result_12 + 4) -= 1
        
        if (temp29_1 == 1)
            result_12 = sub_4984f0(result_12, *(result_12 + 0xc) + 0x10)
            result_1 = &data_5b2591
    
    int32_t var_8_20 = 0xffffffff
    
    if (esi_17 == 0)
        void* ecx_36 = data_6d00d0
        
        if (ecx_36 == 0)
            sub_489550(result_12, &data_5b2591, "gGameSettings.localSettings", 
                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x24c, 
                "GetLocalSettings")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        result_12.b = *(ecx_36 + 0x2d) == 0
        *(ecx_36 + 0x2d) = result_12.b
        sub_436df0()
    
    sub_48a2c0(&result_1, "btnSlider")
    char* result_2 = &data_5b2591
    char* edx_30 = arg4[1]
    char* result = result_1
    
    if (result != 0)
        result_2 = result
    
    int32_t esi_19
    
    while (true)
        ebx.b = *result_2
        char temp30_1 = *edx_30
        bool c_11 = ebx.b u< temp30_1
        
        if (ebx.b == temp30_1)
            if (ebx.b == 0)
                esi_19 = 0
                break
            
            ebx.b = result_2[1]
            char temp31_1 = edx_30[1]
            c_11 = ebx.b u< temp31_1
            
            if (ebx.b == temp31_1)
                result_2 = &result_2[2]
                edx_30 = &edx_30[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_19 = 0
                break
        
        esi_19 = sbb.d(esi_17, esi_17, c_11) | 1
        break
    
    int32_t var_8_21 = 0xa
    
    if (data_aca1f4 != 0 && result != 0 && *result != 0)
        result = sub_48a080(&result_1)
        int32_t temp32_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp32_1 == 1)
            result = sub_4984f0(result, *(result + 0xc) + 0x10)
    
    int32_t var_8_22 = 0xffffffff
    
    if (esi_19 == 0)
        int32_t eax_24 = sub_4bbb50(*arg4)
        sub_48a2c0(&result_1, "sliderMusic")
        int32_t var_8_23 = 0xb
        char* eax_25 = sub_4bbad0(eax_24)
        char* const result_13 = result_1
        
        if (result_13 != 0)
            result_24 = result_13
        
        int32_t esi_22
        
        while (true)
            char edx_33 = *eax_25
            char temp33_1 = *result_24
            bool c_12 = edx_33 u< temp33_1
            
            if (edx_33 == temp33_1)
                if (edx_33 == 0)
                    esi_22 = 0
                    break
                
                edx_33 = eax_25[1]
                char temp34_1 = result_24[1]
                c_12 = edx_33 u< temp34_1
                
                if (edx_33 == temp34_1)
                    eax_25 = &eax_25[2]
                    result_24 = &result_24[2]
                    
                    if (edx_33 != 0)
                        continue
                    
                    esi_22 = 0
                    break
            
            esi_22 = sbb.d(eax_24, eax_24, c_12) | 1
            break
        
        int32_t var_8_24 = 0xc
        
        if (data_aca1f4 != 0 && result_13 != 0 && *result_13 != 0)
            char* eax_26 = sub_48a080(&result_1)
            int32_t temp35_1 = *(eax_26 + 4)
            *(eax_26 + 4) -= 1
            
            if (temp35_1 == 1)
                sub_4984f0(eax_26, *(eax_26 + 0xc) + 0x10)
        
        int32_t var_8_25 = 0xffffffff
        float* eax_27
        int32_t* ecx_45
        float xmm2_1
        
        if (esi_22 != 0)
            int32_t var_28_2 = 1
            eax_27 = sub_438600()
            ecx_45 = &data_6cfe84
            xmm2_1 = eax_27[1]
        else
            eax_27 = sub_438600()
            int32_t var_28_1 = 1
            ecx_45 = &data_6cfe7c
            xmm2_1 = *eax_27
        
        result = sub_432440(eax_27, arg4[2], ecx_45, xmm2_1, 1)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
