// 函数名称: sub_4732b0
// 虚拟地址: 0x4732b0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_4732b0(int32_t arg1, int32_t arg2, void* arg3, int32_t* arg4, void** arg5, void** arg6)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59e190
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_70 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* result = arg4
    *result = 0
    float var_30 = data_632570
    float xmm0_1 = data_632574
    void var_5c
    sub_420280(&var_5c, &var_30)
    int32_t var_58
    char* eax_4 = var_58
    
    if (var_58 == 0)
        if (arg2 u> 4)
            goto label_4736c7
        
        switch (arg2)
            case 0
            label_473e78:
                *result = 4
                goto label_4737e6
            case 1
                goto label_4736c7
            case 2, 3
            label_4737db:
                *result = 0xf
            label_4737e6:
                result[3] = var_30
                result[4] = xmm0_1
                fsbase->NtTib.ExceptionList = ExceptionList
                return result
            case 4
            label_473fd3:
                *result = 0x16
                goto label_4737e6
    else
        char* const var_18
        
        if (eax_4 == 1)
            int32_t var_54
            
            if (var_54 == 0)
                sub_489550(var_54, &data_5b2591, "id != DATAID_NULL", 
                    "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6c, 
                    "DataArray<struct RollGfx>::DataArrayGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            uint32_t ecx_127 = zx.d(var_54.w)
            void* ecx_128
            int32_t edx_63
            
            if (ecx_127 u< data_62d6c8)
                edx_63 = data_62d6c4
                ecx_128 = ecx_127 * 0x8ac
            
            if (ecx_127 u>= data_62d6c8 || *(edx_63 + ecx_128 + 0x8a8) != var_54)
                sub_489550(var_54, &data_5b2591, "DataArrayTryToGet(id) != NULL", 
                    "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6d, 
                    "DataArray<struct RollGfx>::DataArrayGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            int32_t* edi_2 = ecx_128 + edx_63
            arg4 = edi_2
            eax_4 = sub_46cce0(edi_2)
            
            if (eax_4 != 0)
                goto label_473eee
            
            if (*edi_2 == 1 && edi_2[4] == 4)
                int32_t* eax_89 = sub_452cc0(edi_2[7])
                edi_2 = eax_89
                arg4 = eax_89
                eax_4 = sub_46cce0(edi_2)
            label_473eee:
                
                if (eax_4 != 0x14)
                    if (eax_4 != 3 && eax_4 != 2)
                        goto label_473fc3
                    
                    *result = eax_4
                label_4736c7:
                    
                    if (*result != 0)
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return result
                    
                    sub_489550(eax_4, &data_5b2591, "retval.type != ROLLDROP_NONE", 
                        "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 0x6bc2, "CalcDropTarget")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                *result = eax_4
                
                if (sub_45b410(edi_2) == 2)
                    sub_45b670(edi_2, 0)
                    sub_45b670(edi_2, 1)
                    float eax_93
                    float edx_66
                    eax_93, edx_66 = sub_46b880()
                    float xmm0_5 = eax_93 - var_30
                    float xmm0_7 = edx_66 - xmm0_1
                    float eax_94
                    char* edx_67
                    eax_94, edx_67 = sub_46b880()
                    float xmm1_2 = eax_94 - var_30
                    var_18 = edx_67
                    float xmm0_9 = var_18 - xmm0_1
                    var_18 = sub_41dbe0(xmm0_9 * xmm0_9 + xmm1_2 * xmm1_2)
                    edi_2 = arg4
                    
                    if (not(sub_41dbe0(xmm0_7 * xmm0_7 + xmm0_5 * xmm0_5) f<= var_18))
                        *result = 0x15
                
                eax_4 = edi_2[0x22a]
                result[6] = eax_4
                goto label_4736c7
            
        label_473fc3:
            
            if (arg2 u> 4)
                goto label_4736c7
            
            switch (arg2)
                case 0
                    goto label_473e78
                case 1
                    goto label_4736c7
                case 2, 3
                    goto label_4737db
                case 4
                    goto label_473fd3
        else
            if (eax_4 != 2)
                sub_489550(eax_4 - 2, &data_5b2591, "Halt", 
                    "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 0x6bbf, "CalcDropTarget")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            char* var_40
            eax_4 = var_40
            
            if (eax_4 == 3 || eax_4 == 1 || eax_4 == 2)
                if (arg2 u> 4)
                    goto label_4736c7
                
                switch (arg2)
                    case 0
                        goto label_473e78
                    case 1
                        goto label_4736c7
                    case 2, 3
                        goto label_4737db
                    case 4
                        goto label_473fd3
            else
                if (arg2 u> 4)
                    goto label_4736c7
                
                int32_t var_4c
                
                switch (arg2)
                    case 0
                        char* eax_39 = sub_4aeb40(var_4c)
                        sub_48a2c0(&var_18, "drop_tray_primary")
                        char eax_40
                        int32_t* ecx_53
                        eax_40, ecx_53 = sub_48a520(eax_39, &var_18)
                        ecx_53.b = eax_40
                        arg4:3.b = ecx_53.b
                        int32_t var_8_16 = 8
                        
                        if (data_aca1f4 != 0)
                            char* eax_41 = var_18
                            
                            if (eax_41 != 0 && *eax_41 != 0)
                                char* eax_42 = sub_48a080(&var_18)
                                int32_t temp5_1 = *(eax_42 + 4)
                                *(eax_42 + 4) -= 1
                                
                                if (temp5_1 == 1)
                                    sub_4984f0(eax_42, *(eax_42 + 0xc) + 0x10)
                                    var_18 = &data_5b2591
                                
                                ecx_53.b = arg4:3.b
                        
                        int32_t var_8_17 = 0xffffffff
                        
                        if (ecx_53.b != 0)
                            result[5] = sub_472fc0(&var_5c)
                            *result = 6
                            fsbase->NtTib.ExceptionList = ExceptionList
                            return result
                        
                        sub_48a2c0(&var_18, "drop_tray")
                        char eax_45
                        char* const* ecx_60
                        eax_45, ecx_60 = sub_48a520(eax_39, &var_18)
                        ecx_60.b = eax_45
                        arg4:3.b = ecx_60.b
                        int32_t var_8_18 = 9
                        
                        if (data_aca1f4 != 0)
                            char* const eax_46 = var_18
                            
                            if (eax_46 != 0 && *eax_46 != 0)
                                char* eax_47 = sub_48a080(&var_18)
                                int32_t temp7_1 = *(eax_47 + 4)
                                *(eax_47 + 4) -= 1
                                
                                if (temp7_1 == 1)
                                    sub_4984f0(eax_47, *(eax_47 + 0xc) + 0x10)
                                    var_18 = &data_5b2591
                                
                                ecx_60.b = arg4:3.b
                        
                        int32_t var_8_19 = 0xffffffff
                        
                        if (ecx_60.b != 0)
                            if (data_632590 != 2)
                                *result = 8
                                fsbase->NtTib.ExceptionList = ExceptionList
                                return result
                            
                            result[5] = sub_472fc0(&var_5c)
                            *result = 5
                            fsbase->NtTib.ExceptionList = ExceptionList
                            return result
                        
                        sub_48a2c0(&var_18, "drop_dictate")
                        char eax_51
                        char* const* ecx_69
                        eax_51, ecx_69 = sub_48a520(eax_39, &var_18)
                        ecx_69.b = eax_51
                        arg4:3.b = ecx_69.b
                        int32_t var_8_20 = 0xa
                        
                        if (data_aca1f4 != 0)
                            char* const eax_52 = var_18
                            
                            if (eax_52 != 0 && *eax_52 != 0)
                                char* eax_53 = sub_48a080(&var_18)
                                int32_t temp9_1 = *(eax_53 + 4)
                                *(eax_53 + 4) -= 1
                                
                                if (temp9_1 == 1)
                                    sub_4984f0(eax_53, *(eax_53 + 0xc) + 0x10)
                                    var_18 = &data_5b2591
                                
                                ecx_69.b = arg4:3.b
                        
                        int32_t var_8_21 = 0xffffffff
                        
                        if (ecx_69.b != 0)
                            *result = 7
                            fsbase->NtTib.ExceptionList = ExceptionList
                            return result
                        
                        sub_48a2c0(&var_18, "drop_scout")
                        char eax_55
                        char* const* ecx_75
                        eax_55, ecx_75 = sub_48a520(eax_39, &var_18)
                        ecx_75.b = eax_55
                        arg4:3.b = ecx_75.b
                        int32_t var_8_22 = 0xb
                        
                        if (data_aca1f4 != 0)
                            char* const eax_56 = var_18
                            
                            if (eax_56 != 0 && *eax_56 != 0)
                                char* eax_57 = sub_48a080(&var_18)
                                int32_t temp12_1 = *(eax_57 + 4)
                                *(eax_57 + 4) -= 1
                                
                                if (temp12_1 == 1)
                                    sub_4984f0(eax_57, *(eax_57 + 0xc) + 0x10)
                                    var_18 = &data_5b2591
                                
                                ecx_75.b = arg4:3.b
                        
                        int32_t var_8_23 = 0xffffffff
                        
                        if (ecx_75.b != 0)
                            *result = 0xd
                            fsbase->NtTib.ExceptionList = ExceptionList
                            return result
                        
                        sub_48a2c0(&var_18, "drop_stock")
                        char eax_59
                        char* const* ecx_81
                        eax_59, ecx_81 = sub_48a520(eax_39, &var_18)
                        ecx_81.b = eax_59
                        arg4:3.b = ecx_81.b
                        int32_t var_8_24 = 0xc
                        
                        if (data_aca1f4 != 0)
                            char* const eax_60 = var_18
                            
                            if (eax_60 != 0 && *eax_60 != 0)
                                char* eax_61 = sub_48a080(&var_18)
                                int32_t temp15_1 = *(eax_61 + 4)
                                *(eax_61 + 4) -= 1
                                
                                if (temp15_1 == 1)
                                    sub_4984f0(eax_61, *(eax_61 + 0xc) + 0x10)
                                    var_18 = &data_5b2591
                                
                                ecx_81.b = arg4:3.b
                        
                        int32_t var_8_25 = 0xffffffff
                        
                        if (ecx_81.b != 0)
                            *result = 0xe
                            fsbase->NtTib.ExceptionList = ExceptionList
                            return result
                        
                        sub_48a2c0(&var_18, "drop_bag")
                        char eax_63
                        char* const* ecx_87
                        eax_63, ecx_87 = sub_48a520(eax_39, &var_18)
                        ecx_87.b = eax_63
                        arg4:3.b = ecx_87.b
                        int32_t var_8_26 = 0xd
                        
                        if (data_aca1f4 != 0)
                            char* const eax_64 = var_18
                            
                            if (eax_64 != 0 && *eax_64 != 0)
                                char* eax_65 = sub_48a080(&var_18)
                                int32_t temp16_1 = *(eax_65 + 4)
                                *(eax_65 + 4) -= 1
                                
                                if (temp16_1 == 1)
                                    sub_4984f0(eax_65, *(eax_65 + 0xc) + 0x10)
                                    var_18 = &data_5b2591
                                
                                ecx_87.b = arg4:3.b
                        
                        int32_t var_8_27 = 0xffffffff
                        
                        if (ecx_87.b != 0)
                            *result = 1
                            fsbase->NtTib.ExceptionList = ExceptionList
                            return result
                        
                        sub_48a2c0(&var_18, "drop_cup")
                        char eax_67
                        char* const* ecx_93
                        eax_67, ecx_93 = sub_48a520(eax_39, &var_18)
                        ecx_93.b = eax_67
                        arg4:3.b = ecx_93.b
                        int32_t var_8_28 = 0xe
                        
                        if (data_aca1f4 != 0)
                            char* const eax_68 = var_18
                            
                            if (eax_68 != 0 && *eax_68 != 0)
                                char* eax_69 = sub_48a080(&var_18)
                                int32_t temp17_1 = *(eax_69 + 4)
                                *(eax_69 + 4) -= 1
                                
                                if (temp17_1 == 1)
                                    sub_4984f0(eax_69, *(eax_69 + 0xc) + 0x10)
                                    var_18 = &data_5b2591
                                
                                ecx_93.b = arg4:3.b
                        
                        int32_t var_8_29 = 0xffffffff
                        
                        if (ecx_93.b != 0)
                            *result = 0xb
                            fsbase->NtTib.ExceptionList = ExceptionList
                            return result
                        
                        sub_48a2c0(&var_18, "drop_cup_return")
                        char eax_71
                        char* const* ecx_99
                        eax_71, ecx_99 = sub_48a520(eax_39, &var_18)
                        ecx_99.b = eax_71
                        arg4:3.b = ecx_99.b
                        int32_t var_8_30 = 0xf
                        
                        if (data_aca1f4 != 0)
                            char* const eax_72 = var_18
                            
                            if (eax_72 != 0 && *eax_72 != 0)
                                char* eax_73 = sub_48a080(&var_18)
                                int32_t temp18_1 = *(eax_73 + 4)
                                *(eax_73 + 4) -= 1
                                
                                if (temp18_1 == 1)
                                    sub_4984f0(eax_73, *(eax_73 + 0xc) + 0x10)
                                    var_18 = &data_5b2591
                                
                                ecx_99.b = arg4:3.b
                        
                        int32_t var_8_31 = 0xffffffff
                        
                        if (ecx_99.b != 0)
                            *result = 0xc
                            fsbase->NtTib.ExceptionList = ExceptionList
                            return result
                        
                        sub_48a2c0(&var_18, "drop_citizenry")
                        char eax_75
                        char* const* ecx_105
                        eax_75, ecx_105 = sub_48a520(eax_39, &var_18)
                        ecx_105.b = eax_75
                        arg4:3.b = ecx_105.b
                        int32_t var_8_32 = 0x10
                        
                        if (data_aca1f4 != 0)
                            char* const eax_76 = var_18
                            
                            if (eax_76 != 0 && *eax_76 != 0)
                                char* eax_77 = sub_48a080(&var_18)
                                int32_t temp19_1 = *(eax_77 + 4)
                                *(eax_77 + 4) -= 1
                                
                                if (temp19_1 == 1)
                                    sub_4984f0(eax_77, *(eax_77 + 0xc) + 0x10)
                                    var_18 = &data_5b2591
                                
                                ecx_105.b = arg4:3.b
                        
                        int32_t var_8_33 = 0xffffffff
                        
                        if (ecx_105.b != 0)
                            *result = 0xa
                            fsbase->NtTib.ExceptionList = ExceptionList
                            return result
                        
                        sub_48a2c0(&var_18, "drop_dev")
                        char eax_79
                        char* const* ecx_111
                        eax_79, ecx_111 = sub_48a520(eax_39, &var_18)
                        ecx_111.b = eax_79
                        arg4:3.b = ecx_111.b
                        int32_t var_8_34 = 0x11
                        
                        if (data_aca1f4 != 0)
                            char* const eax_80 = var_18
                            
                            if (eax_80 != 0 && *eax_80 != 0)
                                char* eax_81 = sub_48a080(&var_18)
                                int32_t temp20_1 = *(eax_81 + 4)
                                *(eax_81 + 4) -= 1
                                
                                if (temp20_1 == 1)
                                    sub_4984f0(eax_81, *(eax_81 + 0xc) + 0x10)
                                    var_18 = &data_5b2591
                                
                                ecx_111.b = arg4:3.b
                        
                        int32_t var_8_35 = 0xffffffff
                        
                        if (ecx_111.b != 0)
                            *result = 2
                            fsbase->NtTib.ExceptionList = ExceptionList
                            return result
                        
                        sub_48a2c0(&var_18, "drop_settle")
                        char eax_83
                        char* const* ecx_117
                        eax_83, ecx_117 = sub_48a520(eax_39, &var_18)
                        ecx_117.b = eax_83
                        arg4:3.b = ecx_117.b
                        int32_t var_8_36 = 0x12
                        
                        if (data_aca1f4 != 0)
                            char* const eax_84 = var_18
                            
                            if (eax_84 != 0 && *eax_84 != 0)
                                char* eax_85 = sub_48a080(&var_18)
                                int32_t temp21_1 = *(eax_85 + 4)
                                *(eax_85 + 4) -= 1
                                
                                if (temp21_1 == 1)
                                    sub_4984f0(eax_85, *(eax_85 + 0xc) + 0x10)
                                    var_18 = &data_5b2591
                                
                                ecx_117.b = arg4:3.b
                        
                        int32_t var_8_37 = 0xffffffff
                        
                        if (ecx_117.b != 0)
                            *result = 3
                            fsbase->NtTib.ExceptionList = ExceptionList
                            return result
                        
                        sub_48a2c0(&var_18, "drop_discard")
                        char* const* ecx_123
                        eax_4, ecx_123 = sub_48a520(eax_39, &var_18)
                        ecx_123.b = eax_4.b
                        arg4:3.b = ecx_123.b
                        int32_t var_8_38 = 0x13
                        
                        if (data_aca1f4 != 0)
                            eax_4 = var_18
                            
                            if (eax_4 != 0 && *eax_4 != 0)
                                eax_4 = sub_48a080(&var_18)
                                int32_t temp22_1 = *(eax_4 + 4)
                                *(eax_4 + 4) -= 1
                                
                                if (temp22_1 == 1)
                                    eax_4, ecx_123 = sub_4984f0(eax_4, *(eax_4 + 0xc) + 0x10)
                                    var_18 = &data_5b2591
                                
                                ecx_123.b = arg4:3.b
                        
                        int32_t var_8_39 = 0xffffffff
                        
                        if (ecx_123.b == 0)
                            goto label_4736c7
                        
                        *result = 9
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return result
                    case 1
                        goto label_4736c7
                    case 2
                        char* eax_33 = sub_4aeb40(var_4c)
                        sub_48a2c0(&var_18, "drop_discard")
                        char eax_34
                        char* const* ecx_44
                        eax_34, ecx_44 = sub_48a520(eax_33, &var_18)
                        ecx_44.b = eax_34
                        arg4:3.b = ecx_44.b
                        int32_t var_8_15 = 7
                        
                        if (data_aca1f4 != 0)
                            char* const eax_35 = var_18
                            
                            if (eax_35 != 0 && *eax_35 != 0)
                                char* eax_36 = sub_48a080(&var_18)
                                int32_t temp4_1 = *(eax_36 + 4)
                                *(eax_36 + 4) -= 1
                                
                                if (temp4_1 == 1)
                                    sub_4984f0(eax_36, *(eax_36 + 0xc) + 0x10)
                                
                                ecx_44.b = arg4:3.b
                        
                        if (ecx_44.b == 0)
                            goto label_4737db
                        
                        *result = 0x10
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return result
                    case 3
                        char* eax_25 = sub_4aeb40(var_4c)
                        int32_t ecx_31 = data_632564
                        char* var_20_1 = eax_25
                        
                        if (ecx_31 == 0)
                            sub_489550(eax_25, &data_5b2591, "id != DATAID_NULL", 
                                "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6c, 
                                "DataArray<struct RollGfx>::DataArrayGet")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_489700()
                            noreturn
                        
                        uint32_t edx_16 = zx.d(ecx_31.w)
                        int32_t esi_2
                        
                        if (edx_16 u< data_62d6c8)
                            esi_2 = data_62d6c4
                            eax_25 = edx_16 * 0x8ac
                        
                        if (edx_16 u>= data_62d6c8 || *(eax_25 + esi_2 + 0x8a8) != ecx_31)
                            sub_489550(eax_25, &data_5b2591, "DataArrayTryToGet(id) != NULL", 
                                "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6d, 
                                "DataArray<struct RollGfx>::DataArrayGet")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_489700()
                            noreturn
                        
                        int32_t eax_27 = *(edx_16 * 0x8ac + esi_2 + 0x34)
                        
                        if (eax_27 == 4)
                            *arg5 -= 1
                        else if (eax_27 == 5)
                            *arg6 -= 1
                        
                        sub_48a2c0(&var_18, "drop_settle")
                        char eax_28
                        char* const* ecx_34
                        eax_28, ecx_34 = sub_48a520(var_20_1, &var_18)
                        ecx_34.b = eax_28
                        arg4:3.b = ecx_34.b
                        int32_t var_8_11 = 5
                        
                        if (data_aca1f4 != 0)
                            char* const eax_29 = var_18
                            
                            if (eax_29 != 0 && *eax_29 != 0)
                                char* eax_30 = sub_48a080(&var_18)
                                int32_t temp10_1 = *(eax_30 + 4)
                                *(eax_30 + 4) -= 1
                                
                                if (temp10_1 == 1)
                                    sub_4984f0(eax_30, *(eax_30 + 0xc) + 0x10)
                                    var_18 = &data_5b2591
                                
                                ecx_34.b = arg4:3.b
                        
                        int32_t var_8_12 = 0xffffffff
                        void* var_7c_1
                        void* var_78_1
                        char* var_74_1
                        char* eax_31
                        int32_t* edx_20
                        
                        if (ecx_34.b == 0)
                            sub_48a2c0(&var_18, "drop_dev")
                            char* const eax_32
                            char* const* ecx_39
                            eax_32, ecx_39 = sub_48a520(var_20_1, &var_18)
                            ecx_39.b = eax_32.b
                            arg4:3.b = ecx_39.b
                            int32_t var_8_13 = 6
                            
                            if (data_aca1f4 != 0)
                                eax_32 = var_18
                                
                                if (eax_32 != 0 && *eax_32 != 0)
                                    eax_32 = sub_48a080(&var_18)
                                    int32_t temp13_1 = *(eax_32 + 4)
                                    *(eax_32 + 4) -= 1
                                    
                                    if (temp13_1 == 1)
                                        eax_32, ecx_39 = sub_4984f0(eax_32, *(eax_32 + 0xc) + 0x10)
                                        var_18 = &data_5b2591
                                    
                                    ecx_39.b = arg4:3.b
                            
                            int32_t var_8_14 = 0xffffffff
                            
                            if (ecx_39.b == 0)
                                sub_489550(eax_32, &data_5b2591, "Halt", 
                                    "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 0x6b5f, 
                                    "CalcDropTarget")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_489700()
                                noreturn
                            
                            *arg5 += 1
                            eax_31 = &result[2]
                            var_74_1 = eax_31
                            var_78_1 = *arg5
                            *result = 0x12
                            edx_20 = 4
                            var_7c_1 = arg3
                        else
                            *arg6 += 1
                            eax_31 = &result[2]
                            var_74_1 = eax_31
                            var_78_1 = *arg6
                            *result = 0x13
                            edx_20 = 5
                            var_7c_1 = arg3
                        
                        eax_4 = sub_472c50(eax_31, edx_20, &var_30, var_7c_1, var_78_1, var_74_1)
                        result[1] = eax_4
                        goto label_4736c7
                    case 4
                        char* eax_7 = sub_4aeb40(var_4c)
                        sub_48a2c0(&var_18, "drop_consume")
                        char eax_8
                        char* const* ecx_4
                        eax_8, ecx_4 = sub_48a520(eax_7, &var_18)
                        ecx_4.b = eax_8
                        arg4:3.b = ecx_4.b
                        int32_t var_8_1 = 0
                        
                        if (data_aca1f4 != 0)
                            char* const eax_9 = var_18
                            
                            if (eax_9 != 0 && *eax_9 != 0)
                                char* eax_10 = sub_48a080(&var_18)
                                int32_t temp3_1 = *(eax_10 + 4)
                                *(eax_10 + 4) -= 1
                                
                                if (temp3_1 == 1)
                                    sub_4984f0(eax_10, *(eax_10 + 0xc) + 0x10)
                                    var_18 = &data_5b2591
                                
                                ecx_4.b = arg4:3.b
                        
                        int32_t var_8_2 = 0xffffffff
                        
                        if (ecx_4.b != 0)
                            *result = 0x17
                            fsbase->NtTib.ExceptionList = ExceptionList
                            return result
                        
                        sub_48a2c0(&var_18, "drop_consume_spend")
                        char eax_12
                        char* const* ecx_10
                        eax_12, ecx_10 = sub_48a520(eax_7, &var_18)
                        ecx_10.b = eax_12
                        arg4:3.b = ecx_10.b
                        int32_t var_8_3 = 1
                        
                        if (data_aca1f4 != 0)
                            char* const eax_13 = var_18
                            
                            if (eax_13 != 0 && *eax_13 != 0)
                                char* eax_14 = sub_48a080(&var_18)
                                int32_t temp6_1 = *(eax_14 + 4)
                                *(eax_14 + 4) -= 1
                                
                                if (temp6_1 == 1)
                                    sub_4984f0(eax_14, *(eax_14 + 0xc) + 0x10)
                                    var_18 = &data_5b2591
                                
                                ecx_10.b = arg4:3.b
                        
                        int32_t var_8_4 = 0xffffffff
                        
                        if (ecx_10.b == 0)
                            sub_48a2c0(&var_18, "drop_trade")
                            char eax_16
                            char* const* ecx_16
                            eax_16, ecx_16 = sub_48a520(eax_7, &var_18)
                            ecx_16.b = eax_16
                            arg4:3.b = ecx_16.b
                            int32_t var_8_5 = 2
                            
                            if (data_aca1f4 != 0)
                                char* const eax_17 = var_18
                                
                                if (eax_17 != 0 && *eax_17 != 0)
                                    char* eax_18 = sub_48a080(&var_18)
                                    int32_t temp8_1 = *(eax_18 + 4)
                                    *(eax_18 + 4) -= 1
                                    
                                    if (temp8_1 == 1)
                                        sub_4984f0(eax_18, *(eax_18 + 0xc) + 0x10)
                                        var_18 = &data_5b2591
                                    
                                    ecx_16.b = arg4:3.b
                            
                            int32_t var_8_6 = 0xffffffff
                            
                            if (ecx_16.b != 0)
                                *result = 0x18
                                fsbase->NtTib.ExceptionList = ExceptionList
                                return result
                            
                            sub_48a2c0(&var_18, "drop_spend")
                            char eax_20
                            char* const* ecx_22
                            eax_20, ecx_22 = sub_48a520(eax_7, &var_18)
                            ecx_22.b = eax_20
                            arg4:3.b = ecx_22.b
                            int32_t var_8_7 = 3
                            
                            if (data_aca1f4 != 0)
                                char* const eax_21 = var_18
                                
                                if (eax_21 != 0 && *eax_21 != 0)
                                    char* eax_22 = sub_48a080(&var_18)
                                    int32_t temp11_1 = *(eax_22 + 4)
                                    *(eax_22 + 4) -= 1
                                    
                                    if (temp11_1 == 1)
                                        sub_4984f0(eax_22, *(eax_22 + 0xc) + 0x10)
                                        var_18 = &data_5b2591
                                    
                                    ecx_22.b = arg4:3.b
                            
                            int32_t var_8_8 = 0xffffffff
                            
                            if (ecx_22.b == 0)
                                sub_48a2c0(&var_18, "drop_tray")
                                char* eax_23
                                char* const* ecx_26
                                eax_23, ecx_26 = sub_48a520(eax_7, &var_18)
                                ecx_26.b = eax_23.b
                                arg4:3.b = ecx_26.b
                                int32_t var_8_9 = 4
                                
                                if (data_aca1f4 != 0)
                                    eax_23 = var_18
                                    
                                    if (eax_23 != 0 && *eax_23 != 0)
                                        eax_23 = sub_48a080(&var_18)
                                        int32_t temp14_1 = *(eax_23 + 4)
                                        *(eax_23 + 4) -= 1
                                        
                                        if (temp14_1 == 1)
                                            eax_23, ecx_26 = sub_4984f0(eax_23, *(eax_23 + 0xc) + 0x10)
                                            var_18 = &data_5b2591
                                        
                                        ecx_26.b = arg4:3.b
                                
                                int32_t var_8_10 = 0xffffffff
                                
                                if (ecx_26.b != 0)
                                    *result = 0x1a
                                    fsbase->NtTib.ExceptionList = ExceptionList
                                    return result
                                
                                sub_489550(eax_23, &data_5b2591, "Halt", 
                                    "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 0x6b44, 
                                    "CalcDropTarget")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_489700()
                                noreturn
                        
                        *result = 0x19
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return result
}
