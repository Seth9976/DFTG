// 函数名称: sub_4d3250
// 虚拟地址: 0x4d3250
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_4d3250(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a0109
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_20 = arg1
    int32_t var_14 = 0
    int32_t var_8_1 = 1
    char* arg_4
    char* eax_3 = arg_4
    
    if (eax_3 == 0 || *eax_3 == 0)
    label_4d34e3:
        *arg1 = eax_3
        
        if (eax_3 != 0 && *eax_3 != 0)
            char* eax_24 = sub_48a080(arg1)
            *(eax_24 + 4) += 1
            eax_3 = arg_4
        
        int32_t var_14_6 = 1
        int32_t var_8_5 = 2
    label_4d3509:
        
        if (data_aca1f4 != 0)
            goto label_4d3512
    else
        bool cond:0_1 = *(sub_48a080(&arg_4) + 8) == 0
        eax_3 = arg_4
        
        if (cond:0_1)
            goto label_4d34e3
        
        char* const esi_1 = &data_5b2591
        char* const ecx_1 = &data_5b2591
        
        if (eax_3 != 0)
            ecx_1 = eax_3
        
        bool cond:2_1 = _strncmp(ecx_1, "./", 2) != 0
        char* eax_6 = arg_4
        char* var_1c
        
        if (cond:2_1)
            char* ecx_9 = &data_5b2591
            
            if (eax_6 != 0)
                ecx_9 = eax_6
            
            void* eax_12 = _strchr(ecx_9, 0x5c)
            void* eax_14
            
            if (eax_12 == 0)
                char* eax_13 = arg_4
                char* ecx_10 = &data_5b2591
                
                if (eax_13 != 0)
                    ecx_10 = eax_13
                
                eax_14 = _strchr(ecx_10, 0x2f)
            
            if (eax_12 != 0 || eax_14 != 0)
                char* eax_15 = arg_4
                char* ecx_11 = &data_5b2591
                
                if (eax_15 != 0)
                    ecx_11 = eax_15
                
                if (__strnicmp(ecx_11, "sys", 3) == 0)
                label_4d34b8:
                    eax_3 = arg_4
                    *arg1 = eax_3
                    
                    if (eax_3 != 0 && *eax_3 != 0)
                        char* eax_23 = sub_48a080(arg1)
                        *(eax_23 + 4) += 1
                        eax_3 = arg_4
                    
                    int32_t var_14_5 = 1
                    int32_t var_8_4 = 8
                    goto label_4d3509
                
                char* eax_17 = arg_4
                char* ecx_12 = &data_5b2591
                
                if (eax_17 != 0)
                    ecx_12 = eax_17
                
                if (__strnicmp(ecx_12, "res", 3) == 0)
                    goto label_4d34b8
                
                char* eax_19 = arg_4
                
                if (eax_19 != 0)
                    esi_1 = eax_19
                
                if (__strnicmp(esi_1, "xbin", 4) == 0)
                    goto label_4d34b8
            
            char* esi_5 = *data_1150b90
            var_1c = esi_5
            
            if (esi_5 != 0 && *esi_5 != 0)
                char* eax_21 = sub_48a080(&var_1c)
                *(eax_21 + 4) += 1
            
            int32_t var_14_3 = 4
            var_8_1.b = 9
            sub_48a860(&var_1c, arg1, &arg_4)
            int32_t var_14_4 = 5
            var_8_1.b = 0xa
            
            if (data_aca1f4 != 0 && esi_5 != 0 && *esi_5 != 0)
                char* eax_22 = sub_48a080(&var_1c)
                int32_t temp3_1 = *(eax_22 + 4)
                *(eax_22 + 4) -= 1
                
                if (temp3_1 == 1)
                    sub_4984f0(eax_22, *(eax_22 + 0xc) + 0x10)
            
            int32_t var_8_3 = 0xb
        else
            if (eax_6 != 0)
                esi_1 = eax_6
            
            sub_48a320(&var_1c, &esi_1[2])
            var_8_1.b = 3
            char* esi_3 = *data_1150b90
            char* var_18 = esi_3
            
            if (esi_3 != 0 && *esi_3 != 0)
                char* eax_8 = sub_48a080(&var_18)
                *(eax_8 + 4) += 1
            
            int32_t var_14_1 = 2
            var_8_1.b = 4
            sub_48a860(&var_18, arg1, &var_1c)
            int32_t var_14_2 = 3
            var_8_1.b = 5
            
            if (data_aca1f4 != 0 && esi_3 != 0 && *esi_3 != 0)
                char* eax_9 = sub_48a080(&var_18)
                int32_t temp1_1 = *(eax_9 + 4)
                *(eax_9 + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_4984f0(eax_9, *(eax_9 + 0xc) + 0x10)
            
            var_8_1.b = 6
            
            if (data_aca1f4 != 0)
                char* eax_10 = var_1c
                
                if (eax_10 != 0 && *eax_10 != 0)
                    char* eax_11 = sub_48a080(&var_1c)
                    int32_t temp2_1 = *(eax_11 + 4)
                    *(eax_11 + 4) -= 1
                    
                    if (temp2_1 == 1)
                        sub_4984f0(eax_11, *(eax_11 + 0xc) + 0x10)
            
            int32_t var_8_2 = 7
        
        if (data_aca1f4 != 0)
            eax_3 = arg_4
        label_4d3512:
            
            if (eax_3 != 0 && *eax_3 != 0)
                char* eax_25 = sub_48a080(&arg_4)
                int32_t temp0_1 = *(eax_25 + 4)
                *(eax_25 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_4984f0(eax_25, *(eax_25 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
