// 函数名称: sub_4fe650
// 虚拟地址: 0x4fe650
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int128_t* __convention("regparm")sub_4fe650(int32_t arg1, int32_t* arg2, void* arg3, uint32_t arg4)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float xmm0 = *(arg3 + 0x2e8)
    int32_t* ecx = *(arg3 + 0x2e4)
    *(arg3 + 0x2f0) = xmm0
    float xmm1_2 = ecx[0x16] f* *(arg3 + 0x2ec) + xmm0
    *(arg3 + 0x2e8) = xmm1_2
    
    if (xmm1_2 < 1f)
        goto label_4fe70a
    
    int32_t* eax_3 = sub_4981f0(*ecx)
    int128_t* eax_4
    
    if (*(*(arg3 + 0x2dc) * 0x168 + *eax_3 + 0xd9) != 0)
        float xmm0_2 = *(arg3 + 0x2e8) - 1f
        *(arg3 + 0x2f4) += 1
        ecx = *(arg3 + 0x2e4)
        *(arg3 + 0x2e8) = xmm0_2
    label_4fe70a:
        int32_t* eax_5
        int32_t edx
        eax_5, edx = sub_4981f0(*ecx)
        uint32_t ecx_5 = arg4
        
        if (*(*(arg3 + 0x2dc) * 0x168 + *eax_5 + 0xe3) != 0)
            edx = *(ecx_5 + 0xfc)
            int32_t eax_8 = *(ecx_5 + 0xf8) * edx
            
            if (eax_8 s> 1)
                float xmm0_6 = sub_4827e0(_mm_cvtepi32_ps(zx.o(eax_8)) f* *(arg3 + 0x2e8))
                float xmm0_7
                
                if (0 f<= xmm0_6)
                    xmm0_7 = xmm0_6 + 0.5f
                else
                    xmm0_7 = xmm0_6 - 0.5f
                
                int32_t ecx_6 = int.d(xmm0_7)
                int32_t esi_2 = eax_8 - 1
                
                if (ecx_6 s< esi_2)
                    esi_2 = ecx_6
                
                ecx_5 = arg4
                arg2[0xe] = mods.dp.d(sx.q(esi_2), edx)
                int32_t eax_12
                int32_t edx_3
                edx_3:eax_12 = sx.q(esi_2)
                edx = mods.dp.d(edx_3:eax_12, *(ecx_5 + 0xfc))
                arg2[0xd] = divs.dp.d(edx_3:eax_12, *(ecx_5 + 0xfc))
        
        int32_t eax_14 = 0
        int32_t var_f8_2 = 0xa
        float var_10c_1 = 1f
        float var_100_1 = 0.100000001f
        float var_fc_1 = 0.100000001f
        int32_t var_104_2 = 0
        void var_1c0
        int128_t var_58
        
        if (*(ecx_5 + 0x110) s<= 0)
        label_4ffba9:
            float xmm1_88 = *(*(arg3 + 0x2e4) + 0x58)
            int128_t* eax_275
            int32_t ecx_132
            int32_t edx_131
            eax_275, ecx_132, edx_131 = sub_4fe0d0(&var_58, 
                _mm_unpacklo_ps(*arg2 * xmm1_88, arg2[1] f* xmm1_88), arg2[2] f* xmm1_88)
            float xmm5_5 = *(arg3 + 0x28c)
            float xmm7_2 = *(arg3 + 0x294)
            float xmm2_13[0x4] = *eax_275
            float xmm6_8 = *(arg3 + 0x290)
            float xmm0_150 = *(arg3 + 0x298) f* xmm2_13
            float xmm4_7 = _mm_shuffle_ps(xmm2_13, xmm2_13, 0xff)
            float xmm3_42 = _mm_shuffle_ps(xmm2_13, xmm2_13, 0x55)
            float xmm2_14 = _mm_shuffle_ps(xmm2_13, *eax_275, 0xaa)
            float var_120 =
                xmm6_8 * xmm4_7 + *(arg3 + 0x298) * xmm3_42 + xmm5_5 * xmm2_14 - xmm7_2 f* *eax_275
            void* eax_276 = *(arg3 + 0x2e4)
            float var_11c =
                xmm7_2 * xmm4_7 + *(arg3 + 0x298) * xmm2_14 + xmm6_8 f* *eax_275 - xmm5_5 * xmm3_42
            float var_118 =
                *(arg3 + 0x298) * xmm4_7 - xmm5_5 f* (*eax_275).d - xmm6_8 * xmm3_42 - xmm7_2 * xmm2_14
            *(arg3 + 0x28c) = (xmm5_5 * xmm4_7 + xmm0_150 + xmm7_2 * xmm3_42 - xmm6_8 * xmm2_14).o
            float xmm0_169 = *(eax_276 + 0x58)
            float xmm3_46 = arg2[5] f* xmm0_169 * 100f f+ *(arg3 + 0x2a4)
            float xmm0_171 = *(arg3 + 0x29c) + arg2[3] f* xmm0_169 * 100f
            *(arg3 + 0x2a0) = arg2[4] f* xmm0_169 * 100f f+ *(arg3 + 0x2a0)
            *(arg3 + 0x2a4) = xmm3_46
            *(arg3 + 0x29c) = xmm0_171
            int64_t var_23c
            
            if (*(arg4 + 0xea) != 0)
                int128_t* eax_279 = sub_5020f0(&var_1c0, edx_131, arg3, &var_1c0)
                int32_t ecx_134 = arg2[0xa1]
                int32_t edx_132 = 0x10
                int128_t xmm0_172 = *eax_279
                
                if (var_f8_2 s< 0x10)
                    edx_132 = var_f8_2
                
                var_58 = eax_279[1]
                
                if (edx_132 s< 2)
                    edx_132 = 2
                
                float xmm7_4 = *(*(arg3 + 0x2e4) + 0x5c)
                
                if (ecx_134 s< 2 || not(xmm7_4 - var_fc_1 f<= arg2[ecx_134 * 9 + 0x10]))
                    if (ecx_134 - edx_132 + 1 s> 0)
                        var_23c:4.d = &arg2[(ecx_134 - edx_132 + 1) * 9 + 0x11]
                        var_23c.d = &arg2[0x11]
                        sub_579a90(var_23c, (ecx_134 - (ecx_134 - edx_132 + 1)) * 0x24)
                        ecx_134 = arg2[0xa1] - (ecx_134 - edx_132 + 1)
                    
                    arg2[0xa1] = ecx_134 + 1
                    arg2[ecx_134 * 9 + 0x19] = xmm7_4
                    ecx_134 = arg2[0xa1]
                
                int32_t ecx_137 = ecx_134 * 9
                float xmm4_10 = xmm0_172:4.d
                float xmm3_47 = var_58.d
                float xmm5_7 = xmm0_172:0xc.d
                float xmm1_112 = xmm0_172:8.d
                *(arg2 + (ecx_137 << 2) + 0x20) = var_58:4.q
                arg2[ecx_137 + 0xa] = var_58:0xc.d
                arg2[ecx_137 + 0xf] = 0
                float xmm6_12 = xmm4_10 * xmm5_7 + xmm3_47 * xmm1_112
                float xmm2_21 = xmm5_7 * xmm1_112 - xmm4_10 * xmm3_47
                arg2[ecx_137 + 0xe] = var_100_1
                *(arg2 + (ecx_137 << 2) + 0x2c) = _mm_unpacklo_ps(xmm6_12 + xmm6_12, xmm2_21 + xmm2_21)
                arg2[ecx_137 + 0xd] =
                    xmm5_7 * xmm5_7 - xmm1_112 * xmm1_112 - xmm4_10 * xmm4_10 + xmm3_47 * xmm3_47
                int32_t esi_31 = arg2[0xa1]
                
                if (esi_31 == edx_132 - 1 && esi_31 s>= 2)
                    arg2[0x18] = (xmm7_4 f- arg2[ecx_137 + 0x10]) / var_fc_1
            else if (*(arg4 + 0xeb) != 0)
                float var_234_14 = var_10c_1
                var_23c:4.d = var_100_1
                var_23c.d = var_f8_2
                sub_4fe3d0(arg4, arg2, arg3, ecx_132, var_23c.d)
            uint32_t eax_277
            eax_277.b = 1
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return eax_277
        
        while (true)
            int32_t* esi_5 = (eax_14 << 4) + *(ecx_5 + 0x118)
            int32_t ecx_7 = *esi_5
            int128_t var_160
            float var_24
            TEB* fsbase
            
            if (ecx_7 - 9 u<= 0x62)
                switch (ecx_7 + &jump_table_4fff54[0x1e]:3)
                    case &lookup_table_4fffd8
                        int32_t* esi_26 = esi_5[2]
                        int128_t xmm0_131
                        int128_t xmm1_78
                        
                        if (esi_26 != 0)
                            void* eax_264 = arg2[0xc]
                            void var_200
                            int128_t* eax_265
                            int32_t edx_127
                            eax_265, edx_127 =
                                sub_4fdf10(eax_264, edx, esi_26, *(eax_264 + 0x2f0), &var_200)
                            int128_t var_88 = *eax_265
                            void* eax_266 = arg2[0xc]
                            int128_t var_78_1 = eax_265[1]
                            void var_220
                            int128_t* eax_267
                            int32_t edx_128
                            eax_267, edx_128 =
                                sub_4fdf10(eax_266, edx_127, esi_26, *(eax_266 + 0x2e8), &var_220)
                            int128_t var_a8 = *eax_267
                            int128_t var_98_1 = eax_267[1]
                            int128_t* eax_269 = sub_4dbdc0(&var_1c0, edx_128, &var_88, &var_1c0)
                            int128_t var_c8 = *eax_269
                            int128_t var_b8_1 = eax_269[1]
                            int128_t var_1a0
                            sub_4ddac0(&var_a8, &var_c8, &var_1a0, &var_a8)
                            xmm0_131 = var_1a0
                            int128_t var_190
                            xmm1_78 = var_190
                        else
                            xmm0_131 = data_63c264
                            xmm1_78 = data_63c274
                        
                        int128_t var_e8 = xmm0_131
                        int128_t var_d8_1 = xmm1_78
                        sub_4ddac0(&var_e8, arg3 + 0x288, &var_160, &var_e8)
                        *(arg3 + 0x288) = var_160
                        int128_t var_150
                        *(arg3 + 0x298) = var_150
                        float xmm1_79 = *(arg3 + 0x28c)
                        float xmm4_5 = *(arg3 + 0x298)
                        float xmm2_10 = *(arg3 + 0x290)
                        float xmm3_37 = *(arg3 + 0x294)
                        float xmm0_145[0x4]
                        edx, xmm0_145 = sub_41dbe0(xmm1_79 * xmm1_79 + xmm4_5 * xmm4_5
                            + xmm2_10 * xmm2_10 + xmm3_37 * xmm3_37)
                        int32_t var_124
                        var_124.o = _mm_div_ps(*(arg3 + 0x28c), _mm_shuffle_ps(xmm0_145, xmm0_145, 0))
                        *(arg3 + 0x28c) = var_124.o
                    case &lookup_table_4fffd8[0x1a]
                        float xmm0_10 = sub_4da600(sub_4fd650(arg2, esi_5)) * 0.5f
                        float xmm0_11 = sub_41f120(xmm0_10)
                        float var_20_1 = xmm0_11
                        float xmm1_4 = xmm0_11 * 0f
                        float var_28 = xmm1_4
                        var_24 = xmm1_4
                        int32_t var_1c_1 = sub_41f100(xmm0_10)
                        edx = &var_28
                        float var_1d0[0x4]
                        *(arg3 + 0x28c) = *sub_482a10(&var_1d0, edx, arg3 + 0x28c, &var_1d0)
                    case &lookup_table_4fffd8[0x1b]
                        float xmm0_17 = sub_4da600(sub_4fd650(arg2, esi_5)) * 0.5f
                        float xmm0_18 = sub_41f120(xmm0_17)
                        float var_38 = xmm0_18
                        float xmm1_6 = xmm0_18 * 0f
                        float var_34_1 = xmm1_6
                        float var_30_1 = xmm1_6
                        int32_t var_2c_1 = sub_41f100(xmm0_17)
                        edx = &var_38
                        float var_1e0[0x4]
                        *(arg3 + 0x28c) = *sub_482a10(&var_1e0, edx, arg3 + 0x28c, &var_1e0)
                    case &lookup_table_4fffd8[0x1c]
                        float xmm0_24 = sub_4da600(sub_4fd650(arg2, esi_5)) * 0.5f
                        float xmm0_25 = sub_41f120(xmm0_24)
                        float var_44_1 = xmm0_25
                        float xmm1_8 = xmm0_25 * 0f
                        float var_48 = xmm1_8
                        float var_40_1 = xmm1_8
                        int32_t var_3c_1 = sub_41f100(xmm0_24)
                        edx = &var_48
                        *(arg3 + 0x28c) = *sub_482a10(&var_58, edx, arg3 + 0x28c, &var_58)
                    case &lookup_table_4fffd8[0x1d]
                        float xmm0_30
                        edx, xmm0_30 = sub_4fd650(arg2, esi_5)
                        *arg2 = xmm0_30 f+ *arg2
                    case &lookup_table_4fffd8[0x1e]
                        float xmm0_32
                        edx, xmm0_32 = sub_4fd650(arg2, esi_5)
                        arg2[1] = xmm0_32 f+ arg2[1]
                    case &lookup_table_4fffd8[0x1f]
                        float xmm0_34
                        edx, xmm0_34 = sub_4fd650(arg2, esi_5)
                        arg2[2] = xmm0_34 f+ arg2[2]
                    case &lookup_table_4fffd8[0x20]
                        float xmm0_36
                        edx, xmm0_36 = sub_4fd650(arg2, esi_5)
                        *(arg3 + 0x29c) = xmm0_36 f+ *(arg3 + 0x29c)
                    case &lookup_table_4fffd8[0x21]
                        float xmm0_38
                        edx, xmm0_38 = sub_4fd650(arg2, esi_5)
                        *(arg3 + 0x2a0) = xmm0_38 f+ *(arg3 + 0x2a0)
                    case &lookup_table_4fffd8[0x22]
                        float xmm0_40
                        edx, xmm0_40 = sub_4fd650(arg2, esi_5)
                        *(arg3 + 0x2a4) = xmm0_40 f+ *(arg3 + 0x2a4)
                    case &lookup_table_4fffd8[0x23]
                        float xmm0_42
                        edx, xmm0_42 = sub_4fd650(arg2, esi_5)
                        arg2[3] = xmm0_42 f+ arg2[3]
                    case &lookup_table_4fffd8[0x24]
                        float xmm0_44
                        edx, xmm0_44 = sub_4fd650(arg2, esi_5)
                        arg2[4] = xmm0_44 f+ arg2[4]
                    case &lookup_table_4fffd8[0x25]
                        float xmm0_46
                        edx, xmm0_46 = sub_4fd650(arg2, esi_5)
                        arg2[5] = xmm0_46 f+ arg2[5]
                    case &lookup_table_4fffd8[0x26]
                        int32_t* esi_7 = esi_5[2]
                        edx = arg2[0xc]
                        float xmm0_48
                        bool p_4
                        
                        if (esi_7[2] == 1)
                            int32_t* eax_40 = *esi_7
                            xmm0_48 = *eax_40
                            float temp3_1 = eax_40[1]
                            xmm0_48 - temp3_1
                            eax_40:1.b = (xmm0_48 == temp3_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_48, temp3_1) ? 1 : 0) << 2
                                | (xmm0_48 < temp3_1 ? 1 : 0)
                            p_4 = unimplemented  {test ah, 0x44}
                        
                        if (esi_7[2] != 1 || p_4)
                            int32_t eax_43 = (*(edx + 0x2c) + ecx_7) * ecx_7
                            int32_t ecx_33 = (eax_43 << 0xf) + not.d(eax_43)
                            int32_t ecx_34 = (ecx_33 u>> 0xc ^ ecx_33) * 5
                            int32_t eax_51 = (ecx_34 u>> 4 ^ ecx_34) * 0x809
                            void* eax_52 = arg2[0xc]
                            edx, xmm0_48 = sub_526200(esi_7, *(eax_52 + 0x2f4), *(eax_52 + 0x2e8), 
                                (((eax_51 u>> 0x10 ^ eax_51) & 0x7fffff) | 0x3f800000) - 1f)
                        
                        arg2[3] = *(*(arg3 + 0x2e4) + 0x58) * xmm0_48 f+ arg2[3]
                    case &lookup_table_4fffd8[0x27]
                        int32_t* esi_8 = esi_5[2]
                        edx = arg2[0xc]
                        float xmm0_49
                        bool p_6
                        
                        if (esi_8[2] == 1)
                            int32_t* eax_55 = *esi_8
                            xmm0_49 = *eax_55
                            float temp4_1 = eax_55[1]
                            xmm0_49 - temp4_1
                            eax_55:1.b = (xmm0_49 == temp4_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_49, temp4_1) ? 1 : 0) << 2
                                | (xmm0_49 < temp4_1 ? 1 : 0)
                            p_6 = unimplemented  {test ah, 0x44}
                        
                        if (esi_8[2] != 1 || p_6)
                            int32_t eax_58 = (*(edx + 0x2c) + ecx_7) * ecx_7
                            int32_t ecx_38 = (eax_58 << 0xf) + not.d(eax_58)
                            int32_t ecx_39 = (ecx_38 u>> 0xc ^ ecx_38) * 5
                            int32_t eax_66 = (ecx_39 u>> 4 ^ ecx_39) * 0x809
                            void* eax_67 = arg2[0xc]
                            edx, xmm0_49 = sub_526200(esi_8, *(eax_67 + 0x2f4), *(eax_67 + 0x2e8), 
                                (((eax_66 u>> 0x10 ^ eax_66) & 0x7fffff) | 0x3f800000) - 1f)
                        
                        arg2[4] = *(*(arg3 + 0x2e4) + 0x58) * xmm0_49 f+ arg2[4]
                    case &lookup_table_4fffd8[0x28]
                        int32_t* esi_9 = esi_5[2]
                        edx = arg2[0xc]
                        float xmm0_50
                        bool p_8
                        
                        if (esi_9[2] == 1)
                            int32_t* eax_70 = *esi_9
                            xmm0_50 = *eax_70
                            float temp5_1 = eax_70[1]
                            xmm0_50 - temp5_1
                            eax_70:1.b = (xmm0_50 == temp5_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_50, temp5_1) ? 1 : 0) << 2
                                | (xmm0_50 < temp5_1 ? 1 : 0)
                            p_8 = unimplemented  {test ah, 0x44}
                        
                        if (esi_9[2] != 1 || p_8)
                            int32_t eax_73 = (*(edx + 0x2c) + ecx_7) * ecx_7
                            int32_t ecx_43 = (eax_73 << 0xf) + not.d(eax_73)
                            int32_t ecx_44 = (ecx_43 u>> 0xc ^ ecx_43) * 5
                            int32_t eax_81 = (ecx_44 u>> 4 ^ ecx_44) * 0x809
                            void* eax_82 = arg2[0xc]
                            edx, xmm0_50 = sub_526200(esi_9, *(eax_82 + 0x2f4), *(eax_82 + 0x2e8), 
                                (((eax_81 u>> 0x10 ^ eax_81) & 0x7fffff) | 0x3f800000) - 1f)
                        
                        arg2[5] = *(*(arg3 + 0x2e4) + 0x58) * xmm0_50 f+ arg2[5]
                    case &lookup_table_4fffd8[0x29]
                        int32_t* esi_12 = esi_5[2]
                        edx = arg2[0xc]
                        float xmm0_60
                        bool p_12
                        
                        if (esi_12[2] == 1)
                            int32_t* eax_107 = *esi_12
                            xmm0_60 = *eax_107
                            float temp6_1 = eax_107[1]
                            xmm0_60 - temp6_1
                            eax_107:1.b = (xmm0_60 == temp6_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_60, temp6_1) ? 1 : 0) << 2
                                | (xmm0_60 < temp6_1 ? 1 : 0)
                            p_12 = unimplemented  {test ah, 0x44}
                        
                        if (esi_12[2] != 1 || p_12)
                            int32_t eax_110 = (*(edx + 0x2c) + ecx_7) * ecx_7
                            int32_t ecx_62 = (eax_110 << 0xf) + not.d(eax_110)
                            int32_t ecx_63 = (ecx_62 u>> 0xc ^ ecx_62) * 5
                            int32_t eax_118 = (ecx_63 u>> 4 ^ ecx_63) * 0x809
                            void* eax_119 = arg2[0xc]
                            edx, xmm0_60 = sub_526200(esi_12, *(eax_119 + 0x2f4), *(eax_119 + 0x2e8), 
                                (((eax_118 u>> 0x10 ^ eax_118) & 0x7fffff) | 0x3f800000) - 1f)
                        
                        arg2[3] = (1f - xmm0_60) f* *(*(arg3 + 0x2e4) + 0x58) * 100f f* arg2[3]
                    case &lookup_table_4fffd8[0x2a]
                        int32_t* esi_13 = esi_5[2]
                        edx = arg2[0xc]
                        float xmm0_61
                        bool p_14
                        
                        if (esi_13[2] == 1)
                            int32_t* eax_122 = *esi_13
                            xmm0_61 = *eax_122
                            float temp7_1 = eax_122[1]
                            xmm0_61 - temp7_1
                            eax_122:1.b = (xmm0_61 == temp7_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_61, temp7_1) ? 1 : 0) << 2
                                | (xmm0_61 < temp7_1 ? 1 : 0)
                            p_14 = unimplemented  {test ah, 0x44}
                        
                        if (esi_13[2] != 1 || p_14)
                            int32_t eax_125 = (*(edx + 0x2c) + ecx_7) * ecx_7
                            int32_t ecx_67 = (eax_125 << 0xf) + not.d(eax_125)
                            int32_t ecx_68 = (ecx_67 u>> 0xc ^ ecx_67) * 5
                            int32_t eax_133 = (ecx_68 u>> 4 ^ ecx_68) * 0x809
                            void* eax_134 = arg2[0xc]
                            edx, xmm0_61 = sub_526200(esi_13, *(eax_134 + 0x2f4), *(eax_134 + 0x2e8), 
                                (((eax_133 u>> 0x10 ^ eax_133) & 0x7fffff) | 0x3f800000) - 1f)
                        
                        arg2[4] = (1f - xmm0_61) f* *(*(arg3 + 0x2e4) + 0x58) * 100f f* arg2[4]
                    case &lookup_table_4fffd8[0x2b]
                        int32_t* esi_14 = esi_5[2]
                        edx = arg2[0xc]
                        float xmm0_62
                        bool p_16
                        
                        if (esi_14[2] == 1)
                            int32_t* eax_137 = *esi_14
                            xmm0_62 = *eax_137
                            float temp8_1 = eax_137[1]
                            xmm0_62 - temp8_1
                            eax_137:1.b = (xmm0_62 == temp8_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_62, temp8_1) ? 1 : 0) << 2
                                | (xmm0_62 < temp8_1 ? 1 : 0)
                            p_16 = unimplemented  {test ah, 0x44}
                        
                        if (esi_14[2] != 1 || p_16)
                            int32_t eax_140 = (*(edx + 0x2c) + ecx_7) * ecx_7
                            int32_t ecx_72 = (eax_140 << 0xf) + not.d(eax_140)
                            int32_t ecx_73 = (ecx_72 u>> 0xc ^ ecx_72) * 5
                            int32_t eax_148 = (ecx_73 u>> 4 ^ ecx_73) * 0x809
                            void* eax_149 = arg2[0xc]
                            edx, xmm0_62 = sub_526200(esi_14, *(eax_149 + 0x2f4), *(eax_149 + 0x2e8), 
                                (((eax_148 u>> 0x10 ^ eax_148) & 0x7fffff) | 0x3f800000) - 1f)
                        
                        arg2[5] = (1f - xmm0_62) f* *(*(arg3 + 0x2e4) + 0x58) * 100f f* arg2[5]
                    case &lookup_table_4fffd8[0x2c]
                        int32_t* esi_19 = esi_5[2]
                        void* edx_95 = arg2[0xc]
                        float xmm4_1
                        bool p_26
                        
                        if (esi_19[2] == 1)
                            int32_t* eax_204 = *esi_19
                            xmm4_1 = *eax_204
                            float temp13_1 = eax_204[1]
                            xmm4_1 - temp13_1
                            eax_204:1.b = (xmm4_1 == temp13_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm4_1, temp13_1) ? 1 : 0) << 2
                                | (xmm4_1 < temp13_1 ? 1 : 0)
                            p_26 = unimplemented  {test ah, 0x44}
                        
                        if (esi_19[2] != 1 || p_26)
                            int32_t eax_207 = (*(edx_95 + 0x2c) + ecx_7) * ecx_7
                            int32_t ecx_97 = (eax_207 << 0xf) + not.d(eax_207)
                            int32_t ecx_98 = (ecx_97 u>> 0xc ^ ecx_97) * 5
                            int32_t eax_215 = (ecx_98 u>> 4 ^ ecx_98) * 0x809
                            void* eax_216 = arg2[0xc]
                            float xmm0_73 = sub_526200(esi_19, *(eax_216 + 0x2f4), *(eax_216 + 0x2e8), 
                                (((eax_215 u>> 0x10 ^ eax_215) & 0x7fffff) | 0x3f800000) - 1f)
                            edx_95 = arg2[0xc]
                            xmm4_1 = xmm0_73
                        
                        float xmm0_74 = arg2[3]
                        float xmm1_43 = arg2[5]
                        float xmm0_75 = arg2[4]
                        float xmm2_4 = xmm0_74 * xmm0_74 + xmm0_75 * xmm0_75 + xmm1_43 * xmm1_43
                        float xmm0_77 =
                            _mm_min_ss(0x3f800000, xmm2_4 * xmm4_1 f* *(*(edx_95 + 0x2e4) + 0x58))
                        float xmm0_79
                        edx, xmm0_79 = sub_41dbe0(xmm2_4)
                        float xmm5_1 = 1f / (xmm0_79 + 9.99999975e-06f)
                        float xmm5_3 = xmm5_1 f* arg2[5] * xmm0_77
                        arg2[4] = arg2[4] f- xmm0_77 * xmm5_1 f* arg2[4]
                        float xmm0_86 = arg2[5] f- xmm5_3
                        arg2[3] = xmm0_74 - xmm0_77 * xmm5_1 * xmm0_74
                        arg2[5] = xmm0_86
                    case &lookup_table_4fffd8[0x2d]
                        int32_t* eax_103
                        void* esi_11
                        
                        if (arg2[0x10].b != 0)
                            esi_11 = arg2[0xc]
                            eax_103, edx = sub_4981f0(**(esi_11 + 0x2e4))
                        
                        if (arg2[0x10].b == 0 || *(*(esi_11 + 0x2dc) * 0x168 + *eax_103 + 0xe5) == 0)
                            float xmm0_57
                            edx, xmm0_57 = sub_4fd650(arg2, esi_5)
                            
                            if (data_1511ab0 s> *(*fsbase->ThreadLocalStoragePointer + 4))
                                edx = __Init_thread_header(&data_1511ab0)
                                
                                if (data_1511ab0 == 0xffffffff)
                                    data_1511ab4 = 0x3c8efa35
                                    edx = __Init_thread_footer(&data_1511ab0)
                            
                            arg2[9] = xmm0_57 f* data_1511ab4 f+ arg2[9]
                    case &lookup_table_4fffd8[0x2e]
                        int32_t* eax_86
                        void* esi_10
                        
                        if (arg2[0x10].b != 0)
                            esi_10 = arg2[0xc]
                            eax_86, edx = sub_4981f0(**(esi_10 + 0x2e4))
                        
                        if (arg2[0x10].b == 0 || *(*(esi_10 + 0x2dc) * 0x168 + *eax_86 + 0xe5) == 0)
                            int32_t* eax_88 = esi_5[2]
                            float var_ec_9
                            bool p_10
                            
                            if (eax_88[2] == 1)
                                int32_t* eax_89 = *eax_88
                                float xmm0_51 = *eax_89
                                float temp16_1 = eax_89[1]
                                xmm0_51 - temp16_1
                                var_ec_9 = xmm0_51
                                eax_89:1.b = (xmm0_51 == temp16_1 ? 1 : 0) << 6
                                    | (is_unordered.d(xmm0_51, temp16_1) ? 1 : 0) << 2
                                    | (xmm0_51 < temp16_1 ? 1 : 0)
                                p_10 = unimplemented  {test ah, 0x44}
                            
                            if (eax_88[2] != 1 || p_10)
                                int32_t ecx_51 = (*(arg2[0xc] + 0x2c) + *esi_5) * *esi_5
                                int32_t edx_42 = (ecx_51 << 0xf) + not.d(ecx_51)
                                int32_t ecx_53 = (edx_42 u>> 0xc ^ edx_42) * 5
                                int32_t eax_96 = (ecx_53 u>> 4 ^ ecx_53) * 0x809
                                void* eax_97 = arg2[0xc]
                                float xmm0_52
                                edx, xmm0_52 = sub_526200(esi_5[2], *(eax_97 + 0x2f4), 
                                    *(eax_97 + 0x2e8), 
                                    (((eax_96 u>> 0x10 ^ eax_96) & 0x7fffff) | 0x3f800000) - 1f)
                                var_ec_9 = xmm0_52
                            
                            if (data_1511ab0 s> *(*fsbase->ThreadLocalStoragePointer + 4))
                                edx = __Init_thread_header(&data_1511ab0)
                                
                                if (data_1511ab0 == 0xffffffff)
                                    data_1511ab4 = 0x3c8efa35
                                    edx = __Init_thread_footer(&data_1511ab0)
                            
                            arg2[9] =
                                var_ec_9 f* data_1511ab4 f* *(*(arg2[0xc] + 0x2e4) + 0x58) f+ arg2[9]
                    case &lookup_table_4fffd8[0x2f]
                        int32_t* esi_22 = esi_5[2]
                        float var_114_1
                        bool p_30
                        
                        if (esi_22[2] == 1)
                            int32_t* eax_231 = *esi_22
                            float xmm0_89 = *eax_231
                            float temp14_1 = eax_231[1]
                            xmm0_89 - temp14_1
                            var_114_1 = xmm0_89
                            eax_231:1.b = (xmm0_89 == temp14_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_89, temp14_1) ? 1 : 0) << 2
                                | (xmm0_89 < temp14_1 ? 1 : 0)
                            p_30 = unimplemented  {test ah, 0x44}
                        
                        if (esi_22[2] != 1 || p_30)
                            int32_t eax_234 = (*(arg2[0xc] + 0x2c) + ecx_7) * ecx_7
                            int32_t ecx_111 = (eax_234 << 0xf) + not.d(eax_234)
                            int32_t ecx_112 = (ecx_111 u>> 0xc ^ ecx_111) * 5
                            int32_t eax_242 = (ecx_112 u>> 4 ^ ecx_112) * 0x809
                            void* eax_243 = arg2[0xc]
                            var_114_1 = sub_526200(esi_22, *(eax_243 + 0x2f4), *(eax_243 + 0x2e8), 
                                (((eax_242 u>> 0x10 ^ eax_242) & 0x7fffff) | 0x3f800000) - 1f)
                        
                        if (data_1511ab0 s> *(*fsbase->ThreadLocalStoragePointer + 4))
                            __Init_thread_header(&data_1511ab0)
                            
                            if (data_1511ab0 == 0xffffffff)
                                data_1511ab4 = 0x3c8efa35
                                __Init_thread_footer(&data_1511ab0)
                        
                        void* esi_23 = arg2[0xc]
                        float xmm0_94 = var_114_1 f* data_1511ab4 f* *(*(esi_23 + 0x2e4) + 0x58) * 0.5f
                        float xmm0_95 = sub_41f120(xmm0_94)
                        float xmm1_53 = xmm0_95 f* arg2[6]
                        float xmm1_55 = arg2[7] f* xmm0_95
                        float xmm1_57 = arg2[8] f* xmm0_95
                        float xmm0_97
                        edx, xmm0_97 = sub_41f100(xmm0_94)
                        float xmm5_4 = *(esi_23 + 0x298)
                        float xmm4_3 = *(esi_23 + 0x28c)
                        float xmm2_7 = *(esi_23 + 0x294)
                        float xmm3_33 = *(esi_23 + 0x290)
                        int128_t var_140
                        var_140.d =
                            xmm0_97 * xmm4_3 + xmm5_4 * xmm1_53 + xmm1_55 * xmm2_7 - xmm1_57 * xmm3_33
                        var_140:4.d =
                            xmm0_97 * xmm3_33 + xmm5_4 * xmm1_55 + xmm1_57 * xmm4_3 - xmm1_53 * xmm2_7
                        var_140:8.d =
                            xmm0_97 * xmm2_7 + xmm1_57 * xmm5_4 + xmm3_33 * xmm1_53 - xmm4_3 * xmm1_55
                        var_140:0xc.d =
                            xmm0_97 * xmm5_4 - xmm4_3 * xmm1_53 - xmm3_33 * xmm1_55 - xmm1_57 * xmm2_7
                        *(esi_23 + 0x28c) = var_140
                    case &lookup_table_4fffd8[0x33]
                        int32_t* esi_6 = esi_5[2]
                        edx = arg2[0xc]
                        float xmm0_29
                        bool p_2
                        
                        if (esi_6[2] == 1)
                            int32_t* eax_23 = *esi_6
                            xmm0_29 = *eax_23
                            float temp2_1 = eax_23[1]
                            xmm0_29 - temp2_1
                            eax_23:1.b = (xmm0_29 == temp2_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_29, temp2_1) ? 1 : 0) << 2
                                | (xmm0_29 < temp2_1 ? 1 : 0)
                            p_2 = unimplemented  {test ah, 0x44}
                        
                        if (esi_6[2] != 1 || p_2)
                            int32_t eax_26 = (*(edx + 0x2c) + ecx_7) * ecx_7
                            int32_t ecx_19 = (eax_26 << 0xf) + not.d(eax_26)
                            int32_t ecx_20 = (ecx_19 u>> 0xc ^ ecx_19) * 5
                            int32_t eax_34 = (ecx_20 u>> 4 ^ ecx_20) * 0x809
                            void* eax_35 = arg2[0xc]
                            edx, xmm0_29 = sub_526200(esi_6, *(eax_35 + 0x2f4), *(eax_35 + 0x2e8), 
                                (((eax_34 u>> 0x10 ^ eax_34) & 0x7fffff) | 0x3f800000) - 1f)
                        
                        *(arg3 + 0x288) = xmm0_29
                    case &lookup_table_4fffd8[0x38]
                        int32_t* eax_219
                        void* esi_20
                        
                        if (arg2[0x10].b != 0)
                            esi_20 = arg2[0xc]
                            eax_219, edx = sub_4981f0(**(esi_20 + 0x2e4))
                        
                        if (arg2[0x10].b == 0 || *(*(esi_20 + 0x2dc) * 0x168 + *eax_219 + 0xe5) == 0)
                            int32_t* eax_221 = esi_5[2]
                            float xmm0_87
                            bool p_28
                            
                            if (eax_221[2] == 1)
                                int32_t* eax_222 = *eax_221
                                xmm0_87 = *eax_222
                                float temp17_1 = eax_222[1]
                                xmm0_87 - temp17_1
                                eax_222:1.b = (xmm0_87 == temp17_1 ? 1 : 0) << 6
                                    | (is_unordered.d(xmm0_87, temp17_1) ? 1 : 0) << 2
                                    | (xmm0_87 < temp17_1 ? 1 : 0)
                                p_28 = unimplemented  {test ah, 0x44}
                            
                            if (eax_221[2] != 1 || p_28)
                                int32_t eax_223 = *esi_5
                                void* esi_21 = arg2[0xc]
                                int32_t ecx_104 = (*(esi_21 + 0x2c) + eax_223) * eax_223
                                int32_t edx_104 = (ecx_104 << 0xf) + not.d(ecx_104)
                                int32_t ecx_106 = (edx_104 u>> 0xc ^ edx_104) * 5
                                int32_t eax_230 = (ecx_106 u>> 4 ^ ecx_106) * 0x809
                                edx, xmm0_87 = sub_526200(eax_221, *(esi_21 + 0x2f4), 
                                    *(esi_21 + 0x2e8), 
                                    (((eax_230 u>> 0x10 ^ eax_230) & 0x7fffff) | 0x3f800000) - 1f)
                            
                            arg2[0xa] = xmm0_87 f+ arg2[0xa]
                    case &lookup_table_4fffd8[0x42]
                        float** esi_24 = esi_5[2]
                        void* edx_119 = arg2[0xc]
                        float var_ec_20
                        bool p_32
                        
                        if (esi_24[2] == 1)
                            float* eax_247 = *esi_24
                            float xmm0_119 = *eax_247
                            float temp15_1 = eax_247[1]
                            xmm0_119 - temp15_1
                            var_ec_20 = xmm0_119
                            eax_247:1.b = (xmm0_119 == temp15_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_119, temp15_1) ? 1 : 0) << 2
                                | (xmm0_119 < temp15_1 ? 1 : 0)
                            p_32 = unimplemented  {test ah, 0x44}
                        
                        if (esi_24[2] != 1 || p_32)
                            int32_t eax_250 = (*(edx_119 + 0x2c) + ecx_7) * ecx_7
                            int32_t ecx_117 = (eax_250 << 0xf) + not.d(eax_250)
                            int32_t ecx_118 = (ecx_117 u>> 0xc ^ ecx_117) * 5
                            int32_t eax_258 = (ecx_118 u>> 4 ^ ecx_118) * 0x809
                            void* eax_259 = arg2[0xc]
                            float xmm0_120
                            edx_119, xmm0_120 = sub_526200(esi_24, *(eax_259 + 0x2f4), 
                                *(eax_259 + 0x2e8), 
                                (((eax_258 u>> 0x10 ^ eax_258) & 0x7fffff) | 0x3f800000) - 1f)
                            var_ec_20 = xmm0_120
                        
                        int128_t* eax_261
                        eax_261, edx = sub_5020f0(&var_160, edx_119, arg3, &var_160)
                        int128_t var_180_1 = *eax_261
                        int128_t xmm0_122 = eax_261[1]
                        
                        if (*(*(arg3 + 0x2e4) + 0x74) == 0)
                            float xmm1_75 = xmm0_122:8.d
                            
                            if (not(xmm1_75 < var_ec_20))
                                *(arg3 + 0x2a0) = var_ec_20 - xmm1_75 f+ *(arg3 + 0x2a0)
                            label_4ff942:
                                arg2[0x10].b = 1
                                *(arg2 + 0xc) = 0
                                arg2[5] = 0
                        else
                            float xmm1_74 = xmm0_122:0xc.d
                            
                            if (not(var_ec_20 < xmm1_74))
                                *(arg3 + 0x2a4) = var_ec_20 - xmm1_74 f+ *(arg3 + 0x2a4)
                                goto label_4ff942
                    case &lookup_table_4fffd8[0x43]
                        if (arg2[0x10].b != 0)
                            eax_4 = sub_5020f0(&var_1c0, edx, arg3, &var_1c0)
                            int32_t* ecx_122 = esi_5[2]
                            uint128_t xmm1_76 = eax_4[1]
                            var_160 = *eax_4
                            int32_t xmm1_77 = _mm_bsrli_si128(xmm1_76, 0xc)
                            var_24.q = xmm1_76.12:4.q
                            int32_t var_1c_2 = xmm1_77
                            
                            if (ecx_122 != 0)
                                eax_4 = sub_4fd190(ecx_122, &var_24)
                                
                                if (eax_4 != 0)
                                    eax_4[2].d = 1
                                    *(eax_4 + 0x1c) = *(*(arg3 + 0x2e4) + 0x1c)
                            
                            break
                    case &lookup_table_4fffd8[0x47]
                        edx = sub_4fdae0(arg2, esi_5)
                    case &lookup_table_4fffd8[0x5e]
                        int32_t* esi_18 = esi_5[2]
                        edx = arg2[0xc]
                        bool p_24
                        
                        if (esi_18[2] == 1)
                            int32_t* eax_191 = *esi_18
                            float xmm0_71 = *eax_191
                            float temp12_1 = eax_191[1]
                            xmm0_71 - temp12_1
                            var_100_1 = xmm0_71
                            eax_191:1.b = (xmm0_71 == temp12_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_71, temp12_1) ? 1 : 0) << 2
                                | (xmm0_71 < temp12_1 ? 1 : 0)
                            p_24 = unimplemented  {test ah, 0x44}
                        
                        if (esi_18[2] != 1 || p_24)
                            int32_t eax_194 = (*(edx + 0x2c) + ecx_7) * ecx_7
                            int32_t ecx_92 = (eax_194 << 0xf) + not.d(eax_194)
                            int32_t ecx_93 = (ecx_92 u>> 0xc ^ ecx_92) * 5
                            int32_t eax_202 = (ecx_93 u>> 4 ^ ecx_93) * 0x809
                            void* eax_203 = arg2[0xc]
                            float xmm0_72
                            edx, xmm0_72 = sub_526200(esi_18, *(eax_203 + 0x2f4), *(eax_203 + 0x2e8), 
                                (((eax_202 u>> 0x10 ^ eax_202) & 0x7fffff) | 0x3f800000) - 1f)
                            var_100_1 = xmm0_72
                    case &lookup_table_4fffd8[0x5f]
                        int32_t* esi_17 = esi_5[2]
                        edx = arg2[0xc]
                        bool p_22
                        
                        if (esi_17[2] == 1)
                            int32_t* eax_178 = *esi_17
                            float xmm0_69 = *eax_178
                            float temp11_1 = eax_178[1]
                            xmm0_69 - temp11_1
                            var_10c_1 = xmm0_69
                            eax_178:1.b = (xmm0_69 == temp11_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_69, temp11_1) ? 1 : 0) << 2
                                | (xmm0_69 < temp11_1 ? 1 : 0)
                            p_22 = unimplemented  {test ah, 0x44}
                        
                        if (esi_17[2] != 1 || p_22)
                            int32_t eax_181 = (*(edx + 0x2c) + ecx_7) * ecx_7
                            int32_t ecx_87 = (eax_181 << 0xf) + not.d(eax_181)
                            int32_t ecx_88 = (ecx_87 u>> 0xc ^ ecx_87) * 5
                            int32_t eax_189 = (ecx_88 u>> 4 ^ ecx_88) * 0x809
                            void* eax_190 = arg2[0xc]
                            float xmm0_70
                            edx, xmm0_70 = sub_526200(esi_17, *(eax_190 + 0x2f4), *(eax_190 + 0x2e8), 
                                (((eax_189 u>> 0x10 ^ eax_189) & 0x7fffff) | 0x3f800000) - 1f)
                            var_10c_1 = xmm0_70
                    case &lookup_table_4fffd8[0x60]
                        int32_t* esi_16 = esi_5[2]
                        float xmm0_65
                        bool p_20
                        
                        if (esi_16[2] == 1)
                            int32_t* eax_165 = *esi_16
                            xmm0_65 = *eax_165
                            float temp10_1 = eax_165[1]
                            xmm0_65 - temp10_1
                            eax_165:1.b = (xmm0_65 == temp10_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_65, temp10_1) ? 1 : 0) << 2
                                | (xmm0_65 < temp10_1 ? 1 : 0)
                            p_20 = unimplemented  {test ah, 0x44}
                        
                        if (esi_16[2] != 1 || p_20)
                            int32_t eax_168 = (*(arg2[0xc] + 0x2c) + ecx_7) * ecx_7
                            int32_t ecx_82 = (eax_168 << 0xf) + not.d(eax_168)
                            int32_t ecx_83 = (ecx_82 u>> 0xc ^ ecx_82) * 5
                            int32_t eax_176 = (ecx_83 u>> 4 ^ ecx_83) * 0x809
                            void* eax_177 = arg2[0xc]
                            xmm0_65 = sub_526200(esi_16, *(eax_177 + 0x2f4), *(eax_177 + 0x2e8), 
                                (((eax_176 u>> 0x10 ^ eax_176) & 0x7fffff) | 0x3f800000) - 1f)
                        
                        float xmm0_66 = sub_4827e0(xmm0_65)
                        
                        if (0 f<= xmm0_66)
                            edx = int.d(xmm0_66 + 0.5f) + 1
                            var_f8_2 = edx
                        else
                            edx = int.d(xmm0_66 - 0.5f) + 1
                            var_f8_2 = edx
                    case &lookup_table_4fffd8[0x62]
                        float** esi_15 = esi_5[2]
                        edx = arg2[0xc]
                        bool p_18
                        
                        if (esi_15[2] == 1)
                            float* eax_152 = *esi_15
                            float xmm0_63 = *eax_152
                            float temp9_1 = eax_152[1]
                            xmm0_63 - temp9_1
                            var_fc_1 = xmm0_63
                            eax_152:1.b = (xmm0_63 == temp9_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_63, temp9_1) ? 1 : 0) << 2
                                | (xmm0_63 < temp9_1 ? 1 : 0)
                            p_18 = unimplemented  {test ah, 0x44}
                        
                        if (esi_15[2] != 1 || p_18)
                            int32_t eax_155 = (*(edx + 0x2c) + ecx_7) * ecx_7
                            int32_t ecx_77 = (eax_155 << 0xf) + not.d(eax_155)
                            int32_t ecx_78 = (ecx_77 u>> 0xc ^ ecx_77) * 5
                            int32_t eax_163 = (ecx_78 u>> 4 ^ ecx_78) * 0x809
                            void* eax_164 = arg2[0xc]
                            float xmm0_64
                            edx, xmm0_64 = sub_526200(esi_15, *(eax_164 + 0x2f4), *(eax_164 + 0x2e8), 
                                (((eax_163 u>> 0x10 ^ eax_163) & 0x7fffff) | 0x3f800000) - 1f)
                            var_fc_1 = xmm0_64
            ecx_5 = arg4
            eax_14 = var_104_2 + 1
            var_104_2 = eax_14
            
            if (eax_14 s>= *(ecx_5 + 0x110))
                goto label_4ffba9
    
    eax_4.b = 0
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return eax_4
}
