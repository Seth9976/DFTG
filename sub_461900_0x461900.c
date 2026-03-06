// 函数名称: sub_461900
// 虚拟地址: 0x461900
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t (* __convention("regparm")sub_461900(int32_t arg1, int32_t arg2, int32_t* arg3, uint32_t (* arg4)[0x4], int32_t* arg5, char arg6))[0x4]
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t eax_3 = sub_45fb60(sub_45b560(arg5))
    _memset(arg4, 0, 0x90)
    int32_t eax_4 = eax_3 - 2
    int32_t var_228_1
    char const* const ecx_7
    
    if (eax_4 u> 3)
        char const* const var_224_2 = "CalcTradeValue"
        var_228_1 = 0x3d84
        ecx_7 = "Halt"
    else
        switch (eax_4)
            case 0
                (*arg4)[1] = 3
            case 1
                (*arg4)[1] = 4
            case 2
                (*arg4)[1] = 5
            case 3
                (*arg4)[1] = 6
        
        int32_t var_210[0x81]
        int32_t eax_6 = sub_4453c0(&var_210, *arg3, data_632804, &var_210, 5)
        int32_t edx_1 = 0
        
        if (eax_6 s<= 0)
        label_461a62:
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return arg4
        
        while (true)
            var_20c
            void* edi_1 = *(&var_20c + (edx_1 << 3))
            int32_t eax_7 = *(edi_1 + 4)
            
            if ((eax_7.b & 2) != 0)
                if (eax_7.b s>= 0)
                    goto label_4619c7
                
                if (arg6 != 0)
                    (*arg4)[1] -= 1
                    (*arg4)[2].b = 1
                label_4619c7:
                    
                    if (((eax_7 & 0x800) == 0 || eax_3 == 2) && ((eax_7 & 0x1000) == 0 || eax_3 == 3)
                            && ((eax_7 & 0x2000) == 0 || eax_3 == 4)
                            && ((eax_7 & 0x4000) == 0 || eax_3 == 5))
                        if ((eax_7 & 0x10000) != 0)
                            eax_4 = *(edi_1 + 8)
                            (*arg4)[1] += eax_4
                            uint32_t ecx_3 = (*arg4)[0x23]
                            
                            if (ecx_3 s>= 0x20)
                                char const* const var_224 = "CalcTradeValue"
                                var_228_1 = 0x3d9b
                                ecx_7 = "retval.numPowers < MAX_TABLEAU"
                                break
                            
                            (*arg4)[ecx_3 + 3] = var_210[edx_1 * 2]
                            (*arg4)[0x23] += 1
                            eax_7 = *(edi_1 + 4)
                        
                        if ((eax_7 & 0x20000) != 0)
                            eax_4 = *(edi_1 + 8)
                            *arg4 += eax_4
                            uint32_t ecx_4 = (*arg4)[0x23]
                            
                            if (ecx_4 s>= 0x20)
                                char const* const var_224_1 = "CalcTradeValue"
                                var_228_1 = 0x3da1
                                ecx_7 = "retval.numPowers < MAX_TABLEAU"
                                break
                            
                            (*arg4)[ecx_4 + 3] = var_210[edx_1 * 2]
                            (*arg4)[0x23] += 1
            
            edx_1 += 1
            
            if (edx_1 s>= eax_6)
                goto label_461a62
    
    sub_489550(eax_4, &data_5b2591, ecx_7, "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 
        var_228_1, "CalcTradeValue")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
