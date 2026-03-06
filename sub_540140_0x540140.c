// 函数名称: sub_540140
// 虚拟地址: 0x540140
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_540140(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_5a2f83
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_14c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int128_t var_80
    __builtin_memset(&var_80, 0, 0x24)
    int32_t var_14_1 = 0
    int32_t eax_4 = sub_53ff10(arg2, &var_80)
    int32_t* i_2 = nullptr
    int32_t* i_5 = nullptr
    int32_t* i_4 = nullptr
    int32_t var_9c = 0
    int32_t var_98 = 0
    var_14_1.b = 1
    
    if (arg1[1] != 0x12)
        sub_489550(eax_4, &data_5b2591, "assetPtr->assetType == ASSET_TYPE_FONT", 
            "d:\ax\trunk\ax2017\engine\assetutils.cpp", 0x2e6, "FontGetDef")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    void* eax_5 = sub_4981f0(arg1)
    void* var_84 = eax_5
    int32_t var_8c = 0
    int32_t ecx_2 = *(eax_5 + 0x14)
    int32_t result
    
    if (ecx_2 s<= 0)
    label_5405bf:
        int32_t* i = i_2
        
        if (i != 0)
            do
                int32_t* i_6 = i
                i = i[0x10]
                sub_53fc40(i_6, &var_80)
            while (i != 0)
            
            eax_5 = var_84
            ecx_2 = *(eax_5 + 0x14)
        
        int32_t i_1 = 0
        
        if (ecx_2 s> 0)
            int32_t ecx_21 = 0
            
            do
                void* eax_33 = *(eax_5 + 0x18)
                void* eax_34 = eax_33 + ecx_21
                
                if (eax_33 != neg.d(ecx_21))
                    int32_t var_3c
                    *(eax_34 + 8) = var_3c
                    int32_t var_38
                    *(eax_34 + 0x10) = var_38
                
                eax_5 = var_84
                i_1 += 1
                ecx_21 += 0x30
            while (i_1 s< *(eax_5 + 0x14))
            
            i_2 = i_5
        
        sub_53ff10(&var_80, arg2)
        sub_4c7a40(arg1)
        var_14_1.b = 3
        
        while (i_2 != 0)
            int32_t* i_7 = i_2
            i_2 = i_2[0x10]
            sub_4984f0(i_7, 0x48)
        
        sub_540740(&var_80)
        result = 2
    else
        int32_t var_50
        int32_t edi = var_50
        int32_t edx_1 = 0
        int32_t var_88 = 0
        
        while (true)
            int32_t** esi_2 = *(eax_5 + 0x18) + edx_1
            int32_t** var_ac_1 = esi_2
            int32_t var_c8
            void* eax_6 = sub_53fa70(eax_5, &var_c8, *esi_2, edi)
            int32_t var_90_1 = 0
            
            if (esi_2[6] s> 0)
                int32_t ecx_4 = 0
                int32_t var_c0
                int32_t xmm0_2 = _mm_cvtepi32_ps(zx.o(var_c0))
                int32_t var_94_1 = 0
                
                while (true)
                    void* ecx_5 = ecx_4 + esi_2[8]
                    float xmm1_1 = *(ecx_5 + 0x10)
                    
                    if (xmm0_2 f< xmm1_1)
                        sub_489550(eax_6, &data_5b2591, "pGlyph->rectGlyph.y1 <= fontImageSpec.height", 
                            "d:\ax\trunk\ax2017\engine\editor\atlasmaker.cpp", 0x3a2, 
                            "AtlasMakerPlaceAssetFont")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_489700()
                        noreturn
                    
                    int32_t** var_108 = esi_2
                    int32_t var_104_1 = var_8c
                    void* var_100_1 = ecx_5
                    int64_t var_e4_1
                    __builtin_memset(&var_e4_1, 0, 0x1c)
                    float xmm1_2
                    
                    if (0f <= xmm1_1)
                        xmm1_2 = xmm1_1 + 0.5f
                    else
                        xmm1_2 = xmm1_1 - 0.5f
                    
                    float xmm0_3 = *(ecx_5 + 0xc)
                    float xmm0_4
                    
                    if (0f <= xmm0_3)
                        xmm0_4 = xmm0_3 + 0.5f
                    else
                        xmm0_4 = xmm0_3 - 0.5f
                    
                    float xmm0_5 = *(ecx_5 + 8)
                    float xmm0_6
                    
                    if (0 f<= xmm0_5)
                        xmm0_6 = xmm0_5 + 0.5f
                    else
                        xmm0_6 = xmm0_5 - 0.5f
                    
                    float xmm0_7 = *(ecx_5 + 4)
                    float xmm0_8
                    
                    if (0 f<= xmm0_7)
                        xmm0_8 = xmm0_7 + 0.5f
                    else
                        xmm0_8 = xmm0_7 - 0.5f
                    
                    int32_t var_114_1 = int.d(xmm0_6)
                    int32_t var_110_1 = int.d(xmm0_4)
                    int32_t var_10c_1 = int.d(xmm1_2)
                    int128_t xmm0_9 = int.d(xmm0_8).o
                    float xmm0_10 = *(ecx_5 + 0x14)
                    float xmm0_11
                    
                    if (0 f<= xmm0_10)
                        xmm0_11 = xmm0_10 + 0.5f
                    else
                        xmm0_11 = xmm0_10 - 0.5f
                    
                    float xmm0_12 = *(ecx_5 + 0x18)
                    int32_t var_ec_1 = int.d(xmm0_11)
                    float xmm0_13
                    
                    if (0f <= xmm0_12)
                        xmm0_13 = xmm0_12 + 0.5f
                    else
                        xmm0_13 = xmm0_12 - 0.5f
                    
                    int32_t var_e8_1 = int.d(xmm0_13)
                    sub_53fda0(&var_108)
                    int32_t eax_11 = xmm0_9.d
                    int32_t esi_5 = xmm0_9:8.d - eax_11
                    int32_t edi_3 = xmm0_9:0xc.d - xmm0_9:4.d
                    
                    if (esi_5 == 0 || edi_3 == 0)
                        int128_t var_fc_2 = data_5d2c2c
                    else
                        int32_t var_b8
                        int32_t edx_5 = eax_11 * sub_5233d0(var_b8)
                        int32_t var_bc
                        int32_t var_134_1 = var_bc
                        int32_t var_130_1 = var_b8
                        int32_t var_13c_1 = esi_5
                        int32_t var_140 = var_c8 + var_bc * xmm0_9:4.d + edx_5
                        int32_t var_138_1 = edi_3
                        int32_t var_128_1 = esi_5
                        int32_t var_124_1 = edi_3
                        int32_t var_11c_1 = var_50
                        int32_t eax_18 = sub_5234e0(esi_5, var_50)
                        int32_t var_120_1 = eax_18
                        void* eax_20 = sub_4c2e40(sub_5235a0(eax_18, edi_3, esi_5, var_50))
                        void* var_12c = eax_20
                        sub_523b10(&var_140, &var_12c)
                        int64_t var_d4_1
                        var_d4_1.d = eax_20
                        int64_t var_dc
                        var_dc.d = esi_5
                        var_dc:4.d = edi_3
                        int32_t eax_22 = sub_53f6d0(&var_dc, &var_80)
                        
                        if (eax_22 == 1)
                            var_14_1.b = 2
                            int32_t* i_3 = i_4
                            
                            while (i_3 != 0)
                                int32_t* i_8 = i_3
                                i_3 = i_3[0x10]
                                sub_4984f0(i_8, 0x48)
                            
                            sub_540740(&var_80)
                            result = 1
                            break
                        
                        int32_t var_cc
                        
                        if (eax_22 != 2)
                            if (eax_22 != 0)
                                sub_489550(eax_22, &data_5b2591, "Halt", 
                                    "d:\ax\trunk\ax2017\engine\editor\atlasmaker.cpp", 0x3cd, 
                                    "AtlasMakerPlaceAssetFont")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_489700()
                                noreturn
                            
                            int32_t eax_28 = var_d4_1.d
                            
                            if (eax_28 != 0)
                                _aligned_free_base(eax_28)
                            
                            int32_t eax_29 = var_d4_1:4.d
                            var_d4_1.d = 0
                            var_e4_1.d = eax_29
                            var_e4_1:4.d = var_cc
                        else
                            int32_t* eax_23 = sub_498440(0x1c)
                            eax_23[3] += 1
                            int32_t* ecx_16 = *eax_23
                            
                            if (ecx_16 == 0)
                                sub_4982d0(eax_23)
                                ecx_16 = *eax_23
                            
                            int128_t xmm0_14 = var_dc.o
                            *eax_23 = *ecx_16
                            int128_t var_70_1
                            void* eax_25 = var_70_1:0xc.d
                            *ecx_16 = xmm0_14
                            ecx_16[4] = var_cc
                            ecx_16[5] = 0
                            ecx_16[6] = eax_25
                            int32_t var_60_1
                            
                            if (eax_25 == 0)
                                var_60_1 += 1
                                var_70_1:8.d = ecx_16
                                var_70_1:0xc.d = ecx_16
                                var_e4_1.d = var_d4_1:4.d
                                var_e4_1:4.d = var_cc
                            else
                                var_60_1 += 1
                                *(eax_25 + 0x14) = ecx_16
                                var_70_1:0xc.d = ecx_16
                                var_e4_1.d = var_d4_1:4.d
                                var_e4_1:4.d = var_cc
                    
                    eax_6 = sub_5441b0(&i_4, &var_108)
                    esi_2 = var_ac_1
                    int32_t edx_11 = var_90_1 + 1
                    ecx_4 = var_94_1 + 0x24
                    var_90_1 = edx_11
                    var_94_1 = ecx_4
                    xmm0_2 = _mm_cvtepi32_ps(zx.o(var_c0))
                    
                    if (edx_11 s>= esi_2[6])
                        edi = var_50
                        goto label_540582
                
                break
            
        label_540582:
            int32_t eax_30 = var_c8
            
            if (eax_30 != 0)
                _aligned_free_base(eax_30)
            
            int32_t eax_32 = var_8c + 1
            edx_1 = var_88 + 0x30
            var_8c = eax_32
            ecx_2 = *(var_84 + 0x14)
            eax_5 = var_84
            var_88 = edx_1
            
            if (eax_32 s>= ecx_2)
                i_2 = i_4
                i_5 = i_2
                goto label_5405bf
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
