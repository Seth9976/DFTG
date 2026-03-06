// 函数名称: sub_4b7190
// 虚拟地址: 0x4b7190
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_4b7190()
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t __saved_ebp
    int32_t result = __security_cookie ^ &__saved_ebp
    int32_t result_1 = result
    int32_t ecx = data_643654
    
    if (ecx s> 1)
        void* eax_1 = data_114e818
        float xmm2_1[0x4] = zx.o(0)
        int32_t xmm3_1 = (zx.o(0)).d
        float var_90_1[0x4]
        __builtin_memset(&var_90_1, 0, 0x20)
        int32_t esi_1 = 0
        int32_t var_44_1 = 0
        float xmm0_1 = *(eax_1 + 0x2c)
        float xmm0_2[0x4] = zx.o(0)
        float var_30[0x4] = zx.o(0)
        int32_t var_a8
        char const* const var_a4_3
        float var_40[0x4]
        int128_t* eax_3
        char* ecx_7
        
        if (ecx s> 0)
            while (true)
                eax_3 = sub_498790(sub_4a7d60((&data_642654)[esi_1]) + 0xc, xmm0_1, &var_40)
                float var_80_1[0x4]
                
                if (esi_1 != 0)
                    float xmm0_4[0x4] = var_90_1
                    int32_t xmm2_4 = _mm_shuffle_ps(xmm0_4, xmm0_4, 0xaa)
                    int32_t xmm3_3
                    int32_t xmm4_2
                    
                    if (not(xmm2_4 f< xmm0_4))
                        xmm4_2 = _mm_shuffle_ps(xmm0_4, xmm0_4, 0xff)
                        xmm3_3 = _mm_shuffle_ps(xmm0_4, xmm0_4, 0x55)
                    
                    if (xmm2_4 f< xmm0_4 || xmm4_2 f< xmm3_3)
                        var_a4_3 = "RectUnion"
                        var_a8 = 0xdb
                        ecx_7 = "RectIsNormalized(r0)"
                        break
                    
                    float xmm1_1[0x4] = var_40[0]
                    int32_t var_60_1
                    
                    var_60_1 = xmm1_1 f<= xmm0_4 ? xmm1_1 : xmm0_4
                    
                    float xmm5_1[0x4] = var_40[2]
                    
                    if (xmm2_4 f<= xmm5_1)
                        int32_t var_58_2 = xmm5_1
                    else
                        int32_t var_58_1 = xmm2_4
                    
                    float xmm0_5 = var_40[1]
                    
                    if (xmm0_5 f<= xmm3_3)
                        float var_5c_2 = xmm0_5
                    else
                        int32_t var_5c_1 = xmm3_3
                    
                    float xmm0_6 = var_40[3]
                    
                    if (xmm4_2 f<= xmm0_6)
                        float var_54_2 = xmm0_6
                    else
                        int32_t var_54_1 = xmm4_2
                    
                    xmm2_1 = var_60_1.o
                    var_90_1 = xmm2_1
                    int32_t xmm0_7 = var_30.d
                    
                    if (esi_1 == 1)
                        if (xmm0_7 f> xmm1_1)
                            goto label_4b72e2
                        
                    label_4b7304:
                        xmm3_1 = xmm1_1[0]
                        var_44_1 = xmm3_1
                        xmm0_2 = var_80_1
                    else if (xmm0_7 f<= xmm1_1)
                        xmm3_1 = var_44_1
                        
                        if (not(xmm3_1 f<= xmm1_1))
                            goto label_4b7304
                        
                        xmm0_2 = var_80_1
                    else
                    label_4b72e2:
                        xmm3_1 = xmm0_7
                        var_30 = xmm1_1
                        xmm0_2 = xmm5_1
                        var_44_1 = xmm3_1
                        var_80_1 = xmm0_2
                else
                    xmm2_1 = var_40
                    xmm3_1 = var_44_1
                    var_30 = xmm2_1
                    xmm0_2 = _mm_shuffle_ps(xmm2_1, xmm2_1, 0xaa)
                    var_90_1 = xmm2_1
                    var_80_1 = xmm0_2
                ecx = data_643654
                esi_1 += 1
                
                if (esi_1 s>= ecx)
                    goto label_4b731f
            
            goto label_4b7458
        
    label_4b731f:
        float xmm3_4 = xmm3_1 f- xmm0_2
        float xmm1_3 = _mm_shuffle_ps(xmm2_1, xmm2_1, 0xaa)
        eax_3 = ecx - 1
        float xmm4_6 = (xmm1_3 f- xmm2_1 - float.s(eax_3) * xmm3_4) / float.s(ecx)
        float xmm3_6 = _mm_shuffle_ps(xmm2_1, xmm2_1, 0xff)
        float xmm0_15[0x4] = _mm_shuffle_ps(xmm2_1, xmm2_1, 0x55)
        var_40 = xmm0_15
        
        if (xmm1_3 f< xmm2_1 || xmm3_6 f< xmm0_15)
            var_a4_3 = "RectTopLeft"
            var_a8 = 0x127
            ecx_7 = "RectIsNormalized(r)"
        label_4b7458:
            sub_489550(eax_3, &data_5b2591, ecx_7, "d:\ax\trunk\ax2017\engine\rect.cpp", var_a8, 
                var_a4_3)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        int32_t i = 0
        
        if (ecx s> 0)
            do
                char* eax_4 = sub_4a7d60((&data_642654)[i])
                float xmm3_8 = _mm_cvtepi32_ps(zx.o(i))
                float xmm2_7 = (xmm4_6 + xmm3_4) * xmm3_8 + var_90_1[0]
                float xmm3_10 = xmm3_8 * 0f + var_40[0]
                var_30[0] = xmm2_7
                var_30[1] = xmm3_10
                var_30[2] = xmm2_7 + xmm4_6 + 0f
                var_30[3] = xmm3_10 + 0f + xmm3_6 f- xmm0_15
                sub_4a9f50(eax_4, 0x75, eax_4, &var_30)
                i += 1
            while (i s< data_643654)
        
        ecx.b = 1
        result = sub_4a7e20(ecx.b)
    
    @__security_check_cookie@4(result_1 ^ &__saved_ebp)
    return result
}
