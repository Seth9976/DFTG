// 函数名称: sub_46aa50
// 虚拟地址: 0x46aa50
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_tsub_46aa50(char* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59e000
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_4b2440(arg1, sub_463080)
    void* var_1c
    char* const var_14
    sub_4762a0(&var_14, &var_1c)
    void* ecx_2 = 1
    char* const ebx = 1
    int32_t var_38 = 0xffffffff
    
    if (var_14 s> 1)
        ebx = var_14
    
    if (var_1c s> 1)
        ecx_2 = var_1c
    
    var_1c = ecx_2
    sub_4a8570(arg1)
    int32_t var_38_1 = 0xffffffff
    sub_4a8570(arg1)
    
    if (sub_46a6a0() != 0)
        int32_t var_38_2 = 0xffffffff
        sub_4a8570(arg1)
        int32_t var_38_3 = 0xffffffff
        sub_4a8570(arg1)
    
    void* eax_4 = sub_46a6a0()
    
    if (eax_4 != 0)
        int32_t eax_5 = *(eax_4 + 0x20)
        
        if (eax_5 u> 8)
            sub_489550(eax_5, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 
                0x762, "TutorialStepRestrictsButtons")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        switch (eax_5)
            case 0, 3, 4, 5, 7
                int32_t var_38_4 = 0xffffffff
                sub_4a8570(arg1)
    
    void* eax_7 = data_6d00d0
    
    if (eax_7 == 0)
        sub_489550(eax_7, &data_5b2591, "gGameSettings.localSettings", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x24c, "GetLocalSettings")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    if (*(eax_7 + 0x24) == 1)
        int32_t var_38_5 = 0xffffffff
        sub_4a8570(arg1)
        eax_7 = data_6d00d0
    
    if (eax_7 == 0)
        sub_489550(eax_7, &data_5b2591, "gGameSettings.localSettings", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x24c, "GetLocalSettings")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    eax_7.b = *(eax_7 + 0x2d)
    int32_t var_38_6 = 0xffffffff
    sub_4a8570(arg1)
    int32_t eax_8 = sub_41fea0()
    int32_t var_38_8
    
    if (eax_8 == 0)
        int32_t var_38_7 = 0xffffffff
        sub_4a8570(arg1)
        var_38_8 = 0xffffffff
        sub_4a8570(arg1)
    else if (eax_8 == 1 || eax_8 == 2)
        var_38_8 = 0xffffffff
        sub_4a8570(arg1)
    int32_t eax_12 = data_632a48
    
    if (eax_12 != 0)
        if (*(eax_12 * 0x28 + &data_6373d0) != eax_12)
            sub_489550(eax_12, &data_5b2591, "state.type == gRollClient.zoomHelp", 
                "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 0x327f, "RollHelpUIUpdate")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        int32_t var_38_9 = 0xffffffff
        sub_4a8570(arg1)
    
    void* eax_13 = data_aca1ec
    
    if (not((float.s(*(eax_13 + 0x14)) - 0f) / (float.s(*(eax_13 + 0x18)) - 0f)
            <= float.s(data_61f9c8) / float.s(data_61f9cc) + 0.00999999978f))
        int32_t var_38_10 = 0xffffffff
        sub_4a8570(arg1)
    
    if (data_632a04 s<= 1 && data_632a08 == 0)
        int32_t var_38_11 = 0xffffffff
        sub_4a8570(arg1)
    
    int32_t eax_14 = data_6d00d0
    
    if (eax_14 == 0)
        sub_489550(eax_14, &data_5b2591, "gGameSettings.localSettings", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x24c, "GetLocalSettings")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t var_38_12 = 0xffffffff
    *(eax_14 + 0xc)
    sub_4a8570(arg1)
    sub_465540(arg1)
    int32_t var_38_13 = data_632554
    sub_48a9d0(&var_14, &data_5efc90)
    int32_t var_8_1 = 0
    sub_4a8930(&var_14, &data_637ad4, arg1, &var_14, 0xffffffff)
    int32_t var_8_2 = 1
    
    if (data_aca1f4 != 0)
        char* eax_16 = var_14
        
        if (eax_16 != 0 && *eax_16 != 0)
            char* eax_17 = sub_48a080(&var_14)
            int32_t temp3_1 = *(eax_17 + 4)
            *(eax_17 + 4) -= 1
            
            if (temp3_1 == 1)
                sub_4984f0(eax_17, *(eax_17 + 0xc) + 0x10)
                var_14 = &data_5b2591
    
    int32_t eax_18 = 0
    int32_t var_8_3 = 0xffffffff
    int32_t ecx_21 = data_632550
    
    if (ecx_21 s>= 0)
        eax_18 = ecx_21
    
    int32_t var_38_14 = eax_18
    int32_t var_18
    sub_48a9d0(&var_18, &data_5efc90)
    int32_t var_8_4 = 2
    int32_t eax_20 = sub_4a8930(&var_18, &data_637af0, arg1, &var_18, 0xffffffff)
    int32_t var_8_5 = 3
    
    if (data_aca1f4 != 0)
        eax_20 = var_18
        
        if (eax_20 != 0 && *eax_20 != 0)
            eax_20 = sub_48a080(&var_18)
            int32_t temp4_1 = *(eax_20 + 4)
            *(eax_20 + 4) -= 1
            
            if (temp4_1 == 1)
                eax_20 = sub_4984f0(eax_20, *(eax_20 + 0xc) + 0x10)
                var_18 = &data_5b2591
    
    int32_t var_8_6 = 0xffffffff
    void* edx_22 = data_6cfe4c
    
    if (edx_22 == 0)
        sub_489550(eax_20, &data_5b2591, "gClient", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    sub_469690(eax_20, *(edx_22 + 0xa68), arg1, ebx, var_1c)
    sub_4781f0(&data_70914c)
    int32_t eax_21 = sub_426e60(0x15147a8, arg1, "tbl_minitrays")
    void* edx_24 = data_6cfe4c
    
    if (edx_24 == 0)
        sub_489550(eax_21, &data_5b2591, "gClient", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    sub_466840(eax_21, *(edx_24 + 0xa68))
    int32_t i = sub_425e70()
    
    if (i s<= 3)
        int32_t var_38_16 = 0xffffffff
        sub_4a8570(arg1)
    
    int32_t eax_22
    eax_22.b = i != 2
    sub_4a8830(sub_4a8830(eax_22 + 1, &data_638110, arg1, eax_22 + 1, 0xffffffff), &data_63812c, arg1, 
        i - 1, 0xffffffff)
    
    if (i s> 1)
        char* ebx_2 = nullptr
        char** esi_2 = &data_151471c
        var_14 = nullptr
        
        do
            int32_t eax_25 = sub_425e70()
            void* ecx_30 = data_6cfe4c
            
            if (ecx_30 == 0)
                sub_489550(eax_25, &data_5b2591, "gClient", 
                    "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            char* ebx_4 = *(ecx_30 + 0xa68) + &ebx_2[1]
            var_1c = &ebx_2[1]
            
            if (ebx_4 s>= eax_25)
                ebx_4 -= eax_25
            
            char* const edx_28 = var_14
            char* const eax_28
            int32_t ecx_31
            
            if (*esi_2 == "tbl_opponents" && esi_2[-1] == arg1 && esi_2[1] == edx_28 && esi_2[2] == 0)
                ecx_31 = esi_2[7]
                
                if (ecx_31 == 0)
                    goto label_46aebb
                
                uint32_t eax_26 = zx.d(ecx_31.w)
                
                if (eax_26 u>= data_63e5ac)
                    goto label_46aebb
                
                eax_28 = eax_26 * 0x1418 + data_63e5a8
                
                if (*(eax_28 + 0x1410) == ecx_31)
                    goto label_46aedd
                
                goto label_46aebb
            
        label_46aebb:
            ecx_31 = sub_4bab10(edx_28)
            esi_2[7] = ecx_31
            
            if (ecx_31 != 0)
                eax_28 = var_14
                *esi_2 = "tbl_opponents"
                esi_2[-1] = arg1
                esi_2[1] = eax_28
                esi_2[2] = 0
            label_46aedd:
                
                if (ecx_31 != 0)
                    GSI1::QueryMiniPDBForTiDefnUDT2(eax_28, ebx_4, ecx_31, arg1)
            
            ebx_2 = var_1c
            esi_2 = &esi_2[9]
            var_14 = ebx_2
        while (&ebx_2[1] s< i)
    
    int32_t ecx_33 = data_6327d0
    int32_t ebx_5 = 1
    int32_t edx_31 = data_6326b0
    int32_t esi_3 = ecx_33
    
    if (ecx_33 s< 1)
        esi_3 = 1
    
    int32_t eax_33 = edx_31 - ecx_33 - 1
    
    if (eax_33 s>= 1)
        ebx_5 = eax_33
    
    if (edx_31 != 0)
        int32_t var_38_19 = 0xffffffff
        sub_4a8570(arg1)
        int32_t* eax_34 = sub_452cc0(data_632598)
        
        if (*eax_34 != 0)
            sub_489550(eax_34, &data_5b2591, "gfx.type == ROLLGFX_TILE", 
                "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 0x544a, "ShouldShowFlip")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        int32_t eax_35 = eax_34[0xe]
        
        if (eax_35 == 1 || eax_35 == 0)
            int32_t var_38_20 = 0xffffffff
            sub_4a8570(arg1)
        
        int32_t ecx_38 = data_6327d0
        
        if (ecx_38 s> 0)
            int32_t var_38_21 = 0xffffffff
            sub_4a8570(arg1)
            ecx_38 = data_6327d0
        
        eax_33 = data_6326b0 - 1
        
        if (ecx_38 s< eax_33)
            int32_t var_38_22 = 0xffffffff
            eax_33 = sub_4a8570(arg1)
    
    sub_4a8830(sub_4a8830(eax_33, &data_637a9c, arg1, esi_3, 0xffffffff), &data_637ab8, arg1, ebx_5, 
        0xffffffff)
    int32_t var_48 = 0xffffffff
    sub_4a8570(arg1)
    void* ecx_43 = data_6cfe4c
    int32_t eax_38 = data_6327d4
    data_6327d8 = eax_38
    
    if (ecx_43 == 0)
        sub_489550(eax_38, &data_5b2591, "gClient", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t eax_39 = *(ecx_43 + 0x834)
    uint32_t result
    
    if (eax_39 == 1)
    label_46b021:
        int32_t var_24
        result = sub_42def0(&var_24)
        
        if (result.b != 0)
            int32_t var_38_23 = 0xffffffff
            result = sub_4a8570(arg1)
            
            if (var_24 == 1)
                int32_t var_38_24 = 0xffffffff
                result = sub_4a8570(arg1)
    else
        result = eax_39 - 2
        
        if (eax_39 == 2)
            result = *(sub_452b90(*(ecx_43 + 0xa68)) + 4)
            
            if (result u<= 0x1e)
                result = zx.d(lookup_table_46b268[result])
                
                switch (result)
                    case 0
                        goto label_46b021
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
