// 函数名称: sub_46e600
// 虚拟地址: 0x46e600
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_46e600(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* var_8 = eax_1
    char const* const var_c8
    int32_t var_c4
    char const* const var_c0_1
    char* ecx
    
    if (*arg1 != 1)
        var_c0_1 = "RollDieHighlightState"
        var_c4 = 0x6214
        ecx = "gfx.type == ROLLGFX_DIE"
    label_46e95d:
        var_c8 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
    label_46e967:
        sub_489550(eax_1, &data_5b2591, ecx, var_c8, var_c4, var_c0_1)
        
        if (IsDebuggerPresent() != 1)
            sub_489700()
            noreturn
        
        breakpoint
    
    if (arg1[0xb] == 0x27)
        @__security_check_cookie@4(var_8 ^ &__saved_ebp)
        return 7
    
    eax_1 = data_6cfe4c
    
    if (eax_1 == 0)
        var_c0_1 = "GetClient"
        var_c4 = 0x75
        var_c8 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx = "gClient"
        goto label_46e967
    
    int32_t ecx_1 = arg1[6]
    
    if (ecx_1 != eax_1[0x29a])
        @__security_check_cookie@4(var_8 ^ &__saved_ebp)
        return 0
    
    int32_t ebx_1 = arg1[0x22a]
    int32_t* edi_1 = sub_452b90(ecx_1)
    
    if (ebx_1 == data_632564)
        @__security_check_cookie@4(var_8 ^ &__saved_ebp)
        return 2
    
    uint32_t eax_4 = sub_453be0(arg1)
    
    if (ebx_1 == data_632558 && eax_4 != 1 && eax_4 != 0 && ebx_1 != data_63255c)
        @__security_check_cookie@4(var_8 ^ &__saved_ebp)
        return 1
    
    int32_t eax_7 = sub_453650(edi_1) - 4
    
    if (eax_7 u<= 0x1a)
        bool cond:0_1
        
        switch (eax_7)
            case 0
                int32_t eax_12 = arg1[4]
                
                if (eax_12 == 7 || eax_12 == 3)
                    if (sub_452c00(edi_1, arg1[0xb]) != 0)
                        goto label_46e79e
                    
                    cond:0_1 = sub_453b90(edi_1, arg1) != 0
                else
                    cond:0_1 = sub_453a90(edi_1, arg1) != 0
            case 1, 2, 3, 0xc, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x16, 0x18
                goto label_46e79e
            case 4, 5, 6, 7, 8, 9, 0xa, 0x19, 0x1a
                if (arg1[4] != 0xe)
                    goto label_46e79e
                
                cond:0_1 = arg1[0x1aa] != 0
            case 0xb
                if (sub_452c00(edi_1, arg1[0xb]) != 0)
                    goto label_46e79e
                
                cond:0_1 = arg1[4] != 5
            case 0xd
                if (sub_452c00(edi_1, arg1[0xb]) != 0)
                    goto label_46e79e
                
                cond:0_1 = arg1[4] != 6
            case 0x15, 0x17
                if (sub_452c00(edi_1, arg1[0xb]) != 0)
                    goto label_46e79e
                
                cond:0_1 = arg1[4] != 3
        
        if (cond:0_1)
            goto label_46e79e
        
        if (sub_46b360(arg1) != 0)
            @__security_check_cookie@4(var_8 ^ &__saved_ebp)
            return 6
        
        @__security_check_cookie@4(var_8 ^ &__saved_ebp)
        return 0
    
    label_46e79e:
    
    if (sub_453650(edi_1) == 0x17)
        @__security_check_cookie@4(var_8 ^ &__saved_ebp)
        return 7
    
    bool cond:1_1
    
    if (eax_4 == 0 || eax_4 == 1)
        int32_t eax_27 = arg1[4]
        
        if (eax_27 == 4 || eax_4 == 1)
            @__security_check_cookie@4(var_8 ^ &__saved_ebp)
            return 0
        
        if (eax_27 != 2)
            if (*(arg1 + 0x22) == 0)
                @__security_check_cookie@4(var_8 ^ &__saved_ebp)
                return 5
            
            @__security_check_cookie@4(var_8 ^ &__saved_ebp)
            return 0
        
        eax_1 = sub_45b5f0(arg1)
        
        if (eax_1 == 0)
            var_c0_1 = "RollDieHighlightState"
            var_c4 = 0x6268
            ecx = "gfxTray"
            goto label_46e95d
        
        cond:1_1 = eax_1[0x12] != 0
    else
        if (sub_4541a0() != 0 || data_632564 != 0)
            @__security_check_cookie@4(var_8 ^ &__saved_ebp)
            return 4
        
        if (sub_453650(edi_1) == 6)
            if (arg1[4] == 8)
                int32_t ebx_2 = edi_1[0x2f3]
                int32_t eax_21 = 0
                int32_t edx_7 = 0
                
                if (ebx_2 s> 0)
                    void* ecx_19 = &edi_1[0x204]
                    
                    do
                        if (*ecx_19 == 6)
                            if (eax_21 == arg1[0x78])
                            label_46e89b:
                                @__security_check_cookie@4(var_8 ^ &__saved_ebp)
                                return 9
                            
                            eax_21 += 1
                        
                        edx_7 += 1
                        ecx_19 += 0x18
                    while (edx_7 s< ebx_2)
            
            int32_t eax_22
            int32_t ecx_21
            eax_22, ecx_21 = sub_453650(edi_1)
            
            if (eax_22 != 6)
            label_46e85a:
                
                if (arg1[4] != 7)
                    int32_t var_c0_2 = ecx_21
                    int32_t var_ac[0x29]
                    int32_t eax_24 = sub_45e7f0(edi_1, &var_ac)
                    int32_t ecx_23 = 0
                    
                    if (eax_24 s> 0)
                        do
                            if (var_ac[ecx_23] == arg1)
                                @__security_check_cookie@4(var_8 ^ &__saved_ebp)
                                return 8
                            
                            ecx_23 += 1
                        while (ecx_23 s< eax_24)
            else if (arg1[4] != 7)
                int32_t ebx_3 = edi_1[0x2f3]
                ecx_21 = 0
                
                if (ebx_3 s> 0)
                    int32_t* eax_23 = &edi_1[0x203]
                    
                    do
                        int32_t edx_8 = eax_23[1]
                        
                        if ((edx_8 == 5 || edx_8 == 6) && *eax_23 == arg1)
                            goto label_46e89b
                        
                        ecx_21 += 1
                        eax_23 = &eax_23[6]
                    while (ecx_21 s< ebx_3)
                
                goto label_46e85a
        
        cond:1_1 = eax_4 != 2
    
    if (cond:1_1)
        @__security_check_cookie@4(var_8 ^ &__saved_ebp)
        return 4
    
    @__security_check_cookie@4(var_8 ^ &__saved_ebp)
    return 3
}
