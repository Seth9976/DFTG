// 函数名称: sub_531350
// 虚拟地址: 0x531350
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_531350(int32_t arg1, void* arg2, float arg3 @ xmm3, void* arg4, float arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t ecx
    
    if (arg9 != 0)
        ecx = arg7
        *(ecx + (arg8 << 2)) = 0
    
    arg5 - 1f
    arg1:1.b = (arg5 == 1f ? 1 : 0) << 6 | (is_unordered.d(arg5, 1f) ? 1 : 0) << 2 | (arg5 < 1f ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (not(p_1))
        int32_t var_44 = ecx
        return (**(arg2 + 4))(arg2, arg4, 0, arg3, 0, 0, 0x3f800000, arg6, 0)
    
    int32_t* edx = *(arg2 + 0x10)
    void* eax_4 = *(arg4 + 8)
    int32_t* esi = *(eax_4 + (*(arg2 + 0x14) << 2))
    
    if (esi[0x1b] != 0)
        double xmm4_1 = 16384.499999999996
        float var_14_1
        float xmm0_2
        float xmm3
        
        if (*edx <= arg3)
            if (arg6 != 0)
                xmm0_2 = esi[7]
            else
                eax_4 = *esi
                xmm0_2 = *(eax_4 + 0x18)
            
            int32_t ecx_2 = *(arg2 + 0xc)
            var_14_1 = xmm0_2
            
            if (arg3 f< edx[ecx_2 - 2])
                int32_t eax_11 = sub_56da60(eax_4, ecx_2, *(arg2 + 0x10), arg3, 2)
                int32_t ecx_4 = *(arg2 + 0x10)
                float xmm6_1 = *(ecx_4 + (eax_11 << 2) - 4)
                float xmm5_2 = *(ecx_4 + (eax_11 << 2) + 4) - xmm6_1
                float xmm0_5 = sub_56d9a0(arg2, (eax_11 s>> 1) - 1, 
                    1f - (arg3 f- *(ecx_4 + (eax_11 << 2)))
                        / (*(ecx_4 + (eax_11 << 2) - 8) f- *(ecx_4 + (eax_11 << 2))))
                xmm4_1 = 16384.499999999996
                float xmm3_7 = xmm0_5 * (xmm5_2 - _mm_cvtepi32_ps(zx.o((0x4000
                    - int.d(xmm4_1 - _mm_cvtps_pd(xmm5_2 / 360f))) * 0x168))) + xmm6_1 f+ *(*esi + 0x18)
                xmm3 = xmm3_7 -
                    _mm_cvtepi32_ps(zx.o((0x4000 - int.d(fconvert.d(xmm3_7 / -360f) + xmm4_1)) * 0x168))
                xmm0_2 = var_14_1
            else
                xmm3 = edx[ecx_2 - 1] f+ *(*esi + 0x18)
            
            goto label_531544
        
        if (arg6 == 0)
            int32_t eax_9 = *(*esi + 0x18)
            esi[7] = eax_9
            return eax_9
        
        eax_4 = arg6 - 1
        
        if (arg6 == 1)
            xmm0_2 = esi[7]
            var_14_1 = xmm0_2
            xmm3 = *(*esi + 0x18)
        label_531544:
            float xmm3_8 = xmm3 - xmm0_2
            int32_t xmm1_4 = (zx.o(0)).d
            uint32_t xmm3_9[0x4] = xmm3_8
                - _mm_cvtepi32_ps(zx.o((0x4000 - int.d(fconvert.d(xmm3_8 / -360f) + xmm4_1)) * 0x168))
            xmm3_9 f- 0
            int32_t eax_19
            eax_19:1.b = (xmm3_9 f== 0f ? 1 : 0) << 6 | (is_unordered.d(xmm3_9, 0f) ? 1 : 0) << 2
                | (xmm3_9 f< 0f ? 1 : 0)
            bool p_3 = unimplemented  {test ah, 0x44}
            int32_t eax_20
            float xmm1_5
            
            if (p_3)
                uint32_t xmm2_5[0x4]
                uint32_t xmm5_4[0x4]
                
                if (arg9 == 0)
                    xmm2_5 = *(arg7 + (arg8 << 2))
                    xmm5_4 = *(arg7 + (arg8 << 2) + 4)
                else
                    xmm2_5 = zx.o(0)
                    xmm5_4 = xmm3_9
                
                int32_t var_18_1 = xmm2_5
                int32_t ecx_9
                ecx_9.b = xmm3_9 f> 0f
                int32_t eax_22
                eax_22.b = xmm2_5 f>= 0f
                int32_t var_1c_1 = eax_22
                float xmm6_2
                
                if (not(0f f<= xmm5_4))
                    xmm6_2 = -1f
                else if (xmm5_4 f<= 0)
                    xmm6_2 = (zx.o(0)).d
                else
                    xmm6_2 = 1f
                
                float xmm0_20
                
                if (not(0 f<= xmm3_9))
                    xmm0_20 = -1f
                else if (xmm3_9 f<= 0)
                    xmm0_20 = (zx.o(0)).d
                else
                    xmm0_20 = 1f
                
                xmm6_2 - xmm0_20
                eax_22:1.b = (xmm6_2 == xmm0_20 ? 1 : 0) << 6
                    | (is_unordered.d(xmm6_2, xmm0_20) ? 1 : 0) << 2 | (xmm6_2 < xmm0_20 ? 1 : 0)
                bool p_5 = unimplemented  {test ah, 0x44}
                
                if (p_5 && not(90f f< _mm_and_ps(xmm5_4, 0x7fffffff)))
                    if (not(_mm_and_ps(xmm2_5, 0x7fffffff) f<= 180f))
                        if (not(0 f<= xmm2_5))
                            xmm1_4 = -0x40800000
                        else if (not(xmm2_5 f<= 0))
                            xmm1_4 = 0x3f800000
                        
                        xmm2_5 = xmm2_5 f+ xmm1_4 f* 360f
                        var_18_1 = xmm2_5
                    
                    var_1c_1 = ecx_9
                
                float xmm0_24 = xmm2_5[0] f+ xmm3_9
                double var_30_1 = _mm_cvtps_pd(xmm2_5)
                sub_598500()
                xmm1_5 = xmm0_24 - _mm_cvtpd_ps(zx.o(fconvert.d(fconvert.t(360.0))))
                
                if (var_1c_1 != ecx_9)
                    int32_t xmm0_28 = (zx.o(0)).d
                    
                    if (not(0 f<= var_18_1))
                        xmm0_28 = 0xbf800000
                    else if (not(var_18_1 f<= 0))
                        xmm0_28 = 0x3f800000
                    
                    xmm1_5 = xmm1_5 + xmm0_28 f* 360f
                
                eax_20 = arg7
                xmm4_1 = 16384.499999999996
                *(eax_20 + (arg8 << 2)) = xmm1_5
            else
                eax_20 = arg7
                xmm1_5 = *(eax_20 + (arg8 << 2))
            
            *(eax_20 + (arg8 << 2) + 4) = xmm3_9
            float xmm1_9 = xmm1_5 * arg5 + var_14_1
            eax_4 = (0x4000 - int.d(_mm_cvtps_pd(xmm1_9 / -360f) + xmm4_1)) * 0x168
            esi[7] = xmm1_9 - _mm_cvtepi32_ps(zx.o(eax_4))
    
    return eax_4
}
