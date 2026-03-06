// 函数名称: sub_4a6510
// 虚拟地址: 0x4a6510
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int128_t* __convention("regparm")sub_4a6510(int32_t arg1, int32_t arg2, int32_t arg3, float arg4 @ xmm1, float arg5 @ xmm2, int128_t* arg6, int32_t arg7, int32_t arg8)
{
    // 第一条实际指令: int32_t edi = arg7
    int32_t edi = arg7
    int32_t esi_1 = arg8 * edi
    char const* const var_3c
    int32_t var_38
    char const* const var_34
    char* ecx
    float xmm1_2
    
    if (arg3 u> 5)
        var_34 = "CalcFlipAnimT"
        var_38 = 0x1d36
        ecx = "Halt"
        var_3c = "d:\ax\trunk\ax2017\engine\ui2.cpp"
    else
        switch (arg3)
            case 0
                arg7.q = fconvert.d(arg4)
                arg7.q = fconvert.d(arg5)
                arg1 = sub_598500()
                arg7.q = fconvert.d(fconvert.t(arg7.q))
                xmm1_2 = _mm_cvtpd_ps(zx.o(arg7.q)) / arg5
            label_4a65d5:
                
                if (xmm1_2 >= 0f)
                    if (1f >= xmm1_2)
                        goto label_4a6623
                    
                    var_34 = "FlipAnimUVs"
                    var_38 = 0x1d42
                    ecx = "t <= 1.0"
                    var_3c = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                else
                    var_34 = "FlipAnimUVs"
                    var_38 = 0x1d41
                    ecx = "t >= 0"
                    var_3c = "d:\ax\trunk\ax2017\engine\ui2.cpp"
            case 1
                arg7.q = fconvert.d(arg4)
                arg7.q = fconvert.d(arg5)
                arg1 = sub_598500()
                arg7.q = fconvert.d(fconvert.t(arg7.q))
                float xmm1_5 = _mm_cvtpd_ps(zx.o(arg7.q)) / arg5
                xmm1_2 = xmm1_5 + xmm1_5
                
                if (not(xmm1_2 <= 1f))
                    xmm1_2 = 1f - (xmm1_2 - 1f)
                
                goto label_4a65d5
            case 2
                if (arg4 > arg5)
                    goto label_4a6610
                
                xmm1_2 = arg4 / arg5
                goto label_4a65d5
            case 3
                var_34 = "CalcFlipAnimT"
                var_38 = 0x1d34
                ecx = "Halt"
                var_3c = "d:\ax\trunk\ax2017\engine\ui2.cpp"
            case 4
                xmm1_2 = (zx.o(0)).d
            label_4a6623:
                float xmm0_10 = sub_4827e0(_mm_cvtepi32_ps(zx.o(esi_1)) * xmm1_2)
                float xmm0_11
                
                if (0 f<= xmm0_10)
                    xmm0_11 = xmm0_10 + 0.5f
                else
                    xmm0_11 = xmm0_10 - 0.5f
                
                arg1 = int.d(xmm0_11)
                int32_t ecx_1 = arg1 - 1
                
                if (arg1 != esi_1)
                    ecx_1 = arg1
                
                if (ecx_1 s< 0)
                    var_34 = "FlipAnimUVs"
                    var_38 = 0x1d46
                    ecx = "idx >= 0"
                    var_3c = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                else if (ecx_1 s>= esi_1)
                    var_34 = "FlipAnimUVs"
                    var_38 = 0x1d47
                    ecx = "idx < totalFrames"
                    var_3c = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                else if (edi s<= 0)
                    var_34 = "SpriteUVFromStrip"
                    var_38 = 0x4a0
                    var_3c = "d:\ax\trunk\ax2017\engine\sprite.cpp"
                    ecx = "numCols > 0"
                else if (arg8 s> 0)
                    if (ecx_1 s< esi_1)
                        int32_t eax_1
                        int32_t edx
                        edx:eax_1 = sx.q(ecx_1)
                        int32_t temp0 = divs.dp.d(edx:eax_1, edi)
                        int32_t temp1 = mods.dp.d(edx:eax_1, edi)
                        float xmm1_7 = _mm_cvtepi32_ps(zx.o(edi))
                        float xmm0_13 = _mm_cvtepi32_ps(zx.o(temp1))
                        float xmm2_1 = _mm_cvtepi32_ps(zx.o(arg8))
                        float var_1c = _mm_cvtepi32_ps(zx.o(temp0)) / xmm2_1
                        float var_18 = _mm_cvtepi32_ps(zx.o(temp1 + 1)) / xmm1_7
                        float var_14 = _mm_cvtepi32_ps(zx.o(temp0 + 1)) / xmm2_1
                        *arg6 = (xmm0_13 / xmm1_7).o
                        return arg6
                    
                    var_34 = "SpriteUVFromStrip"
                    var_38 = 0x4a2
                    var_3c = "d:\ax\trunk\ax2017\engine\sprite.cpp"
                    ecx = "idx < numCols * numRows"
                else
                    var_34 = "SpriteUVFromStrip"
                    var_38 = 0x4a1
                    var_3c = "d:\ax\trunk\ax2017\engine\sprite.cpp"
                    ecx = "numRows > 0"
            case 5
            label_4a6610:
                xmm1_2 = 1f
                goto label_4a6623
    sub_489550(arg1, &data_5b2591, ecx, var_3c, var_38, var_34)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
