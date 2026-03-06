// 函数名称: sub_5099a0
// 虚拟地址: 0x5099a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_5099a0(int32_t arg1, int32_t* arg2, int128_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_5a1aa2
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int128_t* esi = arg3
    int128_t* var_84c = esi
    int32_t* var_854
    int32_t* var_8e8 = &var_854
    int32_t* result_1
    sub_4889e0(&result_1, arg4, 0x1d)
    int32_t var_14_1 = 0
    int32_t var_828[0x201]
    int32_t eax_4 = sub_5098c0(var_854, &var_828)
    int32_t var_850 = eax_4
    int32_t edi = 0
    float var_830 = 0f
    
    if (eax_4 s> 0)
        int32_t (* esi_1)[0x201] = &var_828
        float xmm1_5
        
        do
            int32_t* ecx_2
            
            if (*esi_1 != 0)
                ecx_2 = data_12bad30
                
                if (ecx_2[1] != 0x1e)
                    sub_489550(eax_4, &data_5b2591, "ptr->assetType == ASSET_TYPE_UI", 
                        "d:\ax\trunk\ax2017\engine\uidef.cpp", 0x126, "UIDefGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
            else
                ecx_2 = data_12bad2c
                
                if (ecx_2[1] != 0x1e)
                    sub_489550(eax_4, &data_5b2591, "ptr->assetType == ASSET_TYPE_UI", 
                        "d:\ax\trunk\ax2017\engine\uidef.cpp", 0x126, "UIDefGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
            
            void* eax_5 = sub_4981f0(ecx_2)
            edi += 1
            esi_1 = &(*esi_1)[4]
            int128_t var_878_1 = *(eax_5 + 0xc)
            float xmm0_2[0x4] = *(eax_5 + 0xc)
            eax_4 = var_850
            xmm1_5 = (_mm_shuffle_ps(xmm0_2, xmm0_2, 0xff) - _mm_shuffle_ps(xmm0_2, xmm0_2, 0x55)) f*
                *(var_84c + 0xc) + var_830
            var_830 = xmm1_5
        while (edi s< eax_4)
        
        esi = var_84c
        var_830 = xmm1_5
    
    int32_t eax_7 = eax_4 - 1
    int32_t var_850_1 = eax_7
    
    if (eax_4 - 1 s>= 0)
        while (true)
            int32_t var_864_1 = eax_7
            int128_t var_8d8_1 = *esi
            int32_t eax_8 = eax_7 << 4
            int128_t var_8c8_1 = esi[1]
            var_824
            int32_t* ecx_4 = *(&var_824 + eax_8) * 0x58 + *var_854
            int128_t var_8b8_1 = esi[2]
            int128_t var_8a8_1 = esi[3]
            int128_t var_898_1 = esi[4]
            int32_t esi_2 = var_828[eax_7 * 4]
            int128_t var_888_1 = esi[5]
            int32_t* ecx_5
            
            if (esi_2 != 0)
                ecx_5 = data_12bad30
                
                if (ecx_5[1] != 0x1e)
                    sub_489550(eax_8, &data_5b2591, "ptr->assetType == ASSET_TYPE_UI", 
                        "d:\ax\trunk\ax2017\engine\uidef.cpp", 0x126, "UIDefGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
            else
                ecx_5 = data_12bad2c
                
                if (ecx_5[1] != 0x1e)
                    sub_489550(eax_8, &data_5b2591, "ptr->assetType == ASSET_TYPE_UI", 
                        "d:\ax\trunk\ax2017\engine\uidef.cpp", 0x126, "UIDefGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
            
            void* eax_9 = sub_4981f0(ecx_5)
            int128_t var_878_2 = *(eax_9 + 0xc)
            float xmm0_12[0x4] = *(eax_9 + 0xc)
            float xmm1_8 =
                _mm_shuffle_ps(xmm0_12, xmm0_12, 0xff) - _mm_shuffle_ps(xmm0_12, xmm0_12, 0x55)
            var_8d8_1.d = *arg2
            float xmm2_2 = var_830 - xmm1_8 f* var_8d8_1:0xc.d
            void* edi_1 = *fsbase->ThreadLocalStoragePointer
            var_830 = xmm2_2
            var_8d8_1:4.d = arg2[1] f+ xmm2_2
            
            if (esi_2 != 0)
                if (data_1516790 s> *(edi_1 + 4))
                    __Init_thread_header(&data_1516790)
                    
                    if (data_1516790 == 0xffffffff)
                        var_14_1.b = 0xe
                        data_1516794 = sub_4ca240(data_12bad30)
                        var_14_1.b = 0
                        __Init_thread_footer(&data_1516790)
                
                int32_t eax_45 = data_1516798
                
                if (eax_45 s> *(edi_1 + 4))
                    eax_45 = __Init_thread_header(&data_1516798)
                    
                    if (data_1516798 == 0xffffffff)
                        var_14_1.b = 0xf
                        data_151679c = sub_4c8f00(data_12bad30, "txtLayerName")
                        var_14_1.b = 0
                        eax_45 = __Init_thread_footer(&data_1516798)
                
                char const* const edx_21
                
                if (esi_2 == 1)
                    var_820
                    int32_t eax_52 = *(&var_820 + eax_8)
                    
                    if (*(ecx_4[8] + (eax_52 << 2)) != 0)
                        sub_489550(eax_52, &data_5b2591, "Halt", 
                            "d:\ax\trunk\ax2017\engine\materialfndef.cpp", 0x156, 
                            "MaterialFnEntry_Text")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_489700()
                        noreturn
                    
                    edx_21 = "Spherize"
                else
                    if (esi_2 != 2)
                        sub_489550(eax_45, &data_5b2591, "Halt", 
                            "d:\ax\trunk\ax2017\engine\materialfndef.cpp", 0x159, 
                            "MaterialFnEntry_Text")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_489700()
                        noreturn
                    
                    var_81c
                    int32_t eax_48 = *(&var_81c + eax_8)
                    
                    if (eax_48 == 4)
                        edx_21 = "Translate"
                    else
                        if (eax_48 != 5)
                            sub_489550(eax_48 - 5, &data_5b2591, "Halt", 
                                "d:\ax\trunk\ax2017\engine\materialfndef.cpp", 0x14e, 
                                "MaterialFnEntry_Text")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_489700()
                            noreturn
                        
                        edx_21 = "Rotate"
                
                char* var_840
                int32_t ecx_57 = sub_48a2c0(&var_840, edx_21)
                var_14_1.b = 0x10
                char* const eax_53 = &data_5b2591
                char* esi_7 = var_840
                int32_t var_8e8_7 = ecx_57
                
                if (esi_7 != 0)
                    eax_53 = esi_7
                
                sub_4cc150(eax_53, data_151679c, data_1516794, eax_53)
                data_1516794
                sub_4cd0d0(0x3f800000, eax_2)
                var_14_1.b = 0x11
                
                if (data_aca1f4 != 0 && esi_7 != 0 && *esi_7 != 0)
                    char* eax_54 = sub_48a080(&var_840)
                    int32_t temp5_1 = *(eax_54 + 4)
                    *(eax_54 + 4) -= 1
                    
                    if (temp5_1 == 1)
                        sub_4984f0(eax_54, *(eax_54 + 0xc) + 0x10)
                        var_840 = &data_5b2591
            else
                if (data_1516760 s> *(edi_1 + 4))
                    __Init_thread_header(&data_1516760)
                    
                    if (data_1516760 == 0xffffffff)
                        var_14_1.b = 1
                        data_1516764 = sub_4ca240(data_12bad2c)
                        var_14_1.b = 0
                        __Init_thread_footer(&data_1516760)
                
                if (data_1516768 s> *(edi_1 + 4))
                    __Init_thread_header(&data_1516768)
                    
                    if (data_1516768 == 0xffffffff)
                        var_14_1.b = 2
                        data_151676c = sub_4c8f00(data_12bad2c, "imgTexture")
                        var_14_1.b = 0
                        __Init_thread_footer(&data_1516768)
                
                if (data_1516770 s> *(edi_1 + 4))
                    __Init_thread_header(&data_1516770)
                    
                    if (data_1516770 == 0xffffffff)
                        var_14_1.b = 3
                        data_1516774 = sub_4c8f00(data_12bad2c, "txtLayerName")
                        var_14_1.b = 0
                        __Init_thread_footer(&data_1516770)
                
                if (data_1516778 s> *(edi_1 + 4))
                    __Init_thread_header(&data_1516778)
                    
                    if (data_1516778 == 0xffffffff)
                        var_14_1.b = 4
                        data_151677c = sub_4c8f00(data_12bad2c, "txtBlend")
                        var_14_1.b = 0
                        __Init_thread_footer(&data_1516778)
                
                if (data_1516780 s> *(edi_1 + 4))
                    __Init_thread_header(&data_1516780)
                    
                    if (data_1516780 == 0xffffffff)
                        var_14_1.b = 5
                        data_1516784 = sub_4c8f00(data_12bad2c, "txtVisible")
                        var_14_1.b = 0
                        __Init_thread_footer(&data_1516780)
                
                int32_t eax_22 = *ecx_4
                
                if (eax_22 u> 3)
                    sub_489550(eax_22, &data_5b2591, "Halt", 
                        "d:\ax\trunk\ax2017\engine\materialfndef.cpp", 0xc3, "MaterialFnItem_Name")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                char const* const edx_2
                
                switch (eax_22)
                    case 0
                        edx_2 = "Texture"
                    case 1
                        edx_2 = "Color"
                    case 2
                        edx_2 = "Group"
                    case 3
                        if (ecx_4[7] != 0)
                            sub_489550(eax_22, &data_5b2591, "Halt", 
                                "d:\ax\trunk\ax2017\engine\materialfndef.cpp", 0xc0, 
                                "MaterialFnItem_Name")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_489700()
                            noreturn
                        
                        edx_2 = "Circle"
                
                char* var_834
                int32_t ecx_13 = sub_48a2c0(&var_834, edx_2)
                var_14_1.b = 6
                char* const eax_23 = &data_5b2591
                char* esi_3 = var_834
                int32_t var_8e8_1 = ecx_13
                
                if (esi_3 != 0)
                    eax_23 = esi_3
                
                sub_4cc150(eax_23, data_1516774, data_1516764, eax_23)
                int32_t eax_24 = ecx_4[0xb]
                char* var_82c
                char const* const edx_4
                
                switch (eax_24)
                    case 0
                        float xmm0_15 = ecx_4[0xc]
                        xmm0_15 - 1f
                        eax_24:1.b = (xmm0_15 == 1f ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_15, 1f) ? 1 : 0) << 2 | (xmm0_15 < 1f ? 1 : 0)
                        bool p_2 = unimplemented  {test ah, 0x44}
                        
                        if (not(p_2))
                            edx_4 = &data_5b2591
                            goto label_509eca
                        
                        float xmm0_16 = xmm0_15 * 100f
                        float xmm0_17
                        
                        if (0 f<= xmm0_16)
                            xmm0_17 = xmm0_16 + 0.5f
                        else
                            xmm0_17 = xmm0_16 - 0.5f
                        
                        int32_t var_8e8_2 = int.d(xmm0_17)
                        char* const var_844
                        sub_48a9d0(&var_844, "%%%d")
                        var_14_1.b = 7
                        char* const ecx_16 = &data_5b2591
                        char* eax_26 = var_844
                        
                        if (eax_26 != 0)
                            ecx_16 = eax_26
                        
                        char* const var_8e8_3 = ecx_16
                        sub_48a9d0(&var_82c, "Opacity: %s")
                        var_14_1.b = 8
                        
                        if (data_aca1f4 != 0)
                            char* eax_27 = var_844
                            
                            if (eax_27 != 0 && *eax_27 != 0)
                                char* eax_28 = sub_48a080(&var_844)
                                int32_t temp7_1 = *(eax_28 + 4)
                                *(eax_28 + 4) -= 1
                                
                                if (temp7_1 == 1)
                                    sub_4984f0(eax_28, *(eax_28 + 0xc) + 0x10)
                                    var_844 = &data_5b2591
                        
                        goto label_509ecf
                    case 1
                        edx_4 = "Multiply"
                        goto label_509eca
                    case 3
                        edx_4 = "Overlay"
                    label_509eca:
                        sub_48a2c0(&var_82c, edx_4)
                    label_509ecf:
                        var_14_1.b = 9
                        char* ecx_20 = &data_5b2591
                        char* eax_29 = var_82c
                        
                        if (eax_29 != 0)
                            ecx_20 = eax_29
                        
                        char* var_8e8_4 = ecx_20
                        sub_4cc150(eax_29, data_151677c, data_1516764, ecx_20)
                        sub_4cc1f0(data_1516764, data_151676c)
                        void* eax_30 = *ecx_4
                        
                        if (eax_30 == 0)
                            uint32_t eax_31 = ecx_4[4]
                            int32_t ecx_24 = data_1516764
                            uint32_t var_838_2 = eax_31
                            
                            if (ecx_24 == 0)
                                sub_489550(eax_31, &data_5b2591, "id != DATAID_NULL", 
                                    "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6c, 
                                    "DataArray<struct UIState>::DataArrayGet")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_489700()
                                noreturn
                            
                            uint32_t edx_9 = zx.d(ecx_24.w)
                            int32_t edi_2
                            
                            if (edx_9 u< data_6c9d94)
                                edi_2 = data_6c9d90
                                eax_31 = edx_9 * 0x438
                            
                            if (edx_9 u>= data_6c9d94 || *(eax_31 + edi_2 + 0x434) != ecx_24)
                                sub_489550(eax_31, &data_5b2591, "DataArrayTryToGet(id) != NULL", 
                                    "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6d, 
                                    "DataArray<struct UIState>::DataArrayGet")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_489700()
                                noreturn
                            
                            uint32_t (* eax_32)[0x4] =
                                sub_4ca090(eax_31, data_151676c, edx_9 * 0x438 + edi_2, &data_5b2591)
                            (*eax_32)[0x25] = *eax_32 + 1
                            (*eax_32)[0x26] = var_838_2
                        else if (eax_30 == 3)
                            if (data_1516788 s> *(edi_1 + 4))
                                __Init_thread_header(&data_1516788)
                                
                                if (data_1516788 == 0xffffffff)
                                    var_14_1.b = 0xa
                                    data_151678c = sub_4d0b50("sys/TextureFn_Circle.materialFn", 0x1d)
                                    var_14_1.b = 9
                                    __Init_thread_footer(&data_1516788)
                            
                            int32_t* var_860
                            int32_t* var_8e8_5 = &var_860
                            int32_t* var_858
                            sub_4889e0(&var_858, data_151678c, 0x1d)
                            var_14_1.b = 0xb
                            uint32_t eax_35 = sub_50bf20(var_860)
                            var_14_1.b = 9
                            int32_t* ecx_32 = var_858
                            uint32_t var_838_3 = eax_35
                            
                            if (ecx_32 != 0)
                                ecx_32[7] -= 1
                                var_858 = nullptr
                            
                            int32_t ecx_33 = data_1516764
                            
                            if (ecx_33 == 0)
                                sub_489550(eax_35, &data_5b2591, "id != DATAID_NULL", 
                                    "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6c, 
                                    "DataArray<struct UIState>::DataArrayGet")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_489700()
                                noreturn
                            
                            uint32_t edx_11 = zx.d(ecx_33.w)
                            int32_t edi_3
                            
                            if (edx_11 u< data_6c9d94)
                                edi_3 = data_6c9d90
                                eax_35 = edx_11 * 0x438
                            
                            if (edx_11 u>= data_6c9d94 || *(eax_35 + edi_3 + 0x434) != ecx_33)
                                sub_489550(eax_35, &data_5b2591, "DataArrayTryToGet(id) != NULL", 
                                    "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6d, 
                                    "DataArray<struct UIState>::DataArrayGet")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_489700()
                                noreturn
                            
                            uint32_t (* eax_36)[0x4] =
                                sub_4ca090(eax_35, data_151676c, edx_11 * 0x438 + edi_3, &data_5b2591)
                            (*eax_36)[0xf] = *eax_36 + 1
                            eax_36[4][0] = var_838_3
                        else if (eax_30 != 1)
                            sub_4cd480(eax_30, data_151676c, data_1516764, 1)
                        else
                            uint32_t esi_4 = ecx_4[6]
                            int32_t ecx_39 = data_1516764
                            
                            if (ecx_39 == 0)
                                sub_489550(eax_30, &data_5b2591, "id != DATAID_NULL", 
                                    "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6c, 
                                    "DataArray<struct UIState>::DataArrayGet")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_489700()
                                noreturn
                            
                            uint32_t edx_13 = zx.d(ecx_39.w)
                            
                            if (edx_13 u< data_6c9d94)
                                eax_30 = edx_13 * 0x438 + data_6c9d90
                            
                            if (edx_13 u>= data_6c9d94 || *(eax_30 + 0x434) != ecx_39)
                                sub_489550(eax_30, &data_5b2591, "DataArrayTryToGet(id) != NULL", 
                                    "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6d, 
                                    "DataArray<struct UIState>::DataArrayGet")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_489700()
                                noreturn
                            
                            uint32_t (* eax_38)[0x4] = sub_4ca090(eax_30, data_151676c, 
                                edx_13 * 0x438 + data_6c9d90, &data_5b2591)
                            uint32_t ecx_43 = *eax_38 + 1
                            (*eax_38)[0x23] = esi_4
                            esi_3 = var_834
                            (*eax_38)[0x22] = ecx_43
                            eax_38[9][0] = 0
                        
                        uint32_t eax_39 = zx.d(ecx_4[1].b)
                        sub_4cd480(eax_39, data_1516784, data_1516764, eax_39.b)
                        data_1516764
                        sub_4cd0d0(0x3f800000, eax_2)
                        var_14_1.b = 0xc
                        
                        if (data_aca1f4 != 0)
                            char* eax_40 = var_82c
                            
                            if (eax_40 != 0 && *eax_40 != 0)
                                char* eax_41 = sub_48a080(&var_82c)
                                int32_t temp8_1 = *(eax_41 + 4)
                                *(eax_41 + 4) -= 1
                                
                                if (temp8_1 == 1)
                                    sub_4984f0(eax_41, *(eax_41 + 0xc) + 0x10)
                                    var_82c = &data_5b2591
                        
                        var_14_1.b = 0xd
                        
                        if (data_aca1f4 != 0 && esi_3 != 0 && *esi_3 != 0)
                            char* eax_42 = sub_48a080(&var_834)
                            int32_t temp9_1 = *(eax_42 + 4)
                            *(eax_42 + 4) -= 1
                            
                            if (temp9_1 == 1)
                                sub_4984f0(eax_42, *(eax_42 + 0xc) + 0x10)
                                var_834 = &data_5b2591
                    case 4
                        edx_4 = "Mask"
                        goto label_509eca
                    default
                        sub_489550(eax_24, &data_5b2591, "Halt", 
                            "d:\ax\trunk\ax2017\engine\materialfndef.cpp", 0xac, "MaterialFnItem_Blend")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_489700()
                        noreturn
            
            eax_7 = var_850_1 - 1
            var_14_1.b = 0
            var_850_1 = eax_7
            
            if (var_864_1 s<= 0)
                break
            
            esi = var_84c
    
    int32_t* result = result_1
    
    if (result != 0)
        result[7] -= 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
