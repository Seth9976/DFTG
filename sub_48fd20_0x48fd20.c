// 函数名称: sub_48fd20
// 虚拟地址: 0x48fd20
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_48fd20(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* esi = arg1
    void* esi = arg1
    void* var_20 = esi
    char const* const var_38_1
    int32_t var_34
    char const* const var_30
    int32_t result
    char* ecx
    
    if (arg2[1] == 4)
        void* edi_1 = sub_4981f0(arg2)
        void* var_8_1 = edi_1
        result = (*(*data_114ec78 + 0x28))(*(esi + 0x40))
        
        if (result.b != 0)
        label_48fe2e:
            
            if (*(esi + 0x28) s<= 0)
                return result
            
            result = (*(*data_114ec78 + 0x34))(*(esi + 0x44))
            
            if (result.b != 0)
                return result
            
            int32_t ecx_9 = *(esi + 0x2c)
            result = *(esi + 0x28) * 2
            
            if (ecx_9 == result)
                int32_t eax_12 = *(edi_1 + 0x54) * ecx_9
                void* ebx_2 = sub_4c2e40(eax_12)
                result = *(edi_1 + 0x54)
                
                if (*(esi + 0x14) * result s<= 0xffff)
                    int32_t i = 0
                    
                    if (result s> 0)
                        void* eax_14 = var_8_1
                        
                        do
                            int32_t j = 0
                            int16_t ebx_4 = (*(esi + 0x14)).w * i.w
                            
                            if (*(esi + 0x28) s> 0)
                                do
                                    int32_t ecx_12
                                    ecx_12.w = *(*(esi + 0x30) + (j << 1))
                                    ecx_12.w += ebx_4
                                    int32_t eax_18 = *(esi + 0x28) * i + j
                                    j += 1
                                    *(ebx_2 + (eax_18 << 1)) = ecx_12.w
                                    esi = var_20
                                while (j s< *(esi + 0x28))
                                
                                eax_14 = var_8_1
                            
                            i += 1
                        while (i s< *(eax_14 + 0x54))
                    
                    result = (*(*data_114ec78 + 0x30))(ebx_2, eax_12, 0, 0, *(esi + 0x40))
                    *(esi + 0x44) = result
                    
                    if (ebx_2 != 0)
                        return _aligned_free_base(ebx_2)
                    
                    return result
                
                var_30 = "BindInstanceBuffersMesh"
                var_34 = 0x177
                ecx = "mesh.vertexCount * shaderDef->instanceCount <= 0xFFFF"
                var_38_1 = "d:\ax\trunk\ax2017\engine\draw3d.cpp"
            else
                var_30 = "BindInstanceBuffersMesh"
                var_34 = 0x172
                ecx = "MeshUsesDefIndex16(mesh)"
                var_38_1 = "d:\ax\trunk\ax2017\engine\draw3d.cpp"
        else
            if (*(esi + 0x10) == 4)
                int128_t* eax_1 = *(esi + 0x20)
                int32_t eax_4 = *(esi + 0x14) * 0x28
                int32_t ecx_4 = *(edi_1 + 0x54) * eax_4
                void* eax_5 = sub_4c2e40(ecx_4)
                int32_t i_1 = 0
                void* var_1c_1 = eax_5
                
                if (*(edi_1 + 0x54) s> 0)
                    int32_t ecx_5 = eax_4
                    void* var_10_1 = eax_5
                    
                    do
                        int32_t j_1 = 0
                        
                        if (*(esi + 0x14) s> 0)
                            int128_t* edx_2 = eax_1
                            void* ecx_6 = eax_5
                            
                            do
                                int128_t xmm0_1 = *edx_2
                                j_1 += 1
                                edx_2 += 0x24
                                ecx_6 += 0x28
                                *(ecx_6 - 0x28) = xmm0_1
                                *(ecx_6 - 0x18) = *(edx_2 - 0x14)
                                *(ecx_6 - 8) = *(edx_2 - 4)
                                *(ecx_6 - 4) = i_1
                            while (j_1 s< *(esi + 0x14))
                            
                            eax_5 = var_10_1
                            ecx_5 = eax_4
                        
                        edi_1 = var_8_1
                        i_1 += 1
                        eax_5 += ecx_5
                        var_10_1 = eax_5
                    while (i_1 s< *(edi_1 + 0x54))
                
                result = (*(*data_114ec78 + 0x24))(var_1c_1, ecx_4, 0xc, 0)
                *(esi + 0x40) = result
                
                if (var_1c_1 != 0)
                    result = _aligned_free_base(var_1c_1)
                
                goto label_48fe2e
            
            var_30 = "BindInstanceBuffersMesh"
            var_34 = 0x159
            ecx = "mesh.vertexFormat == VERTEX_FORMAT_POS_NORM_COL_TEX"
            var_38_1 = "d:\ax\trunk\ax2017\engine\draw3d.cpp"
    else
        var_30 = "ShaderGetDef"
        var_34 = 0x8a
        var_38_1 = "d:\ax\trunk\ax2017\engine\shader.cpp"
        ecx = "assetPtr->assetType == ASSET_TYPE_SHADER"
    
    sub_489550(result, &data_5b2591, ecx, var_38_1, var_34, var_30)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
