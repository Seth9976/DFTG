// 函数名称: sub_551980
// 虚拟地址: 0x551980
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

BOOL __fastcallsub_551980(int32_t* arg1)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_5a3500
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_7c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    BOOL result = *arg1
    float var_40
    int128_t var_38
    
    if (result == 3)
        int32_t eax_3 = GetKeyState(0x20)
        float var_3c
        
        if ((0x8000 & eax_3.w) != 0)
            data_1267878 = 1
            data_126787c = 1
            result = sub_489e40(&var_40)
            float xmm1_1 = var_40
            data_1267880 = xmm1_1
            data_1267884 = var_3c
            data_1267890 = 0
            data_1267888 = xmm1_1
            data_126788c = var_3c
        else if (data_11e7060.b != 0 || data_11e7062 != 0)
            result = sub_551410(1)
        else if (data_11e7060:1.b == 0)
            int32_t* ecx_6 = data_11e6050
            
            if (ecx_6[1] != 0x1e)
                sub_489550(eax_3, &data_5b2591, "ptr->assetType == ASSET_TYPE_UI", 
                    "d:\ax\trunk\ax2017\engine\uidef.cpp", 0x126, "UIDefGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            void* eax_7 = sub_4981f0(ecx_6)
            sub_489e40(&var_40)
            float xmm0_5 = 1f f/ data_126786c
            int32_t edx_2 = *(eax_7 + 8)
            int32_t edx_3 = edx_2 - 1
            float xmm2_3 = var_40 * xmm0_5 f+ data_1267870
            float xmm7_3 = var_3c * xmm0_5 f+ data_1267874
            
            if (edx_2 - 1 s< 0)
            label_551c20:
                data_11e705c = 0
                result = sub_5539f0()
            else
                int32_t* ecx_9 = edx_3 * 0x178 + *eax_7
                int32_t* eax_8 = &ecx_9[0x28]
                
                while (true)
                    int32_t esi_2 = edx_3
                    
                    if (eax_8[-0x17].b == 0 && *(eax_8 - 0x5b) == 0)
                        float xmm3_1 = eax_8[-0x24]
                        float xmm2_4 = eax_8[-0x23]
                        float xmm1_4 = eax_8[-0x22] f- xmm3_1
                        float xmm0_7 = eax_8[-0x21] f- xmm2_4
                        float xmm5_3 = eax_8[-2] f* xmm1_4 + xmm3_1
                        float xmm6_3 = *eax_8 * xmm1_4 + xmm3_1
                        float xmm4_3 = eax_8[-1] f* xmm0_7 + xmm2_4
                        float xmm1_7 = eax_8[1] f* xmm0_7 + xmm2_4
                        
                        if (xmm6_3 < xmm5_3 || xmm1_7 < xmm4_3)
                            sub_489550(eax_8, &data_5b2591, "RectIsNormalized(r)", 
                                "d:\ax\trunk\ax2017\engine\rect.cpp", 0xa4, "RectContains")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_489700()
                            noreturn
                        
                        if (not(xmm2_3 < xmm5_3) && not(xmm7_3 < xmm4_3) && not(xmm6_3 < xmm2_3)
                                && xmm1_7 >= xmm7_3)
                            int32_t i = *ecx_9
                            char eax_9 = 1
                            
                            if (data_11e705c s> 0)
                                eax_9 = 0
                            
                            if ((0x8000 & GetKeyState(0x11)) != 0)
                                int32_t eax_11 = data_11e705c
                                int32_t ecx_10 = 0
                                
                                if (eax_11 s<= 0)
                                label_551c6f:
                                    (&data_11e605c)[eax_11] = i
                                    data_11e705c += 1
                                else
                                    while ((&data_11e605c)[ecx_10] != i)
                                        ecx_10 += 1
                                        
                                        if (ecx_10 s>= eax_11)
                                            goto label_551c6f
                                    
                                    data_11e705c = eax_11 - 1
                                    (&data_11e605c)[ecx_10] = (&data_11e605c)[eax_11 - 1]
                                
                                goto label_551cce
                            
                            result = sub_54dde0(i)
                            
                            if (result.b == 0)
                                if ((0x8000 & GetKeyState(0x12)) == 0 || data_11e705c s<= 0)
                                    data_11e605c = i
                                    data_11e705c = 1
                                label_551cce:
                                    result = sub_5539f0()
                                    data_1267899 = 1
                                    goto label_551cda
                                
                            label_551ce9:
                                
                                if ((0x8000 & GetKeyState(0x12)) != 0)
                                    sub_551620()
                                
                                result = sub_551410(eax_9)
                            else
                                data_1267899 = 0
                            label_551cda:
                                
                                if (data_11e705c s> 0)
                                    goto label_551ce9
                            
                            break
                    
                    edx_3 -= 1
                    ecx_9 -= 0x178
                    eax_8 -= 0x178
                    
                    if (esi_2 s<= 0)
                        goto label_551c20
        else
            data_1267878 = 1
            data_126787c = 2
            sub_489e40(&var_40)
            float xmm1_2 = var_40
            data_1267880 = xmm1_2
            data_1267884 = var_3c
            data_1267890 = 0
            data_1267888 = xmm1_2
            data_126788c = var_3c
            sub_489e40(&var_40)
            int32_t eax_4
            int32_t edx_1
            eax_4, edx_1 = sub_550a50(var_40, var_3c)
            data_1267894 = eax_4
            int128_t* eax_6 = sub_5511b0(&var_38, edx_1, 1, &var_38)
            int32_t* ecx_5 = data_11e6050
            int128_t xmm0_3 = *eax_6
            data_1267898 = 1
            data_126789c = xmm0_3
            
            if (ecx_5[1] != 0x1e)
                sub_489550(eax_6, &data_5b2591, "ptr->assetType == ASSET_TYPE_UI", 
                    "d:\ax\trunk\ax2017\engine\uidef.cpp", 0x126, "UIDefGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            result = sub_4981f0(ecx_5)
            data_12678bc.o = *(result + 0xc)
    else
        char* var_48
        char* result_1
        
        if (result == 0x1b)
            char* eax_16 = arg1[6]
            char* edx_4 = &data_5b2591
            
            if (eax_16 != 0)
                edx_4 = eax_16
            
            sub_4e5700(&result_1, edx_4)
            int32_t var_14_1 = 0
            char* const result_5 = &data_5b2591
            char* result_2 = result_1
            
            if (result_2 != 0)
                result_5 = result_2
            
            result = sub_518420(result_5)
            
            if (*(result + 4) == 3)
                char* eax_17 = data_11e6058
                int32_t* ecx_14 = data_11e6050
                var_48 = eax_17
                data_11e6058 = &eax_17[1]
                void* eax_19
                int32_t ecx_15
                eax_19, ecx_15 = sub_4c8c70(ecx_14)
                int32_t edi_1 = *(eax_19 + 8)
                int32_t var_84_2 = ecx_15
                int32_t* eax_20 = sub_4cf8e0(data_12baaec, 0)
                sub_518870(eax_20, eax_20, eax_19, edi_1)
                char** edi_3 = edi_1 * 0x178 + *eax_19
                char* esi_4 = var_48
                char* var_80_3 = esi_4
                *edi_3 = esi_4
                edi_3[1] = 1
                var_14_1.b = 2
                char* eax_22 = *sub_48a9d0(&var_48, "Rect-%d")
                char* edx_6 = &data_5b2591
                
                if (eax_22 != 0)
                    edx_6 = eax_22
                
                sub_4ceb40(&edi_3[2], edx_6)
                var_14_1.b = 3
                
                if (data_aca1f4 != 0)
                    char* eax_23 = var_48
                    
                    if (eax_23 != 0 && *eax_23 != 0)
                        char* eax_24 = sub_48a080(&var_48)
                        int32_t temp1_1 = *(eax_24 + 4)
                        *(eax_24 + 4) -= 1
                        
                        if (temp1_1 == 1)
                            sub_4984f0(eax_24, *(eax_24 + 0xc) + 0x10)
                
                var_14_1.b = 0
                float eax_25
                int32_t edx_9
                eax_25, edx_9 = sub_48f600(result)
                float var_30_1 = eax_25
                int32_t var_2c_1 = edx_9
                float var_4c
                sub_489e40(&var_4c)
                float xmm0_8 = 1f f/ data_126786c
                int32_t* edx_10 = &var_38:8
                float xmm1_10 = var_48 * xmm0_8 f+ data_1267874
                var_4c = var_4c * xmm0_8 f+ data_1267870
                var_48 = xmm1_10
                void var_60
                var_38 = *sub_4829a0(&var_60, edx_10, &var_4c, &var_60)
                void var_70
                *(edi_3 + 0x10) = *sub_4be600(&var_70, edx_10, &var_38, &var_70)
                edi_3[0x22] = result
                data_11e605c = esi_4
                data_11e705c = 1
                sub_5539f0()
                char* ecx_25
                ecx_25.b = 1
                sub_54dee0(ecx_25)
                sub_5151c0(data_11e6050)
                result = sub_5539f0()
                int32_t var_14_3 = 4
            else
                int32_t var_14_2 = 1
            
            if (data_aca1f4 != 0)
                result = result_1
                
                if (result != 0 && *result != 0)
                    result = sub_48a080(&result_1)
                    int32_t temp2_1 = *(result + 4)
                    *(result + 4) -= 1
                    
                    if (temp2_1 == 1)
                        result = sub_4984f0(result, *(result + 0xc) + 0x10)
        else if (result == 9)
            data_126786c = (_mm_cvtepi32_ps(zx.o(arg1[3])) * 0.00200000009f + 1f) f* data_126786c
        else if (result != 1)
            if (result == 7)
                result = sub_553240()
        else if (data_11e7060.b == 0 && data_11e7062 == 0)
            if (data_11e7060:1.b == 0 || arg1[1] != 0xd)
                goto label_551f82
            
            data_11e7060 = 0
            data_11e7062 = 0
        else if (arg1[1] != 0xd)
        label_551f82:
            int32_t ecx_29 = arg1[1]
            
            if (ecx_29 != 8)
                goto label_551fa5
            
            if ((0x8000 & GetKeyState(0x11)) != 0)
                result = sub_51af60()
            else
                ecx_29 = arg1[1]
            label_551fa5:
                
                if (ecx_29 != 9)
                label_551fca:
                    int32_t eax_35 = arg1[1]
                    
                    if (eax_35 != 9)
                        goto label_551fe2
                    
                    if ((0x8000 & GetKeyState(0x11)) != 0)
                        result = sub_51afc0()
                    else
                        eax_35 = arg1[1]
                    label_551fe2:
                        
                        if (eax_35 != 0x4f)
                            goto label_551ff7
                        
                        result = GetKeyState(0x11)
                        
                        if ((0x8000 & result.w) == 0)
                            eax_35 = arg1[1]
                        label_551ff7:
                            
                            if (eax_35 != 0xdb)
                            label_552064:
                                
                                if (arg1[1] != 0xdd)
                                label_552091:
                                    result = arg1[1]
                                    
                                    if (result != 0xdb)
                                        goto label_5520ab
                                    
                                    if ((0x8000 & GetKeyState(0x11)) != 0)
                                        result = sub_5518d0()
                                    else
                                        result = arg1[1]
                                    label_5520ab:
                                        
                                        if (result != 0xdd)
                                            goto label_5520c2
                                        
                                        if ((0x8000 & GetKeyState(0x11)) != 0)
                                            result = sub_551840()
                                        else
                                            result = arg1[1]
                                        label_5520c2:
                                            
                                            if (result != 0x43)
                                                if (result != 0x48)
                                                    if (result != 0x4a)
                                                        goto label_5523b2
                                                    
                                                    if ((0x8000 & GetKeyState(0x11)) != 0)
                                                        sub_551620()
                                                        char* ecx_41
                                                        ecx_41.b = 1
                                                        result = sub_54dee0(ecx_41)
                                                    else
                                                        result = arg1[1]
                                                    label_5523b2:
                                                        
                                                        if (result != 0x54)
                                                            goto label_5523c7
                                                        
                                                        result = GetKeyState(0x11)
                                                        
                                                        if ((0x8000 & result.w) != 0)
                                                            data_11e7060:1.b = 0
                                                            
                                                            if (data_11e705c s> 0)
                                                                data_11e7060.b = 1
                                                        else
                                                            result = arg1[1]
                                                        label_5523c7:
                                                            
                                                            if (result != 0x42)
                                                                if (result != 0xbb)
                                                                    goto label_552435
                                                                
                                                                result = GetKeyState(0x11)
                                                                
                                                                if ((0x8000 & result.w) != 0)
                                                                    data_126786c =
                                                                        data_126786c * 1.29999995f
                                                                else
                                                                    result = arg1[1]
                                                                label_552435:
                                                                    
                                                                    if (result != 0xbd)
                                                                        goto label_552450
                                                                    
                                                                    result = GetKeyState(0x11)
                                                                    
                                                                    if ((0x8000 & result.w) != 0)
                                                                        data_126786c =
                                                                            data_126786c / 1.29999995f
                                                                    else
                                                                        result = arg1[1]
                                                                    label_552450:
                                                                        
                                                                        if (result != 0x5a)
                                                                            goto label_552469
                                                                        
                                                                        char* ecx_42
                                                                        result, ecx_42 = GetKeyState(0x11)
                                                                        void* var_84_3
                                                                        int32_t eax_55
                                                                        void* esi_10
                                                                        
                                                                        if ((0x8000 & result.w) == 0)
                                                                            result = arg1[1]
                                                                        label_552469:
                                                                            
                                                                            if (result != 0x59)
                                                                                goto label_552482
                                                                            
                                                                            int16_t eax_52
                                                                            char* ecx_43
                                                                            eax_52, ecx_43 = GetKeyState(0x11)
                                                                            
                                                                            if ((0x8000 & eax_52) != 0)
                                                                                result = data_1267864
                                                                                
                                                                                if (result s< data_1267868)
                                                                                    sub_50c600(ecx_43)
                                                                                    eax_55 = data_1267864 + 1
                                                                                    int32_t var_80_7 = 0x100c
                                                                                    esi_10 =
                                                                                        &(&data_11e6054)[eax_55 * 0x404]
                                                                                    var_84_3 = esi_10
                                                                                    int32_t* var_88_4 = &data_11e6058
                                                                                    goto label_55257d
                                                                            else
                                                                                result = arg1[1]
                                                                            label_552482:
                                                                                
                                                                                if (result == 0x2e)
                                                                                    int32_t i_1 = 0
                                                                                    int32_t i_7 = 0
                                                                                    
                                                                                    if (data_11e705c s> 0)
                                                                                        do
                                                                                            int32_t* ecx_44 = data_11e6050
                                                                                            int32_t edi_6 = (&data_11e605c)[i_1]
                                                                                            
                                                                                            if (ecx_44[1] != 0x1e)
                                                                                                sub_489550(i_1, &data_5b2591, 
                                                                                                    "ptr->assetType == ASSET_TYPE_UI", 
                                                                                                    "d:\ax\trunk\ax2017\engine\uidef.cpp", 
                                                                                                    0x126, "UIDefGet")
                                                                                                
                                                                                                if (IsDebuggerPresent() == 1)
                                                                                                    breakpoint
                                                                                                
                                                                                                sub_489700()
                                                                                                noreturn
                                                                                            
                                                                                            int32_t* eax_53 = sub_4981f0(ecx_44)
                                                                                            int32_t ecx_45 = 0
                                                                                            int32_t* esi_8 = eax_53
                                                                                            int32_t* edx_17 = nullptr
                                                                                            
                                                                                            while (true)
                                                                                                if (ecx_45 s>= esi_8[2])
                                                                                                    sub_489550(eax_53, &data_5b2591, 
                                                                                                        "Halt", 
                                                                                                        "d:\ax\trunk\ax2017\engine\editor\u"
                                                                                                    "ieditor.cpp", 
                                                                                                        0x57e, "DeleteElement")
                                                                                                    
                                                                                                    if (IsDebuggerPresent() == 1)
                                                                                                        breakpoint
                                                                                                    
                                                                                                    sub_489700()
                                                                                                    noreturn
                                                                                                
                                                                                                eax_53 = *esi_8
                                                                                                
                                                                                                if (*(edx_17 + eax_53) == edi_6)
                                                                                                    break
                                                                                                
                                                                                                ecx_45 += 1
                                                                                                edx_17 = &edx_17[0x5e]
                                                                                            
                                                                                            int32_t* eax_58 =
                                                                                                sub_4cf8e0(data_12baaec, 0)
                                                                                            sub_518ab0(eax_58, eax_58, esi_8, 
                                                                                                ecx_45, 0)
                                                                                            i_1 = i_7 + 1
                                                                                            i_7 = i_1
                                                                                        while (i_1 s< data_11e705c)
                                                                                    
                                                                                    int32_t* ecx_51 = data_11e6050
                                                                                    data_11e705c = 0
                                                                                    sub_5151c0(ecx_51)
                                                                                    sub_5539f0()
                                                                                    char* ecx_52
                                                                                    ecx_52.b = 1
                                                                                    result = sub_54dee0(ecx_52)
                                                                                else if (result != 0x53)
                                                                                label_55263c:
                                                                                    int32_t eax_63 = arg1[1]
                                                                                    
                                                                                    if (eax_63 != 0x53)
                                                                                        goto label_552657
                                                                                    
                                                                                    int16_t eax_62
                                                                                    char* ecx_54
                                                                                    eax_62, ecx_54 = GetKeyState(0x11)
                                                                                    
                                                                                    if ((0x8000 & eax_62) != 0)
                                                                                        result = sub_5175f0(ecx_54)
                                                                                    else
                                                                                        eax_63 = arg1[1]
                                                                                    label_552657:
                                                                                        int32_t eax_64
                                                                                        
                                                                                        if (eax_63 == 0x41)
                                                                                            eax_64 = GetKeyState(0x11)
                                                                                        
                                                                                        if (eax_63 != 0x41
                                                                                                || (0x8000 & eax_64.w) == 0
                                                                                                || data_11e7060.b != 0)
                                                                                            int16_t eax_72
                                                                                            
                                                                                            if (arg1[1] == 0x44)
                                                                                                eax_72 = GetKeyState(0x11)
                                                                                            
                                                                                            if (arg1[1] == 0x44
                                                                                                    && (0x8000 & eax_72) != 0
                                                                                                    && data_11e7060.b == 0)
                                                                                                goto label_551c20
                                                                                            
                                                                                            result = arg1[1]
                                                                                            float var_3c_9
                                                                                            
                                                                                            if (result == 0x27)
                                                                                                bool cond:5_1 = (arg1[2].b & 1) == 0
                                                                                                var_40 = 1f
                                                                                                int32_t var_3c_4 = 0
                                                                                                
                                                                                                if (cond:5_1)
                                                                                                    result = sub_54efa0(&var_40)
                                                                                                else
                                                                                                    var_40 = 10f
                                                                                                    var_3c_9 = (zx.o(0)).d f* 10f
                                                                                                    result = sub_54efa0(&var_40)
                                                                                            else if (result == 0x25)
                                                                                                bool cond:6_1 = (arg1[2].b & 1) == 0
                                                                                                var_40 = -1f
                                                                                                int32_t var_3c_5 = 0
                                                                                                
                                                                                                if (cond:6_1)
                                                                                                    result = sub_54efa0(&var_40)
                                                                                                else
                                                                                                    var_40 = -10f
                                                                                                    var_3c_9 = (zx.o(0)).d f* 10f
                                                                                                    result = sub_54efa0(&var_40)
                                                                                            else if (result == 0x26)
                                                                                                bool cond:7_1 = (arg1[2].b & 1) == 0
                                                                                                var_40 = 0f
                                                                                                int32_t var_3c_6 = 0xbf800000
                                                                                                
                                                                                                if (not(cond:7_1))
                                                                                                    var_40 = 0f
                                                                                                    float var_3c_7 = -1f * 10f
                                                                                                
                                                                                                result = sub_54efa0(&var_40)
                                                                                            else if (result == 0x28)
                                                                                                bool cond:8_1 = (arg1[2].b & 1) == 0
                                                                                                var_40 = 0f
                                                                                                int32_t var_3c_8 = 0x3f800000
                                                                                                
                                                                                                if (cond:8_1)
                                                                                                    result = sub_54efa0(&var_40)
                                                                                                else
                                                                                                    var_40 = 0f
                                                                                                    var_3c_9 = 0x3f800000 f* 10f
                                                                                                    result = sub_54efa0(&var_40)
                                                                                        else
                                                                                            int32_t* ecx_55 = data_11e6050
                                                                                            
                                                                                            if (ecx_55[1] != 0x1e)
                                                                                                sub_489550(eax_64, &data_5b2591, 
                                                                                                    "ptr->assetType == ASSET_TYPE_UI", 
                                                                                                    "d:\ax\trunk\ax2017\engine\uidef.cpp", 
                                                                                                    0x126, "UIDefGet")
                                                                                                
                                                                                                if (IsDebuggerPresent() == 1)
                                                                                                    breakpoint
                                                                                                
                                                                                                sub_489700()
                                                                                                noreturn
                                                                                            
                                                                                            char* result_4 = sub_4981f0(ecx_55)
                                                                                            int32_t* ecx_56 = data_11e6050
                                                                                            char* result_3 = result_4
                                                                                            result_1 = result_3
                                                                                            
                                                                                            if (ecx_56[1] != 0x1e)
                                                                                                sub_489550(result_4, &data_5b2591, 
                                                                                                    "ptr->assetType == ASSET_TYPE_UI", 
                                                                                                    "d:\ax\trunk\ax2017\engine\uidef.cpp", 
                                                                                                    0x126, "UIDefGet")
                                                                                                
                                                                                                if (IsDebuggerPresent() == 1)
                                                                                                    breakpoint
                                                                                                
                                                                                                sub_489700()
                                                                                                noreturn
                                                                                            
                                                                                            char* eax_65 = sub_4981f0(ecx_56)
                                                                                            int32_t esi_12 = 0
                                                                                            var_48 = eax_65
                                                                                            int32_t i_8 = 0
                                                                                            
                                                                                            if (*(eax_65 + 8) s> 0)
                                                                                                int32_t edi_7 = 0
                                                                                                int32_t i_2
                                                                                                char* ecx_60
                                                                                                
                                                                                                do
                                                                                                    int32_t eax_66 =
                                                                                                        sub_54e110(*(*eax_65 + edi_7), nullptr)
                                                                                                    int32_t ecx_59 = esi_12 + 1
                                                                                                    edi_7 += 0x178
                                                                                                    
                                                                                                    if (*(eax_66 + 0x45) != 0)
                                                                                                        ecx_59 = esi_12
                                                                                                    
                                                                                                    i_2 = i_8 + 1
                                                                                                    esi_12 = ecx_59
                                                                                                    i_8 = i_2
                                                                                                    ecx_60 = var_48
                                                                                                    eax_65 = ecx_60
                                                                                                while (i_2 s< *(ecx_60 + 8))
                                                                                                result_3 = result_1
                                                                                            
                                                                                            bool cond:9_1 = data_11e705c == esi_12
                                                                                            data_11e705c = 0
                                                                                            
                                                                                            if (cond:9_1)
                                                                                                result = sub_5539f0()
                                                                                            else
                                                                                                int32_t i_9 = 0
                                                                                                
                                                                                                if (*(result_3 + 8) s> 0)
                                                                                                    int32_t* esi_13 = nullptr
                                                                                                    int32_t i_3
                                                                                                    
                                                                                                    do
                                                                                                        if (*(sub_54e110(*(*result_3 + esi_13), 
                                                                                                                nullptr) + 0x45) == 0)
                                                                                                            (&data_11e605c)[data_11e705c] =
                                                                                                                *(esi_13 + *result_3)
                                                                                                            data_11e705c += 1
                                                                                                        
                                                                                                        esi_13 = &esi_13[0x5e]
                                                                                                        i_3 = i_9 + 1
                                                                                                        i_9 = i_3
                                                                                                    while (i_3 s< *(result_3 + 8))
                                                                                                
                                                                                                result = sub_5539f0()
                                                                                else
                                                                                    if ((0x8000 & GetKeyState(0x11)) == 0)
                                                                                        goto label_55263c
                                                                                    
                                                                                    int16_t eax_61
                                                                                    char* ecx_53
                                                                                    eax_61, ecx_53 = GetKeyState(0x10)
                                                                                    
                                                                                    if ((0x8000 & eax_61) == 0)
                                                                                        goto label_55263c
                                                                                    
                                                                                    result = sub_517940(ecx_53)
                                                                        else if (data_1267864 s> 1)
                                                                            sub_50c600(ecx_42)
                                                                            eax_55 = data_1267864 - 1
                                                                            int32_t var_80_6 = 0x100c
                                                                            esi_10 =
                                                                                &(&data_11e6054)[eax_55 * 0x404]
                                                                            var_84_3 = esi_10
                                                                            int32_t* var_88_3 = &data_11e6058
                                                                        label_55257d:
                                                                            data_1267864 = eax_55
                                                                            sub_579300(&data_11e6058, var_84_3, 
                                                                                0x100c)
                                                                            int32_t* eax_57 = data_11e6050
                                                                            sub_4cef80(eax_57, **eax_57, 
                                                                                **(esi_10 + 0x100c), data_12baaec)
                                                                            sub_5151c0(data_11e6050)
                                                                            result = sub_5539f0()
                                                            else
                                                                data_11e705c = 0
                                                                result = sub_5539f0()
                                                                data_11e7060 = 0x100
                                                else
                                                    result.b = data_1511adc == 0
                                                    data_1511adc = result.b
                                                    
                                                    if (result.b == 0)
                                                        result = sub_4cd640(data_11e6054, (zx.o(0)).d)
                                                    else
                                                        int32_t ecx_34 = data_11e6054
                                                        int32_t esi_5 = 0
                                                        
                                                        if (ecx_34 == 0)
                                                            sub_489550(result, &data_5b2591, 
                                                                "id != DATAID_NULL", 
                                                                "
                                                                    d:\ax\trunk\ax2017\engine\dataarray.h", 
                                                                0x6c, 
                                                                "DataArray<struct UIState>::DataArrayGet")
                                                            
                                                            if (IsDebuggerPresent() == 1)
                                                                breakpoint
                                                            
                                                            sub_489700()
                                                            noreturn
                                                        
                                                        uint32_t edx_14 = zx.d(ecx_34.w)
                                                        int32_t edi_4
                                                        
                                                        if (edx_14 u< data_6c9d94)
                                                            edi_4 = data_6c9d90
                                                            result = edx_14 * 0x438
                                                        
                                                        if (edx_14 u>= data_6c9d94
                                                                || *(result + edi_4 + 0x434) != ecx_34)
                                                            sub_489550(result, &data_5b2591, 
                                                                "DataArrayTryToGet(id) != NULL", 
                                                                "
                                                                    d:\ax\trunk\ax2017\engine\dataarray.h", 
                                                                0x6d, 
                                                                "DataArray<struct UIState>::DataArrayGet")
                                                            
                                                            if (IsDebuggerPresent() == 1)
                                                                breakpoint
                                                            
                                                            sub_489700()
                                                            noreturn
                                                        
                                                        int32_t eax_42 = edx_14 * 0x438
                                                        int32_t* ecx_35 = *(eax_42 + edi_4 + 4)
                                                        
                                                        if (ecx_35[1] != 0x1e)
                                                            sub_489550(eax_42, &data_5b2591, 
                                                                "ptr->assetType == ASSET_TYPE_UI", 
                                                                "d:\ax\trunk\ax2017\engine\uidef.cpp", 
                                                                0x126, "UIDefGet")
                                                            
                                                            if (IsDebuggerPresent() == 1)
                                                                breakpoint
                                                            
                                                            sub_489700()
                                                            noreturn
                                                        
                                                        char* eax_43 = sub_4981f0(ecx_35)
                                                        int32_t i_4 = 0
                                                        var_48 = eax_43
                                                        int32_t i_6 = 0
                                                        int32_t edi_5 = *(eax_43 + 8)
                                                        
                                                        if (edi_5 s> 0)
                                                            if (edi_5 u>= 8 && data_6cf684 s>= 2)
                                                                int32_t eax_45 = edi_5 & 0x80000007
                                                                
                                                                if (eax_45 s< 0)
                                                                    eax_45 = ((eax_45 - 1) | 0xfffffff8) + 1
                                                                
                                                                int32_t xmm6_4[0x4] = zx.o(0)
                                                                int32_t xmm7_4[0x4] = zx.o(0)
                                                                void* ecx_37 = *eax_43 + 0x2f4
                                                                
                                                                do
                                                                    uint64_t xmm2_9 =
                                                                        zx.q(*(ecx_37 + 0x178))
                                                                    ecx_37 += 0xbc0
                                                                    i_4 += 8
                                                                    uint128_t xmm1_11 =
                                                                        zx.o(*(ecx_37 - 0xd38))
                                                                    uint128_t xmm4_4 =
                                                                        zx.o(*(ecx_37 - 0xe48))
                                                                    uint64_t xmm3_2 =
                                                                        zx.q(*(ecx_37 - 0x9dc))
                                                                    int32_t xmm5_5[0x4] =
                                                                        _mm_unpacklo_epi32(
                                                                        zx.o(*(ecx_37 - 0xeb0)), 
                                                                        zx.q(*(ecx_37 - 0xbc0)))
                                                                    int64_t xmm0_17 =
                                                                        zx.q(*(ecx_37 - 0xb58))
                                                                    int64_t xmm1_12 =
                                                                        _mm_unpacklo_epi32(xmm1_11, xmm2_9)
                                                                    uint64_t xmm2_10 =
                                                                        zx.q(*(ecx_37 - 0x9e0))
                                                                    int32_t xmm5_6[0x4] =
                                                                        _mm_unpacklo_epi32(xmm5_5, xmm1_12)
                                                                    int32_t xmm1_13[0x4] =
                                                                        zx.o(*(ecx_37 - 0xcd0))
                                                                    int32_t xmm5_7[0x4] =
                                                                        __pcmpeqd_xmmdq_memdq(xmm5_6, 
                                                                        data_60c8c0)
                                                                    int32_t xmm4_5[0x4] =
                                                                        _mm_unpacklo_epi32(xmm4_4, xmm0_17)
                                                                    uint64_t xmm0_18 =
                                                                        zx.q(*(ecx_37 - 0xb54))
                                                                    int64_t xmm1_14 =
                                                                        _mm_unpacklo_epi32(xmm1_13, xmm2_10)
                                                                    int32_t xmm2_12[0x4] =
                                                                        _mm_unpacklo_epi32(
                                                                        zx.o(*(ecx_37 - 0xe44)), xmm0_18)
                                                                    int32_t xmm4_6[0x4] =
                                                                        _mm_unpacklo_epi32(xmm4_5, xmm1_14)
                                                                    int32_t xmm2_13[0x4] =
                                                                        _mm_unpacklo_epi32(xmm2_12, 
                                                                        _mm_unpacklo_epi32(
                                                                            zx.o(*(ecx_37 - 0xccc)), xmm3_2))
                                                                    uint128_t xmm1_17 =
                                                                        zx.o(*(ecx_37 - 0x758))
                                                                    int32_t xmm4_7[0x4] =
                                                                        _mm_add_epi32(xmm4_6, xmm2_13)
                                                                    uint64_t xmm3_3 =
                                                                        zx.q(*(ecx_37 - 0x400))
                                                                    int64_t xmm1_18 = _mm_unpacklo_epi32(
                                                                        xmm1_17, zx.q(*(ecx_37 - 0x468)))
                                                                    uint64_t xmm2_15 =
                                                                        zx.q(*(ecx_37 - 0x3fc))
                                                                    int32_t xmm0_20[0x4] =
                                                                        _mm_max_epi32(xmm6_4, xmm4_7)
                                                                    uint128_t xmm4_8 =
                                                                        zx.o(*(ecx_37 - 0x864))
                                                                    xmm6_4 = (xmm0_20 & xmm5_7)
                                                                        | (xmm5_7 & not.o(xmm6_4))
                                                                    int32_t xmm5_10[0x4] =
                                                                        _mm_unpacklo_epi32(
                                                                        zx.o(*(ecx_37 - 0x8d0)), 
                                                                        zx.q(*(ecx_37 - 0x5e0)))
                                                                    int64_t xmm0_24 =
                                                                        zx.q(*(ecx_37 - 0x574))
                                                                    int32_t xmm5_11[0x4] =
                                                                        _mm_unpacklo_epi32(xmm5_10, xmm1_18)
                                                                    int32_t xmm1_19[0x4] =
                                                                        zx.o(*(ecx_37 - 0x6ec))
                                                                    int32_t xmm5_12[0x4] =
                                                                        __pcmpeqd_xmmdq_memdq(xmm5_11, 
                                                                        data_60c8c0)
                                                                    xmm7_4 = (_mm_max_epi32(xmm7_4, 
                                                                        _mm_add_epi32(
                                                                            _mm_unpacklo_epi32(
                                                                                _mm_unpacklo_epi32(xmm4_8, xmm0_24), 
                                                                                _mm_unpacklo_epi32(xmm1_19, xmm2_15)), 
                                                                            _mm_unpacklo_epi32(
                                                                            _mm_unpacklo_epi32(
                                                                                zx.o(*(ecx_37 - 0x868)), 
                                                                                zx.q(*(ecx_37 - 0x578))), 
                                                                            _mm_unpacklo_epi32(
                                                                            zx.o(*(ecx_37 - 0x6f0)), xmm3_3))))
                                                                        & xmm5_12) | (xmm5_12 & not.o(xmm7_4))
                                                                while (i_4 s< edi_5 - eax_45)
                                                                
                                                                eax_43 = var_48
                                                                int32_t xmm6_5[0x4] =
                                                                    _mm_max_epi32(xmm6_4, xmm7_4)
                                                                i_6 = i_4
                                                                int32_t xmm6_6[0x4] = _mm_max_epi32(
                                                                    xmm6_5, _mm_bsrli_si128(xmm6_5, 8))
                                                                esi_5 = _mm_max_epi32(xmm6_6, 
                                                                    _mm_bsrli_si128(xmm6_6, 4))
                                                            
                                                            if (i_4 s< edi_5)
                                                                int32_t* edx_16 =
                                                                    *eax_43 + 0x70 + i_4 * 0x178
                                                                int32_t i_10 = edi_5 - i_6
                                                                int32_t i_5
                                                                
                                                                do
                                                                    if (edx_16[-0x1b] == 6)
                                                                        int32_t eax_50 = *edx_16 + edx_16[-1]
                                                                        
                                                                        if (esi_5 s<= eax_50)
                                                                            esi_5 = eax_50
                                                                    
                                                                    edx_16 = &edx_16[0x5e]
                                                                    i_5 = i_10
                                                                    i_10 -= 1
                                                                while (i_5 != 1)
                                                        
                                                        float xmm2_20 = _mm_cvtepi32_ps(zx.o(esi_5))
                                                        result =
                                                            sub_4cd640(data_11e6054, xmm2_20 / 1000f)
                                            else if (data_11e705c == 1)
                                                data_11e7062 = 1
                                else
                                    if ((0x8000 & GetKeyState(0x11)) == 0)
                                        goto label_552091
                                    
                                    if ((0x8000 & GetKeyState(0x10)) == 0)
                                        goto label_552091
                                    
                                    result = sub_5517e0()
                            else
                                if ((0x8000 & GetKeyState(0x11)) == 0)
                                    goto label_552064
                                
                                if ((0x8000 & GetKeyState(0x10)) == 0)
                                    goto label_552064
                                
                                result = sub_551810()
                        else if (data_11e705c == 1)
                            result = sub_54e110(data_11e605c, nullptr)
                            
                            if (*(result + 4) == 2)
                                result = sub_51b030(*(result + 0xc8), 0)
                else
                    if ((0x8000 & GetKeyState(0x11)) == 0)
                        goto label_551fca
                    
                    if ((0x8000 & GetKeyState(0x10)) == 0)
                        goto label_551fca
                    
                    result = sub_51af60()
        else
            data_11e7060 = 0
            data_11e7062 = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
