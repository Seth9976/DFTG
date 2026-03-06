// 函数名称: sub_43a760
// 虚拟地址: 0x43a760
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_43a760(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    double xmm2 = 1.0
    int32_t edx = 0xa
    int32_t var_38 = 0
    bool cond:0 = *(*arg3 + 8) == 0
    int32_t var_1c = 0
    
    if (cond:0)
        edx = 7
    
    int32_t var_34 = 0
    int32_t edx_1 = edx << 2
    int32_t var_18 = 0
    void var_c4
    __builtin_memset(&var_c4, 0, edx_1 u>> 2 << 2)
    int32_t var_30 = 0
    void var_98
    __builtin_memset(&var_98, 0, edx_1 u>> 2 << 2)
    int32_t var_14 = 0
    void var_6c
    __builtin_memset(&var_6c, 0, edx_1 u>> 2 << 2)
    void* eax_4 = arg2 * 0x1bc
    int32_t edi = 0
    int32_t ecx_5 = 0
    int32_t var_2c = 0
    int32_t var_10 = 0
    int32_t var_d0 = 0
    int32_t var_d4 = 0
    int32_t i = *(eax_4 + arg3 + 0x170)
    
    if (i != 0xffffffff)
        do
            int32_t esi_1 = i * 3
            *(data_14106fc + ((*(
                ((zx.d(*(&arg3[esi_1] + 0x8cb)) + (*(arg3[esi_1 + 0x231] + 0xc) << 1)) << 2) +
                &data_13041f0) + arg5) << 3)) = xmm2
            ecx_5 = var_d4 + 1
            var_d4 = ecx_5
            
            if (*(&arg3[esi_1] + 0x8cb) == 0 && *(arg3[esi_1 + 0x231] + 0x10) == 6)
                edi += 1
            
            i = sx.d(*(&arg3[i * 3] + 0x8ca))
        while (i != 0xffffffff)
        
        var_d0 = edi
    
    int32_t edx_4 = arg5 + data_13902e4
    
    if (ecx_5 s> 0xc)
        ecx_5 = 0xc
    label_43a8cd:
        int32_t eax_11 = data_14106fc
        *(eax_11 + (edx_4 << 3)) = xmm2
        int32_t edi_1 = eax_11 + (edx_4 << 3)
        __builtin_memcpy(edi_1 + 8, edi_1, ((ecx_5 << 3) + 0xffffffe0) u>> 2 << 2)
        edi = var_d0
    else if (ecx_5 s> 3)
        goto label_43a8cd
    
    int32_t ecx_12
    
    if (edi s> 5)
        ecx_12 = 5
    label_43a907:
        int32_t eax_12 = data_14106fc
        *(eax_12 + (edx_4 << 3) + 0x48) = xmm2
        int32_t edi_3 = eax_12 + (edx_4 << 3)
        __builtin_memcpy(edi_3 + 0x50, edi_3 + 0x48, ((ecx_12 << 3) + 0xfffffff8) u>> 2 << 2)
    else if (edi s> 0)
        ecx_12 = var_d0
        goto label_43a907
    void* esi_5 = eax_4
    int32_t edi_5 = 0
    int32_t var_e0_1 = 0
    int32_t i_11 = *(esi_5 + arg3 + 0x164)
    
    if (i_11 s> 0)
        int32_t ecx_16 = esi_5 + 0x25 + arg3
        int32_t eax_13
        int32_t i_1
        
        do
            bool cond:2_1 = *ecx_16 != 5
            eax_13 = edi_5 + 1
            ecx_16 += 8
            
            if (cond:2_1)
                eax_13 = edi_5
            
            edi_5 = eax_13
            i_1 = i_11
            i_11 -= 1
        while (i_1 != 1)
        var_e0_1 = eax_13
    
    int32_t eax_14 = *(esi_5 + arg3 + 0x174)
    
    if (eax_14 != 0xffffffff)
        int32_t eax_15 = eax_14 * 3
        void* esi_4 = arg3[eax_15 + 0x231]
        uint32_t edx_5 = zx.d(*(&arg3[eax_15] + 0x8cb))
        double xmm1_2 = _mm_cvtepi32_pd(zx.q(edi_5))
        int32_t eax_17 = edx_5 + (*(esi_4 + 0xc) << 1)
        double xmm0_2 = _mm_cvtepi32_pd(zx.q(*(esi_4 + (edx_5 << 2) + 0x10)))
        int32_t ecx_18 = edx_4 + *((eax_17 << 2) + &data_1450730)
        int32_t eax_19 = data_14106fc
        esi_5 = eax_4
        *(eax_19 + (ecx_18 << 3) + 0x70) = xmm1_2 / xmm0_2 f+ *(eax_19 + (ecx_18 << 3) + 0x70)
    
    int32_t i_12 = *(esi_5 + arg3 + 0x164)
    int32_t edi_6 = 0
    int32_t var_e4 = 0
    
    if (i_12 s> 0)
        void* ecx_20 = arg3 + 0x25 + esi_5
        int32_t eax_20
        int32_t i_2
        
        do
            bool cond:3_1 = *ecx_20 != 6
            eax_20 = edi_6 + 1
            ecx_20 += 8
            
            if (cond:3_1)
                eax_20 = edi_6
            
            edi_6 = eax_20
            i_2 = i_12
            i_12 -= 1
        while (i_2 != 1)
        var_e4 = eax_20
    
    int32_t eax_21 = *(esi_5 + arg3 + 0x178)
    
    if (eax_21 != 0xffffffff)
        int32_t eax_22 = eax_21 * 3
        void* esi_6 = arg3[eax_22 + 0x231]
        uint32_t edx_6 = zx.d(*(&arg3[eax_22] + 0x8cb))
        double xmm1_6 = _mm_cvtepi32_pd(zx.q(edi_6))
        int32_t eax_24 = edx_6 + (*(esi_6 + 0xc) << 1)
        double xmm0_4 = _mm_cvtepi32_pd(zx.q(*(esi_6 + (edx_6 << 2) + 0x10)))
        int32_t ecx_22 = edx_4 + *((eax_24 << 2) + &data_1450730)
        int32_t eax_26 = data_14106fc
        esi_5 = eax_4
        *(eax_26 + (ecx_22 << 3) + 0x70) = xmm1_6 / xmm0_4 f+ *(eax_26 + (ecx_22 << 3) + 0x70)
    
    int32_t i_3 = *(esi_5 + arg3 + 0x174)
    int32_t eax_27 = 0
    double xmm1_9 = 0.5
    double xmm4 = xmm2
    int32_t var_d0_1 = 0
    int32_t ecx_26
    
    if (i_3 == 0xffffffff)
        ecx_26 = arg2
    else
        do
            int32_t edx_7 = i_3 * 3
            var_d0_1 = eax_27 + 1
            int32_t eax_32 = data_14106fc
            int32_t ecx_25 = *(
                ((zx.d(*(&arg3[edx_7] + 0x8cb)) + (*(arg3[edx_7 + 0x231] + 0xc) << 1)) << 2) +
                &data_1450730) + edx_4
            double xmm0_6 = *(eax_32 + (ecx_25 << 3) + 0x70) + xmm4
            xmm4 = xmm4 * xmm1_9
            *(eax_32 + (ecx_25 << 3) + 0x70) = xmm0_6
            ecx_26 = arg2
            
            if (ecx_26 != arg4)
                xmm4 = (zx.o(0)).q
            
            i_3 = sx.d(*(&arg3[i_3 * 3] + 0x8ca))
            eax_27 = var_d0_1
        while (i_3 != 0xffffffff)
    
    double xmm3 = xmm2
    int32_t i_4 = *(eax_4 + arg3 + 0x178)
    
    while (i_4 != 0xffffffff)
        int32_t edx_8 = i_4 * 3
        var_d0_1 = eax_27 + 1
        int32_t eax_38 = data_14106fc
        int32_t ecx_29 = *(
            ((zx.d(*(&arg3[edx_8] + 0x8cb)) + (*(arg3[edx_8 + 0x231] + 0xc) << 1)) << 2) +
            &data_1450730) + edx_4
        double xmm0_8 = *(eax_38 + (ecx_29 << 3) + 0x70) + xmm3
        xmm3 = xmm3 * xmm1_9
        *(eax_38 + (ecx_29 << 3) + 0x70) = xmm0_8
        ecx_26 = arg2
        
        if (ecx_26 != arg4)
            xmm3 = (zx.o(0)).q
        
        i_4 = sx.d(*(&arg3[i_4 * 3] + 0x8ca))
        eax_27 = var_d0_1
    
    double xmm5 = 70.0
    void* edx_9 = &arg3[0x231]
    int32_t edi_8 = 0
    
    while (ecx_26 == arg4)
        if (*(eax_4 + arg3 + 0x1b0) == 0)
            break
        
        int32_t esi_8 = *(((ecx_26 * 0x46 + edi_8) << 2) + &data_138fd60)
        
        if (esi_8 s>= 0)
            void* ecx_30 = *edx_9
            
            if (ecx_30 != 0 && (*(ecx_30 + 0x1c) & 0x43) == 0)
                int32_t eax_42
                eax_42.b = *(edx_9 + 5)
                
                if (eax_42.b != 2)
                    if (eax_42.b == 3 || eax_42.b == 4)
                        int32_t eax_43 = sx.d(*(edx_9 + 4))
                        
                        if (eax_43 != arg2 && (arg3[eax_43 * 0x6f + 0x5d] == edi_8
                                || arg3[eax_43 * 0x6f + 0x5e] == edi_8))
                            goto label_43abf4
                    else
                    label_43abf4:
                        int32_t eax_45 = *(ecx_30 + 0xc)
                        double xmm0_10 = _mm_cvtepi32_pd(zx.q(*(eax_4 + arg3 + 0x1b8)))
                        int32_t eax_49
                        int32_t esi_10
                        uint64_t xmm1_10
                        
                        if (esi_8 != 0)
                            esi_10 = edx_4 + *((eax_45 << 3) + &data_1450734)
                            int32_t eax_51 = data_14106fc
                            *(eax_51 + (esi_10 << 3) + 0x70) =
                                xmm0_10 * xmm3 / xmm5 f+ *(eax_51 + (esi_10 << 3) + 0x70)
                            
                            if (*(eax_4 + arg3 + 0x178) == 0xffffffff)
                                xmm1_10 = zx.q(var_e4)
                                eax_49 = *(*edx_9 + 0x14) * 0x46
                            label_43ac8e:
                                double xmm1_11 = _mm_cvtepi32_pd(xmm1_10)
                                int32_t ecx_32 = data_14106fc
                                *(ecx_32 + (esi_10 << 3) + 0x70) = xmm1_11
                                    / _mm_cvtepi32_pd(zx.q(eax_49)) f+ *(ecx_32 + (esi_10 << 3) + 0x70)
                        else
                            esi_10 = edx_4 + *((eax_45 << 3) + &data_1450730)
                            int32_t eax_47 = data_14106fc
                            *(eax_47 + (esi_10 << 3) + 0x70) =
                                xmm0_10 * xmm4 / xmm5 f+ *(eax_47 + (esi_10 << 3) + 0x70)
                            
                            if (*(eax_4 + arg3 + 0x174) == 0xffffffff)
                                xmm1_10 = zx.q(var_e0_1)
                                eax_49 = *(*edx_9 + 0x10) * 0x46
                                goto label_43ac8e
            
            ecx_26 = arg2
        
        edi_8 += 1
        edx_9 += 0xc
        
        if (edi_8 s>= 0x46)
            break
    
    int32_t edx_11 = data_138fd50 + edx_4 + 0xe
    int32_t ecx_36 = var_d0_1 + *(eax_4 + arg3 + 0x1b0)
    
    if (ecx_36 s> 0xa)
        ecx_36 = 0xa
    label_43acf9:
        int32_t eax_54 = data_14106fc
        *(eax_54 + (edx_11 << 3)) = xmm2
        int32_t edi_9 = eax_54 + (edx_11 << 3)
        __builtin_memcpy(edi_9 + 8, edi_9, ((ecx_36 << 3) + 0xfffffff8) u>> 2 << 2)
    else if (ecx_36 s> 0)
        goto label_43acf9
    
    int32_t edi_11 = 0
    int32_t esi_12 = 0
    int32_t var_d4_2 = 0
    int32_t var_d0_2 = 0
    int32_t i_10 = *(eax_4 + arg3 + 0x164)
    int32_t i_16 = i_10
    void var_c8
    void var_9c
    void var_70
    
    if (i_10 s> 0)
        void* edx_13 = eax_4 + 0x24 + arg3
        int32_t i_5
        
        do
            if ((*(edx_13 + 7) & 2) == 0)
                void* ecx_39
                ecx_39.b = *(edx_13 + 1)
                
                if (ecx_39.b == 1 || ecx_39.b == 4)
                    ecx_39:1.b = *edx_13
                    esi_12 += 1
                    uint32_t eax_55 = zx.d(ecx_39:1.b)
                    var_d0_2 = esi_12
                    *(&var_9c + (eax_55 << 2)) += 1
                else
                    ecx_39:1.b = *edx_13
                
                if (ecx_39.b == 1 || ecx_39.b == 4 || ecx_39.b == 5 || ecx_39.b == 6 || ecx_39.b == 3)
                    uint32_t esi_13 = zx.d(*edx_13)
                    edi_11 += 1
                    ecx_39:1.b = *edx_13
                    *(&var_c8 + (esi_13 << 2)) += 1
                    
                    if (ecx_39.b == 3)
                        int32_t eax_60 = *(arg3[(sx.d(*(edx_13 + 6)) + 0xbb) * 3] + 0x18)
                        int32_t var_28[0x3]
                        var_28[eax_60] += 1
                        int32_t var_44[0x3]
                        
                        if (esi_13 == 7 || esi_13 == 8 || (esi_13 == 0xa && eax_60 == 3))
                            ecx_39.b = *edx_13
                            var_44[eax_60] += 1
                            ecx_39:1.b = ecx_39.b
                        else
                            ecx_39.b = *edx_13
                            ecx_39:1.b = ecx_39.b
                            
                            if (eax_60 == esi_13)
                                var_44[eax_60] += 1
                                ecx_39:1.b = ecx_39.b
                    
                    esi_12 = var_d0_2
                
                uint32_t eax_61 = zx.d(ecx_39:1.b)
                *(&var_70 + (eax_61 << 2)) += 1
                i_10 = i_16
            
            edx_13 += 8
            i_5 = i_10
            i_10 -= 1
            i_16 = i_10
        while (i_5 != 1)
        var_d4_2 = edi_11
        
        if (esi_12 s> 0xc)
            esi_12 = 0xc
        label_43ae20:
            int32_t eax_62 = data_14106fc
            *(eax_62 + (edx_11 << 3) + 0x50) = xmm2
            int32_t edi_12 = eax_62 + (edx_11 << 3)
            __builtin_memcpy(edi_12 + 0x58, edi_12 + 0x50, ((esi_12 << 3) + 0xfffffff8) u>> 2 << 2)
            edi_11 = var_d4_2
        else if (esi_12 s> 0)
            goto label_43ae20
    
    int32_t ecx_42
    
    if (edi_11 s> 0xc)
        ecx_42 = 0xc
    label_43ae6a:
        int32_t eax_63 = data_14106fc
        *(eax_63 + (edx_11 << 3) + 0xb0) = xmm2
        int32_t edi_14 = eax_63 + (edx_11 << 3)
        __builtin_memcpy(edi_14 + 0xb8, edi_14 + 0xb0, ((ecx_42 << 3) + 0xfffffff8) u>> 2 << 2)
    else if (edi_11 s> 0)
        ecx_42 = var_d4_2
        goto label_43ae6a
    int32_t ebx_1 = edx_11 + 0x22
    int32_t esi_16 = 1
    
    do
        int32_t i_13 = *(&var_70 + (esi_16 << 2))
        
        if (i_13 s> 5)
            i_13 = 5
            *(&var_70 + (esi_16 << 2)) = 5
        label_43aeb9:
            int32_t ecx_45 = ebx_1 << 3
            int32_t i_6
            
            do
                ecx_45 += 8
                *(ecx_45 + data_14106fc - 8) = xmm2
                i_6 = i_13
                i_13 -= 1
            while (i_6 != 1)
        else if (i_13 s> 0)
            goto label_43aeb9
        
        esi_16 += 1
        ebx_1 += 5
    while (esi_16 s<= edx)
    
    int32_t esi_17 = 1
    
    do
        int32_t i_14 = *(&var_9c + (esi_17 << 2))
        
        if (i_14 s> 5)
            i_14 = 5
            *(&var_9c + (esi_17 << 2)) = 5
        label_43aefe:
            int32_t ecx_46 = ebx_1 << 3
            int32_t i_7
            
            do
                ecx_46 += 8
                *(ecx_46 + data_14106fc - 8) = xmm2
                i_7 = i_14
                i_14 -= 1
            while (i_7 != 1)
        else if (i_14 s> 0)
            goto label_43aefe
        
        esi_17 += 1
        ebx_1 += 5
    while (esi_17 s<= edx)
    
    int32_t esi_18 = 1
    
    do
        int32_t i_15 = *(&var_c8 + (esi_18 << 2))
        
        if (i_15 s> 5)
            i_15 = 5
            *(&var_c8 + (esi_18 << 2)) = 5
        label_43af4e:
            int32_t ecx_47 = ebx_1 << 3
            int32_t i_8
            
            do
                ecx_47 += 8
                *(ecx_47 + data_14106fc - 8) = xmm2
                i_8 = i_15
                i_15 -= 1
            while (i_8 != 1)
        else if (i_15 s> 0)
            goto label_43af4e
        
        esi_18 += 1
        ebx_1 += 5
    while (esi_18 s<= edx)
    
    int32_t edi_17 = ebx_1 << 3
    
    for (int32_t i_9 = 0; i_9 s<= 0xc; )
        int32_t j_2 = *(&var_1c + i_9)
        
        if (j_2 s> 3)
            *(&var_1c + i_9) = 3
            j_2 = 3
        label_43afa0:
            int32_t ecx_48 = edi_17
            int32_t j
            
            do
                ecx_48 += 8
                *(ecx_48 + data_14106fc - 8) = xmm2
                j = j_2
                j_2 -= 1
            while (j != 1)
        else if (j_2 s> 0)
            goto label_43afa0
        
        int32_t j_3 = *(&var_38 + i_9)
        
        if (j_3 s> 3)
            *(&var_38 + i_9) = 3
            j_3 = 3
        label_43afd1:
            int32_t ecx_49 = edi_17 + 0x18
            int32_t j_1
            
            do
                ecx_49 += 8
                *(ecx_49 + data_14106fc - 8) = xmm2
                j_1 = j_3
                j_3 -= 1
            while (j_1 != 1)
        else if (j_3 s> 0)
            goto label_43afd1
        
        i_9 += 4
        ebx_1 += 6
        edi_17 += 0x30
    
    void* eax_69 = eax_4
    int32_t ecx_51 = *(eax_69 + arg3 + 0x18c) - 1
    
    if (ecx_51 s> 9)
        ecx_51 = 9
    label_43b025:
        int32_t eax_70 = data_14106fc
        *(eax_70 + (ebx_1 << 3)) = xmm2
        int32_t edi_18 = eax_70 + (ebx_1 << 3)
        eax_69 = eax_4
        __builtin_memcpy(edi_18 + 8, edi_18, ((ecx_51 << 3) + 0xfffffff8) u>> 2 << 2)
    else if (ecx_51 s> 0)
        goto label_43b025
    
    int32_t ecx_55 = arg6 - *(eax_69 + arg3 + 0x198)
    
    if (ecx_55 s> 0x1e)
        ecx_55 = 0x1e
    label_43b063:
        int32_t eax_71 = data_14106fc
        *(eax_71 + (ebx_1 << 3) + 0x48) = xmm2
        int32_t edi_20 = eax_71 + (ebx_1 << 3)
        __builtin_memcpy(edi_20 + 0x50, edi_20 + 0x48, ((ecx_55 << 3) + 0xfffffff8) u>> 2 << 2)
    else if (ecx_55 s> 0)
        goto label_43b063
    
    int32_t eax_72
    eax_72.b = *(eax_4 + arg3 + 0x1a4) != 0
    *(data_14106fc + (ebx_1 << 3) + 0x138) = _mm_cvtepi32_pd(zx.q((eax_72 << 1) + 0xffffffff))
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return ebx_1 + 0x28
}
