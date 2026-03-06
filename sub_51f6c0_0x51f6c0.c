// 函数名称: sub_51f6c0
// 虚拟地址: 0x51f6c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __fastcallsub_51f6c0(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t eax_1 = *(*(arg1 + 0xc) + 0x10)
    int32_t eax_1 = *(*(arg1 + 0xc) + 0x10)
    int32_t* eax_2 = eax_1 - 1
    int32_t var_28
    char const* const var_24_1
    char* ecx
    int32_t* eax_4
    
    if (eax_1 == 1)
        int32_t edi_4 = *(arg1 + 4)
        void* edx_3 = arg1 + 0x10
        void* var_14_2 = edx_3
        
        if (edi_4 s< 0x400)
            int32_t ebx_3 = edi_4 << 4
            int32_t* ecx_15 = data_1151adc + 0x28 + ebx_3
            int32_t esi_2 = 0xc
            
            while (true)
                int32_t eax_16 = *ecx_15
                
                if (eax_16 != *edx_3)
                    (*__glewUniform4iv)(edi_4, 1, var_14_2)
                    eax_4 = data_1151adc
                    *(ebx_3 + eax_4 + 0x28) = *var_14_2
                    break
                
                ecx_15 = &ecx_15[1]
                edx_3 += 4
                int32_t temp3_1 = esi_2
                esi_2 -= 4
                
                if (temp3_1 u< 4)
                    return eax_16
            
            return eax_4
        
        var_24_1 = "GLDupCheck_glUniform4iv"
        var_28 = 0x375
        ecx = "registerIndex < MAX_UNIFORMS"
    else
        void* eax_3 = eax_2 - 3
        
        if (eax_2 == 3)
            return sub_51c8f0(arg1 + 0x10, 1, *(arg1 + 4), arg1 + 0x10)
        
        eax_2 = eax_3 - 0xb
        
        if (eax_3 == 0xb)
            eax_4 = *(arg1 + 0x10)
            int32_t* var_c_1 = eax_4
            
            if (eax_4 == 0)
                return eax_4
            
            int32_t* eax_5 = sub_4d2a30(eax_4)
            eax_4 = sub_5232e0(data_1151adc + 0x4240, eax_5)
            
            if (eax_4[4] != 0)
                return eax_4
            
            int32_t esi_1 = *(arg1 + 8)
            
            if (*(*sub_48f5c0(var_c_1) + 0x1c) != 1)
                eax_2 = eax_4
                uint32_t texture = *eax_2
                
                if (*(eax_2 + 0x13f) == 0)
                    sub_51c7f0(texture, esi_1)
                label_51f7c9:
                    eax_2 = eax_4
                    goto label_51f7cf
                
                if (esi_1 u<= 3)
                    void* ecx_6 = data_1151adc
                    
                    if (*(ecx_6 + (esi_1 << 2) + 0x417c) == texture)
                        goto label_51f7cf
                    
                    *(ecx_6 + (esi_1 << 2) + 0x417c) = texture
                    
                    if (*(ecx_6 + 0x4098) != esi_1)
                        *(ecx_6 + 0x4098) = esi_1
                        (*__glewActiveTexture)(esi_1 + 0x84c0)
                    
                    glBindTexture(0x8d65, texture)
                    goto label_51f7c9
                
                var_24_1 = "GLDupCheck_glBindTextureExternal"
                var_28 = 0x303
                ecx = "textureIndex >= 0 && textureIndex < 4"
            else
                sub_51c870(*eax_4, esi_1)
                eax_2 = eax_4
            label_51f7cf:
                int32_t i = 0
                void* ecx_9 = *(arg2 + 0x350)
                
                if (*(ecx_9 + 0x7e0) s> 0)
                    void* ebx_1 = ecx_9 + 0x7ec
                    
                    do
                        sub_51f410(eax_2, ebx_1, esi_1, eax_2)
                        i += 1
                        ebx_1 += 0x14
                        eax_2 = eax_4
                    while (i s< *(ecx_9 + 0x7e0))
                
                int32_t ecx_11 = *(arg1 + 4)
                
                if (ecx_11 s< 0x400)
                    int32_t edi_3 = ecx_11 * 2
                    eax_4 = *(data_1151adc + (edi_3 << 3) + 0x28)
                    
                    if (eax_4 == esi_1)
                        return eax_4
                    
                    (*__glewUniform1i)(ecx_11, esi_1)
                    int32_t eax_13 = data_1151adc
                    *(eax_13 + (edi_3 << 3) + 0x28) = esi_1
                    return eax_13
                
                var_24_1 = "GLDupCheck_glUniform1i"
                var_28 = 0x3cc
                ecx = "registerIndex < MAX_UNIFORMS"
        else
            var_24_1 = "GLGraphicsSetGenericRenderState"
            var_28 = 0xd08
            ecx = "Halt"
    sub_489550(eax_2, &data_5b2591, ecx, "d:\ax\trunk\ax2017\engine\openglgraphics.cpp", var_28, 
        var_24_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
