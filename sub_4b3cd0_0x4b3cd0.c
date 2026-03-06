// 函数名称: sub_4b3cd0
// 虚拟地址: 0x4b3cd0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD**sub_4b3cd0()
{
    // 第一条实际指令: void var_138
    void var_138
    HWND eax_1 = __security_cookie ^ &var_138
    HWND var_14 = eax_1
    char const* const var_14c
    int32_t var_148
    char const* const var_144
    char* ecx
    
    if (data_114e7d9 != 0)
        int32_t* ecx_1 = data_642620
        data_aca6a4 = 1
        float var_70[0x4]
        int128_t* eax_3
        int32_t edx
        int32_t edx_1
        eax_3, edx_1 = sub_49abe0(&var_70, edx, ecx_1, &var_70)
        int32_t var_130_1 = 0xc61c4000
        int32_t var_128_1 = 0x461c4000
        float xmm3_1[0x4] = *eax_3
        float var_134
        __builtin_memcpy(&var_134, 
            "\x00\x00\x00\x7f\x00\x40\x1c\xc6\x00\x40\x1c\xc6\x00\x40\x1c\x46\x00\x40\x1c\x46", 0x14)
        var_134 = var_134
        int32_t xmm2_2 = _mm_shuffle_ps(xmm3_1, xmm3_1, 0x55)
        int32_t var_124_1 = xmm2_2
        int32_t xmm1_2 = _mm_shuffle_ps(xmm3_1, xmm3_1, 0xff)
        int32_t var_12c_1 = xmm1_2
        float var_90[0x4] = var_130_1.o
        int32_t var_128_2 = 0x461c4000
        int32_t var_128_3 = xmm3_1
        int32_t var_12c_2 = xmm2_2
        int32_t var_124_2 = xmm1_2
        float var_a0[0x4] = 0xc61c4000.o
        int32_t xmm3_2 = _mm_shuffle_ps(xmm3_1, xmm3_1, 0xaa)
        int32_t var_130_3
        float var_b0[0x4] = var_130_3.o
        int32_t var_12c_3 = xmm2_2
        int32_t var_124_3 = xmm1_2
        float var_80[0x4] = xmm3_2.o
        var_90 = *sub_4aa750(&var_70, edx_1, &var_90, &var_70)
        var_90 = *sub_4aa750(&var_70, sub_4c0580(&var_90, &var_134), &var_b0, &var_70)
        var_90 = *sub_4aa750(&var_70, sub_4c0580(&var_90, &var_134), &var_80, &var_70)
        var_90 = *sub_4aa750(&var_70, sub_4c0580(&var_90, &var_134), &var_a0, &var_70)
        int32_t edx_9 = sub_4c0580(&var_90, &var_134)
        int32_t var_128_4 = 0x457a0000
        int32_t var_124_4 = 0
        float var_12c_4 = -1f f/ data_642644
        var_90 = 0xc47a0000.o
        var_90 = *sub_4aa750(&var_70, edx_9, &var_90, &var_70)
        int32_t edx_10 = sub_4c0580(&var_90, &data_5d2460)
        int32_t var_12c_5 = 0xc47a0000
        int32_t var_128_5 = 0
        int32_t var_124_5 = 0x457a0000
        var_90 = (-1f f/ data_642644).o
        var_90 = *sub_4aa750(&var_70, edx_10, &var_90, &var_70)
        eax_1 = sub_4c0580(&var_90, &data_5d2460)
        int32_t ecx_14 = data_642624
        
        if (ecx_14 != 0)
            eax_1 = sub_4a7800(ecx_14)
        
        if (data_114e7d9 != 0)
            struct _EXCEPTION_REGISTRATION_RECORD** eax_17 = data_aca74c
            eax_1 = data_643654
            data_aca74c = 0x4e200000
            float var_110[0x4]
            float var_100[0x4]
            float var_f0[0x4]
            bool cond:1_1
            
            if (eax_1 s<= 0)
                cond:1_1 = data_642618 == 0
            else
                int32_t temp0_1 = data_642618
                cond:1_1 = temp0_1 == 0
                
                if (temp0_1 s> 0)
                    int32_t i = 1
                    
                    if (eax_1 s> 1)
                        do
                            void* eax_18 = sub_4a7d60((&data_642654)[i])
                            int128_t* eax_19 =
                                sub_4bc3a0(eax_18 + 0x54c, *(data_114e818 + 0x2c), &var_70)
                            float xmm1_3 = *(eax_18 + 0x10a0)
                            float xmm0_16 = *(eax_18 + 0x10a8) - xmm1_3
                            float xmm3_3 = *(eax_19 + 4)
                            float xmm4_1 = *(eax_19 + 0xc)
                            float xmm2_6 = *(eax_19 + 8) * xmm0_16 + xmm1_3
                            float xmm5_3 = xmm0_16 f* *eax_19 + xmm1_3
                            float xmm1_4 = *(eax_18 + 0x10a4)
                            float xmm0_18 = *(eax_18 + 0x10ac) - xmm1_4
                            var_a0[2] = xmm2_6
                            float xmm5_4 = xmm5_3 + 1f
                            float xmm3_5 = xmm3_3 * xmm0_18 + xmm1_4
                            float var_128_6 = xmm5_4
                            var_80[0] = xmm5_4
                            float xmm4_3 = xmm4_1 * xmm0_18 + xmm1_4
                            var_b0[0] = xmm5_4
                            float xmm1_6 = xmm2_6 - 1f
                            float var_12c_6 = xmm3_5
                            var_a0[1] = xmm3_5
                            var_80[1] = xmm3_5
                            float var_124_6 = xmm4_3
                            var_90 = xmm5_3.o
                            var_a0[0] = xmm1_6
                            var_a0[3] = xmm4_3
                            var_110 = var_a0
                            var_80[2] = xmm1_6
                            var_80[3] = xmm3_5 + 1f
                            var_100 = var_80
                            var_b0[2] = xmm1_6
                            var_b0[3] = xmm4_3
                            var_b0[1] = xmm4_3 - 1f
                            var_f0 = var_b0
                            sub_4c0580(&var_90, &data_5d233c)
                            sub_4c0580(&var_110, &data_5d233c)
                            sub_4c0580(&var_100, &data_5d233c)
                            sub_4c0580(&var_f0, &data_5d233c)
                            i += 1
                        while (i s< data_643654)
                    
                    void* eax_20 = sub_4a7d60(data_642654)
                    void* edx_12 = data_114e818
                    var_134 = -3.01464553e+38f
                    var_134 = var_134
                    int128_t* eax_21 = sub_4bc3a0(eax_20 + 0x54c, *(edx_12 + 0x2c), &var_70)
                    float xmm1_7 = *(eax_20 + 0x10a0)
                    float xmm0_26 = *(eax_20 + 0x10a8) - xmm1_7
                    float xmm4_4 = *(eax_21 + 0xc)
                    float xmm3_7 = *(eax_21 + 4)
                    float xmm2_10 = *(eax_21 + 8) * xmm0_26 + xmm1_7
                    float xmm5_7 = xmm0_26 f* *eax_21 + xmm1_7
                    float xmm1_8 = *(eax_20 + 0x10a4)
                    float xmm0_28 = *(eax_20 + 0x10ac) - xmm1_8
                    var_b0[0] = xmm5_7
                    float xmm5_8 = xmm5_7 + 1f
                    float xmm3_9 = xmm3_7 * xmm0_28 + xmm1_8
                    var_b0[2] = xmm5_8
                    float xmm4_6 = xmm4_4 * xmm0_28 + xmm1_8
                    float xmm1_10 = xmm2_10 - 1f
                    var_b0[1] = xmm3_9
                    var_b0[3] = xmm4_6
                    var_f0 = var_b0
                    var_b0[1] = xmm3_9
                    var_b0[0] = xmm1_10
                    var_b0[2] = xmm2_10
                    var_b0[3] = xmm4_6
                    float xmm0_30[0x4] = var_b0
                    var_b0[1] = xmm3_9
                    var_100 = xmm0_30
                    var_b0[0] = xmm5_8
                    var_b0[2] = xmm1_10
                    var_b0[3] = xmm3_9 + 1f
                    var_110 = var_b0
                    var_b0[0] = xmm5_8
                    var_b0[2] = xmm1_10
                    var_b0[3] = xmm4_6
                    var_b0[1] = xmm4_6 - 1f
                    var_90 = var_b0
                    sub_4c0580(&var_f0, &var_134)
                    sub_4c0580(&var_100, &var_134)
                    sub_4c0580(&var_110, &var_134)
                    sub_4c0580(&var_90, &var_134)
                    eax_1 = data_643654
                    cond:1_1 = data_642618 == 0
            
            if (cond:1_1)
            label_4b4d2f:
                
                if (data_114e7d9 != 0)
                    int32_t edx_19 = data_642640
                    data_aca74c = eax_17
                    
                    if (edx_19 == 0)
                        @__security_check_cookie@4(var_14 ^ &var_138)
                        return eax_17
                    
                    eax_1 = zx.d(edx_19.w)
                    
                    if (eax_1 u< data_63e5ac)
                        float ecx_48 = eax_1 * 0x1418 + data_63e5a8
                        
                        if (*(ecx_48 i+ 0x1410) == edx_19)
                            struct _EXCEPTION_REGISTRATION_RECORD** eax_30 = sub_4a6fe0(ecx_48)
                            @__security_check_cookie@4(var_14 ^ &var_138)
                            return eax_30
                    
                    var_144 = "DataArray<struct UI2>::DataArrayGet"
                    var_148 = 0x6d
                    var_14c = "d:\ax\trunk\ax2017\engine\dataarray.h"
                    ecx = "DataArrayTryToGet(id) != NULL"
                else
                    var_144 = "Draw3DLayer"
                    var_148 = 0x327
                    var_14c = "d:\ax\trunk\ax2017\engine\draw3d.cpp"
                    ecx = "gDraw3DData.submittingRenderItems"
            else
                if (data_64365e == 0)
                    goto label_4b463f
                
                eax_1 = GetKeyState(0x11)
                float var_e0[0x4]
                int128_t var_d0
                float var_c0[0x4]
                int128_t var_58
                
                if ((0x8000 & eax_1.w) == 0)
                label_4b466d:
                    
                    if (data_643654 == 1)
                        void* eax_25 = sub_4a7d60(data_642654)
                        int128_t* eax_26 = sub_4bc3a0(eax_25 + 0x54c, *(data_114e818 + 0x2c), &var_70)
                        float xmm1_14 = *(eax_25 + 0x10a0)
                        float xmm0_42 = *(eax_25 + 0x10a8) - xmm1_14
                        float xmm3_18 = *eax_26 * xmm0_42 + xmm1_14
                        float xmm1_15 = *(eax_25 + 0x10a4)
                        float xmm0_44 = *(eax_25 + 0x10ac) - xmm1_15
                        int32_t i_1 = 0
                        float xmm2_20 = *(eax_26 + 8) * xmm0_42 + xmm1_14 - xmm3_18
                        float var_120_1 = xmm3_18
                        float xmm7_4 = *(eax_26 + 4) * xmm0_44
                        float xmm4_14 = *(eax_26 + 0xc) * xmm0_44 + xmm1_15
                        __builtin_memcpy(&var_58, 
                            "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x00\x00\x"
                        "00\x00\x00\x80\x3f\x00\x00\x00\x3f\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x00\x80"
                        "3f\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x3f\x00\x00\x80"
                        "3f\x00\x00\x80\x3f", 
                            0x40)
                        float xmm7_5 = xmm7_4 + xmm1_15
                        float xmm4_15 = xmm4_14 - xmm7_5
                        float var_11c_1 = xmm7_5
                        var_134 = xmm2_20
                        float var_118_1 = xmm4_15
                        
                        do
                            float xmm5_16 = *(&var_58 + (i_1 << 3)) * xmm2_20 + xmm3_18
                            float xmm3_21 = *(&var_58:4 + (i_1 << 3)) * xmm4_15 + xmm7_5
                            float xmm5_17 = xmm5_16 - 4f
                            float xmm1_17 = xmm5_16 + 4f
                            float xmm3_22 = xmm3_21 - 4f
                            float xmm4_17 = xmm3_21 + 4f
                            var_b0[0] = xmm5_17
                            float xmm5_18 = xmm5_17 + 2f
                            var_80[2] = xmm1_17
                            float xmm2_22 = xmm1_17 - 2f
                            var_b0[1] = xmm3_22
                            var_80[1] = xmm3_22
                            float var_12c_8 = xmm3_22
                            var_b0[2] = xmm5_18
                            var_b0[3] = xmm4_17
                            var_70 = var_b0
                            var_80[0] = xmm2_22
                            var_80[3] = xmm4_17
                            var_c0 = var_80
                            float var_128_8 = xmm2_22
                            float var_124_8 = xmm3_22 + 2f
                            var_d0 = xmm5_18.o
                            var_a0[0] = xmm5_18
                            var_a0[2] = xmm2_22
                            var_a0[3] = xmm4_17
                            var_a0[1] = xmm4_17 - 2f
                            var_e0 = var_a0
                            sub_4c0580(&var_70, &data_5d2474)
                            sub_4c0580(&var_c0, &data_5d2474)
                            sub_4c0580(&var_d0, &data_5d2474)
                            eax_1 = sub_4c0580(&var_e0, &data_5d2474)
                            i_1 += 1
                            xmm2_20 = var_134
                            xmm4_15 = var_118_1
                            xmm3_18 = var_120_1
                            xmm7_5 = var_11c_1
                        while (i_1 s< 8)
                        
                        goto label_4b4d2f
                    
                    var_144 = "UI2EditorDraw"
                    var_148 = 0x3257
                    var_14c = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                    ecx = "gUI2Editor.s.activeSetCount == 1"
                else
                    eax_1 = data_aca1f0
                    
                    if (eax_1->__offset(0x18).b == 0)
                        goto label_4b466d
                    
                    eax_1 = GetFocus()
                    
                    if (eax_1 != data_1150b8c && eax_1 != 0)
                        goto label_4b466d
                    
                    if (data_64365e == 0)
                    label_4b463a:
                        eax_1 = data_643654
                    label_4b463f:
                        
                        if (data_64365c.b == 0)
                            goto label_4b4d2f
                        
                        if (eax_1 s> 0)
                            eax_1 = sub_4a7d60(data_642654)
                            
                            if (eax_1 == 0)
                                int128_t* eax_28 =
                                    sub_4bc3a0(&eax_1[0x153], *(data_114e818 + 0x2c), &var_70)
                                float xmm2_24 = eax_1
                                int32_t edi_1 = 1
                                float xmm1_19 = eax_1 - xmm2_24
                                var_b0[0] = xmm1_19 f* *eax_28 + xmm2_24
                                float xmm2_25 = eax_1
                                float xmm1_21 = eax_1 - xmm2_25
                                var_b0[2] = *(eax_28 + 8) * xmm1_19 + xmm2_24
                                var_b0[1] = *(eax_28 + 4) * xmm1_21 + xmm2_25
                                var_b0[3] = *(eax_28 + 0xc) * xmm1_21 + xmm2_25
                                var_a0 = var_b0
                                
                                if (data_643654 s<= 1)
                                label_4b4b29:
                                    int32_t i_2 = 0
                                    float xmm3_27 = var_a0[0]
                                    float xmm1_26 = var_a0[2] - xmm3_27
                                    float xmm4_21 = var_a0[1]
                                    float xmm2_31 = var_a0[3] - xmm4_21
                                    __builtin_memcpy(&var_58, 
                                        "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x3f\x"
                                    "00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x3f\x00\x00\x00\x00\x00"
                                    "00\x00\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00"
                                    "80\x3f\x00\x00\x00\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f", 
                                        0x40)
                                    float var_11c_2 = xmm1_26
                                    float var_120_2 = xmm2_31
                                    
                                    do
                                        float xmm5_24 = *(&var_58 + (i_2 << 3)) * xmm1_26 + xmm3_27
                                        float xmm3_30 = *(&var_58:4 + (i_2 << 3)) * xmm2_31 + xmm4_21
                                        float xmm5_25 = xmm5_24 - 4f
                                        float xmm1_28 = xmm5_24 + 4f
                                        float xmm3_31 = xmm3_30 - 4f
                                        float xmm4_23 = xmm3_30 + 4f
                                        var_b0[0] = xmm5_25
                                        float xmm5_26 = xmm5_25 + 2f
                                        var_80[2] = xmm1_28
                                        float xmm2_33 = xmm1_28 - 2f
                                        var_b0[1] = xmm3_31
                                        var_80[1] = xmm3_31
                                        float var_12c_11 = xmm3_31
                                        var_b0[2] = xmm5_26
                                        var_b0[3] = xmm4_23
                                        var_70 = var_b0
                                        var_80[0] = xmm2_33
                                        var_80[3] = xmm4_23
                                        var_c0 = var_80
                                        float var_128_11 = xmm2_33
                                        float var_124_11 = xmm3_31 + 2f
                                        var_d0 = xmm5_26.o
                                        var_90[0] = xmm5_26
                                        var_90[2] = xmm2_33
                                        var_90[3] = xmm4_23
                                        var_90[1] = xmm4_23 - 2f
                                        var_e0 = var_90
                                        sub_4c0580(&var_70, &data_5d2474)
                                        sub_4c0580(&var_c0, &data_5d2474)
                                        sub_4c0580(&var_d0, &data_5d2474)
                                        eax_1 = sub_4c0580(&var_e0, &data_5d2474)
                                        i_2 += 1
                                        xmm1_26 = var_11c_2
                                        xmm2_31 = var_120_2
                                        xmm3_27 = var_a0[0]
                                        xmm4_21 = var_a0[1]
                                    while (i_2 s< 8)
                                    
                                    goto label_4b4d2f
                                
                                while (true)
                                    void* eax_29 = sub_4a7d60((&data_642654)[edi_1])
                                    eax_1 = sub_4bc3a0(eax_29 + 0x54c, *(data_114e818 + 0x2c), &var_70)
                                    float xmm1_22 = *(eax_29 + 0x10a0)
                                    float xmm6_1 = var_a0[2]
                                    float xmm0_65 = *(eax_29 + 0x10a8) - xmm1_22
                                    float xmm7_6 = var_a0[0]
                                    float xmm4_20 = eax_1 * xmm0_65 + xmm1_22
                                    float xmm5_21 = xmm0_65 f* eax_1->unused + xmm1_22
                                    float xmm1_23 = *(eax_29 + 0x10a4)
                                    float xmm0_67 = *(eax_29 + 0x10ac) - xmm1_23
                                    float xmm3_26 = eax_1 * xmm0_67 + xmm1_23
                                    float xmm2_29 = eax_1 * xmm0_67 + xmm1_23
                                    
                                    if (not(xmm6_1 < xmm7_6))
                                        float xmm0_68 = var_a0[3]
                                        float xmm1_24 = var_a0[1]
                                        
                                        if (not(xmm0_68 < xmm1_24))
                                            float var_130_10
                                            
                                            var_130_10 = xmm5_21 <= xmm7_6 ? xmm5_21 : xmm7_6
                                            
                                            if (xmm6_1 <= xmm4_20)
                                                float var_128_10 = xmm4_20
                                            else
                                                float var_128_9 = xmm6_1
                                            
                                            if (xmm3_26 <= xmm1_24)
                                                float var_12c_10 = xmm3_26
                                            else
                                                float var_12c_9 = xmm1_24
                                            
                                            if (xmm0_68 <= xmm2_29)
                                                float var_124_10 = xmm2_29
                                            else
                                                float var_124_9 = xmm0_68
                                            
                                            edi_1 += 1
                                            var_a0 = var_130_10.o
                                            
                                            if (edi_1 s>= data_643654)
                                                goto label_4b4b29
                                            
                                            continue
                                    
                                    var_144 = "RectUnion"
                                    var_148 = 0xdb
                                    var_14c = "d:\ax\trunk\ax2017\engine\rect.cpp"
                                    ecx = "RectIsNormalized(r0)"
                                    break
                            else
                                var_144 = "UI2EditorDraw"
                                var_148 = 0x328d
                                var_14c = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                                ecx = "el0.worldInfo.index == 0"
                        else
                            var_144 = "UI2EditorDraw"
                            var_148 = 0x328b
                            var_14c = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                            ecx = "gUI2Editor.s.activeSetCount > 0"
                    else
                        if ((0x8000 & GetKeyState(0x11)) == 0 || *(data_aca1f0 + 0x18) == 0)
                            goto label_4b463a
                        
                        eax_1 = GetFocus()
                        
                        if (eax_1 != data_1150b8c && eax_1 != 0)
                            goto label_4b463a
                        
                        if (data_643654 == 1)
                            void* eax_24 = sub_4a7d60(data_642654)
                            int32_t i_3 = 0
                            __builtin_memcpy(&var_58, 
                                "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x00\x"
                            "00\x00\x00\x00\x80\x3f\x00\x00\x00\x3f\x00\x00\x00\x00\x00\x00\x00\x3f\x00"
                            "00\x80\x3f\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x3f"
                            "00\x00\x80\x3f\x00\x00\x80\x3f", 
                                0x40)
                            float xmm1_11[0x4] = *(eax_24 + 0x10a0)
                            var_e0 = xmm1_11
                            float xmm2_12 = _mm_shuffle_ps(xmm1_11, xmm1_11, 0xaa)
                            float xmm4_8 = _mm_shuffle_ps(xmm1_11, xmm1_11, 0xff)
                            int128_t xmm2_13 = xmm2_12 f- xmm1_11
                            float xmm7_2[0x4] = _mm_shuffle_ps(xmm1_11, xmm1_11, 0x55)
                            float xmm4_9[0x4] = xmm4_8 f- xmm7_2
                            var_d0 = xmm2_13
                            var_70 = xmm7_2
                            var_c0 = xmm4_9
                            
                            do
                                float xmm5_11 = *(&var_58 + (i_3 << 3)) f* xmm2_13 f+ xmm1_11
                                float xmm3_13 = *(&var_58:4 + (i_3 << 3)) f* xmm4_9 f+ xmm7_2
                                float xmm5_12 = xmm5_11 - 4f
                                float xmm1_13 = xmm5_11 + 4f
                                float xmm3_14 = xmm3_13 - 4f
                                float xmm4_11 = xmm3_13 + 4f
                                var_b0[0] = xmm5_12
                                float xmm5_13 = xmm5_12 + 2f
                                var_80[2] = xmm1_13
                                float xmm2_15 = xmm1_13 - 2f
                                var_b0[1] = xmm3_14
                                var_80[1] = xmm3_14
                                float var_12c_7 = xmm3_14
                                var_b0[2] = xmm5_13
                                var_b0[3] = xmm4_11
                                var_f0 = var_b0
                                var_80[0] = xmm2_15
                                var_80[3] = xmm4_11
                                var_100 = var_80
                                float var_128_7 = xmm2_15
                                float var_124_7 = xmm3_14 + 2f
                                var_110 = xmm5_13.o
                                var_a0[0] = xmm5_13
                                var_a0[2] = xmm2_15
                                var_a0[3] = xmm4_11
                                var_a0[1] = xmm4_11 - 2f
                                var_90 = var_a0
                                sub_4c0580(&var_f0, &data_5d2474)
                                sub_4c0580(&var_100, &data_5d2474)
                                sub_4c0580(&var_110, &data_5d2474)
                                eax_1 = sub_4c0580(&var_90, &data_5d2474)
                                xmm1_11 = var_e0
                                i_3 += 1
                                xmm2_13 = var_d0
                                xmm4_9 = var_c0
                                xmm7_2 = var_70
                            while (i_3 s< 8)
                            
                            goto label_4b4d2f
                        
                        var_144 = "UI2EditorDraw"
                        var_148 = 0x3271
                        var_14c = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                        ecx = "gUI2Editor.s.activeSetCount == 1"
        else
            var_144 = "Draw3DLayer"
            var_148 = 0x327
            var_14c = "d:\ax\trunk\ax2017\engine\draw3d.cpp"
            ecx = "gDraw3DData.submittingRenderItems"
    else
        var_144 = "Draw3DSetSortOverride"
        var_148 = 0x2f7
        var_14c = "d:\ax\trunk\ax2017\engine\draw3d.cpp"
        ecx = "gDraw3DData.submittingRenderItems"
    
    sub_489550(eax_1, &data_5b2591, ecx, var_14c, var_148, var_144)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
