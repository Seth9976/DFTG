// 函数名称: sub_458af0
// 虚拟地址: 0x458af0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int128_t* __convention("regparm")sub_458af0(int32_t arg1, int32_t arg2, int32_t* arg3, int128_t* arg4)
{
    // 第一条实际指令: int32_t edi = *arg3
    int32_t edi = *arg3
    int32_t eax = sub_425e70()
    void* ecx = data_6cfe4c
    char const* const var_154_1
    int32_t var_150_1
    char const* const var_14c_1
    char* ecx_1
    
    if (ecx == 0)
    label_458b0f:
        var_14c_1 = "GetClient"
        var_150_1 = 0x75
        var_154_1 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx_1 = "gClient"
    label_459934:
        sub_489550(eax, &data_5b2591, ecx_1, var_154_1, var_150_1, var_14c_1)
        
        if (IsDebuggerPresent() != 1)
            sub_489700()
            noreturn
        
        breakpoint
    
    int32_t edi_1 = edi - *(ecx + 0xa68)
    eax += edi_1
    
    if (edi - *(ecx + 0xa68) s>= 0)
        eax = edi_1
    
    int32_t edi_2
    
    if (data_62b1ac != 0x21)
        edi_2 = 0
        
        if (data_62b1bc == 0x21)
            edi_2 = data_62b1c0
    else
        edi_2 = data_62b1b0
    
    int32_t edx = arg3[1]
    
    if (edx u> 0x27)
    label_45991b:
        var_14c_1 = "CalcTransform"
        var_150_1 = 0x1edd
    label_459925:
        ecx_1 = "Halt"
    label_45992a:
        var_154_1 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
        goto label_459934
    
    int32_t var_154_5
    char const* const var_150_2
    char const* const var_150_4
    char const* const var_150_5
    char const* const var_150_7
    void* var_14c_6
    int32_t var_14c_9
    int32_t var_14c_15
    int32_t var_14c_24
    int32_t var_14c_28
    void var_d8
    int128_t var_78
    float var_10
    float var_c
    int128_t* eax_4
    int128_t* eax_12
    int128_t* eax_13
    int32_t eax_28
    int32_t eax_39
    int32_t eax_45
    void* ecx_14
    int128_t* ecx_16
    int32_t* ecx_37
    int32_t ecx_48
    int32_t* ecx_59
    int32_t edx_3
    void* edx_10
    int32_t ebx_2
    int128_t xmm0_43
    int128_t xmm1_5
    int128_t xmm2_2
    int128_t xmm3
    int128_t xmm4
    int128_t xmm5
    
    switch (edx)
        case 0
            var_14c_28 = 0
            var_150_7 = "tbl_bagTile"
            ecx_59 = &data_1512abc
        case 1
            void* var_14c_31 = ecx
            eax_4 = sub_4bb090(&var_d8, arg3[2])
            goto label_458d0e
        case 2
            void* var_14c_32 = ecx
            eax_4 = sub_4bb090(&var_d8, arg3[2])
            goto label_458d0e
        case 4
            void* var_14c_33 = ecx
            int128_t* eax_51 = sub_4bb090(&var_d8, arg3[2])
            int128_t xmm2_3 = eax_51[1]
            int128_t xmm3_1 = eax_51[3]
            int128_t xmm4_1 = eax_51[4]
            int128_t xmm5_1 = eax_51[5]
            int128_t var_58_1 = eax_51[2]
            var_58_1:8.d = 0x3f000000
            *arg4 = *eax_51
            arg4[1] = xmm2_3
            arg4[2] = var_58_1
            arg4[3] = xmm3_1
            arg4[4] = xmm4_1
            arg4[5] = xmm5_1
            return arg4
        case 5
            int32_t edi_5 = *arg3
            eax = sub_425e70()
            void* ecx_11 = data_6cfe4c
            
            if (ecx_11 == 0)
                goto label_458b0f
            
            int32_t edi_6 = edi_5 - *(ecx_11 + 0xa68)
            int32_t eax_10 = edi_6 + eax
            
            if (edi_5 - *(ecx_11 + 0xa68) s>= 0)
                eax_10 = edi_6
            
            int32_t ecx_12
            
            if (data_62b1ac != 0x21)
                ecx_12 = 0
                
                if (data_62b1bc == 0x21)
                    ecx_12 = data_62b1c0
            else
                ecx_12 = data_62b1b0
            
            int32_t esi_1 = arg3[2]
            
            if (eax_10 == 0)
                eax_12, edx_3 = sub_426ed0(&arg3[0x1f], ecx_12, "rgn_playerTableau", esi_1)
            label_458e6f:
                ecx_14 = &var_d8
                goto label_458e75
            
            eax_12, edx_3 = sub_452690(&arg3[0x1f], ecx_12, "tbl_opponents", eax_10 - 1, 
                "tbl_oppEmpireWorlds", esi_1)
            ecx_14 = &var_78
        label_458e75:
            var_14c_6 = ecx_14
            ecx_16 = eax_12
        label_458e78:
            eax_13 = sub_4babb0(eax_12, edx_3, ecx_16, var_14c_6)
            xmm0_43 = *eax_13
            goto label_458e80
        case 6
            int32_t edi_9 = *arg3
            eax, edx_3 = sub_425e70()
            void* ecx_32 = data_6cfe4c
            
            if (ecx_32 == 0)
                goto label_458b0f
            
            int32_t edi_10 = edi_9 - *(ecx_32 + 0xa68)
            eax_28 = edi_10 + eax
            
            if (edi_9 - *(ecx_32 + 0xa68) s>= 0)
                eax_28 = edi_10
            
            if (data_62b1ac != 0x21)
                ebx_2 = 0
                
                if (data_62b1bc == 0x21)
                    ebx_2 = data_62b1c0
            else
                ebx_2 = data_62b1b0
            
            if (eax_28 != 0)
                int32_t var_14c_11 = 0
                eax_12, edx_3 =
                    sub_452690(&arg3[0x1f], ebx_2, "tbl_opponents", eax_28 - 1, "tbl_oppDevTile", 0)
                goto label_458e6f
            
            int32_t i = arg3[2]
            ecx_16 = nullptr
            
            while (i s>= 0)
                if (arg3[0x20] != "tbl_playerDev" || arg3[0x1f] != ebx_2 || arg3[0x21] != i
                    || arg3[0x22] != 0)
                label_45918b:
                    int128_t* eax_33
                    eax_33, edx_3 = sub_4bab10(i)
                    ecx_16 = eax_33
                    arg3[0x27] = ecx_16
                    
                    if (ecx_16 != 0)
                        arg3[0x20] = "tbl_playerDev"
                        arg3[0x1f] = ebx_2
                        arg3[0x21] = i
                        arg3[0x22] = 0
                    else
                        i -= 1
                        continue
                else
                    ecx_16 = arg3[0x27]
                    
                    if (ecx_16 == 0)
                        goto label_45918b
                    
                    uint32_t eax_30 = zx.d(ecx_16.w)
                    
                    if (eax_30 u>= data_63e5ac || *(eax_30 * 0x1418 + data_63e5a8 + 0x1410) != ecx_16)
                        goto label_45918b
                
                i -= 1
                
                if (ecx_16 != 0)
                    break
            
        label_4591c8:
            eax_12 = &var_78
            var_14c_6 = &var_78
            goto label_458e78
        case 7
            int32_t edi_11 = *arg3
            eax, edx_3 = sub_425e70()
            void* ecx_35 = data_6cfe4c
            
            if (ecx_35 == 0)
                goto label_458b0f
            
            int32_t edi_12 = edi_11 - *(ecx_35 + 0xa68)
            eax_28 = eax + edi_12
            
            if (edi_11 - *(ecx_35 + 0xa68) s>= 0)
                eax_28 = edi_12
            
            if (data_62b1ac != 0x21)
                ebx_2 = 0
                
                if (data_62b1bc == 0x21)
                    ebx_2 = data_62b1c0
            else
                ebx_2 = data_62b1b0
            
            if (eax_28 != 0)
                int32_t var_14c_13 = 0
                eax_12, edx_3 =
                    sub_452690(&arg3[0x1f], ebx_2, "tbl_opponents", eax_28 - 1, "tbl_oppSettleTile", 0)
                goto label_458e6f
            
            int32_t edi_13 = arg3[2]
            ecx_16 = nullptr
            
            while (true)
                if (edi_13 s< 0)
                    goto label_4591c8
                
                if (arg3[0x20] != "tbl_playerSettle" || arg3[0x1f] != ebx_2 || arg3[0x21] != edi_13
                    || arg3[0x22] != 0)
                label_45927f:
                    int128_t* eax_37
                    eax_37, edx_3 = sub_4bab10(edi_13)
                    ecx_16 = eax_37
                    arg3[0x27] = ecx_16
                    
                    if (ecx_16 != 0)
                        arg3[0x20] = "tbl_playerSettle"
                        arg3[0x1f] = ebx_2
                        arg3[0x21] = edi_13
                        arg3[0x22] = 0
                    else
                        edi_13 -= 1
                        continue
                else
                    ecx_16 = arg3[0x27]
                    
                    if (ecx_16 == 0)
                        goto label_45927f
                    
                    uint32_t eax_34 = zx.d(ecx_16.w)
                    
                    if (eax_34 u>= data_63e5ac || *(eax_34 * 0x1418 + data_63e5a8 + 0x1410) != ecx_16)
                        goto label_45927f
                
                edi_13 -= 1
                
                if (ecx_16 != 0)
                    eax_12 = &var_78
                    var_14c_6 = &var_78
                    break
            
            goto label_458e78
        case 8
            void* var_14c_30 = ecx
            eax_4 = sub_4bb090(&var_d8, 0)
            goto label_458d0e
        case 9
            int32_t edi_16 = *arg3
            eax = sub_425e70()
            void* ecx_61 = data_6cfe4c
            
            if (ecx_61 == 0)
                goto label_458b0f
            
            int32_t edi_17 = edi_16 - *(ecx_61 + 0xa68)
            eax_45 = eax + edi_17
            
            if (edi_16 - *(ecx_61 + 0xa68) s>= 0)
                eax_45 = edi_17
            
            if (data_62b1ac != 0x21)
                ecx_48 = 0
                
                if (data_62b1bc == 0x21)
                    ecx_48 = data_62b1c0
            else
                ecx_48 = data_62b1b0
            
            edx_10 = &arg3[0x1f]
            var_14c_24 = arg3[2]
            
            if (eax_45 != 0)
                var_150_5 = "tbl_cup"
                goto label_4594a5
            
            eax_12, edx_3 = sub_426ed0(edx_10, ecx_48, "tbl_playerCup", var_14c_24)
            ecx_14 = &var_78
            goto label_458e75
        case 0xa
            int32_t edi_14 = *arg3
            eax = sub_425e70()
            void* ecx_47 = data_6cfe4c
            
            if (ecx_47 == 0)
                goto label_458b0f
            
            int32_t edi_15 = edi_14 - *(ecx_47 + 0xa68)
            eax_45 = eax + edi_15
            
            if (edi_14 - *(ecx_47 + 0xa68) s>= 0)
                eax_45 = edi_15
            
            if (data_62b1ac != 0x21)
                ecx_48 = 0
                
                if (data_62b1bc == 0x21)
                    ecx_48 = data_62b1c0
            else
                ecx_48 = data_62b1b0
            
            edx_10 = &arg3[0x1f]
            var_14c_24 = arg3[2]
            
            if (eax_45 == 0)
                eax_12, edx_3 = sub_426ed0(edx_10, ecx_48, "tblCitizenry", var_14c_24)
                ecx_14 = &var_78
                goto label_458e75
            
            var_150_5 = "tbl_citizenry"
        label_4594a5:
            eax_12, edx_3 =
                sub_452690(edx_10, ecx_48, "tbl_opponents", eax_45 - 1, var_150_5, var_14c_24)
            
            if (eax_12 != 0)
                goto label_458e6f
            
            _memset(&var_78, eax_12.b, 0x60)
            xmm0_43 = var_78
            int128_t var_68
            xmm1_5 = var_68
            int128_t var_58
            xmm2_2 = var_58
            int128_t var_48
            xmm3 = var_48
            int128_t var_38
            xmm4 = var_38
            int128_t var_28
            xmm5 = var_28
            goto label_458e9a
        case 0xb, 0xc
            goto label_45991b
        case 0xd
            ecx_59 = &arg3[0x1f]
            var_14c_28 = arg3[2]
            
            if (eax != 0)
                int32_t eax_56
                int32_t edx_25
                eax_56, edx_25 =
                    sub_452690(ecx_59, edi_2, "tbl_opponents", eax - 1, "tbl_settle", var_14c_28)
                eax_4 = sub_4babb0(eax_56, edx_25, eax_56, &var_d8)
                goto label_458d0e
            
            var_150_7 = "tbl_playerSettleDice"
        case 0xe
            ecx_59 = &arg3[0x1f]
            var_14c_28 = arg3[2]
            
            if (eax != 0)
                int32_t eax_54
                int32_t edx_23
                eax_54, edx_23 =
                    sub_452690(ecx_59, edi_2, "tbl_opponents", eax - 1, "tbl_dev", var_14c_28)
                eax_4 = sub_4babb0(eax_54, edx_23, eax_54, &var_d8)
                goto label_458d0e
            
            var_150_7 = "tbl_playerDevDice"
        case 0xf
            int128_t* eax_16 = sub_4587c0(&var_d8, edx, arg3, &var_d8)
            *arg4 = *eax_16
            arg4[1] = eax_16[1]
            arg4[2] = eax_16[2]
            arg4[3] = eax_16[3]
            arg4[4] = eax_16[4]
            arg4[5] = eax_16[5]
            return arg4
        case 0x10
            int128_t* eax_19 = sub_458610(&var_d8, edx, arg3, &var_d8)
            *arg4 = *eax_19
            arg4[1] = eax_19[1]
            arg4[2] = eax_19[2]
            arg4[3] = eax_19[3]
            arg4[4] = eax_19[4]
            arg4[5] = eax_19[5]
            return arg4
        case 0x11
            var_14c_28 = 0
            var_150_7 = "tbl_dummy"
        label_45973e:
            ecx_59 = &arg3[0x1f]
        case 0x12, 0x13, 0x14, 0x15, 0x16
            int32_t ebx_3 = arg3[2]
            
            if (eax != 0)
                int32_t ecx_51 = edx - 0x12
                
                if (arg3[0x20] != "tbl_opponents" || arg3[0x1f] != edi_2 || arg3[0x21] != eax - 1
                        || arg3[0x22] != "tbl_tray" || arg3[0x23] != ecx_51 || arg3[0x24] != "tblDice"
                        || arg3[0x25] != ebx_3 + 1)
                    sub_4bab10(eax - 1)
                    eax_39, edx = sub_4bab10(ecx_51)
                    
                    if (eax_39 != 0)
                        eax_39, edx = sub_4bab10(ebx_3 + 1)
                    
                    arg3[0x27] = eax_39
                    
                    if (eax_39 != 0)
                        arg3[0x21] = eax - 1
                        arg3[0x1f] = edi_2
                        arg3[0x20] = "tbl_opponents"
                        arg3[0x22] = "tbl_tray"
                        arg3[0x23] = ecx_51
                        arg3[0x24] = "tblDice"
                        arg3[0x25] = ebx_3 + 1
                else
                    eax_39 = arg3[0x27]
                
                goto label_4592e9
            
            char const* const var_158_1
            int32_t var_154_7
            
            if (ebx_3 != 0xffffffff || data_632590 != 2)
                if (edx - 0x12 u> 4)
                    var_14c_1 = "CalcTransform"
                    var_150_1 = 0x1e63
                    goto label_459925
                
                switch (edx)
                    case 0x12
                        var_14c_15 = ebx_3 + 1
                        ecx_37 = &arg3[0x1f]
                        var_150_4 = "tblDice"
                        var_154_7 = 0
                        var_158_1 = "tbl_trays_explore"
                    case 0x13
                        var_14c_15 = ebx_3 + 1
                        ecx_37 = &arg3[0x1f]
                        var_150_4 = "tblDice"
                        var_154_7 = 0
                        var_158_1 = "tbl_trays_develop"
                    case 0x14
                        var_14c_15 = ebx_3 + 1
                        ecx_37 = &arg3[0x1f]
                        var_150_4 = "tblDice"
                        var_154_7 = 0
                        var_158_1 = "tbl_trays_settle"
                    case 0x15
                        var_14c_15 = ebx_3 + 1
                        ecx_37 = &arg3[0x1f]
                        var_150_4 = "tblDice"
                        var_154_7 = 0
                        var_158_1 = "tbl_trays_produce"
                    case 0x16
                        var_14c_15 = ebx_3 + 1
                        ecx_37 = &arg3[0x1f]
                        var_150_4 = "tblDice"
                        var_154_7 = 0
                        var_158_1 = "tbl_trays_ship"
                
                eax_39, edx = sub_452690(ecx_37, edi_2, var_158_1, var_154_7, var_150_4, var_14c_15)
                goto label_4592e9
            
            if (edx - 0x12 u> 4)
                var_14c_1 = "CalcTransform"
                var_150_1 = 0x1e45
                goto label_459925
            
            switch (edx)
                case 0x12
                    var_14c_15 = 0
                    var_150_4 = "tblPrimary"
                    var_154_7 = 0
                    ecx_37 = &arg3[0x1f]
                    var_158_1 = "tbl_trays_explore"
                case 0x13
                    var_14c_15 = 0
                    var_150_4 = "tblPrimary"
                    var_154_7 = 0
                    ecx_37 = &arg3[0x1f]
                    var_158_1 = "tbl_trays_develop"
                case 0x14
                    var_14c_15 = 0
                    var_150_4 = "tblPrimary"
                    var_154_7 = 0
                    ecx_37 = &arg3[0x1f]
                    var_158_1 = "tbl_trays_settle"
                case 0x15
                    var_14c_15 = 0
                    var_150_4 = "tblPrimary"
                    var_154_7 = 0
                    ecx_37 = &arg3[0x1f]
                    var_158_1 = "tbl_trays_produce"
                case 0x16
                    var_14c_15 = 0
                    var_150_4 = "tblPrimary"
                    var_154_7 = 0
                    ecx_37 = &arg3[0x1f]
                    var_158_1 = "tbl_trays_ship"
            
            eax_39, edx = sub_452690(ecx_37, edi_2, var_158_1, var_154_7, var_150_4, var_14c_15)
            goto label_4592e9
        case 0x17
            if (eax != 0)
                eax_4 = sub_4bad40(&var_d8, eax - 1)
                goto label_458d0e
            
            var_14c_28 = arg3[2]
            var_150_7 = "tbl_playerDictate"
            goto label_45973e
        case 0x18
            if (eax != 0)
                goto label_459417
            
            eax_39, edx = sub_426ed0(&arg3[0x1f], edi_2, "tbl_stock", arg3[2])
            goto label_4592e9
        case 0x19
            if (eax != 0)
                goto label_459417
            
            eax_39, edx = sub_426ed0(&arg3[0x1f], edi_2, "tbl_scout", arg3[2])
            goto label_4592e9
        case 0x1a
            int32_t eax_25 = arg3[0x1e]
            
            if (eax_25 == 0)
            label_459057:
                *arg4 = *(arg3 + 0x18)
                arg4[1] = *(arg3 + 0x28)
                arg4[2] = *(arg3 + 0x38)
                arg4[3] = *(arg3 + 0x48)
                arg4[4] = *(arg3 + 0x58)
                arg4[5] = *(arg3 + 0x68)
                return arg4
            
            uint32_t ecx_26 = zx.d(eax_25.w)
            
            if (ecx_26 u>= data_62d6c8)
                goto label_459057
            
            void* ecx_28 = ecx_26 * 0x8ac + data_62d6c4
            
            if (*(ecx_28 + 0x8a8) != eax_25)
                goto label_459057
            
            var_14c_9 = 0
            var_150_2 = "tbl_ship"
            var_154_5 = *(ecx_28 + 4)
        label_458fbe:
            int32_t eax_23
            int32_t edx_6
            eax_23, edx_6 = sub_426ed0(&arg3[0x1f], var_154_5, var_150_2, var_14c_9)
            int128_t* eax_24 = sub_4babb0(eax_23, edx_6, eax_23, &var_d8)
            xmm0_43 = *eax_24
            xmm1_5 = eax_24[1]
            xmm2_2 = eax_24[2]
            xmm3 = eax_24[3]
            xmm4 = eax_24[4]
            xmm5 = eax_24[5]
            *(arg3 + 0x18) = xmm0_43
            *(arg3 + 0x28) = xmm1_5
            *(arg3 + 0x38) = xmm2_2
            *(arg3 + 0x48) = xmm3
            *(arg3 + 0x58) = xmm4
            *(arg3 + 0x68) = xmm5
            goto label_458e9a
        case 0x1b
            if (eax != 0)
            label_459417:
                eax_13 = sub_424c90(&var_d8)
                var_78 = *eax_13
                var_78:0xc.d = 0
                xmm0_43 = var_78
            label_458e80:
                xmm1_5 = eax_13[1]
                xmm2_2 = eax_13[2]
                xmm3 = eax_13[3]
                xmm4 = eax_13[4]
                xmm5 = eax_13[5]
            label_458e9a:
                *arg4 = xmm0_43
                arg4[1] = xmm1_5
                arg4[2] = xmm2_2
                arg4[3] = xmm3
                arg4[4] = xmm4
                arg4[5] = xmm5
                return arg4
            
            int32_t eax_27 = arg3[0x1e]
            
            if (eax_27 == 0)
                goto label_459057
            
            uint32_t ecx_29 = zx.d(eax_27.w)
            
            if (ecx_29 u>= data_62d6c8)
                goto label_459057
            
            void* ecx_31 = ecx_29 * 0x8ac + data_62d6c4
            
            if (*(ecx_31 + 0x8a8) != eax_27)
                goto label_459057
            
            var_14c_9 = 0
            var_150_2 = "tbl_good"
            var_154_5 = *(ecx_31 + 4)
            goto label_458fbe
        case 0x1c
            int32_t ecx_21 = arg3[5]
            
            if (ecx_21 == 0)
                var_14c_1 = "DataArray<struct RollGfx>::DataArrayGet"
                var_150_1 = 0x6c
                var_154_1 = "d:\ax\trunk\ax2017\engine\dataarray.h"
                ecx_1 = "id != DATAID_NULL"
                goto label_459934
            
            uint32_t edx_4 = zx.d(ecx_21.w)
            int32_t ebx_1
            
            if (edx_4 u< data_62d6c8)
                ebx_1 = data_62d6c4
                eax = edx_4 * 0x8ac
            
            if (edx_4 u>= data_62d6c8 || *(eax + ebx_1 + 0x8a8) != ecx_21)
                var_14c_1 = "DataArray<struct RollGfx>::DataArrayGet"
                var_150_1 = 0x6d
                var_154_1 = "d:\ax\trunk\ax2017\engine\dataarray.h"
                ecx_1 = "DataArrayTryToGet(id) != NULL"
                goto label_459934
            
            int32_t* edi_8 = edx_4 * 0x8ac + ebx_1
            
            if (edi_8[0xe] == 3)
                edi_8 = sub_458560(sub_452b90(edi_8[0xf]), edi_8)
            
            var_14c_9 = arg3[2]
            var_150_2 = "tbl_goods"
            var_154_5 = edi_8[1]
            goto label_458fbe
        case 0x1d
            if (eax != 0)
                goto label_459417
            
            eax_39, edx = sub_426ed0(&arg3[0x1f], edi_2, "tbl_consume", arg3[2])
            goto label_4592e9
        case 0x1e
            if (eax != 0)
                goto label_459417
            
            eax_39, edx = sub_426ed0(&arg3[0x1f], edi_2, "tbl_trade", arg3[2])
            goto label_4592e9
        case 0x1f
            if (eax != 0)
                goto label_459417
            
            eax_39, edx = sub_426ed0(&arg3[0x1f], edi_2, "tbl_spend", arg3[2])
            goto label_4592e9
        case 0x20
            int128_t xmm0 = *(arg3 + 0x18)
            var_78 = xmm0
            int128_t xmm0_1 = *(arg3 + 0x28)
            int128_t xmm0_2 = *(arg3 + 0x38)
            int128_t xmm0_3 = *(arg3 + 0x48)
            int128_t xmm0_4 = *(arg3 + 0x58)
            int128_t xmm0_5 = *(arg3 + 0x68)
            sub_489e40(&var_10)
            var_78.d = xmm0.d + var_10 f- data_632568
            var_78:4.d = var_78:4.d + var_c f- data_63256c
            *arg4 = var_78
            arg4[1] = xmm0_1
            arg4[2] = xmm0_2
            arg4[3] = xmm0_3
            arg4[4] = xmm0_4
            arg4[5] = xmm0_5
            return arg4
        case 0x21
            int128_t xmm0_16 = *(arg3 + 0x18)
            var_78 = xmm0_16
            int128_t xmm0_17 = *(arg3 + 0x28)
            int128_t xmm0_18 = *(arg3 + 0x38)
            int128_t xmm0_19 = *(arg3 + 0x48)
            int128_t xmm0_20 = *(arg3 + 0x58)
            int128_t xmm0_21 = *(arg3 + 0x68)
            sub_489e40(&var_10)
            var_78.d = var_10 f- data_632568 + xmm0_16.d
            var_78:4.d = var_c f- data_63256c f+ var_78:4.d
            *arg4 = var_78
            arg4[1] = xmm0_17
            arg4[2] = xmm0_18
            arg4[3] = xmm0_19
            arg4[4] = xmm0_20
            arg4[5] = xmm0_21
            return arg4
        case 0x22
            int32_t edi_3 = *arg3
            eax = sub_425e70()
            void* ecx_6 = data_6cfe4c
            
            if (ecx_6 == 0)
                goto label_458b0f
            
            int32_t edi_4 = edi_3 - *(ecx_6 + 0xa68)
            eax += edi_4
            
            if (edi_3 - *(ecx_6 + 0xa68) s>= 0)
                eax = edi_4
            
            int32_t ecx_7
            
            if (data_62b1ac != 0x21)
                ecx_7 = 0
                
                if (data_62b1bc == 0x21)
                    ecx_7 = data_62b1c0
            else
                ecx_7 = data_62b1b0
            
            if (eax == 0)
                var_14c_1 = "CalcTransformOpponentDisplayTile"
                var_150_1 = 0x1c80
                ecx_1 = "seat != SEAT_LOCAL"
                goto label_45992a
            
            int32_t eax_7
            int32_t edx_1
            eax_7, edx_1 =
                sub_452690(&arg3[0x1f], ecx_7, "tbl_opponents", eax - 1, "tbl_oppDisplay", arg3[2])
            int128_t* eax_8 = sub_4babb0(eax_7, edx_1, eax_7, &var_78)
            *arg4 = *eax_8
            arg4[1] = eax_8[1]
            arg4[2] = eax_8[2]
            arg4[3] = eax_8[3]
            arg4[4] = eax_8[4]
            arg4[5] = eax_8[5]
            return arg4
        case 0x23
            eax_4 = sub_458970(&var_78, edx, arg3, &var_78)
        label_458d0e:
            *arg4 = *eax_4
            arg4[1] = eax_4[1]
            arg4[2] = eax_4[2]
            arg4[3] = eax_4[3]
            arg4[4] = eax_4[4]
            arg4[5] = eax_4[5]
            return arg4
        case 0x24, 0x25, 0x26
            ecx_37 = &arg3[0x1f]
            var_14c_15 = 0
            
            if (eax != 0)
                var_150_4 = "tbl_creditsAdd"
                goto label_4592d4
            
            int32_t eax_42
            int32_t edx_9
            eax_42, edx_9 = sub_426ed0(ecx_37, edi_2, "tbl_credits", 0)
            int128_t* eax_43 = sub_4babb0(eax_42, edx_9, eax_42, &var_d8)
            *arg4 = *eax_43
            arg4[1] = eax_43[1]
            arg4[2] = eax_43[2]
            arg4[3] = eax_43[3]
            arg4[4] = eax_43[4]
            arg4[5] = eax_43[5]
            return arg4
        case 0x27
            ecx_37 = &arg3[0x1f]
            var_14c_15 = 0
            
            if (eax != 0)
                var_150_4 = "tbl_vpsAdd"
            label_4592d4:
                eax_39, edx = sub_452690(ecx_37, edi_2, "tbl_opponents", eax - 1, var_150_4, var_14c_15)
                goto label_4592e9
            
            eax_39, edx = sub_426ed0(ecx_37, edi_2, "tbl_vps", 0)
        label_4592e9:
            int128_t* eax_40 = sub_4babb0(eax_39, edx, eax_39, &var_d8)
            *arg4 = *eax_40
            arg4[1] = eax_40[1]
            arg4[2] = eax_40[2]
            arg4[3] = eax_40[3]
            arg4[4] = eax_40[4]
            arg4[5] = eax_40[5]
            return arg4
    
    int32_t eax_50
    int32_t edx_16
    eax_50, edx_16 = sub_426ed0(ecx_59, edi_2, var_150_7, var_14c_28)
    eax_4 = sub_4babb0(eax_50, edx_16, eax_50, &var_d8)
    goto label_458d0e
}
