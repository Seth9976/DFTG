// 函数名称: sub_52c9f0
// 虚拟地址: 0x52c9f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_52c9f0(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t arg4, void* arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t* var_10 = arg3
    int32_t* var_10 = arg3
    int32_t* result
    int32_t ecx
    int32_t edi_1
    
    if (arg4 == 0)
        int32_t* result_2
        result_2, ecx = sub_571b00(sub_527e70(arg2, arg5))
        char* eax_15 = *arg2
        result = result_2
        ecx.b = *eax_15
        int32_t edi_3 = zx.d(ecx.b) & 0x7f
        *arg2 = &eax_15[1]
        arg4 = edi_3
        
        if (ecx.b s< 0)
            ecx.b = eax_15[1]
            *arg2 = &eax_15[2]
            edi_3 |= (zx.d(ecx.b) & 0x7f) << 7
            arg4 = edi_3
            
            if (ecx.b s< 0)
                ecx.b = eax_15[2]
                *arg2 = &eax_15[3]
                edi_3 |= (zx.d(ecx.b) & 0x7f) << 0xe
                arg4 = edi_3
                
                if (ecx.b s< 0)
                    ecx.b = eax_15[3]
                    *arg2 = &eax_15[4]
                    edi_3 |= (zx.d(ecx.b) & 0x7f) << 0x15
                    arg4 = edi_3
                    
                    if (ecx.b s< 0)
                        ecx.b = eax_15[4]
                        *arg2 = &eax_15[5]
                        edi_3 |= zx.d(ecx.b) << 0x1c
                        arg4 = edi_3
        
        if (edi_3 s> 0)
            int32_t i
            
            do
                char* eax_28 = *arg2
                ecx.b = *eax_28
                int32_t edx_10 = zx.d(ecx.b) & 0x7f
                *arg2 = &eax_28[1]
                
                if (ecx.b s< 0)
                    ecx.b = eax_28[1]
                    *arg2 = &eax_28[2]
                    edx_10 |= (zx.d(ecx.b) & 0x7f) << 7
                    
                    if (ecx.b s< 0)
                        ecx.b = eax_28[2]
                        *arg2 = &eax_28[3]
                        edx_10 |= (zx.d(ecx.b) & 0x7f) << 0xe
                        
                        if (ecx.b s< 0)
                            ecx.b = eax_28[3]
                            *arg2 = &eax_28[4]
                            edx_10 |= (zx.d(ecx.b) & 0x7f) << 0x15
                            
                            if (ecx.b s< 0)
                                ecx.b = eax_28[4]
                                *arg2 = &eax_28[5]
                                edx_10 |= zx.d(ecx.b) << 0x1c
                
                int32_t* edi_8 = result_2[1]
                ecx = *edi_8
                int32_t eax_43 = *(*(arg5 + 0x24) + (edx_10 << 2))
                
                if (ecx == edi_8[1])
                    int32_t eax_44 = int.d(_mm_cvtepi32_ps(zx.o(ecx)) * 1.75f)
                    
                    if (eax_44 s< 8)
                        eax_44 = 8
                    
                    edi_8[1] = eax_44
                    int32_t var_20_1 = eax_44 << 2
                    int32_t var_24_1 = edi_8[2]
                    int32_t eax_46 = sub_57fb2f()
                    ecx = *edi_8
                    edi_8[2] = eax_46
                
                *(edi_8[2] + (ecx << 2)) = eax_43
                *edi_8 += 1
                i = arg4
                arg4 -= 1
            while (i != 1)
        
        char* eax_48 = *arg2
        ecx.b = *eax_48
        int32_t edi_10 = zx.d(ecx.b) & 0x7f
        *arg2 = &eax_48[1]
        arg4 = edi_10
        
        if (ecx.b s< 0)
            ecx.b = eax_48[1]
            *arg2 = &eax_48[2]
            edi_10 |= (zx.d(ecx.b) & 0x7f) << 7
            arg4 = edi_10
            
            if (ecx.b s< 0)
                ecx.b = eax_48[2]
                *arg2 = &eax_48[3]
                edi_10 |= (zx.d(ecx.b) & 0x7f) << 0xe
                arg4 = edi_10
                
                if (ecx.b s< 0)
                    ecx.b = eax_48[3]
                    *arg2 = &eax_48[4]
                    edi_10 |= (zx.d(ecx.b) & 0x7f) << 0x15
                    arg4 = edi_10
                    
                    if (ecx.b s< 0)
                        ecx.b = eax_48[4]
                        *arg2 = &eax_48[5]
                        edi_10 |= zx.d(ecx.b) << 0x1c
                        arg4 = edi_10
        
        if (edi_10 s> 0)
            int32_t i_1
            
            do
                char* eax_61 = *arg2
                ecx.b = *eax_61
                int32_t edx_17 = zx.d(ecx.b) & 0x7f
                *arg2 = &eax_61[1]
                
                if (ecx.b s< 0)
                    ecx.b = eax_61[1]
                    *arg2 = &eax_61[2]
                    edx_17 |= (zx.d(ecx.b) & 0x7f) << 7
                    
                    if (ecx.b s< 0)
                        ecx.b = eax_61[2]
                        *arg2 = &eax_61[3]
                        edx_17 |= (zx.d(ecx.b) & 0x7f) << 0xe
                        
                        if (ecx.b s< 0)
                            ecx.b = eax_61[3]
                            *arg2 = &eax_61[4]
                            edx_17 |= (zx.d(ecx.b) & 0x7f) << 0x15
                            
                            if (ecx.b s< 0)
                                ecx.b = eax_61[4]
                                *arg2 = &eax_61[5]
                                edx_17 |= zx.d(ecx.b) << 0x1c
                
                int32_t* edi_15 = result_2[2]
                ecx = *edi_15
                int32_t eax_76 = *(*(arg5 + 0x50) + (edx_17 << 2))
                
                if (ecx == edi_15[1])
                    int32_t eax_77 = int.d(_mm_cvtepi32_ps(zx.o(ecx)) * 1.75f)
                    
                    if (eax_77 s< 8)
                        eax_77 = 8
                    
                    edi_15[1] = eax_77
                    int32_t var_20_2 = eax_77 << 2
                    int32_t var_24_2 = edi_15[2]
                    int32_t eax_79 = sub_57fb2f()
                    ecx = *edi_15
                    edi_15[2] = eax_79
                
                *(edi_15[2] + (ecx << 2)) = eax_76
                *edi_15 += 1
                i_1 = arg4
                arg4 -= 1
            while (i_1 != 1)
        
        char* eax_81 = *arg2
        ecx.b = *eax_81
        int32_t edi_17 = zx.d(ecx.b) & 0x7f
        *arg2 = &eax_81[1]
        arg4 = edi_17
        
        if (ecx.b s< 0)
            ecx.b = eax_81[1]
            *arg2 = &eax_81[2]
            edi_17 |= (zx.d(ecx.b) & 0x7f) << 7
            arg4 = edi_17
            
            if (ecx.b s< 0)
                ecx.b = eax_81[2]
                *arg2 = &eax_81[3]
                edi_17 |= (zx.d(ecx.b) & 0x7f) << 0xe
                arg4 = edi_17
                
                if (ecx.b s< 0)
                    ecx.b = eax_81[3]
                    *arg2 = &eax_81[4]
                    edi_17 |= (zx.d(ecx.b) & 0x7f) << 0x15
                    arg4 = edi_17
                    
                    if (ecx.b s< 0)
                        ecx.b = eax_81[4]
                        *arg2 = &eax_81[5]
                        edi_17 |= zx.d(ecx.b) << 0x1c
                        arg4 = edi_17
        
        if (edi_17 s> 0)
            int32_t i_2
            
            do
                char* eax_94 = *arg2
                ecx.b = *eax_94
                int32_t edx_24 = zx.d(ecx.b) & 0x7f
                *arg2 = &eax_94[1]
                
                if (ecx.b s< 0)
                    ecx.b = eax_94[1]
                    *arg2 = &eax_94[2]
                    edx_24 |= (zx.d(ecx.b) & 0x7f) << 7
                    
                    if (ecx.b s< 0)
                        ecx.b = eax_94[2]
                        *arg2 = &eax_94[3]
                        edx_24 |= (zx.d(ecx.b) & 0x7f) << 0xe
                        
                        if (ecx.b s< 0)
                            ecx.b = eax_94[3]
                            *arg2 = &eax_94[4]
                            edx_24 |= (zx.d(ecx.b) & 0x7f) << 0x15
                            
                            if (ecx.b s< 0)
                                ecx.b = eax_94[4]
                                *arg2 = &eax_94[5]
                                edx_24 |= zx.d(ecx.b) << 0x1c
                
                int32_t* edi_22 = result_2[3]
                ecx = *edi_22
                int32_t eax_109 = *(*(arg5 + 0x58) + (edx_24 << 2))
                
                if (ecx == edi_22[1])
                    int32_t eax_110 = int.d(_mm_cvtepi32_ps(zx.o(ecx)) * 1.75f)
                    
                    if (eax_110 s< 8)
                        eax_110 = 8
                    
                    edi_22[1] = eax_110
                    int32_t var_20_3 = eax_110 << 2
                    int32_t var_24_3 = edi_22[2]
                    int32_t eax_112 = sub_57fb2f()
                    ecx = *edi_22
                    edi_22[2] = eax_112
                
                *(edi_22[2] + (ecx << 2)) = eax_109
                *edi_22 += 1
                i_2 = arg4
                arg4 -= 1
            while (i_2 != 1)
        
        char* eax_114 = *arg2
        ecx.b = *eax_114
        int32_t edi_24 = zx.d(ecx.b) & 0x7f
        *arg2 = &eax_114[1]
        arg4 = edi_24
        
        if (ecx.b s< 0)
            ecx.b = eax_114[1]
            *arg2 = &eax_114[2]
            edi_24 |= (zx.d(ecx.b) & 0x7f) << 7
            arg4 = edi_24
            
            if (ecx.b s< 0)
                ecx.b = eax_114[2]
                *arg2 = &eax_114[3]
                edi_24 |= (zx.d(ecx.b) & 0x7f) << 0xe
                arg4 = edi_24
                
                if (ecx.b s< 0)
                    ecx.b = eax_114[3]
                    *arg2 = &eax_114[4]
                    edi_24 |= (zx.d(ecx.b) & 0x7f) << 0x15
                    arg4 = edi_24
                    
                    if (ecx.b s< 0)
                        ecx.b = eax_114[4]
                        *arg2 = &eax_114[5]
                        edi_24 |= zx.d(ecx.b) << 0x1c
                        arg4 = edi_24
        
        if (edi_24 s> 0)
            int32_t i_3
            
            do
                char* eax_127 = *arg2
                ecx.b = *eax_127
                int32_t edx_31 = zx.d(ecx.b) & 0x7f
                *arg2 = &eax_127[1]
                
                if (ecx.b s< 0)
                    ecx.b = eax_127[1]
                    *arg2 = &eax_127[2]
                    edx_31 |= (zx.d(ecx.b) & 0x7f) << 7
                    
                    if (ecx.b s< 0)
                        ecx.b = eax_127[2]
                        *arg2 = &eax_127[3]
                        edx_31 |= (zx.d(ecx.b) & 0x7f) << 0xe
                        
                        if (ecx.b s< 0)
                            ecx.b = eax_127[3]
                            *arg2 = &eax_127[4]
                            edx_31 |= (zx.d(ecx.b) & 0x7f) << 0x15
                            
                            if (ecx.b s< 0)
                                ecx.b = eax_127[4]
                                *arg2 = &eax_127[5]
                                edx_31 |= zx.d(ecx.b) << 0x1c
                
                int32_t* edi_29 = result_2[4]
                ecx = *edi_29
                int32_t eax_142 = *(*(arg5 + 0x60) + (edx_31 << 2))
                
                if (ecx == edi_29[1])
                    int32_t eax_143 = int.d(_mm_cvtepi32_ps(zx.o(ecx)) * 1.75f)
                    
                    if (eax_143 s< 8)
                        eax_143 = 8
                    
                    edi_29[1] = eax_143
                    int32_t var_20_4 = eax_143 << 2
                    int32_t var_24_4 = edi_29[2]
                    int32_t eax_145 = sub_57fb2f()
                    ecx = *edi_29
                    edi_29[2] = eax_145
                
                *(edi_29[2] + (ecx << 2)) = eax_142
                *edi_29 += 1
                i_3 = arg4
                arg4 -= 1
            while (i_3 != 1)
        
        char* eax_147 = *arg2
        ecx.b = *eax_147
        edi_1 = zx.d(ecx.b) & 0x7f
        *arg2 = &eax_147[1]
        arg4 = edi_1
        
        if (ecx.b s< 0)
            ecx.b = eax_147[1]
            *arg2 = &eax_147[2]
            edi_1 |= (zx.d(ecx.b) & 0x7f) << 7
            arg4 = edi_1
            
            if (ecx.b s< 0)
                ecx.b = eax_147[2]
                *arg2 = &eax_147[3]
                edi_1 |= (zx.d(ecx.b) & 0x7f) << 0xe
                arg4 = edi_1
                
                if (ecx.b s< 0)
                    ecx.b = eax_147[3]
                    *arg2 = &eax_147[4]
                    edi_1 |= (zx.d(ecx.b) & 0x7f) << 0x15
                    arg4 = edi_1
                    
                    if (ecx.b s< 0)
                        ecx.b = eax_147[4]
                        *arg2 = &eax_147[5]
                        edi_1 |= zx.d(ecx.b) << 0x1c
                        arg4 = edi_1
    else
        char* eax = *arg2
        int32_t ebx
        ebx.b = *eax
        edi_1 = zx.d(ebx.b) & 0x7f
        *arg2 = &eax[1]
        arg4 = edi_1
        
        if (ebx.b s< 0)
            arg3.b = eax[1]
            *arg2 = &eax[2]
            edi_1 |= (zx.d(arg3.b) & 0x7f) << 7
            arg4 = edi_1
            
            if (arg3.b s< 0)
                arg3.b = eax[2]
                *arg2 = &eax[3]
                edi_1 |= (zx.d(arg3.b) & 0x7f) << 0xe
                arg4 = edi_1
                
                if (arg3.b s< 0)
                    arg3.b = eax[3]
                    *arg2 = &eax[4]
                    edi_1 |= (zx.d(arg3.b) & 0x7f) << 0x15
                    arg4 = edi_1
                    
                    if (arg3.b s< 0)
                        arg3.b = eax[4]
                        *arg2 = &eax[5]
                        edi_1 |= zx.d(arg3.b) << 0x1c
                        arg4 = edi_1
        
        if (edi_1 == 0)
            return 0
        
        int32_t* result_1
        result_1, ecx = sub_571b00("default")
        result = result_1
    
    if (edi_1 s> 0)
        int32_t i_4
        
        do
            char* eax_162 = *arg2
            ecx.b = *eax_162
            void* edx_37 = &eax_162[1]
            int32_t ebx_3 = zx.d(ecx.b) & 0x7f
            *arg2 = edx_37
            
            if (ecx.b s< 0)
                ecx.b = *edx_37
                edx_37 += 1
                *arg2 = edx_37
                ebx_3 |= (zx.d(ecx.b) & 0x7f) << 7
                
                if (ecx.b s< 0)
                    ecx.b = *edx_37
                    edx_37 += 1
                    *arg2 = edx_37
                    ebx_3 |= (zx.d(ecx.b) & 0x7f) << 0xe
                    
                    if (ecx.b s< 0)
                        ecx.b = *edx_37
                        edx_37 += 1
                        *arg2 = edx_37
                        ebx_3 |= (zx.d(ecx.b) & 0x7f) << 0x15
                        
                        if (ecx.b s< 0)
                            eax_162.b = *edx_37
                            edx_37 += 1
                            *arg2 = edx_37
                            ebx_3 |= zx.d(eax_162.b) << 0x1c
            
            eax_162.b = *edx_37
            int32_t j_1 = zx.d(eax_162.b) & 0x7f
            *arg2 = edx_37 + 1
            
            if (eax_162.b s< 0)
                ecx.b = *(edx_37 + 1)
                *arg2 = edx_37 + 2
                j_1 |= (zx.d(ecx.b) & 0x7f) << 7
                
                if (ecx.b s< 0)
                    ecx.b = *(edx_37 + 2)
                    *arg2 = edx_37 + 3
                    j_1 |= (zx.d(ecx.b) & 0x7f) << 0xe
                    
                    if (ecx.b s< 0)
                        ecx.b = *(edx_37 + 3)
                        *arg2 = edx_37 + 4
                        j_1 |= (zx.d(ecx.b) & 0x7f) << 0x15
                        
                        if (ecx.b s< 0)
                            ecx.b = *(edx_37 + 4)
                            *arg2 = edx_37 + 5
                            j_1 |= zx.d(ecx.b) << 0x1c
            
            if (j_1 s> 0)
                int32_t j
                
                do
                    char* eax_180 = sub_527e70(arg2, arg5)
                    void* eax_181
                    eax_181, ecx = sub_52bba0(eax_180, arg2, var_10, result, ebx_3, eax_180, arg5, arg6)
                    
                    if (eax_181 != 0)
                        sub_571d60(eax_181, ebx_3, result, eax_180, eax_181)
                    
                    j = j_1
                    j_1 -= 1
                while (j != 1)
            
            i_4 = arg4
            arg4 -= 1
        while (i_4 != 1)
    
    return result
}
