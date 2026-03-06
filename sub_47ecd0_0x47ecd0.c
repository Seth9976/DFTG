// 函数名称: sub_47ecd0
// 虚拟地址: 0x47ecd0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char*sub_47ecd0(int32_t arg1 @ esi, void* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59e1b0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ebx
    int32_t var_28 = ebx
    int32_t var_2c = arg1
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* const var_14
    sub_48a2c0(&var_14, "BtnBack")
    void* edi = arg2
    char* const ecx_1 = &data_5b2591
    char* eax_3 = var_14
    
    if (eax_3 != 0)
        ecx_1 = eax_3
    
    char* edx = *(edi + 4)
    int32_t ecx_3
    
    while (true)
        ebx.b = *ecx_1
        char temp0_1 = *edx
        bool c_1 = ebx.b u< temp0_1
        
        if (ebx.b == temp0_1)
            if (ebx.b == 0)
                ecx_3 = 0
                break
            
            ebx.b = ecx_1[1]
            char temp1_1 = edx[1]
            c_1 = ebx.b u< temp1_1
            
            if (ebx.b == temp1_1)
                ecx_1 = &ecx_1[2]
                edx = &edx[2]
                
                if (ebx.b != 0)
                    continue
                
                ecx_3 = 0
                break
        
        ecx_3 = sbb.d(ecx_1, ecx_1, c_1) | 1
        break
    
    if (ecx_3 == 0 || *(edi + 0x18) == 2)
        ebx.b = 1
    else
        ebx.b = 0
    
    int32_t var_8_1 = 0
    
    if (data_aca1f4 != 0 && eax_3 != 0 && *eax_3 != 0)
        eax_3 = sub_48a080(&var_14)
        int32_t temp2_1 = *(eax_3 + 4)
        *(eax_3 + 4) -= 1
        
        if (temp2_1 == 1)
            sub_4984f0(eax_3, *(eax_3 + 0xc) + 0x10)
            var_14 = &data_5b2591
    
    int32_t var_8_2 = 0xffffffff
    
    if (ebx.b != 0)
        eax_3.b = data_632840 == 0
        data_632840 = eax_3.b
        
        if (eax_3.b == 0)
            sub_4361a0(3)
        else
            data_62b220 = 0x24
    
    char* var_18
    sub_48a2c0(&var_18, "BtnRematch")
    char* eax_4 = var_18
    char* const ecx_7 = &data_5b2591
    char* edx_3 = *(edi + 4)
    
    if (eax_4 != 0)
        ecx_7 = eax_4
    
    void* esi
    
    while (true)
        ebx.b = *ecx_7
        char temp3_1 = *edx_3
        bool c_2 = ebx.b u< temp3_1
        
        if (ebx.b == temp3_1)
            if (ebx.b == 0)
                esi = nullptr
                break
            
            ebx.b = ecx_7[1]
            char temp4_1 = edx_3[1]
            c_2 = ebx.b u< temp4_1
            
            if (ebx.b == temp4_1)
                ecx_7 = &ecx_7[2]
                edx_3 = &edx_3[2]
                
                if (ebx.b != 0)
                    continue
                
                esi = nullptr
                break
        
        esi = sbb.d(arg1, arg1, c_2) | 1
        break
    
    int32_t var_8_3 = 1
    
    if (data_aca1f4 != 0 && eax_4 != 0 && *eax_4 != 0)
        char* eax_5 = sub_48a080(&var_18)
        int32_t temp5_1 = *(eax_5 + 4)
        *(eax_5 + 4) -= 1
        
        if (temp5_1 == 1)
            sub_4984f0(eax_5, *(eax_5 + 0xc) + 0x10)
            var_18 = &data_5b2591
    
    int32_t var_8_4 = 0xffffffff
    
    if (esi == 0)
        void* eax_6 = data_6cfe4c
        
        if (eax_6 == 0)
            sub_489550(eax_6, &data_5b2591, "gClient", 
                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        if (*(eax_6 + 0x834) != 2)
            *(eax_6 + 0x82c) = 7
        else
            void* edi_1 = *(eax_6 + 0x838)
            int32_t* eax_7 = sub_426880(eax_6 + 0x848, edi_1)
            eax_7[0x73] = 1
            int32_t var_20 = *eax_7
            void* eax_9 = data_6cfe4c
            
            if (eax_9 == 0)
                sub_489550(eax_9, &data_5b2591, "gClient", 
                    "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            if (*(eax_9 + 0x18) == 3)
                int32_t eax_10 = *(eax_9 + 0x14)
                void* ecx_11 = data_aca0dc
                
                if (eax_10 != 0)
                    uint32_t edx_6 = zx.d(eax_10.w)
                    
                    if (edx_6 u< *(ecx_11 + 4))
                        esi = edx_6 * 0x4c + *ecx_11
                        
                        if (*(esi + 0x48) == eax_10)
                            int32_t var_38_2 = 0xf42b0
                            sub_48be40(eax_10, 4, esi + 0x3c)
                            sub_48bc20(&var_20, 4, esi + 0x3c, &var_20)
            
            sub_42e140(edi_1)
            eax_6 = data_6cfe4c
            
            if (eax_6 == 0)
                sub_489550(eax_6, &data_5b2591, "gClient", 
                    "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            edi = arg2
            *(eax_6 + 0x82c) = 5
        
        eax_6.b = data_632840 == 0
        data_632840 = eax_6.b
        
        if (eax_6.b == 0)
            sub_4361a0(3)
        else
            data_62b220 = 0x24
    
    char* result_1
    sub_48a2c0(&result_1, "BtnMenu")
    char* result_3 = result_1
    char* const result_4 = &data_5b2591
    char* edx_7 = *(edi + 4)
    
    if (result_3 != 0)
        result_4 = result_3
    
    void* esi_3
    
    while (true)
        ebx.b = *result_4
        char temp6_1 = *edx_7
        bool c_3 = ebx.b u< temp6_1
        
        if (ebx.b == temp6_1)
            if (ebx.b == 0)
                esi_3 = nullptr
                break
            
            ebx.b = result_4[1]
            char temp7_1 = edx_7[1]
            c_3 = ebx.b u< temp7_1
            
            if (ebx.b == temp7_1)
                result_4 = &result_4[2]
                edx_7 = &edx_7[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_3 = nullptr
                break
        
        esi_3 = sbb.d(esi, esi, c_3) | 1
        break
    
    int32_t var_8_5 = 2
    
    if (data_aca1f4 != 0 && result_3 != 0 && *result_3 != 0)
        result_3 = sub_48a080(&result_1)
        int32_t temp8_1 = *(result_3 + 4)
        *(result_3 + 4) -= 1
        
        if (temp8_1 == 1)
            result_3 = sub_4984f0(result_3, *(result_3 + 0xc) + 0x10)
            result_1 = &data_5b2591
    
    int32_t var_8_6 = 0xffffffff
    void* var_24
    
    if (esi_3 == 0)
        esi_3 = data_6cfe4c
        
        if (esi_3 == 0)
            sub_489550(result_3, &data_5b2591, "gClient", 
                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        void* eax_12 = data_632804
        
        if (*(*(esi_3 + 0xa68) * 0x1bc + eax_12 + 0x1a4) != 0)
            eax_12 = sub_437f10(*(data_6d00d8 + 0xbe4))
            var_24 = eax_12
            
            if (*(eax_12 + 0x250) != 3)
                ebx = 0
                void* esi_5 = eax_12 + 0x298
                
                for (int32_t i = 0; i s< 4; )
                    int32_t eax_13 = sub_42a2b0()
                    void* eax_15
                    
                    if (eax_13 == 0)
                        eax_15 = esi_5
                    else
                        if (eax_13 - 1 u> 2)
                            sub_489550(eax_13 - 1, &data_5b2591, "Halt", 
                                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", 0x98f, 
                                "CountTotalWins")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_489700()
                            noreturn
                        
                        eax_15 = esi_5 + 0x30
                    
                    i += 1
                    ebx += *eax_15
                    esi_5 += 4
                
                void* esi_6 = var_24
                int32_t ecx_21 = *(esi_6 + 0x24c)
                int32_t eax_17 = ecx_21 * 2
                int32_t edx_10 = ecx_21 + 3
                
                if (edx_10 s<= eax_17)
                    edx_10 = eax_17
                
                int32_t eax_18 = ecx_21 + 0xf
                
                if (edx_10 s< eax_18)
                    eax_18 = edx_10
                
                if (ebx s>= eax_18)
                    sub_4894d0("Try request review")
                    data_63c5fc = 0xffffffff
                
                *(esi_6 + 0x24c) = ebx
                eax_12 = sub_437ba0(data_6d00d8)
                esi_3 = data_6cfe4c
                edi = arg2
        
        if (esi_3 == 0)
            sub_489550(eax_12, &data_5b2591, "gClient", 
                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        if (*(esi_3 + 0x834) != 2)
            *(sub_437f10(*(data_6d00d8 + 0xbe4)) + 0x244) = 0
            sub_437ba0(data_6d00d8)
        else
            sub_42e140(*(esi_3 + 0x838))
        
        void* eax_20 = data_6cfe4c
        
        if (eax_20 == 0)
            sub_489550(eax_20, &data_5b2591, "gClient", 
                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        *(eax_20 + 0x82c) = 5
    
    sub_48a2c0(&result_1, "btn_addFriend")
    char* result = result_1
    char* result_2 = &data_5b2591
    char* edx_11 = *(edi + 4)
    
    if (result != 0)
        result_2 = result
    
    int32_t esi_7
    
    while (true)
        ebx.b = *result_2
        char temp9_1 = *edx_11
        bool c_4 = ebx.b u< temp9_1
        
        if (ebx.b == temp9_1)
            if (ebx.b == 0)
                esi_7 = 0
                break
            
            ebx.b = result_2[1]
            char temp10_1 = edx_11[1]
            c_4 = ebx.b u< temp10_1
            
            if (ebx.b == temp10_1)
                result_2 = &result_2[2]
                edx_11 = &edx_11[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_7 = 0
                break
        
        esi_7 = sbb.d(esi_3, esi_3, c_4) | 1
        break
    
    int32_t var_8_7 = 3
    
    if (data_aca1f4 != 0 && result != 0 && *result != 0)
        result = sub_48a080(&result_1)
        int32_t temp11_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp11_1 == 1)
            result = sub_4984f0(result, *(result + 0xc) + 0x10)
            result_1 = &data_5b2591
    
    int32_t var_8_8 = 0xffffffff
    
    if (esi_7 == 0)
        int32_t eax_21 = sub_425f70(*(edi + 8))
        void* eax_23 = sub_425fe0(&sub_425de0()[2], eax_21)
        void* eax_24 = sub_436d30(eax_23)
        
        if (eax_24.b == 0)
            sub_489550(eax_24, &data_5b2591, "GameCanAddFriend(playerConfig)", 
                "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 0x8865, "RollScorescreenClick")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        var_24 = *(eax_23 + 0x18)
        result = data_6cfe4c
        
        if (result == 0)
            sub_489550(result, &data_5b2591, "gClient", 
                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        if (*(result + 0x18) == 3)
            result = *(result + 0x14)
            void* ecx_33 = data_aca0dc
            
            if (result != 0)
                uint32_t edx_15 = zx.d(result.w)
                
                if (edx_15 u< *(ecx_33 + 4))
                    void* esi_12 = edx_15 * 0x4c + *ecx_33
                    
                    if (*(esi_12 + 0x48) == result)
                        int32_t var_38_3 = 0xf42aa
                        sub_48be40(result, 4, esi_12 + 0x3c)
                        result = sub_48bc20(&var_24, 4, esi_12 + 0x3c, &var_24)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
