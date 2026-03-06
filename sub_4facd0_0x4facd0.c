// 函数名称: sub_4facd0
// 虚拟地址: 0x4facd0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_4facd0(void* arg1, int32_t arg2, void* arg3, int32_t arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t var_50_2
    int32_t var_50_2
    char const* const ecx_20
    
    if (arg2 s< 0 || arg2 s>= *(arg3 + 0x28))
        char const* const var_4c_16 = "FlanimGetTransformAtFrame"
        var_50_2 = 0x382
        ecx_20 = "layerIndex >= 0 && layerIndex < pFlanimDef->mLayerCount"
    else
        int32_t ecx = *(arg3 + 0x20)
        void* eax = arg2 * 3
        int32_t* eax_2 = ecx + ((eax + 1) << 3)
        int32_t* var_18_1 = eax_2
        arg1 = *eax_2
        
        if (arg1 s< 0 || arg1 s>= *(arg3 + 0x38))
            char const* const var_4c_15 = "FlanimGetTransformAtFrame"
            var_50_2 = 0x387
            ecx_20 = "vertexIndexImage >= 0 && vertexIndexImage < pFlanimDef->mVertexCount"
        else
            int32_t eax_4 = (arg1 << 7) + *(arg3 + 0x30)
            int32_t eax_5 = sub_4fa780(eax_4, 4, eax_4, arg4)
            arg5[0x10] = eax_5
            int32_t eax_6 = sub_4fa780(eax_5, 5, eax_4, arg4)
            arg5[0x11] = eax_6
            arg1 = sub_4fa780(eax_6, 6, eax_4, arg4)
            void* var_24_1 = arg1
            int32_t mxcsr
            int16_t x87control
            
            if (arg1 s< 0)
                void* var_4c_3 = arg1
                mxcsr, x87control = sub_4892e0("image index <0 (%d)")
                arg1 = var_24_1
            
            int32_t ecx_6 = *(arg3 + 0x48)
            
            if (arg1 s>= ecx_6)
                int32_t var_4c_4 = ecx_6
                void* var_50_1 = arg1
                mxcsr, x87control = sub_4892e0("image index >end (%d >= %d)")
                arg1 = var_24_1
            
            if (arg1 s< 0 || arg1 s>= *(arg3 + 0x48))
                char const* const var_4c_14 = "FlanimGetTransformAtFrame"
                var_50_2 = 0x390
                ecx_20 = "imageIndex >=0 && imageIndex < pFlanimDef->mImageCount"
            else
                int32_t edx = *(arg3 + 0x40)
                arg5[0x12] = *(edx + (arg1 << 3))
                int32_t eax_9 = *(edx + (var_24_1 << 3) + 4)
                arg5[0x13] = eax_9
                arg5[0x14] = sub_4fa780(eax_9, 7, eax_4, arg4)
                arg1 = var_18_1
                int32_t edx_1 = *arg1
                
                if (edx_1 != *(ecx + (eax << 3) + 0xc))
                    int32_t var_24_4 = 0
                    void* edi_3 = &arg5[1]
                    
                    while (true)
                        int32_t esi_5 = *arg1
                        
                        if (esi_5 s>= 0)
                            arg1 = arg3
                            
                            if (esi_5 s< *(arg1 + 0x38))
                                int32_t esi_7 = (esi_5 << 7) + *(arg1 + 0x30)
                                float eax_21
                                int32_t edx_8
                                eax_21, edx_8 = sub_4fa850(arg1, 0, esi_7, arg4)
                                *(edi_3 - 4) = eax_21
                                *edi_3 = edx_8
                                float eax_22
                                int32_t edx_9
                                eax_22, edx_9 = sub_4fa850(eax_21, 1, esi_7, arg4)
                                int32_t ecx_24 = var_24_4 + 1
                                *(edi_3 + 4) = eax_22
                                arg1 = &var_18_1[1]
                                *(edi_3 + 8) = edx_9
                                edi_3 += 0x10
                                var_24_4 = ecx_24
                                var_18_1 = arg1
                                
                                if (ecx_24 s>= 4)
                                    return arg1
                                
                                continue
                        
                        char const* const var_4c_13 = "FlanimGetTransformAtFrame"
                        var_50_2 = 0x3dc
                        ecx_20 = "vertexIndex >= 0 && vertexIndex < pFlanimDef->mVertexCount"
                        break
                else
                    arg1 = eax
                    
                    if (*(ecx + (arg1 << 3) + 0xc) != *(ecx + (arg1 << 3) + 0x10)
                            || *(ecx + (arg1 << 3) + 0x10) != *(ecx + (arg1 << 3) + 0x14))
                        char const* const var_4c_10 = "FlanimGetTransformAtFrame"
                        var_50_2 = 0x398
                        ecx_20 = "pLayerDef->mQuad.y == pLayerDef->mQuad.z && pLayerDef->mQuad.z == "
                        "pLayerDef->mQuad.w"
                    else
                        if (edx_1 s>= 0 && edx_1 s< *(arg3 + 0x38))
                            int32_t edx_3 = (edx_1 << 7) + *(arg3 + 0x30)
                            float eax_11
                            float edx_4
                            eax_11, edx_4 = sub_4fa850(arg1, 0, edx_3, arg4)
                            float eax_12
                            float edx_5
                            eax_12, edx_5 = sub_4fa850(eax_11, 2, edx_3, arg4)
                            float eax_13
                            int32_t edx_6
                            eax_13, edx_6 = sub_4fa850(eax_12, 3, edx_3, arg4)
                            int16_t x87control_1
                            double xmm0_3
                            x87control_1, xmm0_3 =
                                __libm_sse2_cos_precise(mxcsr, x87control, _mm_cvtps_pd(eax_13))
                            float xmm0_5 = fconvert.s(xmm0_3) * eax_12
                            int16_t x87control_2
                            double xmm0_8
                            x87control_2, xmm0_8 =
                                __libm_sse2_sin_precise(mxcsr, x87control_1, _mm_cvtps_pd(eax_13))
                            float xmm0_10 = fconvert.s(xmm0_8) * eax_12
                            int16_t x87control_3
                            double xmm0_13
                            x87control_3, xmm0_13 =
                                __libm_sse2_sin_precise(mxcsr, x87control_2, _mm_cvtps_pd(edx_6))
                            float xmm0_16 = (fconvert.s(xmm0_13) * edx_5) ^ (data_60cca0.o).d
                            int32_t* eax_14 = arg5
                            float xmm1 = fconvert.s(__libm_sse2_cos_precise(mxcsr, x87control_3, 
                                _mm_cvtps_pd(edx_6)))
                            int32_t* edi_2 = eax_14[0x12]
                            float xmm7 = (zx.o(0)).d
                            float xmm1_1 = xmm1 * edx_5
                            float var_24_3 = xmm1_1
                            float xmm5_1
                            float xmm6_1
                            
                            if (edi_2 == 0)
                                xmm5_1 = (zx.o(0)).d
                                xmm6_1 = (zx.o(0)).d
                            else
                                int32_t* eax_15 = *edi_2
                                
                                if (eax_15 == 0)
                                    sub_4e6fe0(edi_2, 0)
                                    eax_15 = *edi_2
                                    
                                    if (eax_15 == 0)
                                        sub_4d1060(edi_2)
                                        eax_15 = *edi_2
                                    
                                    xmm7 = (zx.o(0)).d
                                
                                int32_t* ecx_19 = **eax_15
                                int32_t eax_17 = *ecx_19
                                float xmm1_3 = ecx_19[3] f* ecx_19[2]
                                double xmm0_22[0x2] = _mm_cvtepi32_pd(zx.q(eax_17)) f+
                                    *((eax_17 u>> 0x1f << 3) + &data_60cbc0)
                                int32_t eax_19 = ecx_19[1]
                                xmm5_1 = _mm_cvtpd_ps(xmm0_22) * xmm1_3
                                eax_14 = arg5
                                xmm6_1 = _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax_19)) f+
                                    *((eax_19 u>> 0x1f << 3) + &data_60cbc0)) * xmm1_3
                                xmm1_1 = var_24_3
                            
                            float var_3c
                            float xmm3
                            float xmm4
                            
                            if (*(arg3 + 0x5c) != 0)
                                float xmm5_2 = xmm5_1 / xmm6_1
                                xmm6_1 = 0.5f
                                xmm7 = xmm5_2 * -0.5f
                                xmm4 = -0.5f
                                var_3c = -0.5f
                                xmm5_1 = xmm5_2 * 0.5f
                                xmm3 = xmm7
                            else if (*(arg3 + 0x5d) == 0)
                                xmm3 = (zx.o(0)).d
                                var_3c = 0f
                                xmm4 = (zx.o(0)).d
                            else
                                float xmm2_2 = xmm6_1 * -0.5f
                                xmm7 = xmm5_1 * -0.5f
                                xmm5_1 = xmm5_1 * 0.5f
                                xmm4 = xmm2_2
                                xmm6_1 = xmm6_1 * 0.5f
                                xmm3 = xmm7
                                var_3c = xmm2_2
                            
                            eax_14[2] = 0
                            eax_14[3] = 0
                            eax_14[6] = 0x3f800000
                            eax_14[7] = 0
                            float var_38 = xmm5_1
                            float var_34_2 = xmm6_1
                            eax_14[0xa] = 0
                            *eax_14 = xmm0_16 * xmm4 + xmm0_5 * xmm3 + eax_11
                            eax_14[0xb] = 0x3f800000
                            eax_14[0xe] = 0x3f800000
                            eax_14[0xf] = 0x3f800000
                            eax_14[1] = xmm1_1 * xmm4 + xmm0_10 * xmm3 + edx_4
                            eax_14[4] = xmm0_16 * var_3c + xmm0_5 * xmm5_1 + eax_11
                            eax_14[5] = var_24_3 * var_3c + xmm0_10 * xmm5_1 + edx_4
                            eax_14[8] = xmm0_16 * xmm6_1 + xmm0_5 * xmm7 + eax_11
                            eax_14[9] = var_24_3 * xmm6_1 + xmm0_10 * xmm7 + edx_4
                            eax_14[0xc] = xmm0_16 * xmm6_1 + xmm0_5 * xmm5_1 + eax_11
                            eax_14[0xd] = var_24_3 * xmm6_1 + xmm0_10 * xmm5_1 + edx_4
                            return eax_14
                        
                        char const* const var_4c_9 = "FlanimGetTransformAtFrame"
                        var_50_2 = 0x39c
                        ecx_20 = "vertexIndex >= 0 && vertexIndex < pFlanimDef->mVertexCount"
    
    sub_489550(arg1, &data_5b2591, ecx_20, "d:\ax\trunk\ax2017\engine\flanim.cpp", var_50_2, 
        "FlanimGetTransformAtFrame")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
