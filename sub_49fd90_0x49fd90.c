// 函数名称: sub_49fd90
// 虚拟地址: 0x49fd90
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int128_t* __convention("regparm")sub_49fd90(int32_t arg1, int32_t arg2, void* arg3, int128_t* arg4)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int128_t* result
    int128_t xmm0_6
    
    if (*(arg3 + 0x1190) != 0)
        int32_t* ecx_2 = *(arg3 + 0xf48)
        int32_t var_168_2
        char const* const var_164_2
        int128_t var_140
        int128_t var_130_1
        float var_a0_1
        int128_t var_4c
        int128_t* eax_3
        int128_t xmm1_1
        char* ecx_3
        
        if (ecx_2 == 0)
            eax_3 = sub_498ef0(arg3)
            
            if (eax_3[1].d == 0)
                var_164_2 = "UI2TableTransform"
                var_168_2 = 0x14d1
            label_4a061b:
                ecx_3 = "Halt"
            label_4a062a:
                sub_489550(eax_3, &data_5b2591, ecx_3, "d:\ax\trunk\ax2017\engine\ui2.cpp", var_168_2, 
                    var_164_2)
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            int32_t eax_5 = *sub_498eb0(*(arg3 + 0xff4))
            xmm1_1 = *sub_4f0e70(eax_5, eax_5 + (*(arg3 + 0xff8) + 1) * 0x18, &data_6218dc, 
                data_12baca4, 0x75)
            float xmm2_3 = xmm1_1.d
            xmm2_3 f- 0
            var_4c = xmm1_1
            float xmm3_2 = var_4c:0xc.d
            eax_3:1.b = (xmm2_3 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_3, 0f) ? 1 : 0) << 2
                | (xmm2_3 < 0f ? 1 : 0)
            var_a0_1 = xmm2_3
            float xmm2_4 = var_4c:8.d
            var_130_1 = xmm1_1
            bool p_10 = unimplemented  {test ah, 0x44}
            
            if (not(p_10))
                float xmm4_2 = var_4c:4.d
                xmm4_2 f- 0
                eax_3:1.b = (xmm4_2 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4_2, 0f) ? 1 : 0) << 2
                    | (xmm4_2 < 0f ? 1 : 0)
                bool p_12 = unimplemented  {test ah, 0x44}
                
                if (not(p_12))
                    xmm2_4 f- 0
                    eax_3:1.b = (xmm2_4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_4, 0f) ? 1 : 0) << 2
                        | (xmm2_4 < 0f ? 1 : 0)
                    bool p_14 = unimplemented  {test ah, 0x44}
                    
                    if (not(p_14))
                        xmm3_2 f- 0
                        eax_3:1.b = (xmm3_2 == 0f ? 1 : 0) << 6
                            | (is_unordered.d(xmm3_2, 0f) ? 1 : 0) << 2 | (xmm3_2 < 0f ? 1 : 0)
                        bool p_16 = unimplemented  {test ah, 0x44}
                        
                        if (not(p_16))
                            var_164_2 = "UI2TableTransform"
                            var_168_2 = 0x14cc
                            ecx_3 = "rectSub != RECT0"
                            goto label_4a062a
        else
            int32_t* var_164_1 = ecx_2
            xmm1_1 = *sub_49ad10(&var_140, *(arg3 + 0x10d4), ecx_2, &var_140, *(arg3 + 0x10d8))
            float xmm2_1 = xmm1_1.d
            xmm2_1 f- 0
            var_4c = xmm1_1
            float xmm3_1 = var_4c:0xc.d
            eax_3:1.b = (xmm2_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_1, 0f) ? 1 : 0) << 2
                | (xmm2_1 < 0f ? 1 : 0)
            var_a0_1 = xmm2_1
            float xmm2_2 = var_4c:8.d
            var_130_1 = xmm1_1
            bool p_2 = unimplemented  {test ah, 0x44}
            
            if (not(p_2))
                float xmm4_1 = var_4c:4.d
                xmm4_1 f- 0
                eax_3:1.b = (xmm4_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4_1, 0f) ? 1 : 0) << 2
                    | (xmm4_1 < 0f ? 1 : 0)
                bool p_4 = unimplemented  {test ah, 0x44}
                
                if (not(p_4))
                    xmm2_2 f- 0
                    eax_3:1.b = (xmm2_2 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_2, 0f) ? 1 : 0) << 2
                        | (xmm2_2 < 0f ? 1 : 0)
                    bool p_6 = unimplemented  {test ah, 0x44}
                    
                    if (not(p_6))
                        xmm3_1 f- 0
                        eax_3:1.b = (xmm3_1 == 0f ? 1 : 0) << 6
                            | (is_unordered.d(xmm3_1, 0f) ? 1 : 0) << 2 | (xmm3_1 < 0f ? 1 : 0)
                        bool p_8 = unimplemented  {test ah, 0x44}
                        
                        if (not(p_8))
                            var_164_2 = "UI2TableTransform"
                            var_168_2 = 0x14c3
                            ecx_3 = "rectSub != RECT0"
                            goto label_4a062a
        int32_t eax_6 = *(arg3 + 0xf2c)
        int32_t var_84
        int32_t* ecx_9 = &var_84
        float xmm0_7[0x4] = *(arg3 + 0x10a0)
        var_84 = eax_6
        
        if (eax_6 == 0)
            ecx_9 = nullptr
        
        float var_28 = *(arg3 + 0xf24)
        int32_t eax_8 = *(arg3 + 0xf28)
        int32_t var_168_4 = *(arg3 + 0xf44)
        *(arg3 + 0xe50) = xmm1_1
        int32_t eax_9
        int32_t edx_3
        eax_9, edx_3 = sub_49fc30(eax_8, ecx_9, &var_28, var_168_4, arg2)
        uint128_t xmm1_2 = zx.o(var_28)
        float xmm0_9 = _mm_cvtepi32_ps(zx.o(eax_8))
        int32_t ecx_11 = *(arg3 + 0xe84)
        float xmm1_3 = _mm_cvtepi32_ps(xmm1_2)
        float xmm0_10 = *(arg3 + 0xf34)
        float xmm0_11 = *(arg3 + 0xf38)
        float xmm0_12 = *(arg3 + 0xf3c)
        float xmm0_13 = *(arg3 + 0xf40)
        float xmm1_5 = var_4c:0xc.d f- var_4c:4.d
        float xmm0_15 = var_4c:8.d - var_a0_1
        float var_190[0x4] = xmm0_7
        float eax_11
        float edx_4
        eax_11, edx_4 = sub_49f9b0(&var_190, edx_3, ecx_11, var_190, xmm0_15, xmm1_5, xmm0_10, xmm0_11, 
            xmm0_12, xmm0_13, xmm1_3, xmm0_9)
        float xmm0_18 = _mm_cvtepi32_ps(zx.o(var_28)) - 1f
        float xmm5_2 = _mm_cvtepi32_ps(zx.o(eax_8))
        float xmm2_7 = xmm5_2 - 1f
        float xmm7_3 = _mm_shuffle_ps(xmm0_7, xmm0_7, 0xaa) f- xmm0_7
        float xmm6_2 = _mm_shuffle_ps(xmm0_7, xmm0_7, 0xff)
        eax_3 = *(arg3 + 0xe84)
        float xmm3_4 = _mm_shuffle_ps(xmm0_7, xmm0_7, 0x55)
        float xmm6_3 = xmm6_2 - xmm3_4
        float xmm7_5 = xmm1_5 * xmm5_2
        float xmm4_5 = xmm0_15 * _mm_cvtepi32_ps(zx.o(var_28)) + eax_11 * xmm0_18
        float var_2c_1 = xmm4_5
        float xmm5_4 = xmm7_5 + edx_4 * xmm2_7
        float var_50_1 = xmm5_4
        
        if (eax_3 == 7)
            xmm5_4 = xmm1_5
            var_2c_1 = xmm0_15
            xmm4_5 = xmm0_15
            var_50_1 = xmm5_4
        
        float xmm1_9 = xmm7_3 / xmm4_5
        float xmm0_22 = xmm6_3 / xmm5_4
        float var_20_1
        
        switch (eax_3)
            case nullptr, 3, 7
                xmm1_9 = _mm_min_ss(xmm1_9, xmm0_22)
                var_20_1 = xmm1_9
            case 1, 8
                xmm1_9 = *(arg3 + 0x1020)
                var_20_1 = xmm1_9
            case 4
                xmm1_9 = _mm_max_ss(xmm1_9, xmm0_22)
                var_20_1 = xmm1_9
            case 5
                xmm1_9 = xmm0_22
                var_20_1 = xmm0_22
            case 6
                var_20_1 = xmm1_9
            default
                var_164_2 = "TableScale"
                var_168_2 = 0x143a
                goto label_4a061b
        
        int32_t* var_164_6 = &var_4c:8
        int128_t var_110_1 = *(arg3 + 0x1014)
        void* eax_12 = data_114e818
        var_140 = *(arg3 + 0x1024)
        int128_t var_f0_1 = *(arg3 + 0x1034)
        int128_t var_e0_1 = *(arg3 + 0x1044)
        int128_t var_d0_1 = *(arg3 + 0x1054)
        int128_t xmm0_28 = *(arg3 + 0x1064)
        float xmm0_30 = xmm0_15 * xmm1_9
        float xmm0_32 = xmm1_5 * xmm1_9
        char eax_13
        int32_t edx_5
        eax_13, edx_5 = sub_4bc4e0(arg3 + 0x48c, *(eax_12 + 0x2c), var_164_6)
        float xmm4_7 = var_2c_1 * var_20_1
        float xmm5_6 = var_50_1 * var_20_1
        float xmm2_14 = xmm7_3 f* var_4c:8.d f+ xmm0_7 - ((xmm4_7 - 0f) f* var_4c:8.d + 0f)
        var_4c.d = xmm2_14
        var_4c:8.d = xmm4_7 + xmm2_14
        float xmm6_7 = xmm6_3 f* var_4c:0xc.d + xmm3_4 - ((xmm5_6 - 0f) f* var_4c:0xc.d + 0f)
        float xmm0_42 = _mm_cvtepi32_ps(zx.o(edx_3))
        xmm0_42 - xmm2_7
        var_4c:4.d = xmm6_7
        var_4c:0xc.d = xmm5_6 + xmm6_7
        bool p_18 = unimplemented  {test ah, 0x44}
        
        if ((p_18 || *(arg3 + 0xf44) != 0) && (edx_3 != 0 || *(arg3 + 0xf44) != 1))
            eax_13 = 0
        else
            eax_13 = 1
        
        float eax_16
        float xmm1_25
        float xmm4_19
        float edx_7
        
        if (eax_13 == 0)
        label_4a04f9:
            eax_16, edx_7 = sub_426dd0(&var_4c)
            var_110_1:0xc.d = var_20_1
            xmm4_19 = _mm_cvtepi32_ps(zx.o(eax_9)) * (eax_11 * var_20_1 + xmm0_30) + eax_16
            xmm1_25 = (edx_4 * var_20_1 + xmm0_32) * xmm0_42 + edx_7
        else if (eax_6 == 0)
            if (*(arg3 + 0xf30) == 0)
                goto label_4a04f9
            
            int32_t edi_3 = int.d(_mm_cvtepi32_ps(zx.o(var_28)))
            int32_t esi_2 = *(arg3 + 0xf60) - (int.d(_mm_cvtepi32_ps(zx.o(eax_8))) - 1) * edi_3
            eax_16, edx_7 = sub_426dd0(&var_4c)
            float xmm3_13 = eax_11 * var_20_1 + xmm0_30
            var_110_1:0xc.d = var_20_1
            xmm4_19 = _mm_cvtepi32_ps(zx.o(edi_3 - esi_2)) * xmm3_13 * 0.5f + eax_16
                + _mm_cvtepi32_ps(zx.o(eax_9)) * xmm3_13
            xmm1_25 = (edx_4 * var_20_1 + xmm0_32) * xmm0_42 + edx_7
        else
            float xmm0_44 = _mm_cvtepi32_ps(zx.o(eax_8))
            int32_t ecx_13 = *(arg3 + 0xe84)
            var_28 = _mm_cvtepi32_ps(zx.o(*ecx_9))
            float var_168_6 = var_28
            var_190 = xmm0_7
            float eax_15
            float edx_6
            eax_15, edx_6 = sub_49f9b0(&var_190, edx_5, ecx_13, var_190, xmm0_15, xmm1_5, xmm0_10, 
                xmm0_11, xmm0_12, xmm0_13, var_168_6, xmm0_44)
            float xmm2_16 = _mm_cvtepi32_ps(zx.o(*ecx_9))
            int32_t ecx_14 = *(arg3 + 0xe88)
            float xmm1_12 = xmm0_15 * xmm2_16 + (xmm2_16 - 1f) * eax_15
            float xmm0_52 = _mm_min_ss(xmm7_3 / xmm1_12, xmm6_3 / (xmm7_5 + xmm2_7 * edx_6))
            var_4c:8.d = sub_4eaaa0(ecx_14)
            var_110_1:0xc.d = xmm0_52
            xmm4_19 = _mm_cvtepi32_ps(zx.o(eax_9)) * (eax_15 * xmm0_52 + xmm0_15 * xmm0_52)
                + (eax_11 * var_20_1 + xmm0_30) * 0f + var_4c:8.d * xmm7_3 + xmm0_7[0]
                - ((xmm1_12 * xmm0_52 - 0f) f* var_4c:8.d + 0f)
            xmm1_25 = (edx_6 * xmm0_52 + xmm1_5 * xmm0_52) * 0f + xmm0_42 * (edx_4 * var_20_1 + xmm0_32)
                + xmm6_7
        float xmm2_34 = *(arg3 + 0xe48)
        xmm2_34 f- 0
        int128_t xmm0_65 = data_5d2770
        eax_16:1.b = (xmm2_34 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_34, 0f) ? 1 : 0) << 2
            | (xmm2_34 < 0f ? 1 : 0)
        var_110_1.d = xmm4_19
        var_110_1:4.d = xmm1_25
        bool p_20 = unimplemented  {test ah, 0x44}
        bool p_22
        
        if (not(p_20))
            float xmm0_66 = *(arg3 + 0xe4c)
            xmm0_66 f- 0
            eax_16:1.b = (xmm0_66 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_66, 0f) ? 1 : 0) << 2
                | (xmm0_66 < 0f ? 1 : 0)
            p_22 = unimplemented  {test ah, 0x44}
        
        if (p_20 || p_22)
            var_110_1.d = xmm2_34 + xmm4_19
            var_110_1:4.d = *(arg3 + 0xe4c) + xmm1_25
        
        result = arg4
        *result = var_110_1
        result[1] = var_140
        result[2] = var_130_1
        result[3] = xmm0_65
        result[4] = var_130_1
        xmm0_6 = xmm0_28
    else
        result = arg4
        *result = *(arg3 + 0x1014)
        result[1] = *(arg3 + 0x1024)
        result[2] = *(arg3 + 0x1034)
        result[3] = *(arg3 + 0x1044)
        result[4] = *(arg3 + 0x1054)
        xmm0_6 = *(arg3 + 0x1064)
    
    result[5] = xmm0_6
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
