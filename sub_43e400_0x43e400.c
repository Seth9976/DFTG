// 函数名称: sub_43e400
// 虚拟地址: 0x43e400
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_43e400()
{
    // 第一条实际指令: int32_t __saved_ebp_2
    int32_t __saved_ebp_2
    int32_t __saved_ebp_1 = __saved_ebp_2
    int32_t* ecx
    int32_t edx
    ecx, edx = __alloca_probe(0x404c)
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    int32_t var_4020 = edx
    void* ecx_1 = edx * 0x113c
    int32_t __saved_esi_1
    int32_t __saved_esi = __saved_esi_1
    int32_t edi
    int32_t var_10 = edi
    int32_t result = ecx[0x30e]
    double var_4044 = 1.0
    int32_t var_4030 = 5
    
    if (result != *(ecx_1 + 0x138b858))
        int32_t i = 0
        void* ebx_1 = &ecx[0x232]
        void* ecx_3 = edx * 0x118 + &data_138fd60
        void* var_4014
        char* esi = &var_4014:3 - ecx
        void* var_4018_1 = ecx_3
        char* var_4028_1 = esi
        void* var_18
        
        do
            void* eax_2 = *(ebx_1 - 4)
            *ecx_3 = 0xffffffff
            
            if (eax_2 != 0 && (*(eax_2 + 0x1c) & 0x43) == 0)
                eax_2.b = *(ebx_1 + 1)
                
                if (eax_2.b != 2)
                    if (eax_2.b == 3 || eax_2.b == 4)
                        int32_t eax_3 = sx.d(*ebx_1)
                        
                        if (eax_3 != edx)
                            eax_2 = eax_3 * 0x1bc
                            esi = var_4028_1
                            
                            if (*(eax_2 + ecx + 0x174) == i)
                                goto label_43e50a
                            
                            ecx_3 = var_4018_1
                            
                            if (*(eax_2 + ecx + 0x178) == i)
                                goto label_43e50a
                    else
                    label_43e50a:
                        int32_t* eax_4 = sub_43a6c0(eax_2, ecx, &var_4014, edx)
                        *(esi + ebx_1) = 0
                        int32_t var_14_2 = 0
                        int32_t var_18_1 = 3
                        int32_t var_1c_1 = var_4020
                        sub_445280(eax_4, i, &var_4014)
                        int64_t* eax_5
                        int64_t xmm0_1
                        eax_5, xmm0_1 = sub_43b0d0(&var_4014, var_4020)
                        int32_t* eax_6 = sub_43a6c0(eax_5, ecx, &var_4014, var_4020)
                        *(esi + ebx_1) = 1
                        int32_t var_14_4 = 0
                        var_18 = 4
                        int32_t var_1c_2 = var_4020
                        sub_445280(eax_6, i, &var_4014)
                        ecx_3 = var_4018_1
                        edx = var_4020
                        int32_t eax_7
                        eax_7.b = xmm0_1 f<= sub_43b0d0(&var_4014, var_4020)
                        *(((var_4020 * 0x46 + i) << 2) + &data_138fd60) = eax_7
                        esi = var_4028_1
            
            i += 1
            ecx_3 += 4
            ebx_1 += 0xc
            var_4018_1 = ecx_3
        while (i s< 0x46)
        
        void* eax_8 = *ecx
        int32_t edi_1
        
        if (*(eax_8 + 0x11) != 0 || *(eax_8 + 0x12) != 0)
            edi_1 = 6
            var_4030 = 6
        else
            edi_1 = 5
        
        for (void* i_1 = &data_1490b60; i_1 s< &data_14d0b60; i_1 += 4)
            for (void* j = *i_1; j != 0; j = *i_1)
                *i_1 = *(j + 0x10)
                _free(j)
        
        for (void* i_2 = &data_1410730; i_2 s< &data_1450730; i_2 += 4)
            for (void* j_1 = *i_2; j_1 != 0; j_1 = *i_2)
                *i_2 = *(j_1 + 0xc)
                _free(j_1)
        
        for (void* i_3 = &data_13d0460; i_3 s< &data_1410460; i_3 += 4)
            for (void* j_2 = *i_3; j_2 != 0; j_2 = *i_3)
                *i_3 = *(j_2 + 0x14)
                _free(j_2)
        
        sub_43fbb0()
        
        for (void* i_4 = &data_1390460; i_4 s< &data_13d0460; i_4 += 4)
            for (void* j_3 = *i_4; j_3 != 0; j_3 = *i_4)
                *i_4 = *(j_3 + 0x1ec)
                _free(j_3)
        
        for (void* i_5 = &data_134a660; i_5 s< &data_138a660; i_5 += 4)
            for (void* j_4 = *i_5; j_4 != 0; j_4 = *i_5)
                *i_5 = *(j_4 + 0x28c)
                _free(j_4)
        
        for (void* i_6 = &data_14d0b68; i_6 s< &data_1510b68; i_6 += 4)
            for (void* j_5 = *i_6; j_5 != 0; j_5 = *i_6)
                *i_6 = *(j_5 + 0x3c)
                _free(j_5)
        
        for (void* i_7 = &data_1450b60; i_7 s< &data_1490b60; i_7 += 4)
            for (void* j_6 = *i_7; j_6 != 0; j_6 = *i_7)
                *i_7 = *(j_6 + 0x198)
                _free(j_6)
        
        void* eax_16 = *ecx
        int32_t i_8 = 0
        data_138a714 = 0
        void* edx_7 = eax_16
        data_6cfe8c = 0
        void var_33c4
        
        if (*(eax_16 + 4) s> 0)
            int32_t ecx_11 = 0
            void var_33b4
            void* ebx_3 = &var_33b4
            int32_t var_4018_2 = 0
            
            do
                if (i_8 != var_4020)
                    sub_43a6c0(var_4020, ecx, &var_4014, var_4020)
                    sub_43c400(ebx_3 - 0x10, i_8, &var_4014, ebx_3 - 0x10)
                    int64_t xmm1_2 = (zx.o(0)).q
                    int32_t j_10 = ((edi_1 - 4) u>> 2) + 1
                    void* eax_19 = ebx_3
                    int32_t edx_10 = j_10 << 2
                    int32_t j_7
                    
                    do
                        int64_t xmm0_3 = *(eax_19 - 0x10)
                        eax_19 += 0x20
                        int64_t xmm0_4 = _mm_max_sd(xmm0_3, xmm1_2)
                        int64_t xmm1_4 = _mm_max_sd(*(eax_19 - 0x28), xmm0_4)
                        int64_t xmm0_6 = _mm_max_sd(*(eax_19 - 0x20), xmm1_4)
                        xmm1_2 = _mm_max_sd(*(eax_19 - 0x18), xmm0_6)
                        j_7 = j_10
                        j_10 -= 1
                    while (j_7 != 1)
                    
                    if (edx_10 s< edi_1)
                        void* eax_22 = &var_33c4 + ((var_4018_2 + edx_10) << 3)
                        int32_t j_11 = edi_1 - edx_10
                        int32_t j_8
                        
                        do
                            int64_t xmm0_7 = *eax_22
                            eax_22 += 8
                            xmm1_2 = _mm_max_sd(xmm0_7, xmm1_2)
                            j_8 = j_11
                            j_11 -= 1
                        while (j_8 != 1)
                    
                    ecx_11 = var_4018_2
                    var_4044 = xmm1_2 f* var_4044
                
                i_8 += 1
                ecx_11 += 0x132
                ebx_3 += 0x990
                var_4018_2 = ecx_11
                eax_16 = *ecx
                edx_7 = eax_16
            while (i_8 s< *(eax_16 + 4))
        
        int32_t i_9 = 0
        int32_t i_13 = 0
        void var_3f4
        double var_20
        
        if (*(eax_16 + 4) s> 0)
            void var_33bc
            void* esi_4 = &var_33bc
            int32_t var_4024_1 = 0
            int32_t var_4018_3 = 0
            void* ebx_4 = &var_3f4
            void* var_402c_1 = &var_33bc
            
            do
                if (i_9 != var_4020)
                    int32_t j_9 = 0
                    void* edx_11 = ebx_4
                    
                    do
                        *(edx_11 + 0x18) = *(esi_4 - 8)
                        esi_4 += 0x20
                        int64_t xmm0_10 = *(esi_4 - 0x20)
                        edx_11 += 0x80
                        *(edx_11 - 0x80) = j_9 + 1
                        *(edx_11 - 0x48) = xmm0_10
                        int64_t xmm0_11 = *(esi_4 - 0x18)
                        *(edx_11 - 0x60) = j_9 + 2
                        int32_t eax_26 = j_9 + 3
                        *(edx_11 - 0x28) = xmm0_11
                        j_9 += 4
                        int64_t xmm0_12 = *(esi_4 - 0x10)
                        *(edx_11 - 0x40) = eax_26
                        *(edx_11 - 8) = xmm0_12
                        *(edx_11 - 0x20) = j_9
                    while (j_9 s< edi_1 - 3)
                    
                    edi_1 = var_4030
                    
                    if (j_9 s< edi_1)
                        void* edx_12 = &var_3f4 + ((var_4018_3 + j_9) << 5)
                        void* eax_32 = &(&__saved_ebp)[(var_4024_1 + j_9) * 2 - 0xcf0]
                        
                        do
                            int64_t xmm0_13 = *eax_32
                            eax_32 += 8
                            j_9 += 1
                            *(edx_12 + 0x18) = xmm0_13
                            *edx_12 = j_9
                            edx_12 += 0x20
                        while (j_9 s< edi_1)
                    
                    var_20.d = ebx_4
                    _qsort(var_20.d, edi_1, 0x20, sub_43e290)
                    i_9 = i_13
                    esi_4 = var_402c_1
                
                i_9 += 1
                var_4018_3 += 6
                esi_4 += 0x990
                var_4024_1 += 0x132
                ebx_4 += 0xc0
                i_13 = i_9
                eax_16 = *ecx
                edx_7 = eax_16
                var_402c_1 = esi_4
            while (i_9 s< *(eax_16 + 4))
        
        if (*(eax_16 + 4) == 2)
            eax_16 = edx_7
            int64_t var_25c_1 = 0x3fd5555555555555
            int64_t xmm0_15 = 0x3fc5555555555555
            int32_t var_274_1 = 1
            int32_t var_254_1 = 2
            int64_t var_23c_1 = xmm0_15
            int32_t var_234_1 = 3
            int64_t var_21c_1 = xmm0_15
            int32_t var_214_1 = 4
            int64_t var_1fc_1 = xmm0_15
            int32_t var_1f4_1 = 5
            int64_t var_1dc_1 = xmm0_15
        
        int32_t eax_34 = *(eax_16 + 4)
        double xmm0_17 = var_4044 * 0.125
        
        if (eax_34 == 4)
            xmm0_17 = xmm0_17 * 4.0
        else if (eax_34 == 5)
            xmm0_17 = xmm0_17 * 6.0
        
        int32_t ebx_5 = var_4020
        int32_t* edi_3 = ecx
        data_138a704 = 0
        var_18.q = xmm0_17
        var_20 = 1.0
        void var_34
        sub_43e2c0(&var_3f4, ebx_5, edi_3, 0, &var_3f4, &var_34, var_20, var_18)
        var_20.d = data_138a718
        _qsort(var_20.d, data_138a704, 0x20, sub_43e290)
        int32_t eax_36 = data_138a704
        
        if (eax_36 s> 0x14)
            eax_36 = 0x14
        
        data_138a704 = eax_36
        sub_43a6c0(eax_36, edi_3, &var_4014, ebx_5)
        int32_t ecx_19 = *(*edi_3 + 4)
        int32_t eax_38 = 0
        var_4044:4.d = ecx_19
        int64_t var_404c
        var_404c:4.d = 0
        
        if (ecx_19 s> 0)
            void var_3ffc
            void* esi_5 = &var_3ffc
            void* edx_15 = &var_33c4
            void* var_4018_4 = &var_3ffc
            void* var_4028_2 = &var_33c4
            
            do
                if (eax_38 != ebx_5)
                    void* eax_39 = var_4014
                    int32_t edi_4 = 5
                    
                    if (*(eax_39 + 0x11) != 0 || *(eax_39 + 0x12) != 0)
                        edi_4 = 6
                    
                    int32_t ecx_20 = 0xa
                    
                    if (*(eax_39 + 8) == 0)
                        ecx_20 = 7
                    
                    int32_t i_10 = 0
                    
                    if (*(esi_5 + 0x14c) s> 0)
                        void* eax_40 = esi_5 + 0xd
                        
                        do
                            if (*eax_40 == 7)
                                *eax_40 = 4
                            
                            i_10 += 1
                            eax_40 += 8
                        while (i_10 s< *(esi_5 + 0x14c))
                    
                    int32_t ecx_21 = ecx_20
                    int32_t ebx_6 = edi_4 * 5
                    int32_t eax_41 = edi_4
                    int32_t edx_16 = 1
                    int32_t var_402c_2 = eax_41
                    int32_t var_4030_1 = 1
                    
                    do
                        bool cond:4_1 = *(esi_5 + 0x14c) s<= 0
                        __builtin_memset(&var_20, 0, 0x18)
                        int32_t i_14 = 0
                        
                        if (not(cond:4_1))
                            int32_t i_11 = 0
                            void* esi_6 = esi_5 + 0xd
                            void* ecx_22 = var_4018_4
                            void* var_4034_1 = esi_6
                            
                            do
                                if (*esi_6 == 4)
                                    if (zx.d(*(esi_6 - 1)) != edx_16 || (*(esi_6 + 6) & 2) != 0)
                                        i_11 = i_14
                                    else
                                        int32_t ebx_7 = 0xffffffff
                                        int32_t ecx_23 = 0
                                        int64_t xmm1_7 = -0x4010000000000000
                                        int32_t edx_17 = 0
                                        
                                        do
                                            int64_t xmm0_19 = *(var_4028_2 + ((
                                                *(&var_20 + (ecx_23 << 2)) + edx_17 + var_402c_2) << 3))
                                            
                                            if (not(xmm0_19 f<= xmm1_7))
                                                xmm1_7 = xmm0_19
                                                ebx_7 = ecx_23
                                            
                                            ecx_23 += 1
                                            edx_17 += 5
                                        while (ecx_23 s< edi_4)
                                        
                                        esi_6 = var_4034_1
                                        *(&var_20 + (ebx_7 << 2)) += 1
                                        bool cond:5_1 = *(&var_20 + (ebx_7 << 2)) s<= 4
                                        ecx_22 = var_4018_4
                                        edx_16 = var_4030_1
                                        *(esi_6 + 4) = ebx_7.b + 1
                                        i_11 = i_14
                                        
                                        if (not(cond:5_1))
                                            *(&var_20 + (ebx_7 << 2)) = 4
                                
                                i_11 += 1
                                esi_6 += 8
                                i_14 = i_11
                                var_4034_1 = esi_6
                            while (i_11 s< *(ecx_22 + 0x14c))
                            
                            eax_41 = var_402c_2
                            ebx_6 = edi_4 * 5
                            esi_5 = var_4018_4
                            ecx_21 = ecx_20
                        
                        edx_16 += 1
                        eax_41 += ebx_6
                        var_402c_2 = eax_41
                        var_4030_1 = edx_16
                    while (edx_16 s<= ecx_21)
                    
                    edx_15 = var_4028_2
                    eax_38 = var_404c:4.d
                    ecx_19 = var_4044:4.d
                    ebx_5 = var_4020
                
                eax_38 += 1
                edx_15 += 0x990
                esi_5 += 0x1bc
                var_404c:4.d = eax_38
                var_4028_2 = edx_15
                var_4018_4 = esi_5
            while (eax_38 s< ecx_19)
            
            edi_3 = ecx
        
        int32_t var_14_15 = 0x38
        data_1410460 = 0
        data_1304618 = 0
        data_14d0b64 = 0
        int32_t var_3e94[0x2b4]
        var_3e94[ebx_5 * 0x6f] = 0
        int32_t* eax_47 = _malloc()
        int128_t xmm0_20 = data_60ccc0
        data_1450b58 = eax_47
        data_138a710 = 0
        *(eax_47 + 0x10) = xmm0_20
        *eax_47 = 1
        __builtin_memset(&eax_47[8], 0, 0x18)
        *(eax_47 + 8) = 0x408f380000000000
        sub_43d170(eax_47)
        int32_t edx_19 = sub_43db40()
        int32_t ecx_25
        
        if (data_138a714 == 0)
        label_43eddc:
            ecx_25 = data_14d0b64
        else
            while (true)
                ecx_25 = data_14d0b64
                
                if (ecx_25 s>= 0x2710)
                    break
                
                if (data_138a710 != 0 && edi_3[ebx_5 * 0x6f + 0x73] == 0 && ecx_25 s>= 0xa)
                    break
                
                edx_19 = sub_43db40()
                
                if (data_138a714 == 0)
                    goto label_43eddc
        
        void* eax_48 = data_138a710
        void* var_18_2
        var_18_2.q = *(eax_48 + 8)
        int32_t var_1c_5 = ecx_25
        var_20.d = data_6cfe8c
        sub_4394f0(eax_48, edx_19, ecx_25, "Best node found at %d of %d searched (score %f).\n")
        void* esi_9 = data_138a710
        *(ecx_1 + 0x138b858) = edi_3[0x30e]
        int32_t var_14_16 = *(esi_9 + 0x34) * 0x2c
        int32_t var_18_3 = *(esi_9 + 0x30)
        void* var_1c_6 = ecx_1 + 0x138a720
        sub_579300()
        int32_t* edi_5 = data_1450b58
        result = *(esi_9 + 0x34)
        *(ecx_1 + 0x138b850) = result
        *(ecx_1 + 0x138b854) = 0
        *edi_5 -= 1
        
        if (*edi_5 s<= 0)
            int32_t i_12 = 0
            
            if (edi_5[0xa] s> 0)
                do
                    int32_t* ecx_26 = *(edi_5[0xb] + (i_12 << 2))
                    
                    if (ecx_26 != 0)
                        sub_43cde0(ecx_26)
                    
                    i_12 += 1
                while (i_12 s< edi_5[0xa])
            
            _free(edi_5[0xb])
            _free(edi_5[9])
            _free(edi_5[0xc])
            result = _free(edi_5)
    
    int32_t entry_ebx
    @__security_check_cookie@4(entry_ebx ^ &__saved_ebp)
    return result
}
