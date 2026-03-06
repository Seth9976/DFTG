// 函数名称: sub_52b6c0
// 虚拟地址: 0x52b6c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_52b6c0(int32_t arg1, int32_t* arg2, int32_t* arg3, void* arg4, void** arg5)
{
    // 第一条实际指令: void** i_1 = arg5
    void** i_1 = arg5
    void** eax_1 = arg5 * 2
    int32_t* edi = arg2
    int32_t eax_2 = data_1151ae0
    void** var_18 = edi
    int32_t* eax_3
    
    if (eax_2 == 0)
        int32_t var_28_1 = 0xc
        eax_3 = _malloc()
    else
        eax_3 = eax_2(0xc, "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\array.c", 0x21)
    
    if (eax_3 != 0)
        eax_3[2] = 0
    
    int32_t eax_4 = data_1151ae0
    *eax_3 = 0
    eax_3[1] = 8
    int32_t eax_5
    
    if (eax_4 == 0)
        int32_t var_28_2 = 0x20
        eax_5 = _malloc()
    else
        eax_5 = eax_4(0x20, "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\array.c", 0x21)
    
    if (eax_5 != 0)
        __builtin_memset(eax_5, 0, 0x20)
    
    eax_3[2] = eax_5
    int32_t* eax_6 = sub_571a80(8)
    void** eax_7 = eax_1
    *(arg4 + 0x24) = eax_7
    char* ecx_1 = *edi
    int32_t ebx
    ebx.b = *ecx_1
    *edi = &ecx_1[1]
    
    if (ebx.b == 0)
        *(arg4 + 0x1c) = eax_7
        *(arg4 + 0x20) = sub_52b4e0(edi, eax_7, *arg3)
        *(arg4 + 0x14) = 0
        *(arg4 + 0x18) = 0
        _free(eax_3[2])
        _free(eax_3)
        _free(eax_6[2])
        return _free(eax_6)
    
    void* ecx_5 = eax_7 * 9
    
    if (eax_3[1] s< ecx_5)
        eax_3[1] = ecx_5
        int32_t var_28_5 = ecx_5 << 2
        int32_t var_2c_2 = eax_3[2]
        int32_t eax_11
        eax_11, ecx_5 = sub_57fb2f()
        eax_3[2] = eax_11
        eax_7 = eax_1
    
    int32_t* ebx_3 = eax_6
    void* eax_12 = eax_7 * 3
    
    if (ebx_3[1] s< eax_12)
        ebx_3[1] = eax_12
        int32_t var_28_6 = eax_12 << 2
        int32_t var_2c_3 = ebx_3[2]
        int32_t eax_14
        eax_14, ecx_5 = sub_57fb2f()
        ebx_3[2] = eax_14
    
    if (i_1 s> 0)
        void** i
        
        do
            char* eax_15 = *edi
            ecx_5.b = *eax_15
            void** edx_2 = zx.d(ecx_5.b) & 0x7f
            *edi = &eax_15[1]
            arg5 = edx_2
            
            if (ecx_5.b s< 0)
                ecx_5.b = eax_15[1]
                *edi = &eax_15[2]
                edx_2 |= (zx.d(ecx_5.b) & 0x7f) << 7
                arg5 = edx_2
                
                if (ecx_5.b s< 0)
                    ecx_5.b = eax_15[2]
                    *edi = &eax_15[3]
                    edx_2 |= (zx.d(ecx_5.b) & 0x7f) << 0xe
                    arg5 = edx_2
                    
                    if (ecx_5.b s< 0)
                        ecx_5.b = eax_15[3]
                        *edi = &eax_15[4]
                        edx_2 |= (zx.d(ecx_5.b) & 0x7f) << 0x15
                        arg5 = edx_2
                        
                        if (ecx_5.b s< 0)
                            ecx_5.b = eax_15[4]
                            *edi = &eax_15[5]
                            edx_2 |= zx.d(ecx_5.b) << 0x1c
                            arg5 = edx_2
            
            ecx_5 = *ebx_3
            
            if (ecx_5 == ebx_3[1])
                int32_t eax_35 = int.d(_mm_cvtepi32_ps(zx.o(ecx_5)) * 1.75f)
                
                if (eax_35 s< 8)
                    eax_35 = 8
                
                ebx_3[1] = eax_35
                int32_t var_28_7 = eax_35 << 2
                int32_t var_2c_4 = ebx_3[2]
                int32_t eax_37 = sub_57fb2f()
                ecx_5 = *ebx_3
                edx_2 = arg5
                ebx_3[2] = eax_37
            
            *(ebx_3[2] + (ecx_5 << 2)) = edx_2
            *ebx_3 += 1
            
            if (edx_2 s> 0)
                void** j
                
                do
                    char* eax_39 = *edi
                    ecx_5.b = *eax_39
                    *edi = &eax_39[1]
                    int32_t edi_2 = zx.d(ecx_5.b) & 0x7f
                    
                    if (ecx_5.b s< 0)
                        ecx_5.b = eax_39[1]
                        *var_18 = &eax_39[2]
                        edi_2 |= (zx.d(ecx_5.b) & 0x7f) << 7
                        
                        if (ecx_5.b s< 0)
                            ecx_5.b = eax_39[2]
                            *var_18 = &eax_39[3]
                            edi_2 |= (zx.d(ecx_5.b) & 0x7f) << 0xe
                            
                            if (ecx_5.b s< 0)
                                ecx_5.b = eax_39[3]
                                *var_18 = &eax_39[4]
                                edi_2 |= (zx.d(ecx_5.b) & 0x7f) << 0x15
                                
                                if (ecx_5.b s< 0)
                                    ecx_5.b = eax_39[4]
                                    *var_18 = &eax_39[5]
                                    edi_2 |= zx.d(ecx_5.b) << 0x1c
                    
                    int32_t ecx_6 = *ebx_3
                    
                    if (ecx_6 == ebx_3[1])
                        int32_t eax_59 = int.d(_mm_cvtepi32_ps(zx.o(ecx_6)) * 1.75f)
                        
                        if (eax_59 s< 8)
                            eax_59 = 8
                        
                        ebx_3[1] = eax_59
                        int32_t var_28_8 = eax_59 << 2
                        int32_t var_2c_5 = ebx_3[2]
                        int32_t eax_61
                        eax_61, edx_2 = sub_57fb2f()
                        ecx_6 = *ebx_3
                        ebx_3[2] = eax_61
                    
                    *(ebx_3[2] + (ecx_6 << 2)) = edi_2
                    *ebx_3 += 1
                    edi = var_18
                    char* eax_63 = *edi
                    ecx_6.b = *eax_63
                    *edi = &eax_63[1]
                    edx_2:1.b = eax_63[1]
                    *edi = &eax_63[2]
                    edx_2.b = eax_63[2]
                    *edi = &eax_63[3]
                    ebx_3.b = eax_63[3]
                    *edi = &eax_63[4]
                    float xmm0_8 = *arg3 f* (
                        ((zx.d(ecx_6.b) << 8 | zx.d(edx_2:1.b)) << 8 | zx.d(edx_2.b)) << 8
                        | zx.d(ebx_3.b))
                    int32_t ecx_15 = *eax_3
                    
                    if (ecx_15 == eax_3[1])
                        int32_t eax_71 = int.d(_mm_cvtepi32_ps(zx.o(ecx_15)) * 1.75f)
                        
                        if (eax_71 s< 8)
                            eax_71 = 8
                        
                        eax_3[1] = eax_71
                        int32_t var_28_9 = eax_71 << 2
                        int32_t var_2c_6 = eax_3[2]
                        int32_t eax_73
                        eax_73, edx_2 = sub_57fb2f()
                        ecx_15 = *eax_3
                        eax_3[2] = eax_73
                    
                    *(eax_3[2] + (ecx_15 << 2)) = xmm0_8
                    *eax_3 += 1
                    char* eax_75 = *edi
                    ecx_15.b = *eax_75
                    *edi = &eax_75[1]
                    edx_2:1.b = eax_75[1]
                    *edi = &eax_75[2]
                    edx_2.b = eax_75[2]
                    *edi = &eax_75[3]
                    ebx_3.b = eax_75[3]
                    *edi = &eax_75[4]
                    int32_t ecx_23 = *eax_3
                    float xmm0_13 = *arg3 f* (
                        ((zx.d(ecx_15.b) << 8 | zx.d(edx_2:1.b)) << 8 | zx.d(edx_2.b)) << 8
                        | zx.d(ebx_3.b))
                    
                    if (ecx_23 == eax_3[1])
                        int32_t eax_84 = int.d(_mm_cvtepi32_ps(zx.o(ecx_23)) * 1.75f)
                        
                        if (eax_84 s< 8)
                            eax_84 = 8
                        
                        eax_3[1] = eax_84
                        int32_t var_28_10 = eax_84 << 2
                        int32_t var_2c_7 = eax_3[2]
                        int32_t eax_86
                        eax_86, edx_2 = sub_57fb2f()
                        ecx_23 = *eax_3
                        eax_3[2] = eax_86
                    
                    *(eax_3[2] + (ecx_23 << 2)) = xmm0_13
                    *eax_3 += 1
                    char* eax_88 = *edi
                    ecx_23.b = *eax_88
                    *edi = &eax_88[1]
                    edx_2:1.b = eax_88[1]
                    *edi = &eax_88[2]
                    edx_2.b = eax_88[2]
                    *edi = &eax_88[3]
                    ebx_3.b = eax_88[3]
                    *edi = &eax_88[4]
                    uint32_t ecx_30 =
                        ((zx.d(ecx_23.b) << 8 | zx.d(edx_2:1.b)) << 8 | zx.d(edx_2.b)) << 8
                        | zx.d(ebx_3.b)
                    ecx_5 = *eax_3
                    
                    if (ecx_5 == eax_3[1])
                        int32_t eax_96 = int.d(_mm_cvtepi32_ps(zx.o(ecx_5)) * 1.75f)
                        
                        if (eax_96 s< 8)
                            eax_96 = 8
                        
                        eax_3[1] = eax_96
                        int32_t var_28_11 = eax_96 << 2
                        int32_t var_2c_8 = eax_3[2]
                        int32_t eax_98
                        eax_98, edx_2 = sub_57fb2f()
                        ecx_5 = *eax_3
                        eax_3[2] = eax_98
                    
                    ebx_3 = eax_6
                    *(eax_3[2] + (ecx_5 << 2)) = ecx_30
                    *eax_3 += 1
                    j = arg5
                    arg5 -= 1
                while (j != 1)
            
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    *(arg4 + 0x1c) = *eax_3
    *(arg4 + 0x20) = eax_3[2]
    _free(eax_3)
    *(arg4 + 0x14) = *ebx_3
    *(arg4 + 0x18) = ebx_3[2]
    return _free(ebx_3)
}
