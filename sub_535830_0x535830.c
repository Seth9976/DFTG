// 函数名称: sub_535830
// 虚拟地址: 0x535830
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_535830(int32_t arg1, char* arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a2a03
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_49c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* esi = arg3
    void* var_3f8 = esi
    float xmm0 = sub_41e120(0.785398185f)
    int32_t xmm0_1 = data_aca244.d
    int32_t xmm0_2 = data_aca244:4
    float var_1f8 = 0f
    int32_t var_3f4 = *(esi + 0x10)
    int32_t eax_4 = *(esi + 0x18)
    float var_240 = 1f
    char var_214 = 0
    int32_t var_210 = 0x3f800000
    int64_t var_200 = 0
    
    if (eax_4 s> 0x14)
        sub_489550(eax_4, &data_5b2591, "20 >= config.PREFILTER_MIPS", 
            "d:\ax\trunk\ax2017\engine\iblimport.cpp", 0x2fd, "HDRCubeToPrefilter")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    char* var_3f0 = nullptr
    int32_t var_1f4[0x78]
    
    if (eax_4 s> 0)
    label_535900:
        int32_t edi_1 = 0
        int32_t var_400_1 = 0
        
        while (true)
            void var_250
            float var_20c
            sub_534100(&var_250, &var_20c, edi_1, &var_250)
            float var_204
            float var_414_1 = var_204 + var_1f8
            float var_208
            int64_t var_41c = _mm_unpacklo_ps(var_20c f+ var_200.d, var_200:4.d + var_208)
            void var_234
            int128_t* eax_8 = sub_51b1b0(&var_200, &var_41c, &var_234, &var_200, &var_250)
            int32_t var_4ac_1 = 0
            void* esi_3 = &var_3f0[*(esi + 0x18) * edi_1]
            int32_t* eax_9 = sub_4d2c50(eax_8, var_3f4, var_3f4, *(var_3f8 + 0x14), 3)
            void* edx_3 = data_114ec70
            var_1f4[esi_3] = eax_9
            *(edx_3 + 0x24c) += 1
            int32_t eax_11 = *(edx_3 + 0x24c) * 5
            *(edx_3 + (eax_11 << 2) + 0x10c) = 2
            *(edx_3 + (eax_11 << 2) + 0x114) = eax_9
            *(edx_3 + (eax_11 << 2) + 0x118) = 0
            *(edx_3 + (eax_11 << 2) + 0x11c) = 0
            sub_4ded00(eax_11, 0, eax_9, 0)
            
            if (data_aca614 != 0)
                data_aca614 = 0
                sub_4924f0(&data_aca234)
            
            (*(*data_114ec78 + 0x8c))(data_aca230)
            int32_t var_218
            int32_t var_254_1 = var_218
            int128_t var_230
            int128_t var_26c_1 = var_230
            int64_t var_220
            int64_t var_25c_1 = var_220
            void var_490
            int128_t* eax_14 = sub_4dab70(&var_490)
            int128_t xmm0_7 = *eax_14
            int128_t xmm2_4 = eax_14[2]
            int128_t xmm3_1 = eax_14[3]
            
            if (data_114e7d9 != 0)
                sub_489550(eax_14, &data_5b2591, "!gDraw3DData.submittingRenderItems", 
                    "d:\ax\trunk\ax2017\engine\draw3d.cpp", 0x364, "Draw3DSetView")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            data_aca4d4 = eax_14[1]
            data_aca4c4 = xmm0_7
            float xmm0_9 = xmm0 / var_240
            data_aca4e4 = xmm2_4
            float var_40c_1 = xmm0 * 2f
            data_aca4f4 = xmm3_1
            float var_410 = xmm0_9 + xmm0_9
            void var_450
            int128_t var_440 = *sub_4829a0(&var_450, &var_410, &data_5d27f8, &var_450)
            int32_t var_430_1 = xmm0_1
            int32_t var_42c_1 = xmm0_2
            sub_4924f0(&var_440)
            data_aca6a8 = data_5d2464
            __builtin_memcpy(&data_aca2bc, 
                "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
            "80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00"
            "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
                0x40)
            data_aca37c = data_aca4c4
            data_aca38c = data_aca4d4
            data_aca39c = data_aca4e4
            data_aca3ac = data_aca4f4
            float* eax_18 = sub_497e60(&var_490, &data_aca2bc, &data_aca37c, &var_490)
            data_aca2fc = *eax_18
            data_aca30c = *(eax_18 + 0x10)
            data_aca31c = *(eax_18 + 0x20)
            data_aca32c = *(eax_18 + 0x30)
            float* eax_20 = sub_497e60(&var_490, &data_aca37c, &data_aca3fc, &var_490)
            data_aca3bc = *eax_20
            data_aca3cc = *(eax_20 + 0x10)
            data_aca3dc = *(eax_20 + 0x20)
            data_aca3ec = *(eax_20 + 0x30)
            float* eax_22 = sub_497e60(&var_490, &data_aca2fc, &data_aca3fc, &var_490)
            data_aca33c = *eax_22
            data_aca34c = *(eax_22 + 0x10)
            data_aca35c = *(eax_22 + 0x20)
            data_aca36c = *(eax_22 + 0x30)
            int32_t eax_24 = *(var_3f8 + 0x18) - 1
            float xmm1_8 = _mm_cvtepi32_ps(zx.o(var_3f0))
            void* ThreadLocalStoragePointer = fsbase->ThreadLocalStoragePointer
            float xmm0_32 = _mm_cvtepi32_ps(zx.o(eax_24))
            void* esi_4 = *ThreadLocalStoragePointer
            int32_t eax_25 = data_1516800
            data_aca68c = xmm1_8 / xmm0_32
            
            if (eax_25 s> *(esi_4 + 4))
                __Init_thread_header(&data_1516800)
                
                if (data_1516800 == 0xffffffff)
                    int32_t var_8_1 = 0
                    data_1516804 = sub_4d0b50("sys/skybox.structure", 2)
                    int32_t var_8_2 = 0xffffffff
                    __Init_thread_footer(&data_1516800)
            
            int32_t eax_27 = data_1516808
            
            if (eax_27 s> *(esi_4 + 4))
                eax_27 = __Init_thread_header(&data_1516808)
                
                if (data_1516808 == 0xffffffff)
                    int32_t var_8_3 = 1
                    data_151680c = sub_4d0b50("sys/pbr/ibl_prefilter.material", 5)
                    int32_t var_8_4 = 0xffffffff
                    eax_27 = __Init_thread_footer(&data_1516808)
            
            int32_t* ecx_6 = data_1516804
            
            if (ecx_6[1] != 2)
                sub_489550(eax_27, &data_5b2591, "assetPtr->assetType == ASSET_TYPE_STRUCTURE", 
                    "d:\ax\trunk\ax2017\engine\assetutils.cpp", 0x312, "StructureDefGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            int32_t* eax_29 = sub_4981f0(ecx_6)
            int32_t** var_3fc_1 = eax_29
            
            if (*eax_29 == 0)
                sub_489550(eax_29, &data_5b2591, "pDefStructure->pStructureImportData", 
                    "d:\ax\trunk\ax2017\engine\iblimport.cpp", 0x32f, "HDRCubeToPrefilter")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            if (data_114e7d9 != 0)
                sub_489550(eax_29, &data_5b2591, "!gDraw3DData.submittingRenderItems", 
                    "d:\ax\trunk\ax2017\engine\drawmode.cpp", 0xd, "DrawModeSet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            int32_t ecx_7 = data_1150ee4
            
            if (ecx_7 != 2)
                if (ecx_7 != 0)
                    if (ecx_7 == 1)
                        void* eax_30 = data_114e814
                        
                        if (*(eax_30 + 0x1d) == 0)
                            sub_489550(eax_30, &data_5b2591, "gpSpriteAppData->spritesDrawing", 
                                "d:\ax\trunk\ax2017\engine\sprite.cpp", 0x25a, "SpriteDrawEnd")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_489700()
                            noreturn
                        
                        *(eax_30 + 0x1d) = 0
                        uint32_t (* eax_31)[0x4] = sub_4bed10()
                        
                        if (data_114e7d9 != 0)
                            sub_489550(eax_31, &data_5b2591, "!gDraw3DData.submittingRenderItems", 
                                "d:\ax\trunk\ax2017\engine\draw3d.cpp", 0xb09, "Draw3DBegin")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_489700()
                            noreturn
                        
                        eax_29 = var_3fc_1
                    else if (ecx_7 != 2)
                        sub_489550(eax_29, &data_5b2591, "Halt", 
                            "d:\ax\trunk\ax2017\engine\drawmode.cpp", 0x1f, "DrawModeSet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_489700()
                        noreturn
                
                data_1150ee4 = 2
            
            int32_t ecx_13 = data_114e7ec
            int32_t i = 0
            data_114e7ec = 2
            int32_t* edi_3 = *eax_29
            
            if (*edi_3 s> 0)
                do
                    void var_3ec
                    _memset(&var_3ec, 0, 0x180)
                    int32_t var_3a4_1 = data_151680c
                    int32_t var_3e8_1 = i * 0x150 + edi_3[2]
                    int32_t var_3a0_1 = arg4
                    int32_t var_284_1 = 0x3f800000
                    int128_t var_3e4
                    __builtin_memcpy(&var_3e4, 
                        "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
                    "00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
                    "00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
                    "80\x3f", 
                        0x40)
                    int128_t var_35c_1 = data_5d2464
                    
                    if (i == 0)
                        i = sub_48f690(&var_3ec)
                    
                    sub_48ffa0(&var_3ec)
                    i += 1
                    edi_3 = *var_3fc_1
                while (i s< *edi_3)
            
            data_114e7ec = ecx_13
            sub_4f5710(0)
            sub_4df310()
            esi = var_3f8
            edi_1 = var_400_1 + 1
            var_400_1 = edi_1
            
            if (edi_1 s>= 6)
                int32_t eax_38
                int32_t edx_5
                edx_5:eax_38 = sx.q(var_3f4)
                void* ecx_15 = &var_3f0[1]
                var_3f0 = ecx_15
                eax_4 = (eax_38 - edx_5) s>> 1
                var_3f4 = eax_4
                
                if (ecx_15 s< *(esi + 0x18))
                    goto label_535900
                
                break
    
    if (arg2 == 0)
        sub_489550(eax_4, &data_5b2591, "str", "d:\ax\trunk\ax2017\engine\xstring.cpp", 0x94, 
            "XString::XString")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    sub_48a2c0(&var_3f0, arg2)
    int32_t var_8_5 = 2
    int32_t eax_40
    int32_t ecx_18
    eax_40, ecx_18 = sub_48a670(&var_3f0, "_pre")
    int32_t var_4a0_5 = *(esi + 0x18)
    int32_t* result = sub_533d90(eax_40, &var_1f4, ecx_18)
    sub_4d1720(result)
    sub_4d0720(result)
    int32_t var_8_6 = 3
    
    if (data_aca1f4 != 0)
        char* eax_41 = var_3f0
        
        if (eax_41 != 0 && *eax_41 != 0)
            char* eax_42 = sub_48a080(&var_3f0)
            int32_t temp0_1 = *(eax_42 + 4)
            *(eax_42 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_4984f0(eax_42, *(eax_42 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
