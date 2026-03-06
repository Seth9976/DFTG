// 函数名称: sub_485d70
// 虚拟地址: 0x485d70
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char** __convention("regparm")sub_485d70(int32_t arg1, int32_t arg2, char** arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, char arg9)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = __ehhandler$??$raise_error@Vrounding_error@math@boost@@O@detail@policies@math@boost@@YAXPBD0ABO@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_a0 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** var_7c = arg3
    int32_t var_8_1 = 0
    char** var_90 = arg3
    int32_t var_40 = 0
    
    if (arg4 != 0)
        sub_489550(arg3, &data_5b2591, "displayRound == 0", 
            "d:\ax\trunk\ax2017\jams\roll\code\rolllog.cpp", 0x4b4, "LogSetupDescToString")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    sub_48a9d0(arg3, "{header_log}Setup{br}")
    int32_t var_8_2 = 0
    int32_t var_40_1 = 1
    int32_t var_28[0x5]
    int32_t eax_5 = sub_482bd0(&var_28, arg5, 0, arg6, 1, 1, arg8, arg7, &var_28)
    int32_t var_3c[0x5]
    int32_t eax_7 = sub_482bd0(&var_3c, arg5, 0, arg6, 2, 3, arg8, arg7, &var_3c)
    
    if (eax_5 != arg8)
        sub_489550(eax_7, &data_5b2591, "numPlayersSetup == numPlayers", 
            "d:\ax\trunk\ax2017\jams\roll\code\rolllog.cpp", 0x4bd, "LogSetupDescToString")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t eax_8 = 0
    int32_t var_74 = 0
    
    if (eax_5 s> 0)
        do
            int32_t eax_9 = var_28[eax_8]
            int32_t edx_2 = data_632804
            int32_t eax_10 = eax_9 * 5
            int32_t edi_1 = *(arg2 + (eax_10 << 3) + 4)
            int32_t* ebx_2 = arg2 + (eax_10 << 3)
            int32_t* esi_1 = edx_2 + (edi_1 + 0xbb) * 0xc
            int32_t eax_12
            eax_12.b = *(esi_1 + 7)
            
            if (eax_12.b != 0 && eax_12.b != 1)
                sub_489550(eax_12, &data_5b2591, "t.side == 0 || t.side == 1", 
                    "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 0x8cd1, "TileGetName")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            int32_t eax_14 = *(*esi_1 + (zx.d(eax_12.b) << 2))
            int32_t eax_18 = *(*(edx_2 + ebx_2[2] * 0xc + 0x8c4) + 4)
            int32_t eax_19 = sub_480c10(edi_1, 0xffffffff)
            int32_t ecx_4 = edi_1 * 3
            int32_t eax_20 = data_632804
            int32_t eax_22 = sub_482da0(eax_19, 
                *(*(eax_20 + (ecx_4 << 2) + 0x8c4) + (zx.d(*(eax_20 + (ecx_4 << 2) + 0x8cb)) << 2)
                    + 0x10))
            int32_t esi_3 = ebx_2[2]
            int32_t eax_26 =
                sub_482da0(sub_480c10(esi_3, 1), *(*(data_632804 + esi_3 * 0xc + 0x8c4) + 0x14))
            int32_t edi_3 = *ebx_2
            int32_t ebx_3 = *(*(data_632804 + edi_3 * 0xc + 0x8c4) + 4)
            int32_t eax_32 =
                sub_482da0(sub_480c10(edi_3, 1), *(*(data_632804 + edi_3 * 0xc + 0x8c4) + 0x14))
            void* esi_5 = &sub_425de0()[2]
            void* eax_34 = sub_425fe0(esi_5, eax_9)
            void var_80
            void* var_a4_1 = &var_80
            char* var_54
            sub_421310(eax_34, esi_5, &var_54, eax_34)
            var_40_1 |= 2
            int32_t var_ac_1 = eax_32
            int32_t var_b0_1 = ebx_3
            int32_t var_b4_1 = eax_26
            int32_t var_8_3 = 1
            char* const eax_35 = &data_5b2591
            int32_t var_b8_1 = eax_22
            char* esi_6 = var_54
            int32_t var_bc_1 = eax_18
            
            if (esi_6 != 0)
                eax_35 = esi_6
            
            int32_t var_c0_1 = eax_14
            char* const var_c4_1 = eax_35
            var_8_3.b = 2
            char* const var_50
            char* eax_37 =
                *sub_48a9d0(&var_50, "{normal_log}%s begins with %s/%s {%s}{%s} and %s {%s}.{br}")
            char* ecx_15 = &data_5b2591
            
            if (eax_37 != 0)
                ecx_15 = eax_37
            
            sub_48a670(arg3, ecx_15)
            var_8_3.b = 3
            
            if (data_aca1f4 != 0)
                char* eax_38 = var_50
                
                if (eax_38 != 0 && *eax_38 != 0)
                    char* eax_39 = sub_48a080(&var_50)
                    int32_t temp0_1 = *(eax_39 + 4)
                    *(eax_39 + 4) -= 1
                    
                    if (temp0_1 == 1)
                        sub_4984f0(eax_39, *(eax_39 + 0xc) + 0x10)
                        var_50 = &data_5b2591
            
            int32_t var_8_4 = 4
            
            if (data_aca1f4 != 0 && esi_6 != 0 && *esi_6 != 0)
                char* eax_40 = sub_48a080(&var_54)
                int32_t temp1_1 = *(eax_40 + 4)
                *(eax_40 + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_4984f0(eax_40, *(eax_40 + 0xc) + 0x10)
                    var_54 = &data_5b2591
            
            int32_t* edx_13 = ebx_2
            var_8_4.b = 0
            int32_t eax_41
            
            if (arg9 != 0)
                eax_41 = edx_13[9]
            
            int32_t ebx_4
            
            if (arg9 == 0 || eax_41 == 0)
                ebx_4 = eax_9
            else
                char* var_60
                char** eax_42 = sub_4836d0(eax_41, &edx_13[6], &var_60, eax_41)
                int32_t var_8_5 = 5
                ebx_4 = eax_9
                void* esi_7 = &sub_425de0()[2]
                void* eax_44 = sub_425fe0(esi_7, ebx_4)
                void* var_a8_2 = &var_80
                char* var_5c
                sub_421310(eax_44, esi_7, &var_5c, eax_44)
                var_40_1 |= 4
                var_8_5.b = 6
                char* ecx_24 = &data_5b2591
                char* eax_45 = *eax_42
                char* esi_8 = var_5c
                
                if (eax_45 != 0)
                    ecx_24 = eax_45
                
                char* var_b0_2 = ecx_24
                char* eax_46 = &data_5b2591
                
                if (esi_8 != 0)
                    eax_46 = esi_8
                
                char* var_b4_2 = eax_46
                var_8_5.b = 7
                char* ecx_25 = &data_5b2591
                char* var_58
                char* eax_48 = *sub_48a9d0(&var_58, "{normal_log}%s gains %s.{br}")
                
                if (eax_48 != 0)
                    ecx_25 = eax_48
                
                sub_48a670(arg3, ecx_25)
                var_8_5.b = 8
                
                if (data_aca1f4 != 0)
                    char* eax_49 = var_58
                    
                    if (eax_49 != 0 && *eax_49 != 0)
                        char* eax_50 = sub_48a080(&var_58)
                        int32_t temp2_1 = *(eax_50 + 4)
                        *(eax_50 + 4) -= 1
                        
                        if (temp2_1 == 1)
                            sub_4984f0(eax_50, *(eax_50 + 0xc) + 0x10)
                            var_58 = &data_5b2591
                
                var_8_5.b = 9
                
                if (data_aca1f4 != 0 && esi_8 != 0 && *esi_8 != 0)
                    char* eax_51 = sub_48a080(&var_5c)
                    int32_t temp4_1 = *(eax_51 + 4)
                    *(eax_51 + 4) -= 1
                    
                    if (temp4_1 == 1)
                        sub_4984f0(eax_51, *(eax_51 + 0xc) + 0x10)
                        var_5c = &data_5b2591
                
                int32_t var_8_6 = 0xa
                
                if (data_aca1f4 != 0)
                    char* eax_52 = var_60
                    
                    if (eax_52 != 0 && *eax_52 != 0)
                        char* eax_53 = sub_48a080(&var_60)
                        int32_t temp6_1 = *(eax_53 + 4)
                        *(eax_53 + 4) -= 1
                        
                        if (temp6_1 == 1)
                            sub_4984f0(eax_53, *(eax_53 + 0xc) + 0x10)
                            var_60 = &data_5b2591
                
                edx_13 = ebx_2
                var_8_6.b = 0
            
            int32_t eax_54 = 0
            
            if (eax_7 s> 0)
                do
                    if (var_3c[eax_54] == ebx_4)
                        int32_t edi_6 = edx_13[4]
                        int32_t eax_57 = **(data_632804 + edi_6 * 0xc + 0x8c4)
                        int32_t eax_61 = sub_482da0(sub_480c10(edi_6, 0), 
                            *(*(data_632804 + edi_6 * 0xc + 0x8c4) + 0x10))
                        int32_t edi_8 = ebx_2[5]
                        int32_t ebx_5 = *(*(data_632804 + edi_8 * 0xc + 0x8c4) + 4)
                        int32_t eax_67 = sub_482da0(sub_480c10(edi_8, 1), 
                            *(*(data_632804 + edi_8 * 0xc + 0x8c4) + 0x14))
                        void* esi_11 = &sub_425de0()[2]
                        void* eax_69 = sub_425fe0(esi_11, eax_9)
                        void* var_a4_5 = &var_80
                        char* var_68
                        sub_421310(eax_69, esi_11, &var_68, eax_69)
                        var_40_1 |= 8
                        int32_t var_ac_3 = eax_67
                        int32_t var_b0_3 = ebx_5
                        int32_t var_b4_3 = eax_61
                        int32_t var_8_7 = 0xb
                        char* const eax_70 = &data_5b2591
                        char* esi_12 = var_68
                        int32_t var_b8_2 = eax_57
                        
                        if (esi_12 != 0)
                            eax_70 = esi_12
                        
                        char* const var_bc_3 = eax_70
                        var_8_7.b = 0xc
                        char* ecx_44 = &data_5b2591
                        char* var_64
                        char* eax_72 = *sub_48a9d0(&var_64, 
                            "{normal_log}%s chooses %s {%s} and %s {%s} for construction.{br}{br}")
                        
                        if (eax_72 != 0)
                            ecx_44 = eax_72
                        
                        sub_48a670(arg3, ecx_44)
                        var_8_7.b = 0xd
                        
                        if (data_aca1f4 != 0)
                            char* eax_73 = var_64
                            
                            if (eax_73 != 0 && *eax_73 != 0)
                                char* eax_74 = sub_48a080(&var_64)
                                int32_t temp3_1 = *(eax_74 + 4)
                                *(eax_74 + 4) -= 1
                                
                                if (temp3_1 == 1)
                                    sub_4984f0(eax_74, *(eax_74 + 0xc) + 0x10)
                                    var_64 = &data_5b2591
                        
                        int32_t var_8_8 = 0xe
                        
                        if (data_aca1f4 != 0 && esi_12 != 0 && *esi_12 != 0)
                            char* eax_75 = sub_48a080(&var_68)
                            int32_t temp5_1 = *(eax_75 + 4)
                            *(eax_75 + 4) -= 1
                            
                            if (temp5_1 == 1)
                                sub_4984f0(eax_75, *(eax_75 + 0xc) + 0x10)
                                var_68 = &data_5b2591
                        
                        var_8_8.b = 0
                        break
                    
                    eax_54 += 1
                while (eax_54 s< eax_7)
            
            eax_8 = var_74 + 1
            var_74 = eax_8
        while (eax_8 s< eax_5)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return arg3
}
