// 函数名称: sub_52bba0
// 虚拟地址: 0x52bba0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_52bba0(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t arg4, int32_t arg5, char* arg6, void* arg7, int32_t arg8)
{
    // 第一条实际指令: char* eax = sub_527e70(arg2, arg7)
    char* eax = sub_527e70(arg2, arg7)
    char* ecx_1 = *arg2
    
    if (eax == 0)
        eax = arg6
    
    int32_t ebx
    ebx.b = *ecx_1
    uint32_t eax_1 = zx.d(ebx.b)
    *arg2 = &ecx_1[1]
    
    if (eax_1 u> 6)
        return 0
    
    void* ecx_68
    void* ebx_3
    int32_t* esi_3
    
    switch (eax_1)
        case 0
            char* ebx_1 = sub_527e70(arg2, arg7)
            int32_t var_10
            char* ebx_2
            char* eax_2
            
            if (ebx_1 != 0)
                char* ecx_8 = ebx_1
                void* edx_5 = &ecx_8[1]
                
                do
                    eax_2.b = *ecx_8
                    ecx_8 = &ecx_8[1]
                while (eax_2.b != 0)
                
                int32_t eax_5 = data_1151ae0
                int32_t eax_6
                
                if (eax_5 == 0)
                    void* var_2c_2 = ecx_8 - edx_5 + 1
                    eax_6 = _malloc()
                else
                    eax_6 = eax_5(ecx_8 - edx_5 + 1, 
                        "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\skeletonbinary.c", 
                        0x2b6)
                
                var_10 = eax_6
                void* ecx_12 = eax_6 - ebx_1
                
                do
                    eax_6.b = *ebx_1
                    ebx_1 = &ebx_1[1]
                    *(ecx_12 + ebx_1 - 1) = eax_6.b
                while (eax_6.b != 0)
                
                ebx_2 = eax
            else
                ebx_2 = eax
                char* ecx_4 = ebx_2
                void* edx_2 = &ecx_4[1]
                
                do
                    eax_2.b = *ecx_4
                    ecx_4 = &ecx_4[1]
                while (eax_2.b != 0)
                
                int32_t eax_3 = data_1151ae0
                int32_t eax_4
                
                if (eax_3 == 0)
                    void* var_2c_1 = ecx_4 - edx_2 + 1
                    eax_4 = _malloc()
                else
                    eax_4 = eax_3(ecx_4 - edx_2 + 1, 
                        "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\skeletonbinary.c", 
                        0x2b3)
                
                var_10 = eax_4
                void* edx_4 = eax_4 - ebx_2
                char* ecx_7 = ebx_2
                
                do
                    eax_4.b = *ecx_7
                    ecx_7 = &ecx_7[1]
                    *(edx_4 + ecx_7 - 1) = eax_4.b
                while (eax_4.b != 0)
            int32_t* esi_1 = arg3[1]
            _free(*esi_1)
            _free(esi_1[1])
            int32_t* eax_7 = esi_1[2]
            *esi_1 = 0
            esi_1[1] = 0
            void* eax_9
            int16_t edx_6
            eax_9, edx_6 = (*eax_7)(esi_1, arg4, 0, ebx_2, var_10)
            *(eax_9 + 0x14) = var_10
            char* ecx_13 = *arg2
            ebx_2:1.b = *ecx_13
            *arg2 = &ecx_13[1]
            edx_6:1.b = ecx_13[1]
            *arg2 = &ecx_13[2]
            edx_6.b = ecx_13[2]
            *arg2 = &ecx_13[3]
            uint32_t ecx_16 = zx.d(ebx_2:1.b) << 8
            ebx_2.b = ecx_13[3]
            *arg2 = &ecx_13[4]
            *(eax_9 + 0x28) = ((ecx_16 | zx.d(edx_6:1.b)) << 8 | zx.d(edx_6.b)) << 8 | zx.d(ebx_2.b)
            char* eax_17 = *arg2
            esi_3 = arg3
            uint32_t ecx_22 = zx.d(*eax_17)
            *arg2 = &eax_17[1]
            edx_6:1.b = eax_17[1]
            *arg2 = &eax_17[2]
            edx_6.b = eax_17[2]
            *arg2 = &eax_17[3]
            ebx_2.b = eax_17[3]
            *arg2 = &eax_17[4]
            *(eax_9 + 0x18) =
                *esi_3 f* (((ecx_22 << 8 | zx.d(edx_6:1.b)) << 8 | zx.d(edx_6.b)) << 8 | zx.d(ebx_2.b))
            char* eax_26 = *arg2
            uint32_t ecx_29 = zx.d(*eax_26)
            *arg2 = &eax_26[1]
            edx_6:1.b = eax_26[1]
            *arg2 = &eax_26[2]
            edx_6.b = eax_26[2]
            *arg2 = &eax_26[3]
            ebx_2.b = eax_26[3]
            *arg2 = &eax_26[4]
            *(eax_9 + 0x1c) =
                *esi_3 f* (((ecx_29 << 8 | zx.d(edx_6:1.b)) << 8 | zx.d(edx_6.b)) << 8 | zx.d(ebx_2.b))
            char* eax_35 = *arg2
            uint32_t ecx_36 = zx.d(*eax_35)
            *arg2 = &eax_35[1]
            edx_6:1.b = eax_35[1]
            *arg2 = &eax_35[2]
            edx_6.b = eax_35[2]
            *arg2 = &eax_35[3]
            ebx_2.b = eax_35[3]
            *arg2 = &eax_35[4]
            *(eax_9 + 0x20) =
                ((ecx_36 << 8 | zx.d(edx_6:1.b)) << 8 | zx.d(edx_6.b)) << 8 | zx.d(ebx_2.b)
            char* eax_44 = *arg2
            uint32_t ecx_43 = zx.d(*eax_44)
            *arg2 = &eax_44[1]
            edx_6:1.b = eax_44[1]
            *arg2 = &eax_44[2]
            edx_6.b = eax_44[2]
            *arg2 = &eax_44[3]
            ebx_2.b = eax_44[3]
            *arg2 = &eax_44[4]
            *(eax_9 + 0x24) =
                ((ecx_43 << 8 | zx.d(edx_6:1.b)) << 8 | zx.d(edx_6.b)) << 8 | zx.d(ebx_2.b)
            char* eax_53 = *arg2
            uint32_t ecx_50 = zx.d(*eax_53)
            *arg2 = &eax_53[1]
            edx_6:1.b = eax_53[1]
            *arg2 = &eax_53[2]
            edx_6.b = eax_53[2]
            *arg2 = &eax_53[3]
            ebx_2.b = eax_53[3]
            *arg2 = &eax_53[4]
            *(eax_9 + 0x2c) =
                *esi_3 f* (((ecx_50 << 8 | zx.d(edx_6:1.b)) << 8 | zx.d(edx_6.b)) << 8 | zx.d(ebx_2.b))
            char* eax_62 = *arg2
            uint32_t ecx_57 = zx.d(*eax_62)
            *arg2 = &eax_62[1]
            edx_6.b = eax_62[1]
            *arg2 = &eax_62[2]
            ebx_2.b = eax_62[2]
            *arg2 = &eax_62[3]
            edx_6:1.b = eax_62[3]
            *arg2 = &eax_62[4]
            ebx_3 = eax_9
            *(ebx_3 + 0x30) =
                *esi_3 f* (((ecx_57 << 8 | zx.d(edx_6.b)) << 8 | zx.d(ebx_2.b)) << 8 | zx.d(edx_6:1.b))
            char* eax_70 = *arg2
            uint32_t ecx_64 = zx.d(*eax_70)
            *arg2 = &eax_70[1]
            *(ebx_3 + 0x34) = _mm_cvtepi32_ps(zx.o(ecx_64)) / 255f
            char* eax_72 = *arg2
            uint32_t ecx_65 = zx.d(*eax_72)
            *arg2 = &eax_72[1]
            *(ebx_3 + 0x38) = _mm_cvtepi32_ps(zx.o(ecx_65)) / 255f
            char* eax_74 = *arg2
            uint32_t ecx_66 = zx.d(*eax_74)
            *arg2 = &eax_74[1]
            *(ebx_3 + 0x3c) = _mm_cvtepi32_ps(zx.o(ecx_66)) / 255f
            char* eax_76 = *arg2
            uint32_t ecx_67 = zx.d(*eax_76)
            *arg2 = &eax_76[1]
            float xmm5_1 = *(ebx_3 + 0x2c)
            *(ebx_3 + 0x40) = _mm_cvtepi32_ps(zx.o(ecx_67)) / 255f
            float xmm0_25 = _mm_cvtepi32_ps(zx.o(*(ebx_3 + 0x58)))
            float xmm3_1 = *(ebx_3 + 0x30)
            uint128_t xmm7_1 = zx.o(*(ebx_3 + 0x48))
            float xmm6_3 = xmm5_1 / xmm0_25 f* *(ebx_3 + 0x20)
            float xmm4_2 = xmm3_1 / _mm_cvtepi32_ps(zx.o(*(ebx_3 + 0x5c)))
            float xmm5_3 = xmm5_1 * 0.5f f* *(ebx_3 + 0x20)
            uint128_t xmm2_1 = zx.o(*(ebx_3 + 0x4c))
            float xmm4_3 = xmm4_2 f* *(ebx_3 + 0x24)
            float xmm0_29 = _mm_cvtepi32_ps(zx.o(*(ebx_3 + 0x50)))
            float xmm3_3 = xmm3_1 * 0.5f f* *(ebx_3 + 0x24)
            float xmm7_4 = _mm_cvtepi32_ps(xmm7_1) * xmm6_3 - xmm5_3
            float xmm0_31 = xmm0_29 * xmm6_3 + xmm7_4
            float xmm2_4 = _mm_cvtepi32_ps(xmm2_1) * xmm4_3 - xmm3_3
            float xmm0_35 = _mm_cvtepi32_ps(zx.o(*(ebx_3 + 0x54))) * xmm4_3 + xmm2_4
            float xmm0_37[0x2] = *(ebx_3 + 0x28) * 0.0174532924f
            int32_t mxcsr
            int16_t x87control
            int16_t x87control_1
            double xmm0_39
            x87control_1, xmm0_39 = __libm_sse2_cos_precise(mxcsr, x87control, _mm_cvtps_pd(xmm0_37))
            float xmm0_40 = fconvert.s(xmm0_39)
            double xmm0_43 = __libm_sse2_sin_precise(mxcsr, x87control_1, _mm_cvtps_pd(xmm0_37))
            float xmm5_6 = xmm0_40 * xmm7_4 f+ *(ebx_3 + 0x18)
            float xmm6_6 = xmm0_40 * xmm2_4 f+ *(ebx_3 + 0x1c)
            float xmm7_5 = fconvert.s(xmm0_43)
            float xmm2_7 = xmm0_40 * xmm0_31 f+ *(ebx_3 + 0x18)
            float xmm3_5 = xmm7_5 * xmm7_4
            float xmm4_5 = xmm7_5 * xmm2_4
            float xmm7_6 = xmm7_5 * xmm0_35
            float xmm1_2 = xmm7_5 * xmm0_31
            float xmm3_8 = xmm0_40 * xmm0_35 f+ *(ebx_3 + 0x1c)
            *(ebx_3 + 0x60) = xmm5_6 - xmm4_5
            *(ebx_3 + 0x68) = xmm5_6 - xmm7_6
            float var_10_2 = xmm3_8
            *(ebx_3 + 0x64) = xmm6_6 + xmm3_5
            *(ebx_3 + 0x6c) = xmm3_8 + xmm3_5
            *(ebx_3 + 0x70) = xmm2_7 - xmm7_6
            *(ebx_3 + 0x74) = xmm3_8 + xmm1_2
            *(ebx_3 + 0x78) = xmm2_7 - xmm4_5
            *(ebx_3 + 0x7c) = xmm1_2 + xmm6_6
        label_52c096:
            ecx_68 = esi_3[1]
        label_52c09c:
            int32_t eax_79 = *(*(ecx_68 + 8) + 4)
            
            if (eax_79 != 0)
                eax_79(ecx_68, ebx_3)
            
            return ebx_3
        case 1
            void** eax_81 = sub_527d20(arg2, 1)
            int32_t* esi_4 = arg3[1]
            _free(*esi_4)
            _free(esi_4[1])
            int32_t* eax_82 = esi_4[2]
            *esi_4 = 0
            esi_4[1] = 0
            void* eax_84 = (*eax_82)(esi_4, arg4, 1, eax, 0)
            sub_52b6c0(eax_84, arg2, arg3, eax_84, eax_81)
            
            if (arg8 != 0)
                sub_527ce0(arg2)
            
            void* ecx_72 = arg3[1]
            int32_t eax_86 = *(*(ecx_72 + 8) + 4)
            
            if (eax_86 != 0)
                eax_86(ecx_72, eax_84)
            
            return eax_84
        case 2
            char* ebx_6 = sub_527e70(arg2, arg7)
            int32_t var_10_4
            char* ebx_7
            char* eax_88
            
            if (ebx_6 != 0)
                char* ecx_78 = ebx_6
                void* edx_12 = &ecx_78[1]
                
                do
                    eax_88.b = *ecx_78
                    ecx_78 = &ecx_78[1]
                while (eax_88.b != 0)
                
                int32_t eax_91 = data_1151ae0
                int32_t eax_92
                
                if (eax_91 == 0)
                    void* var_2c_8 = ecx_78 - edx_12 + 1
                    eax_92 = _malloc()
                else
                    eax_92 = eax_91(ecx_78 - edx_12 + 1, 
                        "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\skeletonbinary.c", 
                        0x2d8)
                
                var_10_4 = eax_92
                void* ecx_82 = eax_92 - ebx_6
                
                do
                    eax_92.b = *ebx_6
                    ebx_6 = &ebx_6[1]
                    *(ecx_82 + ebx_6 - 1) = eax_92.b
                while (eax_92.b != 0)
                
                ebx_7 = eax
            else
                ebx_7 = eax
                char* ecx_74 = ebx_7
                void* edx_9 = &ecx_74[1]
                
                do
                    eax_88.b = *ecx_74
                    ecx_74 = &ecx_74[1]
                while (eax_88.b != 0)
                
                int32_t eax_89 = data_1151ae0
                int32_t eax_90
                
                if (eax_89 == 0)
                    void* var_2c_7 = ecx_74 - edx_9 + 1
                    eax_90 = _malloc()
                else
                    eax_90 = eax_89(ecx_74 - edx_9 + 1, 
                        "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\skeletonbinary.c", 
                        0x2d5)
                
                var_10_4 = eax_90
                void* edx_11 = eax_90 - ebx_7
                char* ecx_77 = ebx_7
                
                do
                    eax_90.b = *ecx_77
                    ecx_77 = &ecx_77[1]
                    *(edx_11 + ecx_77 - 1) = eax_90.b
                while (eax_90.b != 0)
            int32_t* esi_7 = arg3[1]
            _free(*esi_7)
            _free(esi_7[1])
            int32_t* eax_93 = esi_7[2]
            *esi_7 = 0
            esi_7[1] = 0
            ebx_3 = (*eax_93)(esi_7, arg4, 2, ebx_7, var_10_4)
            void* var_8_3 = ebx_3
            *(ebx_3 + 0x64) = var_10_4
            char* ecx_83 = *arg2
            char edx_13 = *ecx_83
            *arg2 = &ecx_83[1]
            *(ebx_3 + 0x78) = _mm_cvtepi32_ps(zx.o(edx_13)) / 255f
            char* eax_97 = *arg2
            uint32_t ecx_86 = zx.d(*eax_97)
            *arg2 = &eax_97[1]
            *(ebx_3 + 0x7c) = _mm_cvtepi32_ps(zx.o(ecx_86)) / 255f
            char* eax_99 = *arg2
            uint32_t ecx_87 = zx.d(*eax_99)
            *arg2 = &eax_99[1]
            *(ebx_3 + 0x80) = _mm_cvtepi32_ps(zx.o(ecx_87)) / 255f
            char* eax_101 = *arg2
            uint32_t ecx_88 = zx.d(*eax_101)
            *arg2 = &eax_101[1]
            *(ebx_3 + 0x84) = _mm_cvtepi32_ps(zx.o(ecx_88)) / 255f
            int32_t eax_103 = sub_527d20(arg2, 1)
            *(ebx_3 + 0x68) = sub_52b4e0(arg2, eax_103 * 2, 1f)
            int32_t eax_105 = sub_52b5f0(arg2, ebx_3 + 0x70)
            esi_3 = arg3
            *(ebx_3 + 0x74) = eax_105
            sub_52b6c0(eax_105, arg2, esi_3, ebx_3, eax_103)
            sub_5725e0(ebx_3)
            *(ebx_3 + 0x88) = sub_527d20(arg2, 1) * 2
            
            if (arg8 == 0)
                *(ebx_3 + 0x94) = 0
                *(ebx_3 + 0x98) = 0
                *(ebx_3 + 0x9c) = 0
            else
                int32_t eax_108
                int16_t edx_18
                eax_108, edx_18 = sub_52b5f0(arg2, ebx_3 + 0x90)
                *(ebx_3 + 0x94) = eax_108
                char* eax_109 = *arg2
                uint32_t ecx_96 = zx.d(*eax_109)
                *arg2 = &eax_109[1]
                edx_18:1.b = eax_109[1]
                *arg2 = &eax_109[2]
                edx_18.b = eax_109[2]
                *arg2 = &eax_109[3]
                ebx_3.b = eax_109[3]
                *arg2 = &eax_109[4]
                *(var_8_3 + 0x98) = *esi_3
                    f* (((ecx_96 << 8 | zx.d(edx_18:1.b)) << 8 | zx.d(edx_18.b)) << 8 | zx.d(ebx_3.b))
                char* eax_118 = *arg2
                uint32_t ecx_103 = zx.d(*eax_118)
                *arg2 = &eax_118[1]
                edx_18:1.b = eax_118[1]
                *arg2 = &eax_118[2]
                edx_18.b = eax_118[2]
                *arg2 = &eax_118[3]
                ebx_3.b = eax_118[3]
                *arg2 = &eax_118[4]
                uint32_t eax_125 = zx.d(ebx_3.b)
                ebx_3 = var_8_3
                *(ebx_3 + 0x9c) =
                    *esi_3 f* (((ecx_103 << 8 | zx.d(edx_18:1.b)) << 8 | zx.d(edx_18.b)) << 8 | eax_125)
            
            goto label_52c096
        case 3
            char* ebx_8 = sub_527e70(arg2, arg7)
            int32_t var_10_5
            char* ebx_9
            char* eax_126
            
            if (ebx_8 != 0)
                char* ecx_115 = ebx_8
                void* edx_23 = &ecx_115[1]
                
                do
                    eax_126.b = *ecx_115
                    ecx_115 = &ecx_115[1]
                while (eax_126.b != 0)
                
                int32_t eax_129 = data_1151ae0
                int32_t eax_130
                
                if (eax_129 == 0)
                    void* var_2c_11 = ecx_115 - edx_23 + 1
                    eax_130 = _malloc()
                else
                    eax_130 = eax_129(ecx_115 - edx_23 + 1, 
                        "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\skeletonbinary.c", 
                        0x2fb)
                
                var_10_5 = eax_130
                void* ecx_119 = eax_130 - ebx_8
                
                do
                    eax_130.b = *ebx_8
                    ebx_8 = &ebx_8[1]
                    *(ecx_119 + ebx_8 - 1) = eax_130.b
                while (eax_130.b != 0)
                
                ebx_9 = eax
            else
                ebx_9 = eax
                char* ecx_111 = ebx_9
                void* edx_20 = &ecx_111[1]
                
                do
                    eax_126.b = *ecx_111
                    ecx_111 = &ecx_111[1]
                while (eax_126.b != 0)
                
                int32_t eax_127 = data_1151ae0
                int32_t eax_128
                
                if (eax_127 == 0)
                    void* var_2c_10 = ecx_111 - edx_20 + 1
                    eax_128 = _malloc()
                else
                    eax_128 = eax_127(ecx_111 - edx_20 + 1, 
                        "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\skeletonbinary.c", 
                        0x2f8)
                
                var_10_5 = eax_128
                void* edx_22 = eax_128 - ebx_9
                char* ecx_114 = ebx_9
                
                do
                    eax_128.b = *ecx_114
                    ecx_114 = &ecx_114[1]
                    *(edx_22 + ecx_114 - 1) = eax_128.b
                while (eax_128.b != 0)
            int32_t* esi_9 = arg3[1]
            _free(*esi_9)
            _free(esi_9[1])
            int32_t* eax_131 = esi_9[2]
            *esi_9 = 0
            esi_9[1] = 0
            void* ebx_10 = (*eax_131)(esi_9, arg4, 3, ebx_9, var_10_5)
            void* var_8_4 = ebx_10
            *(ebx_10 + 0x64) = var_10_5
            char* ecx_120 = *arg2
            char edx_24 = *ecx_120
            *arg2 = &ecx_120[1]
            *(ebx_10 + 0x78) = _mm_cvtepi32_ps(zx.o(edx_24)) / 255f
            char* eax_135 = *arg2
            uint32_t ecx_123 = zx.d(*eax_135)
            *arg2 = &eax_135[1]
            *(ebx_10 + 0x7c) = _mm_cvtepi32_ps(zx.o(ecx_123)) / 255f
            char* eax_137 = *arg2
            uint32_t ecx_124 = zx.d(*eax_137)
            *arg2 = &eax_137[1]
            *(ebx_10 + 0x80) = _mm_cvtepi32_ps(zx.o(ecx_124)) / 255f
            char* eax_139 = *arg2
            uint32_t ecx_125 = zx.d(*eax_139)
            *arg2 = &eax_139[1]
            *(ebx_10 + 0x84) = _mm_cvtepi32_ps(zx.o(ecx_125)) / 255f
            int32_t eax_141 = sub_527e70(arg2, arg7)
            int32_t eax_142
            int16_t edx_27
            eax_142, edx_27 = sub_527e70(arg2, arg7)
            char* ecx_128 = *arg2
            edx_27.b = *ecx_128
            *arg2 = &ecx_128[1]
            int32_t ecx_129
            ecx_129.b = edx_27.b != 0
            
            if (arg8 != 0)
                uint32_t ecx_130 = zx.d(ecx_128[1])
                *arg2 = &ecx_128[2]
                edx_27.b = ecx_128[2]
                *arg2 = &ecx_128[3]
                ebx_10.b = ecx_128[3]
                *arg2 = &ecx_128[4]
                edx_27:1.b = ecx_128[4]
                *arg2 = &ecx_128[5]
                *(var_8_4 + 0x98) = *arg3 f* (
                    ((ecx_130 << 8 | zx.d(edx_27.b)) << 8 | zx.d(ebx_10.b)) << 8 | zx.d(edx_27:1.b))
                char* eax_152 = *arg2
                uint32_t ecx_137 = zx.d(*eax_152)
                *arg2 = &eax_152[1]
                edx_27:1.b = eax_152[1]
                *arg2 = &eax_152[2]
                edx_27.b = eax_152[2]
                *arg2 = &eax_152[3]
                ebx_10.b = eax_152[3]
                *arg2 = &eax_152[4]
                uint32_t eax_159 = zx.d(ebx_10.b)
                ebx_10 = var_8_4
                *(ebx_10 + 0x9c) =
                    *arg3 f* (((ecx_137 << 8 | zx.d(edx_27:1.b)) << 8 | zx.d(edx_27.b)) << 8 | eax_159)
            
            int32_t ecx_144 = arg3[5]
            int32_t eax_160 = arg3[4]
            char* edi_2
            
            if (eax_160 != ecx_144)
                edi_2 = arg3[6]
            else
                int32_t eax_161 = ecx_144 * 2
                arg3[5] = eax_161
                
                if (eax_161 s< 8)
                    arg3[5] = 8
                    eax_161 = 8
                
                int32_t ecx_145 = data_1151ae0
                int32_t eax_163 = eax_161 * 0x14
                char* eax_164
                
                if (ecx_145 == 0)
                    int32_t var_2c_13 = eax_163
                    eax_164 = _malloc()
                else
                    eax_164 = ecx_145(eax_163, 
                        "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\skeletonbinary.c", 
                        0xea)
                
                edi_2 = eax_164
                sub_579300(edi_2, arg3[6], arg3[4] * 0x14)
                _free(arg3[6])
                eax_160 = arg3[4]
                arg3[6] = edi_2
            
            int32_t ecx_146 = eax_160 * 5
            arg3[4] = eax_160 + 1
            *(edi_2 + (ecx_146 << 2) + 4) = eax_141
            *(edi_2 + (ecx_146 << 2) + 8) = arg5
            *(edi_2 + (ecx_146 << 2)) = eax_142
            *(edi_2 + (ecx_146 << 2) + 0xc) = ebx_10
            *(edi_2 + (ecx_146 << 2) + 0x10) = ecx_129
            return ebx_10
        case 4
            int32_t* esi_11 = arg3[1]
            _free(*esi_11)
            _free(esi_11[1])
            int32_t* eax_174 = esi_11[2]
            *esi_11 = 0
            esi_11[1] = 0
            void* eax_176 = (*eax_174)(esi_11, arg4, 4, eax, 0)
            char* ecx_147 = *arg2
            ebx_3 = eax_176
            void* var_10_7 = ebx_3
            char edx_28 = *ecx_147
            *arg2 = &ecx_147[1]
            int32_t ecx_149
            ecx_149.b = edx_28 != 0
            *(ebx_3 + 0x38) = ecx_149
            char* eax_177 = *arg2
            ecx_149.b = *eax_177
            *arg2 = &eax_177[1]
            int32_t eax_179
            eax_179.b = ecx_149.b != 0
            *(ebx_3 + 0x3c) = eax_179
            int32_t eax_180 = sub_527d20(arg2, 1)
            sub_52b6c0(eax_180, arg2, arg3, ebx_3, eax_180)
            int32_t ecx_152 = data_1151ae0
            int32_t eax_184 = eax_180 s/ 3
            *(ebx_3 + 0x30) = eax_184
            int32_t eax_185 = eax_184 << 2
            int32_t eax_186
            int32_t* ecx_153
            int16_t edx_31
            
            if (ecx_152 == 0)
                int32_t var_2c_16 = eax_185
                eax_186, ecx_153, edx_31 = _malloc()
            else
                eax_186, edx_31, ecx_153 = ecx_152(eax_185, 
                    "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\skeletonbinary.c", 0x315)
            
            int32_t i = 0
            *(ebx_3 + 0x34) = eax_186
            
            if (*(ebx_3 + 0x30) s<= 0)
                ecx_153 = arg3
            else
                do
                    char* eax_187 = *arg2
                    ecx_153.b = *eax_187
                    *arg2 = &eax_187[1]
                    edx_31:1.b = eax_187[1]
                    *arg2 = &eax_187[2]
                    edx_31.b = eax_187[2]
                    *arg2 = &eax_187[3]
                    ebx_3.b = eax_187[3]
                    *arg2 = &eax_187[4]
                    uint32_t eax_194 = zx.d(ebx_3.b)
                    ebx_3 = var_10_7
                    uint32_t ecx_160 =
                        ((zx.d(ecx_153.b) << 8 | zx.d(edx_31:1.b)) << 8 | zx.d(edx_31.b)) << 8 | eax_194
                    ecx_153 = arg3
                    *(*(ebx_3 + 0x34) + (i << 2)) = *ecx_153 f* ecx_160
                    i += 1
                while (i s< *(ebx_3 + 0x30))
            
            if (arg8 != 0)
                *arg2 += 4
            
            ecx_68 = ecx_153[1]
            goto label_52c09c
        case 5
            int32_t* esi_13 = arg3[1]
            _free(*esi_13)
            _free(esi_13[1])
            int32_t* eax_196 = esi_13[2]
            *esi_13 = 0
            esi_13[1] = 0
            void* eax_198
            int16_t edx_32
            eax_198, edx_32 = (*eax_196)(esi_13, arg4, 5, eax, 0)
            char* ecx_161 = *arg2
            char* ebx_12
            ebx_12:1.b = *ecx_161
            *arg2 = &ecx_161[1]
            edx_32:1.b = ecx_161[1]
            *arg2 = &ecx_161[2]
            edx_32.b = ecx_161[2]
            *arg2 = &ecx_161[3]
            uint32_t ecx_164 = zx.d(ebx_12:1.b) << 8
            ebx_12.b = ecx_161[3]
            *arg2 = &ecx_161[4]
            *(eax_198 + 0x1c) =
                ((ecx_164 | zx.d(edx_32:1.b)) << 8 | zx.d(edx_32.b)) << 8 | zx.d(ebx_12.b)
            char* eax_205 = *arg2
            esi_3 = arg3
            uint32_t ecx_170 = zx.d(*eax_205)
            *arg2 = &eax_205[1]
            edx_32:1.b = eax_205[1]
            *arg2 = &eax_205[2]
            edx_32.b = eax_205[2]
            *arg2 = &eax_205[3]
            ebx_12.b = eax_205[3]
            *arg2 = &eax_205[4]
            *(eax_198 + 0x14) = *esi_3
                f* (((ecx_170 << 8 | zx.d(edx_32:1.b)) << 8 | zx.d(edx_32.b)) << 8 | zx.d(ebx_12.b))
            char* eax_214 = *arg2
            uint32_t ecx_177 = zx.d(*eax_214)
            *arg2 = &eax_214[1]
            edx_32:1.b = eax_214[1]
            *arg2 = &eax_214[2]
            edx_32.b = eax_214[2]
            *arg2 = &eax_214[3]
            ebx_12.b = eax_214[3]
            *arg2 = &eax_214[4]
            ebx_3 = eax_198
            *(ebx_3 + 0x18) = *esi_3
                f* (((ecx_177 << 8 | zx.d(edx_32:1.b)) << 8 | zx.d(edx_32.b)) << 8 | zx.d(ebx_12.b))
            
            if (arg8 != 0)
                char* eax_222 = *arg2
                uint32_t ecx_184 = zx.d(*eax_222)
                *arg2 = &eax_222[1]
                *(ebx_3 + 0x20) = _mm_cvtepi32_ps(zx.o(ecx_184)) / 255f
                char* eax_224 = *arg2
                uint32_t ecx_185 = zx.d(*eax_224)
                *arg2 = &eax_224[1]
                *(ebx_3 + 0x24) = _mm_cvtepi32_ps(zx.o(ecx_185)) / 255f
                char* eax_226 = *arg2
                uint32_t ecx_186 = zx.d(*eax_226)
                *arg2 = &eax_226[1]
                *(ebx_3 + 0x28) = _mm_cvtepi32_ps(zx.o(ecx_186)) / 255f
                char* eax_228 = *arg2
                uint32_t ecx_187 = zx.d(*eax_228)
                *arg2 = &eax_228[1]
                *(ebx_3 + 0x2c) = _mm_cvtepi32_ps(zx.o(ecx_187)) / 255f
            
            goto label_52c096
        case 6
            int32_t eax_230 = sub_527d20(arg2, 1)
            int32_t eax_231 = sub_527d20(arg2, 1)
            int32_t* esi_15 = arg3[1]
            _free(*esi_15)
            _free(esi_15[1])
            int32_t* eax_232 = esi_15[2]
            *esi_15 = 0
            esi_15[1] = 0
            void* eax_234 = (*eax_232)(esi_15, arg4, 6, eax, 0)
            sub_52b6c0(eax_234, arg2, arg3, eax_234, eax_231)
            
            if (arg8 != 0)
                sub_527ce0(arg2)
            
            *(eax_234 + 0x30) = *(*(arg7 + 0x2c) + (eax_230 << 2))
            void* ecx_193 = arg3[1]
            int32_t eax_239 = *(*(ecx_193 + 8) + 4)
            
            if (eax_239 != 0)
                eax_239(ecx_193, eax_234)
            
            return eax_234
}
