// 函数名称: sub_441660
// 虚拟地址: 0x441660
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_441660(int32_t arg1, void* arg2, int32_t* arg3, int32_t* arg4, int32_t* arg5, int32_t* arg6, int32_t* arg7)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* eax_2 = arg4
    int32_t* esi = arg7
    int64_t* var_278 = arg2
    int32_t* var_27c = eax_2
    bool cond:0 = arg3[4] == 0
    int32_t* var_268 = esi
    int64_t var_28c = -0x4010000000000000
    
    if (not(cond:0) && arg2 != arg3[5])
        int32_t var_270_1 = 0xffffffff
        int32_t var_278_1 = 0
        int32_t eax_3 = *arg5
        int32_t var_280_1 = eax_3
        
        if (eax_3 s> 0)
            int32_t esi_1 = *esi
            void* edx_2 = arg2 * 0x1bc + 0x24 + arg3
            eax_3 = 0
            void* var_26c_1 = edx_2
            
            do
                int32_t ecx_1 = 0
                
                if (esi_1 s> 0)
                    uint32_t edx_3 = zx.d(*edx_2)
                    
                    do
                        int32_t eax_8 = *(arg3[(arg6[ecx_1] + 0xbb) * 3] + 0x18)
                        
                        if (edx_3 == 7 || edx_3 == 8 || (edx_3 == 0xa && eax_8 == 3) || eax_8 == edx_3)
                            *var_27c = var_27c[var_278_1]
                            *arg6 = arg6[ecx_1]
                            *var_268 = 1
                            *arg5 = 1
                            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                            return arg5
                        
                        ecx_1 += 1
                    while (ecx_1 s< esi_1)
                    
                    eax_3 = var_278_1
                    edx_2 = var_26c_1
                
                eax_3 += 1
                edx_2 += 8
                var_278_1 = eax_3
                var_26c_1 = edx_2
            while (eax_3 s< var_280_1)
            
            esi = var_268
        
        *arg5 = 1
        int32_t ecx_2 = 0
        int32_t edx_4 = *esi
        
        if (edx_4 s> 0)
            int32_t esi_2 = 0xffffffff
            
            do
                void* eax_12 = arg3[(arg6[ecx_2] + 0xbb) * 3]
                int32_t eax_13
                
                if ((*(eax_12 + 0x1c) & 0x200) == 0)
                    eax_13 = *(eax_12 + 0x18)
                
                if ((*(eax_12 + 0x1c) & 0x200) != 0 || eax_13 s<= esi_2)
                    eax_3 = var_270_1
                else
                    esi_2 = eax_13
                    eax_3 = ecx_2
                    var_270_1 = eax_3
                
                ecx_2 += 1
            while (ecx_2 s< edx_4)
            
            esi = var_268
            
            if (eax_3 s>= 0)
                eax_3 = arg6[eax_3]
                *arg6 = eax_3
        
        *esi = 1
        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
        return eax_3
    
    void* esi_4 = arg2 * 0x1bc + arg3
    
    if (data_130461c == 0)
        eax_2 = sub_440960(arg3, arg2)
        int32_t* ecx_9
        
        if (eax_2[0x7a] == 0)
            data_14d0b60 += 1
            ecx_9 = data_130461c
        else
            data_138a71c += 1
            ecx_9 = eax_2
            data_130461c = ecx_9
        
        if (ecx_9 == 0)
            int32_t i = *(esi_4 + 0x170)
            int32_t var_1c4[0x46]
            __builtin_memset(&var_1c4, 0, 0x118)
            int32_t* edi_2 = arg3
            int32_t ecx_10
            
            for (; i != 0xffffffff; i = sx.d(*(&edi_2[ecx_10] + 0x8ca)))
                ecx_10 = i * 3
                var_1c4[i] = zx.d(edi_2[ecx_10 + 0x233].b)
            
            int64_t* var_2a0 = &var_28c
            int32_t ecx_12 = *var_268
            int32_t eax_20 = *arg5
            int32_t var_ac[0x29]
            void* var_2a4 = &var_ac
            int32_t var_2a8 = 0
            void* var_2ac = nullptr
            void var_264
            int32_t* var_2b0 = &var_264
            int32_t eax_22
            
            if (eax_20 s< ecx_12)
                sub_441170(eax_20, var_278, edi_2, var_27c, eax_20, arg6, ecx_12, var_2b0, var_2ac, 
                    var_2a8, var_2a4, var_2a0)
                int32_t ecx_16 = 0
                eax_22 = *arg5
                
                if (eax_22 s> 0)
                    void* edx_12 = &eax_2[2]
                    
                    do
                        int32_t eax_30 = var_27c[ecx_16]
                        edx_12 += 4
                        ecx_16 += 1
                        *(edx_12 - 4) = zx.d(*(esi_4 + (eax_30 << 3) + 0x24))
                        eax_22 = *arg5
                    while (ecx_16 s< eax_22)
                    
                    edi_2 = arg3
                
                int32_t ecx_17 = 0
                
                if (eax_22 s> 0)
                    void* edx_14 = &eax_2[0x52]
                    
                    do
                        edx_14 += 4
                        *(edx_14 - 0xa4) = var_ac[ecx_17]
                        *(edx_14 - 4) = var_1c4[var_ac[ecx_17]]
                        int32_t eax_35 = var_ac[ecx_17]
                        ecx_17 += 1
                        var_1c4[eax_35] += 1
                        eax_22 = *arg5
                    while (ecx_17 s< eax_22)
                    
                    edi_2 = arg3
            else
                sub_440e40(eax_20, var_278, edi_2, var_27c, eax_20, arg6, ecx_12, var_2b0, var_2ac, 
                    var_2a8, var_2a4, var_2a0)
                int32_t ecx_14 = 0
                eax_22 = *var_268
                
                if (eax_22 s> 0)
                    void* edx_8 = &eax_2[0x52]
                    
                    do
                        edx_8 += 4
                        *(edx_8 - 0xa4) = arg6[ecx_14]
                        *(edx_8 - 4) = var_1c4[arg6[ecx_14]]
                        int32_t eax_26 = arg6[ecx_14]
                        ecx_14 += 1
                        var_1c4[eax_26] += 1
                        eax_22 = *var_268
                    while (ecx_14 s< eax_22)
                    
                    edi_2 = arg3
                
                int32_t ecx_15 = 0
                
                if (eax_22 s> 0)
                    void* edx_10 = &eax_2[2]
                    
                    do
                        int32_t eax_27 = var_ac[ecx_15]
                        edx_10 += 4
                        ecx_15 += 1
                        *(edx_10 - 4) = zx.d(*(esi_4 + (eax_27 << 3) + 0x24))
                        eax_22 = *var_268
                    while (ecx_15 s< eax_22)
                    
                    edi_2 = arg3
            
            eax_2[0x7a] = eax_22
            data_130461c = eax_2
            int32_t eax_36 = sub_441520(eax_22, var_278, edi_2, var_27c, arg5, arg6, var_268)
            int32_t ecx_20 = data_130461c
            
            if (eax_36 != 0)
                ecx_20 = 0
            
            data_130461c = ecx_20
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return eax_36
        
        arg2 = var_278
    
    int32_t eax_37 = sub_441520(eax_2, arg2, arg3, var_27c, arg5, arg6, var_268)
    
    if (eax_37 != 0)
        data_130461c = 0
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return eax_37
}
