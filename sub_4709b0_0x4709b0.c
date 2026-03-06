// 函数名称: sub_4709b0
// 虚拟地址: 0x4709b0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_4709b0(int32_t* arg1)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* eax_2
    int32_t edx
    eax_2, edx = sub_454600(arg1)
    void* esi = eax_2
    void* var_148 = esi
    
    if (arg1[0x1aa] s<= 0 && arg1[0x5d] == 1 && arg1[0x77] == 0 && (*arg1 != 0 || arg1[0xd] != 2))
        int32_t* eax_3 = sub_49a5a0(esi)
        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
        return eax_3
    
    void var_330
    int128_t* eax_5 = sub_481680(&var_330, edx, &arg1[0x5d], &var_330)
    bool cond:1 = *arg1 == 1
    int128_t var_78 = *eax_5
    int128_t var_68 = eax_5[1]
    int128_t var_58 = eax_5[2]
    int128_t var_48 = eax_5[3]
    int128_t var_38 = eax_5[4]
    int128_t var_28 = eax_5[5]
    char const* const var_3ac_1
    int32_t var_3a8_1
    char const* const var_3a4_1
    char* ecx_4
    
    if (not(cond:1))
        var_3a4_1 = "ShouldUseHiddenLocation"
        var_3a8_1 = 0x1ee9
        ecx_4 = "gfx.type == ROLLGFX_DIE"
        var_3ac_1 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
    else if (data_632590 != 2)
    label_470b86:
        void* eax_12 = sub_46c0a0(arg1)
        void* ecx_10 = data_aca1ec
        int32_t xmm0_13 = _mm_cvtepi32_ps(zx.o(*(ecx_10 + 0x14)))
        int32_t var_158 = 0
        int32_t var_154_1 = 0
        int32_t* var_3b8_1 = data_126c15c
        int32_t var_150_1 = xmm0_13
        int32_t var_14c_1 = _mm_cvtepi32_ps(zx.o(*(ecx_10 + 0x18)))
        int128_t var_1d0 = var_158.o
        sub_49ec40(&var_1d0, esi, "die ui", var_3b8_1, &var_1d0, &var_1d0, eax_12, nullptr, 1)
        sub_4a8700(*esi, &var_78)
        eax_5 = data_6d00d0
        
        if (eax_5 != 0)
            *(eax_5 + 0x2c)
            int32_t var_3a4_3 = 0xffffffff
            sub_4a8570(*esi)
            eax_5 = data_6d00d0
            
            if (eax_5 != 0)
                *(eax_5 + 0x2d)
                int32_t var_3a4_4 = 0xffffffff
                sub_4a8570(*esi)
                int128_t var_1a8_1 = data_63c264
                int128_t xmm0_18 = data_63c274
                float var_170
                float var_144_2
                char var_134
                float var_124_5
                float var_11c_9
                
                if (arg1[0x1aa] s<= 0 || arg1[0xdf] != 3)
                    var_11c_9 = xmm0_18:0xc.d
                    var_124_5 = xmm0_18:8.d
                    var_144_2 = xmm0_18:4.d
                label_47145d:
                    int32_t* ecx_31 = arg1
                    char eax_44
                    int32_t edx_8
                    eax_44, edx_8 = sub_46b510(ecx_31)
                    float var_1c0[0x4]
                    int64_t var_178
                    
                    if (eax_44 != 0)
                        *(arg1 + 0x7b8) = data_63c264
                        *(arg1 + 0x7c8) = data_63c274
                        void var_210
                        float xmm0_83[0x4] = *sub_46b7c0(&var_210, edx_8, ecx_31, &var_210)
                        void* eax_47 = data_aca1ec
                        float xmm1_44[0x4] = _mm_shuffle_ps(xmm0_83, xmm0_83, 0xaa)
                        float xmm2_17 = xmm1_44[0]
                        var_1c0 = xmm1_44
                        float xmm2_18 = xmm2_17 f- xmm0_83
                        var_158.o = xmm0_83
                        uint128_t xmm0_84 = zx.o(*(eax_47 + 0x14))
                        var_134.d = (_mm_cvtepi32_ps(zx.o(*(eax_47 + 0x18))) + 0f) * 0.5f + xmm2_18
                        int32_t var_3a4_6 = var_134.d
                        float var_3a8_2 = (_mm_cvtepi32_ps(xmm0_84) + 0f) * 0.5f + xmm2_18
                        void var_1e0
                        int64_t* eax_48 = sub_46b5c0(&var_1e0)
                        float xmm1_50[0x4] = var_158.o
                        float xmm2_20 = var_1c0.d f+ xmm1_50
                        var_178 = *eax_48
                        var_170 = eax_48[1].d
                        arg1[0x1ee] = var_178.d / 0.200000003f
                        var_134.d = (_mm_shuffle_ps(xmm1_50, xmm1_50, 0x55)
                            + _mm_shuffle_ps(xmm1_50, xmm1_50, 0xff)) * 0.5f
                        int32_t var_3a4_7 = var_134.d
                        float var_3a8_3 = xmm2_20 * 0.5f
                        void var_1f0
                        int64_t* eax_50
                        eax_50, ecx_31 = sub_46b5c0(&var_1f0)
                        int32_t eax_51 = eax_50[1].d
                        *(arg1 + 0x7cc) = *eax_50
                        arg1[0x1f5] = eax_51
                    
                    int32_t eax_52 = arg1[0x22a]
                    bool var_134_1 = data_632564 == eax_52
                    
                    if (data_632558 != eax_52)
                        var_148.b = 0
                    else if (sub_4541a0() != 0 || data_632564 != 0)
                        var_148.b = 0
                    else
                        uint32_t eax_54
                        eax_54, ecx_31 = sub_453be0(arg1)
                        
                        if (eax_54 == 0)
                            var_148.b = 0
                        else
                            var_148.b = 1
                            
                            if (eax_54 == 1)
                                var_148.b = 0
                    
                    int32_t* var_3a4_8 = ecx_31
                    sub_46dc00(&arg1[0x222], &var_178, arg1, &arg1[0x222], var_148.b, var_134_1, 
                        &arg1[0x1f3])
                    char eax_57
                    int32_t edx_10
                    eax_57, edx_10 = sub_46b510(arg1)
                    
                    if (eax_57 != 0)
                        *(arg1 + 0x7b8) = data_63c264
                        *(arg1 + 0x7c8) = data_63c274
                        void var_220
                        float xmm0_99[0x4] = *sub_46b7c0(&var_220, edx_10, arg1, &var_220)
                        void* eax_60 = data_aca1ec
                        float xmm1_53[0x4] = _mm_shuffle_ps(xmm0_99, xmm0_99, 0xaa)
                        float xmm2_22 = xmm1_53[0]
                        var_1c0 = xmm1_53
                        float xmm2_23 = xmm2_22 f- xmm0_99
                        var_158.o = xmm0_99
                        uint128_t xmm0_100 = zx.o(*(eax_60 + 0x14))
                        var_134_1.d = (_mm_cvtepi32_ps(zx.o(*(eax_60 + 0x18))) + 0f) * 0.5f + xmm2_23
                        int32_t var_3a4_10 = var_134_1.d
                        float var_3a8_5 = (_mm_cvtepi32_ps(xmm0_100) + 0f) * 0.5f + xmm2_23
                        void var_200
                        int64_t* eax_61 = sub_46b5c0(&var_200)
                        float xmm1_59[0x4] = var_158.o
                        var_134_1.d = eax_61[1].d
                        float xmm2_26 = (var_1c0.d f+ xmm1_59) * 0.5f
                        arg1[0x1ee] = (*eax_61).d f/ 0.200000003f
                        var_134_1.d = (_mm_shuffle_ps(xmm1_59, xmm1_59, 0x55)
                            + _mm_shuffle_ps(xmm1_59, xmm1_59, 0xff)) * 0.5f
                        int32_t var_3a4_11 = var_134_1.d
                        float var_3a8_6 = xmm2_26
                        int64_t* eax_63 = sub_46b5c0(&var_1c0)
                        int32_t eax_64 = eax_63[1].d
                        *(arg1 + 0x7cc) = *eax_63
                        arg1[0x1f5] = eax_64
                    
                    char eax_65
                    int32_t edx_11
                    eax_65, edx_11 = sub_46b510(arg1)
                    
                    if (eax_65 != 0)
                        void var_230
                        float xmm0_113[0x4] = *sub_46b7c0(&var_230, edx_11, arg1, &var_230)
                        void* eax_68 = data_aca1ec
                        float xmm2_29 = _mm_shuffle_ps(xmm0_113, xmm0_113, 0xaa) f- xmm0_113
                        uint128_t xmm0_114 = zx.o(*(eax_68 + 0x14))
                        var_134_1.d = (_mm_cvtepi32_ps(zx.o(*(eax_68 + 0x18))) + 0f) * 0.5f + xmm2_29
                        int32_t var_3a4_13 = var_134_1.d
                        float var_3a8_7 = (_mm_cvtepi32_ps(xmm0_114) + 0f) * 0.5f + xmm2_29
                        int64_t* eax_69 = sub_46b5c0(&var_158)
                        float xmm3_26 = arg1[0x1f5]
                        int32_t xmm0_119 = (*eax_69).d
                        var_134_1.d = eax_69[1].d
                        float xmm0_122
                        
                        if (data_632564 != arg1[0x22a])
                            xmm0_122 = xmm3_26 - (xmm0_119 * 0.5f - xmm0_119 f* 0.150000006f)
                        else
                            xmm0_122 = xmm0_119 f* 0.5f + xmm3_26
                        
                        arg1[0x1f5] = xmm0_122
                        float xmm1_70 = var_178.d f+ arg1[0x1f3]
                        float xmm4_3 = xmm0_18.d
                        float xmm5_4 = var_1a8_1:4.d
                        arg1[0x1f4] = var_178:4.d f+ arg1[0x1f4]
                        float xmm3_27 = var_1a8_1:8.d
                        float xmm2_30 = var_1a8_1:0xc.d
                        arg1[0x1f5] = var_170 f+ arg1[0x1f5]
                        float xmm0_130 = arg1[0x1f4] f+ var_124_5
                        arg1[0x1f3] = xmm1_70 + var_144_2
                        arg1[0x1f4] = xmm0_130
                        arg1[0x1f5] = arg1[0x1f5] f+ var_11c_9
                        float xmm6_3 = arg1[0x1f2]
                        float xmm7_4 = arg1[0x1f1]
                        var_134_1.d = xmm6_3 * xmm4_3 - arg1[0x1ef] f* xmm5_4 - arg1[0x1f0] f* xmm3_27
                            - xmm7_4 * xmm2_30
                        int32_t var_13c_2 = arg1[0x1f0] f* xmm4_3 + xmm6_3 * xmm3_27 + xmm7_4 * xmm5_4
                            - arg1[0x1ef] f* xmm2_30
                        float var_138_6 = xmm7_4 * xmm4_3 + xmm6_3 * xmm2_30 + arg1[0x1ef] f* xmm3_27
                            - arg1[0x1f0] f* xmm5_4
                        *(arg1 + 0x7bc) = (arg1[0x1ef] f* xmm4_3 + xmm6_3 * xmm5_4
                            + arg1[0x1f0] f* xmm2_30 - xmm7_4 * xmm3_27).o
                    
                    int32_t ecx_37
                    eax_5, ecx_37 = sub_46e600(arg1)
                    
                    if (eax_5 u<= 9)
                        switch (eax_5)
                            case 9
                                int32_t var_3a4_14 = 0xffffffff
                                ecx_37 = sub_4a8570(*esi)
                        
                        int32_t var_3a4_15 = 0xffffffff
                        int32_t var_3a8_8 = ecx_37
                        *(sub_438600() + 0xc)
                        sub_4a8570(*esi)
                        TEB* fsbase
                        void* eax_75 = *fsbase->ThreadLocalStoragePointer
                        void* ecx_40 = eax_75
                        
                        if (data_1514898 s> *(ecx_40 + 4))
                            __Init_thread_header(&data_1514898)
                            
                            if (data_1514898 == 0xffffffff)
                                int32_t eax_77 = data_114e80c
                                data_15148a4 = eax_77
                                data_15148a0 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
                                data_15148b8 = &data_5b2591
                                data_15148ac = data_114e808
                                data_15148dc = eax_77 + 2
                                data_15148f8 = eax_77 + 3
                                data_1514914 = eax_77 + 4
                                data_1514930 = eax_77 + 5
                                data_151494c = eax_77 + 6
                                data_1514968 = eax_77 + 7
                                data_1514984 = eax_77 + 8
                                data_15149a0 = eax_77 + 9
                                data_15148bc = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
                                data_15148d4 = "dieLargeWhite"
                                data_15148c0 = eax_77 + 1
                                data_15148c8 = &data_15148a0
                                data_15148d8 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
                                data_15148f0 = "dieLargeRed"
                                data_15148e4 = &data_15148bc
                                data_15148f4 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
                                data_151490c = "dieLargeCyan"
                                data_1514900 = &data_15148d8
                                data_1514910 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
                                data_1514928 = "dieLargeBrown"
                                data_151491c = &data_15148f4
                                data_151492c = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
                                data_1514944 = "dieLargeGreen"
                                data_1514938 = &data_1514910
                                data_1514948 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
                                data_1514960 = "dieLargeYellow"
                                data_1514954 = &data_151492c
                                data_1514964 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
                                data_151497c = "dieLargePurple"
                                data_1514970 = &data_1514948
                                data_1514980 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
                                data_1514998 = "dieLargeBlack"
                                data_151498c = &data_1514964
                                data_151499c = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
                                data_15149b4 = "dieLargeOrange"
                                data_114e80c = eax_77 + 0xa
                                data_15149a8 = &data_1514980
                                data_114e808 = &data_151499c
                                __Init_thread_footer(&data_1514898)
                            
                            ecx_40 = eax_75
                        
                        if (data_15149b8 s> *(ecx_40 + 4))
                            __Init_thread_header(&data_15149b8)
                            
                            if (data_15149b8 == 0xffffffff)
                                int32_t eax_89 = data_114e80c
                                data_15149c4 = eax_89
                                data_15149c0 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
                                data_15149d8 = &data_5b2591
                                data_15149cc = data_114e808
                                data_15149fc = eax_89 + 2
                                data_1514a18 = eax_89 + 3
                                data_1514a34 = eax_89 + 4
                                data_1514a50 = eax_89 + 5
                                data_1514a6c = eax_89 + 6
                                data_1514a88 = eax_89 + 7
                                data_1514aa4 = eax_89 + 8
                                data_1514ac0 = eax_89 + 9
                                data_15149dc = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
                                data_15149f4 = "dieVirtualWhite"
                                data_15149e0 = eax_89 + 1
                                data_15149e8 = &data_15149c0
                                data_15149f8 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
                                data_1514a10 = "dieVirtualRed"
                                data_1514a04 = &data_15149dc
                                data_1514a14 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
                                data_1514a2c = "dieVirtualCyan"
                                data_1514a20 = &data_15149f8
                                data_1514a30 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
                                data_1514a48 = "dieVirtualBrown"
                                data_1514a3c = &data_1514a14
                                data_1514a4c = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
                                data_1514a64 = "dieVirtualGreen"
                                data_1514a58 = &data_1514a30
                                data_1514a68 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
                                data_1514a80 = "dieVirtualYellow"
                                data_1514a74 = &data_1514a4c
                                data_1514a84 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
                                data_1514a9c = "dieVirtualPurple"
                                data_1514a90 = &data_1514a68
                                data_1514aa0 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
                                data_1514ab8 = "dieVirtualBlack"
                                data_1514aac = &data_1514a84
                                data_1514abc = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
                                data_1514ad4 = "dieVirtualOrange"
                                data_114e80c = eax_89 + 0xa
                                data_1514ac8 = &data_1514aa0
                                data_114e808 = &data_1514abc
                                __Init_thread_footer(&data_15149b8)
                            
                            ecx_40 = eax_75
                        
                        if (data_1514ad8 s> *(ecx_40 + 4))
                            __Init_thread_header(&data_1514ad8)
                            
                            if (data_1514ad8 == 0xffffffff)
                                int32_t eax_101 = data_114e80c
                                data_1514ae4 = eax_101
                                data_1514ae0 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
                                data_1514af8 = &data_5b2591
                                data_1514aec = data_114e808
                                data_1514b1c = eax_101 + 2
                                data_1514b38 = eax_101 + 3
                                data_1514b54 = eax_101 + 4
                                data_1514b70 = eax_101 + 5
                                data_1514b8c = eax_101 + 6
                                data_1514ba8 = eax_101 + 7
                                data_1514bc4 = eax_101 + 8
                                data_1514be0 = eax_101 + 9
                                data_1514afc = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
                                data_1514b14 = "dieSmallWhite"
                                data_1514b00 = eax_101 + 1
                                data_1514b08 = &data_1514ae0
                                data_1514b18 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
                                data_1514b30 = "dieSmallRed"
                                data_1514b24 = &data_1514afc
                                data_1514b34 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
                                data_1514b4c = "dieSmallCyan"
                                data_1514b40 = &data_1514b18
                                data_1514b50 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
                                data_1514b68 = "dieSmallBrown"
                                data_1514b5c = &data_1514b34
                                data_1514b6c = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
                                data_1514b84 = "dieSmallGreen"
                                data_1514b78 = &data_1514b50
                                data_1514b88 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
                                data_1514ba0 = "dieSmallYellow"
                                data_1514b94 = &data_1514b6c
                                data_1514ba4 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
                                data_1514bbc = "dieSmallPurple"
                                data_1514bb0 = &data_1514b88
                                data_1514bc0 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
                                data_1514bd8 = "dieSmallBlack"
                                data_1514bcc = &data_1514ba4
                                data_1514bdc = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
                                data_1514bf4 = "dieSmallOrange"
                                data_114e80c = eax_101 + 0xa
                                data_1514be8 = &data_1514bc0
                                data_114e808 = &data_1514bdc
                                __Init_thread_footer(&data_1514ad8)
                            
                            ecx_40 = eax_75
                        
                        if (data_1514bf8 s> *(ecx_40 + 4))
                            __Init_thread_header(&data_1514bf8)
                            
                            if (data_1514bf8 == 0xffffffff)
                                int32_t eax_113 = data_114e80c
                                data_1514c04 = eax_113
                                data_1514c00 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
                                data_1514c18 = &data_5b2591
                                data_1514c0c = data_114e808
                                data_1514c3c = eax_113 + 2
                                data_1514c58 = eax_113 + 3
                                data_1514c74 = eax_113 + 4
                                data_1514c90 = eax_113 + 5
                                data_1514cac = eax_113 + 6
                                data_1514cc8 = eax_113 + 7
                                data_1514ce4 = eax_113 + 8
                                data_1514d00 = eax_113 + 9
                                data_1514c1c = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
                                data_1514c34 = "dieSmVirtWhite"
                                data_1514c20 = eax_113 + 1
                                data_1514c28 = &data_1514c00
                                data_1514c38 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
                                data_1514c50 = "dieSmVirtRed"
                                data_1514c44 = &data_1514c1c
                                data_1514c54 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
                                data_1514c6c = "dieSmVirtCyan"
                                data_1514c60 = &data_1514c38
                                data_1514c70 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
                                data_1514c88 = "dieSmVirtBrown"
                                data_1514c7c = &data_1514c54
                                data_1514c8c = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
                                data_1514ca4 = "dieSmVirtGreen"
                                data_1514c98 = &data_1514c70
                                data_1514ca8 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
                                data_1514cc0 = "dieSmVirtYellow"
                                data_1514cb4 = &data_1514c8c
                                data_1514cc4 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
                                data_1514cdc = "dieSmVirtPurple"
                                data_1514cd0 = &data_1514ca8
                                data_1514ce0 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
                                data_1514cf8 = "dieSmVirtBlack"
                                data_1514cec = &data_1514cc4
                                data_1514cfc = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
                                data_1514d14 = "dieSmVirtOrange"
                                data_114e80c = eax_113 + 0xa
                                data_1514d08 = &data_1514ce0
                                data_114e808 = &data_1514cfc
                                __Init_thread_footer(&data_1514bf8)
                        
                        if (sub_46a6a0() != 0)
                            int32_t var_3a4_16 = 0xffffffff
                            sub_4a8570(*esi)
                        
                        if (sub_46b360(arg1) != 0)
                            int32_t var_3a4_17 = 0xffffffff
                            sub_4a8570(*esi)
                            *(arg1 + 0x22)
                            int32_t var_3a4_18 = 0xffffffff
                            sub_4a8570(*esi)
                            (&data_5ed230)[sub_457400(&arg1[2])]
                        else
                            *(arg1 + 0x22)
                        
                        int32_t var_3a4_19 = 0xffffffff
                        sub_4a8570(*esi)
                        
                        if (*(arg1 + 0x22) != 0)
                            int32_t var_3a4_20 = 0xffffffff
                            sub_4a8570(*esi)
                        
                        uint32_t eax_129 = sub_4a4740(*esi, 0, data_620d84)
                        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                        return eax_129
                    
                    var_3a4_1 = "DeclareDie"
                    var_3a8_1 = 0x672a
                else
                    float var_120_1 = 1.5f
                    int32_t eax_15 = *(sub_438600() + 8)
                    float xmm2_1
                    
                    if (eax_15 == 0)
                        xmm2_1 = 1f
                    label_470d0b:
                        float xmm1_2 = arg1[0x1ed] f* xmm2_1
                        float var_160_1 = xmm1_2
                        
                        if (not(xmm1_2 <= 1f))
                            sub_481280(&arg1[0x1c])
                            xmm1_2 = 1f
                            var_160_1 = 1f
                        
                        float xmm0_20 = sub_4827e0(xmm1_2)
                        float xmm0_21
                        
                        if (0 f<= xmm0_20)
                            xmm0_21 = xmm0_20 + 0.5f
                        else
                            xmm0_21 = xmm0_20 - 0.5f
                        
                        int32_t esi_4 = arg1[0xb9] * 0x41c64e6d + 0x3039 + int.d(xmm0_21) * 0x4e6d0000
                        float xmm3_3 = ((esi_4 & 0x7fffff) | 0x3f800000) - 1f - 0f
                        float var_12c_1
                        
                        if (not(0 f< xmm3_3))
                            var_12c_1 = 0f
                        else if (xmm3_3 < 1f)
                            var_12c_1 = sub_41f140(1, xmm3_3, (zx.o(0)).d, 0.25f)
                        else
                            var_12c_1 = 0.25f
                        
                        float xmm3_6 =
                            (((esi_4 * 0x41c64e6d + 0x3039) & 0x7fffff) | 0x3f800000) - 1f - 0f
                        float xmm2_2
                        
                        if (0 f< xmm3_6)
                            xmm2_2 = 0.600000024f
                            
                            if (not(xmm3_6 >= 1f))
                                xmm2_2 = sub_41f140(1, xmm3_6, 0.5f, 0.600000024f)
                        else
                            xmm2_2 = 0.5f
                        
                        float xmm2_3 = xmm2_2 + var_12c_1
                        float var_15c_1 = xmm2_3
                        float xmm3_9 = ((((esi_4 * 0x41c64e6d + 0x3039) * 0x41c64e6d + 0x3039)
                            & 0x7fffff) | 0x3f800000) - 1f - 0f
                        float xmm3_10
                        
                        if (not(0 f< xmm3_9))
                            xmm3_10 = 0.300000012f
                        else if (xmm3_9 < 1f)
                            xmm2_3 = var_15c_1
                            xmm3_10 = sub_41f140(1, xmm3_9, 0.300000012f, 0.400000006f)
                        else
                            xmm3_10 = 0.400000006f
                        
                        float xmm3_11 = xmm3_10 + xmm2_3
                        float xmm3_14 = (((
                            ((esi_4 * 0x41c64e6d + 0x3039) * 0x41c64e6d + 0x3039) * 0x41c64e6d + 0x3039)
                            & 0x7fffff) | 0x3f800000) - 1f - 0f
                        float var_144_1
                        
                        if (not(0 f< xmm3_14))
                            var_144_1 = 0.800000012f
                        else if (xmm3_14 < 1f)
                            var_144_1 = sub_41f140(1, xmm3_14, 0.800000012f, 1.20000005f)
                        else
                            var_144_1 = 1.20000005f
                        
                        float xmm2_6 = (((((
                            ((esi_4 * 0x41c64e6d + 0x3039) * 0x41c64e6d + 0x3039) * 0x41c64e6d + 0x3039)
                            * 0x41c64e6d + 0x3039) * 0x41c64e6d + 0x3039) & 0x7fffff) | 0x3f800000) - 1f
                            - 0.5f
                        float xmm3_17 = ((((
                            ((esi_4 * 0x41c64e6d + 0x3039) * 0x41c64e6d + 0x3039) * 0x41c64e6d + 0x3039)
                            * 0x41c64e6d + 0x3039) & 0x7fffff) | 0x3f800000) - 1f - 0.5f
                        float xmm1_6 = ((((((
                            ((esi_4 * 0x41c64e6d + 0x3039) * 0x41c64e6d + 0x3039) * 0x41c64e6d + 0x3039)
                            * 0x41c64e6d + 0x3039) * 0x41c64e6d + 0x3039) * 0x41c64e6d + 0x3039)
                            & 0x7fffff) | 0x3f800000) - 1f - 0.5f
                        float xmm1_11 = 1f / (
                            sub_41dbe0(xmm1_6 * xmm1_6 + xmm2_6 * xmm2_6 + xmm3_17 * xmm3_17)
                            + 9.99999975e-06f)
                        float ecx_24 = ((((((
                            ((esi_4 * 0x41c64e6d + 0x3039) * 0x41c64e6d + 0x3039) * 0x41c64e6d + 0x3039)
                            * 0x41c64e6d + 0x3039) * 0x41c64e6d + 0x3039) * 0x41c64e6d + 0x3039)
                            * 0x41c64e6d + 0x3039) & 0x7fffff) | 0x3f800000
                        int32_t ecx_26 = ((((((
                            ((esi_4 * 0x41c64e6d + 0x3039) * 0x41c64e6d + 0x3039) * 0x41c64e6d + 0x3039)
                            * 0x41c64e6d + 0x3039) * 0x41c64e6d + 0x3039) * 0x41c64e6d + 0x3039)
                            * 0x41c64e6d + 0x3039) * 0x41c64e6d + 0x3039) & 0x7fffff
                        int32_t eax_42 = ((((((
                            ((esi_4 * 0x41c64e6d + 0x3039) * 0x41c64e6d + 0x3039) * 0x41c64e6d + 0x3039)
                            * 0x41c64e6d + 0x3039) * 0x41c64e6d + 0x3039) * 0x41c64e6d + 0x3039)
                            * 0x41c64e6d + 0x3039) * 0x41c64e6d + 0x3039) * 0x39b193
                        float xmm2_9 = (ecx_26 | 0x3f800000) - 1f - 0.5f
                        float xmm1_15 = (((0x3039 - eax_42) & 0x7fffff) | 0x3f800000) - 1f - 0.5f
                        float xmm3_20 = ecx_24 - 1f - 0.5f
                        int32_t xmm5_1 = 0x3f800000
                        float xmm1_20 = 1f / (
                            sub_41dbe0(xmm1_15 * xmm1_15 + xmm2_9 * xmm2_9 + xmm3_20 * xmm3_20)
                            + 9.99999975e-06f)
                        var_134.d = xmm1_20 * xmm3_20
                        float xmm3_22 = var_160_1 - var_12c_1
                        float xmm7_2 = var_160_1 - var_15c_1
                        float xmm4_2 = var_15c_1 - var_12c_1
                        float xmm6_2 = xmm3_11 - var_15c_1
                        float xmm2_11 = xmm3_22 / xmm4_2
                        float xmm3_25 = _mm_max_ss(0, 
                            var_144_1 * 0.5f * -4f * xmm7_2 * (var_160_1 - xmm3_11) / (xmm6_2 * xmm6_2))
                            + _mm_max_ss(0, var_144_1 * -4f * xmm3_22 * xmm7_2 / (xmm4_2 * xmm4_2))
                        float xmm0_58 = xmm3_25 * 0f
                        var_144_2 = xmm0_18:4.d + xmm0_58
                        var_124_5 = xmm0_18:8.d + xmm0_58
                        var_11c_9 = xmm0_18:0xc.d + xmm3_25
                        
                        if (not(0f < xmm2_11))
                            var_120_1 = (zx.o(0)).d
                        else if (not(xmm2_11 >= 1f))
                            xmm5_1 = 0x3f800000
                            var_120_1 = sub_41f140(1, xmm2_11, (zx.o(0)).d, 1.5f)
                        
                        float xmm7_3 = xmm7_2 / xmm6_2
                        
                        if (not(0 f< xmm7_3))
                            xmm5_1 = (zx.o(0)).d
                        else if (not(xmm7_3 >= 1f))
                            xmm5_1 = sub_41f140(1, xmm7_3, (zx.o(0)).d, 1f)
                        
                        float xmm0_72
                        int64_t xmm1_41
                        float xmm2_14[0x4]
                        
                        if (var_15c_1 <= var_160_1)
                            float xmm5_3 = xmm5_1 f* 6.28318548f * 0.5f
                            int32_t var_14c_3 = sub_41f100(xmm5_3)
                            float xmm0_77 = sub_41f120(xmm5_3)
                            xmm2_14 = xmm0_77 * xmm1_20 * xmm1_15
                            xmm1_41 = xmm0_77 * xmm1_20 * xmm2_9
                            xmm0_72 = xmm0_77 f* var_134.d
                        else
                            float xmm0_68 = var_120_1 * 6.28318548f * 0.5f
                            int32_t var_14c_2 = sub_41f100(xmm0_68)
                            float xmm0_71 = sub_41f120(xmm0_68)
                            xmm2_14 = xmm0_71 * xmm1_11 * xmm1_6
                            xmm1_41 = xmm0_71 * xmm1_11 * xmm2_6
                            xmm0_72 = xmm0_71 * xmm1_11 * xmm3_17
                        
                        esi = var_148
                        var_170 = xmm0_72
                        var_158.q = _mm_unpacklo_ps(xmm2_14, xmm1_41)
                        float var_150_2 = var_170
                        var_1a8_1 = var_158.o
                        goto label_47145d
                    
                    if (eax_15 == 1)
                        xmm2_1 = 1.5f
                        goto label_470d0b
                    
                    eax_5 = eax_15 - 2
                    
                    if (eax_15 == 2)
                        xmm2_1 = 3f
                        goto label_470d0b
                    
                    var_3a4_1 = "DeclareDie"
                    var_3a8_1 = 0x669e
                ecx_4 = "Halt"
                var_3ac_1 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
            else
                var_3a4_1 = "GetLocalSettings"
                var_3a8_1 = 0x24c
                var_3ac_1 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamesettings.cpp"
                ecx_4 = "gGameSettings.localSettings"
        else
            var_3a4_1 = "GetLocalSettings"
            var_3a8_1 = 0x24c
            var_3ac_1 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamesettings.cpp"
            ecx_4 = "gGameSettings.localSettings"
    else
        void* ecx_5 = data_6cfe4c
        
        if (ecx_5 != 0)
            if (arg1[6] != *(ecx_5 + 0xa68) && arg1[4] - 8 u<= 5)
                int32_t eax_9 = sub_470880(arg1)
                int32_t var_2c4_1 = 0
                uint32_t var_2bc[0x8][0x4]
                int32_t edx_1 = _memset(&var_2bc, 0, 0x8c)
                int32_t var_2d0 = arg1[6]
                int32_t var_2c8_1 = eax_9
                int32_t var_2cc_1 = 9
                int32_t var_2c0_1 = 0xffffffff
                void var_118
                __builtin_memcpy(&var_118, &var_2d0, 0xa0)
                void var_390
                int128_t* eax_11 = sub_458af0(&var_390, edx_1, &var_118, &var_390)
                esi = var_148
                var_78 = *eax_11
                int128_t var_68_1 = eax_11[1]
                int128_t var_58_1 = eax_11[2]
                int128_t var_48_1 = eax_11[3]
                int128_t var_38_1 = eax_11[4]
                int128_t var_28_1 = eax_11[5]
            
            goto label_470b86
        
        var_3a4_1 = "GetClient"
        var_3a8_1 = 0x75
        var_3ac_1 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx_4 = "gClient"
    
    sub_489550(eax_5, &data_5b2591, ecx_4, var_3ac_1, var_3a8_1, var_3a4_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
