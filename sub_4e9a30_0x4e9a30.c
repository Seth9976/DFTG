// 函数名称: sub_4e9a30
// 虚拟地址: 0x4e9a30
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

float __convention("regparm")sub_4e9a30(int32_t arg1, int32_t* arg2, void* arg3, float arg4 @ xmm2, void* arg5)
{
    // 第一条实际指令: if (arg2[2] == 0)
    if (arg2[2] == 0)
        float xmm0_1 = arg2[8]
        xmm0_1 f- 0
        arg1:1.b = (xmm0_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 0f) ? 1 : 0) << 2
            | (xmm0_1 < 0f ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (p_2)
            *(arg3 + 0x28) = xmm0_1
        
        if (*(arg3 + 0x1c) != 0)
            if (*(arg2 + 0x17) != 0)
                *(arg3 + 0x34) = arg2[5]
            
            if (*(arg2 + 0x1b) != 0)
                *(arg3 + 0x38) = arg2[6]
    
    int32_t eax_2 = arg2[4]
    
    if (eax_2 != 0)
        *(arg3 + 0x48) = eax_2
    
    int32_t* eax_3 = arg2[1]
    float result
    
    if (eax_3 != 0)
        *(arg3 + 0x2c) = *eax_3
        *(arg3 + 0x30) = arg2[3]
        *(arg3 + 0x10) = arg2[9]
        *(arg3 + 0x14) = arg2[0xa]
        *(arg3 + 0x74) = arg2[0xb]
        *(arg3 + 0x78) = arg2[0xc]
        result = arg2[1]
    
    if (eax_3 == 0 || result == 0)
        *(arg3 + 0x2c) = **(arg5 + 4)
        *(arg3 + 0x30) = *(arg5 + 0xc)
        *(arg3 + 0x10) = *(arg5 + 0x24)
        *(arg3 + 0x14) = *(arg5 + 0x28)
        *(arg3 + 0x74) = *(arg5 + 0x2c)
        result = *(arg5 + 0x30)
        *(arg3 + 0x78) = result
    
    if (*(arg3 + 0x1c) != 0 && arg2[2] != 0)
        void* eax_16 = sub_4d4280(*(arg3 + 0x2c))
        float eax_17
        float edx
        eax_17, edx = sub_48f600(*arg2[2])
        char* var_10 = sub_4be900(&arg2[5], arg3 + 0x40)
        char* eax_19 = sub_4be900(&var_10, arg3 + 0x44)
        var_10 = sub_4be900(&arg2[7], arg3 + 0x3c)
        char* eax_21 = sub_4be900(&var_10, arg3 + 0x44)
        float xmm5_1 = *(arg3 + 0x28)
        char* var_2c_1 = eax_21
        float xmm2 = xmm5_1
        char* var_30 = eax_19
        float xmm1_1 = arg2[8]
        xmm1_1 f- 0
        var_10 = xmm2
        eax_21:1.b = (xmm1_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_1, 0f) ? 1 : 0) << 2
            | (xmm1_1 < 0f ? 1 : 0)
        bool p_4 = unimplemented  {test ah, 0x44}
        
        if (p_4)
            xmm2 = xmm2 * xmm1_1
            var_10 = xmm2
        
        float xmm4_2 = *(arg3 + 0x20) f+ *(arg3 + 0xc)
        uint128_t xmm3_1 = zx.o(*(eax_16 + 4))
        float xmm0_3 = _mm_cvtepi32_ps(zx.o(arg2[0xe]))
        int32_t** eax_23 = arg2[2]
        int128_t* edx_6 = data_114e814 + 0x28
        float xmm3_2 = _mm_cvtepi32_ps(xmm3_1)
        bool cond:0_1 = edx_6[1].d == 0
        int32_t* esi_2 = *eax_23
        float xmm4_3 = xmm4_2 + xmm0_3 * xmm2
        float xmm1_3 = edx * xmm2
        float xmm3_4 = xmm3_2 * xmm5_1 f+ *(arg3 + 0x24)
        float xmm0_7 = _mm_cvtepi32_ps(zx.o(arg2[3])) * xmm2
        float var_28 = xmm4_3
        float xmm3_6 = xmm3_4 - xmm1_3 + xmm0_7
        float var_24_1 = xmm3_6
        float var_20_2 = eax_17 * xmm2 + xmm4_3
        float var_1c_2 = xmm1_3 + xmm3_6
        
        if (cond:0_1)
            float eax_25
            float edx_8
            eax_25, edx_8 = sub_48f600(esi_2)
            float xmm2_1 = var_10
            float var_54 = xmm2_1
            int32_t var_48_1 = 0
            int32_t var_3c_1 = 0
            int32_t var_50_1 = 0
            float var_44_1 = xmm2_1
            int32_t var_38_1 = 0
            int32_t var_34_1 = 0x3f800000
            float var_4c_1 = eax_25 * xmm2_1 * 0.5f + xmm4_3
            float var_40_1 = edx_8 * xmm2_1 * 0.5f + xmm3_6
            var_28.o = data_60cb50
            void var_78
            sub_41da40(&var_54, arg3 + 0x50, &var_78, &var_54)
            result = sub_4c0280(&var_28, &var_78, esi_2, &var_28, &var_30, nullptr)
        else
            int32_t* var_8c_1 = arg2
            char** var_90_1 = &var_30
            result = sub_4c0720(&var_28, arg3 + 0x50, esi_2, &var_28, edx_6, arg2)
    
    *(arg3 + 0xc) = *(arg3 + 0xc) + arg4
    return result
}
