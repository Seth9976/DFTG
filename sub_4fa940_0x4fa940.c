// 函数名称: sub_4fa940
// 虚拟地址: 0x4fa940
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

double* __convention("regparm")sub_4fa940(float arg1 @ eax, int32_t arg2, void* arg3, int32_t arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t var_30
    int32_t var_30
    char const* const ecx_6
    
    if (arg2 s< 0 || arg2 s>= *(arg3 + 0x28))
        char const* const var_2c_13 = "FlanimGetShapeTransformAtFrame"
        var_30 = 0x33b
        ecx_6 = "layerIndex >= 0 && layerIndex < pFlanimDef->mLayerCount"
    else
        int32_t ecx = *(arg3 + 0x20)
        arg1 = arg2 * 3
        float var_18_1 = arg1
        int32_t ebx_1 = *(ecx + (arg1 << 3) + 8)
        
        if (ebx_1 s< 0 || ebx_1 s>= *(arg3 + 0x38))
            char const* const var_2c_12 = "FlanimGetShapeTransformAtFrame"
            var_30 = 0x340
            ecx_6 = "vertexIndexImage >= 0 && vertexIndexImage < pFlanimDef->mVertexCount"
        else
            int32_t ebx_3 = (ebx_1 << 7) + *(arg3 + 0x30)
            int32_t eax = sub_4fa780(arg1, 4, ebx_3, arg4)
            arg5[8] = eax
            int32_t eax_1 = sub_4fa780(eax, 5, ebx_3, arg4)
            arg5[9] = eax_1
            arg1 = sub_4fa780(eax_1, 6, ebx_3, arg4)
            
            if (arg1 s< 0 || arg1 s>= *(arg3 + 0x48))
                char const* const var_2c_11 = "FlanimGetShapeTransformAtFrame"
                var_30 = 0x347
                ecx_6 = "imageIndex >=0 && imageIndex < pFlanimDef->mImageCount"
            else
                int32_t eax_2 = *(*(arg3 + 0x40) + (arg1 << 3))
                arg5[0xa] = eax_2
                arg5[0xb] = sub_4fa780(eax_2, 7, ebx_3, arg4)
                arg1 = var_18_1
                int32_t ebx_4 = *(ecx + (arg1 << 3) + 8)
                
                if (ebx_4 != *(ecx + (arg1 << 3) + 0xc))
                    char const* const var_2c_4 = "FlanimGetShapeTransformAtFrame"
                    var_30 = 0x34d
                    ecx_6 = "pLayerDef->mQuad.x == pLayerDef->mQuad.y"
                else if (ebx_4 s< 0 || ebx_4 s>= *(arg3 + 0x38))
                    char const* const var_2c_10 = "FlanimGetShapeTransformAtFrame"
                    var_30 = 0x351
                    ecx_6 = "vertexIndex >= 0 && vertexIndex < pFlanimDef->mVertexCount"
                else
                    int32_t ebx_6 = (ebx_4 << 7) + *(arg3 + 0x30)
                    float eax_4
                    int32_t edx_1
                    eax_4, edx_1 = sub_4fa850(arg1, 0, ebx_6, arg4)
                    arg5[1] = edx_1
                    *arg5 = eax_4
                    float eax_5
                    int32_t edx_2
                    eax_5, edx_2 = sub_4fa850(eax_4, 2, ebx_6, arg4)
                    arg5[2] = eax_5
                    arg5[3] = edx_2
                    int32_t edx_3
                    arg1, edx_3 = sub_4fa850(eax_5, 3, ebx_6, arg4)
                    int32_t* ebx_7 = arg5[0xa]
                    float xmm2_1 = 1f
                    float xmm3_1 = 1f
                    arg5[4] = arg1
                    arg5[5] = edx_3
                    int32_t mxcsr
                    int16_t x87control
                    
                    if (ebx_7 != 0)
                        int32_t* eax_6 = *ebx_7
                        
                        if (eax_6 == 0)
                            edx_3.b = 0
                            mxcsr, x87control = sub_4e6fe0(ebx_7, edx_3.b)
                            eax_6 = *ebx_7
                            
                            if (eax_6 == 0)
                                mxcsr, x87control = sub_4d1060(ebx_7)
                                eax_6 = *ebx_7
                        
                        int32_t* ecx_12 = **eax_6
                        int32_t eax_8 = *ecx_12
                        float xmm1_2 = ecx_12[3] f* ecx_12[2]
                        int32_t eax_10 = ecx_12[1]
                        arg1 = eax_10 u>> 0x1f
                        xmm2_1 = _mm_cvtpd_ps(float.d(eax_8) f+ *((eax_8 u>> 0x1f << 3) + &data_60cbc0))
                            * xmm1_2
                        xmm3_1 = _mm_cvtpd_ps(float.d(eax_10) f+ *((arg1 << 3) + &data_60cbc0)) * xmm1_2
                    
                    arg5[6] = xmm2_1
                    arg5[7] = xmm3_1
                    
                    if (*(arg3 + 0x5c) == 0)
                        if (*(arg3 + 0x5d) == 0)
                            float xmm0_12 = arg5[2] f* xmm2_1
                            float xmm0_14 = arg5[3] f* xmm3_1
                            int16_t x87control_1
                            double xmm0_17
                            x87control_1, xmm0_17 =
                                __libm_sse2_sin_precise(mxcsr, x87control, _mm_cvtps_pd(arg5[4]))
                            int16_t x87control_2
                            double xmm0_22
                            x87control_2, xmm0_22 =
                                __libm_sse2_cos_precise(mxcsr, x87control_1, _mm_cvtps_pd(arg5[5]))
                            int16_t x87control_3
                            double xmm0_27
                            x87control_3, xmm0_27 =
                                __libm_sse2_cos_precise(mxcsr, x87control_2, _mm_cvtps_pd(arg5[4]))
                            double* result
                            double xmm0_33
                            result, xmm0_33 =
                                __libm_sse2_sin_precise(mxcsr, x87control_3, _mm_cvtps_pd(arg5[5]))
                            float xmm3_6 = fconvert.s(xmm0_22) * xmm0_14 * 0.5f
                                + fconvert.s(xmm0_17) * xmm0_12 * 0.5f f+ arg5[1]
                            *arg5 = fconvert.s(xmm0_27) * xmm0_12 * 0.5f
                                - fconvert.s(xmm0_33) * xmm0_14 * 0.5f f+ *arg5
                            arg5[1] = xmm3_6
                            return result
                        
                        char const* const var_2c_9 = "FlanimGetShapeTransformAtFrame"
                        var_30 = 0x370
                        ecx_6 = "Halt"
                    else
                        char const* const var_2c_8 = "FlanimGetShapeTransformAtFrame"
                        var_30 = 0x369
                        ecx_6 = "Halt"
                        float xmm1_3 = 1f / xmm3_1
                        float xmm2_5 = xmm2_1 / xmm3_1 f* arg5[2] * xmm1_3
                        arg5[3] = arg5[3] f* xmm1_3
                        arg5[2] = xmm2_5
    
    sub_489550(arg1, &data_5b2591, ecx_6, "d:\ax\trunk\ax2017\engine\flanim.cpp", var_30, 
        "FlanimGetShapeTransformAtFrame")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
