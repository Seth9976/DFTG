// 函数名称: sub_56ee30
// 虚拟地址: 0x56ee30
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_tsub_56ee30(void* arg1, void* arg2, float arg3, int32_t arg4, uint32_t arg5)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    float xmm6[0x4] = arg4
    int32_t eax_1 = *(arg2 + 0x14)
    float xmm7_1[0x4] = _mm_shuffle_ps(xmm6, xmm6, 0)
    uint32_t i_72 = *(eax_1 + (*(arg1 + 0x1c) << 2))
    uint32_t i_40 = i_72
    uint32_t i = *(i_72 + 4)
    
    if (*(i + 0x6c) != 0)
        void* edx_1 = *(i_72 + 0x1c)
        
        if (edx_1 != 0)
            i = *(edx_1 + 4) - 1
            
            if (i u<= 5)
                i = zx.d(lookup_table_570c64[i])
                
                switch (i)
                    case 0
                        i = *(edx_1 + 0x28)
                        
                        if (i == *(arg1 + 0x20))
                            int32_t eax_3 = *(arg1 + 0xc)
                            int32_t esi_1 = *(arg1 + 0x14)
                            uint32_t i_50 = *(arg1 + 0x10)
                            int32_t eax_4 = *(i_72 + 0x24)
                            int32_t var_14_1 = esi_1
                            
                            if (eax_4 s< esi_1 && *(i_72 + 0x20) s< esi_1)
                                _free(*(i_72 + 0x28))
                                int32_t ecx_1 = data_1151ae0
                                int32_t eax_5 = esi_1 << 2
                                int32_t eax_6
                                
                                if (ecx_1 == 0)
                                    int32_t var_64_2 = eax_5
                                    eax_6 = _malloc()
                                else
                                    eax_6 = ecx_1(eax_5, 
                                        "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\s"
                                    "panimation.c", 
                                        0x3a8)
                                
                                i_72 = i_40
                                xmm6 = arg4
                                *(i_72 + 0x28) = eax_6
                                eax_4 = *(i_72 + 0x24)
                                *(i_72 + 0x20) = esi_1
                            
                            uint32_t i_51 = 0
                            int32_t eax_7 = *(arg1 + 0x18)
                            char* edi_1 = *(i_72 + 0x28)
                            
                            if (eax_4 != 0)
                                i_51 = arg5
                            
                            i = i_50
                            char* var_20_1 = edi_1
                            
                            if (*i f<= arg3)
                                *(i_72 + 0x24) = esi_1
                                
                                if (arg3 f< *(i + (eax_3 << 2) - 4))
                                    int32_t eax_156 = sub_56da60(i, eax_3, i, arg3, 1)
                                    int32_t ecx_34 = *(eax_7 + (eax_156 << 2) - 4)
                                    void* ecx_35 = *(eax_7 + (eax_156 << 2))
                                    int32_t eax_157
                                    float xmm0_223[0x4]
                                    eax_157, xmm0_223 = sub_56d9a0(arg1, eax_156 - 1, 
                                        1f - (arg3 f- *(i_50 + (eax_156 << 2))) / (
                                            *(i_50 + (eax_156 << 2) - 4) f- *(i_50 + (eax_156 << 2))))
                                    xmm6 f- 1f
                                    eax_157:1.b = (xmm6 f== 1f ? 1 : 0) << 6
                                        | (is_unordered.d(xmm6, 1f) ? 1 : 0) << 2
                                        | (xmm6 f< 1f ? 1 : 0)
                                    float xmm4_2[0x4] = _mm_shuffle_ps(xmm0_223, xmm0_223, 0)
                                    bool p_6 = unimplemented  {test ah, 0x44}
                                    
                                    if (p_6)
                                        i = i_51
                                        
                                        switch (i)
                                            case 0
                                                i = i_40
                                                void* ecx_56 = *(i + 0x1c)
                                                
                                                if (*(ecx_56 + 0x18) != 0)
                                                    i = 0
                                                    uint32_t i_43 = 0
                                                    
                                                    if (esi_1 s> 0)
                                                        void* edx_47 = ecx_35
                                                        int32_t ecx_63
                                                        
                                                        if (esi_1 u< 0x10)
                                                            ecx_63 = ecx_34
                                                        else
                                                            i_43 = 0
                                                            
                                                            if (edi_1 u> edx_47 - 4 + (esi_1 << 2)
                                                                    || &edi_1[(esi_1 - 1) << 2] u< edx_47)
                                                                ecx_63 = ecx_34
                                                                
                                                                if (edi_1 u> ecx_63 - 4 + (esi_1 << 2)
                                                                        || &edi_1[(esi_1 - 1) << 2] u< ecx_63)
                                                                    int32_t eax_250 = esi_1 & 0x8000000f
                                                                    
                                                                    if (eax_250 s< 0)
                                                                        eax_250 =
                                                                            ((eax_250 - 1) | 0xfffffff0) + 1
                                                                    
                                                                    void* esi_63 = &edi_1[0x20]
                                                                    void* eax_257 = edi_1 - edx_47
                                                                    int128_t* edx_48 = edx_47 + 0x10
                                                                    void* eax_259 = ecx_63 - edi_1
                                                                    i = 0
                                                                    
                                                                    do
                                                                        float xmm0_288[0x4] =
                                                                            *(ecx_63 + (i << 2))
                                                                        float xmm1_139[0x4] = _mm_add_ps(
                                                                            _mm_mul_ps(
                                                                                _mm_sub_ps(edx_48[-1], xmm0_288), 
                                                                                xmm4_2), 
                                                                            xmm0_288)
                                                                        float xmm0_289[0x4] =
                                                                            *(edx_48 + ecx_63 - edx_47)
                                                                        *(esi_63 - 0x20) =
                                                                            _mm_mul_ps(xmm1_139, xmm7_1)
                                                                        *(edx_48 + eax_257) = _mm_mul_ps(
                                                                            _mm_add_ps(
                                                                                _mm_mul_ps(
                                                                                    _mm_sub_ps(*edx_48, xmm0_289), xmm4_2), 
                                                                                xmm0_289), 
                                                                            xmm7_1)
                                                                        float xmm0_290[0x4] =
                                                                            *(eax_259 + esi_63)
                                                                        edi_1 = var_20_1
                                                                        float xmm1_149[0x4] = _mm_add_ps(
                                                                            _mm_mul_ps(
                                                                                _mm_sub_ps(edx_48[1], xmm0_290), 
                                                                                xmm4_2), 
                                                                            xmm0_290)
                                                                        float xmm0_291[0x4] =
                                                                            *(ecx_63 + (i << 2) + 0x30)
                                                                        i += 0x10
                                                                        *esi_63 = _mm_mul_ps(xmm1_149, xmm7_1)
                                                                        float xmm1_151[0x4] = edx_48[2]
                                                                        edx_48 = &edx_48[4]
                                                                        *(esi_63 + 0x10) = _mm_mul_ps(
                                                                            _mm_add_ps(
                                                                                _mm_mul_ps(
                                                                                    _mm_sub_ps(xmm1_151, xmm0_291), 
                                                                                    xmm4_2), 
                                                                                xmm0_291), 
                                                                            xmm7_1)
                                                                        esi_63 += 0x40
                                                                    while (i s< esi_1 - eax_250)
                                                                    
                                                                    esi_1 = var_14_1
                                                                    edx_47 = ecx_35
                                                                    i_43 = i
                                                                else
                                                                    i = 0
                                                            else
                                                                ecx_63 = ecx_34
                                                                i = 0
                                                        
                                                        if (i s< esi_1)
                                                            if (esi_1 - i_43 s< 4)
                                                                i = i_43
                                                            else
                                                                int32_t eax_262 = esi_1 - 3
                                                                i = i_43
                                                                float* esi_69 = ecx_63 - edx_47
                                                                void* edi_57 = edx_47 + ((i + 1) << 2)
                                                                void* edx_51 = &edi_1[(i + 2) << 2]
                                                                
                                                                do
                                                                    *(edx_51 - 8) = ((*(edi_57 - 4) f-
                                                                        *(ecx_63 + (i << 2))) f* xmm0_223 f+
                                                                        *(ecx_63 + (i << 2))) f* xmm6
                                                                    *(edi_1 - edx_47 + edi_57) = ((
                                                                        *edi_57 f- *(esi_69 + edi_57))
                                                                        f* xmm0_223 f+ *(esi_69 + edi_57))
                                                                        f* xmm6
                                                                    float* esi_74 = ecx_63 - edi_1
                                                                    esi_1 = var_14_1
                                                                    *edx_51 = ((*(edi_57 + 4) f-
                                                                        *(esi_74 + edx_51)) f* xmm0_223 f+
                                                                        *(esi_74 + edx_51)) f* xmm6
                                                                    float xmm1_171 = *(edi_57 + 8)
                                                                    edi_57 += 0x10
                                                                    float xmm1_174 = (xmm1_171 f-
                                                                        *(ecx_63 + (i << 2) + 0xc)) f* xmm0_223
                                                                        f+ *(ecx_63 + (i << 2) + 0xc)
                                                                    i += 4
                                                                    *(edx_51 + 4) = xmm1_174 f* xmm6
                                                                    edx_51 += 0x10
                                                                while (i s< eax_262)
                                                                
                                                                edi_1 = var_20_1
                                                                edx_47 = ecx_35
                                                            
                                                            if (i s< esi_1)
                                                                void* ecx_64 = ecx_63 - edx_47
                                                                int32_t i_66 = var_14_1 - i
                                                                int32_t* eax_263 = edx_47 + (i << 2)
                                                                int32_t i_1
                                                                
                                                                do
                                                                    *(eax_263 + edi_1 - edx_47) = ((
                                                                        *eax_263 f- *(eax_263 + ecx_64))
                                                                        f* xmm0_223 f+ *(eax_263 + ecx_64))
                                                                        f* xmm6
                                                                    eax_263 = &eax_263[1]
                                                                    i_1 = i_66
                                                                    i_66 -= 1
                                                                while (i_1 != 1)
                                                                return eax_263
                                                else
                                                    void* ecx_57 = *(ecx_56 + 0x20)
                                                    uint32_t i_2 = 0
                                                    
                                                    if (esi_1 s> 0)
                                                        void* edx_40 = ecx_35
                                                        int32_t ecx_58
                                                        
                                                        if (esi_1 u< 8)
                                                            ecx_58 = ecx_34
                                                        else
                                                            i_2 = 0
                                                            
                                                            if ((edi_1 u> edx_40 - 4 + (esi_1 << 2)
                                                                    || &edi_1[(esi_1 - 1) << 2] u< edx_40) && (
                                                                    edi_1 u> ecx_57 + ((esi_1 - 1) << 2)
                                                                    || &edi_1[(esi_1 - 1) << 2] u< ecx_57))
                                                                ecx_58 = ecx_34
                                                                
                                                                if (edi_1 u> ecx_58 - 4 + (esi_1 << 2)
                                                                        || &edi_1[(esi_1 - 1) << 2] u< ecx_58)
                                                                    int32_t eax_238 = esi_1 & 0x80000007
                                                                    
                                                                    if (eax_238 s< 0)
                                                                        eax_238 =
                                                                            ((eax_238 - 1) | 0xfffffff8) + 1
                                                                    
                                                                    void* eax_241 = ecx_57 + 0x10
                                                                    void* esi_60 = ecx_35
                                                                    
                                                                    do
                                                                        i_2 += 8
                                                                        float xmm2_5[0x4] = *(eax_241 - 0x10)
                                                                        float xmm0_286[0x4] =
                                                                            *(ecx_58 - ecx_35 + esi_60)
                                                                        float xmm1_118[0x4] = _mm_add_ps(
                                                                            _mm_mul_ps(
                                                                                _mm_sub_ps(*esi_60, xmm0_286), xmm4_2), 
                                                                            xmm0_286)
                                                                        float xmm0_287[0x4] =
                                                                            *(ecx_58 - ecx_57 + eax_241)
                                                                        float xmm1_121[0x4] = _mm_add_ps(
                                                                            _mm_mul_ps(
                                                                                _mm_sub_ps(xmm1_118, xmm2_5), xmm7_1), 
                                                                            xmm2_5)
                                                                        float xmm2_6[0x4] = *eax_241
                                                                        *(var_20_1 - ecx_35 + esi_60) = xmm1_121
                                                                        esi_60 += 0x20
                                                                        *(var_20_1 - ecx_57 + eax_241) =
                                                                            _mm_add_ps(
                                                                            _mm_mul_ps(
                                                                                _mm_sub_ps(
                                                                                    _mm_add_ps(
                                                                                        _mm_mul_ps(
                                                                                            _mm_sub_ps(
                                                                                                *(ecx_35 - ecx_57 + eax_241), 
                                                                                                xmm0_287), 
                                                                                            xmm4_2), 
                                                                                        xmm0_287), 
                                                                                    xmm2_6), 
                                                                                xmm7_1), 
                                                                            xmm2_6)
                                                                        edx_40 = ecx_35
                                                                        eax_241 += 0x20
                                                                    while (i_2 s< esi_1 - eax_238)
                                                                    
                                                                    esi_1 = var_14_1
                                                                    edi_1 = var_20_1
                                                                    ecx_58 = ecx_34
                                                            else
                                                                ecx_58 = ecx_34
                                                        
                                                        i = i_2
                                                        
                                                        if (i s< esi_1)
                                                            void* ecx_60 = ecx_58 - ecx_57
                                                            int32_t* eax_242 = ecx_57 + (i << 2)
                                                            int32_t i_65 = var_14_1 - i_2
                                                            int32_t i_3
                                                            
                                                            do
                                                                *(eax_242 + edi_1 - ecx_57) = ((
                                                                    *(eax_242 + edx_40 - ecx_57) f-
                                                                    *(eax_242 + ecx_60)) f* xmm0_223 f+
                                                                    *(eax_242 + ecx_60) f- *eax_242) f* xmm6
                                                                    f+ *eax_242
                                                                eax_242 = &eax_242[1]
                                                                i_3 = i_65
                                                                i_65 -= 1
                                                            while (i_3 != 1)
                                                            return eax_242
                                            case 1, 2
                                                uint32_t i_38 = 0
                                                
                                                if (esi_1 s> 0)
                                                    void* edx_52 = ecx_35
                                                    int32_t ecx_67
                                                    
                                                    if (esi_1 u< 4)
                                                        ecx_67 = ecx_34
                                                    else
                                                        i_38 = 0
                                                        
                                                        if (edi_1 u> edx_52 - 4 + (esi_1 << 2)
                                                                || &edi_1[(esi_1 - 1) << 2] u< edx_52)
                                                            ecx_67 = ecx_34
                                                            
                                                            if (edi_1 u> ecx_67 - 4 + (esi_1 << 2)
                                                                    || &edi_1[(esi_1 - 1) << 2] u< ecx_67)
                                                                int32_t eax_271 = esi_1 & 0x80000003
                                                                
                                                                if (eax_271 s< 0)
                                                                    eax_271 =
                                                                        ((eax_271 - 1) | 0xfffffffc) + 1
                                                                
                                                                char* ecx_68 = edi_1
                                                                void* eax_277 = edx_52 - edi_1
                                                                void* var_3c_4 = eax_277
                                                                uint32_t i_4 = 0
                                                                
                                                                do
                                                                    void* eax_278 = eax_277 + ecx_68
                                                                    float xmm2_7[0x4] = *ecx_68
                                                                    i_4 += 4
                                                                    float xmm0_292[0x4] =
                                                                        *(ecx_67 - edx_52 + eax_278)
                                                                    edi_1 = var_20_1
                                                                    eax_277 = var_3c_4
                                                                    *ecx_68 = _mm_add_ps(
                                                                        _mm_mul_ps(
                                                                            _mm_sub_ps(
                                                                                _mm_add_ps(
                                                                                    _mm_mul_ps(
                                                                                        _mm_sub_ps(*eax_278, xmm0_292), 
                                                                                        xmm4_2), 
                                                                                    xmm0_292), 
                                                                                xmm2_7), 
                                                                            xmm7_1), 
                                                                        xmm2_7)
                                                                    ecx_68 = &ecx_68[0x10]
                                                                while (i_4 s< esi_1 - eax_271)
                                                                
                                                                edx_52 = ecx_35
                                                                i_38 = i_4
                                                                esi_1 = var_14_1
                                                                ecx_67 = ecx_34
                                                        else
                                                            ecx_67 = ecx_34
                                                    
                                                    i = i_38
                                                    
                                                    if (i s< esi_1)
                                                        void* eax_279 = &edi_1[i << 2]
                                                        void* ecx_69 = ecx_67 - edx_52
                                                        int32_t edx_54 = edx_52 - edi_1
                                                        void* var_40_6 = eax_279
                                                        int32_t i_67 = esi_1 - i_38
                                                        int32_t* edi_60 = eax_279
                                                        void* eax_280
                                                        int32_t i_5
                                                        
                                                        do
                                                            eax_280 = edi_60 + edx_54
                                                            *edi_60 = ((*(edi_60 + edx_54) f-
                                                                *(ecx_69 + eax_280)) f* xmm0_223 f+
                                                                *(ecx_69 + eax_280) f- *edi_60) f* xmm6 f+
                                                                *edi_60
                                                            edi_60 = &edi_60[1]
                                                            i_5 = i_67
                                                            i_67 -= 1
                                                        while (i_5 != 1)
                                                        return eax_280
                                            case 3
                                                i = i_40
                                                void* ecx_70 = *(i + 0x1c)
                                                
                                                if (*(ecx_70 + 0x18) != 0)
                                                    uint32_t i_39 = 0
                                                    
                                                    if (esi_1 s> 0)
                                                        void* edx_60 = ecx_35
                                                        int32_t ecx_81
                                                        
                                                        if (esi_1 u< 8)
                                                            ecx_81 = ecx_34
                                                        else
                                                            i_39 = 0
                                                            
                                                            if (edi_1 u> edx_60 - 4 + (esi_1 << 2)
                                                                    || &edi_1[(esi_1 - 1) << 2] u< edx_60)
                                                                ecx_81 = ecx_34
                                                                
                                                                if (edi_1 u> ecx_81 - 4 + (esi_1 << 2)
                                                                        || &edi_1[(esi_1 - 1) << 2] u< ecx_81)
                                                                    int32_t eax_304 = esi_1 & 0x80000007
                                                                    
                                                                    if (eax_304 s< 0)
                                                                        eax_304 =
                                                                            ((eax_304 - 1) | 0xfffffff8) + 1
                                                                    
                                                                    void* esi_80 = &edi_1[0x10]
                                                                    void* eax_308 = edx_60 - edi_1
                                                                    void* edi_66 = ecx_81 - edx_60
                                                                    void* var_3c_6 = eax_308
                                                                    void* edx_61 = ecx_35
                                                                    uint32_t i_6 = 0
                                                                    
                                                                    do
                                                                        float xmm0_296[0x4] = *(edx_61 + edi_66)
                                                                        int128_t* eax_309 = eax_308 + esi_80
                                                                        i_6 += 8
                                                                        float xmm1_209[0x4] = *edx_61
                                                                        edx_61 += 0x20
                                                                        float xmm1_214[0x4] = _mm_add_ps(
                                                                            _mm_mul_ps(
                                                                                _mm_add_ps(
                                                                                    _mm_mul_ps(
                                                                                        _mm_sub_ps(xmm1_209, xmm0_296), 
                                                                                        xmm4_2), 
                                                                                    xmm0_296), 
                                                                                xmm7_1), 
                                                                            *(esi_80 - 0x10))
                                                                        float xmm0_298[0x4] =
                                                                            *(eax_309 + edi_66)
                                                                        *(esi_80 - 0x10) = xmm1_214
                                                                        eax_308 = var_3c_6
                                                                        *esi_80 = _mm_add_ps(
                                                                            _mm_mul_ps(
                                                                                _mm_add_ps(
                                                                                    _mm_mul_ps(
                                                                                        _mm_sub_ps(*eax_309, xmm0_298), 
                                                                                        xmm4_2), 
                                                                                    xmm0_298), 
                                                                                xmm7_1), 
                                                                            *esi_80)
                                                                        esi_80 += 0x20
                                                                    while (i_6 s< esi_1 - eax_304)
                                                                    
                                                                    esi_1 = var_14_1
                                                                    edi_1 = var_20_1
                                                                    edx_60 = ecx_35
                                                                    i_39 = i_6
                                                                    ecx_81 = ecx_34
                                                            else
                                                                ecx_81 = ecx_34
                                                        
                                                        i = i_39
                                                        
                                                        if (i s< esi_1)
                                                            float* ecx_82 = ecx_81 - edx_60
                                                            i = &edi_1[i << 2]
                                                            int32_t edx_62 = edx_60 - edi_1
                                                            float* i_34 = i
                                                            int32_t i_69 = esi_1 - i_39
                                                            int32_t i_7
                                                            
                                                            do
                                                                int32_t eax_310 = i + edx_62
                                                                *i_34 = ((*(i + edx_62) f-
                                                                    *(ecx_82 + eax_310)) f* xmm0_223 f+
                                                                    *(ecx_82 + eax_310)) f* xmm6 + *i_34
                                                                i = &i_34[1]
                                                                i_34 = i
                                                                i_7 = i_69
                                                                i_69 -= 1
                                                            while (i_7 != 1)
                                                else
                                                    int32_t ecx_71 = *(ecx_70 + 0x20)
                                                    uint32_t i_8 = 0
                                                    
                                                    if (esi_1 s> 0)
                                                        if (esi_1 u>= 4)
                                                            i_8 = 0
                                                        
                                                        int32_t ecx_72
                                                        void* edx_57
                                                        
                                                        if (esi_1 u>= 4 && (
                                                                edi_1 u> ecx_71 + ((esi_1 - 1) << 2)
                                                                || &edi_1[(esi_1 - 1) << 2] u< ecx_71))
                                                            edx_57 = ecx_35
                                                            
                                                            if (edi_1 u> edx_57 - 4 + (esi_1 << 2)
                                                                    || &edi_1[(esi_1 - 1) << 2] u< edx_57)
                                                                ecx_72 = ecx_34
                                                                
                                                                if (edi_1 u> ecx_72 - 4 + (esi_1 << 2)
                                                                        || &edi_1[(esi_1 - 1) << 2] u< ecx_72)
                                                                    int32_t eax_292 = esi_1 & 0x80000003
                                                                    
                                                                    if (eax_292 s< 0)
                                                                        eax_292 =
                                                                            ((eax_292 - 1) | 0xfffffffc) + 1
                                                                    
                                                                    void* esi_78 = ecx_72 - edx_57
                                                                    void* eax_295 = edx_57
                                                                    void* ecx_76 = var_20_1 - edx_57
                                                                    void* var_40_7 = ecx_76
                                                                    
                                                                    do
                                                                        float xmm0_293[0x4] =
                                                                            *(esi_78 + eax_295)
                                                                        i_8 += 4
                                                                        ecx_72 = ecx_34
                                                                        *(ecx_76 + eax_295) = _mm_add_ps(
                                                                            _mm_mul_ps(
                                                                                _mm_sub_ps(
                                                                                    _mm_add_ps(
                                                                                        _mm_mul_ps(
                                                                                            _mm_sub_ps(*eax_295, xmm0_293), 
                                                                                            xmm4_2), 
                                                                                        xmm0_293), 
                                                                                    *(ecx_71 - edx_57 + eax_295)), 
                                                                                xmm7_1), 
                                                                            *(ecx_76 + eax_295))
                                                                        eax_295 += 0x10
                                                                    while (i_8 s< esi_1 - eax_292)
                                                                    
                                                                    esi_1 = var_14_1
                                                                    edi_1 = var_20_1
                                                                    edx_57 = ecx_35
                                                            else
                                                                ecx_72 = ecx_34
                                                        else
                                                            ecx_72 = ecx_34
                                                            edx_57 = ecx_35
                                                        
                                                        i = i_8
                                                        
                                                        if (i s< esi_1)
                                                            float* eax_296 = edx_57 + (i << 2)
                                                            float* ecx_78 = ecx_72 - edx_57
                                                            int32_t* edi_64 = edi_1 - edx_57
                                                            int32_t i_68 = esi_1 - i_8
                                                            int32_t i_9
                                                            
                                                            do
                                                                *(edi_64 + eax_296) = ((*eax_296 f-
                                                                    *(ecx_78 + eax_296)) f* xmm0_223 f+
                                                                    *(ecx_78 + eax_296) f-
                                                                    *(eax_296 + ecx_71 - edx_57)) f* xmm6
                                                                    f+ *(edi_64 + eax_296)
                                                                eax_296 = &eax_296[1]
                                                                i_9 = i_68
                                                                i_68 -= 1
                                                            while (i_9 != 1)
                                                            return eax_296
                                    else if (i_51 != 3)
                                        i = 0
                                        uint32_t i_42 = 0
                                        
                                        if (esi_1 s> 0)
                                            void* edx_35 = ecx_35
                                            int32_t ecx_54
                                            
                                            if (esi_1 u< 0x10)
                                                ecx_54 = ecx_34
                                            else
                                                i_42 = 0
                                                
                                                if (edi_1 u> edx_35 - 4 + (esi_1 << 2)
                                                        || &edi_1[(esi_1 - 1) << 2] u< edx_35)
                                                    ecx_54 = ecx_34
                                                    
                                                    if (edi_1 u> ecx_54 - 4 + (esi_1 << 2)
                                                            || &edi_1[(esi_1 - 1) << 2] u< ecx_54)
                                                        int32_t eax_211 = esi_1 & 0x8000000f
                                                        
                                                        if (eax_211 s< 0)
                                                            eax_211 = ((eax_211 - 1) | 0xfffffff0) + 1
                                                        
                                                        void* esi_43 = &edi_1[0x20]
                                                        int32_t eax_218 = edi_1 - edx_35
                                                        void* edx_36 = edx_35 + 0x10
                                                        void* eax_220 = ecx_54 - edi_1
                                                        i = 0
                                                        
                                                        do
                                                            float xmm1_111[0x4] = *(ecx_54 + (i << 2))
                                                            float xmm0_253[0x4] = _mm_add_ps(
                                                                _mm_mul_ps(
                                                                    _mm_sub_ps(*(edx_36 - 0x10), xmm1_111), 
                                                                    xmm4_2), 
                                                                xmm1_111)
                                                            float xmm1_112[0x4] =
                                                                *(edx_36 + ecx_54 - edx_35)
                                                            *(esi_43 - 0x20) = xmm0_253
                                                            *(edx_36 + eax_218) = _mm_add_ps(
                                                                _mm_mul_ps(
                                                                    _mm_sub_ps(*edx_36, xmm1_112), xmm4_2), 
                                                                xmm1_112)
                                                            float xmm1_113[0x4] = *(eax_220 + esi_43)
                                                            edi_1 = var_20_1
                                                            float xmm0_261[0x4] = _mm_add_ps(
                                                                _mm_mul_ps(
                                                                    _mm_sub_ps(*(edx_36 + 0x10), xmm1_113), 
                                                                    xmm4_2), 
                                                                xmm1_113)
                                                            float xmm1_114[0x4] =
                                                                *(ecx_54 + (i << 2) + 0x30)
                                                            i += 0x10
                                                            *esi_43 = xmm0_261
                                                            float xmm0_262[0x4] = *(edx_36 + 0x20)
                                                            edx_36 += 0x40
                                                            *(esi_43 + 0x10) = _mm_add_ps(
                                                                _mm_mul_ps(
                                                                    _mm_sub_ps(xmm0_262, xmm1_114), 
                                                                    xmm4_2), 
                                                                xmm1_114)
                                                            esi_43 += 0x40
                                                        while (i s< esi_1 - eax_211)
                                                        
                                                        esi_1 = var_14_1
                                                        edx_35 = ecx_35
                                                        i_42 = i
                                                    else
                                                        i = 0
                                                else
                                                    ecx_54 = ecx_34
                                                    i = 0
                                            
                                            if (i s< esi_1)
                                                if (esi_1 - i_42 s< 4)
                                                    i = i_42
                                                else
                                                    int32_t eax_223 = esi_1 - 3
                                                    i = i_42
                                                    void* esi_49 = ecx_54 - edx_35
                                                    void* edx_38 = ecx_54 - edi_1
                                                    void* edi_44 = &edi_1[(i + 2) << 2]
                                                    void* edx_39 = edx_35 + ((i + 1) << 2)
                                                    
                                                    do
                                                        *(edi_44 - 8) = (*(edx_39 - 4) f-
                                                            *(ecx_54 + (i << 2))) f* xmm0_223 f+
                                                            *(ecx_54 + (i << 2))
                                                        *(edi_1 - edx_35 + edx_39) = (*edx_39 f-
                                                            *(esi_49 + edx_39)) f* xmm0_223 f+
                                                            *(esi_49 + edx_39)
                                                        esi_1 = var_14_1
                                                        *edi_44 = (*(edx_39 + 4) f- *(edx_38 + edi_44))
                                                            f* xmm0_223 f+ *(edx_38 + edi_44)
                                                        float xmm0_278 = *(edx_39 + 8)
                                                        edx_39 += 0x10
                                                        float xmm0_281 = (xmm0_278 f-
                                                            *(ecx_54 + (i << 2) + 0xc)) f* xmm0_223 f+
                                                            *(ecx_54 + (i << 2) + 0xc)
                                                        i += 4
                                                        *(edi_44 + 4) = xmm0_281
                                                        edi_44 += 0x10
                                                    while (i s< eax_223)
                                                    
                                                    edi_1 = var_20_1
                                                    edx_35 = ecx_35
                                                
                                                if (i s< esi_1)
                                                    void* ecx_55 = ecx_54 - edx_35
                                                    int32_t i_64 = var_14_1 - i
                                                    int32_t* eax_224 = edx_35 + (i << 2)
                                                    int32_t i_10
                                                    
                                                    do
                                                        *(eax_224 + edi_1 - edx_35) = (*eax_224 f-
                                                            *(eax_224 + ecx_55)) f* xmm0_223 f+
                                                            *(eax_224 + ecx_55)
                                                        eax_224 = &eax_224[1]
                                                        i_10 = i_64
                                                        i_64 -= 1
                                                    while (i_10 != 1)
                                                    return eax_224
                                    else
                                        i = i_40
                                        uint32_t i_11 = 0
                                        void* ecx_37 = *(i + 0x1c)
                                        
                                        if (*(ecx_37 + 0x18) == 0)
                                            int32_t ecx_38 = *(ecx_37 + 0x20)
                                            
                                            if (esi_1 s> 0)
                                                if (esi_1 u>= 4)
                                                    i_11 = 0
                                                
                                                int32_t ecx_39
                                                void* edx_28
                                                
                                                if (esi_1 u>= 4 && (edi_1 u> ecx_38 + ((esi_1 - 1) << 2)
                                                        || &edi_1[(esi_1 - 1) << 2] u< ecx_38))
                                                    edx_28 = ecx_35
                                                    
                                                    if (edi_1 u> edx_28 - 4 + (esi_1 << 2)
                                                            || &edi_1[(esi_1 - 1) << 2] u< edx_28)
                                                        ecx_39 = ecx_34
                                                        
                                                        if (edi_1 u> ecx_39 - 4 + (esi_1 << 2)
                                                                || &edi_1[(esi_1 - 1) << 2] u< ecx_39)
                                                            int32_t eax_169 = esi_1 & 0x80000003
                                                            
                                                            if (eax_169 s< 0)
                                                                eax_169 =
                                                                    ((eax_169 - 1) | 0xfffffffc) + 1
                                                            
                                                            int128_t* eax_172 = edx_28
                                                            void* ecx_43 = var_20_1 - edx_28
                                                            int128_t* edx_29 = ecx_39 - edx_28
                                                            void* var_38_12 = ecx_43
                                                            
                                                            do
                                                                float xmm0_224[0x4] =
                                                                    *(edx_29 + eax_172)
                                                                i_11 += 4
                                                                ecx_39 = ecx_34
                                                                *(ecx_43 + eax_172) = _mm_add_ps(
                                                                    _mm_sub_ps(
                                                                        _mm_add_ps(
                                                                            _mm_mul_ps(
                                                                                _mm_sub_ps(*eax_172, xmm0_224), 
                                                                                xmm4_2), 
                                                                            xmm0_224), 
                                                                        *(ecx_38 - edx_28 + eax_172)), 
                                                                    *(ecx_43 + eax_172))
                                                                eax_172 = &eax_172[1]
                                                            while (i_11 s< esi_1 - eax_169)
                                                            
                                                            esi_1 = var_14_1
                                                            edi_1 = var_20_1
                                                            edx_28 = ecx_35
                                                    else
                                                        ecx_39 = ecx_34
                                                else
                                                    ecx_39 = ecx_34
                                                    edx_28 = ecx_35
                                                
                                                i = i_11
                                                
                                                if (i s< esi_1)
                                                    int32_t* eax_173 = edx_28 + (i << 2)
                                                    void* ecx_45 = ecx_39 - edx_28
                                                    void* edi_37 = edi_1 - edx_28
                                                    int32_t i_62 = esi_1 - i_11
                                                    int32_t i_12
                                                    
                                                    do
                                                        *(eax_173 + edi_37) = (*eax_173 f-
                                                            *(eax_173 + ecx_45)) f* xmm0_223 f+
                                                            *(eax_173 + ecx_45) f-
                                                            *(eax_173 + ecx_38 - edx_28) f+
                                                            *(eax_173 + edi_37)
                                                        eax_173 = &eax_173[1]
                                                        i_12 = i_62
                                                        i_62 -= 1
                                                    while (i_12 != 1)
                                                    return eax_173
                                        else if (esi_1 s> 0)
                                            void* edx_31 = ecx_35
                                            
                                            if (esi_1 u>= 0x10)
                                                i_11 = 0
                                                i = edx_31 - 4 + (esi_1 << 2)
                                            
                                            int32_t ecx_48
                                            
                                            if (esi_1 u>= 0x10 &&
                                                    (edi_1 u> i || &edi_1[(esi_1 - 1) << 2] u< edx_31))
                                                ecx_48 = ecx_34
                                                
                                                if (edi_1 u<= ecx_48 - 4 + (esi_1 << 2))
                                                    i = &edi_1[(esi_1 - 1) << 2]
                                                
                                                if (edi_1 u> ecx_48 - 4 + (esi_1 << 2) || i u< ecx_48)
                                                    int32_t eax_179 = esi_1 & 0x8000000f
                                                    
                                                    if (eax_179 s< 0)
                                                        eax_179 = ((eax_179 - 1) | 0xfffffff0) + 1
                                                    
                                                    void* edi_38 = &edi_1[0x10]
                                                    int128_t* i_49 = ecx_48 - edx_31
                                                    void* edx_32 = edx_31 + 0x20
                                                    uint32_t i_13 = 0
                                                    
                                                    do
                                                        float xmm0_227[0x4] = *(ecx_48 + (i_13 << 2))
                                                        int128_t* eax_188 = edx_31 - edi_1 + edi_38
                                                        float xmm1_85[0x4] = _mm_add_ps(
                                                            _mm_add_ps(
                                                                _mm_mul_ps(
                                                                    _mm_sub_ps(*(edx_32 - 0x20), xmm0_227), 
                                                                    xmm4_2), 
                                                                xmm0_227), 
                                                            *(edi_38 - 0x10))
                                                        float xmm0_229[0x4] = *(i_49 + eax_188)
                                                        *(edi_38 - 0x10) = xmm1_85
                                                        i = i_49
                                                        ecx_48 = ecx_34
                                                        float xmm1_90[0x4] = _mm_add_ps(
                                                            _mm_add_ps(
                                                                _mm_mul_ps(
                                                                    _mm_sub_ps(*eax_188, xmm0_229), 
                                                                    xmm4_2), 
                                                                xmm0_229), 
                                                            *edi_38)
                                                        float xmm0_231[0x4] = *(i + edx_32)
                                                        *edi_38 = xmm1_90
                                                        float xmm1_95[0x4] = _mm_add_ps(
                                                            _mm_add_ps(
                                                                _mm_mul_ps(
                                                                    _mm_sub_ps(*edx_32, xmm0_231), xmm4_2), 
                                                                xmm0_231), 
                                                            *(edi_38 + 0x10))
                                                        float xmm0_233[0x4] =
                                                            *(ecx_48 + (i_13 << 2) + 0x30)
                                                        i_13 += 0x10
                                                        *(edi_38 + 0x10) = xmm1_95
                                                        float xmm1_96[0x4] = *(edx_32 + 0x10)
                                                        edx_32 += 0x40
                                                        *(edi_38 + 0x20) = _mm_add_ps(
                                                            _mm_add_ps(
                                                                _mm_mul_ps(
                                                                    _mm_sub_ps(xmm1_96, xmm0_233), xmm4_2), 
                                                                xmm0_233), 
                                                            *(edi_38 + 0x20))
                                                        edi_38 += 0x40
                                                    while (i_13 s< esi_1 - eax_179)
                                                    
                                                    edi_1 = var_20_1
                                                    edx_31 = ecx_35
                                                    i_11 = i_13
                                                    esi_1 = var_14_1
                                            else
                                                ecx_48 = ecx_34
                                            
                                            if (i_11 s< esi_1)
                                                if (esi_1 - i_11 s>= 4)
                                                    uint32_t i_14 = i_11
                                                    void* edi_39 = edx_31 + ((i_14 + 2) << 2)
                                                    void* eax_199 = ecx_48 - edx_31
                                                    void* edx_33 = &edi_1[(i_14 + 1) << 2]
                                                    
                                                    do
                                                        float* eax_201 = edx_31 - edi_1 + edx_33
                                                        *(edx_33 - 4) = (*(edi_39 - 8) f-
                                                            *(ecx_48 + (i_14 << 2))) f* xmm0_223 f+
                                                            *(ecx_48 + (i_14 << 2)) f+ *(edx_33 - 4)
                                                        ecx_48 = ecx_34
                                                        *edx_33 = (*eax_201 f- *(eax_201 + eax_199))
                                                            f* xmm0_223 f+ *(eax_201 + eax_199) f+ *edx_33
                                                        *(edx_33 + 4) = (*edi_39 f- *(edi_39 + eax_199))
                                                            f* xmm0_223 f+ *(edi_39 + eax_199) f+
                                                            *(edx_33 + 4)
                                                        float xmm0_245 = *(edi_39 + 4)
                                                        edi_39 += 0x10
                                                        float xmm0_248 = (xmm0_245 f-
                                                            *(ecx_48 + (i_14 << 2) + 0xc)) f* xmm0_223 f+
                                                            *(ecx_48 + (i_14 << 2) + 0xc)
                                                        i_14 += 4
                                                        *(edx_33 + 8) = xmm0_248 f+ *(edx_33 + 8)
                                                        edx_33 += 0x10
                                                    while (i_14 s< esi_1 - 3)
                                                    
                                                    edi_1 = var_20_1
                                                    edx_31 = ecx_35
                                                    i_11 = i_14
                                                    esi_1 = var_14_1
                                                
                                                i = i_11
                                                
                                                if (i s< esi_1)
                                                    float* ecx_51 = ecx_48 - edx_31
                                                    int32_t edx_34 = edx_31 - edi_1
                                                    float* edi_40 = &edi_1[i << 2]
                                                    int32_t i_63 = var_14_1 - i
                                                    void* eax_203
                                                    int32_t i_15
                                                    
                                                    do
                                                        eax_203 = edi_40 + edx_34
                                                        *edi_40 = (*(edi_40 + edx_34) f-
                                                            *(ecx_51 + eax_203)) f* xmm0_223 f+
                                                            *(ecx_51 + eax_203) + *edi_40
                                                        edi_40 = &edi_40[1]
                                                        i_15 = i_63
                                                        i_63 -= 1
                                                    while (i_15 != 1)
                                                    return eax_203
                                else
                                    xmm6 f- 1f
                                    char* ecx_5 = *(*(arg1 + 0x18) + (eax_3 << 2) - 4)
                                    char* var_1c_1 = ecx_5
                                    i:1.b = (xmm6 f== 1f ? 1 : 0) << 6
                                        | (is_unordered.d(xmm6, 1f) ? 1 : 0) << 2
                                        | (xmm6 f< 1f ? 1 : 0)
                                    bool p_4 = unimplemented  {test ah, 0x44}
                                    
                                    if (not(p_4))
                                        if (i_51 != 3)
                                            return sub_579300(edi_1, ecx_5, esi_1 << 2)
                                        
                                        int32_t i_16 = 0
                                        i = *(i_40 + 0x1c)
                                        
                                        if (*(i + 0x18) == 0)
                                            i = *(i + 0x20)
                                            uint32_t i_44 = i
                                            
                                            if (esi_1 s> 0)
                                                if (esi_1 u>= 0x10)
                                                    if (edi_1 u> i + (esi_1 << 2) - 4)
                                                    label_56f290:
                                                        
                                                        if (edi_1 u<= &ecx_5[0xfffffffc + (esi_1 << 2)])
                                                            i = &edi_1[(esi_1 - 1) << 2]
                                                        
                                                        if (edi_1 u> &ecx_5[0xfffffffc + (esi_1 << 2)]
                                                                || i u< ecx_5)
                                                            int32_t eax_34 = esi_1 & 0x8000000f
                                                            
                                                            if (eax_34 s< 0)
                                                                eax_34 = ((eax_34 - 1) | 0xfffffff0) + 1
                                                            
                                                            void* esi_5 = &edi_1[0x10]
                                                            uint32_t i_73 = i_44
                                                            uint32_t i_47 = i_73 - ecx_5
                                                            void* ecx_6 = &ecx_5[0x20]
                                                            
                                                            do
                                                                int128_t* eax_42 = ecx_5 - edi_1 + esi_5
                                                                float xmm1_13[0x4] = _mm_add_ps(
                                                                    _mm_sub_ps(*(ecx_6 - 0x20), 
                                                                        *(i_73 + (i_16 << 2))), 
                                                                    *(esi_5 - 0x10))
                                                                float xmm0_49[0x4] = *(eax_42 + i_47)
                                                                *(esi_5 - 0x10) = xmm1_13
                                                                i = i_47
                                                                i_73 = i_44
                                                                float xmm1_16[0x4] = _mm_add_ps(
                                                                    _mm_sub_ps(*eax_42, xmm0_49), *esi_5)
                                                                float xmm0_51[0x4] = *(i + ecx_6)
                                                                *esi_5 = xmm1_16
                                                                float xmm1_19[0x4] = _mm_add_ps(
                                                                    _mm_sub_ps(*ecx_6, xmm0_51), 
                                                                    *(esi_5 + 0x10))
                                                                float xmm0_53[0x4] =
                                                                    *(i_73 + (i_16 << 2) + 0x30)
                                                                i_16 += 0x10
                                                                *(esi_5 + 0x10) = xmm1_19
                                                                float xmm1_20[0x4] = *(ecx_6 + 0x10)
                                                                ecx_6 += 0x40
                                                                *(esi_5 + 0x20) = _mm_add_ps(
                                                                    _mm_sub_ps(xmm1_20, xmm0_53), 
                                                                    *(esi_5 + 0x20))
                                                                esi_5 += 0x40
                                                            while (i_16 s< esi_1 - eax_34)
                                                            
                                                            esi_1 = var_14_1
                                                            edi_1 = var_20_1
                                                            ecx_5 = var_1c_1
                                                    else
                                                        i = &edi_1[(esi_1 - 1) << 2]
                                                        
                                                        if (i u< i_44)
                                                            goto label_56f290
                                                
                                                if (i_16 s< esi_1)
                                                    i = esi_1 - i_16
                                                    
                                                    if (i s>= 4)
                                                        void* esi_7 = &edi_1[(i_16 + 1) << 2]
                                                        uint32_t i_70 = ecx_5 - i_44
                                                        void* edi_6 = i_44 + (i_16 << 2) + 8
                                                        
                                                        do
                                                            int32_t* eax_50 = i_44 - edi_1 + esi_7
                                                            *(esi_7 - 4) = *(ecx_5 + (i_16 << 2)) f-
                                                                *(edi_6 - 8) f+ *(esi_7 - 4)
                                                            i = i_70
                                                            ecx_5 = var_1c_1
                                                            *esi_7 =
                                                                *(eax_50 + i_70) f- *eax_50 f+ *esi_7
                                                            *(esi_7 + 4) =
                                                                *(i + edi_6) f- *edi_6 f+ *(esi_7 + 4)
                                                            float xmm0_64 = *(ecx_5 + (i_16 << 2) + 0xc)
                                                            i_16 += 4
                                                            float xmm0_65 = xmm0_64 f- *(edi_6 + 4)
                                                            edi_6 += 0x10
                                                            *(esi_7 + 8) = xmm0_65 f+ *(esi_7 + 8)
                                                            esi_7 += 0x10
                                                        while (i_16 s< esi_1 - 3)
                                                        
                                                        esi_1 = var_14_1
                                                        edi_1 = var_20_1
                                                    
                                                    if (i_16 s< esi_1)
                                                        void* eax_51 = &edi_1[i_16 << 2]
                                                        int32_t i_56 = esi_1 - i_16
                                                        void* var_2c_5 = eax_51
                                                        int32_t i_17
                                                        
                                                        do
                                                            int32_t* eax_52 = eax_51 + i_44 - edi_1
                                                            float* eax_53 = var_2c_5
                                                            *eax_53 =
                                                                *(eax_52 + ecx_5 - i_44) f- *eax_52
                                                                + *eax_53
                                                            eax_51 = &eax_53[1]
                                                            var_2c_5 = eax_51
                                                            i_17 = i_56
                                                            i_56 -= 1
                                                        while (i_17 != 1)
                                                        return eax_51
                                        else if (esi_1 s> 0)
                                            if (esi_1 u>= 0x10)
                                                i_16 = 0
                                                
                                                if (edi_1 u<= &ecx_5[(esi_1 - 1) << 2])
                                                    i = &edi_1[(esi_1 - 1) << 2]
                                                
                                                if (edi_1 u> &ecx_5[(esi_1 - 1) << 2] || i u< ecx_5)
                                                    int32_t eax_58 = esi_1 & 0x8000000f
                                                    
                                                    if (eax_58 s< 0)
                                                        eax_58 = ((eax_58 - 1) | 0xfffffff0) + 1
                                                    
                                                    int32_t var_28_9 = esi_1 - eax_58
                                                    void* esi_9 = ecx_5 - edi_1
                                                    i = &edi_1[0x10]
                                                    esi_1 = var_14_1
                                                    void* edi_7 = &ecx_5[0x30]
                                                    
                                                    do
                                                        i_16 += 0x10
                                                        *(i - 0x10) =
                                                            _mm_add_ps(*(edi_7 - 0x30), *(i - 0x10))
                                                        ecx_5 = var_1c_1
                                                        *i = _mm_add_ps(*(i + esi_9), *i)
                                                        float xmm1_28[0x4] =
                                                            _mm_add_ps(*(edi_7 - 0x10), *(i + 0x10))
                                                        float xmm0_73[0x4] = *edi_7
                                                        edi_7 += 0x40
                                                        *(i + 0x10) = xmm1_28
                                                        *(i + 0x20) = _mm_add_ps(*(i + 0x20), xmm0_73)
                                                        i += 0x40
                                                    while (i_16 s< var_28_9)
                                                    
                                                    edi_1 = var_20_1
                                            
                                            if (i_16 s< esi_1)
                                                i = esi_1 - i_16
                                                
                                                if (i s>= 4)
                                                    esi_1 = var_14_1
                                                    void* eax_63 = &ecx_5[(i_16 + 3) << 2]
                                                    int32_t ecx_10 = ecx_5 - edi_1
                                                    i = &edi_1[(i_16 + 1) << 2]
                                                    int32_t var_28_10 = ecx_10
                                                    int32_t i_35 = ((esi_1 - i_16 - 4) u>> 2) + 1
                                                    i_16 += (((esi_1 - i_16 - 4) u>> 2) + 1) << 2
                                                    void* edi_13 = eax_63
                                                    int32_t i_18
                                                    
                                                    do
                                                        *(i - 4) = *(edi_13 - 0xc) f+ *(i - 4)
                                                        *i = *(ecx_10 + i) f+ *i
                                                        *(i + 4) = *(edi_13 - 4) f+ *(i + 4)
                                                        float xmm0_80 = *edi_13
                                                        edi_13 += 0x10
                                                        *(i + 8) = xmm0_80 f+ *(i + 8)
                                                        i += 0x10
                                                        i_18 = i_35
                                                        i_35 -= 1
                                                    while (i_18 != 1)
                                                    edi_1 = var_20_1
                                                    ecx_5 = var_1c_1
                                                
                                                if (i_16 s< esi_1)
                                                    float* eax_65 = &edi_1[i_16 << 2]
                                                    int32_t i_57 = esi_1 - i_16
                                                    int32_t i_19
                                                    
                                                    do
                                                        *eax_65 = *(ecx_5 - edi_1 + eax_65) + *eax_65
                                                        eax_65 = &eax_65[1]
                                                        i_19 = i_57
                                                        i_57 -= 1
                                                    while (i_19 != 1)
                                                    return eax_65
                                    else
                                        switch (i_51)
                                            case 0
                                                int32_t i_20 = 0
                                                i = *(i_40 + 0x1c)
                                                
                                                if (*(i + 0x18) == 0)
                                                    i = *(i + 0x20)
                                                    uint32_t i_45 = i
                                                    
                                                    if (esi_1 s> 0)
                                                        if (esi_1 u>= 0x10)
                                                            if (edi_1 u<= &ecx_5[(esi_1 - 1) << 2])
                                                                i = &edi_1[(esi_1 - 1) << 2]
                                                            
                                                            if (edi_1 u> &ecx_5[(esi_1 - 1) << 2]
                                                                    || i u< ecx_5)
                                                                if (edi_1 u<= i_45 + (esi_1 << 2) - 4)
                                                                    i = &edi_1[(esi_1 - 1) << 2]
                                                                
                                                                if (edi_1 u> i_45 + (esi_1 << 2) - 4
                                                                        || i u< i_45)
                                                                    int32_t eax_77 = esi_1 & 0x8000000f
                                                                    
                                                                    if (eax_77 s< 0)
                                                                        eax_77 = ((eax_77 - 1) | 0xfffffff0) + 1
                                                                    
                                                                    i = i_45
                                                                    void* esi_11 = i - ecx_5
                                                                    int128_t* esi_13 = edi_1 - ecx_5
                                                                    void* edi_14 = &edi_1[0x20]
                                                                    void* esi_16 = &ecx_5[0x10]
                                                                    
                                                                    do
                                                                        float xmm1_31[0x4] = *(i + (i_20 << 2))
                                                                        float xmm0_87[0x4] = _mm_add_ps(
                                                                            _mm_mul_ps(
                                                                                _mm_sub_ps(*(esi_16 - 0x10), xmm1_31), 
                                                                                xmm7_1), 
                                                                            xmm1_31)
                                                                        float xmm1_32[0x4] = *(esi_11 + esi_16)
                                                                        *(edi_14 - 0x20) = xmm0_87
                                                                        *(esi_13 + esi_16) = _mm_add_ps(
                                                                            _mm_mul_ps(
                                                                                _mm_sub_ps(*esi_16, xmm1_32), xmm7_1), 
                                                                            xmm1_32)
                                                                        float xmm1_33[0x4] =
                                                                            *(i - edi_1 + edi_14)
                                                                        ecx_5 = var_1c_1
                                                                        float xmm0_95[0x4] = _mm_add_ps(
                                                                            _mm_mul_ps(
                                                                                _mm_sub_ps(*(esi_16 + 0x10), xmm1_33), 
                                                                                xmm7_1), 
                                                                            xmm1_33)
                                                                        float xmm1_34[0x4] =
                                                                            *(i + (i_20 << 2) + 0x30)
                                                                        i_20 += 0x10
                                                                        *edi_14 = xmm0_95
                                                                        float xmm0_96[0x4] = *(esi_16 + 0x20)
                                                                        esi_16 += 0x40
                                                                        *(edi_14 + 0x10) = _mm_add_ps(
                                                                            _mm_mul_ps(
                                                                                _mm_sub_ps(xmm0_96, xmm1_34), xmm7_1), 
                                                                            xmm1_34)
                                                                        edi_14 += 0x40
                                                                    while (i_20 s< esi_1 - eax_77)
                                                                    
                                                                    esi_1 = var_14_1
                                                                    edi_1 = var_20_1
                                                        
                                                        if (i_20 s< esi_1)
                                                            i = esi_1 - i_20
                                                            
                                                            if (i s>= 4)
                                                                i = i_45
                                                                void* esi_18 = i - ecx_5
                                                                void* ecx_16 = i - edi_1
                                                                void* esi_21 = &ecx_5[(i_20 + 1) << 2]
                                                                void* edi_15 = &edi_1[(i_20 + 2) << 2]
                                                                void* ecx_17 = esi_18
                                                                
                                                                do
                                                                    *(edi_15 - 8) = (*(esi_21 - 4) f-
                                                                        *(i + (i_20 << 2))) f* xmm6 f+
                                                                        *(i + (i_20 << 2))
                                                                    *(edi_1 - ecx_5 + esi_21) = (*esi_21 f-
                                                                        *(ecx_17 + esi_21)) f* xmm6 f+
                                                                        *(ecx_17 + esi_21)
                                                                    ecx_17 = esi_18
                                                                    *edi_15 = (*(esi_21 + 4) f-
                                                                        *(ecx_16 + edi_15)) f* xmm6 f+
                                                                        *(ecx_16 + edi_15)
                                                                    float xmm0_112 = *(esi_21 + 8)
                                                                    esi_21 += 0x10
                                                                    float xmm0_115 = (xmm0_112 f-
                                                                        *(i + (i_20 << 2) + 0xc)) f* xmm6 f+
                                                                        *(i + (i_20 << 2) + 0xc)
                                                                    i_20 += 4
                                                                    *(edi_15 + 4) = xmm0_115
                                                                    edi_15 += 0x10
                                                                while (i_20 s< esi_1 - 3)
                                                                
                                                                esi_1 = var_14_1
                                                                edi_1 = var_20_1
                                                                ecx_5 = var_1c_1
                                                            
                                                            if (i_20 s< esi_1)
                                                                void* var_18_2 = i_45 - ecx_5
                                                                float* eax_87 = &ecx_5[i_20 << 2]
                                                                int32_t i_58 = esi_1 - i_20
                                                                int32_t i_21
                                                                
                                                                do
                                                                    *(eax_87 + edi_1 - ecx_5) = (*eax_87 f-
                                                                        *(eax_87 + var_18_2)) f* xmm6 f+
                                                                        *(eax_87 + var_18_2)
                                                                    eax_87 = &eax_87[1]
                                                                    i_21 = i_58
                                                                    i_58 -= 1
                                                                while (i_21 != 1)
                                                                return eax_87
                                                else if (esi_1 s> 0)
                                                    if (esi_1 u>= 0x10)
                                                        i_20 = 0
                                                        
                                                        if (edi_1 u<= &ecx_5[(esi_1 - 1) << 2])
                                                            i = &edi_1[(esi_1 - 1) << 2]
                                                        
                                                        if (edi_1 u> &ecx_5[(esi_1 - 1) << 2]
                                                                || i u< ecx_5)
                                                            int32_t eax_92 = esi_1 & 0x8000000f
                                                            
                                                            if (eax_92 s< 0)
                                                                eax_92 = ((eax_92 - 1) | 0xfffffff0) + 1
                                                            
                                                            int32_t var_28_15 = esi_1 - eax_92
                                                            int32_t esi_23 = ecx_5 - edi_1
                                                            i = &edi_1[0x10]
                                                            esi_1 = var_14_1
                                                            void* edi_17 = &ecx_5[0x30]
                                                            
                                                            do
                                                                float xmm0_120[0x4] = *(edi_17 - 0x30)
                                                                i += 0x40
                                                                edi_17 += 0x40
                                                                i_20 += 0x10
                                                                *(i - 0x50) =
                                                                    _mm_mul_ps(xmm0_120, xmm7_1)
                                                                ecx_5 = var_1c_1
                                                                *(i - 0x40) =
                                                                    _mm_mul_ps(*(esi_23 + i - 0x40), xmm7_1)
                                                                *(i - 0x30) =
                                                                    _mm_mul_ps(*(edi_17 - 0x50), xmm7_1)
                                                                *(i - 0x20) =
                                                                    _mm_mul_ps(xmm7_1, *(edi_17 - 0x40))
                                                            while (i_20 s< var_28_15)
                                                            
                                                            edi_1 = var_20_1
                                                    
                                                    if (i_20 s< esi_1)
                                                        i = esi_1 - i_20
                                                        
                                                        if (i s>= 4)
                                                            void* eax_97 = &ecx_5[(i_20 + 3) << 2]
                                                            int32_t ecx_22 = ecx_5 - edi_1
                                                            i = &edi_1[(i_20 + 1) << 2]
                                                            int32_t var_34_3 = ecx_22
                                                            int32_t i_41 =
                                                                ((var_14_1 - i_20 - 4) u>> 2) + 1
                                                            i_20 +=
                                                                (((var_14_1 - i_20 - 4) u>> 2) + 1) << 2
                                                            void* esi_29 = eax_97
                                                            int32_t i_22
                                                            
                                                            do
                                                                i_22 = i_41
                                                                i_41 -= 1
                                                                i += 0x10
                                                                float xmm0_127 = *(esi_29 - 0xc)
                                                                esi_29 += 0x10
                                                                *(i - 0x14) = xmm0_127 f* xmm6
                                                                *(i - 0x10) =
                                                                    *(i + ecx_22 - 0x10) f* xmm6
                                                                *(i - 0xc) = *(esi_29 - 0x14) f* xmm6
                                                                *(i - 8) = *(esi_29 - 0x10) f* xmm6
                                                            while (i_22 != 1)
                                                            esi_1 = var_14_1
                                                            ecx_5 = var_1c_1
                                                        
                                                        if (i_20 s< esi_1)
                                                            int32_t* eax_99 = &edi_1[i_20 << 2]
                                                            int32_t i_59 = esi_1 - i_20
                                                            int32_t i_23
                                                            
                                                            do
                                                                float xmm0_135 =
                                                                    *(eax_99 + ecx_5 - edi_1)
                                                                eax_99 = &eax_99[1]
                                                                eax_99[-1] = xmm0_135 f* xmm6
                                                                i_23 = i_59
                                                                i_59 -= 1
                                                            while (i_23 != 1)
                                                            return eax_99
                                            case 1, 2
                                                int32_t edx_20 = 0
                                                
                                                if (esi_1 s> 0)
                                                    if (esi_1 u>= 0x10 && (
                                                            edi_1 u> &ecx_5[(esi_1 - 1) << 2]
                                                            || &edi_1[(esi_1 - 1) << 2] u< ecx_5))
                                                        int32_t eax_105 = esi_1 & 0x8000000f
                                                        
                                                        if (eax_105 s< 0)
                                                            eax_105 = ((eax_105 - 1) | 0xfffffff0) + 1
                                                        
                                                        int32_t var_28_17 = esi_1 - eax_105
                                                        int32_t esi_31 = ecx_5 - edi_1
                                                        void* eax_108 = &edi_1[0x10]
                                                        esi_1 = var_14_1
                                                        void* edi_18 = &ecx_5[0x30]
                                                        
                                                        do
                                                            float xmm1_37[0x4] = *(eax_108 - 0x10)
                                                            edx_20 += 0x10
                                                            *(eax_108 - 0x10) = _mm_add_ps(
                                                                _mm_mul_ps(
                                                                    _mm_sub_ps(*(edi_18 - 0x30), xmm1_37), 
                                                                    xmm7_1), 
                                                                xmm1_37)
                                                            float xmm1_38[0x4] = *eax_108
                                                            ecx_5 = var_1c_1
                                                            *eax_108 = _mm_add_ps(
                                                                _mm_mul_ps(
                                                                    _mm_sub_ps(*(eax_108 + esi_31), 
                                                                        xmm1_38), 
                                                                    xmm7_1), 
                                                                xmm1_38)
                                                            float xmm1_39[0x4] = *(eax_108 + 0x10)
                                                            *(eax_108 + 0x10) = _mm_add_ps(
                                                                _mm_mul_ps(
                                                                    _mm_sub_ps(*(edi_18 - 0x10), xmm1_39), 
                                                                    xmm7_1), 
                                                                xmm1_39)
                                                            float xmm1_40[0x4] = *(eax_108 + 0x20)
                                                            float xmm0_149[0x4] = *edi_18
                                                            edi_18 += 0x40
                                                            *(eax_108 + 0x20) = _mm_add_ps(
                                                                _mm_mul_ps(
                                                                    _mm_sub_ps(xmm0_149, xmm1_40), xmm7_1), 
                                                                xmm1_40)
                                                            eax_108 += 0x40
                                                        while (edx_20 s< var_28_17)
                                                        
                                                        edi_1 = var_20_1
                                                    
                                                    if (edx_20 s< esi_1)
                                                        if (esi_1 - edx_20 s>= 4)
                                                            int32_t var_28_19 = ecx_5 - edi_1
                                                            void* ecx_25 = &ecx_5[(edx_20 + 3) << 2]
                                                            void* eax_114 = &edi_1[(edx_20 + 1) << 2]
                                                            int32_t i_36 =
                                                                ((var_14_1 - edx_20 - 4) u>> 2) + 1
                                                            edx_20 += (((var_14_1 - edx_20 - 4) u>> 2)
                                                                + 1) << 2
                                                            edi_1 = var_20_1
                                                            int32_t i_24
                                                            
                                                            do
                                                                *(eax_114 - 4) = (*(ecx_25 - 0xc) f-
                                                                    *(eax_114 - 4)) f* xmm6 f+
                                                                    *(eax_114 - 4)
                                                                *eax_114 = (*(eax_114 + var_28_19) f-
                                                                    *eax_114) f* xmm6 f+ *eax_114
                                                                *(eax_114 + 4) = (*(ecx_25 - 4) f-
                                                                    *(eax_114 + 4)) f* xmm6 f+
                                                                    *(eax_114 + 4)
                                                                float xmm0_165 = *ecx_25
                                                                ecx_25 += 0x10
                                                                *(eax_114 + 8) =
                                                                    (xmm0_165 f- *(eax_114 + 8)) f* xmm6 f+
                                                                    *(eax_114 + 8)
                                                                eax_114 += 0x10
                                                                i_24 = i_36
                                                                i_36 -= 1
                                                            while (i_24 != 1)
                                                            esi_1 = var_14_1
                                                            ecx_5 = var_1c_1
                                                        
                                                        if (edx_20 s< esi_1)
                                                            esi_1 = var_14_1
                                                            void* eax_115 = &edi_1[edx_20 << 2]
                                                            int32_t ecx_26 = ecx_5 - edi_1
                                                            int32_t i_54 = esi_1 - edx_20
                                                            int32_t var_38_7 = ecx_26
                                                            int32_t i_25
                                                            
                                                            do
                                                                *eax_115 = (*(eax_115 + ecx_26) f-
                                                                    *eax_115) f* xmm6 f+ *eax_115
                                                                eax_115 += 4
                                                                i_25 = i_54
                                                                i_54 -= 1
                                                            while (i_25 != 1)
                                                            ecx_5 = var_1c_1
                                                
                                                goto label_56fae3
                                            case 3
                                            label_56fae3:
                                                int32_t i_26 = 0
                                                i = *(i_40 + 0x1c)
                                                
                                                if (*(i + 0x18) == 0)
                                                    i = *(i + 0x20)
                                                    uint32_t i_46 = i
                                                    
                                                    if (esi_1 s> 0)
                                                        if (esi_1 u>= 0x10)
                                                            ecx_5 = var_1c_1
                                                            
                                                            if (edi_1 u> i + (esi_1 << 2) - 4)
                                                            label_56fb2c:
                                                                
                                                                if (edi_1 u<=
                                                                        &ecx_5[0xfffffffc + (esi_1 << 2)])
                                                                    i = &edi_1[(esi_1 - 1) << 2]
                                                                
                                                                if (edi_1 u>
                                                                        &ecx_5[0xfffffffc + (esi_1 << 2)]
                                                                        || i u< ecx_5)
                                                                    int32_t eax_124 = esi_1 & 0x8000000f
                                                                    
                                                                    if (eax_124 s< 0)
                                                                        eax_124 =
                                                                            ((eax_124 - 1) | 0xfffffff0) + 1
                                                                    
                                                                    void* esi_33 = &edi_1[0x10]
                                                                    uint32_t i_74 = i_46
                                                                    void* i_48 = i_74 - ecx_5
                                                                    void* ecx_27 = &ecx_5[0x20]
                                                                    
                                                                    do
                                                                        int128_t* eax_132 =
                                                                            ecx_5 - edi_1 + esi_33
                                                                        float xmm1_44[0x4] = _mm_add_ps(
                                                                            _mm_mul_ps(
                                                                                _mm_sub_ps(*(ecx_27 - 0x20), 
                                                                                    *(i_74 + (i_26 << 2))), 
                                                                                xmm7_1), 
                                                                            *(esi_33 - 0x10))
                                                                        float xmm0_175[0x4] = *(eax_132 + i_48)
                                                                        *(esi_33 - 0x10) = xmm1_44
                                                                        i = i_48
                                                                        i_74 = i_46
                                                                        float xmm1_48[0x4] = _mm_add_ps(
                                                                            _mm_mul_ps(
                                                                                _mm_sub_ps(*eax_132, xmm0_175), 
                                                                                xmm7_1), 
                                                                            *esi_33)
                                                                        float xmm0_177[0x4] = *(i + ecx_27)
                                                                        *esi_33 = xmm1_48
                                                                        float xmm1_52[0x4] = _mm_add_ps(
                                                                            _mm_mul_ps(
                                                                                _mm_sub_ps(*ecx_27, xmm0_177), xmm7_1), 
                                                                            *(esi_33 + 0x10))
                                                                        float xmm0_179[0x4] =
                                                                            *(i_74 + (i_26 << 2) + 0x30)
                                                                        i_26 += 0x10
                                                                        *(esi_33 + 0x10) = xmm1_52
                                                                        float xmm1_53[0x4] = *(ecx_27 + 0x10)
                                                                        ecx_27 += 0x40
                                                                        *(esi_33 + 0x20) = _mm_add_ps(
                                                                            _mm_mul_ps(
                                                                                _mm_sub_ps(xmm1_53, xmm0_179), xmm7_1), 
                                                                            *(esi_33 + 0x20))
                                                                        esi_33 += 0x40
                                                                    while (i_26 s< esi_1 - eax_124)
                                                                    
                                                                    esi_1 = var_14_1
                                                                    edi_1 = var_20_1
                                                                    ecx_5 = var_1c_1
                                                            else
                                                                i = &edi_1[(esi_1 - 1) << 2]
                                                                
                                                                if (i u< i_46)
                                                                    goto label_56fb2c
                                                        
                                                        if (i_26 s< esi_1)
                                                            i = esi_1 - i_26
                                                            
                                                            if (i s>= 4)
                                                                void* esi_35 = &edi_1[(i_26 + 1) << 2]
                                                                void* i_71 = ecx_5 - i_46
                                                                void* edi_26 = i_46 + (i_26 << 2) + 8
                                                                
                                                                do
                                                                    int32_t* eax_140 = i_46 - edi_1 + esi_35
                                                                    *(esi_35 - 4) = (
                                                                        *(ecx_5 + (i_26 << 2)) f- *(edi_26 - 8))
                                                                        f* xmm6 f+ *(esi_35 - 4)
                                                                    i = i_71
                                                                    ecx_5 = var_1c_1
                                                                    *esi_35 = (*(eax_140 + i_71) f-
                                                                        *eax_140) f* xmm6 f+ *esi_35
                                                                    *(esi_35 + 4) =
                                                                        (*(i + edi_26) f- *edi_26) f* xmm6 f+
                                                                        *(esi_35 + 4)
                                                                    float xmm0_193 =
                                                                        *(ecx_5 + (i_26 << 2) + 0xc)
                                                                    i_26 += 4
                                                                    float xmm0_194 =
                                                                        xmm0_193 f- *(edi_26 + 4)
                                                                    edi_26 += 0x10
                                                                    *(esi_35 + 8) =
                                                                        xmm0_194 f* xmm6 f+ *(esi_35 + 8)
                                                                    esi_35 += 0x10
                                                                while (i_26 s< esi_1 - 3)
                                                                
                                                                esi_1 = var_14_1
                                                                edi_1 = var_20_1
                                                            
                                                            if (i_26 s< esi_1)
                                                                void* eax_141 = &edi_1[i_26 << 2]
                                                                int32_t i_60 = esi_1 - i_26
                                                                void* var_2c_10 = eax_141
                                                                int32_t i_27
                                                                
                                                                do
                                                                    float* eax_142 = eax_141 + i_46 - edi_1
                                                                    *var_2c_10 = (*(ecx_5 - i_46 + eax_142)
                                                                        - *eax_142) f* xmm6 f+ *var_2c_10
                                                                    eax_141 = var_2c_10 + 4
                                                                    var_2c_10 = eax_141
                                                                    i_27 = i_60
                                                                    i_60 -= 1
                                                                while (i_27 != 1)
                                                                return eax_141
                                                else if (esi_1 s> 0)
                                                    if (esi_1 u>= 0x10)
                                                        i_26 = 0
                                                        
                                                        if (edi_1 u<= &ecx_5[(esi_1 - 1) << 2])
                                                            i = &edi_1[(esi_1 - 1) << 2]
                                                        
                                                        if (edi_1 u> &ecx_5[(esi_1 - 1) << 2]
                                                                || i u< ecx_5)
                                                            int32_t eax_148 = esi_1 & 0x8000000f
                                                            
                                                            if (eax_148 s< 0)
                                                                eax_148 =
                                                                    ((eax_148 - 1) | 0xfffffff0) + 1
                                                            
                                                            int32_t var_28_27 = esi_1 - eax_148
                                                            int32_t esi_37 = ecx_5 - edi_1
                                                            i = &edi_1[0x10]
                                                            esi_1 = var_14_1
                                                            void* edi_27 = &ecx_5[0x30]
                                                            
                                                            do
                                                                i_26 += 0x10
                                                                *(i - 0x10) = _mm_add_ps(
                                                                    _mm_mul_ps(*(edi_27 - 0x30), xmm7_1), 
                                                                    *(i - 0x10))
                                                                ecx_5 = var_1c_1
                                                                *i = _mm_add_ps(
                                                                    _mm_mul_ps(*(i + esi_37), xmm7_1), *i)
                                                                float xmm1_65[0x4] = _mm_add_ps(
                                                                    _mm_mul_ps(*(edi_27 - 0x10), xmm7_1), 
                                                                    *(i + 0x10))
                                                                float xmm0_204[0x4] = *edi_27
                                                                edi_27 += 0x40
                                                                *(i + 0x10) = xmm1_65
                                                                *(i + 0x20) = _mm_add_ps(
                                                                    _mm_mul_ps(xmm7_1, xmm0_204), 
                                                                    *(i + 0x20))
                                                                i += 0x40
                                                            while (i_26 s< var_28_27)
                                                            
                                                            edi_1 = var_20_1
                                                    
                                                    if (i_26 s< esi_1)
                                                        i = esi_1 - i_26
                                                        
                                                        if (i s>= 4)
                                                            esi_1 = var_14_1
                                                            void* eax_153 = &ecx_5[(i_26 + 3) << 2]
                                                            int32_t ecx_31 = ecx_5 - edi_1
                                                            i = &edi_1[(i_26 + 1) << 2]
                                                            int32_t var_34_6 = ecx_31
                                                            int32_t i_37 =
                                                                ((esi_1 - i_26 - 4) u>> 2) + 1
                                                            i_26 +=
                                                                (((esi_1 - i_26 - 4) u>> 2) + 1) << 2
                                                            void* edi_33 = eax_153
                                                            int32_t i_28
                                                            
                                                            do
                                                                *(i - 4) =
                                                                    *(edi_33 - 0xc) f* xmm6 f+ *(i - 4)
                                                                *i = *(ecx_31 + i) f* xmm6 f+ *i
                                                                *(i + 4) =
                                                                    *(edi_33 - 4) f* xmm6 f+ *(i + 4)
                                                                float xmm0_215 = *edi_33
                                                                edi_33 += 0x10
                                                                *(i + 8) = xmm0_215 f* xmm6 f+ *(i + 8)
                                                                i += 0x10
                                                                i_28 = i_37
                                                                i_37 -= 1
                                                            while (i_28 != 1)
                                                            edi_1 = var_20_1
                                                            ecx_5 = var_1c_1
                                                        
                                                        if (i_26 s< esi_1)
                                                            int32_t* eax_155 = &edi_1[i_26 << 2]
                                                            int32_t i_61 = esi_1 - i_26
                                                            int32_t i_29
                                                            
                                                            do
                                                                *eax_155 =
                                                                    *(eax_155 + ecx_5 - edi_1) f* xmm6 f+
                                                                    *eax_155
                                                                eax_155 = &eax_155[1]
                                                                i_29 = i_61
                                                                i_61 -= 1
                                                            while (i_29 != 1)
                                                            return eax_155
                            else
                                if (i_51 == 0)
                                    *(i_72 + 0x24) = 0
                                    return i
                                
                                if (i_51 == 1)
                                    xmm6 f- 1f
                                    i:1.b = (xmm6 f== 1f ? 1 : 0) << 6
                                        | (is_unordered.d(xmm6, 1f) ? 1 : 0) << 2
                                        | (xmm6 f< 1f ? 1 : 0)
                                    bool p_2 = unimplemented  {test ah, 0x44}
                                    
                                    if (not(p_2))
                                        *(i_72 + 0x24) = 0
                                        return i
                                    
                                    i = *(i_72 + 0x1c)
                                    *(i_72 + 0x24) = esi_1
                                    int32_t i_30 = 0
                                    
                                    if (*(i + 0x18) != 0)
                                        float xmm2_1[0x4] = 1f f- xmm6
                                        float xmm2_2[0x4] = _mm_shuffle_ps(xmm2_1, xmm2_1, 0)
                                        float xmm3_3[0x4] = _mm_shuffle_ps(xmm2_2, xmm2_2, 0)
                                        
                                        if (esi_1 s> 0)
                                            if (esi_1 u>= 0x10)
                                                i_30 = 0
                                                int32_t eax_21 = esi_1 & 0x8000000f
                                                
                                                if (eax_21 s< 0)
                                                    eax_21 = ((eax_21 - 1) | 0xfffffff0) + 1
                                                
                                                i = &edi_1[0x20]
                                                
                                                do
                                                    float xmm0_38[0x4] = *(i - 0x20)
                                                    i += 0x40
                                                    i_30 += 0x10
                                                    *(i - 0x60) = _mm_mul_ps(xmm3_3, xmm0_38)
                                                    *(i - 0x50) = _mm_mul_ps(*(i - 0x50), xmm3_3)
                                                    *(i - 0x40) = _mm_mul_ps(xmm3_3, *(i - 0x40))
                                                    *(i - 0x30) = _mm_mul_ps(xmm3_3, *(i - 0x30))
                                                while (i_30 s< esi_1 - eax_21)
                                            
                                            if (i_30 s< esi_1)
                                                i = esi_1 - i_30
                                                
                                                if (i s>= 4)
                                                    i = &edi_1[(i_30 + 2) << 2]
                                                    int32_t i_53 = ((esi_1 - i_30 - 4) u>> 2) + 1
                                                    i_30 += i_53 << 2
                                                    int32_t i_31
                                                    
                                                    do
                                                        i += 0x10
                                                        *(i - 0x18) = _mm_mul_ps(*(i - 0x18), xmm2_2)
                                                        i_31 = i_53
                                                        i_53 -= 1
                                                    while (i_31 != 1)
                                                
                                                if (i_30 s< esi_1)
                                                    do
                                                        *(edi_1 + (i_30 << 2)) =
                                                            *(edi_1 + (i_30 << 2)) f* xmm2_2
                                                        i_30 += 1
                                                    while (i_30 s< esi_1)
                                    else
                                        void* edx_4 = *(i + 0x20)
                                        void* var_24 = edx_4
                                        
                                        if (esi_1 s> 0)
                                            if (esi_1 u>= 0x10)
                                                if (edi_1 u<= edx_4 + ((esi_1 - 1) << 2))
                                                    i = &edi_1[(esi_1 - 1) << 2]
                                                
                                                if (edi_1 u> edx_4 + ((esi_1 - 1) << 2) || i u< edx_4)
                                                    int32_t eax_12 = esi_1 & 0x8000000f
                                                    
                                                    if (eax_12 s< 0)
                                                        eax_12 = ((eax_12 - 1) | 0xfffffff0) + 1
                                                    
                                                    void* edx_5 = edx_4 + 0x30
                                                    int32_t var_28_3 = esi_1 - eax_12
                                                    i = &edi_1[0x10]
                                                    esi_1 = var_14_1
                                                    
                                                    do
                                                        float xmm1_1[0x4] = *(i - 0x10)
                                                        i_30 += 0x10
                                                        *(i - 0x10) = _mm_add_ps(
                                                            _mm_mul_ps(
                                                                _mm_sub_ps(*(edx_5 - 0x30), xmm1_1), 
                                                                xmm7_1), 
                                                            xmm1_1)
                                                        float xmm1_2[0x4] = *i
                                                        *i = _mm_add_ps(
                                                            _mm_mul_ps(
                                                                _mm_sub_ps(*(var_24 - edi_1 + i), 
                                                                    xmm1_2), 
                                                                xmm7_1), 
                                                            xmm1_2)
                                                        float xmm1_3[0x4] = *(i + 0x10)
                                                        *(i + 0x10) = _mm_add_ps(
                                                            _mm_mul_ps(
                                                                _mm_sub_ps(*(edx_5 - 0x10), xmm1_3), 
                                                                xmm7_1), 
                                                            xmm1_3)
                                                        float xmm1_4[0x4] = *(i + 0x20)
                                                        float xmm0_14[0x4] = *edx_5
                                                        edx_5 += 0x40
                                                        *(i + 0x20) = _mm_add_ps(
                                                            _mm_mul_ps(_mm_sub_ps(xmm0_14, xmm1_4), 
                                                                xmm7_1), 
                                                            xmm1_4)
                                                        i += 0x40
                                                    while (i_30 s< var_28_3)
                                                    
                                                    edi_1 = var_20_1
                                                    edx_4 = var_24
                                            
                                            if (i_30 s< esi_1)
                                                i = esi_1 - i_30
                                                
                                                if (i s>= 4)
                                                    int32_t i_52 = ((esi_1 - i_30 - 4) u>> 2) + 1
                                                    i = &edi_1[(i_30 + 1) << 2]
                                                    void* edi_3 = edx_4 + ((i_30 + 3) << 2)
                                                    i_30 += i_52 << 2
                                                    int32_t i_32
                                                    
                                                    do
                                                        *(i - 4) =
                                                            (*(edi_3 - 0xc) f- *(i - 4)) f* xmm6 f+
                                                            *(i - 4)
                                                        *i = (*(i + edx_4 - edi_1) f- *i) f* xmm6 f+ *i
                                                        *(i + 4) =
                                                            (*(edi_3 - 4) f- *(i + 4)) f* xmm6 f+
                                                            *(i + 4)
                                                        float xmm0_30 = *edi_3
                                                        edi_3 += 0x10
                                                        *(i + 8) =
                                                            (xmm0_30 f- *(i + 8)) f* xmm6 f+ *(i + 8)
                                                        i += 0x10
                                                        i_32 = i_52
                                                        i_52 -= 1
                                                    while (i_32 != 1)
                                                    esi_1 = var_14_1
                                                    edi_1 = var_20_1
                                                
                                                if (i_30 s< esi_1)
                                                    int32_t* eax_19 = &edi_1[i_30 << 2]
                                                    int32_t i_55 = esi_1 - i_30
                                                    int32_t i_33
                                                    
                                                    do
                                                        *eax_19 = (*(eax_19 + var_24 - edi_1) f-
                                                            *eax_19) f* xmm6 f+ *eax_19
                                                        eax_19 = &eax_19[1]
                                                        i_33 = i_55
                                                        i_55 -= 1
                                                    while (i_33 != 1)
                                                    return eax_19
    
    return i
}
