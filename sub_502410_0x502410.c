// 函数名称: sub_502410
// 虚拟地址: 0x502410
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_502410(int32_t arg1, void* arg2, void* arg3, float* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    __builtin_memcpy(arg4, arg2, 0x68)
    int32_t eax_4 = sub_4981f0(**(arg3 + 0x2e4))
    void* ecx_2 = *(arg3 + 0x2dc) * 0x168 + *eax_4
    int32_t* eax_6 = sub_4981f0(**(arg3 + 0x2e4))
    void* eax_8
    
    if (*(*(arg3 + 0x2dc) * 0x168 + *eax_6 + 0xe1) == 0)
        eax_8 = arg2 + 0x68
    else
        eax_8 = arg3 + 0x2a8
    
    int128_t var_48
    sub_4ddac0(eax_8, arg3 + 0x288, &var_48, eax_8)
    void* ecx_6 = ecx_2
    int32_t i = 0
    int32_t i_1 = 0
    *(arg4 + 0x68) = var_48
    int128_t var_38
    *(arg4 + 0x78) = var_38
    
    if (*(ecx_6 + 0x130) s> 0)
        do
            int16_t top
            int16_t top_2 = top - 1
            unimplemented  {fld st0, qword [0x60c510]}
            int32_t* esi_3 = (i << 4) + *(ecx_6 + 0x138)
            int32_t ecx_7 = *esi_3
            int64_t var_18
            
            if (ecx_7 - 0x1f u> 0x34)
            label_5031d7:
                unimplemented  {fstp st0, st0}
                unimplemented  {fstp st0, st0}
                top = top_2 + 1
            else
                switch (ecx_7 + &jump_table_503244[0x10]:1)
                    case &lookup_table_5032a4
                        float** esi_17 = esi_3[2]
                        unimplemented  {fstp st0, st0}
                        unimplemented  {fstp st0, st0}
                        top = top_2 + 1
                        float xmm0_58
                        bool p_28
                        
                        if (esi_17[2] == 1)
                            float* eax_191 = *esi_17
                            xmm0_58 = *eax_191
                            float temp14_1 = eax_191[1]
                            xmm0_58 - temp14_1
                            eax_191:1.b = (xmm0_58 == temp14_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_58, temp14_1) ? 1 : 0) << 2
                                | (xmm0_58 < temp14_1 ? 1 : 0)
                            p_28 = unimplemented  {test ah, 0x44}
                        
                        if (esi_17[2] != 1 || p_28)
                            int32_t eax_194 = (*(arg3 + 0x2c) + ecx_7) * ecx_7
                            int32_t ecx_106 = (eax_194 << 0xf) + not.d(eax_194)
                            int32_t ecx_107 = (ecx_106 u>> 0xc ^ ecx_106) * 5
                            int32_t eax_202 = (ecx_107 u>> 4 ^ ecx_107) * 0x809
                            xmm0_58 = sub_526200(esi_17, *(arg3 + 0x2f4), *(arg3 + 0x2e8), 
                                (((eax_202 u>> 0x10 ^ eax_202) & 0x7fffff) | 0x3f800000) - 1f)
                        
                        arg4[4] = xmm0_58 + arg4[4]
                    case &lookup_table_5032a4[1]
                        float** esi_18 = esi_3[2]
                        unimplemented  {fstp st0, st0}
                        unimplemented  {fstp st0, st0}
                        top = top_2 + 1
                        float xmm0_60
                        bool p_30
                        
                        if (esi_18[2] == 1)
                            float* eax_203 = *esi_18
                            xmm0_60 = *eax_203
                            float temp15_1 = eax_203[1]
                            xmm0_60 - temp15_1
                            eax_203:1.b = (xmm0_60 == temp15_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_60, temp15_1) ? 1 : 0) << 2
                                | (xmm0_60 < temp15_1 ? 1 : 0)
                            p_30 = unimplemented  {test ah, 0x44}
                        
                        if (esi_18[2] != 1 || p_30)
                            int32_t eax_206 = (*(arg3 + 0x2c) + ecx_7) * ecx_7
                            int32_t ecx_111 = (eax_206 << 0xf) + not.d(eax_206)
                            int32_t ecx_112 = (ecx_111 u>> 0xc ^ ecx_111) * 5
                            int32_t eax_214 = (ecx_112 u>> 4 ^ ecx_112) * 0x809
                            xmm0_60 = sub_526200(esi_18, *(arg3 + 0x2f4), *(arg3 + 0x2e8), 
                                (((eax_214 u>> 0x10 ^ eax_214) & 0x7fffff) | 0x3f800000) - 1f)
                        
                        arg4[5] = xmm0_60 + arg4[5]
                    case &lookup_table_5032a4[2]
                        float** esi_19 = esi_3[2]
                        unimplemented  {fstp st0, st0}
                        unimplemented  {fstp st0, st0}
                        top = top_2 + 1
                        float xmm0_62
                        bool p_32
                        
                        if (esi_19[2] == 1)
                            float* eax_215 = *esi_19
                            xmm0_62 = *eax_215
                            float temp16_1 = eax_215[1]
                            xmm0_62 - temp16_1
                            eax_215:1.b = (xmm0_62 == temp16_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_62, temp16_1) ? 1 : 0) << 2
                                | (xmm0_62 < temp16_1 ? 1 : 0)
                            p_32 = unimplemented  {test ah, 0x44}
                        
                        if (esi_19[2] != 1 || p_32)
                            int32_t eax_218 = (*(arg3 + 0x2c) + ecx_7) * ecx_7
                            int32_t ecx_116 = (eax_218 << 0xf) + not.d(eax_218)
                            int32_t ecx_117 = (ecx_116 u>> 0xc ^ ecx_116) * 5
                            int32_t eax_226 = (ecx_117 u>> 4 ^ ecx_117) * 0x809
                            xmm0_62 = sub_526200(esi_19, *(arg3 + 0x2f4), *(arg3 + 0x2e8), 
                                (((eax_226 u>> 0x10 ^ eax_226) & 0x7fffff) | 0x3f800000) - 1f)
                        
                        arg4[6] = xmm0_62 + arg4[6]
                    case &lookup_table_5032a4[3], &lookup_table_5032a4[4], &lookup_table_5032a4[5], 
                            &lookup_table_5032a4[6], &lookup_table_5032a4[7], &lookup_table_5032a4[8], 
                            &lookup_table_5032a4[9], &lookup_table_5032a4[0xa], 
                            &lookup_table_5032a4[0xb], &lookup_table_5032a4[0xc], 
                            &lookup_table_5032a4[0xd], &lookup_table_5032a4[0xe], 
                            &lookup_table_5032a4[0xf], &lookup_table_5032a4[0x10], 
                            &lookup_table_5032a4[0x11], &lookup_table_5032a4[0x12], 
                            &lookup_table_5032a4[0x13], &lookup_table_5032a4[0x14], 
                            &lookup_table_5032a4[0x15], &lookup_table_5032a4[0x16], 
                            &lookup_table_5032a4[0x17], &lookup_table_5032a4[0x18], 
                            &lookup_table_5032a4[0x19], &lookup_table_5032a4[0x1d], 
                            &lookup_table_5032a4[0x2c], &lookup_table_5032a4[0x2d], 
                            &lookup_table_5032a4[0x2e], &lookup_table_5032a4[0x2f], 
                            &lookup_table_5032a4[0x30], &lookup_table_5032a4[0x31]
                        goto label_5031d7
                    case &lookup_table_5032a4[0x1a]
                        int32_t* esi_21 = esi_3[2]
                        unimplemented  {fstp st0, st0}
                        unimplemented  {fstp st0, st0}
                        top = top_2 + 1
                        int32_t xmm0_66 =
                            sub_526200(esi_21, *(arg3 + 0x2f4), *(arg3 + 0x2e8), (zx.o(0)).d)
                        int32_t xmm0_67 = sub_526200(esi_21, *(arg3 + 0x2f4), *(arg3 + 0x2e8), 1f)
                        arg4[0x11] = xmm0_66
                        arg4[0x12] = xmm0_67
                    case &lookup_table_5032a4[0x1b]
                        int32_t* esi_22 = esi_3[2]
                        unimplemented  {fstp st0, st0}
                        unimplemented  {fstp st0, st0}
                        top = top_2 + 1
                        int32_t xmm0_68 =
                            sub_526200(esi_22, *(arg3 + 0x2f4), *(arg3 + 0x2e8), (zx.o(0)).d)
                        int32_t xmm0_69 = sub_526200(esi_22, *(arg3 + 0x2f4), *(arg3 + 0x2e8), 1f)
                        arg4[0x13] = xmm0_68
                        arg4[0x14] = xmm0_69
                    case &lookup_table_5032a4[0x1c]
                        int32_t* esi_23 = esi_3[2]
                        unimplemented  {fstp st0, st0}
                        unimplemented  {fstp st0, st0}
                        top = top_2 + 1
                        int32_t xmm0_70 =
                            sub_526200(esi_23, *(arg3 + 0x2f4), *(arg3 + 0x2e8), (zx.o(0)).d)
                        int32_t xmm0_71 = sub_526200(esi_23, *(arg3 + 0x2f4), *(arg3 + 0x2e8), 1f)
                        arg4[0x15] = xmm0_70
                        arg4[0x16] = xmm0_71
                    case &lookup_table_5032a4[0x1e]
                        int32_t* esi_4 = esi_3[2]
                        unimplemented  {fstp st0, st0}
                        unimplemented  {fstp st0, st0}
                        top = top_2 + 1
                        float xmm2_1
                        bool p_2
                        
                        if (esi_4[2] == 1)
                            int32_t* eax_12 = *esi_4
                            xmm2_1 = *eax_12
                            float temp1_1 = eax_12[1]
                            xmm2_1 - temp1_1
                            eax_12:1.b = (xmm2_1 == temp1_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm2_1, temp1_1) ? 1 : 0) << 2
                                | (xmm2_1 < temp1_1 ? 1 : 0)
                            p_2 = unimplemented  {test ah, 0x44}
                        
                        if (esi_4[2] != 1 || p_2)
                            int32_t eax_15 = (*(arg3 + 0x2c) + ecx_7) * ecx_7
                            int32_t ecx_10 = (eax_15 << 0xf) + not.d(eax_15)
                            int32_t ecx_11 = (ecx_10 u>> 0xc ^ ecx_10) * 5
                            int32_t eax_23 = (ecx_11 u>> 4 ^ ecx_11) * 0x809
                            xmm2_1 = sub_526200(esi_4, *(arg3 + 0x2f4), *(arg3 + 0x2e8), 
                                (((eax_23 u>> 0x10 ^ eax_23) & 0x7fffff) | 0x3f800000) - 1f)
                        
                        float xmm0_3 = arg4[2] * xmm2_1
                        *arg4 = *arg4 * xmm2_1
                        float xmm1_5 = arg4[1] * xmm2_1
                        arg4[2] = xmm0_3
                        arg4[1] = xmm1_5
                    case &lookup_table_5032a4[0x1f]
                        int32_t* esi_5 = esi_3[2]
                        unimplemented  {fstp st0, st0}
                        unimplemented  {fstp st0, st0}
                        top = top_2 + 1
                        float xmm0_4
                        bool p_4
                        
                        if (esi_5[2] == 1)
                            int32_t* eax_24 = *esi_5
                            xmm0_4 = *eax_24
                            float temp2_1 = eax_24[1]
                            xmm0_4 - temp2_1
                            eax_24:1.b = (xmm0_4 == temp2_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_4, temp2_1) ? 1 : 0) << 2
                                | (xmm0_4 < temp2_1 ? 1 : 0)
                            p_4 = unimplemented  {test ah, 0x44}
                        
                        if (esi_5[2] != 1 || p_4)
                            int32_t eax_27 = (*(arg3 + 0x2c) + ecx_7) * ecx_7
                            int32_t ecx_15 = (eax_27 << 0xf) + not.d(eax_27)
                            int32_t ecx_16 = (ecx_15 u>> 0xc ^ ecx_15) * 5
                            int32_t eax_35 = (ecx_16 u>> 4 ^ ecx_16) * 0x809
                            xmm0_4 = sub_526200(esi_5, *(arg3 + 0x2f4), *(arg3 + 0x2e8), 
                                (((eax_35 u>> 0x10 ^ eax_35) & 0x7fffff) | 0x3f800000) - 1f)
                        
                        *arg4 = *arg4 * xmm0_4
                    case &lookup_table_5032a4[0x20]
                        int32_t* esi_6 = esi_3[2]
                        unimplemented  {fstp st0, st0}
                        unimplemented  {fstp st0, st0}
                        top = top_2 + 1
                        float xmm0_5
                        bool p_6
                        
                        if (esi_6[2] == 1)
                            int32_t* eax_36 = *esi_6
                            xmm0_5 = *eax_36
                            float temp3_1 = eax_36[1]
                            xmm0_5 - temp3_1
                            eax_36:1.b = (xmm0_5 == temp3_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_5, temp3_1) ? 1 : 0) << 2
                                | (xmm0_5 < temp3_1 ? 1 : 0)
                            p_6 = unimplemented  {test ah, 0x44}
                        
                        if (esi_6[2] != 1 || p_6)
                            int32_t eax_39 = (*(arg3 + 0x2c) + ecx_7) * ecx_7
                            int32_t ecx_20 = (eax_39 << 0xf) + not.d(eax_39)
                            int32_t ecx_21 = (ecx_20 u>> 0xc ^ ecx_20) * 5
                            int32_t eax_47 = (ecx_21 u>> 4 ^ ecx_21) * 0x809
                            xmm0_5 = sub_526200(esi_6, *(arg3 + 0x2f4), *(arg3 + 0x2e8), 
                                (((eax_47 u>> 0x10 ^ eax_47) & 0x7fffff) | 0x3f800000) - 1f)
                        
                        arg4[1] = arg4[1] * xmm0_5
                    case &lookup_table_5032a4[0x21]
                        int32_t* esi_7 = esi_3[2]
                        unimplemented  {fstp st0, st0}
                        unimplemented  {fstp st0, st0}
                        top = top_2 + 1
                        float xmm0_6
                        bool p_8
                        
                        if (esi_7[2] == 1)
                            int32_t* eax_48 = *esi_7
                            xmm0_6 = *eax_48
                            float temp4_1 = eax_48[1]
                            xmm0_6 - temp4_1
                            eax_48:1.b = (xmm0_6 == temp4_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_6, temp4_1) ? 1 : 0) << 2
                                | (xmm0_6 < temp4_1 ? 1 : 0)
                            p_8 = unimplemented  {test ah, 0x44}
                        
                        if (esi_7[2] != 1 || p_8)
                            int32_t eax_51 = (*(arg3 + 0x2c) + ecx_7) * ecx_7
                            int32_t ecx_25 = (eax_51 << 0xf) + not.d(eax_51)
                            int32_t ecx_26 = (ecx_25 u>> 0xc ^ ecx_25) * 5
                            int32_t eax_59 = (ecx_26 u>> 4 ^ ecx_26) * 0x809
                            xmm0_6 = sub_526200(esi_7, *(arg3 + 0x2f4), *(arg3 + 0x2e8), 
                                (((eax_59 u>> 0x10 ^ eax_59) & 0x7fffff) | 0x3f800000) - 1f)
                        
                        arg4[2] = xmm0_6 * arg4[2]
                    case &lookup_table_5032a4[0x22]
                        unimplemented  {fstp st0, st0}
                        unimplemented  {fstp st0, st0}
                        top = top_2 + 1
                        int32_t eax_61 = *(arg3 + 0x2c) + 1
                        int32_t ecx_30 = (eax_61 << 0xf) + not.d(eax_61)
                        int32_t ecx_31 = (ecx_30 u>> 0xc ^ ecx_30) * 5
                        int32_t eax_69 = (ecx_31 u>> 4 ^ ecx_31) * 0x809
                        float xmm0_13 = sub_41f120(((((eax_69 u>> 0x10 ^ eax_69) & 0x7fffff)
                            | 0x3f800000) - 1f) * 6.28318548f f+ *(arg3 + 0x28)) + 1.75691366f
                        *arg4 = sub_41f120(xmm0_13) * *arg4
                        arg4[1] = sub_41f100(xmm0_13) * arg4[1]
                    case &lookup_table_5032a4[0x23]
                        int32_t* esi_9 = esi_3[2]
                        unimplemented  {fstp st0, st0}
                        unimplemented  {fstp st0, st0}
                        top = top_2 + 1
                        float xmm0_21
                        bool p_12
                        
                        if (esi_9[2] == 1)
                            int32_t* eax_82 = *esi_9
                            xmm0_21 = *eax_82
                            float temp6_1 = eax_82[1]
                            xmm0_21 - temp6_1
                            eax_82:1.b = (xmm0_21 == temp6_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_21, temp6_1) ? 1 : 0) << 2
                                | (xmm0_21 < temp6_1 ? 1 : 0)
                            p_12 = unimplemented  {test ah, 0x44}
                        
                        if (esi_9[2] != 1 || p_12)
                            int32_t eax_85 = (*(arg3 + 0x2c) + ecx_7) * ecx_7
                            int32_t ecx_44 = (eax_85 << 0xf) + not.d(eax_85)
                            int32_t ecx_45 = (ecx_44 u>> 0xc ^ ecx_44) * 5
                            int32_t eax_93 = (ecx_45 u>> 4 ^ ecx_45) * 0x809
                            xmm0_21 = sub_526200(esi_9, *(arg3 + 0x2f4), *(arg3 + 0x2e8), 
                                (((eax_93 u>> 0x10 ^ eax_93) & 0x7fffff) | 0x3f800000) - 1f)
                        
                        arg4[9] = xmm0_21 * arg4[9]
                    case &lookup_table_5032a4[0x24]
                        int32_t* esi_10 = esi_3[2]
                        unimplemented  {fstp st0, st0}
                        unimplemented  {fstp st0, st0}
                        top = top_2 + 1
                        float xmm0_23
                        bool p_14
                        
                        if (esi_10[2] == 1)
                            int32_t* eax_94 = *esi_10
                            xmm0_23 = *eax_94
                            float temp7_1 = eax_94[1]
                            xmm0_23 - temp7_1
                            eax_94:1.b = (xmm0_23 == temp7_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_23, temp7_1) ? 1 : 0) << 2
                                | (xmm0_23 < temp7_1 ? 1 : 0)
                            p_14 = unimplemented  {test ah, 0x44}
                        
                        if (esi_10[2] != 1 || p_14)
                            int32_t eax_97 = (*(arg3 + 0x2c) + ecx_7) * ecx_7
                            int32_t ecx_49 = (eax_97 << 0xf) + not.d(eax_97)
                            int32_t ecx_50 = (ecx_49 u>> 0xc ^ ecx_49) * 5
                            int32_t eax_105 = (ecx_50 u>> 4 ^ ecx_50) * 0x809
                            xmm0_23 = sub_526200(esi_10, *(arg3 + 0x2f4), *(arg3 + 0x2e8), 
                                (((eax_105 u>> 0x10 ^ eax_105) & 0x7fffff) | 0x3f800000) - 1f)
                        
                        arg4[0xa] = xmm0_23 * arg4[0xa]
                    case &lookup_table_5032a4[0x25]
                        int32_t* esi_11 = esi_3[2]
                        unimplemented  {fstp st0, st0}
                        unimplemented  {fstp st0, st0}
                        top = top_2 + 1
                        float xmm0_25
                        bool p_16
                        
                        if (esi_11[2] == 1)
                            int32_t* eax_106 = *esi_11
                            xmm0_25 = *eax_106
                            float temp8_1 = eax_106[1]
                            xmm0_25 - temp8_1
                            eax_106:1.b = (xmm0_25 == temp8_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_25, temp8_1) ? 1 : 0) << 2
                                | (xmm0_25 < temp8_1 ? 1 : 0)
                            p_16 = unimplemented  {test ah, 0x44}
                        
                        if (esi_11[2] != 1 || p_16)
                            int32_t eax_109 = (*(arg3 + 0x2c) + ecx_7) * ecx_7
                            int32_t ecx_54 = (eax_109 << 0xf) + not.d(eax_109)
                            int32_t ecx_55 = (ecx_54 u>> 0xc ^ ecx_54) * 5
                            int32_t eax_117 = (ecx_55 u>> 4 ^ ecx_55) * 0x809
                            xmm0_25 = sub_526200(esi_11, *(arg3 + 0x2f4), *(arg3 + 0x2e8), 
                                (((eax_117 u>> 0x10 ^ eax_117) & 0x7fffff) | 0x3f800000) - 1f)
                        
                        arg4[0xb] = xmm0_25 * arg4[0xb]
                    case &lookup_table_5032a4[0x26]
                        int32_t* esi_12 = esi_3[2]
                        unimplemented  {fstp st0, st0}
                        unimplemented  {fstp st0, st0}
                        top = top_2 + 1
                        float xmm0_27
                        bool p_18
                        
                        if (esi_12[2] == 1)
                            int32_t* eax_118 = *esi_12
                            xmm0_27 = *eax_118
                            float temp9_1 = eax_118[1]
                            xmm0_27 - temp9_1
                            eax_118:1.b = (xmm0_27 == temp9_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_27, temp9_1) ? 1 : 0) << 2
                                | (xmm0_27 < temp9_1 ? 1 : 0)
                            p_18 = unimplemented  {test ah, 0x44}
                        
                        if (esi_12[2] != 1 || p_18)
                            int32_t eax_121 = (*(arg3 + 0x2c) + ecx_7) * ecx_7
                            int32_t ecx_59 = (eax_121 << 0xf) + not.d(eax_121)
                            int32_t ecx_60 = (ecx_59 u>> 0xc ^ ecx_59) * 5
                            int32_t eax_129 = (ecx_60 u>> 4 ^ ecx_60) * 0x809
                            xmm0_27 = sub_526200(esi_12, *(arg3 + 0x2f4), *(arg3 + 0x2e8), 
                                (((eax_129 u>> 0x10 ^ eax_129) & 0x7fffff) | 0x3f800000) - 1f)
                        
                        arg4[0xc] = xmm0_27 * arg4[0xc]
                    case &lookup_table_5032a4[0x27]
                        float** esi_13 = esi_3[2]
                        unimplemented  {fstp st0, st0}
                        unimplemented  {fstp st0, st0}
                        top = top_2 + 1
                        float xmm0_29
                        bool p_20
                        
                        if (esi_13[2] == 1)
                            float* eax_130 = *esi_13
                            xmm0_29 = *eax_130
                            float temp10_1 = eax_130[1]
                            xmm0_29 - temp10_1
                            eax_130:1.b = (xmm0_29 == temp10_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_29, temp10_1) ? 1 : 0) << 2
                                | (xmm0_29 < temp10_1 ? 1 : 0)
                            p_20 = unimplemented  {test ah, 0x44}
                        
                        if (esi_13[2] != 1 || p_20)
                            int32_t eax_133 = (*(arg3 + 0x2c) + ecx_7) * ecx_7
                            int32_t ecx_64 = (eax_133 << 0xf) + not.d(eax_133)
                            int32_t ecx_65 = (ecx_64 u>> 0xc ^ ecx_64) * 5
                            int32_t eax_141 = (ecx_65 u>> 4 ^ ecx_65) * 0x809
                            xmm0_29 = sub_526200(esi_13, *(arg3 + 0x2f4), *(arg3 + 0x2e8), 
                                (((eax_141 u>> 0x10 ^ eax_141) & 0x7fffff) | 0x3f800000) - 1f)
                        
                        arg4[0x10] = xmm0_29 * arg4[0x10]
                    case &lookup_table_5032a4[0x28]
                        int32_t* esi_14 = esi_3[2]
                        float xmm1_24
                        bool p_22
                        
                        if (esi_14[2] == 1)
                            int32_t* eax_155 = *esi_14
                            xmm1_24 = *eax_155
                            float temp11_1 = eax_155[1]
                            xmm1_24 - temp11_1
                            eax_155:1.b = (xmm1_24 == temp11_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm1_24, temp11_1) ? 1 : 0) << 2
                                | (xmm1_24 < temp11_1 ? 1 : 0)
                            p_22 = unimplemented  {test ah, 0x44}
                        
                        if (esi_14[2] != 1 || p_22)
                            unimplemented  {fstp st0, st0}
                            unimplemented  {fstp st0, st0}
                            int32_t eax_158 = (*(arg3 + 0x2c) + ecx_7) * ecx_7
                            int32_t ecx_91 = (eax_158 << 0xf) + not.d(eax_158)
                            int32_t ecx_92 = (ecx_91 u>> 0xc ^ ecx_91) * 5
                            int32_t eax_166 = (ecx_92 u>> 4 ^ ecx_92) * 0x809
                            float xmm0_49 = sub_526200(esi_14, *(arg3 + 0x2f4), *(arg3 + 0x2e8), 
                                (((eax_166 u>> 0x10 ^ eax_166) & 0x7fffff) | 0x3f800000) - 1f)
                            unimplemented  {fld st0, qword [0x60c510]}
                            xmm1_24 = xmm0_49
                        
                        float xmm0_51[0x2] = arg4[0xd] + xmm1_24
                        float var_10_3 = xmm0_51
                        var_18 = _mm_cvtps_pd(xmm0_51)
                        unimplemented  {fld st0, qword [ebp-0x14]}
                        unimplemented  {fxch st0, st1}
                        unimplemented  {fxch st0, st1}
                        sub_598500()
                        float var_14_17 = fconvert.s(unimplemented  {fstp dword [ebp-0x10], st0})
                        unimplemented  {fstp dword [ebp-0x10], st0}
                        top = top_2
                        float xmm0_53 = var_14_17
                        
                        if (not(0f <= var_10_3))
                            xmm0_53 = xmm0_53 + 360f
                        
                        arg4[0xd] = xmm0_53
                        arg4[0x19].b = 1
                    case &lookup_table_5032a4[0x29]
                        float** esi_15 = esi_3[2]
                        unimplemented  {fstp st0, st0}
                        unimplemented  {fstp st0, st0}
                        top = top_2 + 1
                        float xmm0_54
                        bool p_24
                        
                        if (esi_15[2] == 1)
                            float* eax_167 = *esi_15
                            xmm0_54 = *eax_167
                            float temp12_1 = eax_167[1]
                            xmm0_54 - temp12_1
                            eax_167:1.b = (xmm0_54 == temp12_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_54, temp12_1) ? 1 : 0) << 2
                                | (xmm0_54 < temp12_1 ? 1 : 0)
                            p_24 = unimplemented  {test ah, 0x44}
                        
                        if (esi_15[2] != 1 || p_24)
                            int32_t eax_170 = (*(arg3 + 0x2c) + ecx_7) * ecx_7
                            int32_t ecx_96 = (eax_170 << 0xf) + not.d(eax_170)
                            int32_t ecx_97 = (ecx_96 u>> 0xc ^ ecx_96) * 5
                            int32_t eax_178 = (ecx_97 u>> 4 ^ ecx_97) * 0x809
                            xmm0_54 = sub_526200(esi_15, *(arg3 + 0x2f4), *(arg3 + 0x2e8), 
                                (((eax_178 u>> 0x10 ^ eax_178) & 0x7fffff) | 0x3f800000) - 1f)
                        
                        arg4[0x19].b = 1
                        arg4[0xe] = xmm0_54 + arg4[0xe]
                    case &lookup_table_5032a4[0x2a]
                        float** esi_16 = esi_3[2]
                        unimplemented  {fstp st0, st0}
                        unimplemented  {fstp st0, st0}
                        top = top_2 + 1
                        float xmm0_56
                        bool p_26
                        
                        if (esi_16[2] == 1)
                            float* eax_179 = *esi_16
                            xmm0_56 = *eax_179
                            float temp13_1 = eax_179[1]
                            xmm0_56 - temp13_1
                            eax_179:1.b = (xmm0_56 == temp13_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_56, temp13_1) ? 1 : 0) << 2
                                | (xmm0_56 < temp13_1 ? 1 : 0)
                            p_26 = unimplemented  {test ah, 0x44}
                        
                        if (esi_16[2] != 1 || p_26)
                            int32_t eax_182 = (*(arg3 + 0x2c) + ecx_7) * ecx_7
                            int32_t ecx_101 = (eax_182 << 0xf) + not.d(eax_182)
                            int32_t ecx_102 = (ecx_101 u>> 0xc ^ ecx_101) * 5
                            int32_t eax_190 = (ecx_102 u>> 4 ^ ecx_102) * 0x809
                            xmm0_56 = sub_526200(esi_16, *(arg3 + 0x2f4), *(arg3 + 0x2e8), 
                                (((eax_190 u>> 0x10 ^ eax_190) & 0x7fffff) | 0x3f800000) - 1f)
                        
                        arg4[0x19].b = 1
                        arg4[0xf] = xmm0_56 * arg4[0xf]
                    case &lookup_table_5032a4[0x2b]
                        char* ecx_67 = esi_3[2]
                        unimplemented  {fstp st0, st0}
                        unimplemented  {fstp st0, st0}
                        top = top_2 + 1
                        
                        if (ecx_67 != 0)
                            sub_4d1f40(ecx_67, &var_48:0xc)
                            int32_t ecx_70 = (*(arg3 + 0x2c) + *esi_3) * *esi_3
                            float xmm2_2 = *(arg3 + 0x2e8)
                            int32_t edx_64 = (ecx_70 << 0xf) + not.d(ecx_70)
                            int32_t ecx_72 = (edx_64 u>> 0xc ^ edx_64) * 5
                            int32_t eax_148 = (ecx_72 u>> 4 ^ ecx_72) * 0x809
                            float xmm1_20 =
                                (((eax_148 u>> 0x10 ^ eax_148) & 0x7fffff) | 0x3f800000) - 1f
                            int32_t var_60
                            char const* const ecx_131
                            
                            if (xmm2_2 < 0f || 1f <= xmm2_2)
                                char const* const var_5c_2 = "ImageSampleNearestAt"
                                var_60 = 0x684
                                ecx_131 = "uv.x >= 0.0 && uv.x < 1.0f"
                            label_50322a:
                                sub_489550(eax_148, &data_5b2591, ecx_131, 
                                    "d:\ax\trunk\ax2017\engine\particle.cpp", var_60, 
                                    "ImageSampleNearestAt")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_489700()
                                noreturn
                            
                            if (xmm1_20 f< 0 || 1f <= xmm1_20)
                                char const* const var_5c_1 = "ImageSampleNearestAt"
                                var_60 = 0x685
                                ecx_131 = "uv.y >= 0.0 && uv.y < 1.0f"
                                goto label_50322a
                            
                            float xmm0_34 = sub_4827e0(_mm_cvtepi32_ps(zx.o(var_38.d)) * xmm2_2)
                            float xmm0_35
                            
                            if (0 f<= xmm0_34)
                                xmm0_35 = xmm0_34 + 0.5f
                            else
                                xmm0_35 = xmm0_34 - 0.5f
                            
                            float xmm0_39 = sub_4827e0(_mm_cvtepi32_ps(zx.o(var_38:4.d)) * xmm1_20)
                            float xmm0_40
                            
                            if (0 f<= xmm0_39)
                                xmm0_40 = xmm0_39 + 0.5f
                            else
                                xmm0_40 = xmm0_39 - 0.5f
                            
                            char* eax_153 = sub_523670(
                                int.d(fconvert.t(xmm0_40)) * var_38:8.d
                                    + sub_5233d0(var_38:0xc.d) * int.d(xmm0_35) + var_48:0xc.d, 
                                var_38:0xc.d)
                            float xmm3_22 = _mm_cvtepi32_ps(zx.o(eax_153.b))
                            float xmm0_43 = _mm_cvtepi32_ps(zx.o((eax_153 u>> 8).b)) / 255f
                            float xmm3_24 = xmm3_22 / 255f * arg4[9]
                            float xmm2_5 = _mm_cvtepi32_ps(zx.o((eax_153 u>> 0x10).b)) / 255f
                            float xmm1_22 = _mm_cvtepi32_ps(zx.o(eax_153 u>> 0x18))
                            arg4[9] = xmm3_24
                            float xmm1_23 = xmm1_22 / 255f
                            arg4[0xa] = xmm0_43 * arg4[0xa]
                            var_18.d = xmm2_5
                            float var_14_16 = xmm1_23
                            arg4[0xb] = arg4[0xb] * xmm2_5
                            arg4[0xc] = arg4[0xc] * xmm1_23
                    case &lookup_table_5032a4[0x32]
                        int32_t* esi_20 = esi_3[2]
                        unimplemented  {fstp st0, st0}
                        unimplemented  {fstp st0, st0}
                        top = top_2 + 1
                        float xmm0_64 =
                            sub_526200(esi_20, *(arg3 + 0x2f4), *(arg3 + 0x2e8), (zx.o(0)).d)
                        float xmm0_65 = sub_526200(esi_20, *(arg3 + 0x2f4), *(arg3 + 0x2e8), 1f)
                        arg4[7] = arg4[7] + xmm0_64
                        arg4[8] = arg4[8] + xmm0_65
                    case &lookup_table_5032a4[0x33]
                        int32_t* esi_8 = esi_3[2]
                        unimplemented  {fstp st0, st0}
                        unimplemented  {fstp st0, st0}
                        top = top_2 + 1
                        float xmm0_19
                        bool p_10
                        
                        if (esi_8[2] == 1)
                            int32_t* eax_70 = *esi_8
                            xmm0_19 = *eax_70
                            float temp5_1 = eax_70[1]
                            xmm0_19 - temp5_1
                            eax_70:1.b = (xmm0_19 == temp5_1 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_19, temp5_1) ? 1 : 0) << 2
                                | (xmm0_19 < temp5_1 ? 1 : 0)
                            p_10 = unimplemented  {test ah, 0x44}
                        
                        if (esi_8[2] != 1 || p_10)
                            int32_t eax_73 = (*(arg3 + 0x2c) + ecx_7) * ecx_7
                            int32_t ecx_39 = (eax_73 << 0xf) + not.d(eax_73)
                            int32_t ecx_40 = (ecx_39 u>> 0xc ^ ecx_39) * 5
                            int32_t eax_81 = (ecx_40 u>> 4 ^ ecx_40) * 0x809
                            xmm0_19 = sub_526200(esi_8, *(arg3 + 0x2f4), *(arg3 + 0x2e8), 
                                (((eax_81 u>> 0x10 ^ eax_81) & 0x7fffff) | 0x3f800000) - 1f)
                        
                        arg4[3] = xmm0_19 + arg4[3]
                    case &lookup_table_5032a4[0x34]
                        int32_t* esi_24 = esi_3[2]
                        unimplemented  {fstp st0, st0}
                        unimplemented  {fstp st0, st0}
                        top = top_2 + 1
                        int32_t xmm0_72 =
                            sub_526200(esi_24, *(arg3 + 0x2f4), *(arg3 + 0x2e8), (zx.o(0)).d)
                        int32_t xmm0_73 = sub_526200(esi_24, *(arg3 + 0x2f4), *(arg3 + 0x2e8), 1f)
                        arg4[0x17] = xmm0_72
                        arg4[0x18] = xmm0_73
            ecx_6 = ecx_2
            i = i_1 + 1
            i_1 = i
        while (i s< *(ecx_6 + 0x130))
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return i
}
