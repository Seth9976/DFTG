// 函数名称: sub_50e090
// 虚拟地址: 0x50e090
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char** __fastcallsub_50e090(char** arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a1f00
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** var_20 = arg1
    int32_t edx = *arg2
    
    for (void* i = &data_626358; i s< &data_626728; i += 8)
        if (*i == edx)
            void* eax_4 = sub_4f0fd0(&data_626728, edx)
            int32_t ecx = *(eax_4 + 0x10)
            char* var_18
            char** ecx_3
            
            if (ecx == 0xf)
                void* edx_1 = arg2[2]
                
                if (edx_1 == 0)
                label_50e32c:
                    int32_t var_38_7 = *(i + 4)
                    sub_48a9d0(arg1, &data_5d8f9c)
                else
                    sub_50d560(&var_18, edx_1)
                    int32_t var_8_1 = 0
                    char* const ecx_2 = &data_5b2591
                    char* eax_5 = var_18
                    
                    if (eax_5 != 0)
                        ecx_2 = eax_5
                    
                    char* const var_38 = ecx_2
                    int32_t var_3c = *(i + 4)
                    sub_48a9d0(arg1, "%s   [%s]")
                    int32_t var_8_2 = 1
                label_50e131:
                    
                    if (data_aca1f4 != 0)
                        char* eax_6 = var_18
                        
                        if (eax_6 != 0 && *eax_6 != 0)
                            ecx_3 = &var_18
                        label_50e155:
                            char* eax_7 = sub_48a080(ecx_3)
                            int32_t temp1_1 = *(eax_7 + 4)
                            *(eax_7 + 4) -= 1
                            
                            if (temp1_1 == 1)
                                sub_4984f0(eax_7, *(eax_7 + 0xc) + 0x10)
                                fsbase->NtTib.ExceptionList = ExceptionList
                                return arg1
            else if (ecx != 0xa)
                if (eax_4 != data_12bad4c)
                    if (ecx == 8)
                        int32_t eax_19 = arg2[2]
                        
                        if (eax_19 != 0)
                            int32_t var_38_5 = eax_19
                            int32_t var_3c_4 = *(i + 4)
                            sub_48a9d0(arg1, "%s   %s")
                            fsbase->NtTib.ExceptionList = ExceptionList
                            return arg1
                    else if (ecx == 1)
                        int32_t var_38_6 = arg2[2]
                        int32_t var_3c_5 = *(i + 4)
                        sub_48a9d0(arg1, "%s   %d")
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return arg1
                    
                    goto label_50e32c
                
                int32_t* ebx_1 = arg2[2]
                
                if (ebx_1[2] != 1)
                    int32_t var_38_4 = *(i + 4)
                    sub_48a9d0(arg1, "%s   [path]")
                else
                    int32_t* eax_11 = *ebx_1
                    float xmm1_1 = *eax_11
                    float temp0_1 = eax_11[1]
                    xmm1_1 - temp0_1
                    eax_11:1.b = (xmm1_1 == temp0_1 ? 1 : 0) << 6
                        | (is_unordered.d(xmm1_1, temp0_1) ? 1 : 0) << 2 | (xmm1_1 < temp0_1 ? 1 : 0)
                    bool p_2 = unimplemented  {test ah, 0x44}
                    
                    if (not(p_2))
                        sub_50d3a0(&var_18, xmm1_1)
                        int32_t var_8_3 = 2
                        char* const ecx_8 = &data_5b2591
                        char* eax_12 = var_18
                        
                        if (eax_12 != 0)
                            ecx_8 = eax_12
                        
                        char* const var_38_2 = ecx_8
                        int32_t var_3c_2 = *(i + 4)
                        sub_48a9d0(arg1, "%s   [%s]")
                        int32_t var_8_4 = 3
                        goto label_50e131
                    
                    char* var_1c
                    sub_50d3a0(&var_1c, xmm1_1)
                    int32_t var_8_5 = 4
                    char* var_14
                    sub_50d3a0(&var_14, *(*ebx_1 + 4))
                    var_8_5.b = 5
                    char* const edx_4 = &data_5b2591
                    char* eax_14 = var_14
                    char* const ecx_11 = &data_5b2591
                    
                    if (eax_14 != 0)
                        ecx_11 = eax_14
                    
                    char* eax_15 = var_1c
                    char* const var_38_3 = ecx_11
                    
                    if (eax_15 != 0)
                        edx_4 = eax_15
                    
                    char* const var_3c_3 = edx_4
                    int32_t var_40_1 = *(i + 4)
                    sub_48a9d0(arg1, "%s   [%s to %s]")
                    var_8_5.b = 6
                    
                    if (data_aca1f4 != 0)
                        char* eax_16 = var_14
                        
                        if (eax_16 != 0 && *eax_16 != 0)
                            char* eax_17 = sub_48a080(&var_14)
                            int32_t temp2_1 = *(eax_17 + 4)
                            *(eax_17 + 4) -= 1
                            
                            if (temp2_1 == 1)
                                sub_4984f0(eax_17, *(eax_17 + 0xc) + 0x10)
                                var_14 = &data_5b2591
                    
                    int32_t var_8_6 = 7
                    
                    if (data_aca1f4 != 0)
                        char* eax_18 = var_1c
                        
                        if (eax_18 != 0 && *eax_18 != 0)
                            ecx_3 = &var_1c
                            goto label_50e155
            else
                int32_t var_38_1 = *(i + 4)
                void* const var_3c_1
                
                if ((arg2[2] | arg2[3]) == 0)
                    var_3c_1 = "%s   [false]"
                else
                    var_3c_1 = "%s   [true]"
                
                sub_48a9d0(arg1, var_3c_1)
            fsbase->NtTib.ExceptionList = ExceptionList
            return arg1
    
    sub_489550(&ExceptionList, &data_5b2591, "Halt", 
        "d:\ax\trunk\ax2017\engine\windows\editorwindow.cpp", 0x462, "FindToolData")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
