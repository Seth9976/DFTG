// 函数名称: sub_528160
// 虚拟地址: 0x528160
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int128_t* __convention("regparm")sub_528160(int32_t arg1, char* arg2, float* arg3, int32_t* arg4, void* arg5)
{
    // 第一条实际指令: int32_t eax = data_1151ae0
    int32_t eax = data_1151ae0
    int32_t* var_c
    int32_t* edi
    
    if (eax == 0)
        int32_t var_80_1 = 0xc
        int32_t* eax_2 = _malloc()
        var_c = eax_2
        edi = eax_2
    else
        edi =
            eax(0xc, "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\skeletonbinary.c", 0xf9)
        var_c = edi
    
    if (edi != 0)
        edi[2] = 0
    
    int32_t eax_3 = data_1151ae0
    *edi = 0
    edi[1] = 0x12
    uint32_t (* eax_4)[0x4]
    uint32_t ecx
    
    if (eax_3 == 0)
        int32_t var_80_2 = 0x48
        eax_4, ecx = _malloc()
    else
        eax_4, ecx = eax_3(0x48, 
            "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\skeletonbinary.c", 0xf9)
    
    if (eax_4 != 0)
        _memset(eax_4, 0, 0x48)
    
    edi[2] = eax_4
    int32_t* edi_1 = arg4
    int32_t esi_1 = 0
    int32_t var_44 = 0
    int32_t var_10 = 0
    int32_t var_40 = 0
    char* eax_5 = *edi_1
    ecx.b = *eax_5
    void* edx = &eax_5[1]
    int32_t ebx_1 = zx.d(ecx.b) & 0x7f
    *edi_1 = edx
    int32_t var_28 = ebx_1
    
    if (ecx.b s< 0)
        ecx.b = *edx
        edx += 1
        *edi_1 = edx
        ebx_1 |= (zx.d(ecx.b) & 0x7f) << 7
        var_28 = ebx_1
        
        if (ecx.b s< 0)
            ecx.b = *edx
            edx += 1
            *edi_1 = edx
            ebx_1 |= (zx.d(ecx.b) & 0x7f) << 0xe
            var_28 = ebx_1
            
            if (ecx.b s< 0)
                ecx.b = *edx
                edx += 1
                *edi_1 = edx
                ebx_1 |= (zx.d(ecx.b) & 0x7f) << 0x15
                var_28 = ebx_1
                
                if (ecx.b s< 0)
                    eax_5.b = *edx
                    edx += 1
                    ebx_1 |= zx.d(eax_5.b) << 0x1c
                    *edi_1 = edx
                    var_28 = ebx_1
    
    if (ebx_1 s> 0)
        do
            eax_5 = *edi_1
            ecx.b = *eax_5
            void* edx_1 = &eax_5[1]
            int32_t ebx_3 = zx.d(ecx.b) & 0x7f
            *edi_1 = edx_1
            int32_t var_18_1 = ebx_3
            
            if (ecx.b s< 0)
                ecx.b = *edx_1
                edx_1 += 1
                *edi_1 = edx_1
                int32_t ebx_4 = ebx_3 | (zx.d(ecx.b) & 0x7f) << 7
                var_18_1 = ebx_4
                
                if (ecx.b s< 0)
                    ecx.b = *edx_1
                    edx_1 += 1
                    *edi_1 = edx_1
                    int32_t ebx_5 = ebx_4 | (zx.d(ecx.b) & 0x7f) << 0xe
                    var_18_1 = ebx_5
                    
                    if (ecx.b s< 0)
                        ecx.b = *edx_1
                        edx_1 += 1
                        *edi_1 = edx_1
                        int32_t ebx_6 = ebx_5 | (zx.d(ecx.b) & 0x7f) << 0x15
                        var_18_1 = ebx_6
                        
                        if (ecx.b s< 0)
                            eax_5.b = *edx_1
                            edx_1 += 1
                            *edi_1 = edx_1
                            var_18_1 = ebx_6 | zx.d(eax_5.b) << 0x1c
            
            eax_5.b = *edx_1
            int32_t ebx_9 = zx.d(eax_5.b) & 0x7f
            int32_t var_2c_1 = 0
            *edi_1 = edx_1 + 1
            int32_t var_20_1 = ebx_9
            
            if (eax_5.b s< 0)
                ecx.b = *(edx_1 + 1)
                *edi_1 = edx_1 + 2
                ebx_9 |= (zx.d(ecx.b) & 0x7f) << 7
                var_20_1 = ebx_9
                
                if (ecx.b s< 0)
                    ecx.b = *(edx_1 + 2)
                    *edi_1 = edx_1 + 3
                    ebx_9 |= (zx.d(ecx.b) & 0x7f) << 0xe
                    var_20_1 = ebx_9
                    
                    if (ecx.b s< 0)
                        ecx.b = *(edx_1 + 3)
                        *edi_1 = edx_1 + 4
                        ebx_9 |= (zx.d(ecx.b) & 0x7f) << 0x15
                        var_20_1 = ebx_9
                        
                        if (ecx.b s< 0)
                            ecx.b = *(edx_1 + 4)
                            *edi_1 = edx_1 + 5
                            ebx_9 |= zx.d(ecx.b) << 0x1c
                            var_20_1 = ebx_9
            
            if (ebx_9 s> 0)
                int32_t esi_8
                
                do
                    char* eax_28 = *edi_1
                    ecx:1.b = *eax_28
                    *edi_1 = &eax_28[1]
                    ecx.b = eax_28[1]
                    int32_t* i_1 = zx.d(ecx.b) & 0x7f
                    *edi_1 = &eax_28[2]
                    int32_t* i_18 = i_1
                    
                    if (ecx.b s< 0)
                        ecx.b = eax_28[2]
                        *edi_1 = &eax_28[3]
                        i_1 |= (zx.d(ecx.b) & 0x7f) << 7
                        i_18 = i_1
                        
                        if (ecx.b s< 0)
                            ecx.b = eax_28[3]
                            *edi_1 = &eax_28[4]
                            i_1 |= (zx.d(ecx.b) & 0x7f) << 0xe
                            i_18 = i_1
                            
                            if (ecx.b s< 0)
                                ecx.b = eax_28[4]
                                *edi_1 = &eax_28[5]
                                i_1 |= (zx.d(ecx.b) & 0x7f) << 0x15
                                i_18 = i_1
                                
                                if (ecx.b s< 0)
                                    ecx.b = eax_28[5]
                                    *edi_1 = &eax_28[6]
                                    i_1 |= zx.d(ecx.b) << 0x1c
                                    i_18 = i_1
                    
                    uint32_t eax_42 = zx.d(ecx:1.b)
                    int32_t xmm0_26
                    
                    if (eax_42 == 0)
                        int32_t eax_121 = data_1151ae0
                        int32_t* i_13
                        int32_t* i_23
                        
                        if (eax_121 == 0)
                            int32_t var_80_13 = 0x18
                            int32_t* i_21 = _malloc()
                            i_13 = i_21
                            i_23 = i_21
                        else
                            i_23 = eax_121(0x18, 
                                "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\spanimation.c", 
                                0x36e)
                            i_13 = i_23
                        
                        if (i_23 != 0)
                            __builtin_memset(i_23, 0, 0x18)
                        
                        int32_t eax_123 = data_1151ae0
                        *i_23 = 4
                        int32_t* eax_124
                        
                        if (eax_123 == 0)
                            int32_t var_80_14 = 0xc
                            eax_124 = _malloc()
                        else
                            eax_124 = eax_123(0xc, 
                                "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\spanimation.c", 
                                0x52)
                        
                        if (eax_124 != 0)
                            *eax_124 = 0
                            eax_124[1] = 0
                        
                        int32_t ecx_24 = data_1151ae0
                        i_23[1] = eax_124
                        eax_124[2] = sub_56edd0
                        *i_23[1] = sub_56ecc0
                        *(i_23[1] + 4) = sub_56edc0
                        uint32_t eax_127 = i_1 << 2
                        i_23[2] = i_1
                        uint32_t (* eax_128)[0x4]
                        
                        if (ecx_24 == 0)
                            uint32_t var_80_15 = eax_127
                            eax_128 = _malloc()
                        else
                            eax_128 = ecx_24(eax_127, 
                                "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\spanimation.c", 
                                0x372)
                        
                        if (eax_128 != 0)
                            _memset(eax_128, 0, i_1 << 2)
                        
                        int32_t ecx_26 = data_1151ae0
                        i_23[3] = eax_128
                        int32_t eax_129 = i_1 << 2
                        uint32_t (* eax_130)[0x4]
                        void* ecx_27
                        
                        if (ecx_26 == 0)
                            int32_t var_80_17 = eax_129
                            eax_130, ecx_27 = _malloc()
                        else
                            eax_130, ecx_27 = ecx_26(eax_129, 
                                "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\spanimation.c", 
                                0x373)
                        
                        if (eax_130 != 0)
                            _memset(eax_130, 0, i_1 << 2)
                        
                        i_23[5] = eax_130
                        i_23[4] = var_18_1
                        int32_t var_24_1 = 0
                        
                        if (i_1 s<= 0)
                            i_1 = i_13
                        else
                            int32_t eax_147
                            
                            do
                                char* eax_132 = *edi_1
                                ecx_27.b = *eax_132
                                *edi_1 = &eax_132[1]
                                int32_t edx_17
                                edx_17:1.b = eax_132[1]
                                *edi_1 = &eax_132[2]
                                edx_17.b = eax_132[2]
                                *edi_1 = &eax_132[3]
                                i_1.b = eax_132[3]
                                *edi_1 = &eax_132[4]
                                uint32_t ecx_35 = ((zx.d(ecx_27.b) << 8 | zx.d(edx_17:1.b)) << 8
                                    | zx.d(edx_17.b)) << 8 | zx.d(i_1.b)
                                i_1 = i_13
                                char* esi_6 = sub_527e70(edi_1, arg5)
                                *(i_1[3] + (var_24_1 << 2)) = ecx_35
                                _free(*(i_1[5] + (var_24_1 << 2)))
                                
                                if (esi_6 == 0)
                                    *(i_1[5] + (var_24_1 << 2)) = 0
                                else
                                    char* ecx_39 = esi_6
                                    void* edx_19 = &ecx_39[1]
                                    char i
                                    
                                    do
                                        i = *ecx_39
                                        ecx_39 = &ecx_39[1]
                                    while (i != 0)
                                    int32_t eax_142 = data_1151ae0
                                    int32_t eax_143
                                    
                                    if (eax_142 == 0)
                                        void* var_80_20 = ecx_39 - edx_19 + 1
                                        eax_143 = _malloc()
                                    else
                                        eax_143 = eax_142(ecx_39 - edx_19 + 1, 
                                            "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\s"
                                        "panimation.c", 
                                            0x37d)
                                    
                                    *(i_1[5] + (var_24_1 << 2)) = eax_143
                                    ecx_27 = eax_143 - esi_6
                                    int32_t eax_144
                                    
                                    do
                                        eax_144.b = *esi_6
                                        esi_6 = &esi_6[1]
                                        *(esi_6 + ecx_27 - 1) = eax_144.b
                                    while (eax_144.b != 0)
                                
                                eax_147 = var_24_1 + 1
                                var_24_1 = eax_147
                            while (eax_147 s< i_18)
                        
                        int32_t* edx_20 = var_c
                        int32_t ecx_43 = *edx_20
                        
                        if (ecx_43 == edx_20[1])
                            int32_t eax_148 = int.d(_mm_cvtepi32_ps(zx.o(ecx_43)) * 1.75f)
                            
                            if (eax_148 s< 8)
                                eax_148 = 8
                            
                            edx_20[1] = eax_148
                            int32_t var_80_21 = eax_148 << 2
                            int32_t var_84_3 = edx_20[2]
                            int32_t eax_150 = sub_57fb2f()
                            edx_20 = var_c
                            ecx_43 = *edx_20
                            edx_20[2] = eax_150
                        
                        *(edx_20[2] + (ecx_43 << 2)) = i_1
                        *edx_20 += 1
                        xmm0_26 = *(eax_127 + i_1[3] - 4)
                    else if (eax_42 == 1)
                        int32_t eax_88 = data_1151ae0
                        int32_t* var_30_2
                        int32_t* eax_89
                        int32_t* esi_4
                        
                        if (eax_88 == 0)
                            int32_t var_80_8 = 0x18
                            eax_89 = _malloc()
                            var_30_2 = eax_89
                            esi_4 = eax_89
                        else
                            eax_89 = eax_88(0x18, 
                                "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\spanimation.c", 
                                0xeb)
                            esi_4 = eax_89
                            var_30_2 = esi_4
                        
                        if (esi_4 != 0)
                            __builtin_memset(esi_4, 0, 0x18)
                        
                        sub_56d900(eax_89, 5, esi_4, i_1, sub_56db00, sub_56e640, sub_56e8c0)
                        int32_t ecx_14 = data_1151ae0
                        void* eax_90 = i_1 * 5
                        esi_4[3] = eax_90
                        int32_t eax_91 = eax_90 << 2
                        uint32_t (* eax_92)[0x4]
                        uint32_t ecx_15
                        void* edx_13
                        
                        if (ecx_14 == 0)
                            int32_t var_80_9 = eax_91
                            eax_92, ecx_15, edx_13 = _malloc()
                        else
                            eax_92, edx_13, ecx_15 = ecx_14(eax_91, 
                                "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\spanimation.c", 
                                0xef)
                        
                        if (eax_92 != 0)
                            ecx_15, edx_13 = _memset(eax_92, 0, eax_91)
                        
                        esi_4[4] = eax_92
                        esi_4[5] = var_18_1
                        int32_t var_38_2 = 0
                        
                        if (i_1 s> 0)
                            void* eax_94 = i_1 - 1
                            uint32_t* var_34_2 = nullptr
                            int32_t eax_115
                            
                            do
                                char* eax_95 = *edi_1
                                ecx_15.b = *eax_95
                                *edi_1 = &eax_95[1]
                                edx_13:1.b = eax_95[1]
                                *edi_1 = &eax_95[2]
                                edx_13.b = eax_95[2]
                                *edi_1 = &eax_95[3]
                                i_1.b = eax_95[3]
                                *edi_1 = &eax_95[4]
                                uint32_t var_58_4 = ((zx.d(ecx_15.b) << 8 | zx.d(edx_13:1.b)) << 8
                                    | zx.d(edx_13.b)) << 8 | zx.d(i_1.b)
                                ecx_15.b = eax_95[4]
                                *edi_1 = &eax_95[5]
                                edx_13.b = eax_95[5]
                                esi_4 = var_30_2
                                *edi_1 = &eax_95[6]
                                i_1.b = eax_95[6]
                                *edi_1 = &eax_95[7]
                                ecx_15:1.b = eax_95[7]
                                *edi_1 = &eax_95[8]
                                *(var_34_2 + esi_4[4]) = var_58_4
                                *(var_34_2 + esi_4[4] + 4) = _mm_cvtepi32_ps(zx.o(ecx_15.b)) / 255f
                                uint32_t* edx_14 = var_34_2
                                edi_1 = arg4
                                *(edx_14 + esi_4[4] + 8) = _mm_cvtepi32_ps(zx.o(edx_13.b)) / 255f
                                *(edx_14 + esi_4[4] + 0xc) = _mm_cvtepi32_ps(zx.o(i_1.b)) / 255f
                                *(edx_14 + esi_4[4] + 0x10) = _mm_cvtepi32_ps(zx.o(ecx_15:1.b)) / 255f
                                eax_115 = var_38_2
                                
                                if (eax_115 s< eax_94)
                                    sub_527f00(eax_115, esi_4, edi_1, eax_115)
                                    eax_115 = var_38_2
                                    edx_14 = var_34_2
                                
                                i_1 = i_18
                                var_38_2 = eax_115 + 1
                                var_34_2 = &edx_14[5]
                            while (eax_115 + 1 s< i_1)
                        
                        int32_t* edx_16 = var_c
                        int32_t ecx_23 = *edx_16
                        
                        if (ecx_23 == edx_16[1])
                            int32_t eax_117 = int.d(_mm_cvtepi32_ps(zx.o(ecx_23)) * 1.75f)
                            
                            if (eax_117 s< 8)
                                eax_117 = 8
                            
                            edx_16[1] = eax_117
                            int32_t var_80_12 = eax_117 << 2
                            int32_t var_84_2 = edx_16[2]
                            int32_t eax_119 = sub_57fb2f()
                            edx_16 = var_c
                            ecx_23 = *edx_16
                            edx_16[2] = eax_119
                        
                        *(edx_16[2] + (ecx_23 << 2)) = esi_4
                        *edx_16 += 1
                        xmm0_26 = *(esi_4[4] + i_1 * 0x14 - 0x14)
                    else
                        if (eax_42 != 2)
                            int32_t i_2 = 0
                            
                            if (*var_c s> 0)
                                do
                                    void* eax_191 = *(var_c[2] + (i_2 << 2))
                                    (*(*(eax_191 + 4) + 8))(eax_191)
                                    i_2 += 1
                                while (i_2 s< *var_c)
                            
                            _free(var_c[2])
                            _free(var_c)
                            void* eax_195 = *(*(arg5 + 0x2c) + (var_18_1 << 2))
                            sub_527c10(eax_195, "Invalid timeline type for a slot: ", arg3, 
                                *(eax_195 + 4))
                            return 0
                        
                        int32_t eax_46 = data_1151ae0
                        int32_t* var_30_1
                        int32_t* eax_47
                        int32_t* esi_2
                        
                        if (eax_46 == 0)
                            int32_t var_80_3 = 0x18
                            eax_47 = _malloc()
                            var_30_1 = eax_47
                            esi_2 = eax_47
                        else
                            eax_47 = eax_46(0x18, 
                                "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\spanimation.c", 
                                0xeb)
                            esi_2 = eax_47
                            var_30_1 = esi_2
                        
                        if (esi_2 != 0)
                            __builtin_memset(esi_2, 0, 0x18)
                        
                        sub_56d900(eax_47, 0xe, esi_2, i_1, sub_56db00, sub_56e8d0, sub_56ecb0)
                        int32_t ecx_2 = data_1151ae0
                        int32_t eax_48 = i_1 << 3
                        esi_2[3] = eax_48
                        int32_t eax_49 = eax_48 << 2
                        uint32_t (* eax_50)[0x4]
                        void* ecx_3
                        int16_t edx_10
                        
                        if (ecx_2 == 0)
                            int32_t var_80_4 = eax_49
                            eax_50, ecx_3, edx_10 = _malloc()
                        else
                            eax_50, edx_10, ecx_3 = ecx_2(eax_49, 
                                "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\spanimation.c", 
                                0xef)
                        
                        if (eax_50 != 0)
                            ecx_3, edx_10 = _memset(eax_50, 0, eax_49)
                        
                        esi_2[4] = eax_50
                        esi_2[5] = var_18_1
                        int32_t var_38_1 = 0
                        
                        if (i_1 s> 0)
                            void* eax_52 = i_1 - 1
                            uint32_t* var_34_1 = nullptr
                            int32_t eax_82
                            
                            do
                                char* eax_53 = *edi_1
                                ecx_3.b = *eax_53
                                *edi_1 = &eax_53[1]
                                edx_10:1.b = eax_53[1]
                                *edi_1 = &eax_53[2]
                                edx_10.b = eax_53[2]
                                *edi_1 = &eax_53[3]
                                i_1.b = eax_53[3]
                                *edi_1 = &eax_53[4]
                                uint32_t var_58_2 =
                                    ((zx.d(ecx_3.b) << 8 | zx.d(edx_10:1.b)) << 8 | zx.d(edx_10.b)) << 8
                                    | zx.d(i_1.b)
                                uint32_t ecx_10
                                ecx_10.b = eax_53[4]
                                *edi_1 = &eax_53[5]
                                edx_10.b = eax_53[5]
                                *edi_1 = &eax_53[6]
                                esi_2 = var_30_1
                                i_1.b = eax_53[6]
                                *edi_1 = &eax_53[7]
                                ecx_10:1.b = eax_53[7]
                                *edi_1 = &eax_53[9]
                                edx_10:1.b = eax_53[9]
                                *edi_1 = &eax_53[0xa]
                                i_1:1.b = eax_53[0xa]
                                *edi_1 = &eax_53[0xb]
                                char var_5_1 = i_1:1.b
                                i_1:1.b = eax_53[0xb]
                                *edi_1 = &eax_53[0xc]
                                char var_6_1 = i_1:1.b
                                *(var_34_1 + esi_2[4]) = var_58_2
                                *(var_34_1 + esi_2[4] + 4) = _mm_cvtepi32_ps(zx.o(ecx_10.b)) / 255f
                                *(var_34_1 + esi_2[4] + 8) = _mm_cvtepi32_ps(zx.o(edx_10.b)) / 255f
                                *(var_34_1 + esi_2[4] + 0xc) = _mm_cvtepi32_ps(zx.o(i_1.b)) / 255f
                                uint32_t* ecx_11 = var_34_1
                                *(ecx_11 + esi_2[4] + 0x10) = _mm_cvtepi32_ps(zx.o(ecx_10:1.b)) / 255f
                                edi_1 = arg4
                                *(ecx_11 + esi_2[4] + 0x14) = _mm_cvtepi32_ps(zx.o(edx_10:1.b)) / 255f
                                *(ecx_11 + esi_2[4] + 0x18) = _mm_cvtepi32_ps(zx.o(var_5_1)) / 255f
                                *(ecx_11 + esi_2[4] + 0x1c) = _mm_cvtepi32_ps(zx.o(i_1:1.b)) / 255f
                                eax_82 = var_38_1
                                
                                if (eax_82 s< eax_52)
                                    sub_527f00(eax_82, esi_2, edi_1, eax_82)
                                    eax_82 = var_38_1
                                    ecx_11 = var_34_1
                                
                                i_1 = i_18
                                var_38_1 = eax_82 + 1
                                var_34_1 = &ecx_11[8]
                            while (eax_82 + 1 s< i_1)
                        
                        int32_t* edx_12 = var_c
                        ecx = *edx_12
                        
                        if (ecx == edx_12[1])
                            int32_t eax_84 = int.d(_mm_cvtepi32_ps(zx.o(ecx)) * 1.75f)
                            
                            if (eax_84 s< 8)
                                eax_84 = 8
                            
                            edx_12[1] = eax_84
                            int32_t var_80_7 = eax_84 << 2
                            int32_t var_84_1 = edx_12[2]
                            int32_t eax_86 = sub_57fb2f()
                            edx_12 = var_c
                            ecx = *edx_12
                            edx_12[2] = eax_86
                        
                        *(edx_12[2] + (ecx << 2)) = esi_2
                        *edx_12 += 1
                        xmm0_26 = *((i_1 << 5) + esi_2[4] - 0x20)
                    
                    if (not(var_10 f> xmm0_26))
                        var_10 = xmm0_26
                    
                    esi_8 = var_2c_1 + 1
                    var_2c_1 = esi_8
                while (esi_8 s< var_20_1)
                esi_1 = var_40
            
            esi_1 += 1
            var_40 = esi_1
        while (esi_1 s< var_28)
        
        edx = *edi_1
    
    eax_5.b = *edx
    int32_t esi_9 = 0
    void* edx_21 = edx + 1
    int32_t ebx_13 = zx.d(eax_5.b) & 0x7f
    int32_t var_30_3 = 0
    *edi_1 = edx_21
    int32_t var_24_2 = ebx_13
    
    if (eax_5.b s< 0)
        ecx.b = *edx_21
        edx_21 += 1
        *edi_1 = edx_21
        ebx_13 |= (zx.d(ecx.b) & 0x7f) << 7
        var_24_2 = ebx_13
        
        if (ecx.b s< 0)
            ecx.b = *edx_21
            edx_21 += 1
            *edi_1 = edx_21
            ebx_13 |= (zx.d(ecx.b) & 0x7f) << 0xe
            var_24_2 = ebx_13
            
            if (ecx.b s< 0)
                ecx.b = *edx_21
                edx_21 += 1
                *edi_1 = edx_21
                ebx_13 |= (zx.d(ecx.b) & 0x7f) << 0x15
                var_24_2 = ebx_13
                
                if (ecx.b s< 0)
                    eax_5.b = *edx_21
                    edx_21 += 1
                    ebx_13 |= zx.d(eax_5.b) << 0x1c
                    *edi_1 = edx_21
                    var_24_2 = ebx_13
    
    if (ebx_13 s> 0)
        do
            eax_5 = *edi_1
            ecx.b = *eax_5
            void* edx_22 = &eax_5[1]
            int32_t ebx_15 = zx.d(ecx.b) & 0x7f
            *edi_1 = edx_22
            int32_t var_14_1 = ebx_15
            
            if (ecx.b s< 0)
                ecx.b = *edx_22
                edx_22 += 1
                *edi_1 = edx_22
                int32_t ebx_16 = ebx_15 | (zx.d(ecx.b) & 0x7f) << 7
                var_14_1 = ebx_16
                
                if (ecx.b s< 0)
                    ecx.b = *edx_22
                    edx_22 += 1
                    *edi_1 = edx_22
                    int32_t ebx_17 = ebx_16 | (zx.d(ecx.b) & 0x7f) << 0xe
                    var_14_1 = ebx_17
                    
                    if (ecx.b s< 0)
                        ecx.b = *edx_22
                        edx_22 += 1
                        *edi_1 = edx_22
                        int32_t ebx_18 = ebx_17 | (zx.d(ecx.b) & 0x7f) << 0x15
                        var_14_1 = ebx_18
                        
                        if (ecx.b s< 0)
                            eax_5.b = *edx_22
                            edx_22 += 1
                            *edi_1 = edx_22
                            var_14_1 = ebx_18 | zx.d(eax_5.b) << 0x1c
            
            eax_5.b = *edx_22
            int32_t ebx_21 = zx.d(eax_5.b) & 0x7f
            char* var_3c_5 = nullptr
            *edi_1 = edx_22 + 1
            int32_t var_28_1 = ebx_21
            
            if (eax_5.b s< 0)
                ecx.b = *(edx_22 + 1)
                *edi_1 = edx_22 + 2
                ebx_21 |= (zx.d(ecx.b) & 0x7f) << 7
                var_28_1 = ebx_21
                
                if (ecx.b s< 0)
                    ecx.b = *(edx_22 + 2)
                    *edi_1 = edx_22 + 3
                    ebx_21 |= (zx.d(ecx.b) & 0x7f) << 0xe
                    var_28_1 = ebx_21
                    
                    if (ecx.b s< 0)
                        ecx.b = *(edx_22 + 3)
                        *edi_1 = edx_22 + 4
                        ebx_21 |= (zx.d(ecx.b) & 0x7f) << 0x15
                        var_28_1 = ebx_21
                        
                        if (ecx.b s< 0)
                            ecx.b = *(edx_22 + 4)
                            *edi_1 = edx_22 + 5
                            ebx_21 |= zx.d(ecx.b) << 0x1c
                            var_28_1 = ebx_21
            
            if (ebx_21 s> 0)
                do
                    char* eax_174 = *edi_1
                    ecx:1.b = *eax_174
                    *edi_1 = &eax_174[1]
                    ecx.b = eax_174[1]
                    int32_t i_4 = zx.d(ecx.b) & 0x7f
                    *edi_1 = &eax_174[2]
                    int32_t i_15 = i_4
                    
                    if (ecx.b s< 0)
                        ecx.b = eax_174[2]
                        *edi_1 = &eax_174[3]
                        i_4 |= (zx.d(ecx.b) & 0x7f) << 7
                        i_15 = i_4
                        
                        if (ecx.b s< 0)
                            ecx.b = eax_174[3]
                            *edi_1 = &eax_174[4]
                            i_4 |= (zx.d(ecx.b) & 0x7f) << 0xe
                            i_15 = i_4
                            
                            if (ecx.b s< 0)
                                ecx.b = eax_174[4]
                                *edi_1 = &eax_174[5]
                                i_4 |= (zx.d(ecx.b) & 0x7f) << 0x15
                                i_15 = i_4
                                
                                if (ecx.b s< 0)
                                    ecx.b = eax_174[5]
                                    *edi_1 = &eax_174[6]
                                    i_4 |= zx.d(ecx.b) << 0x1c
                                    i_15 = i_4
                    
                    int32_t xmm0_55
                    
                    if (ecx:1.b == 0)
                        int32_t eax_239 = data_1151ae0
                        int32_t* var_38_4
                        int32_t* eax_240
                        int32_t* ebx_24
                        
                        if (eax_239 == 0)
                            int32_t var_80_34 = 0x18
                            eax_240 = _malloc()
                            var_38_4 = eax_240
                            ebx_24 = eax_240
                        else
                            eax_240 = eax_239(0x18, 
                                "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\spanimation.c", 
                                0xeb)
                            ebx_24 = eax_240
                            var_38_4 = ebx_24
                        
                        if (ebx_24 != 0)
                            __builtin_memset(ebx_24, 0, 0x18)
                        
                        sub_56d900(eax_240, 0, ebx_24, i_4, sub_56db00, sub_56db30, 
                            ?get@Length@?$WriteOnlyArray@E$00@Platform@@Q$ABAIXZ)
                        int32_t ecx_74 = data_1151ae0
                        int32_t eax_241 = i_4 * 2
                        ebx_24[3] = eax_241
                        int32_t eax_242 = eax_241 << 2
                        uint32_t (* eax_243)[0x4]
                        int32_t* ecx_75
                        int16_t edx_31
                        
                        if (ecx_74 == 0)
                            int32_t var_80_35 = eax_242
                            eax_243, ecx_75, edx_31 = _malloc()
                        else
                            eax_243, edx_31, ecx_75 = ecx_74(eax_242, 
                                "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\spanimation.c", 
                                0xef)
                        
                        if (eax_243 != 0)
                            ecx_75, edx_31 = _memset(eax_243, 0, eax_242)
                        
                        ebx_24[4] = eax_243
                        ebx_24[5] = var_14_1
                        int32_t* var_40_5 = nullptr
                        
                        if (i_4 s> 0)
                            int32_t eax_245 = i_4 - 1
                            
                            do
                                char* eax_246 = *edi_1
                                ecx_75.b = *eax_246
                                *edi_1 = &eax_246[1]
                                edx_31:1.b = eax_246[1]
                                *edi_1 = &eax_246[2]
                                edx_31.b = eax_246[2]
                                *edi_1 = &eax_246[3]
                                ebx_24.b = eax_246[3]
                                *edi_1 = &eax_246[4]
                                uint32_t var_58_10 = ((zx.d(ecx_75.b) << 8 | zx.d(edx_31:1.b)) << 8
                                    | zx.d(edx_31.b)) << 8 | zx.d(ebx_24.b)
                                uint32_t ecx_82
                                ecx_82.b = eax_246[4]
                                *edi_1 = &eax_246[5]
                                edx_31.b = eax_246[5]
                                *edi_1 = &eax_246[6]
                                ebx_24.b = eax_246[6]
                                *edi_1 = &eax_246[7]
                                edx_31:1.b = eax_246[7]
                                *edi_1 = &eax_246[8]
                                *(var_38_4[4] + (var_40_5 << 3)) = var_58_10
                                int32_t eax_261 = var_38_4[4]
                                *(eax_261 + (var_40_5 << 3) + 4) =
                                    ((zx.d(ecx_82.b) << 8 | zx.d(edx_31.b)) << 8 | zx.d(ebx_24.b)) << 8
                                    | zx.d(edx_31:1.b)
                                
                                if (var_40_5 s< eax_245)
                                    ecx_75, edx_31 = sub_527f00(eax_261, var_38_4, edi_1, var_40_5)
                                
                                i_4 = i_15
                                ebx_24 = var_40_5 + 1
                                var_40_5 = ebx_24
                            while (ebx_24 s< i_4)
                            
                            ebx_24 = var_38_4
                        
                        uint32_t* edx_33 = var_c
                        ecx = *edx_33
                        
                        if (ecx == edx_33[1])
                            int32_t eax_262 = int.d(_mm_cvtepi32_ps(zx.o(ecx)) * 1.75f)
                            
                            if (eax_262 s< 8)
                                eax_262 = 8
                            
                            edx_33[1] = eax_262
                            int32_t var_80_38 = eax_262 << 2
                            int32_t var_84_7 = edx_33[2]
                            int32_t eax_264 = sub_57fb2f()
                            edx_33 = var_c
                            ecx = *edx_33
                            edx_33[2] = eax_264
                        
                        *(edx_33[2] + (ecx << 2)) = ebx_24
                        *edx_33 += 1
                        xmm0_55 = *(ebx_24[4] + (i_4 << 3) - 8)
                    else
                        void* eax_175
                        eax_175.b = ecx:1.b
                        eax_175.b -= 1
                        
                        if (eax_175.b u> 2)
                            int32_t i_3 = 0
                            
                            if (*var_c s> 0)
                                do
                                    void* eax_298 = *(var_c[2] + (i_3 << 2))
                                    (*(*(eax_298 + 4) + 8))(eax_298)
                                    i_3 += 1
                                while (i_3 s< *var_c)
                            
                            _free(var_c[2])
                            _free(var_c)
                            void* eax_302 = *(*(arg5 + 0x24) + (var_14_1 << 2))
                            sub_527c10(eax_302, "Invalid timeline type for a bone: ", arg3, 
                                *(eax_302 + 4))
                            return 0
                        
                        float xmm1_2 = 1f
                        int32_t* ebx_22 = nullptr
                        uint32_t eax_184 = zx.d(ecx:1.b)
                        float var_34_3 = 1f
                        int32_t* var_18_2 = nullptr
                        void* edx_27
                        
                        if (eax_184 == 1)
                            int32_t eax_201 = data_1151ae0
                            int32_t* eax_202
                            
                            if (eax_201 == 0)
                                int32_t var_80_29 = 0x18
                                eax_202 = _malloc()
                                var_18_2 = eax_202
                                ebx_22 = eax_202
                            else
                                eax_202 = eax_201(0x18, 
                                    "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\spanimation.c", 
                                    0xeb)
                                ebx_22 = eax_202
                                var_18_2 = ebx_22
                            
                            if (ebx_22 != 0)
                                __builtin_memset(ebx_22, 0, 0x18)
                            
                            sub_56d900(eax_202, 1, ebx_22, i_4, sub_56db00, sub_56ddd0, sub_56dfa0)
                            int32_t ecx_50 = data_1151ae0
                            int32_t eax_203 = i_4 * 3
                            ebx_22[3] = eax_203
                            void* eax_204 = eax_203 << 2
                            uint32_t (* eax_205)[0x4]
                            
                            if (ecx_50 == 0)
                                void* var_80_30 = eax_204
                                eax_205, ecx, edx_27 = _malloc()
                            else
                                eax_205, edx_27, ecx = ecx_50(eax_204, 
                                    "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\spanimation.c", 
                                    0xef)
                            
                            if (eax_205 != 0)
                                ecx, edx_27 = _memset(eax_205, 0, eax_204)
                            
                            ebx_22[4] = eax_205
                            xmm1_2 = *arg3
                            var_34_3 = xmm1_2
                        else
                            void* (* var_84_5)(void* arg1, void* arg2, float arg3, float arg4, 
                                int32_t arg5)
                            int32_t (* var_80_25)(void* arg1)
                            int32_t* eax_189
                            int32_t edx_28
                            
                            if (eax_184 == 2)
                                int32_t eax_197 = data_1151ae0
                                
                                if (eax_197 == 0)
                                    int32_t var_80_26 = 0x18
                                    eax_189 = _malloc()
                                    var_18_2 = eax_189
                                    ebx_22 = eax_189
                                else
                                    eax_189 = eax_197(0x18, 
                                        "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\s"
                                    "panimation.c", 
                                        0xeb)
                                    ebx_22 = eax_189
                                    var_18_2 = ebx_22
                                
                                if (ebx_22 != 0)
                                    __builtin_memset(ebx_22, 0, 0x18)
                                
                                var_80_25 = sub_56e450
                                var_84_5 = sub_56dfb0
                                edx_28 = 2
                            label_528e65:
                                sub_56d900(eax_189, edx_28, ebx_22, i_4, sub_56db00, var_84_5, 
                                    var_80_25)
                                int32_t ecx_48 = data_1151ae0
                                int32_t eax_198 = i_4 * 3
                                ebx_22[3] = eax_198
                                int32_t eax_199 = eax_198 << 2
                                uint32_t (* eax_200)[0x4]
                                
                                if (ecx_48 == 0)
                                    int32_t var_80_27 = eax_199
                                    eax_200, ecx, edx_27 = _malloc()
                                else
                                    eax_200, edx_27, ecx = ecx_48(eax_199, 
                                        "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\s"
                                    "panimation.c", 
                                        0xef)
                                
                                if (eax_200 != 0)
                                    ecx, edx_27 = _memset(eax_200, 0, eax_199)
                                
                                xmm1_2 = 1f
                                ebx_22[4] = eax_200
                            else if (eax_184 == 3)
                                int32_t eax_188 = data_1151ae0
                                
                                if (eax_188 == 0)
                                    int32_t var_80_24 = 0x18
                                    eax_189 = _malloc()
                                    var_18_2 = eax_189
                                    ebx_22 = eax_189
                                else
                                    eax_189 = eax_188(0x18, 
                                        "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\s"
                                    "panimation.c", 
                                        0xeb)
                                    ebx_22 = eax_189
                                    var_18_2 = ebx_22
                                
                                if (ebx_22 != 0)
                                    __builtin_memset(ebx_22, 0, 0x18)
                                
                                var_80_25 = sub_56e630
                                var_84_5 = sub_56e460
                                edx_28 = 3
                                goto label_528e65
                        
                        ebx_22[5] = var_14_1
                        int32_t var_38_3 = 0
                        
                        if (i_4 s> 0)
                            int32_t eax_208 = i_4 - 1
                            void* var_40_3 = nullptr
                            int32_t eax_232
                            
                            do
                                char* eax_209 = *edi_1
                                ecx.b = *eax_209
                                *edi_1 = &eax_209[1]
                                edx_27:1.b = eax_209[1]
                                *edi_1 = &eax_209[2]
                                edx_27.b = eax_209[2]
                                *edi_1 = &eax_209[3]
                                ebx_22.b = eax_209[3]
                                *edi_1 = &eax_209[4]
                                uint32_t var_58_8 =
                                    ((zx.d(ecx.b) << 8 | zx.d(edx_27:1.b)) << 8 | zx.d(edx_27.b)) << 8
                                    | zx.d(ebx_22.b)
                                uint32_t ecx_57
                                ecx_57.b = eax_209[4]
                                *edi_1 = &eax_209[5]
                                edx_27.b = eax_209[5]
                                *edi_1 = &eax_209[6]
                                ebx_22.b = eax_209[6]
                                *edi_1 = &eax_209[7]
                                edx_27:1.b = eax_209[7]
                                *edi_1 = &eax_209[8]
                                uint32_t var_54_4 =
                                    ((zx.d(ecx_57.b) << 8 | zx.d(edx_27.b)) << 8 | zx.d(ebx_22.b)) << 8
                                    | zx.d(edx_27:1.b)
                                uint32_t ecx_64
                                ecx_64.b = eax_209[8]
                                *edi_1 = &eax_209[9]
                                edx_27.b = eax_209[9]
                                *edi_1 = &eax_209[0xa]
                                uint32_t* esi_13 = var_40_3
                                ebx_22.b = eax_209[0xa]
                                *edi_1 = &eax_209[0xb]
                                edx_27:1.b = eax_209[0xb]
                                *edi_1 = &eax_209[0xc]
                                uint32_t eax_227 = zx.d(ebx_22.b)
                                ebx_22 = var_18_2
                                *(esi_13 + ebx_22[4]) = var_58_8
                                *(esi_13 + ebx_22[4] + 4) = xmm1_2 f* var_54_4
                                *(esi_13 + ebx_22[4] + 8) = xmm1_2 f* (
                                    ((zx.d(ecx_64.b) << 8 | zx.d(edx_27.b)) << 8 | eax_227) << 8
                                    | zx.d(edx_27:1.b))
                                eax_232 = var_38_3
                                
                                if (eax_232 s< eax_208)
                                    ecx, edx_27 = sub_527f00(eax_232, ebx_22, edi_1, eax_232)
                                    xmm1_2 = var_34_3
                                    eax_232 = var_38_3
                                
                                var_40_3 = &esi_13[3]
                                i_4 = i_15
                                var_38_3 = eax_232 + 1
                            while (eax_232 + 1 s< i_4)
                        
                        int32_t* edx_30 = var_c
                        int32_t ecx_72 = *edx_30
                        
                        if (ecx_72 == edx_30[1])
                            int32_t eax_234 = int.d(_mm_cvtepi32_ps(zx.o(ecx_72)) * 1.75f)
                            
                            if (eax_234 s< 8)
                                eax_234 = 8
                            
                            edx_30[1] = eax_234
                            int32_t var_80_33 = eax_234 << 2
                            int32_t var_84_6 = edx_30[2]
                            int32_t eax_236 = sub_57fb2f()
                            edx_30 = var_c
                            ecx_72 = *edx_30
                            edx_30[2] = eax_236
                        
                        *(edx_30[2] + (ecx_72 << 2)) = ebx_22
                        *edx_30 += 1
                        xmm0_55 = *(ebx_22[4] + i_4 * 0xc - 0xc)
                    
                    if (not(var_10 f> xmm0_55))
                        var_10 = xmm0_55
                    
                    eax_5 = &var_3c_5[1]
                    var_3c_5 = eax_5
                while (eax_5 s< var_28_1)
                
                esi_9 = var_30_3
            
            esi_9 += 1
            var_30_3 = esi_9
        while (esi_9 s< var_24_2)
        
        edx_21 = *edi_1
    
    eax_5.b = *edx_21
    void* edx_34 = edx_21 + 1
    int32_t i_24 = zx.d(eax_5.b) & 0x7f
    *edi_1 = edx_34
    int32_t i_16 = i_24
    
    if (eax_5.b s< 0)
        ecx.b = *edx_34
        edx_34 += 1
        *edi_1 = edx_34
        i_24 |= (zx.d(ecx.b) & 0x7f) << 7
        i_16 = i_24
        
        if (ecx.b s< 0)
            ecx.b = *edx_34
            edx_34 += 1
            *edi_1 = edx_34
            i_24 |= (zx.d(ecx.b) & 0x7f) << 0xe
            i_16 = i_24
            
            if (ecx.b s< 0)
                ecx.b = *edx_34
                edx_34 += 1
                *edi_1 = edx_34
                i_24 |= (zx.d(ecx.b) & 0x7f) << 0x15
                i_16 = i_24
                
                if (ecx.b s< 0)
                    eax_5.b = *edx_34
                    edx_34 += 1
                    i_24 |= zx.d(eax_5.b) << 0x1c
                    *edi_1 = edx_34
                    i_16 = i_24
    
    if (i_24 s> 0)
        int32_t i_5
        
        do
            char* eax_277 = *edi_1
            ecx.b = *eax_277
            void* edx_35 = &eax_277[1]
            int32_t ebx_27 = zx.d(ecx.b) & 0x7f
            *edi_1 = edx_35
            int32_t var_28_2 = ebx_27
            
            if (ecx.b s< 0)
                ecx.b = *edx_35
                edx_35 += 1
                *edi_1 = edx_35
                int32_t ebx_28 = ebx_27 | (zx.d(ecx.b) & 0x7f) << 7
                var_28_2 = ebx_28
                
                if (ecx.b s< 0)
                    ecx.b = *edx_35
                    edx_35 += 1
                    *edi_1 = edx_35
                    int32_t ebx_29 = ebx_28 | (zx.d(ecx.b) & 0x7f) << 0xe
                    var_28_2 = ebx_29
                    
                    if (ecx.b s< 0)
                        ecx.b = *edx_35
                        edx_35 += 1
                        *edi_1 = edx_35
                        int32_t ebx_30 = ebx_29 | (zx.d(ecx.b) & 0x7f) << 0x15
                        var_28_2 = ebx_30
                        
                        if (ecx.b s< 0)
                            eax_277.b = *edx_35
                            edx_35 += 1
                            *edi_1 = edx_35
                            var_28_2 = ebx_30 | zx.d(eax_277.b) << 0x1c
            
            eax_277.b = *edx_35
            int32_t j = zx.d(eax_277.b) & 0x7f
            *edi_1 = edx_35 + 1
            int32_t j_2 = j
            
            if (eax_277.b s< 0)
                ecx.b = *(edx_35 + 1)
                *edi_1 = edx_35 + 2
                j |= (zx.d(ecx.b) & 0x7f) << 7
                j_2 = j
                
                if (ecx.b s< 0)
                    ecx.b = *(edx_35 + 2)
                    *edi_1 = edx_35 + 3
                    j |= (zx.d(ecx.b) & 0x7f) << 0xe
                    j_2 = j
                    
                    if (ecx.b s< 0)
                        ecx.b = *(edx_35 + 3)
                        *edi_1 = edx_35 + 4
                        j |= (zx.d(ecx.b) & 0x7f) << 0x15
                        j_2 = j
                        
                        if (ecx.b s< 0)
                            ecx.b = *(edx_35 + 4)
                            *edi_1 = edx_35 + 5
                            j |= zx.d(ecx.b) << 0x1c
                            j_2 = j
            
            int32_t eax_295 = data_1151ae0
            int32_t* var_3c_6
            int32_t* eax_296
            int32_t* ebx_32
            
            if (eax_295 == 0)
                int32_t var_80_41 = 0x18
                eax_296 = _malloc()
                var_3c_6 = eax_296
                ebx_32 = eax_296
            else
                eax_296 = eax_295(0x18, 
                    "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\spanimation.c", 0xeb)
                ebx_32 = eax_296
                var_3c_6 = ebx_32
            
            if (ebx_32 != 0)
                __builtin_memset(ebx_32, 0, 0x18)
            
            sub_56d900(eax_296, 9, ebx_32, j, sub_56db00, sub_571140, sub_571420)
            int32_t ecx_95 = data_1151ae0
            int32_t eax_305 = j * 6
            ebx_32[3] = eax_305
            int32_t eax_306 = eax_305 << 2
            uint32_t (* eax_307)[0x4]
            uint32_t ecx_96
            int16_t edx_40
            
            if (ecx_95 == 0)
                int32_t var_80_42 = eax_306
                eax_307, ecx_96, edx_40 = _malloc()
            else
                eax_307, edx_40, ecx_96 = ecx_95(eax_306, 
                    "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\spanimation.c", 0xef)
            
            if (eax_307 != 0)
                ecx_96, edx_40 = _memset(eax_307, 0, eax_306)
            
            ebx_32[4] = eax_307
            ebx_32[5] = var_28_2
            int32_t var_38_5 = 0
            
            if (j s> 0)
                int32_t eax_309 = j - 1
                void* var_40_7 = nullptr
                int32_t eax_339
                
                do
                    char* eax_310 = *edi_1
                    ecx_96.b = *eax_310
                    *edi_1 = &eax_310[1]
                    edx_40:1.b = eax_310[1]
                    *edi_1 = &eax_310[2]
                    edx_40.b = eax_310[2]
                    *edi_1 = &eax_310[3]
                    ebx_32.b = eax_310[3]
                    *edi_1 = &eax_310[4]
                    uint32_t var_58_12 =
                        ((zx.d(ecx_96.b) << 8 | zx.d(edx_40:1.b)) << 8 | zx.d(edx_40.b)) << 8
                        | zx.d(ebx_32.b)
                    uint32_t ecx_103
                    ecx_103.b = eax_310[4]
                    *edi_1 = &eax_310[5]
                    edx_40.b = eax_310[5]
                    *edi_1 = &eax_310[6]
                    ebx_32.b = eax_310[6]
                    *edi_1 = &eax_310[7]
                    edx_40:1.b = eax_310[7]
                    *edi_1 = &eax_310[8]
                    uint32_t var_54_6 =
                        ((zx.d(ecx_103.b) << 8 | zx.d(edx_40.b)) << 8 | zx.d(ebx_32.b)) << 8
                        | zx.d(edx_40:1.b)
                    uint32_t ecx_110
                    ecx_110.b = eax_310[8]
                    *edi_1 = &eax_310[9]
                    edx_40.b = eax_310[9]
                    *edi_1 = &eax_310[0xa]
                    ebx_32.b = eax_310[0xa]
                    *edi_1 = &eax_310[0xb]
                    edx_40:1.b = eax_310[0xb]
                    *edi_1 = &eax_310[0xc]
                    uint32_t eax_327 = zx.d(ebx_32.b)
                    ebx_32 = var_3c_6
                    uint32_t var_50_3 =
                        ((zx.d(ecx_110.b) << 8 | zx.d(edx_40.b)) << 8 | eax_327) << 8 | zx.d(edx_40:1.b)
                    ecx_96.b = eax_310[0xc]
                    *edi_1 = &eax_310[0xd]
                    edx_40.b = eax_310[0xd]
                    *edi_1 = &eax_310[0xe]
                    ecx_96:1.b = eax_310[0xe]
                    *edi_1 = &eax_310[0xf]
                    uint32_t* esi_21 = var_40_7
                    *(esi_21 + ebx_32[4]) = var_58_12
                    *(esi_21 + ebx_32[4] + 4) = var_54_6
                    *(esi_21 + ebx_32[4] + 8) = var_50_3
                    *(esi_21 + ebx_32[4] + 0xc) = _mm_cvtepi32_ps(zx.o(sx.d(ecx_96.b)))
                    int32_t xmm0_66
                    
                    if (edx_40.b == 0)
                        xmm0_66 = (zx.o(0)).d
                    else
                        xmm0_66 = 0x3f800000
                    
                    *(esi_21 + ebx_32[4] + 0x10) = xmm0_66
                    int32_t xmm0_67
                    
                    if (ecx_96:1.b == 0)
                        xmm0_67 = (zx.o(0)).d
                    else
                        xmm0_67 = 0x3f800000
                    
                    *(esi_21 + ebx_32[4] + 0x14) = xmm0_67
                    eax_339 = var_38_5
                    
                    if (eax_339 s< eax_309)
                        ecx_96, edx_40 = sub_527f00(eax_339, ebx_32, edi_1, eax_339)
                        eax_339 = var_38_5
                    
                    var_40_7 = &esi_21[6]
                    j = j_2
                    var_38_5 = eax_339 + 1
                while (eax_339 + 1 s< j)
            
            int32_t* edx_42 = var_c
            int32_t ecx_118 = *edx_42
            
            if (ecx_118 == edx_42[1])
                int32_t eax_341 = int.d(_mm_cvtepi32_ps(zx.o(ecx_118)) * 1.75f)
                
                if (eax_341 s< 8)
                    eax_341 = 8
                
                edx_42[1] = eax_341
                int32_t var_80_45 = eax_341 << 2
                int32_t var_84_9 = edx_42[2]
                int32_t eax_343 = sub_57fb2f()
                edx_42 = var_c
                ecx_118 = *edx_42
                edx_42[2] = eax_343
            
            *(edx_42[2] + (ecx_118 << 2)) = ebx_32
            *edx_42 += 1
            int32_t xmm0_71 = *(ebx_32[4] + j * 0x18 - 0x18)
            
            if (not(var_10 f> xmm0_71))
                var_10 = xmm0_71
            
            i_5 = i_16
            i_16 -= 1
        while (i_5 != 1)
        edx_34 = *edi_1
    
    eax_5.b = *edx_34
    void* edx_43 = edx_34 + 1
    int32_t i_25 = zx.d(eax_5.b) & 0x7f
    *edi_1 = edx_43
    int32_t i_17 = i_25
    
    if (eax_5.b s< 0)
        ecx.b = *edx_43
        edx_43 += 1
        *edi_1 = edx_43
        i_25 |= (zx.d(ecx.b) & 0x7f) << 7
        i_17 = i_25
        
        if (ecx.b s< 0)
            ecx.b = *edx_43
            edx_43 += 1
            *edi_1 = edx_43
            i_25 |= (zx.d(ecx.b) & 0x7f) << 0xe
            i_17 = i_25
            
            if (ecx.b s< 0)
                ecx.b = *edx_43
                edx_43 += 1
                *edi_1 = edx_43
                i_25 |= (zx.d(ecx.b) & 0x7f) << 0x15
                i_17 = i_25
                
                if (ecx.b s< 0)
                    eax_5.b = *edx_43
                    edx_43 += 1
                    i_25 |= zx.d(eax_5.b) << 0x1c
                    *edi_1 = edx_43
                    i_17 = i_25
    
    if (i_25 s> 0)
        int32_t i_6
        
        do
            char* eax_354 = *edi_1
            ecx.b = *eax_354
            void* edx_44 = &eax_354[1]
            int32_t ebx_35 = zx.d(ecx.b) & 0x7f
            *edi_1 = edx_44
            int32_t var_28_3 = ebx_35
            
            if (ecx.b s< 0)
                ecx.b = *edx_44
                edx_44 += 1
                *edi_1 = edx_44
                int32_t ebx_36 = ebx_35 | (zx.d(ecx.b) & 0x7f) << 7
                var_28_3 = ebx_36
                
                if (ecx.b s< 0)
                    ecx.b = *edx_44
                    edx_44 += 1
                    *edi_1 = edx_44
                    int32_t ebx_37 = ebx_36 | (zx.d(ecx.b) & 0x7f) << 0xe
                    var_28_3 = ebx_37
                    
                    if (ecx.b s< 0)
                        ecx.b = *edx_44
                        edx_44 += 1
                        *edi_1 = edx_44
                        int32_t ebx_38 = ebx_37 | (zx.d(ecx.b) & 0x7f) << 0x15
                        var_28_3 = ebx_38
                        
                        if (ecx.b s< 0)
                            eax_354.b = *edx_44
                            edx_44 += 1
                            *edi_1 = edx_44
                            var_28_3 = ebx_38 | zx.d(eax_354.b) << 0x1c
            
            eax_354.b = *edx_44
            int32_t ebx_41 = zx.d(eax_354.b) & 0x7f
            *edi_1 = edx_44 + 1
            int32_t var_24_3 = ebx_41
            
            if (eax_354.b s< 0)
                ecx.b = *(edx_44 + 1)
                *edi_1 = edx_44 + 2
                ebx_41 |= (zx.d(ecx.b) & 0x7f) << 7
                var_24_3 = ebx_41
                
                if (ecx.b s< 0)
                    ecx.b = *(edx_44 + 2)
                    *edi_1 = edx_44 + 3
                    ebx_41 |= (zx.d(ecx.b) & 0x7f) << 0xe
                    var_24_3 = ebx_41
                    
                    if (ecx.b s< 0)
                        ecx.b = *(edx_44 + 3)
                        *edi_1 = edx_44 + 4
                        ebx_41 |= (zx.d(ecx.b) & 0x7f) << 0x15
                        var_24_3 = ebx_41
                        
                        if (ecx.b s< 0)
                            ecx.b = *(edx_44 + 4)
                            *edi_1 = edx_44 + 5
                            ebx_41 |= zx.d(ecx.b) << 0x1c
                            var_24_3 = ebx_41
            
            int32_t eax_372 = data_1151ae0
            int32_t* var_38_6
            int32_t* eax_373
            int32_t* esi_24
            
            if (eax_372 == 0)
                int32_t var_80_46 = 0x18
                eax_373 = _malloc()
                var_38_6 = eax_373
                esi_24 = eax_373
            else
                eax_373 = eax_372(0x18, 
                    "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\spanimation.c", 0xeb)
                esi_24 = eax_373
                var_38_6 = esi_24
            
            if (esi_24 != 0)
                __builtin_memset(esi_24, 0, 0x18)
            
            sub_56d900(eax_373, 0xa, esi_24, ebx_41, sub_56db00, sub_571430, sub_571680)
            int32_t ecx_120 = data_1151ae0
            int32_t eax_374 = ebx_41 * 5
            esi_24[3] = eax_374
            int32_t eax_375 = eax_374 << 2
            uint32_t (* eax_376)[0x4]
            int32_t* ecx_121
            int16_t edx_49
            
            if (ecx_120 == 0)
                int32_t var_80_47 = eax_375
                eax_376, ecx_121, edx_49 = _malloc()
            else
                eax_376, edx_49, ecx_121 = ecx_120(eax_375, 
                    "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\spanimation.c", 0xef)
            
            if (eax_376 != 0)
                ecx_121, edx_49 = _memset(eax_376, 0, eax_375)
            
            esi_24[4] = eax_376
            esi_24[5] = var_28_3
            int32_t var_44_2 = 0
            
            if (ebx_41 s> 0)
                int32_t eax_378 = ebx_41 - 1
                void* var_40_8 = nullptr
                int32_t esi_30
                
                do
                    char* eax_379 = *edi_1
                    ecx_121.b = *eax_379
                    *edi_1 = &eax_379[1]
                    edx_49:1.b = eax_379[1]
                    *edi_1 = &eax_379[2]
                    edx_49.b = eax_379[2]
                    *edi_1 = &eax_379[3]
                    ebx_41.b = eax_379[3]
                    *edi_1 = &eax_379[4]
                    uint32_t var_58_14 =
                        ((zx.d(ecx_121.b) << 8 | zx.d(edx_49:1.b)) << 8 | zx.d(edx_49.b)) << 8
                        | zx.d(ebx_41.b)
                    uint32_t ecx_128
                    ecx_128.b = eax_379[4]
                    *edi_1 = &eax_379[5]
                    edx_49.b = eax_379[5]
                    *edi_1 = &eax_379[6]
                    ebx_41.b = eax_379[6]
                    *edi_1 = &eax_379[7]
                    edx_49:1.b = eax_379[7]
                    *edi_1 = &eax_379[8]
                    uint32_t var_54_7 =
                        ((zx.d(ecx_128.b) << 8 | zx.d(edx_49.b)) << 8 | zx.d(ebx_41.b)) << 8
                        | zx.d(edx_49:1.b)
                    uint32_t ecx_135
                    ecx_135.b = eax_379[8]
                    *edi_1 = &eax_379[9]
                    edx_49.b = eax_379[9]
                    *edi_1 = &eax_379[0xa]
                    ebx_41.b = eax_379[0xa]
                    *edi_1 = &eax_379[0xb]
                    edx_49:1.b = eax_379[0xb]
                    *edi_1 = &eax_379[0xc]
                    uint32_t var_50_4 =
                        ((zx.d(ecx_135.b) << 8 | zx.d(edx_49.b)) << 8 | zx.d(ebx_41.b)) << 8
                        | zx.d(edx_49:1.b)
                    uint32_t ecx_142
                    ecx_142.b = eax_379[0xc]
                    *edi_1 = &eax_379[0xd]
                    edx_49.b = eax_379[0xd]
                    *edi_1 = &eax_379[0xe]
                    ebx_41.b = eax_379[0xe]
                    *edi_1 = &eax_379[0xf]
                    edx_49:1.b = eax_379[0xf]
                    *edi_1 = &eax_379[0x10]
                    uint32_t var_4c_3 =
                        ((zx.d(ecx_142.b) << 8 | zx.d(edx_49.b)) << 8 | zx.d(ebx_41.b)) << 8
                        | zx.d(edx_49:1.b)
                    uint32_t ecx_149
                    ecx_149.b = eax_379[0x10]
                    *edi_1 = &eax_379[0x11]
                    edx_49.b = eax_379[0x11]
                    *edi_1 = &eax_379[0x12]
                    ebx_41.b = eax_379[0x12]
                    *edi_1 = &eax_379[0x13]
                    edx_49:1.b = eax_379[0x13]
                    *edi_1 = &eax_379[0x14]
                    uint32_t* ebx_42 = var_40_8
                    *(ebx_42 + var_38_6[4]) = var_58_14
                    *(var_38_6[4] + ebx_42 + 4) = var_54_7
                    *(var_38_6[4] + ebx_42 + 8) = var_50_4
                    *(var_38_6[4] + ebx_42 + 0xc) = var_4c_3
                    int32_t eax_415 = var_38_6[4]
                    *(eax_415 + ebx_42 + 0x10) =
                        ((zx.d(ecx_149.b) << 8 | zx.d(edx_49.b)) << 8 | zx.d(ebx_41.b)) << 8
                        | zx.d(edx_49:1.b)
                    
                    if (var_44_2 s< eax_378)
                        ecx_121, edx_49 = sub_527f00(eax_415, var_38_6, edi_1, var_44_2)
                    
                    esi_30 = var_44_2 + 1
                    var_40_8 = &ebx_42[5]
                    ebx_41 = var_24_3
                    var_44_2 = esi_30
                while (esi_30 s< ebx_41)
                esi_24 = var_38_6
            
            int32_t* edx_51 = var_c
            int32_t ecx_158 = *edx_51
            
            if (ecx_158 == edx_51[1])
                int32_t eax_416 = int.d(_mm_cvtepi32_ps(zx.o(ecx_158)) * 1.75f)
                
                if (eax_416 s< 8)
                    eax_416 = 8
                
                edx_51[1] = eax_416
                int32_t var_80_50 = eax_416 << 2
                int32_t var_84_10 = edx_51[2]
                int32_t eax_418 = sub_57fb2f()
                edx_51 = var_c
                ecx_158 = *edx_51
                edx_51[2] = eax_418
            
            *(edx_51[2] + (ecx_158 << 2)) = esi_24
            *edx_51 += 1
            int32_t xmm0_80 = *(esi_24[4] + ebx_41 * 0x14 - 0x14)
            
            if (not(var_10 f> xmm0_80))
                var_10 = xmm0_80
            
            i_6 = i_17
            i_17 -= 1
        while (i_6 != 1)
        edx_43 = *edi_1
    
    eax_5.b = *edx_43
    void* edx_52 = edx_43 + 1
    void* esi_31 = edx_52
    int32_t i_22 = zx.d(eax_5.b) & 0x7f
    *edi_1 = edx_52
    int32_t i_14 = i_22
    
    if (eax_5.b s< 0)
        ecx.b = *edx_52
        edx_52 += 1
        esi_31 = edx_52
        *edi_1 = edx_52
        i_22 |= (zx.d(ecx.b) & 0x7f) << 7
        i_14 = i_22
        
        if (ecx.b s< 0)
            ecx.b = *edx_52
            edx_52 += 1
            esi_31 = edx_52
            *edi_1 = edx_52
            i_22 |= (zx.d(ecx.b) & 0x7f) << 0xe
            i_14 = i_22
            
            if (ecx.b s< 0)
                ecx.b = *edx_52
                edx_52 += 1
                esi_31 = edx_52
                *edi_1 = edx_52
                i_22 |= (zx.d(ecx.b) & 0x7f) << 0x15
                i_14 = i_22
                
                if (ecx.b s< 0)
                    eax_5.b = *edx_52
                    edx_52 += 1
                    esi_31 = edx_52
                    i_22 |= zx.d(eax_5.b) << 0x1c
                    *edi_1 = edx_52
                    i_14 = i_22
    
    if (i_22 s> 0)
        int32_t i_7
        
        do
            eax_5.b = *esi_31
            void* edx_53 = esi_31 + 1
            int32_t ebx_46 = zx.d(eax_5.b) & 0x7f
            *edi_1 = edx_53
            int32_t var_20_2 = ebx_46
            
            if (eax_5.b s< 0)
                ecx.b = *edx_53
                edx_53 += 1
                *edi_1 = edx_53
                ebx_46 |= (zx.d(ecx.b) & 0x7f) << 7
                var_20_2 = ebx_46
                
                if (ecx.b s< 0)
                    ecx.b = *edx_53
                    edx_53 += 1
                    *edi_1 = edx_53
                    ebx_46 |= (zx.d(ecx.b) & 0x7f) << 0xe
                    var_20_2 = ebx_46
                    
                    if (ecx.b s< 0)
                        ecx.b = *edx_53
                        edx_53 += 1
                        *edi_1 = edx_53
                        ebx_46 |= (zx.d(ecx.b) & 0x7f) << 0x15
                        var_20_2 = ebx_46
                        
                        if (ecx.b s< 0)
                            int32_t eax_435
                            eax_435.b = *edx_53
                            edx_53 += 1
                            ebx_46 |= zx.d(eax_435.b) << 0x1c
                            *edi_1 = edx_53
                            var_20_2 = ebx_46
            
            char* var_3c_8 = *(*(arg5 + 0x60) + (ebx_46 << 2))
            eax_5.b = *edx_53
            edx_52 = edx_53 + 1
            esi_31 = edx_52
            int32_t j_4 = zx.d(eax_5.b) & 0x7f
            *edi_1 = edx_52
            int32_t j_3 = j_4
            
            if (eax_5.b s< 0)
                ecx.b = *edx_52
                edx_52 += 1
                esi_31 = edx_52
                *edi_1 = edx_52
                j_4 |= (zx.d(ecx.b) & 0x7f) << 7
                j_3 = j_4
                
                if (ecx.b s< 0)
                    ecx.b = *edx_52
                    edx_52 += 1
                    esi_31 = edx_52
                    *edi_1 = edx_52
                    j_4 |= (zx.d(ecx.b) & 0x7f) << 0xe
                    j_3 = j_4
                    
                    if (ecx.b s< 0)
                        ecx.b = *edx_52
                        edx_52 += 1
                        esi_31 = edx_52
                        *edi_1 = edx_52
                        j_4 |= (zx.d(ecx.b) & 0x7f) << 0x15
                        j_3 = j_4
                        
                        if (ecx.b s< 0)
                            eax_5.b = *edx_52
                            edx_52 += 1
                            esi_31 = edx_52
                            j_4 |= zx.d(eax_5.b) << 0x1c
                            *edi_1 = edx_52
                            j_3 = j_4
            
            if (j_4 s> 0)
                int32_t j_1
                
                do
                    char* eax_447 = *edi_1
                    ecx:1.b = *eax_447
                    *edi_1 = &eax_447[1]
                    ecx.b = eax_447[1]
                    int32_t k = zx.d(ecx.b) & 0x7f
                    *edi_1 = &eax_447[2]
                    int32_t k_1 = k
                    
                    if (ecx.b s< 0)
                        ecx.b = eax_447[2]
                        *edi_1 = &eax_447[3]
                        k |= (zx.d(ecx.b) & 0x7f) << 7
                        k_1 = k
                        
                        if (ecx.b s< 0)
                            ecx.b = eax_447[3]
                            *edi_1 = &eax_447[4]
                            k |= (zx.d(ecx.b) & 0x7f) << 0xe
                            k_1 = k
                            
                            if (ecx.b s< 0)
                                ecx.b = eax_447[4]
                                *edi_1 = &eax_447[5]
                                k |= (zx.d(ecx.b) & 0x7f) << 0x15
                                k_1 = k
                                
                                if (ecx.b s< 0)
                                    ecx.b = eax_447[5]
                                    *edi_1 = &eax_447[6]
                                    k |= zx.d(ecx.b) << 0x1c
                                    k_1 = k
                    
                    int32_t xmm0_87
                    
                    if (ecx:1.b u<= 1)
                        int32_t eax_492 = data_1151ae0
                        float var_28_4 = 1f
                        int32_t* var_34_4
                        int32_t ecx_186
                        int16_t edx_61
                        int32_t* esi_35
                        bool cond:1_1
                        
                        if (ecx:1.b != 1)
                            int32_t* eax_500
                            
                            if (eax_492 == 0)
                                int32_t var_80_59 = 0x18
                                eax_500 = _malloc()
                                var_34_4 = eax_500
                                esi_35 = eax_500
                            else
                                eax_500 = eax_492(0x18, 
                                    "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\spanimation.c", 
                                    0xeb)
                                esi_35 = eax_500
                                var_34_4 = esi_35
                            
                            if (esi_35 != 0)
                                __builtin_memset(esi_35, 0, 0x18)
                            
                            sub_56d900(eax_500, 0xb, esi_35, k, sub_56db00, sub_571690, sub_5717b0)
                            int32_t ecx_188 = data_1151ae0
                            int32_t eax_501 = k * 2
                            esi_35[3] = eax_501
                            int32_t eax_502 = eax_501 << 2
                            uint32_t (* eax_503)[0x4]
                            
                            if (ecx_188 == 0)
                                int32_t var_80_60 = eax_502
                                eax_503, ecx_186, edx_61 = _malloc()
                            else
                                eax_503, edx_61, ecx_186 = ecx_188(eax_502, 
                                    "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\spanimation.c", 
                                    0xef)
                            
                            if (eax_503 != 0)
                                ecx_186, edx_61 = _memset(eax_503, 0, eax_502)
                            
                            esi_35[4] = eax_503
                            cond:1_1 = *(var_3c_8 + 0x18) != 0
                            goto label_52a011
                        
                        int32_t* eax_493
                        
                        if (eax_492 == 0)
                            int32_t var_80_56 = 0x18
                            eax_493 = _malloc()
                            var_34_4 = eax_493
                            esi_35 = eax_493
                        else
                            eax_493 = eax_492(0x18, 
                                "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\spanimation.c", 
                                0xeb)
                            esi_35 = eax_493
                            var_34_4 = esi_35
                        
                        if (esi_35 != 0)
                            __builtin_memset(esi_35, 0, 0x18)
                        
                        sub_56d900(eax_493, 0xc, esi_35, k, sub_56db00, sub_5717c0, sub_5718e0)
                        int32_t ecx_185 = data_1151ae0
                        int32_t eax_494 = k * 2
                        esi_35[3] = eax_494
                        int32_t eax_495 = eax_494 << 2
                        uint32_t (* eax_496)[0x4]
                        
                        if (ecx_185 == 0)
                            int32_t var_80_57 = eax_495
                            eax_496, ecx_186, edx_61 = _malloc()
                        else
                            eax_496, edx_61, ecx_186 = ecx_185(eax_495, 
                                "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\spanimation.c", 
                                0xef)
                        
                        if (eax_496 != 0)
                            ecx_186, edx_61 = _memset(eax_496, 0, eax_495)
                        
                        esi_35[4] = eax_496
                        int32_t eax_498 = *(var_3c_8 + 0x1c)
                        float xmm1_6
                        
                        if (eax_498 == 0)
                            xmm1_6 = *arg3
                            var_28_4 = xmm1_6
                        else
                            cond:1_1 = eax_498 != 1
                        label_52a011:
                            
                            if (cond:1_1)
                                xmm1_6 = 1f
                            else
                                xmm1_6 = *arg3
                                var_28_4 = xmm1_6
                        
                        esi_35[5] = var_20_2
                        int32_t var_38_8 = 0
                        
                        if (k s> 0)
                            int32_t eax_506 = k - 1
                            int32_t ecx_203
                            
                            do
                                char* eax_507 = *edi_1
                                ecx_186.b = *eax_507
                                *edi_1 = &eax_507[1]
                                edx_61:1.b = eax_507[1]
                                *edi_1 = &eax_507[2]
                                edx_61.b = eax_507[2]
                                *edi_1 = &eax_507[3]
                                k.b = eax_507[3]
                                *edi_1 = &eax_507[4]
                                uint32_t var_58_19 = ((zx.d(ecx_186.b) << 8 | zx.d(edx_61:1.b)) << 8
                                    | zx.d(edx_61.b)) << 8 | zx.d(k.b)
                                uint32_t ecx_195
                                ecx_195.b = eax_507[4]
                                *edi_1 = &eax_507[5]
                                edx_61.b = eax_507[5]
                                esi_35 = var_34_4
                                *edi_1 = &eax_507[6]
                                k.b = eax_507[6]
                                *edi_1 = &eax_507[7]
                                edx_61:1.b = eax_507[7]
                                *edi_1 = &eax_507[8]
                                ecx_203 = var_38_8
                                *(esi_35[4] + (ecx_203 << 3)) = var_58_19
                                int32_t eax_522 = esi_35[4]
                                *(eax_522 + (ecx_203 << 3) + 4) = (
                                    ((zx.d(ecx_195.b) << 8 | zx.d(edx_61.b)) << 8 | zx.d(k.b)) << 8
                                    | zx.d(edx_61:1.b)) * xmm1_6
                                
                                if (ecx_203 s< eax_506)
                                    sub_527f00(eax_522, esi_35, edi_1, ecx_203)
                                    xmm1_6 = var_28_4
                                    ecx_203 = var_38_8
                                
                                k = k_1
                                var_38_8 = ecx_203 + 1
                            while (ecx_203 + 1 s< k)
                        
                        int32_t* edx_63 = var_c
                        ecx = *edx_63
                        
                        if (ecx == edx_63[1])
                            int32_t eax_523 = int.d(_mm_cvtepi32_ps(zx.o(ecx)) * 1.75f)
                            
                            if (eax_523 s< 8)
                                eax_523 = 8
                            
                            edx_63[1] = eax_523
                            int32_t var_80_63 = eax_523 << 2
                            int32_t var_84_12 = edx_63[2]
                            int32_t eax_525 = sub_57fb2f()
                            edx_63 = var_c
                            ecx = *edx_63
                            edx_63[2] = eax_525
                        
                        *(edx_63[2] + (ecx << 2)) = esi_35
                        *edx_63 += 1
                        xmm0_87 = *(esi_35[4] + (k << 3) - 8)
                    label_52a210:
                        
                        if (not(var_10 f> xmm0_87))
                            var_10 = xmm0_87
                    else if (ecx:1.b == 2)
                        int32_t eax_456 = data_1151ae0
                        int32_t* var_40_9
                        int32_t* eax_457
                        int32_t* esi_32
                        
                        if (eax_456 == 0)
                            int32_t var_80_51 = 0x18
                            eax_457 = _malloc()
                            var_40_9 = eax_457
                            esi_32 = eax_457
                        else
                            eax_457 = eax_456(0x18, 
                                "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\spanimation.c", 
                                0xeb)
                            esi_32 = eax_457
                            var_40_9 = esi_32
                        
                        if (esi_32 != 0)
                            __builtin_memset(esi_32, 0, 0x18)
                        
                        sub_56d900(eax_457, 0xd, esi_32, k, sub_56db00, sub_5718f0, sub_571a70)
                        int32_t ecx_160 = data_1151ae0
                        int32_t eax_458 = k * 3
                        esi_32[3] = eax_458
                        int32_t eax_459 = eax_458 << 2
                        uint32_t (* eax_460)[0x4]
                        uint32_t ecx_161
                        int16_t edx_58
                        
                        if (ecx_160 == 0)
                            int32_t var_80_52 = eax_459
                            eax_460, ecx_161, edx_58 = _malloc()
                        else
                            eax_460, edx_58, ecx_161 = ecx_160(eax_459, 
                                "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\spanimation.c", 
                                0xef)
                        
                        if (eax_460 != 0)
                            ecx_161, edx_58 = _memset(eax_460, 0, eax_459)
                        
                        esi_32[4] = eax_460
                        esi_32[5] = var_20_2
                        int32_t var_38_7 = 0
                        
                        if (k s> 0)
                            int32_t eax_462 = k - 1
                            void* var_44_4 = nullptr
                            int32_t eax_486
                            
                            do
                                char* eax_463 = *edi_1
                                ecx_161.b = *eax_463
                                *edi_1 = &eax_463[1]
                                edx_58:1.b = eax_463[1]
                                *edi_1 = &eax_463[2]
                                edx_58.b = eax_463[2]
                                *edi_1 = &eax_463[3]
                                k.b = eax_463[3]
                                *edi_1 = &eax_463[4]
                                uint32_t var_58_16 = ((zx.d(ecx_161.b) << 8 | zx.d(edx_58:1.b)) << 8
                                    | zx.d(edx_58.b)) << 8 | zx.d(k.b)
                                uint32_t ecx_168
                                ecx_168.b = eax_463[4]
                                *edi_1 = &eax_463[5]
                                edx_58.b = eax_463[5]
                                *edi_1 = &eax_463[6]
                                k.b = eax_463[6]
                                *edi_1 = &eax_463[7]
                                edx_58:1.b = eax_463[7]
                                *edi_1 = &eax_463[8]
                                uint32_t var_54_8 =
                                    ((zx.d(ecx_168.b) << 8 | zx.d(edx_58.b)) << 8 | zx.d(k.b)) << 8
                                    | zx.d(edx_58:1.b)
                                uint32_t ecx_175
                                ecx_175.b = eax_463[8]
                                *edi_1 = &eax_463[9]
                                edx_58.b = eax_463[9]
                                esi_32 = var_40_9
                                *edi_1 = &eax_463[0xa]
                                k.b = eax_463[0xa]
                                *edi_1 = &eax_463[0xb]
                                edx_58:1.b = eax_463[0xb]
                                *edi_1 = &eax_463[0xc]
                                uint32_t* ebx_49 = var_44_4
                                *(ebx_49 + esi_32[4]) = var_58_16
                                *(esi_32[4] + ebx_49 + 4) = var_54_8
                                *(esi_32[4] + ebx_49 + 8) =
                                    ((zx.d(ecx_175.b) << 8 | zx.d(edx_58.b)) << 8 | zx.d(k.b)) << 8
                                    | zx.d(edx_58:1.b)
                                eax_486 = var_38_7
                                
                                if (eax_486 s< eax_462)
                                    ecx_161, edx_58 = sub_527f00(eax_486, esi_32, edi_1, eax_486)
                                    eax_486 = var_38_7
                                
                                var_44_4 = &ebx_49[3]
                                k = k_1
                                var_38_7 = eax_486 + 1
                            while (eax_486 + 1 s< k)
                        
                        int32_t* edx_60 = var_c
                        int32_t ecx_183 = *edx_60
                        
                        if (ecx_183 == edx_60[1])
                            int32_t eax_488 = int.d(_mm_cvtepi32_ps(zx.o(ecx_183)) * 1.75f)
                            
                            if (eax_488 s< 8)
                                eax_488 = 8
                            
                            edx_60[1] = eax_488
                            int32_t var_80_55 = eax_488 << 2
                            int32_t var_84_11 = edx_60[2]
                            int32_t eax_490 = sub_57fb2f()
                            edx_60 = var_c
                            ecx_183 = *edx_60
                            edx_60[2] = eax_490
                        
                        *(edx_60[2] + (ecx_183 << 2)) = esi_32
                        *edx_60 += 1
                        xmm0_87 = *(esi_32[4] + k * 0xc - 0xc)
                        goto label_52a210
                    j_1 = j_3
                    j_3 -= 1
                while (j_1 != 1)
                edx_52 = *edi_1
                esi_31 = edx_52
            
            i_7 = i_14
            i_14 -= 1
        while (i_7 != 1)
    
    eax_5.b = *edx_52
    void* edx_64 = edx_52 + 1
    int32_t ebx_52 = zx.d(eax_5.b) & 0x7f
    char* var_58_20 = nullptr
    *edi_1 = edx_64
    int32_t var_34_5 = ebx_52
    
    if (eax_5.b s< 0)
        ecx.b = *edx_64
        edx_64 += 1
        *edi_1 = edx_64
        ebx_52 |= (zx.d(ecx.b) & 0x7f) << 7
        var_34_5 = ebx_52
        
        if (ecx.b s< 0)
            ecx.b = *edx_64
            edx_64 += 1
            *edi_1 = edx_64
            ebx_52 |= (zx.d(ecx.b) & 0x7f) << 0xe
            var_34_5 = ebx_52
            
            if (ecx.b s< 0)
                ecx.b = *edx_64
                edx_64 += 1
                *edi_1 = edx_64
                ebx_52 |= (zx.d(ecx.b) & 0x7f) << 0x15
                var_34_5 = ebx_52
                
                if (ecx.b s< 0)
                    eax_5.b = *edx_64
                    edx_64 += 1
                    ebx_52 |= zx.d(eax_5.b) << 0x1c
                    *edi_1 = edx_64
                    var_34_5 = ebx_52
    
    if (ebx_52 s> 0)
        do
            char* eax_534 = *edi_1
            ecx.b = *eax_534
            void* edx_65 = &eax_534[1]
            int32_t esi_38 = zx.d(ecx.b) & 0x7f
            *edi_1 = edx_65
            
            if (ecx.b s< 0)
                ecx.b = *edx_65
                edx_65 += 1
                *edi_1 = edx_65
                esi_38 |= (zx.d(ecx.b) & 0x7f) << 7
                
                if (ecx.b s< 0)
                    ecx.b = *edx_65
                    edx_65 += 1
                    *edi_1 = edx_65
                    esi_38 |= (zx.d(ecx.b) & 0x7f) << 0xe
                    
                    if (ecx.b s< 0)
                        ecx.b = *edx_65
                        edx_65 += 1
                        *edi_1 = edx_65
                        esi_38 |= (zx.d(ecx.b) & 0x7f) << 0x15
                        
                        if (ecx.b s< 0)
                            int32_t eax_543
                            eax_543.b = *edx_65
                            edx_65 += 1
                            *edi_1 = edx_65
                            esi_38 |= zx.d(eax_543.b) << 0x1c
            
            int32_t var_54_10 = 0
            int32_t var_5c_1 = *(*(arg5 + 0x34) + (esi_38 << 2))
            int32_t eax_548
            eax_548.b = *edx_65
            int32_t ebx_54 = zx.d(eax_548.b) & 0x7f
            *edi_1 = edx_65 + 1
            int32_t var_30_4 = ebx_54
            
            if (eax_548.b s< 0)
                ecx.b = *(edx_65 + 1)
                *edi_1 = edx_65 + 2
                ebx_54 |= (zx.d(ecx.b) & 0x7f) << 7
                var_30_4 = ebx_54
                
                if (ecx.b s< 0)
                    ecx.b = *(edx_65 + 2)
                    *edi_1 = edx_65 + 3
                    ebx_54 |= (zx.d(ecx.b) & 0x7f) << 0xe
                    var_30_4 = ebx_54
                    
                    if (ecx.b s< 0)
                        ecx.b = *(edx_65 + 3)
                        *edi_1 = edx_65 + 4
                        ebx_54 |= (zx.d(ecx.b) & 0x7f) << 0x15
                        var_30_4 = ebx_54
                        
                        if (ecx.b s< 0)
                            ecx.b = *(edx_65 + 4)
                            *edi_1 = edx_65 + 5
                            ebx_54 |= zx.d(ecx.b) << 0x1c
                            var_30_4 = ebx_54
            
            if (ebx_54 s> 0)
                int32_t esi_60
                
                do
                    uint32_t eax_563 = *edi_1
                    ecx.b = *eax_563
                    void* edx_70 = eax_563 + 1
                    int32_t ebx_56 = zx.d(ecx.b) & 0x7f
                    *edi_1 = edx_70
                    int32_t var_20_3 = ebx_56
                    
                    if (ecx.b s< 0)
                        ecx.b = *edx_70
                        edx_70 += 1
                        *edi_1 = edx_70
                        ebx_56 |= (zx.d(ecx.b) & 0x7f) << 7
                        var_20_3 = ebx_56
                        
                        if (ecx.b s< 0)
                            ecx.b = *edx_70
                            edx_70 += 1
                            *edi_1 = edx_70
                            ebx_56 |= (zx.d(ecx.b) & 0x7f) << 0xe
                            var_20_3 = ebx_56
                            
                            if (ecx.b s< 0)
                                ecx.b = *edx_70
                                edx_70 += 1
                                *edi_1 = edx_70
                                ebx_56 |= (zx.d(ecx.b) & 0x7f) << 0x15
                                var_20_3 = ebx_56
                                
                                if (ecx.b s< 0)
                                    eax_563.b = *edx_70
                                    edx_70 += 1
                                    ebx_56 |= zx.d(eax_563.b) << 0x1c
                                    *edi_1 = edx_70
                                    var_20_3 = ebx_56
                    
                    eax_563.b = *edx_70
                    int32_t esi_40 = zx.d(eax_563.b) & 0x7f
                    int32_t var_50_7 = 0
                    *edi_1 = edx_70 + 1
                    int32_t var_2c_2 = esi_40
                    
                    if (eax_563.b s< 0)
                        ecx.b = *(edx_70 + 1)
                        *edi_1 = edx_70 + 2
                        esi_40 |= (zx.d(ecx.b) & 0x7f) << 7
                        var_2c_2 = esi_40
                        
                        if (ecx.b s< 0)
                            ecx.b = *(edx_70 + 2)
                            *edi_1 = edx_70 + 3
                            esi_40 |= (zx.d(ecx.b) & 0x7f) << 0xe
                            var_2c_2 = esi_40
                            
                            if (ecx.b s< 0)
                                ecx.b = *(edx_70 + 3)
                                *edi_1 = edx_70 + 4
                                esi_40 |= (zx.d(ecx.b) & 0x7f) << 0x15
                                var_2c_2 = esi_40
                                
                                if (ecx.b s< 0)
                                    ecx.b = *(edx_70 + 4)
                                    *edi_1 = edx_70 + 5
                                    esi_40 |= zx.d(ecx.b) << 0x1c
                                    var_2c_2 = esi_40
                    
                    if (esi_40 s> 0)
                        int32_t eax_691
                        
                        do
                            char* eax_581 = sub_527e70(edi_1, arg5)
                            void* eax_582 = sub_571ef0(eax_581, ebx_56, var_5c_1, eax_581)
                            
                            if (eax_582 == 0)
                                int32_t i_8 = 0
                                
                                if (*var_c s> 0)
                                    do
                                        void* eax_710 = *(var_c[2] + (i_8 << 2))
                                        (*(*(eax_710 + 4) + 8))(eax_710)
                                        i_8 += 1
                                    while (i_8 s< *var_c)
                                
                                _free(var_c[2])
                                sub_527c10(_free(var_c), "Attachment not found: ", arg3, eax_581)
                                return 0
                            
                            int32_t ecx_207 = *(eax_582 + 0x18)
                            int32_t ebx_57 = *(eax_582 + 0x1c)
                            int32_t var_24_4 = ebx_57
                            
                            if (ecx_207 != 0)
                                ebx_57 = ebx_57 s/ 3 * 2
                                var_24_4 = ebx_57
                            
                            int32_t eax_584 = data_1151ae0
                            int32_t ecx_208 = ebx_57 << 2
                            uint32_t (* var_18_3)[0x4]
                            uint32_t (* esi_42)[0x4]
                            
                            if (eax_584 == 0)
                                int32_t var_80_65 = ecx_208
                                uint32_t (* eax_586)[0x4] = _malloc()
                                var_18_3 = eax_586
                                esi_42 = eax_586
                            else
                                esi_42 = eax_584(ecx_208, 
                                    "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\s"
                                "keletonbinary.c", 
                                    0x1f0)
                                var_18_3 = esi_42
                            
                            char* eax_587 = *edi_1
                            char ecx_209 = *eax_587
                            uint32_t eax_589 = zx.d(ecx_209) & 0x7f
                            *edi_1 = &eax_587[1]
                            uint32_t var_14_2 = eax_589
                            
                            if (ecx_209 s< 0)
                                ecx_209 = eax_587[1]
                                *edi_1 = &eax_587[2]
                                var_14_2 |= (zx.d(ecx_209) & 0x7f) << 7
                                
                                if (ecx_209 s< 0)
                                    ecx_209 = eax_587[2]
                                    *edi_1 = &eax_587[3]
                                    var_14_2 |= (zx.d(ecx_209) & 0x7f) << 0xe
                                    
                                    if (ecx_209 s< 0)
                                        ecx_209 = eax_587[3]
                                        *edi_1 = &eax_587[4]
                                        var_14_2 |= (zx.d(ecx_209) & 0x7f) << 0x15
                                        
                                        if (ecx_209 s< 0)
                                            ecx_209 = eax_587[4]
                                            *edi_1 = &eax_587[5]
                                            var_14_2 |= zx.d(ecx_209) << 0x1c
                                
                                eax_589 = var_14_2
                            
                            int32_t* eax_602
                            int16_t edx_83
                            eax_602, edx_83 = sub_570d10(eax_589, ebx_57)
                            int32_t* ebx_61 = eax_602
                            int32_t* var_48_2 = nullptr
                            int32_t* var_4c_5 = ebx_61
                            ebx_61[7] = var_20_3
                            ebx_61[8] = eax_582
                            
                            if (var_14_2 s> 0)
                                do
                                    char* eax_607 = *edi_1
                                    char ecx_211 = *eax_607
                                    *edi_1 = &eax_607[1]
                                    edx_83:1.b = eax_607[1]
                                    *edi_1 = &eax_607[2]
                                    edx_83.b = eax_607[2]
                                    *edi_1 = &eax_607[3]
                                    ebx_61.b = eax_607[3]
                                    *edi_1 = &eax_607[4]
                                    uint32_t eax_613
                                    eax_613.b = eax_607[4]
                                    void* esi_44 = &eax_607[5]
                                    void* edx_85 = zx.d(eax_613.b) & 0x7f
                                    *edi_1 = esi_44
                                    void* var_28_5 = edx_85
                                    uint32_t ecx_218
                                    
                                    if (eax_613.b s< 0)
                                        ecx_218.b = *esi_44
                                        esi_44 += 1
                                        *edi_1 = esi_44
                                        edx_85 |= (zx.d(ecx_218.b) & 0x7f) << 7
                                        var_28_5 = edx_85
                                        
                                        if (ecx_218.b s< 0)
                                            ecx_218.b = *esi_44
                                            esi_44 += 1
                                            *edi_1 = esi_44
                                            edx_85 |= (zx.d(ecx_218.b) & 0x7f) << 0xe
                                            var_28_5 = edx_85
                                            
                                            if (ecx_218.b s< 0)
                                                ecx_218.b = *esi_44
                                                esi_44 += 1
                                                *edi_1 = esi_44
                                                edx_85 |= (zx.d(ecx_218.b) & 0x7f) << 0x15
                                                var_28_5 = edx_85
                                                
                                                if (ecx_218.b s< 0)
                                                    eax_613.b = *esi_44
                                                    esi_44 += 1
                                                    edx_85 |= zx.d(eax_613.b) << 0x1c
                                                    *edi_1 = esi_44
                                                    var_28_5 = edx_85
                                    
                                    uint32_t (* var_38_9)[0x4]
                                    
                                    if (edx_85 != 0)
                                        eax_613.b = *esi_44
                                        uint32_t (* ebx_64)[0x4] = zx.d(eax_613.b) & 0x7f
                                        *edi_1 = esi_44 + 1
                                        
                                        if (eax_613.b s< 0)
                                            ecx_218.b = *(esi_44 + 1)
                                            *edi_1 = esi_44 + 2
                                            ebx_64 |= (zx.d(ecx_218.b) & 0x7f) << 7
                                            
                                            if (ecx_218.b s< 0)
                                                ecx_218.b = *(esi_44 + 2)
                                                *edi_1 = esi_44 + 3
                                                ebx_64 |= (zx.d(ecx_218.b) & 0x7f) << 0xe
                                                
                                                if (ecx_218.b s< 0)
                                                    ecx_218.b = *(esi_44 + 3)
                                                    *edi_1 = esi_44 + 4
                                                    ebx_64 |= (zx.d(ecx_218.b) & 0x7f) << 0x15
                                                    
                                                    if (ecx_218.b s< 0)
                                                        ecx_218.b = *(esi_44 + 4)
                                                        *edi_1 = esi_44 + 5
                                                        ebx_64 |= zx.d(ecx_218.b) << 0x1c
                                        
                                        var_38_9 = var_18_3
                                        _memset(var_18_3, 0, ebx_64 << 2)
                                        uint32_t (* esi_49)[0x4] = ebx_64
                                        void* ecx_221 = var_28_5 + ebx_64
                                        void* var_44_7 = ecx_221
                                        float xmm0_94 = *arg3
                                        xmm0_94 - 1f
                                        float* eax_636
                                        eax_636:1.b = (xmm0_94 == 1f ? 1 : 0) << 6
                                            | (is_unordered.d(xmm0_94, 1f) ? 1 : 0) << 2
                                            | (xmm0_94 < 1f ? 1 : 0)
                                        bool p_2 = unimplemented  {test ah, 0x44}
                                        int16_t edx_86
                                        
                                        if (p_2)
                                            if (ebx_64 s>= ecx_221)
                                                ebx_64 = var_18_3
                                            else
                                                do
                                                    char* eax_645 = *edi_1
                                                    ecx_221.b = *eax_645
                                                    *edi_1 = &eax_645[1]
                                                    edx_86:1.b = eax_645[1]
                                                    *edi_1 = &eax_645[2]
                                                    edx_86.b = eax_645[2]
                                                    *edi_1 = &eax_645[3]
                                                    ebx_64.b = eax_645[3]
                                                    *edi_1 = &eax_645[4]
                                                    uint32_t eax_652 = zx.d(ebx_64.b)
                                                    ebx_64 = var_18_3
                                                    (*ebx_64)[esi_49] = *arg3 f* ((
                                                        (zx.d(ecx_221.b) << 8 | zx.d(edx_86:1.b)) << 8
                                                        | zx.d(edx_86.b)) << 8 | eax_652)
                                                    esi_49 += 1
                                                while (esi_49 s< var_44_7)
                                        else if (ebx_64 s>= ecx_221)
                                            ebx_64 = var_18_3
                                        else
                                            do
                                                char* eax_637 = *edi_1
                                                ecx_221.b = *eax_637
                                                *edi_1 = &eax_637[1]
                                                edx_86:1.b = eax_637[1]
                                                *edi_1 = &eax_637[2]
                                                edx_86.b = eax_637[2]
                                                *edi_1 = &eax_637[3]
                                                ebx_64.b = eax_637[3]
                                                *edi_1 = &eax_637[4]
                                                uint32_t eax_644 = zx.d(ebx_64.b)
                                                ebx_64 = var_18_3
                                                (*ebx_64)[esi_49] = (
                                                    (zx.d(ecx_221.b) << 8 | zx.d(edx_86:1.b)) << 8
                                                    | zx.d(edx_86.b)) << 8 | eax_644
                                                esi_49 += 1
                                            while (esi_49 s< var_44_7)
                                        _memset(&(*ebx_64)[esi_49], 0, (var_24_4 - esi_49) << 2)
                                        
                                        if (ecx_207 == 0)
                                            int32_t i_9 = 0
                                            int32_t edx_87 = var_24_4
                                            void* esi_50 = *(eax_582 + 0x20)
                                            
                                            if (edx_87 s> 0)
                                                if (edx_87 u>= 0x10)
                                                    if (ebx_64 u<= (edx_87 << 2) - 4 + esi_50)
                                                        edi_1 = arg4
                                                    
                                                    if (ebx_64 u> (edx_87 << 2) - 4 + esi_50
                                                            || (edx_87 << 2) - 4 + ebx_64 u< esi_50)
                                                        int32_t eax_666 = edx_87 & 0x8000000f
                                                        
                                                        if (eax_666 s< 0)
                                                            eax_666 = ((eax_666 - 1) | 0xfffffff0) + 1
                                                        
                                                        uint32_t* eax_669 = &ebx_64[1]
                                                        edi_1 = arg4
                                                        void* edx_89 = esi_50 + 0x30
                                                        
                                                        do
                                                            i_9 += 0x10
                                                            *(eax_669 - 0x10) = _mm_add_ps(
                                                                *(edx_89 - 0x30), *(eax_669 - 0x10))
                                                            *eax_669 = _mm_add_ps(
                                                                *(esi_50 - ebx_64 + eax_669), *eax_669)
                                                            float xmm1_13[0x4] = _mm_add_ps(
                                                                *(edx_89 - 0x10), *(eax_669 + 0x10))
                                                            float xmm0_100[0x4] = *edx_89
                                                            edx_89 += 0x40
                                                            *(eax_669 + 0x10) = xmm1_13
                                                            *(eax_669 + 0x20) =
                                                                _mm_add_ps(*(eax_669 + 0x20), xmm0_100)
                                                            eax_669 = &eax_669[0x10]
                                                        while (i_9 s< edx_87 - eax_666)
                                                        
                                                        ebx_64 = var_18_3
                                                        edx_87 = var_24_4
                                                
                                                if (i_9 s< edx_87)
                                                    if (edx_87 - i_9 s>= 4)
                                                        void* edx_91 = esi_50 + 0xc + (i_9 << 2)
                                                        void* eax_673 = &(*ebx_64)[i_9 + 1]
                                                        int32_t i_20 = ((var_24_4 - i_9 - 4) u>> 2) + 1
                                                        i_9 += i_20 << 2
                                                        int32_t i_10
                                                        
                                                        do
                                                            *(eax_673 - 4) =
                                                                *(edx_91 - 0xc) f+ *(eax_673 - 4)
                                                            *eax_673 =
                                                                *(esi_50 - ebx_64 + eax_673) f+ *eax_673
                                                            *(eax_673 + 4) =
                                                                *(edx_91 - 4) f+ *(eax_673 + 4)
                                                            float xmm0_108 = *(eax_673 + 8) f+ *edx_91
                                                            edx_91 += 0x10
                                                            *(eax_673 + 8) = xmm0_108
                                                            eax_673 += 0x10
                                                            i_10 = i_20
                                                            i_20 -= 1
                                                        while (i_10 != 1)
                                                        ebx_64 = var_18_3
                                                        edx_87 = var_24_4
                                                    
                                                    if (i_9 s< edx_87)
                                                        void* eax_674 = &(*ebx_64)[i_9]
                                                        int32_t i_19 = edx_87 - i_9
                                                        int32_t i_11
                                                        
                                                        do
                                                            *eax_674 =
                                                                *(esi_50 - ebx_64 + eax_674) f+ *eax_674
                                                            eax_674 += 4
                                                            i_11 = i_19
                                                            i_19 -= 1
                                                        while (i_11 != 1)
                                    else if (ecx_207 == edx_85)
                                        var_38_9 = *(eax_582 + 0x20)
                                    else
                                        var_38_9 = var_18_3
                                        _memset(var_18_3, edx_85.b, ecx_208)
                                    
                                    *(var_4c_5[4] + (var_48_2 << 2)) = (
                                        (zx.d(ecx_211) << 8 | zx.d(edx_83:1.b)) << 8 | zx.d(edx_83.b)) << 8
                                        | zx.d(ebx_61.b)
                                    _free(*(var_4c_5[6] + (var_48_2 << 2)))
                                    char* eax_677
                                    
                                    if (var_38_9 != 0)
                                        int32_t ecx_234 = data_1151ae0
                                        int32_t eax_679 = var_4c_5[5] << 2
                                        int32_t eax_680
                                        
                                        if (ecx_234 == 0)
                                            int32_t var_80_70 = eax_679
                                            eax_680 = _malloc()
                                        else
                                            eax_680 = ecx_234(eax_679, 
                                                "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\s"
                                            "panimation.c", 
                                                0x47a)
                                        
                                        *(var_4c_5[6] + (var_48_2 << 2)) = eax_680
                                        eax_677, edx_83 = sub_579300(*(var_4c_5[6] + (var_48_2 << 2)), 
                                            var_38_9, var_4c_5[5] << 2)
                                    else
                                        eax_677 = var_4c_5[6]
                                        *(eax_677 + (var_48_2 << 2)) = 0
                                    
                                    if (var_48_2 s< var_14_2 - 1)
                                        sub_527f00(eax_677, var_4c_5, edi_1, var_48_2)
                                    
                                    ebx_61 = var_48_2 + 1
                                    var_48_2 = ebx_61
                                while (ebx_61 s< var_14_2)
                                
                                esi_42 = var_18_3
                                ebx_61 = var_4c_5
                            
                            _free(esi_42)
                            int32_t ecx_237 = *var_c
                            
                            if (ecx_237 == var_c[1])
                                int32_t eax_685 = int.d(_mm_cvtepi32_ps(zx.o(ecx_237)) * 1.75f)
                                
                                if (eax_685 s< 8)
                                    eax_685 = 8
                                
                                var_c[1] = eax_685
                                int32_t var_80_74 = eax_685 << 2
                                int32_t var_84_15 = var_c[2]
                                int32_t eax_687 = sub_57fb2f()
                                ecx_237 = *var_c
                                var_c[2] = eax_687
                            
                            *(var_c[2] + (ecx_237 << 2)) = ebx_61
                            *var_c += 1
                            int32_t xmm0_115 = *(ebx_61[4] + (var_14_2 << 2) - 4)
                            
                            if (not(var_10 f> xmm0_115))
                                var_10 = xmm0_115
                            
                            ebx_56 = var_20_3
                            eax_691 = var_50_7 + 1
                            var_50_7 = eax_691
                        while (eax_691 s< var_2c_2)
                    
                    esi_60 = var_54_10 + 1
                    var_54_10 = esi_60
                while (esi_60 s< var_30_4)
            
            eax_5 = &var_58_20[1]
            var_58_20 = eax_5
        while (eax_5 s< var_34_5)
        
        edx_64 = *edi_1
    
    eax_5.b = *edx_64
    int32_t ebx_69 = zx.d(eax_5.b) & 0x7f
    *edi_1 = edx_64 + 1
    int32_t var_24_5 = ebx_69
    
    if (eax_5.b s< 0)
        ecx.b = *(edx_64 + 1)
        *edi_1 = edx_64 + 2
        ebx_69 |= (zx.d(ecx.b) & 0x7f) << 7
        var_24_5 = ebx_69
        
        if (ecx.b s< 0)
            ecx.b = *(edx_64 + 2)
            *edi_1 = edx_64 + 3
            ebx_69 |= (zx.d(ecx.b) & 0x7f) << 0xe
            var_24_5 = ebx_69
            
            if (ecx.b s< 0)
                ecx.b = *(edx_64 + 3)
                *edi_1 = edx_64 + 4
                ebx_69 |= (zx.d(ecx.b) & 0x7f) << 0x15
                var_24_5 = ebx_69
                
                if (ecx.b s< 0)
                    ecx.b = *(edx_64 + 4)
                    *edi_1 = edx_64 + 5
                    ebx_69 |= zx.d(ecx.b) << 0x1c
                    var_24_5 = ebx_69
    
    if (ebx_69 != 0)
        int32_t* eax_706 = *(arg5 + 0x28)
        int32_t eax_707 = data_1151ae0
        int32_t* var_58_21
        int32_t* esi_61
        
        if (eax_707 == 0)
            int32_t var_80_77 = 0x18
            int32_t* eax_714 = _malloc()
            var_58_21 = eax_714
            esi_61 = eax_714
        else
            esi_61 = eax_707(0x18, 
                "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\spanimation.c", 0x501)
            var_58_21 = esi_61
        
        if (esi_61 != 0)
            __builtin_memset(esi_61, 0, 0x18)
        
        int32_t eax_715 = data_1151ae0
        *esi_61 = 8
        int32_t* eax_716
        
        if (eax_715 == 0)
            int32_t var_80_78 = 0xc
            eax_716 = _malloc()
        else
            eax_716 = eax_715(0xc, 
                "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\spanimation.c", 0x52)
        
        if (eax_716 != 0)
            *eax_716 = 0
            eax_716[1] = 0
        
        esi_61[1] = eax_716
        int32_t ecx_240 = ebx_69 << 2
        eax_716[2] = sub_5710e0
        *esi_61[1] = sub_571010
        *(esi_61[1] + 4) = sub_5710d0
        int32_t eax_719 = data_1151ae0
        esi_61[2] = ebx_69
        uint32_t (* eax_720)[0x4]
        
        if (eax_719 == 0)
            int32_t var_80_79 = ecx_240
            eax_720 = _malloc()
        else
            eax_720 = eax_719(ecx_240, 
                "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\spanimation.c", 0x505)
        
        if (eax_720 != 0)
            _memset(eax_720, 0, ecx_240)
        
        int32_t eax_721 = data_1151ae0
        esi_61[3] = eax_720
        uint32_t (* eax_722)[0x4]
        int16_t edx_97
        
        if (eax_721 == 0)
            int32_t var_80_81 = ecx_240
            eax_722, edx_97 = _malloc()
        else
            eax_722, edx_97 = eax_721(ecx_240, 
                "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\spanimation.c", 0x506)
        
        if (eax_722 != 0)
            _memset(eax_722, 0, ecx_240)
        
        esi_61[4] = eax_722
        esi_61[5] = eax_706
        int32_t var_30_5 = 0
        
        if (var_24_5 s> 0)
            int32_t eax_787
            
            do
                char* eax_724 = *edi_1
                char ecx_241 = *eax_724
                *edi_1 = &eax_724[1]
                edx_97:1.b = eax_724[1]
                *edi_1 = &eax_724[2]
                edx_97.b = eax_724[2]
                *edi_1 = &eax_724[3]
                uint32_t (* ebx_72)[0x4]
                ebx_72.b = eax_724[3]
                *edi_1 = &eax_724[4]
                uint32_t eax_730
                eax_730.b = eax_724[4]
                int32_t* ebx_74 = zx.d(eax_730.b) & 0x7f
                uint32_t var_6c_2 = ((zx.d(ecx_241) << 8 | zx.d(edx_97:1.b)) << 8 | zx.d(edx_97.b)) << 8
                    | zx.d(ebx_72.b)
                *edi_1 = &eax_724[5]
                arg4 = ebx_74
                
                if (eax_730.b s< 0)
                    uint32_t ecx_248
                    ecx_248.b = eax_724[5]
                    *edi_1 = &eax_724[6]
                    ebx_74 |= (zx.d(ecx_248.b) & 0x7f) << 7
                    arg4 = ebx_74
                    
                    if (ecx_248.b s< 0)
                        ecx_248.b = eax_724[6]
                        *edi_1 = &eax_724[7]
                        ebx_74 |= (zx.d(ecx_248.b) & 0x7f) << 0xe
                        arg4 = ebx_74
                        
                        if (ecx_248.b s< 0)
                            ecx_248.b = eax_724[7]
                            *edi_1 = &eax_724[8]
                            ebx_74 |= (zx.d(ecx_248.b) & 0x7f) << 0x15
                            arg4 = ebx_74
                            
                            if (ecx_248.b s< 0)
                                ecx_248.b = eax_724[8]
                                *edi_1 = &eax_724[9]
                                ebx_74 |= zx.d(ecx_248.b) << 0x1c
                                arg4 = ebx_74
                
                int32_t ecx_249 = data_1151ae0
                int32_t eax_744 = *(arg5 + 0x28) << 2
                uint32_t (* eax_745)[0x4]
                
                if (ecx_249 == 0)
                    int32_t var_80_83 = eax_744
                    eax_745 = _malloc()
                else
                    eax_745 = ecx_249(eax_744, 
                        "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\skeletonbinary.c", 
                        0x226)
                
                int32_t ecx_250 = data_1151ae0
                int32_t eax_748 = (*(arg5 + 0x28) - ebx_74) << 2
                uint32_t (* eax_749)[0x4]
                
                if (ecx_250 == 0)
                    int32_t var_80_84 = eax_748
                    eax_749 = _malloc()
                else
                    eax_749 = ecx_250(eax_748, 
                        "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\skeletonbinary.c", 
                        0x227)
                
                char* ebx_75 = nullptr
                int32_t esi_64 = 0
                char* var_3c_10 = nullptr
                _memset(eax_745, 0xff, *(arg5 + 0x28) << 2)
                
                if (arg4 s> 0)
                    int32_t* i_12
                    
                    do
                        char* eax_755 = *edi_1
                        uint32_t (* ecx_251)[0x4]
                        ecx_251.b = *eax_755
                        void* edx_102 = &eax_755[1]
                        int32_t ebx_77 = zx.d(ecx_251.b) & 0x7f
                        *edi_1 = edx_102
                        
                        if (ecx_251.b s< 0)
                            ecx_251.b = *edx_102
                            edx_102 += 1
                            *edi_1 = edx_102
                            ebx_77 |= (zx.d(ecx_251.b) & 0x7f) << 7
                            
                            if (ecx_251.b s< 0)
                                ecx_251.b = *edx_102
                                edx_102 += 1
                                *edi_1 = edx_102
                                ebx_77 |= (zx.d(ecx_251.b) & 0x7f) << 0xe
                                
                                if (ecx_251.b s< 0)
                                    ecx_251.b = *edx_102
                                    edx_102 += 1
                                    *edi_1 = edx_102
                                    ebx_77 |= (zx.d(ecx_251.b) & 0x7f) << 0x15
                                    
                                    if (ecx_251.b s< 0)
                                        eax_755.b = *edx_102
                                        edx_102 += 1
                                        *edi_1 = edx_102
                                        ebx_77 |= zx.d(eax_755.b) << 0x1c
                        
                        if (esi_64 != ebx_77)
                            eax_755 = var_3c_10
                            
                            do
                                (*eax_749)[eax_755] = esi_64
                                esi_64 += 1
                                eax_755 = &eax_755[1]
                            while (esi_64 != ebx_77)
                            
                            edx_102 = *edi_1
                            var_3c_10 = eax_755
                        
                        eax_755.b = *edx_102
                        int32_t edx_104 = zx.d(eax_755.b) & 0x7f
                        *edi_1 = edx_102 + 1
                        
                        if (eax_755.b s< 0)
                            ecx_251.b = *(edx_102 + 1)
                            *edi_1 = edx_102 + 2
                            edx_104 |= (zx.d(ecx_251.b) & 0x7f) << 7
                            
                            if (ecx_251.b s< 0)
                                ecx_251.b = *(edx_102 + 2)
                                *edi_1 = edx_102 + 3
                                edx_104 |= (zx.d(ecx_251.b) & 0x7f) << 0xe
                                
                                if (ecx_251.b s< 0)
                                    ecx_251.b = *(edx_102 + 3)
                                    *edi_1 = edx_102 + 4
                                    edx_104 |= (zx.d(ecx_251.b) & 0x7f) << 0x15
                                    
                                    if (ecx_251.b s< 0)
                                        ecx_251.b = *(edx_102 + 4)
                                        *edi_1 = edx_102 + 5
                                        edx_104 |= zx.d(ecx_251.b) << 0x1c
                        
                        (*eax_745)[edx_104 + esi_64] = esi_64
                        esi_64 += 1
                        i_12 = arg4
                        arg4 -= 1
                    while (i_12 != 1)
                    ebx_75 = var_3c_10
                
                int32_t edx_105 = *(arg5 + 0x28)
                
                while (esi_64 s< edx_105)
                    (*eax_749)[ebx_75] = esi_64
                    esi_64 += 1
                    edx_105 = *(arg5 + 0x28)
                    ebx_75 = &ebx_75[1]
                
                int32_t edx_106 = edx_105 - 1
                
                if (edx_105 - 1 s< 0)
                    ebx_72 = eax_745
                else
                    void* esi_65 = &(*eax_749)[ebx_75]
                    ebx_72 = eax_745
                    int32_t temp12_1
                    
                    do
                        if ((*ebx_72)[edx_106] == 0xffffffff)
                            int32_t eax_775 = *(esi_65 - 4)
                            esi_65 -= 4
                            (*ebx_72)[edx_106] = eax_775
                        
                        temp12_1 = edx_106
                        edx_106 -= 1
                    while (temp12_1 - 1 s>= 0)
                
                _free(eax_749)
                esi_61 = var_58_21
                *(esi_61[3] + (var_30_5 << 2)) = var_6c_2
                _free(*(esi_61[4] + (var_30_5 << 2)))
                
                if (ebx_72 != 0)
                    int32_t ecx_255 = data_1151ae0
                    int32_t eax_780 = esi_61[5] << 2
                    int32_t eax_781
                    
                    if (ecx_255 == 0)
                        int32_t var_80_87 = eax_780
                        eax_781 = _malloc()
                    else
                        eax_781 = ecx_255(eax_780, 
                            "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\spanimation.c", 
                            0x513)
                    
                    *(esi_61[4] + (var_30_5 << 2)) = eax_781
                    sub_579300(*(esi_61[4] + (var_30_5 << 2)), ebx_72, esi_61[5] << 2)
                else
                    *(esi_61[4] + (var_30_5 << 2)) = ebx_72
                
                _free(ebx_72)
                eax_787 = var_30_5 + 1
                var_30_5 = eax_787
            while (eax_787 s< var_24_5)
        
        int32_t ecx_257 = *var_c
        
        if (ecx_257 == var_c[1])
            int32_t eax_788 = int.d(_mm_cvtepi32_ps(zx.o(ecx_257)) * 1.75f)
            
            if (eax_788 s< 8)
                eax_788 = 8
            
            var_c[1] = eax_788
            int32_t var_80_90 = eax_788 << 2
            int32_t var_84_19 = var_c[2]
            int32_t eax_790 = sub_57fb2f()
            ecx_257 = *var_c
            var_c[2] = eax_790
        
        *(var_c[2] + (ecx_257 << 2)) = esi_61
        *var_c += 1
        int32_t xmm0_120 = *(ecx_240 + esi_61[3] - 4)
        
        if (not(var_10 f> xmm0_120))
            var_10 = xmm0_120
    
    char* eax_793 = *edi_1
    ecx.b = *eax_793
    int32_t* esi_67 = zx.d(ecx.b) & 0x7f
    *edi_1 = &eax_793[1]
    arg4 = esi_67
    
    if (ecx.b s< 0)
        ecx.b = eax_793[1]
        *edi_1 = &eax_793[2]
        esi_67 |= (zx.d(ecx.b) & 0x7f) << 7
        arg4 = esi_67
        
        if (ecx.b s< 0)
            ecx.b = eax_793[2]
            *edi_1 = &eax_793[3]
            esi_67 |= (zx.d(ecx.b) & 0x7f) << 0xe
            arg4 = esi_67
            
            if (ecx.b s< 0)
                ecx.b = eax_793[3]
                *edi_1 = &eax_793[4]
                esi_67 |= (zx.d(ecx.b) & 0x7f) << 0x15
                arg4 = esi_67
                
                if (ecx.b s< 0)
                    ecx.b = eax_793[4]
                    *edi_1 = &eax_793[5]
                    esi_67 |= zx.d(ecx.b) << 0x1c
                    arg4 = esi_67
    
    int32_t* edi_6
    
    if (esi_67 == 0)
        edi_6 = var_c
    else
        int32_t eax_806 = data_1151ae0
        int32_t* var_54_11
        int32_t* ebx_83
        
        if (eax_806 == 0)
            int32_t var_80_91 = 0x14
            int32_t* eax_808 = _malloc()
            var_54_11 = eax_808
            ebx_83 = eax_808
        else
            ebx_83 = eax_806(0x14, 
                "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\spanimation.c", 0x4b6)
            var_54_11 = ebx_83
        
        if (ebx_83 != 0)
            ebx_83[1] = 0
            ebx_83[2] = 0
            ebx_83[3] = 0
            ebx_83[4] = 0
        
        int32_t eax_809 = data_1151ae0
        *ebx_83 = 7
        int32_t* eax_810
        
        if (eax_809 == 0)
            int32_t var_80_92 = 0xc
            eax_810 = _malloc()
        else
            eax_810 = eax_809(0xc, 
                "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\spanimation.c", 0x52)
        
        if (eax_810 != 0)
            *eax_810 = 0
            eax_810[1] = 0
        
        ebx_83[1] = eax_810
        int32_t ecx_258 = esi_67 << 2
        eax_810[2] = sub_570fb0
        *ebx_83[1] = sub_570eb0
        *(ebx_83[1] + 4) = sub_570fa0
        int32_t eax_813 = data_1151ae0
        ebx_83[2] = esi_67
        uint32_t (* eax_814)[0x4]
        
        if (eax_813 == 0)
            int32_t var_80_93 = ecx_258
            eax_814 = _malloc()
        else
            eax_814 = eax_813(ecx_258, 
                "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\spanimation.c", 0x4ba)
        
        if (eax_814 != 0)
            _memset(eax_814, 0, esi_67 << 2)
        
        ebx_83[3] = eax_814
        int32_t eax_815 = data_1151ae0
        uint32_t (* eax_816)[0x4]
        int32_t ecx_261
        int16_t edx_112
        
        if (eax_815 == 0)
            int32_t var_80_95 = esi_67 << 2
            eax_816, ecx_261, edx_112 = _malloc()
        else
            eax_816, edx_112, ecx_261 = eax_815(esi_67 << 2, 
                "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\spanimation.c", 0x4bb)
        
        if (eax_816 != 0)
            ecx_261, edx_112 = _memset(eax_816, 0, esi_67 << 2)
        
        ebx_83[4] = eax_816
        int32_t var_38_11 = 0
        
        if (esi_67 s> 0)
            do
                char* eax_818 = *edi_1
                ecx_261.b = *eax_818
                *edi_1 = &eax_818[1]
                edx_112:1.b = eax_818[1]
                *edi_1 = &eax_818[2]
                edx_112.b = eax_818[2]
                *edi_1 = &eax_818[3]
                ebx_83.b = eax_818[3]
                *edi_1 = &eax_818[4]
                uint32_t eax_824
                eax_824.b = eax_818[4]
                int32_t edx_114 = zx.d(eax_824.b) & 0x7f
                *edi_1 = &eax_818[5]
                
                if (eax_824.b s< 0)
                    uint32_t ecx_269
                    ecx_269.b = eax_818[5]
                    *edi_1 = &eax_818[6]
                    edx_114 |= (zx.d(ecx_269.b) & 0x7f) << 7
                    
                    if (ecx_269.b s< 0)
                        ecx_269.b = eax_818[6]
                        *edi_1 = &eax_818[7]
                        edx_114 |= (zx.d(ecx_269.b) & 0x7f) << 0xe
                        
                        if (ecx_269.b s< 0)
                            ecx_269.b = eax_818[7]
                            *edi_1 = &eax_818[8]
                            edx_114 |= (zx.d(ecx_269.b) & 0x7f) << 0x15
                            
                            if (ecx_269.b s< 0)
                                ecx_269.b = eax_818[8]
                                *edi_1 = &eax_818[9]
                                edx_114 |= zx.d(ecx_269.b) << 0x1c
                
                void* ebx_84 = *(*(arg5 + 0x40) + (edx_114 << 2))
                int32_t eax_839 = data_1151ae0
                int32_t* var_3c_11
                int32_t* esi_73
                
                if (eax_839 == 0)
                    int32_t var_80_97 = 0x1c
                    int32_t* eax_841 = _malloc()
                    var_3c_11 = eax_841
                    esi_73 = eax_841
                else
                    esi_73 = eax_839(0x1c, 
                        "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\event.c", 0x22)
                    var_3c_11 = esi_73
                
                if (esi_73 != 0)
                    __builtin_memset(&esi_73[2], 0, 0x14)
                
                *esi_73 = ebx_84
                esi_73[1] = ((zx.d(ecx_261.b) << 8 | zx.d(edx_112:1.b)) << 8 | zx.d(edx_112.b)) << 8
                    | zx.d(ebx_83.b)
                char* eax_842 = *edi_1
                char ecx_270 = *eax_842
                int32_t edx_116 = zx.d(ecx_270) & 0x7f
                *edi_1 = &eax_842[1]
                
                if (ecx_270 s< 0)
                    ecx_270 = eax_842[1]
                    *edi_1 = &eax_842[2]
                    edx_116 |= (zx.d(ecx_270) & 0x7f) << 7
                    
                    if (ecx_270 s< 0)
                        ecx_270 = eax_842[2]
                        *edi_1 = &eax_842[3]
                        edx_116 |= (zx.d(ecx_270) & 0x7f) << 0xe
                        
                        if (ecx_270 s< 0)
                            ecx_270 = eax_842[3]
                            *edi_1 = &eax_842[4]
                            edx_116 |= (zx.d(ecx_270) & 0x7f) << 0x15
                            
                            if (ecx_270 s< 0)
                                ecx_270 = eax_842[4]
                                *edi_1 = &eax_842[5]
                                edx_116 |= zx.d(ecx_270) << 0x1c
                
                esi_73[2] = edx_116 u>> 1 ^ neg.d(edx_116 & 1)
                char* eax_858 = *edi_1
                ecx_270 = *eax_858
                *edi_1 = &eax_858[1]
                int32_t edx_118
                edx_118:1.b = eax_858[1]
                *edi_1 = &eax_858[2]
                edx_118.b = eax_858[2]
                *edi_1 = &eax_858[3]
                void* ebx_85
                ebx_85.b = eax_858[3]
                *edi_1 = &eax_858[4]
                esi_73[3] = ((zx.d(ecx_270) << 8 | zx.d(edx_118:1.b)) << 8 | zx.d(edx_118.b)) << 8
                    | zx.d(ebx_85.b)
                char* eax_866 = *edi_1
                uint32_t ecx_277
                ecx_277.b = *eax_866
                *edi_1 = &eax_866[1]
                void* ecx_279
                int16_t edx_119
                void* ebx_86
                
                if (ecx_277.b == 0)
                    ebx_86 = ebx_84
                    char* esi_74 = *(ebx_86 + 0xc)
                    char* ecx_280 = esi_74
                    void* edx_120 = &ecx_280[1]
                    void* eax_867
                    
                    do
                        eax_867.b = *ecx_280
                        ecx_280 = &ecx_280[1]
                    while (eax_867.b != 0)
                    int32_t eax_869 = data_1151ae0
                    int32_t eax_870
                    
                    if (eax_869 == 0)
                        void* var_80_98 = ecx_280 - edx_120 + 1
                        eax_870, edx_119 = _malloc()
                    else
                        eax_870, edx_119 = eax_869(ecx_280 - edx_120 + 1, 
                            "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\skeletonbinary.c", 
                            0x24f)
                    
                    var_3c_11[4] = eax_870
                    ecx_279 = eax_870 - esi_74
                    int32_t* eax_871
                    
                    do
                        eax_871.b = *esi_74
                        esi_74 = &esi_74[1]
                        *(esi_74 + ecx_279 - 1) = eax_871.b
                    while (eax_871.b != 0)
                    esi_73 = var_3c_11
                else
                    char* eax_868
                    eax_868, ecx_279, edx_119 = sub_527db0(edi_1)
                    ebx_86 = ebx_84
                    esi_73[4] = eax_868
                
                if (*(ebx_86 + 0x10) != 0)
                    char* eax_872 = *edi_1
                    ecx_279.b = *eax_872
                    *edi_1 = &eax_872[1]
                    edx_119:1.b = eax_872[1]
                    *edi_1 = &eax_872[2]
                    edx_119.b = eax_872[2]
                    *edi_1 = &eax_872[3]
                    ebx_86.b = eax_872[3]
                    *edi_1 = &eax_872[4]
                    esi_73[5] = ((zx.d(ecx_279.b) << 8 | zx.d(edx_119:1.b)) << 8 | zx.d(edx_119.b)) << 8
                        | zx.d(ebx_86.b)
                    char* eax_880 = *edi_1
                    uint32_t ecx_290
                    ecx_290.b = *eax_880
                    *edi_1 = &eax_880[1]
                    edx_119:1.b = eax_880[1]
                    *edi_1 = &eax_880[2]
                    edx_119.b = eax_880[2]
                    *edi_1 = &eax_880[3]
                    ebx_86.b = eax_880[3]
                    *edi_1 = &eax_880[4]
                    esi_73[6] = ((zx.d(ecx_290.b) << 8 | zx.d(edx_119:1.b)) << 8 | zx.d(edx_119.b)) << 8
                        | zx.d(ebx_86.b)
                
                ebx_83 = var_54_11
                *(ebx_83[3] + (var_38_11 << 2)) = esi_73[1]
                _free(*(ebx_83[4] + (var_38_11 << 2)))
                *(ebx_83[4] + (var_38_11 << 2)) = esi_73
                ecx_261 = var_38_11 + 1
                var_38_11 = ecx_261
            while (ecx_261 s< arg4)
        
        edi_6 = var_c
        int32_t ecx_300 = *edi_6
        
        if (ecx_300 == edi_6[1])
            int32_t eax_891 = int.d(_mm_cvtepi32_ps(zx.o(ecx_300)) * 1.75f)
            
            if (eax_891 s< 8)
                eax_891 = 8
            
            edi_6[1] = eax_891
            int32_t var_80_100 = eax_891 << 2
            int32_t var_84_20 = edi_6[2]
            int32_t eax_893 = sub_57fb2f()
            ecx_300 = *edi_6
            edi_6[2] = eax_893
        
        *(edi_6[2] + (ecx_300 << 2)) = ebx_83
        *edi_6 += 1
        int32_t xmm0_128 = *(ecx_258 + ebx_83[3] - 4)
        
        if (not(var_10 f> xmm0_128))
            var_10 = xmm0_128
    
    int128_t* result = sub_56d840(arg2)
    _free(*(result + 0xc))
    *(result + 4) = var_10
    *(result + 8) = *edi_6
    *(result + 0xc) = edi_6[2]
    _free(edi_6)
    return result
}
