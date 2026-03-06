// 函数名称: sub_5049b0
// 虚拟地址: 0x5049b0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __convention("regparm")sub_5049b0(int32_t arg1, int32_t* arg2, void* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t __saved_ebx_2
    int32_t __saved_ebx_2
    int32_t __saved_ebx_1 = __saved_ebx_2
    int32_t __saved_ebp_2
    int32_t __saved_ebp_1 = __saved_ebp_2
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_5a1910
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t __saved_esi_1
    int32_t __saved_esi = __saved_esi_1
    int32_t __saved_edi_1
    int32_t __saved_edi = __saved_edi_1
    int32_t var_22c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* esi = *(arg3 + 0x30)
    uint32_t result = sub_4981f0(**(esi + 0x2e4))
    void* esi_2 = *(esi + 0x2dc) * 0x168 + *result
    result.b = *(esi_2 + 0xe2)
    char var_1ad = result.b
    
    if (*(esi_2 + 0x150) != 0 || *(esi_2 + 0x148) != 0 || *(esi_2 + 0x158) != 0 || result.b != 0
            || *(esi_2 + 0x140) != 0)
        void* eax_5 = data_114e818
        
        if (eax_5 == 0)
            char const* const var_230_36 = "GetGameData"
            int32_t var_234_16 = 0x45
            char const* const var_238_14 = "d:\ax\trunk\ax2017\engine\game.h"
            sub_489550(eax_5, &data_5b2591, "gpGameData", "d:\ax\trunk\ax2017\engine\game.h", 0x45, 
                "GetGameData")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        void* eax_6 = *(eax_5 + 0x10)
        *(eax_6 + 0x28) += 1
        int32_t* eax_8 = *(*(arg3 + 0x30) + 0x2e4)
        result = eax_8[0x18]
        
        if (((result.b & 1) == 0 || *(arg3 + 0x40) == 0)
                && ((result.b & 2) == 0 || *(arg3 + 0x40) != 0))
            float eax_9 = sub_503920(arg3, arg2)
            float var_1d0_1 = eax_9
            int128_t var_1dc
            float var_178
            float var_138[0x4]
            
            if (var_1ad == 0)
                char var_1ad_1
                char var_1ac_1
                float var_114_1
                
                if (*(esi_2 + 0xe7) == 0)
                    var_1ac_1 = eax_9.b
                    eax_9.b = var_1d0_1:3.b
                    char var_1aa_3 = var_1d0_1:2.b
                    char var_1ab_2 = eax_9:1.b
                    char var_1a9_3 = eax_9.b
                    float ecx_8 = var_1ac_1.d
                    var_1ad_1 = eax_9.b
                    var_1ac_1.d = 0
                    var_114_1 = ecx_8
                else
                    char edx_1 = var_1d0_1:3.b
                    char var_1ac
                    var_1ac.w = 0
                    char var_1aa_1 = 0
                    char var_1a9_1 = edx_1
                    var_114_1 = var_1ac.d
                    float ecx_7
                    ecx_7.b = var_1d0_1:2.b
                    var_1ad_1 = edx_1
                    var_1ac_1 = eax_9.b
                    char var_1aa_2 = ecx_7.b
                    char var_1ab_1 = eax_9:1.b
                    char var_1a9_2 = 0xff
                
                int32_t eax_11 = var_1ac_1.d
                int32_t* ecx_9 = arg4
                int128_t var_148 = *(arg2 + 0x68)
                var_138 = *(arg2 + 0x78)
                int128_t var_48 = *(arg2 + 0x68)
                int128_t var_38_1 = *(arg2 + 0x78)
                float xmm0_10 = *ecx_9
                float temp0_1 = data_63c264.d
                xmm0_10 - temp0_1
                int32_t* eax_12
                eax_12:1.b = (xmm0_10 == temp0_1 ? 1 : 0) << 6
                    | (is_unordered.d(xmm0_10, temp0_1) ? 1 : 0) << 2 | (xmm0_10 < temp0_1 ? 1 : 0)
                bool p_2 = unimplemented  {test ah, 0x44}
                
                if (p_2)
                label_504c8c:
                    int32_t* var_230_1 = ecx_9
                    int128_t var_188
                    ecx_9 = &var_188
                    sub_4ddac0(eax_12, &var_148, ecx_9, var_230_1)
                    var_48 = var_188
                    var_38_1 = var_178.o
                else
                    float xmm0_11 = ecx_9[5]
                    float temp1_1 = data_63c274:4
                    xmm0_11 - temp1_1
                    eax_12:1.b = (xmm0_11 == temp1_1 ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_11, temp1_1) ? 1 : 0) << 2 | (xmm0_11 < temp1_1 ? 1 : 0)
                    bool p_4 = unimplemented  {test ah, 0x44}
                    
                    if (p_4)
                        goto label_504c8c
                    
                    float xmm0_12 = ecx_9[6]
                    float temp2_1 = data_63c274:8
                    xmm0_12 - temp2_1
                    eax_12:1.b = (xmm0_12 == temp2_1 ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_12, temp2_1) ? 1 : 0) << 2 | (xmm0_12 < temp2_1 ? 1 : 0)
                    bool p_6 = unimplemented  {test ah, 0x44}
                    
                    if (p_6)
                        goto label_504c8c
                    
                    float xmm0_13 = ecx_9[7]
                    float temp3_1 = data_63c274:0xc
                    xmm0_13 - temp3_1
                    eax_12:1.b = (xmm0_13 == temp3_1 ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_13, temp3_1) ? 1 : 0) << 2 | (xmm0_13 < temp3_1 ? 1 : 0)
                    bool p_8 = unimplemented  {test ah, 0x44}
                    
                    if (p_8)
                        goto label_504c8c
                    
                    float xmm0_14 = ecx_9[4]
                    float temp4_1 = data_63c274.d
                    xmm0_14 - temp4_1
                    eax_12:1.b = (xmm0_14 == temp4_1 ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_14, temp4_1) ? 1 : 0) << 2 | (xmm0_14 < temp4_1 ? 1 : 0)
                    bool p_10 = unimplemented  {test ah, 0x44}
                    
                    if (p_10)
                        goto label_504c8c
                    
                    float xmm0_15 = ecx_9[1]
                    float temp5_1 = data_63c264:4
                    xmm0_15 - temp5_1
                    eax_12:1.b = (xmm0_15 == temp5_1 ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_15, temp5_1) ? 1 : 0) << 2 | (xmm0_15 < temp5_1 ? 1 : 0)
                    bool p_12 = unimplemented  {test ah, 0x44}
                    
                    if (p_12)
                        goto label_504c8c
                    
                    float xmm0_16 = ecx_9[2]
                    float temp6_1 = data_63c264:8
                    xmm0_16 - temp6_1
                    eax_12:1.b = (xmm0_16 == temp6_1 ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_16, temp6_1) ? 1 : 0) << 2 | (xmm0_16 < temp6_1 ? 1 : 0)
                    bool p_14 = unimplemented  {test ah, 0x44}
                    
                    if (p_14)
                        goto label_504c8c
                    
                    float xmm0_17 = ecx_9[3]
                    float temp7_1 = data_63c264:0xc
                    xmm0_17 - temp7_1
                    eax_12:1.b = (xmm0_17 == temp7_1 ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_17, temp7_1) ? 1 : 0) << 2 | (xmm0_17 < temp7_1 ? 1 : 0)
                    bool p_16 = unimplemented  {test ah, 0x44}
                    
                    if (p_16)
                        goto label_504c8c
                
                int64_t var_118
                void* var_230_2 = &var_118:4
                result = sub_5032e0(&var_48, arg2, ecx_9, &var_48)
                
                if (var_114_1:3.b != 0)
                    int32_t eax_14 = *(arg3 + 0x38)
                    int32_t ecx_11 = *(esi_2 + 0xfc) - 1
                    
                    if (eax_14 s< 0)
                        eax_14 = 0
                    else if (eax_14 s> ecx_11)
                        eax_14 = ecx_11
                    
                    int32_t edx_5 = *(esi_2 + 0xf8)
                    int32_t ecx_13 = *(arg3 + 0x34)
                    
                    if (ecx_13 s< 0)
                        ecx_13 = 0
                    else if (ecx_13 s> edx_5 - 1)
                        ecx_13 = edx_5 - 1
                    
                    if (eax_14 s< 0 || eax_14 s>= *(esi_2 + 0xfc) || ecx_13 s< 0 || ecx_13 s>= edx_5)
                        char const* const var_230_35 = "SpriteUVFromStrip"
                        int32_t var_234_15 = 0x4ad
                        char const* const var_238_13 = "d:\ax\trunk\ax2017\engine\sprite.cpp"
                        sub_489550(eax_14, &data_5b2591, 
                            "x >= 0 && x < numCols && y >= 0 && y < numRows", 
                            "d:\ax\trunk\ax2017\engine\sprite.cpp", 0x4ad, "SpriteUVFromStrip")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_489700()
                        noreturn
                    
                    float xmm0_21 = _mm_cvtepi32_ps(zx.o(*(esi_2 + 0xfc)))
                    float xmm4_2 = _mm_cvtepi32_ps(zx.o(eax_14))
                    float xmm2_3 = _mm_cvtepi32_ps(zx.o(eax_14 + 1)) / xmm0_21
                    float xmm1_2 = _mm_cvtepi32_ps(zx.o(edx_5))
                    int32_t* ecx_14 = *(esi_2 + 0x150)
                    int32_t* edx_6 = *(esi_2 + 0x148)
                    var_178 = xmm4_2 / xmm0_21
                    float var_170_2 = xmm2_3
                    float var_16c_2 = _mm_cvtepi32_ps(zx.o(ecx_13 + 1)) / xmm1_2
                    float var_174_2 = _mm_cvtepi32_ps(zx.o(ecx_13)) / xmm1_2
                    float xmm0_25[0x4] = var_178.o
                    var_138 = xmm0_25
                    var_138 = xmm0_25
                    
                    if (ecx_14 != 0)
                        edx_6 = sub_50c290(ecx_14)
                    
                    int32_t* ecx_15 = eax_8[7]
                    int32_t eax_19 = *(esi_2 + 0x158)
                    
                    if (ecx_15 != 0)
                        edx_6 = ecx_15
                    
                    int32_t* var_1c8_1 = edx_6
                    int32_t ecx_17 = eax_8[6]
                    
                    if (ecx_17 != 0)
                        eax_19 = ecx_17
                    
                    var_1ac_1.d = eax_19
                    void* eax_20 = data_114e818
                    *(eax_6 + 0x2c) += 1
                    data_aca750.d = *(eax_20 + 0x2c) f- *(*(arg3 + 0x30) + 0x2e8)
                    
                    if (eax_8[0x1d].b == 0)
                        data_aca750.d = 0
                    
                    int64_t var_f8
                    int128_t var_e8
                    int128_t var_d8
                    int128_t var_c8
                    int128_t var_a8
                    float var_98[0x4]
                    void var_68
                    
                    if (*(esi_2 + 0x140) != 0)
                        if (edx_6 == 0)
                            if (data_1516738 s> *(*fsbase->ThreadLocalStoragePointer + 4))
                                int32_t* var_230_3 = &data_1516738
                                edx_6 = __Init_thread_header(&data_1516738)
                                
                                if (data_1516738 == 0xffffffff)
                                    int32_t var_14_1 = 0
                                    int32_t* var_230_4 = &data_1516738
                                    data_151673c = sub_4d0b50("sys/draw3d.material", 5)
                                    int32_t var_14_2 = 0xffffffff
                                    edx_6 = __Init_thread_footer(&data_1516738)
                            
                            var_1c8_1 = data_151673c
                        
                        int128_t* eax_31 = *(esi_2 + 0x160)
                        
                        if (eax_31 u> 4)
                            char const* const var_230_37 = "ParticleSpotDraw"
                            int32_t var_234_17 = 0x8a7
                            char const* const var_238_15 = "d:\ax\trunk\ax2017\engine\particle.cpp"
                            sub_489550(eax_31, &data_5b2591, "Halt", 
                                "d:\ax\trunk\ax2017\engine\particle.cpp", 0x8a7, "ParticleSpotDraw")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_489700()
                            noreturn
                        
                        float xmm7_1 = var_38_1:0xc.d
                        int128_t xmm1_3 = data_aca2a0
                        int32_t* var_230_5
                        int64_t* eax_30
                        int64_t* const edx_7
                        
                        switch (eax_31)
                            case 1
                                int32_t eax_27 = data_aca2b8
                                var_138[1].q = data_aca2b0
                                float xmm4_5 = var_138[1] f- var_38_1:4.d
                                float xmm2_5 = var_138[2] f- var_38_1:8.d
                                var_148 = xmm1_3
                                var_138[3] = eax_27
                                float xmm3_5 = var_138[3] - xmm7_1
                                float xmm1_8 = 1f / (
                                    sub_41dbe0(xmm4_5 * xmm4_5 + xmm2_5 * xmm2_5 + xmm3_5 * xmm3_5)
                                    + 9.99999975e-06f)
                                float xmm4_7[0x4] = xmm4_5 * xmm1_8
                                int64_t xmm2_7 = xmm2_5 * xmm1_8
                                float xmm3_7 = xmm3_5 * xmm1_8
                                var_f8 = _mm_unpacklo_ps(xmm4_7, xmm2_7)
                                float xmm3_8 = xmm3_7 * 0f
                                float var_f0_1 = xmm3_7
                                int64_t xmm1_10 = xmm2_7.d - xmm3_8
                                float xmm3_9 = xmm3_8 f- xmm4_7
                                var_118 = xmm1_10
                                float xmm4_9 = xmm4_7 f* 0f - xmm2_7 f* 0f
                                edx_7 = &data_5d2300
                                float xmm1_15 = 1f / (
                                    sub_41dbe0(xmm1_10.d f* xmm1_10 + xmm3_9 * xmm3_9 + xmm4_9 * xmm4_9)
                                    + 9.99999975e-06f)
                                float var_110_2 = xmm4_9 * xmm1_15
                                var_230_5 = &var_f8
                                var_118 = _mm_unpacklo_ps(var_118.d f* xmm1_15, xmm3_9 * xmm1_15)
                                eax_30 = &var_118
                            label_50532e:
                                eax_31, edx_6 = sub_41de50(&var_138, edx_7, &data_5d2318, &var_138, 
                                    eax_30, var_230_5)
                                xmm1_3 = data_aca2a0
                                var_48 = *eax_31
                            case 2
                                var_138[3] = sub_41f100(-0.785398185f)
                                float xmm0_47[0x4]
                                edx_6, xmm0_47 = sub_41f120(-0.785398185f)
                                int64_t xmm1_17 = xmm0_47[0] * 0f
                                int64_t xmm0_48 = _mm_unpacklo_ps(xmm0_47, xmm1_17)
                                xmm1_3 = data_aca2a0
                                var_138[2] = xmm1_17
                                var_138[0].q = xmm0_48
                                var_48 = var_138
                            case 3
                                float xmm3_12 = var_48:4.d
                                float xmm2_9 = var_38_1.d
                                float xmm5_1 = var_48:0xc.d
                                var_138[1].q = data_aca2b0
                                var_148 = xmm1_3
                                float xmm1_18 = var_48:8.d
                                var_138[3] = data_aca2b8
                                float xmm6_3 = xmm3_12 * xmm5_1 + xmm2_9 * xmm1_18
                                float xmm6_4[0x4] = xmm6_3 + xmm6_3
                                float xmm4_14 = xmm5_1 * xmm1_18 - xmm3_12 * xmm2_9
                                float xmm1_21 = var_138[1] f- var_38_1:4.d
                                float var_1bc_3 = xmm6_4
                                float xmm3_15 = var_138[2] f- var_38_1:8.d
                                int64_t xmm4_15 = xmm4_14 + xmm4_14
                                float xmm5_5 = xmm5_1 * xmm5_1 - xmm1_18 * xmm1_18 - xmm3_12 * xmm3_12
                                    + xmm2_9 * xmm2_9
                                float xmm2_12 = var_138[3] - xmm7_1
                                var_118 = _mm_unpacklo_ps(xmm6_4, xmm4_15)
                                float var_1c0_1 = xmm4_15
                                float var_110_3 = xmm5_5
                                float xmm1_26 = 1f / (sub_41dbe0(xmm1_21 * xmm1_21 + xmm3_15 * xmm3_15
                                    + xmm2_12 * xmm2_12) + 9.99999975e-06f)
                                float xmm5_7 = xmm1_21 * xmm1_26
                                float xmm3_17 = xmm2_12 * xmm1_26
                                float xmm4_17 = xmm3_15 * xmm1_26
                                float xmm2_15 = xmm5_7 * xmm5_5 - xmm3_17 * var_1bc_3
                                float xmm1_29 = xmm3_17 * var_1c0_1 - xmm5_5 * xmm4_17
                                float xmm7_5 = var_1bc_3 * xmm4_17 - xmm5_7 * var_1c0_1
                                edx_7 = &data_5d22f4
                                float xmm1_34 = 1f / (
                                    sub_41dbe0(xmm1_29 * xmm1_29 + xmm2_15 * xmm2_15 + xmm7_5 * xmm7_5)
                                    + 9.99999975e-06f)
                                float var_f0_4 = xmm1_34 * xmm7_5
                                var_230_5 = &var_118
                                var_f8 = _mm_unpacklo_ps(xmm1_34 * xmm1_29, xmm1_34 * xmm2_15)
                                eax_30 = &var_f8
                                goto label_50532e
                            case 4
                                eax_31, edx_6 = sub_4f4aa0(&var_138, arg3 + 0xc, &data_5d2318, &var_138)
                                xmm1_3 = data_aca2a0
                                var_48 = *eax_31
                        
                        float xmm0_74 = arg2[3]
                        xmm0_74 f- 0
                        eax_31:1.b = (xmm0_74 == 0f ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_74, 0f) ? 1 : 0) << 2 | (xmm0_74 < 0f ? 1 : 0)
                        bool p_18 = unimplemented  {test ah, 0x44}
                        
                        if (p_18)
                            int64_t xmm0_75 = data_aca2b0
                            var_138[3] = data_aca2b8
                            var_138[1].q = xmm0_75
                            var_148 = xmm1_3
                            float eax_39 = eax_8[0x12]
                            var_118 = *(eax_8 + 0x40)
                            float xmm1_37 = var_118.d - var_138[1]
                            float xmm2_20 = var_114_1 - var_138[2]
                            float xmm3_20 = eax_39 - var_138[3]
                            float xmm0_81
                            edx_6, xmm0_81 =
                                sub_41dbe0(xmm1_37 * xmm1_37 + xmm2_20 * xmm2_20 + xmm3_20 * xmm3_20)
                            float xmm3_21 = arg2[3]
                            float xmm4_18 = 1f / (xmm0_81 + 9.99999975e-06f)
                            float xmm1_46 = xmm3_21 * xmm4_18 * xmm2_20 f+ var_38_1:8.d
                            float xmm3_23 = xmm3_21 * xmm4_18 * xmm3_20 f+ var_38_1:0xc.d
                            var_38_1:4.d = xmm3_21 * xmm4_18 * xmm1_37 f+ var_38_1:4.d
                            var_38_1:8.d = xmm1_46
                            var_38_1:0xc.d = xmm3_23
                        
                        int128_t* eax_41 = sub_482820(&var_a8, edx_6, &var_48, &var_a8)
                        var_e8 = *eax_41
                        var_d8 = eax_41[1]
                        var_c8 = eax_41[2]
                        int128_t var_b8_1 = eax_41[3]
                        int128_t* eax_43 = sub_4be7c0(&var_68, edx_6, arg2, &var_68)
                        var_a8 = *eax_43
                        var_98 = eax_43[1]
                        int128_t var_88_1 = eax_43[2]
                        int128_t var_78 = eax_43[3]
                        int128_t* eax_44 = sub_497aa0(&var_68)
                        var_a8 = *eax_44
                        var_98 = eax_44[1]
                        int128_t var_88_2 = eax_44[2]
                        int128_t var_78_1 = eax_44[3]
                        float (* eax_45)[0x4] = sub_497740(&var_138, var_1d0_1)
                        var_138 = *eax_45
                        sub_492210(&var_138)
                        int32_t var_238_2 = 0
                        int32_t var_23c_1 = var_1ac_1.d
                        int32_t* var_240_1 = var_1c8_1
                        result = sub_494ea0(eax_45, &var_a8, *(esi_2 + 0x140))
                        sub_492210(&data_5d2464)
                        data_aca750.d = 0
                    else
                        int64_t var_128
                        int64_t var_108
                        
                        if (eax_8[0x1d].b == 0)
                            if (edx_6 == 0 && *(esi_2 + 0xe9) != edx_6.b)
                                if (data_1516750 s> *(*fsbase->ThreadLocalStoragePointer + 4))
                                    int32_t* var_230_25 = &data_1516750
                                    __Init_thread_header(&data_1516750)
                                    
                                    if (data_1516750 == 0xffffffff)
                                        int32_t var_14_7 = 3
                                        int32_t* var_230_26 = &data_1516750
                                        data_1516754 = sub_4d0b50("sys\SpriteAdditive.material", 5)
                                        int32_t var_14_8 = 0xffffffff
                                        __Init_thread_footer(&data_1516750)
                                
                                var_1c8_1 = data_1516754
                            
                            float xmm0_177 = *(arg3 + 0x24)
                            xmm0_177 - 0f
                            int32_t* eax_22
                            eax_22:1.b = (xmm0_177 == 0f ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_177, 0f) ? 1 : 0) << 2 | (xmm0_177 < 0f ? 1 : 0)
                            bool p_26 = unimplemented  {test ah, 0x44}
                            int128_t xmm0_178
                            
                            if (p_26)
                                float xmm0_179 = xmm0_177 * 0.5f
                                int32_t var_11c_3 = sub_41f100(xmm0_179)
                                float xmm0_182 = sub_41f120(xmm0_179)
                                float xmm1_96[0x4] = xmm0_182 * 0f
                                float var_120_7 = xmm0_182
                                var_128 = _mm_unpacklo_ps(xmm1_96, xmm1_96)
                                xmm0_178 = var_128.o
                            else
                                xmm0_178 = data_5d2b78
                            
                            bool cond:3_1 = *(esi_2 + 0x160) != 4
                            var_178.o = xmm0_178
                            float var_100_11 = 0f
                            var_1dc = var_178.o
                            var_108 = 0
                            
                            if (not(cond:3_1))
                                int64_t xmm3_59 = *(arg3 + 0xc)
                                float xmm0_185 = *(arg3 + 0x10)
                                var_f8 = xmm3_59
                                float xmm1_100 = *(arg3 + 0x14)
                                float xmm1_102 = 1f / (sub_41dbe0(xmm0_185 * xmm0_185
                                    + xmm3_59.d f* xmm3_59 + xmm1_100 * xmm1_100) + 9.99999975e-06f)
                                float var_11c_4 = *(arg3 + 0x14) * xmm1_102
                                var_128 =
                                    _mm_unpacklo_ps(var_f8.d f* xmm1_102, *(arg3 + 0x10) * xmm1_102)
                                var_48 = *sub_41e000(&var_178, &data_5d22f4, &var_128:4, &var_178)
                            
                            float xmm2_58[0x4] = *(esi_2 + 0x108)
                            xmm2_58 f- 0
                            int128_t* eax_103
                            eax_103:1.b = (xmm2_58 f== 0f ? 1 : 0) << 6
                                | (is_unordered.d(xmm2_58, 0f) ? 1 : 0) << 2 | (xmm2_58 f< 0f ? 1 : 0)
                            bool p_28 = unimplemented  {test ah, 0x44}
                            bool p_30
                            
                            if (not(p_28))
                                float xmm0_194 = *(esi_2 + 0x10c)
                                xmm0_194 f- 0
                                eax_103:1.b = (xmm0_194 == 0f ? 1 : 0) << 6
                                    | (is_unordered.d(xmm0_194, 0f) ? 1 : 0) << 2
                                    | (xmm0_194 < 0f ? 1 : 0)
                                p_30 = unimplemented  {test ah, 0x44}
                            
                            if (p_28 || p_30)
                                int32_t var_170_7 = 0
                                int32_t var_11c_5 = 0
                                var_128 = _mm_unpacklo_ps(xmm2_58, *(esi_2 + 0x10c))
                                float* eax_107 = sub_497ae0(&var_178, &var_128:4, &var_1dc, &var_178)
                                float eax_108 = eax_107[2]
                                var_f8 = *eax_107
                                float xmm0_198 = arg2[2] f* eax_108
                                var_108 = _mm_unpacklo_ps(var_f8.d f* *arg2, arg2[1] f* var_f8:4.d)
                                var_100_11 = xmm0_198
                            
                            int32_t* edx_31 = &var_1dc
                            int128_t* eax_112 = sub_507f60(&var_a8, edx_31, &var_108, &var_a8, arg2)
                            var_e8 = *eax_112
                            var_d8 = eax_112[1]
                            var_c8 = eax_112[2]
                            int128_t var_b8_2 = eax_112[3]
                            void var_1a8
                            int128_t* eax_114 = sub_482820(&var_1a8, edx_31, &var_48, &var_1a8)
                            var_a8 = *eax_114
                            var_98 = eax_114[1]
                            int128_t var_88_3 = eax_114[2]
                            int128_t var_78_3 = eax_114[3]
                            float* eax_116 = sub_497e60(&var_68, &var_e8, &var_a8, &var_68)
                            bool cond:4_1 = *(arg3 + 0x40) == 0
                            float xmm1_105[0x4] = *eax_116
                            float xmm2_63[0x4] = *(eax_116 + 0x10)
                            var_c8 = *(eax_116 + 0x20)
                            int128_t xmm0_208 = *(eax_116 + 0x30)
                            var_38_1:4.d = 0
                            int32_t var_4c = xmm1_105
                            int128_t var_b8_3 = xmm0_208
                            var_38_1:8.d = 0
                            var_48:8.d = xmm2_63
                            var_48.d = _mm_shuffle_ps(xmm1_105, xmm1_105, 0x55)
                            int32_t xmm0_212 = _mm_shuffle_ps(xmm2_63, xmm2_63, 0x55)
                            int32_t xmm1_106 = _mm_shuffle_ps(xmm1_105, xmm1_105, 0xff)
                            int32_t xmm2_64 = _mm_shuffle_ps(xmm2_63, xmm2_63, 0xff)
                            var_48:4.d = xmm1_106
                            var_48:0xc.d = xmm0_212
                            var_38_1.d = xmm2_64
                            var_38_1:0xc.d = 0x3f800000
                            int32_t* esi_5
                            
                            if (cond:4_1 || *(esi_2 + 0xe8) == 0)
                                esi_5 = var_1c8_1
                            else
                                var_128 = _mm_unpacklo_ps(var_108.d - 1f, var_108:4.d + 1f)
                                float var_11c_6 = var_100_11 + 0f
                                int128_t* eax_119 =
                                    sub_507f60(&var_1a8, &var_1dc, &var_128:4, &var_1a8, arg2)
                                var_e8 = *eax_119
                                var_d8 = eax_119[1]
                                var_c8 = eax_119[2]
                                int128_t var_b8_4 = eax_119[3]
                                float var_220[0x11]
                                float* eax_121 = sub_497e60(&var_220, &var_e8, &var_a8, &var_220)
                                esi_5 = var_1c8_1
                                int32_t* var_1b4_1
                                var_1b4_1.w = 0
                                var_1b4_1:2.b = 0
                                var_b8_4:4.d = 0
                                float xmm1_109[0x4] = *eax_121
                                float xmm2_68[0x4] = *(eax_121 + 0x10)
                                var_b8_4:8.d = 0
                                int128_t var_88_4 = *(eax_121 + 0x20)
                                var_b8_4:0xc.d = 0x3f800000
                                int128_t xmm0_220 = *(eax_121 + 0x30)
                                eax_121.b = var_1ad_1
                                eax_121.b u>>= 2
                                var_1b4_1:3.b = eax_121.b
                                int128_t var_78_4 = xmm0_220
                                int32_t var_1b4_3 = 0
                                int32_t var_f0_20 = 0
                                var_c8.d = _mm_shuffle_ps(xmm1_109, xmm1_109, 0x55)
                                int32_t xmm0_224 = _mm_shuffle_ps(xmm2_68, xmm2_68, 0x55)
                                var_d8:0xc.d = xmm1_109
                                var_c8:8.d = xmm2_68
                                int32_t xmm1_110 = _mm_shuffle_ps(xmm1_109, xmm1_109, 0xff)
                                int32_t xmm2_69 = _mm_shuffle_ps(xmm2_68, xmm2_68, 0xff)
                                var_f8:4.d = 0
                                var_c8:4.d = xmm1_110
                                var_c8:0xc.d = xmm0_224
                                var_b8_4.d = xmm2_69
                                sub_4c0280(&var_138, &var_d8:0xc, var_1ac_1.d, &var_138, &var_f8:4, 
                                    esi_5)
                            
                            int32_t* eax_125 = var_1ac_1.d
                            
                            if (eax_125 == 0)
                                int32_t var_230_33 = 0x53
                                void* eax_124 = *(sub_4981f0(esi_5) + 8)
                                eax_125 = sub_4f0ef0(eax_124, *(eax_124 + 8) + 8, &data_624734, 0x53)
                            
                            result = sub_4c0280(eax_125, &var_4c, eax_125, &var_138, &var_118:4, esi_5)
                            data_aca750.d = 0
                        else
                            if (edx_6 == 0)
                                void* ecx_24 = *fsbase->ThreadLocalStoragePointer
                                int32_t* eax_51
                                
                                if (*(esi_2 + 0xe9) == edx_6.b)
                                    if (data_1516748 s> *(ecx_24 + 4))
                                        int32_t* var_230_13 = &data_1516748
                                        __Init_thread_header(&data_1516748)
                                        
                                        if (data_1516748 == 0xffffffff)
                                            int32_t var_14_5 = 2
                                            int32_t* var_230_14 = &data_1516748
                                            data_151674c = sub_4d0b50("sys/particle_3d.material", 5)
                                            int32_t var_14_6 = 0xffffffff
                                            __Init_thread_footer(&data_1516748)
                                    
                                    eax_51 = data_151674c
                                else
                                    if (data_1516740 s> *(ecx_24 + 4))
                                        int32_t* var_230_11 = &data_1516740
                                        __Init_thread_header(&data_1516740)
                                        
                                        if (data_1516740 == 0xffffffff)
                                            int32_t var_14_3 = 1
                                            int32_t* var_230_12 = &data_1516740
                                            data_1516744 =
                                                sub_4d0b50("sys/particle_3d_additive.material", 5)
                                            int32_t var_14_4 = 0xffffffff
                                            __Init_thread_footer(&data_1516740)
                                    
                                    eax_51 = data_1516744
                                
                                var_1c8_1 = eax_51
                            
                            int32_t ecx_25
                            
                            if (*(esi_2 + 0xea) != 0 || *(esi_2 + 0xeb) != 0)
                                ecx_25 = *(arg3 + 0x284)
                            
                            if ((*(esi_2 + 0xea) == 0 && *(esi_2 + 0xeb) == 0) || ecx_25 s<= 1)
                                __builtin_memcpy(&var_98, 
                                    "\x00\x00\x00\xbf\x00\x00\x00\xbf\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x"
                                "00\x00\xbf\x00\x00\x00\x00\x00\x00\x00\xbf\x00\x00\x00\x3f\x00\x00\x00"
                                "00\x00\x00\x00\x3f\x00\x00\x00\x3f\x00\x00\x00\x00", 
                                    0x30)
                                float* ecx_33 = &var_138
                                sub_4beb00(ecx_33, &var_c8)
                                var_1dc:8.d = *(esi_2 + 0x100)
                                int32_t var_1d0_2 = *(esi_2 + 0x104)
                                
                                if (*(*(*(arg3 + 0x30) + 0x2e4) + 0x18) != 0)
                                    float eax_72
                                    float edx_20
                                    eax_72, ecx_33, edx_20 = sub_48f600(var_1ac_1.d)
                                    float xmm0_103 = _mm_cvtepi32_ps(zx.o(*(esi_2 + 0xfc)))
                                    var_f8:4.d = eax_72
                                    float xmm3_26 = var_f8:4.d * 0.00999999978f / xmm0_103
                                    float xmm0_105 = _mm_cvtepi32_ps(zx.o(*(esi_2 + 0xf8)))
                                    var_1dc:8.d = xmm3_26
                                    float var_1d0_3 = edx_20 * 0.00999999978f / xmm0_105
                                
                                int32_t eax_73 = *(esi_2 + 0x160)
                                
                                if (eax_73 u> 4)
                                    char const* const var_230_39 = "ParticleSpotDraw"
                                    int32_t var_234_19 = 0x94e
                                    char const* const var_238_17 =
                                        "d:\ax\trunk\ax2017\engine\particle.cpp"
                                    sub_489550(eax_73, &data_5b2591, "Halt", 
                                        "d:\ax\trunk\ax2017\engine\particle.cpp", 0x94e, 
                                        "ParticleSpotDraw")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_489700()
                                    noreturn
                                
                                float xmm7_6 = var_38_1:0xc.d
                                int128_t xmm1_47 = data_aca2a0
                                int128_t* eax_76
                                int64_t* edx_22
                                int128_t xmm0_127
                                int64_t xmm2_33
                                
                                switch (eax_73)
                                    case 0
                                        var_138[3] = sub_41f100(-0.785398185f)
                                        float xmm0_107[0x4] = sub_41f120(-0.785398185f)
                                        ecx_33 = &var_138
                                        int64_t xmm1_49 = xmm0_107[0] * 0f
                                        int64_t xmm0_108 = _mm_unpacklo_ps(xmm0_107, xmm1_49)
                                        var_138[2] = xmm1_49
                                        var_138[0].q = xmm0_108
                                        var_138 = var_138
                                        xmm0_127 = *sub_482af0(&var_178, &var_48:4, ecx_33, &var_178)
                                        xmm1_47 = data_aca2a0
                                    case 1
                                        int64_t xmm0_110 = data_aca2b0
                                        int32_t eax_77 = data_aca2b8
                                        var_148 = xmm1_47
                                        var_138[3] = eax_77
                                        float xmm3_28 = xmm7_6 - var_138[3]
                                        var_138[1].q = xmm0_110
                                        float xmm1_51 = var_38_1:4.d - var_138[1]
                                        float xmm2_27 = var_38_1:8.d - var_138[2]
                                        float xmm3_29 = 1f / (sub_41dbe0(xmm1_51 * xmm1_51
                                            + xmm2_27 * xmm2_27 + xmm3_28 * xmm3_28) + 9.99999975e-06f)
                                        float xmm4_21[0x4] = xmm3_29 * xmm1_51
                                        int64_t xmm2_29 = xmm3_29 * xmm2_27
                                        float xmm3_30 = xmm3_29 * xmm3_28
                                        var_128 = _mm_unpacklo_ps(xmm4_21, xmm2_29)
                                        float xmm3_31 = xmm3_30 * 0f
                                        float var_11c_1 = xmm3_30
                                        float xmm1_57 = xmm2_29.d - xmm3_31
                                        float xmm3_32 = xmm3_31 f- xmm4_21
                                        float xmm4_23 = xmm4_21 f* 0f - xmm2_29 f* 0f
                                        edx_22 = &data_5d22f4
                                        float xmm1_62 = 1f / (sub_41dbe0(xmm1_57 * xmm1_57
                                            + xmm3_32 * xmm3_32 + xmm4_23 * xmm4_23) + 9.99999975e-06f)
                                        xmm2_33 = _mm_unpacklo_ps(xmm1_62 * xmm1_57, xmm1_62 * xmm3_32)
                                        float var_f0_12 = xmm1_62 * xmm4_23
                                    label_505d37:
                                        var_f8 = xmm2_33
                                        eax_76, ecx_33 = sub_41de50(&var_138, edx_22, &data_5d2318, 
                                            &var_138, &var_f8, &var_128:4)
                                        xmm0_127 = *eax_76
                                        xmm1_47 = data_aca2a0
                                    case 2
                                        xmm0_127 = data_5d2b78
                                    case 3
                                        float xmm3_33 = var_48:4.d
                                        float xmm2_34 = var_38_1.d
                                        float xmm5_9 = var_48:0xc.d
                                        var_138[1].q = data_aca2b0
                                        var_148 = xmm1_47
                                        float xmm1_64 = var_48:8.d
                                        var_138[3] = data_aca2b8
                                        float xmm6_8 = xmm3_33 * xmm5_9 + xmm2_34 * xmm1_64
                                        float xmm6_9[0x4] = xmm6_8 + xmm6_8
                                        float xmm4_26 = xmm5_9 * xmm1_64 - xmm3_33 * xmm2_34
                                        float xmm1_67 = var_138[1] f- var_38_1:4.d
                                        float var_1b8_5 = xmm6_9
                                        float xmm3_36 = var_138[3] - xmm7_6
                                        int64_t xmm4_27 = xmm4_26 + xmm4_26
                                        float xmm5_13 = xmm5_9 * xmm5_9 - xmm1_64 * xmm1_64
                                            - xmm3_33 * xmm3_33 + xmm2_34 * xmm2_34
                                        float xmm2_37 = var_138[2] f- var_38_1:8.d
                                        var_128 = _mm_unpacklo_ps(xmm6_9, xmm4_27)
                                        float var_11c_2 = xmm5_13
                                        float var_1cc_4 = xmm4_27
                                        float xmm1_72 = 1f / (sub_41dbe0(xmm1_67 * xmm1_67
                                            + xmm2_37 * xmm2_37 + xmm3_36 * xmm3_36) + 9.99999975e-06f)
                                        float xmm5_15 = xmm1_72 * xmm2_37
                                        float xmm1_73 = xmm1_72 * xmm3_36
                                        float xmm2_39 = xmm1_72 * xmm1_67
                                        float xmm3_39 = xmm2_39 * xmm5_13 - xmm1_73 * var_1b8_5
                                        int64_t xmm4_30 = xmm1_73 * var_1cc_4 - xmm5_15 * xmm5_13
                                        float xmm5_17 = xmm5_15 * var_1b8_5 - var_1cc_4 * xmm2_39
                                        var_108 = xmm4_30
                                        edx_22 = &var_108
                                        float xmm1_79 = 1f / (sub_41dbe0(xmm4_30.d f* xmm4_30
                                            + xmm3_39 * xmm3_39 + xmm5_17 * xmm5_17) + 9.99999975e-06f)
                                        xmm2_33 =
                                            _mm_unpacklo_ps(var_108.d f* xmm1_79, xmm3_39 * xmm1_79)
                                        int32_t var_170_3 = 0x80000000
                                        float var_f0_16 = xmm5_17 * xmm1_79
                                        var_108 = _mm_unpacklo_ps(0x80000000, 0xbf800000)
                                        int32_t var_100_8 = 0x80000000
                                        goto label_505d37
                                    case 4
                                        eax_76, ecx_33 =
                                            sub_4f4aa0(&var_138, arg3 + 0xc, &data_5d2318, &var_138)
                                        xmm0_127 = *eax_76
                                        xmm1_47 = data_aca2a0
                                
                                var_48 = xmm0_127
                                float xmm0_151 = arg2[3]
                                xmm0_151 - 0f
                                int32_t* eax_85
                                eax_85:1.b = (xmm0_151 == 0f ? 1 : 0) << 6
                                    | (is_unordered.d(xmm0_151, 0f) ? 1 : 0) << 2
                                    | (xmm0_151 < 0f ? 1 : 0)
                                bool p_20 = unimplemented  {test ah, 0x44}
                                int32_t* eax_89
                                
                                if (not(p_20))
                                    eax_89 = arg2
                                else
                                    int64_t xmm0_152 = data_aca2b0
                                    var_138[3] = data_aca2b8
                                    var_138[1].q = xmm0_152
                                    var_148 = xmm1_47
                                    float eax_88 = eax_8[0x12]
                                    var_108 = *(eax_8 + 0x40)
                                    float xmm1_82 = var_108.d - var_138[1]
                                    float xmm2_43 = var_108:4.d - var_138[2]
                                    float xmm3_43 = eax_88 - var_138[3]
                                    float xmm0_158
                                    ecx_33, xmm0_158 = sub_41dbe0(xmm1_82 * xmm1_82 + xmm2_43 * xmm2_43
                                        + xmm3_43 * xmm3_43)
                                    eax_89 = arg2
                                    float xmm1_87 = 1f / (xmm0_158 + 9.99999975e-06f)
                                    float xmm1_88 = eax_89[3]
                                    float xmm2_47 = xmm2_43 * xmm1_87 * xmm1_88 f+ var_38_1:8.d
                                    float xmm3_47 = xmm3_43 * xmm1_87 * xmm1_88 f+ var_38_1:0xc.d
                                    var_38_1:4.d = xmm1_82 * xmm1_87 * xmm1_88 f+ var_38_1:4.d
                                    var_38_1:8.d = xmm2_47
                                    var_38_1:0xc.d = xmm3_47
                                
                                float* var_234_7 = ecx_33
                                float var_168[0x8]
                                sub_503c20(&var_1dc:8, &var_48, &var_168, &var_1dc:8, esi_2 + 0x108, 
                                    *(arg3 + 0x24), eax_89)
                                float* ecx_36 = &var_98
                                sub_5021c0(ecx_36, &var_168)
                                float xmm0_165 = arg2[0x17]
                                xmm0_165 f- 0
                                float eax_92
                                eax_92:1.b = (xmm0_165 == 0f ? 1 : 0) << 6
                                    | (is_unordered.d(xmm0_165, 0f) ? 1 : 0) << 2
                                    | (xmm0_165 < 0f ? 1 : 0)
                                bool p_22 = unimplemented  {test ah, 0x44}
                                bool p_24
                                
                                if (not(p_22))
                                    float xmm0_166 = arg2[0x18]
                                    xmm0_166 f- 0
                                    eax_92:1.b = (xmm0_166 == 0f ? 1 : 0) << 6
                                        | (is_unordered.d(xmm0_166, 0f) ? 1 : 0) << 2
                                        | (xmm0_166 < 0f ? 1 : 0)
                                    p_24 = unimplemented  {test ah, 0x44}
                                
                                if (p_22 || p_24)
                                    void* edx_27 = &var_98[2]
                                    int32_t* i_3 = nullptr
                                    void* var_1b4_2 = &var_98[2]
                                    int32_t* i
                                    
                                    do
                                        int32_t eax_94 = data_aca2b8
                                        float xmm3_48 = *(edx_27 - 8)
                                        float xmm1_89 = *(edx_27 - 4)
                                        float xmm2_48 = *edx_27
                                        var_148 = data_aca2a0
                                        var_138[3] = eax_94
                                        float xmm2_49 = xmm2_48 - var_138[3]
                                        var_138[1].q = data_aca2b0
                                        float xmm3_49 = xmm3_48 - var_138[1]
                                        float xmm1_90 = xmm1_89 - var_138[2]
                                        float xmm3_55 = (sub_41dbe0(xmm3_49 * xmm3_49
                                            + xmm1_90 * xmm1_90 + xmm2_49 * xmm2_49) f- arg2[0x17])
                                            / (arg2[0x18] f- arg2[0x17])
                                        int32_t xmm0_173 = (zx.o(0)).d
                                        
                                        if (not(0 f>= xmm3_55))
                                            if (xmm3_55 < 1f)
                                                xmm0_173 = sub_41f140(1, xmm3_55, (zx.o(0)).d, 1f)
                                            else
                                                xmm0_173 = 0x3f800000
                                        
                                        char* var_1bc_6 = sub_4bea10(&var_118:4, &data_aca230, xmm0_173)
                                        edx_27 = var_1b4_2 + 0xc
                                        char* eax_95
                                        eax_95.b = var_114_1:3.b
                                        var_1bc_6:3.b = eax_95.b
                                        *(&var_48:4 + (i_3 << 3)) = eax_11
                                        *(&var_48 + (i_3 << 3)) = var_1bc_6
                                        i = i_3 + 1
                                        i_3 = i
                                        var_1b4_2 = edx_27
                                    while (i s< 4)
                                    
                                    float xmm1_93[0x4] = var_98
                                    int32_t* var_230_24 = var_1c8_1
                                    int128_t var_78_2
                                    float xmm3_57 =
                                        var_78_2:8.d + _mm_shuffle_ps(xmm1_93, xmm1_93, 0x55)
                                    int32_t var_248_1 = 1
                                    float xmm2_55 =
                                        (var_78_2:0xc.d + _mm_shuffle_ps(xmm1_93, xmm1_93, 0xaa)) * 0.5f
                                    result = sub_493420(&var_48, &var_c8, &var_98, &var_48, 1, 
                                        _mm_unpacklo_ps((var_78_2:4.d f+ xmm1_93) * 0.5f, 
                                            xmm3_57 * 0.5f), 
                                        xmm2_55, var_1ac_1.d, i)
                                    data_aca750.d = 0
                                else
                                    result = sub_493bf0(&var_118:4, &var_c8, ecx_36, &var_118:4, 
                                        var_1ac_1.d, var_1c8_1)
                                    data_aca750.d = 0
                            else
                                void* eax_53 = *(*(arg3 + 0x30) + 0x2e4)
                                
                                if (*(eax_53 + 0x75) == 0)
                                    int32_t eax_54 = ecx_25 * 9
                                    int32_t var_f0_6 = *(arg3 + (eax_54 << 2) + 0x28)
                                    var_f8 = *(arg3 + (eax_54 << 2) + 0x20)
                                    int64_t* eax_57 = sub_4dbbe0(&var_178, &var_f8, arg4, &var_178)
                                    int32_t eax_58 = eax_57[1].d
                                    var_f8 = *eax_57
                                    int32_t var_f0_7 = eax_58
                                    eax_53 = sub_496500(&var_f8)
                                    ecx_25 = *(arg3 + 0x284)
                                
                                if (ecx_25 s> 0x10)
                                    char const* const var_230_38 = "ParticleSpotDraw"
                                    int32_t var_234_18 = 0x8df
                                    char const* const var_238_16 =
                                        "d:\ax\trunk\ax2017\engine\particle.cpp"
                                    sub_489550(eax_53, &data_5b2591, 
                                        "pSpot->numTrailSegments <= MAX_TRAIL_SEGMENTS", 
                                        "d:\ax\trunk\ax2017\engine\particle.cpp", 0x8df, 
                                        "ParticleSpotDraw")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_489700()
                                    noreturn
                                
                                int32_t i_2 = 1
                                
                                if (ecx_25 s> 1)
                                    void* esi_3 = arg3 + 0x8c
                                    int32_t i_1
                                    
                                    do
                                        sub_4beb00(&var_138, &var_c8)
                                        float (* var_230_16)[0x4] = &var_138
                                        float* ecx_29 = esi_3
                                        
                                        if (i_2 == *(arg3 + 0x284) - 1)
                                            ecx_29 = nullptr
                                        
                                        int32_t edx_14 = neg.d(i_2 - 1)
                                        int32_t var_240_2 = 4
                                        sub_495590(
                                            sub_5044a0(esi_3 - 0x6c, 
                                                sbb.d(edx_14, edx_14, i_2 != 1) & (esi_3 - 0x6c), 
                                                &var_98, esi_3 - 0x48, esi_3 - 0x24, ecx_29, 
                                                *(esi_3 - 0x2c)), 
                                            &var_98, arg4)
                                        sub_493bf0(&var_118:4, &var_c8, &var_98, &var_118:4, 
                                            var_1ac_1.d, var_1c8_1)
                                        i_1 = i_2 + 1
                                        esi_3 += 0x24
                                        i_2 = i_1
                                    while (i_1 s< *(arg3 + 0x284))
                                
                                result = *(*(arg3 + 0x30) + 0x2e4)
                                
                                if (*(result + 0x75) != 0)
                                    data_aca750.d = 0
                                else
                                    sub_496580()
                                    data_aca750.d = 0
            else
                void* eax_10 = data_aca1ec
                var_178 = 0f
                int32_t var_174_1 = 0
                int32_t var_170_1 = _mm_cvtepi32_ps(zx.o(*(eax_10 + 0x14)))
                int32_t var_16c_1 = _mm_cvtepi32_ps(zx.o(*(eax_10 + 0x18)))
                var_138 = var_178.o
                result = sub_4c0580(&var_138, &var_1dc:0xc)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
