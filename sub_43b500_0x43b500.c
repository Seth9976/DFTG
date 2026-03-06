// 函数名称: sub_43b500
// 虚拟地址: 0x43b500
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_43b500(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    double xmm1 = 1.0
    int32_t ecx = 0xa
    int32_t var_44 = 0
    int32_t var_28 = 0
    int32_t var_40 = 0
    
    if (*(*arg3 + 8) == 0)
        ecx = 7
    
    int32_t var_24
    __builtin_memset(&var_24, 0, 0x18)
    int32_t var_3c
    __builtin_memset(&var_3c, 0, 0x14)
    int32_t edx = ecx << 2
    void var_c4
    __builtin_memset(&var_c4, 0, edx u>> 2 << 2)
    void var_98
    __builtin_memset(&var_98, 0, edx u>> 2 << 2)
    void var_6c
    __builtin_memset(&var_6c, 0, edx u>> 2 << 2)
    int32_t ecx_6 = 0
    void* edi_1 = arg2 * 0x1bc + arg3
    int32_t i = *(edi_1 + 0x170)
    void* var_d8 = edi_1
    int32_t var_cc = 0
    
    if (i != 0xffffffff)
        int32_t edi_2 = 0
        
        do
            var_cc += 1
            *(data_138a6cc + ((*(
                ((zx.d(*(&arg3[i * 3] + 0x8cb)) + (*(arg3[i * 3 + 0x231] + 0xc) << 1)) << 2) +
                &data_13041f0) + arg5) << 3)) = xmm1
            int32_t eax_9 = i * 3
            
            if (*(&arg3[eax_9] + 0x8cb) == 0 && *(arg3[eax_9 + 0x231] + 0x10) == 6)
                edi_2 += 1
            
            i = sx.d(*(&arg3[i * 3] + 0x8ca))
        while (i != 0xffffffff)
        
        edi_1 = var_d8
        ecx_6 = edi_2
    
    int32_t eax_12
    eax_12.b = var_cc s> 3
    *(data_138a6cc + (arg5 << 3)) = _mm_cvtepi32_pd(zx.q((eax_12 << 1) + 0xffffffff))
    int32_t eax_15
    eax_15.b = var_cc s> 4
    *(data_138a6cc + (arg5 << 3) + 8) = _mm_cvtepi32_pd(zx.q((eax_15 << 1) + 0xffffffff))
    int32_t eax_18
    eax_18.b = var_cc s> 5
    *(data_138a6cc + (arg5 << 3) + 0x10) = _mm_cvtepi32_pd(zx.q((eax_18 << 1) + 0xffffffff))
    int32_t eax_21
    eax_21.b = var_cc s> 6
    *(data_138a6cc + (arg5 << 3) + 0x18) = _mm_cvtepi32_pd(zx.q((eax_21 << 1) + 0xffffffff))
    int32_t eax_24
    eax_24.b = var_cc s> 7
    *(data_138a6cc + (arg5 << 3) + 0x20) = _mm_cvtepi32_pd(zx.q((eax_24 << 1) + 0xffffffff))
    int32_t eax_27
    eax_27.b = var_cc s> 8
    *(data_138a6cc + (arg5 << 3) + 0x28) = _mm_cvtepi32_pd(zx.q((eax_27 << 1) + 0xffffffff))
    int32_t eax_30
    eax_30.b = var_cc s> 9
    *(data_138a6cc + (arg5 << 3) + 0x30) = _mm_cvtepi32_pd(zx.q((eax_30 << 1) + 0xffffffff))
    int32_t eax_33
    eax_33.b = var_cc s> 0xa
    *(data_138a6cc + (arg5 << 3) + 0x38) = _mm_cvtepi32_pd(zx.q((eax_33 << 1) + 0xffffffff))
    int32_t eax_36
    eax_36.b = var_cc s> 0xb
    *(data_138a6cc + (arg5 << 3) + 0x40) = _mm_cvtepi32_pd(zx.q((eax_36 << 1) + 0xffffffff))
    int32_t eax_39
    eax_39.b = ecx_6 s> 0
    *(data_138a6cc + (arg5 << 3) + 0x48) = _mm_cvtepi32_pd(zx.q((eax_39 << 1) + 0xffffffff))
    int32_t eax_42
    eax_42.b = ecx_6 s> 1
    *(data_138a6cc + (arg5 << 3) + 0x50) = _mm_cvtepi32_pd(zx.q((eax_42 << 1) + 0xffffffff))
    int32_t eax_45
    eax_45.b = ecx_6 s> 2
    *(data_138a6cc + (arg5 << 3) + 0x58) = _mm_cvtepi32_pd(zx.q((eax_45 << 1) + 0xffffffff))
    int32_t eax_48
    eax_48.b = ecx_6 s> 3
    *(data_138a6cc + (arg5 << 3) + 0x60) = _mm_cvtepi32_pd(zx.q((eax_48 << 1) + 0xffffffff))
    int32_t eax_51
    eax_51.b = ecx_6 s> 4
    *(data_138a6cc + (arg5 << 3) + 0x68) = _mm_cvtepi32_pd(zx.q((eax_51 << 1) + 0xffffffff))
    int32_t eax_54 = *(edi_1 + 0x174)
    
    if (eax_54 != 0xffffffff)
        int32_t eax_55 = eax_54 * 3
        void* ecx_10 = arg3[eax_55 + 0x231]
        uint32_t edx_3 = zx.d(*(&arg3[eax_55] + 0x8cb))
        int32_t ecx_11 = 0
        int32_t i_15 = *(edi_1 + 0x164)
        int32_t i_17 = i_15
        
        if (i_15 s> 0)
            void* edx_4 = edi_1 + 0x25
            int32_t i_11 = i_15
            int32_t i_1
            
            do
                bool cond:1_1 = *edx_4 != 5
                int32_t eax_59 = ecx_11 + 1
                edx_4 += 8
                
                if (cond:1_1)
                    eax_59 = ecx_11
                
                ecx_11 = eax_59
                i_1 = i_11
                i_11 -= 1
            while (i_1 != 1)
        
        *(ecx_10 + (edx_3 << 2) + 0x10)
        edi_1 = var_d8
        *(data_138a6cc
            + ((*(((edx_3 + (*(ecx_10 + 0xc) << 1)) << 2) + &data_1450730) + arg5 + 0xe) << 3)) =
            _mm_cvtepi32_pd(zx.q(divs.dp.d(sx.q(ecx_11), *(ecx_10 + (edx_3 << 2) + 0x10))))
    
    int32_t eax_64 = *(edi_1 + 0x178)
    
    if (eax_64 != 0xffffffff)
        int32_t eax_65 = eax_64 * 3
        void* ecx_15 = arg3[eax_65 + 0x231]
        uint32_t edx_7 = zx.d(*(&arg3[eax_65] + 0x8cb))
        int32_t ecx_16 = 0
        int32_t i_16 = *(edi_1 + 0x164)
        int32_t i_18 = i_16
        
        if (i_16 s> 0)
            void* edx_8 = edi_1 + 0x25
            int32_t i_12 = i_16
            int32_t i_2
            
            do
                bool cond:2_1 = *edx_8 != 6
                int32_t eax_69 = ecx_16 + 1
                edx_8 += 8
                
                if (cond:2_1)
                    eax_69 = ecx_16
                
                ecx_16 = eax_69
                i_2 = i_12
                i_12 -= 1
            while (i_2 != 1)
        
        *(ecx_15 + (edx_7 << 2) + 0x10)
        edi_1 = var_d8
        *(data_138a6cc
            + ((*(((edx_7 + (*(ecx_15 + 0xc) << 1)) << 2) + &data_1450730) + arg5 + 0xe) << 3)) =
            _mm_cvtepi32_pd(zx.q(divs.dp.d(sx.q(ecx_16), *(ecx_15 + (edx_7 << 2) + 0x10))))
    
    int32_t i_9 = *(edi_1 + 0x174)
    int32_t ecx_20 = 0
    int32_t esi_2 = arg5 + 0xe + data_13902e4
    double xmm0_32 = xmm1
    double xmm2 = 0.5
    int32_t i_13 = i_9
    int32_t var_cc_3 = 0
    
    if (i_9 != 0xffffffff)
        int32_t i_3 = i_9
        
        do
            int32_t edx_11 = i_3 * 3
            var_cc_3 = ecx_20 + 1
            *(data_138a6cc + ((*(
                ((zx.d(*(&arg3[edx_11] + 0x8cb)) + (*(arg3[edx_11 + 0x231] + 0xc) << 1)) << 2) +
                &data_1450730) + esi_2) << 3)) = xmm0_32
            xmm0_32 = xmm0_32 * xmm2
            
            if (arg2 != arg4)
                xmm0_32 = (zx.o(0)).q
            
            ecx_20 = var_cc_3
            i_3 = sx.d(*(&arg3[i_3 * 3] + 0x8ca))
        while (i_3 != 0xffffffff)
        
        edi_1 = var_d8
    
    int32_t i_10 = *(edi_1 + 0x178)
    int32_t i_14 = i_10
    
    if (i_10 != 0xffffffff)
        int32_t i_4 = i_10
        
        do
            int32_t edx_12 = i_4 * 3
            var_cc_3 = ecx_20 + 1
            *(data_138a6cc + ((*(
                ((zx.d(*(&arg3[edx_12] + 0x8cb)) + (*(arg3[edx_12 + 0x231] + 0xc) << 1)) << 2) +
                &data_1450730) + esi_2) << 3)) = xmm1
            xmm1 = xmm1 * xmm2
            
            if (arg2 != arg4)
                xmm1 = (zx.o(0)).q
            
            ecx_20 = var_cc_3
            i_4 = sx.d(*(&arg3[i_4 * 3] + 0x8ca))
        while (i_4 != 0xffffffff)
        
        edi_1 = var_d8
    
    int32_t esi_3 = esi_2 + data_138fd50
    int32_t eax_86
    eax_86.b = var_cc_3 s> 0
    *(data_138a6cc + (esi_3 << 3)) = _mm_cvtepi32_pd(zx.q((eax_86 << 1) + 0xffffffff))
    int32_t eax_89
    eax_89.b = var_cc_3 s> 1
    *(data_138a6cc + (esi_3 << 3) + 8) = _mm_cvtepi32_pd(zx.q((eax_89 << 1) + 0xffffffff))
    int32_t eax_92
    eax_92.b = var_cc_3 s> 2
    *(data_138a6cc + (esi_3 << 3) + 0x10) = _mm_cvtepi32_pd(zx.q((eax_92 << 1) + 0xffffffff))
    int32_t eax_95
    eax_95.b = var_cc_3 s> 3
    *(data_138a6cc + (esi_3 << 3) + 0x18) = _mm_cvtepi32_pd(zx.q((eax_95 << 1) + 0xffffffff))
    int32_t eax_98
    eax_98.b = var_cc_3 s> 4
    *(data_138a6cc + (esi_3 << 3) + 0x20) = _mm_cvtepi32_pd(zx.q((eax_98 << 1) + 0xffffffff))
    int32_t eax_101
    eax_101.b = var_cc_3 s> 5
    *(data_138a6cc + (esi_3 << 3) + 0x28) = _mm_cvtepi32_pd(zx.q((eax_101 << 1) + 0xffffffff))
    int32_t eax_104
    eax_104.b = var_cc_3 s> 6
    *(data_138a6cc + (esi_3 << 3) + 0x30) = _mm_cvtepi32_pd(zx.q((eax_104 << 1) + 0xffffffff))
    int32_t eax_107
    eax_107.b = var_cc_3 s> 7
    *(data_138a6cc + (esi_3 << 3) + 0x38) = _mm_cvtepi32_pd(zx.q((eax_107 << 1) + 0xffffffff))
    int32_t eax_110
    eax_110.b = var_cc_3 s> 8
    *(data_138a6cc + (esi_3 << 3) + 0x40) = _mm_cvtepi32_pd(zx.q((eax_110 << 1) + 0xffffffff))
    int32_t eax_113
    eax_113.b = var_cc_3 s> 9
    *(data_138a6cc + (esi_3 << 3) + 0x48) = _mm_cvtepi32_pd(zx.q((eax_113 << 1) + 0xffffffff))
    int32_t edx_13 = 0
    int32_t ecx_30 = *(edi_1 + 0x164)
    int32_t eax_116 = 0
    int32_t esi_4 = esi_3 + 0xa
    int32_t var_cc_4 = 0
    int32_t var_d4_3 = 0
    void var_c8
    void var_9c
    void var_70
    
    if (ecx_30 s> 0)
        int32_t esi_5 = 0
        
        do
            if ((*(edi_1 + (edx_13 << 3) + 0x2b) & 2) == 0)
                ecx_30.b = *(edi_1 + (edx_13 << 3) + 0x25)
                
                if (ecx_30.b == 4 || ecx_30.b == 7)
                    uint32_t eax_117 = zx.d(*(edi_1 + (edx_13 << 3) + 0x24))
                    esi_5 += 1
                    *(&var_9c + (eax_117 << 2)) += 1
                    eax_116 = var_cc_4
                
                if (ecx_30.b == 1 || ecx_30.b == 4 || ecx_30.b == 7 || ecx_30.b == 5 || ecx_30.b == 6
                        || ecx_30.b == 3)
                    var_cc_4 = eax_116 + 1
                    uint32_t eax_119 = zx.d(*(edi_1 + (edx_13 << 3) + 0x24))
                    *(&var_c8 + (eax_119 << 2)) += 1
                    
                    if (ecx_30.b == 3)
                        int32_t ecx_31 =
                            *(arg3[(sx.d(*(edi_1 + (edx_13 << 3) + 0x2a)) + 0xbb) * 3] + 0x18)
                        (&var_28)[ecx_31] += 1
                        
                        if (eax_119 == 7 || eax_119 == 8 || (eax_119 == 0xa && ecx_31 == 3)
                                || ecx_31 == eax_119)
                            (&var_44)[ecx_31] += 1
                
                uint32_t eax_125 = zx.d(*(edi_1 + (edx_13 << 3) + 0x24))
                ecx_30 = *(edi_1 + 0x164)
                *(&var_70 + (eax_125 << 2)) += 1
                eax_116 = var_cc_4
            
            edx_13 += 1
        while (edx_13 s< ecx_30)
        
        var_d4_3 = esi_5
    
    for (int32_t i_5 = 0; i_5 s< 0xc; )
        int32_t eax_126
        eax_126.b = var_d4_3 s> i_5
        i_5 += 1
        *(data_138a6cc + (esi_4 << 3)) = _mm_cvtepi32_pd(zx.q((eax_126 << 1) + 0xffffffff))
        esi_4 += 1
    
    for (int32_t i_6 = 0; i_6 s< 0xc; )
        int32_t eax_129
        eax_129.b = var_cc_4 s> i_6
        i_6 += 1
        *(data_138a6cc + (esi_4 << 3)) = _mm_cvtepi32_pd(zx.q((eax_129 << 1) + 0xffffffff))
        esi_4 += 1
    
    void* edx_16 = (esi_4 << 3) + 0x18
    int32_t ebx_1 = 1
    
    do
        int32_t ecx_32 = *(&var_70 + (ebx_1 << 2))
        edx_16 += 0x28
        int32_t eax_132
        eax_132.b = ecx_32 s> 0
        *(edx_16 + data_138a6cc - 0x40) = _mm_cvtepi32_pd(zx.q((eax_132 << 1) + 0xffffffff))
        int32_t eax_135
        eax_135.b = ecx_32 s> 1
        *(edx_16 + data_138a6cc - 0x38) = _mm_cvtepi32_pd(zx.q((eax_135 << 1) + 0xffffffff))
        int32_t eax_138
        eax_138.b = ecx_32 s> 2
        *(edx_16 + data_138a6cc - 0x30) = _mm_cvtepi32_pd(zx.q((eax_138 << 1) + 0xffffffff))
        int32_t eax_141
        eax_141.b = ecx_32 s> 3
        *(edx_16 + data_138a6cc - 0x28) = _mm_cvtepi32_pd(zx.q((eax_141 << 1) + 0xffffffff))
        int32_t eax_144
        eax_144.b = ecx_32 s> 4
        ebx_1 += 1
        esi_4 += 5
        *(edx_16 + data_138a6cc - 0x20) = _mm_cvtepi32_pd(zx.q((eax_144 << 1) + 0xffffffff))
    while (ebx_1 s<= ecx)
    
    int32_t ebx_2 = 1
    void* edx_17 = (esi_4 << 3) + 0x18
    
    do
        int32_t ecx_33 = *(&var_9c + (ebx_2 << 2))
        edx_17 += 0x28
        int32_t eax_147
        eax_147.b = ecx_33 s> 0
        *(data_138a6cc + edx_17 - 0x40) = _mm_cvtepi32_pd(zx.q((eax_147 << 1) + 0xffffffff))
        int32_t eax_150
        eax_150.b = ecx_33 s> 1
        *(data_138a6cc + edx_17 - 0x38) = _mm_cvtepi32_pd(zx.q((eax_150 << 1) + 0xffffffff))
        int32_t eax_153
        eax_153.b = ecx_33 s> 2
        *(edx_17 + data_138a6cc - 0x30) = _mm_cvtepi32_pd(zx.q((eax_153 << 1) + 0xffffffff))
        int32_t eax_156
        eax_156.b = ecx_33 s> 3
        *(edx_17 + data_138a6cc - 0x28) = _mm_cvtepi32_pd(zx.q((eax_156 << 1) + 0xffffffff))
        int32_t eax_159
        eax_159.b = ecx_33 s> 4
        ebx_2 += 1
        esi_4 += 5
        *(edx_17 + data_138a6cc - 0x20) = _mm_cvtepi32_pd(zx.q((eax_159 << 1) + 0xffffffff))
    while (ebx_2 s<= ecx)
    
    int32_t ebx_3 = 1
    void* edx_18 = (esi_4 << 3) + 0x18
    
    do
        int32_t ecx_34 = *(&var_c8 + (ebx_3 << 2))
        edx_18 += 0x28
        int32_t eax_162
        eax_162.b = ecx_34 s> 0
        *(edx_18 + data_138a6cc - 0x40) = _mm_cvtepi32_pd(zx.q((eax_162 << 1) + 0xffffffff))
        int32_t eax_165
        eax_165.b = ecx_34 s> 1
        *(edx_18 + data_138a6cc - 0x38) = _mm_cvtepi32_pd(zx.q((eax_165 << 1) + 0xffffffff))
        int32_t eax_168
        eax_168.b = ecx_34 s> 2
        *(edx_18 + data_138a6cc - 0x30) = _mm_cvtepi32_pd(zx.q((eax_168 << 1) + 0xffffffff))
        int32_t eax_171
        eax_171.b = ecx_34 s> 3
        *(edx_18 + data_138a6cc - 0x28) = _mm_cvtepi32_pd(zx.q((eax_171 << 1) + 0xffffffff))
        int32_t eax_174
        eax_174.b = ecx_34 s> 4
        ebx_3 += 1
        esi_4 += 5
        *(edx_18 + data_138a6cc - 0x20) = _mm_cvtepi32_pd(zx.q((eax_174 << 1) + 0xffffffff))
    while (ebx_3 s<= ecx)
    
    void* edx_19 = (esi_4 << 3) + 0x10
    
    for (int32_t i_7 = 0; i_7 s<= 0xc; )
        int32_t var_1c
        int32_t ecx_35 = *(&var_1c + i_7)
        esi_4 += 6
        edx_19 += 0x30
        int32_t eax_177
        eax_177.b = ecx_35 s> 0
        *(data_138a6cc + (esi_4 << 3) - 0x30) = _mm_cvtepi32_pd(zx.q((eax_177 << 1) + 0xffffffff))
        int32_t eax_180
        eax_180.b = ecx_35 s> 1
        *(data_138a6cc + (esi_4 << 3) - 0x28) = _mm_cvtepi32_pd(zx.q((eax_180 << 1) + 0xffffffff))
        int32_t var_38
        int32_t ecx_36 = *(&var_38 + i_7)
        int32_t eax_183
        eax_183.b = ecx_35 s> 2
        *(edx_19 + data_138a6cc - 0x30) = _mm_cvtepi32_pd(zx.q((eax_183 << 1) + 0xffffffff))
        int32_t eax_186
        eax_186.b = ecx_36 s> 0
        *(data_138a6cc + (esi_4 << 3) - 0x18) = _mm_cvtepi32_pd(zx.q((eax_186 << 1) + 0xffffffff))
        int32_t eax_189
        eax_189.b = ecx_36 s> 1
        *(data_138a6cc + (esi_4 << 3) - 0x10) = _mm_cvtepi32_pd(zx.q((eax_189 << 1) + 0xffffffff))
        int32_t eax_192
        eax_192.b = ecx_36 s> 2
        i_7 += 4
        *(edx_19 + data_138a6cc - 0x18) = _mm_cvtepi32_pd(zx.q((eax_192 << 1) + 0xffffffff))
    
    void* ebx_4 = (esi_4 << 3) + 0x60
    int32_t eax_195
    eax_195.b = *(var_d8 + 0x18c) s> 1
    *(data_138a6cc + (esi_4 << 3)) = _mm_cvtepi32_pd(zx.q((eax_195 << 1) + 0xffffffff))
    int32_t eax_198
    eax_198.b = *(var_d8 + 0x18c) s> 2
    *(data_138a6cc + (esi_4 << 3) + 8) = _mm_cvtepi32_pd(zx.q((eax_198 << 1) + 0xffffffff))
    int32_t eax_201
    eax_201.b = *(var_d8 + 0x18c) s> 3
    *(data_138a6cc + (esi_4 << 3) + 0x10) = _mm_cvtepi32_pd(zx.q((eax_201 << 1) + 0xffffffff))
    int32_t eax_204
    eax_204.b = *(var_d8 + 0x18c) s> 4
    *(data_138a6cc + (esi_4 << 3) + 0x18) = _mm_cvtepi32_pd(zx.q((eax_204 << 1) + 0xffffffff))
    int32_t eax_207
    eax_207.b = *(var_d8 + 0x18c) s> 5
    *(data_138a6cc + (esi_4 << 3) + 0x20) = _mm_cvtepi32_pd(zx.q((eax_207 << 1) + 0xffffffff))
    int32_t eax_210
    eax_210.b = *(var_d8 + 0x18c) s> 6
    *(data_138a6cc + (esi_4 << 3) + 0x28) = _mm_cvtepi32_pd(zx.q((eax_210 << 1) + 0xffffffff))
    int32_t eax_213
    eax_213.b = *(var_d8 + 0x18c) s> 7
    *(data_138a6cc + (esi_4 << 3) + 0x30) = _mm_cvtepi32_pd(zx.q((eax_213 << 1) + 0xffffffff))
    int32_t eax_216
    eax_216.b = *(var_d8 + 0x18c) s> 8
    *(data_138a6cc + (esi_4 << 3) + 0x38) = _mm_cvtepi32_pd(zx.q((eax_216 << 1) + 0xffffffff))
    int32_t eax_219
    eax_219.b = *(var_d8 + 0x18c) s> 9
    int32_t i_8 = 0
    *(data_138a6cc + (esi_4 << 3) + 0x40) = _mm_cvtepi32_pd(zx.q((eax_219 << 1) + 0xffffffff))
    
    do
        int32_t ecx_37
        ecx_37.b = *(var_d8 + 0x198) + i_8 s< arg6
        *(ebx_4 + data_138a6cc - 0x18) = _mm_cvtepi32_pd(zx.q((ecx_37 << 1) + 0xffffffff))
        int32_t ecx_39
        ecx_39.b = *(var_d8 + 0x198) + 1 + i_8 s< arg6
        *(ebx_4 + data_138a6cc - 0x10) = _mm_cvtepi32_pd(zx.q((ecx_39 << 1) + 0xffffffff))
        int32_t ecx_41
        ecx_41.b = *(var_d8 + 0x198) + 2 + i_8 s< arg6
        *(ebx_4 + data_138a6cc - 8) = _mm_cvtepi32_pd(zx.q((ecx_41 << 1) + 0xffffffff))
        int32_t ecx_43
        ecx_43.b = *(var_d8 + 0x198) + 3 + i_8 s< arg6
        *(ebx_4 + data_138a6cc) = _mm_cvtepi32_pd(zx.q((ecx_43 << 1) + 0xffffffff))
        int32_t ecx_45
        ecx_45.b = *(var_d8 + 0x198) + 4 + i_8 s< arg6
        *(ebx_4 + data_138a6cc + 8) = _mm_cvtepi32_pd(zx.q((ecx_45 << 1) + 0xffffffff))
        int32_t ecx_47
        ecx_47.b = *(var_d8 + 0x198) + 5 + i_8 s< arg6
        *(ebx_4 + data_138a6cc + 0x10) = _mm_cvtepi32_pd(zx.q((ecx_47 << 1) + 0xffffffff))
        int32_t ecx_49
        ecx_49.b = *(var_d8 + 0x198) + 6 + i_8 s< arg6
        *(ebx_4 + data_138a6cc + 0x18) = _mm_cvtepi32_pd(zx.q((ecx_49 << 1) + 0xffffffff))
        ebx_4 += 0x50
        int32_t ecx_51
        ecx_51.b = *(var_d8 + 0x198) + 7 + i_8 s< arg6
        *(ebx_4 + data_138a6cc - 0x30) = _mm_cvtepi32_pd(zx.q((ecx_51 << 1) + 0xffffffff))
        int32_t ecx_53
        ecx_53.b = *(var_d8 + 0x198) + 8 + i_8 s< arg6
        *(ebx_4 + data_138a6cc - 0x28) = _mm_cvtepi32_pd(zx.q((ecx_53 << 1) + 0xffffffff))
        int32_t ecx_55
        ecx_55.b = *(var_d8 + 0x198) + 9 + i_8 s< arg6
        i_8 += 0xa
        *(ebx_4 + data_138a6cc - 0x20) = _mm_cvtepi32_pd(zx.q((ecx_55 << 1) + 0xffffffff))
    while (i_8 s< 0x1e)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return esi_4 + 0x27
}
