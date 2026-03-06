// 函数名称: sub_4abb60
// 虚拟地址: 0x4abb60
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_4abb60(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    
    if (data_643654 == 0)
    label_4ac281:
        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
        return 0xffffffff
    
    int32_t var_114
    char const* const var_110_1
    float var_cc
    float var_b4_1
    float var_b0_1
    int128_t var_ac
    float var_8c[0x4]
    HWND eax_2
    char* ecx_1
    float xmm1_1
    float xmm4_1
    float xmm6_1
    float xmm7_1
    
    if (data_64365e == 0)
    label_4abe2a:
        void* eax_7 = sub_4a7d60(data_642654)
        float* eax_8 = sub_4bc3a0(eax_7 + 0x54c, *(data_114e818 + 0x2c), &var_ac)
        float xmm3_5 = *(eax_7 + 0x10a0)
        int32_t edi_1 = 1
        float xmm1_12 = *(eax_7 + 0x10a8) - xmm3_5
        float xmm2_7 = *(eax_7 + 0x10a4)
        float xmm0_10 = *(eax_7 + 0x10ac) - xmm2_7
        xmm4_1 = eax_8[2] * xmm1_12 + xmm3_5
        xmm7_1 = xmm1_12 * *eax_8 + xmm3_5
        xmm6_1 = eax_8[1] * xmm0_10 + xmm2_7
        var_b0_1 = xmm4_1
        xmm1_1 = eax_8[3] * xmm0_10 + xmm2_7
        float var_b8_2 = xmm7_1
        float var_bc_2 = xmm6_1
        var_b4_1 = xmm1_1
        
        if (data_643654 s<= 1)
            goto label_4abc54
        
        while (true)
            void* eax_9 = sub_4a7d60((&data_642654)[edi_1])
            eax_2 = sub_4bc3a0(eax_9 + 0x54c, *(data_114e818 + 0x2c), &var_ac)
            float xmm3_6 = *(eax_9 + 0x10a0)
            float xmm2_9 = *(eax_9 + 0x10a4)
            float xmm1_16 = *(eax_9 + 0x10a8) - xmm3_6
            float xmm0_12 = *(eax_9 + 0x10ac) - xmm2_9
            float xmm7_8 = eax_2->unused * xmm1_16 + xmm3_6
            float xmm6_8 = eax_2 * xmm1_16 + xmm3_6
            float xmm5_3 = eax_2 * xmm0_12 + xmm2_9
            float xmm4_9 = eax_2 * xmm0_12 + xmm2_9
            
            if (var_b0_1 < var_b8_2 || var_b4_1 < var_bc_2)
            label_4ac04e:
                var_110_1 = "RectUnion"
                var_114 = 0xdb
                ecx_1 = "RectIsNormalized(r0)"
                goto label_4ac299
            
            float var_d4_1
            
            var_d4_1 = xmm7_8 <= var_b8_2 ? xmm7_8 : var_b8_2
            
            var_cc = var_b0_1 <= xmm6_8 ? xmm6_8 : var_b0_1
            
            if (xmm5_3 <= var_bc_2)
                float var_d0_2 = xmm5_3
            else
                float var_d0_1 = var_bc_2
            
            if (var_b4_1 <= xmm4_9)
                float var_c8_2 = xmm4_9
            else
                float var_c8_1 = var_b4_1
            
            edi_1 += 1
            var_8c = var_d4_1.o
            
            if (edi_1 s>= data_643654)
                break
            
            var_b4_1 = var_8c[3]
            var_b0_1 = var_8c[2]
            var_bc_2 = var_8c[1]
            var_b8_2 = var_8c[0]
            continue
        
        goto label_4abc20
    
    eax_2 = GetKeyState(0x11)
    char const* const var_118
    
    if ((0x8000 & eax_2.w) == 0)
    label_4abd68:
        
        if (data_643654 == 1)
            void* eax_5 = sub_4a7d60(data_642654)
            int32_t* eax_6 = sub_4bc3a0(eax_5 + 0x54c, *(data_114e818 + 0x2c), &var_ac)
            float xmm3_4 = *(eax_5 + 0x10a0)
            float xmm2_5 = *(eax_5 + 0x10a4)
            float xmm1_8 = *(eax_5 + 0x10a8) - xmm3_4
            float xmm0_8 = *(eax_5 + 0x10ac) - xmm2_5
            xmm7_1 = *eax_6 * xmm1_8 + xmm3_4
            xmm4_1 = eax_6[2] f* xmm1_8 + xmm3_4
            xmm1_1 = eax_6[3] f* xmm0_8 + xmm2_5
            xmm6_1 = eax_6[1] f* xmm0_8 + xmm2_5
            var_b0_1 = xmm4_1
            var_b4_1 = xmm1_1
        label_4abc54:
            int128_t var_4c
            __builtin_memcpy(&var_4c, 
                "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x00\x00\x00\x00\x00\x"
            "80\x3f\x00\x00\x00\x3f\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00"
            "00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f", 
                0x40)
            int32_t esi_1 = 0
            float xmm2_2 = xmm4_1 - xmm7_1
            float xmm3_2 = xmm1_1 - xmm6_1
            float var_b8_1 = xmm2_2
            float var_bc_1 = xmm3_2
            float var_94_1 = 16f
            int32_t var_90_1 = 0x41800000
            
            while (true)
                float xmm0_4 = *(&var_4c:4 + (esi_1 << 3)) * xmm3_2 + xmm6_1
                float var_c4 = *(&var_4c + (esi_1 << 3)) * xmm2_2 + xmm7_1
                float var_c0_1 = xmm0_4
                int128_t unused_1
                eax_2 = sub_4829a0(&var_ac, &unused_1:8, &var_c4, &var_ac)
                float xmm0_5[0x4]
                xmm0_5[0] = eax_2->unused
                xmm0_5[1] = eax_2
                xmm0_5[2] = eax_2
                xmm0_5[3] = eax_2
                float xmm1_6 = _mm_shuffle_ps(xmm0_5, xmm0_5, 0xaa)
                var_8c = xmm0_5
                
                if (xmm1_6 f< xmm0_5)
                    break
                
                float xmm3_3 = var_8c[3]
                float xmm2_3 = var_8c[1]
                
                if (xmm3_3 < xmm2_3)
                    break
                
                if (not(arg1 f< xmm0_5) && not(arg2 f< xmm2_3) && not(xmm1_6 f< arg1)
                        && xmm3_3 f>= arg2)
                    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                    return esi_1
                
                esi_1 += 1
                
                if (esi_1 s>= 8)
                    int128_t var_7c
                    void* ebx_1 = &var_7c:4
                    __builtin_memcpy(&var_7c, 
                        "\x00\x00\x00\x00\x02\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x05\x00\x00\x00\x"
                    "03\x00\x00\x00\x02\x00\x00\x00\x07\x00\x00\x00\x04\x00\x00\x00\x05\x00\x00\x00\x07"
                    "00\x00\x00\x06\x00\x00\x00", 
                        0x30)
                    int32_t edi_2 = 0
                    float var_90_2 = 2.80259693e-45f
                    var_c4 = 16f
                    int32_t var_c0_2 = 0x41800000
                    var_cc = 16f
                    int32_t var_c8_3 = 0x41800000
                    
                    while (true)
                        int32_t eax_11 = *(ebx_1 - 4)
                        float xmm0_21 = *(&var_4c:4 + (eax_11 << 3)) * var_bc_1 + xmm6_1
                        float var_dc = var_b8_1 f* *(&var_4c + (eax_11 << 3)) + xmm7_1
                        float var_d8_1 = xmm0_21
                        void var_ec
                        int128_t* eax_13 = sub_4829a0(&var_ec, &var_c4, &var_dc, &var_ec)
                        float xmm1_22 = var_b8_1 f* *(&var_4c + (var_90_2 << 3))
                        var_ac = *eax_13
                        float xmm0_25 = *(&var_4c:4 + (var_90_2 << 3)) * var_bc_1 + xmm6_1
                        var_8c[2] = xmm1_22 + xmm7_1
                        var_8c[3] = xmm0_25
                        void var_fc
                        eax_2 = sub_4829a0(&var_fc, &var_cc, &var_8c[2], &var_fc)
                        float xmm4_10[0x4] = *eax_13
                        int128_t unused = eax_2->unused.o
                        float xmm5_5 = _mm_shuffle_ps(xmm4_10, xmm4_10, 0xaa)
                        unused_1 = unused
                        
                        if (xmm5_5 f< xmm4_10)
                            goto label_4ac04e
                        
                        float xmm1_24 = var_ac:0xc.d
                        float xmm0_26 = var_ac:4.d
                        
                        if (xmm1_24 < xmm0_26)
                            goto label_4ac04e
                        
                        float xmm2_11[0x4] = unused_1.d
                        
                        if (not(xmm2_11 f> xmm4_10))
                            xmm4_10 = xmm2_11
                        
                        if (not(xmm5_5 > var_94_1))
                            xmm5_5 = var_94_1
                        
                        float xmm2_13 = unused_1:4.d
                        
                        if (not(xmm2_13 > xmm0_26))
                            xmm0_26 = xmm2_13
                        
                        if (not(xmm1_24 > var_90_2))
                            xmm1_24 = var_90_2
                        
                        float xmm3_8[0x4] = var_b0_1
                        
                        if (not(xmm7_1 f> xmm4_10))
                            xmm4_10 = xmm3_8
                        
                        if (not(xmm6_1 > xmm0_26))
                            xmm0_26 = var_b4_1
                        
                        if (not(xmm5_5 f> xmm3_8))
                            xmm5_5 = xmm7_1
                        
                        if (not(xmm1_24 > var_b4_1))
                            xmm1_24 = xmm6_1
                        
                        if (xmm5_5 f< xmm4_10)
                            break
                        
                        if (xmm1_24 < xmm0_26)
                            break
                        
                        if (not(arg1 f< xmm4_10) && not(arg2 f< xmm0_26) && not(xmm5_5 f< arg1)
                                && xmm1_24 f>= arg2)
                            void var_74
                            int32_t eax_18 = *(&var_74 + edi_2 * 0xc)
                            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                            return eax_18
                        
                        edi_2 += 1
                        ebx_1 += 0xc
                        
                        if (edi_2 s>= 4)
                            goto label_4ac281
                        
                        var_90_2 = *ebx_1
                    
                    break
                
                xmm2_2 = var_b8_1
                xmm3_2 = var_bc_1
            
            var_110_1 = "RectContains"
            ecx_1 = "RectIsNormalized(r)"
            var_114 = 0xa4
        label_4ac299:
            var_118 = "d:\ax\trunk\ax2017\engine\rect.cpp"
        else
            var_110_1 = "UI2TransformCorner"
            var_114 = 0x2654
            var_118 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
            ecx_1 = "gUI2Editor.s.activeSetCount == 1"
    else
        eax_2 = data_aca1f0
        
        if (eax_2->__offset(0x18).b == 0)
            goto label_4abd68
        
        eax_2 = GetFocus()
        
        if (eax_2 != data_1150b8c && eax_2 != 0)
            goto label_4abd68
        
        if (data_64365e == 0)
            goto label_4abe2a
        
        eax_2 = sub_4a79d0()
        
        if (eax_2.b == 0)
            goto label_4abe2a
        
        if (data_643654 == 1)
            var_8c = *(sub_4a7d60(data_642654) + 0x10a0)
        label_4abc20:
            xmm1_1 = var_8c[3]
            xmm4_1 = var_8c[2]
            xmm6_1 = var_8c[1]
            xmm7_1 = var_8c[0]
            var_b4_1 = xmm1_1
            var_b0_1 = xmm4_1
            goto label_4abc54
        
        var_110_1 = "UI2TransformCorner"
        var_114 = 0x265b
        var_118 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
        ecx_1 = "gUI2Editor.s.activeSetCount == 1"
    
    sub_489550(eax_2, &data_5b2591, ecx_1, var_118, var_114, var_110_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
