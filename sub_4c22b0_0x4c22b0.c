// 函数名称: sub_4c22b0
// 虚拟地址: 0x4c22b0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

float* __convention("regparm")sub_4c22b0(int32_t arg1, float* arg2, int32_t* arg3, float arg4[0x4] @ xmm2, float arg5[0x4] @ xmm3, float arg6, float arg7, int32_t* arg8, int32_t arg9, int32_t arg10, char arg11, int128_t* arg12, int32_t* arg13)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float xmm0_1[0x4] = _mm_shuffle_ps(arg5, arg5, 0)
    float xmm1_1[0x4] = _mm_shuffle_ps(arg4, arg4, 0)
    float var_d0[0x4] = xmm0_1
    float var_e0[0x4] = xmm1_1
    float eax_3
    float edx
    eax_3, edx = sub_48f600(arg3)
    float xmm6[0x4] = *(arg12 + 8)
    float xmm0_2[0x4] = *arg12
    float xmm7[0x4] = *(arg12 + 0xc)
    float xmm1_2[0x4] = *(arg12 + 4)
    float xmm2_1 = xmm7[0] f- xmm1_2
    float var_160[0x4] = xmm0_2
    float xmm5_2 = (xmm6[0] f- xmm0_2) * eax_3
    int32_t var_84 = 0
    float xmm2_2 = xmm2_1 * edx
    int32_t var_94 = 0
    float xmm4_1 = xmm5_2 * 0.5f
    float xmm3_1 = xmm2_2 * 0.5f
    float var_150[0x4] = xmm1_2
    float xmm5_4 = xmm2_2 - xmm3_1
    float var_80 = xmm4_1
    float var_78 = arg6
    float var_90 = xmm3_1
    float var_88 = arg7
    float var_7c = arg6 - xmm4_1
    float var_8c = arg7 - xmm3_1
    float xmm2_5
    
    if (xmm4_1 + xmm4_1 <= arg6)
        xmm2_5 = xmm5_2 - xmm4_1
    else
        xmm4_1 = arg6 * 0.5f
        xmm2_5 = xmm5_2 - xmm4_1
        float var_80_1 = xmm4_1
        float var_7c_1 = xmm4_1
    
    float xmm1_4
    
    if (xmm3_1 + xmm3_1 <= arg7)
        xmm1_4 = xmm2_2
    else
        xmm1_4 = xmm2_2
        xmm3_1 = arg7 * 0.5f
        xmm5_4 = xmm1_4 - xmm3_1
        float var_90_1 = xmm3_1
        float var_8c_1 = xmm3_1
    
    float xmm4_3 = xmm4_1 / xmm5_2
    int32_t var_74 = 0
    int32_t var_68 = 0x3f800000
    int32_t var_24 = 0
    int32_t var_18_2 = 0x3f800000
    float xmm2_6 = xmm2_5 / xmm5_2
    float xmm0_14[0x4] = __addps_xmmps_memps(var_84.o, var_e0)
    float xmm3_3 = xmm3_1 / xmm1_4
    float xmm5_6 = xmm5_4 / xmm1_4
    float xmm1_5[0x4] = var_160
    float var_34[0x4] = xmm0_14
    float xmm0_15[0x4] = var_94.o
    float xmm6_1[0x4] = _mm_shuffle_ps(xmm6, xmm6, 0)
    float xmm0_16[0x4] = __addps_xmmps_memps(xmm0_15, var_d0)
    float xmm1_6[0x4] = _mm_shuffle_ps(xmm1_5, xmm1_5, 0)
    float xmm6_2[0x4] = _mm_sub_ps(xmm6_1, xmm1_6)
    float var_70 = xmm4_3
    float var_6c = xmm2_6
    float xmm7_1[0x4] = _mm_shuffle_ps(xmm7, xmm7, 0)
    float var_44[0x4] = xmm0_16
    float xmm0_17[0x4] = var_150
    float var_20 = xmm3_3
    var_150 = _mm_shuffle_ps(xmm0_17, xmm0_17, 0)
    float xmm7_2[0x4] = __subps_xmmps_memps(xmm7_1, var_150)
    float var_1c_1 = xmm5_6
    float xmm6_4[0x4] = _mm_add_ps(_mm_mul_ps(xmm6_2, var_74.o), xmm1_6)
    float xmm7_3[0x4] = _mm_mul_ps(xmm7_2, var_24.o)
    var_d0 = xmm6_4
    var_e0 = __addps_xmmps_memps(xmm7_3, var_150)
    int32_t var_178_1
    char* ecx_2
    
    if (xmm2_6 >= xmm4_3)
        if (not(xmm5_6 < xmm3_3))
            float* i = nullptr
            float* i_1 = nullptr
            float xmm5_7 = *arg2
            float xmm6_5 = arg2[2]
            float xmm7_5 = arg2[5]
            float xmm1_8 = arg2[4] * var_44[3]
            float xmm2_8 = var_34[3] * xmm5_7
            float xmm3_6 = arg2[3] * var_34[0] + arg2[4] * var_44[0]
            float xmm0_26 = arg2[1] * var_44[1]
            var_34[0] = var_34[0] * xmm5_7 + arg2[1] * var_44[0] + xmm6_5
            float xmm4_10 = var_34[1] * xmm5_7 + xmm0_26
            float xmm0_28 = arg2[4] * var_44[1]
            var_44[0] = xmm3_6 + xmm7_5
            float xmm3_10 = arg2[3] * var_34[1] + xmm0_28
            float xmm0_30 = arg2[1] * var_44[2]
            var_34[1] = xmm4_10 + xmm6_5
            float xmm4_14 = var_34[2] * xmm5_7 + xmm0_30
            float xmm0_32 = arg2[4] * var_44[2]
            var_44[1] = xmm3_10 + xmm7_5
            float xmm3_14 = arg2[3] * var_34[2] + xmm0_32
            var_34[2] = xmm4_14 + xmm6_5
            var_44[2] = xmm3_14 + xmm7_5
            float xmm3_21 = arg2[3] * var_34[3] + xmm1_8 + xmm7_5
            var_34[3] = xmm2_8 + arg2[1] * var_44[3] + xmm6_5
            var_44[3] = xmm3_21
            float* result
            
            do
                result.b = arg11
                float* i_2 = i + 1
                int32_t j = 0
                float* result_1 = i_2
                int32_t j_1 = 0
                
                do
                    if (result.b != 0 || i != 1 || j != i)
                        float xmm0_33 = var_34[i]
                        float xmm1_9 = var_34[i_2]
                        xmm0_33 - xmm1_9
                        result:1.b = (xmm0_33 == xmm1_9 ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_33, xmm1_9) ? 1 : 0) << 2
                            | (xmm0_33 < xmm1_9 ? 1 : 0)
                        bool p_2 = unimplemented  {test ah, 0x44}
                        
                        if (p_2)
                            float xmm2_11 = var_44[j]
                            float xmm3_22 = var_44[1 + j]
                            xmm2_11 - xmm3_22
                            result:1.b = (xmm2_11 == xmm3_22 ? 1 : 0) << 6
                                | (is_unordered.d(xmm2_11, xmm3_22) ? 1 : 0) << 2
                                | (xmm2_11 < xmm3_22 ? 1 : 0)
                            bool p_4 = unimplemented  {test ah, 0x44}
                            
                            if (p_4)
                                var_160[0] = xmm0_33
                                int32_t xmm0_34 = var_e0[j]
                                var_160[1] = xmm2_11
                                int32_t xmm2_12 = var_d0[i_2]
                                var_160[2] = xmm1_9
                                float xmm1_10 = var_d0[i]
                                var_160[3] = xmm3_22
                                int32_t xmm3_23 = var_e0[1 + j]
                                float var_b4 = xmm1_10
                                int32_t var_b0_1 = xmm0_34
                                int32_t var_ac_1 = xmm2_12
                                int32_t var_a8_1 = xmm0_34
                                float var_a4_1 = xmm1_10
                                int32_t var_a0_1 = xmm3_23
                                int32_t var_9c_1 = xmm2_12
                                int32_t var_98_1 = xmm3_23
                                sub_4c1750(arg10, &var_b4)
                                int32_t edx_2 = arg9
                                void* var_18_4
                                void* ecx_6
                                
                                if (edx_2.b == 0)
                                    ecx_6 = arg8
                                    var_18_4 = arg8
                                else
                                    int32_t k = 0
                                    TEB* fsbase
                                    void* ecx_4 = *fsbase->ThreadLocalStoragePointer
                                    void* var_18_3 = ecx_4
                                    void var_100
                                    
                                    do
                                        if (data_1516490 s> *(ecx_4 + 4))
                                            edx_2 = __Init_thread_header(&data_1516490)
                                            
                                            if (data_1516490 == 0xffffffff)
                                                data_1511a90 = 0
                                                data_1511a94 = 0
                                                data_1511a98 = 1
                                                data_1511a9c = 0
                                                data_1511aa0 = 0
                                                data_1511aa4 = 1
                                                data_1511aa8 = 1
                                                data_1511aac = 1
                                                edx_2 = __Init_thread_footer(&data_1516490)
                                        
                                        int32_t var_174_2 = *arg8
                                        int32_t var_178_2 = arg8[2]
                                        int32_t eax_9 = *(k + &data_1511a94) + j_1
                                        int32_t var_17c_1 = arg8[4]
                                        var_6c = (&var_84)[*(k + &data_1511a90) + i_1] f/ arg6
                                        float var_68_1 = (&var_94)[eax_9] f/ arg7
                                        int32_t eax_10
                                        eax_10, edx_2 = sub_4c29d0(eax_9, edx_2, &var_6c, arg8[6], 
                                            var_17c_1, var_178_2, var_174_2)
                                        ecx_4 = var_18_3
                                        *(&var_100 + k) = eax_10
                                        void var_fc
                                        *(&var_fc + k) = arg8[1]
                                        k += 8
                                    while (k s< 0x20)
                                    
                                    j = j_1
                                    ecx_6 = &var_100
                                    edx_2 = arg9
                                    var_18_4 = &var_100
                                
                                void* eax_12 = data_114e814
                                int32_t* var_180_2
                                char var_17c_3
                                int32_t* var_178_4
                                int32_t* var_174_4
                                float var_64
                                float* edx_4
                                float xmm0_40
                                float xmm1_11
                                
                                if (*(eax_12 + 0x38) == 0)
                                    var_174_4 = arg13
                                    int32_t xmm2_14 = var_44[j]
                                    var_178_4 = arg3
                                    float xmm0_41 = var_34[i_1]
                                    result = result_1
                                    var_17c_3 = edx_2.b
                                    var_64 = xmm0_41
                                    edx_4 = &var_b4
                                    float var_54_2 = xmm0_41
                                    xmm1_11 = var_34[result]
                                    xmm0_40 = var_44[1 + j]
                                    int32_t var_60_2 = xmm2_14
                                    int32_t var_58_2 = xmm2_14
                                    var_180_2 = ecx_6
                                label_4c2930:
                                    float var_5c_1 = xmm1_11
                                    float var_50_1 = xmm0_40
                                    float var_4c_1 = xmm1_11
                                    float var_48_1 = xmm0_40
                                    sub_4bef10(result, edx_4, &var_64, var_180_2, var_17c_3, var_178_4, 
                                        var_174_4)
                                else
                                    void var_120
                                    result = sub_4c1c50(eax_12 + 0x28, &var_b4, &var_160, 
                                        eax_12 + 0x28, &var_150, &var_120)
                                    
                                    if (result.b != 0)
                                        var_174_4 = arg13
                                        float xmm0_39 = var_150[1]
                                        edx_4 = &var_120
                                        var_178_4 = arg3
                                        float xmm2_13 = var_150[0]
                                        var_17c_3 = arg9.b
                                        xmm1_11 = var_150[2]
                                        var_180_2 = var_18_4
                                        float var_60_1 = xmm0_39
                                        float var_58_1 = xmm0_39
                                        xmm0_40 = var_150[3]
                                        var_64 = xmm2_13
                                        float var_54_1 = xmm2_13
                                        goto label_4c2930
                                i = i_1
                                i_2 = result_1
                                result.b = arg11
                    
                    j += 1
                    j_1 = j
                while (j s< 3)
                
                i = i_2
                i_1 = i_2
            while (i s< 3)
            
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return result
        
        char const* const var_174_5 = "DrawParented9SliceImage"
        var_178_1 = 0x90b
        ecx_2 = "midTL.y <= midBR.y"
    else
        char const* const var_174_1 = "DrawParented9SliceImage"
        var_178_1 = 0x90a
        ecx_2 = "midTL.x <= midBR.x"
    
    sub_489550(eax_3, &data_5b2591, ecx_2, "d:\ax\trunk\ax2017\engine\sprite.cpp", var_178_1, 
        "DrawParented9SliceImage")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
