// 函数名称: sub_434230
// 虚拟地址: 0x434230
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __convention("regparm")sub_434230(int32_t arg1, int32_t arg2, char* arg3, int32_t arg4 @ esi, void* arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59d860
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char* var_14 = arg3
    int32_t ebx
    int32_t var_18 = ebx
    int32_t var_1c = arg4
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_48a2c0(&var_14, "btn_resume")
    char* const ecx_1 = &data_5b2591
    char* eax_3 = var_14
    
    if (eax_3 != 0)
        ecx_1 = eax_3
    
    char* edx = *(arg5 + 4)
    int32_t esi
    
    while (true)
        ebx.b = *ecx_1
        char temp0_1 = *edx
        bool c_1 = ebx.b u< temp0_1
        
        if (ebx.b == temp0_1)
            if (ebx.b == 0)
                esi = 0
                break
            
            ebx.b = ecx_1[1]
            char temp1_1 = edx[1]
            c_1 = ebx.b u< temp1_1
            
            if (ebx.b == temp1_1)
                ecx_1 = &ecx_1[2]
                edx = &edx[2]
                
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
        void* eax_5 = data_6cfe4c
        
        if (eax_5 == 0)
            sub_489550(eax_5, &data_5b2591, "gClient", 
                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        *(eax_5 + 0x82c) = 3
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_5
    
    sub_48a2c0(&var_14, "btnQuit")
    char* eax_6 = var_14
    char* const ecx_7 = &data_5b2591
    char* edx_3 = *(arg5 + 4)
    
    if (eax_6 != 0)
        ecx_7 = eax_6
    
    uint32_t uExitCode
    
    while (true)
        ebx.b = *ecx_7
        char temp3_1 = *edx_3
        bool c_2 = ebx.b u< temp3_1
        
        if (ebx.b == temp3_1)
            if (ebx.b == 0)
                uExitCode = 0
                break
            
            ebx.b = ecx_7[1]
            char temp4_1 = edx_3[1]
            c_2 = ebx.b u< temp4_1
            
            if (ebx.b == temp4_1)
                ecx_7 = &ecx_7[2]
                edx_3 = &edx_3[2]
                
                if (ebx.b != 0)
                    continue
                
                uExitCode = 0
                break
        
        uExitCode = sbb.d(esi, esi, c_2) | 1
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
    
    if (uExitCode == 0)
        TerminateProcess(GetCurrentProcess(), uExitCode)
        noreturn
    
    sub_48a2c0(&var_14, "btnNewGame")
    char* eax_9 = var_14
    char* const ecx_11 = &data_5b2591
    char* edx_6 = *(arg5 + 4)
    
    if (eax_9 != 0)
        ecx_11 = eax_9
    
    int32_t esi_4
    
    while (true)
        ebx.b = *ecx_11
        char temp6_1 = *edx_6
        bool c_3 = ebx.b u< temp6_1
        
        if (ebx.b == temp6_1)
            if (ebx.b == 0)
                esi_4 = 0
                break
            
            ebx.b = ecx_11[1]
            char temp7_1 = edx_6[1]
            c_3 = ebx.b u< temp7_1
            
            if (ebx.b == temp7_1)
                ecx_11 = &ecx_11[2]
                edx_6 = &edx_6[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_4 = 0
                break
        
        esi_4 = sbb.d(uExitCode, uExitCode, c_3) | 1
        break
    
    int32_t var_8_5 = 2
    
    if (data_aca1f4 != 0 && eax_9 != 0 && *eax_9 != 0)
        eax_9 = sub_48a080(&var_14)
        int32_t temp8_1 = *(eax_9 + 4)
        *(eax_9 + 4) -= 1
        
        if (temp8_1 == 1)
            eax_9 = sub_4984f0(eax_9, *(eax_9 + 0xc) + 0x10)
            var_14 = &data_5b2591
    
    int32_t var_8_6 = 0xffffffff
    
    if (esi_4 == 0)
        data_6d00b4 = 0xffffffff
        data_6d00ac = esi_4
        data_62b220 = 0xe
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_9
    
    sub_48a2c0(&var_14, "btnBattle")
    ebx.b = sub_48a4a0(&var_14, *(arg5 + 4))
    int32_t var_8_7 = 3
    
    if (data_aca1f4 != 0)
        char* ecx_18 = var_14
        
        if (ecx_18 != 0 && *ecx_18 != 0)
            char* eax_11 = sub_48a080(&var_14)
            int32_t temp9_1 = *(eax_11 + 4)
            *(eax_11 + 4) -= 1
            
            if (temp9_1 == 1)
                sub_4984f0(eax_11, *(eax_11 + 0xc) + 0x10)
                var_14 = &data_5b2591
    
    int32_t var_8_8 = 0xffffffff
    
    if (ebx.b != 0)
        void* eax_12 = data_6cfe4c
        
        if (eax_12 == 0)
            sub_489550(eax_12, &data_5b2591, "gClient", 
                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        *(eax_12 + 0x82c) = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_12
    
    sub_48a2c0(&var_14, "BtnSettings")
    char* eax_13 = sub_48a4a0(&var_14, *(arg5 + 4))
    ebx.b = eax_13.b
    int32_t var_8_9 = 4
    
    if (data_aca1f4 != 0)
        char* ecx_25 = var_14
        
        if (ecx_25 != 0 && *ecx_25 != 0)
            eax_13 = sub_48a080(&var_14)
            int32_t temp10_1 = *(eax_13 + 4)
            *(eax_13 + 4) -= 1
            
            if (temp10_1 == 1)
                eax_13 = sub_4984f0(eax_13, *(eax_13 + 0xc) + 0x10)
    
    int32_t var_8_10 = 0xffffffff
    
    if (ebx.b != 0)
        data_62b220 = 0xc
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_13
    
    sub_48a2c0(&var_14, "BtnStore")
    char* eax_14 = sub_48a4a0(&var_14, *(arg5 + 4))
    ebx.b = eax_14.b
    int32_t var_8_11 = 5
    
    if (data_aca1f4 != 0)
        char* ecx_32 = var_14
        
        if (ecx_32 != 0 && *ecx_32 != 0)
            eax_14 = sub_48a080(&var_14)
            int32_t temp11_1 = *(eax_14 + 4)
            *(eax_14 + 4) -= 1
            
            if (temp11_1 == 1)
                eax_14 = sub_4984f0(eax_14, *(eax_14 + 0xc) + 0x10)
    
    int32_t var_8_12 = 0xffffffff
    
    if (ebx.b != 0)
        data_62b220 = 0x13
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_14
    
    sub_48a2c0(&var_14, "BtnRules")
    char* eax_15 = sub_48a4a0(&var_14, *(arg5 + 4))
    ebx.b = eax_15.b
    int32_t var_8_13 = 6
    
    if (data_aca1f4 != 0)
        char* ecx_39 = var_14
        
        if (ecx_39 != 0 && *ecx_39 != 0)
            eax_15 = sub_48a080(&var_14)
            int32_t temp12_1 = *(eax_15 + 4)
            *(eax_15 + 4) -= 1
            
            if (temp12_1 == 1)
                eax_15 = sub_4984f0(eax_15, *(eax_15 + 0xc) + 0x10)
    
    int32_t var_8_14 = 0xffffffff
    
    if (ebx.b != 0)
        data_62b220 = 0x15
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_15
    
    sub_48a2c0(&var_14, "BtnCredits")
    char* eax_16 = sub_48a4a0(&var_14, *(arg5 + 4))
    ebx.b = eax_16.b
    int32_t var_8_15 = 7
    
    if (data_aca1f4 != 0)
        char* ecx_46 = var_14
        
        if (ecx_46 != 0 && *ecx_46 != 0)
            eax_16 = sub_48a080(&var_14)
            int32_t temp13_1 = *(eax_16 + 4)
            *(eax_16 + 4) -= 1
            
            if (temp13_1 == 1)
                eax_16 = sub_4984f0(eax_16, *(eax_16 + 0xc) + 0x10)
    
    int32_t var_8_16 = 0xffffffff
    
    if (ebx.b != 0)
        data_62b220 = 0xd
        data_6cfe68 = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_16
    
    sub_48a2c0(&var_14, "BtnDiscord")
    ebx.b = sub_48a4a0(&var_14, *(arg5 + 4))
    int32_t var_8_17 = 8
    
    if (data_aca1f4 != 0)
        char* ecx_53 = var_14
        
        if (ecx_53 != 0 && *ecx_53 != 0)
            char* eax_18 = sub_48a080(&var_14)
            int32_t temp14_1 = *(eax_18 + 4)
            *(eax_18 + 4) -= 1
            
            if (temp14_1 == 1)
                sub_4984f0(eax_18, *(eax_18 + 0xc) + 0x10)
    
    int32_t var_8_18 = 0xffffffff
    
    if (ebx.b != 0)
        HINSTANCE eax_19 = sub_4898f0("https://discord.gg/EP3dsDU")
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_19
    
    sub_48a2c0(&var_14, "BtnNewsletter")
    ebx.b = sub_48a4a0(&var_14, *(arg5 + 4))
    int32_t var_8_19 = 9
    
    if (data_aca1f4 != 0)
        char* ecx_60 = var_14
        
        if (ecx_60 != 0 && *ecx_60 != 0)
            char* eax_21 = sub_48a080(&var_14)
            int32_t temp15_1 = *(eax_21 + 4)
            *(eax_21 + 4) -= 1
            
            if (temp15_1 == 1)
                sub_4984f0(eax_21, *(eax_21 + 0xc) + 0x10)
    
    int32_t var_8_20 = 0xffffffff
    
    if (ebx.b != 0)
        char* eax_22 = sub_430ff0(3)
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_22
    
    sub_48a2c0(&var_14, "btnProfile")
    ebx.b = sub_48a4a0(&var_14, *(arg5 + 4))
    int32_t var_8_21 = 0xa
    
    if (data_aca1f4 != 0)
        char* ecx_67 = var_14
        
        if (ecx_67 != 0 && *ecx_67 != 0)
            char* eax_24 = sub_48a080(&var_14)
            int32_t temp16_1 = *(eax_24 + 4)
            *(eax_24 + 4) -= 1
            
            if (temp16_1 == 1)
                sub_4984f0(eax_24, *(eax_24 + 0xc) + 0x10)
    
    int32_t var_8_22 = 0xffffffff
    
    if (ebx.b != 0)
        char eax_26 = sub_48a4a0(sub_437f10(*(data_6d00d8 + 0xbe4)), &data_5b2591)
        
        if (eax_26 == 0)
            data_62b220 = 4
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_26
        
        void* eax_27 = sub_42af10(0)
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_27
    
    sub_48a2c0(&var_14, "btnPlayOnline")
    char* eax_28 = sub_48a4a0(&var_14, *(arg5 + 4))
    ebx.b = eax_28.b
    int32_t var_8_23 = 0xb
    
    if (data_aca1f4 != 0)
        char* ecx_79 = var_14
        
        if (ecx_79 != 0 && *ecx_79 != 0)
            eax_28 = sub_48a080(&var_14)
            int32_t temp17_1 = *(eax_28 + 4)
            *(eax_28 + 4) -= 1
            
            if (temp17_1 == 1)
                eax_28 = sub_4984f0(eax_28, *(eax_28 + 0xc) + 0x10)
    
    int32_t var_8_24 = 0xffffffff
    
    if (ebx.b != 0)
        if (sub_48a4a0(sub_437f10(*(data_6d00d8 + 0xbe4)), &data_5b2591) != 0)
            void* eax_31 = sub_42af10(2)
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_31
        
        eax_28 = sub_42e090()
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_28
}
