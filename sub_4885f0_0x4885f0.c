// 函数名称: sub_4885f0
// 虚拟地址: 0x4885f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t*sub_4885f0(void* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t* result = sub_488530(ecx)
    int32_t* result_1 = result
    int32_t* result_2 = nullptr
    data_1513df0 = *result
    
    if (*result s> 0)
        void* ebx_1 = &data_1512ba8
        int32_t var_14_1 = 0
        int32_t* var_10_1 = arg1 + 0x1c0
        void* edi_3 = &result[0x23]
        void* var_8_1 = &data_1512ba8
        void* var_c_1 = edi_3
        
        while (true)
            int32_t i = 0
            void* edi_4 = edi_3 - 0x88
            
            do
                void var_30
                int32_t eax = sub_469f70(*edi_4, &var_30)
                *(ebx_1 + (i << 2) - 0xc8) = eax
                
                if (eax == 0xffffffff)
                    break
                
                i += 1
                edi_4 += 4
            while (i s< 2)
            
            void* edi_5 = var_c_1
            int32_t ebx_2 = 0
            void* ecx_4
            
            for (int32_t i_1 = 0; i_1 s< 0xf; )
                void var_34
                int32_t eax_1 = sub_469f70(*edi_5, &var_34)
                ecx_4 = var_8_1
                *(ecx_4 + (i_1 << 2)) = eax_1
                
                if (eax_1 == 0xffffffff)
                    break
                
                i_1 += 1
                ebx_2 += 1
                edi_5 += 4
            
            int32_t esi_1 = 0
            int32_t eax_3
            int32_t edx_3
            edx_3:eax_3 = sx.q(ebx_2)
            int32_t edi_7 = (eax_3 - edx_3) s>> 1
            
            if (edi_7 s> 0)
                void* edx_5 = ecx_4 - 4 + (ebx_2 << 2)
                
                while (true)
                    edx_5 -= 4
                    int32_t ecx_5 = *(ecx_4 + (esi_1 << 2))
                    *(var_8_1 + (esi_1 << 2)) = *(edx_5 + 4)
                    esi_1 += 1
                    *(edx_5 + 4) = ecx_5
                    
                    if (esi_1 s>= edi_7)
                        break
                    
                    ecx_4 = var_8_1
            
            int32_t ebx_4 = 0
            int32_t i_2 = 0
            void* edi_9 = var_c_1 - 0x40
            
            do
                void var_38
                int32_t eax_6 = sub_469f70(*edi_9, &var_38)
                *(var_8_1 + (i_2 << 2) - 0x40) = eax_6
                
                if (eax_6 == 0xffffffff)
                    break
                
                i_2 += 1
                ebx_4 += 1
                edi_9 += 4
            while (i_2 s< 0xf)
            
            int32_t esi_2 = 0
            int32_t eax_8
            int32_t edx_7
            edx_7:eax_8 = sx.q(ebx_4)
            int32_t edi_11 = (eax_8 - edx_7) s>> 1
            void* ebx_6
            
            if (edi_11 s<= 0)
                ebx_6 = var_8_1
            else
                void* edx_8 = var_8_1 + ((ebx_4 - 0x11) << 2)
                ebx_6 = var_8_1
                
                do
                    int32_t ecx_8 = *(ebx_6 + (esi_2 << 2) - 0x40)
                    edx_8 -= 4
                    *(ebx_6 + (esi_2 << 2) - 0x40) = *(edx_8 + 4)
                    esi_2 += 1
                    *(edx_8 + 4) = ecx_8
                while (esi_2 s< edi_11)
            
            int32_t i_3 = 0
            void* edi_13 = var_c_1 - 0x80
            
            do
                int32_t var_24
                int32_t eax_11 = sub_469f70(*edi_13, &var_24)
                int32_t ecx_10 = var_24
                *(ebx_6 + (i_3 << 3) - 0xc0) = eax_11
                *(ebx_6 + (i_3 << 3) - 0xbc) = ecx_10
                
                if (eax_11 == 0xffffffff)
                    break
                
                i_3 += 1
                edi_13 += 4
            while (i_3 s< 0xf)
            
            void* ecx_11 = ebx_6 + 0x40
            void* var_18_1 = ecx_11
            void* edi_15 = var_c_1 + 0x40
            int32_t var_1c_1 = 0
            int32_t* var_28_2
            int32_t* eax_13
            void* edx_13
            int32_t i_5
            
            while (true)
                int32_t eax_12 = *edi_15
                char const* const var_54
                int32_t var_50
                char const* const var_4c
                char* ecx_23
                
                if (eax_12 == 0)
                label_48880b:
                    int32_t i_4 = 0
                    void* edi_17 = var_c_1 + 0x240
                    *ecx_11 = 0
                    
                    do
                        void var_3c
                        int32_t eax_17 = sub_469f70(*edi_17, &var_3c)
                        *(var_8_1 + (i_4 << 2) + 0x2c0) = eax_17
                        
                        if (eax_17 == 0xffffffff)
                            break
                        
                        i_4 += 1
                        edi_17 += 4
                    while (i_4 s< 0xf)
                    
                    *(var_8_1 + 0x300) = 0
                    *(var_8_1 + 0x304) = *(var_c_1 + 0x680)
                    eax_13 = var_10_1
                    
                    if (*eax_13 != 0)
                        var_4c = "ConvertCampaign"
                        var_50 = 0x564
                        ecx_23 = "g->p[i].choice_size == 0"
                    else
                        eax_13 = eax_13[-1]
                        var_28_2 = eax_13
                        
                        if (eax_13 != 0)
                            i_5 = 0
                            edx_13 = var_c_1 + 0x2bc
                            break
                        
                        var_4c = "ConvertCampaign"
                        var_50 = 0x565
                        ecx_23 = "g->p[i].choice_log != NULL"
                    
                    var_54 = "d:\ax\trunk\ax2017\jams\roll\code\rolltutorial.cpp"
                else
                    *ecx_11 = eax_12
                    int32_t esi_3 = 0
                    eax_13 = *edi_15
                    int32_t ebx_7 = *(edi_15 + 4)
                    int32_t* var_28_1 = eax_13
                    
                    while (true)
                        if (esi_3 s>= 7)
                            var_4c = "GetDieFaceWithSide"
                            var_50 = 0x7268
                            var_54 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
                            ecx_23 = "Halt"
                            goto label_4889a3
                        
                        if (*(sub_457270(eax_13) + (esi_3 << 2)) == ebx_7)
                            break
                        
                        eax_13 = var_28_1
                        esi_3 += 1
                    
                    *(var_18_1 + 4) = esi_3
                    eax_13 = *(edi_15 + 8) - 3
                    int32_t eax_16
                    
                    switch (eax_13)
                        case nullptr
                            eax_16 = 2
                            goto label_4887e8
                        case 2
                            eax_16 = 5
                            goto label_4887e8
                        case 3
                            eax_16 = 6
                            goto label_4887e8
                        case 4
                            eax_16 = 1
                        label_4887e8:
                            edi_15 += 0x10
                            int32_t edx_11 = var_1c_1 + 1
                            *(var_18_1 + 8) = eax_16
                            *(var_18_1 + 0x10) = 0
                            ecx_11 = var_18_1 + 0x14
                            var_18_1 = ecx_11
                            var_1c_1 = edx_11
                            
                            if (edx_11 s>= 0xf)
                                goto label_48880b
                            
                            continue
                        case 6
                            *(var_18_1 + 0xc) = 1
                            eax_16 = 4
                            goto label_4887e8
                        default
                            var_4c = "RollWhereToDftgWhere"
                            var_50 = 0x273f
                            var_54 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
                            ecx_23 = "Halt"
                
            label_4889a3:
                sub_489550(eax_13, &data_5b2591, ecx_23, var_54, var_50, var_4c)
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            do
                int32_t ecx_15 = *(edx_13 - 0x3c)
                
                if (ecx_15 == 0)
                    break
                
                *eax_13 = ecx_15
                int32_t j = 0
                eax_13[1] = *(edx_13 - 0x38)
                eax_13[2] = *(edx_13 - 0x1c)
                void* eax_19 = &eax_13[3]
                
                if (*(edx_13 - 0x1c) s> 0)
                    void* esi_4 = edx_13 - 0x34
                    
                    do
                        int32_t ecx_18 = *esi_4
                        esi_4 += 4
                        *eax_19 = ecx_18
                        j += 1
                        eax_19 += 4
                    while (j s< *(edx_13 - 0x1c))
                
                int32_t j_1 = 0
                *eax_19 = *edx_13
                eax_13 = eax_19 + 4
                
                if (*edx_13 s> 0)
                    void* esi_5 = edx_13 - 0x18
                    
                    do
                        int32_t ecx_20 = *esi_5
                        esi_5 += 4
                        *eax_13 = ecx_20
                        j_1 += 1
                        eax_13 = &eax_13[1]
                    while (j_1 s< *edx_13)
                
                i_5 += 1
                edx_13 += 0x40
            while (i_5 s< 0xf)
            
            int32_t eax_21 = (eax_13 - var_28_2) s>> 2
            *var_10_1 = eax_21
            *(sub_425de0() + var_14_1 + 0x11c) = eax_21 << 2
            int32_t esi_8 = *var_10_1 << 2
            ebx_1 = var_8_1 + 0x3d0
            var_10_1 = &var_10_1[0x6f]
            edi_3 = var_c_1 + 0x70c
            *(sub_425de0() + var_14_1 + 0x120) = esi_8
            result = result_2 + 1
            var_8_1 = ebx_1
            result_2 = result
            var_c_1 = edi_3
            var_14_1 += 0x18
            
            if (result s>= *result_1)
                break
    
    return result
}
