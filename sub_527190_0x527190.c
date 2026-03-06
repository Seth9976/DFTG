// 函数名称: sub_527190
// 虚拟地址: 0x527190
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_527190(int32_t arg1, int32_t arg2, char* arg3, char* arg4)
{
    // 第一条实际指令: void var_5c
    void var_5c
    int32_t var_c = __security_cookie ^ &var_5c
    char* esi = arg3
    char* var_50 = esi
    void* ebx = &esi[arg2]
    char* edx = arg4
    void* var_44 = ebx
    int32_t eax_1
    
    do
        eax_1.b = *edx
        edx = &edx[1]
    while (eax_1.b != 0)
    
    void* edx_1 = edx - &edx[1]
    void* var_40_1
    
    if (edx_1 s<= 0)
        var_40_1 = nullptr
    else
        eax_1.b = *(arg4 + edx_1 - 1)
        
        if (eax_1.b == 0x2f)
            var_40_1 = nullptr
        else
            var_40_1 = 1
            
            if (eax_1.b == 0x5c)
                var_40_1 = nullptr
    
    int32_t eax_2 = data_1151ae0
    int32_t** edi_1 = nullptr
    int32_t** var_38 = nullptr
    uint32_t (* var_34)[0x4] = nullptr
    int32_t* result
    
    if (eax_2 == 0)
        int32_t var_6c_1 = 0xc
        result = _malloc()
    else
        result = eax_2(0xc, "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\atlas.c", 0xb4)
    
    if (result != 0)
        *result = 0
        result[1] = 0
    
    result[2] = 0
    
    while (true)
        if (esi == ebx)
            @__security_check_cookie@4(var_c ^ &var_5c)
            return result
        
        char* var_58 = esi
        
        while (*esi != 0xa)
            esi = &esi[1]
            var_50 = esi
            
            if (esi == ebx)
                break
        
        char* var_54 = esi
        sub_527030(&var_58)
        
        if (esi != ebx)
            esi = &esi[1]
            var_50 = esi
        
        char* eax_3 = var_54
        void* eax_4 = eax_3 - var_58
        
        if (eax_3 == var_58)
            edi_1 = nullptr
        else
            char* var_2c
            int32_t var_28
            char* var_24
            int32_t var_20
            
            if (edi_1 != 0)
                int32_t eax_43 = data_1151ae0
                uint32_t (* eax_44)[0x4]
                
                if (eax_43 == 0)
                    int32_t var_6c_19 = 0x54
                    eax_44 = _malloc()
                else
                    eax_44 = eax_43(0x54, 
                        "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\atlas.c", 0x32)
                
                if (eax_44 != 0)
                    _memset(eax_44, 0, 0x54)
                
                if (var_34 == 0)
                    result[1] = eax_44
                else
                    var_34[5][0] = eax_44
                
                int32_t ecx_23 = data_1151ae0
                (*eax_44)[0x13] = edi_1
                void* ebx_10 = var_54 - var_58
                var_34 = eax_44
                char* eax_48
                
                if (ecx_23 == 0)
                    void* var_6c_20 = ebx_10 + 1
                    eax_48 = _malloc()
                else
                    eax_48 = ecx_23(ebx_10 + 1, 
                        "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\atlas.c", 0x87)
                
                sub_579300(eax_48, var_58, ebx_10)
                char* eax_49 = eax_48
                *(eax_49 + ebx_10) = 0
                ebx = var_44
                *eax_44 = eax_49
                sub_527090(&var_58, ebx, &var_50, &var_58)
                char* ecx_25 = var_58
                char* edx_14 = var_54
                
                if (ecx_25 == edx_14)
                    break
                
                while (true)
                    char eax_51 = *ecx_25
                    ecx_25 = &ecx_25[1]
                    
                    if (eax_51 == 0x3a)
                        break
                    
                    if (ecx_25 == edx_14)
                        goto label_52757f
                
                var_58 = ecx_25
                sub_527030(&var_58)
                char* ecx_27 = var_58
                uint32_t eax_55
                
                if (_strncmp("true", ecx_27, var_54 - ecx_27) != 0)
                    char* ecx_28 = var_58
                    int32_t* ecx_29
                    int32_t edx_15
                    eax_55, ecx_29, edx_15 = _strncmp("false", ecx_28, var_54 - ecx_28)
                    
                    if (eax_55 != 0)
                        eax_55 = _strtol(&var_54, edx_15, ecx_29, var_58, &var_54, 0xa)
                else
                    eax_55 = 0x5a
                
                (*eax_44)[0xf] = eax_55
                uint32_t ecx_30
                ecx_30.b = eax_55 == 0x5a
                (*eax_44)[0xe] = ecx_30
                int32_t eax_59
                int32_t* ecx_31
                int32_t edx_17
                eax_59, ecx_31, edx_17 = sub_5270e0(&var_2c)
                
                if (eax_59 != 2)
                    break
                
                int32_t eax_61
                int32_t* ecx_32
                int32_t edx_18
                eax_61, ecx_32, edx_18 = _strtol(&var_28, edx_17, ecx_31, var_2c, &var_28, 0xa)
                (*eax_44)[1] = eax_61
                (*eax_44)[2] = _strtol(&var_20, edx_18, ecx_32, var_24, &var_20, 0xa)
                int32_t eax_64
                int32_t* ecx_33
                int32_t edx_20
                eax_64, ecx_33, edx_20 = sub_5270e0(&var_2c)
                
                if (eax_64 != 2)
                    break
                
                int32_t eax_66
                int32_t* ecx_34
                int32_t edx_21
                eax_66, ecx_34, edx_21 = _strtol(&var_28, edx_20, ecx_33, var_2c, &var_28, 0xa)
                (*eax_44)[3] = eax_66
                int32_t eax_68 = _strtol(&var_20, edx_21, ecx_34, var_24, &var_20, 0xa)
                uint32_t edx_22 = (*eax_44)[1]
                eax_44[1][0] = eax_68
                bool cond:2_1 = (*eax_44)[0xe] == 0
                float xmm0_2 = _mm_cvtepi32_ps(zx.o(edi_1[8]))
                (*eax_44)[5] = _mm_cvtepi32_ps(zx.o(edx_22)) / xmm0_2
                uint128_t xmm1_4 = zx.o((*eax_44)[2])
                float xmm0_4 = _mm_cvtepi32_ps(zx.o(edi_1[9]))
                (*eax_44)[6] = _mm_cvtepi32_ps(xmm1_4) / xmm0_4
                float xmm0_6 = _mm_cvtepi32_ps(zx.o(edi_1[8]))
                uint32_t eax_71
                uint128_t xmm1_7
                
                if (cond:2_1)
                    xmm1_7 = zx.o((*eax_44)[3] + edx_22)
                    eax_71 = (*eax_44)[2] + eax_68
                else
                    xmm1_7 = zx.o(edx_22 + eax_68)
                    eax_71 = (*eax_44)[3] + (*eax_44)[2]
                
                (*eax_44)[7] = _mm_cvtepi32_ps(xmm1_7) / xmm0_6
                float xmm0_8 = _mm_cvtepi32_ps(zx.o(edi_1[9]))
                eax_44[2][0] = _mm_cvtepi32_ps(zx.o(eax_71)) / xmm0_8
                int32_t eax_75
                int32_t* ecx_36
                int32_t edx_24
                eax_75, ecx_36, edx_24 = sub_5270e0(&var_2c)
                
                if (eax_75 == 0)
                    break
                
                if (eax_75 == 4)
                    int32_t eax_76 = data_1151ae0
                    uint32_t eax_77
                    int32_t* ecx_37
                    int32_t edx_25
                    
                    if (eax_76 == 0)
                        int32_t var_6c_28 = 0x10
                        eax_77, ecx_37, edx_25 = _malloc()
                    else
                        eax_77, edx_25, ecx_37 = eax_76(0x10, 
                            "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\atlas.c", 0x113)
                    
                    (*eax_44)[0x11] = eax_77
                    int32_t eax_79
                    int32_t edx_26
                    eax_79, edx_26 = _strtol(&var_28, edx_25, ecx_37, var_2c, &var_28, 0xa)
                    int32_t* ecx_38 = (*eax_44)[0x11]
                    *ecx_38 = eax_79
                    int32_t eax_81
                    int32_t edx_27
                    eax_81, edx_27 = _strtol(&var_20, edx_26, ecx_38, var_24, &var_20, 0xa)
                    int32_t* ecx_39 = (*eax_44)[0x11]
                    ecx_39[1] = eax_81
                    int32_t var_1c
                    void var_18
                    int32_t eax_83
                    int32_t edx_28
                    eax_83, edx_28 = _strtol(&var_18, edx_27, ecx_39, var_1c, &var_18, 0xa)
                    int32_t* ecx_40 = (*eax_44)[0x11]
                    ecx_40[2] = eax_83
                    int32_t var_14
                    void var_10
                    *((*eax_44)[0x11] + 0xc) = _strtol(&var_10, edx_28, ecx_40, var_14, &var_10, 0xa)
                    int32_t eax_86
                    eax_86, ecx_36, edx_24 = sub_5270e0(&var_2c)
                    
                    if (eax_86 == 0)
                        break
                    
                    if (eax_86 == 4)
                        int32_t eax_87 = data_1151ae0
                        uint32_t eax_88
                        int32_t* ecx_42
                        int32_t edx_30
                        
                        if (eax_87 == 0)
                            int32_t var_6c_30 = 0x10
                            eax_88, ecx_42, edx_30 = _malloc()
                        else
                            eax_88, edx_30, ecx_42 = eax_87(0x10, 
                                "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\atlas.c", 
                                0x11c)
                        
                        (*eax_44)[0x12] = eax_88
                        int32_t eax_90
                        int32_t edx_31
                        eax_90, edx_31 = _strtol(&var_28, edx_30, ecx_42, var_2c, &var_28, 0xa)
                        int32_t* ecx_43 = (*eax_44)[0x12]
                        *ecx_43 = eax_90
                        int32_t eax_92
                        int32_t edx_32
                        eax_92, edx_32 = _strtol(&var_20, edx_31, ecx_43, var_24, &var_20, 0xa)
                        int32_t* ecx_44 = (*eax_44)[0x12]
                        ecx_44[1] = eax_92
                        int32_t eax_94
                        int32_t edx_33
                        eax_94, edx_33 = _strtol(&var_18, edx_32, ecx_44, var_1c, &var_18, 0xa)
                        int32_t* ecx_45 = (*eax_44)[0x12]
                        ecx_45[2] = eax_94
                        *((*eax_44)[0x12] + 0xc) =
                            _strtol(&var_10, edx_33, ecx_45, var_14, &var_10, 0xa)
                        int32_t eax_97
                        eax_97, ecx_36, edx_24 = sub_5270e0(&var_2c)
                        
                        if (eax_97 == 0)
                            break
                
                int32_t eax_99
                int32_t* ecx_47
                int32_t edx_35
                eax_99, ecx_47, edx_35 = _strtol(&var_28, edx_24, ecx_36, var_2c, &var_28, 0xa)
                (*eax_44)[0xb] = eax_99
                eax_44[3][0] = _strtol(&var_20, edx_35, ecx_47, var_24, &var_20, 0xa)
                int32_t* ecx_48
                int32_t edx_37
                ecx_48, edx_37 = sub_5270e0(&var_2c)
                int32_t eax_103
                int32_t* ecx_49
                int32_t edx_38
                eax_103, ecx_49, edx_38 = _strtol(&var_28, edx_37, ecx_48, var_2c, &var_28, 0xa)
                (*eax_44)[9] = eax_103
                (*eax_44)[0xa] = _strtol(&var_20, edx_38, ecx_49, var_24, &var_20, 0xa)
                sub_527090(&var_58, ebx, &var_50, &var_58)
                char* ecx_51 = var_58
                char* edx_40 = var_54
                
                if (ecx_51 == edx_40)
                    break
                
                while (true)
                    char eax_107 = *ecx_51
                    ecx_51 = &ecx_51[1]
                    
                    if (eax_107 == 0x3a)
                        var_58 = ecx_51
                        int32_t* ecx_53
                        int32_t edx_41
                        ecx_53, edx_41 = sub_527030(&var_58)
                        (*eax_44)[0xd] = _strtol(&var_54, edx_41, ecx_53, var_58, &var_54, 0xa)
                        esi = var_50
                        break
                    
                    if (ecx_51 == edx_40)
                        goto label_52757f
            else
                int32_t ecx_2 = data_1151ae0
                char* eax_6
                
                if (ecx_2 == 0)
                    void* var_6c_2 = eax_4 + 1
                    eax_6 = _malloc()
                else
                    eax_6 = ecx_2(eax_4 + 1, 
                        "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\atlas.c", 0x87)
                
                sub_579300(eax_6, var_58, eax_4)
                char* ecx_3 = eax_6
                *(eax_6 + eax_4) = 0
                char i
                
                do
                    i = *ecx_3
                    ecx_3 = &ecx_3[1]
                while (i != 0)
                void* esi_3 = var_40_1 + edx_1
                void* eax_8 = esi_3 + 1 + ecx_3 - &ecx_3[1]
                int32_t ecx_5 = data_1151ae0
                char* var_4c_2
                char* edi_2
                
                if (ecx_5 == 0)
                    void* var_6c_4 = eax_8
                    char* eax_10 = _malloc()
                    var_4c_2 = eax_10
                    edi_2 = eax_10
                else
                    edi_2 = ecx_5(eax_8, 
                        "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\atlas.c", 0xbc)
                    var_4c_2 = edi_2
                
                sub_579300(edi_2, arg4, edx_1)
                
                if (var_40_1 != 0)
                    *(edi_2 + edx_1) = 0x2f
                
                char* ecx_6 = eax_6
                void* eax_11
                
                do
                    eax_11.b = *ecx_6
                    ecx_6 = &ecx_6[1]
                    *(esi_3 - eax_6 + edi_2 + ecx_6 - 1) = eax_11.b
                while (eax_11.b != 0)
                int32_t eax_12 = data_1151ae0
                int32_t** eax_13
                
                if (eax_12 == 0)
                    int32_t var_6c_6 = 0x2c
                    eax_13 = _malloc()
                else
                    eax_13 = eax_12(0x2c, 
                        "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\atlas.c", 0x23)
                
                edi_1 = eax_13
                
                if (edi_1 != 0)
                    __builtin_memset(&edi_1[1], 0, 0x28)
                
                char* ecx_7 = eax_6
                *edi_1 = result
                void* edx_4 = &ecx_7[1]
                int32_t* eax_14
                
                do
                    eax_14.b = *ecx_7
                    ecx_7 = &ecx_7[1]
                while (eax_14.b != 0)
                int32_t eax_15 = data_1151ae0
                char* esi_5 = eax_6
                int32_t eax_16
                
                if (eax_15 == 0)
                    int32_t var_6c_7 = ecx_7 - edx_4 + 1
                    eax_16 = _malloc()
                else
                    eax_16 = eax_15(ecx_7 - edx_4 + 1, 
                        "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\atlas.c", 0x25)
                
                edi_1[1] = eax_16
                void* ecx_11 = eax_16 - eax_6
                
                do
                    eax_16.b = *esi_5
                    esi_5 = &esi_5[1]
                    *(ecx_11 + esi_5 - 1) = eax_16.b
                while (eax_16.b != 0)
                
                _free(eax_6)
                
                if (var_38 == 0)
                    *result = edi_1
                else
                    var_38[0xa] = edi_1
                
                var_38 = edi_1
                int32_t eax_19
                int32_t* ecx_12
                int32_t edx_6
                eax_19, ecx_12, edx_6 = sub_5270e0(&var_2c)
                
                if (eax_19 == 0)
                    break
                
                if (eax_19 == 2)
                    int32_t eax_23
                    int32_t* ecx_13
                    int32_t edx_7
                    eax_23, ecx_13, edx_7 = _strtol(&var_28, edx_6, ecx_12, var_2c, &var_28, 0xa)
                    edi_1[8] = eax_23
                    edi_1[9] = _strtol(&var_20, edx_7, ecx_13, var_24, &var_20, 0xa)
                    
                    if (sub_5270e0(&var_2c) == 0)
                        break
                
                int32_t esi_6 = 7
                char* eax_27 = var_2c
                void* ebx_4 = var_28 - eax_27
                
                while (_strncmp((&data_6ce6ac)[esi_6], eax_27, ebx_4) != 0)
                    int32_t temp4_1 = esi_6
                    esi_6 -= 1
                    
                    if (temp4_1 - 1 s< 0)
                        esi_6 = 0
                        break
                    
                    eax_27 = var_2c
                
                edi_1[2] = esi_6
                
                if (sub_5270e0(&var_2c) == 0)
                    break
                
                int32_t esi_7 = 7
                char* eax_30 = var_2c
                void* ebx_6 = var_28 - eax_30
                
                while (_strncmp((&data_6ce6cc)[esi_7], eax_30, ebx_6) != 0)
                    int32_t temp5_1 = esi_7
                    esi_7 -= 1
                    
                    if (temp5_1 - 1 s< 0)
                        esi_7 = 0
                        break
                    
                    eax_30 = var_2c
                
                edi_1[3] = esi_7
                int32_t esi_8 = 7
                char* eax_32 = var_24
                void* ebx_8 = var_20 - eax_32
                
                while (_strncmp((&data_6ce6cc)[esi_8], eax_32, ebx_8) != 0)
                    int32_t temp6_1 = esi_8
                    esi_8 -= 1
                    
                    if (temp6_1 - 1 s< 0)
                        esi_8 = 0
                        break
                    
                    eax_32 = var_24
                
                ebx = var_44
                edi_1[4] = esi_8
                sub_527090(&var_58, ebx, &var_50, &var_58)
                char* ecx_15 = var_58
                char* edx_11 = var_54
                
                if (ecx_15 == edx_11)
                    break
                
                while (true)
                    char eax_35 = *ecx_15
                    ecx_15 = &ecx_15[1]
                    
                    if (eax_35 == 0x3a)
                        var_58 = ecx_15
                        sub_527030(&var_58)
                        edi_1[5] = 1
                        edi_1[6] = 1
                        char* ecx_20 = var_58
                        
                        if (_strncmp("none", ecx_20, var_54 - ecx_20) != 0)
                            char* ecx_21 = var_58
                            void* eax_41 = var_54 - ecx_21
                            
                            if (eax_41 != 1)
                                if (_strncmp(0x6083e4, ecx_21, eax_41) == 0)
                                    edi_1[6] = 2
                                    edi_1[5] = 2
                            else
                                eax_41.b = *ecx_21
                                
                                if (eax_41.b == 0x78)
                                    edi_1[5] = 2
                                else if (eax_41.b == 0x79)
                                    edi_1[6] = 2
                        
                        sub_4d83c0(edi_1, var_4c_2)
                        _free(var_4c_2)
                        esi = var_50
                        break
                    
                    if (ecx_15 == edx_11)
                        goto label_52757f
    
    label_52757f:
    sub_527af0(result)
    @__security_check_cookie@4(var_c ^ &var_5c)
    return 0
}
