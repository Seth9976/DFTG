// 函数名称: sub_4a3790
// 虚拟地址: 0x4a3790
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_4a3790(void* arg1, float arg2 @ xmm1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* eax_2 = *(arg1 + 0xf10)
    void* eax_3 = sub_4fd250(*(arg1 + 0xe6c))
    int32_t* var_20_1
    int32_t* eax_4
    int32_t edi_1
    
    if (eax_3 != 0)
        eax_4 = sub_4981f0(*eax_3)
        edi_1 = 0
        var_20_1 = eax_4
    
    float var_5c
    float var_4c
    int64_t var_2c
    float var_20_2
    float var_1c
    float var_18
    float var_14
    
    if (eax_3 == 0 || eax_4[2] s<= 0)
    label_4a380b:
        float xmm1 = *(arg1 + 0x10a8)
        float xmm2 = *(arg1 + 0x10a0)
        float xmm3_1 = *(arg1 + 0x10a4)
        var_1c = *(arg1 + *(arg1 + 0xe10) * 0x48 + 0xd28)
        float xmm0_1 = *(arg1 + 0x10ac)
        float xmm2_2 = (xmm2 + xmm1) * 0.5f
        var_14 = (xmm1 - xmm2) / 100f
        var_5c = xmm2_2
        float var_28 = xmm2_2
        float xmm3_3 = (xmm3_1 + xmm0_1) * 0.5f
        var_18 = (xmm0_1 - xmm3_1) / 100f
        var_20_2 = xmm3_3
        float var_24 = xmm3_3
    else
        void* ebx_1 = nullptr
        
        while (true)
            if (sub_4f0ef0(eax_4, ebx_1 + *eax_4, &data_626728, 8) != 0)
                var_1c = *(arg1 + *(arg1 + 0xe10) * 0x48 + 0xd28)
                int128_t* eax_11 = sub_498790(arg1 + 0xc, *(data_114e818 + 0x2c), &var_4c)
                float xmm0_9 = (*(eax_11 + 8) f- *eax_11) / 100f
                float xmm1_9 = (*(eax_11 + 0xc) f- *(eax_11 + 4)) / 100f
                float xmm1_12 = (*(arg1 + 0x10a8) f+ *(arg1 + 0x10a0)) * 0.5f
                float var_70_2 = (*(arg1 + 0x10ac) f+ *(arg1 + 0x10a4)) * 0.5f
                float var_74_1 = xmm1_12
                int64_t* eax_12 = sub_4a35c0(&var_4c)
                int32_t eax_13 = eax_12[1].d
                var_2c = *eax_12
                float xmm0_14 = var_2c.d
                var_20_2 = xmm1_12
                int32_t var_24_2 = eax_13
                float var_24_3 = xmm1_12
                var_5c = xmm0_14
                float var_28_2 = xmm0_14
                float xmm0_15 = *(arg1 + 0x1020)
                var_14 = xmm0_9 * 0.0500000007f * xmm0_15 f* data_aca218:0xc
                var_18 = xmm1_9 * 0.0500000007f * xmm0_15 f* data_aca218:0xc
                break
            
            eax_4 = var_20_1
            edi_1 += 1
            ebx_1 += 0x168
            
            if (edi_1 s>= eax_4[2])
                goto label_4a380b
    
    float xmm0_2 = *(data_114e818 + 0x2c)
    float xmm0_3 = xmm0_2 f- *(arg1 + 0x2d8)
    float xmm0_4 = sub_4be3e0(arg1 + 0x24c, xmm0_2 f- *(arg1 + 0x2d4))
    int32_t eax_9
    int32_t ecx_4
    int32_t edx_3
    float xmm0_5
    eax_9, ecx_4, edx_3, xmm0_5 = sub_4be3e0(arg1 + 0x288, xmm0_3)
    float xmm5_4 = *(arg1 + 0x2c4)
    float xmm1_5 = xmm0_3 f- *(arg1 + 0x2c8)
    xmm5_4 f- 0
    eax_9:1.b =
        (xmm5_4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm5_4, 0f) ? 1 : 0) << 2 | (xmm5_4 < 0f ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    int32_t xmm1_6
    
    if (p_1)
        if (not(0 f<= xmm1_5))
            xmm1_6 = (zx.o(0)).d
        else if (xmm1_5 < xmm5_4)
            int32_t var_70_3 = ecx_4
            int32_t xmm0_17
            eax_9, xmm0_17 =
                sub_41f710(eax_9, edx_3, *(arg1 + 0x2cc), (zx.o(0)).d, xmm5_4, xmm1_5, zx.o(0), 1f)
            xmm1_6 = xmm0_17
        else
            xmm1_6 = 0x3f800000
    else if (0 f<= xmm1_5)
        xmm1_6 = 0x3f800000
    else
        xmm1_6 = (zx.o(0)).d
    
    int32_t* edi_3 = eax_2
    void* ebx_2 = eax_3
    float xmm0_21 = ((xmm0_5 - xmm0_4) f* xmm1_6 + xmm0_4) f* *(arg1 + 0x1080)
    void* result
    void* result_1
    void* result_2
    
    if (edi_3 == 0)
        result_2 = arg1 + 0xe70
        result_1 = result_2
        
        if (ebx_2 == 0)
        label_4a3afd:
            result_1 = result_2
            goto label_4a3b00
        
        edi_3 = nullptr
    label_4a3b00:
        result = result_1
        *result = edi_3
        
        if (ebx_2 != 0)
            xmm0_21 f- 0
            result:1.b = (xmm0_21 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_21, 0f) ? 1 : 0) << 2
                | (xmm0_21 < 0f ? 1 : 0)
            bool p_5 = unimplemented  {test ah, 0x44}
            
            if (p_5)
                float xmm1_19 = *(data_114ec70 + 0xa0)
                float xmm0_24 = xmm1_19 * 0f * 100f
                int64_t xmm3_7 = _mm_unpacklo_ps(var_5c - xmm0_24, var_20_2 - xmm0_24)
                int32_t xmm0_27 = __minss_xmmss_memss(var_14, var_18)
                *(ebx_2 + 0x40) = xmm3_7
                *(ebx_2 + 0x48) = 0f - xmm1_19 * 100f
                *(ebx_2 + 0x2c) = xmm0_27
                float xmm0_29 = var_1c * 0.5f
                float xmm0_30 = sub_41f120(xmm0_29)
                float var_44_1 = xmm0_30
                float xmm1_22 = xmm0_30 * 0f
                var_4c = xmm1_22
                float var_48_1 = xmm1_22
                int32_t var_40_1 = sub_41f100(xmm0_29)
                *(ebx_2 + 0x30) = var_4c.o
                sub_501f70(ebx_2, arg2)
                result = sub_4a3580(arg1)
    else
        bool p_3
        
        if (ebx_2 == 0)
            xmm0_21 f- 0
            eax_9:1.b = (xmm0_21 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_21, 0f) ? 1 : 0) << 2
                | (xmm0_21 < 0f ? 1 : 0)
            p_3 = unimplemented  {test ah, 0x44}
        
        if (ebx_2 != 0 || not(p_3))
            result_2 = arg1 + 0xe70
            result_1 = result_2
            
            if (edi_3 == *result_2)
                goto label_4a3afd
            
            if (ebx_2 != 0)
                sub_4fd2f0(ebx_2)
            
            goto label_4a3ac5
        
        result = arg1 + 0xe70
        result_1 = result
        
        if (edi_3 != *result || *(arg1 + 5) != ebx_2.b)
        label_4a3ac5:
            ebx_2 = sub_4fd1f0(edi_3, &var_2c:4)
            *(arg1 + 0xe6c) = *(ebx_2 + 0x78)
            goto label_4a3b00
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
