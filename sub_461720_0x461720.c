// 函数名称: sub_461720
// 虚拟地址: 0x461720
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_461720(int32_t arg1, void* arg2, int32_t* arg3, int32_t* arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    uint32_t eax_2 = sub_45b560(arg5)
    int32_t var_22c
    char const* const var_228
    char* ecx_2
    
    if (*arg2 == 1)
        int32_t esi_2 = *(arg2 + 8) - 1
        
        if (*arg5 == 1)
            int32_t eax_4 = arg5[2] - 1
            int32_t eax_5 = sub_45fb60(eax_2)
            int32_t ebx_1 = 1
            
            if (esi_2 == eax_5 || esi_2 == 6)
                ebx_1 = 2
            
            if (eax_4 == eax_5 || eax_4 == 6)
                ebx_1 += 1
            
            _memset(&arg4[2], 0, 0x88)
            int32_t ecx_3 = data_632804
            *arg4 = ebx_1
            arg4[1] = 0
            int32_t var_20c[0x81]
            int32_t ebx_2 = sub_4453c0(&var_20c, *arg3, ecx_3, &var_20c, 5)
            int32_t ecx_4 = 0
            int32_t var_210_1 = ebx_2
            
            if (ebx_2 s<= 0)
            label_4618b7:
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return arg4
            
            while (true)
                var_208
                void* edx_2 = *(&var_208 + (ecx_4 << 3))
                int32_t eax_10 = *(edx_2 + 4)
                
                if ((eax_10.b & 1) != 0 && ((eax_10 & 0x800) == 0 || eax_5 == 2)
                        && ((eax_10 & 0x1000) == 0 || eax_5 == 3)
                        && ((eax_10 & 0x2000) == 0 || eax_5 == 4)
                        && ((eax_10 & 0x4000) == 0 || eax_5 == 5))
                    if ((eax_10 & 0x10000) != 0)
                        eax_2 = *(edx_2 + 8)
                        arg4[1] += eax_2
                        int32_t ebx_3 = arg4[0x23]
                        
                        if (ebx_3 s>= 0x20)
                            var_228 = "CalcConsumeValue"
                            var_22c = 0x3d67
                            ecx_2 = "retval.numPowers < MAX_TABLEAU"
                            break
                            break
                        
                        arg4[ebx_3 + 3] = var_20c[ecx_4 * 2]
                        arg4[0x23] += 1
                        eax_10 = *(edx_2 + 4)
                        ebx_2 = var_210_1
                    
                    if ((eax_10 & 0x20000) != 0)
                        eax_2 = *(edx_2 + 8)
                        *arg4 += eax_2
                        int32_t edx_3 = arg4[0x23]
                        
                        if (edx_3 s>= 0x20)
                            var_228 = "CalcConsumeValue"
                            var_22c = 0x3d6d
                            ecx_2 = "retval.numPowers < MAX_TABLEAU"
                            break
                        
                        arg4[edx_3 + 3] = var_20c[ecx_4 * 2]
                        arg4[0x23] += 1
                
                ecx_4 += 1
                
                if (ecx_4 s>= ebx_2)
                    goto label_4618b7
        else
            var_228 = "DieGetColor"
            var_22c = 0x3d3f
            ecx_2 = "die.type == ROLLGFX_DIE"
    else
        var_228 = "DieGetColor"
        var_22c = 0x3d3f
        ecx_2 = "die.type == ROLLGFX_DIE"
    
    sub_489550(eax_2, &data_5b2591, ecx_2, "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", var_22c, 
        var_228)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
