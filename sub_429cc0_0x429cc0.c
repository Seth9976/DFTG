// 函数名称: sub_429cc0
// 虚拟地址: 0x429cc0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __convention("regparm")sub_429cc0(int32_t arg1, int32_t arg2, char* arg3, void* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59d350
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* var_14 = arg3
    int32_t ebx
    int32_t var_18 = ebx
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_48a2c0(&var_14, "btnBack")
    char* const esi = &data_5b2591
    char* eax_3 = var_14
    char* const ecx_1 = &data_5b2591
    char* edx = *(arg4 + 4)
    
    if (eax_3 != 0)
        ecx_1 = eax_3
    
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
    
    if (ecx_3 == 0 || *(arg4 + 0x18) == 2)
        ebx.b = 1
    else
        ebx.b = 0
    
    int32_t var_8_1 = 0
    
    if (data_aca1f4 != 0 && eax_3 != 0 && *eax_3 != 0)
        char* eax_4 = sub_48a080(&var_14)
        int32_t temp2_1 = *(eax_4 + 4)
        *(eax_4 + 4) -= 1
        
        if (temp2_1 == 1)
            sub_4984f0(eax_4, *(eax_4 + 0xc) + 0x10)
            var_14 = &data_5b2591
    
    int32_t var_8_2 = 0xffffffff
    void* eax_5
    
    if (ebx.b == 0)
        sub_48a2c0(&var_14, "btnOK")
        char* eax_6 = var_14
        char* const ecx_7 = &data_5b2591
        char* edx_3 = *(arg4 + 4)
        
        if (eax_6 != 0)
            ecx_7 = eax_6
        
        int32_t edi_1
        
        while (true)
            ebx.b = *ecx_7
            char temp3_1 = *edx_3
            bool c_2 = ebx.b u< temp3_1
            
            if (ebx.b == temp3_1)
                if (ebx.b == 0)
                    edi_1 = 0
                    break
                
                ebx.b = ecx_7[1]
                char temp4_1 = edx_3[1]
                c_2 = ebx.b u< temp4_1
                
                if (ebx.b == temp4_1)
                    ecx_7 = &ecx_7[2]
                    edx_3 = &edx_3[2]
                    
                    if (ebx.b != 0)
                        continue
                    
                    edi_1 = 0
                    break
            
            edi_1 = sbb.d(arg4, arg4, c_2) | 1
            break
        
        int32_t var_8_3 = 1
        
        if (data_aca1f4 != 0 && eax_6 != 0 && *eax_6 != 0)
            char* eax_7 = sub_48a080(&var_14)
            int32_t temp5_1 = *(eax_7 + 4)
            *(eax_7 + 4) -= 1
            
            if (temp5_1 == 1)
                sub_4984f0(eax_7, *(eax_7 + 0xc) + 0x10)
                var_14 = &data_5b2591
        
        int32_t var_8_4 = 0xffffffff
        
        if (edi_1 != 0)
            sub_48a2c0(&var_14, "btnAvatar")
            char* eax_8 = var_14
            
            if (eax_8 != 0)
                esi = eax_8
            
            char* ecx_13 = *(arg4 + 4)
            int32_t esi_2
            
            while (true)
                char edx_6 = *esi
                char temp6_1 = *ecx_13
                bool c_3 = edx_6 u< temp6_1
                
                if (edx_6 == temp6_1)
                    if (edx_6 == 0)
                        esi_2 = 0
                        break
                    
                    edx_6 = esi[1]
                    char temp7_1 = ecx_13[1]
                    c_3 = edx_6 u< temp7_1
                    
                    if (edx_6 == temp7_1)
                        esi = &esi[2]
                        ecx_13 = &ecx_13[2]
                        
                        if (edx_6 != 0)
                            continue
                        
                        esi_2 = 0
                        break
                
                esi_2 = sbb.d(esi, esi, c_3) | 1
                break
            
            int32_t var_8_5 = 2
            
            if (data_aca1f4 != 0 && eax_8 != 0 && *eax_8 != 0)
                eax_8 = sub_48a080(&var_14)
                int32_t temp8_1 = *(eax_8 + 4)
                *(eax_8 + 4) -= 1
                
                if (temp8_1 == 1)
                    eax_8 = sub_4984f0(eax_8, *(eax_8 + 0xc) + 0x10)
            
            int32_t var_8_6 = 0xffffffff
            
            if (esi_2 == 0)
                data_62b220 = 5
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_8
            
            sub_48a2c0(&var_14, "BtnAccount")
            char* eax_9 = sub_48a4a0(&var_14, *(arg4 + 4))
            ebx.b = eax_9.b
            int32_t var_8_7 = 3
            
            if (data_aca1f4 != 0)
                char* ecx_20 = var_14
                
                if (ecx_20 != 0 && *ecx_20 != 0)
                    eax_9 = sub_48a080(&var_14)
                    int32_t temp9_1 = *(eax_9 + 4)
                    *(eax_9 + 4) -= 1
                    
                    if (temp9_1 == 1)
                        eax_9 = sub_4984f0(eax_9, *(eax_9 + 0xc) + 0x10)
            
            int32_t var_8_8 = 0xffffffff
            
            if (ebx.b != 0)
                data_62bbd4 = 0
                data_62b220 = 6
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_9
            
            sub_48a2c0(&var_14, "BtnProfiles")
            char* eax_10 = sub_48a4a0(&var_14, *(arg4 + 4))
            ebx.b = eax_10.b
            int32_t var_8_9 = 4
            
            if (data_aca1f4 != 0)
                char* ecx_27 = var_14
                
                if (ecx_27 != 0 && *ecx_27 != 0)
                    eax_10 = sub_48a080(&var_14)
                    int32_t temp10_1 = *(eax_10 + 4)
                    *(eax_10 + 4) -= 1
                    
                    if (temp10_1 == 1)
                        eax_10 = sub_4984f0(eax_10, *(eax_10 + 0xc) + 0x10)
            
            int32_t var_8_10 = 0xffffffff
            
            if (ebx.b != 0)
                data_62b220 = 7
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_10
            
            sub_48a2c0(&var_14, "BtnFriends")
            char* eax_11 = sub_48a4a0(&var_14, *(arg4 + 4))
            ebx.b = eax_11.b
            int32_t var_8_11 = 5
            
            if (data_aca1f4 != 0)
                char* ecx_34 = var_14
                
                if (ecx_34 != 0 && *ecx_34 != 0)
                    eax_11 = sub_48a080(&var_14)
                    int32_t temp11_1 = *(eax_11 + 4)
                    *(eax_11 + 4) -= 1
                    
                    if (temp11_1 == 1)
                        eax_11 = sub_4984f0(eax_11, *(eax_11 + 0xc) + 0x10)
            
            int32_t var_8_12 = 0xffffffff
            
            if (ebx.b != 0)
                data_62b2b0 = 0
                data_62b2b4 = 0
                data_62b220 = 8
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_11
            
            sub_48a2c0(&var_14, "BtnOffline")
            ebx.b = sub_48a4a0(&var_14, *(arg4 + 4))
            int32_t var_8_13 = 6
            
            if (data_aca1f4 != 0)
                char* ecx_41 = var_14
                
                if (ecx_41 != 0 && *ecx_41 != 0)
                    char* eax_13 = sub_48a080(&var_14)
                    int32_t temp12_1 = *(eax_13 + 4)
                    *(eax_13 + 4) -= 1
                    
                    if (temp12_1 == 1)
                        sub_4984f0(eax_13, *(eax_13 + 0xc) + 0x10)
            
            int32_t var_8_14 = 0xffffffff
            
            if (ebx.b != 0)
                void* eax_14 = sub_437f10(*(data_6d00d8 + 0xbe4))
                int32_t ecx_46
                ecx_46.b = *(eax_14 + 0x248) == 0
                *(eax_14 + 0x248) = ecx_46
                sub_437ba0(data_6d00d8)
                
                if (*(eax_14 + 0x248) == 0)
                    void* eax_16 = sub_41fd00()
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_16
                
                void* eax_15 = sub_41fe10(0, 1)
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_15
            
            sub_48a2c0(&var_14, "BtnStats")
            ebx.b = sub_48a4a0(&var_14, *(arg4 + 4))
            int32_t var_8_15 = 7
            
            if (data_aca1f4 != 0)
                char* ecx_55 = var_14
                
                if (ecx_55 != 0 && *ecx_55 != 0)
                    char* eax_18 = sub_48a080(&var_14)
                    int32_t temp13_1 = *(eax_18 + 4)
                    *(eax_18 + 4) -= 1
                    
                    if (temp13_1 == 1)
                        sub_4984f0(eax_18, *(eax_18 + 0xc) + 0x10)
            
            int32_t eax_19 = data_62b220
            
            if (ebx.b != 0)
                eax_19 = 0xb
            
            data_62b220 = eax_19
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_19
        
        eax_5 = data_6cfe4c
        data_62b220 = 3
        
        if (eax_5 == 0)
            sub_489550(eax_5, &data_5b2591, "gClient", 
                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
    else
        eax_5 = data_6cfe4c
        data_62b220 = 3
        
        if (eax_5 == 0)
            sub_489550(eax_5, &data_5b2591, "gClient", 
                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
    
    *(eax_5 + 0xa80) = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_5
}
