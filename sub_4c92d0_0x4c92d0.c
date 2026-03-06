// 函数名称: sub_4c92d0
// 虚拟地址: 0x4c92d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int128_t* __convention("regparm")sub_4c92d0(int32_t arg1, void* arg2, void* arg3, int128_t* arg4, int128_t* arg5, int32_t* arg6, int32_t* arg7)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* ecx = *(arg3 + 0xc8)
    int128_t* result
    int128_t xmm0_5
    
    if (ecx != 0)
        float var_70[0x4]
        int128_t var_3c = *sub_4c9850(&var_70, arg2, ecx, &var_70)
        int128_t* eax_6 = sub_4c8d30(&var_70, arg3 + 0x10, arg5, &var_70, arg3 + 0x20)
        float xmm2_2 = _mm_cvtepi32_ps(zx.o(*(arg3 + 0xb0)))
        float xmm0_7[0x4] = *eax_6
        float var_18_1 = xmm2_2
        float var_2c_1 = xmm2_2
        float xmm0_9 = _mm_cvtepi32_ps(zx.o(*(arg3 + 0xac)))
        float var_1c_1 = xmm0_9
        float xmm3_1 = xmm0_9
        float var_28_1 = xmm0_9
        float xmm4_1 = xmm0_9
        float var_20_1 = xmm0_9
        
        if (arg7 != 0)
            uint128_t xmm2_3 = zx.o(*arg7)
            float xmm0_11 = _mm_cvtepi32_ps(zx.o(arg7[1]))
            xmm2_2 = _mm_cvtepi32_ps(xmm2_3)
            var_1c_1 = xmm0_11
            xmm3_1 = xmm0_11
            var_18_1 = xmm2_2
            xmm4_1 = xmm0_11
            var_2c_1 = xmm2_2
            var_28_1 = xmm0_11
            var_20_1 = xmm0_11
        
        float var_48_1
        float var_44_1
        
        if (*(arg2 + 0x7c) == 0)
            var_48_1 = *(arg3 + 0xb8)
            var_44_1 = *(arg3 + 0xb4)
            var_18_1 = xmm2_2
            var_1c_1 = xmm3_1
            var_20_1 = xmm4_1
        else
            var_48_1 = *(arg2 + 0x80)
            var_44_1 = *(arg2 + 0x84)
        
        float xmm1_4 = var_3c:0xc.d f- var_3c:4.d
        float xmm0_17 = var_3c:8.d f- var_3c.d
        var_3c:0xc.d = xmm1_4
        var_3c:8.d = xmm0_17
        float eax_9
        float edx_1
        eax_9, edx_1 = sub_4c90a0(*eax_6, var_3c:8.d, var_3c:0xc.d, var_48_1, var_44_1, *(arg3 + 0xc0), 
            *(arg3 + 0xbc), var_2c_1, var_28_1)
        bool cond:1_1 = *(arg3 + 0xd9) == 0
        float xmm4_3 = _mm_shuffle_ps(xmm0_7, xmm0_7, 0xff)
        float xmm5_2[0x4] = _mm_shuffle_ps(xmm0_7, xmm0_7, 0x55)
        float xmm4_4 = xmm4_3 f- xmm5_2
        var_70 = xmm5_2
        float xmm3_4 = _mm_shuffle_ps(xmm0_7, xmm0_7, 0xaa) f- xmm0_7
        float xmm7_3 = xmm0_17 * var_18_1 + (var_18_1 - 1f) * eax_9
        float xmm2_7 = xmm1_4 * var_20_1 + (var_1c_1 - 1f) * edx_1
        float xmm3_6 = xmm4_4 / xmm2_7
        float xmm2_9 = xmm3_4 / xmm7_3
        float xmm1_9 = _mm_min_ss(xmm2_9, xmm3_6)
        float var_20_2 = xmm1_9
        
        if (not(cond:1_1))
            xmm1_9 = *(arg5 + 0xc)
            var_20_2 = xmm1_9
        
        int128_t var_d0_1 = *arg5
        int128_t xmm0_23 = arg5[1]
        int128_t var_f0_1 = xmm0_23
        int128_t var_c0_1 = xmm0_23
        int128_t var_b0_1 = arg5[2]
        int128_t var_a0_1 = arg5[3]
        int128_t var_90_1 = arg5[4]
        int128_t xmm0_27 = arg5[5]
        int32_t* eax_12
        float xmm1_13
        float xmm2_10
        
        if (*(arg3 + 0xd8) != 0)
            var_70 = xmm0_7
            int32_t eax_13
            int32_t edx_4
            eax_13, edx_4 = sub_426dd0(&var_70)
            xmm2_10 = var_20_2
            var_3c:8.d = eax_13
            eax_12 = arg6
            var_3c:0xc.d = edx_4
            float xmm1_16 = _mm_cvtepi32_ps(zx.o(*eax_12)) * (eax_9 * xmm2_10 + xmm2_9 * xmm0_17)
            float xmm0_54 = _mm_cvtepi32_ps(zx.o(eax_12[1]))
            xmm1_13 = xmm1_16 f+ var_3c:8.d
            float xmm0_56 = xmm0_54 * (edx_1 * xmm2_10 + xmm3_6 * xmm1_4) f+ var_3c:0xc.d
            var_c0_1:8.d = xmm1_13
            var_d0_1:4.d = xmm0_56
            var_c0_1.d = xmm2_9 / xmm2_10 - 1f
            var_c0_1:0xc.d = xmm0_56
            var_c0_1:4.d = xmm3_6 / xmm2_10 - 1f
            var_f0_1 = var_c0_1
        else
            float xmm7_4 = xmm7_3 * xmm1_9
            float xmm0_29 = xmm2_7 * xmm1_9
            int32_t eax_10
            int32_t edx_2
            eax_10, edx_2 = sub_4eaaa0(*(arg3 + 0xd0))
            var_3c:8.d = eax_10
            var_3c:0xc.d = edx_2
            float xmm4_10 = var_3c:8.d * xmm3_4 + xmm0_7[0] - ((xmm7_4 - 0f) f* var_3c:8.d + 0f)
            var_3c.d = xmm4_10
            var_3c:8.d = xmm4_10 + xmm7_4
            float xmm3_10 = var_3c:0xc.d * xmm4_4 + var_70[0] - ((xmm0_29 - 0f) f* var_3c:0xc.d + 0f)
            var_3c:4.d = xmm3_10
            var_3c:0xc.d = xmm3_10 + xmm0_29
            int32_t eax_11
            int32_t edx_3
            eax_11, edx_3 = sub_426dd0(&var_3c)
            xmm2_10 = var_20_2
            var_3c:8.d = eax_11
            eax_12 = arg6
            var_3c:0xc.d = edx_3
            float xmm1_12 = _mm_cvtepi32_ps(zx.o(*eax_12)) * (eax_9 * xmm2_10 + xmm0_17 * xmm1_9)
            float xmm0_43 = _mm_cvtepi32_ps(zx.o(eax_12[1]))
            xmm1_13 = xmm1_12 f+ var_3c:8.d
            var_d0_1:4.d = xmm0_43 * (edx_1 * xmm2_10 + xmm1_4 * xmm1_9) f+ var_3c:0xc.d
        
        int32_t* ecx_7 = *(arg3 + 0xc8)
        var_d0_1:0xc.d = xmm2_10
        var_d0_1.d = xmm1_13
        
        if (ecx_7[1] != 0x1e)
            sub_489550(eax_12, &data_5b2591, "ptr->assetType == ASSET_TYPE_UI", 
                "d:\ax\trunk\ax2017\engine\uidef.cpp", 0x126, "UIDefGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        void* eax_14 = sub_4981f0(ecx_7)
        int128_t xmm0_58 = *(eax_14 + 0xc)
        int128_t xmm0_59 = *(eax_14 + 0xc)
        result = arg4
        int128_t xmm0_60 = data_5d2770
        *result = var_d0_1
        result[1] = var_f0_1
        result[2] = xmm0_59
        result[3] = xmm0_60
        result[4] = xmm0_58
        xmm0_5 = xmm0_27
    else
        result = arg4
        *result = *arg5
        result[1] = arg5[1]
        result[2] = arg5[2]
        result[3] = arg5[3]
        result[4] = arg5[4]
        xmm0_5 = arg5[5]
    
    result[5] = xmm0_5
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
