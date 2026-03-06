// 函数名称: sub_4e1cb0
// 虚拟地址: 0x4e1cb0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char** __fastcallsub_4e1cb0(char** arg1, char* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a08d9
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_4c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_20 = 0
    void* var_24 = _strchr(arg2, 0x2e)
    void* lpFileName_3 = _strrchr(arg2, 0x2e)
    void* lpFileName_2 = lpFileName_3
    
    if (lpFileName_3 == 0)
        sub_48a2c0(arg1, &data_5b2591)
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg1
    
    void* eax_5 = lpFileName_3 - arg2
    char* var_1c
    sub_48a370(&var_1c, arg2, eax_5)
    int32_t var_8_1 = 1
    char* edi_1 = var_1c
    char* edx = &data_5b2591
    
    if (edi_1 != 0)
        edx = edi_1
    
    char* var_14
    sub_4e5700(&var_14, edx)
    var_8_1.b = 2
    char** ebx_2
    char const (** var_38)[0x5]
    char const (** var_2c)[0x5]
    
    if (__stricmp(lpFileName_3, ".xml") != 0)
        int32_t eax_31 = 0
        int32_t var_30_2 = 0
        
        while (true)
            sub_4e5ed0(eax_31, &var_2c, eax_31, &var_38)
            char const (** ebx_3)[0x5] = var_38
            int32_t esi_2 = 0
            
            if (ebx_3 s> 0)
                while (true)
                    if (__stricmp(var_2c[esi_2], var_24) != 0
                            && __stricmp(var_2c[esi_2], lpFileName_2) != 0)
                        esi_2 += 1
                        
                        if (esi_2 s>= ebx_3)
                            goto label_4e213a
                        
                        continue
                    
                    void* eax_41 = &data_5d2b88
                    char* ebx_4
                    
                    while (true)
                        if (*eax_41 == var_30_2)
                            ebx_4 = *(eax_41 + 4)
                            break
                        
                        eax_41 += 8
                        
                        if (*(eax_41 + 4) == 0)
                            ebx_4 = &data_5b2591
                            break
                    
                    char* eax_42 = var_14
                    
                    if (eax_42 == 0 || *eax_42 == 0)
                        sub_48a2c0(&var_14, &data_5b3a68)
                    else
                        char* eax_43 = sub_48a080(&var_14)
                        int16_t* esi_3 = *(eax_43 + 8)
                        sub_48a180(eax_43, esi_3 + 1, &var_14, 1)
                        *(esi_3 + var_14) = 0x2e
                    
                    if (*ebx_4 != 0)
                        char* eax_45 = var_14
                        
                        if (eax_45 == 0 || *eax_45 == 0)
                            sub_48a2c0(&var_14, ebx_4)
                        else
                            char* esi_4 = ebx_4
                            char const (** ecx_49)[0x5] = *(sub_48a080(&var_14) + 8)
                            var_38 = ecx_49
                            char* eax_46
                            
                            do
                                eax_46.b = *esi_4
                                esi_4 = &esi_4[1]
                            while (eax_46.b != 0)
                            
                            void* esi_5 = esi_4 - &esi_4[1]
                            sub_48a180(eax_46, esi_5 + ecx_49, &var_14, 1)
                            sub_579300(var_14 + var_38, ebx_4, esi_5 + 1)
                    
                    ebx_2 = arg1
                    char* eax_50 = var_14
                    *ebx_2 = eax_50
                    
                    if (eax_50 != 0 && *eax_50 != 0)
                        char* eax_51 = sub_48a080(ebx_2)
                        *(eax_51 + 4) += 1
                        eax_50 = var_14
                    
                    int32_t var_20_6 = 1
                    var_8_1.b = 0x11
                    
                    if (data_aca1f4 != 0 && eax_50 != 0 && *eax_50 != 0)
                        char* eax_52 = sub_48a080(&var_14)
                        int32_t temp6_1 = *(eax_52 + 4)
                        *(eax_52 + 4) -= 1
                        
                        if (temp6_1 == 1)
                            sub_4984f0(eax_52, *(eax_52 + 0xc) + 0x10)
                            var_14 = &data_5b2591
                    
                    int32_t var_8_7 = 0x12
                    break
                
                break
            
        label_4e213a:
            eax_31 = var_30_2 + 1
            var_30_2 = eax_31
            
            if (eax_31 s>= 0x25)
                ebx_2 = arg1
                sub_48a2c0(ebx_2, &data_5b2591)
                int32_t var_20_5 = 1
                var_8_1.b = 0x13
                
                if (data_aca1f4 != 0)
                    char* eax_37 = var_14
                    
                    if (eax_37 != 0 && *eax_37 != 0)
                        char* eax_38 = sub_48a080(&var_14)
                        int32_t temp1_1 = *(eax_38 + 4)
                        *(eax_38 + 4) -= 1
                        
                        if (temp1_1 == 1)
                            sub_4984f0(eax_38, *(eax_38 + 0xc) + 0x10)
                            var_14 = &data_5b2591
                
                int32_t var_8_6 = 0x14
                break
    else
        char* eax_7 = var_14
        char* const ecx_5 = &data_5b2591
        
        if (eax_7 != 0)
            ecx_5 = eax_7
        
        int32_t eax_8 = sub_4dfc80(ecx_5)
        
        if (eax_8 == 0)
            sub_48a2c0(arg1, &data_5b2591)
            int32_t var_20_1 = 1
            var_8_1.b = 3
            
            if (data_aca1f4 != 0)
                char* eax_9 = var_14
                
                if (eax_9 != 0 && *eax_9 != 0)
                    char* eax_10 = sub_48a080(&var_14)
                    int32_t temp0_1 = *(eax_10 + 4)
                    *(eax_10 + 4) -= 1
                    
                    if (temp0_1 == 1)
                        sub_4984f0(eax_10, *(eax_10 + 0xc) + 0x10)
                        var_14 = &data_5b2591
            
            int32_t var_8_2 = 4
            goto label_4e1dee
        
        sub_4e5ed0(&var_2c, &var_38, eax_8, &var_2c)
        
        if (var_2c == 0)
            char* eax_14 = var_14
            *arg1 = eax_14
            
            if (eax_14 != 0 && *eax_14 != 0)
                char* eax_15 = sub_48a080(arg1)
                *(eax_15 + 4) += 1
                eax_14 = var_14
            
            int32_t var_20_2 = 1
            var_8_1.b = 5
            
            if (data_aca1f4 != 0 && eax_14 != 0 && *eax_14 != 0)
                char* eax_16 = sub_48a080(&var_14)
                int32_t temp2_1 = *(eax_16 + 4)
                *(eax_16 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_4984f0(eax_16, *(eax_16 + 0xc) + 0x10)
                    var_14 = &data_5b2591
            
            int32_t var_8_3 = 6
            goto label_4e1dee
        
        char* eax_17 = sub_4d0600(&data_5d2b88, eax_8)
        char i
        
        do
            i = *eax_17
            eax_17 = &eax_17[1]
        while (i != 0)
        int32_t ebx_1 = 0
        
        if (var_2c s<= 0)
        label_4e2079:
            char* eax_29 = var_14
            *arg1 = eax_29
            
            if (eax_29 != 0 && *eax_29 != 0)
                char* eax_28 = sub_48a080(arg1)
                *(eax_28 + 4) += 1
                eax_29 = var_14
            
            int32_t var_20_4 = 1
            var_8_1.b = 0xf
            
            if (data_aca1f4 != 0 && eax_29 != 0 && *eax_29 != 0)
                char* eax_30 = sub_48a080(&var_14)
                int32_t temp5_1 = *(eax_30 + 4)
                *(eax_30 + 4) -= 1
                
                if (temp5_1 == 1)
                    sub_4984f0(eax_30, *(eax_30 + 0xc) + 0x10)
                    var_14 = &data_5b2591
            
            int32_t var_8_5 = 0x10
        label_4e1dee:
            
            if (data_aca1f4 != 0 && edi_1 != 0 && *edi_1 != 0)
                char* eax_11 = sub_48a080(&var_1c)
                int32_t temp3_1 = *(eax_11 + 4)
                *(eax_11 + 4) -= 1
                
                if (temp3_1 == 1)
                    sub_4984f0(eax_11, *(eax_11 + 0xc) + 0x10)
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return arg1
        
        void* ecx_18 = eax_5 - (eax_17 - &eax_17[1] + 1)
        void* var_30_1 = ecx_18
        
        while (true)
            var_24 = &data_5b2591
            var_8_1.b = 7
            sub_48a6e0(&var_24, arg2, ecx_18)
            sub_48a670(&var_24, var_38[ebx_1])
            void* esi_1 = var_24
            char* edx_10 = &data_5b2591
            
            if (esi_1 != 0)
                edx_10 = esi_1
            
            sub_4e5530(&lpFileName_2, edx_10)
            var_8_1.b = 8
            char* const lpFileName = &data_5b2591
            void* lpFileName_1 = lpFileName_2
            
            if (lpFileName_1 != 0)
                lpFileName = lpFileName_1
            
            if (GetFileAttributesA(lpFileName) != 0xffffffff)
                ebx_2 = arg1
                sub_48a2c0(ebx_2, &data_5b2591)
                int32_t var_20_3 = 1
                var_8_1.b = 9
                
                if (data_aca1f4 != 0)
                    void* lpFileName_5 = lpFileName_2
                    
                    if (lpFileName_5 != 0 && *lpFileName_5 != 0)
                        char* eax_24 = sub_48a080(&lpFileName_2)
                        int32_t temp7_1 = *(eax_24 + 4)
                        *(eax_24 + 4) -= 1
                        
                        if (temp7_1 == 1)
                            sub_4984f0(eax_24, *(eax_24 + 0xc) + 0x10)
                            lpFileName_2 = &data_5b2591
                
                var_8_1.b = 0xa
                
                if (data_aca1f4 != 0 && esi_1 != 0 && *esi_1 != 0)
                    char* eax_25 = sub_48a080(&var_24)
                    int32_t temp9_1 = *(eax_25 + 4)
                    *(eax_25 + 4) -= 1
                    
                    if (temp9_1 == 1)
                        sub_4984f0(eax_25, *(eax_25 + 0xc) + 0x10)
                
                var_8_1.b = 0xb
                
                if (data_aca1f4 != 0)
                    char* eax_26 = var_14
                    
                    if (eax_26 != 0 && *eax_26 != 0)
                        char* eax_27 = sub_48a080(&var_14)
                        int32_t temp11_1 = *(eax_27 + 4)
                        *(eax_27 + 4) -= 1
                        
                        if (temp11_1 == 1)
                            sub_4984f0(eax_27, *(eax_27 + 0xc) + 0x10)
                            var_14 = &data_5b2591
                
                int32_t var_8_4 = 0xc
                break
            
            var_8_1.b = 0xd
            
            if (data_aca1f4 != 0)
                void* lpFileName_4 = lpFileName_2
                
                if (lpFileName_4 != 0 && *lpFileName_4 != 0)
                    char* eax_22 = sub_48a080(&lpFileName_2)
                    int32_t temp8_1 = *(eax_22 + 4)
                    *(eax_22 + 4) -= 1
                    
                    if (temp8_1 == 1)
                        sub_4984f0(eax_22, *(eax_22 + 0xc) + 0x10)
                        lpFileName_2 = &data_5b2591
            
            var_8_1.b = 0xe
            
            if (data_aca1f4 != 0 && esi_1 != 0 && *esi_1 != 0)
                char* eax_23 = sub_48a080(&var_24)
                int32_t temp10_1 = *(eax_23 + 4)
                *(eax_23 + 4) -= 1
                
                if (temp10_1 == 1)
                    sub_4984f0(eax_23, *(eax_23 + 0xc) + 0x10)
            
            ebx_1 += 1
            var_8_1.b = 2
            
            if (ebx_1 s>= var_2c)
                goto label_4e2079
            
            ecx_18 = var_30_1
    
    if (data_aca1f4 != 0 && edi_1 != 0 && *edi_1 != 0)
        char* eax_39 = sub_48a080(&var_1c)
        int32_t temp4_1 = *(eax_39 + 4)
        *(eax_39 + 4) -= 1
        
        if (temp4_1 == 1)
            sub_4984f0(eax_39, *(eax_39 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return ebx_2
}
