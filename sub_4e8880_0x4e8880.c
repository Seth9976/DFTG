// 函数名称: sub_4e8880
// 虚拟地址: 0x4e8880
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_4e8880(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t arg4, int32_t arg5, int32_t arg6, void* arg7)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a0f0b
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_e8 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg2[1] != 0x12)
        sub_489550(arg7, &data_5b2591, "assetPtr->assetType == ASSET_TYPE_FONT", 
            "d:\ax\trunk\ax2017\engine\assetutils.cpp", 0x2e6, "FontGetDef")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    void* eax_4 = sub_4981f0(arg2)
    
    if (*(eax_4 + 0x14) != 0)
        void* edi_1 = *(eax_4 + 0x18)
        
        if (*(edi_1 + 0x10) != 0)
            void* ecx_2 = *sub_48f5c0(*(edi_1 + 8))
            
            if (*(edi_1 + 0x10) != *(ecx_2 + 0x30))
                char* eax_7 = arg2[8]
                char* const ecx_3 = &data_5b2591
                
                if (eax_7 != 0)
                    ecx_3 = eax_7
                
                char* const var_ec_1 = ecx_3
                sub_4892e0("didn't find asset in atlas forcing a reimport %s")
                sub_4d0ff0(sub_4d0720(arg2), 1, arg2, 0)
    
    void* var_64
    int32_t* var_ec_2 = &var_64
    int32_t* result_1
    sub_4889e0(&result_1, arg2, 0x12)
    int32_t var_8_1 = 0
    int32_t i = 0
    void* eax_9 = data_114e814
    void* edx_1 = var_64
    int32_t i_1 = 0
    float xmm0 = *(eax_9 + 0x20)
    float xmm0_1 = *(eax_9 + 0x24)
    
    if (*(edx_1 + 0x14) s> 0)
        int32_t edi_2 = arg6
        int32_t esi_1 = arg5
        
        do
            int32_t* ebx_3 = i * 0x30 + *(edx_1 + 0x18)
            float var_70_1 = 0f
            int32_t* eax_10 = ebx_3[2]
            
            if (eax_10 == 0)
                eax_10 = *ebx_3
            
            if (eax_10[1] != 3)
                sub_489550(eax_10, &data_5b2591, "assetPtr->assetType == ASSET_TYPE_TEXTURE", 
                    "d:\ax\trunk\ax2017\engine\texture.h", 0x86, "TextureGetDef")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            int32_t* ecx_8 = *sub_4981f0(eax_10)
            
            if (ecx_8 == 0)
                break
            
            int32_t eax_12 = *ecx_8
            edx_1 = var_64
            double xmm0_4[0x2] =
                _mm_cvtepi32_pd(zx.q(eax_12)) f+ *((eax_12 u>> 0x1f << 3) + &data_60cbc0)
            int32_t eax_14 = ecx_8[1]
            float xmm1_1 = 1f / _mm_cvtpd_ps(xmm0_4)
            double xmm0_7 = _mm_cvtepi32_pd(zx.q(eax_14))
            bool cond:1_1 = *(edx_1 + 0x14) != 2
            int32_t eax_16 = arg4
            float xmm1_2 = 1f / _mm_cvtpd_ps(xmm0_7 f+ *((eax_14 u>> 0x1f << 3) + &data_60cbc0))
            
            if (not(cond:1_1) && i_1 == 0)
                eax_16 = esi_1
            
            bool cond:2_1 = ebx_3[0xa].b != 0
            int32_t var_98 = data_63c284
            void* var_94_1 = data_63c288
            
            if (not(cond:2_1))
                var_98 = eax_16
                int32_t var_94_2 = edi_2
            
            void* ebx_4 = arg7
            void* ecx_10
            ecx_10.b = *arg7
            
            while (ecx_10.b != 0)
                void* eax_17
                
                if (ecx_10.b u>= 0x80)
                    eax_17.b = ecx_10.b
                    eax_17.b &= 0xe0
                    
                    if (eax_17.b != 0xc0)
                        eax_17.b = ecx_10.b
                        eax_17.b &= 0xf0
                        
                        if (eax_17.b != 0xe0)
                            ecx_10.b &= 0xf8
                            
                            if (ecx_10.b != 0xf0)
                                sub_489550(eax_17, &data_5b2591, "!Xutf8_is_invalid_lead_char(str)", 
                                    "d:\ax\trunk\ax2017\engine\xutf8.cpp", 0x213, "Xutf8_peek_next")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_489700()
                                noreturn
                
                void* var_5c = ebx_4
                uint32_t eax_18 = sub_4eae80(&var_5c)
                int32_t* eax_19 = sub_4e87f0(eax_18, ebx_3, var_64, eax_18)
                void* var_60
                
                if (eax_19 != 0)
                    float xmm6_1 = eax_19[3]
                    float xmm7_1 = eax_19[4]
                    float xmm2_2 = xmm6_1 * xmm1_1
                    float xmm0_11 = xmm7_1 * xmm1_2
                    float xmm7_2 = xmm7_1 f- eax_19[2]
                    float xmm6_2 = xmm6_1 f- eax_19[1]
                    float xmm3_2 = eax_19[1] f* xmm1_1
                    float xmm1_4 = eax_19[2] f* xmm1_2
                    float var_c0_1 = xmm2_2
                    float var_30_1 = xmm2_2
                    float var_20_1 = xmm2_2
                    float var_bc_1 = xmm0_11
                    float var_24_1 = xmm0_11
                    float var_1c_1 = xmm0_11
                    float xmm2_5 = eax_19[5] f+ var_70_1 + xmm0
                    float xmm0_13 = eax_19[6] f+ xmm0_1
                    float var_c8 = xmm3_2
                    float var_38 = xmm3_2
                    float var_28_1 = xmm3_2
                    float xmm4_1 = arg3[2]
                    float xmm5_1 = arg3[4]
                    float var_c4_1 = xmm1_4
                    float var_34_1 = xmm1_4
                    float xmm6_4 = xmm6_2 + xmm2_5 + xmm0
                    float xmm7_4 = xmm7_2 + xmm0_13 + xmm0_1
                    float var_2c_1 = xmm1_4
                    float xmm6_5 = arg3[1]
                    float xmm7_5 = *arg3
                    float xmm1_6 = xmm6_5 * xmm0_13
                    float xmm3_4 = xmm7_5 * xmm2_5
                    float xmm7_6 = xmm7_5 * xmm6_4
                    float xmm6_6 = xmm6_5 * xmm7_4
                    var_5c = xmm3_4 + xmm1_6 + xmm4_1
                    float xmm3_8 = xmm5_1 * xmm0_13
                    float xmm3_9 = arg3[3]
                    float xmm3_10 = xmm3_9 * xmm6_4
                    float xmm0_15 = xmm3_9 * xmm2_5
                    float xmm0_16 = arg3[5]
                    float xmm2_8 = xmm0_15 + xmm3_8 + xmm0_16
                    void* var_58 = var_5c
                    float var_54_1 = xmm2_8
                    float xmm2_12 = xmm7_6 + xmm1_6
                    var_60 = xmm2_12
                    void* xmm1_8 = xmm2_12 + xmm4_1
                    var_60 = xmm1_8
                    void* var_50_1 = xmm1_8
                    float xmm2_15 = xmm3_8 + xmm3_10 + xmm0_16
                    float var_4c_1 = xmm2_15
                    float xmm1_11 = xmm3_4 + xmm6_6 + xmm4_1
                    float xmm5_2 = xmm5_1 * xmm7_4
                    float xmm1_14 = xmm0_15 + xmm5_2 + xmm0_16
                    float var_40_1 = xmm7_6 + xmm6_6 + xmm4_1
                    float var_48_1 = xmm1_11
                    float var_44_1 = xmm1_14
                    float var_3c_1 = xmm5_2 + xmm3_10 + xmm0_16
                    
                    if (*(data_114e814 + 0x38) == 0)
                        sub_4bef10(&var_98, &var_38, &var_58, &var_98, 0, eax_10, nullptr)
                    else
                        xmm2_8 - xmm2_15
                        int32_t eax_21
                        eax_21:1.b = (xmm2_8 == xmm2_15 ? 1 : 0) << 6
                            | (is_unordered.d(xmm2_8, xmm2_15) ? 1 : 0) << 2
                            | (xmm2_8 < xmm2_15 ? 1 : 0)
                        bool p_2 = unimplemented  {test ah, 0x44}
                        
                        if (p_2)
                            sub_4bef10(&var_98, &var_38, &var_58, &var_98, 0, eax_10, nullptr)
                        else
                            void* xmm0_17 = var_5c
                            xmm0_17 f- xmm1_11
                            eax_21:1.b = (xmm0_17 f== xmm1_11 ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_17, xmm1_11) ? 1 : 0) << 2
                                | (xmm0_17 f< xmm1_11 ? 1 : 0)
                            bool p_4 = unimplemented  {test ah, 0x44}
                            
                            if (p_4)
                                sub_4bef10(&var_98, &var_38, &var_58, &var_98, 0, eax_10, nullptr)
                            else
                                void* var_d8 = xmm0_17
                                void* var_d0_1 = var_60
                                float var_d4_1 = xmm2_8
                                float var_cc_1 = xmm1_14
                                sub_4c0210(&var_c8, &var_d8, eax_10, &var_c8, &var_98, nullptr)
                    
                    char ecx_16 = *ebx_4
                    var_5c = ebx_4
                    
                    if (ecx_16 u>= 0x80)
                        float eax_23
                        eax_23.b = ecx_16
                        eax_23.b &= 0xe0
                        
                        if (eax_23.b != 0xc0)
                            eax_23.b = ecx_16
                            eax_23.b &= 0xf0
                            
                            if (eax_23.b != 0xe0 && (ecx_16 & 0xf8) != 0xf0)
                                sub_489550(eax_23, &data_5b2591, "!Xutf8_is_invalid_lead_char(str)", 
                                    "d:\ax\trunk\ax2017\engine\xutf8.cpp", 0x219, "Xutf8_next")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_489700()
                                noreturn
                    
                    sub_4eae80(&var_5c)
                    ebx_4 = var_5c
                    char ecx_19 = *ebx_4
                    
                    if (ecx_19 u>= 0x80)
                        uint32_t eax_25
                        eax_25.b = ecx_19
                        eax_25.b &= 0xe0
                        
                        if (eax_25.b != 0xc0)
                            eax_25.b = ecx_19
                            eax_25.b &= 0xf0
                            
                            if (eax_25.b != 0xe0 && (ecx_19 & 0xf8) != 0xf0)
                                sub_489550(eax_25, &data_5b2591, "!Xutf8_is_invalid_lead_char(str)", 
                                    "d:\ax\trunk\ax2017\engine\xutf8.cpp", 0x213, "Xutf8_peek_next")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_489700()
                                noreturn
                    
                    var_5c = ebx_4
                    eax_17 = sub_4eae80(&var_5c)
                    var_5c = eax_17
                    var_60 = eax_19[7]
                    
                    if (eax_17 != 0)
                        int32_t j = eax_19[8]
                        
                        if (j != 0xffffffff)
                            eax_17 = var_64
                            
                            if (j s< *(eax_17 + 0x20))
                                eax_17 = *(eax_17 + 0x28) + j * 0xc
                                
                                do
                                    edi_2 = arg6
                                    
                                    if (*eax_17 != eax_18)
                                        break
                                    
                                    esi_1 = arg5
                                    
                                    if (*(eax_17 + 4) == var_5c)
                                        var_60 += *(eax_17 + 8)
                                        break
                                    
                                    j += 1
                                    eax_17 += 0xc
                                while (j s< *(var_64 + 0x20))
                    
                    edx_1 = var_64
                    var_70_1 = _mm_cvtepi32_ps(zx.o(var_60)) f+ *(edx_1 + 0x10) + var_70_1
                else
                    char ecx_13 = *ebx_4
                    var_60 = ebx_4
                    
                    if (ecx_13 u>= 0x80)
                        eax_19.b = ecx_13
                        eax_19.b &= 0xe0
                        
                        if (eax_19.b != 0xc0)
                            eax_19.b = ecx_13
                            eax_19.b &= 0xf0
                            
                            if (eax_19.b != 0xe0 && (ecx_13 & 0xf8) != 0xf0)
                                sub_489550(eax_19, &data_5b2591, "!Xutf8_is_invalid_lead_char(str)", 
                                    "d:\ax\trunk\ax2017\engine\xutf8.cpp", 0x219, "Xutf8_next")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_489700()
                                noreturn
                    
                    eax_17, ecx_10 = sub_4eae80(&var_60)
                    ebx_4 = var_60
                    edx_1 = var_64
                ecx_10.b = *ebx_4
            
            i = i_1 + 1
            i_1 = i
        while (i s< *(edx_1 + 0x14))
    
    int32_t* result = result_1
    
    if (result != 0)
        result[7] -= 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
