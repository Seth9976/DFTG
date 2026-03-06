// 函数名称: sub_4ea450
// 虚拟地址: 0x4ea450
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_4ea450(int32_t arg1, int128_t* arg2, int32_t* arg3, float* arg4, struct _EXCEPTION_REGISTRATION_RECORD** arg5, char arg6, float arg7, struct _EXCEPTION_REGISTRATION_RECORD** arg8)
{
    // 第一条实际指令: struct _EXCEPTION_REGISTRATION_RECORD** ebx = arg5
    struct _EXCEPTION_REGISTRATION_RECORD** ebx = arg5
    
    if (arg8 != 0)
        ebx = arg8
    
    char* eax_1 = *arg3
    char* const var_a8
    int32_t ecx
    
    if (eax_1 != 0)
        bool cond:1_1 = *eax_1 != 0
        var_a8 = eax_1
        
        if (cond:1_1)
            ecx = *(sub_48a080(arg3) + 8)
        else
            ecx = 0
    else
        var_a8 = &data_5b2591
        ecx = 0
    
    int32_t edi = ebx[3]
    void* esi = nullptr
    float var_24 = 0f
    float var_98 = 0f
    float var_20 = 0f
    float var_94 = 0f
    float xmm0_1 = arg4[2] - *arg4
    void* var_a0 = nullptr
    float var_84 = arg4[1]
    int32_t* Next = ebx[1]->Next
    int32_t* Next_2 = Next
    int32_t* Next_1 = Next
    float xmm0_2 = ebx[8]
    int32_t var_74 = ebx[5]
    int32_t var_70 = ebx[6]
    float var_c = xmm0_2
    float var_80 = xmm0_2
    int32_t var_6c = ebx[7]
    int32_t ebx_1 = ebx[4]
    int32_t var_68 = *(ebx + 0x41)
    int128_t var_58 = *arg2
    float var_64 = arg7
    struct _EXCEPTION_REGISTRATION_RECORD** var_5c = arg5
    int32_t* result = arg2[2].d
    int32_t edx = 0xffffffff
    int32_t var_78 = edi
    int32_t var_60 = ebx_1
    int32_t* result_1 = result
    int128_t var_48 = arg2[1]
    float var_10 = 0f
    float var_34 = 0f
    arg7 = 0f
    float var_30 = 0f
    
    if (ecx s> 0)
        while (true)
            arg5:3.b = 0
            float xmm0_5 = *arg4
            float var_9c_1 = 0f
            char var_8c_1 = 0
            sub_4ea120(&arg5:3, ebx, &var_a8, &arg5:3)
            struct _EXCEPTION_REGISTRATION_RECORD** esi_1
            
            if (arg6 == 0)
                esi_1 = ebx
            else
                float xmm3_1 = var_c
                float xmm1_1 = var_10
                float xmm2_1 = arg7
                Next_1 = Next_2
                var_98 = var_24
                var_80 = xmm3_1
                var_34 = xmm1_1
                var_30 = xmm2_1
                var_78 = edi
                var_94 = var_20
                var_a0 = esi
                var_60 = ebx_1
                char var_8c_2 = 1
                char* const eax_14
                
                if (*(esi + var_a8) != 0x7b)
                    esi_1 = ebx
                else
                    char* var_ac
                    char* const edi_1
                    
                    while (true)
                        eax_14 = sub_4e9f50(&var_a8, &var_ac)
                        edi_1 = eax_14
                        
                        if (edi_1 != 0)
                            break
                        
                        if (*(esi + var_a8) != 0x7b)
                            goto label_4ea633
                    
                    if (*(edi_1 + 0x10) == 0)
                        goto label_4ea633
                    
                    if (edi_1[0x34] == 0)
                        int32_t** ecx_3 = *(edi_1 + 8)
                        float xmm2_4
                        
                        if (ecx_3 == 0)
                            xmm2_4 = (zx.o(0)).d
                        else
                            eax_14 = *(edi_1 + 0x3c)
                            
                            if (eax_14 == 0)
                                eax_14 = sub_48f600(*ecx_3)
                                xmm2_4 = *(edi_1 + 0x20) f* eax_14
                            else
                                xmm2_4 = _mm_cvtepi32_ps(zx.o(eax_14)) f* *(edi_1 + 0x20)
                        
                        if (xmm0_1 >= xmm2_4 + var_9c_1)
                        label_4ea70e:
                            esi_1 = ebx
                            sub_4e9a30(eax_14, edi_1, &var_a8, xmm2_4, esi_1)
                            var_a0 += var_ac
                            xmm2_1 = var_30
                            xmm1_1 = var_34
                            ebx_1 = var_60
                            xmm3_1 = var_80
                        else
                            var_9c_1 f- 0
                            eax_14:1.b = (var_9c_1 == 0f ? 1 : 0) << 6
                                | (is_unordered.d(var_9c_1, 0f) ? 1 : 0) << 2 | (var_9c_1 < 0f ? 1 : 0)
                            bool p_2 = unimplemented  {test ah, 0x44}
                            
                            if (not(p_2))
                                goto label_4ea70e
                            
                            xmm1_1 = var_10
                            xmm2_1 = arg7
                            xmm3_1 = var_c
                            esi_1 = ebx
                    else
                        arg5:3.b = 1
                    label_4ea633:
                        xmm1_1 = var_10
                        xmm2_1 = arg7
                        xmm3_1 = var_c
                        esi_1 = ebx
                
                float var_88_3
                
                if (ebx_1 == 2 || ebx_1 == 5 || ebx_1 == 8)
                    xmm3_1 - 1f
                    eax_14:1.b = (xmm3_1 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm3_1, 1f) ? 1 : 0) << 2
                        | (xmm3_1 < 1f ? 1 : 0)
                    float xmm0_17 = _mm_max_ss(xmm0_1 - var_9c_1, 0) * 0.5f + xmm0_5
                    float var_88_2 = xmm0_17
                    bool p_4 = unimplemented  {test ah, 0x44}
                    
                    if (not(p_4))
                        var_88_3 = sub_4827e0(xmm0_17)
                else
                    float xmm0_12
                    
                    if (ebx_1 == 3 || ebx_1 == 6 || ebx_1 == 9)
                        xmm0_12 = xmm0_1 - var_9c_1 + xmm0_5
                    else
                        float xmm0_8 = xmm0_5
                        
                        if (edx + 1 s>= 1)
                            xmm0_8 = xmm0_8 + xmm1_1
                        
                        xmm0_12 = xmm0_8 + xmm2_1
                    
                    var_88_3 = xmm0_12
                int32_t var_9c_2 = 0
                sub_4ea120(&arg5:3, esi_1, &var_a8, &arg5:3)
            
            int32_t* var_b0
            int32_t* var_cc_4 = &var_b0
            Next_2 = Next_1
            int32_t* result_2
            sub_4889e0(&result_2, Next_1, 0x12)
            int32_t* eax_17 = var_b0
            float xmm0_18 = esi_1[8]
            var_c = var_80
            int32_t ecx_8 = eax_17[3]
            float xmm1_7
            float xmm2_8
            
            if (ecx_8 == 0)
                xmm1_7 = _mm_cvtepi32_ps(zx.o(*eax_17)) * xmm0_18
                xmm2_8 = xmm1_7
            else
                float xmm0_19 = _mm_max_ss(xmm0_18, var_80)
                xmm1_7 = _mm_cvtepi32_ps(zx.o(eax_17[2])) * xmm0_19
                xmm2_8 = _mm_cvtepi32_ps(zx.o(ecx_8)) * xmm0_19
            
            esi = var_a0
            float xmm2_9 = xmm2_8 + var_94
            char* const eax_18 = var_a8
            var_20 = var_94
            var_24 = var_98
            float xmm1_10
            
            if (*(esi + eax_18) != 0xd)
                edx += 1
                xmm1_10 = xmm2_9
            else
                esi += 1
                xmm1_10 = xmm1_7 + var_98
                var_a0 = esi
                edx = 0xffffffff
            
            int128_t xmm1 = xmm1_10 + var_84
            var_84 = xmm1
            
            if (xmm2_9 f+ xmm1 > arg4[3] + 0.00999999978f)
                result = result_2
                
                if (result == 0)
                    break
                
                result[7] -= 1
                return result
            
            if (arg5:3.b == 0 && esi s< ecx)
                while (*(esi + eax_18) == 0x20)
                    esi += 1
                    
                    if (esi s>= ecx)
                        break
                
                var_a0 = esi
            
            result = result_2
            
            if (result != 0)
                result[7] -= 1
                result_2 = nullptr
            
            if (esi s>= ecx)
                break
            
            ebx_1 = var_60
            edi = var_78
            arg7 = var_30
            var_10 = var_34
    
    return result
}
