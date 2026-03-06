// 函数名称: sub_427580
// 虚拟地址: 0x427580
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char*sub_427580(void* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59d239
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ebx
    int32_t var_28 = ebx
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* var_20 = nullptr
    void* eax_3 = sub_426fb0()
    
    if (*(arg1 + 0x18) == 2)
        if (data_6d00b8 == 0)
            if (data_6d00ac != 1)
                data_62b220 = 3
            else
                sub_42e090()
            
            sub_437ba0(data_6d00d8)
        else
            data_6d00b8 = 0
    
    char* var_1c
    sub_48a2c0(&var_1c, "btnBack")
    char* eax_4 = var_1c
    char* edx = *(arg1 + 4)
    char* const ecx_3 = &data_5b2591
    
    if (eax_4 != 0)
        ecx_3 = eax_4
    
    int32_t ecx_5
    
    while (true)
        ebx.b = *ecx_3
        char temp0_1 = *edx
        bool c_1 = ebx.b u< temp0_1
        
        if (ebx.b == temp0_1)
            if (ebx.b == 0)
                ecx_5 = 0
                break
            
            ebx.b = ecx_3[1]
            char temp1_1 = edx[1]
            c_1 = ebx.b u< temp1_1
            
            if (ebx.b == temp1_1)
                ecx_3 = &ecx_3[2]
                edx = &edx[2]
                
                if (ebx.b != 0)
                    continue
                
                ecx_5 = 0
                break
        
        ecx_5 = sbb.d(ecx_3, ecx_3, c_1) | 1
        break
    
    if (ecx_5 == 0 || *(arg1 + 0x18) == 2)
        ebx.b = 1
    else
        ebx.b = 0
    
    var_20 = nullptr
    int32_t var_8_1 = 0
    
    if (data_aca1f4 != 0 && eax_4 != 0 && *eax_4 != 0)
        char* eax_5 = sub_48a080(&var_1c)
        int32_t temp2_1 = *(eax_5 + 4)
        *(eax_5 + 4) -= 1
        
        if (temp2_1 == 1)
            sub_4984f0(eax_5, *(eax_5 + 0xc) + 0x10)
            var_1c = &data_5b2591
    
    int32_t var_8_2 = 0xffffffff
    
    if (ebx.b != 0)
        int32_t eax_6 = data_6d00ac
        
        if (eax_6 == 1 || eax_6 == 2)
            sub_42e090()
        else
            data_62b220 = 3
        
        sub_437ba0(data_6d00d8)
    
    sub_48a2c0(&var_20, "btnTutorial")
    char* eax_7 = var_20
    char* const ecx_10 = &data_5b2591
    char* edx_3 = *(arg1 + 4)
    
    if (eax_7 != 0)
        ecx_10 = eax_7
    
    int32_t esi_1
    
    while (true)
        ebx.b = *ecx_10
        char temp3_1 = *edx_3
        bool c_2 = ebx.b u< temp3_1
        
        if (ebx.b == temp3_1)
            if (ebx.b == 0)
                esi_1 = 0
                break
            
            ebx.b = ecx_10[1]
            char temp4_1 = edx_3[1]
            c_2 = ebx.b u< temp4_1
            
            if (ebx.b == temp4_1)
                ecx_10 = &ecx_10[2]
                edx_3 = &edx_3[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_1 = 0
                break
        
        esi_1 = sbb.d(arg1, arg1, c_2) | 1
        break
    
    int32_t var_8_3 = 1
    
    if (data_aca1f4 != 0 && eax_7 != 0 && *eax_7 != 0)
        char* eax_8 = sub_48a080(&var_20)
        int32_t temp5_1 = *(eax_8 + 4)
        *(eax_8 + 4) -= 1
        
        if (temp5_1 == 1)
            sub_4984f0(eax_8, *(eax_8 + 0xc) + 0x10)
            var_20 = &data_5b2591
    
    int32_t var_8_4 = 0xffffffff
    
    if (esi_1 == 0)
        sub_437ba0(data_6d00d8)
        data_62b220 = 0x1f
        data_6d00a4 = 1
    
    sub_48a2c0(&var_20, "btnExp")
    char* const ecx_15 = &data_5b2591
    char* edx_6 = *(arg1 + 4)
    char* eax_10 = var_20
    
    if (eax_10 != 0)
        ecx_15 = eax_10
    
    int32_t esi_3
    
    while (true)
        ebx.b = *ecx_15
        char temp6_1 = *edx_6
        bool c_3 = ebx.b u< temp6_1
        
        if (ebx.b == temp6_1)
            if (ebx.b == 0)
                esi_3 = 0
                break
            
            ebx.b = ecx_15[1]
            char temp7_1 = edx_6[1]
            c_3 = ebx.b u< temp7_1
            
            if (ebx.b == temp7_1)
                ecx_15 = &ecx_15[2]
                edx_6 = &edx_6[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_3 = 0
                break
        
        esi_3 = sbb.d(esi_1, esi_1, c_3) | 1
        break
    
    int32_t var_8_5 = 2
    
    if (data_aca1f4 != 0 && eax_10 != 0 && *eax_10 != 0)
        char* eax_11 = sub_48a080(&var_20)
        int32_t temp8_1 = *(eax_11 + 4)
        *(eax_11 + 4) -= 1
        
        if (temp8_1 == 1)
            sub_4984f0(eax_11, *(eax_11 + 0xc) + 0x10)
            var_20 = &data_5b2591
    
    int32_t var_8_6 = 0xffffffff
    
    if (esi_3 == 0)
        int32_t eax_12 = 1 << (*(arg1 + 8)).b
        int32_t ecx_20 = *(eax_3 + 0xec)
        
        if ((eax_12 & ecx_20) == 0)
            *(eax_3 + 0xec) = ecx_20 | eax_12
        else
            *(eax_3 + 0xec) = not.d(eax_12) & ecx_20
    
    sub_48a2c0(&var_20, "btnDecline")
    char* const ecx_23 = &data_5b2591
    char* edx_10 = *(arg1 + 4)
    char* eax_16 = var_20
    
    if (eax_16 != 0)
        ecx_23 = eax_16
    
    int32_t esi_5
    
    while (true)
        ebx.b = *ecx_23
        char temp9_1 = *edx_10
        bool c_4 = ebx.b u< temp9_1
        
        if (ebx.b == temp9_1)
            if (ebx.b == 0)
                esi_5 = 0
                break
            
            ebx.b = ecx_23[1]
            char temp10_1 = edx_10[1]
            c_4 = ebx.b u< temp10_1
            
            if (ebx.b == temp10_1)
                ecx_23 = &ecx_23[2]
                edx_10 = &edx_10[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_5 = 0
                break
        
        esi_5 = sbb.d(esi_3, esi_3, c_4) | 1
        break
    
    int32_t var_8_7 = 3
    
    if (data_aca1f4 != 0 && eax_16 != 0 && *eax_16 != 0)
        char* eax_17 = sub_48a080(&var_20)
        int32_t temp11_1 = *(eax_17 + 4)
        *(eax_17 + 4) -= 1
        
        if (temp11_1 == 1)
            sub_4984f0(eax_17, *(eax_17 + 0xc) + 0x10)
            var_20 = &data_5b2591
    
    int32_t var_8_8 = 0xffffffff
    
    if (esi_5 == 0)
        sub_427230(eax_3)
        sub_425aa0(data_6d00b4)
        sub_4274a0(data_6d00b4)
        sub_42e090()
    
    sub_48a2c0(&var_20, "btnStart")
    char* ecx_30 = &data_5b2591
    char* edx_15 = *(arg1 + 4)
    char* eax_20 = var_20
    
    if (eax_20 != 0)
        ecx_30 = eax_20
    
    int32_t esi_7
    
    while (true)
        ebx.b = *ecx_30
        char temp12_1 = *edx_15
        bool c_5 = ebx.b u< temp12_1
        
        if (ebx.b == temp12_1)
            if (ebx.b == 0)
                esi_7 = 0
                break
            
            ebx.b = ecx_30[1]
            char temp13_1 = edx_15[1]
            c_5 = ebx.b u< temp13_1
            
            if (ebx.b == temp13_1)
                ecx_30 = &ecx_30[2]
                edx_15 = &edx_15[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_7 = 0
                break
        
        esi_7 = sbb.d(esi_5, esi_5, c_5) | 1
        break
    
    int32_t var_8_9 = 4
    
    if (data_aca1f4 != 0 && eax_20 != 0 && *eax_20 != 0)
        char* eax_21 = sub_48a080(&var_20)
        int32_t temp14_1 = *(eax_21 + 4)
        *(eax_21 + 4) -= 1
        
        if (temp14_1 == 1)
            sub_4984f0(eax_21, *(eax_21 + 0xc) + 0x10)
            var_20 = &data_5b2591
    
    int32_t var_8_10 = 0xffffffff
    void* result_1
    
    if (esi_7 == 0)
        int32_t eax_22 = sub_427230(eax_3)
        
        if (eax_22 u> 8)
            sub_489550(eax_22, &data_5b2591, "Halt", 
                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", 0x3a9, 
                "GameCreateGameClick")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        switch (eax_22)
            case 0
                void* ecx_35 = data_6d00d8
                
                if (data_6d00ac != 1)
                    sub_437ba0(ecx_35)
                    void* eax_24 = data_6cfe4c
                    
                    if (eax_24 == 0)
                        sub_489550(eax_24, &data_5b2591, "gClient", 
                            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, 
                            "GetClient")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_489700()
                        noreturn
                    
                    *(eax_24 + 0x82c) = 1
                else
                    sub_437ba0(ecx_35)
                    sub_422c50(eax_3)
                    sub_42e090()
            case 1
                sub_42e090()
            case 2, 3
                sub_425b60(data_6d00b4)
                sub_42e090()
            case 5
                void* ecx_40 = data_6cfe4c
                
                if (ecx_40 == 0)
                    sub_489550(eax_22, &data_5b2591, "gClient", 
                        "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                result_1 = *sub_426880(ecx_40 + 0x848, data_6d00b4)
                void* eax_27 = data_6cfe4c
                
                if (eax_27 == 0)
                    sub_489550(eax_27, &data_5b2591, "gClient", 
                        "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                if (*(eax_27 + 0x18) == 3)
                    int32_t eax_28 = *(eax_27 + 0x14)
                    void* ecx_42 = data_aca0dc
                    
                    if (eax_28 != 0)
                        uint32_t edx_19 = zx.d(eax_28.w)
                        
                        if (edx_19 u< *(ecx_42 + 4))
                            void* esi_10 = edx_19 * 0x4c + *ecx_42
                            
                            if (*(esi_10 + 0x48) == eax_28)
                                int32_t var_38_2 = 0xf42ae
                                sub_48be40(eax_28, 4, esi_10 + 0x3c)
                                sub_48bc20(&result_1, 4, esi_10 + 0x3c, &result_1)
                
                sub_42e090()
            case 7
                sub_425aa0(data_6d00b4)
                sub_4274a0(data_6d00b4)
                sub_42e090()
            case 8
                sub_421ad0(data_6d00b4)
    
    sub_48a2c0(&result_1, "btnPlayerEmpty")
    int32_t var_8_11 = 5
    char* result_19 = result_1
    var_20 = 2
    char* ecx_38 = *(arg1 + 4)
    char* const result_20 = &data_5b2591
    
    if (result_19 != 0)
        result_20 = result_19
    
    int32_t eax_31
    
    while (true)
        char edx_18 = *result_20
        char temp15_1 = *ecx_38
        bool c_6 = edx_18 u< temp15_1
        
        if (edx_18 == temp15_1)
            if (edx_18 == 0)
                eax_31 = 0
                break
            
            edx_18 = result_20[1]
            char temp16_1 = ecx_38[1]
            c_6 = edx_18 u< temp16_1
            
            if (edx_18 == temp16_1)
                result_20 = &result_20[2]
                ecx_38 = &ecx_38[2]
                
                if (edx_18 != 0)
                    continue
                
                eax_31 = 0
                break
        
        eax_31 = sbb.d(result_20, result_20, c_6) | 1
        break
    
    void* const ebx_2 = 2
    int32_t ecx_47 = 2
    char var_11
    char* eax_33
    
    if (eax_31 == 0)
        eax_33 = var_1c
        var_11 = 1
    else
        sub_48a2c0(&var_1c, "btnPlayerFull")
        char* ecx_49 = &data_5b2591
        char* edx_22 = *(arg1 + 4)
        eax_33 = var_1c
        
        if (eax_33 != 0)
            ecx_49 = eax_33
        
        int32_t edx_24
        
        while (true)
            ebx_2.b = *ecx_49
            char temp17_1 = *edx_22
            bool c_7 = ebx_2.b u< temp17_1
            
            if (ebx_2.b == temp17_1)
                if (ebx_2.b == 0)
                    edx_24 = 0
                    break
                
                ebx_2.b = ecx_49[1]
                char temp18_1 = edx_22[1]
                c_7 = ebx_2.b u< temp18_1
                
                if (ebx_2.b == temp18_1)
                    ecx_49 = &ecx_49[2]
                    edx_22 = &edx_22[2]
                    
                    if (ebx_2.b != 0)
                        continue
                    
                    edx_24 = 0
                    break
            
            edx_24 = sbb.d(edx_22, edx_22, c_7) | 1
            break
        
        ebx_2 = 6
        ecx_47 = 6
        
        var_11 = edx_24 == 0 ? 1 : 0
    
    if ((ebx_2.b & 4) != 0)
        var_20 = ecx_47 & 0xfffffffb
        int32_t var_8_12 = 6
        
        if (data_aca1f4 != 0 && eax_33 != 0 && *eax_33 != 0)
            char* eax_34 = sub_48a080(&var_1c)
            int32_t temp20_1 = *(eax_34 + 4)
            *(eax_34 + 4) -= 1
            
            if (temp20_1 == 1)
                sub_4984f0(eax_34, *(eax_34 + 0xc) + 0x10)
                var_1c = &data_5b2591
    
    int32_t var_8_13 = 7
    
    if (data_aca1f4 != 0 && result_19 != 0 && *result_19 != 0)
        char* eax_35 = sub_48a080(&result_1)
        int32_t temp19_1 = *(eax_35 + 4)
        *(eax_35 + 4) -= 1
        
        if (temp19_1 == 1)
            sub_4984f0(eax_35, *(eax_35 + 0xc) + 0x10)
            result_1 = &data_5b2591
    
    int32_t var_8_14 = 0xffffffff
    char* result_2
    int32_t edx_30
    
    if (var_11 == 0)
        if (data_6d00b8 != 0)
            edx_30 = data_6d00bc
            goto label_427c0b
        
        result_2 = &data_5b2591
    else
        data_6d00b8 = 1
        edx_30 = *(arg1 + 8) + 1
        data_6d00bc = edx_30
    label_427c0b:
        char* eax_37 = sub_427520(eax_3, edx_30)
        sub_48a2c0(&result_1, "btnLocal")
        void* result_18 = result_1
        char* edx_31 = *(arg1 + 4)
        char* const result_21 = &data_5b2591
        
        if (result_18 != 0)
            result_21 = result_18
        
        int32_t esi_11
        
        while (true)
            ebx_2.b = *result_21
            char temp21_1 = *edx_31
            bool c_8 = ebx_2.b u< temp21_1
            
            if (ebx_2.b == temp21_1)
                if (ebx_2.b == 0)
                    esi_11 = 0
                    break
                
                ebx_2.b = result_21[1]
                char temp23_1 = edx_31[1]
                c_8 = ebx_2.b u< temp23_1
                
                if (ebx_2.b == temp23_1)
                    result_21 = &result_21[2]
                    edx_31 = &edx_31[2]
                    
                    if (ebx_2.b != 0)
                        continue
                    
                    esi_11 = 0
                    break
            
            esi_11 = sbb.d(result_19, result_19, c_8) | 1
            break
        
        int32_t var_8_15 = 8
        
        if (data_aca1f4 != 0 && result_18 != 0 && *result_18 != 0)
            char* eax_39 = sub_48a080(&result_1)
            int32_t temp25_1 = *(eax_39 + 4)
            *(eax_39 + 4) -= 1
            
            if (temp25_1 == 1)
                sub_4984f0(eax_39, *(eax_39 + 0xc) + 0x10)
                result_1 = &data_5b2591
        
        int32_t var_8_16 = 0xffffffff
        int32_t eax_40 = data_6d00b0
        
        if (esi_11 == 0)
            eax_40 = 1
        
        data_6d00b0 = eax_40
        sub_48a2c0(&result_1, "btnAI")
        char* const result_22 = &data_5b2591
        char* edx_34 = *(arg1 + 4)
        void* result_3 = result_1
        
        if (result_3 != 0)
            result_22 = result_3
        
        int32_t esi_13
        
        while (true)
            ebx_2.b = *result_22
            char temp27_1 = *edx_34
            bool c_9 = ebx_2.b u< temp27_1
            
            if (ebx_2.b == temp27_1)
                if (ebx_2.b == 0)
                    esi_13 = 0
                    break
                
                ebx_2.b = result_22[1]
                char temp29_1 = edx_34[1]
                c_9 = ebx_2.b u< temp29_1
                
                if (ebx_2.b == temp29_1)
                    result_22 = &result_22[2]
                    edx_34 = &edx_34[2]
                    
                    if (ebx_2.b != 0)
                        continue
                    
                    esi_13 = 0
                    break
            
            esi_13 = sbb.d(esi_11, esi_11, c_9) | 1
            break
        
        int32_t var_8_17 = 9
        
        if (data_aca1f4 != 0 && result_3 != 0 && *result_3 != 0)
            char* eax_42 = sub_48a080(&result_1)
            int32_t temp31_1 = *(eax_42 + 4)
            *(eax_42 + 4) -= 1
            
            if (temp31_1 == 1)
                sub_4984f0(eax_42, *(eax_42 + 0xc) + 0x10)
                result_1 = &data_5b2591
        
        int32_t var_8_18 = 0xffffffff
        int32_t eax_43 = data_6d00b0
        
        if (esi_13 == 0)
            eax_43 = 0
        
        data_6d00b0 = eax_43
        sub_48a2c0(&result_1, "btnFriend")
        char* const result_23 = &data_5b2591
        char* edx_37 = *(arg1 + 4)
        void* result_4 = result_1
        
        if (result_4 != 0)
            result_23 = result_4
        
        int32_t esi_15
        
        while (true)
            ebx_2.b = *result_23
            char temp33_1 = *edx_37
            bool c_10 = ebx_2.b u< temp33_1
            
            if (ebx_2.b == temp33_1)
                if (ebx_2.b == 0)
                    esi_15 = 0
                    break
                
                ebx_2.b = result_23[1]
                char temp34_1 = edx_37[1]
                c_10 = ebx_2.b u< temp34_1
                
                if (ebx_2.b == temp34_1)
                    result_23 = &result_23[2]
                    edx_37 = &edx_37[2]
                    
                    if (ebx_2.b != 0)
                        continue
                    
                    esi_15 = 0
                    break
            
            esi_15 = sbb.d(esi_13, esi_13, c_10) | 1
            break
        
        int32_t var_8_19 = 0xa
        
        if (data_aca1f4 != 0 && result_4 != 0 && *result_4 != 0)
            char* eax_45 = sub_48a080(&result_1)
            int32_t temp35_1 = *(eax_45 + 4)
            *(eax_45 + 4) -= 1
            
            if (temp35_1 == 1)
                sub_4984f0(eax_45, *(eax_45 + 0xc) + 0x10)
                result_1 = &data_5b2591
        
        int32_t var_8_20 = 0xffffffff
        int32_t eax_46 = data_6d00b0
        
        if (esi_15 == 0)
            eax_46 = 1
        
        data_6d00b0 = eax_46
        sub_48a2c0(&result_1, "btnLobby")
        char* const result_24 = &data_5b2591
        char* edx_40 = *(arg1 + 4)
        void* result_5 = result_1
        
        if (result_5 != 0)
            result_24 = result_5
        
        int32_t esi_17
        
        while (true)
            ebx_2.b = *result_24
            char temp36_1 = *edx_40
            bool c_11 = ebx_2.b u< temp36_1
            
            if (ebx_2.b == temp36_1)
                if (ebx_2.b == 0)
                    esi_17 = 0
                    break
                
                ebx_2.b = result_24[1]
                char temp37_1 = edx_40[1]
                c_11 = ebx_2.b u< temp37_1
                
                if (ebx_2.b == temp37_1)
                    result_24 = &result_24[2]
                    edx_40 = &edx_40[2]
                    
                    if (ebx_2.b != 0)
                        continue
                    
                    esi_17 = 0
                    break
            
            esi_17 = sbb.d(esi_15, esi_15, c_11) | 1
            break
        
        int32_t var_8_21 = 0xb
        
        if (data_aca1f4 != 0 && result_5 != 0 && *result_5 != 0)
            char* eax_48 = sub_48a080(&result_1)
            int32_t temp38_1 = *(eax_48 + 4)
            *(eax_48 + 4) -= 1
            
            if (temp38_1 == 1)
                sub_4984f0(eax_48, *(eax_48 + 0xc) + 0x10)
                result_1 = &data_5b2591
        
        int32_t var_8_22 = 0xffffffff
        int32_t eax_49 = data_6d00b0
        
        if (esi_17 == 0)
            eax_49 = 0
        
        data_6d00b0 = eax_49
        sub_48a2c0(&result_1, "btnEasy")
        char* const result_25 = &data_5b2591
        char* edx_43 = *(arg1 + 4)
        void* result_6 = result_1
        
        if (result_6 != 0)
            result_25 = result_6
        
        int32_t esi_19
        
        while (true)
            ebx_2.b = *result_25
            char temp39_1 = *edx_43
            bool c_12 = ebx_2.b u< temp39_1
            
            if (ebx_2.b == temp39_1)
                if (ebx_2.b == 0)
                    esi_19 = 0
                    break
                
                ebx_2.b = result_25[1]
                char temp40_1 = edx_43[1]
                c_12 = ebx_2.b u< temp40_1
                
                if (ebx_2.b == temp40_1)
                    result_25 = &result_25[2]
                    edx_43 = &edx_43[2]
                    
                    if (ebx_2.b != 0)
                        continue
                    
                    esi_19 = 0
                    break
            
            esi_19 = sbb.d(esi_17, esi_17, c_12) | 1
            break
        
        int32_t var_8_23 = 0xc
        
        if (data_aca1f4 != 0 && result_6 != 0 && *result_6 != 0)
            char* eax_51 = sub_48a080(&result_1)
            int32_t temp41_1 = *(eax_51 + 4)
            *(eax_51 + 4) -= 1
            
            if (temp41_1 == 1)
                sub_4984f0(eax_51, *(eax_51 + 0xc) + 0x10)
                result_1 = &data_5b2591
        
        int32_t var_8_24 = 0xffffffff
        
        if (esi_19 == 0)
            *(eax_37 + 0x14) = 3
            *(eax_37 + 0x18) = esi_19
            _strncpy(eax_37, "_Easy AI_", 0x10)
            eax_37[0xf] = 0
            *(eax_37 + 0x10) = sub_427510(*(eax_37 + 0x18))
            data_6d00b8 = 0
        
        sub_48a2c0(&result_1, "btnMedium")
        char* const result_26 = &data_5b2591
        char* edx_46 = *(arg1 + 4)
        void* result_7 = result_1
        
        if (result_7 != 0)
            result_26 = result_7
        
        int32_t esi_21
        
        while (true)
            ebx_2.b = *result_26
            char temp42_1 = *edx_46
            bool c_13 = ebx_2.b u< temp42_1
            
            if (ebx_2.b == temp42_1)
                if (ebx_2.b == 0)
                    esi_21 = 0
                    break
                
                ebx_2.b = result_26[1]
                char temp43_1 = edx_46[1]
                c_13 = ebx_2.b u< temp43_1
                
                if (ebx_2.b == temp43_1)
                    result_26 = &result_26[2]
                    edx_46 = &edx_46[2]
                    
                    if (ebx_2.b != 0)
                        continue
                    
                    esi_21 = 0
                    break
            
            esi_21 = sbb.d(esi_19, esi_19, c_13) | 1
            break
        
        int32_t var_8_25 = 0xd
        
        if (data_aca1f4 != 0 && result_7 != 0 && *result_7 != 0)
            char* eax_54 = sub_48a080(&result_1)
            int32_t temp44_1 = *(eax_54 + 4)
            *(eax_54 + 4) -= 1
            
            if (temp44_1 == 1)
                sub_4984f0(eax_54, *(eax_54 + 0xc) + 0x10)
                result_1 = &data_5b2591
        
        int32_t var_8_26 = 0xffffffff
        
        if (esi_21 == 0)
            *(eax_37 + 0x14) = 3
            *(eax_37 + 0x18) = 1
            _strncpy(eax_37, "_AI_", 0x10)
            eax_37[0xf] = 0
            *(eax_37 + 0x10) = sub_427510(*(eax_37 + 0x18))
            data_6d00b8 = 0
        
        sub_48a2c0(&result_1, "btnHard")
        char* const result_27 = &data_5b2591
        char* edx_49 = *(arg1 + 4)
        void* result_8 = result_1
        
        if (result_8 != 0)
            result_27 = result_8
        
        int32_t esi_23
        
        while (true)
            ebx_2.b = *result_27
            char temp45_1 = *edx_49
            bool c_14 = ebx_2.b u< temp45_1
            
            if (ebx_2.b == temp45_1)
                if (ebx_2.b == 0)
                    esi_23 = 0
                    break
                
                ebx_2.b = result_27[1]
                char temp46_1 = edx_49[1]
                c_14 = ebx_2.b u< temp46_1
                
                if (ebx_2.b == temp46_1)
                    result_27 = &result_27[2]
                    edx_49 = &edx_49[2]
                    
                    if (ebx_2.b != 0)
                        continue
                    
                    esi_23 = 0
                    break
            
            esi_23 = sbb.d(esi_21, esi_21, c_14) | 1
            break
        
        int32_t var_8_27 = 0xe
        
        if (data_aca1f4 != 0 && result_8 != 0 && *result_8 != 0)
            char* eax_57 = sub_48a080(&result_1)
            int32_t temp47_1 = *(eax_57 + 4)
            *(eax_57 + 4) -= 1
            
            if (temp47_1 == 1)
                sub_4984f0(eax_57, *(eax_57 + 0xc) + 0x10)
                result_1 = &data_5b2591
        
        int32_t var_8_28 = 0xffffffff
        
        if (esi_23 == 0)
            *(eax_37 + 0x14) = 3
            *(eax_37 + 0x18) = 2
            _strncpy(eax_37, "_Hard AI_", 0x10)
            eax_37[0xf] = 0
            *(eax_37 + 0x10) = sub_427510(*(eax_37 + 0x18))
            data_6d00b8 = 0
        
        sub_48a2c0(&result_1, "btnOptional")
        char* const result_28 = &data_5b2591
        char* edx_52 = *(arg1 + 4)
        void* result_9 = result_1
        
        if (result_9 != 0)
            result_28 = result_9
        
        int32_t esi_25
        
        while (true)
            ebx_2.b = *result_28
            char temp48_1 = *edx_52
            bool c_15 = ebx_2.b u< temp48_1
            
            if (ebx_2.b == temp48_1)
                if (ebx_2.b == 0)
                    esi_25 = 0
                    break
                
                ebx_2.b = result_28[1]
                char temp49_1 = edx_52[1]
                c_15 = ebx_2.b u< temp49_1
                
                if (ebx_2.b == temp49_1)
                    result_28 = &result_28[2]
                    edx_52 = &edx_52[2]
                    
                    if (ebx_2.b != 0)
                        continue
                    
                    esi_25 = 0
                    break
            
            esi_25 = sbb.d(esi_23, esi_23, c_15) | 1
            break
        
        int32_t var_8_29 = 0xf
        
        if (data_aca1f4 != 0 && result_9 != 0 && *result_9 != 0)
            char* eax_60 = sub_48a080(&result_1)
            int32_t temp50_1 = *(eax_60 + 4)
            *(eax_60 + 4) -= 1
            
            if (temp50_1 == 1)
                sub_4984f0(eax_60, *(eax_60 + 0xc) + 0x10)
                result_1 = &data_5b2591
        
        int32_t var_8_30 = 0xffffffff
        
        if (esi_25 == 0)
            *(eax_37 + 0x14) = 2
            *(eax_37 + 0x18) = 1
            _strncpy(eax_37, "OPTIONAL", 0x10)
            eax_37[0xf] = 0
            data_6d00b8 = 0
        
        sub_48a2c0(&result_1, "btnRequired")
        char* const result_29 = &data_5b2591
        char* edx_55 = *(arg1 + 4)
        void* result_10 = result_1
        
        if (result_10 != 0)
            result_29 = result_10
        
        int32_t esi_27
        
        while (true)
            ebx_2.b = *result_29
            char temp51_1 = *edx_55
            bool c_16 = ebx_2.b u< temp51_1
            
            if (ebx_2.b == temp51_1)
                if (ebx_2.b == 0)
                    esi_27 = 0
                    break
                
                ebx_2.b = result_29[1]
                char temp52_1 = edx_55[1]
                c_16 = ebx_2.b u< temp52_1
                
                if (ebx_2.b == temp52_1)
                    result_29 = &result_29[2]
                    edx_55 = &edx_55[2]
                    
                    if (ebx_2.b != 0)
                        continue
                    
                    esi_27 = 0
                    break
            
            esi_27 = sbb.d(esi_25, esi_25, c_16) | 1
            break
        
        int32_t var_8_31 = 0x10
        
        if (data_aca1f4 != 0 && result_10 != 0 && *result_10 != 0)
            char* eax_62 = sub_48a080(&result_1)
            int32_t temp53_1 = *(eax_62 + 4)
            *(eax_62 + 4) -= 1
            
            if (temp53_1 == 1)
                sub_4984f0(eax_62, *(eax_62 + 0xc) + 0x10)
                result_1 = &data_5b2591
        
        int32_t var_8_32 = 0xffffffff
        
        if (esi_27 == 0)
            *(eax_37 + 0x14) = 2
            *(eax_37 + 0x18) = esi_27
            _strncpy(eax_37, "REQUIRED", 0x10)
            eax_37[0xf] = 0
            data_6d00b8 = 0
        
        sub_48a2c0(&result_1, "btnPlayer")
        void* result_30 = &data_5b2591
        char* edx_58 = *(arg1 + 4)
        void* result_11 = result_1
        
        if (result_11 != 0)
            result_30 = result_11
        
        int32_t esi_29
        
        while (true)
            ebx_2.b = *result_30
            char temp54_1 = *edx_58
            bool c_17 = ebx_2.b u< temp54_1
            
            if (ebx_2.b == temp54_1)
                if (ebx_2.b == 0)
                    esi_29 = 0
                    break
                
                ebx_2.b = *(result_30 + 1)
                char temp55_1 = edx_58[1]
                c_17 = ebx_2.b u< temp55_1
                
                if (ebx_2.b == temp55_1)
                    result_30 += 2
                    edx_58 = &edx_58[2]
                    
                    if (ebx_2.b != 0)
                        continue
                    
                    esi_29 = 0
                    break
            
            esi_29 = sbb.d(esi_27, esi_27, c_17) | 1
            break
        
        int32_t var_8_33 = 0x11
        
        if (data_aca1f4 != 0 && result_11 != 0 && *result_11 != 0)
            char* eax_64 = sub_48a080(&result_1)
            int32_t temp56_1 = *(eax_64 + 4)
            *(eax_64 + 4) -= 1
            
            if (temp56_1 == 1)
                sub_4984f0(eax_64, *(eax_64 + 0xc) + 0x10)
                result_1 = &data_5b2591
        
        int32_t var_8_34 = 0xffffffff
        
        if (esi_29 == 0)
            *(eax_37 + 0x10) = sub_427070(eax_3)
            *(eax_37 + 0x14) = 0x3e9
            _strncpy(eax_37, "_Player_", 0x10)
            eax_37[0xf] = 0
            data_6d00b8 = 0
        
        sub_48a2c0(&result_1, "btnProfile")
        void* result_31 = &data_5b2591
        char* edx_61 = *(arg1 + 4)
        void* result_12 = result_1
        
        if (result_12 != 0)
            result_31 = result_12
        
        char** esi_31
        
        while (true)
            ebx_2.b = *result_31
            char temp57_1 = *edx_61
            bool c_18 = ebx_2.b u< temp57_1
            
            if (ebx_2.b == temp57_1)
                if (ebx_2.b == 0)
                    esi_31 = nullptr
                    break
                
                ebx_2.b = *(result_31 + 1)
                char temp58_1 = edx_61[1]
                c_18 = ebx_2.b u< temp58_1
                
                if (ebx_2.b == temp58_1)
                    result_31 += 2
                    edx_61 = &edx_61[2]
                    
                    if (ebx_2.b != 0)
                        continue
                    
                    esi_31 = nullptr
                    break
            
            esi_31 = sbb.d(esi_29, esi_29, c_18) | 1
            break
        
        int32_t var_8_35 = 0x12
        
        if (data_aca1f4 != 0 && result_12 != 0 && *result_12 != 0)
            char* eax_67 = sub_48a080(&result_1)
            int32_t temp59_1 = *(eax_67 + 4)
            *(eax_67 + 4) -= 1
            
            if (temp59_1 == 1)
                sub_4984f0(eax_67, *(eax_67 + 0xc) + 0x10)
                result_1 = &data_5b2591
        
        int32_t var_8_36 = 0xffffffff
        
        if (esi_31 == 0)
            esi_31 = sub_437f10(*((*(arg1 + 8) << 2) + &data_6d00c0))
            *(eax_37 + 0x14) = 0x3e8
            char* edx_64 = &data_5b2591
            char* ecx_94 = *esi_31
            
            if (ecx_94 != 0)
                edx_64 = ecx_94
            
            _strncpy(eax_37, edx_64, 0x10)
            eax_37[0xf] = 0
            *(eax_37 + 0x10) = esi_31[2]
            *(eax_37 + 0x18) = esi_31[0x90]
            data_6d00b8 = 0
        
        sub_48a2c0(&result_1, "imgAddPlayerBg")
        result_2 = &data_5b2591
        void* result_32 = &data_5b2591
        char* edx_65 = *(arg1 + 4)
        void* result_13 = result_1
        
        if (result_13 != 0)
            result_32 = result_13
        
        int32_t esi_33
        
        while (true)
            ebx_2.b = *result_32
            char temp60_1 = *edx_65
            bool c_19 = ebx_2.b u< temp60_1
            
            if (ebx_2.b == temp60_1)
                if (ebx_2.b == 0)
                    esi_33 = 0
                    break
                
                ebx_2.b = *(result_32 + 1)
                char temp61_1 = edx_65[1]
                c_19 = ebx_2.b u< temp61_1
                
                if (ebx_2.b == temp61_1)
                    result_32 += 2
                    edx_65 = &edx_65[2]
                    
                    if (ebx_2.b != 0)
                        continue
                    
                    esi_33 = 0
                    break
            
            esi_33 = sbb.d(esi_31, esi_31, c_19) | 1
            break
        
        int32_t var_8_37 = 0x13
        
        if (data_aca1f4 != 0 && result_13 != 0 && *result_13 != 0)
            char* eax_74 = sub_48a080(&result_1)
            int32_t temp62_1 = *(eax_74 + 4)
            *(eax_74 + 4) -= 1
            
            if (temp62_1 == 1)
                sub_4984f0(eax_74, *(eax_74 + 0xc) + 0x10)
                result_1 = &data_5b2591
        
        int32_t var_8_38 = 0xffffffff
        char eax_75 = data_6d00b8
        
        if (esi_33 == 0)
            eax_75 = 0
        
        data_6d00b8 = eax_75
        sub_48a2c0(&result_1, "btnFriendList")
        void* result_33 = &data_5b2591
        char* edx_68 = *(arg1 + 4)
        void* result_14 = result_1
        
        if (result_14 != 0)
            result_33 = result_14
        
        int32_t esi_35
        
        while (true)
            ebx_2.b = *result_33
            char temp63_1 = *edx_68
            bool c_20 = ebx_2.b u< temp63_1
            
            if (ebx_2.b == temp63_1)
                if (ebx_2.b == 0)
                    esi_35 = 0
                    break
                
                ebx_2.b = *(result_33 + 1)
                char temp64_1 = edx_68[1]
                c_20 = ebx_2.b u< temp64_1
                
                if (ebx_2.b == temp64_1)
                    result_33 += 2
                    edx_68 = &edx_68[2]
                    
                    if (ebx_2.b != 0)
                        continue
                    
                    esi_35 = 0
                    break
            
            esi_35 = sbb.d(esi_33, esi_33, c_20) | 1
            break
        
        int32_t var_8_39 = 0x14
        
        if (data_aca1f4 != 0 && result_14 != 0 && *result_14 != 0)
            char* eax_77 = sub_48a080(&result_1)
            int32_t temp65_1 = *(eax_77 + 4)
            *(eax_77 + 4) -= 1
            
            if (temp65_1 == 1)
                sub_4984f0(eax_77, *(eax_77 + 0xc) + 0x10)
                result_1 = &data_5b2591
        
        int32_t var_8_40 = 0xffffffff
        
        if (esi_35 == 0)
            data_6d00b8 = 0
            data_62b2b0 = 1
            data_62b2b4 = esi_35
            data_62b220 = 8
        
        sub_48a2c0(&result_1, "btnRecentFriend")
        void* result_34 = &data_5b2591
        char* edx_71 = *(arg1 + 4)
        void* result_15 = result_1
        
        if (result_15 != 0)
            result_34 = result_15
        
        while (true)
            ebx_2.b = *result_34
            char temp66_1 = *edx_71
            bool c_21 = ebx_2.b u< temp66_1
            
            if (ebx_2.b == temp66_1)
                if (ebx_2.b == 0)
                    result_19 = nullptr
                    break
                
                ebx_2.b = *(result_34 + 1)
                char temp67_1 = edx_71[1]
                c_21 = ebx_2.b u< temp67_1
                
                if (ebx_2.b == temp67_1)
                    result_34 += 2
                    edx_71 = &edx_71[2]
                    
                    if (ebx_2.b != 0)
                        continue
                    
                    result_19 = nullptr
                    break
            
            result_19 = sbb.d(esi_35, esi_35, c_21) | 1
            break
        
        int32_t var_8_41 = 0x15
        
        if (data_aca1f4 != 0 && result_15 != 0 && *result_15 != 0)
            char* eax_79 = sub_48a080(&result_1)
            int32_t temp68_1 = *(eax_79 + 4)
            *(eax_79 + 4) -= 1
            
            if (temp68_1 == 1)
                sub_4984f0(eax_79, *(eax_79 + 0xc) + 0x10)
                result_1 = &data_5b2591
        
        int32_t var_8_42 = 0xffffffff
        
        if (result_19 == 0)
            int32_t esi_38 = data_6cfe4c
            int32_t ebx_3 = *(arg1 + 8)
            void* result_16 = data_6d00bc
            result_1 = result_16
            
            if (esi_38 == 0)
                sub_489550(result_16, &data_5b2591, "gClient", 
                    "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            void* eax_81 = sub_426fb0()
            char* ecx_104 = &data_5b2591
            void* edi_4 = result_1 * 0x2c + eax_81
            ebx_2 = (*((ebx_3 << 2) + &data_6d00c0) << 4) + esi_38
            result_19 = edi_4 + 8
            *(edi_4 + 0x18) = *(ebx_2 + 0x30)
            char* eax_83 = *(ebx_2 + 0x2c)
            
            if (eax_83 != 0)
                ecx_104 = eax_83
            
            _strncpy(result_19, ecx_104, 0x10)
            result_19[0xf] = 0
            *(edi_4 + 0x1c) = 1
            *(edi_4 + 0x20) = *(ebx_2 + 0x28)
            data_6d00b8 = 0
            result_2 = &data_5b2591
    sub_48a2c0(&result_1, "btnPlayerRemove")
    void* result_35 = &data_5b2591
    char* edx_74 = *(arg1 + 4)
    void* result_17 = result_1
    
    if (result_17 != 0)
        result_35 = result_17
    
    int32_t esi_39
    
    while (true)
        ebx_2.b = *result_35
        char temp22_1 = *edx_74
        bool c_22 = ebx_2.b u< temp22_1
        
        if (ebx_2.b == temp22_1)
            if (ebx_2.b == 0)
                esi_39 = 0
                break
            
            ebx_2.b = *(result_35 + 1)
            char temp24_1 = edx_74[1]
            c_22 = ebx_2.b u< temp24_1
            
            if (ebx_2.b == temp24_1)
                result_35 += 2
                edx_74 = &edx_74[2]
                
                if (ebx_2.b != 0)
                    continue
                
                esi_39 = 0
                break
        
        esi_39 = sbb.d(result_19, result_19, c_22) | 1
        break
    
    int32_t var_8_43 = 0x16
    
    if (data_aca1f4 != 0 && result_17 != 0 && *result_17 != 0)
        char* eax_86 = sub_48a080(&result_1)
        int32_t temp26_1 = *(eax_86 + 4)
        *(eax_86 + 4) -= 1
        
        if (temp26_1 == 1)
            sub_4984f0(eax_86, *(eax_86 + 0xc) + 0x10)
    
    int32_t var_8_44 = 0xffffffff
    
    if (esi_39 == 0)
        void* eax_88 = sub_427520(eax_3, *(arg1 + 8) + 1)
        data_6d00b8 = 0
        *(eax_88 + 0x14) = esi_39
    
    sub_48a2c0(&result_1, "btnTimer")
    char* ecx_110 = *(arg1 + 4)
    char* result = result_1
    
    if (result != 0)
        result_2 = result
    
    int32_t esi_41
    
    while (true)
        char edx_79 = *result_2
        char temp28_1 = *ecx_110
        bool c_23 = edx_79 u< temp28_1
        
        if (edx_79 == temp28_1)
            if (edx_79 == 0)
                esi_41 = 0
                break
            
            edx_79 = result_2[1]
            char temp30_1 = ecx_110[1]
            c_23 = edx_79 u< temp30_1
            
            if (edx_79 == temp30_1)
                result_2 = &result_2[2]
                ecx_110 = &ecx_110[2]
                
                if (edx_79 != 0)
                    continue
                
                esi_41 = 0
                break
        
        esi_41 = sbb.d(esi_39, esi_39, c_23) | 1
        break
    
    int32_t var_8_45 = 0x17
    
    if (data_aca1f4 != 0 && result != 0 && *result != 0)
        result = sub_48a080(&result_1)
        int32_t temp32_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp32_1 == 1)
            result = sub_4984f0(result, *(result + 0xc) + 0x10)
    
    if (esi_41 == 0)
        switch (*(eax_3 + 0xf8))
            case 0
                result = 4
            case 1
                result = 2
            case 2
                result = 3
            case 4
                result = 1
            default
                result = nullptr
        
        *(eax_3 + 0xf8) = result
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
