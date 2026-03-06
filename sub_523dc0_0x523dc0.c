// 函数名称: sub_523dc0
// 虚拟地址: 0x523dc0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_523dc0(int32_t arg1, int32_t* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t __saved_ebp_1
    int32_t __saved_ebp_1
    int32_t __saved_ebp = __saved_ebp_1
    void var_58
    int32_t eax_1 = __security_cookie ^ &var_58
    int32_t __saved_esi_1
    int32_t __saved_esi = __saved_esi_1
    int32_t __saved_edi_1
    int32_t __saved_edi = __saved_edi_1
    int32_t edx = arg2[4]
    
    if (edx != 1 && edx != 4)
        int32_t var_64_1 = arg3
        char const* const var_68_1 = "unsupported format for sanding %s"
        int32_t eax_2 = sub_4892e0("unsupported format for sanding %s")
        @__security_check_cookie@4(eax_1 ^ &var_58)
        return eax_2
    
    int32_t eax_3 = sub_5234e0(arg2[1], edx)
    
    if (arg2[3] != eax_3)
        char const* const var_64_2 = "SandImageBuffer"
        int32_t var_68_2 = 0x66
        char const* const var_6c_1 = "d:\ax\trunk\ax2017\engine\textureimport.cpp"
        sub_489550(eax_3, &data_5b2591, 
            "sourceImage->pitch == TextureFormatPitch(sourceImage->width, sourceImage->format)")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t ecx_3 = arg2[2]
    int32_t* eax_4 = *arg2
    int32_t edi = arg2[1]
    int32_t esi_1 = 0
    int32_t* var_44 = eax_4
    int32_t var_50 = ecx_3
    int32_t var_4c = 0
    
    if (ecx_3 s> 0)
        do
            if (edi s> 0)
                int32_t edx_1 = 1
                int32_t var_48_1 = 1
                eax_4 = &var_44[esi_1 * edi]
                int32_t* var_40_1 = eax_4
                
                do
                    float xmm0_3 = _mm_cvtepi32_ps(zx.o(*(eax_4 + 3))) / 255f
                    xmm0_3 f- 0
                    uint32_t eax_7
                    eax_7:1.b = (xmm0_3 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_3, 0f) ? 1 : 0) << 2
                        | (xmm0_3 < 0f ? 1 : 0)
                    bool p_2 = unimplemented  {test ah, 0x44}
                    int32_t* eax_72
                    
                    if (p_2)
                        eax_72 = var_40_1
                    else
                        int96_t xmm0_4 = (data_60cb20).12
                        int32_t esi_2 = 0
                        float xmm1_4
                        float xmm2_4
                        float xmm3_4
                        
                        if (edx_1 - 2 s< 0 || edx_1 - 2 s>= edi || var_4c - 1 s< 0
                            || var_4c - 1 s>= var_50)
                        label_523f1b:
                            xmm3_4 = xmm0_4:8.d
                            xmm2_4 = xmm0_4:4.d
                            xmm1_4 = xmm0_4.d
                        else
                            int32_t edx_2 = var_44[(var_4c - 1) * edi + edx_1 - 2]
                            float xmm1_2 = _mm_cvtepi32_ps(zx.o((edx_2 u>> 0x10).b))
                            float xmm2_2 = _mm_cvtepi32_ps(zx.o((edx_2 u>> 8).b))
                            float xmm0_7 = _mm_cvtepi32_ps(zx.o(edx_2 u>> 0x18)) / 255f
                            float xmm3_3 = _mm_cvtepi32_ps(zx.o(edx_2.b)) / 255f
                            
                            if (0.00392156886f >= xmm0_7)
                                goto label_523f1b
                            
                            xmm1_4 = xmm1_2 / 255f + 0f
                            esi_2 = 1
                            xmm2_4 = xmm2_2 / 255f + 0f
                            xmm3_4 = xmm3_3 + 0f
                        
                        int32_t ecx_11 = edx_1 - 2
                        int32_t edx_4 = var_50
                        int32_t eax_17 = var_4c
                        
                        if (ecx_11 s>= 0 && ecx_11 s< edi && eax_17 s>= 0 && eax_17 s< edx_4)
                            int32_t edx_6 = var_40_1[-1]
                            ecx_11 = edx_1 - 2
                            float xmm4_2 = _mm_cvtepi32_ps(zx.o((edx_6 u>> 0x10).b))
                            float xmm6_2 = _mm_cvtepi32_ps(zx.o((edx_6 u>> 8).b))
                            edx_4 = var_50
                            float xmm0_10 = _mm_cvtepi32_ps(zx.o(edx_6 u>> 0x18)) / 255f
                            eax_17 = var_4c
                            float xmm7_3 = _mm_cvtepi32_ps(zx.o(edx_6.b)) / 255f
                            
                            if (not(0.00392156886f >= xmm0_10))
                                xmm1_4 = xmm1_4 + xmm4_2 / 255f
                                esi_2 += 1
                                xmm2_4 = xmm2_4 + xmm6_2 / 255f
                                xmm3_4 = xmm3_4 + xmm7_3
                        
                        if (ecx_11 s>= 0 && ecx_11 s< edi && eax_17 + 1 s>= 0 && eax_17 + 1 s< edx_4)
                            int32_t edx_8 = var_44[(eax_17 + 1) * edi + ecx_11]
                            float xmm4_5 = _mm_cvtepi32_ps(zx.o((edx_8 u>> 0x10).b))
                            float xmm6_5 = _mm_cvtepi32_ps(zx.o((edx_8 u>> 8).b))
                            float xmm0_13 = _mm_cvtepi32_ps(zx.o(edx_8 u>> 0x18)) / 255f
                            float xmm7_6 = _mm_cvtepi32_ps(zx.o(edx_8.b)) / 255f
                            
                            if (not(0.00392156886f >= xmm0_13))
                                xmm1_4 = xmm1_4 + xmm4_5 / 255f
                                esi_2 += 1
                                xmm2_4 = xmm2_4 + xmm6_5 / 255f
                                xmm3_4 = xmm3_4 + xmm7_6
                        
                        int32_t edx_10 = var_50
                        int32_t ecx_16 = var_48_1 - 1
                        
                        if (var_48_1 - 1 s>= 0 && ecx_16 s< edi && var_4c - 1 s>= 0
                                && var_4c - 1 s< edx_10)
                            int32_t edx_11 = var_44[(var_4c - 1) * edi + ecx_16]
                            float xmm4_8 = _mm_cvtepi32_ps(zx.o((edx_11 u>> 0x10).b))
                            float xmm6_8 = _mm_cvtepi32_ps(zx.o((edx_11 u>> 8).b))
                            edx_10 = var_50
                            float xmm0_16 = _mm_cvtepi32_ps(zx.o(edx_11 u>> 0x18)) / 255f
                            float xmm7_9 = _mm_cvtepi32_ps(zx.o(edx_11.b)) / 255f
                            
                            if (not(0.00392156886f >= xmm0_16))
                                xmm1_4 = xmm1_4 + xmm4_8 / 255f
                                esi_2 += 1
                                xmm2_4 = xmm2_4 + xmm6_8 / 255f
                                xmm3_4 = xmm3_4 + xmm7_9
                        
                        if (ecx_16 s>= 0 && ecx_16 s< edi && eax_17 + 1 s>= 0 && eax_17 + 1 s< edx_10)
                            int32_t edx_13 = var_44[(eax_17 + 1) * edi + ecx_16]
                            float xmm4_11 = _mm_cvtepi32_ps(zx.o((edx_13 u>> 0x10).b))
                            float xmm6_11 = _mm_cvtepi32_ps(zx.o((edx_13 u>> 8).b))
                            float xmm0_19 = _mm_cvtepi32_ps(zx.o(edx_13 u>> 0x18)) / 255f
                            float xmm7_12 = _mm_cvtepi32_ps(zx.o(edx_13.b)) / 255f
                            
                            if (not(0.00392156886f >= xmm0_19))
                                xmm1_4 = xmm1_4 + xmm4_11 / 255f
                                esi_2 += 1
                                xmm2_4 = xmm2_4 + xmm6_11 / 255f
                                xmm3_4 = xmm3_4 + xmm7_12
                        
                        edx_1 = var_48_1
                        
                        if (edx_1 s>= 0)
                            int32_t ecx_23 = var_50
                            
                            if (edx_1 s< edi)
                                if (var_4c - 1 s>= 0 && var_4c - 1 s< ecx_23)
                                    int32_t edx_15 = var_44[(var_4c - 1) * edi + edx_1]
                                    ecx_23 = var_50
                                    float xmm4_14 = _mm_cvtepi32_ps(zx.o((edx_15 u>> 0x10).b))
                                    float xmm6_14 = _mm_cvtepi32_ps(zx.o((edx_15 u>> 8).b))
                                    edx_1 = var_48_1
                                    float xmm0_22 = _mm_cvtepi32_ps(zx.o(edx_15 u>> 0x18)) / 255f
                                    float xmm7_15 = _mm_cvtepi32_ps(zx.o(edx_15.b)) / 255f
                                    
                                    if (not(0.00392156886f >= xmm0_22))
                                        xmm1_4 = xmm1_4 + xmm4_14 / 255f
                                        esi_2 += 1
                                        xmm2_4 = xmm2_4 + xmm6_14 / 255f
                                        xmm3_4 = xmm3_4 + xmm7_15
                                
                                if (edx_1 s< edi && var_4c s>= 0 && var_4c s< ecx_23)
                                    int32_t edx_17 = var_40_1[1]
                                    float xmm4_17 = _mm_cvtepi32_ps(zx.o((edx_17 u>> 0x10).b))
                                    float xmm6_17 = _mm_cvtepi32_ps(zx.o((edx_17 u>> 8).b))
                                    edx_1 = var_48_1
                                    float xmm0_25 = _mm_cvtepi32_ps(zx.o(edx_17 u>> 0x18)) / 255f
                                    float xmm7_18 = _mm_cvtepi32_ps(zx.o(edx_17.b)) / 255f
                                    
                                    if (not(0.00392156886f >= xmm0_25))
                                        xmm1_4 = xmm1_4 + xmm4_17 / 255f
                                        esi_2 += 1
                                        xmm2_4 = xmm2_4 + xmm6_17 / 255f
                                        xmm3_4 = xmm3_4 + xmm7_18
                            
                            if (edx_1 s>= 0 && edx_1 s< edi && eax_17 + 1 s>= 0 && eax_17 + 1 s< var_50)
                                int32_t edx_19 = var_44[(eax_17 + 1) * edi + edx_1]
                                float xmm4_20 = _mm_cvtepi32_ps(zx.o((edx_19 u>> 0x10).b))
                                float xmm6_20 = _mm_cvtepi32_ps(zx.o((edx_19 u>> 8).b))
                                edx_1 = var_48_1
                                float xmm0_28 = _mm_cvtepi32_ps(zx.o(edx_19 u>> 0x18)) / 255f
                                float xmm7_21 = _mm_cvtepi32_ps(zx.o(edx_19.b)) / 255f
                                
                                if (not(0.00392156886f >= xmm0_28))
                                    xmm1_4 = xmm1_4 + xmm4_20 / 255f
                                    esi_2 += 1
                                    xmm2_4 = xmm2_4 + xmm6_20 / 255f
                                    xmm3_4 = xmm3_4 + xmm7_21
                        
                        if (esi_2 != 0)
                            float xmm0_30 = _mm_cvtepi32_ps(zx.o(esi_2))
                            int96_t var_30_1
                            var_30_1:0xc.d = 0x3b808081
                            var_30_1.d = xmm1_4 / xmm0_30
                            var_30_1:4.d = xmm2_4 / xmm0_30
                            var_30_1:8.d = xmm3_4 / xmm0_30
                            float var_6c
                            float var_68
                            float var_64
                            int32_t eax_73 = sub_497d80(var_30_1.d, var_6c, var_68, var_64)
                            eax_72 = var_40_1
                            *eax_72 = (((((eax_73 u>> 0x18 << 8) + zx.d(eax_73.b)) << 8)
                                + zx.d((eax_73 u>> 8).b)) << 8) + zx.d((eax_73 u>> 0x10).b)
                            edx_1 = var_48_1
                        else
                            void* esi_3 = data_aca1ec
                            eax_72 = var_40_1
                            *eax_72 = ((((zx.d(*(esi_3 + 0x2c)) + 0x100) << 8) + zx.d(*(esi_3 + 0x2d)))
                                << 8) + zx.d(*(esi_3 + 0x2e))
                    
                    edx_1 += 1
                    eax_4 = &eax_72[1]
                    var_40_1 = eax_4
                    var_48_1 = edx_1
                while (edx_1 s<= edi)
                
                ecx_3 = var_50
                esi_1 = var_4c
            
            esi_1 += 1
            var_4c = esi_1
        while (esi_1 s< ecx_3)
    
    @__security_check_cookie@4(eax_1 ^ &var_58)
    return eax_4
}
