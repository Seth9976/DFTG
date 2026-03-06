// 函数名称: sub_49f240
// 虚拟地址: 0x49f240
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

struct InputHitResult::UI2HitResult::VTable** __convention("regparm")sub_49f240(int32_t arg1, void* arg2, struct InputHitResult::UI2HitResult::VTable** arg3, int32_t arg4, int32_t* arg5, char arg6)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* ebx = arg5
    int32_t var_2c = data_63c748
    int32_t var_28 = data_63c74c
    float xmm0 = *(arg2 + 0x1080)
    xmm0 - 0f
    int32_t var_24 = data_63c750
    int32_t var_20 = data_63c754
    int32_t* var_3c = ebx
    struct InputHitResult::UI2HitResult::VTable* const var_30 =
        &UI2HitResult::`vftable'{for `InputHitResult'}
    int32_t eax_5
    eax_5:1.b =
        (xmm0 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0, 0f) ? 1 : 0) << 2 | (xmm0 < 0f ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (p_1)
        xmm0 - 1f
        eax_5:1.b =
            (xmm0 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm0, 1f) ? 1 : 0) << 2 | (xmm0 < 1f ? 1 : 0)
        bool p_3 = unimplemented  {test ah, 0x44}
        
        if (not(p_3) || *(arg2 + 0xfbc) != 0)
            int32_t eax_6 = *(arg2 + 0xe94)
            char const* const var_84_1
            int32_t var_80_1
            char const* const var_7c_5
            char* ecx_9
            
            if (eax_6 u> 4)
                var_7c_5 = "UI2HitTest"
                var_80_1 = 0x12ee
            label_49f8b2:
                ecx_9 = "Halt"
                var_84_1 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
            label_49f8c1:
                sub_489550(eax_6, &data_5b2591, ecx_9, var_84_1, var_80_1, var_7c_5)
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            int32_t var_58
            char var_38_1
            float var_1c
            
            switch (eax_6)
                case 0
                    eax_6.b = arg6
                    var_38_1 = eax_6.b
                case 1, 3, 4
                    int128_t* eax_8 = sub_4bc3a0(arg2 + 0x54c, *(data_114e818 + 0x2c), &var_1c)
                    float xmm4_1 = *(arg2 + 0x10a0)
                    float xmm3_1 = *(arg2 + 0x10a4)
                    float xmm2_3 = *(arg2 + 0x10a8) - xmm4_1
                    float xmm1_2 = *(arg2 + 0x10ac) - xmm3_1
                    float var_6c = *eax_8 * xmm2_3 + xmm4_1
                    float var_68_1 = *(eax_8 + 4) * xmm1_2 + xmm3_1
                    float xmm2_4 = *(arg2 + 0x1020)
                    float var_64_1 = *(eax_8 + 8) * xmm2_3 + xmm4_1
                    float xmm1_3[0x4] = *(arg2 + 0xfa0)
                    float var_60_1 = *(eax_8 + 0xc) * xmm1_2 + xmm3_1
                    var_1c = xmm1_3[0] * xmm2_4
                    float var_18_1 = _mm_shuffle_ps(xmm1_3, xmm1_3, 0x55) * xmm2_4
                    float var_14_1 = _mm_shuffle_ps(xmm1_3, xmm1_3, 0xaa) * xmm2_4
                    float var_10_1 = _mm_shuffle_ps(xmm1_3, xmm1_3, 0xff) * xmm2_4
                    var_6c.o = *sub_4be980(&var_58, &var_1c, &var_6c, &var_58)
                    eax_6 = sub_41f010(&var_6c, ebx)
                    char ecx_3 = arg6
                    
                    if (eax_6.b == 0)
                        ecx_3 = 1
                    
                    var_38_1 = ecx_3
                    arg6 = ecx_3
                case 2
                    eax_6.b = 0
                    arg6 = 0
                    var_38_1 = eax_6.b
            
            if (*(arg2 + 0xfec) == 3)
                int32_t xmm0_22 = *(arg2 + 0x10a0)
                int32_t xmm3_2 = *(arg2 + 0x10a8)
                int32_t xmm2_5
                int32_t xmm4_2
                
                if (not(xmm3_2 f< xmm0_22))
                    xmm4_2 = *(arg2 + 0x10a4)
                    xmm2_5 = *(arg2 + 0x10ac)
                
                if (xmm3_2 f< xmm0_22 || xmm2_5 f< xmm4_2)
                    var_7c_5 = "RectContains"
                    var_80_1 = 0xa4
                    var_84_1 = "d:\ax\trunk\ax2017\engine\rect.cpp"
                    ecx_9 = "RectIsNormalized(r)"
                    goto label_49f8c1
                
                int32_t xmm1_6 = *ebx
                
                if (not(xmm1_6 f< xmm0_22))
                    int32_t xmm0_23 = ebx[1]
                    
                    if (not(xmm0_23 f< xmm4_2) && not(xmm3_2 f< xmm1_6) && not(xmm2_5 f< xmm0_23))
                        float xmm1_7 = *(data_114e818 + 0x2c)
                        float xmm0_25 = xmm1_7 f- *(arg2 + 0x368)
                        sub_4be3e0(arg2 + 0x2dc, xmm1_7 f- *(arg2 + 0x364))
                        int32_t eax_12
                        int32_t ecx_6
                        int32_t edx_2
                        eax_12, ecx_6, edx_2 = sub_4be3e0(arg2 + 0x318, xmm0_25)
                        float xmm0_27 = xmm0_25 f- *(arg2 + 0x358)
                        float xmm1_10 = *(arg2 + 0x354)
                        
                        if (not(0 f> xmm0_27))
                            xmm1_10 f- 0
                            eax_12:1.b = (xmm1_10 == 0f ? 1 : 0) << 6
                                | (is_unordered.d(xmm1_10, 0f) ? 1 : 0) << 2 | (xmm1_10 < 0f ? 1 : 0)
                            bool p_5 = unimplemented  {test ah, 0x44}
                            
                            if (p_5 && not(xmm0_27 >= xmm1_10))
                                int32_t var_7c_3 = ecx_6
                                sub_41f710(eax_12, edx_2, *(arg2 + 0x35c), (zx.o(0)).d, xmm1_10, 
                                    xmm0_27, zx.o(0), 1f)
                
                goto label_49f4d7
            
        label_49f4d7:
            
            if (var_38_1 == 0)
                float xmm1_11[0x4] = *(arg2 + 0xfa0)
                float xmm2_7 = *(arg2 + 0x1020)
                var_1c = xmm1_11[0] * xmm2_7
                float var_18_2 = _mm_shuffle_ps(xmm1_11, xmm1_11, 0x55) * xmm2_7
                float var_14_2 = _mm_shuffle_ps(xmm1_11, xmm1_11, 0xaa) * xmm2_7
                float var_10_2 = _mm_shuffle_ps(xmm1_11, xmm1_11, 0xff) * xmm2_7
                int128_t xmm0_37 = *sub_4be980(&var_58, &var_1c, arg2 + 0x10a0, &var_58)
                eax_6 = *(arg2 + 0xfb8)
                var_1c.o = xmm0_37
                
                if (eax_6 u> 6)
                    var_7c_5 = "UI2AcceptsHover"
                    var_80_1 = 0x1262
                    goto label_49f8b2
                
                switch (eax_6)
                    case 0
                        int32_t eax_15 = *(arg2 + 0xfec)
                        bool cond:1_1
                        
                        if (eax_15 == 2)
                            cond:1_1 = *(arg2 + 0xf50) == 0
                        label_49f651:
                            
                            if (not(cond:1_1))
                                goto label_49f65c
                        else
                            if (eax_15 == 3)
                                cond:1_1 = *(arg2 + 0xf8c) == 0
                                goto label_49f651
                            
                            if (eax_15 == 5)
                                goto label_49f65c
                    case 1, 2, 3, 5, 6
                    label_49f65c:
                        
                        if (sub_41f010(&var_1c, ebx) != 0)
                            var_2c = *(arg2 + 0x1410)
                            var_28 = arg4
                            int32_t eax_37 = *(arg2 + 0xe90)
                            
                            if (eax_37 == 0)
                                eax_37 = *(arg2 + 0x1094)
                            
                            var_24 = eax_37
                            
                            if (sub_49f1d0(arg2) == 0 || data_63e5f4 == 0)
                                if (sub_49f140(arg2) == 0)
                                    var_20 = 3
                                else
                                    int32_t eax_40
                                    eax_40.b = *(arg2 + 0xfb8) == 6
                                    var_20 = eax_40 + 1
                            else
                                var_20 = 4
            
            int32_t var_54
            int32_t var_50
            int32_t var_4c
            int32_t var_48
            
            if (*(arg2 + 0xfb8) != 4)
                int32_t i = 0
                
                if (*(arg2 + 0x1190) s> 0)
                    do
                        sub_49e970(arg2, i)
                        sub_49f240(arg4 << 8 | i, ebx, arg6.d)
                        int32_t eax_25 = (*var_58)()
                        int32_t eax_27 = (*data_63c744)()
                        char eax_28
                        
                        if (eax_25 == eax_27)
                            eax_28 = eax_25(&var_58, &data_63c744)
                        
                        if (eax_25 != eax_27 || eax_28 == 0)
                            int32_t eax_30 = var_30->vFunc_0()
                            int32_t eax_32 = (*data_63c744)()
                            char eax_33
                            
                            if (eax_30 == eax_32)
                                eax_33 = eax_30(&var_30, &data_63c744)
                            
                            int32_t ecx_13
                            
                            if (eax_30 != eax_32 || eax_33 == 0)
                                ecx_13 = var_4c
                                
                                if (ecx_13 u>= var_24)
                                    goto label_49f6f1
                            else
                                ecx_13 = var_4c
                            label_49f6f1:
                                var_2c = var_54
                                var_28 = var_50
                                var_24 = ecx_13
                                var_20 = var_48
                        
                        ebx = var_3c
                        i += 1
                    while (i s< *(arg2 + 0x1190))
            
            if (*(arg2 + 0xf58) != 0)
                int32_t edi_2 = 0
                void* esi_1 = arg2 + 0x13ec
                
                while (true)
                    int32_t edx_7 = *esi_1
                    
                    if (edx_7 == 0)
                        break
                    
                    uint32_t eax_45 = zx.d(edx_7.w)
                    
                    if (eax_45 u< data_63e5ac)
                        void* ecx_18 = eax_45 * 0x1418 + data_63e5a8
                        
                        if (*(ecx_18 + 0x1410) == edx_7)
                            if (ecx_18 == 0)
                                break
                            
                            sub_49f240(arg4 << 8 | edi_2, ebx, arg6.d)
                            int32_t eax_50 = (*var_58)()
                            int32_t eax_52 = (*data_63c744)()
                            char eax_53
                            
                            if (eax_50 == eax_52)
                                eax_53 = eax_50(&var_58, &data_63c744)
                            
                            if (eax_50 != eax_52 || eax_53 == 0)
                                int32_t eax_55 = var_30->vFunc_0()
                                int32_t eax_57 = (*data_63c744)()
                                char eax_58
                                
                                if (eax_55 == eax_57)
                                    eax_58 = eax_55(&var_30, &data_63c744)
                                
                                int32_t ecx_21
                                
                                if (eax_55 != eax_57 || eax_58 == 0)
                                    ecx_21 = var_4c
                                    
                                    if (ecx_21 u>= var_24)
                                        goto label_49f7eb
                                else
                                    ecx_21 = var_4c
                                label_49f7eb:
                                    var_2c = var_54
                                    var_28 = var_50
                                    var_24 = ecx_21
                                    var_20 = var_48
                            
                            edi_2 += 1
                            esi_1 += 4
                            
                            if (edi_2 s>= 5)
                                break
                            
                            ebx = var_3c
                            continue
                    
                    sub_489550(eax_45, &data_5b2591, "DataArrayTryToGet(id) != NULL", 
                        "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6d, 
                        "DataArray<struct UI2>::DataArrayGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
            
            arg3[1] = var_2c
            arg3[2] = var_28
            arg3[3] = var_24
            *arg3 = &UI2HitResult::`vftable'{for `InputHitResult'}
            arg3[4] = var_20
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return arg3
    
    *arg3 = &UI2HitResult::`vftable'{for `InputHitResult'}
    arg3[1] = data_63c748
    arg3[2] = data_63c74c
    arg3[3] = data_63c750
    arg3[4] = data_63c754
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return arg3
}
