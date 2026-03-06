// 函数名称: sub_54f4c0
// 虚拟地址: 0x54f4c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

BOOLsub_54f4c0()
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t __saved_ebp
    BOOL eax_1 = __security_cookie ^ &__saved_ebp
    BOOL var_14 = eax_1
    
    if (data_1267878 != 0)
        float var_3c
        float var_38
        
        if ((*(data_114e840 + 0xc) & 1) == 0 || *(data_aca1f0 + 0x18) == 0)
            char* ecx
            
            if (data_1267898 == 0 && data_1267899 == 0 && data_11e705c == 1)
                int16_t eax_35
                eax_35, ecx = GetKeyState(0x11)
                
                if ((0x8000 & eax_35) == 0)
                    int16_t eax_36
                    eax_36, ecx = GetKeyState(0x12)
                    
                    if ((0x8000 & eax_36) == 0)
                        int32_t* eax_37 = sub_4c8c70(data_11e6050)
                        sub_489e40(&var_3c)
                        float xmm0_135 = 1f f/ data_126786c
                        int32_t ecx_35 = data_11e605c
                        float var_38_3 = var_38 * xmm0_135 f+ data_1267874
                        var_3c = xmm0_135 * var_3c f+ data_1267870
                        int32_t eax_38 = sub_54e090(ecx_35)
                        int32_t esi_5 = eax_38 - 1
                        
                        if (eax_38 - 1 s>= 0)
                            int32_t* eax_39 = eax_37
                            int32_t edi_1 = esi_5 * 0x178
                            
                            while (true)
                                void* ecx_37 = *eax_39 + edi_1
                                
                                if (*(ecx_37 + 0x44) == 0 && *(ecx_37 + 0x45) == 0)
                                    if (sub_41f010(ecx_37 + 0x10, &var_3c) != 0)
                                        break
                                    
                                    eax_39 = eax_37
                                
                                edi_1 -= 0x178
                                int32_t temp1_1 = esi_5
                                esi_5 -= 1
                                
                                if (temp1_1 - 1 s< 0)
                                    goto label_55038d
                        
                        if (eax_38 - 1 s< 0 || esi_5 == 0xffffffff)
                        label_55038d:
                            data_11e705c = 0
                            sub_5539f0()
                        else
                            data_11e605c = *(esi_5 * 0x178 + *eax_37)
                        
                        sub_5539f0()
            
            ecx.b = 1
            eax_1 = sub_54dee0(ecx)
            data_1267878 = 0
        else
            if (data_1267898 != 0)
                goto label_54f568
            
            eax_1 = sub_489e40(&var_3c)
            float xmm0_2 = data_1267880 - var_3c
            float xmm1_2 = data_1267884 - var_38
            
            if (not(50f > xmm1_2 * xmm1_2 + xmm0_2 * xmm0_2))
                data_1267898 = 1
            label_54f568:
                int32_t* eax_4 = sub_4c8c70(data_11e6050)
                char ecx_3 = data_11e7062
                float var_68
                
                if ((data_11e7060.b == 0 && data_11e7060:1.b == 0 && ecx_3 == 0)
                        || data_1267894 == 0xffffffff)
                    sub_489e40(&var_68)
                    float xmm4_1 = eax_4
                    
                    if ((0x8000 & GetKeyState(0x10)) == 0)
                        float xmm3_6 = var_68
                        int128_t* eax_8 = data_126787c
                        data_1267890 = 0
                        float xmm3_7 = xmm3_6 f- data_1267888
                        float xmm4_4 = xmm4_1 f- data_126788c
                        
                        if (eax_8 == 0)
                            float xmm1_10 = 1f f/ data_126786c
                            float var_38_2 = xmm1_10 * xmm4_4
                            var_3c = xmm1_10 * xmm3_7
                            eax_8 = sub_54efa0(&var_3c)
                        else if (eax_8 != 2)
                            float xmm2_5 = 1f f/ data_126786c
                            data_1267870 = data_1267870 - xmm2_5 * xmm3_7
                            data_1267874 = data_1267874 - xmm2_5 * xmm4_4
                        
                        data_1267888 = var_68
                        data_126788c = eax_4
                        @__security_check_cookie@4(var_14 ^ &__saved_ebp)
                        return eax_8
                    
                    float xmm3_2 = data_1267884 f- data_126788c
                    float xmm7_1 = data_1267880
                    float xmm4_2 = xmm4_1 f- data_1267884
                    int32_t eax_6 = data_1267890
                    float xmm2_2 = xmm7_1 f- data_1267888
                    float var_40_1 = xmm4_2
                    float xmm3_4 = var_68 - xmm7_1
                    float var_34_1 = xmm3_4
                    
                    if (eax_6 == 0)
                        int32_t xmm0_5 = sub_426e40(xmm3_4)
                        
                        if (sub_426e40(xmm4_2) f<= xmm0_5)
                            xmm4_2 = (zx.o(0)).d
                            data_1267890 = 1
                            var_40_1 = 0f
                        else
                            data_1267890 = 2
                            xmm3_4 = (zx.o(0)).d
                            var_34_1 = 0f
                    else if (eax_6 == 1)
                        xmm4_2 = (zx.o(0)).d
                        var_40_1 = 0f
                    else if (eax_6 == 2)
                        xmm3_4 = (zx.o(0)).d
                        var_34_1 = 0f
                    
                    int128_t* eax_7 = data_126787c
                    float xmm5_2 = xmm3_4 + xmm2_2
                    float xmm6_2 = xmm4_2 + xmm3_2
                    
                    if (eax_7 == 0)
                        float xmm1_6 = 1f f/ data_126786c
                        float var_38_1 = xmm1_6 * xmm6_2
                        var_3c = xmm1_6 * xmm5_2
                        eax_7 = sub_54efa0(&var_3c)
                        xmm7_1 = data_1267880
                        xmm3_4 = var_34_1
                        xmm4_2 = var_40_1
                    else if (eax_7 != 2)
                        float xmm2_3 = 1f f/ data_126786c
                        data_1267870 = data_1267870 - xmm2_3 * xmm5_2
                        data_1267874 = data_1267874 - xmm2_3 * xmm6_2
                    
                    data_126788c = xmm4_2 f+ data_1267884
                    data_1267888 = xmm3_4 + xmm7_1
                    @__security_check_cookie@4(var_14 ^ &__saved_ebp)
                    return eax_7
                
                float var_30[0x4] = data_126789c
                
                if (ecx_3 != 0 && (0x8000 & GetKeyState(0x11)) != 0)
                    var_30 = data_12678ac
                
                int32_t* eax_21 = data_1267894
                int32_t var_a8
                char const* const ecx_19
                
                if (eax_21 u> 7)
                    char const* const var_a4_10 = "DraggingUpdate"
                    var_a8 = 0x367
                    ecx_19 = "Halt"
                else
                    int32_t xmm1_14 = 0x3f800000
                    float var_4c_1
                    float var_44_1
                    int32_t xmm0_24
                    
                    switch (eax_21)
                        case nullptr
                            float eax_10
                            float edx_1
                            eax_10, edx_1 = sub_4be890(&var_30)
                            var_3c = eax_10
                            var_44_1 = var_3c
                            var_38 = edx_1
                            var_4c_1 = var_38
                            xmm0_24 = 0xbf800000
                            xmm1_14 = -0x40800000
                        case 1
                            float eax_11
                            float edx_2
                            eax_11, edx_2 = sub_4be890(&var_30)
                            xmm1_14 = 0x80000000
                            var_3c = eax_11
                            var_44_1 = var_3c
                            var_38 = edx_2
                            var_4c_1 = var_38
                            xmm0_24 = 0xbf800000
                        case 2
                            var_44_1 = var_30[2]
                            var_4c_1 = var_30[1]
                            xmm0_24 = 0xbf800000
                        case 3
                            float eax_12
                            float edx_3
                            eax_12, edx_3 = sub_4be890(&var_30)
                            xmm1_14 = 0xbf800000
                            var_3c = eax_12
                            var_44_1 = var_3c
                            var_38 = edx_3
                            var_4c_1 = var_38
                            xmm0_24 = 0x80000000
                        case 4
                            float eax_13
                            float edx_4
                            eax_13, edx_4 = sub_426dd0(&var_30)
                            xmm1_14 = 0x3f800000
                            var_3c = eax_13
                            var_44_1 = var_3c
                            var_38 = edx_4
                            var_4c_1 = var_38
                            xmm0_24 = (zx.o(0)).d
                        case 5
                            var_44_1 = var_30[0]
                            var_4c_1 = var_30[3]
                            xmm0_24 = 0x3f800000
                            xmm1_14 = 0xbf800000
                        case 6
                            float eax_14
                            float edx_5
                            eax_14, edx_5 = sub_426dd0(&var_30)
                            var_3c = eax_14
                            xmm1_14 = (zx.o(0)).d
                            var_44_1 = var_3c
                            var_38 = edx_5
                            var_4c_1 = var_38
                            xmm0_24 = 0x3f800000
                        case 7
                            float eax_15
                            float edx_6
                            eax_15, edx_6 = sub_426dd0(&var_30)
                            xmm1_14 = 0x3f800000
                            var_3c = eax_15
                            var_44_1 = var_3c
                            var_38 = edx_6
                            var_4c_1 = var_38
                            xmm0_24 = 0x3f800000
                    
                    float var_48_2 = xmm1_14
                    float var_50_1 = xmm0_24
                    float var_34_2 = xmm0_24
                    
                    if ((0x8000 & GetKeyState(0x12)) != 0)
                        var_50_1 = var_34_2 + var_34_2
                        float xmm0_41 = xmm1_14
                        var_44_1 = (var_30[0] + var_30[2]) * 0.5f
                        var_48_2 = xmm0_41 + xmm0_41
                        var_4c_1 = (var_30[3] + var_30[1]) * 0.5f
                    
                    sub_489e40(&var_3c)
                    int16_t eax_17
                    int32_t edx_7
                    eax_17, edx_7 = GetKeyState(0x10)
                    int32_t eax_18
                    
                    if ((0x8000 & eax_17) != 0)
                        eax_18 = data_1267894
                    
                    int128_t var_80
                    float xmm1_28
                    float xmm4_8
                    
                    if ((0x8000 & eax_17) != 0
                            && (eax_18 == 0 || eax_18 == 2 || eax_18 == 5 || eax_18 == 7))
                        float xmm3_12 = (var_44_1 f- data_1267870) f* data_126786c
                        float xmm4_7 = (var_4c_1 f- data_1267874) f* data_126786c
                        float xmm1_22 = data_1267880 - xmm3_12
                        float xmm2_8 = var_3c - xmm3_12
                        float xmm0_44 = var_38 - xmm4_7
                        float xmm1_24 = data_1267884 - xmm4_7
                        float xmm0_47 = sub_41dbe0(xmm0_44 * xmm0_44 + xmm2_8 * xmm2_8)
                        float xmm0_51
                        edx_7, xmm0_51 = sub_41dbe0(xmm1_24 * xmm1_24 + xmm1_22 * xmm1_22)
                        xmm1_28 = xmm0_47 / xmm0_51
                        xmm4_8 = xmm1_28
                    else
                        float xmm0_53 = var_3c f- data_1267880
                        float xmm0_55 = var_38 f- data_1267884
                        float xmm1_29[0x4] = *sub_54de10(&var_80, edx_7, &var_30, &var_80)
                        xmm1_28 =
                            xmm0_53 / (_mm_shuffle_ps(xmm1_29, xmm1_29, 0xaa) f- xmm1_29) * var_50_1
                            + 1f
                        xmm4_8 = xmm0_55 / (_mm_shuffle_ps(xmm1_29, xmm1_29, 0xff)
                            - _mm_shuffle_ps(xmm1_29, xmm1_29, 0x55)) * var_48_2 + 1f
                    
                    eax_21 = data_126787c
                    void var_90
                    
                    if (eax_21 != 0)
                        if (eax_21 == 2)
                            float xmm0_125 = (data_12678bc - var_44_1) * xmm1_28
                            float xmm5_22 = (data_12678c4 - var_44_1) * xmm1_28
                            float xmm6_16 = (data_12678c8 - var_4c_1) * xmm4_8
                            float xmm7_18 = (data_12678c0 - var_4c_1) * xmm4_8
                            float xmm0_128
                            
                            if (var_44_1 + xmm5_22 <= var_44_1 + xmm0_125)
                                xmm0_128 = xmm5_22
                                xmm5_22 = xmm0_125
                            else
                                xmm0_128 = xmm0_125
                            
                            float xmm4_44
                            
                            if (var_4c_1 + xmm6_16 <= var_4c_1 + xmm7_18)
                                xmm4_44 = xmm6_16
                                xmm6_16 = xmm7_18
                            else
                                xmm4_44 = xmm7_18
                            
                            var_30[0] = var_44_1 + xmm0_128
                            var_30[2] = var_44_1 + xmm5_22
                            var_30[1] = var_4c_1 + xmm4_44
                            var_30[3] = var_4c_1 + xmm6_16
                            eax_21 = eax_4
                            *(eax_21 + 0xc) = *sub_4be600(&var_90, edx_7, &var_30, &var_90)
                        
                    label_550280:
                        data_1267888 = var_3c
                        data_126788c = var_38
                        @__security_check_cookie@4(var_14 ^ &__saved_ebp)
                        return eax_21
                    
                    float var_70
                    
                    if (data_11e7062 == eax_21.b)
                    label_54ff81:
                        int32_t i = 0
                        
                        if (data_11e705c s> 0)
                            int32_t* esi_3 = &data_12678c0
                            
                            do
                                void* eax_31
                                int32_t edx_12
                                eax_31, edx_12 = sub_54e110((&data_11e605c)[i], nullptr)
                                float xmm6_11 = (*esi_3 - var_4c_1) * xmm4_8
                                float xmm7_10 = (esi_3[2] f- var_4c_1) * xmm4_8
                                float xmm5_18 = (esi_3[-1] f- var_44_1) * xmm1_28
                                float xmm4_35 = (esi_3[1] f- var_44_1) * xmm1_28
                                float xmm0_105
                                
                                if (var_44_1 + xmm4_35 <= var_44_1 + xmm5_18)
                                    xmm0_105 = xmm4_35
                                    xmm4_35 = xmm5_18
                                else
                                    xmm0_105 = xmm5_18
                                
                                float xmm4_36
                                
                                if (var_4c_1 + xmm7_10 <= var_4c_1 + xmm6_11)
                                    xmm4_36 = xmm7_10
                                    xmm7_10 = xmm6_11
                                else
                                    xmm4_36 = xmm6_11
                                
                                var_30[0] = var_44_1 + xmm0_105
                                var_30[2] = var_44_1 + xmm4_35
                                var_30[1] = var_4c_1 + xmm4_36
                                var_30[3] = var_4c_1 + xmm7_10
                                eax_21 = sub_4be600(&var_90, edx_12, &var_30, &var_90)
                                i += 1
                                esi_3 = &esi_3[4]
                                float xmm0_111[0x4] = *eax_21
                                float xmm4_37 = *(eax_31 + 0xa0)
                                float xmm3_23 = *(eax_31 + 0x98)
                                float xmm7_12 = _mm_shuffle_ps(xmm0_111, xmm0_111, 0xaa)
                                float xmm6_12 = *(eax_31 + 0xa4)
                                float xmm5_19 = *(eax_31 + 0x9c)
                                float xmm7_13 = xmm7_12 f- *eax_21
                                float xmm0_116[0x4] = *eax_21
                                float xmm2_37 = (xmm0_111[0] * xmm4_37 - xmm7_12 * xmm3_23)
                                    / ((1f - xmm3_23) * xmm4_37 - (1f - xmm4_37) * xmm3_23)
                                float xmm3_25 = _mm_shuffle_ps(xmm0_116, xmm0_116, 0xff)
                                float xmm2_39 = _mm_shuffle_ps(xmm0_116, xmm0_116, 0x55)
                                float xmm4_41 = (xmm2_39 * xmm6_12 - xmm3_25 * xmm5_19)
                                    / ((1f - xmm5_19) * xmm6_12 - (1f - xmm6_12) * xmm5_19)
                                float xmm1_62 = *(eax_31 + 0xa0) f- *(eax_31 + 0x98)
                                var_70 = xmm2_37
                                float var_6c_1 = xmm4_41
                                float var_64_1 = (xmm3_25 - xmm2_39) / (xmm6_12 - xmm5_19) + xmm4_41
                                var_68 = xmm7_13 / xmm1_62 + xmm2_37
                                *(eax_31 + 0x10) = var_70.o
                            while (i s< data_11e705c)
                        
                        goto label_550280
                    
                    eax_21 = GetKeyState(0x11)
                    
                    if ((0x8000 & eax_21.w) != 0)
                        if (data_11e7062 == 0)
                            goto label_54ff81
                        
                        eax_21 = GetKeyState(0x11)
                        
                        if ((0x8000 & eax_21.w) == 0)
                            goto label_54ff81
                        
                        if (data_11e705c == 1)
                            void* eax_26
                            int32_t edx_9
                            eax_26, edx_9 = sub_54e110(data_11e605c, nullptr)
                            float xmm6_8 = (data_12678ac:4 f- var_4c_1) * xmm4_8
                            float xmm5_12 = (data_12678ac:0xc f- var_4c_1) * xmm4_8
                            float xmm7_7 = (data_12678ac.d - var_44_1) * xmm1_28
                            float xmm4_19 = (data_12678ac:8 f- var_44_1) * xmm1_28
                            float xmm0_86
                            
                            if (xmm4_19 + var_44_1 <= xmm7_7 + var_44_1)
                                xmm0_86 = xmm4_19
                                xmm4_19 = xmm7_7
                            else
                                xmm0_86 = xmm7_7
                            
                            float xmm4_20
                            
                            if (xmm5_12 + var_4c_1 <= xmm6_8 + var_4c_1)
                                xmm4_20 = xmm5_12
                                xmm5_12 = xmm6_8
                            else
                                xmm4_20 = xmm6_8
                            
                            var_30[0] = var_44_1 + xmm0_86
                            var_30[2] = var_44_1 + xmm4_19
                            var_30[1] = var_4c_1 + xmm4_20
                            var_30[3] = var_4c_1 + xmm5_12
                            int128_t* eax_28 = sub_4be600(&var_80, edx_9, &var_30, &var_80)
                            float xmm1_44 = *(eax_26 + 0x10)
                            float xmm4_21 = *(eax_26 + 0xa0)
                            float xmm3_18 = *(eax_26 + 0x9c)
                            int128_t xmm0_90 = *eax_28
                            float xmm5_13 = *(eax_26 + 0xa4)
                            var_80 = xmm0_90
                            var_70.o = xmm0_90
                            float xmm0_92 = *(eax_26 + 0x18) - xmm1_44
                            float xmm4_23 = xmm4_21 * xmm0_92 + xmm1_44
                            float xmm2_27 = xmm0_92 f* *(eax_26 + 0x98) + xmm1_44
                            float xmm1_45 = *(eax_26 + 0x14)
                            float xmm0_94 = *(eax_26 + 0x1c) - xmm1_45
                            var_30[2] = xmm4_23
                            float xmm3_20 = xmm3_18 * xmm0_94 + xmm1_45
                            var_30[0] = xmm2_27
                            float xmm5_15 = xmm5_13 * xmm0_94 + xmm1_45
                            var_30[1] = xmm3_20
                            var_30[3] = xmm5_15
                            var_30 = *sub_497840(&var_90, &var_30, &var_70, &var_90)
                            eax_21 = sub_41f090(&var_30, &var_70)
                            
                            if (eax_21.b != 0)
                                *(eax_26 + 0x10) = var_80
                            
                            float xmm3_21 = *(eax_26 + 0x10)
                            float xmm1_47 = *(eax_26 + 0x18) - xmm3_21
                            float xmm2_28 = *(eax_26 + 0x14)
                            float xmm0_98 = *(eax_26 + 0x1c) - xmm2_28
                            var_30[0] = (xmm2_27 - xmm3_21) / xmm1_47
                            var_30[1] = (xmm3_20 - xmm2_28) / xmm0_98
                            var_30[2] = (xmm4_23 - xmm3_21) / xmm1_47
                            var_30[3] = (xmm5_15 - xmm2_28) / xmm0_98
                            *(eax_26 + 0x98) = var_30
                            goto label_550280
                        
                        char const* const var_a4_5 = "DraggingUpdate"
                        var_a8 = 0x392
                        ecx_19 = "gUI.s.activeSetCount == 1"
                    else
                        if (data_11e705c == 1)
                            void* eax_22
                            int32_t edx_8
                            eax_22, edx_8 = sub_54e110(data_11e605c, nullptr)
                            float xmm6_5 = (data_12678c0 - var_4c_1) * xmm4_8
                            float xmm5_5 = (data_12678c8 - var_4c_1) * xmm4_8
                            float xmm7_4 = (data_12678bc - var_44_1) * xmm1_28
                            float xmm4_14 = (data_12678c4 - var_44_1) * xmm1_28
                            float xmm0_64
                            
                            if (var_44_1 + xmm4_14 <= var_44_1 + xmm7_4)
                                xmm0_64 = xmm4_14
                                xmm4_14 = xmm7_4
                            else
                                xmm0_64 = xmm7_4
                            
                            float xmm4_15
                            
                            if (var_4c_1 + xmm5_5 <= var_4c_1 + xmm6_5)
                                xmm4_15 = xmm5_5
                                xmm5_5 = xmm6_5
                            else
                                xmm4_15 = xmm6_5
                            
                            var_30[0] = var_44_1 + xmm0_64
                            var_30[2] = var_44_1 + xmm4_14
                            var_30[1] = var_4c_1 + xmm4_15
                            var_30[3] = var_4c_1 + xmm5_5
                            int128_t* eax_24 = sub_4be600(&var_80, edx_8, &var_30, &var_80)
                            float xmm3_15 = *(eax_22 + 0x10)
                            float xmm1_39 = *(eax_22 + 0x18) - xmm3_15
                            float xmm4_16 = *(eax_22 + 0x14)
                            float xmm5_6[0x4] = *eax_24
                            float xmm2_19 = *(eax_22 + 0x1c) - xmm4_16
                            var_30[0] = (xmm5_6[0] - xmm3_15) / xmm1_39
                            var_30[1] = (_mm_shuffle_ps(xmm5_6, xmm5_6, 0x55) - xmm4_16) / xmm2_19
                            float xmm0_76 = _mm_shuffle_ps(xmm5_6, xmm5_6, 0xaa)
                            float xmm5_9 = (_mm_shuffle_ps(xmm5_6, xmm5_6, 0xff) - xmm4_16) / xmm2_19
                            var_30[2] = (xmm0_76 - xmm3_15) / xmm1_39
                            var_30[3] = xmm5_9
                            *(eax_22 + 0x98) = var_30
                            eax_21 = sub_4be720(&var_80, &data_5d2760, eax_22 + 0x98, &var_80)
                            *(eax_22 + 0x98) = *eax_21
                            goto label_550280
                        
                        char const* const var_a4_2 = "DraggingUpdate"
                        var_a8 = 0x389
                        ecx_19 = "gUI.s.activeSetCount == 1"
                
                sub_489550(eax_21, &data_5b2591, ecx_19, 
                    "d:\ax\trunk\ax2017\engine\editor\uieditor.cpp", var_a8, "DraggingUpdate")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
    
    @__security_check_cookie@4(var_14 ^ &__saved_ebp)
    return eax_1
}
