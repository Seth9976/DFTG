// 函数名称: sub_460430
// 虚拟地址: 0x460430
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int64_t* __fastcallsub_460430(int32_t arg1)
{
    // 第一条实际指令: void var_2d4
    void var_2d4
    int64_t* i = __security_cookie ^ &var_2d4
    int64_t* i_10 = i
    void* ecx = data_6cfe4c
    char const* const var_2ec_1
    int32_t var_2e8_1
    char const* const var_2e4_1
    char* ecx_1
    
    if (ecx != 0)
        void* eax_1
        int32_t edx_1
        eax_1, edx_1 = sub_452b90(*(ecx + 0xa68))
        void* ebx_1 = eax_1
        void* var_2cc_1 = ebx_1
        char var_2cd_1 = 0
        
        if (sub_453650(ebx_1) == 6)
            edx_1.b = arg1.b
            sub_45fa50(ebx_1, edx_1)
            i.b = 1
        label_460d52:
            
            if (arg1.b != 0)
                @__security_check_cookie@4(i_10 ^ &var_2d4)
                return i
            
            if (i.b != 0)
                int32_t var_1f8[0xc]
                sub_4c5670(data_126be00, &var_1f8)
                i = sub_4c5920(&var_1f8)
            
            @__security_check_cookie@4(i_10 ^ &var_2d4)
            return i
        
        int32_t* i_2
        int32_t var_1c8[0x46]
        
        if (sub_453650(ebx_1) != 0x1b)
            i = sub_453650(ebx_1)
            
            if (i == 0x17)
                @__security_check_cookie@4(i_10 ^ &var_2d4)
                return i
            
            int32_t* i_7
            int64_t* i_8
            
            if (sub_453650(ebx_1) == 0x19)
                int32_t ebx_3 = 0
                int64_t* i_23 = i_8
                void* esi_2 = sub_4539b0(var_2cc_1)
                i = &data_5ed2c4
                void* var_2b8_1 = esi_2
                void* const i_6 = &data_5ed2c4
                int64_t* i_27 = i_23
                
                while (true)
                    i_2 = *i
                    int32_t ecx_17 = *(var_2cc_1 + 0x2c0)
                    int32_t* edx_7
                    
                    if (ecx_17 == 0)
                        edx_7 = nullptr
                    else
                        edx_7 = sub_452c30(ecx_17)
                        i_23 = edx_7[0xa]
                        i_27 = i_23
                    
                    int64_t* i_4 = i_23
                    i = sub_4538b0(&i_7)
                    int32_t* i_24 = i_7
                    
                    while (edx_7 != i_24)
                        if (edx_7 == 0)
                        label_4607c8:
                            var_2e4_1 = "Dice::DiceIt::operator *"
                            var_2e8_1 = 0x5da
                            ecx_1 = &data_5e3f90
                            goto label_460dd1_2
                        
                        if (edx_7[2] == i_2)
                            int32_t ecx_18 = 0
                            int32_t esi_3 = *(var_2cc_1 + 0x4cc)
                            
                            if (esi_3 s<= 0)
                                esi_2 = var_2b8_1
                            else
                                i = var_2cc_1 + 0x33c
                                
                                do
                                    if (*i == edx_7[0xb])
                                        var_1c8[ebx_3] = edx_7
                                        ebx_3 += 1
                                        esi_2 = var_2b8_1 - 1
                                        bool cond:3_1 = var_2b8_1 != 1
                                        var_2b8_1 = esi_2
                                        
                                        if (cond:3_1)
                                            goto label_460724
                                        
                                        goto label_460749
                                    
                                    ecx_18 += 1
                                    i += 4
                                while (ecx_18 s< esi_3)
                                
                                esi_2 = var_2b8_1
                            label_460724:
                                i_24 = i_7
                        
                        i = i_4
                        
                        if (i != 0)
                            edx_7 = sub_452c30(i)
                            i = edx_7[0xa]
                            i_4 = i
                        else
                            edx_7 = nullptr
                    
                    if (esi_2 == 0)
                        break
                    
                    i = i_6 + 4
                    i_6 = i
                    
                    if (i == &data_5ed2e8)
                        break
                    
                    i_23 = i_27
                
            label_460749:
                int32_t esi_5 = 0
                
                if (ebx_3 s> 0)
                    i.b = 1
                    var_2cd_1 = 1
                    
                    do
                        i = sub_45a830(i, var_1c8[esi_5], var_2cc_1, 7, false, 1, 5, 1, arg1)
                        esi_5 += 1
                    while (esi_5 s< ebx_3)
                
                goto label_460d4e
            
            int32_t eax_22 = sub_453650(ebx_1)
            int32_t eax_23
            
            if (eax_22 != 0xf)
                eax_23 = sub_453650(ebx_1)
            
            int64_t* i_17
            
            if (eax_22 == 0xf || eax_23 == 0x11)
                int32_t eax_40 = sub_453650(ebx_1)
                int32_t* ecx_48 = *ebx_1
                int32_t** edx_15 = &i_7
                int32_t ebx_9
                int32_t edi_10
                
                if (eax_40 == 0xf)
                    edi_10 = eax_40 - 5
                    i_2 = 4
                    ebx_9 = eax_40 - 0xa
                    i = sub_453170(ecx_48, edx_15)
                    
                    if (i.b != 0)
                        goto label_460ccd
                    
                    var_2e4_1 = "RollHandleAuto"
                    var_2e8_1 = 0x3ab8
                    goto label_460dcc
                
                edi_10 = 0xb
                i_2 = 5
                int64_t** var_2e4_18 = &i_17
                ebx_9 = 6
                i = sub_4531b0(&i_17, edx_15, ecx_48)
                
                if (i.b != 0)
                label_460ccd:
                    int32_t eax_42 = sub_452ea0(var_2cc_1, ebx_9)
                    void* i_22 = i_7 - eax_42
                    void* i_15 = sub_452ea0(var_2cc_1, edi_10)
                    
                    if (i_22 s< i_15)
                        i_15 = i_22
                    
                    i = sub_45f820(&var_1c8, i_2, var_2cc_1, &var_1c8)
                    
                    if (i s< i_15)
                        i_15 = i
                    
                    int32_t esi_10 = 0
                    
                    if (i_15 s> 0)
                        void* ecx_52 = i_15 - 1
                        var_2cd_1 = 1
                        
                        do
                            uint32_t eax_45
                            eax_45.b = esi_10 == ecx_52
                            sub_45a830(eax_45, var_1c8[esi_10], var_2cc_1, ebx_9, false, eax_45, 5, 1, 
                                arg1)
                            esi_10 += 1
                            ecx_52 = i_15 - 1
                        while (esi_10 s< i_15)
                    
                    goto label_460d4e
                
                var_2e4_1 = "RollHandleAuto"
                var_2e8_1 = 0x3ac3
            label_460dcc:
                ecx_1 = "result"
            labelid_14:
                var_2ec_1 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
            else
                int32_t var_2a0
                
                if (sub_453650(ebx_1) == 0x13)
                    sub_452fc0(&i_2, ebx_1, 3)
                    int32_t* i_14 = i_2
                    Unlock(&i_2)
                    int32_t* i_25 = i_2
                    int32_t var_2e8_9
                    char const* const var_2e4_12
                    char* ecx_35
                    
                    if (i_14 != i_25)
                        i = i_8
                        int64_t* i_5 = i
                        
                        while (true)
                            if (i_14 == 0)
                                var_2e4_12 = "Tiles::TileIt::operator *"
                                var_2e8_9 = 0x2ac
                                goto label_460d9a
                            
                            i_2 = sub_4616b0(i_14)
                            int32_t eax_26 = sub_45b410(i_14)
                            int32_t var_2b4_1 = eax_26
                            i = sub_45b4c0(i_14)
                            i_7 = i
                            
                            if (eax_26 s< i)
                                int32_t ebx_6
                                
                                do
                                    int32_t ecx_28 = *(var_2cc_1 + 0x2e4)
                                    int64_t* i_18
                                    int32_t* i_13
                                    
                                    if (ecx_28 == 0)
                                        i_18 = i_5
                                        i_13 = nullptr
                                    else
                                        i_13 = sub_452c30(ecx_28)
                                        i_18 = i_13[0xa]
                                        i_5 = i_18
                                    
                                    int64_t* i_29 = i_18
                                    i = sub_4538b0(&i_17)
                                    int64_t* i_30 = i_17
                                    
                                    if (i_13 != i_30)
                                        while (true)
                                            if (i_13 == 0)
                                                goto label_460d90
                                            
                                            if (*i_13 != 1)
                                                var_2e4_12 = "DieGetColor"
                                                var_2e8_9 = 0x3d3f
                                                ecx_35 = "die.type == ROLLGFX_DIE"
                                                goto label_460da9
                                            
                                            i = i_13[2] - 1
                                            
                                            if (i == i_2)
                                                int32_t var_2e4_11 = arg1
                                                ebx_1 = var_2cc_1
                                                var_2cd_1 = 1
                                                sub_45a730(i, i_13, ebx_1, i_14, 1, i_29.b)
                                                
                                                if (sub_453510(*ebx_1, 0xc) == 0)
                                                    goto label_460958
                                                
                                                i = sub_453400(ebx_1)
                                                
                                                if (i.b == 0)
                                                    goto label_460958
                                                
                                                break
                                            
                                            if (i_29 != 0)
                                                i = sub_452c30(i_29)
                                                i_13 = i
                                                i_29 = i_13[0xa]
                                            else
                                                i_13 = nullptr
                                            
                                            if (i_13 == i_30)
                                                goto label_46091d
                                    
                                label_46091d:
                                    ebx_6 = var_2b4_1 + 1
                                    var_2b4_1 = ebx_6
                                while (ebx_6 s< i_7)
                            
                            int32_t ecx_32 = i_14[0x10]
                            
                            if (ecx_32 != 0)
                                i = sub_452cc0(ecx_32)
                                i_14 = i
                            else
                                i_14 = nullptr
                            
                            if (i_14 == i_25)
                                ebx_1 = var_2cc_1
                                break
                    
                label_460958:
                    int32_t edx_10 = sub_45ef30(ebx_1, &var_1c8)
                    void* i_26 = &data_5ed2a0
                    int64_t* i_19 = i_8
                    int32_t var_2c4_3 = edx_10
                    i_2 = &data_5ed2a0
                    int64_t* i_28 = i_19
                label_460970:
                    int32_t esi_6 = *i_26
                    int32_t var_2b4_2 = esi_6
                label_460976:
                    int32_t ecx_34 = *(ebx_1 + 0x2e4)
                    int32_t* i_11
                    
                    if (ecx_34 == 0)
                        i_11 = nullptr
                    else
                        edx_10 = var_2c4_3
                        i_11 = sub_452c30(ecx_34)
                        i_19 = i_11[0xa]
                        i_28 = i_19
                    
                    int64_t* i_31 = i_19
                    int32_t* i_16 = i_11
                    i_17 = i_31
                    i = sub_4538b0(&var_2a0)
                    
                    while (true)
                        if (i_11 == var_2a0)
                            i_26 = &i_2[1]
                            i_2 = i_26
                            
                            if (i_26 == &data_5ed2c4)
                                goto label_460d4e
                            
                            ebx_1 = var_2cc_1
                            i_19 = i_28
                            goto label_460970
                        
                        if (i_11 == 0)
                            break
                        
                        if (i_11[2] == esi_6)
                            int32_t esi_7 = 0
                            
                            if (edx_10 s> 0)
                                int32_t ebx_7 = edx_10 - 1
                                
                                do
                                    int32_t eax_33 = ebx_7
                                    
                                    if (i_11[2] != 7)
                                        eax_33 = esi_7
                                    
                                    int32_t* i_20 = var_1c8[eax_33]
                                    i_7 = i_20
                                    int32_t eax_34 = sub_45b410(i_20)
                                    int32_t* i_21 = i_7
                                    i = sub_45b4c0(i_21)
                                    
                                    if (eax_34 s< i)
                                        int32_t var_2e4_14 = arg1
                                        ebx_1 = var_2cc_1
                                        var_2cd_1 = 1
                                        sub_45a730(i, i_16, ebx_1, i_7, 1, i_21.b)
                                        
                                        if (sub_453510(*ebx_1, 0xc) == 0)
                                            goto label_460d4e
                                        
                                        if (sub_453400(ebx_1).b == 0)
                                            goto label_460d4e
                                        
                                        edx_10 = var_2c4_3
                                        esi_6 = var_2b4_2
                                        i_19 = i_28
                                        goto label_460976
                                    
                                    edx_10 = var_2c4_3
                                    esi_7 += 1
                                    i_11 = i_16
                                    ebx_7 -= 1
                                while (esi_7 s< edx_10)
                                
                                i_31 = i_17
                            
                            esi_6 = var_2b4_2
                        
                        if (i_31 != 0)
                            i = sub_452c30(i_31)
                            edx_10 = var_2c4_3
                            i_11 = i
                            i_16 = i_11
                            i_31 = i_11[0xa]
                            i_17 = i_31
                        else
                            i_11 = nullptr
                            i_16 = nullptr
                    
                label_460d90:
                    var_2e4_12 = "Dice::DiceIt::operator *"
                    var_2e8_9 = 0x5da
                label_460d9a:
                    ecx_35 = &data_5e3f90
                label_460da9:
                    sub_489550(i, &data_5b2591, ecx_35, 
                        "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", var_2e8_9, var_2e4_12)
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                if (sub_453650(ebx_1) != 0x15)
                    if (sub_453650(ebx_1) != 4)
                    label_460d4e:
                        i.b = var_2cd_1
                        goto label_460d52
                    
                    int32_t esi_8 = 0
                    i = *(ebx_1 + 0x300)
                    void* edi_9 = *(ebx_1 + 0x308) + i
                    
                    if (edi_9 s<= 0xa)
                        if (edi_9 s> 0)
                            i = &data_5ed274
                            i_2 = &data_5ed274
                            
                            do
                                int32_t var_2e4_15 = 3
                                i_7 = *i
                                sub_453870(&i_17, ebx_1, var_2e4_15)
                                int64_t* i_12 = i_17
                                int32_t var_2a4
                                int32_t edx_13 = var_2a4
                                i = sub_4538b0(&var_2a0)
                                int32_t ebx_8 = var_2a0
                                
                                while (i_12 != ebx_8)
                                    if (i_12 == 0)
                                        goto label_4607c8
                                    
                                    if (*i_12 != 1)
                                        var_2e4_1 = "RollHandleAuto"
                                        var_2e8_1 = 0x3b71
                                        ecx_1 = "gfx.type == ROLLGFX_DIE"
                                        goto label_460dd1_2
                                    
                                    if (i_12[2].d != 3)
                                        var_2e4_1 = "RollHandleAuto"
                                        var_2e8_1 = 0x3b72
                                        ecx_1 = "gfx.die.where == DW_CITIZENRY"
                                        goto label_460dd1_2
                                    
                                    if (*(i_12 + 0x22) != 0)
                                        var_2e4_1 = "RollHandleAuto"
                                        var_2e8_1 = 0x3b73
                                        ecx_1 = "gfx.die.virtualDie == false"
                                        goto label_460dd1_2
                                    
                                    i = i_7
                                    
                                    if (i_12[1].d == i)
                                        var_1c8[esi_8] = i_12
                                        esi_8 += 1
                                        void* temp5_1 = edi_9
                                        edi_9 -= 1
                                        
                                        if (temp5_1 == 1)
                                            ebx_1 = var_2cc_1
                                            goto label_460c58
                                    
                                    if (edx_13 != 0)
                                        i = sub_452c30(edx_13)
                                        i_12 = i
                                        edx_13 = i_12[5].d
                                    else
                                        i_12 = nullptr
                                
                                ebx_1 = var_2cc_1
                                
                                if (edi_9 == 0)
                                    break
                                
                                i = &i_2[1]
                                i_2 = i
                            while (i != "true")
                        
                    label_460c58:
                        sub_474a90(i, &var_1c8, ebx_1, esi_8, arg1)
                        i.b = esi_8 s> 0
                        goto label_460d52
                    
                    var_2e4_1 = "RollHandleAuto"
                    var_2e8_1 = 0x3b69
                    ecx_1 = "pgui.GameCredits() <= 10"
                label_460dd1:
                    var_2ec_1 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
                else
                    int32_t eax_36 = sub_4603d0(ebx_1)
                    
                    if (eax_36 == 0)
                        sub_45fd80(ebx_1, arg1.b)
                        i.b = 1
                        goto label_460d52
                    
                    if (eax_36 == 1)
                        goto label_460d4e
                    
                    i = eax_36 - 2
                    
                    if (eax_36 == 2)
                        goto label_460d4e
                    
                    var_2e4_1 = "RollHandleAuto"
                    var_2e8_1 = 0x3b50
                    ecx_1 = "Halt"
                label_460dd1_1:
                    var_2ec_1 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
        else
            void* edi_1 = var_2cc_1
            int32_t ebx_2 = 0
            void* eax_4 = sub_4538d0(edi_1)
            void* const i_1 = &data_5ed2e8
            void* var_2c4_1 = eax_4
            void* const i_3 = &data_5ed2e8
            int32_t var_b0[0x29]
            int32_t* edx_3
            
            do
                int32_t j = 0
                i_2 = *i_1
                
                if (*(edi_1 + 0x4cc) s> 0)
                    void* ecx_6 = var_2cc_1
                    void* edi_2 = ecx_6 + 0x33c
                    
                    do
                        int32_t* eax_5
                        eax_5, edx_3 = sub_457200(*ecx_6, *edi_2)
                        
                        if (eax_5[2] != i_2)
                            eax_4 = var_2c4_1
                        else
                            var_b0[ebx_2] = eax_5
                            ebx_2 += 1
                            eax_4 = var_2c4_1 - 1
                            bool cond:0_1 = var_2c4_1 == 1
                            var_2c4_1 = eax_4
                            
                            if (cond:0_1)
                                goto label_460548
                        
                        ecx_6 = var_2cc_1
                        j += 1
                        edi_2 += 4
                    while (j s< *(ecx_6 + 0x4cc))
                    
                    i_1 = i_3
                    edi_1 = var_2cc_1
                
                if (eax_4 == 0)
                    break
                
                i_1 += 4
                i_3 = i_1
            while (i_1 != &data_5ed30c)
            
        label_460548:
            void* eax_7 = nullptr
            void* var_2c4_2 = nullptr
            
            if (ebx_2 s<= 0)
            label_46063b:
                edx_3.b = arg1.b
                sub_45fa50(var_2cc_1, edx_3)
                i.b = 1
                goto label_460d52
            
            void* edi_3 = var_2cc_1
            
            while (true)
                int32_t* esi_1 = var_b0[eax_7]
                
                if (esi_1[4] != 3 || *(esi_1 + 0x21) != 0)
                    i = sub_45a640(eax_7, esi_1, var_2cc_1, 3, 1, arg1.b)
                    
                    if (esi_1[4] != 3)
                        var_2e4_1 = "QueueMoveDie"
                        var_2e8_1 = 0x229b
                        ecx_1 = "gfx.die.where == where"
                        break
                    
                    void* var_2e4_4 = 0x8c
                    *(esi_1 + 0x21) = 0
                    char var_2e8_4 = 0
                    uint32_t var_284[0x4]
                    uint32_t (* var_2ec_3)[0x4] = &var_284
                    esi_1[7] = 0
                    int32_t var_28c_1 = 0
                    _memset(var_2ec_3, var_2e8_4, var_2e4_4)
                    char var_2e4_5 = arg1.b
                    int32_t var_294_1 = sub_459da0(3)
                    int32_t var_298 = esi_1[6]
                    int64_t* i_9 = i
                    int32_t var_288_1 = 0xffffffff
                    __builtin_memcpy(&var_1c8, &var_298, 0xa0)
                    sub_4528c0(var_2c4_2, &var_1c8, var_b0[var_2c4_2] + 0x70, 5, var_2e4_5)
                    edi_3 = var_2cc_1
                else
                    sub_45aa00(eax_7, esi_1, edi_3, 3, arg1)
                
                eax_7 = var_2c4_2 + 1
                var_2c4_2 = eax_7
                
                if (eax_7 s>= ebx_2)
                    goto label_46063b
            
        label_460dd1_2:
            var_2ec_1 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
    else
        var_2e4_1 = "GetClient"
        var_2e8_1 = 0x75
        var_2ec_1 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx_1 = "gClient"
    
    sub_489550(i, &data_5b2591, ecx_1, var_2ec_1, var_2e8_1, var_2e4_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
