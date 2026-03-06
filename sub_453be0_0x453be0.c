// 函数名称: sub_453be0
// 虚拟地址: 0x453be0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __fastcallsub_453be0(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    char const* const var_c0
    int32_t var_bc
    char const* const var_b8_1
    char* ecx
    
    if (*arg1 == 1)
        void* ecx_1 = data_6cfe4c
        
        if (ecx_1 != 0)
            void* eax_2 = sub_452b90(*(ecx_1 + 0xa68))
            char eax_12
            bool cond:0_1
            bool cond:2_1
            bool cond:3_1
            
            if (*eax_2 == arg1[6] && sub_46b360(arg1) != 0)
                switch (sub_453650(eax_2) - 4)
                    case 0
                        if (data_632590 != 6)
                            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                            return 0
                        
                        int32_t eax_47 = arg1[4]
                        
                        if (eax_47 == 3)
                            if (sub_452c00(eax_2, arg1[0xb]) == 0
                                    || *(eax_2 + 0x308) + *(eax_2 + 0x300) s<= 0)
                                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                                return 0
                            
                            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                            return 2
                        
                        if (eax_47 == 7)
                            if (sub_452c00(eax_2, arg1[0xb]) != 0)
                                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                                return 3
                            
                            cond:2_1 = sub_453b90(eax_2, arg1) == 0
                            goto label_453fb5
                        
                        if (sub_453a90(eax_2, arg1) == 0)
                            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                            return 0
                        
                        if (*(eax_2 + 0x308) + *(eax_2 + 0x300) s> 0 && sub_452ea0(eax_2, 3) != 0)
                            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                            return 3
                        
                        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                        return 2
                    case 2
                        if (data_632590 != 2)
                            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                            return 0
                        
                        int32_t eax_7 = arg1[4]
                        
                        if (eax_7 == 7)
                            cond:0_1 = *(arg1 + 0x22) == 0
                        label_453d4d:
                            
                            if (cond:0_1)
                                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                                return 2
                            
                            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                            return 0
                        
                        if (eax_7 - 8 u> 5 || *(arg1 + 0x22) != 0)
                            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                            return 0
                        
                        int32_t eax_9
                        int32_t ecx_7
                        eax_9, ecx_7 = sub_452ea0(eax_2, 7)
                        
                        if (eax_9 == 0)
                            int32_t var_b8_2 = ecx_7
                            void var_ac
                            
                            if (sub_45e6c0(eax_2, &var_ac) != 1)
                                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                                return 2
                        
                        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                        return 3
                    case 4
                        eax_12 = sub_45d190(1)
                        
                        if (eax_12 == 0)
                            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                            return 0
                        
                        int32_t ecx_11 = arg1[4]
                        
                        if (ecx_11 == 9)
                            goto label_453f1f
                        
                        if (ecx_11 == 0xe)
                            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                            return 0
                        
                        if (ecx_11 != 0xf)
                            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                            return 0
                        
                        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                        return 3
                    case 0xb
                        if (sub_45d190(2) == 0)
                            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                            return 0
                        
                        int32_t eax_15 = arg1[4]
                        
                        if (eax_15 == 5)
                        label_453ed7:
                            uint32_t eax_39 = zx.d(sub_452c00(eax_2, arg1[0xb]))
                            int32_t eax_40 = neg.d(eax_39)
                            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                            return sbb.d(eax_40, eax_40, eax_39 != 0) & 3
                        
                        if (eax_15 != 0xa)
                            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                            return 0
                        
                        if (sub_452c00(eax_2, arg1[0xb]) == 0)
                            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                            return 0
                        
                        cond:0_1 = sub_453250(eax_2) == 0
                        goto label_453d4d
                    case 0xd
                        if (sub_45d190(3) == 0)
                            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                            return 0
                        
                        int32_t eax_20 = arg1[4]
                        
                        if (eax_20 == 6)
                            goto label_453ed7
                        
                        if (eax_20 != 0xb)
                            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                            return 0
                        
                        if (sub_452c00(eax_2, arg1[0xb]) == 0)
                            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                            return 0
                        
                        if (sub_4532b0(eax_2) != 0)
                            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                            return 0
                        
                        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                        return 2
                    case 0xf
                        if (sub_45d190(4) == 0)
                            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                            return 0
                        
                        int32_t eax_29 = arg1[4]
                        
                        if (eax_29 == 4)
                            cond:2_1 = sub_452c00(eax_2, arg1[0xb]) == 0
                        label_453fb5:
                            
                            if (cond:2_1)
                                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                                return 0
                            
                            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                            return 3
                        
                        if (eax_29 != 0xc)
                            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                            return 0
                        
                        if (sub_452c00(eax_2, arg1[0xb]) == 0)
                            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                            return 0
                        
                        cond:3_1 = sub_453400(eax_2) == 0
                    label_453de3:
                        
                        if (cond:3_1)
                            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                            return 0
                        
                        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                        return 2
                    case 0x11
                        if (sub_45d190(5) == 0)
                            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                            return 0
                        
                        int32_t eax_34 = arg1[4]
                        
                        if (eax_34 == 4)
                            goto label_453ed7
                        
                        if (eax_34 != 0xd)
                            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                            return 0
                        
                        if (sub_452c00(eax_2, arg1[0xb]) == 0)
                            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                            return 0
                        
                        int32_t i = *(eax_2 + 0x2c4)
                        int32_t edi_1 = 0
                        
                        if (i == 0)
                            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                            return 0
                        
                        do
                            edi_1 += 1
                            i = *(sub_452d50(i) + 0x20)
                        while (i != 0)
                        
                        if (edi_1 s<= 0)
                            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                            return 0
                        
                        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                        return 2
                    case 0x13
                        eax_12 = sub_452c00(eax_2, arg1[0xb])
                    label_453f1f:
                        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                        return zx.d(eax_12) * 2
                    case 0x15
                        int32_t eax_37 = arg1[4]
                        
                        if (eax_37 != 3)
                            if (eax_37 != 7)
                                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                                return 0
                            
                            goto label_453ed7
                        
                        if (sub_452c00(eax_2, arg1[0xb]) == 0)
                            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                            return 0
                        
                        if (sub_4539b0(eax_2) s<= 0)
                            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                            return 0
                        
                        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                        return 2
                    case 0x17
                        int32_t edx_4 = arg1[4]
                        bool cond:1_1
                        
                        if (sub_45d190(3) == 0)
                            if (edx_4 == 3)
                                goto label_453ed7
                            
                            cond:1_1 = edx_4 != 5
                        else
                            if (edx_4 == 3)
                                goto label_453ed7
                            
                            cond:1_1 = edx_4 != 6
                        
                        if (cond:1_1)
                            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                            return 0
                        
                        if (sub_452c00(eax_2, arg1[0xb]) == 0)
                            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                            return 0
                        
                        cond:3_1 = sub_4538d0(eax_2) == 0
                        goto label_453de3
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return 1
        
        var_b8_1 = "GetClient"
        var_bc = 0x75
        var_c0 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx = "gClient"
    else
        var_b8_1 = "CanDragDie"
        var_bc = 0x68b
        var_c0 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
        ecx = "gfx.type == ROLLGFX_DIE"
    
    sub_489550(eax_1, &data_5b2591, ecx, var_c0, var_bc, var_b8_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
