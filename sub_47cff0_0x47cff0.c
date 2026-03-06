// 函数名称: sub_47cff0
// 虚拟地址: 0x47cff0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_47cff0(int32_t arg1, int32_t* arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, void* arg6, uint32_t arg7)
{
    // 第一条实际指令: uint32_t var_8 = arg3
    uint32_t var_8 = arg3
    uint32_t eax = arg3
    char const* const var_20_1
    int32_t var_1c_1
    char const* const var_18_1
    char* ecx
    
    if (arg2 == 0xffffffff)
        var_18_1 = "ProcessNotifyUIOpponent"
        var_1c_1 = 0x83a2
        ecx = "arg_who != PLAYER_NONE"
    label_47dc82:
        var_20_1 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
    label_47dc8c:
        sub_489550(eax, &data_5b2591, ecx, var_20_1, var_1c_1, var_18_1)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t ecx_1 = data_70916c
    
    if (eax u> 0x42)
    label_47dc73:
        var_18_1 = "ProcessNotifyUIOpponent"
        var_1c_1 = 0x85d6
        ecx = "Halt"
        goto label_47dc82
    
    eax = zx.d(lookup_table_47dd48[eax])
    
    switch (eax)
        case 0
            var_18_1 = "ProcessNotifyUIOpponent"
            var_1c_1 = 0x83b4
            ecx = "who == PLAYER_NONE"
            goto label_47dc82
        case 1
            if (ecx_1 == 0)
                uint32_t (* eax_1)[0x4] = sub_45b360(eax, arg4, arg2, arg5)
                int32_t* eax_2 = sub_452b90(arg2)
                return sub_45b790(eax_2, eax_1, eax_2, 3, 4)
            
            var_18_1 = "ProcessNotifyUIOpponent"
            var_1c_1 = 0x83c1
            ecx = "turnInput == TURN_STARTOFGAME"
            goto label_47dc82
        case 2
            if (ecx_1 == 0)
                int32_t* eax_4 = sub_45b360(eax, arg4, arg2, arg6)
                uint32_t (* eax_5)[0x4] = sub_45b360(eax_4, arg5, arg2, arg7)
                int32_t* eax_6 = sub_452b90(arg2)
                return sub_45b790(sub_45b790(eax_6, eax_4, eax_6, 3, 2), eax_5, eax_6, 3, 3)
            
            var_18_1 = "ProcessNotifyUIOpponent"
            var_1c_1 = 0x83ca
            ecx = "turnInput == TURN_STARTOFGAME"
            goto label_47dc82
        case 3
            if (ecx_1 == 0)
                void* eax_9 = sub_452b90(arg2)
                *(eax_9 + 0x300) = arg4
                return eax_9
            
            var_18_1 = "ProcessNotifyUIOpponent"
            var_1c_1 = 0x83d5
            ecx = "turnInput == TURN_STARTOFGAME"
            goto label_47dc82
        case 4
            int32_t ecx_14 = *(arg2 * 0x2d78 + 0x6fae10)
            *(arg2 * 0x2d78 + 0x6fae10) = ecx_14 + 1
            *(arg2 * 0x2d78 + 0x6fadf4 + (ecx_14 << 2) + 4) = arg4
            *(arg2 * 0x2d78 + 0x6fadf4 + (ecx_14 << 2) + 0xc) = arg5
            return arg5
        case 5
            int32_t eax_14 =
                sub_4818d0(eax, *(arg2 * 0x2d78 + 0x6fae10), arg2 * 0x2d78 + 0x6fadf8, arg4)
            int32_t eax_15 =
                sub_4818d0(eax_14, *(arg2 * 0x2d78 + 0x6fae10), arg2 * 0x2d78 + 0x6fadf8, arg5)
            *(arg2 * 0x2d78 + 0x6fadf4 + (eax_14 << 2) + 0x14) = 4
            *(arg2 * 0x2d78 + 0x6fadf4 + (eax_15 << 2) + 0x14) = 5
            return eax_15
        case 6
            int32_t ecx_17 = *(arg2 * 0x2d78 + 0x6fae14)
            *(arg2 * 0x2d78 + 0x6fae14) = ecx_17 + 1
            *(arg2 * 0x2d78 + 0x6fadf4 + (ecx_17 << 2) + 0x24) = arg4
            *(arg2 * 0x2d78 + 0x6fadf4 + (ecx_17 << 2) + 0xc4) = arg5
            return arg5
        case 7
            if (ecx_1 == 2)
                int32_t eax_29 =
                    sub_481890(eax, arg2 * 0x2d78 + 0x6fb0c0, arg2 * 0x2d78 + 0x6faf58, arg5)
                eax = sub_4776a0(arg4)
                *(arg2 * 0x2d78 + 0x6fadf4 + (eax_29 << 2) + 0x204) = eax
                *(eax_29 + arg2 * 0x2d78 + 0x6fadf4 + 0x2a4) = 1
                
                if (*(arg2 * 0x2d78 + 0x6fadf4 + (eax_29 << 2) + 0x204) != 0)
                    *(sub_452b90(arg2) + 0xbe0) = arg4
                    int32_t eax_31 = data_63258c
                    *((eax_31 << 2) + &data_632578) = arg4
                    data_63258c += 1
                    return eax_31
                
                var_18_1 = "ProcessNotifyUIOpponent"
                var_1c_1 = 0x8432
                ecx = "turnBuffer.assign.where[idx] != DW_NONE"
            else
                var_18_1 = "ProcessNotifyUIOpponent"
                var_1c_1 = 0x842d
                ecx = "turnInput == TURN_ASSIGN"
            
            goto label_47dc82
        case 8
            if (ecx_1 != 2)
                var_18_1 = "ProcessNotifyUIOpponent"
                var_1c_1 = 0x8442
                ecx = "turnInput == TURN_ASSIGN"
                goto label_47dc82
            
            if (arg5 != 4 && arg5 != 7)
                var_18_1 = "ProcessNotifyUIOpponent"
                var_1c_1 = 0x8444
                ecx = "arg2 == WHERE_WORKER || arg2 == WHERE_DICTATE"
                goto label_47dc82
            
            void* edi_4 = arg2 * 0x2d78 + 0x6fadf4
                + (sub_481890(eax, arg2 * 0x2d78 + 0x6fb0c0, arg2 * 0x2d78 + 0x6faf58, arg4) << 2)
            
            if (arg5 != 7)
                eax = sub_4776a0(arg6)
            else
                eax = arg5 + 1
            
            *(edi_4 + 0x204) = eax
            
            if (eax != 0)
                return eax
            
            var_18_1 = "ProcessNotifyUIOpponent"
            var_1c_1 = 0x8450
            ecx = "turnBuffer.assign.where[idx] != DW_NONE"
            goto label_47dc82
        case 9
            if (ecx_1 == 3)
                return eax
            
            var_18_1 = "ProcessNotifyUIOpponent"
            var_1c_1 = 0x8457
            ecx = "turnInput == TURN_EXPLORE"
            goto label_47dc82
        case 0xa
            if (ecx_1 != 3)
                var_18_1 = "ProcessNotifyUIOpponent"
                var_1c_1 = 0x8464
                ecx = "turnInput == TURN_EXPLORE"
                goto label_47dc82
            
            int32_t ecx_29 = *(arg2 * 0x2d78 + 0x6fba90)
            *(arg2 * 0x2d78 + 0x6fba90) = ecx_29 + 1
            *(arg2 * 0x2d78 + 0x6fadf4 + (ecx_29 << 2) + 0xb5c) = arg4
            *(arg2 * 0x2d78 + 0x6fadf4 + (ecx_29 << 2) + 0xbfc) = 3
            return arg4
        case 0xb
            if (ecx_1 != 3)
                var_18_1 = "ProcessNotifyUIOpponent"
                var_1c_1 = 0x845c
                ecx = "turnInput == TURN_EXPLORE"
                goto label_47dc82
            
            int32_t ecx_28 = *(arg2 * 0x2d78 + 0x6fb94c)
            *(arg2 * 0x2d78 + 0x6fb94c) = ecx_28 + 1
            *(arg2 * 0x2d78 + 0x6fadf4 + (ecx_28 << 2) + 0xa18) = arg4
            *(arg2 * 0x2d78 + 0x6fadf4 + (ecx_28 << 2) + 0xab8) = 3
            return arg4
        case 0xc
            return eax
        case 0xd
            if (ecx_1 != 3)
                var_18_1 = "ProcessNotifyUIOpponent"
                var_1c_1 = 0x8486
                ecx = "turnInput == TURN_EXPLORE"
                goto label_47dc82
            
            eax = sub_481820(eax, *(arg2 * 0x2d78 + 0x6fb4b4), arg2 * 0x2d78 + 0x6fb284, arg4)
            int32_t eax_39
            
            if (eax != 0xffffffff)
                int32_t ecx_33 = *(arg2 * 0x2d78 + 0x6fb4b4)
                
                if (eax s>= ecx_33)
                    var_18_1 = "ArrayRemoveAt"
                    var_1c_1 = 0x7561
                    ecx = "idx < num"
                    goto label_47dc82
                
                *(arg2 * 0x2d78 + 0x6fb4b4) = ecx_33 - 1
                *(arg2 * 0x2d78 + 0x6fadf4 + (eax << 3) + 0x490) =
                    *(arg2 * 0x2d78 + 0x6fadf4 + ((ecx_33 - 1) << 3) + 0x490)
                eax_39 = *(arg2 * 0x2d78 + 0x6fadf4 + ((ecx_33 - 1) << 3) + 0x494)
                *(arg2 * 0x2d78 + 0x6fadf4 + (eax << 3) + 0x494) = eax_39
            else
                int32_t ecx_32 = *(arg2 * 0x2d78 + 0x6fb280)
                eax_39 = ecx_32 + 1
                *(arg2 * 0x2d78 + 0x6fb280) = eax_39
                *(arg2 * 0x2d78 + 0x6fadf4 + (ecx_32 << 2) + 0x374) = arg4
            
            eax = sub_481930(eax_39, *(arg2 * 0x2d78 + 0x6fb800), arg2 * 0x2d78 + 0x6fb4b8, arg4)
            
            if (eax != 0xffffffff)
                return sub_481960(eax, arg2 * 0x2d78 + 0x6fb800, arg2 * 0x2d78 + 0x6fb4b8, eax)
            
            return eax
        case 0xe
            return sub_47baa0(eax, arg2, 0x18, arg4, arg5, arg6, arg7, 0)
        case 0xf
            if (ecx_1 != 3)
                var_18_1 = "ProcessNotifyUIOpponent"
                var_1c_1 = 0x8478
                ecx = "turnInput == TURN_EXPLORE"
                goto label_47dc82
            
            int32_t edx_12 = *(arg2 * 0x2d78 + 0x6fb4b4)
            eax = sub_481820(eax, edx_12, arg2 * 0x2d78 + 0x6fb284, arg4)
            
            if (eax != 0xffffffff)
                return eax
            
            *(arg2 * 0x2d78 + 0x6fb4b4) = edx_12 + 1
            *(arg2 * 0x2d78 + 0x6fadf4 + (edx_12 << 3) + 0x490) = arg4
            *(arg2 * 0x2d78 + 0x6fadf4 + (edx_12 << 3) + 0x494) = arg5
            return arg5
        case 0x10
            if (ecx_1 != 3)
                var_18_1 = "ProcessNotifyUIOpponent"
                var_1c_1 = 0x849f
                ecx = "turnInput == TURN_EXPLORE"
                goto label_47dc82
            
            int32_t eax_42 =
                sub_481930(eax, *(arg2 * 0x2d78 + 0x6fb800), arg2 * 0x2d78 + 0x6fb4b8, arg4)
            
            if (eax_42 != 0xffffffff)
                sub_481960(eax_42, arg2 * 0x2d78 + 0x6fb800, arg2 * 0x2d78 + 0x6fb4b8, eax_42)
            
            int32_t ecx_39 = *(arg2 * 0x2d78 + 0x6fb800)
            *(arg2 * 0x2d78 + 0x6fb800) = ecx_39 + 1
            void* ecx_40 = arg2 * 0x2d78 + 0x6fadf4 + ecx_39 * 0xc
            *(ecx_40 + 0x6c4) = arg4
            int32_t eax_46
            eax_46.b = arg5 != 0
            *(ecx_40 + 0x6c8) = eax_46 + 4
            int32_t eax_47
            eax_47.b = arg6 != 0
            *(ecx_40 + 0x6cc) = eax_47.b
            return eax_47
        case 0x11
            eax = sub_47ce50(ecx_1, arg2 * 0x2d78 + 0x6fadf4)
            int32_t edx_20 = *(eax + 0x18)
            
            if (edx_20 s< 6)
                *(eax + (edx_20 << 2)) = arg4
                *(eax + 0x18) += 1
                return arg4
            
            var_18_1 = "ProcessNotifyUIOpponent"
            var_1c_1 = 0x84b5
            ecx = "deploy.numDiceAssigned < MAX_DICE_ASSIGNED"
            goto label_47dc82
        case 0x12
            if (ecx_1 == 4 || ecx_1 == 5)
                eax = sub_47ce50(ecx_1, arg2 * 0x2d78 + 0x6fadf4)
                int32_t edx_22 = *(eax + 0x50)
                
                if (edx_22 s< 6)
                    *(eax + 0x50) = edx_22 + 1
                    *(eax + (edx_22 << 2) + 0x20) = arg4
                    *(eax + (edx_22 << 2) + 0x38) = 3
                    return arg4
                
                var_18_1 = "ProcessNotifyUIOpponent"
                var_1c_1 = 0x84c1
                ecx = "deploy.numDiceUsed < MAX_DICE_USED"
            else
                var_18_1 = "ProcessNotifyUIOpponent"
                var_1c_1 = 0x84bb
                ecx = "turnInput == TURN_DEVELOP || turnInput == TURN_SETTLE"
            
            goto label_47dc82
        case 0x13
            if (ecx_1 == 4 || ecx_1 == 5)
                void* eax_51 = sub_47ce50(ecx_1, arg2 * 0x2d78 + 0x6fadf4)
                *(eax_51 + 0x1c) = 1
                *(eax_51 + 0x54) = arg4
                return eax_51
            
            var_18_1 = "ProcessNotifyUIOpponent"
            var_1c_1 = 0x84cf
            ecx = "turnInput == TURN_DEVELOP || turnInput == TURN_SETTLE"
            goto label_47dc82
        case 0x14
            if (ecx_1 == 5 || ecx_1 == 4)
                void* eax_52 = sub_47cf60(ecx_1, arg2 * 0x2d78 + 0x6fadf4)
                *(eax_52 + 0xc4) += arg5
                return eax_52
            
            var_18_1 = "ProcessNotifyUIOpponent"
            var_1c_1 = 0x84e0
            ecx = "Halt"
            goto label_47dc82
        case 0x15
            if (ecx_1 == 3)
                *(arg2 * 0x2d78 + 0x6fb808) += arg5
                return arg5
            
            if (ecx_1 == 4)
                *(arg2 * 0x2d78 + 0x6fc718) += arg5
                return arg5
            
            if (ecx_1 == 5)
                *(arg2 * 0x2d78 + 0x6fd4e8) += arg5
                return arg5
            
            if (ecx_1 == 6)
                *(arg2 * 0x2d78 + 0x6fd778) += arg5
                return arg5
            
            if (ecx_1 == 7)
                *(arg2 * 0x2d78 + 0x6fda10) += arg5
                return arg5
            
            var_18_1 = "ProcessNotifyUIOpponent"
            var_1c_1 = 0x850f
            ecx = "Halt"
            goto label_47dc82
        case 0x16
            eax = data_6cfe4c
            
            if (eax == 0)
                goto label_47d05d
            
            if (arg2 == *(eax + 0xa68))
                var_18_1 = "ProcessNotifyUIOpponent"
                var_1c_1 = 0x84e7
                ecx = "arg_who != LocalWho()"
                goto label_47dc82
            
            if (ecx_1 == 3)
                *(arg2 * 0x2d78 + 0x6fb804) += arg5
                return arg5
            
            if (ecx_1 == 7)
                *(arg2 * 0x2d78 + 0x6fda08) += arg5
                return arg5
            
            var_18_1 = "ProcessNotifyUIOpponent"
            var_1c_1 = 0x84f2
            ecx = "Halt"
            goto label_47dc82
        case 0x17
            if (arg4 != 0xffffffff)
                var_18_1 = "ProcessNotifyUIOpponent"
                var_1c_1 = 0x857e
                ecx = "arg1 == -1"
                goto label_47dc82
            
            if (ecx_1 == 9)
                if (arg5 s< 0)
                    *(arg2 * 0x2d78 + 0x6fdb64) -= arg5
                    return arg5
                
                *(arg2 * 0x2d78 + 0x6fdb68) += arg5
                return arg5
            
            if (ecx_1 == 7)
                *(arg2 * 0x2d78 + 0x6fda18) -= arg5
                return arg5
            
            var_18_1 = "ProcessNotifyUIOpponent"
            var_1c_1 = 0x8597
            ecx = "Halt"
            goto label_47dc82
        case 0x18
            if (ecx_1 == 4 || ecx_1 == 5)
                void* eax_63 = sub_47cf60(ecx_1, arg2 * 0x2d78 + 0x6fadf4)
                int32_t esi_7 = *(eax_63 + 0xc0)
                *(eax_63 + 0xc0) = esi_7 + 1
                *(eax_63 + (esi_7 << 2) + 0x80) = arg4
                *(eax_63 + (esi_7 << 2) + 0x90) = sub_45bf60(arg6, 0)
                *(eax_63 + (esi_7 << 2) + 0xb0) = arg5
                return arg5
            
            if (ecx_1 == 0)
                return sub_47baa0(eax, arg2, 0x2a, arg4, arg5, arg6, arg7, 0)
            
            var_18_1 = "ProcessNotifyUIOpponent"
            var_1c_1 = 0x8523
            ecx =
                "turnInput == TURN_DEVELOP || turnInput == TURN_SETTLE || turnInput == TURN_STARTOFGAME"
            goto label_47dc82
        case 0x19
            if (ecx_1 == 5)
                void* eax_67 = sub_47cf60(5, arg2 * 0x2d78 + 0x6fadf4)
                int32_t edx_30 = *(eax_67 + 0xc0)
                *(eax_67 + 0xc0) = edx_30 + 1
                *(eax_67 + (edx_30 << 2) + 0x80) = arg4
                *(eax_67 + (edx_30 << 2) + 0x90) = 4
                *(eax_67 + (edx_30 << 2) + 0xa0) = arg5
                *(eax_67 + (edx_30 << 2) + 0xb0) = arg6
                return arg6
            
            if (ecx_1 == 0)
                return sub_47baa0(eax, arg2, 0x2b, arg4, arg5, arg6, arg7, 0)
            
            var_18_1 = "ProcessNotifyUIOpponent"
            var_1c_1 = 0x8539
            ecx = "turnInput == TURN_SETTLE || turnInput == TURN_STARTOFGAME"
            goto label_47dc82
        case 0x1a
            if (ecx_1 == 2)
                int32_t edi_3 = *(arg2 * 0x2d78 + 0x6fb164)
                *(arg2 * 0x2d78 + 0x6fb164) = edi_3 + 1
                *(arg2 * 0x2d78 + 0x6fadf4 + (edi_3 << 2) + 0x2d0) = arg4
                *(arg2 * 0x2d78 + 0x6fadf4 + (edi_3 << 2) + 0x2f0) = sub_4776a0(arg6)
                *(arg2 * 0x2d78 + 0x6fadf4 + (edi_3 << 2) + 0x310) = arg5
                *(arg2 * 0x2d78 + 0x6fadf4 + (edi_3 << 2) + 0x330) = sub_476fd0(arg5, arg6)
                *(arg2 * 0x2d78 + 0x6fadf4 + (edi_3 << 2) + 0x350) = arg7
                return arg7
            
            if (ecx_1 != 4)
                var_18_1 = "ProcessNotifyUIOpponent"
                var_1c_1 = 0x8412
                ecx = "turnInput == TURN_ASSIGN || turnInput == TURN_DEVELOP"
                goto label_47dc82
            
            int32_t edi_2 = *(arg2 * 0x2d78 + 0x6fc7bc)
            *(arg2 * 0x2d78 + 0x6fc7bc) = edi_2 + 1
            *(arg2 * 0x2d78 + 0x6fadf4 + (edi_2 << 2) + 0x1928) = arg4
            *(arg2 * 0x2d78 + 0x6fadf4 + (edi_2 << 2) + 0x1948) = sub_4776a0(arg6)
            *(arg2 * 0x2d78 + 0x6fadf4 + (edi_2 << 2) + 0x1968) = arg5
            *(arg2 * 0x2d78 + 0x6fadf4 + (edi_2 << 2) + 0x1988) = sub_476fd0(arg5, arg6)
            *(arg2 * 0x2d78 + 0x6fadf4 + (edi_2 << 2) + 0x19a8) = arg7
            return arg7
        case 0x1b
            if (ecx_1 == 4 || ecx_1 == 5)
                void* eax_60 = sub_47cf60(ecx_1, arg2 * 0x2d78 + 0x6fadf4)
                *(eax_60 + (*(eax_60 + 0x7c) << 2) + 0x5c) = arg4
                *(eax_60 + 0x7c) += 1
                return eax_60
            
            var_18_1 = "ProcessNotifyUIOpponent"
            var_1c_1 = 0x8516
            ecx = "turnInput == TURN_DEVELOP || turnInput == TURN_SETTLE"
            goto label_47dc82
        case 0x1c
            if (ecx_1 == 4)
            label_47dc61:
                *(arg2 * 0x2d78 + 0x6fadf4 + (*(arg2 * 0x2d78 + 0x6fc860) << 2) + 0x19cc) = arg4
                *(arg2 * 0x2d78 + 0x6fc860) += 1
                return arg4
            
            if (ecx_1 == 1)
            label_47dbdf:
                *(arg2 * 0x2d78 + 0x6fadf4 + (*(arg2 * 0x2d78 + 0x6fd630) << 2) + 0x279c) = arg4
                *(arg2 * 0x2d78 + 0x6fd630) += 1
                return arg4
            
            if (ecx_1 == 6)
                *(arg2 * 0x2d78 + 0x6fadf4 + (*(arg2 * 0x2d78 + 0x6fd81c) << 2) + 0x2988) = arg4
                *(arg2 * 0x2d78 + 0x6fd81c) += 1
                return arg4
            
            if (ecx_1 != 7)
                return eax
            
            *(arg2 * 0x2d78 + 0x6fadf4 + (*(arg2 * 0x2d78 + 0x6fdabc) << 2) + 0x2c28) = arg4
            *(arg2 * 0x2d78 + 0x6fdabc) += 1
            return arg4
        case 0x1d
            if (ecx_1 == 4)
                goto label_47dc61
            
            if (ecx_1 == 5)
                goto label_47dbdf
            
            var_18_1 = "ProcessNotifyUIOpponent"
            var_1c_1 = 0x85c8
            ecx = "turnInput == TURN_DEVELOP || turnInput == TURN_SETTLE"
            goto label_47dc82
        case 0x1e
            if (ecx_1 == 4 || ecx_1 == 5)
                void* eax_69 = sub_47cf60(ecx_1, arg2 * 0x2d78 + 0x6fadf4)
                int32_t eax_70 = sub_4818d0(eax_69, *(eax_69 + 0x50), eax_69 + 0x20, arg4)
                *(eax_69 + (eax_70 << 2) + 0x38) = 7
                return eax_70
            
            var_18_1 = "ProcessNotifyUIOpponent"
            var_1c_1 = 0x854e
            ecx = "turnInput == TURN_DEVELOP || turnInput == TURN_SETTLE"
            goto label_47dc82
        case 0x1f
            if (ecx_1 != 6)
                var_18_1 = "ProcessNotifyUIOpponent"
                var_1c_1 = 0x8560
                ecx = "turnInput == TURN_PRODUCE"
                goto label_47dc82
            
            int32_t edx_33 = *(arg2 * 0x2d78 + 0x6fd774)
            *(arg2 * 0x2d78 + 0x6fd774) = edx_33 + 1
            *(arg2 * 0x2d78 + 0x6fadf4 + (edx_33 << 2) + 0x28e0) = arg4
            *(arg2 * 0x2d78 + 0x6fadf4 + (edx_33 << 2) + 0x2840) = arg5
            eax = sub_4571c0()
            
            if (*(eax + 0x3c) == arg2)
                return eax
            
            var_18_1 = "ProcessNotifyUIOpponent"
            var_1c_1 = 0x8567
            ecx = "gfx.tile.owner == who"
            goto label_47dc82
        case 0x20
            if (ecx_1 != 7)
                var_18_1 = "ProcessNotifyUIOpponent"
                var_1c_1 = 0x856c
                ecx = "turnInput == TURN_SHIP"
                goto label_47dc82
            
            int32_t ecx_55 = *(arg2 * 0x2d78 + 0x6fda00)
            *(arg2 * 0x2d78 + 0x6fda00) = ecx_55 + 1
            *(arg2 * 0x2d78 + 0x6fadf4 + (ecx_55 << 2) + 0x2a2c) = arg5
            *(arg2 * 0x2d78 + 0x6fadf4 + (ecx_55 << 2) + 0x2acc) = arg6
            eax = sub_457200(arg2, arg5)
            
            if (*(eax + 0x18) != arg2)
                var_18_1 = "ProcessNotifyUIOpponent"
                var_1c_1 = 0x8574
                ecx = "gfxShip.die.owner == who"
                goto label_47dc82
            
            eax = sub_457200(arg2, arg6)
            
            if (*(eax + 0x18) == arg2)
                return eax
            
            var_18_1 = "ProcessNotifyUIOpponent"
            var_1c_1 = 0x8576
            ecx = "gfxGood.die.owner == who"
            goto label_47dc82
        case 0x21
            if (ecx_1 == 7)
                *(arg2 * 0x2d78 + 0x6fda0c) += arg4
                return arg4
            
            var_18_1 = "ProcessNotifyUIOpponent"
            var_1c_1 = 0x859c
            ecx = "turnInput == TURN_SHIP"
            goto label_47dc82
        case 0x22
            if (ecx_1 == 7)
                *(arg2 * 0x2d78 + 0x6fda14) += arg4
                return arg4
            
            var_18_1 = "ProcessNotifyUIOpponent"
            var_1c_1 = 0x85a0
            ecx = "turnInput == TURN_SHIP"
            goto label_47dc82
        case 0x23
            if (ecx_1 == 9)
                *(arg2 * 0x2d78 + 0x6fadf4 + (*(arg2 * 0x2d78 + 0x6fdb60) << 2) + 0x2ccc) = arg4
                *(arg2 * 0x2d78 + 0x6fdb60) += 1
                return arg4
            
            var_18_1 = "ProcessNotifyUIOpponent"
            var_1c_1 = 0x85a7
            ecx = "turnInput == TURN_MANAGE"
            goto label_47dc82
        case 0x24
            void* eax_10 = sub_452b90(arg2)
            *(eax_10 + 0x2f8) = arg4
            *(eax_10 + 0x2fc) = 0
            return eax_10
        case 0x25
            return sub_45b080(eax, arg4, arg2, arg5)
        case 0x26
            eax = data_6cfe4c
            
            if (eax == 0)
            label_47d05d:
                var_18_1 = "GetClient"
                var_1c_1 = 0x75
                var_20_1 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
                ecx = "gClient"
                goto label_47dc8c
            
            var_18_1 = "ProcessNotifyUIOpponent"
            
            if (arg2 == *(eax + 0xa68))
                var_1c_1 = 0x83bb
                var_20_1 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
                ecx = "Halt"
            else
                var_1c_1 = 0x83ba
                var_20_1 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
                ecx = "who == LocalWho()"
            
            goto label_47dc8c
        case 0x27
            goto label_47dc73
}
