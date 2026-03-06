// 函数名称: sub_4781f0
// 虚拟地址: 0x4781f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4781f0(int32_t* arg1)
{
    // 第一条实际指令: void* var_d74
    void* var_d74
    int32_t eax_1 = __security_cookie ^ &var_d74
    int32_t* ebx = arg1
    int32_t* var_d6c = ebx
    int32_t result = ebx[3]
    
    if (result s<= 0)
        int32_t ecx_2 = *ebx
        char const* const var_d8c_4
        int32_t var_d88_1
        char const* const var_d84_1
        char* ecx_3
        
        if (ebx[1] == ecx_2 && ebx[7] != 0)
            var_d84_1 = "OpponentTurnUpdate"
            var_d88_1 = 0x7679
            ecx_3 = "state.GetState() == REVEAL_NONE"
        label_479fc1:
            var_d8c_4 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
        label_479fcb:
            sub_489550(result, &data_5b2591, ecx_3, var_d8c_4, var_d88_1, var_d84_1)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        int32_t result_5 = ebx[7]
        uint32_t (* var_d8c_21)[0x4]
        char var_d88_13
        void* var_d84_16
        void* eax_21
        uint32_t (* eax_52)[0x4]
        
        switch (result_5)
            case 0
                nop
            case 1
                ebx[6].b = 1
                
                if (ecx_2 u> 9)
                    var_d84_1 = "OpponentTurnUpdate"
                    var_d88_1 = 0x770a
                    goto label_479fbc
                
                switch (ecx_2)
                    case 0, 8
                    label_4784d4:
                        sub_477e70(ebx)
                        goto label_479f8c
                    case 1
                        int32_t esi_1 = 0
                        
                        if (sub_425e70() - 1 s<= 0)
                        label_478378:
                            ebx[7] = 2
                            ebx[4].b = 1
                            goto label_479f8c
                        
                        while (true)
                            uint32_t esi_3 = sub_425f70(esi_1 + 1)
                            
                            if (sub_4781a0(esi_3) == 0)
                                result = esi_3 * 0x2d78
                                
                                if (*(result + 0x6fae10) != 2)
                                    var_d84_1 = "OpponentTurnUpdate"
                                    var_d88_1 = 0x7697
                                    ecx_3 = "setup.numTiles == 2"
                                    break
                                
                                var_d74 = sub_452b90(esi_3)
                                int32_t i = 0
                                int32_t result_2 = result
                                
                                if (*(result_2 + 0x6fae10) s> 0)
                                    void* esi_4 = result_2 + 0x6fae08
                                    
                                    do
                                        int32_t* eax_7 =
                                            sub_45b360(result_2, *(esi_4 - 0x10), esi_3, *(esi_4 - 8))
                                        int32_t edx_2 = *esi_4
                                        int32_t ecx_8
                                        ecx_8.b = edx_2 != 4
                                        sub_45b790(eax_7, eax_7, var_d74, edx_2, ecx_8)
                                        result_2 = result
                                        esi_4 += 4
                                        i += 1
                                    while (i s< *(result_2 + 0x6fae10))
                                    
                                    ebx = var_d6c
                                
                                void* eax_8 = esi_3 * 0x4c
                                *(eax_8 + 0x632848) = 1
                                *(eax_8 + &data_632844) = 1
                            
                            esi_1 += 1
                            
                            if (esi_1 s>= sub_425e70() - 1)
                                goto label_478378
                        
                        goto label_479fc1
                    case 2
                        int32_t esi_5 = 0
                        
                        if (sub_425e70() - 1 s> 0)
                            int32_t eax_19
                            
                            do
                                uint32_t eax_13 = sub_425f70(esi_5 + 1)
                                var_d74 = eax_13
                                uint32_t i_1 = sub_452b90(eax_13)
                                uint32_t i_23 = i_1
                                uint32_t i_21 = 0
                                
                                if (*(eax_13 * 0x2d78 + 0x6fb164) s> 0)
                                    void* esi_7 = eax_13 * 0x2d78 + 0x6fb124
                                    
                                    do
                                        sub_477e00(i_1, eax_13, *(esi_7 - 0x60), *(esi_7 - 0x20), 
                                            *(esi_7 - 0x40), *esi_7, *(esi_7 + 0x20))
                                        esi_7 += 4
                                        i_1 = i_21 + 1
                                        i_21 = i_1
                                    while (i_1 s< *(eax_13 * 0x2d78 + 0x6fb164))
                                
                                int32_t i_22 = 0
                                
                                if (*(eax_13 * 0x2d78 + 0x6fae14) s> 0)
                                    void* esi_8 = eax_13 * 0x2d78 + 0x6faeb8
                                    int32_t i_2
                                    
                                    do
                                        int32_t* eax_15 = sub_457200(eax_13, *(esi_8 - 0xa0))
                                        int32_t ecx_14 = *esi_8
                                        esi_8 += 4
                                        eax_15[3] = ecx_14
                                        i_2 = i_22 + 1
                                        i_22 = i_2
                                    while (i_2 s< *(eax_13 * 0x2d78 + 0x6fae14))
                                
                                int32_t i_3 = 0
                                
                                if (*(eax_13 * 0x2d78 + 0x6fb0c0) s> 0)
                                    void* ebx_3 = eax_13 * 0x2d78 + 0x6faff8
                                    
                                    do
                                        int32_t* eax_17 = sub_457200(var_d74, *(ebx_3 - 0xa0))
                                        sub_45a830(eax_17, eax_17, i_23, *ebx_3, 
                                            *(eax_13 * 0x2d78 + 0x6fae14 + i_3 + 0x284), 0, 0, 1, 0)
                                        i_3 += 1
                                        ebx_3 += 4
                                    while (i_3 s< *(eax_13 * 0x2d78 + 0x6fb0c0))
                                
                                _memset(eax_13 * 0x2d78 + 0x6fae14, 0, 0x354)
                                esi_5 += 1
                                eax_19 = sub_425e70() - 1
                            while (esi_5 s< eax_19)
                            ebx = var_d6c
                        
                        goto label_4784d4
                    case 3
                        ebx[7] = 3
                        ebx[4].b = 1
                        ebx[2] = 1
                        goto label_479f8c
                    case 4, 5
                        ebx[7] = 7
                        ebx[4].b = 1
                        ebx[2] = 1
                        goto label_479f8c
                    case 6
                        ebx[7] = 0xe
                        ebx[4].b = 1
                        ebx[2] = 1
                        goto label_479f8c
                    case 7
                        ebx[7] = 0x13
                        ebx[4].b = 1
                        ebx[2] = 1
                        goto label_479f8c
                    case 9
                        ebx[7] = 0x1a
                        ebx[4].b = 1
                        ebx[2] = 1
                        goto label_479f8c
            case 2
                if (ebx[4].b != 0)
                    ebx[3] = *((sub_459a20() << 2) + &data_5ed1e0)
                    goto label_479f8c
                
                int32_t esi_9 = 0
                
                if (sub_425e70() - 1 s<= 0)
                    goto label_4784d4
                
                int32_t eax_28
                
                do
                    result = sub_425e70()
                    void* ecx_20 = data_6cfe4c
                    
                    if (ecx_20 == 0)
                        var_d84_1 = "GetClient"
                        var_d88_1 = 0x75
                        var_d8c_4 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
                        ecx_3 = "gClient"
                        goto label_479fcb
                    
                    int32_t ecx_23 = *(ecx_20 + 0xa68) + 1 + esi_9
                    
                    if (ecx_23 s>= result)
                        ecx_23 -= result
                    
                    esi_9 += 1
                    (&data_632844)[ecx_23 * 0x4c] = 0
                    eax_28 = sub_425e70() - 1
                while (esi_9 s< eax_28)
                sub_477e70(ebx)
                goto label_479f8c
            case 3
                eax_21 = sub_425f70(ebx[2]) * 0x2d78
                
                if (*(eax_21 + 0x6fb800) == 0)
                    goto label_478855
                
                ebx[7] = 4
                ebx[4].b = 1
                goto label_479f8c
            case 4
                if (ebx[4].b != 0)
                    uint32_t ecx_26 = sub_425f70(ebx[2])
                    uint32_t var_d68_2 = ecx_26
                    void* esi_11 = ecx_26 * 0x2d78 + 0x6fb168
                    int32_t edi_3 = *(esi_11 + 0x698)
                    
                    if (edi_3 != 0)
                        int32_t eax_30 = *(esi_11 + 0x34c)
                        int32_t* var_d58_1 = sub_452b90(ecx_26)
                        int32_t var_d5c_2 = 0
                        
                        if (edi_3 s> 0)
                            int32_t* edi_4 = esi_11 + 0x354
                            int32_t ecx_31
                            
                            do
                                void* eax_32
                                eax_32.b = *edi_4 == 5
                                var_d74 = eax_32
                                int32_t eax_33 = 0
                                uint32_t edx_8
                                
                                if (eax_30 s> 0)
                                    while (true)
                                        edx_8 = *(esi_11 + (eax_33 << 3) + 0x11c)
                                        
                                        if (edx_8 == edi_4[-1])
                                            break
                                        
                                        eax_33 += 1
                                        
                                        if (eax_33 s>= eax_30)
                                            goto label_4786b9
                                
                                int32_t result_4
                                
                                if (eax_30 s<= 0 || eax_33 == 0xffffffff)
                                label_4786b9:
                                    result = sub_4570b0(edi_4[-1])
                                    result_4 = result
                                    
                                    if (result_4 == 0)
                                        var_d84_1 = "LookupTile"
                                        var_d88_1 = 0x1138
                                        ecx_3 = "tile"
                                        goto label_479fc1
                                else
                                    int32_t* result_7 = sub_45b360(eax_33, edx_8, var_d68_2, 
                                        *(esi_11 + (eax_33 << 3) + 0x120))
                                    result = sub_45b790(result_7, result_7, var_d58_1, 1, var_d74)
                                    result_4 = result_7
                                
                                if (result_4 == 0)
                                    var_d84_1 = "OpponentGainTiles"
                                    var_d88_1 = 0x75f2
                                    ecx_3 = &data_5ebb48
                                    goto label_479fc1
                                
                                int32_t eax_34
                                eax_34.b = edi_4[1].b != 0
                                sub_4554e0(eax_34, result_4, var_d58_1, *edi_4, 3, 5, 0, eax_34, 0)
                                ecx_31 = var_d5c_2 + 1
                                edi_4 = &edi_4[3]
                                var_d5c_2 = ecx_31
                            while (ecx_31 s< edi_3)
                        
                        ecx_26 = var_d68_2
                    
                    int32_t eax_35 = *(esi_11 + 0x118)
                    
                    if (eax_35 != 0)
                        int32_t* eax_36 = sub_452b90(ecx_26)
                        int32_t edi_5 = 0
                        
                        if (eax_35 s> 0)
                            do
                                int32_t* eax_37 = sub_457110(*(esi_11 + (edi_5 << 2)), var_d68_2)
                                
                                if (eax_37 == 0)
                                    sub_4892e0("tried to discard tile another player had taken")
                                else
                                    sub_4554e0(eax_37, eax_37, eax_36, 1, 1, 5, 0, 0, 0)
                                
                                edi_5 += 1
                            while (edi_5 s< eax_35)
                            
                            ebx = var_d6c
                    
                    void* eax_38 = sub_452b90(var_d68_2)
                    
                    if (*(esi_11 + 0x7e4) s> 0)
                        void* edi_6 = esi_11 + 0x6a4
                        int32_t i_4 = 0
                        
                        do
                            int32_t* eax_39 = sub_457200(var_d68_2, *edi_6)
                            int32_t var_d84_12 = 0
                            sub_461ad0(eax_39, eax_39, eax_38, 0)
                            i_4 += 1
                            edi_6 += 4
                        while (i_4 s< *(esi_11 + 0x7e4))
                        
                        ebx = var_d6c
                    
                    result = *((sub_459a20() << 2) + &data_5ed1e0)
                    ebx[3] = result
                
                if (result s> 0)
                    goto label_479f8c
                
                eax_21 = sub_425f70(ebx[2]) * 0x2d78
            label_478855:
                
                if (*(eax_21 + 0x6fb804) != 0 || *(eax_21 + 0x6fb808) != 0)
                    ebx[7] = 5
                    ebx[4].b = 1
                    goto label_479f8c
                
                ebx[7] = 6
                ebx[4].b = 1
                goto label_479f8c
            case 5
                if (ebx[4].b == 0)
                label_478a0e:
                    
                    if (result s> 0)
                        goto label_479f8c
                    
                    ebx[7] = 6
                    ebx[4].b = 1
                    goto label_479f8c
                
                result = sub_425f70(ebx[2])
                void* edi_7 = result * 0x2d78
                int32_t* result_1 = result
                void* var_d5c_4 = edi_7
                
                if (*(edi_7 + 0x6fb804) == 0 && *(edi_7 + 0x6fb808) == 0)
                    var_d84_1 = "OpponentTurnUpdate"
                    var_d88_1 = 0x77b7
                    ecx_3 = "explore.creditsStock != 0 || explore.creditsOther != 0"
                    goto label_479fc1
                
                void* esi_12 = sub_452b90(result)
                int32_t eax_43 = *(edi_7 + 0x6fb808)
                var_d74 = esi_12
                uint32_t eax_44 = eax_43 + *(edi_7 + 0x6fb804)
                
                if (eax_43 != neg.d(*(edi_7 + 0x6fb804)))
                    if (eax_44 s> 0)
                        int32_t var_7b0[0xc]
                        sub_4c5670(data_126be7c, &var_7b0)
                        sub_4c5920(&var_7b0)
                    
                    sub_452730(esi_12, 0, eax_44)
                    
                    if (eax_44 s<= 0)
                        *(esi_12 + 0x318) += eax_44
                    else
                        *(esi_12 + 0x310) += eax_44
                    
                    uint32_t (* eax_45)[0x4] = sub_481490(&data_62d6c4)
                    int32_t var_d44_1 = 0
                    void* var_d84_14 = 0x8c
                    char var_d88_11 = 0
                    *eax_45 = 3
                    (*eax_45)[0x16] = 0
                    uint32_t var_d3c[0x8][0x4]
                    uint32_t (* var_d8c_7)[0x8][0x4] = &var_d3c
                    (*eax_45)[0x17] = *esi_12
                    eax_45[6][0] = eax_44
                    (*eax_45)[0x19].b = 0
                    (*eax_45)[0x1a] = 5
                    _memset(var_d8c_7, var_d88_11, var_d84_14)
                    int32_t var_d50 = *esi_12
                    int32_t var_d4c_1 = 0x26
                    int32_t var_d48_1 = 0xffffffff
                    int32_t var_d40_1 = 0xffffffff
                    void var_630
                    __builtin_memcpy(&var_630, &var_d50, 0xa0)
                    sub_452860(&eax_45[7], &var_630)
                    ebx = var_d6c
                    esi_12 = var_d74
                    edi_7 = var_d5c_4
                
                if (*(edi_7 + 0x6fba90) s> 0)
                    void* edi_9 = edi_7 + 0x6fb950
                    int32_t i_5 = 0
                    
                    do
                        int32_t* eax_47 = sub_457200(result_1, *edi_9)
                        int32_t var_d84_15 = 0
                        sub_461ad0(eax_47, eax_47, esi_12, 0)
                        edi_9 += 4
                        i_5 += 1
                    while (i_5 s< *(var_d5c_4 + 0x6fba90))
                    
                    ebx = var_d6c
                
                result = *((sub_459a20() << 2) + &data_5ed1e0)
                ebx[3] = result
                goto label_478a0e
            case 6
                var_d84_16 = 0x92c
                var_d88_13 = 0
                eax_52 = sub_425f70(ebx[2]) * 0x2d78 + 0x6fb168
            label_479f7c:
                var_d8c_21 = eax_52
            label_479f7d:
                _memset(var_d8c_21, var_d88_13, var_d84_16)
                sub_477f30(ebx)
                goto label_479f8c
            case 7
                if (*(sub_478140(ebx) + 0xc80) s<= 0)
                    ebx[7] = 0xd
                    ebx[4].b = 1
                else
                    ebx[5] = 0
                    ebx[7] = 8
                    ebx[4].b = 1
                
                goto label_479f8c
            case 8
                void* esi_13 = sub_4780c0(ebx)
                void* var_d5c_5 = esi_13
                int32_t eax_61
                
                if (ebx[4].b == 0)
                    eax_61 = ebx[3]
                else
                    int32_t* eax_55 = sub_425f70(ebx[2])
                    int32_t i_6 = 0
                    var_d74 = sub_452b90(eax_55)
                    
                    if (*(esi_13 + 0x18) s> 0)
                        do
                            int32_t* eax_57 = sub_457200(eax_55, *(esi_13 + (i_6 << 2)))
                            uint32_t edx_20
                            edx_20.b = i_6 == *(var_d5c_5 + 0x18) - 1
                            int32_t eax_58
                            eax_58.b = *ebx != 4
                            sub_45a830(eax_58 + 5, eax_57, var_d74, eax_58 + 5, false, edx_20, 5, 1, 0)
                            esi_13 = var_d5c_5
                            i_6 += 1
                        while (i_6 s< *(esi_13 + 0x18))
                    
                    eax_61 = *((sub_459a20() << 2) + &data_5ed1d4)
                    ebx[3] = eax_61
                
                if (eax_61 s<= 0)
                    ebx[4].b = 1
                    int32_t ecx_59
                    ecx_59.b = *(esi_13 + 0x50) s<= 0
                    ebx[7] = (ecx_59 << 2) + 9
                
                goto label_479f8c
            case 9
                void* eax_63 = sub_4780c0(ebx)
                int32_t eax_68
                
                if (ebx[4].b == 0)
                    eax_68 = ebx[3]
                else
                    void* eax_64 = sub_425f70(ebx[2])
                    var_d74 = eax_64
                    uint32_t eax_65 = sub_452b90(eax_64)
                    int32_t i_7 = 0
                    
                    if (*(eax_63 + 0x50) s> 0)
                        void* esi_16 = eax_63 + 0x38
                        
                        do
                            int32_t* eax_66 = sub_457200(var_d74, *(esi_16 - 0x18))
                            uint32_t edx_23
                            edx_23.b = i_7 == *(eax_63 + 0x18) - 1
                            sub_45a830(eax_66, eax_66, eax_65, *esi_16, false, edx_23, 5, 1, 0)
                            i_7 += 1
                            esi_16 += 4
                        while (i_7 s< *(eax_63 + 0x50))
                        
                        ebx = var_d6c
                    
                    eax_68 = *((sub_459a20() << 2) + &data_5ed1c8)
                    ebx[3] = eax_68
                
                if (eax_68 s<= 0)
                    ebx[7] = 0xa
                    ebx[4].b = 1
                
                goto label_479f8c
            case 0xa
                if (ebx[4].b != 0)
                    uint32_t eax_69 = sub_425f70(ebx[2])
                    int32_t* eax_70 = sub_452b90(eax_69)
                    var_d74 = eax_70
                    eax_70[0x2f6] = 1
                    void* eax_71 = sub_4780c0(ebx)
                    int32_t ecx_71 = *(eax_71 + 0x54)
                    int32_t* eax_72 = sub_4571c0()
                    int32_t var_d84_19 = ecx_71
                    uint32_t var_d60_4 = eax_72
                    void* eax_73 = sub_455e80(eax_72, eax_72, eax_70, 0, 1)
                    int32_t i_20 = 0
                    
                    if (*(eax_71 + 0x7c) s> 0)
                        eax_73 = eax_71 + 0x6c
                        void* var_d64_3 = eax_73
                        int32_t i_8
                        
                        do
                            void* eax_74 = sub_457200(eax_69, *(eax_73 - 0x10))
                            int32_t* edi_11 = eax_74
                            result = sub_45a470(eax_74, edi_11, var_d74, 1, 0)
                            edi_11[0xb] = 0x27
                            
                            if (*(eax_71 + 0x7c) != 1)
                                var_d84_1 = "OpponentTurnUpdate"
                                var_d88_1 = 0x7837
                                ecx_3 = "deploy.numDiceDestroyed == 1"
                                goto label_479fc1
                            
                            int32_t eax_75 = sub_454ce0(edi_11)
                            void* var_d84_21 = var_d64_3
                            int32_t i_24 = i_20
                            *var_d64_3 = eax_75
                            sub_455fb0(eax_75, edi_11, var_d64_3, var_d60_4)
                            i_8 = i_20 + 1
                            eax_73 = var_d64_3 + 4
                            i_20 = i_8
                            var_d64_3 = eax_73
                        while (i_8 s< *(eax_71 + 0x7c))
                    
                    if (*(eax_71 + 0xc0) s> 0)
                        void* edi_12 = eax_71 + 0x80
                        int32_t i_9 = 0
                        
                        do
                            uint32_t ecx_78 = eax_69
                            uint32_t (* eax_77)[0x4] =
                                sub_45b310(eax_73, *edi_12, ecx_78, *(edi_12 + 0x30))
                            int32_t* edx_30
                            
                            if (*(edi_12 + 0x10) != 4)
                                edx_30 = eax_77
                            else
                                ecx_78 = eax_77
                                edx_30 = eax_77
                                edx_30[3] = sub_45b9f0(ecx_78)
                            
                            uint32_t var_d84_23 = ecx_78
                            int32_t eax_80 = *(eax_71 + 0x7c) + i_9
                            int32_t var_d88_18 = eax_80
                            eax_73 = sub_455fb0(eax_80, edx_30, ecx_78, var_d60_4)
                            i_9 += 1
                            edi_12 += 4
                        while (i_9 s< *(eax_71 + 0xc0))
                        
                        ebx = var_d6c
                    
                    uint32_t edi_13 = *(eax_71 + 0xc4)
                    
                    if (edi_13 != 0)
                        if (edi_13 s> 0)
                            int32_t var_660[0xc]
                            sub_4c5670(data_126be7c, &var_660)
                            sub_4c5920(&var_660)
                        
                        void* esi_18 = var_d74
                        sub_452730(esi_18, 0, edi_13)
                        
                        if (edi_13 s<= 0)
                            *(esi_18 + 0x318) += edi_13
                        else
                            *(esi_18 + 0x310) += edi_13
                        
                        uint32_t (* eax_81)[0x4] = sub_481490(&data_62d6c4)
                        int32_t var_8e4_1 = 0
                        void* var_d84_25 = 0x8c
                        char var_d88_20 = 0
                        *eax_81 = 3
                        (*eax_81)[0x16] = 0
                        uint32_t var_8dc[0x8][0x4]
                        uint32_t (* var_d8c_13)[0x8][0x4] = &var_8dc
                        (*eax_81)[0x17] = *esi_18
                        eax_81[6][0] = edi_13
                        (*eax_81)[0x19].b = 0
                        (*eax_81)[0x1a] = 8
                        _memset(var_d8c_13, var_d88_20, var_d84_25)
                        int32_t var_8f0 = *esi_18
                        int32_t var_8ec_1 = 0x26
                        int32_t var_8e8_1 = 0xffffffff
                        int32_t var_8e0_1 = 0xffffffff
                        void var_590
                        __builtin_memcpy(&var_590, &var_8f0, 0xa0)
                        sub_452860(&eax_81[7], &var_590)
                        ebx = var_d6c
                    
                    result = *((sub_459a20() << 2) + &data_5ed1e0)
                    ebx[3] = result
                
                if (result s<= 0)
                    ebx[7] = 0xc
                    ebx[4].b = 1
                
                goto label_479f8c
            case 0xc
                if (ebx[4].b != 0)
                    void* eax_84 = sub_4780c0(ebx)
                    int32_t* eax_85 = sub_425f70(ebx[2])
                    uint32_t eax_86 = sub_452b90(eax_85)
                    int32_t i_10 = 0
                    *(eax_86 + 0xbdc) = *(eax_84 + 0x7c) + *(eax_84 + 0xc0)
                    
                    if (*(eax_84 + 0x7c) s> 0)
                        void* eax_87 = eax_84 + 0x6c
                        var_d74 = eax_87
                        
                        do
                            int32_t* eax_88 = sub_452c30(*eax_87)
                            uint32_t edx_33
                            edx_33.b = i_10 == *(eax_84 + 0x18) - 1
                            sub_45a830(eax_88, eax_88, eax_86, 1, false, edx_33, 5, 0, 0)
                            i_10 += 1
                            eax_87 = var_d74 + 4
                            var_d74 = eax_87
                        while (i_10 s< *(eax_84 + 0x7c))
                        
                        ebx = var_d6c
                    
                    if (*(eax_84 + 0xc0) s> 0)
                        void* esi_19 = eax_84 + 0x90
                        int32_t i_11 = 0
                        
                        do
                            int32_t* eax_90 = sub_457200(eax_85, *(esi_19 - 0x10))
                            int32_t ecx_94 = *esi_19
                            var_d74 = eax_90
                            
                            if (ecx_94 != 4)
                                sub_45a830(eax_90, eax_90, eax_86, ecx_94, false, 0, 5, 0, 0)
                            else
                                char ecx_95 = (*(esi_19 + 0x10)).b
                                int32_t* eax_91 = sub_4571c0()
                                int32_t var_d84_27 = 0
                                sub_45a730(eax_91, var_d74, eax_86, eax_91, 0, ecx_95)
                            
                            i_11 += 1
                            esi_19 += 4
                        while (i_11 s< *(eax_84 + 0xc0))
                        
                        ebx = var_d6c
                    
                    *(eax_84 + 0x54)
                    int32_t* eax_92 = sub_4571c0()
                    sub_4554e0(eax_92, eax_92, eax_86, 3, 1, 5, 0, 1, 0)
                    result = *((sub_459a20() << 2) + &data_5ed1c8)
                    ebx[3] = result
                
                if (result s<= 0)
                    void* eax_94 = sub_478140(ebx)
                    int32_t edx_39 = ebx[5]
                    ebx[5] = edx_39 + 1
                    int32_t eax_95 = 0xd
                    ebx[4].b = 1
                    
                    if (edx_39 s< *(eax_94 + 0xc80))
                        eax_95 = 8
                    
                    ebx[7] = eax_95
                
                goto label_479f8c
            case 0xd
                uint32_t (* edi_15)[0x4] = sub_478140(ebx)
                void* eax_97 = sub_425f70(ebx[2])
                var_d74 = eax_97
                uint32_t eax_98 = sub_452b90(eax_97)
                uint32_t ecx_106 = (*edi_15)[0x321]
                uint32_t var_d5c_7 = eax_98
                
                if (ecx_106 != 0)
                    if (ecx_106 s> 0)
                        int32_t var_690[0xc]
                        sub_4c5670(data_126be7c, &var_690)
                        sub_4c5920(&var_690)
                    
                    sub_452730(eax_98, 0, ecx_106)
                    
                    if (ecx_106 s<= 0)
                        *(eax_98 + 0x318) += ecx_106
                    else
                        *(eax_98 + 0x310) += ecx_106
                    
                    int32_t* eax_99 = sub_481490(&data_62d6c4)
                    int32_t var_984_1 = 0
                    void* var_d84_31 = 0x8c
                    char var_d88_26 = 0
                    *eax_99 = 3
                    eax_99[0x16] = 0
                    uint32_t var_97c[0x8][0x4]
                    uint32_t (* var_d8c_18)[0x8][0x4] = &var_97c
                    eax_99[0x17] = *eax_98
                    eax_99[0x18] = ecx_106
                    eax_99[0x19].b = 0
                    eax_99[0x1a] = 0xa
                    _memset(var_d8c_18, var_d88_26, var_d84_31)
                    int32_t var_990 = *eax_98
                    int32_t var_98c_1 = 0x26
                    int32_t var_988_1 = 0xffffffff
                    int32_t var_980_1 = 0xffffffff
                    void var_4f0
                    __builtin_memcpy(&var_4f0, &var_990, 0xa0)
                    eax_98 = sub_452860(&eax_99[0x1c], &var_4f0)
                    ebx = var_d6c
                
                if ((*edi_15)[0x34a] s> 0)
                    void* esi_21 = &(*edi_15)[0x33a]
                    int32_t i_12 = 0
                    
                    do
                        eax_98 = sub_477e00(eax_98, var_d74, *(esi_21 - 0x60), *(esi_21 - 0x20), 
                            *(esi_21 - 0x40), *esi_21, *(esi_21 + 0x20))
                        i_12 += 1
                        esi_21 += 4
                    while (i_12 s< (*edi_15)[0x34a])
                    
                    ebx = var_d6c
                
                int32_t i_13 = 0
                
                if ((*edi_15)[0x373] s> 0)
                    uint32_t* ebx_10 = &(*edi_15)[0x34b]
                    
                    do
                        int32_t* eax_101 = sub_457200(var_d74, *ebx_10)
                        sub_45a830(eax_101, eax_101, var_d5c_7, 7, false, 0, 5, 0, 0)
                        i_13 += 1
                        ebx_10 = &ebx_10[1]
                    while (i_13 s< (*edi_15)[0x373])
                    
                    ebx = var_d6c
                
                var_d84_16 = 0xdd0
                var_d88_13 = 0
                var_d8c_21 = edi_15
                goto label_479f7d
            case 0xe
                int32_t ecx_116 = 0xf
                
                if (*(sub_425f70(ebx[2]) * 0x2d78 + 0x6fd774) s<= 0)
                    ecx_116 = 0x12
                
                ebx[7] = ecx_116
                ebx[4].b = 1
                goto label_479f8c
            case 0xf
                if (ebx[4].b != 0)
                    int32_t eax_104 = sub_425f70(ebx[2])
                    void* eax_105 = sub_452b90(eax_104)
                    var_d74 = eax_105
                    int32_t var_90[0x10]
                    int32_t eax_106 = sub_481840(eax_105, eax_104 * 0x2d78 + 0x6fd634, &var_90, 
                        *(eax_104 * 0x2d78 + 0x6fd774))
                    void* eax_107 = var_d74
                    int32_t esi_23 = 0
                    *(eax_107 + 0xbd8) = eax_106
                    
                    if (eax_106 s> 0)
                        do
                            int32_t ecx_120 = var_90[esi_23]
                            int32_t* eax_108 = sub_4571c0()
                            int32_t var_d84_35 = ecx_120
                            sub_455e80(eax_108, eax_108, eax_107, esi_23, eax_106)
                            esi_23 += 1
                        while (esi_23 s< eax_106)
                        
                        ebx = var_d6c
                    
                    result = *((sub_459a20() << 2) + &data_5ed1c8)
                    ebx[3] = result
                
                if (result s<= 0)
                    ebx[7] = 0x10
                    ebx[4].b = 1
                
                goto label_479f8c
            case 0x10
                if (ebx[4].b != 0)
                    int32_t* esi_24 = sub_425f70(ebx[2])
                    int32_t* var_d60_6 = esi_24
                    int32_t i_14 = 0
                    var_d74 = sub_452b90(esi_24)
                    void* ecx_125 = esi_24 * 0x2d78 + 0x6fd634
                    
                    if (*(ecx_125 + 0x140) s> 0)
                        do
                            int32_t* eax_112 = sub_457200(esi_24, *(ecx_125 + (i_14 << 2) + 0xa0))
                            char ecx_127 = (*(ecx_125 + (i_14 << 2))).b
                            int32_t* eax_113 = sub_4571c0()
                            int32_t var_d84_36 = 0
                            uint32_t edx_49
                            edx_49.b = i_14 == *(ecx_125 + 0x140) - 1
                            sub_45a730(eax_113, eax_112, var_d74, eax_113, edx_49, ecx_127)
                            esi_24 = var_d60_6
                            i_14 += 1
                        while (i_14 s< *(ecx_125 + 0x140))
                        
                        ebx = var_d6c
                    
                    result = *((sub_459a20() << 2) + &data_5ed1e0)
                    ebx[3] = result
                
                if (result s<= 0)
                    ebx[7] = 0x11
                    ebx[4].b = 1
                
                goto label_479f8c
            case 0x11
                if (ebx[4].b == 0)
                    goto label_479357
                
                int32_t eax_115 = sub_425f70(ebx[2])
                void* eax_116 = sub_452b90(eax_115)
                int32_t var_50[0x11]
                int32_t eax_117 = sub_481840(eax_116, eax_115 * 0x2d78 + 0x6fd634, &var_50, 
                    *(eax_115 * 0x2d78 + 0x6fd774))
                int32_t esi_27 = 0
                
                if (eax_117 s<= 0)
                label_47934d:
                    result = *((sub_459a20() << 2) + &data_5ed1d4)
                    ebx[3] = result
                label_479357:
                    
                    if (result s> 0)
                        goto label_479f8c
                    
                    ebx[7] = 0x12
                    ebx[4].b = 1
                    goto label_479f8c
                
                while (true)
                    int32_t ecx_134 = var_50[esi_27]
                    result = sub_4571c0()
                    
                    if (*result != 0)
                        break
                    
                    int32_t var_d84_38 = ecx_134
                    sub_455d90(result, result, eax_116, *(result + 0x34))
                    esi_27 += 1
                    
                    if (esi_27 s>= eax_117)
                        goto label_47934d
                
            label_47936f:
                var_d84_1 = "QueueUnDisplayTile"
                var_d88_1 = 0xe9d
                ecx_3 = "gfx.type == ROLLGFX_TILE"
                goto label_479fc1
            case 0x12
                void* eax_119 = sub_425f70(ebx[2])
                var_d74 = eax_119
                int32_t* eax_120 = sub_452b90(eax_119)
                int32_t* ecx_138 = var_d74
                eax_52 = ecx_138 * 0x2d78 + 0x6fd634
                uint32_t (* var_d60_7)[0x4] = eax_52
                
                if ((*eax_52)[0x7a] s> 0)
                    void* edi_19 = &(*eax_52)[0x52]
                    int32_t i_15 = 0
                    
                    do
                        int32_t* eax_122 = sub_457200(ecx_138, *edi_19)
                        sub_45a830(eax_122, eax_122, eax_120, 7, false, 0, 5, 0, 0)
                        eax_52 = var_d60_7
                        edi_19 += 4
                        ecx_138 = var_d74
                        i_15 += 1
                    while (i_15 s< (*eax_52)[0x7a])
                    
                    ebx = var_d6c
                
                uint32_t edi_20 = (*eax_52)[0x51]
                
                if (edi_20 != 0)
                    if (edi_20 s> 0)
                        int32_t var_6c0[0xc]
                        sub_4c5670(data_126be7c, &var_6c0)
                        sub_4c5920(&var_6c0)
                    
                    sub_452730(eax_120, 0, edi_20)
                    
                    if (edi_20 s<= 0)
                        eax_120[0xc6] += edi_20
                    else
                        eax_120[0xc4] += edi_20
                    
                    int32_t* eax_123 = sub_481490(&data_62d6c4)
                    int32_t var_a24_1 = 0
                    void* var_d84_41 = 0x8c
                    char var_d88_34 = 0
                    *eax_123 = 3
                    eax_123[0x16] = 0
                    uint32_t var_a1c[0x8][0x4]
                    uint32_t (* var_d8c_25)[0x8][0x4] = &var_a1c
                    eax_123[0x17] = *eax_120
                    eax_123[0x18] = edi_20
                    eax_123[0x19].b = 0
                    eax_123[0x1a] = 0xa
                    _memset(var_d8c_25, var_d88_34, var_d84_41)
                    int32_t var_a30 = *eax_120
                    int32_t var_a2c_1 = 0x26
                    int32_t var_a28_1 = 0xffffffff
                    int32_t var_a20_1 = 0xffffffff
                    void var_450
                    __builtin_memcpy(&var_450, &var_a30, 0xa0)
                    sub_452860(&eax_123[0x1c], &var_450)
                    ebx = var_d6c
                    eax_52 = var_d60_7
                
                var_d84_16 = 0x1ec
                var_d88_13 = 0
                goto label_479f7c
            case 0x13
                int32_t ecx_146 = 0x14
                
                if (*(sub_425f70(ebx[2]) * 0x2d78 + 0x6fda00) s<= 0)
                    ecx_146 = 0x19
                
                ebx[7] = ecx_146
                ebx[4].b = 1
                goto label_479f8c
            case 0x14
                if (ebx[4].b != 0)
                    int32_t* eax_127 = sub_425f70(ebx[2])
                    var_d74 = sub_452b90(eax_127)
                    int32_t edi_21 = 0
                    void* eax_129 = eax_127 * 0x2d78
                    void* var_d64_4 = eax_129
                    int32_t ecx_149 = *(eax_129 + 0x6fda00)
                    int32_t var_d68_4 = ecx_149
                    
                    if (ecx_149 s> 0)
                        void* esi_30 = eax_129 + 0x6fd960
                        
                        do
                            result = sub_457200(eax_127, *(esi_30 - 0xa0))
                            
                            if (*(result + 0x10) != 4)
                                var_d84_1 = "MapGoodToTiles"
                                var_d88_1 = 0x7651
                                ecx_3 = "die.die.where == DW_GOOD"
                                goto label_479fc1
                            
                            edi_21 += 1
                            *esi_30 = *(result + 0x1c)
                            esi_30 += 4
                        while (edi_21 s< var_d68_4)
                        
                        eax_129 = var_d64_4
                        var_d68_4 = *(eax_129 + 0x6fda00)
                    
                    int32_t ecx_152 = 0
                    void* esi_31 = eax_129 + 0x6fd960
                    int32_t edx_59 = 0
                    
                    if (var_d68_4 s> 0)
                        do
                            int32_t eax_131 = 0
                            
                            if (ecx_152 s> 0)
                                while (*(esi_31 + (eax_131 << 2)) != *(esi_31 + (edx_59 << 2)))
                                    eax_131 += 1
                                    
                                    if (eax_131 s>= ecx_152)
                                        goto label_4795e8
                            
                            if (ecx_152 s<= 0 || eax_131 == 0xffffffff)
                            label_4795e8:
                                *(esi_31 + (ecx_152 << 2)) = *(esi_31 + (edx_59 << 2))
                                ecx_152 += 1
                            
                            edx_59 += 1
                        while (edx_59 s< var_d68_4)
                        
                        ebx = var_d6c
                        eax_129 = var_d64_4
                    
                    void* edx_60 = var_d74
                    int32_t i_16 = 0
                    *(eax_129 + 0x6fda04) = ecx_152
                    *(edx_60 + 0xbd8) = ecx_152
                    
                    if (*(eax_129 + 0x6fda04) s> 0)
                        do
                            int32_t ecx_153 = *esi_31
                            int32_t* eax_133 = sub_452cc0(ecx_153)
                            int32_t var_d84_42 = ecx_153
                            sub_455e80(eax_133, eax_133, var_d74, i_16, *(var_d64_4 + 0x6fda04))
                            i_16 += 1
                            esi_31 += 4
                        while (i_16 s< *(var_d64_4 + 0x6fda04))
                        
                        ebx = var_d6c
                    
                    result = *((sub_459a20() << 2) + &data_5ed1e0)
                    ebx[3] = result
                
                if (result s<= 0)
                    ebx[7] = 0x15
                    ebx[4].b = 1
                
                goto label_479f8c
            case 0x15
                if (ebx[4].b != 0)
                    int32_t* eax_135 = sub_425f70(ebx[2])
                    void* eax_136 = sub_452b90(eax_135)
                    void* esi_32 = nullptr
                    int32_t* eax_137 = eax_135
                    void* edi_23 = eax_137 * 0x2d78
                    var_d74 = nullptr
                    void* var_d70_9 = edi_23
                    
                    if (*(edi_23 + 0x6fda00) s> 0)
                        int32_t ecx_163
                        
                        do
                            int32_t* result_3 =
                                sub_457200(eax_137, *(edi_23 + (esi_32 << 2) + 0x6fd820))
                            int32_t* eax_138 = sub_457200(eax_135, *(edi_23 + (esi_32 << 2) + 0x6fd8c0))
                            result = result_3
                            
                            if (*result != 1)
                                var_d84_1 = "QueueDisplayDieShip"
                                var_d88_1 = 0xebb
                                ecx_3 = "gfxShip.type == ROLLGFX_DIE"
                                goto label_479fc1
                            
                            if (*eax_138 != 1)
                                var_d84_1 = "QueueDisplayDieShip"
                                var_d88_1 = 0xebc
                                ecx_3 = "gfxGood.type == ROLLGFX_DIE"
                                goto label_479fc1
                            
                            int32_t* eax_139 = sub_452cc0(eax_138[7])
                            uint32_t var_850[0xa][0x4]
                            uint32_t (* eax_140)[0x4] = sub_459e70(eax_139, eax_139, 0x10, &var_850, 0)
                            void var_3b0
                            __builtin_memcpy(&var_3b0, eax_140, 0xa0)
                            sub_4528c0(eax_140, &var_3b0, &result_3[0x1c], 5, 0)
                            edi_23 = var_d70_9
                            void* esi_34 = var_d74
                            ecx_163 = *(edi_23 + 0x6fda00)
                            
                            if (esi_34 == ecx_163 - 1)
                                sub_45a140(ecx_163 - 1, 0xd, eax_136, result_3, 0)
                                ecx_163 = *(edi_23 + 0x6fda00)
                            
                            eax_137 = eax_135
                            esi_32 = esi_34 + 1
                            var_d74 = esi_32
                        while (esi_32 s< ecx_163)
                    
                    result = *((sub_459a20() << 2) + &data_5ed1e0)
                    ebx[3] = result
                
                if (result s<= 0)
                    ebx[7] = 0x16
                    ebx[4].b = 1
                
                goto label_479f8c
            case 0x16
                if (ebx[4].b != 0)
                    int32_t eax_143 = sub_425f70(ebx[2])
                    void* edi_24 = sub_452b90(eax_143)
                    void* eax_145 = eax_143 * 0x2d78
                    var_d74 = eax_145
                    uint32_t esi_36 = *(eax_145 + 0x6fda0c)
                    
                    if (esi_36 != 0)
                        data_632550 -= esi_36
                        
                        if (esi_36 s> 0)
                            int32_t var_6f0[0x8]
                            sub_4c5670(data_126be88, &var_6f0)
                            sub_4c5920(&var_6f0)
                        
                        sub_452730(edi_24, 1, esi_36)
                        
                        if (esi_36 s<= 0)
                            *(edi_24 + 0x31c) += esi_36
                        else
                            *(edi_24 + 0x314) += esi_36
                        
                        uint32_t (* eax_146)[0x4] = sub_481490(&data_62d6c4)
                        int32_t var_ac4_1 = 0
                        void* var_d84_46 = 0x8c
                        char var_d88_39 = 0
                        *eax_146 = 3
                        (*eax_146)[0x16] = 1
                        uint32_t var_abc[0x8][0x4]
                        uint32_t (* var_d8c_28)[0x8][0x4] = &var_abc
                        (*eax_146)[0x17] = *edi_24
                        eax_146[6][0] = esi_36
                        (*eax_146)[0x19].b = 0
                        (*eax_146)[0x1a] = 8
                        _memset(var_d8c_28, var_d88_39, var_d84_46)
                        int32_t var_ad0 = *edi_24
                        int32_t var_acc_1 = 0x27
                        int32_t var_ac8_1 = 0xffffffff
                        int32_t var_ac0_1 = 0xffffffff
                        void var_310
                        __builtin_memcpy(&var_310, &var_ad0, 0xa0)
                        sub_452860(&eax_146[7], &var_310)
                        ebx = var_d6c
                        eax_145 = var_d74
                    
                    uint32_t esi_37 = *(eax_145 + 0x6fda08)
                    
                    if (esi_37 != 0)
                        if (esi_37 s> 0)
                            int32_t var_720[0xc]
                            sub_4c5670(data_126be7c, &var_720)
                            sub_4c5920(&var_720)
                        
                        sub_452730(edi_24, 0, esi_37)
                        
                        if (esi_37 s<= 0)
                            *(edi_24 + 0x318) += esi_37
                        else
                            *(edi_24 + 0x310) += esi_37
                        
                        uint32_t (* eax_148)[0x4] = sub_481490(&data_62d6c4)
                        int32_t var_b64_1 = 0
                        void* var_d84_48 = 0x8c
                        char var_d88_41 = 0
                        *eax_148 = 3
                        (*eax_148)[0x16] = 0
                        uint32_t var_b5c[0x8][0x4]
                        uint32_t (* var_d8c_29)[0x8][0x4] = &var_b5c
                        (*eax_148)[0x17] = *edi_24
                        eax_148[6][0] = esi_37
                        (*eax_148)[0x19].b = 0
                        (*eax_148)[0x1a] = 8
                        _memset(var_d8c_29, var_d88_41, var_d84_48)
                        int32_t var_b70 = *edi_24
                        int32_t var_b6c_1 = 0x26
                        int32_t var_b68_1 = 0xffffffff
                        int32_t var_b60_1 = 0xffffffff
                        void var_270
                        __builtin_memcpy(&var_270, &var_b70, 0xa0)
                        sub_452860(&eax_148[7], &var_270)
                        ebx = var_d6c
                    
                    result = *((sub_459a20() << 2) + &data_5ed1bc)
                    ebx[3] = result
                
                if (result s<= 0)
                    ebx[7] = 0x17
                    ebx[4].b = 1
                
                goto label_479f8c
            case 0x17
                if (ebx[4].b != 0)
                    void* esi_38 = sub_425f70(ebx[2])
                    var_d74 = esi_38
                    void* eax_152 = sub_452b90(esi_38)
                    void* edi_26 = esi_38 * 0x2d78 + 0x6fd820
                    void* var_d60_9 = edi_26
                    
                    if (*(edi_26 + 0x1e0) s> 0)
                        int32_t i_17 = 0
                        
                        do
                            int32_t* eax_153 = sub_457200(esi_38, *(edi_26 + (i_17 << 2)))
                            int32_t* eax_154 = sub_457200(var_d74, *(edi_26 + (i_17 << 2) + 0xa0))
                            int32_t var_d84_49 = 0
                            sub_45a830(sub_461ad0(eax_154, eax_153, eax_152, 0), eax_154, eax_152, 3, 
                                false, 0, 5, 1, 0)
                            edi_26 = var_d60_9
                            i_17 += 1
                            esi_38 = var_d74
                        while (i_17 s< *(edi_26 + 0x1e0))
                        
                        ebx = var_d6c
                    
                    result = *((sub_459a20() << 2) + &data_5ed1d4)
                    ebx[3] = result
                
                if (result s<= 0)
                    ebx[7] = 0x18
                    ebx[4].b = 1
                
                goto label_479f8c
            case 0x18
                if (ebx[4].b != 0)
                    int32_t eax_157 = sub_425f70(ebx[2])
                    void* eax_158 = sub_452b90(eax_157)
                    int32_t edi_28 = 0
                    void* eax_159 = eax_157 * 0x2d78
                    var_d74 = eax_159
                    *(eax_158 + 0xbd8) = *(eax_159 + 0x6fda04)
                    
                    if (*(eax_159 + 0x6fda04) s> 0)
                        void* esi_41 = eax_159 + 0x6fd960
                        
                        while (true)
                            int32_t ecx_186 = *esi_41
                            result = sub_452cc0(ecx_186)
                            
                            if (*result != 0)
                                break
                            
                            int32_t var_d84_50 = ecx_186
                            sub_455d90(result, result, eax_158, *(result + 0x34))
                            edi_28 += 1
                            esi_41 += 4
                            
                            if (edi_28 s>= *(var_d74 + 0x6fda04))
                                goto label_479b47
                        
                        goto label_47936f
                    
                label_479b47:
                    result = *((sub_459a20() << 2) + &data_5ed1d4)
                    ebx[3] = result
                
                if (result s> 0)
                    goto label_479f8c
                
                ebx[7] = 0x19
                ebx[4].b = 1
                goto label_479f8c
            case 0x19
                void* eax_162 = sub_425f70(ebx[2])
                var_d74 = eax_162
                void* eax_163 = sub_452b90(eax_162)
                void* ecx_190 = var_d74
                eax_52 = ecx_190 * 0x2d78 + 0x6fd820
                uint32_t (* var_d64_6)[0x4] = eax_52
                
                if ((*eax_52)[0xa7] s> 0)
                    void* edi_29 = &(*eax_52)[0x7f]
                    int32_t i_18 = 0
                    
                    do
                        int32_t* eax_165 = sub_457200(ecx_190, *edi_29)
                        sub_45a830(eax_165, eax_165, eax_163, 7, false, 0, 5, 0, 0)
                        eax_52 = var_d64_6
                        edi_29 += 4
                        ecx_190 = var_d74
                        i_18 += 1
                    while (i_18 s< (*eax_52)[0xa7])
                    
                    ebx = var_d6c
                
                uint32_t edi_30 = (*eax_52)[0x7d]
                
                if (edi_30 != 0)
                    data_632550 -= edi_30
                    
                    if (edi_30 s> 0)
                        int32_t var_750[0xc]
                        sub_4c5670(data_126be88, &var_750)
                        sub_4c5920(&var_750)
                    
                    sub_452730(eax_163, 1, edi_30)
                    
                    if (edi_30 s<= 0)
                        *(eax_163 + 0x31c) += edi_30
                    else
                        *(eax_163 + 0x314) += edi_30
                    
                    int32_t* eax_166 = sub_481490(&data_62d6c4)
                    int32_t var_c04_1 = 0
                    void* var_d84_53 = 0x8c
                    char var_d88_46 = 0
                    *eax_166 = 3
                    eax_166[0x16] = 1
                    uint32_t var_bfc[0x8][0x4]
                    uint32_t (* var_d8c_32)[0x8][0x4] = &var_bfc
                    eax_166[0x17] = *eax_163
                    eax_166[0x18] = edi_30
                    eax_166[0x19].b = 0
                    eax_166[0x1a] = 0xa
                    _memset(var_d8c_32, var_d88_46, var_d84_53)
                    int32_t var_c10 = *eax_163
                    int32_t var_c0c_1 = 0x27
                    int32_t var_c08_1 = 0xffffffff
                    int32_t var_c00_1 = 0xffffffff
                    void var_1d0
                    __builtin_memcpy(&var_1d0, &var_c10, 0xa0)
                    sub_452860(&eax_166[0x1c], &var_1d0)
                    ebx = var_d6c
                    eax_52 = var_d64_6
                
                uint32_t edi_31 = eax_52[0x1f][0]
                
                if (edi_31 != 0)
                    if (edi_31 s> 0)
                        int32_t var_780[0xc]
                        sub_4c5670(data_126be7c, &var_780)
                        sub_4c5920(&var_780)
                    
                    sub_452730(eax_163, 0, edi_31)
                    
                    if (edi_31 s<= 0)
                        *(eax_163 + 0x318) += edi_31
                    else
                        *(eax_163 + 0x310) += edi_31
                    
                    int32_t* eax_168 = sub_481490(&data_62d6c4)
                    int32_t var_ca4_1 = 0
                    void* var_d84_55 = 0x8c
                    char var_d88_48 = 0
                    *eax_168 = 3
                    eax_168[0x16] = 0
                    uint32_t var_c9c[0x8][0x4]
                    uint32_t (* var_d8c_33)[0x8][0x4] = &var_c9c
                    eax_168[0x17] = *eax_163
                    eax_168[0x18] = edi_31
                    eax_168[0x19].b = 0
                    eax_168[0x1a] = 0xa
                    _memset(var_d8c_33, var_d88_48, var_d84_55)
                    int32_t var_cb0 = *eax_163
                    int32_t var_cac_1 = 0x26
                    int32_t var_ca8_1 = 0xffffffff
                    int32_t var_ca0_1 = 0xffffffff
                    void var_130
                    __builtin_memcpy(&var_130, &var_cb0, 0xa0)
                    sub_452860(&eax_168[0x1c], &var_130)
                    ebx = var_d6c
                    eax_52 = var_d64_6
                
                var_d84_16 = 0x2a0
                var_d88_13 = 0
                goto label_479f7c
            case 0x1a
                ebx[7] = 0x1b
                ebx[4].b = 1
            label_479f8c:
                result = result_5
                
                if (ebx[7] == result)
                    ebx[4].b = 0
                    @__security_check_cookie@4(eax_1 ^ &var_d74)
                    return result
            case 0x1b
                if (ebx[4].b == 0)
                label_479eaf:
                    
                    if (result s<= 0)
                        int32_t eax_180 = *(sub_425f70(ebx[2]) * 0x2d78 + 0x6fdb68)
                        int32_t eax_181 = neg.d(eax_180)
                        ebx[4].b = 1
                        ebx[7] = sbb.d(eax_181, eax_181, eax_180 != 0) + 0x1d
                else
                    int32_t* eax_170 = sub_425f70(ebx[2])
                    void* ecx_204 = sub_452b90(eax_170)
                    var_d74 = ecx_204
                    int32_t eax_172 = *(eax_170 * 0x2d78 + 0x6fdb60)
                    
                    if (eax_172 != 0)
                        int32_t i_19 = 0
                        
                        if (eax_172 s> 0)
                            do
                                int32_t* eax_173 =
                                    sub_457200(eax_170, *(eax_170 * 0x2d78 + 0x6fdac0 + (i_19 << 2)))
                                sub_45a830(eax_173, eax_173, var_d74, 7, false, 1, 5, 0, 0)
                                i_19 += 1
                            while (i_19 s< *(eax_170 * 0x2d78 + 0x6fdb60))
                            
                            ebx = var_d6c
                            ecx_204 = var_d74
                        
                        int32_t eax_174 = *(eax_170 * 0x2d78 + 0x6fdb64)
                        
                        if (eax_174 != 0)
                            int32_t eax_175 = neg.d(eax_174)
                            sub_45b110(eax_175, 0, ecx_204, eax_175, 0, 0, 2)
                        
                        int32_t esi_44 = *(data_632804 + 0xc3c)
                        int32_t eax_177 = sub_459a20()
                        
                        if (esi_44 == 0)
                            result = *((eax_177 << 2) + &data_5ed1e0)
                        else
                            result = *((eax_177 << 2) + &data_5ed1c8)
                        
                        ebx[3] = result
                        goto label_479eaf
                    
                    ebx[7] = 0x1d
                    ebx[4].b = 1
                
                goto label_479f8c
            case 0x1c
                if (ebx[4].b == 0)
                    goto label_479f51
                
                int32_t eax_184 = sub_425f70(ebx[2])
                result = sub_452b90(eax_184)
                int32_t result_6 = result
                
                if (*(eax_184 * 0x2d78 + 0x6fdb68) != 1)
                    var_d84_1 = "OpponentTurnUpdate"
                    var_d88_1 = 0x7aa4
                    ecx_3 = "manage.numCreditsGained == 1"
                    goto label_479fc1
                
                result = sub_452730(result_6, 0, 1)
                
                if (*(result_6 + 0x300) s> 0xa)
                    var_d84_1 = "OpponentTurnUpdate"
                    var_d88_1 = 0x7aa8
                    ecx_3 = "pgui.gameTokens[TOKEN_CREDITS] <= 10"
                    goto label_479fc1
                
                result = *((sub_459a20() << 2) + &data_5ed1c8)
                ebx[3] = result
            label_479f51:
                
                if (result s> 0)
                    goto label_479f8c
                
                ebx[7] = 0x1d
                ebx[4].b = 1
                goto label_479f8c
            case 0x1d
                var_d84_16 = 0xac
                var_d88_13 = 0
                eax_52 = sub_425f70(ebx[2]) * 0x2d78 + 0x6fdac0
                goto label_479f7c
            default
                var_d84_1 = "OpponentTurnUpdate"
                var_d88_1 = 0x7ac0
            label_479fbc:
                ecx_3 = "Halt"
                goto label_479fc1
    else
        result = int.d(_mm_cvtepi32_ps(zx.o(result)) - data_620d84 * 1000f)
        ebx[3] = result
    
    @__security_check_cookie@4(eax_1 ^ &var_d74)
    return result
}
