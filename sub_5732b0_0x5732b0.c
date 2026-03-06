// 函数名称: sub_5732b0
// 虚拟地址: 0x5732b0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_5732b0(int32_t arg1, void* arg2, void* arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: int32_t edi = arg4
    int32_t edi = arg4
    void* esi = arg2
    void* eax = *(arg3 + 0xc)
    float xmm3 = *(arg3 + 0x10)
    void* eax_1 = *(arg3 + 0x24)
    void* var_64 = esi
    void* result_1 = *(arg3 + 0x2c)
    float var_7c = xmm3
    void* var_9c
    char const* const var_98
    void* result
    
    if (*(arg3 + 0x28) == edi + ((edi + 1) << 1))
        result = result_1
    else
        if (result_1 != 0)
            _free(result_1)
        
        int32_t ecx = data_1151ae0
        void* result_2
        
        if (ecx == 0)
            void* var_94_2 = edi * 0xc + 8
            result_2 = _malloc()
        else
            var_98 = "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\pathconstraint.c"
            var_9c = edi * 0xc + 8
            result_2 = ecx(var_9c, 
                "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\pathconstraint.c", 0x100)
        
        xmm3 = var_7c
        result = result_2
        *(arg3 + 0x2c) = result_2
        *(arg3 + 0x28) = edi + ((edi + 1) << 1)
    
    int32_t eax_8 = *(esi + 0x38)
    int32_t ecx_1 = *(esi + 0x24)
    int32_t var_6c = 0xffffffff
    float* eax_12 = ecx_1 s/ 6
    void* var_74 = eax_12
    int32_t mxcsr
    int16_t top
    
    if (*(esi + 0x3c) == 0)
        int32_t eax_14 = neg.d(eax_8)
        void* ecx_2 = *(esi + 0x34)
        void* edx_2 = var_74 - (sbb.d(eax_14, eax_14, eax_8 != 0) + 2)
        float xmm2[0x4] = *(ecx_2 + (edx_2 << 2))
        float xmm2_1[0x4] = _mm_shuffle_ps(xmm2, xmm2, 0)
        float var_50 = xmm2_1
        float xmm4_2[0x4] = _mm_shuffle_ps(xmm2_1, xmm2_1, 0)
        
        if (arg6 != 0)
            xmm3 = xmm3 * xmm2_1[0]
            var_7c = xmm3
        
        if (arg7 != 0)
            int32_t i = 1
            
            if (edi s> 1)
                void* esi_1
                
                if (edi - 1 u< 0x10)
                    esi_1 = eax_1
                else
                    int32_t eax_18 = (edi - 1) & 0x8000000f
                    
                    if (eax_18 s< 0)
                        eax_18 = ((eax_18 - 1) | 0xfffffff0) + 1
                    
                    esi_1 = eax_1
                    void* eax_21 = esi_1 + 0x24
                    
                    do
                        float xmm0_2[0x4] = *(eax_21 - 0x20)
                        eax_21 += 0x40
                        i += 0x10
                        *(eax_21 - 0x60) = _mm_mul_ps(xmm4_2, xmm0_2)
                        *(eax_21 - 0x50) = _mm_mul_ps(xmm4_2, *(eax_21 - 0x50))
                        *(eax_21 - 0x40) = _mm_mul_ps(xmm4_2, *(eax_21 - 0x40))
                        *(eax_21 - 0x30) = _mm_mul_ps(xmm4_2, *(eax_21 - 0x30))
                    while (i s< edi - eax_18)
                
                if (i s< edi)
                    if (edi - i s>= 4)
                        void* eax_25 = esi_1 + ((i + 2) << 2)
                        int32_t i_5 = ((edi - i - 4) u>> 2) + 1
                        i += i_5 << 2
                        int32_t i_1
                        
                        do
                            eax_25 += 0x10
                            *(eax_25 - 0x18) = _mm_mul_ps(*(eax_25 - 0x18), xmm2_1)
                            i_1 = i_5
                            i_5 -= 1
                        while (i_1 != 1)
                    
                    for (; i s< edi; i += 1)
                        *(esi_1 + (i << 2)) = *(esi_1 + (i << 2)) f* xmm2_1
        
        void* edi_1
        
        if (*(arg3 + 0x30) == 8)
            edi_1 = *(arg3 + 0x34)
        else
            int32_t eax_26 = *(arg3 + 0x34)
            
            if (eax_26 != 0)
                _free(eax_26)
            
            int32_t eax_27 = data_1151ae0
            void* eax_28
            
            if (eax_27 == 0)
                int32_t var_94_4 = 0x20
                eax_28 = _malloc()
            else
                var_98 = "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\pathconstraint.c"
                var_9c = 0x20
                eax_28 = eax_27(0x20, 
                    "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\pathconstraint.c", 0x112)
            
            xmm2_1 = var_50
            edi_1 = eax_28
            xmm3 = var_7c
            *(arg3 + 0x34) = edi_1
            *(arg3 + 0x30) = 8
        
        int32_t ecx_3 = 0
        int32_t esi_2 = 0
        int32_t var_3c = 0
        int32_t var_38_1 = 0
        
        if (arg4 s<= 0)
            return result
        
        void* ebx_1 = var_64
        void* var_80_1 = result + 8
        
        do
            float xmm0_10 = *(eax_1 + (ecx_3 << 2))
            int32_t ecx_4 = eax_8
            float xmm0_11[0x2] = xmm0_10 + xmm3
            float var_7c_1 = xmm0_11
            float xmm7_1 = xmm0_11[0]
            
            if (ecx_4 != 0)
                int64_t var_10_1 = _mm_cvtps_pd(xmm0_11)
                unimplemented  {fld st0, qword [esp+0x80]}
                double var_10_2 = fconvert.d(xmm2_1)
                unimplemented  {fld st0, qword [esp+0x80]}
                sub_598500()
                float var_48_1 = fconvert.s(unimplemented  {fstp dword [esp+0x48], st0})
                unimplemented  {fstp dword [esp+0x48], st0}
                top -= 1
                xmm7_1 = var_48_1
                
                if (not(0 f<= xmm7_1))
                    xmm7_1 = xmm7_1 + var_50
                
                ecx_4 = eax_8
                esi_2 = 0
                goto label_5735a9
            
            void* eax_36
            float var_a4
            float var_a0
            
            if (not(0 f<= xmm0_11))
                if (var_6c != 0xfffffffe)
                    int32_t var_94_6 = ecx_4
                    var_98 = nullptr
                    var_9c = edi_1
                    var_a0 = 5.60519386e-45f
                    var_a4 = 2.80259693e-45f
                    var_6c = 0xfffffffe
                    sub_576980(eax_1, eax, ebx_1, 2, 4, var_9c, 0)
                
                float xmm1_10 = *(edi_1 + 4)
                int64_t var_10_3 = _mm_cvtps_pd(*(edi_1 + 0xc) - xmm1_10)
                unimplemented  {fld st0, qword [esp+0x80]}
                int64_t var_10_4 = _mm_cvtps_pd(*(edi_1 + 8) f- *edi_1)
                unimplemented  {fld st0, qword [esp+0x80]}
                int16_t x87control_1 = sub_5984f0()
                float var_34_1 = fconvert.s(unimplemented  {fstp dword [esp+0x5c], st0})
                unimplemented  {fstp dword [esp+0x5c], st0}
                top -= 1
                int16_t x87control_2
                double xmm0_22
                x87control_2, xmm0_22 =
                    __libm_sse2_cos_precise(mxcsr, x87control_1, _mm_cvtps_pd(var_34_1))
                double xmm0_24 = _mm_cvtps_pd(var_34_1)
                *(var_80_1 - 8) = fconvert.s(xmm0_22) * var_7c_1 f+ *edi_1
                xmm3 = var_7c_1
                eax_36 = var_80_1
                *(eax_36 - 4) =
                    fconvert.s(__libm_sse2_sin_precise(mxcsr, x87control_2, xmm0_24)) * xmm3 + xmm1_10
                *eax_36 = var_34_1
            else if (xmm0_11 f<= xmm2_1)
            label_5735a9:
                float xmm1_9 = *(ecx_2 + (esi_2 << 2))
                
                if (not(xmm7_1 <= xmm1_9))
                    do
                        xmm1_9 = *(ecx_2 + (esi_2 << 2) + 4)
                        esi_2 += 1
                    while (xmm7_1 > xmm1_9)
                
                if (esi_2 != 0)
                    xmm7_1 = xmm7_1 f- *(ecx_2 + (esi_2 << 2) - 4)
                    xmm1_9 = xmm1_9 f- *(ecx_2 + (esi_2 << 2) - 4)
                
                if (esi_2 != var_6c)
                    var_6c = esi_2
                    
                    if (ecx_4 == 0 || esi_2 != edx_2)
                        int32_t var_94_8 = ecx_4
                        var_98 = nullptr
                        var_9c = edi_1
                        var_a0 = 1.12103877e-44f
                        sub_576980(esi_2 * 6 + 2, eax, ebx_1, esi_2 * 6 + 2, 8, var_9c, 0)
                    else
                        int32_t var_94_5 = ecx_4
                        var_98 = 4
                        var_9c = edi_1
                        var_a0 = 5.60519386e-45f
                        var_a4 = 0f
                        sub_576980(sub_576980(ecx_1 - 4, eax, var_64, ecx_1 - 4, 4, edi_1, 0), eax, 
                            var_64, 0, 4, var_9c, 4)
                        ebx_1 = var_64
                
                int32_t eax_42
                
                if (arg5 != 0)
                    eax_42 = 1
                else if (var_38_1 s<= 0)
                    eax_42 = 0
                else
                    xmm0_10 - 0f
                    void* eax_34
                    eax_34:1.b = (xmm0_10 == 0f ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_10, 0f) ? 1 : 0) << 2 | (xmm0_10 < 0f ? 1 : 0)
                    bool p_2 = unimplemented  {test ah, 0x44}
                    
                    eax_42 = not(p_2) ? 1 : 0
                
                var_a4.o = *(edi_1 + 0x10)
                sub_573080(eax_42, var_3c, result, xmm7_1 / xmm1_9, *edi_1, *(edi_1 + 4), *(edi_1 + 8), 
                    *(edi_1 + 0xc), var_a4, var_a0, var_9c, var_98, eax_42)
                top -= 1
                eax_36 = var_80_1
                xmm3 = var_7c_1
            else
                if (var_6c != 0xfffffffd)
                    int32_t var_94_7 = ecx_4
                    var_98 = nullptr
                    var_9c = edi_1
                    var_a0 = 5.60519386e-45f
                    var_6c = 0xfffffffd
                    sub_576980(ecx_1 - 6, eax, ebx_1, ecx_1 - 6, 4, var_9c, 0)
                    xmm2_1 = var_50
                    xmm0_11 = var_7c_1
                
                float xmm0_30 = xmm0_11 f- xmm2_1
                float xmm0_31 = *(edi_1 + 0xc)
                int64_t var_10_5 = _mm_cvtps_pd(xmm0_31 f- *(edi_1 + 4))
                unimplemented  {fld st0, qword [esp+0x80]}
                int64_t var_10_6 = _mm_cvtps_pd(*(edi_1 + 8) f- *edi_1)
                unimplemented  {fld st0, qword [esp+0x80]}
                int16_t x87control_3 = sub_5984f0()
                float var_34_2 = fconvert.s(unimplemented  {fstp dword [esp+0x5c], st0})
                unimplemented  {fstp dword [esp+0x5c], st0}
                top -= 1
                int16_t x87control_4
                double xmm0_39
                x87control_4, xmm0_39 =
                    __libm_sse2_cos_precise(mxcsr, x87control_3, _mm_cvtps_pd(var_34_2))
                double xmm0_41 = _mm_cvtps_pd(var_34_2)
                *(var_80_1 - 8) = fconvert.s(xmm0_39) * xmm0_30 f+ *(edi_1 + 8)
                eax_36 = var_80_1
                *(eax_36 - 4) =
                    fconvert.s(__libm_sse2_sin_precise(mxcsr, x87control_4, xmm0_41)) * xmm0_30
                    + xmm0_31
                *eax_36 = var_34_2
                xmm3 = var_7c_1
            var_3c += 3
            ecx_3 = var_38_1 + 1
            xmm2_1 = var_50
            var_38_1 = ecx_3
            var_80_1 = eax_36 + 0xc
        while (ecx_3 s< arg4)
        
        return result
    
    int32_t edx_15 = *(arg3 + 0x30)
    int32_t var_84_1
    float* var_80_2
    
    if (eax_8 == 0)
        int32_t ecx_17 = ecx_1 - 4
        var_74 = eax_12 - 1
        float* eax_51 = *(arg3 + 0x34)
        var_84_1 = ecx_17
        
        if (edx_15 != ecx_17)
            if (eax_51 != 0)
                _free(eax_51)
                ecx_17 = var_84_1
            
            int32_t eax_52 = data_1151ae0
            int32_t ecx_18 = ecx_17 << 2
            
            if (eax_52 == 0)
                int32_t var_94_14 = ecx_18
                eax_51 = _malloc()
            else
                eax_51 = eax_52(ecx_18, 
                    "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\pathconstraint.c", 0x15b)
            
            ecx_17 = var_84_1
            *(arg3 + 0x34) = eax_51
            *(arg3 + 0x30) = ecx_17
        
        int32_t var_94_15 = ecx_17
        var_80_2 = eax_51
        sub_576980(eax_51, eax, esi, 2, ecx_17, eax_51, 0)
    else
        int32_t ecx_12 = ecx_1 + 2
        var_84_1 = ecx_12
        float* edi_2
        
        if (edx_15 == ecx_12)
            edi_2 = *(arg3 + 0x34)
            var_80_2 = edi_2
        else
            int32_t eax_45 = *(arg3 + 0x34)
            
            if (eax_45 != 0)
                _free(eax_45)
                ecx_12 = var_84_1
            
            int32_t eax_46 = data_1151ae0
            int32_t ecx_13 = ecx_12 << 2
            
            if (eax_46 == 0)
                int32_t var_94_11 = ecx_13
                eax_12 = _malloc()
                ecx_12 = var_84_1
                edi_2 = eax_12
                var_80_2 = eax_12
                *(arg3 + 0x34) = edi_2
                *(arg3 + 0x30) = ecx_12
            else
                eax_12 = eax_46(ecx_13, 
                    "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\pathconstraint.c", 0x14e)
                ecx_12 = var_84_1
                edi_2 = eax_12
                var_80_2 = edi_2
                *(arg3 + 0x34) = edi_2
                *(arg3 + 0x30) = ecx_12
        
        int32_t var_94_12 = ecx_12
        esi = var_64
        sub_576980(sub_576980(eax_12, eax, var_64, 2, ecx_12 - 4, edi_2, 0), eax, esi, 0, 2, edi_2, 
            ecx_12 - 4)
        edi_2[var_84_1 - 2] = *edi_2
        edi_2[var_84_1 - 1] = edi_2[1]
        edi = arg4
    
    void* ecx_20 = var_74
    uint32_t eax_53 = *(arg3 + 0x3c)
    
    if (*(arg3 + 0x38) != ecx_20)
        if (eax_53 != 0)
            _free(eax_53)
            ecx_20 = var_74
        
        int32_t eax_54 = data_1151ae0
        int32_t ecx_21 = ecx_20 << 2
        
        if (eax_54 == 0)
            int32_t var_94_17 = ecx_21
            eax_53 = _malloc()
        else
            eax_53 = eax_54(ecx_21, 
                "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\pathconstraint.c", 0x165)
        
        ecx_20 = var_74
        *(arg3 + 0x3c) = eax_53
        *(arg3 + 0x38) = ecx_20
    
    float* edx_19 = var_80_2
    float xmm2_3[0x4] = zx.o(0)
    float var_34_3 = 0f
    float var_2c_1 = 0f
    float xmm1_19 = *edx_19
    float var_58_1 = xmm1_19
    float var_70_1 = edx_19[1]
    float var_3c_1 = 0f
    float var_40_1 = 0f
    float var_50_1 = 0f
    float var_5c_1 = 0f
    float var_60_1 = 0f
    int32_t var_30_1 = 0
    int16_t x87control
    
    if (ecx_20 s> 0)
        float* ebx_2 = &edx_19[4]
        int32_t eax_56
        
        do
            float xmm7_3 = ebx_2[-2]
            float xmm5_1 = ebx_2[-1]
            var_50_1 = ebx_2[1]
            float xmm2_4 = *ebx_2
            var_5c_1 = ebx_2[2]
            var_60_1 = ebx_2[3]
            var_40_1 = xmm2_4
            var_3c_1 = xmm5_1
            var_2c_1 = xmm7_3
            float xmm1_22 = (xmm1_19 - (xmm7_3 + xmm7_3) + xmm2_4) * 0.1875f
            float xmm2_8 = (var_70_1 - (xmm5_1 + xmm5_1) + var_50_1) * 0.1875f
            float xmm5_6 = ((xmm5_1 - var_50_1) * 3f - var_70_1 + var_60_1) * 0.09375f
            float xmm3_7 = ((xmm7_3 - var_40_1) * 3f - var_58_1 + var_5c_1) * 0.09375f
            float xmm0_60 = xmm1_22 + xmm1_22 + xmm3_7
            float xmm0_63 = xmm2_8 + xmm2_8 + xmm5_6
            float xmm4_7 = (xmm7_3 - var_58_1) * 0.75f + xmm1_22 + xmm3_7 * 0.166666672f
            float xmm3_12 = (var_3c_1 - var_70_1) * 0.75f + xmm2_8 + xmm5_6 * 0.166666672f
            int16_t x87control_5
            double xmm0_71
            x87control_5, xmm0_71 = __libm_sse2_sqrt_precise(mxcsr, x87control, 
                _mm_cvtps_pd(xmm3_12 * xmm3_12 + xmm4_7 * xmm4_7))
            float xmm2_10 = xmm4_7 + xmm0_60
            float xmm3_14 = xmm0_60 + xmm3_7
            float xmm0_75 = xmm3_12 + xmm0_63
            float xmm1_27 = xmm0_63 + xmm5_6
            int16_t x87control_6
            double xmm0_79
            x87control_6, xmm0_79 = __libm_sse2_sqrt_precise(mxcsr, x87control_5, 
                _mm_cvtps_pd(xmm0_75 * xmm0_75 + xmm2_10 * xmm2_10))
            float xmm2_12 = xmm2_10 + xmm3_14
            float xmm0_83 = xmm0_75 + xmm1_27
            int16_t x87control_7
            double xmm0_87
            x87control_7, xmm0_87 = __libm_sse2_sqrt_precise(mxcsr, x87control_6, 
                _mm_cvtps_pd(xmm0_83 * xmm0_83 + xmm2_12 * xmm2_12))
            float xmm1_36 = xmm1_27 + xmm5_6 + xmm0_83
            float xmm3_17 = xmm3_14 + xmm3_7 + xmm2_12
            double xmm0_91
            x87control, xmm0_91 = __libm_sse2_sqrt_precise(mxcsr, x87control_7, 
                _mm_cvtps_pd(xmm1_36 * xmm1_36 + xmm3_17 * xmm3_17))
            xmm1_19 = var_5c_1
            ebx_2 = &ebx_2[6]
            xmm2_3 = fconvert.s(xmm0_91) + fconvert.s(xmm0_87) + fconvert.s(xmm0_79)
                + fconvert.s(xmm0_71) + var_34_3
            var_58_1 = xmm1_19
            var_70_1 = var_60_1
            *(eax_53 + (var_30_1 << 2)) = xmm2_3
            eax_56 = var_30_1 + 1
            var_34_3 = xmm2_3
            var_30_1 = eax_56
        while (eax_56 s< var_74)
        edx_19 = var_80_2
        esi = var_64
        edi = arg4
        ecx_20 = var_74
    
    float xmm2_14[0x4] = _mm_shuffle_ps(xmm2_3, xmm2_3, 0)
    float xmm3_19 = xmm2_14[0]
    float xmm1_40[0x4] = _mm_shuffle_ps(xmm2_14, xmm2_14, 0)
    
    if (arg6 == 0)
        xmm3_19 = xmm3_19 f/ *(*(esi + 0x34) + (ecx_20 << 2) - 4)
    
    float xmm3_20 = xmm3_19 * var_7c
    
    if (arg7 != 0)
        int32_t i_2 = 1
        
        if (edi s> 1)
            void* esi_9
            
            if (edi - 1 u< 0x10)
                esi_9 = eax_1
            else
                int32_t esi_6 = (edi - 1) & 0x8000000f
                
                if (esi_6 s< 0)
                    esi_6 = ((esi_6 - 1) | 0xfffffff0) + 1
                
                esi_9 = eax_1
                void* eax_60 = esi_9 + 0x24
                
                do
                    float xmm0_93[0x4] = *(eax_60 - 0x20)
                    i_2 += 0x10
                    eax_60 += 0x40
                    *(eax_60 - 0x60) = _mm_mul_ps(xmm0_93, xmm1_40)
                    *(eax_60 - 0x50) = _mm_mul_ps(*(eax_60 - 0x50), xmm1_40)
                    *(eax_60 - 0x40) = _mm_mul_ps(*(eax_60 - 0x40), xmm1_40)
                    *(eax_60 - 0x30) = _mm_mul_ps(*(eax_60 - 0x30), xmm1_40)
                while (i_2 s< edi - esi_6)
            
            if (i_2 s< edi)
                if (edi - i_2 s>= 4)
                    void* eax_64 = esi_9 + 8 + (i_2 << 2)
                    int32_t i_6 = ((edi - i_2 - 4) u>> 2) + 1
                    i_2 += i_6 << 2
                    int32_t i_3
                    
                    do
                        eax_64 += 0x10
                        *(eax_64 - 0x18) = _mm_mul_ps(*(eax_64 - 0x18), xmm2_14)
                        i_3 = i_6
                        i_6 -= 1
                    while (i_3 != 1)
                
                for (; i_2 s< edi; i_2 += 1)
                    *(eax_1 + (i_2 << 2)) = *(eax_1 + (i_2 << 2)) f* xmm2_14
    
    int32_t ecx_22 = 0
    int32_t var_24_3 = 0
    int32_t xmm5_7 = (zx.o(0)).d
    int32_t var_28_2 = 0
    int32_t esi_14 = 0
    int32_t var_30_2 = 0
    int32_t edi_4 = 0
    
    if (arg4 s> 0)
        void* var_64_1 = result + 8
        
        do
            float xmm0_105 = *(eax_1 + (ecx_22 << 2))
            float xmm3_21[0x2] = xmm3_20 + xmm0_105
            float var_38_2 = xmm3_21
            float xmm1_41 = xmm3_21[0]
            
            if (eax_8 != 0)
                float var_18
                var_18.q = _mm_cvtps_pd(xmm3_21)
                unimplemented  {fld st0, qword [esp+0x78]}
                var_18.q = fconvert.d(xmm2_14)
                unimplemented  {fld st0, qword [esp+0x78]}
                x87control = sub_598500()
                float var_48_4 = fconvert.s(unimplemented  {fstp dword [esp+0x48], st0})
                unimplemented  {fstp dword [esp+0x48], st0}
                top -= 1
                xmm1_41 = var_48_4
                
                if (not(0 f<= xmm1_41))
                    xmm1_41 = xmm1_41 + var_34_3
                
                xmm5_7 = var_30_2
                esi_14 = 0
                goto label_573f13
            
            void* eax_74
            float var_10
            
            if (not(0 f<= xmm3_21))
                float xmm1_63 = edx_19[1]
                int64_t var_10_7 = _mm_cvtps_pd(edx_19[3] - xmm1_63)
                unimplemented  {fld st0, qword [esp+0x80]}
                var_10 = _mm_cvtps_pd(edx_19[2] - *edx_19)
                unimplemented  {fld st0, qword [esp+0x80]}
                int16_t x87control_10 = sub_5984f0()
                float var_48_6 = fconvert.s(unimplemented  {fstp dword [esp+0x48], st0})
                unimplemented  {fstp dword [esp+0x48], st0}
                top -= 1
                int16_t x87control_11
                double xmm0_157
                x87control_11, xmm0_157 =
                    __libm_sse2_cos_precise(mxcsr, x87control_10, _mm_cvtps_pd(var_48_6))
                double xmm0_159 = _mm_cvtps_pd(var_48_6)
                *(var_64_1 - 8) = fconvert.s(xmm0_157) * var_38_2 + *var_80_2
                double xmm0_160
                x87control, xmm0_160 = __libm_sse2_sin_precise(mxcsr, x87control_11, xmm0_159)
                xmm3_20 = var_38_2
                eax_74 = var_64_1
                *(eax_74 - 4) = fconvert.s(xmm0_160) * xmm3_20 + xmm1_63
                *eax_74 = var_48_6
            else if (xmm3_21 f<= xmm2_14)
            label_573f13:
                float xmm2_15 = *(eax_53 + (esi_14 << 2))
                
                if (not(xmm1_41 <= xmm2_15))
                    do
                        xmm2_15 = *(eax_53 + (esi_14 << 2) + 4)
                        esi_14 += 1
                    while (xmm1_41 > xmm2_15)
                
                if (esi_14 != 0)
                    xmm1_41 = xmm1_41 f- *(eax_53 + (esi_14 << 2) - 4)
                    xmm2_15 = xmm2_15 f- *(eax_53 + (esi_14 << 2) - 4)
                
                uint32_t eax_71
                
                if (esi_14 != var_6c)
                    int32_t eax_70 = esi_14 * 6
                    var_6c = esi_14
                    float xmm6_1 = var_80_2[eax_70 + 2]
                    float xmm3_22 = var_80_2[eax_70]
                    float xmm7_4 = var_80_2[eax_70 + 3]
                    float xmm2_16 = var_80_2[eax_70 + 1]
                    var_5c_1 = var_80_2[eax_70 + 6]
                    var_60_1 = var_80_2[eax_70 + 7]
                    float xmm4_8 = var_80_2[eax_70 + 5]
                    float xmm5_8 = var_80_2[eax_70 + 4]
                    var_70_1 = xmm2_16
                    var_50_1 = xmm4_8
                    var_40_1 = xmm5_8
                    var_58_1 = xmm3_22
                    var_2c_1 = xmm6_1
                    var_3c_1 = xmm7_4
                    float xmm1_45 = (xmm3_22 - (xmm6_1 + xmm6_1) + xmm5_8) * 0.0299999993f
                    float xmm2_19 = (xmm2_16 - (xmm7_4 + xmm7_4) + xmm4_8) * 0.0299999993f
                    float xmm5_14 = ((xmm7_4 - var_50_1) * 3f - var_70_1 + var_60_1) * 0.00600000005f
                    float xmm4_14 = ((xmm6_1 - xmm5_8) * 3f - xmm3_22 + var_5c_1) * 0.00600000005f
                    float var_4c_3 = xmm2_19 + xmm2_19 + xmm5_14
                    float var_48_5 = xmm1_45 + xmm1_45 + xmm4_14
                    float xmm3_30 =
                        (xmm6_1 - var_58_1) * 0.300000012f + xmm1_45 + xmm4_14 * 0.166666672f
                    float xmm4_19 =
                        (xmm7_4 - var_70_1) * 0.300000012f + xmm2_19 + xmm5_14 * 0.166666672f
                    float var_74_2 = xmm3_30
                    float var_7c_2 = xmm4_19
                    int16_t x87control_8
                    double xmm0_124
                    x87control_8, xmm0_124 = __libm_sse2_sqrt_precise(mxcsr, x87control, 
                        _mm_cvtps_pd(xmm4_19 * xmm4_19 + xmm3_30 * xmm3_30))
                    float xmm0_125 = fconvert.s(xmm0_124)
                    int32_t i_4 = 1
                    float var_30_3 = xmm0_125
                    *(arg3 + 0x48) = xmm0_125
                    
                    do
                        float xmm0_127 = var_7c_2 + var_4c_3
                        float xmm2_21 = var_74_2 + var_48_5
                        var_7c_2 = xmm0_127
                        var_4c_3 = var_4c_3 + xmm5_14
                        var_74_2 = xmm2_21
                        var_48_5 = var_48_5 + xmm4_14
                        double xmm0_131
                        x87control_8, xmm0_131 = __libm_sse2_sqrt_precise(mxcsr, x87control_8, 
                            _mm_cvtps_pd(xmm0_127 * xmm0_127 + xmm2_21 * xmm2_21))
                        float xmm0_133 = fconvert.s(xmm0_131) + var_30_3
                        *(arg3 + (i_4 << 2) + 0x48) = xmm0_133
                        i_4 += 1
                        var_30_3 = xmm0_133
                    while (i_4 s< 8)
                    
                    float xmm0_135 = var_7c_2 + var_4c_3
                    float xmm2_23 = var_74_2 + var_48_5
                    int16_t x87control_9
                    double xmm0_139
                    x87control_9, xmm0_139 = __libm_sse2_sqrt_precise(mxcsr, x87control_8, 
                        _mm_cvtps_pd(xmm0_135 * xmm0_135 + xmm2_23 * xmm2_23))
                    float xmm1_59 = var_48_5 + xmm4_14 + xmm2_23
                    float xmm0_141 = fconvert.s(xmm0_139) + var_30_3
                    *(arg3 + 0x68) = xmm0_141
                    float xmm0_144 = var_4c_3 + xmm5_14 + xmm0_135
                    double xmm0_148
                    eax_71, xmm0_148 = __libm_sse2_sqrt_precise(mxcsr, x87control_9, 
                        _mm_cvtps_pd(xmm0_144 * xmm0_144 + xmm1_59 * xmm1_59))
                    edi_4 = 0
                    xmm5_7 = fconvert.s(xmm0_148) + xmm0_141
                    var_30_2 = xmm5_7
                    *(arg3 + 0x6c) = xmm5_7
                
                float xmm4_21 = xmm5_7 f* xmm1_41 / xmm2_15
                float xmm1_62 = *(arg3 + (edi_4 << 2) + 0x48)
                
                if (not(xmm4_21 <= xmm1_62))
                    do
                        xmm1_62 = *(arg3 + (edi_4 << 2) + 0x4c)
                        edi_4 += 1
                    while (xmm4_21 > xmm1_62)
                
                float xmm4_22
                
                if (edi_4 != 0)
                    xmm4_22 = (xmm4_21 f- *(arg3 + (edi_4 << 2) + 0x44))
                        / (xmm1_62 f- *(arg3 + (edi_4 << 2) + 0x44)) + _mm_cvtepi32_ps(zx.o(edi_4))
                else
                    xmm4_22 = xmm4_21 / xmm1_62
                
                int32_t eax_78
                
                if (arg5 != 0)
                    eax_78 = 1
                else if (var_28_2 s<= 0)
                    eax_78 = 0
                else
                    xmm0_105 - 0f
                    eax_71:1.b = (xmm0_105 == 0f ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_105, 0f) ? 1 : 0) << 2 | (xmm0_105 < 0f ? 1 : 0)
                    bool p_4 = unimplemented  {test ah, 0x44}
                    
                    eax_78 = not(p_4) ? 1 : 0
                
                x87control = sub_573080(eax_78, var_24_3, result, xmm4_22 * 0.100000001f, var_58_1, 
                    var_70_1, var_2c_1, var_3c_1, var_40_1, var_50_1, var_5c_1, var_60_1, eax_78)
                top -= 1
                eax_74 = var_64_1
                xmm3_20 = var_38_2
            else
                float xmm0_166 = xmm3_21[0] f- xmm2_14
                float xmm0_167 = edx_19[var_84_1 - 1]
                int64_t var_10_8 = _mm_cvtps_pd(xmm0_167 - edx_19[var_84_1 - 3])
                unimplemented  {fld st0, qword [esp+0x80]}
                var_10 = _mm_cvtps_pd(edx_19[var_84_1 - 2] - edx_19[var_84_1 - 4])
                unimplemented  {fld st0, qword [esp+0x80]}
                int16_t x87control_12 = sub_5984f0()
                float var_48_7 = fconvert.s(unimplemented  {fstp dword [esp+0x48], st0})
                unimplemented  {fstp dword [esp+0x48], st0}
                top -= 1
                int16_t x87control_13
                double xmm0_175
                x87control_13, xmm0_175 =
                    __libm_sse2_cos_precise(mxcsr, x87control_12, _mm_cvtps_pd(var_48_7))
                double xmm0_177 = _mm_cvtps_pd(var_48_7)
                *(var_64_1 - 8) = fconvert.s(xmm0_175) * xmm0_166 + var_80_2[var_84_1 - 2]
                double xmm0_178
                x87control, xmm0_178 = __libm_sse2_sin_precise(mxcsr, x87control_13, xmm0_177)
                eax_74 = var_64_1
                *(eax_74 - 4) = fconvert.s(xmm0_178) * xmm0_166 + xmm0_167
                *eax_74 = var_48_7
                xmm3_20 = var_38_2
            var_24_3 += 3
            ecx_22 = var_28_2 + 1
            xmm2_14 = var_34_3
            xmm5_7 = var_30_2
            edx_19 = var_80_2
            var_28_2 = ecx_22
            var_64_1 = eax_74 + 0xc
        while (ecx_22 s< arg4)
    
    return result
}
