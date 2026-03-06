// 函数名称: sub_44fb20
// 虚拟地址: 0x44fb20
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_44fb20()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    void* edi = nullptr
    int32_t var_41c = 0
    void* var_410 = nullptr
    char const* const ebx = "N:N/A:Old Earth\nT:0:3\nF:START\nD:K:C\n\nN:N/A:Epsilon Eridani\nT:0:2\nF:"
    "START\nD:NM:CC\n\nN:N/A:Alpha Centauri\nT:0:1\nF:START\nG:RARE\nD:R:W\n\nN:N/A:New Sparta\nT:0:2\n"
    "F:START\nD:MM:CC\n\nN:N/A:Earth's Lost Colony\nT:0:2\nF:START\nG:NOVELTY\nD:N:W\n\nN:N/A:Separatist "
    "Colony\nT:0:2\nF:START\nD:M:D\n\nN:N/A:Ancient Race\nT:0:0\nF:START\nG:GENES\nD:G:W\n\nN:N/A:D"
    void* var_420 = &data_6d00e8
    void* eax_22
    char* const ecx_15
    int32_t edx_8
    void* edi_4
    
    while (true)
        char var_40c
        char* ecx_1 = &var_40c
        int32_t edx_1 = 0
        void* esi_1 = 1 - ebx
        int32_t i
        
        do
            i.b = *ebx
            
            if (i.b == 0)
                break
            
            *ecx_1 = i.b
            ebx = &ebx[1]
            ecx_1 = &ecx_1[1]
            edx_1 += 1
            
            if (i.b == 0xa)
                break
            
            i = esi_1 + ebx
        while (i s< 0x400)
        
        if (edx_1 == 0)
            @__security_check_cookie@4(var_8 ^ &__saved_ebp)
            return i
        
        *ecx_1 = 0
        char* ecx_2 = &var_40c
        
        do
            i.b = *ecx_2
            ecx_2 = &ecx_2[1]
        while (i.b != 0)
        
        void var_40b
        void* ecx_4 = ecx_2 - &var_40b - 1
        
        if (ecx_4 u>= 0x400)
            ___report_rangecheckfailure()
            noreturn
        
        *(&var_40c + ecx_4) = i.b
        i.b = var_40c
        void var_40a
        
        if (i.b != 0 && i.b != 0x23 && sx.d(i.b) - 0x41 u<= 0x15)
            switch (i.b)
                case 0x41
                    *(edi + 8) = __strdup(_strtok(&var_40a, U":"))
                    continue
                case 0x42, 0x43, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4f, 0x51, 0x52, 0x53, 0x55
                    continue
                case 0x44
                    void* eax_26
                    int32_t ecx_17
                    int32_t edx_10
                    eax_26, ecx_17, edx_10 = _strtok(&var_40a, U":")
                    char* esi_10 = nullptr
                    
                    if (*eax_26 != 0)
                        ecx_17:1.b = 0x20
                        void* edi_5 = edi + 0x24
                        
                        do
                            int32_t eax_27 = 0
                            
                            if (ecx_17:1.b != 0)
                                edx_10.b = *(esi_10 + eax_26)
                                ecx_17.b = ecx_17:1.b
                                
                                do
                                    if (edx_10.b == ecx_17.b)
                                        *edi_5 = eax_27
                                        break
                                    
                                    ecx_17.b = (*"SMNRGAKLEP")[eax_27]
                                    eax_27 += 1
                                while (ecx_17.b != 0)
                            
                            if ((*" SMNRGAKLEP")[eax_27] == 0)
                                int32_t eax_30 = sx.d(*(esi_10 + eax_26))
                                int32_t var_438_5 = eax_30
                                sub_4394f0(eax_30, edx_10, ecx_17, "No die color '%c'!\n")
                                _exit(1)
                                noreturn
                            
                            esi_10 = &esi_10[1]
                            edi_5 += 4
                        while (*(esi_10 + eax_26) != 0)
                        
                        edi = var_410
                    
                    int32_t ecx_18
                    int32_t edx_11
                    i, ecx_18, edx_11 = _strtok(nullptr, U":")
                    int32_t i_1 = i
                    char* esi_11 = nullptr
                    
                    if (*i_1 == 0)
                        edi = var_410
                        continue
                    
                    ecx_18:1.b = 0x20
                    void* edi_6 = edi + 0x2c
                    
                    do
                        i = 0
                        
                        if (ecx_18:1.b != 0)
                            edx_11.b = esi_11[i_1]
                            ecx_18.b = ecx_18:1.b
                            
                            do
                                if (edx_11.b == ecx_18.b)
                                    *edi_6 = i
                                    break
                                
                                ecx_18.b = (*"DCW")[i]
                                i += 1
                            while (ecx_18.b != 0)
                        
                        if ((*" DCW")[i] == 0)
                            int32_t eax_31 = sx.d(esi_11[i_1])
                            int32_t var_438_6 = eax_31
                            sub_4394f0(eax_31, edx_11, ecx_18, "No location '%c'!\n")
                            _exit(1)
                            noreturn
                        
                        esi_11 = &esi_11[1]
                        edi_6 += 4
                    while (esi_11[i_1] != 0)
                    
                    edi = var_410
                    continue
                case 0x45
                    *(edi + 0x64) = _strtol(&var_40a, &var_40b, ecx_4, &var_40a, nullptr, 0)
                    continue
                case 0x46
                    int32_t edx_5
                    i, edx_5 = _strtok(&var_40a, " |")
                    int32_t i_2 = i
                    
                    if (i_2 == 0)
                        edi = var_410
                        continue
                    
                    while (true)
                        void* ecx_9 = "START"
                        int32_t esi_2 = 0
                        
                        while (true)
                            int32_t i_4 = i_2
                            
                            while (true)
                                edx_5.b = *i_4
                                char temp4_1 = *ecx_9
                                bool c_1 = edx_5.b u< temp4_1
                                
                                if (edx_5.b == temp4_1)
                                    if (edx_5.b == 0)
                                        i = 0
                                        break
                                    
                                    edx_5.b = *(i_4 + 1)
                                    char temp6_1 = *(ecx_9 + 1)
                                    c_1 = edx_5.b u< temp6_1
                                    
                                    if (edx_5.b == temp6_1)
                                        i_4 += 2
                                        ecx_9 += 2
                                        
                                        if (edx_5.b != 0)
                                            continue
                                        
                                        i = 0
                                        break
                                
                                i = sbb.d(i_4, i_4, c_1) | 1
                                break
                            
                            if (i == 0)
                                ecx_9 = var_410
                                i = *(ecx_9 + 0x1c) | 1 << (esi_2 u% 0x20)
                                *(ecx_9 + 0x1c) = i
                                break
                            
                            ecx_9 = (&data_5b516c)[esi_2]
                            esi_2 += 1
                            
                            if (ecx_9 == 0)
                                break
                        
                        if ((&data_5b5168)[esi_2] == 0)
                            int32_t i_3 = i_2
                            sub_4394f0(i, edx_5, ecx_9, "Unknown flag '%s'!\n")
                            _exit(1)
                            noreturn
                        
                        i, edx_5 = _strtok(nullptr, " |")
                        i_2 = i
                        
                        if (i_2 == 0)
                            break
                    
                    edi = var_410
                    continue
                case 0x47
                    i = &data_5b2591
                    int32_t esi_3 = 0
                    void* edx_2
                    
                    while (true)
                        ecx_4 = &var_40a
                        
                        while (true)
                            edx_2.b = *ecx_4
                            char temp0_1 = *i
                            bool c_2 = edx_2.b u< temp0_1
                            
                            if (edx_2.b == temp0_1)
                                if (edx_2.b == 0)
                                    i = 0
                                    break
                                
                                edx_2.b = *(ecx_4 + 1)
                                char temp2_1 = *(i + 1)
                                c_2 = edx_2.b u< temp2_1
                                
                                if (edx_2.b == temp2_1)
                                    ecx_4 += 2
                                    i += 2
                                    
                                    if (edx_2.b != 0)
                                        continue
                                    
                                    i = 0
                                    break
                            
                            i = sbb.d(i, i, c_2) | 1
                            break
                        
                        if (i == 0)
                            *(edi + 0x18) = esi_3
                            break
                        
                        i = (&data_5b514c)[esi_3]
                        esi_3 += 1
                        
                        if (i == 0)
                            break
                    
                    if ((&data_5b5148)[esi_3] != 0)
                        continue
                    
                    void* var_438_2 = &var_40a
                    sub_4394f0(&var_40a, edx_2, ecx_4, "No good name '%s'!\n")
                    _exit(1)
                    noreturn
                case 0x4e
                    edi = var_420
                    var_410 = edi
                    *(var_420 + 0xc) = var_41c
                    var_420 += 0x68
                    var_41c += 1
                    *edi = __strdup(_strtok(&var_40a, U":"))
                    *(edi + 4) = __strdup(_strtok(nullptr, U":"))
                    continue
                case 0x50
                    int32_t ecx_10 = *(edi + 0x34)
                    void* edi_2 = edi + ecx_10 * 0xc + 0x38
                    *(var_410 + 0x34) = ecx_10 + 1
                    void* eax_16
                    int32_t* ecx_12
                    int32_t edx_6
                    eax_16, ecx_12, edx_6 = _strtok(&var_40a, U":")
                    int32_t eax_17 = _strtol(eax_16, edx_6, ecx_12, eax_16, nullptr, 0)
                    int32_t esi_4 = 0
                    *edi_2 = eax_17
                    int32_t var_424_1 = 0
                    void* eax_18
                    int32_t* ecx_13
                    int32_t edx_7
                    eax_18, ecx_13, edx_7 = _strtok(nullptr, "|: ")
                    void* ebx_1 = eax_18
                    
                    if (ebx_1 != 0)
                        while (true)
                            eax_18, ecx_13, edx_7 = _isdigit(*ebx_1)
                            
                            if (eax_18 != 0)
                                break
                            
                            if (*ebx_1 == 0x2d)
                                break
                            
                            int32_t edi_3 = 0
                            void* esi_7 = &(&data_5b5198)[eax_17 * 0x20]
                            
                            while (true)
                                char* eax_19 = *esi_7
                                
                                if (eax_19 == 0)
                                    void* var_438_3 = ebx_1
                                    int32_t var_43c_8 = eax_17
                                    sub_4394f0(eax_19, edx_7, ecx_13, "No phase %d power named '%s'\n")
                                    _exit(1)
                                    noreturn
                                
                                ecx_13 = ebx_1
                                int32_t eax_21
                                
                                while (true)
                                    edx_7.b = *eax_19
                                    char temp5_1 = *ecx_13
                                    bool c_3 = edx_7.b u< temp5_1
                                    
                                    if (edx_7.b == temp5_1)
                                        if (edx_7.b == 0)
                                            eax_21 = 0
                                            break
                                        
                                        edx_7.b = eax_19[1]
                                        char temp7_1 = *(ecx_13 + 1)
                                        c_3 = edx_7.b u< temp7_1
                                        
                                        if (edx_7.b == temp7_1)
                                            eax_19 = &eax_19[2]
                                            ecx_13 += 2
                                            
                                            if (edx_7.b != 0)
                                                continue
                                            
                                            eax_21 = 0
                                            break
                                    
                                    eax_21 = sbb.d(eax_19, eax_19, c_3) | 1
                                    break
                                
                                if (eax_21 == 0)
                                    break
                                
                                edi_3 += 1
                                esi_7 += 4
                            
                            esi_4 = var_424_1 | 1 << (edi_3 u% 0x20)
                            var_424_1 = esi_4
                            eax_18, ecx_13, edx_7 = _strtok(nullptr, "|: ")
                            ebx_1 = eax_18
                            
                            if (ebx_1 == 0)
                                break
                    
                    *(edi_2 + 4) = esi_4
                    *(edi_2 + 8) = _strtol(eax_18, edx_7, ecx_13, ebx_1, nullptr, 0)
                    edi = var_410
                    continue
                case 0x54
                    void* eax_7
                    int32_t* ecx_7
                    int32_t edx_3
                    eax_7, ecx_7, edx_3 = _strtok(&var_40a, U":")
                    *(edi + 0x10) = _strtol(eax_7, edx_3, ecx_7, eax_7, nullptr, 0)
                    void* eax_9
                    int32_t* ecx_8
                    int32_t edx_4
                    eax_9, ecx_8, edx_4 = _strtok(nullptr, U":")
                    *(edi + 0x14) = _strtol(eax_9, edx_4, ecx_8, eax_9, nullptr, 0)
                    continue
                case 0x56
                    eax_22, edx_8 = _strtok(&var_40a, U":")
                    ecx_15 = &data_5b2591
                    int32_t esi_9 = 0
                    edi_4 = eax_22
                    
                    while (true)
                        void* eax_23 = edi_4
                        
                        while (true)
                            edx_8.b = *eax_23
                            char temp1_1 = *ecx_15
                            bool c_4 = edx_8.b u< temp1_1
                            
                            if (edx_8.b == temp1_1)
                                if (edx_8.b == 0)
                                    eax_22 = nullptr
                                    break
                                
                                edx_8.b = *(eax_23 + 1)
                                char temp3_1 = ecx_15[1]
                                c_4 = edx_8.b u< temp3_1
                                
                                if (edx_8.b == temp3_1)
                                    eax_23 += 2
                                    ecx_15 = &ecx_15[2]
                                    
                                    if (edx_8.b != 0)
                                        continue
                                    
                                    eax_22 = nullptr
                                    break
                            
                            eax_22 = sbb.d(eax_23, eax_23, c_4) | 1
                            break
                        
                        if (eax_22 == 0)
                            ecx_15 = var_410
                            *(ecx_15 + 0x5c) = esi_9
                            break
                        
                        ecx_15 = (&data_5b563c)[esi_9]
                        esi_9 += 1
                        
                        if (ecx_15 == 0)
                            break
                    
                    if ((&data_5b5638)[esi_9] == 0)
                        break
                    
                    void* eax_25
                    int32_t* ecx_16
                    int32_t edx_9
                    eax_25, ecx_16, edx_9 = _strtok(nullptr, U":")
                    edi = var_410
                    *(edi + 0x60) = _strtol(eax_25, edx_9, ecx_16, eax_25, nullptr, 0)
                    continue
    
    void* var_438_4 = edi_4
    sub_4394f0(eax_22, edx_8, ecx_15, "No VP type '%s'!\n")
    _exit(1)
    noreturn
}
