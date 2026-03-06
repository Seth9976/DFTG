// 函数名称: sub_463080
// 虚拟地址: 0x463080
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*sub_463080(void* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59dddf
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_18 = 0
    char* const var_1c
    sub_48a2c0(&var_1c, "btn_zoomSettle")
    void* edi = arg1
    char* const eax_3 = &data_5b2591
    int32_t var_8_1 = 0
    char* esi = var_1c
    int32_t var_18_1 = 1
    char* ecx_1 = *(edi + 4)
    
    if (esi != 0)
        eax_3 = esi
    
    void* eax_5
    
    while (true)
        char edx_1 = *eax_3
        char temp0_1 = *ecx_1
        bool c_1 = edx_1 u< temp0_1
        
        if (edx_1 == temp0_1)
            if (edx_1 == 0)
                eax_5 = nullptr
                break
            
            edx_1 = eax_3[1]
            char temp1_1 = ecx_1[1]
            c_1 = edx_1 u< temp1_1
            
            if (edx_1 == temp1_1)
                eax_3 = &eax_3[2]
                ecx_1 = &ecx_1[2]
                
                if (edx_1 != 0)
                    continue
                
                eax_5 = nullptr
                break
        
        eax_5 = sbb.d(eax_3, eax_3, c_1) | 1
        break
    
    int32_t ebx
    
    if (eax_5 != 0)
        ebx.b = 0
    else
        eax_5 = sub_454100(nullptr)
        
        if (eax_5.b != 0)
            ebx.b = 0
        else
            ebx.b = 1
    
    int32_t var_18_2 = 0
    int32_t var_8_2 = 1
    
    if (data_aca1f4 != 0 && esi != 0 && *esi != 0)
        eax_5 = sub_48a080(&var_1c)
        int32_t temp2_1 = *(eax_5 + 4)
        *(eax_5 + 4) -= 1
        
        if (temp2_1 == 1)
            eax_5 = sub_4984f0(eax_5, *(eax_5 + 0xc) + 0x10)
            var_1c = &data_5b2591
    
    int32_t var_8_3 = 0xffffffff
    
    if (ebx.b != 0)
        void* ecx_4 = data_6cfe4c
        
        if (ecx_4 == 0)
            sub_489550(eax_5, &data_5b2591, "gClient", 
                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        void* eax_6 = sub_452b90(*(ecx_4 + 0xa68))
        
        if (data_632590 != 6)
        label_4631bf:
            int32_t i = sub_453650(eax_6)
            
            if (i != 0x17)
            label_4631f4:
                void* ecx_8 = data_6cfe4c
                
                if (ecx_8 == 0)
                    sub_489550(i, &data_5b2591, "gClient", 
                        "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                sub_462d70(*(ecx_8 + 0xa68), 5)
                data_6327d4 = 0xffffffff
            else
                i = *(eax_6 + 0x2cc)
                int32_t esi_2 = 0
                
                if (i == 0)
                    goto label_4631f4
                
                do
                    esi_2 += 1
                    i = *(sub_452d50(i) + 0x20)
                while (i != 0)
                
                if (esi_2 == 0)
                    goto label_4631f4
                
                *(eax_6 + 0x10) = 9
                *(eax_6 + 0x14) = i.b
        else
            int32_t i_1 = *(eax_6 + 0x2cc)
            int32_t esi_1 = 0
            
            if (i_1 == 0)
                goto label_4631bf
            
            do
                esi_1 += 1
                i_1 = *(sub_452d50(i_1) + 0x20)
            while (i_1 != 0)
            
            if (esi_1 == 0)
                goto label_4631bf
            
            *(eax_6 + 0x10) = 4
            *(eax_6 + 0x14) = i_1.b
        
        edi = arg1
    
    sub_48a2c0(&var_1c, "btn_zoomDev")
    int32_t var_8_4 = 2
    char* const eax_9 = &data_5b2591
    char* const esi_3 = var_1c
    char* ecx_11 = *(edi + 4)
    int32_t var_18_3 = 2
    
    if (esi_3 != 0)
        eax_9 = esi_3
    
    void* eax_11
    
    while (true)
        char edx_4 = *eax_9
        char temp3_1 = *ecx_11
        bool c_2 = edx_4 u< temp3_1
        
        if (edx_4 == temp3_1)
            if (edx_4 == 0)
                eax_11 = nullptr
                break
            
            edx_4 = eax_9[1]
            char temp4_1 = ecx_11[1]
            c_2 = edx_4 u< temp4_1
            
            if (edx_4 == temp4_1)
                eax_9 = &eax_9[2]
                ecx_11 = &ecx_11[2]
                
                if (edx_4 != 0)
                    continue
                
                eax_11 = nullptr
                break
        
        eax_11 = sbb.d(eax_9, eax_9, c_2) | 1
        break
    
    if (eax_11 != 0)
        ebx.b = 0
    else
        eax_11 = sub_454100(nullptr)
        
        if (eax_11.b != 0)
            ebx.b = 0
        else
            ebx.b = 1
    
    int32_t var_18_4 = 0
    int32_t var_8_5 = 3
    
    if (data_aca1f4 != 0 && esi_3 != 0 && *esi_3 != 0)
        eax_11 = sub_48a080(&var_1c)
        int32_t temp5_1 = *(eax_11 + 4)
        *(eax_11 + 4) -= 1
        
        if (temp5_1 == 1)
            eax_11 = sub_4984f0(eax_11, *(eax_11 + 0xc) + 0x10)
            var_1c = &data_5b2591
    
    int32_t var_8_6 = 0xffffffff
    
    if (ebx.b != 0)
        void* ecx_14 = data_6cfe4c
        
        if (ecx_14 == 0)
            sub_489550(eax_11, &data_5b2591, "gClient", 
                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        void* eax_12 = sub_452b90(*(ecx_14 + 0xa68))
        
        if (data_632590 != 6)
        label_46332f:
            int32_t i_2 = sub_453650(eax_12)
            
            if (i_2 != 0x17)
            label_463364:
                void* ecx_18 = data_6cfe4c
                
                if (ecx_18 == 0)
                    sub_489550(i_2, &data_5b2591, "gClient", 
                        "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                sub_462d70(*(ecx_18 + 0xa68), 4)
                data_6327d4 = 0xffffffff
            else
                i_2 = *(eax_12 + 0x2c8)
                esi_3 = nullptr
                
                if (i_2 == 0)
                    goto label_463364
                
                do
                    esi_3 = &esi_3[1]
                    i_2 = *(sub_452d50(i_2) + 0x20)
                while (i_2 != 0)
                
                if (esi_3 == 0)
                    goto label_463364
                
                *(eax_12 + 0x10) = 8
                *(eax_12 + 0x14) = i_2.b
        else
            int32_t i_3 = *(eax_12 + 0x2c8)
            esi_3 = nullptr
            
            if (i_3 == 0)
                goto label_46332f
            
            do
                esi_3 = &esi_3[1]
                i_3 = *(sub_452d50(i_3) + 0x20)
            while (i_3 != 0)
            
            if (esi_3 == 0)
                goto label_46332f
            
            *(eax_12 + 0x10) = 3
            *(eax_12 + 0x14) = i_3.b
        
        sub_46a420(4)
        edi = arg1
    
    sub_48a2c0(&var_1c, "btn_zoomCup")
    char* const eax_15 = var_1c
    char* const ecx_21 = &data_5b2591
    char* edx_7 = *(edi + 4)
    
    if (eax_15 != 0)
        ecx_21 = eax_15
    
    void* esi_4
    
    while (true)
        ebx.b = *ecx_21
        char temp6_1 = *edx_7
        bool c_3 = ebx.b u< temp6_1
        
        if (ebx.b == temp6_1)
            if (ebx.b == 0)
                esi_4 = nullptr
                break
            
            ebx.b = ecx_21[1]
            char temp7_1 = edx_7[1]
            c_3 = ebx.b u< temp7_1
            
            if (ebx.b == temp7_1)
                ecx_21 = &ecx_21[2]
                edx_7 = &edx_7[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_4 = nullptr
                break
        
        esi_4 = sbb.d(esi_3, esi_3, c_3) | 1
        break
    
    int32_t var_8_7 = 4
    
    if (data_aca1f4 != 0 && eax_15 != 0 && *eax_15 != 0)
        eax_15 = sub_48a080(&var_1c)
        int32_t temp8_1 = *(eax_15 + 4)
        *(eax_15 + 4) -= 1
        
        if (temp8_1 == 1)
            eax_15 = sub_4984f0(eax_15, *(eax_15 + 0xc) + 0x10)
            var_1c = &data_5b2591
    
    int32_t var_8_8 = 0xffffffff
    
    if (esi_4 == 0)
        void* ecx_24 = data_6cfe4c
        
        if (ecx_24 == 0)
            sub_489550(eax_15, &data_5b2591, "gClient", 
                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        esi_4 = sub_452b90(*(ecx_24 + 0xa68))
        
        if (data_632590 != 6)
            if (sub_453650(esi_4) == 0x17)
                *(esi_4 + 0x10) = 7
                *(esi_4 + 0x14) = 0
        else
            *(esi_4 + 0x10) = 2
            *(esi_4 + 0x14) = 0
    
    sub_48a2c0(&var_1c, "btn_zoomScore")
    char* const eax_18 = var_1c
    char* const ecx_28 = &data_5b2591
    char* edx_10 = *(edi + 4)
    
    if (eax_18 != 0)
        ecx_28 = eax_18
    
    int32_t esi_6
    
    while (true)
        ebx.b = *ecx_28
        char temp9_1 = *edx_10
        bool c_4 = ebx.b u< temp9_1
        
        if (ebx.b == temp9_1)
            if (ebx.b == 0)
                esi_6 = 0
                break
            
            ebx.b = ecx_28[1]
            char temp10_1 = edx_10[1]
            c_4 = ebx.b u< temp10_1
            
            if (ebx.b == temp10_1)
                ecx_28 = &ecx_28[2]
                edx_10 = &edx_10[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_6 = 0
                break
        
        esi_6 = sbb.d(esi_4, esi_4, c_4) | 1
        break
    
    int32_t var_8_9 = 5
    
    if (data_aca1f4 != 0 && eax_18 != 0 && *eax_18 != 0)
        char* eax_19 = sub_48a080(&var_1c)
        int32_t temp11_1 = *(eax_19 + 4)
        *(eax_19 + 4) -= 1
        
        if (temp11_1 == 1)
            sub_4984f0(eax_19, *(eax_19 + 0xc) + 0x10)
            var_1c = &data_5b2591
    
    int32_t var_8_10 = 0xffffffff
    
    if (esi_6 == 0)
        data_632a44.b = data_632a44.b == 0
    
    sub_48a2c0(&var_1c, "btn_zoomCredits")
    char* const eax_20 = var_1c
    char* const ecx_32 = &data_5b2591
    char* edx_13 = *(edi + 4)
    
    if (eax_20 != 0)
        ecx_32 = eax_20
    
    int32_t esi_8
    
    while (true)
        ebx.b = *ecx_32
        char temp12_1 = *edx_13
        bool c_5 = ebx.b u< temp12_1
        
        if (ebx.b == temp12_1)
            if (ebx.b == 0)
                esi_8 = 0
                break
            
            ebx.b = ecx_32[1]
            char temp13_1 = edx_13[1]
            c_5 = ebx.b u< temp13_1
            
            if (ebx.b == temp13_1)
                ecx_32 = &ecx_32[2]
                edx_13 = &edx_13[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_8 = 0
                break
        
        esi_8 = sbb.d(esi_6, esi_6, c_5) | 1
        break
    
    int32_t var_8_11 = 6
    
    if (data_aca1f4 != 0 && eax_20 != 0 && *eax_20 != 0)
        char* eax_21 = sub_48a080(&var_1c)
        int32_t temp14_1 = *(eax_21 + 4)
        *(eax_21 + 4) -= 1
        
        if (temp14_1 == 1)
            sub_4984f0(eax_21, *(eax_21 + 0xc) + 0x10)
            var_1c = &data_5b2591
    
    int32_t var_8_12 = 0xffffffff
    
    if (esi_8 == 0)
        data_632a44:1.b = data_632a44:1.b == 0
    
    sub_48a2c0(&var_1c, "btn_zoomCit")
    char* const eax_22 = var_1c
    char* const ecx_36 = &data_5b2591
    char* edx_16 = *(edi + 4)
    
    if (eax_22 != 0)
        ecx_36 = eax_22
    
    void* esi_10
    
    while (true)
        ebx.b = *ecx_36
        char temp15_1 = *edx_16
        bool c_6 = ebx.b u< temp15_1
        
        if (ebx.b == temp15_1)
            if (ebx.b == 0)
                esi_10 = nullptr
                break
            
            ebx.b = ecx_36[1]
            char temp16_1 = edx_16[1]
            c_6 = ebx.b u< temp16_1
            
            if (ebx.b == temp16_1)
                ecx_36 = &ecx_36[2]
                edx_16 = &edx_16[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_10 = nullptr
                break
        
        esi_10 = sbb.d(esi_8, esi_8, c_6) | 1
        break
    
    int32_t var_8_13 = 7
    
    if (data_aca1f4 != 0 && eax_22 != 0 && *eax_22 != 0)
        eax_22 = sub_48a080(&var_1c)
        int32_t temp17_1 = *(eax_22 + 4)
        *(eax_22 + 4) -= 1
        
        if (temp17_1 == 1)
            eax_22 = sub_4984f0(eax_22, *(eax_22 + 0xc) + 0x10)
            var_1c = &data_5b2591
    
    int32_t var_8_14 = 0xffffffff
    
    if (esi_10 == 0)
        void* ecx_39 = data_6cfe4c
        
        if (ecx_39 == 0)
            sub_489550(eax_22, &data_5b2591, "gClient", 
                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        esi_10 = sub_452b90(*(ecx_39 + 0xa68))
        
        if (data_632590 != 6)
            if (sub_453650(esi_10) == 0x17)
                *(esi_10 + 0x10) = 6
                *(esi_10 + 0x14) = 0
        else
            *(esi_10 + 0x10) = 1
            *(esi_10 + 0x14) = 0
    
    sub_48a2c0(&var_1c, "btn_zoomTrays")
    char* const eax_25 = var_1c
    char* const ecx_43 = &data_5b2591
    char* edx_19 = *(edi + 4)
    
    if (eax_25 != 0)
        ecx_43 = eax_25
    
    void* esi_12
    
    while (true)
        ebx.b = *ecx_43
        char temp18_1 = *edx_19
        bool c_7 = ebx.b u< temp18_1
        
        if (ebx.b == temp18_1)
            if (ebx.b == 0)
                esi_12 = nullptr
                break
            
            ebx.b = ecx_43[1]
            char temp19_1 = edx_19[1]
            c_7 = ebx.b u< temp19_1
            
            if (ebx.b == temp19_1)
                ecx_43 = &ecx_43[2]
                edx_19 = &edx_19[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_12 = nullptr
                break
        
        esi_12 = sbb.d(esi_10, esi_10, c_7) | 1
        break
    
    int32_t var_8_15 = 8
    
    if (data_aca1f4 != 0 && eax_25 != 0 && *eax_25 != 0)
        eax_25 = sub_48a080(&var_1c)
        int32_t temp20_1 = *(eax_25 + 4)
        *(eax_25 + 4) -= 1
        
        if (temp20_1 == 1)
            eax_25 = sub_4984f0(eax_25, *(eax_25 + 0xc) + 0x10)
            var_1c = &data_5b2591
    
    int32_t var_8_16 = 0xffffffff
    
    if (esi_12 == 0)
        void* ecx_46 = data_6cfe4c
        
        if (ecx_46 == 0)
            sub_489550(eax_25, &data_5b2591, "gClient", 
                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        esi_12 = sub_452b90(*(ecx_46 + 0xa68))
        
        if (data_632590 != 6)
            if (sub_453650(esi_12) == 0x17)
                *(esi_12 + 0x10) = 0xa
                *(esi_12 + 0x14) = 0
        else
            *(esi_12 + 0x10) = 5
            *(esi_12 + 0x14) = 0
    
    sub_48a2c0(&var_1c, "btn_zoom_l")
    char* const eax_28 = var_1c
    char* const ecx_50 = &data_5b2591
    char* edx_22 = *(edi + 4)
    
    if (eax_28 != 0)
        ecx_50 = eax_28
    
    int32_t esi_14
    
    while (true)
        ebx.b = *ecx_50
        char temp21_1 = *edx_22
        bool c_8 = ebx.b u< temp21_1
        
        if (ebx.b == temp21_1)
            if (ebx.b == 0)
                esi_14 = 0
                break
            
            ebx.b = ecx_50[1]
            char temp22_1 = edx_22[1]
            c_8 = ebx.b u< temp22_1
            
            if (ebx.b == temp22_1)
                ecx_50 = &ecx_50[2]
                edx_22 = &edx_22[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_14 = 0
                break
        
        esi_14 = sbb.d(esi_12, esi_12, c_8) | 1
        break
    
    int32_t var_8_17 = 9
    
    if (data_aca1f4 != 0 && eax_28 != 0 && *eax_28 != 0)
        char* eax_29 = sub_48a080(&var_1c)
        int32_t temp23_1 = *(eax_29 + 4)
        *(eax_29 + 4) -= 1
        
        if (temp23_1 == 1)
            sub_4984f0(eax_29, *(eax_29 + 0xc) + 0x10)
            var_1c = &data_5b2591
    
    int32_t var_8_18 = 0xffffffff
    
    if (esi_14 == 0)
        sub_462e80(0xffffffff)
    
    sub_48a2c0(&var_1c, "btn_zoom_r")
    char* const eax_30 = var_1c
    char* const ecx_54 = &data_5b2591
    char* edx_25 = *(edi + 4)
    
    if (eax_30 != 0)
        ecx_54 = eax_30
    
    int32_t esi_16
    
    while (true)
        ebx.b = *ecx_54
        char temp24_1 = *edx_25
        bool c_9 = ebx.b u< temp24_1
        
        if (ebx.b == temp24_1)
            if (ebx.b == 0)
                esi_16 = 0
                break
            
            ebx.b = ecx_54[1]
            char temp25_1 = edx_25[1]
            c_9 = ebx.b u< temp25_1
            
            if (ebx.b == temp25_1)
                ecx_54 = &ecx_54[2]
                edx_25 = &edx_25[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_16 = 0
                break
        
        esi_16 = sbb.d(esi_14, esi_14, c_9) | 1
        break
    
    int32_t var_8_19 = 0xa
    
    if (data_aca1f4 != 0 && eax_30 != 0 && *eax_30 != 0)
        char* eax_31 = sub_48a080(&var_1c)
        int32_t temp26_1 = *(eax_31 + 4)
        *(eax_31 + 4) -= 1
        
        if (temp26_1 == 1)
            sub_4984f0(eax_31, *(eax_31 + 0xc) + 0x10)
            var_1c = &data_5b2591
    
    int32_t var_8_20 = 0xffffffff
    
    if (esi_16 == 0)
        sub_462e80(esi_16 + 1)
    
    sub_48a2c0(&var_1c, "btn_zoom_action")
    char* const eax_32 = var_1c
    char* const ecx_59 = &data_5b2591
    char* edx_28 = *(edi + 4)
    
    if (eax_32 != 0)
        ecx_59 = eax_32
    
    int32_t esi_18
    
    while (true)
        ebx.b = *ecx_59
        char temp27_1 = *edx_28
        bool c_10 = ebx.b u< temp27_1
        
        if (ebx.b == temp27_1)
            if (ebx.b == 0)
                esi_18 = 0
                break
            
            ebx.b = ecx_59[1]
            char temp28_1 = edx_28[1]
            c_10 = ebx.b u< temp28_1
            
            if (ebx.b == temp28_1)
                ecx_59 = &ecx_59[2]
                edx_28 = &edx_28[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_18 = 0
                break
        
        esi_18 = sbb.d(esi_16, esi_16, c_10) | 1
        break
    
    int32_t var_8_21 = 0xb
    
    if (data_aca1f4 != 0 && eax_32 != 0 && *eax_32 != 0)
        eax_32 = sub_48a080(&var_1c)
        int32_t temp29_1 = *(eax_32 + 4)
        *(eax_32 + 4) -= 1
        
        if (temp29_1 == 1)
            eax_32 = sub_4984f0(eax_32, *(eax_32 + 0xc) + 0x10)
            var_1c = &data_5b2591
    
    int32_t var_8_22 = 0xffffffff
    
    if (esi_18 == 0)
        void* ecx_62 = data_6cfe4c
        
        if (ecx_62 == 0)
            sub_489550(eax_32, &data_5b2591, "gClient", 
                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        void* eax_33 = sub_452b90(*(ecx_62 + 0xa68))
        int32_t* eax_34 = sub_452cc0((&data_632598)[data_6327d0])
        void* eax_35 = sub_453650(eax_33)
        
        if (eax_35 != 1)
            void* eax_42 = sub_453650(eax_33)
            
            if (eax_42 == 0xd)
            label_463aa1:
                
                if (*eax_34 != 0)
                    sub_489550(eax_42, &data_5b2591, "gfx.type == ROLLGFX_TILE", 
                        "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 0x4091, 
                        "TileCanSwapDevSettle")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                void* ecx_77 = data_6cfe4c
                
                if (ecx_77 == 0)
                    sub_489550(eax_42, &data_5b2591, "gClient", 
                        "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                eax_42 = sub_452b90(*(ecx_77 + 0xa68))
                int32_t ecx_79 = 0
                int32_t edx_35 = *(eax_42 + 0x4cc)
                
                if (edx_35 s<= 0)
                    goto label_463ae3
                
                eax_42 += 0x33c
                
                while (true)
                    if (*eax_42 == eax_34[0x11])
                        if (eax_34[0xd] != 4)
                            if (eax_34[0xe] != 0)
                                void* eax_46 = data_6cfe4c
                                
                                if (eax_46 == 0)
                                    sub_489550(eax_46, &data_5b2591, "gClient", 
                                        "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 
                                        0x75, "GetClient")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_489700()
                                    noreturn
                                
                                if (eax_34[0xf] == *(eax_46 + 0xa68))
                                    data_126be64
                                    sub_4c5ce0()
                                
                                eax_42 = sub_46a420(6)
                                eax_34[0xe] = 0
                                eax_34[0x223] = 0x3f800000
                                eax_34[0x224].b = 1
                            
                            sub_455280(eax_42, eax_34, eax_33, 4, 3, 1)
                        else
                            if (eax_34[0xe] != 1)
                                void* eax_44 = data_6cfe4c
                                
                                if (eax_44 == 0)
                                    sub_489550(eax_44, &data_5b2591, "gClient", 
                                        "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 
                                        0x75, "GetClient")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_489700()
                                    noreturn
                                
                                if (eax_34[0xf] == *(eax_44 + 0xa68))
                                    data_126be64
                                    sub_4c5ce0()
                                
                                eax_42 = sub_46a420(6)
                                eax_34[0xe] = 1
                                eax_34[0x223] = 0
                                eax_34[0x224].b = 1
                            
                            sub_455280(eax_42, eax_34, eax_33, 5, 3, 1)
                        
                        break
                    
                    ecx_79 += 1
                    eax_42 += 4
                    
                    if (ecx_79 s>= edx_35)
                        goto label_463ae3
            else
                eax_42 = sub_453650(eax_33)
                
                if (eax_42 == 0xb)
                    goto label_463aa1
                
            label_463ae3:
                int32_t ecx_80 = eax_34[0xe]
                
                if (ecx_80 == 0 || ecx_80 == 1)
                    eax_42.b = *(eax_34 + 0x891) == 0
                    *(eax_34 + 0x891) = eax_42.b
                    void* eax_43 = data_6cfe4c
                    
                    if (ecx_80 != 0)
                        if (eax_43 == 0)
                            sub_489550(eax_43, &data_5b2591, "gClient", 
                                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, 
                                "GetClient")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_489700()
                            noreturn
                        
                        if (eax_34[0xf] == *(eax_43 + 0xa68))
                            data_126be64
                            sub_4c5ce0()
                        
                        sub_46a420(6)
                        eax_34[0xe] = 0
                        eax_34[0x223] = 0x3f800000
                    else
                        if (eax_43 == 0)
                            sub_489550(eax_43, &data_5b2591, "gClient", 
                                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, 
                                "GetClient")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_489700()
                            noreturn
                        
                        if (eax_34[0xf] == *(eax_43 + 0xa68))
                            data_126be64
                            sub_4c5ce0()
                        
                        sub_46a420(6)
                        eax_34[0xe] = 1
                        eax_34[0x223] = 0
                    
                    eax_34[0x224].b = 1
        else if (eax_34[0xd] != 4)
            if (eax_34[0xe] != 0)
                void* eax_39 = data_6cfe4c
                
                if (eax_39 == 0)
                    sub_489550(eax_39, &data_5b2591, "gClient", 
                        "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                if (eax_34[0xf] == *(eax_39 + 0xa68))
                    data_126be64
                    sub_4c5ce0()
                
                eax_35 = sub_46a420(6)
                eax_34[0xe] = 0
                eax_34[0x223] = 0x3f800000
                eax_34[0x224].b = 1
            
            sub_455120(eax_35, eax_34, eax_33, 4, 0, 1)
            int32_t* eax_41 = sub_454aa0(eax_34)
            int32_t* esi_22 = eax_41
            
            if (esi_22[0xe] != 1)
                if (data_6cfe4c == 0)
                    sub_489550(eax_41, &data_5b2591, "gClient", 
                        "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                eax_41 = sub_46a420(6)
                esi_22[0xe] = 1
                esi_22[0x223] = 0x3f800000
            
            sub_4554e0(eax_41, esi_22, eax_33, 5, 0, 5, 1, 0, 0)
        else
            if (eax_34[0xe] != eax_35)
                void* eax_36 = data_6cfe4c
                
                if (eax_36 == 0)
                    sub_489550(eax_36, &data_5b2591, "gClient", 
                        "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                if (eax_34[0xf] == *(eax_36 + 0xa68))
                    data_126be64
                    sub_4c5ce0()
                
                eax_35 = sub_46a420(6)
                eax_34[0xe] = 1
                eax_34[0x223] = 0
                eax_34[0x224].b = 1
            
            sub_455120(eax_35, eax_34, eax_33, 5, 0, 1)
            int32_t* eax_38 = sub_454aa0(eax_34)
            int32_t* esi_21 = eax_38
            
            if (esi_21[0xe] != 0)
                if (data_6cfe4c == 0)
                    sub_489550(eax_38, &data_5b2591, "gClient", 
                        "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                eax_38 = sub_46a420(6)
                esi_21[0xe] = 0
                esi_21[0x223] = 0
            
            sub_4554e0(eax_38, esi_21, eax_33, 4, 0, 5, 1, 0, 0)
        
        edi = arg1
    
    sub_48a2c0(&var_1c, "btn_zoom")
    int32_t var_8_23 = 0xc
    char* const eax_50 = &data_5b2591
    char* const esi_23 = var_1c
    char* ecx_88 = *(edi + 4)
    int32_t var_18_5 = 4
    
    if (esi_23 != 0)
        eax_50 = esi_23
    
    int32_t eax_52
    
    while (true)
        char edx_38 = *eax_50
        char temp30_1 = *ecx_88
        bool c_11 = edx_38 u< temp30_1
        
        if (edx_38 == temp30_1)
            if (edx_38 == 0)
                eax_52 = 0
                break
            
            edx_38 = eax_50[1]
            char temp31_1 = ecx_88[1]
            c_11 = edx_38 u< temp31_1
            
            if (edx_38 == temp31_1)
                eax_50 = &eax_50[2]
                ecx_88 = &ecx_88[2]
                
                if (edx_38 != 0)
                    continue
                
                eax_52 = 0
                break
        
        eax_52 = sbb.d(eax_50, eax_50, c_11) | 1
        break
    
    char eax_53
    
    if (eax_52 == 0)
        eax_53 = sub_454090()
    
    if (eax_52 != 0 || eax_53 != 0)
        ebx.b = 0
    else
        ebx.b = 1
    
    int32_t var_8_24 = 0xd
    
    if (data_aca1f4 != 0 && esi_23 != 0 && *esi_23 != 0)
        char* eax_54 = sub_48a080(&var_1c)
        int32_t temp32_1 = *(eax_54 + 4)
        *(eax_54 + 4) -= 1
        
        if (temp32_1 == 1)
            sub_4984f0(eax_54, *(eax_54 + 0xc) + 0x10)
            var_1c = &data_5b2591
    
    int32_t var_8_25 = 0xffffffff
    
    if (ebx.b != 0)
        int32_t eax_56 = *(edi + 8) + 1
        
        if (data_6327d4 != eax_56)
            data_126bd84
            data_6327d4 = eax_56
            sub_4c5ce0()
            sub_46a490(5, 0)
        else
            sub_4561d0()
    
    sub_48a2c0(&var_1c, "btn_zoomOppDev")
    int32_t var_8_26 = 0xe
    char* const eax_57 = &data_5b2591
    char* const esi_24 = var_1c
    char* ecx_93 = *(edi + 4)
    int32_t var_18_6 = 8
    
    if (esi_24 != 0)
        eax_57 = esi_24
    
    int32_t eax_59
    
    while (true)
        char edx_41 = *eax_57
        char temp33_1 = *ecx_93
        bool c_12 = edx_41 u< temp33_1
        
        if (edx_41 == temp33_1)
            if (edx_41 == 0)
                eax_59 = 0
                break
            
            edx_41 = eax_57[1]
            char temp34_1 = ecx_93[1]
            c_12 = edx_41 u< temp34_1
            
            if (edx_41 == temp34_1)
                eax_57 = &eax_57[2]
                ecx_93 = &ecx_93[2]
                
                if (edx_41 != 0)
                    continue
                
                eax_59 = 0
                break
        
        eax_59 = sbb.d(eax_57, eax_57, c_12) | 1
        break
    
    char eax_60
    
    if (eax_59 == 0)
        eax_60 = sub_454100(nullptr)
    
    if (eax_59 != 0 || eax_60 != 0)
        ebx.b = 0
    else
        ebx.b = 1
    
    int32_t var_8_27 = 0xf
    
    if (data_aca1f4 != 0 && esi_24 != 0 && *esi_24 != 0)
        char* eax_61 = sub_48a080(&var_1c)
        int32_t temp35_1 = *(eax_61 + 4)
        *(eax_61 + 4) -= 1
        
        if (temp35_1 == 1)
            sub_4984f0(eax_61, *(eax_61 + 0xc) + 0x10)
            var_1c = &data_5b2591
    
    int32_t var_8_28 = 0xffffffff
    
    if (ebx.b != 0)
        void* eax_63 = sub_452b90(sub_425f70(*(edi + 8) + 1))
        
        if (*(eax_63 + 0x2ac) != 0)
            int32_t* eax_64 = sub_453010(eax_63, 4)
            
            if (eax_64 != 0)
                eax_64 = sub_452cc0(eax_64)
            
            sub_4564b0(eax_64)
    
    sub_48a2c0(&var_1c, "btn_zoomOppSettle")
    int32_t var_8_29 = 0x10
    char* const eax_65 = &data_5b2591
    char* const esi_25 = var_1c
    char* ecx_103 = *(edi + 4)
    int32_t var_18_7 = 0x10
    
    if (esi_25 != 0)
        eax_65 = esi_25
    
    int32_t eax_67
    
    while (true)
        char edx_44 = *eax_65
        char temp36_1 = *ecx_103
        bool c_13 = edx_44 u< temp36_1
        
        if (edx_44 == temp36_1)
            if (edx_44 == 0)
                eax_67 = 0
                break
            
            edx_44 = eax_65[1]
            char temp37_1 = ecx_103[1]
            c_13 = edx_44 u< temp37_1
            
            if (edx_44 == temp37_1)
                eax_65 = &eax_65[2]
                ecx_103 = &ecx_103[2]
                
                if (edx_44 != 0)
                    continue
                
                eax_67 = 0
                break
        
        eax_67 = sbb.d(eax_65, eax_65, c_13) | 1
        break
    
    char eax_68
    
    if (eax_67 == 0)
        eax_68 = sub_454100(nullptr)
    
    if (eax_67 != 0 || eax_68 != 0)
        ebx.b = 0
    else
        ebx.b = 1
    
    int32_t var_8_30 = 0x11
    
    if (data_aca1f4 != 0 && esi_25 != 0 && *esi_25 != 0)
        char* eax_69 = sub_48a080(&var_1c)
        int32_t temp38_1 = *(eax_69 + 4)
        *(eax_69 + 4) -= 1
        
        if (temp38_1 == 1)
            sub_4984f0(eax_69, *(eax_69 + 0xc) + 0x10)
            var_1c = &data_5b2591
    
    int32_t var_8_31 = 0xffffffff
    
    if (ebx.b != 0)
        void* eax_71 = sub_452b90(sub_425f70(*(edi + 8) + 1))
        
        if (*(eax_71 + 0x2b0) != 0)
            int32_t* eax_72 = sub_453010(eax_71, 5)
            
            if (eax_72 != 0)
                eax_72 = sub_452cc0(eax_72)
            
            sub_4564b0(eax_72)
    
    sub_48a2c0(&var_1c, "btn_zoom_dismiss")
    int32_t var_8_32 = 0x12
    char* const eax_73 = &data_5b2591
    char* const esi_26 = var_1c
    char* ecx_113 = *(edi + 4)
    int32_t var_18_8 = 0x20
    
    if (esi_26 != 0)
        eax_73 = esi_26
    
    int32_t eax_75
    
    while (true)
        char edx_47 = *eax_73
        char temp39_1 = *ecx_113
        bool c_14 = edx_47 u< temp39_1
        
        if (edx_47 == temp39_1)
            if (edx_47 == 0)
                eax_75 = 0
                break
            
            edx_47 = eax_73[1]
            char temp40_1 = ecx_113[1]
            c_14 = edx_47 u< temp40_1
            
            if (edx_47 == temp40_1)
                eax_73 = &eax_73[2]
                ecx_113 = &ecx_113[2]
                
                if (edx_47 != 0)
                    continue
                
                eax_75 = 0
                break
        
        eax_75 = sbb.d(eax_73, eax_73, c_14) | 1
        break
    
    char eax_76
    
    if (eax_75 == 0)
        eax_76 = sub_454100(nullptr)
    
    if (eax_75 != 0 || eax_76 != 0)
        ebx.b = 0
    else
        ebx.b = 1
    
    int32_t var_8_33 = 0x13
    
    if (data_aca1f4 != 0 && esi_26 != 0 && *esi_26 != 0)
        char* eax_77 = sub_48a080(&var_1c)
        int32_t temp41_1 = *(eax_77 + 4)
        *(eax_77 + 4) -= 1
        
        if (temp41_1 == 1)
            sub_4984f0(eax_77, *(eax_77 + 0xc) + 0x10)
            var_1c = &data_5b2591
    
    int32_t var_8_34 = 0xffffffff
    
    if (ebx.b != 0)
        sub_4561d0()
    
    sub_48a2c0(&var_1c, "btn_opponent_dismiss")
    int32_t var_8_35 = 0x14
    char* const eax_78 = &data_5b2591
    char* const esi_27 = var_1c
    char* ecx_117 = *(edi + 4)
    int32_t var_18_9 = 0x40
    
    if (esi_27 != 0)
        eax_78 = esi_27
    
    int32_t eax_80
    
    while (true)
        char edx_50 = *eax_78
        char temp42_1 = *ecx_117
        bool c_15 = edx_50 u< temp42_1
        
        if (edx_50 == temp42_1)
            if (edx_50 == 0)
                eax_80 = 0
                break
            
            edx_50 = eax_78[1]
            char temp43_1 = ecx_117[1]
            c_15 = edx_50 u< temp43_1
            
            if (edx_50 == temp43_1)
                eax_78 = &eax_78[2]
                ecx_117 = &ecx_117[2]
                
                if (edx_50 != 0)
                    continue
                
                eax_80 = 0
                break
        
        eax_80 = sbb.d(eax_78, eax_78, c_15) | 1
        break
    
    char eax_81
    
    if (eax_80 == 0)
        eax_81 = sub_454090()
    
    if (eax_80 != 0 || eax_81 != 0)
        ebx.b = 0
    else
        ebx.b = 1
    
    int32_t var_18_10 = 0
    int32_t var_8_36 = 0x15
    
    if (data_aca1f4 != 0 && esi_27 != 0 && *esi_27 != 0)
        char* eax_82 = sub_48a080(&var_1c)
        int32_t temp44_1 = *(eax_82 + 4)
        *(eax_82 + 4) -= 1
        
        if (temp44_1 == 1)
            sub_4984f0(eax_82, *(eax_82 + 0xc) + 0x10)
            var_1c = &data_5b2591
    
    int32_t var_8_37 = 0xffffffff
    
    if (ebx.b != 0)
        sub_4561d0()
    
    sub_48a2c0(&var_1c, "btn_construction_dismiss")
    char* const eax_83 = var_1c
    char* const ecx_121 = &data_5b2591
    char* edx_53 = *(edi + 4)
    
    if (eax_83 != 0)
        ecx_121 = eax_83
    
    int32_t esi_28
    
    while (true)
        ebx.b = *ecx_121
        char temp45_1 = *edx_53
        bool c_16 = ebx.b u< temp45_1
        
        if (ebx.b == temp45_1)
            if (ebx.b == 0)
                esi_28 = 0
                break
            
            ebx.b = ecx_121[1]
            char temp46_1 = edx_53[1]
            c_16 = ebx.b u< temp46_1
            
            if (ebx.b == temp46_1)
                ecx_121 = &ecx_121[2]
                edx_53 = &edx_53[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_28 = 0
                break
        
        esi_28 = sbb.d(esi_27, esi_27, c_16) | 1
        break
    
    int32_t var_8_38 = 0x16
    
    if (data_aca1f4 != 0 && eax_83 != 0 && *eax_83 != 0)
        char* eax_84 = sub_48a080(&var_1c)
        int32_t temp47_1 = *(eax_84 + 4)
        *(eax_84 + 4) -= 1
        
        if (temp47_1 == 1)
            sub_4984f0(eax_84, *(eax_84 + 0xc) + 0x10)
            var_1c = &data_5b2591
    
    int32_t var_8_39 = 0xffffffff
    
    if (esi_28 == 0)
        sub_4561d0()
    
    sub_48a2c0(&var_1c, "btn_cit_cup_dismiss")
    char* const eax_85 = var_1c
    char* const ecx_125 = &data_5b2591
    char* edx_56 = *(edi + 4)
    
    if (eax_85 != 0)
        ecx_125 = eax_85
    
    int32_t esi_30
    
    while (true)
        ebx.b = *ecx_125
        char temp48_1 = *edx_56
        bool c_17 = ebx.b u< temp48_1
        
        if (ebx.b == temp48_1)
            if (ebx.b == 0)
                esi_30 = 0
                break
            
            ebx.b = ecx_125[1]
            char temp49_1 = edx_56[1]
            c_17 = ebx.b u< temp49_1
            
            if (ebx.b == temp49_1)
                ecx_125 = &ecx_125[2]
                edx_56 = &edx_56[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_30 = 0
                break
        
        esi_30 = sbb.d(esi_28, esi_28, c_17) | 1
        break
    
    int32_t var_8_40 = 0x17
    
    if (data_aca1f4 != 0 && eax_85 != 0 && *eax_85 != 0)
        char* eax_86 = sub_48a080(&var_1c)
        int32_t temp50_1 = *(eax_86 + 4)
        *(eax_86 + 4) -= 1
        
        if (temp50_1 == 1)
            sub_4984f0(eax_86, *(eax_86 + 0xc) + 0x10)
            var_1c = &data_5b2591
    
    int32_t var_8_41 = 0xffffffff
    
    if (esi_30 == 0)
        sub_4561d0()
    
    if (*(edi + 0x18) == 2)
        char eax_87
        
        if (data_6326b0 != 0)
            eax_87 = sub_454100(nullptr)
        
        if (data_6326b0 == 0 || eax_87 != 0)
            data_62b220 = 0xf
        else
            sub_4561d0()
    
    sub_48a2c0(&var_1c, "btn_menu")
    char* const eax_88 = var_1c
    char* const ecx_129 = &data_5b2591
    char* edx_59 = *(edi + 4)
    
    if (eax_88 != 0)
        ecx_129 = eax_88
    
    int32_t esi_32
    
    while (true)
        ebx.b = *ecx_129
        char temp51_1 = *edx_59
        bool c_18 = ebx.b u< temp51_1
        
        if (ebx.b == temp51_1)
            if (ebx.b == 0)
                esi_32 = 0
                break
            
            ebx.b = ecx_129[1]
            char temp52_1 = edx_59[1]
            c_18 = ebx.b u< temp52_1
            
            if (ebx.b == temp52_1)
                ecx_129 = &ecx_129[2]
                edx_59 = &edx_59[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_32 = 0
                break
        
        esi_32 = sbb.d(esi_30, esi_30, c_18) | 1
        break
    
    int32_t var_8_42 = 0x18
    
    if (data_aca1f4 != 0 && eax_88 != 0 && *eax_88 != 0)
        char* eax_89 = sub_48a080(&var_1c)
        int32_t temp53_1 = *(eax_89 + 4)
        *(eax_89 + 4) -= 1
        
        if (temp53_1 == 1)
            sub_4984f0(eax_89, *(eax_89 + 0xc) + 0x10)
            var_1c = &data_5b2591
    
    int32_t var_8_43 = 0xffffffff
    int32_t eax_90 = data_62b220
    
    if (esi_32 == 0)
        eax_90 = 0xf
    
    data_62b220 = eax_90
    sub_48a2c0(&var_1c, "btn_ok")
    char* const eax_91 = var_1c
    char* const ecx_133 = &data_5b2591
    char* edx_62 = *(edi + 4)
    
    if (eax_91 != 0)
        ecx_133 = eax_91
    
    int32_t esi_34
    
    while (true)
        ebx.b = *ecx_133
        char temp54_1 = *edx_62
        bool c_19 = ebx.b u< temp54_1
        
        if (ebx.b == temp54_1)
            if (ebx.b == 0)
                esi_34 = 0
                break
            
            ebx.b = ecx_133[1]
            char temp55_1 = edx_62[1]
            c_19 = ebx.b u< temp55_1
            
            if (ebx.b == temp55_1)
                ecx_133 = &ecx_133[2]
                edx_62 = &edx_62[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_34 = 0
                break
        
        esi_34 = sbb.d(esi_32, esi_32, c_19) | 1
        break
    
    int32_t var_8_44 = 0x19
    
    if (data_aca1f4 != 0 && eax_91 != 0 && *eax_91 != 0)
        char* eax_92 = sub_48a080(&var_1c)
        int32_t temp56_1 = *(eax_92 + 4)
        *(eax_92 + 4) -= 1
        
        if (temp56_1 == 1)
            sub_4984f0(eax_92, *(eax_92 + 0xc) + 0x10)
            var_1c = &data_5b2591
    
    int32_t var_8_45 = 0xffffffff
    
    if (esi_34 == 0)
        sub_461b40()
    
    sub_48a2c0(&var_1c, "btn_undo")
    char* const eax_93 = var_1c
    char* const ecx_137 = &data_5b2591
    char* edx_65 = *(edi + 4)
    
    if (eax_93 != 0)
        ecx_137 = eax_93
    
    int32_t esi_36
    
    while (true)
        ebx.b = *ecx_137
        char temp57_1 = *edx_65
        bool c_20 = ebx.b u< temp57_1
        
        if (ebx.b == temp57_1)
            if (ebx.b == 0)
                esi_36 = 0
                break
            
            ebx.b = ecx_137[1]
            char temp58_1 = edx_65[1]
            c_20 = ebx.b u< temp58_1
            
            if (ebx.b == temp58_1)
                ecx_137 = &ecx_137[2]
                edx_65 = &edx_65[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_36 = 0
                break
        
        esi_36 = sbb.d(esi_34, esi_34, c_20) | 1
        break
    
    int32_t var_8_46 = 0x1a
    
    if (data_aca1f4 != 0 && eax_93 != 0 && *eax_93 != 0)
        char* eax_94 = sub_48a080(&var_1c)
        int32_t temp59_1 = *(eax_94 + 4)
        *(eax_94 + 4) -= 1
        
        if (temp59_1 == 1)
            sub_4984f0(eax_94, *(eax_94 + 0xc) + 0x10)
            var_1c = &data_5b2591
    
    int32_t var_8_47 = 0xffffffff
    
    if (esi_36 == 0)
        sub_468560()
    
    sub_48a2c0(&var_1c, "btn_nextGame")
    char* const eax_95 = var_1c
    char* const ecx_141 = &data_5b2591
    char* edx_68 = *(edi + 4)
    
    if (eax_95 != 0)
        ecx_141 = eax_95
    
    int32_t esi_38
    
    while (true)
        ebx.b = *ecx_141
        char temp60_1 = *edx_68
        bool c_21 = ebx.b u< temp60_1
        
        if (ebx.b == temp60_1)
            if (ebx.b == 0)
                esi_38 = 0
                break
            
            ebx.b = ecx_141[1]
            char temp61_1 = edx_68[1]
            c_21 = ebx.b u< temp61_1
            
            if (ebx.b == temp61_1)
                ecx_141 = &ecx_141[2]
                edx_68 = &edx_68[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_38 = 0
                break
        
        esi_38 = sbb.d(esi_36, esi_36, c_21) | 1
        break
    
    int32_t var_8_48 = 0x1b
    
    if (data_aca1f4 != 0 && eax_95 != 0 && *eax_95 != 0)
        char* eax_96 = sub_48a080(&var_1c)
        int32_t temp62_1 = *(eax_96 + 4)
        *(eax_96 + 4) -= 1
        
        if (temp62_1 == 1)
            sub_4984f0(eax_96, *(eax_96 + 0xc) + 0x10)
            var_1c = &data_5b2591
    
    int32_t var_8_49 = 0xffffffff
    int32_t var_20
    
    if (esi_38 == 0 && sub_42def0(&var_20) != 0)
        if (var_20 != 1)
            sub_421ad0(var_1c)
        else
            void* eax_98 = data_6cfe4c
            
            if (eax_98 == 0)
                sub_489550(eax_98, &data_5b2591, "gClient", 
                    "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            *(eax_98 + 0x82c) = 3
    
    void* eax_102 = sub_46a6a0()
    
    if (eax_102 == 0)
        void* esi_40 = &data_6373d0
        
        while (true)
            char* eax_99 = *(esi_40 + 8)
            char* ecx_146 = *(edi + 4)
            int32_t eax_101
            
            while (true)
                char edx_71 = *eax_99
                char temp63_1 = *ecx_146
                bool c_22 = edx_71 u< temp63_1
                
                if (edx_71 == temp63_1)
                    if (edx_71 == 0)
                        eax_101 = 0
                        break
                    
                    edx_71 = eax_99[1]
                    char temp64_1 = ecx_146[1]
                    c_22 = edx_71 u< temp64_1
                    
                    if (edx_71 == temp64_1)
                        eax_99 = &eax_99[2]
                        ecx_146 = &ecx_146[2]
                        
                        if (edx_71 != 0)
                            continue
                        
                        eax_101 = 0
                        break
                
                eax_101 = sbb.d(eax_99, eax_99, c_22) | 1
                break
            
            if (eax_101 == 0)
                if (*(esi_40 + 4) != 1)
                    break
                
                if (*(arg1 + 0x18) == 1)
                    break
            
            esi_40 += 0x28
            
            if (esi_40 == &data_6377e0)
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_101
        
        eax_102 = *esi_40
        data_632a48 = eax_102
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_102
}
