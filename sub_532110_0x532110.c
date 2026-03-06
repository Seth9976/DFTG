// 函数名称: sub_532110
// 虚拟地址: 0x532110
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_532110(void* arg1)
{
    // 第一条实际指令: int32_t eax = data_1151ae0
    int32_t eax = data_1151ae0
    int32_t* result
    
    if (eax == 0)
        int32_t var_28_1 = 0x74
        result = _malloc()
    else
        result = eax(0x74, "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\skeleton.c", 0x3c)
    
    if (result != 0)
        _memset(&result[1], 0, 0x70)
    
    int32_t ecx = data_1151ae0
    *result = arg1
    int32_t eax_2 = *(arg1 + 0x20)
    result[1] = eax_2
    int32_t eax_3 = eax_2 << 2
    int32_t eax_4
    
    if (ecx == 0)
        int32_t var_28_2 = eax_3
        eax_4 = _malloc()
    else
        eax_4 = ecx(eax_3, "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\skeleton.c", 0x41)
    
    int32_t esi_1 = result[1]
    result[2] = eax_4
    int32_t eax_5 = data_1151ae0
    int32_t esi_2 = esi_1 << 2
    uint32_t (* var_8)[0x4]
    uint32_t (* edx)[0x4]
    
    if (eax_5 == 0)
        int32_t var_28_3 = esi_2
        uint32_t (* eax_7)[0x4] = _malloc()
        var_8 = eax_7
        edx = eax_7
    else
        edx = eax_5(esi_2, "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\skeleton.c", 0x42)
        var_8 = edx
    
    if (edx != 0)
        _memset(edx, 0, esi_2)
        edx = var_8
    
    int32_t eax_16 = result[1]
    int32_t esi_3 = 0
    
    if (eax_16 s> 0)
        do
            int32_t eax_9 = *(*result + 0x24)
            void* ebx_1 = *(eax_9 + (esi_3 << 2))
            uint32_t ecx_1 = *(ebx_1 + 8)
            uint32_t (* ecx_3)[0x4]
            
            if (ecx_1 != 0)
                int32_t eax_11 = result[2]
                edx = var_8
                ecx_3 = sub_52f770(eax_11, result, ebx_1, *(eax_11 + (*ecx_1 << 2)))
                int32_t eax_14 = **(ebx_1 + 8)
                (*edx)[eax_14] += 1
            else
                edx = var_8
                ecx_3 = sub_52f770(eax_9, result, ebx_1, ecx_1)
            
            *(result[2] + (esi_3 << 2)) = ecx_3
            esi_3 += 1
            eax_16 = result[1]
        while (esi_3 s< eax_16)
    
    int32_t esi_4 = 0
    
    if (eax_16 s> 0)
        do
            int32_t ecx_6 = data_1151ae0
            void* ebx_2 = *(result[2] + (esi_4 << 2))
            int32_t eax_23 = (*edx)[**(*(*result + 0x24) + (esi_4 << 2))] << 2
            int32_t eax_24
            
            if (ecx_6 == 0)
                int32_t var_28_7 = eax_23
                eax_24 = _malloc()
            else
                eax_24 = ecx_6(eax_23, 
                    "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\skeleton.c", 0x53)
            
            edx = var_8
            esi_4 += 1
            *(ebx_2 + 0x10) = eax_24
            eax_16 = result[1]
        while (esi_4 s< eax_16)
    
    int32_t esi_5 = 0
    int32_t eax_27
    
    if (eax_16 s> 0)
        do
            void* ebx_3 = *(result[2] + (esi_5 << 2))
            void* edx_2 = *(ebx_3 + 8)
            
            if (edx_2 != 0)
                *(*(edx_2 + 0x10) + (*(edx_2 + 0xc) << 2)) = ebx_3
                *(edx_2 + 0xc) += 1
            
            eax_27 = result[1]
            esi_5 += 1
        while (esi_5 s< eax_27)
    
    int32_t eax_29
    
    if (eax_16 s<= 0 || eax_27 s<= 0)
        eax_29 = 0
    else
        eax_29 = *result[2]
    
    void* esi_6 = arg1
    int32_t ecx_8 = data_1151ae0
    result[3] = eax_29
    int32_t eax_30 = *(esi_6 + 0x28)
    result[4] = eax_30
    int32_t eax_31 = eax_30 << 2
    int32_t eax_32
    
    if (ecx_8 == 0)
        int32_t var_28_8 = eax_31
        eax_32 = _malloc()
    else
        eax_32 =
            ecx_8(eax_31, "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\skeleton.c", 0x5e)
    
    result[5] = eax_32
    int32_t ebx_4 = 0
    int32_t eax_33 = result[4]
    
    if (eax_33 s> 0)
        do
            void* eax_35 = *(*(esi_6 + 0x2c) + (ebx_4 << 2))
            int32_t eax_38 = *(result[2] + (**(eax_35 + 8) << 2))
            int32_t eax_39 = data_1151ae0
            void** eax_40
            
            if (eax_39 == 0)
                int32_t var_28_9 = 0x30
                eax_40 = _malloc()
            else
                eax_40 = eax_39(0x30, 
                    "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\slot.c", 0x27)
            
            if (eax_40 != 0)
                __builtin_memset(&eax_40[3], 0, 0x24)
            
            eax_40[1] = eax_38
            *eax_40 = eax_35
            eax_40[2] = 0x3f800000
            eax_40[3] = 0x3f800000
            eax_40[4] = 0x3f800000
            eax_40[5] = 0x3f800000
            sub_56d7b0(&eax_40[2])
            int32_t eax_42
            
            if (*(eax_35 + 0x20) != 0)
                int32_t eax_43 = data_1151ae0
                
                if (eax_43 == 0)
                    int32_t var_28_10 = 0x10
                    eax_42 = _malloc()
                else
                    eax_42 = eax_43(0x10, 
                        "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\color.c", 0x22)
            else
                eax_42 = 0
            
            eax_40[6] = eax_42
            sub_5744c0(eax_40)
            *(result[5] + (ebx_4 << 2)) = eax_40
            ebx_4 += 1
            eax_33 = result[4]
            esi_6 = arg1
        while (ebx_4 s< eax_33)
    
    int32_t ecx_13 = data_1151ae0
    int32_t eax_45 = eax_33 << 2
    char* eax_46
    
    if (ecx_13 == 0)
        int32_t var_28_11 = eax_45
        eax_46 = _malloc()
    else
        eax_46 =
            ecx_13(eax_45, "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\skeleton.c", 0x65)
    
    int32_t eax_48 = result[4] << 2
    char* var_2c = result[5]
    result[6] = eax_46
    sub_579300(eax_46, var_2c, eax_48)
    int32_t eax_49 = *(esi_6 + 0x4c)
    int32_t ecx_15 = data_1151ae0
    result[7] = eax_49
    int32_t eax_50 = eax_49 << 2
    int32_t eax_51
    
    if (ecx_15 == 0)
        int32_t var_28_13 = eax_50
        eax_51 = _malloc()
    else
        eax_51 =
            ecx_15(eax_50, "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\skeleton.c", 0x69)
    
    result[8] = eax_51
    int32_t i = 0
    void* eax_52 = *result
    int32_t i_3 = 0
    
    if (*(eax_52 + 0x4c) s> 0)
        do
            void* ebx_5 = *(*(eax_52 + 0x50) + (i << 2))
            int32_t eax_54 = data_1151ae0
            int32_t* eax_55
            
            if (eax_54 == 0)
                int32_t var_28_14 = 0x28
                eax_55 = _malloc()
            else
                eax_55 = eax_54(0x28, 
                    "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\ikconstraint.c", 0x26)
            
            if (eax_55 != 0)
                __builtin_memset(eax_55, 0, 0x28)
            
            int32_t ecx_16 = data_1151ae0
            *eax_55 = ebx_5
            eax_55[4] = *(ebx_5 + 0x18)
            eax_55[5] = *(ebx_5 + 0x1c)
            eax_55[6] = *(ebx_5 + 0x20)
            eax_55[7] = *(ebx_5 + 0x28)
            eax_55[8] = *(ebx_5 + 0x2c)
            int32_t eax_61 = *(ebx_5 + 0xc)
            eax_55[1] = eax_61
            int32_t eax_62 = eax_61 << 2
            int32_t eax_63
            
            if (ecx_16 == 0)
                int32_t var_28_15 = eax_62
                eax_63 = _malloc()
            else
                eax_63 = ecx_16(eax_62, 
                    "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\ikconstraint.c", 0x2f)
            
            int32_t j = 0
            eax_55[2] = eax_63
            
            if (eax_55[1] s> 0)
                do
                    *(eax_55[2] + (j << 2)) = sub_533410(result, *(*(*(*eax_55 + 0x10) + (j << 2)) + 4))
                    j += 1
                while (j s< eax_55[1])
            
            eax_55[3] = sub_533410(result, *(*(*eax_55 + 0x14) + 4))
            *(result[8] + (i_3 << 2)) = eax_55
            i = i_3 + 1
            eax_52 = *result
            i_3 = i
        while (i s< *(eax_52 + 0x4c))
        
        esi_6 = arg1
    
    int32_t eax_70 = *(esi_6 + 0x54)
    int32_t ecx_21 = data_1151ae0
    result[9] = eax_70
    int32_t eax_71 = eax_70 << 2
    int32_t eax_72
    
    if (ecx_21 == 0)
        int32_t var_28_16 = eax_71
        eax_72 = _malloc()
    else
        eax_72 =
            ecx_21(eax_71, "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\skeleton.c", 0x6e)
    
    result[0xa] = eax_72
    int32_t i_1 = 0
    void* eax_73 = *result
    int32_t i_4 = 0
    
    if (*(eax_73 + 0x54) s> 0)
        do
            void* ebx_6 = *(*(eax_73 + 0x58) + (i_1 << 2))
            int32_t eax_75 = data_1151ae0
            int32_t* eax_76
            
            if (eax_75 == 0)
                eax_76 = _malloc()
            else
                eax_76 = eax_75(0x24, 
                    "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\transformconstraint.c", 
                    0x24)
            
            if (eax_76 != 0)
                __builtin_memset(&eax_76[1], 0, 0x20)
            
            int32_t ecx_22 = data_1151ae0
            *eax_76 = ebx_6
            eax_76[4] = *(ebx_6 + 0x18)
            eax_76[5] = *(ebx_6 + 0x1c)
            eax_76[6] = *(ebx_6 + 0x20)
            eax_76[7] = *(ebx_6 + 0x24)
            int32_t eax_81 = *(ebx_6 + 0xc)
            eax_76[1] = eax_81
            int32_t eax_82 = eax_81 << 2
            int32_t eax_83
            
            if (ecx_22 == 0)
                int32_t var_28_17 = eax_82
                eax_83 = _malloc()
            else
                eax_83 = ecx_22(eax_82, 
                    "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\transformconstraint.c", 
                    0x2b)
            
            int32_t j_1 = 0
            eax_76[2] = eax_83
            
            if (eax_76[1] s> 0)
                do
                    *(eax_76[2] + (j_1 << 2)) =
                        sub_533410(result, *(*(*(*eax_76 + 0x10) + (j_1 << 2)) + 4))
                    j_1 += 1
                while (j_1 s< eax_76[1])
            
            eax_76[3] = sub_533410(result, *(*(*eax_76 + 0x14) + 4))
            *(result[0xa] + (i_4 << 2)) = eax_76
            i_1 = i_4 + 1
            eax_73 = *result
            i_4 = i_1
        while (i_1 s< *(eax_73 + 0x54))
        
        esi_6 = arg1
    
    int32_t eax_90 = *(esi_6 + 0x5c)
    int32_t ecx_27 = data_1151ae0
    result[0xb] = eax_90
    int32_t eax_91 = eax_90 << 2
    int32_t eax_92
    
    if (ecx_27 == 0)
        int32_t var_28_18 = eax_91
        eax_92 = _malloc()
    else
        eax_92 =
            ecx_27(eax_91, "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\skeleton.c", 0x73)
    
    result[0xc] = eax_92
    int32_t ecx_28 = 0
    void* eax_93 = *result
    int32_t var_c_1 = 0
    
    if (*(eax_93 + 0x5c) s> 0)
        while (true)
            void* ebx_7 = *(*(eax_93 + 0x60) + (ecx_28 << 2))
            int32_t eax_95 = data_1151ae0
            int32_t* eax_96
            
            if (eax_95 == 0)
                int32_t var_28_19 = 0x74
                eax_96 = _malloc()
            else
                eax_96 = eax_95(0x74, 
                    "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\pathconstraint.c", 0x29)
            
            if (eax_96 != 0)
                _memset(&eax_96[1], 0, 0x70)
            
            int32_t ecx_29 = data_1151ae0
            *eax_96 = ebx_7
            int32_t eax_98 = *(ebx_7 + 0xc)
            eax_96[1] = eax_98
            int32_t eax_99 = eax_98 << 2
            int32_t eax_100
            
            if (ecx_29 == 0)
                int32_t var_28_20 = eax_99
                eax_100 = _malloc()
            else
                eax_100 = ecx_29(eax_99, 
                    "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\pathconstraint.c", 0x2c)
            
            int32_t i_2 = 0
            eax_96[2] = eax_100
            
            if (eax_96[1] s> 0)
                do
                    *(eax_96[2] + (i_2 << 2)) =
                        sub_533410(result, *(*(*(*eax_96 + 0x10) + (i_2 << 2)) + 4))
                    i_2 += 1
                while (i_2 s< eax_96[1])
            
            int32_t ebx_8 = 0
            char* ecx_32 = *(*(*eax_96 + 0x14) + 4)
            char* var_14_2 = ecx_32
            int32_t eax_113
            
            if (result[4] s<= 0)
            label_5327bf:
                eax_113 = 0
            else
                int32_t* eax_107 = *(*result + 0x2c)
                int32_t* var_10_2 = eax_107
                
                while (true)
                    char* eax_109 = *(*eax_107 + 4)
                    int32_t eax_111
                    
                    while (true)
                        char edx_11 = *eax_109
                        char temp0_1 = *ecx_32
                        bool c_1 = edx_11 u< temp0_1
                        
                        if (edx_11 == temp0_1)
                            if (edx_11 == 0)
                                eax_111 = 0
                                break
                            
                            edx_11 = eax_109[1]
                            char temp1_1 = ecx_32[1]
                            c_1 = edx_11 u< temp1_1
                            
                            if (edx_11 == temp1_1)
                                eax_109 = &eax_109[2]
                                ecx_32 = &ecx_32[2]
                                
                                if (edx_11 != 0)
                                    continue
                                
                                eax_111 = 0
                                break
                        
                        eax_111 = sbb.d(eax_109, eax_109, c_1) | 1
                        break
                    
                    if (eax_111 == 0)
                        eax_113 = *(result[5] + (ebx_8 << 2))
                        break
                    
                    ebx_8 += 1
                    ecx_32 = var_14_2
                    eax_107 = &var_10_2[1]
                    var_10_2 = eax_107
                    
                    if (ebx_8 s>= result[4])
                        goto label_5327bf
            
            eax_96[3] = eax_113
            eax_96[4] = *(ebx_7 + 0x28)
            eax_96[5] = *(ebx_7 + 0x2c)
            eax_96[6] = *(ebx_7 + 0x30)
            eax_96[7] = *(ebx_7 + 0x34)
            __builtin_memset(&eax_96[8], 0, 0x28)
            *(result[0xc] + (var_c_1 << 2)) = eax_96
            ecx_28 = var_c_1 + 1
            eax_93 = *result
            var_c_1 = ecx_28
            
            if (ecx_28 s>= *(eax_93 + 0x5c))
                break
    
    result[0xe] = 0x3f800000
    result[0xf] = 0x3f800000
    result[0x10] = 0x3f800000
    result[0x11] = 0x3f800000
    sub_56d7b0(&result[0xe])
    result[0x13] = 0x3f800000
    result[0x14] = 0x3f800000
    sub_5331e0(result)
    _free(var_8)
    return result
}
