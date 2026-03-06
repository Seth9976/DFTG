// 函数名称: sub_52d120
// 虚拟地址: 0x52d120
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t (* __convention("regparm")sub_52d120(int32_t arg1, int32_t arg2, float* arg3, uint32_t arg4))[0x4]
{
    // 第一条实际指令: int32_t eax = data_1151ae0
    int32_t eax = data_1151ae0
    int32_t* eax_1
    
    if (eax == 0)
        int32_t var_34_1 = 8
        eax_1 = _malloc()
    else
        eax_1 =
            eax(8, "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\skeletonbinary.c", 0x372)
    
    *eax_1 = arg2
    eax_1[1] = arg4 + arg2
    _free(arg3[2])
    int32_t eax_4 = data_1151ae0
    arg3[2] = 0
    arg3[4] = 0
    uint32_t (* result_1)[0x4]
    uint32_t (* result)[0x4]
    
    if (eax_4 == 0)
        int32_t var_34_3 = 0x64
        uint32_t (* result_2)[0x4] = _malloc()
        result_1 = result_2
        result = result_2
    else
        result =
            eax_4(0x64, "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\skeletondata.c", 0x23)
        result_1 = result
    
    if (result != 0)
        _memset(result, 0, 0x64)
    
    char* eax_6 = sub_527db0(eax_1)
    char* edx = eax_6
    char* ecx_1 = eax_6
    (*result)[1] = edx
    
    do
        eax_6.b = *ecx_1
        ecx_1 = &ecx_1[1]
    while (eax_6.b != 0)
    
    if (ecx_1 == &ecx_1[1])
        _free(edx)
        (*result)[1] = 0
    
    char* eax_7 = sub_527db0(eax_1)
    char* edx_1 = eax_7
    char* ecx_4 = eax_7
    *result = edx_1
    
    do
        eax_7.b = *ecx_4
        ecx_4 = &ecx_4[1]
    while (eax_7.b != 0)
    
    if (ecx_4 == &ecx_4[1])
        _free(edx_1)
        *result = 0
    
    char* eax_8 = *eax_1
    char ecx_5 = *eax_8
    *eax_1 = &eax_8[1]
    edx_1.b = eax_8[1]
    *eax_1 = &eax_8[2]
    uint32_t ebx_3 = zx.d(eax_8[2])
    *eax_1 = &eax_8[3]
    edx_1:1.b = eax_8[3]
    *eax_1 = &eax_8[4]
    (*result)[2] = ((zx.d(ecx_5) << 8 | zx.d(edx_1.b)) << 8 | ebx_3) << 8 | zx.d(edx_1:1.b)
    char* eax_15 = *eax_1
    uint32_t ecx_12
    ecx_12.b = *eax_15
    *eax_1 = &eax_15[1]
    edx_1.b = eax_15[1]
    *eax_1 = &eax_15[2]
    uint32_t ebx_4 = zx.d(eax_15[2])
    *eax_1 = &eax_15[3]
    edx_1:1.b = eax_15[3]
    *eax_1 = &eax_15[4]
    (*result)[3] = ((zx.d(ecx_12.b) << 8 | zx.d(edx_1.b)) << 8 | ebx_4) << 8 | zx.d(edx_1:1.b)
    char* eax_22 = *eax_1
    uint32_t ecx_19
    ecx_19.b = *eax_22
    *eax_1 = &eax_22[1]
    edx_1.b = eax_22[1]
    *eax_1 = &eax_22[2]
    uint32_t ebx_5 = zx.d(eax_22[2])
    *eax_1 = &eax_22[3]
    edx_1:1.b = eax_22[3]
    *eax_1 = &eax_22[4]
    result[1][0] = ((zx.d(ecx_19.b) << 8 | zx.d(edx_1.b)) << 8 | ebx_5) << 8 | zx.d(edx_1:1.b)
    char* eax_29 = *eax_1
    uint32_t ecx_26
    ecx_26.b = *eax_29
    *eax_1 = &eax_29[1]
    edx_1.b = eax_29[1]
    *eax_1 = &eax_29[2]
    uint32_t ebx_6 = zx.d(eax_29[2])
    *eax_1 = &eax_29[3]
    edx_1:1.b = eax_29[3]
    *eax_1 = &eax_29[4]
    (*result)[5] = ((zx.d(ecx_26.b) << 8 | zx.d(edx_1.b)) << 8 | ebx_6) << 8 | zx.d(edx_1:1.b)
    char* eax_36 = *eax_1
    edx_1.b = *eax_36
    void* ecx_34 = &eax_36[1]
    arg4:3.b = edx_1.b
    *eax_1 = ecx_34
    int32_t eax_37
    eax_37.b = edx_1.b != 0
    int32_t var_20 = eax_37
    
    if (edx_1.b != 0)
        *eax_1 = ecx_34 + 4
        _free(sub_527db0(eax_1))
        _free(sub_527db0(eax_1))
        ecx_34 = *eax_1
    
    eax_37.b = *ecx_34
    void* edx_2 = ecx_34 + 1
    uint32_t ebx_8 = zx.d(eax_37.b) & 0x7f
    *eax_1 = edx_2
    
    if (eax_37.b s< 0)
        ecx_34.b = *edx_2
        *eax_1 = edx_2 + 1
        ebx_8 |= (zx.d(ecx_34.b) & 0x7f) << 7
        
        if (ecx_34.b s< 0)
            ecx_34.b = *(edx_2 + 1)
            *eax_1 = edx_2 + 2
            ebx_8 |= (zx.d(ecx_34.b) & 0x7f) << 0xe
            
            if (ecx_34.b s< 0)
                ecx_34.b = *(edx_2 + 2)
                *eax_1 = edx_2 + 3
                ebx_8 |= (zx.d(ecx_34.b) & 0x7f) << 0x15
                
                if (ecx_34.b s< 0)
                    ecx_34.b = *(edx_2 + 3)
                    *eax_1 = edx_2 + 4
                    ebx_8 |= zx.d(ecx_34.b) << 0x1c
    
    int32_t ecx_37 = data_1151ae0
    int32_t eax_53 = ebx_8 << 2
    (*result)[6] = ebx_8
    uint32_t eax_54
    uint32_t ecx_38
    
    if (ecx_37 == 0)
        int32_t var_34_7 = eax_53
        eax_54, ecx_38 = _malloc()
    else
        eax_54, ecx_38 = ecx_37(eax_53, 
            "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\skeletonbinary.c", 0x397)
    
    (*result)[7] = eax_54
    int32_t var_18 = 0
    
    if (ebx_8 s> 0)
        int32_t edx_7
        
        do
            *((*result)[7] + (var_18 << 2)) = sub_527db0(eax_1)
            edx_7 = var_18 + 1
            var_18 = edx_7
        while (edx_7 s< ebx_8)
    
    char* eax_56 = *eax_1
    ecx_38.b = *eax_56
    uint32_t edx_9 = zx.d(ecx_38.b) & 0x7f
    *eax_1 = &eax_56[1]
    
    if (ecx_38.b s< 0)
        ecx_38.b = eax_56[1]
        *eax_1 = &eax_56[2]
        edx_9 |= (zx.d(ecx_38.b) & 0x7f) << 7
        
        if (ecx_38.b s< 0)
            ecx_38.b = eax_56[2]
            *eax_1 = &eax_56[3]
            edx_9 |= (zx.d(ecx_38.b) & 0x7f) << 0xe
            
            if (ecx_38.b s< 0)
                ecx_38.b = eax_56[3]
                *eax_1 = &eax_56[4]
                edx_9 |= (zx.d(ecx_38.b) & 0x7f) << 0x15
                
                if (ecx_38.b s< 0)
                    ecx_38.b = eax_56[4]
                    *eax_1 = &eax_56[5]
                    edx_9 |= zx.d(ecx_38.b) << 0x1c
    
    int32_t eax_69 = data_1151ae0
    result[2][0] = edx_9
    uint32_t edx_10 = edx_9 << 2
    uint32_t eax_70
    uint32_t ecx_40
    
    if (eax_69 == 0)
        uint32_t var_34_8 = edx_10
        eax_70, ecx_40 = _malloc()
    else
        eax_70, ecx_40 = eax_69(edx_10, 
            "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\skeletonbinary.c", 0x39e)
    
    int32_t i = 0
    (*result)[9] = eax_70
    int32_t i_11 = 0
    
    if (result[2][0] s> 0)
        do
            char* eax_71 = sub_527db0(eax_1)
            int32_t i_10
            
            if (i != 0)
                char* eax_72 = *eax_1
                char ecx_42 = *eax_72
                int32_t edx_12 = zx.d(ecx_42) & 0x7f
                *eax_1 = &eax_72[1]
                
                if (ecx_42 s< 0)
                    ecx_42 = eax_72[1]
                    *eax_1 = &eax_72[2]
                    edx_12 |= (zx.d(ecx_42) & 0x7f) << 7
                    
                    if (ecx_42 s< 0)
                        ecx_42 = eax_72[2]
                        *eax_1 = &eax_72[3]
                        edx_12 |= (zx.d(ecx_42) & 0x7f) << 0xe
                        
                        if (ecx_42 s< 0)
                            ecx_42 = eax_72[3]
                            *eax_1 = &eax_72[4]
                            edx_12 |= (zx.d(ecx_42) & 0x7f) << 0x15
                            
                            if (ecx_42 s< 0)
                                ecx_42 = eax_72[4]
                                *eax_1 = &eax_72[5]
                                edx_12 |= zx.d(ecx_42) << 0x1c
                
                i_10 = *((*result)[9] + (edx_12 << 2))
            else
                i_10 = i
            
            int32_t eax_87 = data_1151ae0
            int32_t* var_c_1
            int32_t* ebx_17
            
            if (eax_87 == 0)
                int32_t var_34_9 = 0x34
                int32_t* eax_89 = _malloc()
                var_c_1 = eax_89
                ebx_17 = eax_89
            else
                ebx_17 = eax_87(0x34, 
                    "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\bonedata.c", 0x22)
                var_c_1 = ebx_17
            
            if (ebx_17 != 0)
                __builtin_memset(&ebx_17[1], 0, 0x30)
            
            char* ecx_43 = eax_71
            *ebx_17 = i_11
            void* var_24_1 = &ecx_43[1]
            void* eax_91
            
            do
                eax_91.b = *ecx_43
                ecx_43 = &ecx_43[1]
            while (eax_91.b != 0)
            int32_t eax_92 = data_1151ae0
            int32_t eax_93
            
            if (eax_92 == 0)
                void* var_34_10 = ecx_43 - var_24_1 + 1
                eax_93 = _malloc()
            else
                eax_93 = eax_92(ecx_43 - var_24_1 + 1, 
                    "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\bonedata.c", 0x24)
            
            char* ecx_46 = eax_71
            ebx_17[1] = eax_93
            void* edx_14 = eax_93 - eax_71
            
            do
                eax_93.b = *ecx_46
                ecx_46 = &ecx_46[1]
                *(ecx_46 + edx_14 - 1) = eax_93.b
            while (eax_93.b != 0)
            
            ebx_17[2] = i_10
            ebx_17[7] = 0x3f800000
            ebx_17[8] = 0x3f800000
            ebx_17[0xb] = 0
            _free(eax_71)
            char* eax_95 = *eax_1
            char ecx_47 = *eax_95
            *eax_1 = &eax_95[1]
            int16_t edx_15
            edx_15.b = eax_95[1]
            *eax_1 = &eax_95[2]
            uint32_t ebx_18 = zx.d(eax_95[2])
            *eax_1 = &eax_95[3]
            edx_15:1.b = eax_95[3]
            *eax_1 = &eax_95[4]
            var_c_1[6] = ((zx.d(ecx_47) << 8 | zx.d(edx_15.b)) << 8 | ebx_18) << 8 | zx.d(edx_15:1.b)
            char* eax_103 = *eax_1
            uint32_t ecx_54
            ecx_54.b = *eax_103
            *eax_1 = &eax_103[1]
            edx_15.b = eax_103[1]
            *eax_1 = &eax_103[2]
            uint32_t ebx_19 = zx.d(eax_103[2])
            *eax_1 = &eax_103[3]
            edx_15:1.b = eax_103[3]
            *eax_1 = &eax_103[4]
            var_c_1[4] =
                (((zx.d(ecx_54.b) << 8 | zx.d(edx_15.b)) << 8 | ebx_19) << 8 | zx.d(edx_15:1.b)) * *arg3
            char* eax_112 = *eax_1
            uint32_t ecx_61
            ecx_61.b = *eax_112
            *eax_1 = &eax_112[1]
            edx_15.b = eax_112[1]
            *eax_1 = &eax_112[2]
            uint32_t ebx_20 = zx.d(eax_112[2])
            *eax_1 = &eax_112[3]
            edx_15:1.b = eax_112[3]
            *eax_1 = &eax_112[4]
            var_c_1[5] =
                (((zx.d(ecx_61.b) << 8 | zx.d(edx_15.b)) << 8 | ebx_20) << 8 | zx.d(edx_15:1.b)) * *arg3
            char* eax_121 = *eax_1
            uint32_t ecx_68
            ecx_68.b = *eax_121
            *eax_1 = &eax_121[1]
            edx_15.b = eax_121[1]
            *eax_1 = &eax_121[2]
            uint32_t ebx_21 = zx.d(eax_121[2])
            *eax_1 = &eax_121[3]
            edx_15:1.b = eax_121[3]
            *eax_1 = &eax_121[4]
            var_c_1[7] = ((zx.d(ecx_68.b) << 8 | zx.d(edx_15.b)) << 8 | ebx_21) << 8 | zx.d(edx_15:1.b)
            char* eax_129 = *eax_1
            uint32_t ecx_75
            ecx_75.b = *eax_129
            *eax_1 = &eax_129[1]
            edx_15.b = eax_129[1]
            *eax_1 = &eax_129[2]
            uint32_t ebx_22 = zx.d(eax_129[2])
            *eax_1 = &eax_129[3]
            edx_15:1.b = eax_129[3]
            *eax_1 = &eax_129[4]
            var_c_1[8] = ((zx.d(ecx_75.b) << 8 | zx.d(edx_15.b)) << 8 | ebx_22) << 8 | zx.d(edx_15:1.b)
            char* eax_137 = *eax_1
            uint32_t ecx_82
            ecx_82.b = *eax_137
            *eax_1 = &eax_137[1]
            edx_15.b = eax_137[1]
            *eax_1 = &eax_137[2]
            uint32_t ebx_23 = zx.d(eax_137[2])
            *eax_1 = &eax_137[3]
            edx_15:1.b = eax_137[3]
            *eax_1 = &eax_137[4]
            var_c_1[9] = ((zx.d(ecx_82.b) << 8 | zx.d(edx_15.b)) << 8 | ebx_23) << 8 | zx.d(edx_15:1.b)
            char* eax_145 = *eax_1
            uint32_t ecx_89
            ecx_89.b = *eax_145
            *eax_1 = &eax_145[1]
            edx_15.b = eax_145[1]
            *eax_1 = &eax_145[2]
            uint32_t ebx_24 = zx.d(eax_145[2])
            *eax_1 = &eax_145[3]
            edx_15:1.b = eax_145[3]
            *eax_1 = &eax_145[4]
            var_c_1[0xa] =
                ((zx.d(ecx_89.b) << 8 | zx.d(edx_15.b)) << 8 | ebx_24) << 8 | zx.d(edx_15:1.b)
            char* eax_153 = *eax_1
            uint32_t ecx_96
            ecx_96.b = *eax_153
            *eax_1 = &eax_153[1]
            edx_15.b = eax_153[1]
            *eax_1 = &eax_153[2]
            uint32_t ebx_25 = zx.d(eax_153[2])
            *eax_1 = &eax_153[3]
            edx_15:1.b = eax_153[3]
            *eax_1 = &eax_153[4]
            var_c_1[3] =
                (((zx.d(ecx_96.b) << 8 | zx.d(edx_15.b)) << 8 | ebx_25) << 8 | zx.d(edx_15:1.b)) * *arg3
            char* eax_161 = *eax_1
            ecx_40.b = *eax_161
            int32_t ebx_27 = zx.d(ecx_40.b) & 0x7f
            *eax_1 = &eax_161[1]
            
            if (ecx_40.b s< 0)
                ecx_40.b = eax_161[1]
                *eax_1 = &eax_161[2]
                ebx_27 |= (zx.d(ecx_40.b) & 0x7f) << 7
                
                if (ecx_40.b s< 0)
                    ecx_40.b = eax_161[2]
                    *eax_1 = &eax_161[3]
                    ebx_27 |= (zx.d(ecx_40.b) & 0x7f) << 0xe
                    
                    if (ecx_40.b s< 0)
                        ecx_40.b = eax_161[3]
                        *eax_1 = &eax_161[4]
                        ebx_27 |= (zx.d(ecx_40.b) & 0x7f) << 0x15
                        
                        if (ecx_40.b s< 0)
                            ecx_40.b = eax_161[4]
                            *eax_1 = &eax_161[5]
                            ebx_27 |= zx.d(ecx_40.b) << 0x1c
            
            switch (ebx_27)
                case 0
                    var_c_1[0xb] = 0
                case 1
                    var_c_1[0xb] = 1
                case 2
                    var_c_1[0xb] = 2
                case 3
                    var_c_1[0xb] = 3
                case 4
                    var_c_1[0xb] = 4
            
            char* eax_181 = *eax_1
            ecx_40.b = *eax_181
            *eax_1 = &eax_181[1]
            int32_t eax_183
            eax_183.b = ecx_40.b != 0
            var_c_1[0xc] = eax_183
            
            if (arg4:3.b != 0)
                *eax_1 += 4
            
            *((*result)[9] + (i_11 << 2)) = var_c_1
            i = i_11 + 1
            i_11 = i
        while (i s< result[2][0])
    
    char* eax_185 = *eax_1
    ecx_40.b = *eax_185
    uint32_t edx_18 = zx.d(ecx_40.b) & 0x7f
    *eax_1 = &eax_185[1]
    
    if (ecx_40.b s< 0)
        ecx_40.b = eax_185[1]
        *eax_1 = &eax_185[2]
        edx_18 |= (zx.d(ecx_40.b) & 0x7f) << 7
        
        if (ecx_40.b s< 0)
            ecx_40.b = eax_185[2]
            *eax_1 = &eax_185[3]
            edx_18 |= (zx.d(ecx_40.b) & 0x7f) << 0xe
            
            if (ecx_40.b s< 0)
                ecx_40.b = eax_185[3]
                *eax_1 = &eax_185[4]
                edx_18 |= (zx.d(ecx_40.b) & 0x7f) << 0x15
                
                if (ecx_40.b s< 0)
                    ecx_40.b = eax_185[4]
                    *eax_1 = &eax_185[5]
                    edx_18 |= zx.d(ecx_40.b) << 0x1c
    
    int32_t eax_198 = data_1151ae0
    (*result)[0xa] = edx_18
    uint32_t edx_19 = edx_18 << 2
    uint32_t eax_199
    int32_t i_1
    
    if (eax_198 == 0)
        uint32_t var_34_12 = edx_19
        eax_199, i_1 = _malloc()
    else
        eax_199, i_1 = eax_198(edx_19, 
            "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\skeletonbinary.c", 0x3be)
    
    bool cond:1 = (*result)[0xa] s<= 0
    (*result)[0xb] = eax_199
    int32_t i_12 = 0
    
    if (not(cond:1))
        do
            char* eax_200 = sub_527db0(eax_1)
            char* ecx_104 = *eax_1
            char edx_20 = *ecx_104
            void* eax_201 = &ecx_104[1]
            int32_t ebx_34 = zx.d(edx_20) & 0x7f
            *eax_1 = eax_201
            
            if (edx_20 s< 0)
                ecx_104.b = *eax_201
                *eax_1 = eax_201 + 1
                ebx_34 |= (zx.d(ecx_104.b) & 0x7f) << 7
                
                if (ecx_104.b s< 0)
                    ecx_104.b = *(eax_201 + 1)
                    *eax_1 = eax_201 + 2
                    ebx_34 |= (zx.d(ecx_104.b) & 0x7f) << 0xe
                    
                    if (ecx_104.b s< 0)
                        ecx_104.b = *(eax_201 + 2)
                        *eax_1 = eax_201 + 3
                        ebx_34 |= (zx.d(ecx_104.b) & 0x7f) << 0x15
                        
                        if (ecx_104.b s< 0)
                            ecx_104.b = *(eax_201 + 3)
                            *eax_1 = eax_201 + 4
                            ebx_34 |= zx.d(ecx_104.b) << 0x1c
            
            int32_t eax_215 = *((*result)[9] + (ebx_34 << 2))
            int32_t eax_216 = data_1151ae0
            uint32_t ebx_35
            
            if (eax_216 == 0)
                int32_t var_34_13 = 0x28
                uint32_t eax_218 = _malloc()
                arg4 = eax_218
                ebx_35 = eax_218
            else
                ebx_35 = eax_216(0x28, 
                    "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\slotdata.c", 0x22)
                arg4 = ebx_35
            
            if (ebx_35 != 0)
                __builtin_memset(ebx_35, 0, 0x28)
            
            char* esi_1 = eax_200
            char* ecx_105 = esi_1
            *ebx_35 = i_12
            void* edx_24 = &ecx_105[1]
            int32_t eax_219
            
            do
                eax_219.b = *ecx_105
                ecx_105 = &ecx_105[1]
            while (eax_219.b != 0)
            int32_t eax_220 = data_1151ae0
            int32_t eax_221
            
            if (eax_220 == 0)
                void* var_34_14 = ecx_105 - edx_24 + 1
                eax_221 = _malloc()
            else
                eax_221 = eax_220(ecx_105 - edx_24 + 1, 
                    "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\slotdata.c", 0x24)
            
            *(ebx_35 + 4) = eax_221
            void* ecx_109 = eax_221 - eax_200
            
            do
                eax_221.b = *esi_1
                esi_1 = &esi_1[1]
                *(esi_1 + ecx_109 - 1) = eax_221.b
            while (eax_221.b != 0)
            
            *(ebx_35 + 8) = eax_215
            *(ebx_35 + 0x10) = 0x3f800000
            *(ebx_35 + 0x14) = 0x3f800000
            *(ebx_35 + 0x18) = 0x3f800000
            *(ebx_35 + 0x1c) = 0x3f800000
            sub_56d7b0(ebx_35 + 0x10)
            _free(eax_200)
            char* eax_223 = *eax_1
            int16_t ecx_111
            ecx_111.b = *eax_223
            *eax_1 = &eax_223[1]
            *(ebx_35 + 0x10) = _mm_cvtepi32_ps(zx.o(ecx_111.b)) / 255f
            char* eax_226 = *eax_1
            ecx_111.b = *eax_226
            *eax_1 = &eax_226[1]
            *(ebx_35 + 0x14) = _mm_cvtepi32_ps(zx.o(ecx_111.b)) / 255f
            char* eax_229 = *eax_1
            ecx_111.b = *eax_229
            *eax_1 = &eax_229[1]
            *(ebx_35 + 0x18) = _mm_cvtepi32_ps(zx.o(ecx_111.b)) / 255f
            char* eax_232 = *eax_1
            ecx_111.b = *eax_232
            *eax_1 = &eax_232[1]
            *(ebx_35 + 0x1c) = _mm_cvtepi32_ps(zx.o(ecx_111.b)) / 255f
            char* eax_235 = *eax_1
            ecx_111:1.b = *eax_235
            *eax_1 = &eax_235[1]
            ecx_111.b = eax_235[1]
            *eax_1 = &eax_235[2]
            uint32_t var_1c_2 = zx.d(ecx_111.b)
            uint32_t eax_237
            eax_237.b = eax_235[2]
            uint32_t eax_238 = zx.d(eax_237.b)
            *eax_1 = &eax_235[3]
            ecx_111.b = eax_235[3]
            *eax_1 = &eax_235[4]
            uint32_t esi_2 = zx.d(ecx_111.b)
            
            if (var_1c_2 != 0xff || eax_238 != 0xff || esi_2 != 0xff || ecx_111:1.b != 0xff)
                int32_t eax_240 = data_1151ae0
                float* eax_241
                
                if (eax_240 == 0)
                    int32_t var_34_16 = 0x10
                    eax_241 = _malloc()
                else
                    eax_241 = eax_240(0x10, 
                        "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\color.c", 0x22)
                
                float xmm0_26 = _mm_cvtepi32_ps(zx.o(var_1c_2))
                *(ebx_35 + 0x20) = eax_241
                eax_241[3] = 0x3f800000
                *eax_241 = xmm0_26 / 255f
                eax_241[1] = _mm_cvtepi32_ps(zx.o(eax_238)) / 255f
                eax_241[2] = _mm_cvtepi32_ps(zx.o(esi_2)) / 255f
                sub_56d7b0(eax_241)
            
            result = result_1
            char* eax_242
            void* ecx_114
            eax_242, ecx_114 = sub_527e70(eax_1, result)
            char* ebx_36 = eax_242
            uint32_t edx_30
            
            if (ebx_36 == 0)
                edx_30 = arg4
                *(edx_30 + 0xc) = 0
            else
                char* ecx_115 = ebx_36
                void* edx_29 = &ecx_115[1]
                
                do
                    eax_242.b = *ecx_115
                    ecx_115 = &ecx_115[1]
                while (eax_242.b != 0)
                
                int32_t eax_243 = data_1151ae0
                int32_t eax_244
                
                if (eax_243 == 0)
                    void* var_34_17 = ecx_115 - edx_29 + 1
                    eax_244 = _malloc()
                else
                    eax_244 = eax_243(ecx_115 - edx_29 + 1, 
                        "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\skeletonbinary.c", 
                        0x3d1)
                
                edx_30 = arg4
                *(edx_30 + 0xc) = eax_244
                ecx_114 = eax_244 - ebx_36
                
                do
                    eax_244.b = *ebx_36
                    ebx_36 = &ebx_36[1]
                    *(ebx_36 + ecx_114 - 1) = eax_244.b
                while (eax_244.b != 0)
            
            char* eax_245 = *eax_1
            ecx_114.b = *eax_245
            int32_t ebx_38 = zx.d(ecx_114.b) & 0x7f
            *eax_1 = &eax_245[1]
            
            if (ecx_114.b s< 0)
                ecx_114.b = eax_245[1]
                *eax_1 = &eax_245[2]
                ebx_38 |= (zx.d(ecx_114.b) & 0x7f) << 7
                
                if (ecx_114.b s< 0)
                    ecx_114.b = eax_245[2]
                    *eax_1 = &eax_245[3]
                    ebx_38 |= (zx.d(ecx_114.b) & 0x7f) << 0xe
                    
                    if (ecx_114.b s< 0)
                        ecx_114.b = eax_245[3]
                        *eax_1 = &eax_245[4]
                        ebx_38 |= (zx.d(ecx_114.b) & 0x7f) << 0x15
                        
                        if (ecx_114.b s< 0)
                            ecx_114.b = eax_245[4]
                            *eax_1 = &eax_245[5]
                            ebx_38 |= zx.d(ecx_114.b) << 0x1c
            
            *(edx_30 + 0x24) = ebx_38
            *((*result)[0xb] + (i_12 << 2)) = edx_30
            i_1 = i_12 + 1
            i_12 = i_1
        while (i_1 s< (*result)[0xa])
    
    char* eax_266 = *eax_1
    i_1.b = *eax_266
    uint32_t edx_32 = zx.d(i_1.b) & 0x7f
    *eax_1 = &eax_266[1]
    
    if (i_1.b s< 0)
        i_1.b = eax_266[1]
        *eax_1 = &eax_266[2]
        edx_32 |= (zx.d(i_1.b) & 0x7f) << 7
        
        if (i_1.b s< 0)
            i_1.b = eax_266[2]
            *eax_1 = &eax_266[3]
            edx_32 |= (zx.d(i_1.b) & 0x7f) << 0xe
            
            if (i_1.b s< 0)
                i_1.b = eax_266[3]
                *eax_1 = &eax_266[4]
                edx_32 |= (zx.d(i_1.b) & 0x7f) << 0x15
                
                if (i_1.b s< 0)
                    i_1.b = eax_266[4]
                    *eax_1 = &eax_266[5]
                    edx_32 |= zx.d(i_1.b) << 0x1c
    
    int32_t eax_279 = data_1151ae0
    (*result)[0x13] = edx_32
    uint32_t edx_33 = edx_32 << 2
    uint32_t eax_280
    uint32_t ecx_120
    
    if (eax_279 == 0)
        uint32_t var_34_18 = edx_33
        eax_280, ecx_120 = _malloc()
    else
        eax_280, ecx_120 = eax_279(edx_33, 
            "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\skeletonbinary.c", 0x3d9)
    
    bool cond:2 = (*result)[0x13] s<= 0
    result[5][0] = eax_280
    int32_t i_13 = 0
    
    if (not(cond:2))
        int32_t i_2
        
        do
            char* eax_281 = sub_527db0(eax_1)
            int32_t eax_282 = data_1151ae0
            uint32_t (* var_14_4)[0x4]
            uint32_t (* ebx_43)[0x4]
            
            if (eax_282 == 0)
                int32_t var_34_19 = 0x30
                uint32_t (* eax_284)[0x4] = _malloc()
                var_14_4 = eax_284
                ebx_43 = eax_284
            else
                ebx_43 = eax_282(0x30, 
                    "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\ikconstraintdata.c", 0x22)
                var_14_4 = ebx_43
            
            if (ebx_43 != 0)
                _memset(ebx_43, 0, 0x30)
            
            char* ecx_122 = eax_281
            arg4 = &ecx_122[1]
            void* eax_285
            
            do
                eax_285.b = *ecx_122
                ecx_122 = &ecx_122[1]
            while (eax_285.b != 0)
            int32_t eax_286 = data_1151ae0
            int32_t eax_287
            
            if (eax_286 == 0)
                void* var_34_20 = ecx_122 - arg4 + 1
                eax_287 = _malloc()
            else
                eax_287 = eax_286(ecx_122 - arg4 + 1, 
                    "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\ikconstraintdata.c", 0x23)
            
            char* ecx_125 = eax_281
            *ebx_43 = eax_287
            void* edx_35 = eax_287 - eax_281
            
            do
                eax_287.b = *ecx_125
                ecx_125 = &ecx_125[1]
                *(ecx_125 + edx_35 - 1) = eax_287.b
            while (eax_287.b != 0)
            
            (*ebx_43)[6] = 1
            (*ebx_43)[7] = 0
            ebx_43[2][0] = 0
            (*ebx_43)[9] = 0
            (*ebx_43)[0xa] = 0x3f800000
            char* eax_288 = *eax_1
            ecx_125.b = *eax_288
            uint32_t edx_37 = zx.d(ecx_125.b) & 0x7f
            *eax_1 = &eax_288[1]
            
            if (ecx_125.b s< 0)
                ecx_125.b = eax_288[1]
                *eax_1 = &eax_288[2]
                edx_37 |= (zx.d(ecx_125.b) & 0x7f) << 7
                
                if (ecx_125.b s< 0)
                    ecx_125.b = eax_288[2]
                    *eax_1 = &eax_288[3]
                    edx_37 |= (zx.d(ecx_125.b) & 0x7f) << 0xe
                    
                    if (ecx_125.b s< 0)
                        ecx_125.b = eax_288[3]
                        *eax_1 = &eax_288[4]
                        edx_37 |= (zx.d(ecx_125.b) & 0x7f) << 0x15
                        
                        if (ecx_125.b s< 0)
                            ecx_125.b = eax_288[4]
                            *eax_1 = &eax_288[5]
                            edx_37 |= zx.d(ecx_125.b) << 0x1c
            
            (*ebx_43)[1] = edx_37
            char* eax_308 = *eax_1
            ecx_125.b = *eax_308
            *eax_1 = &eax_308[1]
            uint32_t eax_310
            eax_310.b = ecx_125.b != 0
            (*ebx_43)[2] = eax_310
            _free(eax_281)
            char* eax_311 = *eax_1
            char ecx_126 = *eax_311
            uint32_t edx_39 = zx.d(ecx_126) & 0x7f
            *eax_1 = &eax_311[1]
            
            if (ecx_126 s< 0)
                ecx_126 = eax_311[1]
                *eax_1 = &eax_311[2]
                edx_39 |= (zx.d(ecx_126) & 0x7f) << 7
                
                if (ecx_126 s< 0)
                    ecx_126 = eax_311[2]
                    *eax_1 = &eax_311[3]
                    edx_39 |= (zx.d(ecx_126) & 0x7f) << 0xe
                    
                    if (ecx_126 s< 0)
                        ecx_126 = eax_311[3]
                        *eax_1 = &eax_311[4]
                        edx_39 |= (zx.d(ecx_126) & 0x7f) << 0x15
                        
                        if (ecx_126 s< 0)
                            ecx_126 = eax_311[4]
                            *eax_1 = &eax_311[5]
                            edx_39 |= zx.d(ecx_126) << 0x1c
            
            int32_t eax_331 = data_1151ae0
            (*ebx_43)[3] = edx_39
            uint32_t edx_40 = edx_39 << 2
            uint32_t eax_332
            uint32_t ecx_127
            
            if (eax_331 == 0)
                uint32_t var_34_22 = edx_40
                eax_332, ecx_127 = _malloc()
            else
                eax_332, ecx_127 = eax_331(edx_40, 
                    "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\skeletonbinary.c", 0x3e2)
            
            bool cond:8_1 = (*ebx_43)[3] s<= 0
            ebx_43[1][0] = eax_332
            int32_t j_3 = 0
            
            if (not(cond:8_1))
                int32_t j
                
                do
                    char* eax_333 = *eax_1
                    ecx_127.b = *eax_333
                    int32_t edx_42 = zx.d(ecx_127.b) & 0x7f
                    *eax_1 = &eax_333[1]
                    
                    if (ecx_127.b s< 0)
                        ecx_127.b = eax_333[1]
                        *eax_1 = &eax_333[2]
                        edx_42 |= (zx.d(ecx_127.b) & 0x7f) << 7
                        
                        if (ecx_127.b s< 0)
                            ecx_127.b = eax_333[2]
                            *eax_1 = &eax_333[3]
                            edx_42 |= (zx.d(ecx_127.b) & 0x7f) << 0xe
                            
                            if (ecx_127.b s< 0)
                                ecx_127.b = eax_333[3]
                                *eax_1 = &eax_333[4]
                                edx_42 |= (zx.d(ecx_127.b) & 0x7f) << 0x15
                                
                                if (ecx_127.b s< 0)
                                    ecx_127.b = eax_333[4]
                                    *eax_1 = &eax_333[5]
                                    edx_42 |= zx.d(ecx_127.b) << 0x1c
                    
                    *(ebx_43[1][0] + (j_3 << 2)) = *((*result)[9] + (edx_42 << 2))
                    j = j_3 + 1
                    j_3 = j
                while (j s< (*ebx_43)[3])
            
            char* eax_355 = *eax_1
            ecx_127.b = *eax_355
            int32_t edx_45 = zx.d(ecx_127.b) & 0x7f
            *eax_1 = &eax_355[1]
            
            if (ecx_127.b s< 0)
                ecx_127.b = eax_355[1]
                *eax_1 = &eax_355[2]
                edx_45 |= (zx.d(ecx_127.b) & 0x7f) << 7
                
                if (ecx_127.b s< 0)
                    ecx_127.b = eax_355[2]
                    *eax_1 = &eax_355[3]
                    edx_45 |= (zx.d(ecx_127.b) & 0x7f) << 0xe
                    
                    if (ecx_127.b s< 0)
                        ecx_127.b = eax_355[3]
                        *eax_1 = &eax_355[4]
                        edx_45 |= (zx.d(ecx_127.b) & 0x7f) << 0x15
                        
                        if (ecx_127.b s< 0)
                            ecx_127.b = eax_355[4]
                            *eax_1 = &eax_355[5]
                            edx_45 |= zx.d(ecx_127.b) << 0x1c
            
            (*ebx_43)[5] = *((*result)[9] + (edx_45 << 2))
            char* eax_377 = *eax_1
            ecx_127.b = *eax_377
            *eax_1 = &eax_377[1]
            edx_45.b = eax_377[1]
            *eax_1 = &eax_377[2]
            uint32_t ebx_44 = zx.d(eax_377[2])
            *eax_1 = &eax_377[3]
            edx_45:1.b = eax_377[3]
            *eax_1 = &eax_377[4]
            (*var_14_4)[0xa] =
                ((zx.d(ecx_127.b) << 8 | zx.d(edx_45.b)) << 8 | ebx_44) << 8 | zx.d(edx_45:1.b)
            char* eax_385 = *eax_1
            uint32_t ecx_134
            ecx_134.b = *eax_385
            *eax_1 = &eax_385[1]
            edx_45.b = eax_385[1]
            *eax_1 = &eax_385[2]
            uint32_t ebx_45 = zx.d(eax_385[2])
            *eax_1 = &eax_385[3]
            edx_45:1.b = eax_385[3]
            *eax_1 = &eax_385[4]
            (*var_14_4)[0xb] =
                ((zx.d(ecx_134.b) << 8 | zx.d(edx_45.b)) << 8 | ebx_45) << 8 | zx.d(edx_45:1.b)
            char* eax_392 = *eax_1
            ecx_120.b = *eax_392
            *eax_1 = &eax_392[1]
            (*var_14_4)[6] = sx.d(ecx_120.b)
            char* eax_395 = *eax_1
            ecx_120.b = *eax_395
            *eax_1 = &eax_395[1]
            uint32_t eax_397
            eax_397.b = ecx_120.b != 0
            (*var_14_4)[7] = eax_397
            char* eax_398 = *eax_1
            ecx_120.b = *eax_398
            *eax_1 = &eax_398[1]
            uint32_t eax_400
            eax_400.b = ecx_120.b != 0
            var_14_4[2][0] = eax_400
            char* eax_401 = *eax_1
            ecx_120.b = *eax_401
            *eax_1 = &eax_401[1]
            uint32_t eax_403
            eax_403.b = ecx_120.b != 0
            (*var_14_4)[9] = eax_403
            *(result[5][0] + (i_13 << 2)) = var_14_4
            i_2 = i_13 + 1
            i_13 = i_2
        while (i_2 s< (*result)[0x13])
    
    char* eax_405 = *eax_1
    ecx_120.b = *eax_405
    uint32_t edx_48 = zx.d(ecx_120.b) & 0x7f
    *eax_1 = &eax_405[1]
    
    if (ecx_120.b s< 0)
        ecx_120.b = eax_405[1]
        *eax_1 = &eax_405[2]
        edx_48 |= (zx.d(ecx_120.b) & 0x7f) << 7
        
        if (ecx_120.b s< 0)
            ecx_120.b = eax_405[2]
            *eax_1 = &eax_405[3]
            edx_48 |= (zx.d(ecx_120.b) & 0x7f) << 0xe
            
            if (ecx_120.b s< 0)
                ecx_120.b = eax_405[3]
                *eax_1 = &eax_405[4]
                edx_48 |= (zx.d(ecx_120.b) & 0x7f) << 0x15
                
                if (ecx_120.b s< 0)
                    ecx_120.b = eax_405[4]
                    *eax_1 = &eax_405[5]
                    edx_48 |= zx.d(ecx_120.b) << 0x1c
    
    int32_t eax_418 = data_1151ae0
    (*result)[0x15] = edx_48
    uint32_t edx_49 = edx_48 << 2
    uint32_t eax_419
    uint32_t ecx_141
    
    if (eax_418 == 0)
        uint32_t var_34_23 = edx_49
        eax_419, ecx_141 = _malloc()
    else
        eax_419, ecx_141 = eax_418(edx_49, 
            "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\skeletonbinary.c", 0x3f2)
    
    bool cond:3 = (*result)[0x15] s<= 0
    (*result)[0x16] = eax_419
    int32_t i_14 = 0
    
    if (not(cond:3))
        int32_t i_3
        
        do
            char* eax_420 = sub_527db0(eax_1)
            int32_t eax_421 = data_1151ae0
            uint32_t ebx_51
            
            if (eax_421 == 0)
                int32_t var_34_24 = 0x48
                uint32_t eax_423 = _malloc()
                arg4 = eax_423
                ebx_51 = eax_423
            else
                ebx_51 = eax_421(0x48, 
                    "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\transformconstraintdata.c", 
                    0x22)
                arg4 = ebx_51
            
            if (ebx_51 != 0)
                _memset(ebx_51, 0, 0x48)
            
            char* ecx_143 = eax_420
            void* var_24_9 = &ecx_143[1]
            void* eax_424
            
            do
                eax_424.b = *ecx_143
                ecx_143 = &ecx_143[1]
            while (eax_424.b != 0)
            int32_t eax_425 = data_1151ae0
            int32_t eax_426
            
            if (eax_425 == 0)
                void* var_34_25 = ecx_143 - var_24_9 + 1
                eax_426 = _malloc()
            else
                eax_426 = eax_425(ecx_143 - var_24_9 + 1, 
                    "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\transformconstraintdata.c", 
                    0x23)
            
            char* ecx_146 = eax_420
            *ebx_51 = eax_426
            void* edx_51 = eax_426 - eax_420
            
            do
                eax_426.b = *ecx_146
                ecx_146 = &ecx_146[1]
                *(ecx_146 + edx_51 - 1) = eax_426.b
            while (eax_426.b != 0)
            
            char* eax_427 = *eax_1
            ecx_146.b = *eax_427
            int32_t edx_53 = zx.d(ecx_146.b) & 0x7f
            *eax_1 = &eax_427[1]
            
            if (ecx_146.b s< 0)
                ecx_146.b = eax_427[1]
                *eax_1 = &eax_427[2]
                edx_53 |= (zx.d(ecx_146.b) & 0x7f) << 7
                
                if (ecx_146.b s< 0)
                    ecx_146.b = eax_427[2]
                    *eax_1 = &eax_427[3]
                    edx_53 |= (zx.d(ecx_146.b) & 0x7f) << 0xe
                    
                    if (ecx_146.b s< 0)
                        ecx_146.b = eax_427[3]
                        *eax_1 = &eax_427[4]
                        edx_53 |= (zx.d(ecx_146.b) & 0x7f) << 0x15
                        
                        if (ecx_146.b s< 0)
                            ecx_146.b = eax_427[4]
                            *eax_1 = &eax_427[5]
                            edx_53 |= zx.d(ecx_146.b) << 0x1c
            
            *(ebx_51 + 4) = edx_53
            char* eax_447 = *eax_1
            ecx_146.b = *eax_447
            *eax_1 = &eax_447[1]
            int32_t eax_449
            eax_449.b = ecx_146.b != 0
            *(ebx_51 + 8) = eax_449
            _free(eax_420)
            char* eax_450 = *eax_1
            char ecx_147 = *eax_450
            int32_t edx_55 = zx.d(ecx_147) & 0x7f
            *eax_1 = &eax_450[1]
            
            if (ecx_147 s< 0)
                ecx_147 = eax_450[1]
                *eax_1 = &eax_450[2]
                edx_55 |= (zx.d(ecx_147) & 0x7f) << 7
                
                if (ecx_147 s< 0)
                    ecx_147 = eax_450[2]
                    *eax_1 = &eax_450[3]
                    edx_55 |= (zx.d(ecx_147) & 0x7f) << 0xe
                    
                    if (ecx_147 s< 0)
                        ecx_147 = eax_450[3]
                        *eax_1 = &eax_450[4]
                        edx_55 |= (zx.d(ecx_147) & 0x7f) << 0x15
                        
                        if (ecx_147 s< 0)
                            ecx_147 = eax_450[4]
                            *eax_1 = &eax_450[5]
                            edx_55 |= zx.d(ecx_147) << 0x1c
            
            int32_t eax_470 = data_1151ae0
            *(ebx_51 + 0xc) = edx_55
            int32_t edx_56 = edx_55 << 2
            int32_t eax_471
            int32_t ecx_148
            
            if (eax_470 == 0)
                int32_t var_34_27 = edx_56
                eax_471, ecx_148 = _malloc()
            else
                eax_471, ecx_148 = eax_470(edx_56, 
                    "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\skeletonbinary.c", 0x3fb)
            
            bool cond:10_1 = *(ebx_51 + 0xc) s<= 0
            *(ebx_51 + 0x10) = eax_471
            int32_t j_4 = 0
            
            if (not(cond:10_1))
                int32_t j_1
                
                do
                    char* eax_472 = *eax_1
                    ecx_148.b = *eax_472
                    int32_t edx_58 = zx.d(ecx_148.b) & 0x7f
                    *eax_1 = &eax_472[1]
                    
                    if (ecx_148.b s< 0)
                        ecx_148.b = eax_472[1]
                        *eax_1 = &eax_472[2]
                        edx_58 |= (zx.d(ecx_148.b) & 0x7f) << 7
                        
                        if (ecx_148.b s< 0)
                            ecx_148.b = eax_472[2]
                            *eax_1 = &eax_472[3]
                            edx_58 |= (zx.d(ecx_148.b) & 0x7f) << 0xe
                            
                            if (ecx_148.b s< 0)
                                ecx_148.b = eax_472[3]
                                *eax_1 = &eax_472[4]
                                edx_58 |= (zx.d(ecx_148.b) & 0x7f) << 0x15
                                
                                if (ecx_148.b s< 0)
                                    ecx_148.b = eax_472[4]
                                    *eax_1 = &eax_472[5]
                                    edx_58 |= zx.d(ecx_148.b) << 0x1c
                    
                    *(*(ebx_51 + 0x10) + (j_4 << 2)) = *((*result)[9] + (edx_58 << 2))
                    j_1 = j_4 + 1
                    j_4 = j_1
                while (j_1 s< *(ebx_51 + 0xc))
            
            char* eax_494 = *eax_1
            ecx_148.b = *eax_494
            int32_t edx_61 = zx.d(ecx_148.b) & 0x7f
            *eax_1 = &eax_494[1]
            
            if (ecx_148.b s< 0)
                ecx_148.b = eax_494[1]
                *eax_1 = &eax_494[2]
                edx_61 |= (zx.d(ecx_148.b) & 0x7f) << 7
                
                if (ecx_148.b s< 0)
                    ecx_148.b = eax_494[2]
                    *eax_1 = &eax_494[3]
                    edx_61 |= (zx.d(ecx_148.b) & 0x7f) << 0xe
                    
                    if (ecx_148.b s< 0)
                        ecx_148.b = eax_494[3]
                        *eax_1 = &eax_494[4]
                        edx_61 |= (zx.d(ecx_148.b) & 0x7f) << 0x15
                        
                        if (ecx_148.b s< 0)
                            ecx_148.b = eax_494[4]
                            *eax_1 = &eax_494[5]
                            edx_61 |= zx.d(ecx_148.b) << 0x1c
            
            *(ebx_51 + 0x14) = *((*result)[9] + (edx_61 << 2))
            char* eax_516 = *eax_1
            ecx_148.b = *eax_516
            *eax_1 = &eax_516[1]
            int32_t eax_518
            eax_518.b = ecx_148.b != 0
            *(ebx_51 + 0x44) = eax_518
            char* eax_519 = *eax_1
            ecx_148.b = *eax_519
            *eax_1 = &eax_519[1]
            int32_t eax_521
            eax_521.b = ecx_148.b != 0
            *(ebx_51 + 0x40) = eax_521
            char* eax_522 = *eax_1
            ecx_148.b = *eax_522
            *eax_1 = &eax_522[1]
            edx_61.b = eax_522[1]
            *eax_1 = &eax_522[2]
            uint32_t ebx_52 = zx.d(eax_522[2])
            *eax_1 = &eax_522[3]
            edx_61:1.b = eax_522[3]
            *eax_1 = &eax_522[4]
            *(arg4 + 0x28) =
                ((zx.d(ecx_148.b) << 8 | zx.d(edx_61.b)) << 8 | ebx_52) << 8 | zx.d(edx_61:1.b)
            char* eax_530 = *eax_1
            uint32_t ecx_155
            ecx_155.b = *eax_530
            *eax_1 = &eax_530[1]
            edx_61.b = eax_530[1]
            *eax_1 = &eax_530[2]
            uint32_t ebx_53 = zx.d(eax_530[2])
            *eax_1 = &eax_530[3]
            edx_61:1.b = eax_530[3]
            *eax_1 = &eax_530[4]
            *(arg4 + 0x2c) = *arg3
                f* (((zx.d(ecx_155.b) << 8 | zx.d(edx_61.b)) << 8 | ebx_53) << 8 | zx.d(edx_61:1.b))
            char* eax_539 = *eax_1
            uint32_t ecx_162
            ecx_162.b = *eax_539
            *eax_1 = &eax_539[1]
            edx_61.b = eax_539[1]
            *eax_1 = &eax_539[2]
            uint32_t ebx_54 = zx.d(eax_539[2])
            *eax_1 = &eax_539[3]
            edx_61:1.b = eax_539[3]
            *eax_1 = &eax_539[4]
            *(arg4 + 0x30) = *arg3
                f* (((zx.d(ecx_162.b) << 8 | zx.d(edx_61.b)) << 8 | ebx_54) << 8 | zx.d(edx_61:1.b))
            char* eax_548 = *eax_1
            uint32_t ecx_169
            ecx_169.b = *eax_548
            *eax_1 = &eax_548[1]
            edx_61.b = eax_548[1]
            *eax_1 = &eax_548[2]
            uint32_t ebx_55 = zx.d(eax_548[2])
            *eax_1 = &eax_548[3]
            edx_61:1.b = eax_548[3]
            *eax_1 = &eax_548[4]
            *(arg4 + 0x34) =
                ((zx.d(ecx_169.b) << 8 | zx.d(edx_61.b)) << 8 | ebx_55) << 8 | zx.d(edx_61:1.b)
            char* eax_556 = *eax_1
            uint32_t ecx_176
            ecx_176.b = *eax_556
            *eax_1 = &eax_556[1]
            edx_61.b = eax_556[1]
            *eax_1 = &eax_556[2]
            uint32_t ebx_56 = zx.d(eax_556[2])
            *eax_1 = &eax_556[3]
            edx_61:1.b = eax_556[3]
            *eax_1 = &eax_556[4]
            *(arg4 + 0x38) =
                ((zx.d(ecx_176.b) << 8 | zx.d(edx_61.b)) << 8 | ebx_56) << 8 | zx.d(edx_61:1.b)
            char* eax_564 = *eax_1
            uint32_t ecx_183
            ecx_183.b = *eax_564
            *eax_1 = &eax_564[1]
            edx_61.b = eax_564[1]
            *eax_1 = &eax_564[2]
            uint32_t ebx_57 = zx.d(eax_564[2])
            *eax_1 = &eax_564[3]
            edx_61:1.b = eax_564[3]
            *eax_1 = &eax_564[4]
            *(arg4 + 0x3c) =
                ((zx.d(ecx_183.b) << 8 | zx.d(edx_61.b)) << 8 | ebx_57) << 8 | zx.d(edx_61:1.b)
            char* eax_572 = *eax_1
            uint32_t ecx_190
            ecx_190.b = *eax_572
            *eax_1 = &eax_572[1]
            edx_61.b = eax_572[1]
            *eax_1 = &eax_572[2]
            uint32_t ebx_58 = zx.d(eax_572[2])
            *eax_1 = &eax_572[3]
            edx_61:1.b = eax_572[3]
            *eax_1 = &eax_572[4]
            *(arg4 + 0x18) =
                ((zx.d(ecx_190.b) << 8 | zx.d(edx_61.b)) << 8 | ebx_58) << 8 | zx.d(edx_61:1.b)
            char* eax_580 = *eax_1
            uint32_t ecx_197
            ecx_197.b = *eax_580
            *eax_1 = &eax_580[1]
            edx_61.b = eax_580[1]
            *eax_1 = &eax_580[2]
            uint32_t ebx_59 = zx.d(eax_580[2])
            *eax_1 = &eax_580[3]
            edx_61:1.b = eax_580[3]
            *eax_1 = &eax_580[4]
            *(arg4 + 0x1c) =
                ((zx.d(ecx_197.b) << 8 | zx.d(edx_61.b)) << 8 | ebx_59) << 8 | zx.d(edx_61:1.b)
            char* eax_588 = *eax_1
            uint32_t ecx_204
            ecx_204.b = *eax_588
            *eax_1 = &eax_588[1]
            edx_61.b = eax_588[1]
            *eax_1 = &eax_588[2]
            uint32_t ebx_60 = zx.d(eax_588[2])
            *eax_1 = &eax_588[3]
            edx_61:1.b = eax_588[3]
            *eax_1 = &eax_588[4]
            *(arg4 + 0x20) =
                ((zx.d(ecx_204.b) << 8 | zx.d(edx_61.b)) << 8 | ebx_60) << 8 | zx.d(edx_61:1.b)
            char* eax_596 = *eax_1
            uint32_t ecx_211
            ecx_211.b = *eax_596
            *eax_1 = &eax_596[1]
            edx_61.b = eax_596[1]
            *eax_1 = &eax_596[2]
            uint32_t ebx_61 = zx.d(eax_596[2])
            *eax_1 = &eax_596[3]
            edx_61:1.b = eax_596[3]
            *eax_1 = &eax_596[4]
            *(arg4 + 0x24) =
                ((zx.d(ecx_211.b) << 8 | zx.d(edx_61.b)) << 8 | ebx_61) << 8 | zx.d(edx_61:1.b)
            *((*result)[0x16] + (i_14 << 2)) = arg4
            i_3 = i_14 + 1
            i_14 = i_3
        while (i_3 s< (*result)[0x15])
    
    char* eax_604 = *eax_1
    ecx_141.b = *eax_604
    uint32_t edx_63 = zx.d(ecx_141.b) & 0x7f
    *eax_1 = &eax_604[1]
    
    if (ecx_141.b s< 0)
        ecx_141.b = eax_604[1]
        *eax_1 = &eax_604[2]
        edx_63 |= (zx.d(ecx_141.b) & 0x7f) << 7
        
        if (ecx_141.b s< 0)
            ecx_141.b = eax_604[2]
            *eax_1 = &eax_604[3]
            edx_63 |= (zx.d(ecx_141.b) & 0x7f) << 0xe
            
            if (ecx_141.b s< 0)
                ecx_141.b = eax_604[3]
                *eax_1 = &eax_604[4]
                edx_63 |= (zx.d(ecx_141.b) & 0x7f) << 0x15
                
                if (ecx_141.b s< 0)
                    ecx_141.b = eax_604[4]
                    *eax_1 = &eax_604[5]
                    edx_63 |= zx.d(ecx_141.b) << 0x1c
    
    int32_t eax_617 = data_1151ae0
    (*result)[0x17] = edx_63
    uint32_t edx_64 = edx_63 << 2
    uint32_t eax_618
    
    if (eax_617 == 0)
        uint32_t var_34_28 = edx_64
        eax_618 = _malloc()
    else
        eax_618 = eax_617(edx_64, 
            "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\skeletonbinary.c", 0x410)
    
    bool cond:6 = (*result)[0x17] s<= 0
    result[6][0] = eax_618
    int32_t i_15 = 0
    
    if (not(cond:6))
        int32_t i_4
        
        do
            char* eax_619 = sub_527db0(eax_1)
            int32_t eax_620 = data_1151ae0
            uint32_t ebx_67
            
            if (eax_620 == 0)
                int32_t var_34_29 = 0x38
                uint32_t eax_622 = _malloc()
                arg4 = eax_622
                ebx_67 = eax_622
            else
                ebx_67 = eax_620(0x38, 
                    "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\pathconstraintdata.c", 
                    0x22)
                arg4 = ebx_67
            
            if (ebx_67 != 0)
                _memset(ebx_67, 0, 0x38)
            
            char* ecx_220 = eax_619
            void* var_24_20 = &ecx_220[1]
            void* eax_623
            
            do
                eax_623.b = *ecx_220
                ecx_220 = &ecx_220[1]
            while (eax_623.b != 0)
            int32_t eax_624 = data_1151ae0
            int32_t eax_625
            
            if (eax_624 == 0)
                void* var_34_30 = ecx_220 - var_24_20 + 1
                eax_625 = _malloc()
            else
                eax_625 = eax_624(ecx_220 - var_24_20 + 1, 
                    "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\pathconstraintdata.c", 
                    0x23)
            
            char* ecx_223 = eax_619
            *ebx_67 = eax_625
            void* edx_66 = eax_625 - eax_619
            
            do
                eax_625.b = *ecx_223
                ecx_223 = &ecx_223[1]
                *(ecx_223 + edx_66 - 1) = eax_625.b
            while (eax_625.b != 0)
            
            char* eax_626 = *eax_1
            ecx_223.b = *eax_626
            int32_t edx_68 = zx.d(ecx_223.b) & 0x7f
            *eax_1 = &eax_626[1]
            
            if (ecx_223.b s< 0)
                ecx_223.b = eax_626[1]
                *eax_1 = &eax_626[2]
                edx_68 |= (zx.d(ecx_223.b) & 0x7f) << 7
                
                if (ecx_223.b s< 0)
                    ecx_223.b = eax_626[2]
                    *eax_1 = &eax_626[3]
                    edx_68 |= (zx.d(ecx_223.b) & 0x7f) << 0xe
                    
                    if (ecx_223.b s< 0)
                        ecx_223.b = eax_626[3]
                        *eax_1 = &eax_626[4]
                        edx_68 |= (zx.d(ecx_223.b) & 0x7f) << 0x15
                        
                        if (ecx_223.b s< 0)
                            ecx_223.b = eax_626[4]
                            *eax_1 = &eax_626[5]
                            edx_68 |= zx.d(ecx_223.b) << 0x1c
            
            *(ebx_67 + 4) = edx_68
            char* eax_646 = *eax_1
            ecx_223.b = *eax_646
            *eax_1 = &eax_646[1]
            int32_t eax_648
            eax_648.b = ecx_223.b != 0
            *(ebx_67 + 8) = eax_648
            _free(eax_619)
            char* eax_649 = *eax_1
            char ecx_224 = *eax_649
            int32_t edx_70 = zx.d(ecx_224) & 0x7f
            *eax_1 = &eax_649[1]
            
            if (ecx_224 s< 0)
                ecx_224 = eax_649[1]
                *eax_1 = &eax_649[2]
                edx_70 |= (zx.d(ecx_224) & 0x7f) << 7
                
                if (ecx_224 s< 0)
                    ecx_224 = eax_649[2]
                    *eax_1 = &eax_649[3]
                    edx_70 |= (zx.d(ecx_224) & 0x7f) << 0xe
                    
                    if (ecx_224 s< 0)
                        ecx_224 = eax_649[3]
                        *eax_1 = &eax_649[4]
                        edx_70 |= (zx.d(ecx_224) & 0x7f) << 0x15
                        
                        if (ecx_224 s< 0)
                            ecx_224 = eax_649[4]
                            *eax_1 = &eax_649[5]
                            edx_70 |= zx.d(ecx_224) << 0x1c
            
            int32_t eax_669 = data_1151ae0
            *(ebx_67 + 0xc) = edx_70
            int32_t edx_71 = edx_70 << 2
            int32_t eax_670
            int32_t ecx_225
            
            if (eax_669 == 0)
                int32_t var_34_32 = edx_71
                eax_670, ecx_225 = _malloc()
            else
                eax_670, ecx_225 = eax_669(edx_71, 
                    "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\skeletonbinary.c", 0x419)
            
            bool cond:13_1 = *(ebx_67 + 0xc) s<= 0
            *(ebx_67 + 0x10) = eax_670
            int32_t j_5 = 0
            
            if (not(cond:13_1))
                int32_t j_2
                
                do
                    char* eax_671 = *eax_1
                    ecx_225.b = *eax_671
                    int32_t edx_73 = zx.d(ecx_225.b) & 0x7f
                    *eax_1 = &eax_671[1]
                    
                    if (ecx_225.b s< 0)
                        ecx_225.b = eax_671[1]
                        *eax_1 = &eax_671[2]
                        edx_73 |= (zx.d(ecx_225.b) & 0x7f) << 7
                        
                        if (ecx_225.b s< 0)
                            ecx_225.b = eax_671[2]
                            *eax_1 = &eax_671[3]
                            edx_73 |= (zx.d(ecx_225.b) & 0x7f) << 0xe
                            
                            if (ecx_225.b s< 0)
                                ecx_225.b = eax_671[3]
                                *eax_1 = &eax_671[4]
                                edx_73 |= (zx.d(ecx_225.b) & 0x7f) << 0x15
                                
                                if (ecx_225.b s< 0)
                                    ecx_225.b = eax_671[4]
                                    *eax_1 = &eax_671[5]
                                    edx_73 |= zx.d(ecx_225.b) << 0x1c
                    
                    *(*(ebx_67 + 0x10) + (j_5 << 2)) = *((*result)[9] + (edx_73 << 2))
                    j_2 = j_5 + 1
                    j_5 = j_2
                while (j_2 s< *(ebx_67 + 0xc))
            
            char* eax_693 = *eax_1
            ecx_225.b = *eax_693
            int32_t edx_76 = zx.d(ecx_225.b) & 0x7f
            *eax_1 = &eax_693[1]
            
            if (ecx_225.b s< 0)
                ecx_225.b = eax_693[1]
                *eax_1 = &eax_693[2]
                edx_76 |= (zx.d(ecx_225.b) & 0x7f) << 7
                
                if (ecx_225.b s< 0)
                    ecx_225.b = eax_693[2]
                    *eax_1 = &eax_693[3]
                    edx_76 |= (zx.d(ecx_225.b) & 0x7f) << 0xe
                    
                    if (ecx_225.b s< 0)
                        ecx_225.b = eax_693[3]
                        *eax_1 = &eax_693[4]
                        edx_76 |= (zx.d(ecx_225.b) & 0x7f) << 0x15
                        
                        if (ecx_225.b s< 0)
                            ecx_225.b = eax_693[4]
                            *eax_1 = &eax_693[5]
                            edx_76 |= zx.d(ecx_225.b) << 0x1c
            
            *(ebx_67 + 0x14) = *((*result)[0xb] + (edx_76 << 2))
            char* eax_715 = *eax_1
            ecx_225.b = *eax_715
            int32_t edx_78 = zx.d(ecx_225.b) & 0x7f
            *eax_1 = &eax_715[1]
            
            if (ecx_225.b s< 0)
                ecx_225.b = eax_715[1]
                *eax_1 = &eax_715[2]
                edx_78 |= (zx.d(ecx_225.b) & 0x7f) << 7
                
                if (ecx_225.b s< 0)
                    ecx_225.b = eax_715[2]
                    *eax_1 = &eax_715[3]
                    edx_78 |= (zx.d(ecx_225.b) & 0x7f) << 0xe
                    
                    if (ecx_225.b s< 0)
                        ecx_225.b = eax_715[3]
                        *eax_1 = &eax_715[4]
                        edx_78 |= (zx.d(ecx_225.b) & 0x7f) << 0x15
                        
                        if (ecx_225.b s< 0)
                            ecx_225.b = eax_715[4]
                            *eax_1 = &eax_715[5]
                            edx_78 |= zx.d(ecx_225.b) << 0x1c
            
            *(ebx_67 + 0x18) = edx_78
            char* eax_735 = *eax_1
            ecx_225.b = *eax_735
            int32_t edx_80 = zx.d(ecx_225.b) & 0x7f
            *eax_1 = &eax_735[1]
            
            if (ecx_225.b s< 0)
                ecx_225.b = eax_735[1]
                *eax_1 = &eax_735[2]
                edx_80 |= (zx.d(ecx_225.b) & 0x7f) << 7
                
                if (ecx_225.b s< 0)
                    ecx_225.b = eax_735[2]
                    *eax_1 = &eax_735[3]
                    edx_80 |= (zx.d(ecx_225.b) & 0x7f) << 0xe
                    
                    if (ecx_225.b s< 0)
                        ecx_225.b = eax_735[3]
                        *eax_1 = &eax_735[4]
                        edx_80 |= (zx.d(ecx_225.b) & 0x7f) << 0x15
                        
                        if (ecx_225.b s< 0)
                            ecx_225.b = eax_735[4]
                            *eax_1 = &eax_735[5]
                            edx_80 |= zx.d(ecx_225.b) << 0x1c
            
            *(ebx_67 + 0x1c) = edx_80
            char* eax_755 = *eax_1
            ecx_225.b = *eax_755
            int32_t edx_82 = zx.d(ecx_225.b) & 0x7f
            *eax_1 = &eax_755[1]
            
            if (ecx_225.b s< 0)
                ecx_225.b = eax_755[1]
                *eax_1 = &eax_755[2]
                edx_82 |= (zx.d(ecx_225.b) & 0x7f) << 7
                
                if (ecx_225.b s< 0)
                    ecx_225.b = eax_755[2]
                    *eax_1 = &eax_755[3]
                    edx_82 |= (zx.d(ecx_225.b) & 0x7f) << 0xe
                    
                    if (ecx_225.b s< 0)
                        ecx_225.b = eax_755[3]
                        *eax_1 = &eax_755[4]
                        edx_82 |= (zx.d(ecx_225.b) & 0x7f) << 0x15
                        
                        if (ecx_225.b s< 0)
                            ecx_225.b = eax_755[4]
                            *eax_1 = &eax_755[5]
                            edx_82 |= zx.d(ecx_225.b) << 0x1c
            
            *(ebx_67 + 0x20) = edx_82
            char* eax_775 = *eax_1
            ecx_225.b = *eax_775
            *eax_1 = &eax_775[1]
            edx_82.b = eax_775[1]
            *eax_1 = &eax_775[2]
            uint32_t ebx_68 = zx.d(eax_775[2])
            *eax_1 = &eax_775[3]
            edx_82:1.b = eax_775[3]
            *eax_1 = &eax_775[4]
            *(arg4 + 0x24) =
                ((zx.d(ecx_225.b) << 8 | zx.d(edx_82.b)) << 8 | ebx_68) << 8 | zx.d(edx_82:1.b)
            char* eax_783 = *eax_1
            uint32_t ecx_232
            ecx_232.b = *eax_783
            *eax_1 = &eax_783[1]
            edx_82.b = eax_783[1]
            *eax_1 = &eax_783[2]
            uint32_t ebx_69 = zx.d(eax_783[2])
            *eax_1 = &eax_783[3]
            edx_82:1.b = eax_783[3]
            *eax_1 = &eax_783[4]
            float xmm0_48 =
                ((zx.d(ecx_232.b) << 8 | zx.d(edx_82.b)) << 8 | ebx_69) << 8 | zx.d(edx_82:1.b)
            bool cond:15_1 = *(arg4 + 0x18) != 0
            *(arg4 + 0x28) = xmm0_48
            
            if (not(cond:15_1))
                *(arg4 + 0x28) = xmm0_48 f* *arg3
            
            char* eax_791 = *eax_1
            uint32_t ecx_239
            ecx_239.b = *eax_791
            *eax_1 = &eax_791[1]
            edx_82.b = eax_791[1]
            *eax_1 = &eax_791[2]
            ebx_69.b = eax_791[2]
            *eax_1 = &eax_791[3]
            edx_82:1.b = eax_791[3]
            *eax_1 = &eax_791[4]
            uint32_t ecx_246 =
                ((zx.d(ecx_239.b) << 8 | zx.d(edx_82.b)) << 8 | zx.d(ebx_69.b)) << 8 | zx.d(edx_82:1.b)
            float* ecx_247 = *(arg4 + 0x1c)
            *(arg4 + 0x2c) = ecx_246
            
            if (ecx_247 == 0 || ecx_247 == 1)
                *(arg4 + 0x2c) = ecx_246 f* *arg3
            
            char* eax_800 = *eax_1
            ecx_247.b = *eax_800
            *eax_1 = &eax_800[1]
            edx_82.b = eax_800[1]
            *eax_1 = &eax_800[2]
            uint32_t ebx_70 = zx.d(eax_800[2])
            *eax_1 = &eax_800[3]
            edx_82:1.b = eax_800[3]
            *eax_1 = &eax_800[4]
            *(arg4 + 0x30) =
                ((zx.d(ecx_247.b) << 8 | zx.d(edx_82.b)) << 8 | ebx_70) << 8 | zx.d(edx_82:1.b)
            char* eax_808 = *eax_1
            uint32_t ecx_254
            ecx_254.b = *eax_808
            *eax_1 = &eax_808[1]
            edx_82.b = eax_808[1]
            *eax_1 = &eax_808[2]
            uint32_t ebx_71 = zx.d(eax_808[2])
            *eax_1 = &eax_808[3]
            edx_82:1.b = eax_808[3]
            *eax_1 = &eax_808[4]
            *(arg4 + 0x34) =
                ((zx.d(ecx_254.b) << 8 | zx.d(edx_82.b)) << 8 | ebx_71) << 8 | zx.d(edx_82:1.b)
            eax_618 = result[6][0]
            *(eax_618 + (i_15 << 2)) = arg4
            i_4 = i_15 + 1
            i_15 = i_4
        while (i_4 s< (*result)[0x17])
    
    (*result)[0xe] = sub_52c9f0(eax_618, eax_1, arg3, 0xffffffff, result, var_20)
    char* eax_816 = *eax_1
    char ecx_264 = *eax_816
    uint32_t edx_85 = zx.d(ecx_264) & 0x7f
    *eax_1 = &eax_816[1]
    
    if (ecx_264 s< 0)
        ecx_264 = eax_816[1]
        *eax_1 = &eax_816[2]
        edx_85 |= (zx.d(ecx_264) & 0x7f) << 7
        
        if (ecx_264 s< 0)
            ecx_264 = eax_816[2]
            *eax_1 = &eax_816[3]
            edx_85 |= (zx.d(ecx_264) & 0x7f) << 0xe
            
            if (ecx_264 s< 0)
                ecx_264 = eax_816[3]
                *eax_1 = &eax_816[4]
                edx_85 |= (zx.d(ecx_264) & 0x7f) << 0x15
                
                if (ecx_264 s< 0)
                    ecx_264 = eax_816[4]
                    *eax_1 = &eax_816[5]
                    edx_85 |= zx.d(ecx_264) << 0x1c
    
    bool cond:7 = (*result)[0xe] == 0
    result[3][0] = edx_85
    
    if (not(cond:7))
        edx_85 += 1
        result[3][0] = edx_85
    
    int32_t eax_829 = data_1151ae0
    uint32_t edx_86 = edx_85 << 2
    uint32_t eax_830
    
    if (eax_829 == 0)
        uint32_t var_34_34 = edx_86
        eax_830 = _malloc()
    else
        eax_830 = eax_829(edx_86, 
            "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\skeletonbinary.c", 0x431)
    
    uint32_t eax_831 = (*result)[0xe]
    (*result)[0xd] = eax_830
    
    if (eax_831 != 0)
        *eax_830 = eax_831
        eax_831 = (*result)[0xe]
    
    int32_t i_5
    i_5.b = eax_831 != 0
    
    for (; i_5 s< result[3][0]; i_5 += 1)
        eax_831 = sub_52c9f0(eax_831, eax_1, arg3, 0, result, var_20)
        *((*result)[0xd] + (i_5 << 2)) = eax_831
    
    float* eax_832 = arg3
    arg4 = 0
    uint32_t i_6
    
    if (eax_832[4] s> 0)
        int32_t edx_88 = 0
        int32_t var_20_1 = 0
        
        do
            char** ebx_78 = eax_832[6] i+ edx_88
            char* edx_89 = ebx_78[1]
            uint32_t eax_833
            
            if (edx_89 != 0)
                eax_833 = sub_52f690(result, edx_89)
            else
                eax_833 = (*result)[0xe]
            
            if (eax_833 == 0)
                _free(eax_1)
                sub_527c10(sub_52f380(result), "Skin not found: ", arg3, ebx_78[1])
                return 0
            
            void* eax_834 = sub_571ef0(eax_833, ebx_78[2], eax_833, *ebx_78)
            
            if (eax_834 == 0)
                _free(eax_1)
                sub_527c10(sub_52f380(result), "Parent mesh not found: ", arg3, *ebx_78)
                return 0
            
            void* edx_91 = eax_834
            void* ecx_268 = ebx_78[3]
            
            if (ebx_78[4] == 0)
                edx_91 = ecx_268
            
            *(ecx_268 + 0x28) = edx_91
            sub_5728c0(ebx_78[3], eax_834)
            sub_5725e0(ebx_78[3])
            void* ecx_271 = arg3[1]
            int32_t eax_837 = *(*(ecx_271 + 8) + 4)
            
            if (eax_837 != 0)
                eax_837(ecx_271, ebx_78[3])
            
            eax_832 = arg3
            i_6 = arg4 + 1
            edx_88 = var_20_1 + 0x14
            arg4 = i_6
            var_20_1 = edx_88
        while (i_6 s< eax_832[4])
    
    char* eax_838 = *eax_1
    i_6.b = *eax_838
    uint32_t edx_95 = zx.d(i_6.b) & 0x7f
    *eax_1 = &eax_838[1]
    
    if (i_6.b s< 0)
        i_6.b = eax_838[1]
        *eax_1 = &eax_838[2]
        edx_95 |= (zx.d(i_6.b) & 0x7f) << 7
        
        if (i_6.b s< 0)
            i_6.b = eax_838[2]
            *eax_1 = &eax_838[3]
            edx_95 |= (zx.d(i_6.b) & 0x7f) << 0xe
            
            if (i_6.b s< 0)
                i_6.b = eax_838[3]
                *eax_1 = &eax_838[4]
                edx_95 |= (zx.d(i_6.b) & 0x7f) << 0x15
                
                if (i_6.b s< 0)
                    i_6.b = eax_838[4]
                    *eax_1 = &eax_838[5]
                    edx_95 |= zx.d(i_6.b) << 0x1c
    
    int32_t eax_851 = data_1151ae0
    (*result)[0xf] = edx_95
    uint32_t edx_96 = edx_95 << 2
    uint32_t eax_852
    int32_t i_7
    
    if (eax_851 == 0)
        uint32_t var_34_40 = edx_96
        eax_852, i_7 = _malloc()
    else
        eax_852, i_7 = eax_851(edx_96, 
            "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\skeletonbinary.c", 0x455)
    
    bool cond:11 = (*result)[0xf] s<= 0
    result[4][0] = eax_852
    int32_t i_9 = 0
    
    if (not(cond:11))
        do
            char* ebx_83 = sub_527e70(eax_1, result)
            int32_t eax_858 = data_1151ae0
            uint32_t eax_859
            
            if (eax_858 == 0)
                int32_t var_34_41 = 0x1c
                eax_859 = _malloc()
            else
                eax_859 = eax_858(0x1c, 
                    "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\eventdata.c", 0x22)
            
            arg4 = eax_859
            
            if (eax_859 != 0)
                __builtin_memset(eax_859, 0, 0x1c)
            
            char* ecx_278 = ebx_83
            void* edx_98 = &ecx_278[1]
            
            do
                eax_859.b = *ecx_278
                ecx_278 = &ecx_278[1]
            while (eax_859.b != 0)
            
            int32_t eax_860 = data_1151ae0
            int32_t eax_861
            
            if (eax_860 == 0)
                void* var_34_42 = ecx_278 - edx_98 + 1
                eax_861 = _malloc()
            else
                eax_861 = eax_860(ecx_278 - edx_98 + 1, 
                    "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\eventdata.c", 0x23)
            
            *arg4 = eax_861
            void* ecx_282 = eax_861 - ebx_83
            uint32_t eax_862
            
            do
                eax_862.b = *ebx_83
                ebx_83 = &ebx_83[1]
                *(ebx_83 + ecx_282 - 1) = eax_862.b
            while (eax_862.b != 0)
            char* eax_863 = *eax_1
            ecx_282.b = *eax_863
            int32_t edx_100 = zx.d(ecx_282.b) & 0x7f
            *eax_1 = &eax_863[1]
            
            if (ecx_282.b s< 0)
                ecx_282.b = eax_863[1]
                *eax_1 = &eax_863[2]
                edx_100 |= (zx.d(ecx_282.b) & 0x7f) << 7
                
                if (ecx_282.b s< 0)
                    ecx_282.b = eax_863[2]
                    *eax_1 = &eax_863[3]
                    edx_100 |= (zx.d(ecx_282.b) & 0x7f) << 0xe
                    
                    if (ecx_282.b s< 0)
                        ecx_282.b = eax_863[3]
                        *eax_1 = &eax_863[4]
                        edx_100 |= (zx.d(ecx_282.b) & 0x7f) << 0x15
                        
                        if (ecx_282.b s< 0)
                            ecx_282.b = eax_863[4]
                            *eax_1 = &eax_863[5]
                            edx_100 |= zx.d(ecx_282.b) << 0x1c
            
            *(arg4 + 4) = edx_100 u>> 1 ^ neg.d(edx_100 & 1)
            char* eax_879 = *eax_1
            uint32_t ecx_283
            ecx_283.b = *eax_879
            *eax_1 = &eax_879[1]
            int32_t edx_102
            edx_102.b = eax_879[1]
            *eax_1 = &eax_879[2]
            char* ebx_84
            ebx_84.b = eax_879[2]
            *eax_1 = &eax_879[3]
            edx_102:1.b = eax_879[3]
            *eax_1 = &eax_879[4]
            uint32_t ebx_85 = arg4
            *(ebx_85 + 8) = ((zx.d(ecx_283.b) << 8 | zx.d(edx_102.b)) << 8 | zx.d(ebx_84.b)) << 8
                | zx.d(edx_102:1.b)
            *(ebx_85 + 0xc) = sub_527db0(eax_1)
            char* eax_888
            int16_t edx_103
            eax_888, edx_103 = sub_527db0(eax_1)
            *(ebx_85 + 0x10) = eax_888
            
            if (eax_888 != 0)
                char* eax_889 = *eax_1
                char ecx_293 = *eax_889
                *eax_1 = &eax_889[1]
                edx_103.b = eax_889[1]
                *eax_1 = &eax_889[2]
                uint32_t ebx_86 = zx.d(eax_889[2])
                *eax_1 = &eax_889[3]
                edx_103:1.b = eax_889[3]
                *eax_1 = &eax_889[4]
                *(arg4 + 0x14) =
                    ((zx.d(ecx_293) << 8 | zx.d(edx_103.b)) << 8 | ebx_86) << 8 | zx.d(edx_103:1.b)
                char* eax_897 = *eax_1
                uint32_t ecx_300
                ecx_300.b = *eax_897
                *eax_1 = &eax_897[1]
                edx_103.b = eax_897[1]
                *eax_1 = &eax_897[2]
                uint32_t ebx_87 = zx.d(eax_897[2])
                *eax_1 = &eax_897[3]
                edx_103:1.b = eax_897[3]
                *eax_1 = &eax_897[4]
                ebx_85 = arg4
                *(ebx_85 + 0x18) =
                    ((zx.d(ecx_300.b) << 8 | zx.d(edx_103.b)) << 8 | ebx_87) << 8 | zx.d(edx_103:1.b)
            
            *(result[4][0] + (i_9 << 2)) = ebx_85
            i_7 = i_9 + 1
            i_9 = i_7
        while (i_7 s< (*result)[0xf])
    
    char* eax_905 = *eax_1
    i_7.b = *eax_905
    uint32_t edx_105 = zx.d(i_7.b) & 0x7f
    *eax_1 = &eax_905[1]
    
    if (i_7.b s< 0)
        i_7.b = eax_905[1]
        *eax_1 = &eax_905[2]
        edx_105 |= (zx.d(i_7.b) & 0x7f) << 7
        
        if (i_7.b s< 0)
            i_7.b = eax_905[2]
            *eax_1 = &eax_905[3]
            edx_105 |= (zx.d(i_7.b) & 0x7f) << 0xe
            
            if (i_7.b s< 0)
                i_7.b = eax_905[3]
                *eax_1 = &eax_905[4]
                edx_105 |= (zx.d(i_7.b) & 0x7f) << 0x15
                
                if (i_7.b s< 0)
                    i_7.b = eax_905[4]
                    *eax_1 = &eax_905[5]
                    edx_105 |= zx.d(i_7.b) << 0x1c
    
    int32_t eax_918 = data_1151ae0
    (*result)[0x11] = edx_105
    uint32_t edx_106 = edx_105 << 2
    uint32_t eax_919
    
    if (eax_918 == 0)
        uint32_t var_34_43 = edx_106
        eax_919 = _malloc()
    else
        eax_919 = eax_918(edx_106, 
            "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\skeletonbinary.c", 0x466)
    
    bool cond:14 = (*result)[0x11] s<= 0
    (*result)[0x12] = eax_919
    arg4 = 0
    
    if (not(cond:14))
        uint32_t i_8
        
        do
            char* eax_920 = sub_527db0(eax_1)
            int128_t* eax_921 = sub_528160(eax_920, eax_920, arg3, eax_1, result_1)
            _free(eax_920)
            
            if (eax_921 == 0)
                _free(eax_1)
                sub_52f380(result_1)
                return 0
            
            result = result_1
            *((*result)[0x12] + (arg4 << 2)) = eax_921
            i_8 = arg4 + 1
            arg4 = i_8
        while (i_8 s< (*result)[0x11])
    
    _free(eax_1)
    return result
}
