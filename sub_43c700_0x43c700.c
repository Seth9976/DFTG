// 函数名称: sub_43c700
// 虚拟地址: 0x43c700
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t*sub_43c700()
{
    // 第一条实际指令: int32_t __saved_ebp_2
    int32_t __saved_ebp_2
    int32_t __saved_ebp_1 = __saved_ebp_2
    int32_t* ecx
    int32_t edx
    ecx, edx = __alloca_probe(0x183c)
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    int32_t* ebx = ecx
    int32_t i_5 = 0
    int32_t __saved_esi_1
    int32_t __saved_esi = __saved_esi_1
    int32_t __saved_edi_1
    int32_t __saved_edi = __saved_edi_1
    int32_t* var_1838 = ebx
    int32_t edx_1 = 8
    char var_1104 = ebx[0x30f].b
    char var_1103 = ebx[0x305].b
    char var_1102 = ebx[0x307].b
    char var_1101 = ebx[0x308].b
    char var_1100 = ebx[0x309].b
    char var_10ff = ebx[0x30a].b
    char var_10fe = ebx[0x30b].b
    char var_10fd = ebx[0x30c].b
    int32_t var_1818 = 8
    int64_t var_1834
    
    if (*(*ebx + 4) s> 0)
        void* var_181c_1 = &ebx[0x63]
        int32_t edi_2 = 8
        int32_t i
        
        do
            int32_t var_14_1 = 0x58
            int32_t var_18_1 = 0
            int128_t var_ac
            int128_t* var_1c_1 = &var_ac
            _memset()
            int32_t var_14_2 = 0x58
            int32_t var_18_2 = 0
            int128_t var_104
            int128_t* var_1c_2 = &var_104
            _memset()
            int32_t var_14_3 = 0x42
            int32_t var_18_3 = 0
            int128_t var_54
            int128_t* var_1c_3 = &var_54
            _memset()
            int16_t var_14_4 = 0x2c
            int32_t var_18_4 = 0
            void var_1130
            void* var_1c_4 = &var_1130
            void* eax_11
            void* edx_2
            eax_11, edx_2 = _memset()
            int32_t j_5 = *(var_181c_1 - 0x28)
            eax_11.b = *(var_181c_1 - 0x28)
            (&var_1104)[edi_2] = eax_11.b
            int32_t j_6 = j_5
            int32_t var_1814[0x1b9]
            
            if (j_5 s> 0)
                void* edi_3 = var_181c_1 - 0x167
                int32_t j
                
                do
                    eax_11.b = *(edi_3 - 1)
                    
                    if (eax_11.b != 0)
                        edx_2.b = *edi_3
                        uint32_t ecx_2 = zx.d(eax_11.b)
                        var_1834:4.d = ecx_2
                        eax_11 = zx.d(edx_2.b) + (ecx_2 << 3)
                        
                        if ((*(edi_3 + 6) & 2) == 0)
                            *(&var_ac + eax_11) += 1
                        else
                            *(&var_104 + eax_11) += 1
                        
                        if (edx_2.b == 4)
                            uint32_t ecx_3 = ecx_2 * 3
                            eax_11 = &__saved_ebp + zx.d(*(edi_3 + 4)) - 0x50
                            *(eax_11 + (ecx_3 << 1) - 1) += 1
                        else if (edx_2.b == 3)
                            void* esi = *(&var_1130 + (ecx_2 << 2))
                            var_1814[esi + ecx_2 * 0x28] =
                                *(ebx[(sx.d(*(edi_3 + 5)) + 0xbb) * 3] + 0x18)
                            j_5 = j_6
                            *(&var_1130 + (var_1834:4.d << 2)) = esi + 1
                    
                    edi_3 += 8
                    j = j_5
                    j_5 -= 1
                    j_6 = j_5
                while (j != 1)
                edi_2 = var_1818
            
            eax_11.w = var_14_4
            char* ecx_6 = &var_1814
            int32_t j_1 = 0
            char* var_1818_1 = &var_1814
            *(&var_1103 + edi_2) = var_ac
            int32_t esi_1 = edi_2 + 0xf3
            void var_10f3
            int128_t var_9c
            *(&var_10f3 + edi_2) = var_9c
            void var_10e3
            int128_t var_8c
            *(&var_10e3 + edi_2) = var_8c
            void var_10d3
            int128_t var_7c
            *(&var_10d3 + edi_2) = var_7c
            void var_10c3
            int128_t var_6c
            *(&var_10c3 + edi_2) = var_6c
            void var_10b3
            int64_t var_5c
            *(&var_10b3 + edi_2) = var_5c
            void var_10ab
            *(&var_10ab + edi_2) = var_104
            void var_109b
            int128_t var_f4
            *(&var_109b + edi_2) = var_f4
            void var_108b
            int128_t var_e4
            *(&var_108b + edi_2) = var_e4
            void var_107b
            int128_t var_d4
            *(&var_107b + edi_2) = var_d4
            void var_106b
            int128_t var_c4
            *(&var_106b + edi_2) = var_c4
            void var_105b
            int64_t var_b4
            *(&var_105b + edi_2) = var_b4
            void var_1053
            *(&var_1053 + edi_2) = var_54
            void var_1043
            int128_t var_44
            *(&var_1043 + edi_2) = var_44
            void var_1033
            int128_t var_34
            *(&var_1033 + edi_2) = var_34
            void var_1023
            int128_t var_24
            *(&var_1023 + edi_2) = var_24
            void var_1013
            *(&var_1013 + edi_2) = eax_11.w
            
            do
                eax_11.b = *(&var_1130 + (j_1 << 2))
                int32_t k_2 = *(&var_1130 + (j_1 << 2))
                (&var_1104)[esi_1] = eax_11.b
                esi_1 += 1
                
                if (k_2 != 0)
                    int32_t (* var_14_5)(int32_t* arg1, int32_t* arg2) = DbgFrameData1::cmpDbgFrameData
                    int32_t var_18_5 = 4
                    int32_t k_3 = k_2
                    var_24:4.d = ecx_6
                    _qsort()
                    ecx_6 = var_1818_1
                    
                    if (k_2 s> 0)
                        int32_t k
                        
                        do
                            eax_11.b = *ecx_6
                            ecx_6 = &ecx_6[4]
                            (&var_1104)[esi_1] = eax_11.b
                            esi_1 += 1
                            k = k_2
                            k_2 -= 1
                        while (k != 1)
                        ecx_6 = var_1818_1
                
                j_1 += 1
                ecx_6 = &ecx_6[0xa0]
                var_1818_1 = ecx_6
            while (j_1 s< 0xb)
            
            int32_t j_2 = 2
            ebx = var_1838
            void* edi_5 = var_181c_1 - 0x1c
            void* var_1820_1 = edi_5
            
            do
                int32_t k_1 = *edi_5
                
                if (k_1 != 0xffffffff)
                    do
                        (&var_1104)[esi_1] = k_1.b
                        int32_t ecx_7 = k_1 * 3
                        k_1.b = *(&ebx[ecx_7] + 0x8cb)
                        (&var_1103)[esi_1] = k_1.b
                        esi_1 += 2
                        
                        if (j_2 != 2 && i_5 != edx)
                            break
                        
                        k_1 = sx.d(*(&ebx[ecx_7] + 0x8ca))
                    while (k_1 != 0xffffffff)
                    
                    edi_5 = var_1820_1
                
                (&var_1104)[esi_1] = 0xff
                j_2 += 1
                edi_5 += 4
                esi_1 += 1
                var_1820_1 = edi_5
            while (j_2 s<= 4)
            
            edi_2 = esi_1 + 4
            var_1818 = edi_2
            (&var_1104)[esi_1] = *var_181c_1
            (&var_1103)[esi_1] = *(var_181c_1 + 4)
            (&var_1102)[esi_1] = *(var_181c_1 + 0x24)
            (&var_1101)[esi_1] = *(var_181c_1 + 0x2c)
            i = i_5 + 1
            i_5 = i
            var_181c_1 += 0x1bc
        while (i s< *(*ebx + 4))
        edx_1 = edi_2
    
    int64_t var_183c
    int64_t* var_14_6 = &var_183c
    var_183c = 0
    int32_t* var_18_6 = &var_1834
    var_1834 = 0
    sub_4517a0(&var_1834, edx_1, &var_1104, var_18_6, var_14_6)
    int32_t esi_3 = var_1834.d
    uint32_t eax_25 = zx.d(esi_3.w)
    int32_t entry_ebx
    
    for (int32_t* i_1 = *((eax_25 << 2) + &data_1490b60); i_1 != 0; i_1 = i_1[4])
        if (*i_1 == esi_3 && i_1[1] == var_1834:4.d)
            data_1304618 += 1
            *(i_1 + 8)
            @__security_check_cookie@4(entry_ebx ^ &__saved_ebp)
            return i_1
    
    data_1410460 += 1
    int32_t var_14_7 = 0x18
    int32_t* eax_26 = _malloc()
    *eax_26 = esi_3
    eax_26[4] = *((eax_25 << 2) + &data_1490b60)
    *((eax_25 << 2) + &data_1490b60) = eax_26
    int32_t eax_27 = var_1834:4.d
    eax_26[1] = eax_27
    
    if (ebx[4] == 0)
        sub_4394f0(eax_27, eax_25, eax_26, "complete_turn() called with real game!\n")
        _exit(1)
        noreturn
    
    if (ebx[0x30f] == 0)
        int32_t esi_5 = ebx[0x305] + 1
        int32_t var_1824 = esi_5
        
        if (esi_5 s<= 7)
            int32_t i_2 = esi_5 - 1
            void* edx_5 = &ebx[esi_5 + 0x306]
            int32_t i_6 = i_2
            void* var_181c_2 = edx_5
            
            do
                ebx[0x305] = esi_5
                
                if ((esi_5 == 7 || *edx_5 != 0) && i_2 u<= 6)
                    switch (i_2)
                        case 0
                            sub_44ab70(ebx)
                            i_2 = i_6
                            edx_5 = var_181c_2
                        case 1
                            sub_44b7d0(ebx)
                            i_2 = i_6
                            edx_5 = var_181c_2
                        case 2
                            sub_44ce50(ebx)
                            i_2 = i_6
                            edx_5 = var_181c_2
                        case 3
                            int32_t j_3 = 0
                            
                            if (*(*ebx + 4) s> 0)
                                do
                                    sub_44d930(ebx, j_3)
                                    j_3 += 1
                                while (j_3 s< *(*ebx + 4))
                                
                                i_2 = i_6
                                edx_5 = var_181c_2
                            
                            esi_5 = var_1824
                        case 4
                            sub_44e7e0(ebx)
                            i_2 = i_6
                            edx_5 = var_181c_2
                        case 6
                            sub_44e850(ebx)
                            sub_44eba0(ebx)
                            i_2 = i_6
                            edx_5 = var_181c_2
                
                i_2 += 1
                esi_5 += 1
                edx_5 += 4
                var_1824 = esi_5
                var_181c_2 = edx_5
                i_6 = i_2
            while (i_2 s<= 6)
        
        int32_t i_3 = 0
        int32_t i_4 = 0
        
        if (*(*ebx + 4) s> 0)
            void* esi_6 = &ebx[0x59]
            
            do
                int32_t j_4 = 0
                
                if (*esi_6 s> 0)
                    void* eax_31 = esi_6 - 0x139
                    
                    do
                        i_3.b = *eax_31
                        
                        if ((i_3.b & 2) != 0)
                            i_3.b &= 0xfd
                            *(eax_31 - 7) = 0
                            *eax_31 = i_3.b
                        
                        j_4 += 1
                        eax_31 += 8
                    while (j_4 s< *esi_6)
                    
                    i_3 = i_4
                
                i_3 += 1
                esi_6 += 0x1bc
                i_4 = i_3
            while (i_3 s< *(*ebx + 4))
        
        ebx[0x305] = 0xffffffff
        
        if (sub_44ef10(ebx) != 0)
            ebx[0x30f] = 1
    
    *(eax_26 + 8) = sub_43b0d0(ebx, edx)
    @__security_check_cookie@4(entry_ebx ^ &__saved_ebp)
    return eax_26
}
