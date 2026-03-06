// 函数名称: sub_4cb5d0
// 虚拟地址: 0x4cb5d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int128_t*sub_4cb5d0(int32_t arg1 @ esi, int128_t* arg2, int32_t* arg3, char arg4, float arg5, int32_t* arg6, void* arg7, int32_t* arg8)
{
    // 第一条实际指令: int32_t __saved_ebp_2
    int32_t __saved_ebp_2
    int32_t __saved_ebp_1 = __saved_ebp_2
    int32_t ecx
    int128_t* edx
    ecx, edx = __alloca_probe(0x1b48)
    int32_t __saved_ebp
    int32_t var_c = __security_cookie ^ &__saved_ebp
    int32_t* eax_2
    eax_2.b = arg4
    int32_t __saved_ebx_1
    int32_t __saved_ebx = __saved_ebx_1
    char var_1a08 = eax_2.b
    int32_t* eax_4 = arg8
    int32_t* var_19f8 = eax_4
    int32_t __saved_edi_1
    int32_t __saved_edi = __saved_edi_1
    uint32_t (* ecx_41)[0x4]
    int128_t xmm0_46
    
    if (ecx == 0)
    label_4cc022:
        xmm0_46 = data_5d2914
        ecx_41 = nullptr
    label_4cc035:
        *arg2 = xmm0_46
        arg2[1].d = ecx_41
        @__security_check_cookie@4(arg1 ^ &__saved_ebp)
        return arg2
    
    uint32_t ecx_1 = zx.d(ecx.w)
    
    if (ecx_1 u< data_6c9d94)
        int32_t edx_1 = data_6c9d90
        eax_4 = ecx_1 * 0x438
        
        if (*(eax_4 + edx_1 + 0x434) == ecx)
            void* ebx_2 = ecx_1 * 0x438 + edx_1
            void* var_19f0_1 = ebx_2
            bool cond:0_1 = *(ebx_2 + 8) != 0
            *(ebx_2 + 0x1c) = 1
            
            if (cond:0_1)
                goto label_4cc022
            
            int32_t* edi = sub_4c8c70(*(ebx_2 + 4))
            int32_t var_14_1 = 0x1904
            int32_t var_18_1 = 0
            void var_19d8
            void* var_1c_1 = &var_19d8
            int32_t* var_19fc = edi
            _memset()
            int32_t var_d8
            int32_t ecx_3 = var_d8 * 0x64
            uint32_t (* edx_2)[0x4] = nullptr
            int128_t xmm0_1 = *edx
            int32_t var_d8_1 = 1
            char var_19d9_1 = 0
            uint32_t (* var_19f4_1)[0x4] = nullptr
            void* var_1a18_1 = nullptr
            uint32_t (* var_1a14_1)[0x4] = nullptr
            uint32_t (* var_19e4)[0x4] = nullptr
            *(&var_19d8 + ecx_3) = xmm0_1
            int32_t var_1978[0x628]
            var_1978[var_d8 * 0x19] = 0xffffffff
            void var_19c8
            *(&var_19c8 + ecx_3) = edx[1]
            void var_19b8
            *(&var_19b8 + ecx_3) = edx[2]
            void var_19a8
            *(&var_19a8 + ecx_3) = edx[3]
            void var_1998
            *(&var_1998 + ecx_3) = edx[4]
            uint32_t (* var_19e0_1)[0x4] = nullptr
            void var_1988
            *(&var_1988 + ecx_3) = edx[5]
            int128_t var_1a2c_1 = data_5d2914
            
            if (edi[2] s<= 0)
                xmm0_46 = var_1a2c_1
                ecx_41 = var_19e0_1
            else
                char esi_1 = var_1a08
                uint32_t (* eax_6)[0x4] = nullptr
                int128_t var_20
                uint32_t ecx_10
                
                while (true)
                    void* edi_2 = *edi + eax_6 * 0x178
                    uint32_t (* eax_7)[0x4]
                    int32_t edx_3
                    eax_7, edx_3 = sub_4ca090(eax_6, edx_2, ebx_2, *(edi_2 + 8))
                    void* ecx_6 = &var_19d8
                    void var_1ae8
                    int128_t var_70
                    int128_t var_30
                    
                    if (*(edi_2 + 4) != 6)
                        int128_t* eax_15 = sub_4ca9f0(&var_1ae8, edx_3, ecx_6, &var_1ae8)
                        int128_t var_d0 = *eax_15
                        int128_t var_c0_1 = eax_15[1]
                        int128_t var_b0_1 = eax_15[2]
                        int128_t var_a0_1 = eax_15[3]
                        int128_t var_90_1 = eax_15[4]
                        int128_t var_80_1 = eax_15[5]
                        uint32_t xmm0_33 = eax_7[1][0]
                        xmm0_33 f- 0f
                        eax_15:1.b = (xmm0_33 f== 0f ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_33, 0f) ? 1 : 0) << 2 | (xmm0_33 f< 0f ? 1 : 0)
                        bool p_2 = unimplemented  {test ah, 0x44}
                        uint32_t eax_16
                        
                        if (not(p_2))
                            if ((*eax_7)[2] s<= *eax_7)
                                eax_16.b = *(edi_2 + 0x44)
                            else
                                eax_16.b = (*eax_7)[3].b
                        
                        if (p_2 || eax_16.b == 0)
                            uint32_t eax_18 = *(edi_2 + 4) - 2
                            int32_t var_19e8
                            char const* const ecx_47
                            
                            switch (eax_18)
                                case 0
                                    uint32_t eax_19 = eax_7[0x12][0]
                                    uint32_t edx_6 = *(edi_2 + 0xac)
                                    uint32_t temp1_1 = *eax_7
                                    uint32_t var_1a0c_1
                                    uint32_t var_1a00_1
                                    uint32_t ecx_13
                                    
                                    if (eax_19 s<= temp1_1)
                                        ecx_13 = *(edi_2 + 0xb0)
                                        var_1a0c_1 = ecx_13
                                        var_1a00_1 = edx_6
                                    else
                                        var_1a0c_1 = (*eax_7)[0x4b]
                                        var_1a00_1 = eax_7[0x13][0]
                                        ecx_13 = *(edi_2 + 0xb0)
                                    
                                    uint32_t esi_2
                                    
                                    if (eax_19 s<= temp1_1)
                                        eax_18 = ecx_13
                                        esi_2 = edx_6
                                    else
                                        eax_18 = (*eax_7)[0x49]
                                        esi_2 = (*eax_7)[0x4a]
                                    
                                    uint32_t var_1a50 = eax_18
                                    uint32_t var_1a4c_1 = esi_2
                                    
                                    if (ecx_13 * edx_6 s> 0x1e)
                                        char const* const var_14_21 = "UIStateUpdate"
                                        int32_t var_18_16 = 0x87c
                                        ecx_47 = "el.rows * el.cols <= 30"
                                        goto label_4cc0ac
                                    
                                    uint32_t esi_3 = var_1a0c_1
                                    eax_18 = esi_3 * var_1a00_1
                                    
                                    if (eax_18 s> 0x1e)
                                        char const* const var_14_20 = "UIStateUpdate"
                                        int32_t var_18_15 = 0x87d
                                        ecx_47 = "dimsUpdate.x * dimsUpdate.y <= 30"
                                        goto label_4cc0ac
                                    
                                    uint32_t ecx_16 = var_1a00_1
                                    void var_1a70
                                    int128_t xmm0_34 =
                                        *sub_4cd780(&var_1a70, var_19e4, ecx, &var_1a70, &var_d0)
                                    int32_t eax_23 = 0
                                    var_19e8 = 0
                                    int128_t var_1a60 = xmm0_34
                                    
                                    if (ecx_16 s> 0)
                                        do
                                            int32_t edi_3 = 0
                                            
                                            if (esi_3 s> 0)
                                                do
                                                    int32_t var_1a30_1 = eax_23
                                                    int32_t var_1a34
                                                    int32_t* var_14_7 = &var_1a34
                                                    var_1a34 = edi_3
                                                    uint32_t eax_25
                                                    int32_t ecx_18
                                                    eax_25, ecx_18 =
                                                        sub_4cac50(&var_1a34, eax_7, edi_2, var_14_7)
                                                    
                                                    if (*(eax_25 + 0x20) != 0)
                                                        var_1a34 = *(eax_25 + 0x24)
                                                        ecx_18 = *(eax_25 + 0x28)
                                                        int32_t var_1a30_2 = ecx_18
                                                    
                                                    int32_t var_14_8 = ecx_18
                                                    uint32_t* var_18_4 = &var_1a50
                                                    int32_t* var_1c_2 = &var_1a34
                                                    var_20.d = &var_d0
                                                    var_30:0xc.d = &var_1ae8
                                                    int128_t* eax_27 =
                                                        sub_4c92d0(&var_1ae8, eax_7, edi_2)
                                                    int32_t* ecx_21 = arg3
                                                    int128_t xmm1_7 = *eax_27
                                                    var_70 = xmm1_7
                                                    int128_t var_60_2 = eax_27[1]
                                                    int128_t var_50_2 = eax_27[2]
                                                    int128_t var_40_2 = eax_27[3]
                                                    var_30 = eax_27[4]
                                                    int128_t xmm0_39 = eax_27[5]
                                                    int32_t var_1a44 = *ecx_21
                                                    var_20 = xmm0_39
                                                    int32_t var_1a40_1 = ecx_21[1]
                                                    var_70.d = (*eax_7)[0x55] f+ xmm1_7
                                                    var_70:4.d = (*eax_7)[0x56] f+ var_70:4.d
                                                    
                                                    if (*(edi_2 + 0xda) != 0)
                                                        int32_t* edx_10 = ecx_21
                                                        ecx_21 = &var_1a60
                                                        
                                                        if (sub_41f010(ecx_21, edx_10) == 0)
                                                            var_1a44 = 0xc61c4000
                                                            int32_t var_1a40_2 = 0xc61c4000
                                                    
                                                    int32_t* var_14_9 = &var_1a34
                                                    uint32_t (* var_18_5)[0x4] = eax_7
                                                    uint32_t (** var_1c_3)[0x4] = &var_19e4
                                                    var_20.d = ecx_21
                                                    *(eax_25 + 0x434)
                                                    var_20.d = arg5
                                                    var_30:0xc.d = var_1a08.d
                                                    var_30:8.d = &var_1a44
                                                    void var_1a88
                                                    var_30:4.d = &var_1a88
                                                    int128_t* eax_32 = sub_4cb5d0()
                                                    int128_t xmm0_45 = *eax_32
                                                    uint32_t (* ecx_23)[0x4] = eax_32[1].d
                                                    
                                                    if (*(eax_25 + 0x1c) == 2)
                                                        *(var_19f0_1 + 0x1c) = 2
                                                    
                                                    if (xmm0_45 != 0)
                                                        var_1a2c_1 = xmm0_45
                                                        var_19e0_1 = ecx_23
                                                    
                                                    esi_3 = var_1a0c_1
                                                    edi_3 += 1
                                                    eax_23 = var_19e8
                                                while (edi_3 s< esi_3)
                                                
                                                ecx_16 = var_1a00_1
                                            
                                            eax_23 += 1
                                            var_19e8 = eax_23
                                        while (eax_23 s< ecx_16)
                                    
                                    esi_1 = var_1a08
                                case 1
                                    if ((*eax_7)[0x57].b != 0)
                                        sub_508c90(&eax_7[0x16], 0, &data_5d27f8)
                                case 3
                                    char eax_43
                                    int32_t ecx_35
                                    eax_43, ecx_35 = sub_4ca640(eax_18, &var_d0, edi_2, arg3)
                                    
                                    if (eax_43 == 0 || *(eax_7 + 0x21) != 0)
                                        int32_t var_14_13 = ecx_35
                                        var_20.d = &(*eax_7)[0xa]
                                        
                                        if (sub_4ca7f0(&(*eax_7)[0xa], &eax_7[2], edi_2, var_20.d, 
                                                eax_43, esi_1) == 1)
                                            int32_t eax_49 = *(var_19f0_1 + 0x2c)
                                            
                                            if (eax_49 == 0)
                                                int32_t eax_52
                                                
                                                if (arg7 != 0)
                                                    eax_52 = *(arg7 + 0x11c)
                                                
                                                if (arg7 == 0 || eax_52 == 0)
                                                    var_19e0_1 = var_19e4
                                                    var_1a2c_1.d = 2
                                                    
                                                    if (arg6 != 0)
                                                        var_1a2c_1:4.d = *arg6
                                                        var_1a2c_1:8.d = *var_19f8
                                                        var_1a2c_1:0xc.d = var_19f8[1]
                                                else
                                                    var_19e8 = 0
                                                    
                                                    if (var_19f8 == 0)
                                                        char const* const var_14_19 = "UIStateUpdate"
                                                        int32_t var_18_14 = 0x8e2
                                                        char const* const var_1c_11 =
                                                            "d:\ax\trunk\ax2017\engine\uidef.cpp"
                                                        sub_489550(eax_52, &data_5b2591, 
                                                            "parentTableSlot")
                                                        
                                                        if (IsDebuggerPresent() == 1)
                                                            breakpoint
                                                        
                                                        sub_489700()
                                                        noreturn
                                                    
                                                    var_1a2c_1.d = 3
                                                    int32_t* var_14_15 = &var_19e8
                                                    uint32_t (* var_18_10)[0x4] = var_19e4
                                                    int32_t* var_1c_7 = var_19f8
                                                    var_20.d = ecx
                                                    var_19e0_1 = eax_52(var_20)
                                            else
                                                var_1a2c_1.d = 3
                                                int32_t* var_14_14 = &var_19e8
                                                uint32_t (* var_18_9)[0x4] = var_19e4
                                                var_19e8 = 0
                                                int32_t var_1c_6 = ecx
                                                var_19e0_1 = eax_49()
                                    else
                                        if (var_19d9_1 != 0)
                                            int32_t var_14_12 = ecx_35
                                            var_20.d = &(*var_1a14_1)[0xa]
                                            sub_4ca7f0(&(*var_1a14_1)[0xa], &var_1a14_1[2], var_1a18_1, 
                                                var_20.d, 0, esi_1)
                                        
                                        var_19d9_1 = 1
                                        var_19f4_1 = var_19e4
                                        var_1a18_1 = edi_2
                                        var_1a14_1 = eax_7
                                case 4
                                    char const* const var_14_22 = "UIStateUpdate"
                                    int32_t var_18_17 = 0x877
                                    ecx_47 = "Halt"
                                label_4cc0ac:
                                    char const* const var_1c_12 = "d:\ax\trunk\ax2017\engine\uidef.cpp"
                                    sub_489550(eax_18, &data_5b2591, ecx_47)
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_489700()
                                    noreturn
                                case 6
                                    int32_t* eax_36 = sub_4f9740((*eax_7)[0x27])
                                    
                                    if (eax_36 != 0)
                                        sub_4f9820(eax_36, arg5)
                                case 7
                                    void* ecx_30 = sub_4fd250(eax_7[0xa][0])
                                    int32_t* eax_38 = *(edi_2 + 0x60)
                                    
                                    if (eax_38 != 0)
                                        if (ecx_30 == 0)
                                            ecx_30 = sub_4fd1f0(eax_38, &data_5d27f8)
                                            uint32_t eax_40 = *(ecx_30 + 0x78)
                                            *(ecx_30 + 0x20) = 1
                                            eax_7[0xa][0] = eax_40
                                            eax_38 = *(edi_2 + 0x60)
                                        
                                        if (*ecx_30 != eax_38)
                                            sub_4fd2f0(ecx_30)
                                            ecx_30 = sub_4fd1f0(*(edi_2 + 0x60), &data_5d27f8)
                                            uint32_t eax_42 = *(ecx_30 + 0x78)
                                            *(ecx_30 + 0x20) = 1
                                            eax_7[0xa][0] = eax_42
                                        
                                        sub_501f70(ecx_30, data_620d84)
                                    else if (ecx_30 != 0)
                                        sub_4fd2f0(ecx_30)
                                        eax_7[0xa][0] = 0
                            
                            void* eax_35 = sub_4fd250(eax_7[0xa][0])
                            
                            if (eax_35 != 0 && *(edi_2 + 4) != 9)
                                sub_4fd2f0(eax_35)
                                eax_7[0xa][0] = 0
                        
                        ecx_10 = sub_4caa70(&var_19d8)
                    else
                        void var_1b48
                        int128_t* eax_9 = sub_4ca9f0(&var_1b48, edx_3, ecx_6, &var_1b48)
                        var_70 = *eax_9
                        int128_t var_60_1 = eax_9[1]
                        int128_t var_50_1 = eax_9[2]
                        int128_t var_40_1 = eax_9[3]
                        var_30 = eax_9[4]
                        var_20 = eax_9[5]
                        int128_t* eax_11 = sub_4cb150(&var_1ae8, eax_7, edi_2, &var_1ae8, &var_70)
                        int32_t edx_5 = var_d8_1 * 0x64
                        var_d8_1 += 1
                        ecx_10 = *eax_7
                        *(&var_19d8 + edx_5) = *eax_11
                        *(&var_19c8 + edx_5) = eax_11[1]
                        *(&var_19b8 + edx_5) = eax_11[2]
                        *(&var_19a8 + edx_5) = eax_11[3]
                        *(&var_1998 + edx_5) = eax_11[4]
                        int128_t xmm0_19 = eax_11[5]
                        var_1978[var_d8_1 * 0x19] = *(edi_2 + 0x68)
                        *(&var_1988 + edx_5) = xmm0_19
                        int32_t eax_12
                        
                        if ((*eax_7)[2] s<= ecx_10)
                            eax_12.b = *(edi_2 + 0x44)
                        else
                            eax_12.b = (*eax_7)[3].b
                        
                        float xmm1_1
                        
                        xmm1_1 = eax_12.b != 0 ? -1f : 1f
                        
                        bool cond:1_1 = (*eax_7)[0x17] == 0
                        float xmm0_22 = arg5 * xmm1_1 f+ (*eax_7)[5]
                        (*eax_7)[5] = xmm0_22
                        float xmm2_1
                        
                        if (cond:1_1)
                            xmm2_1 = _mm_cvtepi32_ps(zx.o(*(edi_2 + 0x70)))
                        else
                            xmm2_1 = eax_7[6][0]
                        
                        uint32_t eax_13
                        
                        if ((*eax_7)[0x4d] s<= ecx_10)
                            eax_13 = *(edi_2 + 0x6c)
                        else
                            eax_13 = (*eax_7)[0x4e]
                        
                        float xmm1_4 = _mm_cvtepi32_ps(zx.o(eax_13)) + xmm2_1
                        
                        if (not(0f <= xmm0_22))
                            (*eax_7)[5] = 0
                            xmm0_22 = (zx.o(0)).d
                        
                        float xmm0_25 = (xmm0_22 * 1000f - xmm2_1) / (xmm1_4 - xmm2_1)
                        
                        if (not(0 f< xmm0_25))
                            eax_7[1][0] = 0
                        else if (xmm0_25 < 1f)
                            uint32_t xmm0_26
                            ecx_10, xmm0_26 = sub_41f140(1, xmm0_25, (zx.o(0)).d, 1f)
                            eax_7[1][0] = xmm0_26
                        else
                            eax_7[1][0] = 0x3f800000
                    edi = var_19fc
                    edx_2 = var_19e4 + 1
                    var_19e4 = edx_2
                    eax_6 = edx_2
                    
                    if (edx_2 s>= edi[2])
                        break
                    
                    ebx_2 = var_19f0_1
                
                if (var_19d9_1 == 0)
                    xmm0_46 = var_1a2c_1
                    ecx_41 = var_19e0_1
                else
                    uint32_t var_14_16 = ecx_10
                    var_20.d = &(*var_1a14_1)[0xa]
                    
                    if (sub_4ca7f0(&(*var_1a14_1)[0xa], &var_1a14_1[2], var_1a18_1, var_20.d, 1, esi_1)
                            == 1)
                        int32_t eax_62 = *(var_19f0_1 + 0x2c)
                        
                        if (eax_62 == 0)
                            int32_t eax_65
                            
                            if (arg7 != 0)
                                eax_65 = *(arg7 + 0x11c)
                            
                            if (arg7 == 0 || eax_65 == 0)
                                var_1a2c_1.d = 2
                                goto label_4cbfea
                            
                            if (var_19f8 == 0)
                                char const* const var_14_23 = "UIStateUpdate"
                                int32_t var_18_18 = 0x917
                                char const* const var_1c_13 = "d:\ax\trunk\ax2017\engine\uidef.cpp"
                                sub_489550(eax_65, &data_5b2591, "parentTableSlot")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_489700()
                                noreturn
                            
                            var_19fc = nullptr
                            int32_t** var_14_18 = &var_19fc
                            uint32_t (* var_18_13)[0x4] = var_19f4_1
                            int32_t* var_1c_10 = var_19f8
                            var_20.d = ecx
                            var_1a2c_1.d = 3
                            uint32_t (* eax_66)[0x4] = eax_65(var_20)
                            xmm0_46 = var_1a2c_1
                            uint32_t (* var_19e0_3)[0x4] = eax_66
                            ecx_41 = eax_66
                        else
                            int32_t** var_14_17 = &var_19fc
                            uint32_t (* var_18_12)[0x4] = var_19f4_1
                            int32_t var_1c_9 = ecx
                            var_1a2c_1.d = 3
                            var_19fc = nullptr
                            uint32_t (* eax_63)[0x4] = eax_62()
                            xmm0_46 = var_1a2c_1
                            uint32_t (* var_19e0_2)[0x4] = eax_63
                            ecx_41 = eax_63
                    else if (*(var_1a14_1 + 0x21) != 0 || *(var_1a14_1 + 0x23) != 0
                            || *(var_1a14_1 + 0x22) != 0)
                        xmm0_46 = var_1a2c_1
                        ecx_41 = var_19e0_1
                    else
                        var_1a2c_1.d = 1
                        *(var_19f0_1 + 0x1c) = 2
                    label_4cbfea:
                        
                        if (arg6 != 0)
                            var_1a2c_1:4.d = *arg6
                            var_1a2c_1:8.d = *var_19f8
                            var_1a2c_1:0xc.d = var_19f8[1]
                        
                        xmm0_46 = var_1a2c_1
                        ecx_41 = var_19f4_1
            
            goto label_4cc035
    
    char const* const var_14_24 = "DataArray<struct UIState>::DataArrayGet"
    int32_t var_18_19 = 0x6d
    char const* const var_1c_14 = "d:\ax\trunk\ax2017\engine\dataarray.h"
    sub_489550(eax_4, &data_5b2591, "DataArrayTryToGet(id) != NULL")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
