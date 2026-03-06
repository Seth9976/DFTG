// 函数名称: sub_47baa0
// 虚拟地址: 0x47baa0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __convention("regparm")sub_47baa0(int32_t arg1, int32_t* arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, void* arg6, uint32_t arg7, uint32_t arg8)
{
    // 第一条实际指令: void* var_19c
    void* var_19c
    int32_t eax_1 = __security_cookie ^ &var_19c
    char ecx = arg8.b
    uint32_t eax_3 = arg3
    var_19c = arg6
    char const* const var_1b4_8
    int32_t var_1b0_1
    char const* const var_1ac_1
    char* ecx_1
    
    if (arg2 == 0xffffffff)
        var_1ac_1 = "ProcessNotifyUIPlayer"
        var_1b0_1 = 0x8009
        ecx_1 = "who != PLAYER_NONE"
    label_47cd07:
        var_1b4_8 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
    label_47cd11:
        sub_489550(eax_3, &data_5b2591, ecx_1, var_1b4_8, var_1b0_1, var_1ac_1)
        
        if (IsDebuggerPresent() != 1)
            sub_489700()
            noreturn
        
        breakpoint
    
    if (eax_3 u> 0x42)
    label_47ccf8:
        var_1ac_1 = "ProcessNotifyUIPlayer"
        var_1b0_1 = 0x8352
        ecx_1 = "Halt"
        goto label_47cd07
    
    eax_3 = zx.d(lookup_table_47cdd4[eax_3])
    int32_t var_1c0_1
    int32_t var_1c0_16
    int32_t var_1bc_1
    bool var_1bc_17
    int32_t var_1b8_1
    uint32_t var_1b8_20
    int32_t var_1b4_2
    int32_t var_1b4_25
    int32_t var_1b0_3
    char var_1b0_27
    char var_1ac_4
    uint32_t var_1ac_48
    char var_188
    int32_t var_180
    uint32_t var_16c[0x4]
    int32_t var_e0[0xc]
    void var_b0
    int32_t eax_9
    uint32_t eax_119
    uint32_t ecx_200
    int32_t* edx_73
    int32_t* esi_1
    int32_t* esi_23
    uint32_t (* edi_1)[0x4]
    
    switch (eax_3)
        case 0
            var_1ac_1 = "ProcessNotifyUIPlayer"
            var_1b0_1 = 0x8017
            ecx_1 = "Halt"
            goto label_47cd07
        case 1
            var_1ac_1 = "ProcessNotifyUIPlayer"
            var_1b0_1 = 0x8346
            ecx_1 = "Halt"
            goto label_47cd07
        case 2
            edi_1 = sub_45b360(eax_3, arg4, arg2, arg5)
            int32_t* eax_26 = sub_452b90(arg2)
            esi_1 = eax_26
            char ebx_4 = arg8.b
            eax_9 = sub_452a60(sub_45b790(eax_26, edi_1, esi_1, 1, 4), 0xc8, &edi_1[7], ebx_4)
            var_1ac_4 = ebx_4
            var_1b0_3 = 1
            var_1b4_2 = 0
            var_1b8_1 = 5
            var_1bc_1 = 0
            var_1c0_1 = 3
        label_47bbd7:
            eax_3 = sub_4554e0(eax_9, edi_1, esi_1, var_1c0_1, var_1bc_1, var_1b8_1, var_1b4_2, 
                var_1b0_3, var_1ac_4)
            @__security_check_cookie@4(eax_1 ^ &var_19c)
            return eax_3
        case 3
            uint32_t (* eax_28)[0x4] = sub_45b360(eax_3, arg4, arg2, arg6)
            int32_t* edi_4 = eax_28
            uint32_t (* eax_29)[0x4] = sub_45b360(eax_28, arg5, arg2, arg7)
            int32_t* eax_30 = sub_452b90(arg2)
            eax_3 = data_6cfe4c
            
            if (eax_3 == 0)
                goto label_47be82
            
            int32_t* ecx_48 = eax_30
            int32_t var_1ac_16 = 2
            
            if (arg2 != *(eax_3 + 0xa68))
                void* eax_38 =
                    sub_45b790(sub_45b790(eax_3, edi_4, ecx_48, 3, var_1ac_16), eax_29, eax_30, 3, 3)
                @__security_check_cookie@4(eax_1 ^ &var_19c)
                return eax_38
            
            char ebx_5 = arg8.b
            int32_t eax_35 = sub_4554e0(
                sub_452a60(
                    sub_452a60(
                        sub_45b790(sub_45b790(eax_3, edi_4, ecx_48, 1, var_1ac_16), eax_29, eax_30, 1, 
                            3), 
                        0x190, &edi_4[0x1c], ebx_5), 
                    0x190, &eax_29[7], ebx_5), 
                edi_4, eax_30, 3, 0, 5, 0, 1, ebx_5)
            int32_t eax_36 = sub_4554e0(eax_35, eax_29, eax_30, 3, 0, 5, 0, 1, ebx_5)
            @__security_check_cookie@4(eax_1 ^ &var_19c)
            return eax_36
        case 4
            void* eax_142 = sub_452b90(arg2)
            *(eax_142 + 0x300) = arg4
            @__security_check_cookie@4(eax_1 ^ &var_19c)
            return eax_142
        case 5
            void* eax_4 = sub_4781a0(arg2)
            
            if (eax_4.b == 0)
                int32_t ecx_3 = *(arg2 * 0x2d78 + 0x6fae10)
                *(arg2 * 0x2d78 + 0x6fae10) = ecx_3 + 1
                *(arg2 * 0x2d78 + 0x6fadf4 + (ecx_3 << 2) + 4) = arg4
                *(arg2 * 0x2d78 + 0x6fadf4 + (ecx_3 << 2) + 0xc) = arg5
                @__security_check_cookie@4(eax_1 ^ &var_19c)
                return ecx_3 + 1
            
            edi_1 = sub_45b360(eax_4, arg4, arg2, arg5)
            int32_t* eax_7 = sub_452b90(arg2)
            void* ecx_8 = var_19c
            esi_1 = eax_7
            int32_t ebx_1
            ebx_1.b = ecx_8 != 0
            int32_t eax_8
            eax_8.b = ecx_8 != 0
            sub_45b790(eax_8, edi_1, esi_1, ebx_1 + 4, eax_8)
            int32_t edx_5 = 0x320
            
            if (var_19c == 0)
                edx_5 = 0x258
            
            *(edi_1 + 0x6e) = 1
            eax_9 = sub_452a60(0x258, edx_5, &edi_1[7], arg8.b)
            var_1ac_4 = arg8.b
            var_1b0_3 = 0
            var_1b4_2 = 0
            var_1b8_1 = 5
            var_1bc_1 = 0
            var_1c0_1 = ebx_1 + 4
            goto label_47bbd7
        case 6
            int32_t* var_198_1 = sub_452b90(arg2)
            eax_3 = sub_4781a0(arg2)
            
            if (eax_3.b != 0)
            label_47bcb6:
                int32_t* eax_16 = sub_4571c0()
                char ebx_3 = arg8.b
                
                if (eax_16[0xd] != 4)
                    sub_4554e0(sub_454bf0(eax_16, 0, eax_16, 0, ebx_3), eax_16, var_198_1, 4, 0, 5, 0, 
                        0, ebx_3)
                
                *(eax_16 + 0x6e) = 0
                void* eax_18 = sub_4571c0()
                int32_t* esi_3 = eax_18
                
                if (esi_3[0xd] != 5)
                    eax_18 = sub_4554e0(sub_454bf0(eax_18, 1, esi_3, 0, ebx_3), esi_3, var_198_1, 5, 0, 
                        5, 0, 0, ebx_3)
                
                *(esi_3 + 0x6e) = 0
                @__security_check_cookie@4(eax_1 ^ &var_19c)
                return eax_18
            
            if (arg8.b == 1)
                void* ecx_17 = arg2 * 0x2d78
                
                if (*(ecx_17 + 0x6fae10) == 2)
                    void* esi_2 = ecx_17 + 0x6fae04
                    void* eax_11 = ecx_17 + 0x6fae00
                    int32_t ecx_18 = *(ecx_17 + 0x6fadf8)
                    
                    if (ecx_18 == arg4)
                        eax_11 = esi_2
                    
                    if (ecx_18 == arg4)
                        esi_2 = ecx_17 + 0x6fae00
                    
                    int32_t edi_2 = *eax_11
                    int32_t eax_12 = *esi_2
                    int32_t* eax_13 = sub_45b360(eax_12, arg4, arg2, eax_12)
                    uint32_t (* eax_15)[0x4] =
                        sub_45b360(sub_45b790(eax_13, eax_13, var_198_1, 4, 0), arg5, arg2, edi_2)
                    sub_45b790(eax_15, eax_15, var_198_1, 5, 1)
                    goto label_47bcb6
                
                var_1ac_1 = "ProcessNotifyUIPlayer"
                var_1b0_1 = 0x8052
                ecx_1 = "turnBuffer.setup.numTiles == 2"
            else
                var_1ac_1 = "ProcessNotifyUIPlayer"
                var_1b0_1 = 0x804f
                ecx_1 = "instant == true"
            
            goto label_47cd07
        case 7
            int32_t* eax_85 = sub_452b90(arg2)
            int32_t eax_86 = sub_453650(eax_85)
            int32_t eax_87
            
            if (eax_86 != 3)
                eax_87 = sub_453650(eax_85)
            
            if ((eax_86 == 3 || eax_87 == 2) && arg8.b == 0)
                int32_t ecx_141 = eax_85[0x39b]
                eax_85[0x39b] = ecx_141 + 1
                eax_85[ecx_141 + 0x39c] = arg4
                eax_85[ecx_141 + 0x3c4] = arg5
                @__security_check_cookie@4(eax_1 ^ &var_19c)
                return ecx_141 + 1
            
            eax_3 = sub_457200(arg2, arg4)
            uint32_t edi_15 = eax_3
            
            if (arg8.b != 0)
            label_47c4dc:
                *(edi_15 + 0xc) = arg5
                *(edi_15 + 0x6e) = 1
                @__security_check_cookie@4(eax_1 ^ &var_19c)
                return eax_3
            
            eax_3 = data_6cfe4c
            
            if (eax_3 == 0)
                goto label_47be82
            
            if (arg2 != *(eax_3 + 0xa68))
                goto label_47c4dc
            
            sub_45e560(eax_3, edi_15, eax_85, arg5, 0)
            data_126be0c
            int32_t eax_89 = sub_4c5ce0()
            *(edi_15 + 0x6e) = 1
            @__security_check_cookie@4(eax_1 ^ &var_19c)
            return eax_89
        case 8
            int32_t* eax_105 = sub_457200(arg2, arg5)
            *(eax_105 + 0x21) = 1
            void* eax_106 = sub_452b90(arg2)
            *(eax_106 + 0xbe0) = arg4
            *((data_63258c << 2) + &data_632578) = arg4
            data_63258c += 1
            *(eax_105 + 0x6e) = 0
            @__security_check_cookie@4(eax_1 ^ &var_19c)
            return eax_106
        case 9
            int32_t* eax_107 = sub_457200(arg2, arg4)
            int32_t eax_108 = sub_45bf60(arg5, var_19c)
            eax_3 = data_6cfe4c
            
            if (eax_3 == 0)
                goto label_47be82
            
            var_188.d = *(eax_3 + 0xa68)
            uint32_t eax_110 = sub_452b90(arg2)
            int32_t eax_111
            eax_111.b = arg2 != var_188.d
            uint32_t eax_113 = zx.d(*(eax_107 + 0x21))
            uint32_t eax_114 = sub_45a830(eax_113, eax_107, eax_110, eax_108, eax_113.b, 1, 
                (eax_111 << 2) + 1, 1, arg8)
            *(eax_107 + 0x6e) = 0
            @__security_check_cookie@4(eax_1 ^ &var_19c)
            return eax_114
        case 0xa
            @__security_check_cookie@4(eax_1 ^ &var_19c)
            return eax_3
        case 0xb
            if (ecx == 0)
                @__security_check_cookie@4(eax_1 ^ &var_19c)
                return eax_3
            
            void* esi_25 = data_6cfe4c
            
            if (esi_25 == 0)
            label_47be82:
                var_1ac_1 = "GetClient"
                var_1b0_1 = 0x75
                var_1b4_8 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
                ecx_1 = "gClient"
                goto label_47cd11
            
            int32_t esi_26 = *(esi_25 + 0xa68)
            int32_t* eax_124 = sub_457200(arg2, arg4)
            eax_119 = sub_452b90(arg2)
            edx_73 = eax_124
            ecx_200 = eax_119
            
            if (arg2 != esi_26)
            label_47c84a:
                int32_t var_1ac_50 = 1
                uint32_t eax_125 = sub_461ad0(eax_119, edx_73, ecx_200, arg8)
                @__security_check_cookie@4(eax_1 ^ &var_19c)
                return eax_125
            
            var_1ac_48 = arg8
            var_1b0_27 = 1
            var_1b4_25 = 5
            var_1b8_20 = 1
            var_1bc_17 = false
            var_1c0_16 = 0xf
            goto label_47c77d
        case 0xc
            if (ecx == 0)
                @__security_check_cookie@4(eax_1 ^ &var_19c)
                return eax_3
            
            void* esi_27 = data_6cfe4c
            
            if (esi_27 == 0)
                goto label_47be82
            
            int32_t esi_28 = *(esi_27 + 0xa68)
            int32_t* eax_126 = sub_457200(arg2, arg4)
            eax_119 = sub_452b90(arg2)
            edx_73 = eax_126
            ecx_200 = eax_119
            
            if (arg2 != esi_28)
                goto label_47c84a
            
            var_1ac_48 = arg8
            var_1b0_27 = 1
            var_1b4_25 = 5
            var_1b8_20 = 1
            var_1bc_17 = false
            var_1c0_16 = 0xe
            goto label_47c77d
        case 0xd
            uint32_t (* eax_62)[0x4] = sub_457110(arg4, arg2)
            
            if (eax_62 == 0)
                eax_62 = sub_45b360(eax_62, arg4, arg2, arg5)
            
            int32_t* eax_63 = sub_452b90(arg2)
            char ebx_12 = arg8.b
            uint32_t eax_64 = sub_4554e0(eax_63, eax_62, eax_63, 1, 1, 5, 0, 0, ebx_12)
            
            if (ebx_12 != 0)
                if ((*eax_62)[1] != 0)
                    sub_49a5a0(&(*eax_62)[1])
                
                eax_64 = zx.d((*eax_62)[0x22a].w)
                uint32_t ecx_104 = data_62d6d0
                data_62d6d0 = eax_64
                (*eax_62)[0x22a] = ecx_104
                data_62d6d4 -= 1
                data_632554 += 1
            
            *(eax_62 + 0x6d) = 1
            @__security_check_cookie@4(eax_1 ^ &var_19c)
            return eax_64
        case 0xe
            uint32_t (* eax_65)[0x4] = sub_45b360(eax_3, arg4, arg2, arg5)
            int32_t* edi_11 = sub_452b90(arg2)
            int32_t ecx_109
            ecx_109.b = data_6cedf0 != 1
            data_6cedf0 = ecx_109
            void* eax_67 = sub_46a6a0()
            int32_t ecx_110 = data_6cedf0
            int32_t esi_13 = 4
            
            if (eax_67 != 0)
                ecx_110 = 0
            
            data_6cedf0 = ecx_110
            
            if (ecx_110 == 1)
                esi_13 = 5
            
            eax_3 = sub_4554e0(sub_45b790(5, eax_65, edi_11, 1, ecx_110), eax_65, edi_11, esi_13, 2, 5, 
                0, 0, arg8.b)
            
            if (arg8.b != 0)
                @__security_check_cookie@4(eax_1 ^ &var_19c)
                return eax_3
            
            data_126be68
            int32_t eax_69 = sub_4c5ce0()
            @__security_check_cookie@4(eax_1 ^ &var_19c)
            return eax_69
        case 0xf
            int32_t* eax_70 = sub_4571c0()
            void* eax_71 = sub_452b90(arg2)
            void* var_18c_1 = eax_71
            void* eax_72 = var_19c
            int32_t edx_45
            edx_45.b = eax_72 != 0
            
            if (arg5 != 0)
                var_18c_1 = eax_71
            
            int32_t ebx_14
            ebx_14.b = eax_72 == 0
            int32_t edx_46
            edx_46.b = arg5 != 0
            sub_454bf0(eax_72, edx_46, eax_70, 0, ecx)
            int32_t eax_73
            eax_73.b = arg5 != 0
            int32_t eax_75 = sub_4554e0(eax_73 + 4, eax_70, var_18c_1, eax_73 + 4, (ebx_14 << 1) + 1, 
                0, 0, edx_45, arg8.b)
            @__security_check_cookie@4(eax_1 ^ &var_19c)
            return eax_75
        case 0x10
            int32_t* eax_102 = sub_457200(arg2, arg4)
            uint32_t eax_103 = sub_452b90(arg2)
            uint32_t eax_104 = sub_45a830(eax_103, eax_102, eax_103, 5, false, 1, 5, 1, arg8)
            @__security_check_cookie@4(eax_1 ^ &var_19c)
            return eax_104
        case 0x11
            int32_t* eax_99 = sub_457200(arg2, arg4)
            uint32_t eax_100 = sub_452b90(arg2)
            uint32_t eax_101 = sub_45a830(eax_100, eax_99, eax_100, 6, false, 1, 5, 1, arg8)
            @__security_check_cookie@4(eax_1 ^ &var_19c)
            return eax_101
        case 0x12
            int32_t* eax_127 = sub_457200(arg2, arg4)
            eax_3 = sub_452b90(arg2)
            var_188.d = eax_3
            
            if ((*(arg2 * 0x1bc + data_632804 + (arg4 << 3) + 0x2b) & 2) != 0)
                var_1ac_1 = "ProcessNotifyUIPlayer"
                var_1b0_1 = 0x829b
                ecx_1 = "(RollGetGame()->p[who].dice[arg1].flags & DFLAG_VIRTUAL) == 0"
                goto label_47cd07
            
            eax_3 = eax_127[4]
            
            if (eax_3 != 6 && eax_3 != 5)
                if (eax_3 == 3)
                    @__security_check_cookie@4(eax_1 ^ &var_19c)
                    return eax_3
                
                var_1ac_1 = "ProcessNotifyUIPlayer"
                var_1b0_1 = 0x82a7
                ecx_1 = "Halt"
                goto label_47cd07
            
            eax_3 = sub_45a830(eax_3, eax_127, var_188.d, 3, false, 1, 5, 1, arg8)
            
            if (eax_127[4] == 3)
                @__security_check_cookie@4(eax_1 ^ &var_19c)
                return eax_3
            
            var_1ac_1 = "ProcessNotifyUIPlayer"
            var_1b0_1 = 0x829f
            ecx_1 = "d.die.where == DW_CITIZENRY"
            goto label_47cd07
        case 0x13
            int32_t* eax_50 = sub_45b360(eax_3, arg4, arg2, arg5)
            int32_t* eax_51 = sub_452b90(arg2)
            int32_t eax_53 = sub_4554e0(sub_45b790(eax_51, eax_50, eax_51, 1, var_19c), eax_50, eax_51, 
                3, 1, 5, 0, 1, arg8.b)
            @__security_check_cookie@4(eax_1 ^ &var_19c)
            return eax_53
        case 0x14
            uint32_t var_1ac_27 = arg4
            int32_t* var_1b0_14 = arg2
            int32_t* eax_55 = sub_45b360(sub_4892e0("place tile | who:%d t:%d"), arg4, arg2, arg5)
            int32_t* eax_56 = sub_452b90(arg2)
            void* ebx_6 = var_19c
            int32_t ebx_8 = neg.d(ebx_6 - 1)
            int32_t eax_58 = sub_4554e0(sub_45b790(eax_56, eax_55, eax_56, 1, ebx_6), eax_55, eax_56, 
                sbb.d(ebx_8, ebx_8, ebx_6 != 1) + 5, 3, 5, 0, 1, arg8.b)
            @__security_check_cookie@4(eax_1 ^ &var_19c)
            return eax_58
        case 0x15
            uint32_t (* eax_46)[0x4] = sub_45b310(eax_3, arg4, arg2, arg5)
            int32_t eax_47 = sub_45bf60(var_19c, 0)
            void* eax_48 = sub_452b90(arg2)
            sub_45b8e0(eax_48, eax_46, eax_48, eax_47)
            (*eax_46)[3] = arg7
            @__security_check_cookie@4(eax_1 ^ &var_19c)
            return arg7
        case 0x16
            uint32_t (* eax_39)[0x4] = sub_45b310(eax_3, arg4, arg2, arg5)
            int32_t* eax_40 = sub_4571c0()
            void* eax_41 = sub_452b90(arg2)
            sub_45ba50(eax_41, eax_39, eax_41, eax_40)
            (*eax_39)[3] = arg7
            @__security_check_cookie@4(eax_1 ^ &var_19c)
            return arg7
        case 0x17
            int32_t* eax_43 = sub_45b310(eax_3, arg4, arg2, arg5)
            eax_3 = var_19c
            
            if (eax_3 u<= 5)
                int32_t esi_7
                
                switch (eax_3)
                    case 0
                        esi_7 = 8
                    case 1
                        esi_7 = 9
                    case 2
                        esi_7 = 0xa
                    case 3
                        esi_7 = 0xb
                    case 4
                        esi_7 = 0xc
                    case 5
                        esi_7 = 0xd
                
                int32_t* eax_44 = sub_452b90(arg2)
                sub_45b8e0(eax_44, eax_43, eax_44, esi_7)
                eax_43[3] = arg7
                @__security_check_cookie@4(eax_1 ^ &var_19c)
                return arg7
        case 0x18
            int32_t* eax_59 = sub_4571c0()
            void* eax_60 = sub_452b90(arg2)
            char ebx_11 = arg8.b
            int32_t* edi_10 = eax_60
            eax_3 = sub_4554e0(eax_60, eax_59, edi_10, 3, 1, 5, 0, 1, ebx_11)
            
            if (ebx_11 == 0)
                data_126be6c
                eax_3 = sub_4c5ce0()
                
                if (edi_10[1] == 0x11)
                    eax_3 = sub_452ea0(edi_10, 0xb)
                    
                    if (eax_3 != 0)
                        eax_3 = sub_47a4b0(0)
                
                if (edi_10[1] == 0xf)
                    eax_3 = sub_452ea0(edi_10, 0xa)
                    
                    if (eax_3 != 0)
                        void* eax_61 = sub_47a4b0(0)
                        @__security_check_cookie@4(eax_1 ^ &var_19c)
                        return eax_61
            
            @__security_check_cookie@4(eax_1 ^ &var_19c)
            return eax_3
        case 0x19
            if (arg5 == 0)
                var_1ac_1 = "ProcessNotifyUIPlayer"
                var_1b0_1 = 0x82f2
                ecx_1 = "arg2"
                goto label_47cd07
            
            void* eax_136 = sub_452b90(arg2)
            
            if (arg8.b != 0)
                eax_3 = sub_452730(eax_136, 0, arg5)
                
                if (*(eax_136 + 0x300) s<= 0xa)
                    @__security_check_cookie@4(eax_1 ^ &var_19c)
                    return eax_3
                
                var_1ac_1 = "ProcessNotifyUIPlayer"
                var_1b0_1 = 0x8302
                ecx_1 = "pgui.gameTokens[TOKEN_CREDITS] <= 10"
                goto label_47cd07
            
            if (arg5 s> 0)
                sub_4c5670(data_126be7c, &var_e0)
                sub_4c5920(&var_e0)
            
            sub_452730(eax_136, 0, arg5)
            
            if (arg5 s<= 0)
                *(eax_136 + 0x318) += arg5
            else
                *(eax_136 + 0x310) += arg5
            
            uint32_t (* eax_137)[0x4] = sub_481490(&data_62d6c4)
            int32_t var_174_1 = 0
            void* var_1ac_58 = 0x8c
            char var_1b0_37 = 0
            *eax_137 = 3
            (*eax_137)[0x16] = 0
            uint32_t (* var_1b4_29)[0x4] = &var_16c
            (*eax_137)[0x17] = *eax_136
            eax_137[6][0] = arg5
            (*eax_137)[0x19].b = 0
            (*eax_137)[0x1a] = 9
            _memset(var_1b4_29, var_1b0_37, var_1ac_58)
            var_180 = *eax_136
            int32_t var_17c_1 = 0x26
            int32_t var_178_1 = 0xffffffff
            int32_t var_170_1 = 0xffffffff
            __builtin_memcpy(&var_b0, &var_180, 0xa0)
            sub_452860(&eax_137[7], &var_b0)
            data_126be7c
            int32_t eax_139 = sub_4c5ce0()
            @__security_check_cookie@4(eax_1 ^ &var_19c)
            return eax_139
        case 0x1a
            if (arg5 == 0)
                var_1ac_1 = "ProcessNotifyUIPlayer"
                var_1b0_1 = 0x8311
                ecx_1 = "arg2"
                goto label_47cd07
            
            void* eax_140 = sub_452b90(arg2)
            eax_3 = sub_452730(eax_140, 0, arg5)
            
            if (*(eax_140 + 0x300) s> 0xa)
                var_1ac_1 = "ProcessNotifyUIPlayer"
                var_1b0_1 = 0x8317
                ecx_1 = "pgui.gameTokens[TOKEN_CREDITS] <= 10"
                goto label_47cd07
            
            if (arg8.b != 0)
                @__security_check_cookie@4(eax_1 ^ &var_19c)
                return eax_3
            
            int32_t eax_141 = sub_452770(eax_140, 0, neg.d(arg5), 0)
            @__security_check_cookie@4(eax_1 ^ &var_19c)
            return eax_141
        case 0x1b
            void* eax_135 = sub_452b90(arg2)
            eax_3 = sub_452730(eax_135, 0, arg5)
            
            if (*(eax_135 + 0x300) s<= 0xa)
                @__security_check_cookie@4(eax_1 ^ &var_19c)
                return eax_3
            
            var_1ac_1 = "ProcessNotifyUIPlayer"
            var_1b0_1 = 0x82e9
            ecx_1 = "pgui.gameTokens[TOKEN_CREDITS] <= 10"
            goto label_47cd07
        case 0x1c
            uint32_t (* eax_77)[0x4] = sub_45b310(eax_3, arg4, arg2, arg5)
            int32_t eax_78 = sub_45bf60(var_19c, 0)
            int32_t* eax_79 = sub_452b90(arg2)
            void* eax_80 = sub_45b8e0(eax_79, eax_77, eax_79, eax_78)
            @__security_check_cookie@4(eax_1 ^ &var_19c)
            return eax_80
        case 0x1d
            uint32_t (* eax_81)[0x4] = sub_45b310(eax_3, arg4, arg2, arg6)
            int32_t* eax_82 = sub_4571c0()
            void* eax_83 = sub_452b90(arg2)
            uint32_t (* eax_84)[0x4] = sub_45ba50(eax_83, eax_81, eax_83, eax_82)
            @__security_check_cookie@4(eax_1 ^ &var_19c)
            return eax_84
        case 0x1e
            if (arg6 u<= 5)
                switch (arg6)
                    case nullptr
                        var_19c = 8
                    case 1
                        var_19c = 9
                    case 2
                        var_19c = 0xa
                    case 3
                        var_19c = 0xb
                    case 4
                        var_19c = 0xc
                    case 5
                        var_19c = 0xd
                
                uint32_t eax_20 = sub_476fd0(arg5, arg6)
                void* eax_21 = sub_477e00(eax_20, arg2, arg4, arg5, var_19c, eax_20, arg7)
                @__security_check_cookie@4(eax_1 ^ &var_19c)
                return eax_21
        case 0x1f
            int32_t* eax_22 = sub_457200(arg2, arg4)
            void* eax_23 = sub_452b90(arg2)
            uint32_t var_1ac_11 = arg8
            uint32_t eax_24 = sub_45ac50(eax_23, eax_22, eax_23)
            eax_22[0xb] = 0x27
            @__security_check_cookie@4(eax_1 ^ &var_19c)
            return eax_24
        case 0x20
            eax_3 = sub_457200(arg2, arg4)
            int32_t* esi_22 = eax_3
            
            if (esi_22[4] == 8)
                @__security_check_cookie@4(eax_1 ^ &var_19c)
                return eax_3
            
            int32_t* ebx
            ebx.b = *(esi_22 + 0x22)
            uint32_t eax_115 = sub_452b90(arg2)
            
            if (ebx.b == 0)
                uint32_t eax_117 = sub_45a830(eax_115, esi_22, eax_115, 7, false, 0, 5, 1, arg8)
                @__security_check_cookie@4(eax_1 ^ &var_19c)
                return eax_117
            
            uint32_t eax_116 = sub_45ac50(eax_115, esi_22, eax_115)
            @__security_check_cookie@4(eax_1 ^ &var_19c)
            return eax_116
        case 0x21
            esi_23 = sub_457200(arg2, arg4)
            eax_119 = sub_452b90(arg2)
            var_1ac_48 = arg8
            var_1b0_27 = 1
            var_1b4_25 = 5
            var_1b8_20 = 0
        label_47c775:
            var_1bc_17 = false
            var_1c0_16 = 7
            edx_73 = esi_23
            ecx_200 = eax_119
        label_47c77d:
            uint32_t eax_120 = sub_45a830(eax_119, edx_73, ecx_200, var_1c0_16, var_1bc_17, var_1b8_20, 
                var_1b4_25, var_1b0_27, var_1ac_48)
            @__security_check_cookie@4(eax_1 ^ &var_19c)
            return eax_120
        case 0x22
            int32_t* eax_122 = sub_457200(arg2, arg4)
            void* eax_123 = sub_452b90(arg2)
            eax_3 = sub_45a830(eax_123, eax_122, eax_123, 7, false, 1, 5, 1, arg8)
            
            if (eax_122[4] == 7)
                @__security_check_cookie@4(eax_1 ^ &var_19c)
                return eax_3
            
            var_1ac_1 = "ProcessNotifyUIPlayer"
            var_1b0_1 = 0x824d
            ecx_1 = "d.die.where == DW_CUP"
            goto label_47cd07
        case 0x23
            int32_t* eax_95 = sub_457200(arg2, arg4)
            int32_t* eax_96 = sub_4571c0()
            void* eax_97 = sub_452b90(arg2)
            uint32_t var_1ac_43 = arg8
            int32_t eax_98 = sub_45a730(eax_97, eax_95, eax_97, eax_96, 1, arg8.b)
            @__security_check_cookie@4(eax_1 ^ &var_19c)
            return eax_98
        case 0x24
            int32_t* eax_90 = sub_457200(arg2, arg5)
            int32_t* eax_91 = sub_457200(arg2, var_19c)
            uint32_t eax_92 = sub_452b90(arg2)
            int32_t var_1ac_42 = 0
            uint32_t eax_94 = sub_45a830(sub_461ad0(eax_92, eax_90, eax_92, arg8), eax_91, eax_92, 3, 
                false, 1, 5, 1, arg8)
            @__security_check_cookie@4(eax_1 ^ &var_19c)
            return eax_94
        case 0x25
            void* eax_129 = sub_452b90(arg2)
            
            if (arg3 == 0x37 || arg3 == 0x38)
                int32_t eax_134 = sub_452730(eax_129, 1, arg4)
                
                if (arg8.b != 0)
                    data_632550 -= arg4
                    @__security_check_cookie@4(eax_1 ^ &var_19c)
                    return eax_134
                
                *(eax_129 + 0x30c) -= arg4
                @__security_check_cookie@4(eax_1 ^ &var_19c)
                return eax_134
            
            data_632550 -= arg4
            
            if (arg8.b != 0)
                int32_t eax_133 = sub_452730(eax_129, 1, arg4)
                @__security_check_cookie@4(eax_1 ^ &var_19c)
                return eax_133
            
            if (arg4 == 0)
                @__security_check_cookie@4(eax_1 ^ &var_19c)
                return arg3
            
            if (arg4 s> 0)
                sub_4c5670(data_126be88, &var_e0)
                sub_4c5920(&var_e0)
            
            sub_452730(eax_129, 1, arg4)
            
            if (arg4 s<= 0)
                *(eax_129 + 0x31c) += arg4
            else
                *(eax_129 + 0x314) += arg4
            
            uint32_t (* eax_130)[0x4] = sub_481490(&data_62d6c4)
            int32_t var_174 = 0
            void* var_1ac_53 = 0x8c
            char var_1b0_32 = 0
            *eax_130 = 3
            (*eax_130)[0x16] = 1
            uint32_t (* var_1b4_28)[0x4] = &var_16c
            (*eax_130)[0x17] = *eax_129
            eax_130[6][0] = arg4
            (*eax_130)[0x19].b = 0
            (*eax_130)[0x1a] = 9
            _memset(var_1b4_28, var_1b0_32, var_1ac_53)
            var_180 = *eax_129
            int32_t var_17c = 0x27
            int32_t var_178 = 0xffffffff
            int32_t var_170 = 0xffffffff
            __builtin_memcpy(&var_b0, &var_180, 0xa0)
            void* eax_132 = sub_452860(&eax_130[7], &var_b0)
            @__security_check_cookie@4(eax_1 ^ &var_19c)
            return eax_132
        case 0x26
            esi_23 = sub_457200(arg2, arg4)
            eax_119 = sub_452b90(arg2)
            var_1ac_48 = arg8
            var_1b0_27 = 1
            var_1b4_25 = 5
            var_1b8_20 = 1
            goto label_47c775
        case 0x27
            void* eax_128 = sub_452b90(arg2)
            *(eax_128 + 0x2f8) = arg4
            *(eax_128 + 0x2fc) = 0
            @__security_check_cookie@4(eax_1 ^ &var_19c)
            return eax_128
        case 0x28
            void* eax_76 = sub_45b080(eax_3, arg4, arg2, arg5)
            @__security_check_cookie@4(eax_1 ^ &var_19c)
            return eax_76
        case 0x29
            goto label_47ccf8
    
    var_1ac_1 = "DftgWhereToRollWhere"
    var_1b0_1 = 0x277e
    ecx_1 = "Halt"
    goto label_47cd07
}
