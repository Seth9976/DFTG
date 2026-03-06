// 函数名称: sub_4a2dd0
// 虚拟地址: 0x4a2dd0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_4a2dd0(int32_t arg1, int128_t* arg2, void* arg3, char arg4, char arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t result = __security_cookie ^ &__saved_ebp
    int32_t result_1 = result
    
    if (arg5 != 0)
        int32_t eax_1 = *(arg3 + 0xe10)
        int128_t var_dc = *arg2
        int128_t xmm0_2 = arg2[1]
        int128_t* eax_4 = eax_1 * 0x48 + 0xce4 + arg3
        int128_t xmm0_3 = arg2[2]
        float xmm1_1 = *(data_114e818 + 0x2c)
        int128_t var_ac = arg2[3]
        int128_t xmm0_5 = arg2[4]
        int128_t xmm0_6 = arg2[5]
        void var_18
        int128_t* eax_6 = sub_498790(arg3 + 0xc, xmm1_1, &var_18)
        void var_14c
        float var_64[0x4] = *sub_4c8d30(&var_14c, eax_6, &var_dc, &var_14c, eax_4)
        void var_15c
        int128_t* eax_12 = sub_4c8d30(&var_15c, eax_6, &var_dc, &var_15c, &eax_4[2])
        float xmm4_1[0x4] = var_64
        float xmm3_1[0x4] = *eax_12
        float xmm0_9 = xmm3_1[0] f- xmm4_1
        float xmm1_3 = _mm_shuffle_ps(xmm3_1, xmm3_1, 0x55)
        float xmm2_2 = eax_4[4].d
        var_64[0] = xmm0_9 * xmm2_2 f+ xmm4_1
        float xmm0_13 = _mm_shuffle_ps(xmm4_1, xmm4_1, 0x55)
        float xmm0_15 = _mm_shuffle_ps(xmm4_1, xmm4_1, 0xaa)
        float xmm4_2 = _mm_shuffle_ps(xmm4_1, xmm4_1, 0xff)
        var_64[1] = (xmm1_3 - xmm0_13) * xmm2_2 + xmm0_13
        float xmm1_8 = _mm_shuffle_ps(xmm3_1, xmm3_1, 0xaa)
        float xmm3_5 = (_mm_shuffle_ps(xmm3_1, xmm3_1, 0xff) - xmm4_2) * xmm2_2 + xmm4_2
        var_64[2] = (xmm1_8 - xmm0_15) * xmm2_2 + xmm0_15
        var_64[3] = xmm3_5
        *(arg3 + 0x10a0) = var_64
        void var_16c
        int128_t* eax_14
        int32_t ecx_4
        eax_14, ecx_4 = sub_498790(arg3 + 0xc, xmm1_1, &var_16c)
        bool cond:1_1 = *(arg3 + 0xe84) != 4
        *(arg3 + 0x10e8) = *eax_14
        *(arg3 + 0x10f8) = *(arg3 + 0x10a0)
        int128_t* var_274_4
        float var_270_7
        void* eax_27
        
        if (cond:1_1)
            int32_t var_270_8 = ecx_4
            var_270_7 = var_dc:0xc.d
            void var_48
            var_274_4 = sub_498790(arg3 + 0xc, xmm1_1, &var_48)
            void var_25c
            eax_27 = &var_25c
        else
            void* eax_15 = data_aca1ec
            float xmm3_7 = *(arg3 + 0x10f0) f- *(arg3 + 0x10e8)
            uint128_t xmm1_12 = zx.o(*(eax_15 + 0x18))
            float xmm0_20 = _mm_cvtepi32_ps(zx.o(*(eax_15 + 0x14)))
            float xmm1_14 = _mm_cvtepi32_ps(xmm1_12) - 0f
            float xmm2_6 = (*(arg3 + 0x10f4) f- *(arg3 + 0x10ec)) / xmm1_14
            int128_t var_13c = var_dc
            float xmm3_9 = _mm_min_ss(xmm3_7 / (xmm0_20 - 0f), xmm2_6)
            int128_t var_12c_1 = xmm0_2
            int128_t var_11c_1 = xmm0_3
            int128_t var_10c_1 = var_ac
            int128_t var_fc_1 = xmm0_5
            int128_t var_ec_1 = xmm0_6
            float xmm0_28 = 1f / xmm3_9
            var_13c:0xc.d = xmm0_28
            void var_17c
            int128_t* eax_16 = sub_498790(arg3 + 0xc, xmm1_1, &var_17c)
            void* eax_17 = data_aca1ec
            float xmm1_17 = (*(eax_16 + 8) f- *eax_16) * xmm0_28
            float xmm2_10 = (*(eax_16 + 0xc) f- *(eax_16 + 4)) * xmm0_28
            float xmm0_30 = _mm_cvtepi32_ps(zx.o(*(eax_17 + 0x14)))
            float xmm0_32 = _mm_cvtepi32_ps(zx.o(*(eax_17 + 0x18)))
            int32_t eax_18
            int32_t edx_2
            eax_18, edx_2 = sub_4eaaa0(5)
            var_64[2] = eax_18
            var_64[3] = edx_2
            float xmm3_13 = (xmm0_32 - 0f) * var_64[3] + 0f
            float xmm2_15 = (xmm0_30 - 0f) * var_64[2] + 0f - ((xmm1_17 - 0f) * var_64[2] + 0f)
            var_64[0] = xmm2_15
            float xmm0_40 = (xmm2_10 - 0f) * var_64[3] + 0f
            var_64[2] = xmm1_17 + xmm2_15
            float xmm3_14 = xmm3_13 - xmm0_40
            var_64[1] = xmm3_14
            var_64[3] = xmm2_10 + xmm3_14
            int32_t eax_19
            int32_t edx_3
            eax_19, edx_3 = sub_426dd0(&var_64)
            var_64[2] = eax_19
            float xmm0_41 = var_64[2]
            var_64[3] = edx_3
            var_13c.d = xmm0_41
            var_13c:4.d = var_64[3]
            void var_28
            int128_t* eax_20 = sub_498790(arg3 + 0xc, xmm1_1, &var_28)
            void var_18c
            var_64 = *sub_4c8d30(&var_18c, eax_20, &var_13c, &var_18c, eax_4)
            void var_19c
            int128_t* eax_24 = sub_4c8d30(&var_19c, eax_20, &var_13c, &var_19c, &eax_4[2])
            float xmm4_5[0x4] = var_64
            float xmm3_15[0x4] = *eax_24
            float xmm0_45 = xmm3_15[0] f- xmm4_5
            float xmm1_19 = _mm_shuffle_ps(xmm3_15, xmm3_15, 0x55)
            float xmm2_17 = eax_4[4].d
            var_64[0] = xmm0_45 * xmm2_17 f+ xmm4_5
            float xmm0_49 = _mm_shuffle_ps(xmm4_5, xmm4_5, 0x55)
            float xmm0_51 = _mm_shuffle_ps(xmm4_5, xmm4_5, 0xaa)
            float xmm4_6 = _mm_shuffle_ps(xmm4_5, xmm4_5, 0xff)
            var_64[1] = (xmm1_19 - xmm0_49) * xmm2_17 + xmm0_49
            float xmm1_24 = _mm_shuffle_ps(xmm3_15, xmm3_15, 0xaa)
            float xmm3_19 = (_mm_shuffle_ps(xmm3_15, xmm3_15, 0xff) - xmm4_6) * xmm2_17 + xmm4_6
            var_64[2] = (xmm1_24 - xmm0_51) * xmm2_17 + xmm0_51
            var_64[3] = xmm3_19
            *(arg3 + 0x10a0) = var_64
            var_270_7 = var_13c:0xc.d
            void var_38
            var_274_4 = sub_498790(arg3 + 0xc, xmm1_1, &var_38)
            void var_1fc
            eax_27 = &var_1fc
        
        float* eax_29 = sub_4cdb60(eax_27, &var_ac:0xc, arg3 + 0x10a0, eax_27, var_274_4, var_270_7)
        int128_t xmm1_28 = *(eax_29 + 0x10)
        int128_t xmm2_20 = *(eax_29 + 0x20)
        int128_t xmm3_20 = *(eax_29 + 0x30)
        int128_t xmm4_7 = *(eax_29 + 0x40)
        int128_t xmm5_3 = *(eax_29 + 0x50)
        *(arg3 + 0x1014) = *eax_29
        *(arg3 + 0x1024) = xmm1_28
        *(arg3 + 0x1034) = xmm2_20
        *(arg3 + 0x1044) = xmm3_20
        *(arg3 + 0x1054) = xmm4_7
        *(arg3 + 0x1064) = xmm5_3
        *(arg3 + 0x1034) = arg2[2].d
        *(arg3 + 0x1038) = *(arg2 + 0x24)
        float xmm0_57 = xmm1_1 f- *(arg3 + 0x2d8)
        float xmm0_58 = sub_4be3e0(arg3 + 0x24c, xmm1_1 f- *(arg3 + 0x2d4))
        int32_t eax_32
        int32_t ecx_15
        int32_t edx_7
        float xmm0_59
        eax_32, ecx_15, edx_7, xmm0_59 = sub_4be3e0(arg3 + 0x288, xmm0_57)
        float xmm4_8 = *(arg3 + 0x2c4)
        float xmm0_60 = (zx.o(0)).d
        float xmm1_33 = xmm0_57 f- *(arg3 + 0x2c8)
        xmm4_8 f- 0
        eax_32:1.b = (xmm4_8 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4_8, 0f) ? 1 : 0) << 2
            | (xmm4_8 < 0f ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (p_2)
            if (not(0 f> xmm1_33))
                if (xmm1_33 < xmm4_8)
                    int32_t var_270_9 = ecx_15
                    xmm0_60 = sub_41f710(eax_32, edx_7, *(arg3 + 0x2cc), xmm0_60, xmm4_8, xmm1_33, 
                        zx.o(0), 1f)
                else
                    xmm0_60 = 1f
        else if (not(0 f> xmm1_33))
            xmm0_60 = 1f
        
        *(arg3 + 0x1074) = arg2[6].d
        *(arg3 + 0x1078) = *(arg2 + 0x64)
        *(arg3 + 0x107c) = *(arg2 + 0x68)
        *(arg3 + 0x1080) = *(arg2 + 0x6c) * ((xmm0_59 - xmm0_58) * xmm0_60 + xmm0_58)
        bool cond:2_1 = *(arg3 + 6) == 0
        *(arg3 + 0x1084) = arg2[7]
        
        if (not(cond:2_1) && arg4 != 0)
            *(arg3 + 0x1080) = 0
        
        *(arg3 + 0x1070) = arg2[8].d
        result = sub_4bc210(arg3 + 0x8ac, xmm1_1)
        
        if (result == 0)
            result = arg2[8].d
        
        *(arg3 + 0x1094) = result
        int32_t ecx_18 = *(arg2 + 0x84)
        result.b = *(arg3 + 0xfe8)
        *(arg3 + 0x1098) = ecx_18
        result.b |= arg2[0xd].b
        *(arg3 + 0x10e4) = result.b
        
        if (ecx_18 == 0xffffffff)
            sub_489550(result, &data_5b2591, "ui.worldInfo.sublayer != -1", 
                "d:\ax\trunk\ax2017\engine\ui2.cpp", 0x1986, "UI2UpdateComponents")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
    
    @__security_check_cookie@4(result_1 ^ &__saved_ebp)
    return result
}
