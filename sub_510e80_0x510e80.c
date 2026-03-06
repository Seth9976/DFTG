// 函数名称: sub_510e80
// 虚拟地址: 0x510e80
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t** __fastcallsub_510e80(int32_t** arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a2061
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_3c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t edx
    int32_t var_20 = edx
    int32_t var_28 = 0
    int32_t eax_3 = 0
    int32_t* var_14
    int32_t* eax_7
    
    while (true)
        int32_t var_40_1 = eax_3 + 1
        int32_t var_44_1 = edx
        sub_48a9d0(&var_14, "%s%d")
        int32_t var_8_1 = 1
        char* const ecx = &data_5b2591
        int32_t* eax_5 = var_14
        
        if (eax_5 != 0)
            ecx = eax_5
        
        int32_t* ecx_1 = data_1151ad8
        
        if (ecx_1 != 0 && ecx_1[1] == 0x19)
            eax_5 = sub_4981f0(ecx_1)
            int32_t* ebx_1 = eax_5
            
            if (ebx_1 != 0)
                int32_t esi_1 = 0
                
                if (ebx_1[2] s<= 0)
                label_510f78:
                    eax_7 = var_14
                    *arg1 = eax_7
                    break
                
                int32_t edi_1 = 0
                
                while (true)
                    eax_5 = sub_4f0df0(eax_5, *ebx_1 + edi_1, &data_626728, 1)
                    
                    if (eax_5 != 0)
                        char* const ecx_2 = ecx
                        
                        while (true)
                            char edx_3 = *eax_5
                            char temp0_1 = *ecx_2
                            bool c_1 = edx_3 u< temp0_1
                            
                            if (edx_3 == temp0_1)
                                if (edx_3 == 0)
                                    eax_5 = nullptr
                                    break
                                
                                edx_3 = *(eax_5 + 1)
                                char temp2_1 = ecx_2[1]
                                c_1 = edx_3 u< temp2_1
                                
                                if (edx_3 == temp2_1)
                                    eax_5 += 2
                                    ecx_2 = &ecx_2[2]
                                    
                                    if (edx_3 != 0)
                                        continue
                                    
                                    eax_5 = nullptr
                                    break
                            
                            eax_5 = sbb.d(eax_5, eax_5, c_1) | 1
                            break
                        
                        if (eax_5 == 0)
                            int32_t var_8_3 = 3
                            
                            if (data_aca1f4 != 0)
                                int32_t* eax_11 = var_14
                                
                                if (eax_11 != 0 && *eax_11 != 0)
                                    char* eax_12 = sub_48a080(&var_14)
                                    int32_t temp3_1 = *(eax_12 + 4)
                                    *(eax_12 + 4) -= 1
                                    
                                    if (temp3_1 == 1)
                                        sub_4984f0(eax_12, *(eax_12 + 0xc) + 0x10)
                                        var_14 = &data_5b2591
                            
                            eax_3 += 1
                            edx = var_20
                            var_8_3.b = 0
                            
                            if (eax_3 s< 0xf4240)
                                break
                            
                            sub_489550(eax_3, &data_5b2591, "Halt", 
                                "d:\ax\trunk\ax2017\engine\windows\editorwindow.cpp", 0xb02, 
                                "EmitterGetUniqueName")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_489700()
                            noreturn
                    
                    esi_1 += 1
                    edi_1 += 0x168
                    
                    if (esi_1 s>= ebx_1[2])
                        goto label_510f78
                
                continue
        
        sub_489550(eax_5, &data_5b2591, "pParticleDef", 
            "d:\ax\trunk\ax2017\engine\windows\editorwindow.cpp", 0xad7, "EmitterIsNameUsed")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    if (eax_7 != 0 && *eax_7 != 0)
        char* eax_8 = sub_48a080(arg1)
        *(eax_8 + 4) += 1
        eax_7 = var_14
    
    int32_t var_28_1 = 1
    int32_t var_8_2 = 2
    
    if (data_aca1f4 != 0 && eax_7 != 0 && *eax_7 != 0)
        char* eax_9 = sub_48a080(&var_14)
        int32_t temp1_1 = *(eax_9 + 4)
        *(eax_9 + 4) -= 1
        
        if (temp1_1 == 1)
            sub_4984f0(eax_9, *(eax_9 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
