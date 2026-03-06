// 函数名称: sub_500320
// 虚拟地址: 0x500320
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int128_t* __fastcallsub_500320(void* arg1, float* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t eax_3 = sub_4981f0(**(arg1 + 0x2e4))
    void* ebx_1 = *(arg1 + 0x2dc) * 0x168 + *eax_3
    arg2[0xc] = arg1
    arg2[0xb] = modu.dp.d(0:(sub_48dd80()), 0x7fffffff)
    *(arg1 + 0x2ec) = 0x3f800000
    *(arg1 + 0x288) = data_63c264
    *(arg1 + 0x298) = data_63c274
    void* ecx_1 = *(arg2[0xc] i+ 0x2e4)
    int32_t edx_2 = *(ecx_1 + 0x28)
    
    if (edx_2 s> 0)
        arg2[0xf] = sub_500040(*(ecx_1 + 0x24), edx_2)
    
    int32_t* eax_8 = sub_4981f0(**(arg1 + 0x2e4))
    float var_44
    
    if (*(*(arg1 + 0x2dc) * 0x168 + *eax_8 + 0xde) != 0)
        var_44 = (sub_48dd80() & 0x7fffff) | 0x3f800000
        arg2[9] = (var_44 - 1f) * 6.28318548f + 0f
    
    int32_t* eax_14 = sub_4981f0(**(arg1 + 0x2e4))
    
    if (*(*(arg1 + 0x2dc) * 0x168 + *eax_14 + 0xe0) != 0)
        var_44 = (sub_48dd80() & 0x7fffff) | 0x3f800000
        *(arg1 + 0x2e8) = var_44 - 1f + 0f
    
    int32_t* eax_20 = sub_4981f0(**(arg1 + 0x2e4))
    float var_84
    float var_74
    
    if (*(*(arg1 + 0x2dc) * 0x168 + *eax_20 + 0xdf) != 0)
        int64_t* eax_22 = sub_5001e0(&var_74)
        int64_t xmm0_9 = *eax_22
        float eax_23 = eax_22[1].d
        var_44 = (sub_48dd80() & 0x7fffff) | 0x3f800000
        float xmm0_13 = (var_44 - 1f) * 6.28318548f * 0.5f
        var_44 = xmm0_13
        float xmm0_14 = sub_41f120(xmm0_13)
        float var_7c_1 = xmm0_14 * eax_23
        float xmm0_16 = var_44
        var_84 = xmm0_14 f* xmm0_9.d
        float var_80_1 = xmm0_14 f* xmm0_9:4.d
        int32_t var_78_1 = sub_41f100(xmm0_16)
        *(arg1 + 0x28c) = var_84.o
    
    float var_48 = 0f
    TEB* fsbase
    float xmm0_20
    
    if (sub_4fd5b0(&var_48, 0x1a, arg1, &var_48) == 0)
        xmm0_20 = var_48
    else
        if (data_1511ab0 s> *(*fsbase->ThreadLocalStoragePointer + 4))
            __Init_thread_header(&data_1511ab0)
            
            if (data_1511ab0 == 0xffffffff)
                data_1511ab4 = 0x3c8efa35
                __Init_thread_footer(&data_1511ab0)
        
        xmm0_20 = data_1511ab4 * var_48
    
    float var_50 = xmm0_20
    float var_58 = 0f
    float xmm0_22
    
    if (sub_4fd5b0(&var_58, 0x1b, arg1, &var_58) == 0)
        xmm0_22 = var_58
    else
        if (data_1511ab0 s> *(*fsbase->ThreadLocalStoragePointer + 4))
            __Init_thread_header(&data_1511ab0)
            
            if (data_1511ab0 == 0xffffffff)
                data_1511ab4 = 0x3c8efa35
                __Init_thread_footer(&data_1511ab0)
        
        xmm0_22 = data_1511ab4 * var_58
    
    var_48 = xmm0_22
    float var_4c
    
    if (sub_4fd5b0(&var_4c, 0x19, arg1, &var_4c) != 0)
        var_44 = sub_41f100(var_48)
        arg2[3] = sub_41f120(var_50) * var_44 * var_4c * 0.00999999978f + arg2[3]
        arg2[4] = sub_41f100(var_50) * var_44 * var_4c * 0.00999999978f + arg2[4]
        arg2[5] = sub_41f120(var_48) * var_4c * 0.00999999978f + arg2[5]
    
    if (sub_4fd5b0(&var_44, 0x18, arg1, &var_44) != 0)
        var_4c = sub_41f100(var_48)
        *(arg1 + 0x29c) = sub_41f120(var_50) * var_4c * var_44 f+ *(arg1 + 0x29c)
        *(arg1 + 0x2a0) = sub_41f100(var_50) * var_4c * var_44 f+ *(arg1 + 0x2a0)
        *(arg1 + 0x2a4) = sub_41f120(var_48) * var_44 f+ *(arg1 + 0x2a4)
    
    if (sub_4fd5b0(&var_50, 0x1c, arg1, &var_50) != 0)
        *(arg1 + 0x29c) = *(arg1 + 0x29c) + var_50
    
    float var_64
    
    if (sub_4fd5b0(&var_64, 0x1d, arg1, &var_64) != 0)
        *(arg1 + 0x2a0) = *(arg1 + 0x2a0) + var_64
    
    float var_5c
    
    if (sub_4fd5b0(&var_5c, 0x1e, arg1, &var_5c) != 0)
        *(arg1 + 0x2a4) = *(arg1 + 0x2a4) + var_5c
    
    int32_t* eax_45 = sub_4981f0(**(arg1 + 0x2e4))
    int32_t ecx_20
    ecx_20.b = *(*(arg1 + 0x2dc) * 0x168 + *eax_45 + 0xe3)
    float eax_47 = *(ebx_1 + 0xf8)
    char var_51 = ecx_20.b
    var_5c = eax_47
    uint32_t edx_4
    
    if (eax_47 s<= 1 || ecx_20.b != 0)
        edx_4 = 0
    label_5007f4:
        arg2[0xd] = edx_4
        int32_t ebx_2 = *(ebx_1 + 0xfc)
        uint32_t edx_6
        
        if (ebx_2 s<= 1 || ecx_20.b != 0)
            edx_6 = 0
        label_50081e:
            arg2[0xe] = edx_6
            float var_3c
            
            if (sub_4fd5b0(&var_3c, 0x22, arg1, &var_3c) != 0)
                float xmm1_4 = data_620d84 f/ *(ecx_1 + 0x58)
                int64_t xmm0_64 = *(ecx_1 + 0x40)
                float xmm0_65 = var_3c
                float xmm3_5 = (xmm0_64:4.d f- *(ecx_1 + 0x6c)) * xmm0_65 * xmm1_4 + arg2[4]
                float xmm4_5 = (*(ecx_1 + 0x48) f- *(ecx_1 + 0x70)) * xmm0_65 * xmm1_4 + arg2[5]
                arg2[3] = arg2[3] + (xmm0_64.d f- *(ecx_1 + 0x68)) * xmm0_65 * xmm1_4
                arg2[4] = xmm3_5
                arg2[5] = xmm4_5
            
            void* ecx_23 = ebx_1
            int32_t i = 0
            
            if (*(ecx_23 + 0x110) s> 0)
                float eax_54 = 0f
                var_50 = 0f
                
                do
                    int32_t* ecx_25 = *(ecx_23 + 0x118) i+ eax_54
                    int32_t edx_7 = *ecx_25
                    
                    if (edx_7 - 9 u<= 0x2f)
                        switch (edx_7 + &jump_table_501580[0xe]:3)
                            case &lookup_table_5015c4
                                void var_d4
                                int128_t* eax_270 =
                                    sub_4fdf10(&var_d4, edx_7, ecx_25[2], (zx.o(0)).d, &var_d4)
                                int128_t var_38 = *eax_270
                                int128_t var_28_1 = eax_270[1]
                                int128_t var_b4
                                sub_4ddac0(&var_38, arg1 + 0x288, &var_b4, &var_38)
                                *(arg1 + 0x288) = var_b4
                                int128_t var_a4
                                *(arg1 + 0x298) = var_a4
                            case &lookup_table_5015c4[0xe]
                                int32_t* eax_57 = ecx_25[2]
                                float xmm0_68
                                bool p_2
                                
                                if (eax_57[2] == 1)
                                    int32_t* eax_58 = *eax_57
                                    xmm0_68 = *eax_58
                                    float temp3_1 = eax_58[1]
                                    xmm0_68 - temp3_1
                                    eax_58:1.b = (xmm0_68 == temp3_1 ? 1 : 0) << 6
                                        | (is_unordered.d(xmm0_68, temp3_1) ? 1 : 0) << 2
                                        | (xmm0_68 < temp3_1 ? 1 : 0)
                                    p_2 = unimplemented  {test ah, 0x44}
                                
                                if (eax_57[2] != 1 || p_2)
                                    int32_t eax_62 = (*(arg2[0xc] i+ 0x2c) + edx_7) * edx_7
                                    int32_t ecx_28 = (eax_62 << 0xf) + not.d(eax_62)
                                    int32_t ecx_29 = (ecx_28 u>> 0xc ^ ecx_28) * 5
                                    int32_t eax_70 = (ecx_29 u>> 4 ^ ecx_29) * 0x809
                                    void* eax_71 = arg2[0xc]
                                    var_3c = ((eax_70 u>> 0x10 ^ eax_70) & 0x7fffff) | 0x3f800000
                                    xmm0_68 = sub_526200(eax_57, *(eax_71 + 0x2f4), *(eax_71 + 0x2e8), 
                                        var_3c - 1f)
                                
                                *(arg1 + 0x2ec) = 100f / xmm0_68
                            case &lookup_table_5015c4[0x1a]
                                int32_t* eax_162 = ecx_25[2]
                                float xmm0_78
                                bool p_16
                                
                                if (eax_162[2] == 1)
                                    int32_t* eax_163 = *eax_162
                                    xmm0_78 = *eax_163
                                    float temp10_1 = eax_163[1]
                                    xmm0_78 - temp10_1
                                    eax_163:1.b = (xmm0_78 == temp10_1 ? 1 : 0) << 6
                                        | (is_unordered.d(xmm0_78, temp10_1) ? 1 : 0) << 2
                                        | (xmm0_78 < temp10_1 ? 1 : 0)
                                    p_16 = unimplemented  {test ah, 0x44}
                                
                                if (eax_162[2] != 1 || p_16)
                                    int32_t eax_167 = (*(arg2[0xc] i+ 0x2c) + edx_7) * edx_7
                                    int32_t ecx_63 = (eax_167 << 0xf) + not.d(eax_167)
                                    int32_t ecx_64 = (ecx_63 u>> 0xc ^ ecx_63) * 5
                                    int32_t eax_175 = (ecx_64 u>> 4 ^ ecx_64) * 0x809
                                    void* eax_176 = arg2[0xc]
                                    var_3c = ((eax_175 u>> 0x10 ^ eax_175) & 0x7fffff) | 0x3f800000
                                    xmm0_78 = sub_526200(eax_162, *(eax_176 + 0x2f4), 
                                        *(eax_176 + 0x2e8), var_3c - 1f)
                                
                                float xmm0_80 = sub_4da600(xmm0_78) * 0.5f
                                var_3c = xmm0_80
                                float xmm0_81 = sub_41f120(xmm0_80)
                                var_58 = xmm0_81
                                float xmm0_82 = var_3c
                                var_44 = xmm0_81 * 0f
                                float xmm0_83 = sub_41f100(xmm0_82)
                                float xmm4_6 = *(arg1 + 0x28c)
                                float xmm6_1 = *(arg1 + 0x294)
                                float xmm3_22 = *(arg1 + 0x290)
                                var_4c = xmm0_83
                                float xmm0_84 = var_44
                                float xmm2_8 = xmm0_84 f* *(arg1 + 0x298)
                                float xmm7_2 = xmm0_84 * xmm4_6
                                float xmm4_7 = xmm4_6 * var_58
                                float xmm0_85 = xmm0_84 * xmm6_1
                                float xmm5_2 = xmm0_84 * xmm3_22
                                float xmm1_25 = xmm4_6 * var_4c + xmm2_8 + xmm0_85
                                var_44 = xmm0_85
                                float xmm0_89 = xmm6_1 * var_4c
                                float xmm3_25 = xmm3_22 * var_4c + xmm2_8 + xmm4_7
                                float xmm6_2 = xmm6_1 * var_58
                                var_74 = xmm1_25 - xmm3_22 * var_58
                                float var_70_1 = xmm3_25 - var_44
                                float xmm3_27 = *(arg1 + 0x298)
                                float var_68_1 = xmm3_27 * var_4c - xmm7_2 - xmm5_2 - xmm6_2
                                float var_6c_1 = xmm3_27 * var_58 + xmm0_89 + xmm5_2 - xmm7_2
                                *(arg1 + 0x28c) = var_74.o
                            case &lookup_table_5015c4[0x1b]
                                int32_t* eax_177 = ecx_25[2]
                                float xmm0_91
                                bool p_18
                                
                                if (eax_177[2] == 1)
                                    int32_t* eax_178 = *eax_177
                                    xmm0_91 = *eax_178
                                    float temp11_1 = eax_178[1]
                                    xmm0_91 - temp11_1
                                    eax_178:1.b = (xmm0_91 == temp11_1 ? 1 : 0) << 6
                                        | (is_unordered.d(xmm0_91, temp11_1) ? 1 : 0) << 2
                                        | (xmm0_91 < temp11_1 ? 1 : 0)
                                    p_18 = unimplemented  {test ah, 0x44}
                                
                                if (eax_177[2] != 1 || p_18)
                                    int32_t eax_182 = (*(arg2[0xc] i+ 0x2c) + edx_7) * edx_7
                                    int32_t ecx_68 = (eax_182 << 0xf) + not.d(eax_182)
                                    int32_t ecx_69 = (ecx_68 u>> 0xc ^ ecx_68) * 5
                                    int32_t eax_190 = (ecx_69 u>> 4 ^ ecx_69) * 0x809
                                    void* eax_191 = arg2[0xc]
                                    var_3c = ((eax_190 u>> 0x10 ^ eax_190) & 0x7fffff) | 0x3f800000
                                    xmm0_91 = sub_526200(eax_177, *(eax_191 + 0x2f4), 
                                        *(eax_191 + 0x2e8), var_3c - 1f)
                                
                                float xmm0_93 = sub_4da600(xmm0_91) * 0.5f
                                var_3c = xmm0_93
                                float xmm0_94 = sub_41f120(xmm0_93)
                                var_44 = xmm0_94
                                var_48 = xmm0_94 * 0f
                                float xmm0_97 = sub_41f100(var_3c)
                                float xmm1_33 = var_48
                                float xmm7_3 = *(arg1 + 0x28c)
                                float xmm3_34 = *(arg1 + 0x294)
                                float xmm4_8 = *(arg1 + 0x290)
                                var_4c = xmm0_97
                                float xmm2_10 = xmm1_33 f* *(arg1 + 0x298)
                                var_48 = xmm1_33 * xmm7_3
                                float xmm5_4 = xmm1_33 * xmm3_34
                                float xmm6_4 = xmm1_33 * xmm4_8
                                int64_t var_14
                                var_14:4.d = xmm3_34 * var_4c + xmm2_10 + xmm4_8 * var_44 - var_48
                                var_14.d = xmm4_8 * var_4c + xmm2_10 + var_48 - xmm3_34 * var_44
                                float var_c_3 =
                                    *(arg1 + 0x298) * var_4c - xmm7_3 * var_44 - xmm6_4 - xmm5_4
                                *(arg1 + 0x28c) =
                                    (xmm7_3 * xmm0_97 + *(arg1 + 0x298) * var_44 + xmm5_4 - xmm6_4).o
                            case &lookup_table_5015c4[0x1c]
                                int32_t* eax_192 = ecx_25[2]
                                float xmm0_103
                                bool p_20
                                
                                if (eax_192[2] == 1)
                                    int32_t* eax_193 = *eax_192
                                    xmm0_103 = *eax_193
                                    float temp12_1 = eax_193[1]
                                    xmm0_103 - temp12_1
                                    eax_193:1.b = (xmm0_103 == temp12_1 ? 1 : 0) << 6
                                        | (is_unordered.d(xmm0_103, temp12_1) ? 1 : 0) << 2
                                        | (xmm0_103 < temp12_1 ? 1 : 0)
                                    p_20 = unimplemented  {test ah, 0x44}
                                
                                if (eax_192[2] != 1 || p_20)
                                    int32_t eax_197 = (*(arg2[0xc] i+ 0x2c) + edx_7) * edx_7
                                    int32_t ecx_73 = (eax_197 << 0xf) + not.d(eax_197)
                                    int32_t ecx_74 = (ecx_73 u>> 0xc ^ ecx_73) * 5
                                    int32_t eax_205 = (ecx_74 u>> 4 ^ ecx_74) * 0x809
                                    void* eax_206 = arg2[0xc]
                                    var_3c = ((eax_205 u>> 0x10 ^ eax_205) & 0x7fffff) | 0x3f800000
                                    xmm0_103 = sub_526200(eax_192, *(eax_206 + 0x2f4), 
                                        *(eax_206 + 0x2e8), var_3c - 1f)
                                
                                float xmm0_105 = sub_4da600(xmm0_103) * 0.5f
                                var_3c = xmm0_105
                                float xmm0_106 = sub_41f120(xmm0_105)
                                var_4c = xmm0_106
                                var_48 = xmm0_106 * 0f
                                float xmm0_109 = sub_41f100(var_3c)
                                float xmm5_5 = *(arg1 + 0x28c)
                                float xmm7_5 = *(arg1 + 0x290)
                                float xmm3_41 = *(arg1 + 0x294)
                                var_44 = xmm0_109
                                float xmm0_110 = var_48
                                float xmm6_6 = xmm0_110 * xmm5_5
                                float xmm2_12 = xmm0_110 f* *(arg1 + 0x298)
                                float xmm1_53 = xmm5_5 * var_44 + xmm2_12
                                float xmm5_6 = xmm5_5 * var_4c
                                var_48 = xmm0_110 * xmm7_5
                                float xmm4_11 = xmm0_110 * xmm3_41
                                float var_8c_1 = xmm3_41 * var_44 + xmm2_12 + var_48 - xmm5_6
                                float var_90_1 =
                                    xmm7_5 * var_44 + *(arg1 + 0x298) * var_4c + xmm6_6 - xmm4_11
                                float var_88_1 =
                                    *(arg1 + 0x298) * var_44 - xmm6_6 - xmm7_5 * var_4c - xmm4_11
                                *(arg1 + 0x28c) = (xmm1_53 + xmm3_41 * var_4c - var_48).o
                            case &lookup_table_5015c4[0x1d]
                                int32_t* eax_207 = ecx_25[2]
                                float xmm0_117
                                bool p_22
                                
                                if (eax_207[2] == 1)
                                    int32_t* eax_208 = *eax_207
                                    xmm0_117 = *eax_208
                                    float temp13_1 = eax_208[1]
                                    xmm0_117 - temp13_1
                                    eax_208:1.b = (xmm0_117 == temp13_1 ? 1 : 0) << 6
                                        | (is_unordered.d(xmm0_117, temp13_1) ? 1 : 0) << 2
                                        | (xmm0_117 < temp13_1 ? 1 : 0)
                                    p_22 = unimplemented  {test ah, 0x44}
                                
                                if (eax_207[2] != 1 || p_22)
                                    int32_t eax_212 = (*(arg2[0xc] i+ 0x2c) + edx_7) * edx_7
                                    int32_t ecx_78 = (eax_212 << 0xf) + not.d(eax_212)
                                    int32_t ecx_79 = (ecx_78 u>> 0xc ^ ecx_78) * 5
                                    int32_t eax_220 = (ecx_79 u>> 4 ^ ecx_79) * 0x809
                                    void* eax_221 = arg2[0xc]
                                    var_3c = ((eax_220 u>> 0x10 ^ eax_220) & 0x7fffff) | 0x3f800000
                                    xmm0_117 = sub_526200(eax_207, *(eax_221 + 0x2f4), 
                                        *(eax_221 + 0x2e8), var_3c - 1f)
                                
                                *arg2 = xmm0_117 + *arg2
                            case &lookup_table_5015c4[0x1e]
                                int32_t* eax_222 = ecx_25[2]
                                float xmm0_119
                                bool p_24
                                
                                if (eax_222[2] == 1)
                                    int32_t* eax_223 = *eax_222
                                    xmm0_119 = *eax_223
                                    float temp14_1 = eax_223[1]
                                    xmm0_119 - temp14_1
                                    eax_223:1.b = (xmm0_119 == temp14_1 ? 1 : 0) << 6
                                        | (is_unordered.d(xmm0_119, temp14_1) ? 1 : 0) << 2
                                        | (xmm0_119 < temp14_1 ? 1 : 0)
                                    p_24 = unimplemented  {test ah, 0x44}
                                
                                if (eax_222[2] != 1 || p_24)
                                    int32_t eax_227 = (*(arg2[0xc] i+ 0x2c) + edx_7) * edx_7
                                    int32_t ecx_83 = (eax_227 << 0xf) + not.d(eax_227)
                                    int32_t ecx_84 = (ecx_83 u>> 0xc ^ ecx_83) * 5
                                    int32_t eax_235 = (ecx_84 u>> 4 ^ ecx_84) * 0x809
                                    void* eax_236 = arg2[0xc]
                                    var_3c = ((eax_235 u>> 0x10 ^ eax_235) & 0x7fffff) | 0x3f800000
                                    xmm0_119 = sub_526200(eax_222, *(eax_236 + 0x2f4), 
                                        *(eax_236 + 0x2e8), var_3c - 1f)
                                
                                arg2[1] = xmm0_119 + arg2[1]
                            case &lookup_table_5015c4[0x1f]
                                int32_t* eax_237 = ecx_25[2]
                                float xmm0_121
                                bool p_26
                                
                                if (eax_237[2] == 1)
                                    int32_t* eax_238 = *eax_237
                                    xmm0_121 = *eax_238
                                    float temp15_1 = eax_238[1]
                                    xmm0_121 - temp15_1
                                    eax_238:1.b = (xmm0_121 == temp15_1 ? 1 : 0) << 6
                                        | (is_unordered.d(xmm0_121, temp15_1) ? 1 : 0) << 2
                                        | (xmm0_121 < temp15_1 ? 1 : 0)
                                    p_26 = unimplemented  {test ah, 0x44}
                                
                                if (eax_237[2] != 1 || p_26)
                                    int32_t eax_242 = (*(arg2[0xc] i+ 0x2c) + edx_7) * edx_7
                                    int32_t ecx_88 = (eax_242 << 0xf) + not.d(eax_242)
                                    int32_t ecx_89 = (ecx_88 u>> 0xc ^ ecx_88) * 5
                                    int32_t eax_250 = (ecx_89 u>> 4 ^ ecx_89) * 0x809
                                    void* eax_251 = arg2[0xc]
                                    var_3c = ((eax_250 u>> 0x10 ^ eax_250) & 0x7fffff) | 0x3f800000
                                    xmm0_121 = sub_526200(eax_237, *(eax_251 + 0x2f4), 
                                        *(eax_251 + 0x2e8), var_3c - 1f)
                                
                                arg2[2] = xmm0_121 + arg2[2]
                            case &lookup_table_5015c4[0x20]
                                int32_t* eax_72 = ecx_25[2]
                                float xmm0_69
                                bool p_4
                                
                                if (eax_72[2] == 1)
                                    int32_t* eax_73 = *eax_72
                                    xmm0_69 = *eax_73
                                    float temp4_1 = eax_73[1]
                                    xmm0_69 - temp4_1
                                    eax_73:1.b = (xmm0_69 == temp4_1 ? 1 : 0) << 6
                                        | (is_unordered.d(xmm0_69, temp4_1) ? 1 : 0) << 2
                                        | (xmm0_69 < temp4_1 ? 1 : 0)
                                    p_4 = unimplemented  {test ah, 0x44}
                                
                                if (eax_72[2] != 1 || p_4)
                                    int32_t eax_77 = (*(arg2[0xc] i+ 0x2c) + edx_7) * edx_7
                                    int32_t ecx_33 = (eax_77 << 0xf) + not.d(eax_77)
                                    int32_t ecx_34 = (ecx_33 u>> 0xc ^ ecx_33) * 5
                                    int32_t eax_85 = (ecx_34 u>> 4 ^ ecx_34) * 0x809
                                    void* eax_86 = arg2[0xc]
                                    var_3c = ((eax_85 u>> 0x10 ^ eax_85) & 0x7fffff) | 0x3f800000
                                    xmm0_69 = sub_526200(eax_72, *(eax_86 + 0x2f4), *(eax_86 + 0x2e8), 
                                        var_3c - 1f)
                                
                                *(arg1 + 0x29c) = xmm0_69 f+ *(arg1 + 0x29c)
                            case &lookup_table_5015c4[0x21]
                                int32_t* eax_87 = ecx_25[2]
                                float xmm0_71
                                bool p_6
                                
                                if (eax_87[2] == 1)
                                    int32_t* eax_88 = *eax_87
                                    xmm0_71 = *eax_88
                                    float temp5_1 = eax_88[1]
                                    xmm0_71 - temp5_1
                                    eax_88:1.b = (xmm0_71 == temp5_1 ? 1 : 0) << 6
                                        | (is_unordered.d(xmm0_71, temp5_1) ? 1 : 0) << 2
                                        | (xmm0_71 < temp5_1 ? 1 : 0)
                                    p_6 = unimplemented  {test ah, 0x44}
                                
                                if (eax_87[2] != 1 || p_6)
                                    int32_t eax_92 = (*(arg2[0xc] i+ 0x2c) + edx_7) * edx_7
                                    int32_t ecx_38 = (eax_92 << 0xf) + not.d(eax_92)
                                    int32_t ecx_39 = (ecx_38 u>> 0xc ^ ecx_38) * 5
                                    int32_t eax_100 = (ecx_39 u>> 4 ^ ecx_39) * 0x809
                                    void* eax_101 = arg2[0xc]
                                    var_3c = ((eax_100 u>> 0x10 ^ eax_100) & 0x7fffff) | 0x3f800000
                                    xmm0_71 = sub_526200(eax_87, *(eax_101 + 0x2f4), 
                                        *(eax_101 + 0x2e8), var_3c - 1f)
                                
                                *(arg1 + 0x2a0) = *(arg1 + 0x2a0) + xmm0_71
                            case &lookup_table_5015c4[0x22]
                                int32_t* eax_102 = ecx_25[2]
                                float xmm0_72
                                bool p_8
                                
                                if (eax_102[2] == 1)
                                    int32_t* eax_103 = *eax_102
                                    xmm0_72 = *eax_103
                                    float temp6_1 = eax_103[1]
                                    xmm0_72 - temp6_1
                                    eax_103:1.b = (xmm0_72 == temp6_1 ? 1 : 0) << 6
                                        | (is_unordered.d(xmm0_72, temp6_1) ? 1 : 0) << 2
                                        | (xmm0_72 < temp6_1 ? 1 : 0)
                                    p_8 = unimplemented  {test ah, 0x44}
                                
                                if (eax_102[2] != 1 || p_8)
                                    int32_t eax_107 = (*(arg2[0xc] i+ 0x2c) + edx_7) * edx_7
                                    int32_t ecx_43 = (eax_107 << 0xf) + not.d(eax_107)
                                    int32_t ecx_44 = (ecx_43 u>> 0xc ^ ecx_43) * 5
                                    int32_t eax_115 = (ecx_44 u>> 4 ^ ecx_44) * 0x809
                                    void* eax_116 = arg2[0xc]
                                    var_3c = ((eax_115 u>> 0x10 ^ eax_115) & 0x7fffff) | 0x3f800000
                                    xmm0_72 = sub_526200(eax_102, *(eax_116 + 0x2f4), 
                                        *(eax_116 + 0x2e8), var_3c - 1f)
                                
                                *(arg1 + 0x2a4) = *(arg1 + 0x2a4) + xmm0_72
                            case &lookup_table_5015c4[0x23]
                                int32_t* eax_117 = ecx_25[2]
                                float xmm0_73
                                bool p_10
                                
                                if (eax_117[2] == 1)
                                    int32_t* eax_118 = *eax_117
                                    xmm0_73 = *eax_118
                                    float temp7_1 = eax_118[1]
                                    xmm0_73 - temp7_1
                                    eax_118:1.b = (xmm0_73 == temp7_1 ? 1 : 0) << 6
                                        | (is_unordered.d(xmm0_73, temp7_1) ? 1 : 0) << 2
                                        | (xmm0_73 < temp7_1 ? 1 : 0)
                                    p_10 = unimplemented  {test ah, 0x44}
                                
                                if (eax_117[2] != 1 || p_10)
                                    int32_t eax_122 = (*(arg2[0xc] i+ 0x2c) + edx_7) * edx_7
                                    int32_t ecx_48 = (eax_122 << 0xf) + not.d(eax_122)
                                    int32_t ecx_49 = (ecx_48 u>> 0xc ^ ecx_48) * 5
                                    int32_t eax_130 = (ecx_49 u>> 4 ^ ecx_49) * 0x809
                                    void* eax_131 = arg2[0xc]
                                    var_3c = ((eax_130 u>> 0x10 ^ eax_130) & 0x7fffff) | 0x3f800000
                                    xmm0_73 = sub_526200(eax_117, *(eax_131 + 0x2f4), 
                                        *(eax_131 + 0x2e8), var_3c - 1f)
                                
                                arg2[3] = xmm0_73 + arg2[3]
                            case &lookup_table_5015c4[0x24]
                                float** eax_132 = ecx_25[2]
                                float xmm0_75
                                bool p_12
                                
                                if (eax_132[2] == 1)
                                    float* eax_133 = *eax_132
                                    xmm0_75 = *eax_133
                                    float temp8_1 = eax_133[1]
                                    xmm0_75 - temp8_1
                                    eax_133:1.b = (xmm0_75 == temp8_1 ? 1 : 0) << 6
                                        | (is_unordered.d(xmm0_75, temp8_1) ? 1 : 0) << 2
                                        | (xmm0_75 < temp8_1 ? 1 : 0)
                                    p_12 = unimplemented  {test ah, 0x44}
                                
                                if (eax_132[2] != 1 || p_12)
                                    int32_t eax_137 = (*(arg2[0xc] i+ 0x2c) + edx_7) * edx_7
                                    int32_t ecx_53 = (eax_137 << 0xf) + not.d(eax_137)
                                    int32_t ecx_54 = (ecx_53 u>> 0xc ^ ecx_53) * 5
                                    int32_t eax_145 = (ecx_54 u>> 4 ^ ecx_54) * 0x809
                                    void* eax_146 = arg2[0xc]
                                    var_3c = ((eax_145 u>> 0x10 ^ eax_145) & 0x7fffff) | 0x3f800000
                                    xmm0_75 = sub_526200(eax_132, *(eax_146 + 0x2f4), 
                                        *(eax_146 + 0x2e8), var_3c - 1f)
                                
                                arg2[4] = xmm0_75 + arg2[4]
                            case &lookup_table_5015c4[0x25]
                                int32_t* eax_147 = ecx_25[2]
                                float xmm0_77
                                bool p_14
                                
                                if (eax_147[2] == 1)
                                    int32_t* eax_148 = *eax_147
                                    xmm0_77 = *eax_148
                                    float temp9_1 = eax_148[1]
                                    xmm0_77 - temp9_1
                                    eax_148:1.b = (xmm0_77 == temp9_1 ? 1 : 0) << 6
                                        | (is_unordered.d(xmm0_77, temp9_1) ? 1 : 0) << 2
                                        | (xmm0_77 < temp9_1 ? 1 : 0)
                                    p_14 = unimplemented  {test ah, 0x44}
                                
                                if (eax_147[2] != 1 || p_14)
                                    int32_t eax_152 = (*(arg2[0xc] i+ 0x2c) + edx_7) * edx_7
                                    int32_t ecx_58 = (eax_152 << 0xf) + not.d(eax_152)
                                    int32_t ecx_59 = (ecx_58 u>> 0xc ^ ecx_58) * 5
                                    int32_t eax_160 = (ecx_59 u>> 4 ^ ecx_59) * 0x809
                                    void* eax_161 = arg2[0xc]
                                    var_3c = ((eax_160 u>> 0x10 ^ eax_160) & 0x7fffff) | 0x3f800000
                                    xmm0_77 = sub_526200(eax_147, *(eax_161 + 0x2f4), 
                                        *(eax_161 + 0x2e8), var_3c - 1f)
                                
                                arg2[5] = arg2[5] + xmm0_77
                            case &lookup_table_5015c4[0x2d]
                                int32_t* eax_252 = ecx_25[2]
                                float xmm0_123
                                bool p_28
                                
                                if (eax_252[2] == 1)
                                    float* eax_253 = *eax_252
                                    xmm0_123 = *eax_253
                                    float temp16_1 = eax_253[1]
                                    xmm0_123 - temp16_1
                                    eax_253:1.b = (xmm0_123 == temp16_1 ? 1 : 0) << 6
                                        | (is_unordered.d(xmm0_123, temp16_1) ? 1 : 0) << 2
                                        | (xmm0_123 < temp16_1 ? 1 : 0)
                                    p_28 = unimplemented  {test ah, 0x44}
                                
                                if (eax_252[2] != 1 || p_28)
                                    int32_t eax_257 = (*(arg2[0xc] i+ 0x2c) + edx_7) * edx_7
                                    int32_t ecx_93 = (eax_257 << 0xf) + not.d(eax_257)
                                    int32_t ecx_94 = (ecx_93 u>> 0xc ^ ecx_93) * 5
                                    int32_t eax_265 = (ecx_94 u>> 4 ^ ecx_94) * 0x809
                                    void* eax_266 = arg2[0xc]
                                    var_3c = ((eax_265 u>> 0x10 ^ eax_265) & 0x7fffff) | 0x3f800000
                                    xmm0_123 = sub_526200(eax_252, *(eax_266 + 0x2f4), 
                                        *(eax_266 + 0x2e8), var_3c - 1f)
                                
                                arg2[9] = sub_4da600(xmm0_123) + arg2[9]
                            case &lookup_table_5015c4[0x2f]
                                int64_t* eax_267 = sub_5001e0(&var_84)
                                int32_t eax_268 = eax_267[1].d
                                *(arg2 + 0x18) = *eax_267
                                arg2[8] = eax_268
                    
                    ecx_23 = ebx_1
                    i += 1
                    eax_54 = var_50 i+ 0x10
                    var_50 = eax_54
                while (i s< *(ecx_23 + 0x110))
            
            int32_t* eax_273 = *(arg1 + 0x2e4)
            *(arg1 + 0x2a8) = data_63c264
            *(arg1 + 0x2b8) = data_63c274
            int32_t* eax_274
            int32_t edx_93
            eax_274, edx_93 = sub_4981f0(*eax_273)
            void* eax_275 = *eax_274
            
            if (*(*(arg1 + 0x2dc) * 0x168 + eax_275 + 0xe1) != 0)
                void* ecx_100 = *(arg1 + 0x2e0)
                
                if (ecx_100 != 0)
                    void var_f4
                    int128_t* eax_277 = sub_5020f0(&var_f4, edx_93, ecx_100, &var_f4)
                    int128_t xmm1_70 = eax_277[1]
                    *(arg1 + 0x2a8) = *eax_277
                    *(arg1 + 0x2b8) = xmm1_70
                    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                    return eax_277
                
                eax_275 = *(arg1 + 0x2e4)
                *(arg1 + 0x2a8) = *(eax_275 + 0x2c)
                *(arg1 + 0x2b8) = *(eax_275 + 0x3c)
            
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return eax_275
        
        if (ebx_2 s> 0)
            edx_6 = modu.dp.d(0:(sub_48dd80()), ebx_2)
            goto label_50081e
    else if (eax_47 s> 0)
        int32_t eax_48
        eax_48, ecx_20 = sub_48dd80()
        ecx_20.b = var_51
        int32_t edx_3 = 0
        float temp2_1 = var_5c
        eax_47 = divu.dp.d(edx_3:eax_48, temp2_1)
        edx_4 = modu.dp.d(edx_3:eax_48, temp2_1)
        goto label_5007f4
    sub_489550(eax_47, &data_5b2591, "maxPlusOne > 0", "d:\ax\trunk\ax2017\engine\random.cpp", 0x4f, 
        "RandomInt")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
