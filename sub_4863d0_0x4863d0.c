// 函数名称: sub_4863d0
// 虚拟地址: 0x4863d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_4863d0(int32_t arg1, int32_t* arg2, char** arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, char arg9)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59eae2
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_c8 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** result_1 = arg3
    int32_t* result = result_1
    void* result_3 = result_1
    struct _EXCEPTION_REGISTRATION_RECORD** eax_3
    eax_3.b = arg9
    char** result_2 = result_1
    int32_t var_40 = 0
    char var_79 = eax_3.b
    char var_48 = eax_3.b
    *result_1 = &data_5b2591
    char* ebx = 1
    int32_t var_8_1 = 0
    char* var_4c = 1
    int32_t var_40_1 = 1
    
    if (arg4 == 0)
        sub_489550(eax_3, &data_5b2591, "displayRound != 0", 
            "d:\ax\trunk\ax2017\jams\roll\code\rolllog.cpp", 0x4e6, "LogRoundDescToString")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t var_8_2 = 1
    char* var_44
    char* eax_5 = *sub_48a9d0(&var_44, "{header_log}Assign{br}{normal_log}")
    char* ecx = &data_5b2591
    
    if (eax_5 != 0)
        ecx = eax_5
    
    sub_48a670(result_1, ecx)
    int32_t var_8_3 = 2
    
    if (data_aca1f4 != 0)
        char* eax_6 = var_44
        
        if (eax_6 != 0 && *eax_6 != 0)
            char* eax_7 = sub_48a080(&var_44)
            int32_t temp0_1 = *(eax_7 + 4)
            *(eax_7 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_4984f0(eax_7, *(eax_7 + 0xc) + 0x10)
    
    var_8_3.b = 0
    int32_t var_28[0x5]
    void* result_4 = sub_482bd0(&var_28, arg5, arg4, arg6, 4, 4, arg8, arg7, &var_28)
    void* eax_9 = nullptr
    result_3 = result_4
    var_44 = nullptr
    char* const var_8c
    char* const var_88
    char* var_84
    char* const var_80
    char* const var_78
    char* const var_74
    char* var_70
    char* const var_60
    char* var_5c
    char* const var_54
    
    if (result_4 s> 0)
        do
            int32_t edi_1 = var_28[eax_9]
            void* eax_11 = edi_1 * 0x4618 + arg2
            var_4c = eax_11
            char* ecx_6 = *(eax_11 + 8)
            void* const eax_12 = &data_5d59fc
            char* var_58 = ecx_6
            
            if (ecx_6 s> 1)
                eax_12 = "dice"
            
            var_5c = eax_12
            void* esi = &sub_425de0()[2]
            void* eax_14 = sub_425fe0(esi, edi_1)
            char* var_64
            int32_t* var_cc_2 = &var_64
            char* var_b4
            sub_421310(eax_14, esi, &var_b4, eax_14)
            ebx |= 2
            char* var_40_2 = ebx
            int32_t var_8_4 = 3
            char* const edi_2 = &data_5b2591
            char* esi_1 = var_b4
            
            if (esi_1 != 0)
                edi_2 = esi_1
            
            int32_t var_cc_3 = sub_480d30(*(var_4c + 4))
            int32_t var_d0_3 = sub_480cb0(*(var_4c + 4))
            char* var_d4_1 = var_5c
            char* var_d8_1 = var_58
            char* const var_dc_1 = edi_2
            var_8_4.b = 4
            char* const var_b0
            char* eax_19 = *sub_48a9d0(&var_b0, 
                "%s rolls %d %s {die_any} and locks in {bold_log}%s{normal_log} %s.{br}")
            char* ecx_12 = &data_5b2591
            
            if (eax_19 != 0)
                ecx_12 = eax_19
            
            sub_48a670(result, ecx_12)
            var_8_4.b = 5
            
            if (data_aca1f4 != 0)
                char* eax_20 = var_b0
                
                if (eax_20 != 0 && *eax_20 != 0)
                    char* eax_21 = sub_48a080(&var_b0)
                    int32_t temp3_1 = *(eax_21 + 4)
                    *(eax_21 + 4) -= 1
                    
                    if (temp3_1 == 1)
                        sub_4984f0(eax_21, *(eax_21 + 0xc) + 0x10)
                        var_b0 = &data_5b2591
            
            int32_t var_8_5 = 6
            
            if (data_aca1f4 != 0 && esi_1 != 0 && *esi_1 != 0)
                char* eax_22 = sub_48a080(&var_b4)
                int32_t temp4_1 = *(eax_22 + 4)
                *(eax_22 + 4) -= 1
                
                if (temp4_1 == 1)
                    sub_4984f0(eax_22, *(eax_22 + 0xc) + 0x10)
                    var_b4 = &data_5b2591
            
            var_8_5.b = 0
            
            if (var_79 == 0)
                result_1 = result
            else
                int32_t* eax_23 = sub_425de0()
                void* eax_24 = sub_425fe0(&eax_23[2], var_28[var_44])
                char** var_cc_5 = &var_5c
                sub_421310(eax_24, &eax_23[2], &var_84, eax_24)
                ebx |= 4
                char* var_40_3 = ebx
                int32_t var_8_6 = 7
                char* const eax_25 = &data_5b2591
                char* esi_3 = var_84
                
                if (esi_3 != 0)
                    eax_25 = esi_3
                
                char* const var_d4_2 = eax_25
                var_8_6.b = 8
                char* ecx_20 = &data_5b2591
                char* eax_27 = *sub_48a9d0(&var_80, "%s assigns")
                
                if (eax_27 != 0)
                    ecx_20 = eax_27
                
                sub_48a670(result, ecx_20)
                var_8_6.b = 9
                
                if (data_aca1f4 != 0)
                    char* eax_28 = var_80
                    
                    if (eax_28 != 0 && *eax_28 != 0)
                        char* eax_29 = sub_48a080(&var_80)
                        int32_t temp5_1 = *(eax_29 + 4)
                        *(eax_29 + 4) -= 1
                        
                        if (temp5_1 == 1)
                            sub_4984f0(eax_29, *(eax_29 + 0xc) + 0x10)
                            var_80 = &data_5b2591
                
                int32_t var_8_7 = 0xa
                
                if (data_aca1f4 != 0 && esi_3 != 0 && *esi_3 != 0)
                    char* eax_30 = sub_48a080(&var_84)
                    int32_t temp7_1 = *(eax_30 + 4)
                    *(eax_30 + 4) -= 1
                    
                    if (temp7_1 == 1)
                        sub_4984f0(eax_30, *(eax_30 + 0xc) + 0x10)
                        var_84 = &data_5b2591
                
                var_8_7.b = 0
                char* eax_31 = var_4c
                char* esi_4 = *(eax_31 + 0xc)
                var_5c = esi_4
                
                if (esi_4 != 0)
                    char* edx_16 = &data_5ee4c8
                    
                    if (esi_4 s<= 1)
                        edx_16 = &data_5b2591
                    
                    char* var_90
                    sub_48a2c0(&var_90, edx_16)
                    int32_t ebx_1 = ebx | 8
                    int32_t var_40_4 = ebx_1
                    int32_t var_8_8 = 0xb
                    int32_t var_cc_7 = *(var_4c + 0xc)
                    char** eax_33 = sub_48a9d0(&var_88, "%d explorer")
                    var_8_8.b = 0xc
                    char* var_ac
                    sub_48a2c0(&var_ac, &data_5d59f8)
                    int32_t ebx_2 = ebx_1 | 0x10
                    int32_t var_40_5 = ebx_2
                    var_8_8.b = 0xe
                    char* eax_34 = var_ac
                    var_58 = eax_34
                    
                    if (eax_34 != 0 && *eax_34 != 0)
                        char* eax_35 = sub_48a080(&var_58)
                        *(eax_35 + 4) += 1
                    
                    char* eax_36 = *eax_33
                    int32_t ebx_3 = ebx_2 | 0x20
                    int32_t var_40_6 = ebx_3
                    char* ecx_29 = &data_5b2591
                    
                    if (eax_36 != 0)
                        ecx_29 = eax_36
                    
                    sub_48a670(&var_58, ecx_29)
                    var_8_8.b = 0xf
                    char* edi_3 = var_58
                    var_64 = edi_3
                    
                    if (edi_3 != 0 && *edi_3 != 0)
                        char* eax_37 = sub_48a080(&var_64)
                        *(eax_37 + 4) += 1
                    
                    char* const eax_38 = var_90
                    int32_t ebx_4 = ebx_3 | 0x40
                    int32_t var_40_7 = ebx_4
                    
                    if (eax_38 == 0)
                        eax_38 = &data_5b2591
                    
                    sub_48a670(&var_64, eax_38)
                    char* esi_6 = var_64
                    char* const eax_39 = &data_5b2591
                    
                    if (esi_6 != 0)
                        eax_39 = esi_6
                    
                    sub_48a670(result, eax_39)
                    int32_t ebx_5 = ebx_4 & 0xffffffbf
                    int32_t var_40_8 = ebx_5
                    var_8_8.b = 0x10
                    
                    if (data_aca1f4 != 0 && esi_6 != 0 && *esi_6 != 0)
                        char* eax_41 = sub_48a080(&var_64)
                        int32_t temp27_1 = *(eax_41 + 4)
                        *(eax_41 + 4) -= 1
                        
                        if (temp27_1 == 1)
                            sub_4984f0(eax_41, *(eax_41 + 0xc) + 0x10)
                    
                    ebx = ebx_5 & 0xffffffdf
                    char* var_40_9 = ebx
                    var_8_8.b = 0x11
                    
                    if (data_aca1f4 != 0 && edi_3 != 0 && *edi_3 != 0)
                        char* eax_42 = sub_48a080(&var_58)
                        int32_t temp29_1 = *(eax_42 + 4)
                        *(eax_42 + 4) -= 1
                        
                        if (temp29_1 == 1)
                            sub_4984f0(eax_42, *(eax_42 + 0xc) + 0x10)
                    
                    var_8_8.b = 0x12
                    
                    if (data_aca1f4 != 0)
                        char* eax_43 = var_ac
                        
                        if (eax_43 != 0 && *eax_43 != 0)
                            char* eax_44 = sub_48a080(&var_ac)
                            int32_t temp32_1 = *(eax_44 + 4)
                            *(eax_44 + 4) -= 1
                            
                            if (temp32_1 == 1)
                                sub_4984f0(eax_44, *(eax_44 + 0xc) + 0x10)
                                var_ac = &data_5b2591
                    
                    var_8_8.b = 0x13
                    
                    if (data_aca1f4 != 0)
                        char* eax_45 = var_88
                        
                        if (eax_45 != 0 && *eax_45 != 0)
                            char* eax_46 = sub_48a080(&var_88)
                            int32_t temp34_1 = *(eax_46 + 4)
                            *(eax_46 + 4) -= 1
                            
                            if (temp34_1 == 1)
                                sub_4984f0(eax_46, *(eax_46 + 0xc) + 0x10)
                                var_88 = &data_5b2591
                    
                    int32_t var_8_9 = 0x14
                    
                    if (data_aca1f4 != 0)
                        char* eax_47 = var_90
                        
                        if (eax_47 != 0 && *eax_47 != 0)
                            char* eax_48 = sub_48a080(&var_90)
                            int32_t temp37_1 = *(eax_48 + 4)
                            *(eax_48 + 4) -= 1
                            
                            if (temp37_1 == 1)
                                sub_4984f0(eax_48, *(eax_48 + 0xc) + 0x10)
                                var_90 = &data_5b2591
                    
                    var_8_9.b = 0
                    eax_31 = var_4c
                    esi_4 = *(eax_31 + 0xc)
                    var_5c = esi_4
                
                int32_t eax_66 = *(eax_31 + 0x10)
                char* esi_10
                
                if (eax_66 == 0)
                    esi_10 = var_4c
                else
                    char* edx_27 = &data_5ee4c8
                    
                    if (eax_66 s<= 1)
                        edx_27 = &data_5b2591
                    
                    char* var_98
                    sub_48a2c0(&var_98, edx_27)
                    int32_t ebx_6 = ebx | 0x80
                    int32_t var_40_10 = ebx_6
                    int32_t var_8_10 = 0x15
                    int32_t var_cc_11 = *(var_4c + 0x10)
                    char** eax_50 = sub_48a9d0(&var_8c, "%d developer")
                    var_8_10.b = 0x16
                    char* edx_28 = &data_5ee4a4
                    
                    if (esi_4 == 0)
                        edx_28 = &data_5d59f8
                    
                    char* var_94
                    sub_48a2c0(&var_94, edx_28)
                    int32_t ebx_7 = ebx_6 | 0x100
                    int32_t var_40_11 = ebx_7
                    var_8_10.b = 0x18
                    char* eax_51 = var_94
                    var_64 = eax_51
                    
                    if (eax_51 != 0 && *eax_51 != 0)
                        char* eax_52 = sub_48a080(&var_64)
                        *(eax_52 + 4) += 1
                    
                    char* eax_53 = *eax_50
                    int32_t ebx_8 = ebx_7 | 0x200
                    int32_t var_40_12 = ebx_8
                    char* ecx_47 = &data_5b2591
                    
                    if (eax_53 != 0)
                        ecx_47 = eax_53
                    
                    sub_48a670(&var_64, ecx_47)
                    var_8_10.b = 0x19
                    char* edi_5 = var_64
                    var_58 = edi_5
                    
                    if (edi_5 != 0 && *edi_5 != 0)
                        char* eax_54 = sub_48a080(&var_58)
                        *(eax_54 + 4) += 1
                    
                    char* const eax_55 = var_98
                    int32_t ebx_9 = ebx_8 | 0x400
                    int32_t var_40_13 = ebx_9
                    
                    if (eax_55 == 0)
                        eax_55 = &data_5b2591
                    
                    sub_48a670(&var_58, eax_55)
                    char* esi_8 = var_58
                    char* const eax_56 = &data_5b2591
                    
                    if (esi_8 != 0)
                        eax_56 = esi_8
                    
                    sub_48a670(result, eax_56)
                    int32_t ebx_10 = ebx_9 & 0xfffffbff
                    int32_t var_40_14 = ebx_10
                    var_8_10.b = 0x1a
                    
                    if (data_aca1f4 != 0 && esi_8 != 0 && *esi_8 != 0)
                        char* eax_58 = sub_48a080(&var_58)
                        int32_t temp31_1 = *(eax_58 + 4)
                        *(eax_58 + 4) -= 1
                        
                        if (temp31_1 == 1)
                            sub_4984f0(eax_58, *(eax_58 + 0xc) + 0x10)
                    
                    ebx = ebx_10 & 0xfffffdff
                    char* var_40_15 = ebx
                    var_8_10.b = 0x1b
                    
                    if (data_aca1f4 != 0 && edi_5 != 0 && *edi_5 != 0)
                        char* eax_59 = sub_48a080(&var_64)
                        int32_t temp33_1 = *(eax_59 + 4)
                        *(eax_59 + 4) -= 1
                        
                        if (temp33_1 == 1)
                            sub_4984f0(eax_59, *(eax_59 + 0xc) + 0x10)
                    
                    var_8_10.b = 0x1c
                    
                    if (data_aca1f4 != 0)
                        char* eax_60 = var_94
                        
                        if (eax_60 != 0 && *eax_60 != 0)
                            char* eax_61 = sub_48a080(&var_94)
                            int32_t temp36_1 = *(eax_61 + 4)
                            *(eax_61 + 4) -= 1
                            
                            if (temp36_1 == 1)
                                sub_4984f0(eax_61, *(eax_61 + 0xc) + 0x10)
                                var_94 = &data_5b2591
                    
                    var_8_10.b = 0x1d
                    
                    if (data_aca1f4 != 0)
                        char* eax_62 = var_8c
                        
                        if (eax_62 != 0 && *eax_62 != 0)
                            char* eax_63 = sub_48a080(&var_8c)
                            int32_t temp40_1 = *(eax_63 + 4)
                            *(eax_63 + 4) -= 1
                            
                            if (temp40_1 == 1)
                                sub_4984f0(eax_63, *(eax_63 + 0xc) + 0x10)
                                var_8c = &data_5b2591
                    
                    int32_t var_8_11 = 0x1e
                    
                    if (data_aca1f4 != 0)
                        char* eax_64 = var_98
                        
                        if (eax_64 != 0 && *eax_64 != 0)
                            char* eax_65 = sub_48a080(&var_98)
                            int32_t temp47_1 = *(eax_65 + 4)
                            *(eax_65 + 4) -= 1
                            
                            if (temp47_1 == 1)
                                sub_4984f0(eax_65, *(eax_65 + 0xc) + 0x10)
                                var_98 = &data_5b2591
                    
                    var_8_11.b = 0
                    esi_10 = var_4c
                    eax_66 = *(esi_10 + 0x10)
                
                char* edi_7 = &var_5c[eax_66]
                int32_t eax_67 = *(esi_10 + 0x14)
                var_5c = edi_7
                
                if (eax_67 != 0)
                    char* edx_39 = &data_5ee4c8
                    
                    if (eax_67 s<= 1)
                        edx_39 = &data_5b2591
                    
                    char* var_a0
                    sub_48a2c0(&var_a0, edx_39)
                    int32_t ebx_11 = ebx | 0x800
                    int32_t var_40_16 = ebx_11
                    int32_t var_8_12 = 0x1f
                    int32_t var_cc_15 = *(esi_10 + 0x14)
                    char** eax_68 = sub_48a9d0(&var_78, "%d settler")
                    var_8_12.b = 0x20
                    char* edx_40 = &data_5ee4a4
                    
                    if (edi_7 == 0)
                        edx_40 = &data_5d59f8
                    
                    char* var_9c
                    sub_48a2c0(&var_9c, edx_40)
                    int32_t ebx_12 = ebx_11 | 0x1000
                    int32_t var_40_17 = ebx_12
                    var_8_12.b = 0x22
                    char* eax_69 = var_9c
                    var_64 = eax_69
                    
                    if (eax_69 != 0 && *eax_69 != 0)
                        char* eax_70 = sub_48a080(&var_64)
                        *(eax_70 + 4) += 1
                    
                    char* eax_71 = *eax_68
                    int32_t ebx_13 = ebx_12 | 0x2000
                    int32_t var_40_18 = ebx_13
                    char* ecx_65 = &data_5b2591
                    
                    if (eax_71 != 0)
                        ecx_65 = eax_71
                    
                    sub_48a670(&var_64, ecx_65)
                    var_8_12.b = 0x23
                    char* edi_8 = var_64
                    var_58 = edi_8
                    
                    if (edi_8 != 0 && *edi_8 != 0)
                        char* eax_72 = sub_48a080(&var_58)
                        *(eax_72 + 4) += 1
                    
                    char* const eax_73 = var_a0
                    int32_t ebx_14 = ebx_13 | 0x4000
                    int32_t var_40_19 = ebx_14
                    
                    if (eax_73 == 0)
                        eax_73 = &data_5b2591
                    
                    sub_48a670(&var_58, eax_73)
                    char* esi_12 = var_58
                    char* const eax_74 = &data_5b2591
                    
                    if (esi_12 != 0)
                        eax_74 = esi_12
                    
                    sub_48a670(result, eax_74)
                    int32_t ebx_15 = ebx_14 & 0xffffbfff
                    int32_t var_40_20 = ebx_15
                    var_8_12.b = 0x24
                    
                    if (data_aca1f4 != 0 && esi_12 != 0 && *esi_12 != 0)
                        char* eax_76 = sub_48a080(&var_58)
                        int32_t temp35_1 = *(eax_76 + 4)
                        *(eax_76 + 4) -= 1
                        
                        if (temp35_1 == 1)
                            sub_4984f0(eax_76, *(eax_76 + 0xc) + 0x10)
                    
                    ebx = ebx_15 & 0xffffdfff
                    char* var_40_21 = ebx
                    var_8_12.b = 0x25
                    
                    if (data_aca1f4 != 0 && edi_8 != 0 && *edi_8 != 0)
                        char* eax_77 = sub_48a080(&var_64)
                        int32_t temp39_1 = *(eax_77 + 4)
                        *(eax_77 + 4) -= 1
                        
                        if (temp39_1 == 1)
                            sub_4984f0(eax_77, *(eax_77 + 0xc) + 0x10)
                    
                    var_8_12.b = 0x26
                    
                    if (data_aca1f4 != 0)
                        char* eax_78 = var_9c
                        
                        if (eax_78 != 0 && *eax_78 != 0)
                            char* eax_79 = sub_48a080(&var_9c)
                            int32_t temp46_1 = *(eax_79 + 4)
                            *(eax_79 + 4) -= 1
                            
                            if (temp46_1 == 1)
                                sub_4984f0(eax_79, *(eax_79 + 0xc) + 0x10)
                                var_9c = &data_5b2591
                    
                    var_8_12.b = 0x27
                    
                    if (data_aca1f4 != 0)
                        char* eax_80 = var_78
                        
                        if (eax_80 != 0 && *eax_80 != 0)
                            char* eax_81 = sub_48a080(&var_78)
                            int32_t temp53_1 = *(eax_81 + 4)
                            *(eax_81 + 4) -= 1
                            
                            if (temp53_1 == 1)
                                sub_4984f0(eax_81, *(eax_81 + 0xc) + 0x10)
                                var_78 = &data_5b2591
                    
                    int32_t var_8_13 = 0x28
                    
                    if (data_aca1f4 != 0)
                        char* eax_82 = var_a0
                        
                        if (eax_82 != 0 && *eax_82 != 0)
                            char* eax_83 = sub_48a080(&var_a0)
                            int32_t temp56_1 = *(eax_83 + 4)
                            *(eax_83 + 4) -= 1
                            
                            if (temp56_1 == 1)
                                sub_4984f0(eax_83, *(eax_83 + 0xc) + 0x10)
                                var_a0 = &data_5b2591
                    
                    var_8_13.b = 0
                    esi_10 = var_4c
                    edi_7 = var_5c
                    eax_67 = *(esi_10 + 0x14)
                
                char* edi_10 = &edi_7[eax_67]
                int32_t eax_84 = *(esi_10 + 0x18)
                var_5c = edi_10
                
                if (eax_84 != 0)
                    char* edx_51 = &data_5ee4c8
                    
                    if (eax_84 s<= 1)
                        edx_51 = &data_5b2591
                    
                    char* var_a8
                    sub_48a2c0(&var_a8, edx_51)
                    int32_t ebx_16 = ebx | 0x8000
                    int32_t var_40_22 = ebx_16
                    int32_t var_8_14 = 0x29
                    int32_t var_cc_19 = *(esi_10 + 0x18)
                    char** eax_85 = sub_48a9d0(&var_74, "%d producer")
                    var_8_14.b = 0x2a
                    char* edx_52 = &data_5ee4a4
                    
                    if (edi_10 == 0)
                        edx_52 = &data_5d59f8
                    
                    char* var_a4
                    sub_48a2c0(&var_a4, edx_52)
                    int32_t ebx_17 = ebx_16 | 0x10000
                    int32_t var_40_23 = ebx_17
                    var_8_14.b = 0x2c
                    char* eax_86 = var_a4
                    var_64 = eax_86
                    
                    if (eax_86 != 0 && *eax_86 != 0)
                        char* eax_87 = sub_48a080(&var_64)
                        *(eax_87 + 4) += 1
                    
                    char* eax_88 = *eax_85
                    int32_t ebx_18 = ebx_17 | 0x20000
                    int32_t var_40_24 = ebx_18
                    char* ecx_83 = &data_5b2591
                    
                    if (eax_88 != 0)
                        ecx_83 = eax_88
                    
                    sub_48a670(&var_64, ecx_83)
                    var_8_14.b = 0x2d
                    char* edi_9 = var_64
                    var_58 = edi_9
                    
                    if (edi_9 != 0 && *edi_9 != 0)
                        char* eax_89 = sub_48a080(&var_58)
                        *(eax_89 + 4) += 1
                    
                    char* const eax_90 = var_a8
                    int32_t ebx_19 = ebx_18 | 0x40000
                    int32_t var_40_25 = ebx_19
                    
                    if (eax_90 == 0)
                        eax_90 = &data_5b2591
                    
                    sub_48a670(&var_58, eax_90)
                    char* esi_15 = var_58
                    char* const eax_91 = &data_5b2591
                    
                    if (esi_15 != 0)
                        eax_91 = esi_15
                    
                    sub_48a670(result, eax_91)
                    int32_t ebx_20 = ebx_19 & 0xfffbffff
                    int32_t var_40_26 = ebx_20
                    var_8_14.b = 0x2e
                    
                    if (data_aca1f4 != 0 && esi_15 != 0 && *esi_15 != 0)
                        char* eax_93 = sub_48a080(&var_58)
                        int32_t temp38_1 = *(eax_93 + 4)
                        *(eax_93 + 4) -= 1
                        
                        if (temp38_1 == 1)
                            sub_4984f0(eax_93, *(eax_93 + 0xc) + 0x10)
                    
                    ebx = ebx_20 & 0xfffdffff
                    char* var_40_27 = ebx
                    var_8_14.b = 0x2f
                    
                    if (data_aca1f4 != 0 && edi_9 != 0 && *edi_9 != 0)
                        char* eax_94 = sub_48a080(&var_64)
                        int32_t temp45_1 = *(eax_94 + 4)
                        *(eax_94 + 4) -= 1
                        
                        if (temp45_1 == 1)
                            sub_4984f0(eax_94, *(eax_94 + 0xc) + 0x10)
                    
                    var_8_14.b = 0x30
                    
                    if (data_aca1f4 != 0)
                        char* eax_95 = var_a4
                        
                        if (eax_95 != 0 && *eax_95 != 0)
                            char* eax_96 = sub_48a080(&var_a4)
                            int32_t temp52_1 = *(eax_96 + 4)
                            *(eax_96 + 4) -= 1
                            
                            if (temp52_1 == 1)
                                sub_4984f0(eax_96, *(eax_96 + 0xc) + 0x10)
                                var_a4 = &data_5b2591
                    
                    var_8_14.b = 0x31
                    
                    if (data_aca1f4 != 0)
                        char* eax_97 = var_74
                        
                        if (eax_97 != 0 && *eax_97 != 0)
                            char* eax_98 = sub_48a080(&var_74)
                            int32_t temp55_1 = *(eax_98 + 4)
                            *(eax_98 + 4) -= 1
                            
                            if (temp55_1 == 1)
                                sub_4984f0(eax_98, *(eax_98 + 0xc) + 0x10)
                                var_74 = &data_5b2591
                    
                    int32_t var_8_15 = 0x32
                    
                    if (data_aca1f4 != 0)
                        char* eax_99 = var_a8
                        
                        if (eax_99 != 0 && *eax_99 != 0)
                            char* eax_100 = sub_48a080(&var_a8)
                            int32_t temp58_1 = *(eax_100 + 4)
                            *(eax_100 + 4) -= 1
                            
                            if (temp58_1 == 1)
                                sub_4984f0(eax_100, *(eax_100 + 0xc) + 0x10)
                                var_a8 = &data_5b2591
                    
                    var_8_15.b = 0
                    esi_10 = var_4c
                    edi_10 = var_5c
                    eax_84 = *(esi_10 + 0x18)
                
                int32_t eax_101 = *(esi_10 + 0x1c)
                
                if (eax_101 != 0)
                    char* edx_63 = &data_5ee4c8
                    
                    if (eax_101 s<= 1)
                        edx_63 = &data_5b2591
                    
                    sub_48a2c0(&var_70, edx_63)
                    int32_t ebx_21 = ebx | 0x80000
                    int32_t var_40_28 = ebx_21
                    int32_t var_8_16 = 0x33
                    int32_t var_cc_23 = *(esi_10 + 0x1c)
                    char** eax_102 = sub_48a9d0(&var_60, "%d shipper")
                    var_8_16.b = 0x34
                    char* edx_64 = &data_5ee4a4
                    
                    if (&edi_10[eax_84] == 0)
                        edx_64 = &data_5d59f8
                    
                    sub_48a2c0(&var_54, edx_64)
                    int32_t ebx_22 = ebx_21 | 0x100000
                    int32_t var_40_29 = ebx_22
                    var_8_16.b = 0x36
                    char* edi_12 = var_54
                    var_4c = edi_12
                    
                    if (edi_12 != 0 && *edi_12 != 0)
                        char* eax_103 = sub_48a080(&var_4c)
                        *(eax_103 + 4) += 1
                    
                    char* eax_104 = *eax_102
                    int32_t ebx_23 = ebx_22 | 0x200000
                    int32_t var_40_30 = ebx_23
                    char* ecx_101 = &data_5b2591
                    
                    if (eax_104 != 0)
                        ecx_101 = eax_104
                    
                    sub_48a670(&var_4c, ecx_101)
                    var_8_16.b = 0x37
                    char* eax_105 = var_4c
                    var_58 = eax_105
                    
                    if (eax_105 != 0 && *eax_105 != 0)
                        char* eax_106 = sub_48a080(&var_58)
                        *(eax_106 + 4) += 1
                    
                    char* const eax_107 = var_70
                    int32_t ebx_24 = ebx_23 | &__dos_header
                    int32_t var_40_31 = ebx_24
                    
                    if (eax_107 == 0)
                        eax_107 = &data_5b2591
                    
                    sub_48a670(&var_58, eax_107)
                    char* esi_18 = var_58
                    char* eax_108 = &data_5b2591
                    
                    if (esi_18 != 0)
                        eax_108 = esi_18
                    
                    sub_48a670(result, eax_108)
                    int32_t ebx_25 = ebx_24 & 0xffbfffff
                    int32_t var_40_32 = ebx_25
                    var_8_16.b = 0x38
                    
                    if (data_aca1f4 != 0 && esi_18 != 0 && *esi_18 != 0)
                        char* eax_110 = sub_48a080(&var_58)
                        int32_t temp44_1 = *(eax_110 + 4)
                        *(eax_110 + 4) -= 1
                        
                        if (temp44_1 == 1)
                            sub_4984f0(eax_110, *(eax_110 + 0xc) + 0x10)
                    
                    ebx = ebx_25 & 0xffdfffff
                    char* var_40_33 = ebx
                    var_8_16.b = 0x39
                    
                    if (data_aca1f4 != 0)
                        char* eax_111 = var_4c
                        
                        if (eax_111 != 0 && *eax_111 != 0)
                            char* eax_112 = sub_48a080(&var_4c)
                            int32_t temp51_1 = *(eax_112 + 4)
                            *(eax_112 + 4) -= 1
                            
                            if (temp51_1 == 1)
                                sub_4984f0(eax_112, *(eax_112 + 0xc) + 0x10)
                    
                    var_8_16.b = 0x3a
                    
                    if (data_aca1f4 != 0 && edi_12 != 0 && *edi_12 != 0)
                        char* eax_113 = sub_48a080(&var_54)
                        int32_t temp54_1 = *(eax_113 + 4)
                        *(eax_113 + 4) -= 1
                        
                        if (temp54_1 == 1)
                            sub_4984f0(eax_113, *(eax_113 + 0xc) + 0x10)
                            var_54 = &data_5b2591
                    
                    var_8_16.b = 0x3b
                    
                    if (data_aca1f4 != 0)
                        char* eax_114 = var_60
                        
                        if (eax_114 != 0 && *eax_114 != 0)
                            char* eax_115 = sub_48a080(&var_60)
                            int32_t temp57_1 = *(eax_115 + 4)
                            *(eax_115 + 4) -= 1
                            
                            if (temp57_1 == 1)
                                sub_4984f0(eax_115, *(eax_115 + 0xc) + 0x10)
                                var_60 = &data_5b2591
                    
                    int32_t var_8_17 = 0x3c
                    
                    if (data_aca1f4 != 0)
                        char* eax_116 = var_70
                        
                        if (eax_116 != 0 && *eax_116 != 0)
                            char* eax_117 = sub_48a080(&var_70)
                            int32_t temp59_1 = *(eax_117 + 4)
                            *(eax_117 + 4) -= 1
                            
                            if (temp59_1 == 1)
                                sub_4984f0(eax_117, *(eax_117 + 0xc) + 0x10)
                                var_70 = &data_5b2591
                    
                    var_8_17.b = 0
                
                result_1 = result
                sub_48a670(result_1, ".{br}")
            
            eax_9 = &var_44[1]
            var_44 = eax_9
        while (eax_9 s< result_3)
        
        var_4c = ebx
    
    int32_t var_8_18 = 0x3d
    char* ecx_117 = &data_5b2591
    char* eax_120 = *sub_48a9d0(&var_44, "{br}")
    
    if (eax_120 != 0)
        ecx_117 = eax_120
    
    sub_48a670(result_1, ecx_117)
    int32_t var_8_19 = 0x3e
    
    if (data_aca1f4 != 0)
        char* eax_121 = var_44
        
        if (eax_121 != 0 && *eax_121 != 0)
            char* eax_122 = sub_48a080(&var_44)
            int32_t temp1_1 = *(eax_122 + 4)
            *(eax_122 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_4984f0(eax_122, *(eax_122 + 0xc) + 0x10)
    
    int32_t eax_131 = arg8
    var_8_19.b = 0
    
    if (eax_131 == 2)
        int32_t var_cc_28 = sub_480d30(*arg2)
        int32_t var_d0_6 = sub_480cb0(*arg2)
        int32_t var_8_20 = 0x3f
        char* ecx_123 = &data_5b2591
        char* eax_128 = *sub_48a9d0(&var_44, 
            "{normal_log}{bold_log}%s{normal_log} %s is rolled as the extra phase.{br}{br}")
        
        if (eax_128 != 0)
            ecx_123 = eax_128
        
        sub_48a670(result_1, ecx_123)
        int32_t var_8_21 = 0x40
        
        if (data_aca1f4 != 0)
            char* eax_129 = var_44
            
            if (eax_129 != 0 && *eax_129 != 0)
                char* eax_130 = sub_48a080(&var_44)
                int32_t temp2_1 = *(eax_130 + 4)
                *(eax_130 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_4984f0(eax_130, *(eax_130 + 0xc) + 0x10)
        
        eax_131 = arg8
        var_8_21.b = 0
    
    char* esi_20 = nullptr
    int32_t var_3c[0x5]
    int32_t eax_132 = sub_482bd0(eax_131, arg5, arg4, arg6, 5, 6, eax_131, arg7, &var_3c)
    int32_t ecx_128 = 0
    
    if (eax_132 s> 0)
        do
            int32_t edx_80 = var_3c[ecx_128]
            
            if (arg2[edx_80 * 0x1186 + 8] s> 0 || arg2[edx_80 * 0x1186 + 0x16] s> 0
                    || arg2[edx_80 * 0x1186 + 0x33] s> 0)
                var_28[esi_20] = edx_80
                esi_20 = &esi_20[1]
            
            ecx_128 += 1
        while (ecx_128 s< eax_132)
        
        char* ebx_27 = var_4c
        var_5c = esi_20
        
        if (esi_20 s> 0)
            int32_t var_8_22 = 0x41
            char* eax_135 = *sub_48a9d0(&var_44, "{header_log}Explore {explore}{br}")
            char* ecx_129 = &data_5b2591
            
            if (eax_135 != 0)
                ecx_129 = eax_135
            
            sub_48a670(result, ecx_129)
            int32_t var_8_23 = 0x42
            
            if (data_aca1f4 != 0)
                char* eax_136 = var_44
                
                if (eax_136 != 0 && *eax_136 != 0)
                    char* eax_137 = sub_48a080(&var_44)
                    int32_t temp6_1 = *(eax_137 + 4)
                    *(eax_137 + 4) -= 1
                    
                    if (temp6_1 == 1)
                        sub_4984f0(eax_137, *(eax_137 + 0xc) + 0x10)
            
            void* eax_138 = nullptr
            var_8_23.b = 0
            var_60 = nullptr
            
            if (esi_20 s> 0)
                do
                    int32_t esi_21 = var_28[eax_138]
                    result_3 = esi_21 * 0x4618 + arg2
                    void* edi_14 = &sub_425de0()[2]
                    void* eax_142 = sub_425fe0(edi_14, esi_21)
                    char* const* var_cc_32 = &var_74
                    sub_421310(eax_142, edi_14, &var_44, eax_142)
                    ebx_27 |= 0x800000
                    char* var_40_34 = ebx_27
                    int32_t var_8_24 = 0x43
                    char* esi_22 = var_44
                    int32_t var_d4_9 = var_48.d
                    char* edx_85 = &data_5b2591
                    
                    if (esi_22 != 0)
                        edx_85 = esi_22
                    
                    sub_485a90(result_3 + 0x20, edx_85, &var_54, (result_3 + 0x20).b)
                    var_8_24.b = 0x46
                    
                    if (data_aca1f4 != 0 && esi_22 != 0 && *esi_22 != 0)
                        char* eax_145 = sub_48a080(&var_44)
                        int32_t temp12_1 = *(eax_145 + 4)
                        *(eax_145 + 4) -= 1
                        
                        if (temp12_1 == 1)
                            sub_4984f0(eax_145, *(eax_145 + 0xc) + 0x10)
                            var_44 = &data_5b2591
                    
                    var_8_24.b = 0x45
                    char* const ecx_138 = &data_5b2591
                    char* const eax_146 = var_54
                    
                    if (eax_146 != 0)
                        ecx_138 = eax_146
                    
                    sub_48a670(result, ecx_138)
                    int32_t var_8_25 = 0x47
                    
                    if (data_aca1f4 != 0)
                        char* const eax_147 = var_54
                        
                        if (eax_147 != 0 && *eax_147 != 0)
                            char* eax_148 = sub_48a080(&var_54)
                            int32_t temp18_1 = *(eax_148 + 4)
                            *(eax_148 + 4) -= 1
                            
                            if (temp18_1 == 1)
                                sub_4984f0(eax_148, *(eax_148 + 0xc) + 0x10)
                                var_54 = &data_5b2591
                    
                    var_8_25.b = 0
                    eax_138 = &var_60[1]
                    var_60 = eax_138
                while (eax_138 s< var_5c)
                
                var_4c = ebx_27
            
            int32_t var_8_26 = 0x48
            char* ecx_142 = &data_5b2591
            char* eax_151 = *sub_48a9d0(&var_44, "{normal_log}{br}")
            
            if (eax_151 != 0)
                ecx_142 = eax_151
            
            sub_48a670(result, ecx_142)
            int32_t var_8_27 = 0x49
            
            if (data_aca1f4 != 0)
                char* eax_152 = var_44
                
                if (eax_152 != 0 && *eax_152 != 0)
                    char* eax_153 = sub_48a080(&var_44)
                    int32_t temp11_1 = *(eax_153 + 4)
                    *(eax_153 + 4) -= 1
                    
                    if (temp11_1 == 1)
                        sub_4984f0(eax_153, *(eax_153 + 0xc) + 0x10)
            
            var_8_27.b = 0
    
    char* esi_23 = nullptr
    int32_t eax_155 = sub_482bd0(&var_3c, arg5, arg4, arg6, 7, 8, arg8, arg7, &var_3c)
    int32_t ecx_147 = 0
    
    if (eax_155 s> 0)
        do
            int32_t edx_93 = var_3c[ecx_147]
            
            if (arg2[edx_93 * 0x1186 + 0x779] s> 0 || arg2[edx_93 * 0x1186 + 0x798] s> 0
                    || arg2[edx_93 * 0x1186 + 0x34] s> 0)
                var_28[esi_23] = edx_93
                esi_23 = &esi_23[1]
            
            ecx_147 += 1
        while (ecx_147 s< eax_155)
        
        char* ebx_29 = var_4c
        var_5c = esi_23
        
        if (esi_23 s> 0)
            int32_t var_8_28 = 0x4a
            char* eax_158 = *sub_48a9d0(&var_44, "{header_log}Develop {develop}{br}")
            char* ecx_148 = &data_5b2591
            
            if (eax_158 != 0)
                ecx_148 = eax_158
            
            sub_48a670(result, ecx_148)
            int32_t var_8_29 = 0x4b
            
            if (data_aca1f4 != 0)
                char* eax_159 = var_44
                
                if (eax_159 != 0 && *eax_159 != 0)
                    char* eax_160 = sub_48a080(&var_44)
                    int32_t temp8_1 = *(eax_160 + 4)
                    *(eax_160 + 4) -= 1
                    
                    if (temp8_1 == 1)
                        sub_4984f0(eax_160, *(eax_160 + 0xc) + 0x10)
            
            void* eax_161 = nullptr
            var_8_29.b = 0
            var_60 = nullptr
            
            if (esi_23 s> 0)
                do
                    int32_t esi_24 = var_28[eax_161]
                    result_3 = esi_24 * 0x4618 + arg2
                    void* edi_16 = &sub_425de0()[2]
                    void* eax_165 = sub_425fe0(edi_16, esi_24)
                    char* const* var_cc_37 = &var_74
                    sub_421310(eax_165, edi_16, &var_44, eax_165)
                    ebx_29 |= 0x1000000
                    char* var_40_35 = ebx_29
                    int32_t var_8_30 = 0x4c
                    char* esi_25 = var_44
                    int32_t var_d4_11 = var_48.d
                    char* edx_98 = &data_5b2591
                    
                    if (esi_25 != 0)
                        edx_98 = esi_25
                    
                    sub_4856b0(result_3 + 0xd0, edx_98, &var_54, (result_3 + 0xd0).b)
                    var_8_30.b = 0x4f
                    
                    if (data_aca1f4 != 0 && esi_25 != 0 && *esi_25 != 0)
                        char* eax_168 = sub_48a080(&var_44)
                        int32_t temp17_1 = *(eax_168 + 4)
                        *(eax_168 + 4) -= 1
                        
                        if (temp17_1 == 1)
                            sub_4984f0(eax_168, *(eax_168 + 0xc) + 0x10)
                            var_44 = &data_5b2591
                    
                    var_8_30.b = 0x4e
                    char* const ecx_157 = &data_5b2591
                    char* const eax_169 = var_54
                    
                    if (eax_169 != 0)
                        ecx_157 = eax_169
                    
                    sub_48a670(result, ecx_157)
                    int32_t var_8_31 = 0x50
                    
                    if (data_aca1f4 != 0)
                        char* const eax_170 = var_54
                        
                        if (eax_170 != 0 && *eax_170 != 0)
                            char* eax_171 = sub_48a080(&var_54)
                            int32_t temp23_1 = *(eax_171 + 4)
                            *(eax_171 + 4) -= 1
                            
                            if (temp23_1 == 1)
                                sub_4984f0(eax_171, *(eax_171 + 0xc) + 0x10)
                                var_54 = &data_5b2591
                    
                    var_8_31.b = 0
                    eax_161 = &var_60[1]
                    var_60 = eax_161
                while (eax_161 s< var_5c)
                
                var_4c = ebx_29
            
            int32_t var_8_32 = 0x51
            char* ecx_161 = &data_5b2591
            char* eax_174 = *sub_48a9d0(&var_44, "{normal_log}{br}")
            
            if (eax_174 != 0)
                ecx_161 = eax_174
            
            sub_48a670(result, ecx_161)
            int32_t var_8_33 = 0x52
            
            if (data_aca1f4 != 0)
                char* eax_175 = var_44
                
                if (eax_175 != 0 && *eax_175 != 0)
                    char* eax_176 = sub_48a080(&var_44)
                    int32_t temp14_1 = *(eax_176 + 4)
                    *(eax_176 + 4) -= 1
                    
                    if (temp14_1 == 1)
                        sub_4984f0(eax_176, *(eax_176 + 0xc) + 0x10)
            
            var_8_33.b = 0
    
    char* esi_26 = nullptr
    int32_t eax_178 = sub_482bd0(&var_3c, arg5, arg4, arg6, 9, 0xa, arg8, arg7, &var_3c)
    int32_t ecx_166 = 0
    
    if (eax_178 s> 0)
        do
            int32_t edx_106 = var_3c[ecx_166]
            
            if (arg2[edx_106 * 0x1186 + 0xede] s> 0 || arg2[edx_106 * 0x1186 + 0xefd] s> 0
                    || arg2[edx_106 * 0x1186 + 0x799] s> 0)
                var_28[esi_26] = edx_106
                esi_26 = &esi_26[1]
            
            ecx_166 += 1
        while (ecx_166 s< eax_178)
        
        char* ebx_31 = var_4c
        var_5c = esi_26
        
        if (esi_26 s> 0)
            int32_t var_8_34 = 0x53
            char* eax_181 = *sub_48a9d0(&var_44, "{header_log}Settle {settle}{br}")
            char* ecx_167 = &data_5b2591
            
            if (eax_181 != 0)
                ecx_167 = eax_181
            
            sub_48a670(result, ecx_167)
            int32_t var_8_35 = 0x54
            
            if (data_aca1f4 != 0)
                char* eax_182 = var_44
                
                if (eax_182 != 0 && *eax_182 != 0)
                    char* eax_183 = sub_48a080(&var_44)
                    int32_t temp9_1 = *(eax_183 + 4)
                    *(eax_183 + 4) -= 1
                    
                    if (temp9_1 == 1)
                        sub_4984f0(eax_183, *(eax_183 + 0xc) + 0x10)
            
            void* eax_184 = nullptr
            var_8_35.b = 0
            var_60 = nullptr
            
            if (esi_26 s> 0)
                do
                    int32_t esi_27 = var_28[eax_184]
                    result_3 = esi_27 * 0x4618 + arg2
                    void* edi_18 = &sub_425de0()[2]
                    void* eax_188 = sub_425fe0(edi_18, esi_27)
                    char* const* var_cc_42 = &var_74
                    sub_421310(eax_188, edi_18, &var_44, eax_188)
                    ebx_31 |= 0x2000000
                    char* var_40_36 = ebx_31
                    int32_t var_8_36 = 0x55
                    char* esi_28 = var_44
                    int32_t var_d4_13 = var_48.d
                    char* edx_111 = &data_5b2591
                    
                    if (esi_28 != 0)
                        edx_111 = esi_28
                    
                    sub_4854c0(result_3 + 0x1e64, edx_111, &var_54, (result_3 + 0x1e64).b)
                    var_8_36.b = 0x58
                    
                    if (data_aca1f4 != 0 && esi_28 != 0 && *esi_28 != 0)
                        char* eax_191 = sub_48a080(&var_44)
                        int32_t temp20_1 = *(eax_191 + 4)
                        *(eax_191 + 4) -= 1
                        
                        if (temp20_1 == 1)
                            sub_4984f0(eax_191, *(eax_191 + 0xc) + 0x10)
                            var_44 = &data_5b2591
                    
                    var_8_36.b = 0x57
                    char* const ecx_176 = &data_5b2591
                    char* const eax_192 = var_54
                    
                    if (eax_192 != 0)
                        ecx_176 = eax_192
                    
                    sub_48a670(result, ecx_176)
                    int32_t var_8_37 = 0x59
                    
                    if (data_aca1f4 != 0)
                        char* const eax_193 = var_54
                        
                        if (eax_193 != 0 && *eax_193 != 0)
                            char* eax_194 = sub_48a080(&var_54)
                            int32_t temp26_1 = *(eax_194 + 4)
                            *(eax_194 + 4) -= 1
                            
                            if (temp26_1 == 1)
                                sub_4984f0(eax_194, *(eax_194 + 0xc) + 0x10)
                                var_54 = &data_5b2591
                    
                    var_8_37.b = 0
                    eax_184 = &var_60[1]
                    var_60 = eax_184
                while (eax_184 s< var_5c)
                
                var_4c = ebx_31
            
            int32_t var_8_38 = 0x5a
            char* ecx_180 = &data_5b2591
            char* eax_197 = *sub_48a9d0(&var_48, "{normal_log}{br}")
            
            if (eax_197 != 0)
                ecx_180 = eax_197
            
            sub_48a670(result, ecx_180)
            int32_t var_8_39 = 0x5b
            
            if (data_aca1f4 != 0)
                char* eax_198 = var_48.d
                
                if (eax_198 != 0 && *eax_198 != 0)
                    char* eax_199 = sub_48a080(&var_48)
                    int32_t temp16_1 = *(eax_199 + 4)
                    *(eax_199 + 4) -= 1
                    
                    if (temp16_1 == 1)
                        sub_4984f0(eax_199, *(eax_199 + 0xc) + 0x10)
            
            var_8_39.b = 0
    
    char* esi_29 = nullptr
    int32_t eax_201 = sub_482bd0(&var_3c, arg5, arg4, arg6, 0xb, 0xc, arg8, arg7, &var_3c)
    int32_t ecx_185 = 0
    
    if (eax_201 s> 0)
        do
            int32_t edx_119 = var_3c[ecx_185]
            
            if (arg2[edx_119 * 0x1186 + 0xefe] s> 0 || arg2[edx_119 * 0x1186 + 0xf0b] != 0)
                var_28[esi_29] = edx_119
                esi_29 = &esi_29[1]
            
            ecx_185 += 1
        while (ecx_185 s< eax_201)
        
        char* ebx_33 = var_4c
        var_60 = esi_29
        
        if (esi_29 s> 0)
            int32_t var_8_40 = 0x5c
            char* eax_204 = *sub_48a9d0(&var_48, "{header_log}Produce {produce}{br}")
            char* ecx_186 = &data_5b2591
            
            if (eax_204 != 0)
                ecx_186 = eax_204
            
            sub_48a670(result, ecx_186)
            int32_t var_8_41 = 0x5d
            
            if (data_aca1f4 != 0)
                char* eax_205 = var_48.d
                
                if (eax_205 != 0 && *eax_205 != 0)
                    char* eax_206 = sub_48a080(&var_48)
                    int32_t temp10_1 = *(eax_206 + 4)
                    *(eax_206 + 4) -= 1
                    
                    if (temp10_1 == 1)
                        sub_4984f0(eax_206, *(eax_206 + 0xc) + 0x10)
            
            void* eax_207 = nullptr
            var_8_41.b = 0
            var_44 = nullptr
            
            if (esi_29 s> 0)
                do
                    int32_t esi_30 = var_28[eax_207]
                    result_3 = esi_30 * 0x4618 + arg2
                    void* edi_20 = &sub_425de0()[2]
                    void* eax_211 = sub_425fe0(edi_20, esi_30)
                    char** var_cc_47 = &var_5c
                    sub_421310(eax_211, edi_20, &var_48, eax_211)
                    ebx_33 |= 0x4000000
                    char* var_40_37 = ebx_33
                    int32_t var_8_42 = 0x5e
                    char* esi_31 = var_48.d
                    char* const edx_124 = &data_5b2591
                    
                    if (esi_31 != 0)
                        edx_124 = esi_31
                    
                    sub_4852a0(result_3 + 0x3bf8, edx_124, &var_54, result_3 + 0x3bf8)
                    var_8_42.b = 0x61
                    
                    if (data_aca1f4 != 0 && esi_31 != 0 && *esi_31 != 0)
                        char* eax_214 = sub_48a080(&var_48)
                        int32_t temp22_1 = *(eax_214 + 4)
                        *(eax_214 + 4) -= 1
                        
                        if (temp22_1 == 1)
                            sub_4984f0(eax_214, *(eax_214 + 0xc) + 0x10)
                            var_48.d = &data_5b2591
                    
                    var_8_42.b = 0x60
                    char* const ecx_195 = &data_5b2591
                    char* const eax_215 = var_54
                    
                    if (eax_215 != 0)
                        ecx_195 = eax_215
                    
                    sub_48a670(result, ecx_195)
                    int32_t var_8_43 = 0x62
                    
                    if (data_aca1f4 != 0)
                        char* const eax_216 = var_54
                        
                        if (eax_216 != 0 && *eax_216 != 0)
                            char* eax_217 = sub_48a080(&var_54)
                            int32_t temp28_1 = *(eax_217 + 4)
                            *(eax_217 + 4) -= 1
                            
                            if (temp28_1 == 1)
                                sub_4984f0(eax_217, *(eax_217 + 0xc) + 0x10)
                                var_54 = &data_5b2591
                    
                    var_8_43.b = 0
                    eax_207 = &var_44[1]
                    var_44 = eax_207
                while (eax_207 s< var_60)
                
                var_4c = ebx_33
            
            int32_t var_8_44 = 0x63
            char* ecx_199 = &data_5b2591
            char* eax_220 = *sub_48a9d0(&var_48, "{normal_log}{br}")
            
            if (eax_220 != 0)
                ecx_199 = eax_220
            
            sub_48a670(result, ecx_199)
            int32_t var_8_45 = 0x64
            
            if (data_aca1f4 != 0)
                char* eax_221 = var_48.d
                
                if (eax_221 != 0 && *eax_221 != 0)
                    char* eax_222 = sub_48a080(&var_48)
                    int32_t temp19_1 = *(eax_222 + 4)
                    *(eax_222 + 4) -= 1
                    
                    if (temp19_1 == 1)
                        sub_4984f0(eax_222, *(eax_222 + 0xc) + 0x10)
            
            var_8_45.b = 0
    
    char* esi_32 = nullptr
    int32_t eax_224 = sub_482bd0(&var_3c, arg5, arg4, arg6, 0xd, 0xe, arg8, arg7, &var_3c)
    int32_t ecx_204 = 0
    
    if (eax_224 s> 0)
        do
            int32_t edx_132 = var_3c[ecx_204]
            
            if (arg2[edx_132 * 0x1186 + 0x1056] s> 0 || arg2[edx_132 * 0x1186 + 0x1165] s> 0
                    || arg2[edx_132 * 0x1186 + 0x1184] s> 0)
                var_28[esi_32] = edx_132
                esi_32 = &esi_32[1]
            
            ecx_204 += 1
        while (ecx_204 s< eax_224)
        
        char* ebx_35 = var_4c
        var_60 = esi_32
        
        if (esi_32 s> 0)
            int32_t var_8_46 = 0x65
            char* eax_227 = *sub_48a9d0(&var_48, "{header_log}Ship {ship}{br}")
            char* ecx_205 = &data_5b2591
            
            if (eax_227 != 0)
                ecx_205 = eax_227
            
            sub_48a670(result, ecx_205)
            int32_t var_8_47 = 0x66
            
            if (data_aca1f4 != 0)
                char* eax_228 = var_48.d
                
                if (eax_228 != 0 && *eax_228 != 0)
                    char* eax_229 = sub_48a080(&var_48)
                    int32_t temp13_1 = *(eax_229 + 4)
                    *(eax_229 + 4) -= 1
                    
                    if (temp13_1 == 1)
                        sub_4984f0(eax_229, *(eax_229 + 0xc) + 0x10)
            
            void* eax_230 = nullptr
            var_8_47.b = 0
            var_44 = nullptr
            
            if (esi_32 s> 0)
                do
                    int32_t esi_33 = var_28[eax_230]
                    result_3 = esi_33 * 0x4618 + arg2
                    void* edi_22 = &sub_425de0()[2]
                    void* eax_234 = sub_425fe0(edi_22, esi_33)
                    char** var_cc_52 = &var_5c
                    sub_421310(eax_234, edi_22, &var_48, eax_234)
                    ebx_35 |= 0x8000000
                    char* var_40_38 = ebx_35
                    int32_t var_8_48 = 0x67
                    char* esi_34 = var_48.d
                    char* const edx_137 = &data_5b2591
                    
                    if (esi_34 != 0)
                        edx_137 = esi_34
                    
                    void* var_d4_16 = result_3 + 0x3c30
                    sub_4858a0(&var_54, edx_137)
                    var_8_48.b = 0x6a
                    
                    if (data_aca1f4 != 0 && esi_34 != 0 && *esi_34 != 0)
                        char* eax_237 = sub_48a080(&var_48)
                        int32_t temp25_1 = *(eax_237 + 4)
                        *(eax_237 + 4) -= 1
                        
                        if (temp25_1 == 1)
                            sub_4984f0(eax_237, *(eax_237 + 0xc) + 0x10)
                            var_48.d = &data_5b2591
                    
                    var_8_48.b = 0x69
                    char* const ecx_214 = &data_5b2591
                    char* const eax_238 = var_54
                    
                    if (eax_238 != 0)
                        ecx_214 = eax_238
                    
                    sub_48a670(result, ecx_214)
                    int32_t var_8_49 = 0x6b
                    
                    if (data_aca1f4 != 0)
                        char* const eax_239 = var_54
                        
                        if (eax_239 != 0 && *eax_239 != 0)
                            char* eax_240 = sub_48a080(&var_54)
                            int32_t temp30_1 = *(eax_240 + 4)
                            *(eax_240 + 4) -= 1
                            
                            if (temp30_1 == 1)
                                sub_4984f0(eax_240, *(eax_240 + 0xc) + 0x10)
                                var_54 = &data_5b2591
                    
                    var_8_49.b = 0
                    eax_230 = &var_44[1]
                    var_44 = eax_230
                while (eax_230 s< var_60)
                
                var_4c = ebx_35
            
            int32_t var_8_50 = 0x6c
            char* ecx_218 = &data_5b2591
            char* eax_243 = *sub_48a9d0(&var_48, "{normal_log}{br}")
            
            if (eax_243 != 0)
                ecx_218 = eax_243
            
            sub_48a670(result, ecx_218)
            int32_t var_8_51 = 0x6d
            
            if (data_aca1f4 != 0)
                char* eax_244 = var_48.d
                
                if (eax_244 != 0 && *eax_244 != 0)
                    char* eax_245 = sub_48a080(&var_48)
                    int32_t temp21_1 = *(eax_245 + 4)
                    *(eax_245 + 4) -= 1
                    
                    if (temp21_1 == 1)
                        sub_4984f0(eax_245, *(eax_245 + 0xc) + 0x10)
            
            var_8_51.b = 0
    
    char* edi_23 = nullptr
    int32_t eax_247 = sub_482bd0(&var_3c, arg5, arg4, arg6, 0xf, 0x10, arg8, arg7, &var_3c)
    int32_t ecx_223 = 0
    
    if (eax_247 s> 0)
        do
            int32_t edx_145 = var_3c[ecx_223]
            
            if (arg2[edx_145 * 0x1186 + 0x1185] s> 0 || arg2[edx_145 * 0x1186 + 0x1186] s> 0)
                var_28[edi_23] = edx_145
                edi_23 = &edi_23[1]
            
            ecx_223 += 1
        while (ecx_223 s< eax_247)
        
        char* ebx_37 = var_4c
        var_80 = edi_23
        
        if (edi_23 s> 0)
            int32_t var_8_52 = 0x6e
            char* const esi_36 = &data_5b2591
            char* eax_250 = *sub_48a9d0(&var_48, "{header_log}Manage Empire{br}{normal_log}")
            char* ecx_224 = &data_5b2591
            
            if (eax_250 != 0)
                ecx_224 = eax_250
            
            sub_48a670(result, ecx_224)
            int32_t var_8_53 = 0x6f
            
            if (data_aca1f4 != 0)
                char* eax_251 = var_48.d
                
                if (eax_251 != 0 && *eax_251 != 0)
                    char* eax_252 = sub_48a080(&var_48)
                    int32_t temp15_1 = *(eax_252 + 4)
                    *(eax_252 + 4) -= 1
                    
                    if (temp15_1 == 1)
                        sub_4984f0(eax_252, *(eax_252 + 0xc) + 0x10)
            
            void* eax_281 = nullptr
            var_8_53.b = 0
            var_70 = nullptr
            
            if (edi_23 s> 0)
                int32_t* esi_37 = arg2
                
                do
                    var_28[eax_281]
                    char* edx_148 = &data_5d59fc
                    char* ecx_228 = esi_37[var_28[eax_281] * 0x1186 + 0x1185]
                    var_88 = ecx_228
                    
                    if (ecx_228 s> 1)
                        edx_148 = "dice"
                    
                    int32_t edi_24 = esi_37[var_28[eax_281] * 0x1186 + 0x1186]
                    var_8c = edx_148
                    char* eax_255 = &data_5d59fc
                    
                    if (edi_24 s> 1)
                        eax_255 = "dice"
                    
                    var_84 = eax_255
                    int32_t var_8_55
                    
                    if (ecx_228 != 0)
                        void* esi_38 = &sub_425de0()[2]
                        void* eax_258 = sub_425fe0(esi_38, var_28[var_70])
                        void** var_cc_57 = &result_3
                        int32_t* var_d0_30 = eax_258
                        
                        if (edi_24 == 0)
                            sub_421310(eax_258, esi_38, &var_5c, var_d0_30)
                            ebx_37 |= 0x20000000
                            char* var_40_40 = ebx_37
                            int32_t var_8_56 = 0x74
                            char* const var_d4_19 = var_8c
                            char* esi_40 = var_5c
                            char* eax_265 = &data_5b2591
                            char* const var_d8_7 = var_88
                            
                            if (esi_40 != 0)
                                eax_265 = esi_40
                            
                            char* var_dc_4 = eax_265
                            var_8_56.b = 0x75
                            char* ecx_238 = &data_5b2591
                            char* eax_267 = *sub_48a9d0(&var_60, 
                                "%s {bold_log}Recruit{normal_log}s %d %s {die_any}.{br}")
                            
                            if (eax_267 != 0)
                                ecx_238 = eax_267
                            
                            sub_48a670(result, ecx_238)
                            var_8_56.b = 0x76
                            
                            if (data_aca1f4 != 0)
                                char* const eax_268 = var_60
                                
                                if (eax_268 != 0 && *eax_268 != 0)
                                    char* eax_269 = sub_48a080(&var_60)
                                    int32_t temp42_1 = *(eax_269 + 4)
                                    *(eax_269 + 4) -= 1
                                    
                                    if (temp42_1 == 1)
                                        sub_4984f0(eax_269, *(eax_269 + 0xc) + 0x10)
                                        var_60 = &data_5b2591
                            
                            var_8_55 = 0x77
                            
                            if (data_aca1f4 != 0 && esi_40 != 0 && *esi_40 != 0)
                                char* eax_270 = sub_48a080(&var_5c)
                                int32_t temp49_1 = *(eax_270 + 4)
                                *(eax_270 + 4) -= 1
                                
                                if (temp49_1 == 1)
                                    sub_4984f0(eax_270, *(eax_270 + 0xc) + 0x10)
                                    var_5c = &data_5b2591
                        else
                            sub_421310(eax_258, esi_38, &var_44, var_d0_30)
                            ebx_37 |= 0x10000000
                            char* var_40_39 = ebx_37
                            int32_t var_8_54 = 0x70
                            char* eax_259 = &data_5b2591
                            char* var_d4_18 = var_84
                            char* esi_39 = var_44
                            int32_t var_d8_6 = edi_24
                            char* const var_dc_3 = var_8c
                            
                            if (esi_39 != 0)
                                eax_259 = esi_39
                            
                            char* const var_e0_7 = var_88
                            char* var_e4_2 = eax_259
                            var_8_54.b = 0x71
                            char* ecx_231 = &data_5b2591
                            char* eax_261 = *sub_48a9d0(&var_48, 
                                "%s {bold_log}Recruit{normal_log}s %d %s {die_any} and "
                            "{bold_log}Recall{normal_log}s %d %s {die_any}.{br}")
                            
                            if (eax_261 != 0)
                                ecx_231 = eax_261
                            
                            sub_48a670(result, ecx_231)
                            var_8_54.b = 0x72
                            
                            if (data_aca1f4 != 0)
                                char* eax_262 = var_48.d
                                
                                if (eax_262 != 0 && *eax_262 != 0)
                                    char* eax_263 = sub_48a080(&var_48)
                                    int32_t temp43_1 = *(eax_263 + 4)
                                    *(eax_263 + 4) -= 1
                                    
                                    if (temp43_1 == 1)
                                        sub_4984f0(eax_263, *(eax_263 + 0xc) + 0x10)
                                        var_48.d = &data_5b2591
                            
                            var_8_55 = 0x73
                            
                            if (data_aca1f4 != 0 && esi_39 != 0 && *esi_39 != 0)
                                char* eax_264 = sub_48a080(&var_44)
                                int32_t temp50_1 = *(eax_264 + 4)
                                *(eax_264 + 4) -= 1
                                
                                if (temp50_1 == 1)
                                    sub_4984f0(eax_264, *(eax_264 + 0xc) + 0x10)
                                    var_44 = &data_5b2591
                        
                        esi_37 = arg2
                        var_8_55.b = 0
                    else if (edi_24 != 0)
                        void* esi_41 = &sub_425de0()[2]
                        int32_t* eax_273 = sub_425fe0(esi_41, var_28[var_70])
                        void** var_cc_60 = &result_3
                        sub_421310(eax_273, esi_41, &var_78, eax_273)
                        ebx_37 |= 0x40000000
                        char* var_40_41 = ebx_37
                        int32_t var_8_57 = 0x78
                        char* const eax_274 = &data_5b2591
                        char* var_d4_20 = var_84
                        char* const esi_42 = var_78
                        int32_t var_d8_8 = edi_24
                        
                        if (esi_42 != 0)
                            eax_274 = esi_42
                        
                        char* const var_dc_5 = eax_274
                        var_8_57.b = 0x79
                        char* ecx_246 = &data_5b2591
                        char* eax_276 = *
                            sub_48a9d0(&var_74, "%s {bold_log}Recall{normal_log}s %d %s {die_any}.{br}")
                        
                        if (eax_276 != 0)
                            ecx_246 = eax_276
                        
                        sub_48a670(result, ecx_246)
                        var_8_57.b = 0x7a
                        
                        if (data_aca1f4 != 0)
                            char* const eax_277 = var_74
                            
                            if (eax_277 != 0 && *eax_277 != 0)
                                char* eax_278 = sub_48a080(&var_74)
                                int32_t temp41_1 = *(eax_278 + 4)
                                *(eax_278 + 4) -= 1
                                
                                if (temp41_1 == 1)
                                    sub_4984f0(eax_278, *(eax_278 + 0xc) + 0x10)
                                    var_74 = &data_5b2591
                        
                        var_8_55 = 0x7b
                        
                        if (data_aca1f4 != 0 && esi_42 != 0 && *esi_42 != 0)
                            char* eax_279 = sub_48a080(&var_78)
                            int32_t temp48_1 = *(eax_279 + 4)
                            *(eax_279 + 4) -= 1
                            
                            if (temp48_1 == 1)
                                sub_4984f0(eax_279, *(eax_279 + 0xc) + 0x10)
                                var_78 = &data_5b2591
                        
                        esi_37 = arg2
                        var_8_55.b = 0
                    eax_281 = &var_70[1]
                    var_70 = eax_281
                while (eax_281 s< var_80)
                
                esi_36 = &data_5b2591
            
            int32_t var_8_58 = 0x7c
            char* eax_283 = *sub_48a9d0(&var_48, "{br}")
            
            if (eax_283 != 0)
                esi_36 = eax_283
            
            sub_48a670(result, esi_36)
            int32_t var_8_59 = 0x7d
            
            if (data_aca1f4 != 0)
                char* eax_284 = var_48.d
                
                if (eax_284 != 0 && *eax_284 != 0)
                    char* eax_285 = sub_48a080(&var_48)
                    int32_t temp24_1 = *(eax_285 + 4)
                    *(eax_285 + 4) -= 1
                    
                    if (temp24_1 == 1)
                        sub_4984f0(eax_285, *(eax_285 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
