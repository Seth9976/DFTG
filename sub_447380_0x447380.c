// 函数名称: sub_447380
// 虚拟地址: 0x447380
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_447380(int32_t* arg1)
{
    // 第一条实际指令: void var_b78
    void var_b78
    int32_t eax_1 = __security_cookie ^ &var_b78
    int32_t* esi = arg1
    int32_t i = 0
    int32_t* var_b6c = esi
    int32_t i_11 = 0
    void* eax_2 = *esi
    void var_818
    
    if (*(eax_2 + 4) s> 0)
        void* edi_1 = &esi[0x60]
        void* var_b64_1 = edi_1
        
        do
            if (esi[4] == 0)
                int32_t i_8 = i
                int32_t var_b88_1 = *(edi_1 - 0x168)
                int128_t var_b60
                __builtin_memset(&var_b60, 0, 0x20)
                int32_t edx
                sub_41da20(&var_818, edx, i, &var_818, "%s %d rolled")
                int32_t j_8 = *(edi_1 - 0x1c)
                
                if (j_8 s> 0)
                    void* ecx = edi_1 - 0x155
                    int32_t j
                    
                    do
                        uint32_t eax_4
                        eax_4.b = *(ecx - 6)
                        
                        if ((eax_4.b == 4 || eax_4.b == 7) && (*ecx & 2) == 0)
                            eax_4 = zx.d(*(ecx - 4))
                            *(&var_b60 + (eax_4 << 2)) += 1
                        
                        ecx += 8
                        j = j_8
                        j_8 -= 1
                    while (j != 1)
                
                int32_t j_1 = 0
                int32_t j_5 = 0
                void var_819
                void var_418
                
                do
                    int32_t ecx_1 = *(&var_b60 + j_1)
                    
                    if (ecx_1 != 0)
                        int32_t var_b84_1 = *(j_1 + &data_5b501c)
                        int32_t var_b88_2 = ecx_1
                        sub_41da20(&var_418, j_8, ecx_1, &var_418, " %d %s")
                        void* edx_1 = &var_418
                        char k
                        
                        do
                            k = *edx_1
                            edx_1 += 1
                        while (k != 0)
                        
                        j_8 = edx_1 - &var_418
                        void* edi_2 = &var_819
                        
                        do
                            k = *(edi_2 + 1)
                            edi_2 += 1
                        while (k != 0)
                        
                        j_1 = j_5
                        int32_t esi_1
                        int32_t edi_3
                        edi_3, esi_1 = __builtin_memcpy(edi_2, &var_418, j_8 u>> 2 << 2)
                        __builtin_memcpy(edi_3, esi_1, j_8 & 3)
                    
                    j_1 += 4
                    j_5 = j_1
                while (j_1 s< 0x20)
                
                void* ecx_6 = &var_819
                
                do
                    j_1.b = *(ecx_6 + 1)
                    ecx_6 += 1
                while (j_1.b != 0)
                
                *ecx_6 = 0xa2e
                *(ecx_6 + 2) = 0
                int32_t ecx_7
                int32_t edx_2
                ecx_7, edx_2 = sub_4892e0(&var_818)
                __builtin_memset(&var_b60, 0, 0x20)
                int32_t var_b84_3 = (&data_5b501c)[*var_b64_1]
                int32_t var_b88_3 = *(var_b64_1 - 0x168)
                void* ecx_9
                int32_t edx_3
                ecx_9, edx_3 = sub_444430(
                    sub_41da20(&var_818, edx_2, ecx_7, &var_818, "%s selects %s with"), 0xc, var_b6c, 
                    i_11, *var_b64_1, *(var_b64_1 + 4), 0, 0)
                int32_t j_2 = 0
                int32_t j_7 = 0
                
                if (*(var_b64_1 - 0x1c) s> 0)
                    char* edi_5 = var_b64_1 - 0x15b
                    
                    do
                        ecx_9.b = *edi_5
                        int32_t ecx_10
                        uint32_t edx_4
                        
                        if (ecx_9.b == 7)
                            ecx_10 = 7
                            edx_4 = 0
                        label_44754e:
                            edx_3 = sub_444430(j_2, 0xd, var_b6c, i_11, j_2, ecx_10, edx_4, 0)
                            
                            if (*edi_5 == 4 && (edi_5[6] & 2) == 0)
                                uint32_t eax_9 = zx.d(edi_5[4])
                                *(&var_b60 + (eax_9 << 2)) += 1
                            
                            j_2 = j_7
                        else if (ecx_9.b == 4)
                            edx_4 = zx.d(edi_5[4])
                            ecx_10 = 4
                            goto label_44754e
                        j_2 += 1
                        edi_5 = &edi_5[8]
                        j_7 = j_2
                    while (j_2 s< *(var_b64_1 - 0x1c))
                
                int32_t j_3 = 0
                int32_t j_6 = 0
                
                do
                    int32_t ecx_12 = *(&var_b60 + j_3)
                    
                    if (ecx_12 != 0)
                        int32_t var_b84_4 = *(j_3 + &data_5b501c)
                        int32_t var_b88_5 = ecx_12
                        edx_3 = sub_41da20(&var_418, edx_3, ecx_12, &var_418, " %d %s")
                        void* eax_11 = &var_418
                        char k_1
                        
                        do
                            k_1 = *eax_11
                            eax_11 += 1
                        while (k_1 != 0)
                        
                        int32_t eax_12 = eax_11 - &var_418
                        void* edi_6 = &var_819
                        
                        do
                            k_1 = *(edi_6 + 1)
                            edi_6 += 1
                        while (k_1 != 0)
                        
                        int32_t esi_3
                        int32_t edi_7
                        edi_7, esi_3 = __builtin_memcpy(edi_6, &var_418, eax_12 u>> 2 << 2)
                        j_3 = j_6
                        __builtin_memcpy(edi_7, esi_3, eax_12 & 3)
                    
                    j_3 += 4
                    j_6 = j_3
                while (j_3 s< 0x20)
                
                void* ecx_17 = &var_819
                
                do
                    j_3.b = *(ecx_17 + 1)
                    ecx_17 += 1
                while (j_3.b != 0)
                
                *ecx_17 = 0xa2e
                *(ecx_17 + 2) = 0
                edx = sub_4892e0(&var_818)
                edi_1 = var_b64_1
                esi = var_b6c
                int32_t eax_14 = *(*(edi_1 - 0x164) + 8)
                
                if (eax_14 != 0)
                    edx = eax_14(esi, i_11)
                
                i = i_11
            
            eax_2 = *esi
            i += 1
            edi_1 += 0x1bc
            i_11 = i
            var_b64_1 = edi_1
        while (i s< *(eax_2 + 4))
    
    if (*(eax_2 + 4) == 2)
        int32_t ecx_19 = esi[2] * 0x41c64e6d + 0x3039
        esi[2] = ecx_19
        int32_t ecx_21 = ecx_19 u>> 0x10 & 0x7fff
        int32_t eax_15
        int32_t edx_5
        edx_5:eax_15 = muls.dp.d(0x2aaaaaab, ecx_21)
        int32_t ecx_22 = ecx_21 s% 6
        int32_t eax_22 = lookup_table_5b5058[ecx_22] - 2
        
        if (eax_22 u> 0x1e)
            sub_444530("invalid die face")
            noreturn
        
        int32_t edi_8
        
        switch (eax_22)
            case 0
                edi_8 = 1
            case 2
                edi_8 = 2
            case 4, 8, 0xa, 0x10, 0x16
                sub_444530("invalid die face")
                noreturn
            case 6
                edi_8 = 3
            case 0xe
                edi_8 = 4
            case 0x1e
                edi_8 = 5
        
        esi[edi_8 + 0x306] = 1
        
        if (esi[4] == 0)
            int32_t var_b84_7 = (&data_5b501c)[edi_8]
            sub_41da20(&var_818, edx_5, ecx_22, &var_818, "Dummy die rolled %s.\n")
            sub_444430(sub_4892e0(&var_818), 3, esi, 0xffffffff, edi_8, ecx_22, 0, 0)
    
    void* ecx_28 = *esi
    int32_t i_1 = 0
    int32_t i_13 = 0
    
    if (*(ecx_28 + 4) s> 0)
        void* eax_26 = &esi[0x59]
        void* var_b68_1 = eax_26
        
        do
            int32_t j_4 = 0
            
            if (*eax_26 s> 0)
                void* eax_27 = eax_26 - 0x13f
                void* ecx_25 = var_b68_1 - 0x139
                void* var_b70 = eax_27
                void* var_b74_2 = ecx_25
                
                do
                    if (*eax_27 == 7)
                        *eax_27 = 1
                        
                        if (esi[4] == 0)
                            int32_t eax_28 = sub_444430(eax_27, 0x2f, esi, i_1, j_4, 0, 0, 0)
                            ecx_25 = var_b74_2
                            
                            if ((*ecx_25 & 2) != 0)
                                sub_444430(eax_28, 0x2d, esi, i_13, j_4, 0, 0, 0)
                                ecx_25 = var_b74_2
                            
                            i_1 = i_13
                            eax_27 = var_b70
                    
                    j_4 += 1
                    eax_27 += 8
                    ecx_25 += 8
                    var_b70 = eax_27
                    var_b74_2 = ecx_25
                    esi = var_b6c
                while (j_4 s< *var_b68_1)
                
                eax_26 = var_b68_1
            
            ecx_28 = *esi
            i_1 += 1
            eax_26 += 0x1bc
            i_13 = i_1
            var_b68_1 = eax_26
        while (i_1 s< *(ecx_28 + 4))
    
    int32_t i_2 = 0
    int32_t i_12 = 0
    void var_b38
    void* edx_9
    
    if (*(ecx_28 + 4) s<= 0)
        edx_9 = ecx_28
    else
        void* edi_9 = &esi[0x61]
        
        do
            int32_t eax_29 = sub_4453c0(i_2, i_2, esi, &var_b38, 0)
            int32_t ecx_30 = 0
            int32_t var_b74_3 = eax_29
            int32_t var_b6c_1 = 0
            
            if (eax_29 s> 0)
                do
                    int32_t var_b34[0xc6]
                    
                    if ((*(var_b34[ecx_30 * 2] + 4) & 4) != 0)
                        int32_t eax_30 = *(edi_9 + 0x40)
                        int32_t ecx_32
                        int32_t edx_7
                        int32_t eax_34
                        
                        if (eax_30 s< *(edi_9 + 0x3c))
                            eax_34, edx_7 = sub_444560(eax_30, i_12, esi, 0x13, 0, nullptr, 0, nullptr)
                            ecx_32 = eax_34
                        else
                            edx_7 = (*(*(edi_9 - 0x168) + 4))(esi, i_12, 0x13, 0, 0, 0, 0, 0, 0, 0)
                            
                            if (esi[0x30f] == 0)
                                eax_30 = *(*(edi_9 - 0x168) + 0xc)
                                
                                if (eax_30 != 0)
                                    eax_30 = eax_30(esi, i_12)
                                
                                int32_t var_b84_10 = 0
                                int32_t var_b88_9 = 0
                                int32_t var_b8c_4 = 0
                                int32_t var_b90_9 = 0
                                eax_34, edx_7 =
                                    sub_444560(eax_30, i_12, esi, 0x13, 0, nullptr, 0, nullptr)
                                ecx_32 = eax_34
                            else
                                ecx_32 = 0xffffffff
                        int32_t eax_35 = *edi_9
                        *(edi_9 - 4) = ecx_32
                        *(edi_9 + (eax_35 << 3) - 0x15b) = ecx_32.b
                        
                        if (esi[4] == 0)
                            int32_t var_b84_11 = (&data_5b501c)[ecx_32]
                            int32_t var_b88_10 = *(edi_9 - 0x16c)
                            sub_41da20(&var_818, edx_7, ecx_32, &var_818, "%s reselects %s.\n")
                        
                        eax_29 = var_b74_3
                    
                    ecx_30 = var_b6c_1 + 1
                    var_b6c_1 = ecx_30
                while (ecx_30 s< eax_29)
            
            ecx_28 = *esi
            edi_9 += 0x1bc
            edx_9 = ecx_28
            i_2 = i_12 + 1
            i_12 = i_2
        while (i_2 s< *(ecx_28 + 4))
    
    int32_t i_9 = 0
    
    if (*(ecx_28 + 4) s> 0)
        void* edi_10 = &esi[0x60]
        int32_t i_3
        
        do
            int32_t eax_38 = *edi_10
            edi_10 += 0x1bc
            esi[eax_38 + 0x306] = 1
            ecx_28 = *esi
            edx_9 = ecx_28
            i_3 = i_9 + 1
            i_9 = i_3
        while (i_3 s< *(ecx_28 + 4))
    
    int32_t i_4 = 0
    
    if (*(ecx_28 + 4) s> 0)
        do
            sub_4471a0(esi, i_4)
            ecx_28 = *esi
            i_4 += 1
            edx_9 = ecx_28
        while (i_4 s< *(ecx_28 + 4))
    
    int32_t i_5 = 0
    
    if (*(ecx_28 + 4) s> 0)
        do
            sub_4453c0(&var_b38, i_5, esi, &var_b38, 0)
            edx_9 = *esi
            i_5 += 1
        while (i_5 s< *(edx_9 + 4))
    
    void* eax_41 = *(edx_9 + 4)
    int32_t i_6 = 1
    void* edx_12 = &esi[0x307]
    int32_t i_10 = 1
    void* var_b6c_2 = edx_12
    
    do
        if (*edx_12 == 0)
            int32_t edi_11 = 0
            
            if (eax_41 s> 0)
                do
                    sub_4472d0(eax_41, edi_11, esi, i_6)
                    edi_11 += 1
                    i_6 = i_10
                    eax_41 = *(*esi + 4)
                while (edi_11 s< eax_41)
                
                edx_12 = var_b6c_2
        
        i_6 += 1
        edx_12 += 4
        i_10 = i_6
        var_b6c_2 = edx_12
    while (i_6 s<= 6)
    
    void* result = *esi
    int32_t i_7 = 0
    
    if (*(result + 4) s> 0)
        do
            sub_4453c0(&var_b38, i_7, esi, &var_b38, 0)
            result = *esi
            i_7 += 1
        while (i_7 s< *(result + 4))
    
    if (esi[4] == 0)
        result = sub_444430(result, 2, esi, 0xffffffff, 0, 0, 0, 0)
    
    @__security_check_cookie@4(eax_1 ^ &var_b78)
    return result
}
