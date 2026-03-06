// 函数名称: sub_4a6fe0
// 虚拟地址: 0x4a6fe0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __fastcallsub_4a6fe0(float arg1 @ ecx)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_59f454
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    float xmm0 = *(arg1 i+ 0x1080)
    xmm0 f- 0
    struct _EXCEPTION_REGISTRATION_RECORD** result
    result:1.b =
        (xmm0 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0, 0f) ? 1 : 0) << 2 | (xmm0 < 0f ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (p_1)
        int32_t ecx = *(arg1 i+ 0x1094)
        struct _EXCEPTION_REGISTRATION_RECORD** result_1 = nullptr
        
        if (ecx != 0)
            int32_t eax_3 = *(arg1 i+ 0x1098)
            
            if (eax_3 == 0xffffffff)
                sub_489550(eax_3, &data_5b2591, "ui.worldInfo.sublayer != -1", 
                    "d:\ax\trunk\ax2017\engine\ui2.cpp", 0x1e29, "UI2Draw")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            result_1 = sub_492260(ecx << 0x10 | eax_3)
        
        void* ecx_3 = data_114e814
        int128_t xmm0_1 = *(ecx_3 + 0x28)
        int32_t edi_1 = *(ecx_3 + 0x38)
        float xmm2_1 = *(data_114e818 + 0x2c)
        int128_t var_4c = xmm0_1
        int128_t xmm0_2 = *(arg1 i+ 0x10a0)
        int32_t var_3c_1 = edi_1
        int128_t var_38
        sub_4bc3a0(arg1 i+ 0x54c, xmm2_1, &var_38:4)
        int32_t eax_6 = *(arg1 i+ 0xe94)
        int32_t var_b0
        float var_34
        float var_30
        float var_2c
        int32_t edx_2
        int128_t xmm1_5
        float var_68
        float var_28
        int32_t* eax_7
        float xmm0_12
        float xmm1_2
        float xmm3_1
        
        if (eax_6 != 1)
            if (eax_6 == 3)
                float xmm4_2 = *(arg1 i+ 0x10a0)
                void var_d8
                eax_7 = &var_d8
                float xmm2_5 = *(arg1 i+ 0x10a8) - xmm4_2
                xmm3_1 = *(arg1 i+ 0x10a4)
                xmm1_2 = *(arg1 i+ 0x10ac) - xmm3_1
                var_68 = var_34 * xmm2_5 + xmm4_2
                float var_64_2 = var_30 * xmm1_2 + xmm3_1
                float var_60_2 = var_2c * xmm2_5 + xmm4_2
                xmm0_12 = var_28
                int32_t var_28_2 = 0xc
                goto label_4a7229
            
            if (eax_6 == 4)
                float xmm4_3 = *(arg1 i+ 0x10a0)
                eax_7 = &var_b0
                float xmm2_7 = *(arg1 i+ 0x10a8) - xmm4_3
                xmm3_1 = *(arg1 i+ 0x10a4)
                xmm1_2 = *(arg1 i+ 0x10ac) - xmm3_1
                var_68 = var_34 * xmm2_7 + xmm4_3
                float var_64_3 = var_30 * xmm1_2 + xmm3_1
                float var_60_3 = var_2c * xmm2_7 + xmm4_3
                xmm0_12 = var_28
                int32_t var_28_3 = 3
                goto label_4a7229
            
            xmm1_5 = xmm0_1
            
            if (eax_6 != 2)
                var_38 = xmm1_5
                edx_2 = edi_1
            else
                int128_t xmm0_36 = data_5d2760
                void* eax_10 = data_114e814
                edx_2 = 0
                var_38 = xmm0_36
                *(eax_10 + 0x28) = xmm0_36
                *(eax_10 + 0x38) = 0
        else
            float xmm4_1 = *(arg1 i+ 0x10a0)
            eax_7 = &var_68
            float xmm2_3 = *(arg1 i+ 0x10a8) - xmm4_1
            xmm3_1 = *(arg1 i+ 0x10a4)
            xmm1_2 = *(arg1 i+ 0x10ac) - xmm3_1
            var_68 = var_34 * xmm2_3 + xmm4_1
            float var_64_1 = var_30 * xmm1_2 + xmm3_1
            float var_60_1 = var_2c * xmm2_3 + xmm4_1
            xmm0_12 = var_28
            int32_t var_28_1 = 0xffffffff
        label_4a7229:
            float var_5c_1 = xmm0_12 * xmm1_2 + xmm3_1
            var_38 = var_68.o
            int128_t* eax_8 = sub_4a6ea0(eax_7, &var_38, &var_4c, eax_7)
            void* ecx_6 = data_114e814
            xmm1_5 = xmm0_1
            edx_2 = eax_8[1].d
            var_38 = *eax_8
            *(ecx_6 + 0x28) = *eax_8
            *(ecx_6 + 0x38) = eax_8[1].d
        
        if (((edx_2.b & 4) == 0 || var_34 f<= xmm0_2:0xc.d)
                && ((edx_2.b & 8) == 0 || not(xmm0_2:4.d f> var_2c))
                && ((edx_2.b & 2) == 0 || not(var_38.d f> xmm0_2:8.d))
                && ((edx_2.b & 1) == 0 || not(xmm0_2.d f> var_30)))
            int32_t eax_11 = *(arg1 i+ 0xfd0)
            struct _EXCEPTION_REGISTRATION_RECORD** i
            
            if (eax_11 == 0)
                i = *(arg1 i+ 0xfec) - 1
                
                switch (i)
                    case nullptr
                        i = sub_4a67a0(arg1)
                    case 2
                        if (*(arg1 i+ 0xf8c) == 0 || *(arg1 i+ 0x1185) == 0)
                            i = sub_4a5190(arg1)
                        else
                            i = sub_509560(arg1 i+ 0x1134)
                    case 4
                        sub_4a67a0(arg1)
                        i = sub_4a5190(arg1)
                    case 6
                        i = sub_4a56e0(arg1)
                    case 7
                        int32_t* ecx_17 = *(arg1 i+ 0xe64)
                        
                        if (ecx_17 != 0)
                            i = sub_4fa2b0(i, edx_2, ecx_17, &data_63c264)
                    case 8
                        i = sub_4fd250(*(arg1 i+ 0xe6c))
                        
                        if (i != 0)
                            i = sub_506ab0(i, &data_63c264)
                    case 9
                        int32_t ecx_18 = *(arg1 i+ 0xe60)
                        
                        if (ecx_18 != 0)
                            i = sub_4d9be0(ecx_18, *(arg1 i+ 0xfcc))
                
                goto label_4a7606
            
            i = eax_11(arg1, eax_2)
            struct _EXCEPTION_REGISTRATION_RECORD** i_1
            
            if (i.b == 0)
            label_4a7606:
                bool cond:0_1 = *(arg1 i+ 0x1190) s<= 0
                i_1 = nullptr
                
                if (not(cond:0_1))
                    int32_t* edi_4 = arg1 i+ 0x1194
                    
                    while (true)
                        int32_t ecx_25 = *edi_4
                        
                        if (ecx_25 == 0)
                            sub_489550(i, &data_5b2591, "id != DATAID_NULL", 
                                "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6c, 
                                "DataArray<struct UI2>::DataArrayGet")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_489700()
                            noreturn
                        
                        uint32_t edx_9 = zx.d(ecx_25.w)
                        
                        if (edx_9 u< data_63e5ac)
                            i = edx_9 * 0x1418 + data_63e5a8
                            
                            if (i[0x504] == ecx_25)
                                if (*(edx_9 * 0x1418 + data_63e5a8 + 0x112c) != arg1)
                                    sub_489550(i, &data_5b2591, "child.parent == &ui", 
                                        "d:\ax\trunk\ax2017\engine\ui2.cpp", 0x1eca, "UI2Draw")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_489700()
                                    noreturn
                                
                                sub_4a6fe0(eax_2)
                                edi_4 = &edi_4[1]
                                i = i_1 + 1
                                i_1 = i
                                
                                if (i s>= *(arg1 i+ 0x1190))
                                    break
                                
                                continue
                        
                        sub_489550(i, &data_5b2591, "DataArrayTryToGet(id) != NULL", 
                            "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6d, 
                            "DataArray<struct UI2>::DataArrayGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_489700()
                        noreturn
            
            if (*(arg1 i+ 0xf58) != 0)
                i = nullptr
                void* edi_2 = arg1 i+ 0x13ec
                i_1 = nullptr
                
                do
                    int32_t edx_3 = *edi_2
                    
                    if (edx_3 != 0)
                        uint32_t eax_12 = zx.d(edx_3.w)
                        
                        if (eax_12 u>= data_63e5ac
                                || *(eax_12 * 0x1418 + data_63e5a8 + 0x1410) != edx_3)
                            sub_489550(eax_12, &data_5b2591, "DataArrayTryToGet(id) != NULL", 
                                "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6d, 
                                "DataArray<struct UI2>::DataArrayGet")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_489700()
                            noreturn
                        
                        sub_4a6fe0(eax_2)
                        i = i_1
                    
                    i += 1
                    edi_2 += 4
                    i_1 = i
                while (i s< 5)
            
            void* ecx_9 = *(arg1 i+ 0xe68)
            
            if (ecx_9 != 0)
                sub_506ab0(ecx_9, &data_63c264)
            
            float xmm0_41 = *(arg1 i+ 0x1080)
            xmm0_41 f- 0
            i:1.b = (xmm0_41 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_41, 0f) ? 1 : 0) << 2
                | (xmm0_41 < 0f ? 1 : 0)
            bool p_3 = unimplemented  {test ah, 0x44}
            
            if (p_3 && data_1511a8c != 0)
                int32_t var_f8_4 = *(arg1 i+ 0x1094)
                int128_t xmm0_42 = *(arg1 i+ 0x10a0)
                sub_48a9d0(&i_1, &data_5efc90)
                int32_t var_14_1 = 3
                
                if (data_1515848 s> *(*fsbase->ThreadLocalStoragePointer + 4))
                    __Init_thread_header(&data_1515848)
                    
                    if (data_1515848 == 0xffffffff)
                        var_14_1.b = 4
                        data_151584c = sub_4d0b50("sys/debugfont.font", 0x12)
                        var_14_1.b = 3
                        __Init_thread_footer(&data_1515848)
                
                struct _EXCEPTION_REGISTRATION_RECORD** i_2 = i_1
                struct _EXCEPTION_REGISTRATION_RECORD** i_4 = &data_5b2591
                int32_t* edi_3 = data_151584c
                
                if (i_2 != 0)
                    i_4 = i_2
                
                float eax_16
                float edx_4
                eax_16, edx_4 = sub_4eaaa0(5)
                int32_t var_c0 = 0x3f800000
                int32_t var_b4_1 = 0
                int32_t var_a8_1 = 0
                int32_t var_bc_1 = 0
                var_b0 = 0x3f800000
                int32_t var_a4_1 = 0
                float var_b8_1 = (xmm0_42:8.d f- xmm0_42.d) * eax_16 f+ xmm0_42.d
                float var_ac_1 = (xmm0_42:0xc.d f- xmm0_42:4.d) * edx_4 f+ xmm0_42:4.d
                int32_t var_a0_1 = 0x3f800000
                void var_e8
                void* var_fc_1 = &var_e8
                sub_4e8fc0(sub_41da40(&var_c0, &data_5d3570, &var_e8, &var_c0), &var_e8, i_4, edi_3, 
                    0xffffffff, 0xffffffff, 0, 5)
                int32_t var_14_2 = 5
                
                if (data_aca1f4 != 0)
                    struct _EXCEPTION_REGISTRATION_RECORD** i_3 = i_1
                    
                    if (i_3 != 0 && *i_3 != 0)
                        char* eax_19 = sub_48a080(&i_1)
                        int32_t temp0_1 = *(eax_19 + 4)
                        *(eax_19 + 4) -= 1
                        
                        if (temp0_1 == 1)
                            sub_4984f0(eax_19, *(eax_19 + 0xc) + 0x10)
                            i_1 = &data_5b2591
                
                int32_t var_14_3 = 0xffffffff
            
            result = data_114e814
            *(result + 0x28) = xmm0_1
            result[0xe] = edi_1
            
            if (*(arg1 i+ 0x1094) != 0)
                if (data_114e7d9 == 0)
                    sub_489550(result, &data_5b2591, "gDraw3DData.submittingRenderItems", 
                        "d:\ax\trunk\ax2017\engine\draw3d.cpp", 0x327, "Draw3DLayer")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                result = result_1
                data_aca74c = result
        else
            result = data_114e814
            *(result + 0x28) = xmm1_5
            result[0xe] = edi_1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
