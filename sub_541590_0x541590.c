// 函数名称: sub_541590
// 虚拟地址: 0x541590
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_541590(int32_t arg1, void* arg2, void* arg3, int32_t* arg4, int32_t arg5, int32_t* arg6)
{
    // 第一条实际指令: void* edi = arg3
    void* edi = arg3
    int32_t* ecx = arg4
    int32_t esi = *(arg2 + 4)
    void* var_84 = edi
    void* eax_1 = ecx[1]
    char const* const var_9c_1
    int32_t var_98_1
    char const* const var_94_1
    char const* const ecx_1
    
    if (esi != eax_1)
        var_94_1 = "AtlasMakerPlaceRects"
        var_98_1 = 0x4fc
        var_9c_1 = "d:\ax\trunk\ax2017\engine\editor\atlasmaker.cpp"
        ecx_1 = "packAssets.mSize == locs.mSize"
    else if (eax_1 s> 0)
        int32_t edx = 0
        int32_t var_74_1 = 0
        int128_t var_60_1 = *(*ecx + 4)
        
        if (esi s<= 0)
        label_54192d:
            int32_t* esi_4 = arg6
            int32_t ecx_23 = 0
            int32_t var_74_2 = 0
            int32_t edx_15 = esi_4[1]
            
            if (edx_15 s<= 0)
            label_5419b7:
                esi_4[1] = 0
                esi_4[3] = 0
                return var_60_1:8.d
            
            eax_1 = nullptr
            void* var_78_3 = nullptr
            
            while (true)
                if (eax_1 s< 0 || ecx_23 s>= edx_15)
                    var_94_1 = "XArray<struct AtlasFontLayerItem>::operator []"
                    var_98_1 = 0xb5
                    goto label_5419d5
                
                void* esi_6 = *esi_4 + eax_1
                int32_t* ecx_24 = *esi_6
                
                if (ecx_24[1] != 0x12)
                    break
                
                void* eax_27 = sub_4981f0(ecx_24)
                int32_t ecx_27 = *(esi_6 + 4) * 0x30
                void* ecx_28 = ecx_27 + *(eax_27 + 0x18)
                
                if (ecx_27 != neg.d(*(eax_27 + 0x18)))
                    *(ecx_28 + 8) = *(edi + 0x44)
                    *(ecx_28 + 0x10) = *(edi + 0x48)
                
                int32_t eax_30 = *(esi_6 + 8)
                
                if (eax_30 != 0)
                    _aligned_free_base(eax_30)
                
                sub_4c7a40(*esi_6)
                esi_4 = arg6
                ecx_23 = var_74_2 + 1
                eax_1 = var_78_3 + 0x1c
                var_74_2 = ecx_23
                edx_15 = esi_4[1]
                var_78_3 = eax_1
                
                if (ecx_23 s>= edx_15)
                    goto label_5419b7
                
                continue
        else
            eax_1 = arg2
            int32_t edi_1 = 0
            int32_t var_7c_1 = 0
            
            while (true)
                if (edi_1 s< 0 || edx s>= ecx[1])
                    var_94_1 = "XArray<struct PackLoc>::operator []"
                    var_98_1 = 0xc3
                else
                    int32_t* edx_2 = *ecx + edi_1
                    
                    if (edx_2[5] != arg5)
                    label_541875:
                        edi = var_84
                    label_54187d:
                        var_7c_1 += 0x18
                        edx = var_74_1 + 1
                        esi = *(eax_1 + 4)
                        var_74_1 = edx
                        
                        if (edx s>= esi)
                            goto label_54192d
                        
                        edi_1 = var_7c_1
                        continue
                    else
                        int32_t ecx_2 = edx_2[1]
                        
                        if (var_60_1.d s< ecx_2)
                            ecx_2 = var_60_1.d
                        
                        int32_t ecx_3 = edx_2[3]
                        
                        if (var_60_1:8.d s> ecx_3)
                            ecx_3 = var_60_1:8.d
                        
                        int32_t var_48_1 = ecx_3
                        int32_t ecx_4 = edx_2[2]
                        
                        if (var_60_1:4.d s< ecx_4)
                            ecx_4 = var_60_1:4.d
                        
                        int32_t var_4c_1 = ecx_4
                        int32_t ecx_5 = edx_2[4]
                        
                        if (var_60_1:0xc.d s> ecx_5)
                            ecx_5 = var_60_1:0xc.d
                        
                        int32_t var_44_1 = ecx_5
                        int32_t ecx_6 = *edx_2
                        var_60_1 = ecx_2.o
                        
                        if (ecx_6 s>= 0 && ecx_6 s< esi)
                            int32_t eax_4 = ecx_6 * 7
                            int32_t ecx_8 = *arg2
                            int32_t* esi_1 = *(ecx_8 + (eax_4 << 2))
                            int32_t edx_3 = esi_1[1]
                            void var_24
                            
                            if (edx_3 == 3)
                                int32_t* eax_5 = sub_4981f0(esi_1)
                                int32_t* esi_2 = *eax_5
                                
                                if (sub_544360(eax_5, esi_2, &var_24, var_84) == 0)
                                    char* const ecx_22 = &data_5b2591
                                    char* eax_25 = esi_1[8]
                                    
                                    if (eax_25 != 0)
                                        ecx_22 = eax_25
                                    
                                    char* const var_94_6 = ecx_22
                                    sub_489550(sub_4892e0("AtlasMaker: Image load failed %s"), 
                                        &data_5b2591, "Halt", 
                                        "d:\ax\trunk\ax2017\engine\editor\atlasmaker.cpp", 0x4b6, 
                                        "AtlasMakerPlaceAssetTexture_New")
                                    goto label_5419ec
                                
                                int32_t edx_5 = esi_2[6]
                                int32_t var_14_1 = edx_5
                                int32_t var_20
                                int32_t var_18_1 = sub_5234e0(var_20, edx_5)
                                sub_53fb90(&var_24, &edx_2[1], &data_5d35a4, &var_24, var_84)
                                esi_2[0xa] = *(var_84 + 0x44)
                                esi_2[0xc] = *(var_84 + 0x48)
                                int32_t edx_7 = edx_2[2]
                                esi_2[0xd] = edx_2[1]
                                esi_2[0xe] = edx_7
                                *esi_2 = edx_2[3] - edx_2[1]
                                edi = var_84
                                esi_2[1] = edx_2[4] - edx_2[2]
                                esi_2[2] = *(edi + 0x4c)
                                sub_53f7b0(esi_1)
                                ecx = arg4
                                eax_1 = arg2
                                goto label_54187d
                            
                            if (edx_3 == 0x12)
                                int32_t edx_8 = *(ecx_8 + (eax_4 << 2) + 8)
                                int32_t ecx_14 = *(ecx_8 + (eax_4 << 2) + 4)
                                eax_1 =
                                    sub_541410(&var_24, esi_1, arg6, ecx_14, &var_24, *(var_84 + 0x30))
                                
                                if (esi_1[1] != 0x12)
                                    break
                                
                                int32_t edx_11 = edx_8 * 9
                                eax_1 = *(*(sub_4981f0(esi_1) + 0x18) + ecx_14 * 0x30 + 0x20)
                                float xmm2_1 = *(eax_1 + (edx_11 << 2) + 4)
                                float xmm0_4
                                
                                if (not(*(eax_1 + (edx_11 << 2) + 0xc) f< xmm2_1))
                                    xmm0_4 = *(eax_1 + (edx_11 << 2) + 8)
                                
                                if (*(eax_1 + (edx_11 << 2) + 0xc) f< xmm2_1
                                        || *(eax_1 + (edx_11 << 2) + 0x10) < xmm0_4)
                                    var_94_1 = "RectTopLeft"
                                    var_98_1 = 0x127
                                    var_9c_1 = "d:\ax\trunk\ax2017\engine\rect.cpp"
                                    ecx_1 = "RectIsNormalized(r)"
                                    goto label_5419e4
                                
                                int32_t esi_3 = int.d(sub_4827e0(xmm2_1 + 0.5f))
                                int32_t eax_21 = int.d(sub_4827e0(xmm0_4 + 0.5f))
                                int32_t var_68 = esi_3
                                int32_t var_64_1 = eax_21
                                sub_53fb90(&var_24, &edx_2[1], &var_68, &var_24, var_84)
                                int32_t xmm0_11 = _mm_cvtepi32_ps(zx.o(edx_2[1]))
                                int32_t var_3c_1 = _mm_cvtepi32_ps(zx.o(edx_2[2]))
                                int32_t var_38_1 = _mm_cvtepi32_ps(zx.o(edx_2[3]))
                                int32_t var_34_1 = _mm_cvtepi32_ps(zx.o(edx_2[4]))
                                *(eax_1 + edx_8 * 0x24 + 4) = xmm0_11.o
                            
                            eax_1 = arg2
                            ecx = arg4
                            goto label_541875
                        
                        var_94_1 = "XArray<struct PackAsset>::operator []"
                        var_98_1 = 0xc3
                
            label_5419d5:
                var_9c_1 = "d:\ax\trunk\ax2017\engine\xarray.h"
                ecx_1 = "index >= 0 && index < mSize"
                goto label_5419e4
        
        var_94_1 = "FontGetDef"
        var_98_1 = 0x2e6
        var_9c_1 = "d:\ax\trunk\ax2017\engine\assetutils.cpp"
        ecx_1 = "assetPtr->assetType == ASSET_TYPE_FONT"
    else
        var_94_1 = "AtlasMakerPlaceRects"
        var_98_1 = 0x4fd
        var_9c_1 = "d:\ax\trunk\ax2017\engine\editor\atlasmaker.cpp"
        ecx_1 = "locs.mSize > 0"
    
    label_5419e4:
    sub_489550(eax_1, &data_5b2591, ecx_1, var_9c_1, var_98_1, var_94_1)
    label_5419ec:
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
