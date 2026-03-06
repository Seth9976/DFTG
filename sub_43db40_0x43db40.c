// 函数名称: sub_43db40
// 虚拟地址: 0x43db40
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*sub_43db40()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t edx
    ecx, edx = __alloca_probe(0x18dc)
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    void* var_18ac
    sub_43a6c0(edx, ecx, &var_18ac, edx)
    int32_t* edx_2 = data_1410464
    int32_t ebx = data_138a714
    int32_t ebx_1 = ebx - 1
    data_138a714 = ebx_1
    void* eax_3 = *edx_2
    void* eax_4 = edx_2[ebx_1]
    *edx_2 = eax_4
    
    if (ebx != 1)
        void* ecx_2 = nullptr
        void* edi_1 = 1
        
        if (ebx_1 s> 1)
            do
                eax_4 = edx_2[edi_1]
                void* esi_1 = (ecx_2 << 1) + 2
                int64_t xmm1_1 = *(eax_4 + 0x10)
                int64_t xmm0_1
                
                if (esi_1 s< ebx_1)
                    xmm0_1 = *(edx_2[esi_1] + 0x10)
                    eax_4 = edx_2[edi_1]
                else
                    xmm0_1 = -0x4010000000000000
                
                void* ebx_2 = edx_2[ecx_2]
                int64_t xmm2_1 = *(ebx_2 + 0x10)
                
                if (not(xmm2_1 f< xmm1_1) && xmm2_1 f>= xmm0_1)
                    break
                
                if (xmm1_1 f<= xmm0_1)
                    eax_4 = edx_2[esi_1]
                    edx_2[ecx_2] = eax_4
                    ecx_2 = esi_1
                    edx_2[esi_1] = ebx_2
                else
                    edx_2[ecx_2] = eax_4
                    ecx_2 = edi_1
                    edx_2[edi_1] = ebx_2
                
                ebx_1 = data_138a714
                edi_1 = (ecx_2 << 1) + 1
            while (edi_1 s< ebx_1)
    
    void* ebx_4 = eax_3
    int32_t i = 0
    
    if (*(ebx_4 + 0x34) s> 0)
        int32_t edi_2 = 0
        
        do
            int32_t* eax_7 = *(ebx_4 + 0x30) + edi_2
            eax_4 = sub_43da90(eax_7, edx, &var_18ac, eax_7)
            i += 1
            edi_2 += 0x2c
        while (i s< *(ebx_4 + 0x34))
    
    void* result = sub_43d6e0(eax_4, edx, &var_18ac, ebx_4)
    int32_t i_1 = 0
    int64_t xmm2_2 = (zx.o(0)).q
    int32_t i_3 = 0
    int64_t var_18cc = (zx.o(0)).q
    
    if (data_138a704 s> 0)
        int32_t ebx_3 = edx
        int32_t esi_2 = 0
        int32_t var_18b8_1 = 0
        
        do
            void var_c5c
            sub_43a6c0(result, &var_18ac, &var_c5c, ebx_3)
            int32_t ecx_6 = 0
            int32_t var_18b0_1 = 0
            int32_t eax_9 = *(var_18ac + 4)
            int32_t var_44[0xc]
            
            if (eax_9 s> 0)
                int32_t esi_3 = 0
                
                do
                    if (ecx_6 != ebx_3)
                        int32_t eax_11 = *(data_138a718 + ((ecx_6 + (i_1 << 3)) << 2))
                        int32_t edx_7 = 0
                        char var_adc[0x864]
                        *(&var_adc + esi_3) = eax_11
                        var_44[eax_11] = 1
                        void var_af8
                        int32_t j_7 = *(&var_af8 + esi_3)
                        
                        if (j_7 s<= 0)
                        label_43dd3b:
                            int32_t eax_13 = 0
                            
                            if (j_7 s> 0)
                                void* ecx_8 = &__saved_ebp + esi_3 - 0xc33
                                
                                do
                                    if (*ecx_8 == 4)
                                        int32_t ecx_9 = esi_3 + (eax_13 << 3)
                                        eax_13.b = var_adc[esi_3]
                                        char var_c33[0x13b]
                                        var_c33[ecx_9] = eax_13.b
                                        break
                                    
                                    eax_13 += 1
                                    ecx_8 += 8
                                while (eax_13 s< j_7)
                                
                                ecx_6 = var_18b0_1
                        else
                            int32_t j_6 = j_7
                            void* ecx_7 = &__saved_ebp + esi_3 - 0xc2f
                            int32_t j
                            
                            do
                                if (*(ecx_7 - 4) == 4 && zx.d(*ecx_7) == *(&var_adc + esi_3))
                                    edx_7 = 1
                                
                                ecx_7 += 8
                                j = j_6
                                j_6 -= 1
                            while (j != 1)
                            j_7 = *(&var_af8 + esi_3)
                            ecx_6 = var_18b0_1
                            
                            if (edx_7 == 0)
                                goto label_43dd3b
                        
                        ebx_3 = edx
                    
                    ecx_6 += 1
                    i_1 = i_3
                    esi_3 += 0x1bc
                    var_18b0_1 = ecx_6
                    eax_9 = *(var_18ac + 4)
                while (ecx_6 s< eax_9)
                
                esi_2 = var_18b8_1
            
            if (eax_9 == 2)
                var_44[*(esi_2 + data_138a718 + 8)] = 1
            
            sub_447380(&var_c5c)
            double xmm0_2 = sub_43c700()
            result = data_138a718
            i_1 += 1
            i_3 = i_1
            double xmm1_2 = *(esi_2 + result + 0x18)
            esi_2 += 0x20
            var_18b8_1 = esi_2
            xmm2_2 = xmm1_2 * xmm0_2 f+ var_18cc
            var_18cc = xmm2_2
        while (i_1 s< data_138a704)
        
        ebx_4 = eax_3
    
    bool cond:1 = *(ebx_4 + 0x20) == 0
    int32_t ecx_11 = data_14d0b64
    *(ebx_4 + 8) = xmm2_2
    
    if (not(cond:1))
        void* edx_9 = data_138a710
        
        if (edx_9 == 0)
            data_138a710 = ebx_4
            data_6cfe8c = ecx_11
        else
            double xmm1_6 = xmm2_2 f- *(edx_9 + 8)
            
            if (not(-0x414f39085f4a1273 f> xmm1_6)
                    && (xmm1_6 > 9.9999999999999995e-07 || *(ebx_4 + 0x34) s< *(edx_9 + 0x34)))
                data_138a710 = ebx_4
                data_6cfe8c = ecx_11
    
    double xmm0_4 = *(ebx_4 + 0x18)
    xmm0_4 - -1.0
    data_14d0b64 = ecx_11 + 1
    result:1.b = (xmm0_4 == -1.0 ? 1 : 0) << 6 | (is_unordered.q(xmm0_4, -1.0) ? 1 : 0) << 2
        | (xmm0_4 < -1.0 ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (p_1)
        int64_t xmm2_3 = xmm2_2 f- xmm0_4
        int32_t eax_19
        int32_t edx_10
        eax_19, edx_10 = sub_43d2a0(*(ebx_4 + 0x34) * 0x2c + *(ebx_4 + 0x30) - 0x2c)
        uint32_t eax_20 = zx.d(eax_19.w)
        int32_t* esi_4 = *((eax_20 << 2) + &data_13d0460)
        
        if (esi_4 == 0)
        label_43dec6:
            int32_t var_14_4 = 0x18
            result = _malloc()
            *result = eax_19
            int32_t ecx_15 = *((eax_20 << 2) + &data_13d0460)
            *(result + 4) = edx_10
            *(result + 8) = xmm2_3
            *(result + 0x10) = 1
            *(result + 0x14) = ecx_15
            *((eax_20 << 2) + &data_13d0460) = result
        else
            while (*esi_4 != eax_19 || esi_4[1] != edx_10)
                esi_4 = esi_4[5]
                
                if (esi_4 == 0)
                    goto label_43dec6
            
            result = esi_4[4]
            double xmm1_8 = _mm_cvtepi32_pd(zx.q(result))
            esi_4[4] = result + 1
            *(esi_4 + 8) = (xmm1_8 f* *(esi_4 + 8) f+ xmm2_3) / _mm_cvtepi32_pd(zx.q(result + 1))
        
        ebx_4 = eax_3
    
    int32_t i_2 = 0
    int32_t i_4 = 0
    
    if (*(ebx_4 + 0x28) s> 0)
        int32_t var_18b8_3 = 0
        
        do
            sub_43a6c0(result, ecx, &var_18ac, edx)
            int32_t j_1 = 0
            
            if (*(ebx_4 + 0x34) s> 0)
                int32_t esi_5 = 0
                
                do
                    int32_t* eax_22 = *(ebx_4 + 0x30) + esi_5
                    sub_43da90(eax_22, edx, &var_18ac, eax_22)
                    j_1 += 1
                    esi_5 += 0x2c
                while (j_1 s< *(ebx_4 + 0x34))
                
                i_2 = i_4
            
            int32_t edi_4 = var_18b8_3
            int32_t* eax_24 = *(ebx_4 + 0x24) + edi_4
            sub_43da90(eax_24, edx, &var_18ac, eax_24)
            
            if (sub_43ce30(&var_18ac, edx) == 0)
                int32_t* eax_26 = sub_43d1f0(ebx_4, *(ebx_4 + 0x24) + edi_4)
                var_18cc:4.d = eax_26
                *(*(ebx_4 + 0x2c) + (i_4 << 2)) = eax_26
                int32_t eax_28
                int32_t edx_18
                eax_28, edx_18 = sub_43d2a0(*(ebx_4 + 0x24) + edi_4)
                int32_t* ecx_26 = *((zx.d(eax_28.w) << 2) + &data_13d0460)
                int64_t xmm1_12
                
                if (ecx_26 == 0)
                label_43e039:
                    xmm1_12 = (zx.o(0)).q
                else
                    while (*ecx_26 != eax_28 || ecx_26[1] != edx_18)
                        ecx_26 = ecx_26[5]
                        
                        if (ecx_26 == 0)
                            goto label_43e039
                    
                    xmm1_12 = *(ecx_26 + 8)
                
                *(eax_26 + 0x10) = *(ebx_4 + 8) f+ xmm1_12
                *(eax_26 + 0x18) = *(ebx_4 + 8)
                double xmm0_11 = *(ebx_4 + 0x18)
                xmm0_11 - -1.0
                eax_28:1.b = (xmm0_11 == -1.0 ? 1 : 0) << 6
                    | (is_unordered.q(xmm0_11, -1.0) ? 1 : 0) << 2 | (xmm0_11 < -1.0 ? 1 : 0)
                bool p_3 = unimplemented  {test ah, 0x44}
                
                if (not(p_3))
                    *(eax_26 + 0x10) = 0x408f380000000000
                
                sub_43d170(eax_26)
                int32_t edx_19 = edx * 0x1bc
                int64_t var_18dc_1 = 0
                int32_t var_144[0xc]
                __builtin_memset(&var_144, 0, 0x134)
                int32_t var_1748[0x1d9]
                int32_t j_5 = var_1748[edx * 0x6f]
                
                if (j_5 s> 0)
                    void* edx_20 = &(&__saved_ebp)[edx * 0x6f - 0x621]
                    int32_t j_2
                    
                    do
                        if (*(edx_20 + 1) == 4)
                            uint32_t ecx_30 = zx.d(*edx_20) * 7 + zx.d(*(edx_20 + 5))
                            var_144[ecx_30] += 1
                        
                        edx_20 += 8
                        j_2 = j_5
                        j_5 -= 1
                    while (j_2 != 1)
                
                int32_t edi_5 = 0
                void var_114
                void* eax_31 = &var_114
                int32_t esi_7 = 0
                int32_t j_3 = 0x118
                void* var_18b0_2 = &var_114
                
                do
                    int32_t ecx_32 = *(eax_31 - 0x10) + j_3
                    int32_t eax_33 = *(eax_31 - 0x14) + j_3
                    int32_t eax_36 = *(var_18b0_2 - 0xc) + j_3
                    int32_t eax_39 = *(var_18b0_2 - 8) + j_3
                    int32_t eax_42 = *(var_18b0_2 + 4) + j_3
                    int32_t edx_25 = *((ecx_32 << 3) + &data_1304760) ^ *((eax_33 << 3) + &data_1304620)
                        ^ *((eax_36 << 3) + &data_13048a0) ^ *((eax_39 << 3) + &data_13049e0)
                        ^ *((eax_42 << 3) + &data_1304da0)
                    int32_t ecx_37 = *((ecx_32 << 3) + &data_1304764) ^ *((eax_33 << 3) + &data_1304624)
                        ^ *((eax_36 << 3) + &data_13048a4) ^ *((eax_39 << 3) + &data_13049e4)
                        ^ *((eax_42 << 3) + &data_1304da4)
                    int32_t eax_45 = *(var_18b0_2 - 4) + j_3
                    int32_t eax_48 = *var_18b0_2 + j_3
                    j_3 += 0x118
                    esi_7 ^=
                        edx_25 ^ *((eax_45 << 3) + &data_1304b20) ^ *((eax_48 << 3) + &data_1304c60)
                    edi_5 ^=
                        ecx_37 ^ *((eax_45 << 3) + &data_1304b24) ^ *((eax_48 << 3) + &data_1304c64)
                    eax_31 = var_18b0_2 + 0x1c
                    var_18b0_2 = eax_31
                while (j_3 s< 0xc08)
                
                var_172c
                int32_t eax_50 = *(&var_172c + edx_19)
                int32_t esi_8 = esi_7 ^ (&data_13902e8)[eax_50 * 2]
                int32_t edi_6 = edi_5 ^ (&data_13902ec)[eax_50 * 2]
                var_173c
                char var_fe2[0x386]
                int32_t ecx_41
                
                for (int32_t j_4 = *(&var_173c + edx_19); j_4 != 0xffffffff; 
                        j_4 = sx.d(var_fe2[ecx_41 << 2]))
                    ecx_41 = j_4 * 3
                    var_fdf
                    
                    if (*(&var_fdf + (ecx_41 << 2)) == 0)
                        esi_8 ^= *((j_4 << 3) + &data_1410468)
                        edi_6 ^= *((j_4 << 3) + &data_141046c)
                
                int32_t var_14_8 = 0x10
                result = _malloc()
                ebx_4 = eax_3
                uint32_t edx_28 = zx.d(esi_8.w)
                *(result + 8) = var_18cc:4.d
                *result = esi_8
                i_2 = i_4
                int32_t ecx_43 = *((edx_28 << 2) + &data_1410730)
                *(result + 4) = edi_6
                edi_4 = var_18b8_3
                *(result + 0xc) = ecx_43
                *((edx_28 << 2) + &data_1410730) = result
            else
                result = *(ebx_4 + 0x2c)
                *(result + (i_2 << 2)) = 0
            
            i_2 += 1
            i_4 = i_2
            var_18b8_3 = edi_4 + 0x2c
        while (i_2 s< *(ebx_4 + 0x28))
    
    int32_t entry_ebx
    @__security_check_cookie@4(entry_ebx ^ &__saved_ebp)
    return result
}
