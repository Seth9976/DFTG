// 函数名称: sub_47a510
// 虚拟地址: 0x47a510
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __convention("regparm")sub_47a510(int32_t arg1, int32_t arg2, int32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6)
{
    // 第一条实际指令: void var_294
    void var_294
    uint32_t eax_1 = __security_cookie ^ &var_294
    uint32_t var_c = eax_1
    int32_t var_2a8_1
    char const* const var_2a4_1
    char* ecx
    
    if (arg2 != 0xffffffff)
        var_2a4_1 = "ProcessNotifyUIPlayerNone"
        var_2a8_1 = 0x7e56
        ecx = "arg_who == PLAYER_NONE"
    else if (arg3 u> 0x42)
    label_47ae67:
        var_2a4_1 = "ProcessNotifyUIPlayerNone"
        var_2a8_1 = 0x7f84
        ecx = "Halt"
    else
        eax_1 = zx.d(lookup_table_47aecc[arg3])
        
        switch (eax_1)
            case 0
                data_632550 = arg4
                data_632554 = arg5
                eax_1 = sub_425e70()
                uint32_t edi_1 = eax_1
                int32_t esi_1 = 0
                
                if (edi_1 s> 0)
                    do
                        eax_1 = sub_452b90(esi_1)
                        esi_1 += 1
                        *(eax_1 + 0x10) = 0xb
                        *(eax_1 + 0x14) = 1
                    while (esi_1 s< edi_1)
                
                @__security_check_cookie@4(var_c ^ &var_294)
                return eax_1
            case 1
                data_a755ec = 1
                data_a755e8 = 1
                data_a755f0 = 0
                @__security_check_cookie@4(var_c ^ &var_294)
                return eax_1
            case 2
                data_632590 = 4
                data_632594 = 0xffffffff
                void* eax_4 = sub_425e70()
                void* edi_2 = eax_4
                int32_t esi_2 = 0
                
                if (edi_2 s> 0)
                    do
                        eax_4 = sub_452b90(esi_2)
                        esi_2 += 1
                        *(eax_4 + 0x10) = 0x5b
                        *(eax_4 + 0x14) = 1
                    while (esi_2 s< edi_2)
                
                data_70916c = 0xffffffff
                @__security_check_cookie@4(var_c ^ &var_294)
                return eax_4
            case 3
                *((data_63258c << 2) + &data_632578) = arg4
                data_63258c += 1
                
                if (data_632560 != 0)
                    sub_477410()
                
                uint32_t (* eax_13)[0x4] = sub_481490(&data_62d6c4)
                *eax_13 = 1
                (*eax_13)[0xb] = 0xffffffff
                (*eax_13)[2] = 1
                (*eax_13)[6] = 0xffffffff
                (*eax_13)[3] = 0
                uint32_t eax_14 = eax_13[1][0]
                
                if (eax_14 != 0)
                    (*eax_13)[5] = eax_14
                    eax_13[1][0] = 0
                
                (*eax_13)[3] = arg5
                (*eax_13)[6] = 0xffffffff
                uint32_t eax_16 = eax_13[1][0]
                
                if (eax_16 != 0x10)
                    (*eax_13)[5] = eax_16
                    eax_13[1][0] = 0x10
                
                int32_t var_27c = 0
                uint32_t var_274[0x5][0x4]
                _memset(&var_274, 0, 0x8c)
                int32_t var_284 = 0x11
                int32_t var_288 = 0xffffffff
                int32_t var_280 = 0xffffffff
                char ebx_4 = arg6.b
                int32_t var_278 = 0xffffffff
                void var_b0
                __builtin_memcpy(&var_b0, &var_288, 0xa0)
                int32_t var_1e8 = 1
                (*eax_13)[0x1aa] = 0
                void var_184
                __builtin_memcpy(&var_184, &var_288, 0xa0)
                __builtin_memcpy(&eax_13[7], &var_1e8, 0x104)
                __builtin_memcpy(&(*eax_13)[0x5d], &var_1e8, 0x104)
                sub_452980(&eax_13[7], &var_b0, &eax_13[7], 3, ebx_4)
                data_632560 = (*eax_13)[0x22a]
                
                if (ebx_4 == 0)
                    int32_t var_e0[0xc]
                    sub_4c5670(data_126be10, &var_e0)
                    sub_4c5920(&var_e0)
                
                void* eax_20 = data_a755e8 * 0x15e7c
                *(eax_20 + 0x7091c0) = arg4
                @__security_check_cookie@4(var_c ^ &var_294)
                return eax_20
            case 4
                eax_1 = arg4
                
                if (eax_1 u> 7)
                    @__security_check_cookie@4(var_c ^ &var_294)
                    return eax_1
                
                int32_t esi_3
                
                switch (eax_1)
                    case 0
                        esi_3 = 2
                    case 1
                        esi_3 = 3
                    case 2
                        esi_3 = 4
                    case 3
                        esi_3 = 5
                    case 4
                        esi_3 = 6
                    case 5
                        esi_3 = 7
                    case 6
                        @__security_check_cookie@4(var_c ^ &var_294)
                        return eax_1
                    case 7
                        esi_3 = 9
                
                if (esi_3 != data_709150)
                    data_709150 = esi_3
                    
                    if (arg6.b == 0)
                        sub_4773a0()
                        data_709168 = 1
                        data_70915c = 1
                    else
                        data_70914c = esi_3
                    
                    goto label_47a6c4
                
                if (esi_3 == 2)
                label_47a6c4:
                    data_70916c = esi_3
                    int32_t esi_4 = 0
                    eax_1 = sub_425e70()
                    
                    if (eax_1 s<= 0)
                        @__security_check_cookie@4(var_c ^ &var_294)
                        return eax_1
                    
                    int32_t eax_8
                    
                    do
                        void* eax_5 = sub_452b90(esi_4)
                        int32_t* var_290_1 = &data_62d6c4
                        int32_t* i_1 = nullptr
                        sub_481430(&data_62d6c4, &i_1)
                        
                        for (int32_t* i = i_1; i != 0xffffffff; i = i_1)
                            if (*i == 1 && i[6] == esi_4)
                                int32_t eax_7 = i[4] - 0xe
                                
                                if (eax_7 u<= 1)
                                    int32_t var_2a4_3 = 0
                                    sub_461ad0(eax_7, i, eax_5, arg6)
                            
                            sub_481430(var_290_1, &i_1)
                        
                        esi_4 += 1
                        eax_8 = sub_425e70()
                    while (esi_4 s< eax_8)
                    
                    @__security_check_cookie@4(var_c ^ &var_294)
                    return eax_8
                
                var_2a4_1 = "OpponentMovesRevealUntil_Previous"
                var_2a8_1 = 0x7ae2
                ecx = "turn == TURN_ASSIGN"
            case 5
                eax_1 = arg4
                
                if (eax_1 != 0 && eax_1 != 7)
                    data_632594 = eax_1
                    eax_1 -= 1
                    data_632590 = 5
                    
                    if (eax_1 u<= 4)
                        int32_t edi_4
                        
                        switch (eax_1)
                            case 0
                                edi_4 = 0x6c
                            case 1
                                edi_4 = 0x6d
                            case 2
                                edi_4 = 0x6e
                            case 3
                                edi_4 = 0x6f
                            case 4
                                edi_4 = 0x70
                        
                        int32_t esi_5 = 0
                        eax_1 = sub_425e70()
                        
                        if (eax_1 s> 0)
                            int32_t eax_10
                            
                            do
                                void* eax_9 = sub_452b90(esi_5)
                                esi_5 += 1
                                *(eax_9 + 0x10) = edi_4
                                *(eax_9 + 0x14) = 1
                                eax_10 = sub_425e70()
                            while (esi_5 s< eax_10)
                            
                            @__security_check_cookie@4(var_c ^ &var_294)
                            return eax_10
                
                @__security_check_cookie@4(var_c ^ &var_294)
                return eax_1
            case 6
                char ebx_2 = arg6.b
                
                if (arg4 == 1)
                    arg3.b = ebx_2
                    sub_477480(arg3)
                
                eax_1 = sub_45d460(arg4)
                
                if (eax_1.b != 0)
                    eax_1 = arg4 - 1
                    
                    if (eax_1 u<= 4)
                        uint32_t ecx_17
                        ecx_17.b = ebx_2
                        int32_t eax_11 = sub_477720(ecx_17, arg4)
                        @__security_check_cookie@4(var_c ^ &var_294)
                        return eax_11
                
                @__security_check_cookie@4(var_c ^ &var_294)
                return eax_1
            case 7
                int32_t esi_15 = 0
                int32_t eax_32
                int32_t ecx_49
                eax_32, ecx_49 = sub_425e70()
                
                if (eax_32 s> 0)
                    int32_t eax_34
                    
                    do
                        void* eax_33 = sub_452b90(esi_15)
                        esi_15 += 1
                        *(eax_33 + 0xbe0) = 0xffffffff
                        eax_34, ecx_49 = sub_425e70()
                    while (esi_15 s< eax_34)
                
                char ebx_6 = arg6.b
                data_63258c = 0
                
                if (ebx_6 != 0)
                    ecx_49.b = ebx_6
                    sub_477a10(ecx_49)
                    sub_477410()
                
                ecx_49.b = ebx_6
                sub_477a10(ecx_49)
                sub_477410()
                void* eax_35 = data_632804
                
                if (*(eax_35 + 0xc3c) != 0)
                    data_709150 = 0xa
                    
                    if (ebx_6 != 0)
                        data_70914c = 0xa
                        @__security_check_cookie@4(var_c ^ &var_294)
                        return eax_35
                    
                    sub_4773a0()
                    int32_t eax_38 = sub_4892e0("take opp lock")
                    data_709168 = 1
                    data_70915c = 1
                    @__security_check_cookie@4(var_c ^ &var_294)
                    return eax_38
                
                data_632590 = 3
                int32_t esi_16 = 0
                data_632594 = 0xffffffff
                eax_1 = sub_425e70()
                
                if (eax_1 s<= 0)
                    @__security_check_cookie@4(var_c ^ &var_294)
                    return eax_1
                
                int32_t eax_37
                
                do
                    void* eax_36 = sub_452b90(esi_16)
                    esi_16 += 1
                    *(eax_36 + 0x10) = 0xd
                    *(eax_36 + 0x14) = 1
                    eax_37 = sub_425e70()
                while (esi_16 s< eax_37)
                
                @__security_check_cookie@4(var_c ^ &var_294)
                return eax_37
            case 8
                sub_4892e0("notify game over")
                data_632a09:1.b = 1
                int32_t esi_17 = 0
                
                if (sub_425e70() s> 0)
                    int32_t eax_41
                    
                    do
                        void* eax_40 = sub_452b90(esi_17)
                        esi_17 += 1
                        *(eax_40 + 0x10) = 0x6b
                        *(eax_40 + 0x14) = 1
                        eax_41 = sub_425e70()
                    while (esi_17 s< eax_41)
                
                if (arg6.b == 0)
                    int32_t* eax_43 = sub_47f910(0)
                    @__security_check_cookie@4(var_c ^ &var_294)
                    return eax_43
                
                int32_t* eax_42 = sub_47f610()
                data_6329fc = 0
                data_6329f8 = 3
                data_632840 = 1
                data_62b220 = 0x24
                data_62b1d0 = 0x23
                @__security_check_cookie@4(var_c ^ &var_294)
                return eax_42
            case 9
                eax_1 = arg4
                data_632590 = eax_1
                data_632594 = arg5
                
                if (eax_1 == 3)
                    int32_t esi_8 = 0
                    eax_1 = sub_425e70()
                    
                    if (eax_1 s<= 0)
                        @__security_check_cookie@4(var_c ^ &var_294)
                        return eax_1
                    
                    int32_t eax_24
                    
                    do
                        void* eax_23 = sub_452b90(esi_8)
                        esi_8 += 1
                        *(eax_23 + 0x10) = 0xd
                        *(eax_23 + 0x14) = 1
                        eax_24 = sub_425e70()
                    while (esi_8 s< eax_24)
                    
                    @__security_check_cookie@4(var_c ^ &var_294)
                    return eax_24
                
                uint32_t ecx_30
                
                if (eax_1 == 2)
                    ecx_30.b = arg6.b
                    sub_47a4b0(ecx_30.b)
                    int32_t esi_9 = 0
                    eax_1 = sub_425e70()
                    
                    if (eax_1 s<= 0)
                        @__security_check_cookie@4(var_c ^ &var_294)
                        return eax_1
                    
                    int32_t eax_26
                    
                    do
                        void* eax_25 = sub_452b90(esi_9)
                        esi_9 += 1
                        *(eax_25 + 0x10) = 0x5a
                        *(eax_25 + 0x14) = 1
                        eax_26 = sub_425e70()
                    while (esi_9 s< eax_26)
                    
                    @__security_check_cookie@4(var_c ^ &var_294)
                    return eax_26
                
                if (eax_1 == 4)
                    int32_t esi_10 = 0
                    eax_1 = sub_425e70()
                    
                    if (eax_1 s<= 0)
                        @__security_check_cookie@4(var_c ^ &var_294)
                        return eax_1
                    
                    int32_t eax_28
                    
                    do
                        void* eax_27 = sub_452b90(esi_10)
                        esi_10 += 1
                        *(eax_27 + 0x10) = 0x5b
                        *(eax_27 + 0x14) = 1
                        eax_28 = sub_425e70()
                    while (esi_10 s< eax_28)
                    
                    @__security_check_cookie@4(var_c ^ &var_294)
                    return eax_28
                
                if (eax_1 != 5)
                    if (eax_1 == 6)
                        char ebx_5 = arg6.b
                        ecx_30.b = ebx_5
                        sub_47a4b0(ecx_30.b)
                        int32_t edi_9 = 0
                        int32_t ecx_43
                        eax_1, ecx_43 = sub_425e70()
                        
                        if (eax_1 s> 0)
                            void* esi_12 = &data_62d6f4
                            
                            do
                                if (esi_12 s< &data_62d6f4)
                                    var_2a4_1 = "RollPlayerGui"
                                    var_2a8_1 = 0x211
                                    ecx = "who >= 0"
                                    goto label_47ae80
                                
                                eax_1 = sub_425e70()
                                
                                if (edi_9 s>= eax_1)
                                    var_2a4_1 = "RollPlayerGui"
                                    var_2a8_1 = 0x212
                                    ecx = "who < RollNumPlayers()"
                                    goto label_47ae80
                                
                                *(esi_12 - 4) = 0x6a
                                edi_9 += 1
                                *esi_12 = 1
                                esi_12 += 0xfb0
                                eax_1, ecx_43 = sub_425e70()
                            while (edi_9 s< eax_1)
                        
                        ecx_43.b = ebx_5
                        sub_477a10(ecx_43)
                        eax_1 = data_632560
                        
                        if (eax_1 != 0)
                            uint32_t ecx_44 = zx.d(eax_1.w)
                            
                            if (ecx_44 u< data_62d6c8)
                                void* esi_14 = ecx_44 * 0x8ac + data_62d6c4
                                
                                if (*(esi_14 + 0x8a8) == eax_1)
                                    if (*(esi_14 + 4) != 0)
                                        sub_49a5a0(esi_14 + 4)
                                    
                                    uint32_t eax_31 = zx.d(*(esi_14 + 0x8a8))
                                    int32_t ecx_46 = data_62d6d0
                                    data_62d6d0 = eax_31
                                    *(esi_14 + 0x8a8) = ecx_46
                                    data_62d6d4 -= 1
                                    data_632560 = 0
                                    @__security_check_cookie@4(var_c ^ &var_294)
                                    return eax_31
                    
                    @__security_check_cookie@4(var_c ^ &var_294)
                    return eax_1
                
                eax_1 = arg5 - 1
                
                if (eax_1 u<= 4)
                    int32_t edi_8
                    
                    switch (eax_1)
                        case 0
                            edi_8 = 0x64
                        case 1
                            edi_8 = 0x66
                        case 2
                            edi_8 = 0x67
                        case 3
                            edi_8 = 0x68
                        case 4
                            edi_8 = 0x69
                    
                    ecx_30.b = arg6.b
                    sub_47a4b0(ecx_30.b)
                    int32_t esi_11 = 0
                    eax_1 = sub_425e70()
                    
                    if (eax_1 s<= 0)
                        @__security_check_cookie@4(var_c ^ &var_294)
                        return eax_1
                    
                    int32_t eax_30
                    
                    do
                        void* eax_29 = sub_452b90(esi_11)
                        esi_11 += 1
                        *(eax_29 + 0x10) = edi_8
                        *(eax_29 + 0x14) = 1
                        eax_30 = sub_425e70()
                    while (esi_11 s< eax_30)
                    
                    @__security_check_cookie@4(var_c ^ &var_294)
                    return eax_30
                
                var_2a4_1 = "ProcessNotifyUIPlayerNone"
                var_2a8_1 = 0x7f27
                ecx = "Halt"
            case 0xa
                int32_t esi_7 = 0
                eax_1 = sub_425e70()
                
                if (eax_1 s<= 0)
                    @__security_check_cookie@4(var_c ^ &var_294)
                    return eax_1
                
                int32_t eax_22
                
                do
                    void* eax_21 = sub_452b90(esi_7)
                    esi_7 += 1
                    *(eax_21 + 0x10) = arg4
                    *(eax_21 + 0x14) = 1
                    eax_22 = sub_425e70()
                while (esi_7 s< eax_22)
                
                @__security_check_cookie@4(var_c ^ &var_294)
                return eax_22
            case 0xb
                goto label_47ae67
    
    label_47ae80:
    sub_489550(eax_1, &data_5b2591, ecx, "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", var_2a8_1, 
        var_2a4_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
