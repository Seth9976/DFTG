// 函数名称: sub_51e3e0
// 虚拟地址: 0x51e3e0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_51e3e0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t* eax = sub_5232e0(data_1151adc + 0x4240, arg3)
    int32_t* eax = sub_5232e0(data_1151adc + 0x4240, arg3)
    void* result = sub_533610(arg2)
    void* result_2 = result
    int32_t edi = 0
    void* result_3 = result_2
    int32_t var_8 = 0
    int32_t var_c = 0
    
    if (*(result_2 + 8) != 0)
        result = nullptr
        void* result_1 = nullptr
        
        while (true)
            int32_t* ecx_6 = *(result_2 + 4) + result * 0x3c
            void* result_4 = result_1 + 1
            int32_t* var_20_1 = ecx_6
            
            if (result_4 s>= *(result_2 + 8))
                result_4 = 0xffffffff
            
            result_1 = result_4
            int32_t eax_3 = ecx_6[3]
            
            if (eax_3 == data_12badc0)
                int32_t edi_1 = eax[0x4b]
                
                if (edi_1 == 0xffffffff)
                    goto label_51e867
                
                int32_t edx = 0
                int32_t var_1c_1 = 0
                void* var_10_1 = (edi_1 << 2) + 0x41f0
                
                while (true)
                    eax_3 = (*__glewVertexAttribPointer)(edi_1, 4, 0x1406, 0, *(result_3 + 0xc), 
                        *ecx_6 + edx)
                    
                    if (var_10_1 s>= 0x4230)
                        break
                    
                    (*__glewEnableVertexAttribArray)(edi_1)
                    *(var_10_1 + data_1151adc - 0x40) = 1
                    (*__glewVertexAttribDivisor)(edi_1, arg4)
                    edi_1 += 1
                    edx = var_1c_1 + 0x10
                    var_1c_1 = edx
                    *(var_10_1 + data_1151adc) = arg4
                    var_10_1 += 4
                    ecx_6 = var_20_1
                    
                    if (edx s>= 0x40)
                        goto label_51e867
                
                goto label_51e881
            
            if (eax_3 == data_12badc4)
                int32_t edi_2 = eax[0x4c]
                
                if (edi_2 == 0xffffffff)
                    goto label_51e867
                
                int32_t edx_2 = 0
                int32_t var_1c_2 = 0
                void* var_10_2 = (edi_2 << 2) + 0x41f0
                
                while (true)
                    eax_3 = (*__glewVertexAttribPointer)(edi_2, 4, 0x1406, 0, *(result_3 + 0xc), 
                        *ecx_6 + edx_2)
                    
                    if (var_10_2 s>= 0x4230)
                        break
                    
                    (*__glewEnableVertexAttribArray)(edi_2)
                    *(var_10_2 + data_1151adc - 0x40) = 1
                    (*__glewVertexAttribDivisor)(edi_2, arg4)
                    edi_2 += 1
                    edx_2 = var_1c_2 + 0x10
                    var_1c_2 = edx_2
                    *(var_10_2 + data_1151adc) = arg4
                    var_10_2 += 4
                    ecx_6 = var_20_1
                    
                    if (edx_2 s>= 0x40)
                        goto label_51e867
                
                goto label_51e881
            
            int32_t var_44_1
            int32_t var_40_1
            int32_t var_3c_1
            int32_t var_38_5
            int32_t var_34_7
            int32_t edi_3
            
            if (eax_3 == data_12bad50)
                edi_3 = eax[0x41]
            label_51e5a8:
                
                if (edi_3 == 0xffffffff)
                    goto label_51e867
                
                var_34_7 = *ecx_6
                var_38_5 = *(result_2 + 0xc)
                var_3c_1 = 0
                var_40_1 = 0x1406
                var_44_1 = 3
                goto label_51e82f
            
            int32_t var_38_12
            char const* const var_34_17
            char* ecx_13
            
            if (eax_3 != data_12bad54)
                if (eax_3 == data_12bad58)
                    edi_3 = eax[0x41]
                    
                    if (edi_3 == 0xffffffff)
                        goto label_51e867
                    
                    var_34_7 = *ecx_6
                    var_38_5 = *(result_2 + 0xc)
                    var_3c_1 = 0
                    var_40_1 = 0x1403
                    var_44_1 = 2
                    goto label_51e82f
                
                if (eax_3 == data_12bad5c)
                    edi_3 = eax[0x42]
                    goto label_51e5a8
                
                if (eax_3 == data_12bad60)
                    edi_3 = eax[0x43]
                    goto label_51e5a8
                
                if (eax_3 == data_12bad64)
                    edi_3 = eax[0x44]
                    goto label_51e5a8
                
                int32_t var_40_2
                int32_t var_38_6
                int32_t var_34_8
                int32_t edi_4
                
                if (eax_3 == data_12bad74)
                    eax_3 = var_c
                    
                    if (eax_3 == 0)
                        edi_4 = eax[0x45]
                    label_51e678:
                        
                        if (edi_4 == 0xffffffff)
                            var_c = eax_3 + 1
                            goto label_51e867
                        
                        var_34_8 = *ecx_6
                        var_38_6 = *(result_2 + 0xc)
                        int32_t var_3c_2 = 1
                        var_40_2 = 0x1406
                    label_51e693:
                        eax_3 = (*__glewVertexAttribPointer)(edi_4, 4, var_40_2, 1, var_38_6, var_34_8)
                        
                        if (edi_4 s>= 0x10)
                            goto label_51e881
                        
                        (*__glewEnableVertexAttribArray)(edi_4)
                        *(data_1151adc + (edi_4 << 2) + 0x41b0) = 1
                        (*__glewVertexAttribDivisor)(edi_4, arg4)
                        *(data_1151adc + (edi_4 << 2) + 0x41f0) = arg4
                        var_c += 1
                        goto label_51e867
                    
                    if (eax_3 == 1)
                        edi_4 = eax[0x46]
                        goto label_51e678
                    
                    var_34_17 = "GLBindVertexStream"
                    var_38_12 = 0x909
                    ecx_13 = "Halt"
                else if (eax_3 == data_12bad70)
                    eax_3 = var_c
                    
                    if (eax_3 == 0)
                        edi_4 = eax[0x45]
                    label_51e701:
                        
                        if (edi_4 == 0xffffffff)
                            var_c = eax_3 + 1
                            goto label_51e867
                        
                        var_34_8 = *ecx_6
                        var_38_6 = *(result_2 + 0xc)
                        int32_t var_3c_3 = 1
                        var_40_2 = 0x1401
                        goto label_51e693
                    
                    if (eax_3 == 1)
                        edi_4 = eax[0x46]
                        goto label_51e701
                    
                    var_34_17 = "GLBindVertexStream"
                    var_38_12 = 0x925
                    ecx_13 = "Halt"
                else
                    int32_t var_40_3
                    int32_t var_3c_4
                    int32_t var_38_8
                    int32_t var_34_11
                    int32_t edi_5
                    
                    if (eax_3 == data_12bad78)
                        if (edi == 0)
                            edi_5 = eax[0x47]
                        label_51e73a:
                            
                            if (edi_5 == 0xffffffff)
                                goto label_51e7ce
                            
                            var_34_11 = *ecx_6
                            var_38_8 = *(result_2 + 0xc)
                            var_3c_4 = 0
                            var_40_3 = 0x1406
                        label_51e78f:
                            eax_3 = (*__glewVertexAttribPointer)(edi_5, 2, var_40_3, var_3c_4, 
                                var_38_8, var_34_11)
                            
                            if (edi_5 s>= 0x10)
                                goto label_51e881
                            
                            (*__glewEnableVertexAttribArray)(edi_5)
                            *(data_1151adc + (edi_5 << 2) + 0x41b0) = 1
                            (*__glewVertexAttribDivisor)(edi_5, arg4)
                            *(data_1151adc + (edi_5 << 2) + 0x41f0) = arg4
                        label_51e7ce:
                            edi = var_8 + 1
                            var_8 = edi
                            goto label_51e86a
                        
                        if (edi == 1)
                            edi_5 = eax[0x48]
                            goto label_51e73a
                        
                        var_34_17 = "GLBindVertexStream"
                        var_38_12 = 0x941
                        ecx_13 = "Halt"
                    else if (eax_3 != data_12bad7c)
                        if (eax_3 == data_12bad68)
                            edi_3 = eax[0x49]
                            
                            if (edi_3 == 0xffffffff)
                                goto label_51e867
                            
                            eax_3 = (*__glewVertexAttribIPointer)(edi_3, 4, 0x1401, *(result_2 + 0xc), 
                                *ecx_6)
                            goto label_51e831
                        
                        if (eax_3 == data_12bad6c)
                            edi_3 = eax[0x4a]
                            
                            if (edi_3 == 0xffffffff)
                                goto label_51e867
                            
                            var_34_7 = *ecx_6
                            var_38_5 = *(result_2 + 0xc)
                            var_3c_1 = 1
                            var_40_1 = 0x1401
                            var_44_1 = 4
                            goto label_51e82f
                        
                        var_34_17 = "GLBindVertexStream"
                        var_38_12 = 0x987
                        ecx_13 = "Halt"
                    else
                        if (edi == 0)
                            edi_5 = eax[0x47]
                        label_51e774:
                            
                            if (edi_5 == 0xffffffff)
                                goto label_51e7ce
                            
                            var_34_11 = *ecx_6
                            var_38_8 = *(result_2 + 0xc)
                            var_3c_4 = 1
                            var_40_3 = 0x1403
                            goto label_51e78f
                        
                        if (edi == 1)
                            edi_5 = eax[0x48]
                            goto label_51e774
                        
                        var_34_17 = "GLBindVertexStream"
                        var_38_12 = 0x95d
                        ecx_13 = "Halt"
            else
                edi_3 = eax[0x41]
                
                if (edi_3 == 0xffffffff)
                    goto label_51e867
                
                var_34_7 = *ecx_6
                var_38_5 = *(result_2 + 0xc)
                var_3c_1 = 0
                var_40_1 = 0x1406
                var_44_1 = 2
            label_51e82f:
                eax_3 = (*__glewVertexAttribPointer)(edi_3, var_44_1, var_40_1, var_3c_1, var_38_5, 
                    var_34_7)
            label_51e831:
                
                if (edi_3 s>= 0x10)
                label_51e881:
                    var_34_17 = "GLDupCheck_glEnableVertexAttribArray"
                    var_38_12 = 0x25d
                    ecx_13 = "index < NUM_DUPSTATE_VERTEX_ATTRIB_ENABLES"
                else
                    (*__glewEnableVertexAttribArray)(edi_3)
                    *(data_1151adc + (edi_3 << 2) + 0x41b0) = 1
                    (*__glewVertexAttribDivisor)(edi_3, arg4)
                    *(data_1151adc + (edi_3 << 2) + 0x41f0) = arg4
                label_51e867:
                    edi = var_8
                label_51e86a:
                    result = result_1
                    
                    if (result == 0xffffffff)
                        break
                    
                    result_2 = result_3
                    continue
            
            sub_489550(eax_3, &data_5b2591, ecx_13, "d:\ax\trunk\ax2017\engine\openglgraphics.cpp", 
                var_38_12, var_34_17)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
    
    return result
}
