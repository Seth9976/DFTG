// 函数名称: sub_525b80
// 虚拟地址: 0x525b80
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_525b80(int32_t arg1, int32_t* arg2, int32_t* arg3, void* arg4)
{
    // 第一条实际指令: int32_t eax = sub_523d70(arg4)
    int32_t eax = sub_523d70(arg4)
    int128_t var_28
    __builtin_memset(&var_28, 0, 0x14)
    int32_t eax_1 = sub_524930(&var_28, arg4)
    *arg3 = 8
    
    if (eax_1.b == 0)
        return eax_1
    
    int32_t var_18
    int32_t ebx = var_18
    int32_t var_60_2
    float var_3c
    float var_8
    float eax_9
    
    if (ebx == 1 || ebx == 4)
        var_8 = var_28.d
    label_525ca9:
        float xmm1_1 = arg3[7]
        xmm1_1 - 1f
        eax_9:1.b = (xmm1_1 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm1_1, 1f) ? 1 : 0) << 2
            | (xmm1_1 < 1f ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (p_2)
            int32_t xmm0_1 = var_28.d
            float xmm0_5 = sub_4369e0(_mm_cvtepi32_ps(zx.o(var_28:8.d)) * xmm1_1)
            float xmm0_6
            
            if (0 f<= xmm0_5)
                xmm0_6 = xmm0_5 + 0.5f
            else
                xmm0_6 = xmm0_5 - 0.5f
            
            int32_t eax_10 = int.d(xmm0_6)
            float xmm0_10 = sub_4369e0(_mm_cvtepi32_ps(zx.o(var_28:4.d)) f* arg3[7])
            float xmm0_11
            
            if (0 f<= xmm0_10)
                xmm0_11 = xmm0_10 + 0.5f
            else
                xmm0_11 = xmm0_10 - 0.5f
            
            float esi_1 = int.d(xmm0_11)
            float var_38_2 = esi_1
            int32_t eax_11 = sub_5234e0(esi_1, ebx)
            int32_t var_30_2 = eax_11
            float eax_13
            int32_t ecx_12
            eax_13, ecx_12 = sub_4c2e40(sub_5235a0(eax_11, eax_10, esi_1, ebx))
            int32_t edx_6 = var_28:4.d
            int32_t var_64_2 = ecx_12
            int32_t var_68_1 = eax_10
            var_3c = eax_13
            sub_55f0b0(eax_13, edx_6, var_8, var_28:8.d, ecx_12, eax_13, esi_1)
            int32_t var_18_2 = ebx
            var_28 = var_3c.o
            
            if (xmm0_1 != 0)
                _aligned_free_base(xmm0_1)
        
        var_60_2 = eax
    else
        int32_t ebx_1 = var_28:4.d
        float eax_3 = sub_4c2e40(sub_5235a0(eax_1, var_28:8.d, ebx_1, 1))
        var_8 = eax_3
        var_3c = eax_3
        int32_t var_38_1 = ebx_1
        int32_t var_34_1 = var_28:8.d
        int32_t eax_5 = sub_5234e0(ebx_1, 1)
        int32_t var_2c_1 = 1
        int32_t var_30_1 = eax_5
        sub_523b10(&var_28, &var_3c)
        int32_t ecx_6 = var_28.d
        
        if (ecx_6 != 0)
            _aligned_free_base(ecx_6)
        
        eax_9 = *arg3
        var_28:0xc.d = eax_5
        ebx = 1
        var_28.d = var_8
        int32_t var_18_1 = 1
        
        if (eax_9 == 8)
            goto label_525ca9
        
        if (eax_9 != 0)
            if (eax_9 == 6)
                goto label_525c92
            
            if (var_8 != 0)
                _aligned_free_base(var_8)
            
            void* var_60_4 = arg4
            sub_4892e0("texture encoding not supported %s")
            int32_t eax_6
            eax_6.b = 1
            return eax_6
        
        if (eax != 2)
        label_525c92:
            sub_525800(&var_28, arg2, arg3, &var_28, arg4)
            int32_t eax_8
            eax_8.b = 1
            return eax_8
        
        var_60_2 = 2
    sub_524d20(&var_28, arg2, arg3, &var_28, arg4, var_60_2)
    void* eax_16
    eax_16.b = 1
    return eax_16
}
