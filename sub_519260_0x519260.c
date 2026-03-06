// 函数名称: sub_519260
// 虚拟地址: 0x519260
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

BOOLsub_519260()
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_5a2452
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t esi
    int32_t var_9ac = esi
    int32_t var_9b4 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    BOOL result = data_1151ad8
    
    if (result != 0)
        int32_t eax_3 = *(result + 4)
        
        if (eax_3 == 0x1e)
            result = sub_550f00()
        else if (eax_3 == 0x22)
            result = sub_4b2540()
        else
            int128_t result_3
            char var_8fc
            int128_t var_858
            float var_830
            int32_t* result_1
            
            if (eax_3 == 0x1d)
                void var_9a8
                int128_t* eax_4 = sub_424c90(&var_9a8)
                int128_t var_8d8_1 = *eax_4
                int128_t var_8c8_1 = eax_4[1]
                int128_t var_8b8_1 = eax_4[2]
                int128_t var_8a8_1 = eax_4[3]
                int128_t var_898_1 = eax_4[4]
                int128_t var_888_1 = eax_4[5]
                int32_t ecx_2 = sub_489e40(&var_830)
                void* eax_6
                
                if ((*(data_114e840 + 0xc) & 1) != 0)
                    eax_6 = data_aca1f0
                    var_8fc = 1
                    eax_6.b = *(eax_6 + 0x18)
                
                if ((*(data_114e840 + 0xc) & 1) == 0 || eax_6.b == 0)
                    var_8fc = 0
                
                int32_t var_9c4_1 = ecx_2
                data_126b8c0
                int128_t* eax_7 = sub_4cb5d0(esi, &var_858, &var_830, (var_8fc.d).b, data_620d84, 
                    nullptr, nullptr, nullptr)
                int128_t result_2 = *eax_7
                int32_t eax_8 = eax_7[1].d
                result = result_2
                result_3 = result_2
                
                if (result == 2)
                    char* var_9b8_2 = &var_8fc
                    sub_4889e0(&result_1, data_126b8bc, 0x1d)
                    int32_t var_14_1 = 0
                    int32_t* edi_1 = var_8fc.d
                    int32_t var_828[0x201]
                    int32_t eax_9 = sub_5098c0(edi_1, &var_828)
                    int32_t esi_1 = result_3:0xc.d
                    
                    if (esi_1 s>= eax_9)
                        sub_489550(eax_9, &data_5b2591, "item < numLayers", 
                            "d:\ax\trunk\ax2017\engine\materialfndef.cpp", 0x135, 
                            "MaterialFn_ItemClicked")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_489700()
                        noreturn
                    
                    int32_t esi_2 = esi_1 * 2
                    
                    if (data_1516758 s> *(*fsbase->ThreadLocalStoragePointer + 4))
                        __Init_thread_header(&data_1516758)
                        
                        if (data_1516758 == 0xffffffff)
                            var_14_1.b = 1
                            data_151675c = sub_4c8f00(data_12bad2c, "imgVisible")
                            __Init_thread_footer(&data_1516758)
                    
                    if (eax_8 == data_151675c && var_828[esi_2 * 2] == 0)
                        var_824
                        int32_t edx_2 = *(&var_824 + (esi_2 << 3)) * 0x58
                        int32_t ecx_8 = *edi_1
                        int32_t eax_13
                        eax_13.b = *(edx_2 + ecx_8 + 4) == 0
                        *(edx_2 + ecx_8 + 4) = eax_13.b
                    
                    result = result_1
                    edi_1[4] = 0
                    
                    if (result != 0)
                        *(result + 0x1c) -= 1
            else if (eax_3 != 0x20)
                void* edi_2 = data_114e818
                
                if (edi_2 == 0)
                    sub_489550(eax_3, &data_5b2591, "gpGameData", "d:\ax\trunk\ax2017\engine\game.h", 
                        0x45, "GetGameData")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                int32_t* esi_3 = *(edi_2 + 0xc)
                var_8fc.d = 0
                void* eax_14 = sub_4fcd30(esi_3, &var_8fc)
                
                if (eax_14.b != 0)
                    do
                        sub_4f9820(var_8fc.d, data_620d84)
                        eax_14 = sub_4fcd30(esi_3, &var_8fc)
                    while (eax_14.b != 0)
                    
                    edi_2 = data_114e818
                
                if (edi_2 == 0)
                    sub_489550(eax_14, &data_5b2591, "gpGameData", "d:\ax\trunk\ax2017\engine\game.h", 
                        0x45, "GetGameData")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                int32_t* edi_3 = *(edi_2 + 0x10)
                void* esi_4 = nullptr
                
                while (true)
                    void* ecx_12
                    
                    if (esi_4 != 0)
                        ecx_12 = *edi_3
                        esi_4 += 0x7c
                    else
                        esi_4 = *edi_3
                        ecx_12 = esi_4
                    
                    void* eax_16 = edi_3[1] * 0x7c + ecx_12
                    
                    if (esi_4 u>= eax_16)
                        break
                    
                    while ((*(esi_4 + 0x78) & 0xffff0000) == 0)
                        esi_4 += 0x7c
                        
                        if (esi_4 u>= eax_16)
                            goto label_519531
                    
                    sub_501f70(esi_4, data_1151b84)
                
            label_519531:
                int32_t* eax_17 = data_114e818
                
                if (eax_17 == 0)
                    sub_489550(eax_17, &data_5b2591, "gpGameData", "d:\ax\trunk\ax2017\engine\game.h", 
                        0x45, "GetGameData")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                int32_t* eax_18 = *eax_17
                void* esi_5 = nullptr
                var_8fc.d = eax_18
                
                while (true)
                    void* ecx_14
                    
                    if (esi_5 != 0)
                        ecx_14 = *eax_18
                        esi_5 += 0x6c
                    else
                        esi_5 = *eax_18
                        ecx_14 = esi_5
                    
                    void* eax_20 = eax_18[1] * 0x6c + ecx_14
                    
                    if (esi_5 u>= eax_20)
                        break
                    
                    while (true)
                        if ((*(esi_5 + 0x68) & 0xffff0000) != 0)
                            int32_t* ecx_19 = *(esi_5 + 0x2c)
                            
                            if (ecx_19 != 0)
                                sub_4f2980(ecx_19)
                            
                            int32_t* i = *(esi_5 + 0x38)
                            eax_18 = var_8fc.d
                            
                            if (i == 0)
                                break
                            
                            do
                                int32_t* i_1 = i
                                i = i[4]
                                sub_4dcba0(esi_5, i_1)
                            while (i != 0)
                            
                            eax_18 = var_8fc.d
                            break
                        
                        esi_5 += 0x6c
                        
                        if (esi_5 u>= eax_20)
                            goto label_519594
                
            label_519594:
                result = sub_547160()
                
                if (data_1151aec == 0)
                    int32_t eax_22 = *(data_1151ad0 + 0x20)
                    int128_t var_840
                    
                    if (eax_22 == 1)
                        result = sub_489e40(&var_830)
                        
                        if (result.b != 0)
                            result = data_1151ad0
                            float xmm1_12 = var_830
                            float result_4 = result_1
                            float xmm2_9 = xmm1_12 f- *(result + 0x44)
                            float xmm3_3 = result_4 f- *(result + 0x48)
                            *(result + 0x48) = result_4
                            *(result + 0x44) = xmm1_12
                            xmm2_9 f- 0
                            result:1.b = (xmm2_9 == 0f ? 1 : 0) << 6
                                | (is_unordered.d(xmm2_9, 0f) ? 1 : 0) << 2 | (xmm2_9 < 0f ? 1 : 0)
                            bool p_2 = unimplemented  {test ah, 0x44}
                            bool p_4
                            
                            if (not(p_2))
                                xmm3_3 f- 0
                                result:1.b = (xmm3_3 == 0f ? 1 : 0) << 6
                                    | (is_unordered.d(xmm3_3, 0f) ? 1 : 0) << 2 | (xmm3_3 < 0f ? 1 : 0)
                                p_4 = unimplemented  {test ah, 0x44}
                            
                            if (p_2 || p_4)
                                void var_940
                                int64_t* eax_30 = sub_4dafc0(&var_940)
                                void* ecx_29 = data_1151ad0
                                int128_t xmm1_13 = *eax_30
                                int64_t xmm0_25 = eax_30[2]
                                var_840 = xmm1_13
                                var_830.q = xmm0_25
                                var_840.d = xmm1_13 f- *(ecx_29 + 0x58)
                                var_840:4.d = var_840:4.d f- *(ecx_29 + 0x5c)
                                int32_t ecx_30 = *(ecx_29 + 0x40)
                                var_840:8.d = var_840:8.d f- *(ecx_29 + 0x60)
                                
                                if (ecx_30 != 0)
                                    result = data_1151ad0
                                    int64_t var_870_2 = *(result + 0x4c)
                                    
                                    if (ecx_30 != 1 && ecx_30 != 2 && ecx_30 != 3)
                                        sub_489550(result, &data_5b2591, "Halt", 
                                            "d:\ax\trunk\ax2017\engine\editor\editmode.cpp", 0x1cb, 
                                            "sEditModeFindManipulatorPosition")
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_489700()
                                        noreturn
                                else
                                    result = sub_518de0(&var_840, &var_858:0xc)
                    else if (eax_22 == 2)
                        int32_t edx_4
                        result, edx_4 = sub_489e40(&var_830)
                        
                        if (result.b != 0)
                            int32_t var_868_1 = 0
                            float var_848_1 = 1f
                            result_1 = 0x3f800000
                            var_840:0xc.q = _mm_unpacklo_ps(0x3f800000, 0x3f800000)
                            int64_t* eax_26 = sub_482720(&result_3:8, edx_4, &var_840:0xc, &result_3:8)
                            int64_t xmm0_14 = *eax_26
                            int32_t var_85c_2 = eax_26[1].d
                            int32_t var_908 = 0
                            var_858 = 0.o
                            int32_t var_904_1 = 0
                            var_848_1.q = xmm0_14
                            int32_t var_900_1 = 0
                            int32_t var_14_2 = 2
                            sub_518cf0(&var_908)
                            int128_t var_8f8 = zx.o(0)
                            var_8f8:0xc.b = 1
                            var_8f8.d = &var_908
                            int128_t var_8e8_1 = zx.o(0)
                            
                            if (sub_4dd6c0(&var_858, &var_8f8) != 0)
                                goto label_519884
                            
                            float xmm4_1 = var_858:0xc.d
                            float var_844
                            float xmm2_7 = xmm4_1 * 0f + var_848_1 + var_844 * 0f
                            int32_t xmm0_20 = sub_426e40(xmm2_7)
                            float xmm1_9
                            float xmm7_1
                            
                            if (not(9.99999975e-06f f> xmm0_20))
                                xmm7_1 = var_858.d
                                xmm1_9 = xmm7_1 * 0f f+ var_858:4.d + var_858:8.d * 0f + -0f
                            
                            if (9.99999975e-06f f> xmm0_20 || 0 f< xmm1_9 * xmm2_7)
                                int32_t var_14_5 = 3
                                result = sub_436340(&var_908)
                            else
                                float xmm1_11 = (xmm1_9 / xmm2_7) ^ (data_60cca0.o).d
                                float xmm5_3 = var_844 * xmm1_11 f+ var_858:8.d
                                var_8e8_1.q = _mm_unpacklo_ps(xmm4_1 * xmm1_11 + xmm7_1, 
                                    var_848_1 * xmm1_11 f+ var_858:4.d)
                                var_8e8_1:8.d = xmm5_3
                            label_519884:
                                int32_t var_14_3 = 4
                                sub_436340(&var_908)
                                int32_t var_14_4 = 0xffffffff
                                void var_948
                                result = sub_519ac0(&var_948)
                    else
                        result = eax_22 - 3
                        
                        if (eax_22 == 3)
                            result = sub_519040()
                    void* ecx_15 = data_1151ad0
                    int32_t edx_3 = *(ecx_15 + 0x14)
                    
                    if (edx_3 != 0)
                        int64_t xmm0_8 = 0
                        float xmm3_1 = 1f / _mm_cvtepi32_ps(zx.o(edx_3))
                        *(ecx_15 + 0x4c) = _mm_unpacklo_ps(xmm0_8.d * xmm3_1, xmm0_8:4.d * xmm3_1)
                        result = 0f * xmm3_1
                        *(ecx_15 + 0x54) = result
            else
                result = sub_54a010()
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
