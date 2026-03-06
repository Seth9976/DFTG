// 函数名称: sub_495f10
// 虚拟地址: 0x495f10
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __fastcallsub_495f10(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = arg1
    int32_t var_8 = arg1
    
    if (data_c4a778 == 0)
        return 
    
    char const* const var_20
    int32_t var_1c
    char const* const var_18
    void* eax
    char* ecx
    
    if (data_114e7d9 != 0)
        var_18 = "RenderItemListDraw"
        var_1c = 0xa82
        var_20 = "d:\ax\trunk\ax2017\engine\draw3d.cpp"
        ecx = "!gDraw3DData.submittingRenderItems"
    label_49629a:
        sub_489550(eax, &data_5b2591, ecx, var_20, var_1c, var_18)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    sub_4f5710(2)
    int32_t i = 0
    data_114e7ec = arg1
    data_aca654 = 0
    __builtin_memset(&data_aca2bc, 0, 0x40)
    data_aca690 = 0x3f800000
    
    if (data_c4a778 s> 0)
        int32_t edx_1 = 1 << arg1.b
        int32_t var_8_1 = edx_1
        
        do
            int32_t eax_1 = *((i << 2) + &data_114a7c8)
            
            if ((*(eax_1 * 0x180 + 0xaca8dc) & edx_1) != 0)
                int32_t eax_2 = *(eax_1 * 0x180 + 0xaca778)
                
                if (eax_2 == 0)
                    *(eax_1 * 0x180 + 0xaca7c0)
                    
                    if (sub_48ff40() == 0)
                        sub_495780()
                        sub_495ae0()
                        data_114e7d0 = i
                        sub_48ffa0(sub_48f690(eax_1 * 0x180 + 0xaca778))
                    else
                        if (data_114e7d4 == 0)
                        label_496203:
                            sub_495780()
                            sub_495ae0()
                            data_114e7d0 = i
                        else
                            eax = sub_4eee80(sub_4eed40(*(eax_1 * 0x180 + 0xaca7c0)))
                            int32_t* ecx_9 = *eax
                            
                            if (ecx_9[1] != 4)
                                var_18 = "ShaderGetDef"
                                var_1c = 0x8a
                                var_20 = "d:\ax\trunk\ax2017\engine\shader.cpp"
                                ecx = "assetPtr->assetType == ASSET_TYPE_SHADER"
                                goto label_49629a
                            
                            void* eax_17 = sub_4981f0(ecx_9)
                            
                            if (data_114e7d4 == *(eax_17 + 0x54))
                                goto label_496203
                            
                            int32_t edi_4 = *((data_114e7d0 << 2) + &data_114a7c8) * 0x180
                            
                            if (*(edi_4 + 0xaca77c) != *(eax_1 * 0x180 + 0xaca77c)
                                    || *(edi_4 + 0xaca7c0) != *(eax_1 * 0x180 + 0xaca7c0)
                                    || *(edi_4 + 0xaca7c4) != *(eax_1 * 0x180 + 0xaca7c4))
                                goto label_496203
                            
                            if (sub_497800(edi_4 + 0xaca7f8, eax_1 * 0x180 + 0xaca7f8) != 0)
                                goto label_496203
                            
                            if (sub_497800(edi_4 + 0xaca808, eax_1 * 0x180 + 0xaca808) != 0)
                                goto label_496203
                            
                            if (sub_497800(edi_4 + 0xaca818, eax_1 * 0x180 + 0xaca818) != 0)
                                goto label_496203
                            
                            *(edi_4 + 0xaca898) - *(eax_1 * 0x180 + 0xaca898)
                            bool p_14 = unimplemented  {test ah, 0x44}
                            
                            if (p_14)
                                goto label_496203
                        
                        data_114e7d4 += 1
                else
                    eax = eax_2 - 1
                    
                    if (eax_2 != 1)
                        var_18 = "RenderItemListDraw"
                        var_1c = 0xaa4
                        var_20 = "d:\ax\trunk\ax2017\engine\draw3d.cpp"
                        ecx = "Halt"
                        goto label_49629a
                    
                    if (data_114e7cc == eax)
                    label_49610d:
                        sub_495780()
                        sub_495ae0()
                        data_114e7c8 = i
                    else
                        int32_t edi_2 = *((data_114e7c8 << 2) + &data_114a7c8) * 0x180
                        
                        if (*(edi_2 + 0xaca7c0) != *(eax_1 * 0x180 + 0xaca7c0)
                                || *(edi_2 + 0xaca7c4) != *(eax_1 * 0x180 + 0xaca7c4))
                            goto label_49610d
                        
                        float xmm0_1 = *(edi_2 + 0xaca7f8)
                        float temp2_1 = *(eax_1 * 0x180 + 0xaca7f8)
                        xmm0_1 - temp2_1
                        int32_t eax_7
                        eax_7:1.b = (xmm0_1 == temp2_1 ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_1, temp2_1) ? 1 : 0) << 2
                            | (xmm0_1 < temp2_1 ? 1 : 0)
                        bool p_2 = unimplemented  {test ah, 0x44}
                        
                        if (p_2)
                            goto label_49610d
                        
                        float xmm0_2 = *(edi_2 + 0xaca7fc)
                        float temp3_1 = *(eax_1 * 0x180 + 0xaca7fc)
                        xmm0_2 - temp3_1
                        eax_7:1.b = (xmm0_2 == temp3_1 ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_2, temp3_1) ? 1 : 0) << 2
                            | (xmm0_2 < temp3_1 ? 1 : 0)
                        bool p_4 = unimplemented  {test ah, 0x44}
                        
                        if (p_4)
                            goto label_49610d
                        
                        float xmm0_3 = *(edi_2 + 0xaca800)
                        float temp4_1 = *(eax_1 * 0x180 + 0xaca800)
                        xmm0_3 - temp4_1
                        eax_7:1.b = (xmm0_3 == temp4_1 ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_3, temp4_1) ? 1 : 0) << 2
                            | (xmm0_3 < temp4_1 ? 1 : 0)
                        bool p_6 = unimplemented  {test ah, 0x44}
                        
                        if (p_6)
                            goto label_49610d
                        
                        float xmm0_4 = *(edi_2 + 0xaca804)
                        float temp5_1 = *(eax_1 * 0x180 + 0xaca804)
                        xmm0_4 - temp5_1
                        eax_7:1.b = (xmm0_4 == temp5_1 ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_4, temp5_1) ? 1 : 0) << 2
                            | (xmm0_4 < temp5_1 ? 1 : 0)
                        bool p_8 = unimplemented  {test ah, 0x44}
                        
                        if (p_8)
                            goto label_49610d
                        
                        if (sub_497800(edi_2 + 0xaca808, eax_1 * 0x180 + 0xaca808) != 0)
                            goto label_49610d
                        
                        if (sub_497800(edi_2 + 0xaca818, eax_1 * 0x180 + 0xaca818) != 0)
                            goto label_49610d
                        
                        *(edi_2 + 0xaca898) - *(eax_1 * 0x180 + 0xaca898)
                        bool p_10 = unimplemented  {test ah, 0x44}
                        
                        if (p_10)
                            goto label_49610d
                        
                        if (sub_4981b0(edi_2 + 0xaca89c, eax_1 * 0x180 + 0xaca89c) != 0)
                            goto label_49610d
                        
                        if (sub_4981b0(edi_2 + 0xaca8ac, eax_1 * 0x180 + 0xaca8ac) != 0)
                            goto label_49610d
                        
                        *(edi_2 + 0xaca8e0) - *(eax_1 * 0x180 + 0xaca8e0)
                        bool p_12 = unimplemented  {test ah, 0x44}
                        
                        if (p_12)
                            goto label_49610d
                    
                    data_114e7cc = i - data_114e7c8 + 1
                
                edx_1 = var_8_1
            
            i += 1
        while (i s< data_c4a778)
    
    sub_495780()
    sub_495ae0()
    data_114e7ec = 5
    sub_4f5710(0)
}
