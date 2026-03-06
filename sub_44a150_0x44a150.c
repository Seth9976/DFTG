// 函数名称: sub_44a150
// 虚拟地址: 0x44a150
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_44a150(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp_2
    int32_t __saved_ebp_2
    int32_t __saved_ebp_1 = __saved_ebp_2
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t ebx
    int32_t var_c44 = ebx
    int32_t esi
    int32_t var_c48 = esi
    int32_t edi
    int32_t var_c4c = edi
    int32_t var_c50 = 0x900
    int32_t var_c54 = 0
    int32_t var_c2c[0x230]
    _memset(&var_c2c, 0, 0x900)
    int32_t* esp_1 = &var_c4c
    int32_t var_36c = 0xffffffff
    arg1[0x311] = &var_c2c
    sub_448b70(arg1)
    void* eax_2 = *arg1
    int32_t i = 0
    int32_t i_8 = 0
    
    if (*(eax_2 + 4) s> 0)
        int32_t edi_1 = 0
        void* ecx_1 = arg1 + 0x29
        int32_t var_c34_1 = 0
        void* var_c30_1 = ecx_1
        
        do
            int32_t j_5 = *(ecx_1 + 0x13b)
            int32_t edi_2 = 0
            int32_t edx_3 = 0
            
            if (j_5 s> 0)
                void* eax_3 = var_c30_1
                int32_t j
                
                do
                    if (*(eax_3 - 4) == 4 && *eax_3 == 1)
                        edx_3 += 1
                    
                    eax_3 += 8
                    j = j_5
                    j_5 -= 1
                while (j != 1)
                
                if (edx_3 != 0)
                    void* eax_4 = var_c30_1
                    int32_t ebx_1 = 0
                    int32_t j_1 = *(eax_4 + 0x14b)
                    
                    if (j_1 != 0xffffffff)
                        do
                            ebx_1 += 1
                            j_1 = sx.d(*(&arg1[j_1 * 3] + 0x8ca))
                        while (j_1 != 0xffffffff)
                        
                        eax_4 = var_c30_1
                    
                    int32_t j_2 = *(eax_4 + 0x14f)
                    int32_t edi_3 = 0
                    
                    for (; j_2 != 0xffffffff; j_2 = sx.d(*(&arg1[j_2 * 3] + 0x8ca)))
                        edi_3 += 1
                    
                    int32_t ecx_2 = edi_3 + ebx_1
                    int32_t edx_4 = edx_3 + ecx_2
                    
                    if (edx_4 s> ecx_2)
                        int32_t eax_9
                        int32_t edx_5
                        edx_5:eax_9 = sx.q((edx_4 + 1) * edx_4)
                        int32_t eax_13
                        int32_t edx_6
                        edx_6:eax_13 = sx.q((ecx_2 + 1) * ecx_2)
                        edi_2 = ((eax_9 - edx_5) s>> 1) - ((eax_13 - edx_6) s>> 1)
                    else
                        edi_2 = 0
                    
                    i = i_8
            
            int32_t j_6 = edi_2 + *(arg1[0x311] + edi_1 + 0xc)
            int32_t j_7 = sub_445070(arg1)
            
            if (j_7 s< j_6)
                j_6 = j_7
            
            if (j_6 s> 0)
                int32_t j_3
                
                do
                    int32_t eax_17 = sub_4450a0(arg1, i)
                    int32_t var_c50_1 = 0
                    int32_t var_c54_1 = 5
                    sub_445280(eax_17, eax_17, arg1, i, 5, 0)
                    esp_1 = &var_c4c
                    j_3 = j_6
                    j_6 -= 1
                while (j_3 != 1)
            
            eax_2 = *arg1
            i += 1
            edi_1 = var_c34_1 + 0x1c0
            ecx_1 = var_c30_1 + 0x1bc
            i_8 = i
            var_c34_1 = edi_1
            var_c30_1 = ecx_1
        while (i s< *(eax_2 + 4))
    
    int32_t i_1 = 0
    
    if (*(eax_2 + 4) s> 0)
        int32_t (* edi_7)[0x230] = &var_c2c
        void* eax_19
        
        do
            int32_t eax_18
            int32_t edx_10
            eax_18, edx_10 = sub_449820(arg1, i_1)
            *edi_7 = eax_18
            edi_7 = &(*edi_7)[0x70]
            eax_19 = *arg1
            i_1 += 1
            (*edi_7)[-0x6f] = edx_10
        while (i_1 s< *(eax_19 + 4))
    
    label_44a321:
    void* eax_21 = *arg1
    int32_t edx_11 = 0
    int32_t ebx_2 = *(eax_21 + 4)
    
    if (ebx_2 s> 0)
        int32_t* eax_20 = arg1[0x311]
        int32_t* ecx_8 = eax_20
        
        while (true)
            if (*ecx_8 != 0)
                int32_t* ecx_21 = arg1[0x312]
                int32_t ecx_22
                
                if (ecx_21 != 0)
                    ecx_22 = *ecx_21
                
                int32_t edi_12
                
                if (ecx_21 == 0 || ecx_22 == 0)
                    edi_12 = 0
                    
                    while (true)
                        if (edi_12 s>= ebx_2)
                            *(esp_1 - 4) = "nothing waiting"
                            sub_444530()
                            noreturn
                        
                        if (*eax_20 == 1)
                            break
                        
                        edi_12 += 1
                        eax_20 = &eax_20[0x70]
                    
                    int32_t eax_35 = *(arg1[edi_12 * 0x6f + 7] + 0xc)
                    
                    if (eax_35 != 0)
                        *(esp_1 - 4) = edi_12
                        *(esp_1 - 8) = arg1
                        eax_35()
                        esp_1 += 8
                else
                    *(esp_1 - 4) = eax_20
                    *(esp_1 - 8) = arg1
                    edi_12 = ecx_22()
                    esp_1 += 8
                
                void* ebx_5 = arg1[0x311]
                int32_t eax_36 = edi_12 * 0x1c0
                *(esp_1 - 4) = edi_12
                int32_t* ebx_6 = ebx_5 + eax_36
                int32_t eax_37
                int32_t edx_19
                eax_37, edx_19 = sub_449eb0(eax_36, ebx_6, arg1)
                *ebx_6 = eax_37
                ebx_6[1] = edx_19
                void* edx_20 = arg1[0x311]
                int32_t eax_38 = *(edx_20 + 0x8c0)
                
                if (eax_38 != 0xffffffff)
                    int32_t ecx_24 = 0
                    int32_t* eax_40 = eax_38 * 0x1c0 + edx_20
                    int32_t ebx_7 = *(*arg1 + 4)
                    
                    if (ebx_7 s<= 0)
                    label_44a5c9:
                        *(edx_20 + 0x8c0) = 0xffffffff
                        int32_t i_2 = 0
                        
                        if (*(*arg1 + 4) s> 0)
                            int32_t ecx_25 = 0x8c4
                            
                            do
                                ecx_25 += 4
                                i_2 += 1
                                *(ecx_25 + arg1[0x311] - 4) = 0
                            while (i_2 s< *(*arg1 + 4))
                        
                        *(esp_1 - 4) = zx.d(eax_40[7].b)
                        *(esp_1 - 8) = &eax_40[0x6e]
                        *(esp_1 - 0xc) = &eax_40[9]
                        *(esp_1 - 0x10) = eax_40[0x6d]
                        int32_t eax_49
                        int32_t edx_23
                        eax_49, edx_23 = sub_449070(&eax_40[9], eax_38, arg1)
                        *eax_40 = eax_49
                        eax_40[1] = edx_23
                    else
                        void* eax_42 = edx_20 + 0x8c4
                        
                        while (true)
                            int32_t edx_21 = *eax_42
                            
                            if (edx_21 != 0 && edx_21 != 3)
                                break
                            
                            ecx_24 += 1
                            eax_42 += 4
                            
                            if (ecx_24 s>= ebx_7)
                                goto label_44a5c9
                
                if (*ebx_6 != 0)
                    goto label_44a321
                
                int32_t eax_51
                int32_t edx_25
                eax_51, edx_25 = sub_449820(arg1, edi_12)
                var_c2c[edi_12 * 0x70] = eax_51
                var_c28
                *(&var_c28 + eax_36) = edx_25
                
                if (*ebx_6 != 0)
                    goto label_44a321
                
                int32_t i_3 = 0
                int32_t i_11 = 0
                
                if (*(*arg1 + 4) s<= 0)
                    goto label_44a321
                
                int32_t ebx_9 = 0
                
                do
                    if (*(&var_c2c + ebx_9) == 2 && *(&var_c28 + ebx_9) == edi_12)
                        void* ecx_30 = arg1[0x311] + ebx_9
                        *(esp_1 - 4) = zx.d(*(ecx_30 + 0x1c))
                        *(esp_1 - 8) = ecx_30 + 0x1b8
                        *(esp_1 - 0xc) = ecx_30 + 0x24
                        *(esp_1 - 0x10) = *(ecx_30 + 0x1b4)
                        int32_t eax_57
                        int32_t edx_26
                        eax_57, edx_26 = sub_449070(ecx_30 + 0x24, i_3, arg1)
                        *(&var_c28 + ebx_9) = edx_26
                        i_3 = i_11
                        *(&var_c2c + ebx_9) = eax_57
                    
                    i_3 += 1
                    ebx_9 += 0x1c0
                    i_11 = i_3
                while (i_3 s< *(*arg1 + 4))
                
                goto label_44a321
            
            edx_11 += 1
            ecx_8 = &ecx_8[0x70]
            
            if (edx_11 s>= ebx_2)
                eax_21 = *arg1
                break
    
    int32_t i_4 = 0
    int32_t i_10 = 0
    
    if (ebx_2 s> 0)
        void* edi_8 = &arg1[0x5f]
        
        do
            int32_t j_4 = *edi_8
            
            if (j_4 != 0xffffffff)
                do
                    *(esp_1 - 4) = 0
                    *(esp_1 - 8) = 0
                    *(esp_1 - 0xc) = 0xffffffff
                    sub_445280(j_4, j_4, arg1)
                    j_4 = *edi_8
                while (j_4 != 0xffffffff)
                
                i_4 = i_10
            
            eax_21 = *arg1
            i_4 += 1
            edi_8 += 0x1bc
            i_10 = i_4
        while (i_4 s< *(eax_21 + 4))
    
    int32_t i_5 = 0
    int32_t i_9 = 0
    
    if (*(eax_21 + 4) s> 0)
        void* ebx_3 = &arg1[0x63]
        
        do
            *(esp_1 - 4) = 1
            int32_t var_32c[0xc9]
            *(esp_1 - 8) = &var_32c
            int32_t eax_23 = sub_4453c0(&var_32c, i_5, arg1)
            int32_t edi_9 = 0
            int32_t var_c30_2 = eax_23
            
            if (eax_23 s> 0)
                do
                    var_328
                    
                    if ((*(*(&var_328 + (edi_9 << 3)) + 4) & 0x100) != 0)
                        int32_t edx_14 = var_32c[edi_9 * 2]
                        void* eax_26 = edx_14 * 0xc + 0x8cd + arg1
                        
                        if (*eax_26 != 0)
                            int32_t eax_27 = *ebx_3
                            int32_t ecx_13 = 1
                            *(ebx_3 + 0x20) += 1
                            *ebx_3 = eax_27 + 1
                            
                            if (eax_27 + 1 s> 0xa)
                                *ebx_3 = 0xa
                                ecx_13 = 0xb - (eax_27 + 1)
                            
                            if (arg1[4] == 0 && ecx_13 != 0)
                                *(esp_1 - 4) = 0
                                *(esp_1 - 8) = 0
                                *(esp_1 - 0xc) = ecx_13
                                *(esp_1 - 0x10) = edx_14
                                *(esp_1 - 0x14) = i_9
                                sub_444430(eax_27 + 1, 0x25, arg1)
                            
                            *eax_26 = 0
                        
                        eax_23 = var_c30_2
                    
                    edi_9 += 1
                while (edi_9 s< eax_23)
            
            ebx_3 += 0x1bc
            i_5 = i_9 + 1
            i_9 = i_5
        while (i_5 s< *(*arg1 + 4))
    
    void* eax_31 = *arg1
    int32_t i_6 = 0
    arg1[0x311] = 0
    
    if (*(eax_31 + 4) s> 0)
        do
            *(esp_1 - 4) = 1
            sub_4448d0(eax_31, i_6, arg1)
            eax_31 = *arg1
            i_6 += 1
        while (i_6 s< *(eax_31 + 4))
    
    int32_t i_7 = 0
    void* edi_10 = arg1 + 0x8cb
    
    do
        if (*(edi_10 - 2) == 1)
            *(esp_1 - 4) = 0
            *(esp_1 - 8) = 0
            *(esp_1 - 0xc) = 0xffffffff
            eax_31 = sub_445280(eax_31, i_7, arg1)
            *edi_10 = 0xff
        
        i_7 += 1
        edi_10 += 0xc
    while (i_7 s< 0x46)
    
    void* result = sub_4459a0(arg1)
    *esp_1
    esp_1[1]
    esp_1[2]
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
