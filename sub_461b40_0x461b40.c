// 函数名称: sub_461b40
// 虚拟地址: 0x461b40
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_tsub_461b40()
{
    // 第一条实际指令: uint32_t i_10
    uint32_t i_10
    uint32_t i = __security_cookie ^ &i_10
    uint32_t i_17 = i
    
    if (data_632a09:1.b == 0)
        void* ecx_3 = data_6cfe4c
        char const* const var_4dc_1
        int32_t var_4d8_1
        char const* const var_4d4_1
        char* ecx_4
        
        if (ecx_3 == 0)
        label_461b96:
            var_4d4_1 = "GetClient"
            var_4d8_1 = 0x75
            var_4dc_1 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
            ecx_4 = "gClient"
        label_462cea:
            sub_489550(i, &data_5b2591, ecx_4, var_4dc_1, var_4d8_1, var_4d4_1)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        void* ebx_1 = sub_452b90(*(ecx_3 + 0xa68))
        void* var_4ac_1 = ebx_1
        i = sub_453650(ebx_1)
        
        if (i != 0)
            i -= 1
            
            if (i u> 0x1c)
            label_462cd1:
                var_4d4_1 = "RollHandleOk"
                var_4d8_1 = 0x4014
            label_462cdb:
                ecx_4 = "Halt"
            label_462ce0:
                var_4dc_1 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
                goto label_462cea
            
            i = zx.d(lookup_table_462d48[i])
            int32_t* i_12
            int32_t* i_13
            int32_t* i_14
            int32_t* i_15
            int32_t* i_16
            int32_t* var_4a4
            void var_470
            void var_46c
            void var_358
            void var_354
            void* ecx_17
            void* ecx_34
            int32_t edx_43
            
            switch (i)
                case 0
                    int32_t eax_2 = sub_453010(ebx_1, 4)
                    int32_t* esi_1
                    
                    if (eax_2 != 0)
                        esi_1 = sub_452cc0(eax_2)
                    else
                        esi_1 = nullptr
                    
                    i = sub_453010(ebx_1, 5)
                    
                    if (i != 0)
                        i = sub_452cc0(i)
                        int32_t* i_19 = i
                        
                        if (i_19 != 0)
                            if (esi_1 == 0)
                                var_4d4_1 = "GetInitalChoices"
                                var_4d8_1 = 0x363b
                                ecx_4 = "gfxDev != NULL"
                                goto label_462ce0
                            
                            sub_4554e0(sub_4554e0(i, esi_1, ebx_1, 4, 3, 5, 0, 0, 0), i_19, ebx_1, 5, 
                                3, 5, 0, 0, 0)
                            int32_t edx_3 = *ebx_1
                            void* ecx_13 = data_632804
                            i_16 = esi_1[0x11]
                            var_4a4 = i_19[0x11]
                            i = sub_45bde0(&i_16, edx_3, ecx_13, 0, 0, &i_16, 2, 0, 0)
                            void* ecx_14 = data_6cfe4c
                            
                            if (ecx_14 == 0)
                                goto label_461b96
                            
                            *(ecx_14 + 0xa68)
                            sub_45d0d0()
                            *(ebx_1 + 4) = 2
                            goto label_462c68
                    
                    var_4d4_1 = "GetInitalChoices"
                    var_4d8_1 = 0x363a
                    ecx_4 = "gfxSettle != NULL"
                    goto label_462ce0
                case 1
                    bool cond:1_1 = *(ebx_1 + 0xe6c) s<= 0
                    i_10 = 0
                    
                    if (not(cond:1_1))
                        void* esi_2 = ebx_1 + 0xf10
                        void* var_4c0_1 = esi_2
                        
                        do
                            void* ecx_22 = data_6cfe4c
                            
                            if (ecx_22 == 0)
                                goto label_461b96
                            
                            int32_t* eax_10 = sub_457200(*(ecx_22 + 0xa68), *(esi_2 - 0xa0))
                            sub_45e560(eax_10, eax_10, ebx_1, *esi_2, 0)
                            int32_t var_4a0[0xc]
                            sub_4c5670(data_126be0c, &var_4a0)
                            sub_4c5920(&var_4a0)
                            uint32_t i_20 = i_10
                            *(eax_10 + 0x6e) = 1
                            i = i_20 + 1
                            __builtin_memcpy(&eax_10[0x1f6], &eax_10[0x76], 0xa0)
                            esi_2 = var_4c0_1 + 4
                            i_10 = i
                            var_4c0_1 = esi_2
                        while (i s< *(ebx_1 + 0xe6c))
                    
                    *(ebx_1 + 0xe6c) = 0
                    *(ebx_1 + 4) = 6
                    sub_469070(sub_453650(ebx_1), 0)
                    goto label_462c68
                case 2
                    int32_t eax_108
                    
                    if (*(ebx_1 + 0x308) + *(ebx_1 + 0x300) s> 0)
                        eax_108, ecx_17 = sub_453510(*ebx_1, 3)
                    
                    if (*(ebx_1 + 0x308) + *(ebx_1 + 0x300) s> 0 && eax_108 != 0)
                        goto label_461cd8
                    
                    i = sub_453650(ebx_1)
                    
                    if (i == 4)
                        sub_460fa0(ebx_1)
                        *(ebx_1 + 4) = 5
                        goto label_462c68
                    
                    var_4d4_1 = "RollHandleOk"
                    var_4d8_1 = 0x4003
                    ecx_4 = "GetInputPhase(pgui) == PHASE_MANAGE_EMPIRE"
                    goto label_462ce0
                case 3
                    var_4d4_1 = "RollHandleOk"
                    var_4d8_1 = 0x4012
                    goto label_462cdb
                case 4
                    int32_t eax_8
                    eax_8, ecx_17 = sub_460e00(ebx_1)
                    
                    if (eax_8 s<= 0)
                        sub_461210(ebx_1)
                        *ebx_1
                        *(ebx_1 + 4) = 7
                        sub_45d0d0()
                        goto label_462c68
                    
                label_461cd8:
                    ecx_17.b = 0
                    int64_t* eax_9 = sub_460430(ecx_17)
                    @__security_check_cookie@4(i_17 ^ &i_10)
                    return eax_9
                case 5
                    int32_t ecx_29 = *(ebx_1 + 0x2f0)
                    uint32_t i_50 = 0
                    i_10 = 0
                    int32_t* eax_13
                    int32_t* edx_7
                    
                    if (ecx_29 == 0)
                        eax_13 = var_4a4
                        edx_7 = nullptr
                    else
                        edx_7 = sub_452c30(ecx_29)
                        eax_13 = edx_7[0xa]
                    
                    int32_t* var_4c0_2 = eax_13
                    sub_4538b0(&i_16)
                    i = i_16
                    
                    if (edx_7 == i)
                    label_461e75:
                        int32_t esi_6 = 0
                        
                        if (i_50 s<= 0)
                        label_461ed7:
                            ecx_34 = data_6cfe4c
                            *(ebx_1 + 4) = 0xe
                            
                            if (ecx_34 == 0)
                                goto label_461b96
                            
                        label_461eec:
                            *(ecx_34 + 0xa68)
                            sub_45d0d0()
                            goto label_462c68
                        
                        while (true)
                            void* ecx_32 = data_632804
                            
                            if (*(ebx_1 + 0x338) != 6)
                                var_4d4_1 = "RollHandleOk"
                                var_4d8_1 = 0x3e47
                                ecx_4 = "pgui.choiceData.type == CHOICE_EXPLORE_DIE"
                                break
                            
                            int32_t edx_8 = *ebx_1
                            void* var_4d4_3 = ecx_32
                            i_10 = *(*(&var_470 + (esi_6 << 2)) + 0x2c)
                            i = sub_45bde0(sub_45bde0(&i_10, edx_8, ecx_32, 6, 0, &i_10, 1, 0, 0), 
                                *ebx_1, ecx_32, 7, 1, 0, 0, 0, 0)
                            esi_6 += 1
                            
                            if (esi_6 s>= i_50)
                                goto label_461ed7
                        
                        goto label_462ce0
                    
                    while (true)
                        if (edx_7 == 0)
                            var_4d4_1 = "Dice::DiceIt::operator *"
                            var_4d8_1 = 0x5da
                            ecx_4 = &data_5e3f90
                            break
                        
                        int32_t esi_5 = *(ebx_1 + 0x4cc)
                        int32_t ecx_30 = 0
                        
                        if (esi_5 s> 0)
                            void* eax_14 = ebx_1 + 0x33c
                            
                            while (true)
                                if (*eax_14 == edx_7[0xb])
                                    uint32_t i_51 = i_10
                                    *(&var_470 + (i_51 << 2)) = edx_7
                                    i_50 = i_51 + 1
                                    i_10 = i_50
                                    break
                                
                                ecx_30 += 1
                                eax_14 += 4
                                
                                if (ecx_30 s>= esi_5)
                                    i_50 = i_10
                                    break
                            
                            i = i_16
                        
                        if (var_4c0_2 != 0)
                            edx_7 = sub_452c30(var_4c0_2)
                            var_4c0_2 = edx_7[0xa]
                            i = i_16
                        else
                            edx_7 = nullptr
                        
                        if (edx_7 == i)
                            goto label_461e75
                    
                    goto label_462ce0
                case 6
                    sub_45e9a0(ebx_1)
                label_462c68:
                    i = data_6cfe4c
                    
                    if (i == 0)
                        goto label_461b96
                    
                    if (*(i + 0x834) != 0)
                        i = sub_46a6a0()
                        
                        if (i != 0 && *(i + 0x1c) == 3)
                            i = sub_46a220(3)
                            
                            if (i.b != 0)
                                void* eax_109 = sub_46a060()
                                @__security_check_cookie@4(i_17 ^ &i_10)
                                return eax_109
                case 7
                    uint32_t i_11 = 0
                    i_10 = 0
                    sub_452fc0(&i_12, ebx_1, 4)
                    int32_t* i_1 = i_12
                    i = Unlock(&i_12)
                    int32_t* i_54 = i_12
                    int32_t var_240[0x46]
                    int32_t var_128[0x47]
                    
                    if (i_1 != i_54)
                        while (i_1 != 0)
                            i = sub_452c00(ebx_1, i_1[0x11])
                            
                            if (i.b != 0)
                                char eax_27 = sub_460e90(i_1)
                                int32_t edx_16 = i_1[0x11]
                                int32_t ecx_50 = i_1[0xe]
                                
                                if (eax_27 == 0)
                                    *(&var_470 + (i_11 << 2)) = edx_16
                                    *(&var_358 + (i_11 << 2)) = ecx_50
                                    i = i_11 + 1
                                    i_11 = i
                                else
                                    uint32_t i_22 = i_10
                                    var_128[i_22] = edx_16
                                    var_240[i_22] = ecx_50 | 0x80
                                    i = i_22 + 1
                                    i_10 = i
                            
                            int32_t ecx_52 = i_1[0x10]
                            
                            if (ecx_52 != 0)
                                i = sub_452cc0(ecx_52)
                                i_1 = i
                            else
                                i_1 = nullptr
                            
                            if (i_1 == i_54)
                                goto label_462157
                        
                        goto label_461ff9
                    
                label_462157:
                    sub_452fc0(&i_12, ebx_1, 5)
                    int32_t* i_18 = i_12
                    i = Unlock(&i_12)
                    int32_t* i_55 = i_12
                    
                    while (i_18 != i_55)
                        if (i_18 == 0)
                            goto label_461ff9
                        
                        i = sub_452c00(ebx_1, i_18[0x11])
                        
                        if (i.b != 0)
                            char eax_29 = sub_460e90(i_18)
                            int32_t edx_18 = i_18[0x11]
                            int32_t ecx_56 = i_18[0xe]
                            
                            if (eax_29 == 0)
                                *(&var_470 + (i_11 << 2)) = edx_18
                                *(&var_358 + (i_11 << 2)) = ecx_56
                                i = i_11 + 1
                                i_11 = i
                            else
                                uint32_t i_23 = i_10
                                var_128[i_23] = edx_18
                                var_240[i_23] = ecx_56 | 0x80
                                i = i_23 + 1
                                i_10 = i
                        
                        int32_t ecx_58 = i_18[0x10]
                        
                        if (ecx_58 != 0)
                            i = sub_452cc0(ecx_58)
                            i_18 = i
                        else
                            i_18 = nullptr
                    
                    uint32_t i_34 = i_11
                    int32_t edi_5 = 0
                    int32_t eax_32
                    int32_t edx_19
                    edx_19:eax_32 = sx.q(i_34)
                    int32_t* i_24 = (eax_32 - edx_19) s>> 1
                    i_12 = i_24
                    
                    if (i_24 s> 0)
                        void* esi_9 = (i_34 << 2) + 0xfffffffc
                        
                        do
                            int32_t eax_34 = *(&var_470 + esi_9)
                            esi_9 -= 4
                            int32_t edx_20 = *(&var_470 + (edi_5 << 2))
                            int32_t ecx_59 = *(&var_358 + (edi_5 << 2))
                            *(&var_470 + (edi_5 << 2)) = eax_34
                            *(&var_358 + (edi_5 << 2)) = *(&var_354 + esi_9)
                            edi_5 += 1
                            *(&var_46c + esi_9) = edx_20
                            *(&var_354 + esi_9) = ecx_59
                        while (edi_5 s< i_24)
                        
                        ebx_1 = var_4ac_1
                        i_34 = i_11
                    
                    uint32_t i_25 = i_10
                    
                    if (i_25 s> 0)
                        uint32_t eax_36 = i_25 << 2
                        __builtin_memcpy(&var_358 + (i_34 << 2), &var_240, eax_36 u>> 2 << 2)
                        __builtin_memcpy(&var_470 + (i_34 << 2), &var_128, eax_36 u>> 2 << 2)
                        i_34 = i_11 + i_10
                    
                    uint32_t i_56 = i_34
                    sub_45bde0(&var_470, *ebx_1, data_632804, 8, 0, &var_470, i_34, &var_358, i_34)
                    *(ebx_1 + 4) = 0xc
                    goto label_462c68
                case 8
                    int32_t var_4c0_4 = 0
                    sub_452fc0(&i_10, ebx_1, 4)
                    uint32_t i_2 = i_10
                    i = Unlock(&i_10)
                    uint32_t i_52 = i_10
                    
                    if (i_2 != i_52)
                        while (i_2 != 0)
                            int32_t edx_10 = *(i_2 + 0x44)
                            i = sub_452c00(ebx_1, edx_10)
                            
                            if (i.b != 0)
                                i = *(i_2 + 0x38)
                                *(&var_470 + (var_4c0_4 << 2)) = edx_10
                                *(&var_358 + (var_4c0_4 << 2)) = i
                                var_4c0_4 += 1
                            
                            int32_t ecx_41 = *(i_2 + 0x40)
                            
                            if (ecx_41 != 0)
                                i = sub_452cc0(ecx_41)
                                i_2 = i
                            else
                                i_2 = 0
                            
                            if (i_2 == i_52)
                                goto label_461fa6
                        
                        goto label_461ff9
                    
                label_461fa6:
                    uint32_t* ecx_42 = &i_10
                    sub_452fc0(ecx_42, ebx_1, 5)
                    uint32_t i_3 = i_10
                    i = Unlock(&i_10)
                    uint32_t i_53 = i_10
                    
                    if (i_3 != i_53)
                        while (i_3 != 0)
                            int32_t edx_11 = *(i_3 + 0x44)
                            i = sub_452c00(ebx_1, edx_11)
                            
                            if (i.b != 0)
                                i = *(i_3 + 0x38)
                                *(&var_470 + (var_4c0_4 << 2)) = edx_11
                                *(&var_358 + (var_4c0_4 << 2)) = i
                                var_4c0_4 += 1
                            
                            ecx_42 = *(i_3 + 0x40)
                            
                            if (ecx_42 != 0)
                                i = sub_452cc0(ecx_42)
                                i_3 = i
                            else
                                i_3 = 0
                            
                            if (i_3 == i_53)
                                goto label_462018
                        
                    label_461ff9:
                        var_4d4_1 = "Tiles::TileIt::operator *"
                        var_4d8_1 = 0x2ac
                        ecx_4 = &data_5e3f90
                        goto label_462ce0
                    
                label_462018:
                    int32_t esi_8 = var_4c0_4
                    int32_t eax_22
                    int32_t edx_12
                    edx_12:eax_22 = sx.q(esi_8)
                    uint32_t i_21 = (eax_22 - edx_12) s>> 1
                    i_10 = i_21
                    
                    if (i_21 s> 0)
                        void* edi_4 = (esi_8 << 2) + 0xfffffffc
                        int32_t ebx_2 = 0
                        
                        do
                            int32_t eax_24 = *(&var_470 + edi_4)
                            edi_4 -= 4
                            int32_t edx_13 = *(&var_470 + (ebx_2 << 2))
                            ecx_42 = *(&var_358 + (ebx_2 << 2))
                            *(&var_470 + (ebx_2 << 2)) = eax_24
                            *(&var_358 + (ebx_2 << 2)) = *(&var_354 + edi_4)
                            ebx_2 += 1
                            *(&var_46c + edi_4) = edx_13
                            *(&var_354 + edi_4) = ecx_42
                        while (ebx_2 s< i_21)
                        
                        ebx_1 = var_4ac_1
                        esi_8 = var_4c0_4
                    
                    uint32_t* var_4d4_6 = ecx_42
                    sub_45bde0(&var_470, *ebx_1, data_632804, 9, 0, &var_470, esi_8, &var_358, esi_8)
                    *(ebx_1 + 4) = 0xe
                    goto label_462c68
                case 9
                    char eax_92
                    eax_92, ecx_17 = sub_45f470(ebx_1)
                    
                    if (eax_92 == 0)
                        goto label_461cd8
                    
                    int32_t* i_32 = *ebx_1
                    i_14 = i_32
                    void* edi_16 = sub_452b90(i_32)
                    i_12 = &data_62d6c4
                    void* var_4c0_7 = edi_16
                    uint32_t i_46 = 0
                    i_10 = 0
                    i_13 = nullptr
                    int32_t ecx_107 = sub_481430(&data_62d6c4, &i_13)
                    int32_t* i_4 = i_13
                    
                    if (i_4 != 0xffffffff)
                        int32_t* i_38 = i_14
                        
                        do
                            if (*i_4 == 1 && i_4[6] == i_38 && i_4[4] == 5)
                                int32_t esi_18 = *(edi_16 + 0x4cc)
                                int32_t ecx_108 = 0
                                
                                if (esi_18 s> 0)
                                    void* eax_95 = var_4c0_7 + 0x33c
                                    
                                    do
                                        if (*eax_95 == i_4[0xb])
                                            uint32_t i_47 = i_10
                                            edi_16 = var_4c0_7
                                            *(&var_358 + (i_47 << 2)) = i_4
                                            i_46 = i_47 + 1
                                            i_10 = i_46
                                            goto label_462a41
                                        
                                        ecx_108 += 1
                                        eax_95 += 4
                                    while (ecx_108 s< esi_18)
                                    
                                    edi_16 = var_4c0_7
                                
                                i_46 = i_10
                            
                        label_462a41:
                            ecx_107 = sub_481430(i_12, &i_13)
                            i_4 = i_13
                        while (i_4 != 0xffffffff)
                        
                        ebx_1 = var_4ac_1
                    
                    int32_t edi_18 = 0
                    
                    if (i_46 s> 0)
                        do
                            int32_t edx_42 = *ebx_1
                            int32_t var_4d4_28 = ecx_107
                            void* ecx_110 = data_632804
                            i_14 = *(*(&var_358 + (edi_18 << 2)) + 0x2c)
                            ecx_107 =
                                sub_45bde0(&i_14, edx_42, ecx_110, *(ebx_1 + 0x338), 0, &i_14, 1, 0, 0)
                            edi_18 += 1
                        while (edi_18 s< i_46)
                    
                    *(ebx_1 + 4) = 0x10
                    i = sub_452ea0(ebx_1, 0xa)
                    
                    if (i == 0)
                    label_462ac3:
                        ecx_34 = data_6cfe4c
                        
                        if (ecx_34 != 0)
                            goto label_461eec
                        
                        goto label_461b96
                    
                    edx_43 = 4
                label_462ab5:
                    i = sub_452e70(ebx_1, edx_43)
                    
                    if (i != 1)
                        goto label_462c68
                    
                    goto label_462ac3
                case 0xa
                    char eax_99
                    eax_99, ecx_17 = sub_45f440(ebx_1)
                    
                    if (eax_99 == 0)
                        goto label_461cd8
                    
                    int32_t* i_33 = *ebx_1
                    i_14 = i_33
                    void* edi_19 = sub_452b90(i_33)
                    i_12 = &data_62d6c4
                    void* var_4c0_8 = edi_19
                    uint32_t i_48 = 0
                    i_10 = 0
                    i_13 = nullptr
                    int32_t ecx_115 = sub_481430(&data_62d6c4, &i_13)
                    int32_t* i_5 = i_13
                    
                    if (i_5 != 0xffffffff)
                        int32_t* i_39 = i_14
                        
                        do
                            if (*i_5 == 1 && i_5[6] == i_39 && i_5[4] == 6)
                                int32_t esi_19 = *(edi_19 + 0x4cc)
                                int32_t ecx_116 = 0
                                
                                if (esi_19 s> 0)
                                    void* eax_102 = var_4c0_8 + 0x33c
                                    
                                    do
                                        if (*eax_102 == i_5[0xb])
                                            uint32_t i_49 = i_10
                                            edi_19 = var_4c0_8
                                            *(&var_358 + (i_49 << 2)) = i_5
                                            i_48 = i_49 + 1
                                            i_10 = i_48
                                            goto label_462b89
                                        
                                        ecx_116 += 1
                                        eax_102 += 4
                                    while (ecx_116 s< esi_19)
                                    
                                    edi_19 = var_4c0_8
                                
                                i_48 = i_10
                            
                        label_462b89:
                            ecx_115 = sub_481430(i_12, &i_13)
                            i_5 = i_13
                        while (i_5 != 0xffffffff)
                        
                        ebx_1 = var_4ac_1
                    
                    int32_t edi_21 = 0
                    
                    if (i_48 s> 0)
                        do
                            int32_t edx_44 = *ebx_1
                            int32_t var_4d4_31 = ecx_115
                            void* ecx_118 = data_632804
                            i_14 = *(*(&var_358 + (edi_21 << 2)) + 0x2c)
                            ecx_115 =
                                sub_45bde0(&i_14, edx_44, ecx_118, *(ebx_1 + 0x338), 0, &i_14, 1, 0, 0)
                            edi_21 += 1
                        while (edi_21 s< i_48)
                    
                    *(ebx_1 + 4) = 0x12
                    i = sub_452ea0(ebx_1, 0xb)
                    
                    if (i == 0)
                        goto label_462ac3
                    
                    edx_43 = 5
                    goto label_462ab5
                case 0xb
                    int32_t eax_39 = sub_453510(*ebx_1, 0xc)
                    char eax_40
                    
                    if (eax_39 != 0)
                        eax_40, ecx_17 = sub_453400(ebx_1)
                    
                    if (eax_39 != 0 && eax_40 != 0)
                        goto label_461cd8
                    
                    int32_t* i_26 = *ebx_1
                    i_12 = i_26
                    void* edi_8 = sub_452b90(i_26)
                    i_14 = &data_62d6c4
                    void* var_4c0_5 = edi_8
                    uint32_t i_40 = 0
                    i_10 = 0
                    i_15 = nullptr
                    sub_481430(&data_62d6c4, &i_15)
                    int32_t* i_6 = i_15
                    
                    if (i_6 != 0xffffffff)
                        int32_t* i_37 = i_12
                        
                        do
                            if (*i_6 == 1 && i_6[6] == i_37 && i_6[4] == 4)
                                int32_t esi_10 = *(edi_8 + 0x4cc)
                                int32_t ecx_68 = 0
                                
                                if (esi_10 s> 0)
                                    void* eax_43 = var_4c0_5 + 0x33c
                                    
                                    do
                                        if (*eax_43 == i_6[0xb])
                                            uint32_t i_41 = i_10
                                            edi_8 = var_4c0_5
                                            *(&var_470 + (i_41 << 2)) = i_6
                                            i_40 = i_41 + 1
                                            i_10 = i_40
                                            goto label_462359
                                        
                                        ecx_68 += 1
                                        eax_43 += 4
                                    while (ecx_68 s< esi_10)
                                    
                                    edi_8 = var_4c0_5
                                
                                i_40 = i_10
                            
                        label_462359:
                            sub_481430(i_14, &i_15)
                            i_6 = i_15
                        while (i_6 != 0xffffffff)
                        
                        ebx_1 = var_4ac_1
                    
                    int32_t edi_10 = 0
                    
                    if (i_40 s> 0)
                        while (true)
                            i = *(&var_470 + (edi_10 << 2))
                            int32_t ecx_70 = *(i + 0x1c)
                            
                            if (ecx_70 == 0)
                                var_4d4_1 = "DataArray<struct RollGfx>::DataArrayGet"
                                var_4d8_1 = 0x6c
                                var_4dc_1 = "d:\ax\trunk\ax2017\engine\dataarray.h"
                                ecx_4 = "id != DATAID_NULL"
                                goto label_462cea
                            
                            uint32_t edx_23 = zx.d(ecx_70.w)
                            
                            if (edx_23 u< data_62d6c8)
                                i = edx_23 * 0x8ac + data_62d6c4
                                
                                if (*(i + 0x8a8) == ecx_70)
                                    int32_t ecx_71 = data_62d6c4
                                    int32_t var_4d4_11 = ecx_71
                                    i_10 = *(*(&var_470 + (edi_10 << 2)) + 0x2c)
                                    int32_t edx_24 = *ebx_1
                                    void* ecx_72 = data_632804
                                    i_12 = *(edx_23 * 0x8ac + ecx_71 + 0x44)
                                    sub_45bde0(&i_10, edx_24, ecx_72, 0xd, 0, &i_10, 1, &i_12, 1)
                                    edi_10 += 1
                                    
                                    if (edi_10 s>= i_40)
                                        break
                                    
                                    continue
                            
                            var_4d4_1 = "DataArray<struct RollGfx>::DataArrayGet"
                            var_4d8_1 = 0x6d
                            var_4dc_1 = "d:\ax\trunk\ax2017\engine\dataarray.h"
                            ecx_4 = "DataArrayTryToGet(id) != NULL"
                            goto label_462cea
                    
                    *(ebx_1 + 4) = 0x14
                    goto label_462c68
                case 0xc
                    if (sub_4603d0(ebx_1) != 2)
                        goto label_461cd8
                    
                    void* edx_28 = data_6cfe4c
                    i = data_632804
                    i_10 = i
                    
                    if (edx_28 == 0)
                        goto label_461b96
                    
                    void* edi_14 = ebx_1 + *(ebx_1 + 0x298) * 0xc
                    int32_t eax_79 = (edi_14 + 0xb8 - (ebx_1 + 0xb8)) s/ 0xc
                    int32_t ecx_90 =
                        sub_481bb0(eax_79, edi_14 + 0xb8, ebx_1 + 0xb8, eax_79, *(edx_28 + 0xa68))
                    int32_t var_4c0_6 = 0
                    
                    if (*(ebx_1 + 0x298) s<= 0)
                    label_462943:
                        i = data_6cfe4c
                        *(ebx_1 + 0x298) = 0
                        *(ebx_1 + 4) = 0x16
                        
                        if (i == 0)
                            goto label_461b96
                        
                        *(i + 0xa68)
                        sub_45d0d0()
                        goto label_462c68
                    
                    void* edi_15 = ebx_1 + 0xbc
                    
                    while (true)
                        int32_t eax_80 = *(edi_15 - 4)
                        int32_t var_4e8_1
                        void* var_4e4_10
                        int32_t var_4e0_5
                        void* var_4dc_6
                        int32_t var_4d8_10
                        void* eax_84
                        
                        if (eax_80 == 0)
                            int32_t var_4d4_24 = ecx_90
                            var_4d8_10 = 1
                            eax_84 = edi_15 + 4
                            var_4dc_6 = eax_84
                            var_4e0_5 = 1
                            var_4e4_10 = edi_15
                            var_4e8_1 = 0
                            sub_45bde0(eax_84, *ebx_1, i_10, *(ebx_1 + 0x338), var_4e8_1, var_4e4_10, 
                                var_4e0_5, var_4dc_6, var_4d8_10)
                        else if (eax_80 == 1)
                            int32_t* eax_85 = sub_453300(eax_80 - 1, 5, ebx_1, 0x80, nullptr)
                            void* i_45 = i_10
                            ebx_1.b = eax_85.b
                            int32_t ecx_95
                            eax_84, ecx_95 = sub_45bde0(eax_85, *var_4ac_1, i_45, *(var_4ac_1 + 0x338), 
                                1, edi_15, 1, edi_15 + 4, 1)
                            bool cond:3_1 = ebx_1.b == 0
                            ebx_1 = var_4ac_1
                            
                            if (not(cond:3_1))
                                int32_t var_4d4_23 = ecx_95
                                __builtin_memset(&var_4e8_1, 0, 0x14)
                                sub_45bde0(eax_84, *ebx_1, i_45, 0xf, var_4e8_1, var_4e4_10, var_4e0_5, 
                                    var_4dc_6, var_4d8_10)
                        else
                            i = eax_80 - 2
                            
                            if (eax_80 != 2)
                                var_4d4_1 = "RollHandleOk"
                                var_4d8_1 = 0x3f81
                                goto label_462cdb
                            
                            int32_t var_4d4_22 = ecx_90
                            eax_84 = sub_45bde0(edi_15 + 4, *ebx_1, i_10, *(ebx_1 + 0x338), 1, edi_15, 
                                1, edi_15 + 4, 1)
                            var_4d8_10 = 0
                            var_4dc_6 = nullptr
                            var_4e0_5 = 0
                            var_4e4_10 = nullptr
                            var_4e8_1 = 1
                            sub_45bde0(eax_84, *ebx_1, i_10, 0xf, var_4e8_1, var_4e4_10, var_4e0_5, 
                                var_4dc_6, var_4d8_10)
                        int32_t* eax_86 = sub_457200(*ebx_1, *edi_15)
                        i_16 = &data_62d6c4
                        int32_t* i_35 = &data_62d6c4
                        var_4a4 = nullptr
                        i_12 = eax_86[0x22a]
                        int32_t* esi_17
                        
                        while (true)
                            i = sub_481430(i_35, &var_4a4)
                            esi_17 = var_4a4
                            
                            if (esi_17 == 0xffffffff)
                                var_4d4_1 = "LookupTray"
                                var_4d8_1 = 0x3c33
                                goto label_462cdb
                            
                            if (*esi_17 == 2 && esi_17[0x14] == i_12)
                                break
                            
                            i_35 = i_16
                        
                        int32_t* i_30 = sub_457200(*ebx_1, *edi_15)
                        i_12 = i_30
                        i_30[8].b = 0
                        int32_t* i_31 = sub_457200(*ebx_1, *(edi_15 + 4))
                        int32_t* i_36 = i_12
                        i_14 = i_31
                        char edx_39 = *(i_36 + 0x22)
                        uint32_t eax_89
                        eax_89.b = edx_39 != 0
                        int32_t eax_90
                        eax_90.b = edx_39 == 0
                        sub_45a830((eax_90 << 1) + 1, i_36, ebx_1, (eax_90 << 1) + 1, false, eax_89, 5, 
                            1, 0)
                        i = i_14
                        
                        if (*(i + 0x22) != 0)
                            var_4d4_1 = "RollHandleOk"
                            var_4d8_1 = 0x3f94
                            ecx_4 = "gfxGood.die.virtualDie == false"
                            break
                        
                        sub_45a830(i, i, ebx_1, 3, false, 0, 5, 1, 0)
                        sub_45ea40(esi_17)
                        edi_15 += 0xc
                        ecx_90 = var_4c0_6 + 1
                        var_4c0_6 = ecx_90
                        
                        if (ecx_90 s>= *(ebx_1 + 0x298))
                            goto label_462943
                    
                    goto label_462ce0
                case 0xd
                    int32_t* i_27 = *ebx_1
                    i_12 = i_27
                    void* i_42 = sub_452b90(i_27)
                    i_14 = &data_62d6c4
                    i_10 = i_42
                    int32_t edi_11 = 0
                    i_15 = nullptr
                    sub_481430(&data_62d6c4, &i_15)
                    int32_t* i_7 = i_15
                    
                    if (i_7 == 0xffffffff)
                        goto label_461cd8
                    
                    do
                        if (*i_7 == 1 && i_7[6] == i_12 && i_7[4] == 1)
                            int32_t esi_11 = *(i_42 + 0x4cc)
                            int32_t ecx_74 = 0
                            
                            if (esi_11 s> 0)
                                int32_t eax_53 = i_10 + 0x33c
                                
                                do
                                    ebx_1 = var_4ac_1
                                    
                                    if (*eax_53 == i_7[0xb])
                                        *(&var_470 + (edi_11 << 2)) = i_7
                                        edi_11 += 1
                                        break
                                    
                                    ecx_74 += 1
                                    eax_53 += 4
                                while (ecx_74 s< esi_11)
                            
                            i_42 = i_10
                        
                        i, ecx_17 = sub_481430(i_14, &i_15)
                        i_7 = i_15
                    while (i_7 != 0xffffffff)
                    
                    if (edi_11 == 0)
                        goto label_461cd8
                    
                    int32_t esi_12 = 0
                    
                    if (edi_11 s> 0)
                        do
                            int32_t edx_25 = *ebx_1
                            void* var_4d4_14 = ecx_17
                            void* ecx_76 = data_632804
                            i_12 = *(*(&var_470 + (esi_12 << 2)) + 0x2c)
                            i, ecx_17 = sub_45bde0(&i_12, edx_25, ecx_76, 0x10, 0, &i_12, 1, 0, 0)
                            esi_12 += 1
                        while (esi_12 s< edi_11)
                    
                    ecx_34 = data_6cfe4c
                    *(ebx_1 + 4) = 0x18
                    
                    if (ecx_34 != 0)
                        goto label_461eec
                    
                    goto label_461b96
                case 0xe
                    void* eax_65
                    eax_65, ecx_17 = sub_4539b0(ebx_1)
                    
                    if (eax_65 s> 0)
                        goto label_461cd8
                    
                    int32_t* i_29 = *ebx_1
                    i_12 = i_29
                    void* i_44 = sub_452b90(i_29)
                    i_14 = &data_62d6c4
                    i_10 = i_44
                    int32_t edi_13 = 0
                    i_15 = nullptr
                    sub_481430(&data_62d6c4, &i_15)
                    
                    for (int32_t* i_8 = i_15; i_8 != 0xffffffff; i_8 = i_15)
                        if (*i_8 == 1 && i_8[6] == i_12 && i_8[4] == 7)
                            int32_t esi_14 = *(i_44 + 0x4cc)
                            int32_t ecx_85 = 0
                            
                            if (esi_14 s> 0)
                                int32_t eax_69 = i_10 + 0x33c
                                
                                do
                                    ebx_1 = var_4ac_1
                                    
                                    if (*eax_69 == i_8[0xb])
                                        *(&var_358 + (edi_13 << 2)) = i_8
                                        edi_13 += 1
                                        break
                                    
                                    ecx_85 += 1
                                    eax_69 += 4
                                while (ecx_85 s< esi_14)
                            
                            i_44 = i_10
                        
                        sub_481430(i_14, &i_15)
                    
                    int32_t ecx_87 = 0
                    
                    if (edi_13 s> 0)
                        do
                            *(&var_470 + (ecx_87 << 2)) = *(*(&var_358 + (ecx_87 << 2)) + 0x2c)
                            ecx_87 += 1
                        while (ecx_87 s< edi_13)
                    
                    int32_t var_4d4_20 = ecx_87
                    sub_45bde0(&var_470, *ebx_1, data_632804, 0xc, 0, &var_470, edi_13, 0, 0)
                    *(ebx_1 + 4) = 0x1a
                    goto label_462c68
                case 0xf
                    void* eax_57
                    eax_57, ecx_17 = sub_4538d0(ebx_1)
                    
                    if (eax_57 s> 0)
                        goto label_461cd8
                    
                    int32_t* i_28 = *ebx_1
                    i_12 = i_28
                    void* i_43 = sub_452b90(i_28)
                    i_14 = &data_62d6c4
                    i_10 = i_43
                    int32_t edi_12 = 0
                    i_15 = nullptr
                    sub_481430(&data_62d6c4, &i_15)
                    
                    for (int32_t* i_9 = i_15; i_9 != 0xffffffff; i_9 = i_15)
                        if (*i_9 == 1 && i_9[6] == i_12 && i_9[4] == 3)
                            int32_t esi_13 = *(i_43 + 0x4cc)
                            int32_t ecx_79 = 0
                            
                            if (esi_13 s> 0)
                                int32_t eax_61 = i_10 + 0x33c
                                
                                do
                                    ebx_1 = var_4ac_1
                                    
                                    if (*eax_61 == i_9[0xb])
                                        *(&var_470 + (edi_12 << 2)) = i_9
                                        edi_12 += 1
                                        break
                                    
                                    ecx_79 += 1
                                    eax_61 += 4
                                while (ecx_79 s< esi_13)
                            
                            i_43 = i_10
                        
                        sub_481430(i_14, &i_15)
                    
                    int32_t ecx_81 = 0
                    
                    if (edi_12 s> 0)
                        do
                            *(&var_358 + (ecx_81 << 2)) = *(*(&var_470 + (ecx_81 << 2)) + 0x2c)
                            ecx_81 += 1
                        while (ecx_81 s< edi_12)
                    
                    int32_t var_4d4_17 = ecx_81
                    sub_45bde0(&var_358, *ebx_1, data_632804, 0xb, 0, &var_358, edi_12, 0, 0)
                    *(ebx_1 + 4) = 0x1c
                    goto label_462c68
                case 0x10
                    goto label_462cd1
    else
        data_632840 = 1
        data_62b220 = 0x24
    
    @__security_check_cookie@4(i_17 ^ &i_10)
    return i
}
