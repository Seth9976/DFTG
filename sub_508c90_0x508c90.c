// 函数名称: sub_508c90
// 虚拟地址: 0x508c90
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __thiscallsub_508c90(uint32_t* arg1, char arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a1978
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_3c = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** i = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* edi = arg1
    int32_t var_1c = 0
    
    if (edi[0x14].b == 0)
        struct _EXCEPTION_REGISTRATION_RECORD** i_1 = nullptr
        edi[2] = data_620d84 f+ edi[2]
    label_508ce0:
        char* edx
        edx.b = arg2
    label_508ce3:
        
        if (i_1 != 0)
            i = i_1[8]
        else
            i = *data_114e840
        
        while (i != 0)
            i_1 = i
            i = i[8]
            
            if (i_1[7].b == 0)
                int32_t xmm1_1 = i_1[4]
                arg1.b = 0
                int32_t xmm2_1 = i_1[5]
                int32_t var_28_1 = xmm1_1
                int32_t var_24_1 = xmm2_1
                
                if (edx.b != 0)
                    xmm1_1 = *arg3
                    xmm2_1 = arg3[1]
                    var_28_1 = xmm1_1
                    var_24_1 = xmm2_1
                
                float xmm3_1 = edi[4]
                
                if (not(xmm1_1 f< xmm3_1) && not(edi[6] f+ xmm3_1 f<= xmm1_1))
                    float xmm0_5 = edi[5]
                    
                    if (not(xmm2_1 f< xmm0_5))
                        arg1 = nullptr
                        
                        if (xmm0_5 f+ edi[7] f> xmm2_1)
                            arg1 = 1
                
                struct _EXCEPTION_REGISTRATION_RECORD* eax_6 = *i_1
                
                if (eax_6 == 3)
                label_5091aa:
                    
                    if (arg1.b == 0)
                        goto label_508ce3
                    
                label_5091b2:
                    int32_t var_40_7 = var_24_1
                    *(edi + 0x52) = 1
                    void* eax_25
                    eax_25, arg1, edx = sub_5082b0(edi, var_28_1)
                    edi[1] = eax_25
                    edi[3] = eax_25
                    edi[2] = 0
                    goto label_508ce0
                
                if (eax_6 == 4)
                    *(edi + 0x52) = 0
                    goto label_508ce3
                
                char* var_20
                char* var_18
                uint32_t var_14
                
                if (eax_6 == 1)
                    int32_t eax_7 = i_1[1]
                    uint32_t esi_1
                    
                    if (eax_7 == 0x56 && i_1[2] == 2 && *(edi + 0x51) != 0)
                        var_14 = &data_5b2591
                        int32_t var_8_1 = 0
                        struct _EXCEPTION_REGISTRATION_RECORD** eax_8
                        eax_8, arg1, edx = sub_489fc0(&var_14)
                        esi_1 = var_14
                        
                        if (eax_8.b != 0 && esi_1 != 0)
                            arg1.b = *esi_1
                            edx = esi_1
                            var_18 = edx
                            
                            while (arg1.b != 0)
                                if (arg1.b u>= 0x80)
                                    eax_8.b = arg1.b
                                    eax_8.b &= 0xe0
                                    
                                    if (eax_8.b != 0xc0)
                                        eax_8.b = arg1.b
                                        eax_8.b &= 0xf0
                                        
                                        if (eax_8.b != 0xe0)
                                            arg1.b &= 0xf8
                                            
                                            if (arg1.b != 0xf0)
                                                sub_489550(eax_8, &data_5b2591, 
                                                    "!Xutf8_is_invalid_lead_char(str)", 
                                                    "d:\ax\trunk\ax2017\engine\xutf8.cpp", 0x213, 
                                                    "Xutf8_peek_next")
                                                
                                                if (IsDebuggerPresent() == 1)
                                                    breakpoint
                                                
                                                sub_489700()
                                                noreturn
                                
                                var_20 = edx
                                uint32_t eax_9 = sub_4eae80(&var_20)
                                char* ecx_5 = var_18
                                var_20 = eax_9
                                var_18 = ecx_5
                                char edx_1 = *ecx_5
                                
                                if (edx_1 u>= 0x80)
                                    ecx_5.b = edx_1
                                    ecx_5.b &= 0xe0
                                    
                                    if (ecx_5.b != 0xc0)
                                        eax_9.b = edx_1
                                        eax_9.b &= 0xf0
                                        
                                        if (eax_9.b != 0xe0 && (edx_1 & 0xf8) != 0xf0)
                                            sub_489550(eax_9, &data_5b2591, 
                                                "!Xutf8_is_invalid_lead_char(str)", 
                                                "d:\ax\trunk\ax2017\engine\xutf8.cpp", 0x219, 
                                                "Xutf8_next")
                                            
                                            if (IsDebuggerPresent() == 1)
                                                breakpoint
                                            
                                            sub_489700()
                                            noreturn
                                
                                sub_4eae80(&var_18)
                                char* var_40_2 = var_20
                                var_18 = var_18
                                eax_8, arg1 = sub_5085f0(edi)
                                edx = var_18
                                arg1.b = *edx
                        
                        i_1[7].b = 1
                        int32_t var_8_2 = 1
                    label_508f3b:
                        
                        if (data_aca1f4 != 0 && esi_1 != 0 && *esi_1 != 0)
                            char* eax_18 = sub_48a080(&var_14)
                            int32_t temp2_1 = *(eax_18 + 4)
                            *(eax_18 + 4) -= 1
                            
                            if (temp2_1 == 1)
                                arg1, edx = sub_4984f0(eax_18, *(eax_18 + 0xc) + 0x10)
                                var_14 = &data_5b2591
                        
                        int32_t var_8_4 = 0xffffffff
                        goto label_508ce0
                    
                    if (eax_7 == 0x43 && i_1[2] == 2)
                        if (*(edi + 0x51) == 0)
                            goto label_508ce3
                        
                        int32_t esi_2 = edi[1]
                        int32_t ecx_9 = edi[3]
                        int32_t eax_12
                        int32_t edx_2
                        edx_2:eax_12 = sx.q(esi_2 - ecx_9)
                        var_20 = (eax_12 ^ edx_2) - edx_2
                        char* const eax_15 = &data_5b2591
                        
                        if (esi_2 s>= ecx_9)
                            esi_2 = ecx_9
                        
                        char* ecx_10 = *edi
                        
                        if (ecx_10 != 0)
                            eax_15 = ecx_10
                        
                        char* eax_16 = &eax_15[esi_2]
                        
                        if (eax_15 == neg.d(esi_2))
                            sub_489550(eax_16, &data_5b2591, "str", 
                                "d:\ax\trunk\ax2017\engine\xstring.cpp", 0x9a, "XString::XString")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_489700()
                            noreturn
                        
                        char* var_40_3 = var_20
                        var_14 = &data_5b2591
                        sub_48a6e0(&var_14, eax_16, var_40_3)
                        var_1c |= 1
                        char eax_17
                        eax_17, arg1, edx = sub_48a4e0(&var_14, &data_5b2591)
                        esi_1 = var_14
                        
                        if (eax_17 != 0)
                            uint32_t ecx_13 = &data_5b2591
                            
                            if (esi_1 != 0)
                                ecx_13 = esi_1
                            
                            arg1, edx = sub_489f60(ecx_13)
                        
                        i_1[7].b = 1
                        int32_t var_8_3 = 2
                        goto label_508f3b
                    
                    goto label_508fae
                
                if (eax_6 == 0)
                    if (*(edi + 0x51) == eax_6.b)
                        goto label_508ce3
                    
                    if (*(edi + 0x52) != eax_6.b)
                        goto label_508ce3
                    
                    int32_t eax_19 = i_1[2]
                    
                    if (eax_19 != 0 && eax_19 != 1 && eax_19 != 6)
                        goto label_508ce3
                    
                    int32_t var_40_4 = i_1[1]
                    arg1, edx = sub_5085f0(edi)
                    i_1[7].b = 1
                    goto label_508ce0
                
                if (eax_6 == 1)
                label_508fae:
                    
                    if (*(edi + 0x51) == 0)
                        goto label_508ce3
                    
                    if (*(edi + 0x52) != 0)
                        goto label_508ce3
                    
                    char eax_20
                    eax_20, arg1, edx = sub_508ab0(edi, i_1[1], i_1[2])
                    edx.b = arg2
                    
                    if (eax_20 == 0)
                        goto label_508ce3
                    
                    i_1[7].b = 1
                    goto label_508ce0
                
                if (eax_6 == 0x19)
                    if (*(edi + 0x51) == 0)
                        goto label_508ce3
                    
                    if (*(edi + 0x52) != 0)
                        goto label_508ce3
                    
                    arg1, edx = sub_508350(edi)
                    char* esi_3 = i_1[6]
                    uint32_t eax_21 = edi[1]
                    var_14 = eax_21
                    
                    if (esi_3 != 0)
                        arg1.b = *esi_3
                        
                        if (arg1.b != 0)
                            do
                                if (arg1.b u>= 0x80)
                                    eax_21.b = arg1.b
                                    eax_21.b &= 0xe0
                                    
                                    if (eax_21.b != 0xc0)
                                        eax_21.b = arg1.b
                                        eax_21.b &= 0xf0
                                        
                                        if (eax_21.b != 0xe0)
                                            arg1.b &= 0xf8
                                            
                                            if (arg1.b != 0xf0)
                                                sub_489550(eax_21, &data_5b2591, 
                                                    "!Xutf8_is_invalid_lead_char(str)", 
                                                    "d:\ax\trunk\ax2017\engine\xutf8.cpp", 0x213, 
                                                    "Xutf8_peek_next")
                                                
                                                if (IsDebuggerPresent() == 1)
                                                    breakpoint
                                                
                                                sub_489700()
                                                noreturn
                                
                                var_20 = esi_3
                                uint32_t var_40_6 = sub_4eae80(&var_20)
                                sub_5085f0(edi)
                                char ecx_20 = *esi_3
                                var_18 = esi_3
                                
                                if (ecx_20 u>= 0x80)
                                    struct _EXCEPTION_REGISTRATION_RECORD** eax_23
                                    eax_23.b = ecx_20
                                    eax_23.b &= 0xe0
                                    
                                    if (eax_23.b != 0xc0)
                                        eax_23.b = ecx_20
                                        eax_23.b &= 0xf0
                                        
                                        if (eax_23.b != 0xe0 && (ecx_20 & 0xf8) != 0xf0)
                                            sub_489550(eax_23, &data_5b2591, 
                                                "!Xutf8_is_invalid_lead_char(str)", 
                                                "d:\ax\trunk\ax2017\engine\xutf8.cpp", 0x219, 
                                                "Xutf8_next")
                                            
                                            if (IsDebuggerPresent() == 1)
                                                breakpoint
                                            
                                            sub_489700()
                                            noreturn
                                
                                eax_21, arg1, edx = sub_4eae80(&var_18)
                                esi_3 = var_18
                                arg1.b = *esi_3
                            while (arg1.b != 0)
                            
                            eax_21 = var_14
                    
                    edi[3] = eax_21
                    i_1[7].b = 1
                    goto label_508ce0
                
                if (eax_6 == 0x1a)
                    if (*(edi + 0x51) == 0)
                        goto label_508ce3
                    
                    if (*(edi + 0x52) != 0)
                        goto label_508ce3
                    
                    arg1 = i_1[3]
                    edi[3] = i_1[1]
                    edi[1] = arg1
                    i_1[7].b = 1
                    goto label_508ce3
                
                bool cond:2_1
                
                if (eax_6 != 0x12)
                    bool cond:4_1
                    
                    if (eax_6 == 0x11)
                        cond:4_1 = i_1[1] != 0x100000
                    label_5091f9:
                        
                        if (cond:4_1)
                            goto label_508ce3
                        
                        *(edi + 0x52) = 0
                        goto label_508ce3
                    
                    if (eax_6 == 0xd)
                        cond:2_1 = i_1[1] != 0x1000
                        goto label_5091a4
                    
                    if (eax_6 == 0xc)
                    label_5091f2:
                        cond:4_1 = i_1[1] != 0x1000
                        goto label_5091f9
                    
                    if (eax_6 != 0xe)
                        if (eax_6 == 0xf)
                            if (i_1[1] != 0x10)
                                goto label_508ce3
                            
                            *(edi + 0x52) = 0
                            goto label_508ce3
                        
                        if (eax_6 == 0x16)
                            if (i_1[1] == 0x100 && arg1.b != 0)
                                goto label_5091b2
                            
                        label_509187:
                            cond:2_1 = i_1[1] != 0x1000
                        else if (eax_6 != 0x14)
                            if (eax_6 == 0x15)
                                if (i_1[1] != 0x100)
                                    goto label_5091f2
                                
                                *(edi + 0x52) = 0
                                goto label_508ce3
                            
                            if (eax_6 == 0x13)
                                if (i_1[1] != 1)
                                    goto label_509211
                                
                                *(edi + 0x52) = 0
                                goto label_508ce3
                            
                            if (eax_6 == 0x16)
                                goto label_509187
                            
                            if (eax_6 == 0x14)
                                goto label_509195
                            
                            if (eax_6 != 0x18)
                                if (eax_6 == 0x17)
                                    if (i_1[1] != 1)
                                        goto label_508ce3
                                    
                                    *(edi + 0x52) = 0
                                    goto label_508ce3
                                
                                if (eax_6 == 0x15)
                                    goto label_5091f2
                                
                                if (eax_6 != 0x13)
                                    goto label_508ce3
                                
                            label_509211:
                                
                                if (i_1[1] != 0x10)
                                    goto label_508ce3
                                
                                *(edi + 0x52) = 0
                                goto label_508ce3
                            
                            cond:2_1 = i_1[1] != 1
                        else
                            if (i_1[1] == 1 && arg1.b != 0)
                                goto label_5091b2
                            
                        label_509195:
                            cond:2_1 = i_1[1] != 0x10
                    else
                        cond:2_1 = i_1[1] != 0x10
                else
                    cond:2_1 = i_1[1] != 0x100000
                
            label_5091a4:
                
                if (cond:2_1)
                    goto label_508ce3
                
                goto label_5091aa
        
        if (*(edi + 0x52) != 0 && edx.b != 0)
            int32_t var_40_1 = arg3[1]
            i = sub_5082b0(edi, *arg3)
            
            if (i != edi[1])
                edi[1] = i
                edi[2] = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return i
}
