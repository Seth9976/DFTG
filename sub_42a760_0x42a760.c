// 函数名称: sub_42a760
// 虚拟地址: 0x42a760
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_42a760(int32_t arg1, int32_t arg2, char* arg3, int32_t arg4 @ esi, void* arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59d398
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* var_14 = arg3
    int32_t ebx
    int32_t var_18 = ebx
    int32_t var_1c = arg4
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_48a2c0(&var_14, "btnResend")
    char* const ecx_1 = &data_5b2591
    char* eax_3 = var_14
    
    if (eax_3 != 0)
        ecx_1 = eax_3
    
    char* edx = *(arg5 + 4)
    int32_t esi
    
    while (true)
        ebx.b = *edx
        char temp0_1 = *ecx_1
        bool c_1 = ebx.b u< temp0_1
        
        if (ebx.b == temp0_1)
            if (ebx.b == 0)
                esi = 0
                break
            
            ebx.b = edx[1]
            char temp1_1 = ecx_1[1]
            c_1 = ebx.b u< temp1_1
            
            if (ebx.b == temp1_1)
                edx = &edx[2]
                ecx_1 = &ecx_1[2]
                
                if (ebx.b != 0)
                    continue
                
                esi = 0
                break
        
        esi = sbb.d(arg4, arg4, c_1) | 1
        break
    
    int32_t var_8_1 = 0
    
    if (data_aca1f4 != 0 && eax_3 != 0 && *eax_3 != 0)
        char* eax_4 = sub_48a080(&var_14)
        int32_t temp2_1 = *(eax_4 + 4)
        *(eax_4 + 4) -= 1
        
        if (temp2_1 == 1)
            sub_4984f0(eax_4, *(eax_4 + 0xc) + 0x10)
            var_14 = &data_5b2591
    
    int32_t var_8_2 = 0xffffffff
    
    if (esi == 0)
        char* const ecx_6 = &data_5b2591
        char* eax_6 = *(sub_437f10(*(data_6d00d8 + 0xbe4)) + 4)
        
        if (eax_6 != 0)
            ecx_6 = eax_6
        
        void* eax_7 = sub_425910(ecx_6)
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_7
    
    sub_48a2c0(&var_14, "btnEnterCode")
    char* eax_8 = var_14
    char* const ecx_10 = &data_5b2591
    char* edx_3 = *(arg5 + 4)
    
    if (eax_8 != 0)
        ecx_10 = eax_8
    
    int32_t esi_3
    
    while (true)
        ebx.b = *edx_3
        char temp3_1 = *ecx_10
        bool c_2 = ebx.b u< temp3_1
        
        if (ebx.b == temp3_1)
            if (ebx.b == 0)
                esi_3 = 0
                break
            
            ebx.b = edx_3[1]
            char temp4_1 = ecx_10[1]
            c_2 = ebx.b u< temp4_1
            
            if (ebx.b == temp4_1)
                edx_3 = &edx_3[2]
                ecx_10 = &ecx_10[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_3 = 0
                break
        
        esi_3 = sbb.d(esi, esi, c_2) | 1
        break
    
    int32_t var_8_3 = 1
    
    if (data_aca1f4 != 0 && eax_8 != 0 && *eax_8 != 0)
        char* eax_9 = sub_48a080(&var_14)
        int32_t temp5_1 = *(eax_9 + 4)
        *(eax_9 + 4) -= 1
        
        if (temp5_1 == 1)
            sub_4984f0(eax_9, *(eax_9 + 0xc) + 0x10)
            var_14 = &data_5b2591
    
    int32_t var_8_4 = 0xffffffff
    
    if (esi_3 == 0)
        sub_48a5e0(&data_62bbdc, &data_5b2591)
        bool cond:0 = data_62b224 != 6
        data_62bbe0 = 1
        
        if (cond:0)
            int32_t ecx_16 = 0
            
            if (data_62b234 == 6)
                ecx_16 = data_62b238
            
            int32_t eax_11 = sub_4bbe00(ecx_16)
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_11
        
        int32_t eax_10 = sub_4bbe00(data_62b228)
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_10
    
    sub_48a2c0(&var_14, "btnEdit")
    char* eax_12 = var_14
    char* const ecx_20 = &data_5b2591
    char* edx_6 = *(arg5 + 4)
    
    if (eax_12 != 0)
        ecx_20 = eax_12
    
    int32_t esi_7
    
    while (true)
        ebx.b = *edx_6
        char temp6_1 = *ecx_20
        bool c_3 = ebx.b u< temp6_1
        
        if (ebx.b == temp6_1)
            if (ebx.b == 0)
                esi_7 = 0
                break
            
            ebx.b = edx_6[1]
            char temp7_1 = ecx_20[1]
            c_3 = ebx.b u< temp7_1
            
            if (ebx.b == temp7_1)
                edx_6 = &edx_6[2]
                ecx_20 = &ecx_20[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_7 = 0
                break
        
        esi_7 = sbb.d(esi_3, esi_3, c_3) | 1
        break
    
    int32_t var_8_5 = 2
    
    if (data_aca1f4 != 0 && eax_12 != 0 && *eax_12 != 0)
        char* eax_13 = sub_48a080(&var_14)
        int32_t temp8_1 = *(eax_13 + 4)
        *(eax_13 + 4) -= 1
        
        if (temp8_1 == 1)
            sub_4984f0(eax_13, *(eax_13 + 0xc) + 0x10)
            var_14 = &data_5b2591
    
    int32_t var_8_6 = 0xffffffff
    
    if (esi_7 == 0)
        sub_48a5e0(&data_62bbdc, &data_5b2591)
        sub_48a5e0(&data_62bbd8, &data_5b2591)
        void* ecx_23 = data_6d00d8
        data_62bbe0 = esi_7
        data_62bbd4 = esi_7
        void* eax_14 = sub_437f10(*(ecx_23 + 0xbe4))
        sub_48a5e0(eax_14 + 4, &data_5b2591)
        sub_48a5e0(eax_14 + 0x238, &data_5b2591)
        char* eax_15 = sub_437ba0(data_6d00d8)
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_15
    
    sub_48a2c0(&var_14, "btnInputBack")
    char* eax_16 = sub_48a520(*(arg5 + 4), &var_14)
    ebx.b = eax_16.b
    int32_t var_8_7 = 3
    
    if (data_aca1f4 != 0)
        char* ecx_32 = var_14
        
        if (ecx_32 != 0 && *ecx_32 != 0)
            eax_16 = sub_48a080(&var_14)
            int32_t temp9_1 = *(eax_16 + 4)
            *(eax_16 + 4) -= 1
            
            if (temp9_1 == 1)
                eax_16 = sub_4984f0(eax_16, *(eax_16 + 0xc) + 0x10)
                var_14 = &data_5b2591
    
    int32_t var_8_8 = 0xffffffff
    
    if (ebx.b != 0)
        if (data_62bbd4 != 1)
            if (data_62bbe0 == 1)
                data_62bbe0 = 0
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_16
            
            sub_489550(eax_16, &data_5b2591, "Halt", 
                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", 0xa3b, 
                "GameProfileAccountClick")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        data_62bbd4 = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_16
    
    sub_48a2c0(&var_14, "btnAddEmail")
    ebx.b = sub_48a520(*(arg5 + 4), &var_14)
    int32_t var_8_9 = 4
    
    if (data_aca1f4 != 0)
        char* ecx_41 = var_14
        
        if (ecx_41 != 0 && *ecx_41 != 0)
            char* eax_18 = sub_48a080(&var_14)
            int32_t temp10_1 = *(eax_18 + 4)
            *(eax_18 + 4) -= 1
            
            if (temp10_1 == 1)
                sub_4984f0(eax_18, *(eax_18 + 0xc) + 0x10)
                var_14 = &data_5b2591
    
    int32_t var_8_10 = 0xffffffff
    
    if (ebx.b != 0)
        sub_48a5e0(sub_437f10(*(data_6d00d8 + 0xbe4)) + 4, &data_5b2591)
        int32_t ecx_47 = sub_48a5e0(&data_62bbd8, &data_5b2591)
        data_62bbd4 = 1
        int32_t var_28_1 = ecx_47
        int32_t eax_21 = sub_4bbe00(sub_436260(6, 3))
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_21
    
    sub_48a2c0(&var_14, "btnInputPaste")
    ebx.b = sub_48a520(*(arg5 + 4), &var_14)
    int32_t var_8_11 = 5
    
    if (data_aca1f4 != 0)
        char* ecx_53 = var_14
        
        if (ecx_53 != 0 && *ecx_53 != 0)
            char* eax_23 = sub_48a080(&var_14)
            int32_t temp11_1 = *(eax_23 + 4)
            *(eax_23 + 4) -= 1
            
            if (temp11_1 == 1)
                sub_4984f0(eax_23, *(eax_23 + 0xc) + 0x10)
                var_14 = &data_5b2591
    
    int32_t var_8_12 = 0xffffffff
    char* eax_24
    
    if (ebx.b == 0)
        sub_48a2c0(&var_14, "btnBack")
        char* eax_28 = sub_48a520(*(arg5 + 4), &var_14)
        
        if (eax_28.b != 0 || *(arg5 + 0x18) == 2)
            ebx.b = 1
        else
            ebx.b = 0
        
        int32_t var_8_15 = 8
        
        if (data_aca1f4 != 0)
            eax_28 = var_14
            
            if (eax_28 != 0 && *eax_28 != 0)
                eax_28 = sub_48a080(&var_14)
                int32_t temp13_1 = *(eax_28 + 4)
                *(eax_28 + 4) -= 1
                
                if (temp13_1 == 1)
                    eax_28 = sub_4984f0(eax_28, *(eax_28 + 0xc) + 0x10)
        
        int32_t var_8_16 = 0xffffffff
        
        if (ebx.b != 0)
            data_62b220 = 4
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_28
        
        sub_48a2c0(&var_14, "btnPrivacy")
        char* eax_29 = sub_48a520(*(arg5 + 4), &var_14)
        ebx.b = eax_29.b
        int32_t var_8_17 = 9
        
        if (data_aca1f4 != 0)
            char* ecx_74 = var_14
            
            if (ecx_74 != 0 && *ecx_74 != 0)
                eax_29 = sub_48a080(&var_14)
                int32_t temp14_1 = *(eax_29 + 4)
                *(eax_29 + 4) -= 1
                
                if (temp14_1 == 1)
                    eax_29 = sub_4984f0(eax_29, *(eax_29 + 0xc) + 0x10)
        
        int32_t var_8_18 = 0xffffffff
        
        if (ebx.b != 0)
            data_62b220 = 0x1a
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_29
        
        sub_48a2c0(&var_14, "btnInputOk")
        eax_24 = sub_48a520(*(arg5 + 4), &var_14)
        ebx.b = eax_24.b
        int32_t var_8_19 = 0xa
        
        if (data_aca1f4 != 0)
            char* ecx_81 = var_14
            
            if (ecx_81 != 0 && *ecx_81 != 0)
                eax_24 = sub_48a080(&var_14)
                int32_t temp15_1 = *(eax_24 + 4)
                *(eax_24 + 4) -= 1
                
                if (temp15_1 == 1)
                    eax_24 = sub_4984f0(eax_24, *(eax_24 + 0xc) + 0x10)
        
        int32_t var_8_20 = 0xffffffff
        
        if (ebx.b != 0)
            eax_24 = sub_42a550()
    else
        var_14 = &data_5b2591
        int32_t var_8_13 = 6
        eax_24 = sub_489fc0(&var_14)
        
        if (eax_24.b != 0)
            int32_t* var_28_2
            int32_t* ecx_59
            
            if (data_62bbd4 != 1)
                if (data_62bbe0 != 1)
                    sub_489550(eax_24, &data_5b2591, "Halt", 
                        "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", 0xa60, 
                        "GameProfileAccountClick")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                if (sub_48a8f0(&var_14) s> 9)
                    sub_48a790(&var_14, 9, 0)
                
                ecx_59 = &data_62bbdc
                var_28_2 = &var_14
            else
                if (sub_48a8f0(&var_14) s> 0x40)
                    sub_48a790(&var_14, 0x40, 0)
                
                ecx_59 = &data_62bbd8
                var_28_2 = &var_14
            
            eax_24 = sub_48a560(ecx_59, var_28_2)
        
        int32_t var_8_14 = 7
        
        if (data_aca1f4 != 0)
            eax_24 = var_14
            
            if (eax_24 != 0 && *eax_24 != 0)
                eax_24 = sub_48a080(&var_14)
                int32_t temp12_1 = *(eax_24 + 4)
                *(eax_24 + 4) -= 1
                
                if (temp12_1 == 1)
                    int32_t eax_26 = sub_4984f0(eax_24, *(eax_24 + 0xc) + 0x10)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_26
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_24
}
