// 函数名称: sub_4bb290
// 虚拟地址: 0x4bb290
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_4bb290()
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t edi = 0
    char var_a1 = 0
    float xmm0 = *(data_114e818 + 0x2c)
    int32_t ecx
    
    if (data_643654 s> 0)
        void var_108
        void var_f8
        float var_b8
        void var_a0
        float var_38
        float var_28
        float var_24
        int32_t* eax_3
        
        do
            int32_t edx_1
            eax_3, edx_1 = sub_4a7d60((&data_642654)[edi])
            int32_t ecx_2 = eax_3[0x3fb]
            int128_t var_50
            int128_t* eax_11
            
            if (ecx_2 == 1 || ecx_2 == 4 || ecx_2 == 5)
                int32_t* ecx_16 = eax_3[0x3a6]
                
                if (ecx_16 == 0)
                    sub_489550(eax_3, &data_5b2591, "el.propsStatic.image", 
                        "d:\ax\trunk\ax2017\engine\ui2.cpp", 0x4130, "UI2SizeToSource")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                sub_4d0720(ecx_16)
                float eax_25
                int32_t edx_5
                eax_25, edx_5 = sub_48f600(eax_3[0x3a6])
                var_b8 = eax_25
                int32_t var_b4_1 = edx_5
                int128_t* eax_26 = sub_498790(&eax_3[3], xmm0, &var_f8)
                float* edx_6 = &var_b8
                float xmm0_36 = (*(eax_26 + 0xc) f+ *(eax_26 + 4)) * 0.5f
                var_28 = (*(eax_26 + 8) f+ *eax_26) * 0.5f
                var_24 = xmm0_36
                var_50 = *sub_4829a0(&var_108, edx_6, &var_28, &var_108)
                int128_t var_90
                eax_11 = &var_90
                var_90 = *sub_4be600(&var_a0, edx_6, &var_50, &var_a0)
                sub_4a9f50(eax_11, 0x75, eax_3, eax_11)
                eax_3.b = var_a1
            else if (ecx_2 == 8)
                void var_118
                float xmm1_1[0x4] = *sub_4fccb0(&var_118, edx_1, eax_3[0x3be], &var_118)
                float xmm2_3 = _mm_shuffle_ps(xmm1_1, xmm1_1, 0xaa) f- xmm1_1
                float xmm0_3 =
                    _mm_shuffle_ps(xmm1_1, xmm1_1, 0xff) - _mm_shuffle_ps(xmm1_1, xmm1_1, 0x55)
                float var_d0 = xmm2_3
                float var_cc_1 = xmm0_3
                void var_128
                int128_t* eax_6 = sub_498790(&eax_3[3], xmm0, &var_128)
                float* edx_2 = &var_d0
                float xmm0_6 = (*(eax_6 + 0xc) f+ *(eax_6 + 4)) * 0.5f
                float var_c8 = (*(eax_6 + 8) f+ *eax_6) * 0.5f
                float var_c4_1 = xmm0_6
                void var_138
                var_50 = *sub_4829a0(&var_138, edx_2, &var_c8, &var_138)
                int128_t var_60
                eax_11 = &var_60
                void var_148
                var_60 = *sub_4be600(&var_148, edx_2, &var_50, &var_148)
                sub_4a9f50(eax_11, 0x75, eax_3, eax_11)
                eax_3.b = var_a1
            else if (ecx_2 == 0xa || ecx_2 == 9 || ecx_2 == 7)
                eax_3.b = var_a1
            else if (ecx_2 == 2)
                int32_t ecx_7 = eax_3[0x3d2]
                
                if (ecx_7 != 0)
                    void var_158
                    int128_t* eax_12 = sub_49ae40(&var_158)
                    uint128_t xmm4_1 = zx.o(eax_3[0x3c9])
                    float xmm3_1 = eax_3[0x3ce]
                    float xmm6_1[0x4] = *eax_12
                    float xmm2_5 = eax_3[0x3cd]
                    float xmm5_2 = _mm_cvtepi32_ps(zx.o(eax_3[0x3ca]))
                    float xmm4_2 = _mm_cvtepi32_ps(xmm4_1)
                    float xmm1_9 = _mm_shuffle_ps(xmm6_1, xmm6_1, 0xaa)
                    float xmm0_15 = (_mm_shuffle_ps(xmm6_1, xmm6_1, 0xff)
                        - _mm_shuffle_ps(xmm6_1, xmm6_1, 0x55)) * xmm5_2 + xmm3_1 * (xmm5_2 - 1f)
                    float var_d8 = (xmm1_9 f- xmm6_1) * xmm4_2 + xmm2_5 * (xmm4_2 - 1f)
                    float var_d4_1 = xmm0_15
                    void var_168
                    int128_t* eax_13 = sub_498790(&eax_3[3], xmm0, &var_168)
                    int32_t* edx_3 = &var_d8
                    float xmm0_18 = (*(eax_13 + 0xc) f+ *(eax_13 + 4)) * 0.5f
                    float var_e0 = (*(eax_13 + 8) f+ *eax_13) * 0.5f
                    float var_dc_1 = xmm0_18
                    void var_178
                    var_50 = *sub_4829a0(&var_178, edx_3, &var_e0, &var_178)
                    int128_t var_70
                    eax_11 = &var_70
                    void var_188
                    var_70 = *sub_4be600(&var_188, edx_3, &var_50, &var_188)
                    sub_4a9f50(eax_11, 0x75, eax_3, eax_11)
                    eax_3.b = var_a1
                else if (eax_3[0x464] s<= 0)
                    eax_3.b = var_a1
                else
                    float xmm0_22 = _mm_cvtepi32_ps(zx.o(eax_3[0x3c9]))
                    int32_t var_1d8_1 = ecx_7
                    float xmm0_24 = _mm_cvtepi32_ps(zx.o(eax_3[0x3ca]))
                    void var_198
                    int128_t* eax_19 = sub_498790(sub_49ea50(eax_3, 0) + 0xc, xmm0, &var_198)
                    float xmm3_6 =
                        (*(eax_19 + 0xc) f- *(eax_19 + 4)) * xmm0_24 + eax_3[0x3ce] f* (xmm0_24 - 1f)
                    float var_e8 = (*(eax_19 + 8) f- *eax_19) * xmm0_22 + eax_3[0x3cd] f* (xmm0_22 - 1f)
                    float var_e4_1 = xmm3_6
                    void var_1a8
                    int128_t* eax_20 = sub_498790(&eax_3[3], xmm0, &var_1a8)
                    float* edx_4 = &var_e8
                    float xmm0_31 = (*(eax_20 + 0xc) f+ *(eax_20 + 4)) * 0.5f
                    var_38 = (*(eax_20 + 8) f+ *eax_20) * 0.5f
                    float var_34_1 = xmm0_31
                    void var_1b8
                    var_50 = *sub_4829a0(&var_1b8, edx_4, &var_38, &var_1b8)
                    int128_t var_80
                    eax_11 = &var_80
                    void var_1c8
                    var_80 = *sub_4be600(&var_1c8, edx_4, &var_50, &var_1c8)
                    sub_4a9f50(eax_11, 0x75, eax_3, eax_11)
                    eax_3.b = var_a1
            else if (ecx_2 != 6)
                eax_3.b = var_a1
            else
                eax_3.b = 1
                var_a1 = 1
            ecx = data_643654
            edi += 1
        while (edi s< ecx)
        
        if (eax_3.b != 0)
            int32_t eax_31 = 0
            int32_t var_b0_2 = 0
            
            if (ecx s> 0)
                while (true)
                    char* eax_32
                    eax_32, ecx = sub_4a7d60((&data_642654)[eax_31])
                    
                    if (*(eax_32 + 0xfec) == 6 && *(eax_32 + 0x1190) s> 0)
                        int32_t var_1d8_2 = ecx
                        float var_30
                        sub_498790(sub_49ea50(eax_32, 0) + 0xc, xmm0, &var_30)
                        int32_t esi_2 = 1
                        float var_2c
                        
                        if (*(eax_32 + 0x1190) s> 1)
                            while (true)
                                int128_t* eax_35 =
                                    sub_498790(sub_49ea50(eax_32, esi_2) + 0xc, xmm0, &var_a0)
                                float xmm3_7 = var_28
                                float xmm2_15 = var_30
                                
                                if (xmm3_7 < xmm2_15 || var_24 < var_2c)
                                    sub_489550(eax_35, &data_5b2591, "RectIsNormalized(r0)", 
                                        "d:\ax\trunk\ax2017\engine\rect.cpp", 0xdb, "RectUnion")
                                    
                                    if (IsDebuggerPresent() != 1)
                                        sub_489700()
                                        noreturn
                                    
                                    breakpoint
                                
                                float xmm4_7 = *eax_35
                                float var_c0_1
                                
                                var_c0_1 = xmm4_7 <= xmm2_15 ? xmm4_7 : xmm2_15
                                
                                float xmm2_16 = *(eax_35 + 8)
                                
                                var_b8 = xmm3_7 <= xmm2_16 ? xmm2_16 : xmm3_7
                                
                                int32_t xmm2_17 = *(eax_35 + 4)
                                
                                if (xmm2_17 f<= var_2c)
                                    int32_t var_bc_2 = xmm2_17
                                else
                                    float var_bc_1 = var_2c
                                
                                int32_t xmm0_40 = *(eax_35 + 0xc)
                                
                                if (var_24 f<= xmm0_40)
                                    int32_t var_b4_3 = xmm0_40
                                else
                                    float var_b4_2 = var_24
                                
                                esi_2 += 1
                                var_30.o = var_c0_1.o
                                
                                if (esi_2 s>= *(eax_32 + 0x1190))
                                    break
                                
                                continue
                        
                        int128_t* eax_36 = sub_498790(&eax_32[0xc], xmm0, &var_108)
                        float xmm4_8 = *eax_36
                        
                        if (*(eax_36 + 8) f< xmm4_8)
                        label_4bbaac:
                            sub_489550(eax_36, &data_5b2591, "RectIsNormalized(r)", 
                                "d:\ax\trunk\ax2017\engine\rect.cpp", 0x127, "RectTopLeft")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_489700()
                            noreturn
                        
                        float xmm3_8 = *(eax_36 + 4)
                        
                        if (*(eax_36 + 0xc) f< xmm3_8)
                            goto label_4bbaac
                        
                        float xmm2_19 = var_30
                        
                        if (var_28 < xmm2_19 || var_24 < var_2c)
                            goto label_4bbaac
                        
                        int32_t i = 0
                        int32_t i_1 = 0
                        
                        if (*(eax_32 + 0x1190) s> 0)
                            float xmm2_21 = (xmm2_19 - xmm4_8) ^ (data_60cca0.o).d
                            float xmm1_27 = (var_2c - xmm3_8) ^ (data_60cca0.o).d
                            
                            do
                                char* eax_37 = sub_49ea50(eax_32, i)
                                int128_t* eax_38 = sub_498790(&eax_37[0xc], xmm0, &var_f8)
                                float xmm1_28 = *(eax_38 + 8)
                                float xmm2_24 = *(eax_38 + 4) + xmm1_27
                                float xmm3_10 = *(eax_38 + 0xc) + xmm1_27
                                float var_40 = xmm2_21 f+ *eax_38
                                float var_3c_1 = xmm2_24
                                float var_34_2 = xmm3_10
                                var_38 = xmm2_21 + xmm1_28
                                sub_4a9f50(&var_40, 0x75, eax_37, &var_40)
                                i = i_1 + 1
                                i_1 = i
                            while (i s< *(eax_32 + 0x1190))
                        
                        sub_4a9f50(&var_30, 0x75, eax_32, &var_30)
                    
                    eax_31 = var_b0_2 + 1
                    var_b0_2 = eax_31
                    
                    if (eax_31 s>= data_643654)
                        break
    
    ecx.b = 1
    int32_t result = sub_4a7e20(ecx.b)
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
