// 函数名称: sub_50b6c0
// 虚拟地址: 0x50b6c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char** __convention("regparm")sub_50b6c0(int32_t arg1, int32_t arg2, char** arg3, char* arg4, int32_t arg5, int32_t* arg6)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a1d0a
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_38 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_1c = 0
    int32_t var_3c = arg2
    int32_t var_8_1 = 1
    sub_48a9d0(arg3, "samplerFn_%s")
    int32_t* ebx = arg6
    int32_t var_1c_1 = 2
    int32_t ecx = ebx[0x41]
    ebx[0x41] = ecx + 1
    ebx[ebx[0x52] + 0x42] = ecx
    ebx[0x52] += 1
    sub_48a560((ecx << 3) + 4 + ebx, arg3)
    int32_t var_8_2 = 0
    int32_t var_1c_2 = 1
    int32_t* arg_4
    int32_t edx = *arg_4
    int32_t ecx_3 = edx
    int32_t i = edx + 1
    int32_t i_2 = i
    
    if (i s< arg5 + 1 + edx)
        char* esi_1 = arg4
        
        do
            void* esi_2 = &esi_1[i * 0x58]
            
            if (*(esi_2 + 4) == 0)
                int32_t i_1 = i
                
                if (*esi_2 == 0)
                    int32_t edx_1 = ebx[0x57]
                    int32_t ecx_4 = 0
                    
                    if (edx_1 s> 0)
                        void* eax_10 = &ebx[0x53]
                        
                        while (true)
                            ebx = arg6
                            
                            if (*eax_10 == *(esi_2 + 0x10))
                                break
                            
                            ecx_4 += 1
                            eax_10 += 4
                            
                            if (ecx_4 s>= edx_1)
                                goto label_50b7be
                    
                    if (edx_1 s<= 0 || ecx_4 == 0xffffffff)
                    label_50b7be:
                        ecx_4 = edx_1
                        ebx[0x57] = edx_1 + 1
                        ebx[ecx_4 + 0x53] = *(esi_2 + 0x10)
                        i = i_2
                    
                    ebx[i_1 * 3 + 0x59] = ecx_4
                
                void* edx_2 = esi_2 + 0x34
                void* eax_15 = &data_628220
                int32_t esi_3 = 0x1c
                
                while (true)
                    if (*edx_2 != *eax_15)
                        int32_t ecx_6 = ebx[0xa8]
                        ebx[0xa8] = ecx_6 + 1
                        ebx[i_1 * 3 + 0x58] = ecx_6
                        break
                    
                    edx_2 += 4
                    eax_15 += 4
                    int32_t temp2_1 = esi_3
                    esi_3 -= 4
                    
                    if (temp2_1 u< 4)
                        ebx[i_1 * 3 + 0x58] = 0xffffffff
                        break
                
                esi_1 = arg4
                int32_t* eax_21 = i * 0x58
                int32_t ecx_7
                
                if (*(eax_21 + esi_1) != 2)
                    ecx_7 = 0
                else
                    ecx_7 = *(eax_21 + esi_1 + 8)
                
                int32_t eax_25 = *arg_4 - ecx_7 + arg5
                sub_50b170(eax_25, &i_2, esi_1, ebx, i == eax_25)
                i = i_2
            else
                esi_1 = arg4
                i += 1
                i_2 = i
            
            ecx_3 = *arg_4
        while (i s< arg5 + 1 + ecx_3)
    
    int32_t var_8_6
    
    if (ecx_3 == 0xffffffff)
        sub_48a2c0(&arg_4, "\tfloat2 uv = arg_uv;\n")
        int32_t var_8_7 = 6
        sub_50aeb0(ebx, &arg_4)
        var_8_6 = 7
    else
        void* esi_5 = ecx_3 * 0x58 + arg4
        int32_t var_8_3 = 2
        sub_50aeb0(ebx, sub_50a790(&arg_4, esi_5))
        int32_t var_8_4 = 3
        
        if (data_aca1f4 != 0)
            int32_t* eax_31 = arg_4
            
            if (eax_31 != 0 && *eax_31 != 0)
                char* eax_32 = sub_48a080(&arg_4)
                int32_t temp0_1 = *(eax_32 + 4)
                *(eax_32 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_4984f0(eax_32, *(eax_32 + 0xc) + 0x10)
        
        var_8_4.b = 0
        int32_t var_8_5 = 4
        sub_50aeb0(ebx, sub_50a700(esi_5 + 0x34, edx, &arg_4, esi_5 + 0x34, ebx))
        var_8_6 = 5
    
    if (data_aca1f4 != 0)
        int32_t* eax_35 = arg_4
        
        if (eax_35 != 0 && *eax_35 != 0)
            char* eax_36 = sub_48a080(&arg_4)
            int32_t temp1_1 = *(eax_36 + 4)
            *(eax_36 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_4984f0(eax_36, *(eax_36 + 0xc) + 0x10)
    
    var_8_6.b = 0
    sub_50af80(ebx)
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg3
}
