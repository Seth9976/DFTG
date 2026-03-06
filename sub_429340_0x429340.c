// 函数名称: sub_429340
// 虚拟地址: 0x429340
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __fastcallsub_429340(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59d308
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_64 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_4b2440(arg1, sub_427580)
    void* result_3 = sub_426fb0()
    void* eax_3 = sub_437f10(*(data_6d00d8 + 0xbe4))
    int32_t ecx_2 = data_6d00ac
    char var_2d_1
    
    if (ecx_2 != 1)
        var_2d_1 = 0
    
    if (ecx_2 == 1 || ecx_2 == 2)
        var_2d_1 = 1
    
    sub_429110(arg1, result_3)
    
    if (var_2d_1 == 0)
        goto label_429489
    
    int32_t var_68_1 = 0xffffffff
    sub_4a8570(arg1)
    int32_t eax_4 = *(result_3 + 0xf8)
    char const* const var_28 = "30 Minutes"
    char const* const var_24_1 = "1 Week"
    char const* const var_20_1 = "1 Month"
    char const* const var_1c_1 = "Unlimited"
    char const* const var_18_1 = "3 Days"
    char* edx_2 = (&var_28)[eax_4]
    
    if (edx_2 == 0)
        sub_489550(eax_4, &data_5b2591, "str", "d:\ax\trunk\ax2017\engine\xstring.cpp", 0x94, 
            "XString::XString")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    char* const result_2
    sub_48a2c0(&result_2, edx_2)
    int32_t var_8_1 = 0
    sub_4a8930(&result_2, &data_62b3bc, arg1, &result_2, 0xffffffff)
    int32_t var_8_2 = 1
    
    if (data_aca1f4 != 0)
        char* result_4 = result_2
        
        if (result_4 != 0 && *result_4 != 0)
            char* eax_6 = sub_48a080(&result_2)
            int32_t temp1_1 = *(eax_6 + 4)
            *(eax_6 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_4984f0(eax_6, *(eax_6 + 0xc) + 0x10)
                result_2 = &data_5b2591
    
    int32_t var_8_3 = 0xffffffff
    int32_t edi_1 = data_6d00ac
    
    if (edi_1 == 1)
        goto label_429494
    
    sub_42eeb0(arg1, result_3)
    label_429489:
    edi_1 = data_6d00ac
    void* result_6
    
    if (edi_1 == 1)
    label_429494:
        result_6 = result_3
        *(result_6 + 0x1c) = 1
        void* esi_1 = result_6 + 0x20
        int32_t ecx_12 = 0
        *esi_1 = *(sub_437f10(*(data_6d00d8 + 0xbe4)) + 0x230)
        
        if (arg2 s> 0)
            int32_t i_4 = arg2
            int32_t i
            
            do
                int32_t eax_10 = *(esi_1 - 4)
                
                if (eax_10 != 0 && (eax_10 != 2 || *esi_1 != 1))
                    ecx_12 += 1
                
                esi_1 += 0x2c
                i = i_4
                i_4 -= 1
            while (i != 1)
        
        if (arg2 s> 0 && ecx_12 s>= 2)
            goto label_42959d
        
        *(result_6 + 0x48) = 2
        *(result_6 + 0x4c) = 0
        _strncpy(result_6 + 0x34, "REQUIRED", 0x10)
        *(result_6 + 0x43) = 0
        goto label_429594
    
    result_6 = result_3
    
    if (edi_1 != 0)
        goto label_42959d
    
    *(result_6 + 0x1c) = 0x3e8
    void* esi_3 = result_6 + 0x20
    int32_t ecx_15 = 0
    *esi_3 = *(sub_437f10(*(data_6d00d8 + 0xbe4)) + 0x240)
    
    if (arg2 s> 0)
        int32_t i_5 = arg2
        int32_t i_1
        
        do
            int32_t eax_14 = *(esi_3 - 4)
            
            if (eax_14 != 0 && (eax_14 != 2 || *esi_3 != 1))
                ecx_15 += 1
            
            esi_3 += 0x2c
            i_1 = i_5
            i_5 -= 1
        while (i_1 != 1)
    
    char* const var_34
    int32_t edi_2
    
    if (arg2 s> 0 && ecx_15 s>= 2)
        edi_2 = arg1
    else
        *(result_6 + 0x48) = 3
        *(result_6 + 0x4c) = 0
        _strncpy(result_6 + 0x34, "Easy AI", 0x10)
        *(result_6 + 0x43) = 0
        *(result_6 + 0x44) = 0xd8
    label_429594:
        edi_1 = data_6d00ac
    label_42959d:
        
        if (edi_1 != 2)
            edi_2 = arg1
        else
            int32_t eax_15 = *(result_6 + 0xfc)
            
            if (eax_15 == edi_1)
                sub_48a2c0(&result_2, "Game Completed")
            else if (eax_15 == 1)
                sub_48a2c0(&result_2, "Game in Progress")
            else if (eax_15 != 0)
                sub_48a2c0(&result_2, &data_5b2591)
            else
                int32_t eax_17
                int32_t edx_7
                edx_7:eax_17 = muls.dp.d(0x10624dd3, sub_498220(result_6))
                int32_t edx_8 = edx_7 s>> 6
                int32_t edx_10 = *(result_6 + 0x104) - ((edx_8 u>> 0x1f) + edx_8)
                
                if (edx_10 s> 0)
                    sub_428b20(&var_34, edx_10)
                    int32_t var_8_4 = 2
                    char* const ecx_19 = &data_5b2591
                    char* const eax_21 = var_34
                    
                    if (eax_21 != 0)
                        ecx_19 = eax_21
                    
                    char* const var_68_2 = ecx_19
                    sub_48a9d0(&result_2, "Formation expires in{br}%s")
                    int32_t var_8_5 = 3
                    
                    if (data_aca1f4 != 0)
                        char* const eax_22 = var_34
                        
                        if (eax_22 != 0 && *eax_22 != 0)
                            char* eax_23 = sub_48a080(&var_34)
                            int32_t temp7_1 = *(eax_23 + 4)
                            *(eax_23 + 4) -= 1
                            
                            if (temp7_1 == 1)
                                sub_4984f0(eax_23, *(eax_23 + 0xc) + 0x10)
                                var_34 = &data_5b2591
                else
                    sub_48a2c0(&result_2, "Formation Expired")
            
            edi_2 = arg1
            int32_t var_68_3 = 0xffffffff
            int32_t var_8_6 = 4
            sub_4a8570(edi_2)
            sub_4a8930(&result_2, &data_62bb2c, edi_2, &result_2, 0xffffffff)
            int32_t var_8_7 = 5
            
            if (data_aca1f4 != 0)
                char* const result_5 = result_2
                
                if (result_5 != 0 && *result_5 != 0)
                    char* eax_25 = sub_48a080(&result_2)
                    int32_t temp5_1 = *(eax_25 + 4)
                    *(eax_25 + 4) -= 1
                    
                    if (temp5_1 == 1)
                        sub_4984f0(eax_25, *(eax_25 + 0xc) + 0x10)
                        result_2 = &data_5b2591
            
            int32_t var_8_8 = 0xffffffff
    
    int32_t eax_26 = sub_427230(result_6)
    
    if (eax_26 u> 8)
        sub_489550(eax_26, &data_5b2591, "Halt", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", 0x835, 
            "GameCreateGameUpdate")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    switch (eax_26)
        case 0
            int32_t var_68_4 = 0xffffffff
            sub_4a8570(edi_2)
            int32_t esi_5 = 0
            void* ecx_29 = result_6 + 0x20
            int32_t edx_17 = 0
            int32_t edi_3 = 0
            int32_t i_6 = 5
            int32_t i_2
            
            do
                int32_t eax_27 = *(ecx_29 - 4)
                
                if (eax_27 s> 3)
                    if (eax_27 - 0x3e8 u<= 1)
                        esi_5 += 1
                else if (eax_27 == 3)
                    edi_3 += 1
                else if (eax_27 == 1)
                    esi_5 += 1
                else if (eax_27 == 2)
                    int32_t eax_30 = edx_17 + 1
                    
                    if (*ecx_29 != 0)
                        eax_30 = edx_17
                    
                    edx_17 = eax_30
                
                ecx_29 += 0x2c
                i_2 = i_6
                i_6 -= 1
            while (i_2 != 1)
            int32_t eax_32 = edx_17 + esi_5
            
            if (var_2d_1 == i_6.b)
                eax_32 = edi_3 + esi_5
            
            edi_2 = arg1
            eax_32.b = eax_32 s>= 2
            
            if (eax_32.b == 0)
                int32_t var_68_5 = 0xffffffff
                sub_4a8570(edi_2)
            
            result_6 = result_3
        case 6, 7
            int32_t var_68_6 = 0xffffffff
            sub_4a8570(edi_2)
            int32_t var_6c_2 = 0xffffffff
            sub_4a8570(edi_2)
    
    char* result = sub_428880(result_6, arg2)
    int32_t ebx_1 = 0
    char* result_1 = result
    
    if (arg2 s> 0)
        while (true)
            if (data_6d00ac == 2)
                result = result_3
            
            if (data_6d00ac != 2 || ebx_1 s< *(result + 0xe4))
                int32_t* esi_9 = result_3 + 8 + ebx_1 * 0x2c
                bool cond:3_1
                
                if (var_2d_1 == 0)
                    if (esi_9[5] == 0x3e8)
                        cond:3_1 = esi_9[6] != *(eax_3 + 0x240)
                    label_42984c:
                        
                        if (not(cond:3_1))
                            char* ecx_36 = &data_5b2591
                            char* eax_37 = *eax_3
                            
                            if (eax_37 != 0)
                                ecx_36 = eax_37
                            
                            _strncpy(esi_9, ecx_36, 0x10)
                            *(esi_9 + 0xf) = 0
                            esi_9[4] = *(eax_3 + 8)
                else if (esi_9[5] == 1)
                    cond:3_1 = esi_9[6] != *(eax_3 + 0x230)
                    goto label_42984c
                char const* const var_6c_4
                int32_t var_68_7
                int32_t* ecx_37
                
                if (arg2 == 4)
                    var_68_7 = ebx_1
                    ecx_37 = ebx_1 * 0x24 + &data_1511fb0
                    var_6c_4 = "tblPlayers"
                else
                    if (arg2 != 5)
                        sub_489550(arg2 - 5, &data_5b2591, "Halt", 
                            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", 0x6ca, 
                            "GetTablePlayer")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_489700()
                        noreturn
                    
                    if (ebx_1 != 0)
                        var_68_7 = ebx_1 - 1
                        ecx_37 = (ebx_1 - 1) * 0x24 + &data_1512088
                        var_6c_4 = "tblPlayers"
                    else
                        var_68_7 = ebx_1
                        var_6c_4 = "tblPlayerMe"
                        ecx_37 = &data_1512064
                
                result = sub_426ed0(ecx_37, edi_2, var_6c_4, var_68_7)
                result_2 = result
                
                if (result != 0)
                    int32_t var_50
                    int32_t* var_68_8 = &var_50
                    char* var_48
                    sub_421310(&var_50, result_3, &var_48, esi_9)
                    int32_t var_8_9 = 6
                    int32_t eax_47 = var_50
                    char* esi_10 = var_48
                    
                    if (eax_47 != 0xffffffff)
                        *((ebx_1 << 2) + &data_6ceddc) = eax_47
                        char* ecx_39 = &data_5b2591
                        
                        if (esi_10 != 0)
                            ecx_39 = esi_10
                        
                        void* edx_29 = (ebx_1 << 8) - ecx_39 + 0x1512140
                        void* eax_50
                        
                        do
                            eax_50.b = *ecx_39
                            ecx_39 = &ecx_39[1]
                            *(edx_29 + ecx_39 - 1) = eax_50.b
                        while (eax_50.b != 0)
                    
                    int32_t eax_52 = ebx_1 << 8
                    
                    if (eax_52 == 0xfeaedec0)
                        sub_489550(eax_52, &data_5b2591, "str", 
                            "d:\ax\trunk\ax2017\engine\xstring.cpp", 0x94, "XString::XString")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_489700()
                        noreturn
                    
                    sub_48a2c0(&var_34, eax_52 + 0x1512140)
                    var_8_9.b = 7
                    sub_4a8930(&var_34, &data_62b18c, result_2, &var_34, 0xffffffff)
                    var_8_9.b = 8
                    
                    if (data_aca1f4 != 0)
                        char* eax_54 = var_34
                        
                        if (eax_54 != 0 && *eax_54 != 0)
                            char* eax_55 = sub_48a080(&var_34)
                            int32_t temp10_1 = *(eax_55 + 4)
                            *(eax_55 + 4) -= 1
                            
                            if (temp10_1 == 1)
                                sub_4984f0(eax_55, *(eax_55 + 0xc) + 0x10)
                                var_34 = &data_5b2591
                    
                    var_8_9.b = 6
                    int32_t eax_56 = esi_9[5]
                    
                    if (eax_56 s> 0x3e9)
                    label_429beb:
                        sub_489550(eax_56, &data_5b2591, "Halt", 
                            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", 0x873, 
                            "GameCreateGameUpdate")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_489700()
                        noreturn
                    
                    char* const result_7
                    
                    if (eax_56 s>= 0x3e8)
                        result_7 = result_2
                        int32_t var_68_17 = 0xffffffff
                        sub_4a8570(result_7)
                    else
                        if (eax_56 u> 3)
                            goto label_429beb
                        
                        switch (eax_56)
                            case 0
                                if (data_6d00b8 == 0 || data_6d00bc != ebx_1)
                                    result_7 = result_2
                                else
                                    result_7 = result_2
                                    int32_t var_68_16 = 0xffffffff
                                    sub_4a8570(result_7)
                            case 1
                                result_7 = result_2
                                
                                if (esi_9[8] == 1)
                                    int32_t var_68_10 = 0xffffffff
                                    sub_4a8570(result_7)
                                
                                int32_t var_68_11 = 0xffffffff
                                sub_4a8570(result_7)
                            case 2
                                int32_t var_68_12 = 0xffffffff
                                sub_4a8570(result_2)
                                char* ecx_49 = &data_5b2591
                                
                                if (esi_10 != 0)
                                    ecx_49 = esi_10
                                
                                void* edi_5 = eax_52 + 0x1512140 - ecx_49
                                char i_3
                                
                                do
                                    i_3 = *ecx_49
                                    ecx_49 = &ecx_49[1]
                                    *(edi_5 + ecx_49 - 1) = i_3
                                while (i_3 != 0)
                                result_7 = result_2
                            case 3
                                result_7 = result_2
                                int32_t var_68_9 = 0xffffffff
                                sub_4a8570(result_7)
                    
                    if (data_6d00b8 == 1 && data_6d00bc == ebx_1)
                        int32_t var_68_13 = 0xffffffff
                        sub_4a8570(result_7)
                    
                    int32_t ecx_51 = *((ebx_1 << 2) + &data_6ceddc)
                    
                    if (ecx_51 != 0xffffffff)
                        sub_465a40(ecx_51)
                        int32_t var_68_14 = 0xffffffff
                        sub_4a8570(result_7)
                    
                    sub_428c90(arg1)
                    result = data_6d00ac
                    
                    if ((result == 1 || result == 0) && ebx_1 != 0)
                        result = esi_9[5]
                        int32_t var_68_15
                        
                        if (result != 0 && result_1 s> 2)
                            var_68_15 = 0xffffffff
                            result = sub_4a8570(result_7)
                        else if (result == 2 && esi_9[6] == 1)
                            var_68_15 = 0xffffffff
                            result = sub_4a8570(result_7)
                    
                    int32_t var_8_10 = 9
                    
                    if (data_aca1f4 != 0 && esi_10 != 0 && *esi_10 != 0)
                        result = sub_48a080(&var_48)
                        int32_t temp11_1 = *(result + 4)
                        *(result + 4) -= 1
                        
                        if (temp11_1 == 1)
                            result = sub_4984f0(result, *(result + 0xc) + 0x10)
                            var_48 = &data_5b2591
                    
                    int32_t var_8_11 = 0xffffffff
            else
                *((ebx_1 << 2) + &data_6ceddc) = 0xffffffff
            
            ebx_1 += 1
            
            if (ebx_1 s>= arg2)
                break
            
            edi_2 = arg1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
