// 函数名称: sub_550430
// 虚拟地址: 0x550430
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_550430(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    
    if (data_11e705c == 0)
    label_550a12:
        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
        return 0xffffffff
    
    float var_6c[0xc]
    float* eax_2 = sub_54e220(&var_6c)
    bool cond:1_1 = data_11e7062 == 0
    int128_t var_fc = *eax_2
    int128_t var_ec_1 = *(eax_2 + 0x10)
    int128_t var_dc = *(eax_2 + 0x20)
    int128_t var_cc_1 = *(eax_2 + 0x30)
    int128_t var_bc_1 = *(eax_2 + 0x40)
    int128_t var_ac_1 = *(eax_2 + 0x50)
    char const* const var_170
    int32_t var_16c_1
    char const* const var_168_2
    int128_t* eax_3
    char* ecx_1
    float var_134[0x4]
    float var_11c
    int128_t var_8c
    int128_t var_7c_1
    int32_t ecx
    
    if (cond:1_1)
    label_5506ab:
        int32_t var_16c_3 = ecx
        void* eax_7 = sub_54e110(data_11e605c, nullptr)
        int128_t* eax_8
        int32_t ecx_8
        eax_8, ecx_8 = sub_4c8fe0(eax_7, &var_fc, eax_7, &var_134, 0)
        int32_t esi_2 = 1
        var_7c_1 = *eax_8
        
        if (data_11e705c s<= 1)
            goto label_55051b
        
        while (true)
            int32_t var_16c_5 = ecx_8
            void* eax_9 = sub_54e110((&data_11e605c)[esi_2], nullptr)
            eax_3, ecx_8 = sub_4c8fe0(eax_9, &var_fc, eax_9, &var_134, 0)
            float xmm3_4 = var_7c_1:8.d
            float xmm2_3 = var_7c_1.d
            var_8c = *eax_3
            
            if (not(xmm3_4 < xmm2_3))
                int32_t xmm0_15 = var_7c_1:0xc.d
                int32_t xmm1_6 = var_7c_1:4.d
                
                if (not(xmm0_15 f< xmm1_6))
                    float xmm4_3 = var_8c.d
                    float var_124_1
                    
                    var_124_1 = xmm4_3 <= xmm2_3 ? xmm4_3 : xmm2_3
                    
                    float xmm2_4 = var_8c:8.d
                    
                    var_11c = xmm3_4 <= xmm2_4 ? xmm2_4 : xmm3_4
                    
                    int32_t xmm2_5 = var_8c:4.d
                    
                    if (xmm2_5 f<= xmm1_6)
                        int32_t var_120_2 = xmm2_5
                    else
                        int32_t var_120_1 = xmm1_6
                    
                    int32_t xmm1_7 = var_8c:0xc.d
                    
                    if (xmm0_15 f<= xmm1_7)
                        int32_t var_118_2 = xmm1_7
                    else
                        int32_t var_118_1 = xmm0_15
                    
                    esi_2 += 1
                    var_7c_1 = var_124_1.o
                    
                    if (esi_2 s>= data_11e705c)
                        goto label_55051b
                    
                    continue
            
        label_5507de:
            var_168_2 = "RectUnion"
            var_16c_1 = 0xdb
            ecx_1 = "RectIsNormalized(r0)"
            break
        
        var_170 = "d:\ax\trunk\ax2017\engine\rect.cpp"
    else
        eax_3, ecx = GetKeyState(0x11)
        char var_168_3
        void* eax_4
        
        if ((0x8000 & eax_3.w) != 0)
            if (data_11e7062 == 0)
                goto label_5506ab
            
            eax_3, ecx = GetKeyState(0x11)
            
            if ((0x8000 & eax_3.w) == 0)
                goto label_5506ab
            
            if (data_11e705c == 1)
                eax_4 = sub_54e110(data_11e605c, nullptr)
                var_168_3 = 1
                goto label_550510
            
            var_168_2 = "TransformCorner"
            var_16c_1 = 0x3bf
            var_170 = "d:\ax\trunk\ax2017\engine\editor\uieditor.cpp"
            ecx_1 = "gUI.s.activeSetCount == 1"
        else if (data_11e705c == 1)
            eax_4 = sub_54e110(data_11e605c, nullptr)
            var_168_3 = 0
        label_550510:
            var_7c_1 = *sub_4c8fe0(eax_4, &var_fc, eax_4, &var_134, var_168_3)
        label_55051b:
            int32_t esi_1 = 0
            float xmm2_1 = var_7c_1:4.d
            float xmm4_2 = var_7c_1:0xc.d - xmm2_1
            __builtin_memcpy(&var_dc, 
                "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x00\x00\x00\x00\x00\x"
            "80\x3f\x00\x00\x00\x3f\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00"
            "00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f", 
                0x40)
            float xmm0_8 = var_7c_1.d
            float xmm3_2 = var_7c_1:8.d - xmm0_8
            float var_104_1 = xmm4_2
            float var_10c = 16f
            int32_t var_108_1 = 0x41800000
            float var_100_1 = xmm3_2
            
            while (true)
                float xmm0_11 = *(&var_dc:4 + (esi_1 << 3)) * xmm4_2 + xmm2_1
                float var_114 = *(&var_dc + (esi_1 << 3)) * xmm3_2 + xmm0_8
                float var_110_1 = xmm0_11
                eax_3 = sub_4829a0(&var_134, &var_10c, &var_114, &var_134)
                float xmm0_12[0x4] = *eax_3
                float xmm1_5 = _mm_shuffle_ps(xmm0_12, xmm0_12, 0xaa)
                
                if (xmm1_5 f< xmm0_12)
                    break
                
                float xmm3_3 = xmm0_12[3]
                float xmm2_2 = xmm0_12[1]
                
                if (xmm3_3 < xmm2_2)
                    break
                
                if (not(arg1 f< xmm0_12) && not(arg2 f< xmm2_2) && not(xmm1_5 f< arg1)
                        && xmm3_3 f>= arg2)
                    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                    return esi_1
                
                esi_1 += 1
                
                if (esi_1 s>= 8)
                    int128_t var_3c
                    void* edi_1 = &var_3c:4
                    float xmm4_4 = var_7c_1:4.d
                    int32_t esi_3 = 0
                    __builtin_memcpy(&var_3c, 
                        "\x00\x00\x00\x00\x02\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x05\x00\x00\x00\x"
                    "03\x00\x00\x00\x02\x00\x00\x00\x07\x00\x00\x00\x04\x00\x00\x00\x05\x00\x00\x00\x07"
                    "00\x00\x00\x06\x00\x00\x00", 
                        0x30)
                    int32_t ebx_1 = 2
                    var_114 = 16f
                    int32_t var_110_2 = 0x41800000
                    var_8c:8.d = 0x41800000
                    var_8c:0xc.d = 0x41800000
                    
                    while (true)
                        int32_t eax_11 = *(edi_1 - 4)
                        float xmm0_19 = *(&var_dc:4 + (eax_11 << 3)) * var_104_1 + xmm4_4
                        var_10c = *(&var_dc + (eax_11 << 3)) * var_100_1 f+ var_7c_1.d
                        float var_108_2 = xmm0_19
                        void var_144
                        int128_t* eax_13 = sub_4829a0(&var_144, &var_114, &var_10c, &var_144)
                        float xmm1_13 = *(&var_dc + (ebx_1 << 3)) * var_100_1 f+ var_7c_1.d
                        float xmm6_2[0x4] = *eax_13
                        float xmm0_22 = *(&var_dc:4 + (ebx_1 << 3)) * var_104_1 f+ var_7c_1:4.d
                        var_134 = xmm6_2
                        var_11c = xmm1_13
                        float var_118_3 = xmm0_22
                        void var_154
                        eax_3 = sub_4829a0(&var_154, &var_8c:8, &var_11c, &var_154)
                        float xmm2_7 = _mm_shuffle_ps(xmm6_2, xmm6_2, 0xaa)
                        int128_t xmm0_23 = *eax_3
                        
                        if (xmm2_7 f< xmm6_2)
                            goto label_5507de
                        
                        float xmm1_14 = var_134[3]
                        float xmm0_24 = var_134[1]
                        
                        if (xmm1_14 < xmm0_24)
                            goto label_5507de
                        
                        float xmm3_5[0x4] = xmm0_23.d
                        
                        if (not(xmm3_5 f> xmm6_2))
                            xmm6_2 = xmm3_5
                        
                        float xmm3_6 = xmm0_23:8.d
                        
                        if (not(xmm2_7 > xmm3_6))
                            xmm2_7 = xmm3_6
                        
                        float xmm3_7 = xmm0_23:4.d
                        
                        if (not(xmm3_7 > xmm0_24))
                            xmm0_24 = xmm3_7
                        
                        float xmm3_8 = xmm0_23:0xc.d
                        
                        if (not(xmm1_14 > xmm3_8))
                            xmm1_14 = xmm3_8
                        
                        float xmm3_9 = var_7c_1.d
                        float xmm5_1[0x4] = var_7c_1:8.d
                        
                        if (not(xmm3_9 f> xmm6_2))
                            xmm6_2 = xmm5_1
                        
                        xmm4_4 = var_7c_1:4.d
                        
                        if (not(xmm4_4 > xmm0_24))
                            xmm0_24 = var_7c_1:0xc.d
                        
                        if (not(xmm2_7 f> xmm5_1))
                            xmm2_7 = xmm3_9
                        
                        if (not(xmm1_14 f> var_7c_1:0xc.d))
                            xmm1_14 = xmm4_4
                        
                        if (xmm2_7 f< xmm6_2)
                            break
                        
                        if (xmm1_14 < xmm0_24)
                            break
                        
                        if (not(arg1 f< xmm6_2) && not(arg2 f< xmm0_24) && not(xmm2_7 f< arg1)
                                && xmm1_14 f>= arg2)
                            void var_34
                            int32_t eax_16 = *(&var_34 + esi_3 * 0xc)
                            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                            return eax_16
                        
                        esi_3 += 1
                        edi_1 += 0xc
                        
                        if (esi_3 s>= 4)
                            goto label_550a12
                        
                        ebx_1 = *edi_1
                    
                    break
                
                xmm0_8 = var_7c_1.d
                xmm2_1 = var_7c_1:4.d
                xmm3_2 = var_100_1
                xmm4_2 = var_104_1
            
            var_168_2 = "RectContains"
            ecx_1 = "RectIsNormalized(r)"
            var_16c_1 = 0xa4
            var_170 = "d:\ax\trunk\ax2017\engine\rect.cpp"
        else
            var_168_2 = "TransformCorner"
            var_16c_1 = 0x3b9
            var_170 = "d:\ax\trunk\ax2017\engine\editor\uieditor.cpp"
            ecx_1 = "gUI.s.activeSetCount == 1"
    sub_489550(eax_3, &data_5b2591, ecx_1, var_170, var_16c_1, var_168_2)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
