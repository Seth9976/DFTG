// 函数名称: sub_44ce50
// 虚拟地址: 0x44ce50
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_44ce50(int32_t* arg1)
{
    // 第一条实际指令: uint32_t j_2
    uint32_t j_2
    int32_t eax_1 = __security_cookie ^ &j_2
    int32_t i = 0
    int32_t i_1 = 0
    void* result = *arg1
    
    if (*(result + 4) s> 0)
        void* ebx_1 = &arg1[0x63]
        
        do
            *(ebx_1 + 0x1c) = 0
            *(ebx_1 + 0x20) = 0
            uint32_t j = *(ebx_1 - 0x14)
            j_2 = j
            
            while (j != 0xffffffff)
                int32_t eax_2 = sub_44bae0(j, i, arg1, j, 0, 0)
                
                if (sub_44bc80(eax_2, i, arg1, j_2, eax_2) == 0)
                    break
                
                j = *(ebx_1 - 0x14)
                j_2 = j
            
            int32_t j_1
            
            do
                j_1 = sub_44c5e0(arg1, i)
            while (j_1 != 0)
            void var_330
            int32_t eax_5 = sub_4453c0(&var_330, i, arg1, &var_330, 3)
            int32_t eax_6 = 0
            int32_t var_338_1 = 0
            
            if (eax_5 s> 0)
                do
                    int32_t j_3 = eax_6 << 3
                    j_2 = j_3
                    int32_t var_32c[0xc8]
                    void* edx_5 = *(&var_32c + j_3)
                    void* var_348_1 = edx_5
                    
                    if ((*(edx_5 + 4) & 0x20000) != 0)
                        int32_t eax_7 = sub_444ab0(j_3, i, arg1, 2, 4)
                        uint32_t j_6 = j_2
                        *(ebx_1 + 0x20) += eax_7
                        int32_t edx_7 = eax_7
                        int32_t ecx_6 = *(&var_330 + j_6)
                        int32_t ecx_8 = *ebx_1 + eax_7
                        *ebx_1 = ecx_8
                        
                        if (ecx_8 s> 0xa)
                            *ebx_1 = 0xa
                            edx_7 = edx_7 - ecx_8 + 0xa
                        
                        j_3 = arg1[4]
                        
                        if (j_3 == 0)
                            if (edx_7 != 0)
                                sub_444430(j_3, j_3 + 0x25, arg1, i, ecx_6, edx_7, j_3, j_3)
                                j_3 = arg1[4]
                            
                            if (j_3 == 0)
                                j_3 = sub_444430(j_3, j_3 + 0x13, arg1, i, ecx_6, 0x20000, eax_7, 
                                    0xffffffff)
                        
                        edx_5 = var_348_1
                    
                    if ((*(edx_5 + 4) & 0x40000) != 0)
                        int32_t eax_8 = sub_444ab0(j_3, i, arg1, 2, 7)
                        int32_t eax_10 = *(&var_330 + j_2)
                        int32_t eax_11 = sub_444ab0(eax_10, i_1, arg1, 2, 9)
                        int32_t ecx_13 = *ebx_1
                        int32_t eax_14
                        int32_t edx_13
                        edx_13:eax_14 = sx.q(eax_11 + 1 + eax_8)
                        int32_t eax_16 = (eax_14 - edx_13) s>> 1
                        int32_t edx_14 = eax_16
                        *(ebx_1 + 0x20) += edx_14
                        int32_t ecx_14 = ecx_13 + edx_14
                        *ebx_1 = ecx_14
                        
                        if (ecx_14 s> 0xa)
                            *ebx_1 = 0xa
                            edx_14 += 0xa - ecx_14
                        
                        int32_t eax_18 = arg1[4]
                        i = i_1
                        
                        if (eax_18 == 0)
                            if (edx_14 != 0)
                                sub_444430(eax_18, eax_18 + 0x25, arg1, i, eax_10, edx_14, eax_18, 
                                    eax_18)
                                eax_18 = arg1[4]
                            
                            if (eax_18 == 0)
                                sub_444430(eax_18, eax_18 + 0x13, arg1, i, eax_10, 0x40000, eax_16, 
                                    0xffffffff)
                        
                        edx_5 = var_348_1
                    
                    if ((*(edx_5 + 4) & 0x20) != 0)
                        int32_t ecx_17 = *(edx_5 + 8)
                        int32_t eax_19 = *ebx_1
                        *(ebx_1 + 0x20) += ecx_17
                        int32_t eax_20 = eax_19 + ecx_17
                        *ebx_1 = eax_20
                        
                        if (eax_20 s> 0xa)
                            *ebx_1 = 0xa
                            ecx_17 += 0xa - eax_20
                        
                        int32_t eax_22 = arg1[4]
                        
                        if (eax_22 == 0)
                            if (ecx_17 != 0)
                                uint32_t j_4 = j_2
                                sub_444430(j_4, 0x25, arg1, i, *(&var_330 + j_4), ecx_17, eax_22, 
                                    eax_22)
                                eax_22 = arg1[4]
                                edx_5 = var_348_1
                            
                            if (eax_22 == 0)
                                uint32_t j_5 = j_2
                                sub_444430(j_5, 0x13, arg1, i, *(&var_330 + j_5), 0x20, *(edx_5 + 8), 
                                    0xffffffff)
                    
                    eax_6 = var_338_1 + 1
                    var_338_1 = eax_6
                while (eax_6 s< eax_5)
            
            sub_4448d0(eax_6, i, arg1, 3)
            result = *arg1
            i += 1
            i_1 = i
            ebx_1 += 0x1bc
        while (i s< *(result + 4))
    
    @__security_check_cookie@4(eax_1 ^ &j_2)
    return result
}
