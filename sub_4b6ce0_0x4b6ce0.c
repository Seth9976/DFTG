// 函数名称: sub_4b6ce0
// 虚拟地址: 0x4b6ce0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char** __fastcallsub_4b6ce0(void* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    char** eax_1 = __security_cookie ^ &__saved_ebp
    char** var_8 = eax_1
    
    if (data_643654 != 0 && data_642618 != 0)
        char* eax_2 = sub_4a7d60(data_642654)
        void* eax_3 = sub_4a9e30(eax_2, 0x67)
        void* var_90 = eax_3
        *(eax_2 + 0xe24) = 0
        char* eax_4 = sub_4f0df0(eax_3, eax_3, &data_6218dc, 0x67)
        char* var_8c
        eax_1 = sub_4ade60(&var_8c, *(eax_2 + 0xfec), data_63e5ec, &var_8c)
        char* ecx_3 = var_8c
        int32_t edx_3 = 0
        
        if (ecx_3 != 0)
            do
                edx_3 += 1
            while ((&var_8c)[edx_3] != 0)
        
        if (ecx_3 != 0 && edx_3 != 0)
            goto label_4b6d91
        
        int32_t var_88[0x20]
        
        if (eax_4 == 0)
        label_4b6dff:
            
            if (arg1 != 1)
                if (arg1 != 0xffffffff)
                    sub_489550(eax_1, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\ui2.cpp", 
                        0x3906, "UI2EditorChangeStyleIdx")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                eax_1 = (&var_90)[edx_3]
            else
                eax_1 = var_88[0]
            
            if (eax_1 == 0)
                goto label_4b6e26
            
        label_4b6e4a:
            char** var_a0_2 = eax_1
            char* eax_9 = sub_4f0a90(eax_1, var_90, &data_6218dc, 0x67)
            @__security_check_cookie@4(var_8 ^ &__saved_ebp)
            return eax_9
        
        if (*eax_4 != 0)
        label_4b6e26:
            int32_t eax_8 = sub_4f0b40(eax_1, var_90, &data_6218dc, 0x67)
            @__security_check_cookie@4(var_8 ^ &__saved_ebp)
            return eax_8
        
    label_4b6d91:
        
        if (eax_4 == 0 || *eax_4 == 0)
            goto label_4b6dff
        
        int32_t esi_2 = 0
        
        if (ecx_3 != 0)
            while (true)
                char* eax_6 = eax_4
                
                while (true)
                    edx_3.b = *ecx_3
                    char temp0_1 = *eax_6
                    bool c_1 = edx_3.b u< temp0_1
                    
                    if (edx_3.b == temp0_1)
                        if (edx_3.b == 0)
                            eax_1 = nullptr
                            break
                        
                        edx_3.b = ecx_3[1]
                        char temp1_1 = eax_6[1]
                        c_1 = edx_3.b u< temp1_1
                        
                        if (edx_3.b == temp1_1)
                            ecx_3 = &ecx_3[2]
                            eax_6 = &eax_6[2]
                            
                            if (edx_3.b != 0)
                                continue
                            
                            eax_1 = nullptr
                            break
                    
                    eax_1 = sbb.d(eax_6, eax_6, c_1) | 1
                    break
                
                if (eax_1 == 0)
                    break
                
                ecx_3 = var_88[esi_2]
                esi_2 += 1
                
                if (ecx_3 == 0)
                    goto label_4b6ddf
            
            eax_1 = arg1 + esi_2
            
            if (eax_1 s< 0)
                goto label_4b6e26
            
            eax_1 = (&var_8c)[eax_1]
            
            if (eax_1 == 0 || eax_1 == 0)
                goto label_4b6e26
            
            goto label_4b6e4a
    
    label_4b6ddf:
    @__security_check_cookie@4(var_8 ^ &__saved_ebp)
    return eax_1
}
