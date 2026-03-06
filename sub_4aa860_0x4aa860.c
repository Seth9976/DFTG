// 函数名称: sub_4aa860
// 虚拟地址: 0x4aa860
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

BOOLsub_4aa860()
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t __saved_ebp
    BOOL i = __security_cookie ^ &__saved_ebp
    BOOL i_2 = i
    int32_t esi
    int32_t var_12c = esi
    
    if (data_6c4470 != 0)
        if ((*(data_114e840 + 0xc) & 1) == 0 || *(data_aca1f0 + 0x18) == 0)
            if (data_6c4474 != 1 && data_6c4490 == 1)
                sub_4a7e20(1)
            
            i = sub_4892e0("dragginf false")
            data_6c4470 = 0
        else
            if (data_6c4490 != 0)
                goto label_4aa91b
            
            float var_b8
            i = sub_489e40(&var_b8)
            float xmm0_2 = data_6c4478 - var_b8
            float i_1
            float xmm1_2 = data_6c447c - i_1
            
            if (not(50f > xmm1_2 * xmm1_2 + xmm0_2 * xmm0_2))
                data_6c4490 = 1
            label_4aa91b:
                
                if (data_64365c.b == 0 && data_64365c:1.b == 0)
                    if (data_64365e == 0 || data_6c448c == 0xffffffff)
                        goto label_4ab74e
                    
                    goto label_4aa937
                
                int32_t var_138
                int128_t var_30
                int32_t eax_17
                
                if (data_6c448c == 0xffffffff)
                label_4ab74e:
                    sub_489e40(&var_b8)
                    
                    if (sub_4a7950() == 0)
                        float xmm1_72 = var_b8
                        float i_10 = i_1
                        eax_17 = data_6c4474
                        data_6c4488 = 0
                        float xmm1_73 = xmm1_72 f- data_6c4480
                        float xmm2_64 = i_10 f- data_6c4484
                        
                        if (eax_17 != 0)
                            if (eax_17 == 2)
                                char const* const var_134_26 = "UI2DraggingUpdate"
                                var_138 = 0x2551
                            label_4abb24:
                                sub_489550(eax_17, &data_5b2591, "Halt", 
                                    "d:\ax\trunk\ax2017\engine\ui2.cpp", var_138, "UI2DraggingUpdate")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_489700()
                                noreturn
                            
                            float xmm0_125 = 1f f/ data_642644
                            data_642648 = data_642648 - xmm1_73 * xmm0_125
                            data_64264c = data_64264c - xmm2_64 * xmm0_125
                            data_6c4480 = var_b8
                            data_6c4484 = i_1
                        else
                            float xmm0_124 = 1f f/ data_642644
                            var_30:8.d = xmm1_73 * xmm0_124
                            var_30:0xc.d = xmm2_64 * xmm0_124
                            sub_4a9fc0(esi)
                            data_6c4480 = var_b8
                            data_6c4484 = i_1
                    else
                        float xmm5_22 = data_6c4478
                        float xmm6_23 = data_6c447c
                        float xmm2_62 = var_b8 - xmm5_22
                        int32_t eax_48 = data_6c4488
                        float xmm3_24 = i_1 - xmm6_23
                        float xmm4_39 = xmm5_22 f- data_6c4480
                        float xmm7_17 = xmm6_23 f- data_6c4484
                        float var_d0_4 = xmm2_62
                        float var_c8_5 = xmm3_24
                        
                        if (eax_48 == 0)
                            int32_t xmm0_115 = sub_426e40(xmm2_62)
                            
                            if (sub_426e40(xmm3_24) f<= xmm0_115)
                                xmm3_24 = (zx.o(0)).d
                                data_6c4488 = 1
                                var_c8_5 = 0f
                            else
                                data_6c4488 = 2
                                xmm2_62 = (zx.o(0)).d
                                var_d0_4 = 0f
                        else if (eax_48 == 1)
                            xmm3_24 = (zx.o(0)).d
                            var_c8_5 = 0f
                        else if (eax_48 == 2)
                            xmm2_62 = (zx.o(0)).d
                            var_d0_4 = 0f
                        
                        eax_17 = data_6c4474
                        float xmm1_69 = xmm2_62 + xmm4_39
                        float xmm4_41 = xmm3_24 + xmm7_17
                        
                        if (eax_17 != 0)
                            if (eax_17 == 2)
                                char const* const var_134_21 = "UI2DraggingUpdate"
                                var_138 = 0x253e
                                goto label_4abb24
                            
                            float xmm0_119 = 1f f/ data_642644
                            data_642648 = data_642648 - xmm1_69 * xmm0_119
                            data_64264c = data_64264c - xmm4_41 * xmm0_119
                            data_6c4480 = xmm2_62 + xmm5_22
                            data_6c4484 = xmm3_24 + xmm6_23
                        else
                            float xmm0_118 = 1f f/ data_642644
                            var_b8 = xmm1_69 * xmm0_118
                            i_1 = xmm4_41 * xmm0_118
                            sub_4a9fc0(esi)
                            xmm6_23 = data_6c447c
                            data_6c4480 = var_d0_4 + data_6c4478
                            data_6c4484 = var_c8_5 + xmm6_23
                else
                label_4aa937:
                    char eax_3 = sub_4aa820()
                    
                    if (eax_3 != 0)
                        goto label_4ab74e
                    
                    var_30 = data_6c4494
                    
                    if (data_64365e != eax_3 && sub_4a79d0() != 0)
                        var_30 = data_6c44a4
                    
                    eax_17 = data_6c448c
                    
                    if (eax_17 u> 7)
                        char const* const var_134_20 = "UI2DraggingUpdate"
                        var_138 = 0x2589
                        goto label_4abb24
                    
                    int32_t xmm0_6 = 0x3f800000
                    float i_3
                    float var_c0_1
                    int32_t xmm1_5
                    
                    switch (eax_17)
                        case 0
                            float eax_5
                            float i_4
                            eax_5, i_4 = sub_4be890(&var_30)
                            xmm1_5 = 0xbf800000
                            var_b8 = eax_5
                            var_c0_1 = var_b8
                            i_1 = i_4
                            i_3 = i_1
                            xmm0_6 = -0x40800000
                        case 1
                            float eax_6
                            float i_5
                            eax_6, i_5 = sub_4be890(&var_30)
                            xmm1_5 = 0xbf800000
                            var_b8 = eax_6
                            var_c0_1 = var_b8
                            i_1 = i_5
                            i_3 = i_1
                            xmm0_6 = 0x80000000
                        case 2
                            var_c0_1 = var_30:8.d
                            i_3 = var_30:4.d
                            xmm1_5 = 0xbf800000
                        case 3
                            float eax_7
                            float i_6
                            eax_7, i_6 = sub_4be890(&var_30)
                            xmm1_5 = 0x80000000
                            var_b8 = eax_7
                            var_c0_1 = var_b8
                            i_1 = i_6
                            i_3 = i_1
                            xmm0_6 = 0xbf800000
                        case 4
                            float eax_8
                            float i_7
                            eax_8, i_7 = sub_426dd0(&var_30)
                            var_b8 = eax_8
                            xmm1_5 = (zx.o(0)).d
                            var_c0_1 = var_b8
                            i_1 = i_7
                            i_3 = i_1
                            xmm0_6 = 0x3f800000
                        case 5
                            var_c0_1 = var_30.d
                            i_3 = var_30:0xc.d
                            xmm1_5 = 0x3f800000
                            xmm0_6 = 0xbf800000
                        case 6
                            float eax_9
                            float i_8
                            eax_9, i_8 = sub_426dd0(&var_30)
                            xmm1_5 = 0x3f800000
                            var_b8 = eax_9
                            var_c0_1 = var_b8
                            i_1 = i_8
                            i_3 = i_1
                            xmm0_6 = (zx.o(0)).d
                        case 7
                            float eax_10
                            float i_9
                            eax_10, i_9 = sub_426dd0(&var_30)
                            var_b8 = eax_10
                            var_c0_1 = var_b8
                            i_1 = i_9
                            i_3 = i_1
                            xmm0_6 = 0x3f800000
                            xmm1_5 = 0x3f800000
                    
                    float var_bc_1 = xmm0_6
                    float var_c4_1 = xmm1_5
                    float var_d4_1 = xmm0_6
                    
                    if (sub_4a7990() != 0)
                        float xmm0_19 = xmm1_5
                        var_c4_1 = xmm0_19 + xmm0_19
                        var_c0_1 = (var_30.d f+ var_30:8.d) * 0.5f
                        var_bc_1 = var_d4_1 + var_d4_1
                        i_3 = (var_30:0xc.d f+ var_30:4.d) * 0.5f
                    
                    sub_489e40(&var_b8)
                    char eax_12
                    int32_t edx_1
                    eax_12, edx_1 = sub_4a7950()
                    int32_t eax_13
                    
                    if (eax_12 != 0)
                        eax_13 = data_6c448c
                    
                    float var_d0_1
                    float var_50
                    float xmm1_23
                    
                    if (eax_12 != 0 && (eax_13 == 0 || eax_13 == 2 || eax_13 == 5 || eax_13 == 7))
                        float xmm3_3 = (var_c0_1 f- data_642648) f* data_642644
                        float xmm4_3 = (i_3 f- data_64264c) f* data_642644
                        float xmm1_17 = data_6c4478 - xmm3_3
                        float xmm2_2 = var_b8 - xmm3_3
                        float xmm0_24 = i_1 - xmm4_3
                        float xmm1_19 = data_6c447c - xmm4_3
                        xmm1_23 = sub_41dbe0(xmm0_24 * xmm0_24 + xmm2_2 * xmm2_2)
                            / sub_41dbe0(xmm1_19 * xmm1_19 + xmm1_17 * xmm1_17)
                        var_d0_1 = xmm1_23
                    else
                        float xmm0_33 = var_b8 f- data_6c4478
                        float xmm0_35 = i_1 f- data_6c447c
                        float xmm1_24[0x4] = *sub_4aa750(&var_50, edx_1, &var_30, &var_50)
                        xmm1_23 =
                            xmm0_33 / (_mm_shuffle_ps(xmm1_24, xmm1_24, 0xaa) f- xmm1_24) * var_c4_1
                            + 1f
                        var_d0_1 = xmm0_35 / (_mm_shuffle_ps(xmm1_24, xmm1_24, 0xff)
                            - _mm_shuffle_ps(xmm1_24, xmm1_24, 0x55)) * var_bc_1 + 1f
                    
                    float xmm0_39 = *(data_114e818 + 0x2c)
                    eax_17 = data_6c4474
                    
                    if (eax_17 != 0)
                        if (eax_17 == 2)
                            char const* const var_134_19 = "UI2DraggingUpdate"
                            var_138 = 0x2640
                            goto label_4abb24
                        
                        data_6c4480 = var_b8
                        data_6c4484 = i_1
                    else
                        float var_70
                        float var_60
                        float var_40
                        
                        if (data_64365e == eax_17.b)
                        label_4ab239:
                            int32_t eax_37 = 0
                            int32_t var_d4_6 = 0
                            
                            if (data_643654 s> 0)
                                int32_t* edi_2 = &data_6c44b8
                                int32_t* var_d8_6 = &data_6c44b8
                                
                                while (true)
                                    char* esi_3 = sub_4a7d60((&data_642654)[eax_37])
                                    var_30:0xc.d = esi_3
                                    int32_t edx_6 = sub_498790(&esi_3[0xc], xmm0_39, &var_50)
                                    float xmm7_9 = (*edi_2 - i_3) * var_d0_1
                                    float xmm5_16 = (edi_2[2] f- i_3) * var_d0_1
                                    float xmm6_9 = (edi_2[-1] f- var_c0_1) * xmm1_23
                                    float xmm4_27 = (edi_2[1] f- var_c0_1) * xmm1_23
                                    float xmm0_86
                                    
                                    if (xmm4_27 + var_c0_1 <= xmm6_9 + var_c0_1)
                                        xmm0_86 = xmm4_27
                                        xmm4_27 = xmm6_9
                                    else
                                        xmm0_86 = xmm6_9
                                    
                                    float xmm4_28
                                    
                                    if (xmm5_16 + i_3 <= xmm7_9 + i_3)
                                        xmm4_28 = xmm5_16
                                        xmm5_16 = xmm7_9
                                    else
                                        xmm4_28 = xmm7_9
                                    
                                    var_60 = var_c0_1 + xmm0_86
                                    float var_58_2 = var_c0_1 + xmm4_27
                                    float var_5c_2 = i_3 + xmm4_28
                                    float var_54_2 = i_3 + xmm5_16
                                    void var_120
                                    int128_t* eax_40 = sub_4be600(&var_120, edx_6, &var_60, &var_120)
                                    bool cond:3_1 = *(esi_3 + 0xfec) != 6
                                    float xmm0_92[0x4] = *eax_40
                                    float var_100_1 = xmm0_92[0]
                                    float xmm1_47 = xmm0_92[0] - var_50
                                    float xmm1_49 = _mm_shuffle_ps(xmm0_92, xmm0_92, 0x55)
                                    int32_t* eax_44
                                    
                                    if (cond:3_1)
                                        void var_b0
                                        int128_t* eax_45 = sub_4bc3a0(&esi_3[0x54c], xmm0_39, &var_b0)
                                        float xmm6_19 = xmm0_92[2]
                                        float xmm3_21 = *(eax_45 + 8)
                                        float xmm7_15 = *eax_45
                                        float xmm5_20 = *(eax_45 + 0xc)
                                        float xmm3_22 = *(eax_45 + 4)
                                        eax_44 = &var_70
                                        var_30:0xc.d = (xmm3_21 * var_100_1 - xmm6_19 * xmm7_15)
                                            / ((1f - xmm7_15) * xmm3_21 - (1f - xmm3_21) * xmm7_15)
                                        float xmm2_57 = xmm0_92[3]
                                        float xmm0_113 = var_30:0xc.d
                                        float xmm4_37 = (xmm5_20 * xmm1_49 - xmm2_57 * xmm3_22)
                                            / ((1f - xmm3_22) * xmm5_20 - (1f - xmm5_20) * xmm3_22)
                                        var_70 = xmm0_113
                                        float var_6c_1 = xmm4_37
                                        float var_64_1 =
                                            (xmm2_57 - xmm1_49) / (xmm5_20 - xmm3_22) + xmm4_37
                                        float var_68_1 =
                                            (xmm6_19 - var_100_1) / (xmm3_21 - xmm7_15) + xmm0_113
                                    else
                                        int32_t var_c4_3 = 0
                                        
                                        if (*(esi_3 + 0x1190) s> 0)
                                            void* edi_3 = &esi_3[0x1194]
                                            
                                            while (true)
                                                int32_t eax_41 = *edi_3
                                                int32_t var_138_1
                                                char const* const ecx_41
                                                
                                                if (eax_41 == 0)
                                                    char const* const var_134_25 =
                                                        "DataArray<struct UI2>::DataArrayGet"
                                                    var_138_1 = 0x6c
                                                    ecx_41 = "id != DATAID_NULL"
                                                else
                                                    uint32_t ecx_26 = zx.d(eax_41.w)
                                                    
                                                    if (ecx_26 u< data_63e5ac)
                                                        void* edx_7 = data_63e5a8
                                                        int32_t ecx_27 = ecx_26 * 0x1418
                                                        
                                                        if (*(edx_7 + ecx_27 + 0x1410) == eax_41)
                                                            char* esi_4 = edx_7 + ecx_27
                                                            sub_498790(&esi_4[0xc], xmm0_39, &var_40)
                                                            float xmm4_29 = var_40
                                                            float xmm7_11 = xmm4_29 - xmm1_47
                                                            float var_4c
                                                            float var_3c
                                                            float xmm3_16 = var_3c - (xmm1_49 - var_4c)
                                                            float var_80 = xmm7_11 - xmm4_29 + xmm4_29
                                                            float var_7c_1 = xmm3_16 - var_3c + var_3c
                                                            float var_38
                                                            float var_78_1 = var_38 - xmm4_29 + xmm7_11
                                                                - var_38 + var_38
                                                            float var_34
                                                            float var_74_1 = var_34 - var_3c + xmm3_16
                                                                - var_34 + var_34
                                                            sub_4a9f50(&var_80, 0x75, esi_4, &var_80)
                                                            esi_3 = var_30:0xc.d
                                                            int32_t ecx_31 = var_c4_3 + 1
                                                            edi_3 += 4
                                                            var_c4_3 = ecx_31
                                                            
                                                            if (ecx_31 s< *(esi_3 + 0x1190))
                                                                continue
                                                            
                                                            edi_2 = var_d8_6
                                                            break
                                                    
                                                    char const* const var_134_24 =
                                                        "DataArray<struct UI2>::DataArrayGet"
                                                    var_138_1 = 0x6d
                                                    ecx_41 = "DataArrayTryToGet(id) != NULL"
                                                
                                                sub_489550(eax_41, &data_5b2591, ecx_41, 
                                                    "d:\ax\trunk\ax2017\engine\dataarray.h", var_138_1, 
                                                    "DataArray<struct UI2>::DataArrayGet")
                                                
                                                if (IsDebuggerPresent() == 1)
                                                    breakpoint
                                                
                                                sub_489700()
                                                noreturn
                                        
                                        void var_a0
                                        int128_t* eax_43 = sub_4bc3a0(&esi_3[0x54c], xmm0_39, &var_a0)
                                        float xmm6_15 = xmm0_92[2]
                                        float xmm3_19 = *(eax_43 + 8)
                                        float xmm7_14 = *eax_43
                                        float xmm5_18 = *(eax_43 + 0xc)
                                        float xmm3_20 = *(eax_43 + 4)
                                        float var_90
                                        eax_44 = &var_90
                                        var_30:0xc.d = (xmm3_19 * var_100_1 - xmm6_15 * xmm7_14)
                                            / ((1f - xmm7_14) * xmm3_19 - (1f - xmm3_19) * xmm7_14)
                                        float xmm2_48 = xmm0_92[3]
                                        float xmm0_104 = var_30:0xc.d
                                        float xmm4_33 = (xmm5_18 * xmm1_49 - xmm2_48 * xmm3_20)
                                            / ((1f - xmm3_20) * xmm5_18 - (1f - xmm5_18) * xmm3_20)
                                        var_90 = xmm0_104
                                        float var_8c_1 = xmm4_33
                                        float var_84_1 =
                                            (xmm2_48 - xmm1_49) / (xmm5_18 - xmm3_20) + xmm4_33
                                        float var_88_1 =
                                            (xmm6_15 - var_100_1) / (xmm3_19 - xmm7_14) + xmm0_104
                                    
                                    sub_4a9f50(eax_44, 0x75, esi_3, eax_44)
                                    edi_2 = &edi_2[4]
                                    eax_37 = var_d4_6 + 1
                                    var_d8_6 = edi_2
                                    var_d4_6 = eax_37
                                    
                                    if (eax_37 s>= data_643654)
                                        break
                        else
                            HWND eax_18 = sub_4a79d0()
                            
                            if (eax_18.b != 0)
                                if (data_64365e == 0)
                                    goto label_4ab239
                                
                                HWND eax_26 = sub_4a79d0()
                                
                                if (eax_26.b == 0)
                                    goto label_4ab239
                                
                                if (data_643654 != 1)
                                    sub_489550(eax_26, &data_5b2591, 
                                        "gUI2Editor.s.activeSetCount == 1", 
                                        "d:\ax\trunk\ax2017\engine\ui2.cpp", 0x25bf, 
                                        "UI2DraggingUpdate")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_489700()
                                    noreturn
                                
                                char* eax_27
                                int32_t edx_3
                                eax_27, edx_3 = sub_4a7d60(data_642654)
                                float xmm7_6 = (data_6c44a4:4 f- i_3) * var_d0_1
                                float xmm5_10 = (data_6c44a4:0xc f- i_3) * var_d0_1
                                float xmm6_6 = (data_6c44a4.d - var_c0_1) * xmm1_23
                                float xmm4_11 = (data_6c44a4:8 f- var_c0_1) * xmm1_23
                                float xmm0_67
                                
                                if (var_c0_1 + xmm4_11 <= var_c0_1 + xmm6_6)
                                    xmm0_67 = xmm4_11
                                    xmm4_11 = xmm6_6
                                else
                                    xmm0_67 = xmm6_6
                                
                                float xmm4_12
                                
                                if (i_3 + xmm5_10 <= i_3 + xmm7_6)
                                    xmm4_12 = xmm5_10
                                    xmm5_10 = xmm7_6
                                else
                                    xmm4_12 = xmm7_6
                                
                                var_40 = var_c0_1 + xmm0_67
                                float var_38_2 = var_c0_1 + xmm4_11
                                float var_3c_2 = i_3 + xmm4_12
                                float var_34_2 = i_3 + xmm5_10
                                var_30 = *sub_4be600(&var_50, edx_3, &var_40, &var_50)
                                int128_t* eax_30 = sub_4bc3a0(&eax_27[0x54c], xmm0_39, &var_50)
                                int128_t* eax_31 = sub_498790(&eax_27[0xc], xmm0_39, &var_70)
                                float xmm1_39 = *eax_31
                                float xmm0_73 = *(eax_31 + 8) - xmm1_39
                                float xmm2_28 = *eax_30 * xmm0_73 + xmm1_39
                                float xmm4_15 = *(eax_30 + 8) * xmm0_73 + xmm1_39
                                float xmm1_40 = *(eax_31 + 4)
                                float xmm0_75 = *(eax_31 + 0xc) - xmm1_40
                                float xmm5_12 = *(eax_30 + 0xc) * xmm0_75
                                float xmm3_11 = *(eax_30 + 4) * xmm0_75 + xmm1_40
                                var_40 = xmm2_28
                                float var_38_3 = xmm4_15
                                float xmm5_13 = xmm5_12 + xmm1_40
                                float var_3c_3 = xmm3_11
                                float var_34_3 = xmm5_13
                                var_50.o = *sub_497840(&var_50, &var_40, &var_30, &var_50)
                                
                                if (sub_41f090(&var_50, &var_30) != 0)
                                    sub_4a9f50(&var_30, 0x75, eax_27, &var_30)
                                
                                float xmm0_77 = var_30.d
                                float xmm2_30 = var_30:8.d - xmm0_77
                                float xmm1_41 = var_30:4.d
                                float xmm3_13 = var_30:0xc.d - xmm1_41
                                var_60 = (xmm2_28 - xmm0_77) / xmm2_30
                                float var_5c_1 = (xmm3_11 - xmm1_41) / xmm3_13
                                float var_58_1 = (xmm4_15 - xmm0_77) / xmm2_30
                                float var_54_1 = (xmm5_13 - xmm1_41) / xmm3_13
                                sub_4a9f50(&var_60, 0x7d, eax_27, &var_60)
                            else
                                if (data_643654 != 1)
                                    sub_489550(eax_18, &data_5b2591, 
                                        "gUI2Editor.s.activeSetCount == 1", 
                                        "d:\ax\trunk\ax2017\engine\ui2.cpp", 0x25b5, 
                                        "UI2DraggingUpdate")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_489700()
                                    noreturn
                                
                                char* eax_19
                                int32_t edx_2
                                eax_19, edx_2 = sub_4a7d60(data_642654)
                                float xmm7_3 = (data_6c44b8 - i_3) * var_d0_1
                                float xmm5_3 = (data_6c44c0 - i_3) * var_d0_1
                                float xmm6_3 = (data_6c44b4 - var_c0_1) * xmm1_23
                                float xmm4_6 = (data_6c44bc - var_c0_1) * xmm1_23
                                float xmm0_45
                                
                                if (var_c0_1 + xmm4_6 <= var_c0_1 + xmm6_3)
                                    xmm0_45 = xmm4_6
                                    xmm4_6 = xmm6_3
                                else
                                    xmm0_45 = xmm6_3
                                
                                float xmm4_7
                                
                                if (i_3 + xmm5_3 <= i_3 + xmm7_3)
                                    xmm4_7 = xmm5_3
                                    xmm5_3 = xmm7_3
                                else
                                    xmm4_7 = xmm7_3
                                
                                var_40 = var_c0_1 + xmm0_45
                                float var_38_1 = var_c0_1 + xmm4_6
                                float var_3c_1 = i_3 + xmm4_7
                                float var_34_1 = i_3 + xmm5_3
                                var_50.o = *sub_4be600(&var_50, edx_2, &var_40, &var_50)
                                int128_t* eax_22 = sub_498790(&eax_19[0xc], xmm0_39, &var_70)
                                float xmm5_4[0x4] = var_50.o
                                float xmm3_6 = *eax_22
                                float xmm1_34 = *(eax_22 + 8) - xmm3_6
                                float xmm4_8 = *(eax_22 + 4)
                                float xmm2_18 = *(eax_22 + 0xc) - xmm4_8
                                var_30.d = (xmm5_4[0] - xmm3_6) / xmm1_34
                                var_30:4.d = (_mm_shuffle_ps(xmm5_4, xmm5_4, 0x55) - xmm4_8) / xmm2_18
                                float xmm0_58 = _mm_shuffle_ps(xmm5_4, xmm5_4, 0xaa)
                                float xmm5_7 = (_mm_shuffle_ps(xmm5_4, xmm5_4, 0xff) - xmm4_8) / xmm2_18
                                var_30:8.d = (xmm0_58 - xmm3_6) / xmm1_34
                                var_30:0xc.d = xmm5_7
                                var_30 = *sub_4be720(&var_50, &data_5d2760, &var_30, &var_50)
                                sub_4a9f50(&var_30, 0x7d, eax_19, &var_30)
                        data_6c4480 = var_b8
                        data_6c4484 = i_1
                data_6c4471 = 1
                var_b8 = &data_63e5a8
                i_1 = 0f
                sub_4bc830(&data_63e5a8, &i_1)
                i = i_1
                
                if (i != 0xffffffff)
                    do
                        float ecx_36 = var_b8
                        *(i + 0xe2c) = 2
                        sub_4bc830(ecx_36, &i_1)
                        i = i_1
                    while (i != 0xffffffff)
                    
                    @__security_check_cookie@4(i_2 ^ &__saved_ebp)
                    return i
    
    @__security_check_cookie@4(i_2 ^ &__saved_ebp)
    return i
}
