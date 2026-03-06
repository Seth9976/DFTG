// 函数名称: sub_442840
// 虚拟地址: 0x442840
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_442840(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t* arg4, int32_t* arg5, uint32_t* arg6, int32_t* arg7)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* edi = arg3
    int32_t* ecx = arg7
    bool cond:0 = edi[4] == 0
    int32_t* var_16c = edi
    int32_t* var_150 = ecx
    int64_t var_17c = -0x4010000000000000
    int32_t var_168
    int32_t* var_154
    
    if (not(cond:0) && arg2 != edi[5])
        int32_t ebx_1 = 0
        var_154 = 0xffffffff
        var_168 = 0xffffffff
        int32_t edx_1 = *arg5
        void* eax_6 = arg2 * 0x1bc + 0x18 + edi
        void* var_160_1 = eax_6
        
        if (edx_1 s> 0)
            int32_t esi_1 = *ecx
            
            do
                int32_t edx_2 = arg4[ebx_1]
                int32_t ecx_2 = 0
                
                if (esi_1 s> 0)
                    uint32_t edx_3 = zx.d(*(eax_6 + (edx_2 << 3) + 0xc))
                    
                    do
                        edi = var_16c
                        int32_t eax_13 =
                            *(edi[(sx.d(*(var_160_1 + (arg6[ecx_2] << 3) + 0x12)) + 0xbb) * 3] + 0x18)
                        
                        if (edx_3 == 7 || edx_3 == 8 || (edx_3 == 0xa && eax_13 == 3)
                                || eax_13 == edx_3)
                            *arg4 = edx_2
                            *arg6 = arg6[ecx_2]
                            *var_150 = 1
                            *arg5 = 1
                            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                            return 0
                        
                        ecx_2 += 1
                    while (ecx_2 s< esi_1)
                    
                    eax_6 = var_160_1
                
                ebx_1 += 1
            while (ebx_1 s< edx_1)
        
        int32_t* ecx_3 = nullptr
        *arg5 = 1
        int32_t edx_4 = *var_150
        
        if (edx_4 s<= 0)
            *var_150 = 1
        else
            int32_t* eax_22
            
            do
                void* eax_20 = edi[(sx.d(*(var_160_1 + (arg6[ecx_3] << 3) + 0x12)) + 0xbb) * 3]
                int32_t eax_21
                
                if ((*(eax_20 + 0x1c) & 0x200) == 0)
                    eax_21 = *(eax_20 + 0x18)
                
                if ((*(eax_20 + 0x1c) & 0x200) != 0 || eax_21 s<= var_168)
                    eax_22 = var_154
                else
                    var_168 = eax_21
                    eax_22 = ecx_3
                    var_154 = eax_22
                
                ecx_3 += 1
            while (ecx_3 s< edx_4)
            
            if (eax_22 s< 0)
                *var_150 = 1
            else
                bool cond:2_1 = var_168 s< 4
                *arg6 = arg6[eax_22]
                *var_150 = 1
                
                if (not(cond:2_1) && sub_44ef10(edi) == 0)
                    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                    return 1
        
        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
        return 0
    
    void* esi_3 = arg2 * 0x1bc + edi
    
    if (data_1390320 == 0)
        int32_t* eax_32 = sub_441af0(edi, arg2)
        int32_t* ebx_3 = eax_32
        var_154 = ebx_3
        
        if (ebx_3[0xa2] == 0)
            data_12bae0c += 1
            eax_32 = data_1390320
        else
            data_1390324 += 1
            data_1390320 = eax_32
            data_138fd54 = 0
        
        ecx = var_150
        
        if (eax_32 == 0)
            int32_t ecx_13 = *ecx
            int64_t* var_190 = &var_17c
            int32_t* var_194 = &var_168
            int32_t eax_34 = *arg5
            int32_t var_ac[0x29]
            void* var_198 = &var_ac
            void var_14c
            int32_t* var_1a8 = &var_14c
            int32_t eax_36
            
            if (eax_34 s< ecx_13)
                sub_442270(eax_34, arg2, edi, arg4, eax_34, arg6, ecx_13, var_1a8, nullptr, 0, 0, 
                    var_198, var_194, var_190)
                int32_t ecx_18 = 0
                eax_36 = *arg5
                
                if (eax_36 s> 0)
                    void* edx_11 = &ebx_3[2]
                    
                    do
                        int32_t eax_50 = arg4[ecx_18]
                        edx_11 += 4
                        ecx_18 += 1
                        *(edx_11 - 4) = zx.d(*(esi_3 + (eax_50 << 3) + 0x24))
                        eax_36 = *arg5
                    while (ecx_18 s< eax_36)
                    
                    ebx_3 = var_154
                
                int32_t edi_5 = 0
                
                if (eax_36 s> 0)
                    void* edx_12 = &ebx_3[0x52]
                    
                    do
                        int32_t ecx_19 = var_ac[edi_5]
                        edx_12 += 4
                        edi_5 += 1
                        *(edx_12 - 0xa4) =
                            *(var_16c[(sx.d(*(esi_3 + (ecx_19 << 3) + 0x2a)) + 0xbb) * 3] + 0x18)
                        *(edx_12 - 4) = zx.d(*(esi_3 + (ecx_19 << 3) + 0x24))
                        eax_36 = *arg5
                    while (edi_5 s< eax_36)
                    
                    ebx_3 = var_154
                
                int32_t ecx_20 = 0
                
                if (eax_36 s> 0)
                    void* edx_13 = &ebx_3[0x7a]
                    
                    do
                        edx_13 += 4
                        int32_t eax_60 = var_168 s>> ecx_20.b
                        ecx_20 += 1
                        *(edx_13 - 4) = eax_60 & 1
                        eax_36 = *arg5
                    while (ecx_20 s< eax_36)
                    
                    ebx_3 = var_154
            else
                sub_441ee0(eax_34, arg2, edi, arg4, eax_34, arg6, ecx_13, var_1a8, nullptr, 0, 0, 
                    var_198, var_194, var_190)
                int32_t edi_2 = 0
                eax_36 = *var_150
                
                if (eax_36 s> 0)
                    void* edx_8 = &ebx_3[0x52]
                    
                    do
                        edx_8 += 4
                        int32_t ecx_15 = arg6[edi_2]
                        edi_2 += 1
                        *(edx_8 - 0xa4) =
                            *(var_16c[(sx.d(*(esi_3 + (ecx_15 << 3) + 0x2a)) + 0xbb) * 3] + 0x18)
                        *(edx_8 - 4) = zx.d(*(esi_3 + (ecx_15 << 3) + 0x24))
                        eax_36 = *var_150
                    while (edi_2 s< eax_36)
                    
                    ebx_3 = var_154
                
                int32_t ecx_16 = 0
                
                if (eax_36 s> 0)
                    void* edx_9 = &ebx_3[2]
                    
                    do
                        int32_t eax_45 = var_ac[ecx_16]
                        edx_9 += 4
                        ecx_16 += 1
                        *(edx_9 - 4) = zx.d(*(esi_3 + (eax_45 << 3) + 0x24))
                        eax_36 = *var_150
                    while (ecx_16 s< eax_36)
                
                int32_t ecx_17 = 0
                
                if (eax_36 s> 0)
                    void* edx_10 = &ebx_3[0x7a]
                    
                    do
                        edx_10 += 4
                        int32_t eax_48 = var_168 s>> ecx_17.b
                        ecx_17 += 1
                        *(edx_10 - 4) = eax_48 & 1
                        eax_36 = *var_150
                    while (ecx_17 s< eax_36)
            
            ebx_3[0xa2] = eax_36
            data_1390320 = ebx_3
            data_138fd54 = 0
            int32_t eax_63 = sub_4426f0(&var_154, arg2, var_16c, arg4, arg5, arg6, var_150, &var_154)
            int32_t ecx_22 = data_1390320
            int32_t* eax_64 = var_154
            
            if (eax_63 != 0)
                ecx_22 = 0
            
            data_1390320 = ecx_22
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return eax_64
    
    if (sub_4426f0(&var_154, arg2, edi, arg4, arg5, arg6, ecx, &var_154) != 0)
        data_1390320 = 0
    
    int32_t* eax_67 = var_154
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return eax_67
}
