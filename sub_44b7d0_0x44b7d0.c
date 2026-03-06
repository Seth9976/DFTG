// 函数名称: sub_44b7d0
// 虚拟地址: 0x44b7d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_44b7d0(int32_t* arg1)
{
    // 第一条实际指令: void* var_34c
    void* var_34c
    int32_t eax_1 = __security_cookie ^ &var_34c
    int32_t i = 0
    void* result = *arg1
    
    if (*(result + 4) s> 0)
        void* ebx_1 = &arg1[0x63]
        
        do
            *(ebx_1 + 0x1c) = 0
            *(ebx_1 + 0x20) = 0
            int32_t var_330[0xc9]
            sub_4453c0(&var_330, i, arg1, &var_330, 2)
            uint32_t j = *(ebx_1 - 0x18)
            uint32_t j_2 = j
            
            while (j != 0xffffffff)
                int32_t eax_3 = sub_44ac90(j, i, arg1, j, 0, 0)
                
                if (sub_44ada0(eax_3, i, arg1, j_2, eax_3) == 0)
                    break
                
                j = *(ebx_1 - 0x18)
                j_2 = j
            
            int32_t j_1
            
            do
                j_1 = sub_44b290(arg1, i)
            while (j_1 != 0)
            int32_t eax_6 = sub_4453c0(&var_330, i, arg1, &var_330, 2)
            int32_t eax_7 = 0
            int32_t var_338_1 = 0
            
            if (eax_6 s> 0)
                do
                    int32_t eax_12 = eax_7 << 3
                    int32_t var_344_1 = eax_12
                    var_32c
                    void* edx_6 = *(&var_32c + eax_12)
                    var_34c = edx_6
                    
                    if ((*(edx_6 + 4) & 0x40) != 0)
                        int32_t eax_8 = sub_444ab0(eax_12, i, arg1, 2, 3)
                        edx_6 = var_34c
                        int32_t eax_10 = *(&var_330 + var_344_1)
                        eax_12 = *(edx_6 + 8) * eax_8
                        int32_t ecx_8 = *ebx_1
                        *(ebx_1 + 0x20) += eax_12
                        int32_t ecx_9 = ecx_8 + eax_12
                        *ebx_1 = ecx_9
                        
                        if (ecx_9 s> 0xa)
                            *ebx_1 = 0xa
                            eax_12 += 0xa - ecx_9
                        
                        int32_t ecx_10 = arg1[4]
                        
                        if (ecx_10 == 0)
                            if (eax_12 != 0)
                                eax_12 = sub_444430(eax_12, ecx_10 + 0x25, arg1, i, eax_10, eax_12, 
                                    ecx_10, ecx_10)
                                ecx_10 = arg1[4]
                                edx_6 = var_34c
                            
                            if (ecx_10 == 0 && eax_8 != 0)
                                int32_t eax_15 = *(edx_6 + 8) * eax_8
                                eax_12 = sub_444430(eax_15, 0x12, arg1, i, var_330[i * 2], 0x40, 
                                    eax_15, 0xffffffff)
                                edx_6 = var_34c
                    
                    if ((*(edx_6 + 4) & 0x80) != 0)
                        int32_t eax_16 = sub_444ab0(eax_12, i, arg1, 2, 5)
                        edx_6 = var_34c
                        int32_t eax_18 = *(&var_330 + var_344_1)
                        int32_t eax_20 = *(edx_6 + 8) * eax_16
                        int32_t ecx_16 = *ebx_1
                        *(ebx_1 + 0x20) += eax_20
                        int32_t ecx_17 = ecx_16 + eax_20
                        *ebx_1 = ecx_17
                        
                        if (ecx_17 s> 0xa)
                            *ebx_1 = 0xa
                            eax_20 += 0xa - ecx_17
                        
                        int32_t ecx_18 = arg1[4]
                        
                        if (ecx_18 == 0)
                            if (eax_20 != 0)
                                sub_444430(eax_20, ecx_18 + 0x25, arg1, i, eax_18, eax_20, ecx_18, 
                                    ecx_18)
                                ecx_18 = arg1[4]
                                edx_6 = var_34c
                            
                            if (ecx_18 == 0 && eax_16 != 0)
                                int32_t eax_23 = *(edx_6 + 8) * eax_16
                                sub_444430(eax_23, 0x12, arg1, i, var_330[i * 2], 0x80, eax_23, 
                                    0xffffffff)
                                edx_6 = var_34c
                    
                    if ((*(edx_6 + 4) & 0x20) != 0)
                        int32_t ecx_22 = *(edx_6 + 8)
                        int32_t eax_24 = *ebx_1
                        *(ebx_1 + 0x20) += ecx_22
                        int32_t eax_25 = eax_24 + ecx_22
                        *ebx_1 = eax_25
                        
                        if (eax_25 s> 0xa)
                            *ebx_1 = 0xa
                            ecx_22 += 0xa - eax_25
                        
                        int32_t eax_28 = arg1[4]
                        
                        if (eax_28 == 0)
                            if (ecx_22 != 0)
                                sub_444430(var_344_1, 0x25, arg1, i, *(&var_330 + var_344_1), ecx_22, 
                                    eax_28, eax_28)
                                eax_28 = arg1[4]
                                edx_6 = var_34c
                            
                            if (eax_28 == 0)
                                sub_444430(eax_28, eax_28 + 0x12, arg1, i, var_330[i * 2], 0x20, 
                                    *(edx_6 + 8), 0xffffffff)
                    
                    eax_7 = var_338_1 + 1
                    var_338_1 = eax_7
                while (eax_7 s< eax_6)
            
            sub_4448d0(eax_7, i, arg1, 2)
            result = *arg1
            i += 1
            ebx_1 += 0x1bc
        while (i s< *(result + 4))
    
    @__security_check_cookie@4(eax_1 ^ &var_34c)
    return result
}
