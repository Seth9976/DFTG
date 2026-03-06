// 函数名称: sub_4fbb50
// 虚拟地址: 0x4fbb50
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

float __convention("regparm")sub_4fbb50(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t* var_28 = arg2
    int32_t* var_28 = arg2
    int32_t esi = 0
    float result = arg3[2]
    int32_t edi = 0
    float result_3 = 0f
    float var_20 = 0f
    float var_1c = 0f
    int32_t ecx = result << 3
    
    if (result s> 0)
        do
            float eax
            float edx_1
            eax, edx_1 = sub_4fba10(result, esi, arg3, arg4)
            float xmm1_1 = eax
            
            if (esi == 0)
            label_4fbbd5:
                var_20 = xmm1_1
                edi += 1
                var_1c = edx_1
            else
                var_20 - xmm1_1
                eax:1.b = (var_20 == xmm1_1 ? 1 : 0) << 6
                    | (is_unordered.d(var_20, xmm1_1) ? 1 : 0) << 2 | (var_20 < xmm1_1 ? 1 : 0)
                bool p_2 = unimplemented  {test ah, 0x44}
                
                if (p_2)
                    goto label_4fbbd5
                
                var_1c - edx_1
                eax:1.b = (var_1c == edx_1 ? 1 : 0) << 6 | (is_unordered.d(var_1c, edx_1) ? 1 : 0) << 2
                    | (var_1c < edx_1 ? 1 : 0)
                bool p_4 = unimplemented  {test ah, 0x44}
                
                if (p_4)
                    goto label_4fbbd5
            
            result = arg3[2]
            esi += 1
        while (esi s< result)
        
        arg2 = var_28
    
    void* esi_2 = edi * 0xa
    
    if (esi_2 s>= ecx)
        int32_t esi_3 = result << 3
        arg2[2] = esi_3
        uint32_t (* edi_3)[0x4]
        
        if (esi_3 != 0)
            edi_3 = sub_4c2e40(esi_3)
            result = _memset(edi_3, 0, esi_3)
            arg2 = var_28
        else
            edi_3 = nullptr
        
        *arg2 = edi_3
        int32_t i = 0
        arg2[3] = 1
        
        if (arg3[2] s> 0)
            do
                int32_t esi_4 = *arg2
                int32_t edx_7
                result, edx_7 = sub_4fba10(result, i, arg3, arg4)
                *(esi_4 + (i << 3)) = result
                arg2 = var_28
                *(esi_4 + (i << 3) + 4) = edx_7
                i += 1
            while (i s< arg3[2])
    else
        arg2[2] = esi_2
        uint32_t (* edi_1)[0x4]
        
        if (esi_2 != 0)
            edi_1 = sub_4c2e40(esi_2)
            _memset(edi_1, 0, esi_2)
            arg2 = var_28
        else
            edi_1 = nullptr
        
        *arg2 = edi_1
        arg2[3] = 3
        float var_1c_1 = 0f
        int32_t edi_2 = 0
        float result_1 = *var_28
        int32_t ecx_5 = esi_2 s/ 0xa
        result = arg3[2]
        int32_t var_40
        char const* const ecx_6
        
        if (result s>= 0xffff)
            char const* const var_3c_3 = "FlanimCompressConstantVec2"
            var_40 = 0x5a2
            ecx_6 = "pMayaVertex->mFrameCount < MAXUINT16"
        label_4fbd9a:
            sub_489550(result, &data_5b2591, ecx_6, "d:\ax\trunk\ax2017\engine\flanim.cpp", var_40, 
                "FlanimCompressConstantVec2")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        int32_t i_1 = 0
        
        if (result s> 0)
            do
                float edx_5
                result, edx_5 = sub_4fba10(result, i_1, arg3, arg4)
                float result_2 = result
                
                if (i_1 == 0)
                label_4fbcca:
                    result_3 = result_2
                    var_1c_1 = edx_5
                    *(result_1 i+ (ecx_5 << 3) + (edi_2 << 1)) = i_1.w
                    result = result_1
                    *(result i+ (edi_2 << 3)) = result_2
                    *(result i+ (edi_2 << 3) + 4) = edx_5
                    edi_2 += 1
                else
                    result_3 - result_2
                    result:1.b = (result_3 == result_2 ? 1 : 0) << 6
                        | (is_unordered.d(result_3, result_2) ? 1 : 0) << 2
                        | (result_3 < result_2 ? 1 : 0)
                    bool p_6 = unimplemented  {test ah, 0x44}
                    
                    if (p_6)
                        goto label_4fbcca
                    
                    var_1c_1 - edx_5
                    result:1.b = (var_1c_1 == edx_5 ? 1 : 0) << 6
                        | (is_unordered.d(var_1c_1, edx_5) ? 1 : 0) << 2 | (var_1c_1 < edx_5 ? 1 : 0)
                    bool p_8 = unimplemented  {test ah, 0x44}
                    
                    if (p_8)
                        goto label_4fbcca
                
                i_1 += 1
            while (i_1 s< arg3[2])
        
        if (edi_2 != ecx_5)
            char const* const var_3c_7 = "FlanimCompressConstantVec2"
            var_40 = 0x5b1
            ecx_6 = "dataIndex == numValues"
            goto label_4fbd9a
    
    return result
}
