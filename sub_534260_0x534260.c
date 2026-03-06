// 函数名称: sub_534260
// 虚拟地址: 0x534260
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_534260(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebx_2
    int32_t __saved_ebx_2
    int32_t __saved_ebx_1 = __saved_ebx_2
    int32_t __saved_ebp_2
    int32_t __saved_ebp_1 = __saved_ebp_2
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_5a28b8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t esi
    int32_t var_2c4 = esi
    int32_t edi
    int32_t var_2c8 = edi
    int32_t var_2cc = eax_2
    int32_t* esp_1 = &var_2cc
    fsbase->NtTib.ExceptionList = &ExceptionList
    float xmm0 = sub_41e120(0.785398185f)
    int32_t esi_1 = 0
    int32_t xmm0_1 = data_aca244.d
    int32_t xmm0_2 = data_aca244:4
    float var_70 = 1f
    char var_44 = 0
    int32_t var_40 = 0x3f800000
    int64_t var_30 = 0
    float var_28 = 0f
    int32_t var_228 = 0
    int32_t* eax_26
    
    while (true)
        void var_80
        *(esp_1 - 4) = &var_80
        float var_3c
        sub_534100(&var_80, &var_3c, esi_1)
        float xmm2_2[0x4] = var_30.d + var_3c
        float var_38
        int64_t xmm1_2 = var_38 f+ var_30:4.d
        float var_34
        float var_240_1 = var_28 + var_34
        *(esp_1 - 4) = &var_80
        int64_t xmm2_3 = _mm_unpacklo_ps(xmm2_2, xmm1_2)
        *(esp_1 - 8) = &var_30
        int64_t var_248 = xmm2_3
        void var_64
        int32_t eax_6 = sub_51b1b0(&var_30, &var_248, &var_64)
        *(esp_1 - 0xc) = 0
        *(esp_1 - 0x10) = 3
        *(esp_1 - 0x14) = arg4
        int32_t eax_7 = sub_4d2c50(eax_6, arg3, arg3)
        void* edx_3 = data_114ec70
        *(arg2 + (esi_1 << 2)) = eax_7
        *(edx_3 + 0x24c) += 1
        int32_t eax_9 = *(edx_3 + 0x24c)
        *(esp_1 - 4) = 0
        int32_t eax_10 = eax_9 * 5
        *(edx_3 + (eax_10 << 2) + 0x10c) = 2
        *(edx_3 + (eax_10 << 2) + 0x114) = eax_7
        *(edx_3 + (eax_10 << 2) + 0x118) = 0
        *(edx_3 + (eax_10 << 2) + 0x11c) = 0
        sub_4ded00(eax_10, 0, eax_7)
        
        if (data_aca614 != 0)
            data_aca614 = 0
            sub_4924f0(&data_aca234)
        
        int32_t* ecx_5 = data_114ec78
        *(esp_1 - 4) = 0xff0000ff
        (*(*ecx_5 + 0x8c))()
        int32_t var_48
        int32_t var_84_1 = var_48
        void var_2c0
        *(esp_1 - 8) = &var_2c0
        int128_t var_60
        int128_t var_9c_1 = var_60
        int64_t var_50
        int64_t var_8c_1 = var_50
        int128_t* eax_13 = sub_4dab70()
        int128_t xmm0_7 = *eax_13
        int128_t xmm2_4 = eax_13[2]
        int128_t xmm3_1 = eax_13[3]
        
        if (data_114e7d9 != 0)
            *(esp_1 - 8) = "Draw3DSetView"
            *(esp_1 - 0xc) = 0x364
            *(esp_1 - 0x10) = "d:\ax\trunk\ax2017\engine\draw3d.cpp"
            sub_489550(eax_13, &data_5b2591, "!gDraw3DData.submittingRenderItems")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        data_aca4d4 = eax_13[1]
        data_aca4c4 = xmm0_7
        void var_280
        *(esp_1 - 8) = &var_280
        float xmm0_9 = xmm0 / var_70
        data_aca4e4 = xmm2_4
        float var_238_1 = xmm0 * 2f
        data_aca4f4 = xmm3_1
        float var_23c = xmm0_9 + xmm0_9
        int128_t var_270 = *sub_4829a0(&var_280, &var_23c, &data_5d27f8)
        int32_t var_260_1 = xmm0_1
        int32_t var_25c_1 = xmm0_2
        sub_4924f0(&var_270)
        int128_t xmm0_14 = data_5d2464
        *(esp_1 - 8) = &var_2c0
        data_aca6a8 = xmm0_14
        __builtin_memcpy(&data_aca2bc, 
            "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x"
        "3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00"
        "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
            0x40)
        data_aca37c = data_aca4c4
        data_aca38c = data_aca4d4
        data_aca39c = data_aca4e4
        data_aca3ac = data_aca4f4
        int128_t* eax_17 = sub_497e60(&var_2c0, &data_aca2bc, &data_aca37c)
        int128_t* ecx_9 = &data_aca3fc
        data_aca2fc = *eax_17
        data_aca30c = eax_17[1]
        data_aca31c = eax_17[2]
        int128_t xmm0_22 = eax_17[3]
        void* esp_17
        *esp_17 = &var_2c0
        data_aca32c = xmm0_22
        int128_t* eax_19 = sub_497e60(&var_2c0, &data_aca37c, ecx_9)
        data_aca3bc = *eax_19
        data_aca3cc = eax_19[1]
        data_aca3dc = eax_19[2]
        int128_t xmm0_26 = eax_19[3]
        *esp_17 = &var_2c0
        data_aca3ec = xmm0_26
        int128_t* eax_21 = sub_497e60(&var_2c0, &data_aca2fc, ecx_9)
        esp_1 = esp_17 + 4
        data_aca33c = *eax_21
        data_aca34c = eax_21[1]
        data_aca35c = eax_21[2]
        void* ThreadLocalStoragePointer = fsbase->ThreadLocalStoragePointer
        data_aca36c = eax_21[3]
        void* esi_2 = *ThreadLocalStoragePointer
        
        if (data_15167c8 s> *(esi_2 + 4))
            *(esp_1 - 4) = &data_15167c8
            __Init_thread_header()
            
            if (data_15167c8 == 0xffffffff)
                int32_t var_14_1 = 0
                int32_t* eax_23 = sub_4d0b50("sys/editor/video_sphere.structure", 2)
                *(esp_1 - 4) = &data_15167c8
                data_15167cc = eax_23
                int32_t var_14_2 = 0xffffffff
                __Init_thread_footer()
        
        int32_t eax_24 = data_15167d0
        
        if (eax_24 s> *(esi_2 + 4))
            *(esp_1 - 4) = &data_15167d0
            eax_24 = __Init_thread_header()
            
            if (data_15167d0 == 0xffffffff)
                int32_t var_14_3 = 1
                int32_t* eax_25 = sub_4d0b50("sys/skybox_equi.material", 5)
                *(esp_1 - 4) = &data_15167d0
                data_15167d4 = eax_25
                int32_t var_14_4 = 0xffffffff
                eax_24 = __Init_thread_footer()
        
        int32_t* ecx_10 = data_15167cc
        
        if (ecx_10[1] != 2)
            *(esp_1 - 4) = "StructureDefGet"
            *(esp_1 - 8) = 0x312
            *(esp_1 - 0xc) = "d:\ax\trunk\ax2017\engine\assetutils.cpp"
            sub_489550(eax_24, &data_5b2591, "assetPtr->assetType == ASSET_TYPE_STRUCTURE")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        eax_26 = sub_4981f0(ecx_10)
        int32_t** var_224_1 = eax_26
        
        if (*eax_26 == 0)
            *(esp_1 - 4) = "DrawCubemap"
            *(esp_1 - 8) = 0x121
            *(esp_1 - 0xc) = "d:\ax\trunk\ax2017\engine\iblimport.cpp"
            sub_489550(eax_26, &data_5b2591, "pDefStructure->pStructureImportData")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        if (data_114e7d9 != 0)
            break
        
        int32_t ecx_11 = data_1150ee4
        
        if (ecx_11 != 2)
            if (ecx_11 != 0)
                if (ecx_11 == 1)
                    void* eax_27 = data_114e814
                    
                    if (*(eax_27 + 0x1d) == 0)
                        *(esp_1 - 4) = "SpriteDrawEnd"
                        *(esp_1 - 8) = 0x25a
                        *(esp_1 - 0xc) = "d:\ax\trunk\ax2017\engine\sprite.cpp"
                        sub_489550(eax_27, &data_5b2591, "gpSpriteAppData->spritesDrawing")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_489700()
                        noreturn
                    
                    *(eax_27 + 0x1d) = 0
                    uint32_t (* eax_28)[0x4] = sub_4bed10()
                    
                    if (data_114e7d9 != 0)
                        *(esp_1 - 4) = "Draw3DBegin"
                        *(esp_1 - 8) = 0xb09
                        *(esp_1 - 0xc) = "d:\ax\trunk\ax2017\engine\draw3d.cpp"
                        sub_489550(eax_28, &data_5b2591, "!gDraw3DData.submittingRenderItems")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_489700()
                        noreturn
                    
                    eax_26 = var_224_1
                else if (ecx_11 != 2)
                    *(esp_1 - 4) = "DrawModeSet"
                    *(esp_1 - 8) = 0x1f
                    *(esp_1 - 0xc) = "d:\ax\trunk\ax2017\engine\drawmode.cpp"
                    sub_489550(eax_26, &data_5b2591, "Halt")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
            
            data_1150ee4 = 2
        
        int32_t ecx_17 = data_114e7ec
        int32_t i = 0
        data_114e7ec = 2
        int32_t* edi_2 = *eax_26
        
        if (*edi_2 s> 0)
            do
                *(esp_1 - 4) = 0x180
                *(esp_1 - 8) = 0
                void var_220
                *(esp_1 - 0xc) = &var_220
                _memset()
                int32_t var_1d8_1 = data_15167d4
                int32_t var_21c_1 = i * 0x150 + edi_2[2]
                int32_t ecx
                int32_t var_1d4_1 = ecx
                int32_t var_b8_1 = 0x3f800000
                int128_t var_218
                __builtin_memcpy(&var_218, 
                    "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
                "00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80"
                "3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x
                        3f", 
                    0x40)
                int128_t var_190_1 = data_5d2464
                
                if (i == 0)
                    i = sub_48f690(&var_220)
                
                sub_48ffa0(&var_220)
                i += 1
                edi_2 = *var_224_1
            while (i s< *edi_2)
        
        data_114e7ec = ecx_17
        sub_4f5710(0)
        void* result = sub_4df310()
        esi_1 = var_228 + 1
        var_228 = esi_1
        
        if (esi_1 s>= 6)
            fsbase->NtTib.ExceptionList = ExceptionList
            esp_1[1]
            esp_1[2]
            @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
            return result
    
    *(esp_1 - 4) = "DrawModeSet"
    *(esp_1 - 8) = 0xd
    *(esp_1 - 0xc) = "d:\ax\trunk\ax2017\engine\drawmode.cpp"
    sub_489550(eax_26, &data_5b2591, "!gDraw3DData.submittingRenderItems")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
