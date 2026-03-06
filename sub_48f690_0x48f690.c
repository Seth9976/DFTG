// 函数名称: sub_48f690
// 虚拟地址: 0x48f690
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_48f690(void* arg1)
{
    // 第一条实际指令: float xmm0 = data_aca2bc
    float xmm0 = data_aca2bc
    int32_t ebx
    int32_t var_58 = ebx
    int32_t esi
    int32_t var_5c = esi
    int32_t edi
    int32_t var_60 = edi
    float temp0 = *(arg1 + 8)
    xmm0 - temp0
    int32_t eax
    eax:1.b = (xmm0 == temp0 ? 1 : 0) << 6 | (is_unordered.d(xmm0, temp0) ? 1 : 0) << 2
        | (xmm0 < temp0 ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (p_1)
    label_48f810:
        float xmm1_1[0x4] = data_aca4c4
        float xmm3_1[0x4] = data_aca4d4
        float xmm4_1[0x4] = data_aca4e4
        data_aca2bc.o = *(arg1 + 8)
        data_aca2cc = *(arg1 + 0x18)
        data_aca2dc = *(arg1 + 0x28)
        int128_t xmm0_20 = *(arg1 + 0x38)
        data_aca37c = xmm1_1
        data_aca2ec = xmm0_20
        int128_t xmm0_21 = data_aca4f4
        data_aca38c = xmm3_1
        data_aca3ac = xmm0_21
        data_aca39c = xmm4_1
        float xmm2_1 = *(arg1 + 0x168)
        float xmm0_23 = xmm2_1 * _mm_shuffle_ps(xmm1_1, xmm1_1, 0xaa)
        float xmm3_2 = _mm_shuffle_ps(xmm3_1, xmm3_1, 0xaa)
        float xmm4_2 = _mm_shuffle_ps(xmm4_1, xmm4_1, 0xaa)
        data_aca37c:8 = xmm0_23
        data_aca690 = xmm2_1
        data_aca38c:8 = xmm2_1 * xmm3_2
        data_aca39c:8 = xmm2_1 * xmm4_2
        float var_48[0x10]
        float* eax_2 = sub_497e60(&var_48, &data_aca2bc, &data_aca37c, &var_48)
        data_aca2fc = *eax_2
        data_aca30c = *(eax_2 + 0x10)
        data_aca31c = *(eax_2 + 0x20)
        data_aca32c = *(eax_2 + 0x30)
        float* eax_4 = sub_497e60(&var_48, &data_aca37c, &data_aca3fc, &var_48)
        data_aca3bc = *eax_4
        data_aca3cc = *(eax_4 + 0x10)
        data_aca3dc = *(eax_4 + 0x20)
        data_aca3ec = *(eax_4 + 0x30)
        float* eax_6 = sub_497e60(&var_48, &data_aca2fc, &data_aca3fc, &var_48)
        data_aca33c = *eax_6
        data_aca34c = *(eax_6 + 0x10)
        data_aca35c = *(eax_6 + 0x20)
        data_aca36c = *(eax_6 + 0x30)
    else
        float xmm0_1 = data_aca2c0
        float temp1_1 = *(arg1 + 0xc)
        xmm0_1 - temp1_1
        eax:1.b = (xmm0_1 == temp1_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, temp1_1) ? 1 : 0) << 2
            | (xmm0_1 < temp1_1 ? 1 : 0)
        bool p_3 = unimplemented  {test ah, 0x44}
        
        if (p_3)
            goto label_48f810
        
        float xmm0_2 = data_aca2c4
        float temp2_1 = *(arg1 + 0x10)
        xmm0_2 - temp2_1
        eax:1.b = (xmm0_2 == temp2_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_2, temp2_1) ? 1 : 0) << 2
            | (xmm0_2 < temp2_1 ? 1 : 0)
        bool p_5 = unimplemented  {test ah, 0x44}
        
        if (p_5)
            goto label_48f810
        
        float xmm0_3 = data_aca2c8
        float temp3_1 = *(arg1 + 0x14)
        xmm0_3 - temp3_1
        eax:1.b = (xmm0_3 == temp3_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_3, temp3_1) ? 1 : 0) << 2
            | (xmm0_3 < temp3_1 ? 1 : 0)
        bool p_7 = unimplemented  {test ah, 0x44}
        
        if (p_7)
            goto label_48f810
        
        float xmm0_4 = data_aca2cc.d
        float temp4_1 = *(arg1 + 0x18)
        xmm0_4 - temp4_1
        eax:1.b = (xmm0_4 == temp4_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_4, temp4_1) ? 1 : 0) << 2
            | (xmm0_4 < temp4_1 ? 1 : 0)
        bool p_9 = unimplemented  {test ah, 0x44}
        
        if (p_9)
            goto label_48f810
        
        float xmm0_5 = data_aca2cc:4
        float temp5_1 = *(arg1 + 0x1c)
        xmm0_5 - temp5_1
        eax:1.b = (xmm0_5 == temp5_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_5, temp5_1) ? 1 : 0) << 2
            | (xmm0_5 < temp5_1 ? 1 : 0)
        bool p_11 = unimplemented  {test ah, 0x44}
        
        if (p_11)
            goto label_48f810
        
        float xmm0_6 = data_aca2cc:8
        float temp7_1 = *(arg1 + 0x20)
        xmm0_6 - temp7_1
        eax:1.b = (xmm0_6 == temp7_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_6, temp7_1) ? 1 : 0) << 2
            | (xmm0_6 < temp7_1 ? 1 : 0)
        bool p_13 = unimplemented  {test ah, 0x44}
        
        if (p_13)
            goto label_48f810
        
        float xmm0_7 = data_aca2cc:0xc
        float temp8_1 = *(arg1 + 0x24)
        xmm0_7 - temp8_1
        eax:1.b = (xmm0_7 == temp8_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_7, temp8_1) ? 1 : 0) << 2
            | (xmm0_7 < temp8_1 ? 1 : 0)
        bool p_15 = unimplemented  {test ah, 0x44}
        
        if (p_15)
            goto label_48f810
        
        float xmm0_8 = data_aca2dc.d
        float temp9_1 = *(arg1 + 0x28)
        xmm0_8 - temp9_1
        eax:1.b = (xmm0_8 == temp9_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_8, temp9_1) ? 1 : 0) << 2
            | (xmm0_8 < temp9_1 ? 1 : 0)
        bool p_17 = unimplemented  {test ah, 0x44}
        
        if (p_17)
            goto label_48f810
        
        float xmm0_9 = data_aca2dc:4
        float temp10_1 = *(arg1 + 0x2c)
        xmm0_9 - temp10_1
        eax:1.b = (xmm0_9 == temp10_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_9, temp10_1) ? 1 : 0) << 2
            | (xmm0_9 < temp10_1 ? 1 : 0)
        bool p_19 = unimplemented  {test ah, 0x44}
        
        if (p_19)
            goto label_48f810
        
        float xmm0_10 = data_aca2dc:8
        float temp11_1 = *(arg1 + 0x30)
        xmm0_10 - temp11_1
        eax:1.b = (xmm0_10 == temp11_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_10, temp11_1) ? 1 : 0) << 2
            | (xmm0_10 < temp11_1 ? 1 : 0)
        bool p_21 = unimplemented  {test ah, 0x44}
        
        if (p_21)
            goto label_48f810
        
        float xmm0_11 = data_aca2dc:0xc
        float temp12_1 = *(arg1 + 0x34)
        xmm0_11 - temp12_1
        eax:1.b = (xmm0_11 == temp12_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_11, temp12_1) ? 1 : 0) << 2
            | (xmm0_11 < temp12_1 ? 1 : 0)
        bool p_23 = unimplemented  {test ah, 0x44}
        
        if (p_23)
            goto label_48f810
        
        float xmm0_12 = data_aca2ec.d
        float temp13_1 = *(arg1 + 0x38)
        xmm0_12 - temp13_1
        eax:1.b = (xmm0_12 == temp13_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_12, temp13_1) ? 1 : 0) << 2
            | (xmm0_12 < temp13_1 ? 1 : 0)
        bool p_25 = unimplemented  {test ah, 0x44}
        
        if (p_25)
            goto label_48f810
        
        float xmm0_13 = data_aca2ec:4
        float temp14_1 = *(arg1 + 0x3c)
        xmm0_13 - temp14_1
        eax:1.b = (xmm0_13 == temp14_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_13, temp14_1) ? 1 : 0) << 2
            | (xmm0_13 < temp14_1 ? 1 : 0)
        bool p_27 = unimplemented  {test ah, 0x44}
        
        if (p_27)
            goto label_48f810
        
        float xmm0_14 = data_aca2ec:8
        float temp15_1 = *(arg1 + 0x40)
        xmm0_14 - temp15_1
        eax:1.b = (xmm0_14 == temp15_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_14, temp15_1) ? 1 : 0) << 2
            | (xmm0_14 < temp15_1 ? 1 : 0)
        bool p_29 = unimplemented  {test ah, 0x44}
        
        if (p_29)
            goto label_48f810
        
        float xmm0_15 = data_aca2ec:0xc
        float temp16_1 = *(arg1 + 0x44)
        xmm0_15 - temp16_1
        eax:1.b = (xmm0_15 == temp16_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_15, temp16_1) ? 1 : 0) << 2
            | (xmm0_15 < temp16_1 ? 1 : 0)
        bool p_31 = unimplemented  {test ah, 0x44}
        
        if (p_31)
            goto label_48f810
        
        float xmm0_16 = data_aca690
        float temp17_1 = *(arg1 + 0x168)
        xmm0_16 - temp17_1
        eax:1.b = (xmm0_16 == temp17_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_16, temp17_1) ? 1 : 0) << 2
            | (xmm0_16 < temp17_1 ? 1 : 0)
        bool p_33 = unimplemented  {test ah, 0x44}
        
        if (p_33)
            goto label_48f810
    
    data_aca654 = *(arg1 + 0x48)
    void* eax_9
    int32_t edx
    eax_9, edx = sub_4eee80(sub_4eed40(*(arg1 + 0x48)))
    data_aca60c = eax_9
    void* esi_1 = arg1 + 0x4c
    int32_t eax_11
    
    for (int32_t i = 0; i s< 8; )
        eax_11 = *esi_1
        
        if (eax_11 != 0)
            *(&data_aca60c - arg1 + esi_1) = eax_11
            sub_4efc60(eax_11, i + 0x53, data_aca60c, *esi_1)
        
        i += 1
        esi_1 += 4
    
    char const* const var_6c
    int32_t var_68
    char const* const var_64_5
    char* ecx_3
    
    if (*(arg1 + 0x6c) == 0)
    label_48fa5c:
        data_aca5b8 = *(arg1 + 0x80)
        data_aca5fc = *(arg1 + 0x90)
        data_aca5a4 = *(arg1 + 0xa0)
        data_aca5b4 = *(arg1 + 0x120)
        float xmm0_44 = *(arg1 + 0x120)
        xmm0_44 - 1f
        eax_11:1.b = (xmm0_44 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm0_44, 1f) ? 1 : 0) << 2
            | (xmm0_44 < 1f ? 1 : 0)
        bool p_35 = unimplemented  {test ah, 0x44}
        
        if (p_35)
            int32_t* ecx_8 = data_114ec78
            data_aca5c8 = *(arg1 + 0x124)
            data_aca5d8 = *(arg1 + 0x134)
            data_aca564 = *(arg1 + 0xb0)
            data_aca574 = *(arg1 + 0xc0)
            data_aca584 = *(arg1 + 0xd0)
            data_aca594 = *(arg1 + 0xe0)
            data_aca534 = *(arg1 + 0xf0)
            data_aca544 = *(arg1 + 0x100)
            data_aca554 = *(arg1 + 0x110)
            data_aca5f8 = *(arg1 + 0x160)
            data_aca610 = arg1
            return (*(*ecx_8 + 0x40))(&data_aca2bc)
        
        var_64_5 = "RenderStateSetMaterial"
        var_68 = 0xd7
        var_6c = "d:\ax\trunk\ax2017\engine\draw3d.cpp"
        ecx_3 = "renderItem.diffuseAmbientRatio != 1.0f"
    else
        int128_t xmm0_38 = *(arg1 + 0x6c)
        int32_t* esi_2 = xmm0_38
        data_aca678 = xmm0_38
        eax_11 = *(arg1 + 0x7c)
        data_aca688 = eax_11
        
        if (esi_2[1] == 0x21)
            int32_t* eax_12 = *esi_2
            
            if (eax_12 == 0)
                edx.b = 0
                sub_4e6fe0(esi_2, edx.b)
                eax_12 = *esi_2
                
                if (eax_12 == 0)
                    sub_4d1060(esi_2)
                    eax_12 = *esi_2
            
            void* esi_3 = *eax_12
            sub_4efc60(sub_4efc60(eax_12, 0x58, data_aca60c, *(esi_3 + 0x30)), 0x59, data_aca60c, 
                *(esi_3 + 0x38))
            data_aca5e8 = data_aca678:4.o
            goto label_48fa5c
        
        var_64_5 = "IBLDefGet"
        var_68 = 0x20
        var_6c = "d:\ax\trunk\ax2017\engine\ibldef.cpp"
        ecx_3 = "assetPtr->assetType == ASSET_TYPE_IBL"
    
    sub_489550(eax_11, &data_5b2591, ecx_3, var_6c, var_68, var_64_5)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
