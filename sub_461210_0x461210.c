// 函数名称: sub_461210
// 虚拟地址: 0x461210
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_461210(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    void* eax_1 = __security_cookie ^ &__saved_ebp
    void* var_8 = eax_1
    int32_t* edi = arg1
    int32_t var_23c_1
    char const* const var_238
    char* ecx
    
    if (edi[0x2f4].b != 0)
        void* ebx_1 = data_632804
        int32_t var_1fc = 0xffffffff
        eax_1 = sub_45e8f0(arg1)
        
        if (eax_1 == 0)
            var_238 = "GetPhaseSelectionDie"
            var_23c_1 = 0x354c
            ecx = "Halt"
        else
            void* i_1 = *(eax_1 + 0x24)
            int32_t ecx_2 = *(eax_1 + 8)
            eax_1 = sub_45e670(ecx_2)
            
            if (eax_1 s>= 0)
                int32_t var_238_1 = ecx_2
                sub_45bde0(eax_1, *edi, ebx_1, 2, eax_1, &i_1, 1, 0, 0)
                int32_t ebx_2 = 0
                int64_t var_210
                void* i_4 = sub_4580c0(&var_210, edi)
                int64_t xmm0 = var_210
                void* i_2
                i_1 = i_2
                void* var_228
                sub_458110(&var_228)
                void* eax_3 = var_228
                int32_t var_14c[0x28]
                int32_t var_ac[0x29]
                
                if (var_210.d != eax_3)
                    eax_3 = xmm0:4.d
                    int32_t* esi_1 = xmm0.d
                    void* var_1f4_1 = eax_3
                    int32_t var_23c_6
                    char const* const var_238_5
                    char* ecx_24
                    
                    while (true)
                        if (esi_1 == 0)
                            var_238_5 = "DiceAssigning::DiceIt::operator *"
                            var_23c_6 = 0x17e8
                            ecx_24 = &data_5e3f90
                        else if (esi_1[3] s> 6)
                            var_238_5 = "GetSide"
                            var_23c_6 = 0x150b
                            ecx_24 = "die.face <= 6"
                        else
                            if (*(sub_457270(esi_1[2]) + (esi_1[3] << 2)) == 0 && *(esi_1 + 0x21) == 0)
                                var_ac[ebx_2] = esi_1
                                ebx_2 += 1
                            
                            void* i_3 = i_1
                            void* i_8
                            
                            if (i_3 != 0)
                                i_8 = i_3
                            label_46137e:
                                esi_1 = sub_452c30(i_8)
                                i_4 = esi_1[0xa]
                                eax_3 = esi_1[4]
                                i_1 = i_4
                                var_1f4_1 = eax_3
                            else
                                eax_3 = sub_452b90(esi_1[6])
                                i_4 = var_1f4_1 + 1
                                
                                if (i_4 s<= 0xd)
                                    eax_3 = eax_3 + (i_4 << 2) + 0x2b4
                                    
                                    while (true)
                                        void* i_9 = *eax_3
                                        
                                        if (i_9 != 0)
                                            i_8 = i_9
                                            break
                                        
                                        i_4 += 1
                                        eax_3 += 4
                                        
                                        if (i_4 s> 0xd)
                                            goto label_46136f
                                    
                                    goto label_46137e
                                
                            label_46136f:
                                esi_1 = nullptr
                            
                            if (esi_1 == var_228)
                                break
                            
                            continue
                        
                    label_461688:
                        sub_489550(eax_3, &data_5b2591, ecx_24, 
                            "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", var_23c_6, var_238_5)
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_489700()
                        noreturn
                    
                    if (ebx_2 s> 0)
                        sub_436380(eax_3, &var_ac[ebx_2], &var_ac, ebx_2, sub_461190)
                        int32_t edx_2 = 0
                        int32_t var_1ec[0x28]
                        void* ecx_12
                        
                        do
                            void* ecx_10 = var_ac[edx_2]
                            void* ecx_11 = *(ecx_10 + 0x10)
                            var_1ec[edx_2] = *(ecx_10 + 0x2c)
                            
                            if (ecx_11 == 8)
                                ecx_12 = 1
                            else
                                eax_3 = ecx_11 - 9
                                
                                if (eax_3 u> 4)
                                    var_238_5 = "RollWhereToPhase"
                                    var_23c_6 = 0x34a9
                                    ecx_24 = "Halt"
                                    goto label_461688
                                
                                ecx_12 = ecx_11 - 8
                            
                            var_14c[edx_2] = ecx_12
                            edx_2 += 1
                        while (edx_2 s< ebx_2)
                        
                        void* var_238_4 = ecx_12
                        eax_3, i_4 =
                            sub_45bde0(&var_1ec, *edi, ebx_1, 1, 0, &var_1ec, ebx_2, &var_14c, ebx_2)
                
                bool cond:0 = edi[0x2f3] s<= 0
                i_1 = nullptr
                
                if (not(cond:0))
                    void* esi_2 = &edi[0x204]
                    void* var_1f4_2 = esi_2
                    void* i
                    
                    do
                        int32_t ebx_3 = 0
                        
                        if (*(esi_2 + 0x10) == 0)
                            eax_3 = *esi_2
                            
                            if (eax_3 == 4)
                                int32_t j = 0
                                
                                if (edi[0x2f3] s> 0)
                                    void* eax_9 = &edi[0x208]
                                    
                                    do
                                        i_4 = *(eax_9 - 0x10)
                                        
                                        if (i_4 == 4)
                                            void* ecx_14 = *(eax_9 - 0x14)
                                            var_14c[0] = 0xffffffff
                                            i_4 = *(ecx_14 + 0x2c)
                                            var_ac[0] = i_4
                                            *eax_9 = 1
                                        else if (i_4 == 6)
                                            ebx_3 += 1
                                            var_ac[ebx_3] = *(*(eax_9 - 0x14) + 0x2c)
                                            i_4 = *(eax_9 - 0xc)
                                            var_14c[ebx_3] = i_4
                                            *eax_9 = 1
                                        
                                        j += 1
                                        eax_9 += 0x18
                                    while (j s< edi[0x2f3])
                                
                                void* i_5 = i_4
                                sub_45bde0(&var_1fc, *edi, ebx_1, 3, 1, &var_1fc, 1, 0, 0)
                                eax_3, i_4 = sub_45bde0(&var_ac, *edi, ebx_1, 4, 0, &var_ac, ebx_3 + 1, 
                                    &var_14c, ebx_3 + 1)
                            else if (eax_3 == 5)
                                int32_t eax_13 = *(esi_2 + 8)
                                int32_t j_1 = 0
                                int32_t var_200_1 = eax_13
                                int32_t var_204 = eax_13
                                
                                if (edi[0x2f3] s> 0)
                                    void* edx_6 = &edi[0x206]
                                    
                                    do
                                        if (*(edx_6 - 8) == 5 && *edx_6 == eax_13)
                                            i_4 = ebx_3 << 2
                                            ebx_3 += 1
                                            *(&var_ac + i_4) = *(*(edx_6 - 0xc) + 0x2c)
                                            *(&var_14c + i_4) = *(edx_6 - 4)
                                            eax_13 = var_200_1
                                            *(edx_6 + 8) = 1
                                        
                                        j_1 += 1
                                        edx_6 += 0x18
                                    while (j_1 s< edi[0x2f3])
                                
                                void* i_6 = i_4
                                sub_45bde0(&var_204, *edi, ebx_1, 3, 1, &var_204, 1, 0, 0)
                                eax_3, i_4 = sub_45bde0(&var_ac, *edi, ebx_1, 4, 0, &var_ac, ebx_3, 
                                    &var_14c, ebx_3)
                                esi_2 = var_1f4_2
                        
                        esi_2 += 0x18
                        i = i_1 + 1
                        var_1f4_2 = esi_2
                        i_1 = i
                    while (i s< edi[0x2f3])
                
                void* i_7 = i_4
                void* result = sub_45bde0(eax_3, *edi, ebx_1, 3, 0, 0, 0, 0, 0)
                @__security_check_cookie@4(var_8 ^ &__saved_ebp)
                return result
            
            var_238 = "ResolveAssignmentStep"
            var_23c_1 = 0x3c92
            ecx = "choicePhase >= 0"
    else
        var_238 = "ResolveAssignmentStep"
        var_23c_1 = 0x3c69
        ecx = "valid"
    
    sub_489550(eax_1, &data_5b2591, ecx, "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", var_23c_1, 
        var_238)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
