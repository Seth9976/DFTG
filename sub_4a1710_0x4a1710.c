// 函数名称: sub_4a1710
// 虚拟地址: 0x4a1710
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __convention("regparm")sub_4a1710(int32_t arg1, int32_t** arg2, uint32_t arg3, float arg4 @ xmm2, char arg5)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    uint32_t esi = arg3
    int32_t** edi = arg2
    uint32_t var_324 = esi
    int32_t** var_31c = edi
    int32_t edx = *(esi + 0xf24)
    uint32_t result_2 = *(esi + 0xf60)
    uint32_t result = *(esi + 0xf28) * edx
    uint32_t result_1 = result
    
    if (result_2 != 0xffffffff)
        if (result s>= result_2)
            result = result_2
        
        result_1 = result
    
    int32_t ecx = *(esi + 0xf2c)
    
    if (ecx != 0)
        result += ecx - edx
        result_1 = result
    
    int32_t edx_1 = *(esi + 0x1190)
    
    if (result != edx_1 || arg5 != 0 || *(esi + 0xe2c) != 0 || *(esi + 0xfea) != 0)
        uint32_t result_5 = result_1
        void* eax_3 = nullptr
        char var_31d_1 = 0
        void* var_314_1 = nullptr
        int32_t var_508_9
        int128_t var_370
        int128_t var_350
        uint32_t var_344
        char* ecx_25
        
        if (result_5 s> 0)
            while (true)
                if (arg5 == 0 && result_5 == *(esi + 0x1190))
                    goto label_4a1927
                
                void* edx_2 = *(esi + 0xf48)
                
                if (edx_2 == 0)
                    if (eax_3 == 0)
                        goto label_4a1927
                    
                    void* eax_5 = sub_49e970(esi, 0)
                    uint32_t eax_6 = sub_49a970(esi, var_314_1)
                    var_344 = eax_6
                    *(eax_6 + 0x1130) = 1
                    *(eax_6 + 0xe28) = 0
                    void* ecx_8 = _memset(eax_6 + 0x1014, 0, 0xd4)
                    *(eax_6 + 0x1020) = 0x3f800000
                    int32_t** var_508_2 = var_31c
                    *(eax_6 + 0x1074) = data_5d2464
                    __builtin_memcpy(eax_6 + 0x10b0, 
                        "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x"
                    "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
                        0x24)
                    *(eax_6 + 0x1094) = 0
                    uint32_t esi_2 = var_344
                    *(esi_2 + 0x109c) = var_314_1
                    result = sub_4a06f0(var_314_1, esi_2, ecx_8, eax_5)
                    
                    if (*(esi_2 + 0x1130) == 1)
                        esi = var_324
                        var_31d_1 = 1
                        goto label_4a191d
                    
                    char const* const var_504_14 = "UI2TableUpdate"
                    var_508_9 = 0x1736
                    ecx_25 = "child.clone == true"
                    break
                
                if (*(edx_2 + 4) == 0x22)
                    void* eax_4 = sub_49a970(esi, eax_3)
                    int32_t var_504_1 = 0
                    var_344 = 0
                    *(eax_4 + 0x109c) = var_314_1
                    *(eax_4 + 0x1130) = 1
                    *(eax_4 + 0x10e4) = *(esi + 0x10e4)
                    int32_t* ecx_5
                    ecx_5.b = *(esi + 0x10e4)
                    sub_4a07f0(eax_4, eax_4, ecx_5, *(esi + 0xf48), edi, &var_344)
                label_4a191d:
                    eax_3 = var_314_1
                label_4a1927:
                    result = sub_49e970(esi, eax_3)
                    uint32_t result_4 = result
                    
                    if (arg5 != 0 || var_31d_1 != 0 || *(result_4 + 0xe2c) != 0)
                        if (var_314_1 != 0 && *(result_4 + 0x1130) != 1)
                            char const* const var_504_15 = "UI2TableUpdate"
                            var_508_9 = 0x1743
                            ecx_25 = "child.clone == true"
                            break
                        
                        if (*(result_4 + 0x112c) != esi)
                            char const* const var_504_17 = "UI2TableUpdate"
                            var_508_9 = 0x1746
                            ecx_25 = "child.parent == &ui"
                            break
                        
                        void var_4f8
                        int128_t var_100
                        int128_t* eax_19
                        
                        if (*(esi + 0xfea) != 1)
                            float xmm0_30 = *(esi + 0x1080)
                            xmm0_30 f- 0
                            result:1.b = (xmm0_30 == 0f ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_30, 0f) ? 1 : 0) << 2 | (xmm0_30 < 0f ? 1 : 0)
                            bool p_2 = unimplemented  {test ah, 0x44}
                            bool p_4
                            
                            if (not(p_2))
                                float xmm0_31 = *(result_4 + 0x1080)
                                xmm0_31 f- 0
                                result:1.b = (xmm0_31 == 0f ? 1 : 0) << 6
                                    | (is_unordered.d(xmm0_31, 0f) ? 1 : 0) << 2
                                    | (xmm0_31 < 0f ? 1 : 0)
                                p_4 = unimplemented  {test ah, 0x44}
                            
                            if (p_2 || p_4)
                                int32_t eax_23 = *(result_4 + 0xe24)
                                
                                if (eax_23 == 0 || *(esi + 0xe24) != eax_23)
                                    void* var_504_12 = var_314_1
                                    int128_t* eax_33 = sub_49fd90(&var_4f8, var_314_1, esi, &var_4f8)
                                    int32_t var_50c_7 = 0
                                    int128_t xmm3_27 = eax_33[3]
                                    int128_t xmm0_92 = *eax_33
                                    int128_t xmm1_28 = eax_33[1]
                                    int128_t xmm2_22 = eax_33[2]
                                    int128_t xmm4_14 = eax_33[4]
                                    int128_t xmm5_8 = eax_33[5]
                                    __builtin_memcpy(&var_100, esi + 0x1014, 0xd4)
                                    esi = var_324
                                    void* var_78_2 = var_314_1
                                    int128_t var_d0_2 = xmm3_27
                                    var_100 = xmm0_92
                                    int128_t var_f0_2 = xmm1_28
                                    int128_t var_e0_2 = xmm2_22
                                    int128_t var_c0_2 = xmm4_14
                                    int128_t var_b0_2 = xmm5_8
                                    sub_4a4280(&var_100, esi, result_4, arg4, &var_100)
                                    result_5 = result_1
                                    eax_3 = var_314_1
                                else
                                    void* var_504_8 = var_314_1
                                    int128_t* eax_25 = sub_49fd90(&var_4f8, var_314_1, esi, &var_4f8)
                                    int32_t* ecx_19 = *(esi + 0xf48)
                                    float xmm0_38[0x4] = *eax_25
                                    int128_t xmm0_39 = eax_25[1]
                                    int128_t xmm0_40 = eax_25[2]
                                    int128_t xmm0_41 = eax_25[3]
                                    int128_t xmm0_42 = eax_25[4]
                                    int128_t xmm0_43 = eax_25[5]
                                    float var_3c0_2
                                    float var_3b0_2
                                    uint32_t var_360_1
                                    float var_330_1
                                    float xmm3_13
                                    
                                    if (ecx_19 == 0)
                                        float var_3e0
                                        sub_498790(result_4 + 0xc, *(data_114e818 + 0x2c), &var_3e0)
                                        float var_3d8
                                        float xmm2_14 = var_3d8 - var_3e0
                                        float xmm0_52 = _mm_shuffle_ps(xmm0_38, xmm0_38, 0xff)
                                        float xmm5_6 = xmm0_38[0]
                                        float xmm0_54 = _mm_shuffle_ps(xmm0_38, xmm0_38, 0x55)
                                        float var_3dc
                                        float var_3d4
                                        xmm3_13 = xmm0_54 + (var_3d4 - var_3dc) * xmm0_52
                                        uint32_t xmm5_7 = xmm5_6 + 0f
                                        float xmm0_55 = xmm0_54 + 0f
                                        float xmm4_10 = xmm0_38 f+ xmm2_14 * xmm0_52
                                        var_330_1 = xmm3_13
                                        var_344 = xmm5_7
                                        var_360_1 = xmm5_7
                                        var_3b0_2 = xmm0_55
                                        float var_35c_2 = xmm0_55
                                        var_3c0_2 = xmm4_10
                                        float var_358_2 = xmm4_10
                                    else
                                        int32_t* var_504_9 = ecx_19
                                        void var_498
                                        float xmm0_44[0x4] =
                                            *sub_49ad10(&var_498, nullptr, ecx_19, &var_498, 0)
                                        float xmm5_4 = _mm_shuffle_ps(xmm0_38, xmm0_38, 0x55)
                                        float xmm2_9 = _mm_shuffle_ps(xmm0_44, xmm0_44, 0xaa)
                                        float xmm1_10 = _mm_shuffle_ps(xmm0_44, xmm0_44, 0xff)
                                            - _mm_shuffle_ps(xmm0_44, xmm0_44, 0x55)
                                        float xmm0_47 = _mm_shuffle_ps(xmm0_38, xmm0_38, 0xff)
                                        float xmm5_5 = xmm5_4 + 0f
                                        xmm3_13 = xmm5_4 + xmm1_10 * xmm0_47
                                        uint32_t xmm1_13 = xmm0_38[0] + 0f
                                        float xmm0_49 = xmm0_38[0] + (xmm2_9 f- xmm0_44) * xmm0_47
                                        var_3b0_2 = xmm5_5
                                        float var_35c_1 = xmm5_5
                                        var_344 = xmm1_13
                                        var_3c0_2 = xmm0_49
                                        float var_358_1 = xmm0_49
                                        var_360_1 = xmm1_13
                                        var_330_1 = xmm3_13
                                    
                                    float var_354_1 = xmm3_13
                                    float var_24
                                    sub_4bc3a0(esi + 0x54c, *(data_114e818 + 0x2c), &var_24)
                                    float xmm1_17[0x4] = data_60cb50
                                    char eax_30 = 0
                                    int32_t ecx_22 = *(esi + 0xe94)
                                    int96_t var_414_1 = xmm1_17[0].12
                                    float xmm2_18
                                    float var_20
                                    float var_1c
                                    float var_18
                                    
                                    if (ecx_22 == 1)
                                        float xmm4_11 = *(esi + 0x10a0)
                                        eax_30 = -1
                                        float xmm2_17 = *(esi + 0x10a4)
                                        float xmm3_16 = *(esi + 0x10a8) - xmm4_11
                                        float xmm1_19 = *(esi + 0x10ac) - xmm2_17
                                        float var_3c8_1 = xmm3_16 * var_1c + xmm4_11
                                        xmm2_18 = var_330_1
                                        float var_3c4_1 = xmm1_19 * var_18 + xmm2_17
                                        float var_3cc_1 = xmm1_19 * var_20 + xmm2_17
                                        xmm1_17 = (xmm3_16 * var_24 + xmm4_11).o
                                        var_414_1 = xmm1_17[0].12
                                    else if (ecx_22 == 3)
                                        float xmm4_12 = *(esi + 0x10a0)
                                        eax_30 = ecx_22.b + 9
                                        float xmm2_19 = *(esi + 0x10a4)
                                        float xmm3_20 = *(esi + 0x10a8) - xmm4_12
                                        float xmm1_23 = *(esi + 0x10ac) - xmm2_19
                                        float var_3f8_1 = xmm3_20 * var_1c + xmm4_12
                                        xmm2_18 = xmm3_13
                                        float var_3f4_1 = xmm1_23 * var_18 + xmm2_19
                                        float var_3fc_1 = xmm1_23 * var_20 + xmm2_19
                                        xmm1_17 = (xmm3_20 * var_24 + xmm4_12).o
                                        var_414_1 = xmm1_17[0].12
                                    else if (ecx_22 != 4)
                                        xmm2_18 = xmm3_13
                                        
                                        if (ecx_22 == 2)
                                            xmm1_17 = data_5d2760
                                            eax_30 = 0
                                            xmm2_18 = xmm3_13
                                            var_414_1 = xmm1_17[0].12
                                    else
                                        float xmm4_13 = *(esi + 0x10a0)
                                        eax_30 = ecx_22.b - 1
                                        float xmm2_20 = *(esi + 0x10a4)
                                        float xmm3_24 = *(esi + 0x10a8) - xmm4_13
                                        float xmm1_27 = *(esi + 0x10ac) - xmm2_20
                                        float var_398_1 = xmm3_24 * var_1c + xmm4_13
                                        float var_39c_1 = var_20 * xmm1_27 + xmm2_20
                                        xmm2_18 = xmm3_13
                                        float var_394_1 = var_18 * xmm1_27 + xmm2_20
                                        xmm1_17 = (xmm3_24 * var_24 + xmm4_13).o
                                        var_414_1 = xmm1_17[0].12
                                    int32_t xmm0_78
                                    
                                    if ((eax_30 & 4) != 0)
                                        xmm0_78 = _mm_shuffle_ps(xmm1_17, xmm1_17, 0x55)
                                    
                                    if ((eax_30 & 4) == 0 || xmm0_78 f<= xmm2_18)
                                        int32_t xmm0_81
                                        
                                        if ((eax_30 & 8) != 0)
                                            xmm0_81 = _mm_shuffle_ps(xmm1_17, xmm1_17, 0xff)
                                        
                                        if ((eax_30 & 8) != 0 && not(var_3b0_2 f<= xmm0_81))
                                            *(result_4 + 0x10a0) = var_360_1.o
                                            result_5 = result_1
                                            eax_3 = var_314_1
                                        else if ((eax_30 & 2) != 0 && not(xmm1_17 f<= var_3c0_2))
                                            *(result_4 + 0x10a0) = var_360_1.o
                                            result_5 = result_1
                                            eax_3 = var_314_1
                                        else if ((eax_30 & 1) == 0 || var_344 f<= var_414_1:8.d)
                                            float var_1d8[0x4]
                                            __builtin_memcpy(&var_1d8, esi + 0x1014, 0xd4)
                                            var_1d8 = xmm0_38
                                            void* var_150_1 = var_314_1
                                            eax_19 = &var_1d8
                                            int128_t var_1c8_1 = xmm0_39
                                            int128_t var_1b8_1 = xmm0_40
                                            int128_t var_1a8_1 = xmm0_41
                                            int128_t var_198_1 = xmm0_42
                                            int128_t var_188_1 = xmm0_43
                                        label_4a1c5b:
                                            esi = var_324
                                            int32_t var_504_6 = 0
                                            sub_4a4280(eax_19, esi, result_4, arg4, eax_19)
                                            result_5 = result_1
                                            eax_3 = var_314_1
                                        else
                                            *(result_4 + 0x10a0) = var_360_1.o
                                            result_5 = result_1
                                            eax_3 = var_314_1
                                    else
                                        *(result_4 + 0x10a0) = var_360_1.o
                                        result_5 = result_1
                                        eax_3 = var_314_1
                            else
                                void* var_504_7 = var_314_1
                                int128_t* eax_21 = sub_49fd90(&var_4f8, var_314_1, esi, &var_4f8)
                                result_5 = result_1
                                int128_t xmm5_2 = *eax_21
                                int128_t xmm0_32 = eax_21[1]
                                int128_t xmm1_5 = eax_21[2]
                                int128_t xmm2_5 = eax_21[3]
                                int128_t xmm3_8 = eax_21[4]
                                int128_t xmm4_4 = eax_21[5]
                                *(result_4 + 0x1014) = xmm5_2
                                *(result_4 + 0x1024) = xmm0_32
                                *(result_4 + 0x1034) = xmm1_5
                                *(result_4 + 0x1044) = xmm2_5
                                *(result_4 + 0x1054) = xmm3_8
                                *(result_4 + 0x1064) = xmm4_4
                                *(result_4 + 0x1094) = *(esi + 0x1094)
                                eax_3 = var_314_1
                                
                                if (*(esi + 0xf48) != 0)
                                    float xmm2_6 = xmm5_2.d
                                    float xmm1_6 = xmm5_2:4.d
                                    float var_3e8_1 =
                                        xmm2_6 + (*(esi + 0xe58) f- *(esi + 0xe50)) f* xmm5_2:0xc.d
                                    float var_3ec_1 = xmm1_6 + 0f
                                    float var_3e4_1 =
                                        xmm1_6 + (*(esi + 0xe5c) f- *(esi + 0xe54)) f* xmm5_2:0xc.d
                                    *(result_4 + 0x10a0) = (xmm2_6 + 0f).o
                        else
                            void* var_504_2 = var_314_1
                            result = sub_49fd90(&var_4f8, var_314_1, esi, &var_4f8)
                            bool cond:4_1 = *(result_4 + 0xe28) != 0
                            float xmm0_2[0x4] = *result
                            int128_t xmm1_1 = *(result + 0x10)
                            int128_t xmm2 = *(result + 0x20)
                            int128_t xmm3_1 = *(result + 0x30)
                            int128_t xmm4_1 = *(result + 0x40)
                            int128_t xmm5_1 = *(result + 0x50)
                            var_350 = xmm3_1
                            var_370 = xmm4_1
                            
                            if (cond:4_1)
                                if (*(esi + 0xf48) == 0)
                                    char const* const var_504_16 = "UI2TableUpdate"
                                    var_508_9 = 0x17a7
                                    ecx_25 = "Halt"
                                    break
                                
                                if (*(esi + 0xe24) != *(result_4 + 0xe24) || *(result_4 + 0xe2c) != 0)
                                    int128_t xmm0_24 = *result
                                    int128_t var_2b0
                                    __builtin_memcpy(&var_2b0, esi + 0x1014, 0xd4)
                                    var_2b0 = xmm0_24
                                    void* var_228_1 = var_314_1
                                    eax_19 = &var_2b0
                                    int128_t var_2a0_1 = *(result + 0x10)
                                    int128_t var_290_1 = *(result + 0x20)
                                    int128_t var_280_1 = *(result + 0x30)
                                    int128_t var_270_1 = *(result + 0x40)
                                    int128_t var_260_1 = *(result + 0x50)
                                    goto label_4a1c5b
                                
                                int32_t ecx_14 = __builtin_memcpy(result_4 + 0x1014, esi + 0x1014, 0xd4)
                                esi = var_324
                                *(result_4 + 0x1014) = xmm0_2
                                int32_t var_504_5 = ecx_14
                                *(result_4 + 0x1024) = xmm1_1
                                *(result_4 + 0x1034) = xmm2
                                *(result_4 + 0x1044) = xmm3_1
                                *(result_4 + 0x1054) = xmm4_1
                                *(result_4 + 0x1064) = xmm5_1
                                *(result_4 + 0x1094) = *(esi + 0x1094)
                                void var_488
                                float xmm0_15[0x4] =
                                    *sub_49ad10(&var_488, nullptr, *(esi + 0xf48), &var_488, 0)
                                float xmm1_3 = _mm_shuffle_ps(xmm0_2, xmm0_2, 0x55)
                                float xmm3_4 = _mm_shuffle_ps(xmm0_15, xmm0_15, 0xaa)
                                float xmm2_3 = _mm_shuffle_ps(xmm0_15, xmm0_15, 0xff)
                                    - _mm_shuffle_ps(xmm0_15, xmm0_15, 0x55)
                                float xmm0_18 = _mm_shuffle_ps(xmm0_2, xmm0_2, 0xff)
                                float xmm0_20 = xmm0_2[0] + 0f
                                float var_388_1 = xmm0_2 f+ (xmm3_4 f- xmm0_15) * xmm0_18
                                float var_38c_1 = xmm1_3 + 0f
                                float var_384 = xmm1_3 + xmm2_3 * xmm0_18
                                *(result_4 + 0x10a0) = xmm0_20.o
                                result_5 = result_1
                                eax_3 = var_314_1
                            else
                                int128_t xmm0_3 = *result
                                __builtin_memcpy(&var_100, esi + 0x1014, 0xd4)
                                esi = var_324
                                var_100 = xmm0_3
                                void* var_78_1 = var_314_1
                                int32_t var_504_3 = 0
                                int128_t var_f0_1 = *(result + 0x10)
                                int128_t var_e0_1 = *(result + 0x20)
                                int128_t var_d0_1 = *(result + 0x30)
                                int128_t var_c0_1 = *(result + 0x40)
                                int128_t var_b0_1 = *(result + 0x50)
                                void* eax_11 = sub_4a4280(&var_100, esi, result_4, arg4, &var_100)
                                *(result_4 + 0x1014) = xmm0_2
                                *(result_4 + 0x1024) = xmm1_1
                                *(result_4 + 0x1034) = xmm2
                                *(result_4 + 0x1044) = var_350
                                *(result_4 + 0x1054) = var_370
                                *(result_4 + 0x1064) = xmm5_1
                                int32_t* ecx_13 = *(esi + 0xf48)
                                
                                if (ecx_13 == 0)
                                    sub_489550(eax_11, &data_5b2591, "Halt", 
                                        "d:\ax\trunk\ax2017\engine\ui2.cpp", 0x178d, "UI2TableUpdate")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_489700()
                                    noreturn
                                
                                int32_t* var_504_4 = ecx_13
                                void var_478
                                sub_49ad10(&var_478, nullptr, ecx_13, &var_478, 0)
                                result_5 = result_1
                                eax_3 = var_314_1
                    else
                        result_5 = result_1
                        eax_3 = var_314_1
                    
                    edi = var_31c
                
                eax_3 += 1
                var_314_1 = eax_3
                
                if (eax_3 s>= result_5)
                    edx_1 = *(esi + 0x1190)
                    goto label_4a238f
            
            goto label_4a257b
        
    label_4a238f:
        result = result_1
        
        if (*(esi + 0xf48) == 0)
            if (edx_1 s< result)
                char const* const var_504_18 = "UI2TableUpdate"
                var_508_9 = 0x182d
                ecx_25 = "ui.numChildren >= count"
            label_4a257b:
                sub_489550(result, &data_5b2591, ecx_25, "d:\ax\trunk\ax2017\engine\ui2.cpp", 
                    var_508_9, "UI2TableUpdate")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            if (result s< 1)
                result = 1
            
            bool cond:1_1 = *(esi + 0x1400) != 0
            *(esi + 0x1190) = result
            
            if (not(cond:1_1))
                *(esi + 0x1190) = 0
                result = 0
        else
            if (edx_1 s< result)
                char const* const var_504_13 = "UI2TableUpdate"
                var_508_9 = 0x1827
                ecx_25 = "ui.numChildren >= count"
                goto label_4a257b
            
            *(esi + 0x1190) = result
        
        uint32_t result_3 = result
        
        if (*(esi + 0xf50) != 0 && result != 0 && *(esi + 0xf58) != 0)
            float xmm1_29[0x4] = *(esi + 0x10a0)
            float var_368_1 = _mm_shuffle_ps(xmm1_29, xmm1_29, 0xaa) f- xmm1_29
            float var_364_2 =
                _mm_shuffle_ps(xmm1_29, xmm1_29, 0xff) - _mm_shuffle_ps(xmm1_29, xmm1_29, 0x55)
            void* eax_36 = sub_49e970(esi, 0)
            int32_t xmm1_31[0x4] = zx.o(*(esi + 0xf28))
            float var_348_1 =
                _mm_cvtepi32_ps(zx.o(*(esi + 0xf24))) * (*(eax_36 + 0x10a8) f- *(eax_36 + 0x10a0))
            var_344 = _mm_cvtepi32_ps(xmm1_31) * (*(eax_36 + 0x10ac) f- *(eax_36 + 0x10a4))
            result = sub_4a0c80(&var_350:8, &var_370:8, esi, arg4, &var_350:8)
            result_3 = *(esi + 0x1190)
        
        if (*(esi + 0x1400) s< result_3)
            char const* const var_504_20 = "UI2TableUpdate"
            var_508_9 = 0x1847
            ecx_25 = "ui.numTotalChildren >= ui.numChildren"
            goto label_4a257b
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
