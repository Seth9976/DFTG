// 函数名称: sub_430460
// 虚拟地址: 0x430460
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

voidsub_430460()
{
    // 第一条实际指令: if (data_6cfe6c == 0)
    if (data_6cfe6c == 0)
        return 
    
    void* esi_1 = data_6cfe70
    float xmm2_1 = *(esi_1 + 0xbc0)
    xmm2_1 f- 0
    void* eax
    eax:1.b =
        (xmm2_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_1, 0f) ? 1 : 0) << 2 | (xmm2_1 < 0f ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (not(p_2))
        float xmm0_1 = *(esi_1 + 0xbc4)
        xmm0_1 f- 0
        eax:1.b = (xmm0_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 0f) ? 1 : 0) << 2
            | (xmm0_1 < 0f ? 1 : 0)
        bool p_4 = unimplemented  {test ah, 0x44}
        
        if (p_4)
            goto label_4304c9
        
        float xmm0_2 = *(esi_1 + 0xbc8)
        xmm0_2 f- 0
        eax:1.b = (xmm0_2 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_2, 0f) ? 1 : 0) << 2
            | (xmm0_2 < 0f ? 1 : 0)
        bool p_6 = unimplemented  {test ah, 0x44}
        
        if (p_6)
            goto label_4304c9
        
        float xmm0_3 = *(esi_1 + 0xbcc)
        xmm0_3 f- 0
        eax:1.b = (xmm0_3 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_3, 0f) ? 1 : 0) << 2
            | (xmm0_3 < 0f ? 1 : 0)
        bool p_8 = unimplemented  {test ah, 0x44}
        
        if (p_8)
            goto label_4304c9
        
        return 
    
    label_4304c9:
    bool cond:1_1 = 0f f> *(esi_1 + 0xbc8)
    eax = data_aca1ec
    uint128_t xmm3_1 = zx.o(*(eax + 0x18))
    int32_t xmm0_5 = _mm_cvtepi32_ps(zx.o(*(eax + 0x14)))
    int32_t xmm3_2 = _mm_cvtepi32_ps(xmm3_1)
    
    if (cond:1_1 || xmm2_1 f> xmm0_5 || 0 f> *(esi_1 + 0xbcc) || *(esi_1 + 0xbc4) f> xmm3_2)
        return 
    
    eax = data_114e814
    int32_t i = 0
    int128_t xmm0_7 = *(eax + 0x28)
    int32_t ecx_1 = *(eax + 0x38)
    *(eax + 0x28) = *(esi_1 + 0xbc0)
    *(eax + 0x38) = 0xffffffff
    
    if (*(esi_1 + 0x960) s> 0)
        void* ecx_2 = esi_1 + 0x964
        void* var_34_1 = ecx_2
        
        do
            if (*(esi_1 + 0xbd0) != i)
                bool p_10
                
                if (*(esi_1 + 0xbd8) == i)
                    float xmm0_9 = *(esi_1 + 0xbdc)
                    xmm0_9 f- 0
                    eax:1.b = (xmm0_9 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_9, 0f) ? 1 : 0) << 2
                        | (xmm0_9 < 0f ? 1 : 0)
                    p_10 = unimplemented  {test ah, 0x44}
                
                if (*(esi_1 + 0xbd8) != i || not(p_10))
                    sub_4a7800(*ecx_2)
                    ecx_2 = var_34_1
            
            i += 1
            ecx_2 += 4
            var_34_1 = ecx_2
        while (i s< *(esi_1 + 0x960))
        
        eax = data_114e814
    
    *(eax + 0x28) = xmm0_7
    *(eax + 0x38) = ecx_1
    int32_t ecx_4 = *(esi_1 + 0xbd0)
    
    if (ecx_4 != 0xffffffff)
        sub_4a7800(*(esi_1 + (ecx_4 << 2) + 0x964))
    
    int32_t ecx_6 = *(esi_1 + 0xbd8)
    
    if (ecx_6 == 0xffffffff)
        return 
    
    float xmm0_11 = *(esi_1 + 0xbdc)
    xmm0_11 - 0f
    eax:1.b = (xmm0_11 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_11, 0f) ? 1 : 0) << 2
        | (xmm0_11 < 0f ? 1 : 0)
    bool p_12 = unimplemented  {test ah, 0x44}
    
    if (p_12)
        sub_4a7800(*(esi_1 + (ecx_6 << 2) + 0x964))
}
