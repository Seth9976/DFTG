// 函数名称: sub_45aa00
// 虚拟地址: 0x45aa00
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_45aa00(int32_t arg1, int32_t* arg2, uint32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int64_t* eax_2 = arg2[4]
    int32_t var_174_1
    char const* const var_170_1
    char* ecx_1
    
    if (eax_2 == arg4)
        if (arg4 == 4)
            int32_t ecx_2 = arg2[7]
            int32_t* eax_3 = sub_452cc0(ecx_2)
            int32_t var_170_2 = arg5
            sub_45a730(eax_3, arg2, arg3, eax_3, 0, ecx_2.b)
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return 0
        
        if (*(arg2 + 0x21) != 0)
            *(arg2 + 0x21) = 0
            sub_45a830(eax_2, arg2, arg3, eax_2, true, 0, 0, 1, arg5)
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return 0
        
        eax_2 = sub_459da0(arg4)
        int64_t* var_b0_1 = eax_2
        
        if (*arg2 == 1)
            eax_2 = arg2[4]
            
            if (eax_2 == 4)
                var_170_1 = "ComputeDieOrder"
                var_174_1 = 0xef0
                ecx_1 = "gfxSource.die.where != DW_GOOD"
            else
                int32_t result
                int64_t* edi_2
                
                if (eax_2 != 1)
                    result = 0
                    
                    if (*(arg2 + 0x21) != 0)
                    label_45ab84:
                        edi_2 = var_b0_1
                    label_45ab95:
                        int32_t var_150 = 0
                        uint32_t var_148[0x8][0x4]
                        _memset(&var_148, 0, 0x8c)
                        int32_t eax_6 = arg2[6]
                        int64_t* var_158 = edi_2
                        int32_t var_15c = eax_6
                        int32_t result_1 = result
                        int32_t var_14c = 0xffffffff
                        char var_170_7 = arg5.b
                        void var_ac
                        __builtin_memcpy(&var_ac, &var_15c, 0xa0)
                        sub_4528c0(eax_6, &var_ac, &arg2[0x1c], 0, var_170_7)
                        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                        return result
                    
                    int32_t* var_b8
                    sub_453870(&var_b8, arg3, eax_2)
                    int64_t* ecx_10 = var_b8
                    int32_t var_b4
                    int32_t edx_1 = var_b4
                    eax_2 = sub_4538b0(&var_b8)
                    int32_t* edi_1 = var_b8
                    
                    if (ecx_10 != edi_1)
                        while (true)
                            if (ecx_10 == 0)
                                var_170_1 = "Dice::DiceIt::operator *"
                                var_174_1 = 0x5da
                                ecx_1 = &data_5e3f90
                                goto label_45ac35
                            
                            if (*(ecx_10 + 0x21) == 0)
                                if (ecx_10 == arg2)
                                    if (result s>= 0)
                                        break
                                    
                                    goto label_45ab65
                                
                                result += 1
                            
                            if (edx_1 != 0)
                                eax_2 = sub_452c30(edx_1)
                                ecx_10 = eax_2
                                edx_1 = ecx_10[5].d
                            else
                                ecx_10 = nullptr
                            
                            if (ecx_10 == edi_1)
                                goto label_45ac1c
                        
                        goto label_45ab84
                    
                label_45ac1c:
                    var_170_1 = "ComputeDieOrder"
                    var_174_1 = 0xf06
                    ecx_1 = "Halt"
                else
                    result = 0xffffffff
                label_45ab65:
                    edi_2 = var_b0_1
                    
                    if (edi_2 == 8)
                        goto label_45ab95
                    
                    var_170_1 = "QueueReturnDie"
                    var_174_1 = 0x22ca
                    ecx_1 = "slot >= 0 || loc == ROLL_LOC_BAG_DICE"
        else
            var_170_1 = "ComputeDieOrder"
            var_174_1 = 0xeef
            ecx_1 = "gfxSource.type == ROLLGFX_DIE"
    else
        var_170_1 = "QueueReturnDie"
        var_174_1 = 0x22b7
        ecx_1 = "gfx.die.where == where"
    
    label_45ac35:
    sub_489550(eax_2, &data_5b2591, ecx_1, "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 
        var_174_1, var_170_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
