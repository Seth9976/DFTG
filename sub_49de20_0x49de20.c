// 函数名称: sub_49de20
// 虚拟地址: 0x49de20
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char** __convention("regparm")sub_49de20(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4, char* arg5)
{
    // 第一条实际指令: float var_a4
    float var_a4
    int32_t eax_1 = __security_cookie ^ &var_a4
    void* esi = arg3
    
    if (arg2 != *(esi + 0xe24) || *(esi + 0xff4) != *(esi + 0xe20))
        arg3.b = 1
    else
        arg3.b = 0
    
    char var_9a = arg3.b
    float xmm4 = data_114e818[0xb]
    var_a4 = xmm4
    char** result
    
    if (arg3.b != 0)
        int32_t eax_3 = *(esi + 0xff4)
        bool cond:0_1 = eax_3 != *(esi + 0xe20)
        int32_t ecx = *(esi + 0xe1c)
        *(esi + 0xe20) = eax_3
        int32_t eax_4 = *(esi + 0xe14)
        *(esi + 0xe24) = arg2
        *(esi + 0xe1c) = eax_4
        int32_t eax_5 = ecx * 9
        *(esi + 0xe14) = ecx
        sub_49d920(eax_5, esi + 0xce4 + (eax_5 << 3), esi, esi + 0xe80, cond:0_1)
        bool var_a0_1
        var_a0_1.d = *(esi + 0xe14) * 0x48 + 0xce4 + esi
        int32_t* eax_10 = sub_498ef0(esi)
        void* eax_11 = sub_4f0c50(eax_10, eax_10, &data_6218dc, 0x66)
        *(esi + 0xfec) = eax_11
        int32_t* ecx_3 = data_63e5ec
        
        if (ecx_3 != 0 && ecx_3 != *(esi + 0xff4))
            void* eax_12 = eax_11 - 3
            char const* const edx_3
            
            if (eax_11 == 3)
                edx_3 = "Text"
            label_49df34:
                eax_11 = sub_49ae70(ecx_3, edx_3)
                
                if (eax_11 != 0)
                    int32_t var_b4_2 = 1
                    int32_t var_b8_2 = arg4
                    eax_11 = sub_49d6b0(esi + 0xe80, eax_11)
            else
                eax_11 = eax_12 - 2
                
                if (eax_12 == 2)
                    edx_3 = "Button"
                    goto label_49df34
        
        sub_48a5e0(esi + 0xff0, sub_4f0df0(eax_11, eax_10, &data_6218dc, 0x67))
        int32_t* ecx_6 = data_63e5ec
        
        if (ecx_6 != 0)
            char* edx_6 = *(esi + 0xff0)
            
            if (edx_6 != 0 && *edx_6 != 0)
                int32_t* eax_14 = sub_49ae70(ecx_6, edx_6)
                
                if (eax_14 != 0)
                    int32_t var_b4_4 = 1
                    int32_t var_b8_3 = arg4
                    sub_49d6b0(esi + 0xe80, eax_14)
        
        int32_t* ecx_8 = *(esi + 0xff4)
        int32_t edi_2 = *(esi + 0xff8)
        void* eax_19 = *(esi + 0xe14) * 0x48 + 0xce4 + esi
        void* var_8c_2 = eax_19
        int32_t var_b8_4
        char const* const var_b4_5
        char* ecx_9
        
        if (ecx_8[1] != 0x22)
            var_b4_5 = "UI2DefGet"
            var_b8_4 = 0x8ae
            ecx_9 = "ptr->assetType == ASSET_TYPE_UI2"
        label_49e862:
            sub_489550(eax_19, &data_5b2591, ecx_9, "d:\ax\trunk\ax2017\engine\ui2.cpp", var_b8_4, 
                var_b4_5)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        eax_19 = sub_4981f0(ecx_8)
        
        if (edi_2 s>= *(eax_19 + 8))
            var_b4_5 = "UI2MergeAttribs"
            var_b8_4 = 0x110d
            ecx_9 = "sourceIndex < def.el.numItems"
            goto label_49e862
        
        if (edi_2 s< 0)
            var_b4_5 = "UI2MergeAttribs"
            var_b8_4 = 0x110e
            ecx_9 = "sourceIndex >= 0"
            goto label_49e862
        
        int32_t var_b4_6 = 0
        int32_t var_b8_5 = arg4
        sub_49d6b0(esi + 0xe80, sub_498ef0(esi))
        bool cond:2_1 = *(esi + 0xffc) == 0
        int64_t var_98 = 0
        int32_t var_90_1 = 0
        int64_t var_84
        __builtin_memset(&var_84, 0, 0x48)
        int64_t var_78
        int64_t var_6c
        int64_t var_60
        int64_t var_54
        
        if (not(cond:2_1))
            eax_19 = sub_49ddf0(esi)
            
            if (eax_19 != 0)
                int32_t i_1 = *(eax_19 + 0x10)
                
                if (i_1 s> 0)
                    int32_t* ecx_13 = *(eax_19 + 8)
                    int32_t i
                    
                    do
                        switch (*ecx_13 - 0x6c)
                            case nullptr
                                var_60:4.d = ecx_13[2]
                                void* var_58_1 = ecx_13[3]
                                var_60.d = ecx_13[1]
                            case 9
                                var_98:4.d = ecx_13[2]
                                void* var_90_2 = ecx_13[3]
                                var_98.d = ecx_13[1]
                            case 0xf
                                var_6c:4.d = ecx_13[2]
                                void* var_64_1 = ecx_13[3]
                                var_6c.d = ecx_13[1]
                            case 0x16
                                var_54:4.d = ecx_13[2]
                                void* var_4c_1 = ecx_13[3]
                                var_54.d = ecx_13[1]
                            case 0x1e
                                var_84:4.d = ecx_13[2]
                                void* var_7c_1 = ecx_13[3]
                                var_84.d = ecx_13[1]
                            case 0x6d
                                var_78:4.d = ecx_13[2]
                                void* var_70_1 = ecx_13[3]
                                var_78.d = ecx_13[1]
                        
                        ecx_13 = &ecx_13[4]
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
        
        float xmm0_13 = *(esi + 0xa70)
        xmm0_13 f- 0
        var_a0_1.d = 0
        eax_19:1.b = (xmm0_13 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_13, 0f) ? 1 : 0) << 2
            | (xmm0_13 < 0f ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (not(p_2))
            var_b4_5 = "UI2UpdateAnims"
            var_b8_4 = 0x109e
            ecx_9 = "el.propsNew.cropUVs.keys[0].range[0].x1 != 0.0f"
            goto label_49e862
        
        if (not(0 f> sub_4bcdb0(&var_98, esi + 0xa68, esi + 0x54c, var_a4, &var_98)))
            var_a0_1.d = sub_4bcdb0(&var_98, esi + 0xa68, esi + 0x54c, var_a4, &var_98)
        
        if (not(var_a0_1.d f> sub_4bcf70(&var_78, esi + 0xb28, esi + 0x2dc, var_a4, &var_78)))
            var_a0_1.d = sub_4bcf70(&var_78, esi + 0xb28, esi + 0x2dc, var_a4, &var_78)
        
        if (not(var_a0_1.d f> sub_4bcf70(&var_6c, esi + 0x93c, esi + 0x24c, var_a4, &var_6c)))
            var_a0_1.d = sub_4bcf70(&var_6c, esi + 0x93c, esi + 0x24c, var_a4, &var_6c)
        
        if (not(var_a0_1.d f> sub_4bcf70(&var_98, esi + 0x978, esi + 0xc, var_a4, &var_98)))
            var_a0_1.d = sub_4bcf70(&var_98, esi + 0x978, esi + 0xc, var_a4, &var_98)
        
        if (not(var_a0_1.d f> sub_4bcf70(&var_98, esi + 0x9b4, esi + 0x9c, var_a4, &var_98)))
            var_a0_1.d = sub_4bcf70(&var_98, esi + 0x9b4, esi + 0x9c, var_a4, &var_98)
        
        if (not(var_a0_1.d f> sub_4bcf70(&var_98, esi + 0x9f0, esi + 0x12c, var_a4, &var_98)))
            var_a0_1.d = sub_4bcf70(&var_98, esi + 0x9f0, esi + 0x12c, var_a4, &var_98)
        
        if (not(var_a0_1.d f> sub_4bcf70(&var_98, esi + 0xa2c, esi + 0x1bc, var_a4, &var_98)))
            var_a0_1.d = sub_4bcf70(&var_98, esi + 0xa2c, esi + 0x1bc, var_a4, &var_98)
        
        if (not(var_a0_1.d f> sub_4bd120(&var_98, esi + 0xba0, esi + 0x48c, var_a4, &var_98)))
            var_a0_1.d = sub_4bd120(&var_98, esi + 0xba0, esi + 0x48c, var_a4, &var_98)
        
        if (not(var_a0_1.d f> sub_4bcf70(&var_60, esi + 0xaec, esi + 0x36c, var_a4, &var_60)))
            var_a0_1.d = sub_4bcf70(&var_60, esi + 0xaec, esi + 0x36c, var_a4, &var_60)
        
        int64_t var_48
        
        if (not(var_a0_1.d f> sub_4bd350(&var_48, esi + 0xbf4, esi + 0x78c, var_a4, &var_48)))
            var_a0_1.d = sub_4bd350(&var_48, esi + 0xbf4, esi + 0x78c, var_a4, &var_48)
        
        if (not(var_a0_1.d f> sub_4bd350(&var_48, esi + 0xc30, esi + 0x81c, var_a4, &var_48)))
            var_a0_1.d = sub_4bd350(&var_48, esi + 0xc30, esi + 0x81c, var_a4, &var_48)
        
        if (not(var_a0_1.d f> sub_4bd350(&var_84, esi + 0xc6c, esi + 0x66c, var_a4, &var_84)))
            var_a0_1.d = sub_4bd350(&var_84, esi + 0xc6c, esi + 0x66c, var_a4, &var_84)
        
        if (not(var_a0_1.d f> sub_4bd350(&var_84, esi + 0xca8, esi + 0x6fc, var_a4, &var_84)))
            var_a0_1.d = sub_4bd350(&var_84, esi + 0xca8, esi + 0x6fc, var_a4, &var_84)
        
        float xmm3_28 = var_a0_1.d
        
        if (not(xmm3_28 f> sub_4bd520(&var_54, esi + 0xb64, esi + 0x8ac, var_a4, &var_54)))
            xmm3_28 = sub_4bd520(&var_54, esi + 0xb64, esi + 0x8ac, var_a4, &var_54)
        
        bool cond:3_1 = *(esi + 0xf20) == 0
        xmm4 = var_a4
        *(esi + 0xe0c) = xmm4
        
        if (not(cond:3_1))
            *(esi + 0xe04) = *(data_114e818 + 0x2c)
        
        void* eax_53 = *(esi + 0xfc8)
        
        if (eax_53 == 0)
            void* ecx_42 = *(esi + 0x112c)
            
            if (ecx_42 != 0)
                eax_53 = sub_49ddf0(ecx_42)
        
        int32_t eax_54
        int32_t xmm0_42
        eax_54, xmm0_42 = sub_4a7860(eax_53)
        
        if (not(xmm3_28 f> xmm0_42))
            float xmm0_43
            eax_54, xmm0_43 = sub_4a7860(sub_49ddf0(esi))
            xmm3_28 = xmm0_43
        
        float xmm0_45 = (zx.o(0)).d
        xmm3_28 f- 0
        eax_54:1.b = (xmm3_28 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm3_28, 0f) ? 1 : 0) << 2
            | (xmm3_28 < 0f ? 1 : 0)
        bool p_4 = unimplemented  {test ah, 0x44}
        
        if (p_4)
            xmm0_45 = xmm4 + xmm3_28
        
        *(esi + 0xe08) = xmm0_45
        int32_t ecx_46 = *(esi + 0xe14) * 9
        int32_t eax_58 = *(esi + 0xe10) * 9
        *(esi + (eax_58 << 3) + 0xce4) = *(esi + (ecx_46 << 3) + 0xce4)
        *(esi + (eax_58 << 3) + 0xcf4) = *(esi + (ecx_46 << 3) + 0xcf4)
        *(esi + (eax_58 << 3) + 0xd04) = *(esi + (ecx_46 << 3) + 0xd04)
        *(esi + (eax_58 << 3) + 0xd14) = *(esi + (ecx_46 << 3) + 0xd14)
        *(esi + (eax_58 << 3) + 0xd24) = *(esi + (ecx_46 << 3) + 0xd24)
        int32_t* ecx_47 = *(esi + 0xfc0)
        
        if (ecx_47 != *(esi + 0xe30))
            *(esi + 0xe30) = ecx_47
            
            if (ecx_47 != 0)
                int32_t var_3c[0xc]
                sub_4c5670(ecx_47, &var_3c)
                sub_4c5920(&var_3c)
                xmm4 = var_a4
        
        void* edx_38 = *(esi + 0xf00)
        int128_t* ebx_1
        
        if (edx_38 == 0 || *edx_38 == 0)
            ebx_1:1.b = 1
        else
            ebx_1:1.b = 0
        
        char* result_1 = *(esi + 0xe34)
        char* const result_2 = &data_5b2591
        result = &data_5b2591
        
        if (result_1 != 0)
            result = result_1
        
        result.b = *result
        char var_99_1 = result.b
        
        if (ebx_1:1.b != 0)
            goto label_49e830
        
        if (result.b == 0)
            ebx_1.b = 1
            result.b = 0
        else
            if (result_1 != 0)
                result_2 = result_1
            
            while (true)
                result.b = *edx_38
                char temp3_1 = *result_2
                bool c_3 = result.b u< temp3_1
                
                if (result.b == temp3_1)
                    if (result.b == 0)
                        result = nullptr
                        break
                    
                    result.b = *(edx_38 + 1)
                    char temp4_1 = result_2[1]
                    c_3 = result.b u< temp4_1
                    
                    if (result.b == temp4_1)
                        edx_38 += 2
                        result_2 = &result_2[2]
                        
                        if (result.b != 0)
                            continue
                        
                        result = nullptr
                        break
                
                result = sbb.d(result, result, c_3) | 1
                break
            
            if (result == 0)
                result.b = var_99_1
            label_49e830:
                ebx_1.b = 0
                
                if (ebx_1:1.b == 0 || result.b == 0)
                    result.b = 0
                else
                    result.b = 1
            else
                ebx_1.b = 1
                result.b = 0
        
        arg3 = *(esi + 0xe60)
        
        if (arg3 != 0)
            if (result.b != 0)
                result = sub_4d95f0(arg3)
            
            if (ebx_1.b != 0)
                sub_4d9540(result, *(esi + 0xf00), *(esi + 0xe60), *(esi + 0xef0))
            
            result, arg3 = sub_48a5e0(esi + 0xe34, *(esi + 0xf00))
            xmm4 = var_a4
        
        arg3.b = var_9a
    
    float xmm0_51 = *(esi + 0xe08)
    xmm0_51 f- 0
    result:1.b = (xmm0_51 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_51, 0f) ? 1 : 0) << 2
        | (xmm0_51 < 0f ? 1 : 0)
    bool p_6 = unimplemented  {test ah, 0x44}
    
    if (p_6)
        *arg5 = 1
        xmm0_51 = *(esi + 0xe08)
    
    if (not(xmm4 < xmm0_51))
        *(esi + 0xe08) = 0
    
    *(esi + 0xffc) += 1
    result.b = arg3.b
    @__security_check_cookie@4(eax_1 ^ &var_a4)
    return result
}
