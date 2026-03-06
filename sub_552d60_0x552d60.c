// 函数名称: sub_552d60
// 虚拟地址: 0x552d60
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t*sub_552d60()
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t __saved_ebp
    void* eax_1 = __security_cookie ^ &__saved_ebp
    void* var_14 = eax_1
    int32_t* ecx = data_11e6050
    char var_31 = 0
    char const* const var_ec
    int32_t var_e8
    char const* const var_e4_1
    char* ecx_1
    
    if (ecx[1] == 0x1e)
        int32_t* result = sub_4981f0(ecx)
        int32_t edi_1 = 0
        int32_t* result_1 = result
        
        if (data_11e705c s<= 0)
        label_55315e:
            @__security_check_cookie@4(var_14 ^ &__saved_ebp)
            return result
        
        float var_74
        float var_68
        int128_t var_50
        float var_48
        float var_44
        int128_t var_30
        char ecx_3
        
        do
            void* eax_2
            int32_t edx_1
            eax_2, edx_1 = sub_54e110((&data_11e605c)[edi_1], nullptr)
            eax_1 = *(eax_2 + 4)
            void* eax_7
            int32_t* edx_2
            int128_t xmm0_7
            
            if (eax_1 == 1 || eax_1 == 4 || eax_1 == 5)
                int32_t* ecx_6 = *(eax_2 + 0x88)
                
                if (ecx_6 == 0)
                    var_e4_1 = "SizeToSource"
                    var_e8 = 0x7fe
                    var_ec = "d:\ax\trunk\ax2017\engine\editor\uieditor.cpp"
                    ecx_1 = "el.image"
                    goto label_553199
                
                sub_4d0720(ecx_6)
                float eax_8
                int32_t edx_3
                eax_8, edx_3 = sub_48f600(*(eax_2 + 0x88))
                float xmm1_8 = *(eax_2 + 0x18) f+ *(eax_2 + 0x10)
                float xmm0_9 = *(eax_2 + 0x1c) f+ *(eax_2 + 0x14)
                var_68 = eax_8
                int32_t var_64_1 = edx_3
                edx_2 = &var_68
                var_48 = xmm1_8 * 0.5f
                var_44 = xmm0_9 * 0.5f
                void var_c0
                xmm0_7 = *sub_4829a0(&var_c0, edx_2, &var_50:8, &var_c0)
                void var_d0
                eax_7 = &var_d0
                goto label_552f60
            
            if (eax_1 == 2)
                void var_90
                int128_t* eax_4 = sub_4c9850(&var_90, edx_1, *(eax_2 + 0xc8), &var_90)
                float var_80
                edx_2 = &var_80
                uint128_t xmm6_1 = zx.o(*(eax_2 + 0xac))
                float xmm5_2 = _mm_cvtepi32_ps(zx.o(*(eax_2 + 0xb0)))
                float xmm2_1[0x4] = *eax_4
                float xmm6_2 = _mm_cvtepi32_ps(xmm6_1)
                float xmm1_3 = _mm_shuffle_ps(xmm2_1, xmm2_1, 0xaa) f- xmm2_1
                float xmm0_3 =
                    _mm_shuffle_ps(xmm2_1, xmm2_1, 0xff) - _mm_shuffle_ps(xmm2_1, xmm2_1, 0x55)
                float xmm0_5 = *(eax_2 + 0x1c) f+ *(eax_2 + 0x14)
                float xmm1_6 = (*(eax_2 + 0x18) f+ *(eax_2 + 0x10)) * 0.5f
                float xmm6_4 = xmm6_2 * xmm0_3 + (xmm6_2 - 1f) f* *(eax_2 + 0xb4)
                var_80 = xmm5_2 * xmm1_3 + (xmm5_2 - 1f) f* *(eax_2 + 0xb8)
                float var_7c_1 = xmm6_4
                float var_78 = xmm1_6
                var_74 = xmm0_5 * 0.5f
                void var_a0
                xmm0_7 = *sub_4829a0(&var_a0, edx_2, &var_78, &var_a0)
                void var_b0
                eax_7 = &var_b0
            label_552f60:
                var_30 = xmm0_7
                *(eax_2 + 0x10) = *sub_4be600(eax_7, edx_2, &var_30, eax_7)
                ecx_3 = var_31
            else if (eax_1 != 6)
                ecx_3 = var_31
            else
                ecx_3 = 1
                var_31 = 1
            
            result = data_11e705c
            edi_1 += 1
        while (edi_1 s< result)
        
        if (ecx_3 == 0)
            goto label_55315e
        
        int32_t edi_2 = 0
        
        if (result s<= 0)
            goto label_55315e
        
        while (true)
            result = sub_54e110((&data_11e605c)[edi_2], &var_74)
            
            if (result[1] == 6)
                float edx_5 = var_74
                int32_t eax_12 = result[0x1a]
                int32_t esi_2 = *result_1
                int128_t xmm0_12 = *(edx_5 i* 0x178 + esi_2 + 0x188)
                int32_t ecx_13 = edx_5 i+ 2
                var_50 = xmm0_12
                
                if (eax_12 != 0xffffffff)
                    int32_t edx_7 = edx_5 i+ eax_12
                    
                    if (ecx_13 s<= edx_7)
                        eax_1 = ecx_13 * 0x178 + 0x14 + esi_2
                        
                        while (true)
                            int32_t xmm0_17 = var_50.d
                            
                            if (var_48 f< xmm0_17)
                                break
                            
                            int32_t xmm2_4 = var_50:4.d
                            
                            if (var_44 f< xmm2_4)
                                break
                            
                            int32_t xmm4_5 = *(eax_1 - 4)
                            
                            if (xmm4_5 f<= xmm0_17)
                                var_30.d = xmm4_5
                            else
                                var_30.d = xmm0_17
                            
                            int32_t xmm0_18 = *(eax_1 + 4)
                            
                            if (var_48 f<= xmm0_18)
                                var_30:8.d = xmm0_18
                            else
                                var_30:8.d = var_48
                            
                            int32_t xmm0_19 = *eax_1
                            
                            if (xmm0_19 f<= xmm2_4)
                                var_30:4.d = xmm0_19
                            else
                                var_30:4.d = xmm2_4
                            
                            int32_t xmm0_20 = *(eax_1 + 8)
                            
                            if (var_44 f<= xmm0_20)
                                var_30:0xc.d = xmm0_20
                            else
                                var_30:0xc.d = var_44
                            
                            xmm0_12 = var_30
                            ecx_13 += 1
                            eax_1 += 0x178
                            var_50 = xmm0_12
                            
                            if (ecx_13 s> edx_7)
                                goto label_553146
                        
                    label_55316a:
                        var_e4_1 = "RectUnion"
                        var_e8 = 0xdb
                        var_ec = "d:\ax\trunk\ax2017\engine\rect.cpp"
                        ecx_1 = "RectIsNormalized(r0)"
                        break
                else
                    int32_t edx_6 = result_1[2]
                    
                    if (ecx_13 s< edx_6)
                        eax_1 = ecx_13 * 0x178 + 0x14 + esi_2
                        
                        while (true)
                            int32_t xmm0_13 = var_50.d
                            
                            if (var_48 f< xmm0_13)
                                break
                            
                            int32_t xmm2_3 = var_50:4.d
                            
                            if (var_44 f< xmm2_3)
                                break
                            
                            int32_t xmm4_4 = *(eax_1 - 4)
                            int32_t var_70_1
                            
                            var_70_1 = xmm4_4 f<= xmm0_13 ? xmm4_4 : xmm0_13
                            
                            float xmm0_14 = *(eax_1 + 4)
                            
                            var_68 = var_48 <= xmm0_14 ? xmm0_14 : var_48
                            
                            int32_t xmm0_15 = *eax_1
                            
                            if (xmm0_15 f<= xmm2_3)
                                int32_t var_6c_2 = xmm0_15
                            else
                                int32_t var_6c_1 = xmm2_3
                            
                            int32_t xmm0_16 = *(eax_1 + 8)
                            
                            if (var_44 f<= xmm0_16)
                                int32_t var_64_3 = xmm0_16
                            else
                                float var_64_2 = var_44
                            
                            xmm0_12 = var_70_1.o
                            ecx_13 += 1
                            eax_1 += 0x178
                            var_50 = xmm0_12
                            
                            if (ecx_13 s>= edx_6)
                                goto label_553146
                        
                        goto label_55316a
                
            label_553146:
                *(result + 0x10) = xmm0_12
            
            edi_2 += 1
            
            if (edi_2 s>= data_11e705c)
                goto label_55315e
    else
        var_e4_1 = "UIDefGet"
        var_e8 = 0x126
        var_ec = "d:\ax\trunk\ax2017\engine\uidef.cpp"
        ecx_1 = "ptr->assetType == ASSET_TYPE_UI"
    
    label_553199:
    sub_489550(eax_1, &data_5b2591, ecx_1, var_ec, var_e8, var_e4_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
