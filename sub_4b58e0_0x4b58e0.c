// 函数名称: sub_4b58e0
// 虚拟地址: 0x4b58e0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char*sub_4b58e0(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t* arg4, int32_t* arg5, int32_t* arg6, int32_t* arg7, int32_t arg8)
{
    // 第一条实际指令: int32_t* ecx
    int32_t* ecx
    int32_t edx
    ecx, edx = __alloca_probe(0x6034)
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    int32_t eax_7 = arg8
    int32_t* var_6028 = eax_7
    int32_t var_18
    char const* const var_14
    char* ecx_1
    
    if (edx s< 0)
        var_14 = "AttribTreeItemGetByIndex"
        var_18 = 0x3503
        ecx_1 = "idx >= 0"
    else if (edx s< ecx[2])
        int32_t ecx_3 = edx * 0x18
        char* var_6010 = *ecx + ecx_3
        eax_7 = ecx_3 s/ 0x18
        
        if (eax_7 == edx)
            void* eax_13 = sub_4a92c0(ecx, edx)
            *arg3 = edx
            eax_7 = var_6010
            int32_t ecx_5 = eax_7
            int32_t var_6024 = ecx_5
            int32_t edx_4 = *(eax_7 + 0x10)
            int32_t esi_1
            
            if (edx_4 != 0)
                int32_t esi_2 = 0
                
                if (edx_4 s> 0)
                    while (true)
                        var_6024 = ecx_5 + 0x18
                        int32_t edx_5
                        eax_7, edx_5 = sub_4b58a0(&var_6024)
                        esi_2 += eax_7
                        
                        if (edx_5 == 1)
                            break
                        
                        ecx_5 = var_6024
                
                esi_1 = esi_2 + 1
            else
                esi_1 = edx_4 + 1
            
            int32_t* edx_8 = arg5
            *edx_8 = esi_1
            void* const eax_16
            
            if (arg2 != 1)
                if (arg2 != 2)
                    eax_16 = nullptr
                else
                    eax_16 = sub_4a92c0(ecx, arg1)
                    edx_8 = arg5
                
                goto label_4b5a79
            
            if (arg1 s>= 0)
                eax_7 = ecx
                
                if (arg1 s< *(eax_7 + 8))
                    eax_16 = *eax_7 + arg1 * 0x18
                label_4b5a79:
                    
                    if (eax_13 != 0)
                        *(eax_13 + 0x10) -= 1
                    
                    if (eax_16 != 0)
                        *(eax_16 + 0x10) += 1
                    
                    eax_7 = *edx_8
                    
                    if (eax_7 u< 0x400)
                        char var_600c[0x5ff0]
                        eax_7 = sub_579300(&var_600c, var_6010, eax_7 * 0x18)
                        int32_t eax_19
                        
                        if (arg2 == 0)
                            eax_19 = 0
                        label_4b5b73:
                            *arg4 = eax_19
                            int32_t ecx_13 = *arg3
                            int32_t* edx_12
                            int32_t edi_1
                            
                            if (ecx_13 == eax_19)
                                edx_12 = arg6
                                edi_1 = 0
                                *edx_12 = 0
                                *arg7 = 0
                                *var_6028 = 0
                            else if (ecx_13 u>= eax_19)
                                edx_12 = arg6
                                *edx_12 = eax_19
                                *arg7 = *arg5 + *arg4
                                edi_1 = edx - *arg4
                                *var_6028 = edi_1
                            else
                                *arg6 = *arg5 + ecx_13
                                *arg7 = *arg3
                                *var_6028 = *arg4 - *arg6
                                *arg4 -= *arg5
                                edi_1 = *var_6028
                                edx_12 = arg6
                            
                            int32_t ecx_18 = *ecx
                            sub_579a90(ecx_18 + *arg7 * 0x18, ecx_18 + *edx_12 * 0x18, edi_1 * 0x18)
                            sub_579300(*ecx + *arg4 * 0x18, &var_600c, *arg5 * 0x18)
                            char* result
                            result.b = 1
                            int32_t entry_ebx
                            @__security_check_cookie@4(entry_ebx ^ &__saved_ebp)
                            return result
                        
                        if (arg2 == 1)
                            eax_19 = arg1 + 1
                            goto label_4b5b73
                        
                        if (arg2 != 2)
                            var_14 = "AttribTreeItemMove"
                            var_18 = 0x3545
                            ecx_1 = "Halt"
                        else if (arg1 s>= 0)
                            eax_7 = ecx
                            
                            if (arg1 s< *(eax_7 + 8))
                                char* eax_21 = *eax_7 + arg1 * 0x18
                                var_6010 = eax_21
                                int32_t edx_9 = *(eax_21 + 0x10)
                                int32_t esi_4
                                
                                if (edx_9 != 0)
                                    int32_t esi_5 = 0
                                    
                                    if (edx_9 s> 0)
                                        while (true)
                                            var_6010 = &eax_21[0x18]
                                            int32_t eax_23
                                            int32_t edx_10
                                            eax_23, edx_10 = sub_4b58a0(&var_6010)
                                            esi_5 += eax_23
                                            
                                            if (edx_10 == 1)
                                                break
                                            
                                            eax_21 = var_6010
                                    
                                    esi_4 = esi_5 + 1
                                else
                                    esi_4 = edx_9 + 1
                                
                                eax_19 = arg1 + esi_4
                                goto label_4b5b73
                            
                            var_14 = "AttribTreeItemGetByIndex"
                            var_18 = 0x3504
                            ecx_1 = "idx < tree.numItems"
                        else
                            var_14 = "AttribTreeItemGetByIndex"
                            var_18 = 0x3503
                            ecx_1 = "idx >= 0"
                    else
                        var_14 = "AttribTreeItemMove"
                        var_18 = 0x3538
                        ecx_1 = "sourceCount < MAX_SELECTED"
                else
                    var_14 = "AttribTreeItemGetByIndex"
                    var_18 = 0x3504
                    ecx_1 = "idx < tree.numItems"
            else
                var_14 = "AttribTreeItemGetByIndex"
                var_18 = 0x3503
                ecx_1 = "idx >= 0"
        else
            var_14 = "AttribTreeItemMove"
            var_18 = 0x3526
            ecx_1 = "source - tree.items == sourceIdx"
    else
        var_14 = "AttribTreeItemGetByIndex"
        var_18 = 0x3504
        ecx_1 = "idx < tree.numItems"
    
    sub_489550(eax_7, &data_5b2591, ecx_1, "d:\ax\trunk\ax2017\engine\ui2.cpp", var_18, var_14)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
