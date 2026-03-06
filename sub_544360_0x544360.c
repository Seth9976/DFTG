// 函数名称: sub_544360
// 虚拟地址: 0x544360
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_544360(int32_t arg1, int32_t* arg2, int32_t* arg3, void* arg4)
{
    // 第一条实际指令: uint32_t (* eax)[0x4] = arg2[1]
    uint32_t (* eax)[0x4] = arg2[1]
    int32_t ebx = *arg2
    uint32_t (* var_18)[0x4] = eax
    int32_t var_1c = ebx
    int32_t eax_2 = *(arg4 + 0x30)
    int32_t var_10 = eax_2
    int32_t eax_4 = sub_5233d0(eax_2) * ebx
    int32_t var_14 = eax_4
    void* eax_6 = sub_4c2e40(sub_5235a0(eax_4, eax, ebx, eax_2))
    bool cond:0 = arg2[5] != 8
    int32_t* edx_1 = arg2[0x12]
    void* var_20 = eax_6
    int32_t* ecx_3 = edx_1[2]
    int128_t var_34
    
    if (cond:0)
        int32_t var_44_1 = *edx_1
        var_34 = var_20.o
        int32_t var_24_1 = eax_2
        char eax_11 = sub_524b30(eax_2, &var_34, ecx_3, ecx_3)
        
        if (eax_11 == 0)
            return eax_11
    else
        var_34.d = ecx_3
        int32_t ecx_4 = *arg2
        var_34:4.d = ecx_4
        var_34:8.d = arg2[1]
        var_34:0xc.d = sub_5234e0(ecx_4, arg2[6])
        int32_t var_24 = arg2[6]
        sub_523b10(&var_34, &var_20)
    float xmm0_2 = _mm_cvtepi32_ps(zx.o(ebx))
    float xmm2 = *(arg4 + 0x4c)
    float xmm0_3 = xmm0_2 / xmm2
    float xmm0_4
    
    if (0 f<= xmm0_3)
        xmm0_4 = xmm0_3 + 0.5f
    else
        xmm0_4 = xmm0_3 - 0.5f
    
    int32_t ecx_6 = int.d(xmm0_4)
    float xmm0_8 = _mm_cvtepi32_ps(zx.o(eax)) / xmm2
    float xmm0_9
    
    if (0 f<= xmm0_8)
        xmm0_9 = xmm0_8 + 0.5f
    else
        xmm0_9 = xmm0_8 - 0.5f
    
    xmm2 - 1f
    int32_t edx_5 = int.d(xmm0_9)
    void* eax_12
    eax_12:1.b =
        (xmm2 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm2, 1f) ? 1 : 0) << 2 | (xmm2 < 1f ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (not(p_1) || ecx_6 s<= 0 || edx_5 s<= 0)
        void* eax_16 = var_20
        arg3[2] = eax
        *arg3 = eax_16
        eax_16.b = 1
        arg3[1] = ebx
        return eax_16
    
    arg3[1] = ecx_6
    arg3[2] = edx_5
    float eax_14
    int32_t ecx_8
    eax_14, ecx_8 = sub_4c2e40(sub_5235a0(eax_12, edx_5, ecx_6, eax_2))
    *arg3 = eax_14
    int32_t var_4c = arg3[2]
    sub_55f0b0(eax_14, ebx, var_20, eax, ecx_8, eax_14, arg3[1])
    int32_t eax_15
    eax_15.b = 1
    return eax_15
}
