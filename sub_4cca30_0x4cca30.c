// 函数名称: sub_4cca30
// 虚拟地址: 0x4cca30
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int128_t* __convention("regparm")sub_4cca30(int32_t arg1, uint32_t (* arg2)[0x4], void* arg3, int32_t arg4 @ edi, float arg5 @ xmm3, int128_t* arg6)
{
    // 第一条实际指令: void var_1d8
    void var_1d8
    int32_t eax_1 = __security_cookie ^ &var_1d8
    void* var_1c8 = arg3
    float var_180[0x4]
    int128_t* eax_4 = sub_4c98a0(&var_180, arg2, *(arg3 + 4), arg5, &var_180, arg6)
    int32_t* ecx_1 = *(arg3 + 4)
    float xmm0[0x4] = *eax_4
    bool cond:0 = ecx_1[1] == 0x1e
    float var_b0[0x4] = xmm0
    float var_80[0x4] = xmm0
    int128_t xmm0_1 = eax_4[1]
    int128_t xmm0_2 = eax_4[2]
    int128_t xmm0_3 = eax_4[3]
    int128_t xmm0_4 = eax_4[4]
    int128_t xmm0_5 = eax_4[5]
    int32_t var_1e8_1
    char const* const var_1e4_1
    char* ecx_2
    
    if (cond:0)
        int32_t eax_6 = *sub_4981f0(ecx_1)
        float edi_2 = arg2 * 0x178 + eax_6
        eax_4 = sub_4ca090(eax_6, arg2, var_1c8, &data_5b2591)
        int32_t* ecx_5 = *(edi_2 i+ 4) - 1
        int32_t* esi_1 = eax_4
        void** var_1e8_3
        void* var_1e4_4
        int32_t var_1c0
        int128_t var_190
        int128_t var_a0
        
        switch (ecx_5)
            case nullptr
                int32_t var_1e4_3 = 0
                int32_t eax_11 = sub_4c9ab0(&var_80, esi_1, edi_2, &var_80, 0, ecx_5, nullptr)
                @__security_check_cookie@4(eax_1 ^ &var_1d8)
                return eax_11
            case 1
                if (*(edi_2 i+ 0xc8) == 0)
                    @__security_check_cookie@4(eax_1 ^ &var_1d8)
                    return eax_4
                
                bool cond:1_1 = *(edi_2 i+ 0xda) == 0
                void* eax_21 = data_114e814
                int128_t xmm0_15 = *(eax_21 + 0x28)
                int32_t eax_22 = *(eax_21 + 0x38)
                var_1c0 = eax_22
                var_190 = xmm0_15
                var_a0 = xmm0_15
                int128_t var_90
                var_90.d = eax_22
                void* var_1a0
                float xmm1_4[0x4]
                
                if (cond:1_1)
                    xmm1_4 = var_b0
                else
                    int128_t* eax_25 =
                        sub_4c8d30(&var_1a0, edi_2 i+ 0x10, &var_80, &var_1a0, edi_2 i+ 0x20)
                    bool cond:2_1 = var_1c0 != 0
                    var_b0 = *eax_25
                    void var_120
                    
                    if (cond:2_1)
                        eax_25 = sub_4be720(&var_120, &var_b0, &var_a0, &var_120)
                    void* eax_26 = data_114e814
                    xmm1_4 = var_80
                    *(eax_26 + 0x28) = *eax_25
                    *(eax_26 + 0x38) = 0xffffffff
                
                int128_t* var_1cc_2
                int32_t ecx_22
                int32_t edx_8
                
                if (esi_1[0x48] s<= *esi_1)
                    edx_8 = *(edi_2 i+ 0xb0)
                    ecx_22 = edx_8
                    eax_4 = *(edi_2 i+ 0xac)
                    var_1cc_2 = eax_4
                else
                    edx_8 = esi_1[0x4b]
                    ecx_22 = *(edi_2 i+ 0xb0)
                    var_1cc_2 = esi_1[0x4c]
                    eax_4 = *(edi_2 i+ 0xac)
                
                int32_t edx_10
                
                if (esi_1[0x48] s<= *esi_1)
                    edx_10 = ecx_22
                    var_1c8 = eax_4
                else
                    edx_10 = esi_1[0x49]
                    var_1c8 = esi_1[0x4a]
                
                var_b0[0] = edx_10
                var_b0[1] = var_1c8
                int32_t edx_12 = edx_8
                
                if (ecx_22 * eax_4 s<= 0x1e)
                    eax_4 = edx_12 * var_1cc_2
                    
                    if (eax_4 s<= 0x1e)
                        int32_t ecx_24 = 0
                        int128_t var_170 = xmm0_1
                        int128_t var_160 = xmm0_2
                        int128_t var_150 = xmm0_3
                        int128_t var_140 = xmm0_4
                        var_180 = xmm1_4
                        int128_t var_130 = xmm0_5
                        float xmm0_24 = esi_1[0x56] f+ var_180[1]
                        int32_t var_1c4_2 = 0
                        var_180[0] = xmm1_4 f+ esi_1[0x55]
                        var_180[1] = xmm0_24
                        
                        if (var_1cc_2 s> 0)
                            do
                                void* eax_32 = nullptr
                                var_1c8 = nullptr
                                
                                if (edx_12 s> 0)
                                    do
                                        var_1a0 = eax_32
                                        int32_t var_1e4_8 = ecx_24
                                        int32_t var_19c_1 = ecx_24
                                        void var_110
                                        int128_t* eax_34 = sub_4c92d0(&var_110, esi_1, edi_2, &var_110, 
                                            &var_180, &var_1a0, &var_b0)
                                        var_80 = *eax_34
                                        int128_t var_70_1 = eax_34[1]
                                        int128_t var_60_1 = eax_34[2]
                                        int128_t var_50_1 = eax_34[3]
                                        int128_t var_40_1 = eax_34[4]
                                        int128_t var_30_1 = eax_34[5]
                                        *(sub_4cac50(&var_1a0, esi_1, edi_2, &var_1a0) + 0x434)
                                        sub_4cd0d0(0x3f800000, arg4)
                                        edx_12 = edx_8
                                        eax_32 = var_1c8 + 1
                                        ecx_24 = var_1c4_2
                                        var_1c8 = eax_32
                                    while (eax_32 s< edx_12)
                                
                                ecx_24 += 1
                                var_1c4_2 = ecx_24
                            while (ecx_24 s< var_1cc_2)
                        
                        void* eax_38 = data_114e814
                        int32_t ecx_28 = var_1c0
                        *(eax_38 + 0x28) = var_190
                        *(eax_38 + 0x38) = ecx_28
                        @__security_check_cookie@4(eax_1 ^ &var_1d8)
                        return eax_38
                    
                    var_1e4_1 = "UIStateDrawElementInt"
                    var_1e8_1 = 0xa92
                    ecx_2 = "dimsUpdate.x * dimsUpdate.y <= 30"
                else
                    var_1e4_1 = "UIStateDrawElementInt"
                    var_1e8_1 = 0xa91
                    ecx_2 = "el.rows * el.cols <= 30"
            case 2
                var_1e4_4 = nullptr
                var_1e8_3 = nullptr
            label_4ccc6d:
                int32_t* eax_13 = sub_4cc510(&var_80, esi_1, edi_2, &var_80, var_1e8_3, var_1e4_4)
                @__security_check_cookie@4(eax_1 ^ &var_1d8)
                return eax_13
            case 3, 5
                @__security_check_cookie@4(eax_1 ^ &var_1d8)
                return eax_4
            case 4
                if (*(esi_1 + 0x21) != 0)
                    @__security_check_cookie@4(eax_1 ^ &var_1d8)
                    return eax_4
                
                int32_t* ecx_18 = *esi_1
                int32_t eax_14
                
                if (esi_1[0xd] s> ecx_18)
                    eax_14 = esi_1[0xe]
                else if (*(esi_1 + 0x23) != 0 || esi_1[9].b != 0)
                    eax_14 = 3
                else if (*(esi_1 + 0x29) == 0)
                    eax_14 = 0
                else
                    eax_4.b = *(esi_1 + 0x2b)
                    
                    if (eax_4.b == 0)
                        eax_14 = 1
                    else if (esi_1[0xb].b != 0)
                        eax_14 = 2
                    else if (eax_4.b != 0)
                        eax_14 = 0
                    else
                        eax_14 = 1
                
                int32_t var_1cc_1 = eax_14
                int32_t eax_15
                
                if (esi_1[0x53] s> ecx_18 && esi_1[0x54].b != 0 && eax_14 == 0)
                    var_1cc_1 = 1
                label_4ccd17:
                    eax_15 = *(edi_2 i+ 0x128)
                    goto label_4ccd1d
                
                if (eax_14 != 3)
                    if (eax_14 == 2)
                        eax_15 = *(edi_2 i+ 0x130)
                        goto label_4ccd1d
                    
                    if (eax_14 == 1)
                        goto label_4ccd17
                    
                label_4ccd21:
                    
                    if (esi_1[0x25] s<= ecx_18)
                        eax_15 = *(edi_2 i+ 0x88)
                    else
                        eax_15 = esi_1[0x26]
                else
                    eax_15 = *(edi_2 i+ 0x138)
                label_4ccd1d:
                    
                    if (eax_15 == 0)
                        goto label_4ccd21
                
                int32_t var_1e4_5 = 0
                sub_4c9ab0(&var_80, esi_1, edi_2, &var_80, eax_15, ecx_18, nullptr)
                int32_t* eax_17 = 0x140
                
                if (var_1cc_1 != 3)
                    eax_17 = 0xf0
                
                var_1c8 = *(eax_17 i+ edi_2)
                int32_t* eax_19 = 0x144
                
                if (var_1cc_1 != 3)
                    eax_19 = 0xf4
                
                var_1c0 = *(eax_19 i+ edi_2)
                var_1e4_4 = &var_1c0
                var_1e8_3 = &var_1c8
                goto label_4ccc6d
            case 8
                eax_4 = sub_4fd250(esi_1[0x28])
                
                if (eax_4 != 0)
                    int128_t* eax_8 =
                        sub_4c8d30(&var_190, edi_2 i+ 0x10, &var_80, &var_190, edi_2 i+ 0x20)
                    float xmm5_1 = *(edi_2 i+ 0xa0)
                    float xmm0_6 = *(edi_2 i+ 0x98)
                    var_b0[2] = 0
                    float xmm2_1[0x4] = *eax_8
                    float eax_9 = var_b0[2]
                    float xmm1_3 = _mm_shuffle_ps(xmm2_1, xmm2_1, 0xaa) f- xmm2_1
                    float xmm3_1 = _mm_shuffle_ps(xmm2_1, xmm2_1, 0x55)
                    float xmm4_3 = _mm_shuffle_ps(xmm2_1, xmm2_1, 0xff) - xmm3_1
                    float xmm2_5 =
                        *(edi_2 i+ 0xa4) * xmm4_3 + xmm3_1 + *(edi_2 i+ 0x9c) * xmm4_3 + xmm3_1
                    var_a0 = data_63c264
                    int128_t var_90_1 = data_63c274
                    var_90_1:0xc.d = eax_9
                    float xmm0_14 = var_80[3]
                    var_90_1:4.q = _mm_unpacklo_ps(
                        (xmm5_1 * xmm1_3 f+ xmm2_1 + xmm0_6 * xmm1_3 f+ xmm2_1) * 0.5f, xmm2_5 * 0.5f)
                    var_a0.d = xmm0_14
                    eax_4 = sub_506ab0(eax_4, &var_a0)
                
                @__security_check_cookie@4(eax_1 ^ &var_1d8)
                return eax_4
            default
                var_1e4_1 = "UIStateDrawElementInt"
                var_1e8_1 = 0xaa6
                ecx_2 = "Halt"
    else
        var_1e4_1 = "UIDefGet"
        var_1e8_1 = 0x126
        ecx_2 = "ptr->assetType == ASSET_TYPE_UI"
    
    sub_489550(eax_4, &data_5b2591, ecx_2, "d:\ax\trunk\ax2017\engine\uidef.cpp", var_1e8_1, var_1e4_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
