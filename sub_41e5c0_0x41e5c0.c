// 函数名称: sub_41e5c0
// 虚拟地址: 0x41e5c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_41e5c0(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4, char arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59ce40
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_214 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t result
    result.b = arg5
    float var_144 = data_620d84
    arg3[0x2fc].b = result.b
    
    if (result.b != 0)
        int32_t eax_3 = arg3[0x258]
        int32_t ecx = 1
        arg3[0x2ef] = 0x32c9
        
        if (eax_3 s> 1)
            ecx = eax_3
        
        sub_4a8830(eax_3, &data_62b0ac, arg2, ecx, 0xffffffff)
        float xmm3_2 = var_144 * 4f
        float xmm4_2 = arg3[0x2f5] f+ xmm3_2
        int32_t xmm2_1
        
        if (0 f<= xmm4_2)
            xmm2_1 = _mm_min_ss(0x3f800000, xmm4_2)
        else
            xmm2_1 = (zx.o(0)).d
        
        arg3[0x2f5] = xmm2_1
        float xmm2_3 = arg3[0x2f7] f- xmm3_2
        int32_t xmm1_1
        
        if (0 f<= xmm2_3)
            xmm1_1 = _mm_min_ss(0x3f800000, xmm2_3)
        else
            xmm1_1 = (zx.o(0)).d
        
        arg3[0x2f7] = xmm1_1
        int32_t* eax_4 = sub_4baa30(arg2, "tblCards")
        float xmm0_1 = 1f
        uint32_t (* ecx_3)[0x4] = nullptr
        int32_t edx = arg3[0x258]
        arg3[0x2f8] = eax_4
        uint32_t (* var_140_1)[0x4] = nullptr
        float var_1a8_1 = 1f
        
        if (edx s> 0)
            eax_4 = arg3
            void* esi_1 = &arg3[0x259]
            int32_t* var_138_1 = eax_4
            
            do
                if (*eax_4 != 0)
                    void var_208
                    int128_t* eax_5 = sub_4baf40(&var_208, ecx_3, edx)
                    float xmm1_2[0x4] = *eax_5
                    int128_t var_64_1 = eax_5[1]
                    int128_t xmm0_3 = eax_5[2]
                    float var_74[0x4] = xmm1_2
                    int128_t var_54_1 = xmm0_3
                    int128_t var_44_1 = eax_5[3]
                    var_1a8_1 = _mm_shuffle_ps(xmm1_2, xmm1_2, 0xff)
                    int128_t var_34_1 = eax_5[4]
                    int128_t var_24_1 = eax_5[5]
                    
                    if (arg3[0x2f4] == var_140_1)
                        eax_5.b = 1
                        var_144 = arg3[0x2f5]
                    else if (arg3[0x2f6] != var_140_1)
                        eax_5.b = 0
                    else
                        float xmm0_8 = arg3[0x2f7]
                        xmm0_8 - 0f
                        eax_5:1.b = (xmm0_8 == 0f ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_8, 0f) ? 1 : 0) << 2 | (xmm0_8 < 0f ? 1 : 0)
                        bool p_2 = unimplemented  {test ah, 0x44}
                        
                        if (not(p_2))
                            eax_5.b = 0
                        else
                            var_144 = xmm0_8
                            eax_5.b = 1
                    
                    void* eax_14
                    
                    if (eax_5.b == 0)
                        void* eax_15 = data_aca1ec
                        uint128_t xmm0_26 = zx.o(*(eax_15 + 0x14))
                        uint128_t xmm1_7 = zx.o(*(eax_15 + 0x18))
                        int32_t var_188 = 0
                        int32_t xmm0_27 = _mm_cvtepi32_ps(xmm0_26)
                        int32_t var_184_1 = 0
                        int32_t var_198 = 0
                        int32_t var_194_1 = 0
                        int32_t* var_22c_2 = var_138_1[1]
                        int32_t xmm1_8 = _mm_cvtepi32_ps(xmm1_7)
                        int32_t var_180_1 = xmm0_27
                        int32_t var_17c_1 = xmm1_8
                        int32_t var_190_1 = xmm0_27
                        int32_t var_18c_1 = xmm1_8
                        sub_49ec40(var_138_1, esi_1, "cardset card", var_22c_2, &var_198, &var_188, 
                            0x32c9, var_140_1, 1)
                        sub_4a8700(*esi_1, &var_74)
                        eax_14 = data_6d00d0
                        
                        if (eax_14 == 0)
                            sub_489550(eax_14, &data_5b2591, "gGameSettings.localSettings", 
                                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x24c, 
                                "GetLocalSettings")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_489700()
                            noreturn
                    else
                        if (var_138_1[2] != 0)
                            int32_t var_218_2 = 0xffffffff
                            sub_4a8570(arg4)
                        
                        float xmm0_10 = var_144 - 0f
                        float var_14c_1
                        
                        if (not(0 f< xmm0_10))
                            var_14c_1 = 0f
                        else if (xmm0_10 < 1f)
                            var_14c_1 = sub_41f140(4, xmm0_10, (zx.o(0)).d, 1f)
                        else
                            var_14c_1 = 1f
                        
                        int128_t* eax_7 = sub_4baf40(&var_208, 0, 1)
                        int128_t var_d4 = *eax_7
                        int128_t var_c4_1 = eax_7[1]
                        int128_t var_b4_1 = eax_7[2]
                        int128_t var_a4_1 = eax_7[3]
                        int128_t var_94_1 = eax_7[4]
                        int128_t var_84_1 = eax_7[5]
                        int128_t* eax_9 = sub_424d40(&var_208, &var_d4, &var_74, var_14c_1, &var_208)
                        int32_t var_168 = 0
                        int128_t xmm0_18 = *eax_9
                        int32_t var_164_1 = 0
                        int32_t var_178 = 0
                        int128_t var_134 = xmm0_18
                        int32_t var_174_1 = 0
                        int128_t var_124_1 = eax_9[1]
                        int128_t var_114_1 = eax_9[2]
                        int128_t var_104_1 = eax_9[3]
                        int128_t var_f4_1 = eax_9[4]
                        void* eax_10 = data_aca1ec
                        int128_t var_e4_1 = eax_9[5]
                        uint128_t xmm1_5 = zx.o(*(eax_10 + 0x18))
                        int32_t xmm0_25 = _mm_cvtepi32_ps(zx.o(*(eax_10 + 0x14)))
                        int32_t eax_11
                        eax_11.b = var_14c_1 > 0.5f
                        int32_t var_160_1 = xmm0_25
                        int32_t xmm1_6 = _mm_cvtepi32_ps(xmm1_5)
                        int32_t var_15c_1 = xmm1_6
                        int32_t var_170_1 = xmm0_25
                        int32_t var_16c_1 = xmm1_6
                        sub_49ec40(var_138_1, esi_1, "cardset card", var_138_1[1], &var_178, &var_168, 
                            eax_11 + 0x36ba, var_140_1, 1)
                        sub_4a8700(*esi_1, &var_134)
                        eax_14 = data_6d00d0
                        
                        if (eax_14 == 0)
                            sub_489550(eax_14, &data_5b2591, "gGameSettings.localSettings", 
                                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x24c, 
                                "GetLocalSettings")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_489700()
                            noreturn
                    
                    if (*(eax_14 + 0x24) == 1)
                        int32_t var_218_3 = 0xffffffff
                        sub_4a8570(*esi_1)
                    
                    int32_t var_218_4 = 0xffffffff
                    *var_138_1
                    sub_4a8570(*esi_1)
                    sub_4a4740(*esi_1, 0, data_620d84)
                    ecx_3 = var_140_1
                    eax_4 = var_138_1
                else if (*esi_1 != 0)
                    sub_49a5a0(esi_1)
                    *esi_1 = 0
                    ecx_3 = var_140_1
                    eax_4 = var_138_1
                
                edx = arg3[0x258]
                ecx_3 += 1
                eax_4 = &eax_4[4]
                var_140_1 = ecx_3
                esi_1 += 4
                var_138_1 = eax_4
            while (ecx_3 s< edx)
            
            xmm0_1 = var_1a8_1
        
        if (arg3[0x2f9].b != 0)
            int32_t ecx_15 = arg3[0x2f8]
            
            if (ecx_15 == 0)
                sub_489550(eax_4, &data_5b2591, "id != DATAID_NULL", 
                    "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6c, 
                    "DataArray<struct UI2>::DataArrayGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            uint32_t esi_2 = zx.d(ecx_15.w)
            int32_t edx_12
            
            if (esi_2 u< data_63e5ac)
                edx_12 = data_63e5a8
                eax_4 = esi_2 * 0x1418
            
            if (esi_2 u>= data_63e5ac || *(eax_4 + edx_12 + 0x1410) != ecx_15)
                sub_489550(eax_4, &data_5b2591, "DataArrayTryToGet(id) != NULL", 
                    "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6d, 
                    "DataArray<struct UI2>::DataArrayGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            int32_t ecx_16 = esi_2 * 0x1418
            float var_154 = *(ecx_16 + edx_12 + 0xe48)
            float eax_19 = *(ecx_16 + edx_12 + 0xe4c)
            char var_139
            float eax_21
            float edx_14
            eax_21, edx_14 = sub_41e4f0(&var_139, &arg3[0x2fa], &var_154, xmm0_1 * 6000f, &var_139)
            float xmm0_29 = var_154
            float xmm2_5 = eax_21
            xmm0_29 - xmm2_5
            eax_21:1.b = (xmm0_29 == xmm2_5 ? 1 : 0) << 6
                | (is_unordered.d(xmm0_29, xmm2_5) ? 1 : 0) << 2 | (xmm0_29 < xmm2_5 ? 1 : 0)
            bool p_4 = unimplemented  {test ah, 0x44}
            bool p_6
            
            if (not(p_4))
                eax_19 - edx_14
                eax_21:1.b = (eax_19 == edx_14 ? 1 : 0) << 6
                    | (is_unordered.d(eax_19, edx_14) ? 1 : 0) << 2 | (eax_19 < edx_14 ? 1 : 0)
                p_6 = unimplemented  {test ah, 0x44}
            
            if (p_4 || p_6)
                int32_t ecx_18 = arg3[0x2f8]
                
                if (ecx_18 == 0)
                    sub_489550(eax_21, &data_5b2591, "id != DATAID_NULL", 
                        "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6c, 
                        "DataArray<struct UI2>::DataArrayGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                int32_t edx_15
                
                if (esi_2 u< data_63e5ac)
                    edx_15 = data_63e5a8
                    eax_21 = esi_2 * 0x1418
                
                if (esi_2 u>= data_63e5ac || *(eax_21 i+ edx_15 + 0x1410) != ecx_18)
                    sub_489550(eax_21, &data_5b2591, "DataArrayTryToGet(id) != NULL", 
                        "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6d, 
                        "DataArray<struct UI2>::DataArrayGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                void* esi_4 = esi_2 * 0x1418 + edx_15
                *(esi_4 + 0xe48) = xmm2_5
                *(esi_4 + 0xe4c) = edx_14
                sub_4b99a0(esi_4)
                sub_4a3580(esi_4)
            
            if (var_139 != 0)
                arg3[0x2f9].b = 0
        
        result = sub_4baa30(arg2, "tblCards")
        
        if (result != 0)
            uint32_t edx_17 = zx.d(result.w)
            int32_t esi_5
            
            if (edx_17 u< data_63e5ac)
                esi_5 = data_63e5a8
            
            if (edx_17 u>= data_63e5ac || *(edx_17 * 0x1418 + esi_5 + 0x1410) != result)
                sub_489550(result, &data_5b2591, "DataArrayTryToGet(id) != NULL", 
                    "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6d, 
                    "DataArray<struct UI2>::DataArrayGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            result = edx_17 * 0x1418
            *(arg3 + 0xbc0) = *(result + esi_5 + 0x10a0)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
