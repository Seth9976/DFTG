// 函数名称: sub_480dd0
// 虚拟地址: 0x480dd0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_480dd0(int32_t* arg1, float arg2 @ xmm1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    int32_t* ebx = arg1
    
    if (ebx[0x18e] != 0)
        if (ebx[0xc3] != 4)
            int128_t var_cc
            int128_t* eax_6
            int32_t edx
            int32_t edx_2
            eax_6, edx_2 = sub_481680(&var_cc, edx, arg1, &var_cc)
            int128_t var_12c = *eax_6
            int128_t var_11c = eax_6[1]
            int128_t var_10c = eax_6[2]
            int128_t var_fc = eax_6[3]
            int128_t var_ec = eax_6[4]
            int128_t var_dc = eax_6[5]
            int128_t var_6c
            int128_t* eax_8
            int32_t edx_3
            eax_8, edx_3 = sub_481680(&var_6c, edx_2, &ebx[0x41], &var_6c)
            var_cc = *eax_8
            int128_t var_bc = eax_8[1]
            int128_t var_ac = eax_8[2]
            int128_t var_9c = eax_8[3]
            int128_t var_8c = eax_8[4]
            int128_t var_7c = eax_8[5]
            void var_194
            int128_t* eax_10
            int32_t* edx_4
            eax_10, edx_4 = sub_481680(&var_194, edx_3, &ebx[0x82], &var_194)
            int32_t ecx_4 = ebx[0xc3]
            int128_t xmm1 = *eax_10
            int128_t xmm3 = eax_10[1]
            int128_t xmm4 = eax_10[2]
            int128_t xmm5 = eax_10[3]
            int128_t xmm6 = eax_10[4]
            int128_t xmm7 = eax_10[5]
            var_6c = xmm1
            int128_t var_5c = xmm3
            int128_t var_4c = xmm4
            int128_t var_3c = xmm5
            int128_t var_2c = xmm6
            int128_t var_1c = xmm7
            char const* const var_1b0_1
            int32_t var_1ac_1
            char const* const var_1a8_4
            char var_12d_1
            char* ecx_7
            
            switch (ecx_4)
                case 0, 1
                    float xmm0_18 = var_cc.d f- var_6c.d
                    float xmm1_2 = var_cc:4.d f- var_6c:4.d
                    
                    if (25f <= xmm1_2 * xmm1_2 + xmm0_18 * xmm0_18)
                        eax_10 = data_6d00d0
                        var_12d_1 = 0
                        
                        if (eax_10 == 0)
                            var_1a8_4 = "GetLocalSettings"
                            var_1ac_1 = 0x24c
                            var_1b0_1 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamesettings.cpp"
                            ecx_7 = "gGameSettings.localSettings"
                            goto label_48124f
                        
                        int32_t eax_11 = *(eax_10 + 8)
                        
                        if (eax_11 != 0 && eax_11 != 1)
                            eax_10 = eax_11 - 2
                        
                        if (eax_11 == 0 || eax_11 == 1 || eax_11 == 2)
                            int32_t mxcsr
                            int16_t x87control
                            eax_10 = sub_424d40(&var_194, &var_6c, &var_cc, 
                                arg2 * 50f * 0.100000001f + 1f - fconvert.s(__libm_sse2_exp_precise(
                                    mxcsr, x87control, _mm_cvtps_pd(arg2 * -0.100000001f * 50f))), 
                                &var_194)
                            goto label_4811c0
                        
                        var_1a8_4 = "MoveToExp"
                        var_1ac_1 = 0x7c
                        var_1b0_1 = "d:\ax\trunk\ax2017\jams\roll\code\cardmotion.cpp"
                        goto label_481245
                    
                    edx_4.b = 1
                    var_12d_1 = 1
                label_4811c0:
                    xmm1 = *eax_10
                    xmm3 = eax_10[1]
                    xmm4 = eax_10[2]
                    xmm5 = eax_10[3]
                    xmm6 = eax_10[4]
                    xmm7 = eax_10[5]
                case 2
                    xmm1 = *eax_10
                    var_12d_1 = 0
                    xmm3 = eax_10[1]
                    xmm4 = eax_10[2]
                    xmm5 = eax_10[3]
                    xmm6 = eax_10[4]
                    xmm7 = eax_10[5]
                label_480fb2:
                    edx_4.b = var_12d_1
                    goto label_480fbd
                case 3
                    edx_4.b = 0
                    ebx[0x1d1] = ebx[0x1d1] f+ arg2
                label_480fbd:
                    eax_10.b = edx_4.b
                    __builtin_memcpy(&ebx[0x41], &ebx[0x82], 0x104)
                    *(ebx + 0x108) = xmm1
                    ebx[0x41] = 0
                    *(ebx + 0x118) = xmm3
                    *(ebx + 0x128) = xmm4
                    *(ebx + 0x138) = xmm5
                    *(ebx + 0x148) = xmm6
                    *(ebx + 0x158) = xmm7
                    @__security_check_cookie@4(var_8 ^ &__saved_ebp)
                    return eax_10
                case 5
                    eax_10 = data_6d00d0
                    
                    if (eax_10 == 0)
                        var_1a8_4 = "GetLocalSettings"
                        var_1ac_1 = 0x24c
                        var_1b0_1 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamesettings.cpp"
                        ecx_7 = "gGameSettings.localSettings"
                        goto label_48124f
                    
                    int32_t eax_14 = *(eax_10 + 8)
                    float xmm0_26
                    
                    if (eax_14 == 0)
                        xmm0_26 = 2f
                    else if (eax_14 == 1)
                        xmm0_26 = 3f
                    else
                        eax_10 = eax_14 - 2
                        
                        if (eax_14 != 2)
                            var_1a8_4 = "MoveToSCurve"
                            var_1ac_1 = 0x4a
                            var_1b0_1 = "d:\ax\trunk\ax2017\jams\roll\code\cardmotion.cpp"
                            goto label_481245
                        
                        xmm0_26 = 6f
                    
                    float xmm0_28 = xmm0_26 * arg2 f+ ebx[0x1d1]
                    ebx[0x1d1] = xmm0_28
                    
                    if (xmm0_28 < 1f)
                        float xmm3_4 = (zx.o(0)).d
                        float xmm0_29 = xmm0_28 - 0f
                        var_12d_1 = 0
                        
                        if (not(0 f>= xmm0_29))
                            if (xmm0_29 < 1f)
                                xmm3_4 = sub_41f140(4, xmm0_29, (zx.o(0)).d, 1f)
                            else
                                xmm3_4 = 1f
                        
                        eax_10 = sub_424d40(&var_194, &var_6c, &var_12c, xmm3_4, &var_194)
                        goto label_4811c0
                    
                    edx_4.b = 1
                    var_12d_1 = 1
                default
                    var_1a8_4 = "MoveComponent<struct RollLocation>::MoveUpdate"
                    var_1ac_1 = 0xe8
                    var_1b0_1 = "d:\ax\trunk\ax2017\jams\roll\code\cardmotion.h"
                label_481245:
                    ecx_7 = "Halt"
                label_48124f:
                    sub_489550(eax_10, &data_5b2591, ecx_7, var_1b0_1, var_1ac_1, var_1a8_4)
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
            
            if (var_12d_1 == 0)
                goto label_480fb2
            
            sub_481280(ebx)
            char* eax_16
            eax_16.b = var_12d_1
            @__security_check_cookie@4(var_8 ^ &__saved_ebp)
            return eax_16
        
        float xmm0_1 = arg2 * 1000f
        float xmm0_2
        
        if (0 f<= xmm0_1)
            xmm0_2 = xmm0_1 + 0.5f
        else
            xmm0_2 = xmm0_1 - 0.5f
        
        ebx[0xc4] -= int.d(xmm0_2)
        
        if (not(0 f< _mm_cvtepi32_ps(zx.o(ebx[0xc4]))))
            __builtin_memcpy(&ebx[0x82], &ebx[0x41], 0x104)
            ebx[0x18e] -= 1
            sub_579a90(&ebx[0x82], &ebx[0xc5], ebx[0x18e] * 0x10c)
            char* eax_4
            eax_4.b = 1
            @__security_check_cookie@4(var_8 ^ &__saved_ebp)
            return eax_4
    
    int32_t eax_1
    eax_1.b = 0
    @__security_check_cookie@4(var_8 ^ &__saved_ebp)
    return eax_1
}
