// 函数名称: sub_4436e0
// 虚拟地址: 0x4436e0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_4436e0(int32_t* arg1, int64_t* arg2, int32_t arg3, int32_t* arg4, int32_t* arg5, uint32_t* arg6, int32_t* arg7, int32_t arg8, uint32_t arg9)
{
    // 第一条实际指令: void var_c9c
    void var_c9c
    int32_t eax_1 = __security_cookie ^ &var_c9c
    int32_t* edx = arg5
    int64_t* ecx = arg2
    int32_t* edi = arg4
    int32_t* var_c88 = edx
    int64_t* var_c8c = ecx
    int32_t* var_c80 = edi
    
    if (arg3 u> 0x13)
        int32_t var_cac_18 = arg3
        sub_4394f0(arg7, edx, ecx, "Unknown choice type %d!\n")
        _exit(1)
        noreturn
    
    void var_c60
    void var_395
    uint32_t eax_34
    int32_t* ebx_2
    void* edi_2
    
    switch (arg3)
        case 0
            ebx_2 = arg1
            sub_43a6c0(arg7, ebx_2, &var_c60, ecx)
            int32_t edx_2 = *edi
            int32_t eax_3 = edx_2 * 3
            *(&var_395 + (eax_3 << 2)) = 0
            sub_445280(eax_3, edx_2, &var_c60, var_c8c, 3, 1)
            int32_t edx_3 = edi[1]
            int32_t eax_4 = edx_3 * 3
            *(&var_395 + (eax_4 << 2)) = 1
            sub_445280(eax_4, edx_3, &var_c60, var_c8c, 4, 1)
            int64_t* eax_5
            int64_t xmm0_1
            eax_5, xmm0_1 = sub_43b0d0(&var_c60, var_c8c)
            sub_43a6c0(eax_5, ebx_2, &var_c60, var_c8c)
            int32_t edx_6 = edi[1]
            int32_t eax_6 = edx_6 * 3
            *(&var_395 + (eax_6 << 2)) = 0
            sub_445280(eax_6, edx_6, &var_c60, var_c8c, 3, 1)
            int32_t edx_7 = *edi
            int32_t eax_7 = edx_7 * 3
            *(&var_395 + (eax_7 << 2)) = 1
            sub_445280(eax_7, edx_7, &var_c60, var_c8c, 4, 1)
            
            if (not(sub_43b0d0(&var_c60, var_c8c) f<= xmm0_1))
                int32_t ecx_9 = *edi
                *edi = edi[1]
                edi[1] = ecx_9
            
            edi_2 = nullptr
        case 1
            int32_t i_9 = *edx
            ebx_2 = arg1
            void* edi_1 = ecx * 0x113c
            int32_t i_8 = i_9
            
            if (*(edi_1 + 0x138b850) == 0)
                sub_43e400()
            
            if (i_9 s> 0)
                uint32_t* esi_2 = arg6
                void* eax_10 = var_c80 - esi_2
                int32_t i_7 = i_8
                int32_t i
                
                do
                    int32_t j = 0
                    
                    if (*(edi_1 + 0x138b850) s> 0)
                        uint32_t* ecx_11 = edi_1 + 0x138a73c
                        
                        do
                            int32_t eax_11 = ecx_11[-7]
                            
                            if ((eax_11 == 0 || eax_11 == 1 || eax_11 == 3)
                                    && ecx_11[-5] == *(eax_10 + esi_2))
                                *esi_2 = *ecx_11
                            
                            j += 1
                            ecx_11 = &ecx_11[0xb]
                        while (j s< *(edi_1 + 0x138b850))
                        
                        i_7 = i_8
                    
                    esi_2 = &esi_2[1]
                    i = i_7
                    i_7 -= 1
                    i_8 = i_7
                while (i != 1)
                ebx_2 = arg1
            
            edi_2 = nullptr
        case 2
            ebx_2 = arg1
            void* eax_14 = ecx * 0x113c
            void* esi_3 = eax_14 + 0x138a720
            *(eax_14 + 0x138b858) = 0
            sub_43b3b0(eax_14, ecx, ebx_2, 0)
            sub_43e400()
            int32_t eax_15 = 0
            int32_t ecx_14 = *(eax_14 + 0x138b850)
            
            if (ecx_14 s<= 0)
            label_44403f:
                sub_4394f0(eax_15, eax_14, ecx_14, "No select move in best moves!\n")
                _exit(1)
                noreturn
            
            while (*esi_3 != 1)
                eax_15 += 1
                esi_3 += 0x2c
                
                if (eax_15 s>= ecx_14)
                    goto label_44403f
            
            int32_t ecx_15 = eax_15 * 0x2c
            *edi = *(ecx_15 + eax_14 + 0x138a728)
            *var_c88 = 1
            edi_2 = *(ecx_15 + eax_14 + 0x138a73c)
        case 3
            ebx_2 = arg1
            
            if (*edx != 0)
                int32_t ecx_16 = *(ecx * 0x113c + 0x138b854)
                int32_t esi_4 = *(ecx * 0x113c + 0x138b850)
                bool cond:6_1 = ecx_16 != esi_4
                
                if (ecx_16 s< esi_4)
                    void* eax_18 = ecx_16 * 0x2c + ecx * 0x113c + 0x138a720
                    
                    while (*eax_18 != 2)
                        ecx_16 += 1
                        eax_18 += 0x2c
                        
                        if (ecx_16 s>= esi_4)
                            break
                    
                    cond:6_1 = ecx_16 != esi_4
                
                if (cond:6_1)
                    *edi = *(ecx_16 * 0x2c + ecx * 0x113c + 0x138a720 + 4)
                    edi_2 = 1
                    *(ecx * 0x113c + 0x138b854) = ecx_16
                else
                    edi_2 = nullptr
            else
                edi_2 = nullptr
        case 4
            ebx_2 = arg1
            void* edx_15 = *(ecx * 0x113c + 0x138b854) * 0x2c
            void* var_c94_1 = edx_15
            int32_t eax_21 = *(edx_15 + ecx * 0x113c + 0x138a720 + 0x18)
            bool cond:5_1 = eax_21 s<= 0
            
            if (eax_21 == 0)
                sub_43e400()
                edx_15 = var_c94_1
                eax_21 = *(edx_15 + ecx * 0x113c + 0x138a720 + 0x18)
                cond:5_1 = eax_21 s<= 0
            
            if (not(cond:5_1))
                uint32_t* ecx_18 = arg6
                void* eax_23 = edi - ecx_18
                void* edx_18 = edx_15 + 0x1c + ecx * 0x113c + 0x138a720
                int32_t edi_4 = 0
                
                do
                    edx_18 += 4
                    ecx_18 = &ecx_18[1]
                    edi_4 += 1
                    *(eax_23 + ecx_18 - 4) = *(edx_18 - 0x18)
                    ecx_18[-1] = *(edx_18 - 4)
                    eax_21 = *(var_c94_1 + ecx * 0x113c + 0x138a720 + 0x18)
                while (edi_4 s< eax_21)
                
                ebx_2 = arg1
            
            *arg7 = eax_21
            *var_c88 = eax_21
            *(ecx * 0x113c + 0x138b854) += 1
            edi_2 = nullptr
        case 5
            ebx_2 = arg1
            sub_43f7f0(arg7, ecx, ebx_2, edi, edx, arg8)
            edi_2 = nullptr
        case 6
            ebx_2 = arg1
            sub_4401c0(arg7, ecx, ebx_2, edi, edx)
            edi_2 = nullptr
        case 7
            ebx_2 = arg1
            int32_t eax_26 = 0
            
            if (ebx_2[4] == 0 || ebx_2[5] == ecx)
                int32_t edx_21 = data_1390338
                
                if (edx_21 s<= 0)
                    int32_t ecx_25 = data_139033c - 1
                    data_139033c = ecx_25
                    
                    if (edx_21 == 0)
                        int32_t eax_31 = data_1390330
                        
                        if (ecx_25 == 0)
                            eax_31 = edx_21
                        
                        data_1390330 = eax_31
                    
                    edi_2 = 1
                else
                    int32_t edx_22 = 0
                    int32_t var_c94_2 = 0
                    
                    if (data_1390458 s> 0)
                        int32_t esi_8 = *var_c88
                        
                        do
                            int32_t eax_28 = 0
                            int32_t ecx_22 = 0
                            
                            if (esi_8 s> 0)
                                do
                                    if (edi[ecx_22] == *((edx_22 << 2) + &data_1390340))
                                        eax_28 = 1
                                    
                                    ecx_22 += 1
                                while (ecx_22 s< esi_8)
                                
                                edx_22 = var_c94_2
                            
                            if (esi_8 s<= 0 || eax_28 == 0)
                                int32_t var_cac_16 = *((edx_22 << 2) + &data_1390340)
                                sub_4394f0(eax_28, edx_22, ecx_22, "Couldn't find tile %d in list!\n")
                                _exit(1)
                                noreturn
                            
                            eax_26 = data_1390458
                            edx_22 += 1
                            var_c94_2 = edx_22
                        while (edx_22 s< eax_26)
                        
                        __builtin_memcpy(edi, &data_1390340, eax_26 << 2)
                        edi = var_c80
                    
                    int32_t i_1 = 0
                    
                    if (ebx_2[ecx * 0x6f + 0x6c] s> 0)
                        do
                            edi[eax_26] = 0xffffffff
                            i_1 += 1
                            eax_26 += 1
                        while (i_1 s< ebx_2[ecx * 0x6f + 0x6c])
                    
                    int32_t temp2_1 = data_1390338
                    data_1390338 -= 1
                    data_1390458 = 0
                    *var_c88 = eax_26
                    
                    if (temp2_1 == 1)
                        int32_t eax_29 = data_1390330
                        
                        if (data_139033c == 0)
                            eax_29 = 0
                        
                        data_1390330 = eax_29
                    
                    if (ebx_2[4] != 0)
                        edi_2 = nullptr
                    else
                        data_1390330 = 0
                        
                        for (void* i_2 = &data_130a660; i_2 s< &data_134a660; i_2 += 4)
                            for (void* j_1 = *i_2; j_1 != 0; j_1 = *i_2)
                                *i_2 = *(j_1 + 0x134)
                                _free(j_1)
                        
                        edi_2 = nullptr
            else
                edi_2 = 1
        case 8
            int32_t var_cac_6 = arg8
            ebx_2 = arg1
            sub_440720(arg7, ecx, ebx_2, edi, edx, arg6, ecx)
            edi_2 = nullptr
        case 9
            ebx_2 = arg1
            
            if (ebx_2[4] == 0)
                int32_t var_cac_7 = 0
                sub_440720(arg7, ecx, ebx_2, edi, edx, arg6, ecx)
            
            edi_2 = nullptr
        case 0xa
            ebx_2 = arg1
            
            if (*edx == 0)
                *arg7 = 0
                edi_2 = nullptr
                *edx = 0
            else
                *edx = 1
                edi_2 = nullptr
                *arg7 = 0
        case 0xb, 0xc
            edi_2 = nullptr
            ebx_2 = arg1
            *edx = arg8
        case 0xd
            ebx_2 = arg1
            sub_441660(arg7, ecx, ebx_2, edi, edx, arg6, arg7)
            edi_2 = nullptr
        case 0xe
            ebx_2 = arg1
            edi_2 = sub_442840(arg7, ecx, ebx_2, edi, edx, arg6, arg7)
        case 0xf
            ebx_2 = arg1
            edi_2 = 1
        case 0x10
            eax_34 = 0xffffffff
            ebx_2 = arg1
            int64_t var_c78_1 = -0x4010000000000000
            uint32_t var_c94_3 = 0xffffffff
            
            if (arg8 != 1)
                sub_4394f0(0xffffffff, edx, ecx, "Asked to remove more than one die!\n")
                _exit(1)
                noreturn
            
            if (ebx_2[4] == 0 || ecx == ebx_2[5])
                uint32_t esi_9 = 0
                
                if (*edx s> 0)
                    int32_t eax_35 = ecx * 0x1bc
                    eax_34 = arg9 * 3
                    uint32_t var_c84_2 = eax_34
                    
                    while (true)
                        sub_43a6c0(eax_34, ebx_2, &var_c60, ecx)
                        int32_t eax_37 = edi[esi_9]
                        int32_t ecx_31 = eax_35 + (eax_37 << 3)
                        char var_c3b[0x4]
                        
                        if (var_c3b[ecx_31] == 3)
                            char var_c36[0x156]
                            int32_t eax_39 = sx.d(var_c36[ecx_31]) * 3
                            void var_394
                            *(&var_394 + (eax_39 << 2)) -= 1
                            var_c3b[ecx_31] = 0
                            var_c36[ecx_31] = 0xff
                            eax_37 = edi[esi_9]
                        
                        void var_c3c
                        *(&var_c3c + eax_35 + (eax_37 << 3)) = 0
                        
                        if (*(&var_395 + (var_c84_2 << 2)) == 1)
                            sub_445440(var_c84_2, var_c8c, &var_c60, arg9)
                        
                        int64_t xmm0_4 = sub_43c700()
                        
                        if (xmm0_4 f<= var_c78_1)
                            eax_34 = var_c94_3
                        else
                            eax_34 = esi_9
                            var_c78_1 = xmm0_4
                            var_c94_3 = eax_34
                        
                        edx = var_c88
                        esi_9 += 1
                        
                        if (esi_9 s>= *edx)
                            break
                        
                        ecx = var_c8c
                
                goto label_443d62
            
            *edx = 1
            edi_2 = nullptr
        case 0x11
            ebx_2 = arg1
            sub_443190(arg7, ecx, ebx_2, edi, edx, arg8)
            edi_2 = nullptr
        case 0x12
            ebx_2 = arg1
            eax_34 = 0xffffffff
            int64_t var_c78_2 = -0x4010000000000000
            uint32_t var_c94_4 = 0xffffffff
            
            if (ebx_2[4] == 0 || ebx_2[5] != ecx)
                uint32_t esi_10 = 0
                
                if (*edx s<= 0)
                label_443d62:
                    *edi = edi[eax_34]
                    *edx = 1
                    edi_2 = nullptr
                else
                    while (true)
                        sub_445280(sub_43a6c0(eax_34, ebx_2, &var_c60, ecx), edi[esi_10], &var_c60, 
                            0xffffffff, 1, 0)
                        int64_t xmm0_6 = sub_43c700()
                        
                        if (xmm0_6 f<= var_c78_2)
                            eax_34 = var_c94_4
                        else
                            eax_34 = esi_10
                            var_c78_2 = xmm0_6
                            var_c94_4 = eax_34
                        
                        esi_10 += 1
                        
                        if (esi_10 s>= *var_c88)
                            break
                        
                        ecx = var_c8c
                    
                    *edi = edi[eax_34]
                    edi_2 = nullptr
                    *var_c88 = 1
            else
                *edx = 1
                edi_2 = nullptr
        case 0x13
            ebx_2 = arg1
            double var_c68_2 = -1.0
            void* var_c84_3 = 0xffffffff
            int32_t var_c90_4 = 5
            
            if (ebx_2[4] == 0 || ebx_2[5] == ecx)
                void* eax_46 = *ebx_2
                
                if (*(eax_46 + 0x11) != 0 || *(eax_46 + 0x12) != 0)
                    var_c90_4 = 6
                
                int32_t esi_11 = ecx * 0x1bc
                void* var_c94_5 = 1
                int32_t var_c78 = esi_11
                
                while (true)
                    sub_43a6c0(eax_46, ebx_2, &var_c60, ecx)
                    void var_adc
                    int32_t eax_47 = *(&var_adc + esi_11)
                    int32_t edx_38 = 0
                    void var_ae0
                    *(&var_ae0 + esi_11) = var_c94_5
                    void* esi_12 = *ebx_2
                    void var_c37
                    *(&var_c37 + esi_11 + (eax_47 << 3)) = var_c94_5.b
                    int32_t eax_49 = *(esi_12 + 4)
                    int32_t var_48[0xf]
                    
                    if (eax_49 s> 0)
                        void* ecx_38 = &var_ae0
                        
                        do
                            int32_t eax_50 = *ecx_38
                            ecx_38 += 0x1bc
                            edx_38 += 1
                            var_48[eax_50] = 1
                            eax_49 = *(esi_12 + 4)
                        while (edx_38 s< eax_49)
                    
                    int32_t i_3 = 0
                    void* eax_51
                    
                    if (eax_49 s<= 0)
                        eax_51 = *ebx_2
                    else
                        do
                            sub_4471a0(&var_c60, i_3)
                            eax_51 = *ebx_2
                            i_3 += 1
                        while (i_3 s< *(eax_51 + 4))
                    
                    void* eax_52 = *(eax_51 + 4)
                    
                    for (int32_t i_4 = 1; i_4 s<= 6; i_4 += 1)
                        if (var_48[i_4] == 0)
                            int32_t esi_13 = 0
                            
                            if (eax_52 s> 0)
                                do
                                    sub_4472d0(eax_52, esi_13, &var_c60, i_4)
                                    esi_13 += 1
                                    eax_52 = *(*ebx_2 + 4)
                                while (esi_13 s< eax_52)
                    
                    double xmm0_8 = sub_43c700()
                    
                    if (xmm0_8 <= var_c68_2)
                        edi_2 = var_c84_3
                    else
                        edi_2 = var_c94_5
                        var_c68_2 = xmm0_8
                        var_c84_3 = edi_2
                    
                    esi_11 = var_c78
                    eax_46 = var_c94_5 + 1
                    var_c94_5 = eax_46
                    
                    if (eax_46 s> var_c90_4)
                        break
                    
                    ecx = var_c8c
            else
                edi_2 = ebx_2[ecx * 0x6f + 0x60]
    
    int32_t* ecx_42 = ebx_2[var_c8c * 0x6f + 0x6f] + (ebx_2[var_c8c * 0x6f + 0x70] << 2)
    int32_t result = arg3
    *ecx_42 = result
    void* i_6 = &ecx_42[3]
    ecx_42[1] = edi_2
    
    if (var_c88 == 0)
        ecx_42[2] = 0
    else
        result = *var_c88
        ecx_42[2] = result
        int32_t i_5 = 0
        
        if (*var_c88 s> 0)
            do
                result = var_c80[i_5]
                i_5 += 1
                *i_6 = result
                i_6 += 4
            while (i_5 s< *var_c88)
            
            ebx_2 = arg1
    
    void* ecx_43 = i_6 + 4
    
    if (arg7 == 0)
        *i_6 = 0
    else
        result = *arg7
        *i_6 = result
        i_6 = nullptr
        
        if (*arg7 s> 0)
            do
                result = arg6[i_6]
                i_6 += 1
                *ecx_43 = result
                ecx_43 += 4
            while (i_6 s< *arg7)
            
            ebx_2 = arg1
    
    int32_t ecx_45 = (ecx_43 - ebx_2[var_c8c * 0x6f + 0x6f]) s>> 2
    ebx_2[var_c8c * 0x6f + 0x70] = ecx_45
    
    if (ecx_45 s<= 0x3a98)
        @__security_check_cookie@4(eax_1 ^ &var_c9c)
        return result
    
    int32_t var_cac_17 = ecx_45
    sub_4394f0(result, i_6, ecx_45, "Choice log size grown to %d!\n")
    _exit(1)
    noreturn
}
