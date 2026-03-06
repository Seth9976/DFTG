// 函数名称: sub_446c10
// 虚拟地址: 0x446c10
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_446c10(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    uint32_t i = 0
    uint32_t i_6 = 0
    void* eax_2 = *arg1
    
    if (*(eax_2 + 4) s> 0)
        void* esi_1 = &arg1[0x59]
        void* var_44c_1 = esi_1
        
        do
            int32_t j = 0
            *(esi_1 + 0x24) = 0
            
            if (*esi_1 s> 0)
                void* eax_3 = var_44c_1
                void* esi_2 = esi_1 - 0x139
                
                do
                    if (*(esi_2 - 6) == 1)
                        eax_3.b = *esi_2
                        eax_3.b &= 0xfe
                        *esi_2 = eax_3.b
                        uint32_t ecx
                        
                        if ((eax_3.b & 8) == 0)
                            int32_t ecx_2 = arg1[2] * 0x41c64e6d + 0x3039
                            arg1[2] = ecx_2
                            ecx = (ecx_2 u>> 0x10 & 0x7fff) s% 6
                        else
                            ecx = zx.d(*(esi_2 - 5))
                            eax_3.b &= 0xf7
                            *esi_2 = eax_3.b
                        
                        uint32_t eax_10 = zx.d(*(esi_2 - 7))
                        *(esi_2 - 5) = ecx.b
                        void* edx_2 = *arg1
                        int32_t eax_13 = *(((ecx + eax_10 * 6) << 2) + &data_5b5040)
                        char var_44d_1 = eax_13.b
                        
                        if (*(edx_2 + 0x11) == 0 && *(edx_2 + 0x12) == 0)
                            eax_13 &= 0xffffffbf
                        
                        if (eax_13 == 2)
                            eax_13.b = 1
                        else if (eax_13 == 4)
                            eax_13.b = 2
                        else if (eax_13 == 8)
                            eax_13.b = 3
                        else if (eax_13 == 0x10)
                            eax_13.b = 4
                        else if (eax_13 != 0x20)
                            eax_13.b = eax_13 != 0x40
                            eax_13.b -= 1
                            eax_13.b &= 6
                        else
                            eax_13.b = 5
                        
                        edx_2.b = var_44d_1
                        *(esi_2 - 2) = eax_13.b
                        *(esi_2 - 4) = eax_13.b
                        *(esi_2 - 3) = edx_2.b
                        *(esi_2 - 6) = 4
                        
                        if (arg1[4] == 0)
                            uint32_t eax_14 = zx.d(eax_13.b)
                            sub_444430(eax_14, 0xb, arg1, i_6, j, ecx, eax_14, 0)
                        
                        eax_3 = var_44c_1
                    
                    j += 1
                    esi_2 += 8
                while (j s< *eax_3)
                
                esi_1 = var_44c_1
                i = i_6
            
            eax_2 = *arg1
            i += 1
            esi_1 += 0x1bc
            i_6 = i
            var_44c_1 = esi_1
        while (i s< *(eax_2 + 4))
    
    uint32_t i_1 = 0
    i_6 = 0
    int32_t var_458
    int32_t var_ac[0x29]
    
    if (*(eax_2 + 4) s> 0)
        void* esi_3 = arg1 + 0x2b
        void* eax_19
        
        do
            int32_t ebx_1 = *(esi_3 + 0x139)
            int32_t eax_15 = 0
            int32_t edx_3 = 0
            var_458 = 0
            
            if (ebx_1 s> 0)
                void* ecx_6 = esi_3
                
                do
                    if (*(ecx_6 - 6) == 4 && (*ecx_6 & 2) == 0)
                        var_ac[eax_15] = edx_3
                        eax_15 += 1
                    
                    edx_3 += 1
                    ecx_6 += 8
                while (edx_3 s< ebx_1)
                
                i_1 = i_6
                var_458 = eax_15
            
            if (*(esi_3 + 0x199) s>= *(esi_3 + 0x195))
                (*(*(esi_3 - 0xf) + 4))(arg1, i_1, 2, &var_ac, &var_458, 0, 0, 0, 0, 0)
                i_1 = i_6
            
            eax_19 = *arg1
            i_1 += 1
            esi_3 += 0x1bc
            i_6 = i_1
        while (i_1 s< *(eax_19 + 4))
    
    sub_4446d0(arg1)
    int32_t i_2 = 0
    int32_t i_5 = 0
    
    if (*(*arg1 + 4) s> 0)
        void* ebx_2 = &arg1[0x59]
        void* var_45c_1 = ebx_2
        
        do
            int32_t eax_21 = *(ebx_2 + 0x60)
            int32_t* ecx_9 = *(ebx_2 + 0x58) + (eax_21 << 2)
            
            if (eax_21 s>= *(ebx_2 + 0x5c))
                int32_t i_4 = i_2
                sub_444530("No data available in choice log who %d!\n")
                noreturn
            
            int32_t eax_22 = *ecx_9
            
            if (eax_22 != 2)
                int32_t var_480_5 = eax_22
                int32_t i_3 = i_2
                int32_t var_488_4 = *(ebx_2 - 0x14c)
                int32_t var_48c_5 = 2
                sub_444530("Expected %d in choice log for player %s (%d), found %d!\n")
                noreturn
            
            int32_t eax_23 = ecx_9[1]
            int32_t edx_4 = 0
            int32_t eax_24 = ecx_9[2]
            void* ecx_10 = &ecx_9[3]
            int32_t var_460_1 = eax_24
            var_458 = eax_24
            
            if (eax_24 s> 0)
                do
                    int32_t eax_25 = *ecx_10
                    ecx_10 += 4
                    var_ac[edx_4] = eax_25
                    edx_4 += 1
                while (edx_4 s< eax_24)
                
                i_2 = i_5
            
            if (*ecx_10 != 0)
                sub_444530("Log has specials but nowhere to copy them!\n")
                noreturn
            
            int32_t eax_26 = var_ac[0]
            *(ebx_2 + 0x60) = (ecx_10 - *(ebx_2 + 0x58) + 4) s>> 2
            *(ebx_2 + (eax_26 << 3) - 0x13b) = eax_23.b
            int32_t eax_27 = var_ac[0]
            *(ebx_2 + (eax_27 << 3) - 0x139) |= 1
            *(ebx_2 + 0x1c) = eax_23
            int32_t ecx_15 = var_458
            
            if (ecx_15 == 0)
                int32_t j_1 = 0
                
                if (*ebx_2 s> 0)
                    void* eax_28 = ebx_2 - 0x139
                    
                    do
                        if (*(eax_28 - 6) == 4 && (*eax_28 & 2) == 0)
                            var_ac[ecx_15] = j_1
                            ecx_15 += 1
                        
                        j_1 += 1
                        eax_28 += 8
                    while (j_1 s< *ebx_2)
                    
                    var_458 = ecx_15
            
            int32_t ecx_16 = 0
            int32_t j_2 = 0
            *(ebx_2 + 0x20) = var_ac[0]
            int32_t var_454 = 0
            
            if (*ebx_2 s> 0)
                void* eax_30 = ebx_2 - 0x139
                int32_t var_14c[0x28]
                
                do
                    if (*(eax_30 - 6) == 4 && (*eax_30 & 3) == 0 && *(eax_30 - 2) == 0)
                        var_14c[ecx_16] = j_2
                        ecx_16 += 1
                    
                    j_2 += 1
                    eax_30 += 8
                while (j_2 s< *ebx_2)
                
                var_454 = ecx_16
                
                if (ecx_16 s> 0)
                    char var_28c[0xa0]
                    
                    if (*(ebx_2 + 0x60) s< *(ebx_2 + 0x5c))
                        sub_444560(&var_14c, i_2, arg1, 1, &var_14c, &var_454, &var_28c, &var_454)
                    else
                        (*(*(ebx_2 - 0x148) + 4))(arg1, i_2, 1, &var_14c, &var_454, &var_28c, &var_454, 
                            0, 0, 0)
                        
                        if (arg1[0x30f] == 0)
                            int32_t eax_36 = *(*(ebx_2 - 0x148) + 0xc)
                            
                            if (eax_36 != 0)
                                eax_36(arg1, i_2)
                            
                            sub_444560(&var_14c, i_2, arg1, 1, &var_14c, &var_454, &var_28c, &var_454)
                    
                    int32_t edx_6 = 0
                    
                    if (var_454 s> 0)
                        do
                            int32_t ecx_18 = var_14c[edx_6]
                            char eax_34 = var_28c[edx_6 << 2]
                            edx_6 += 1
                            *(ebx_2 + (ecx_18 << 3) - 0x13b) = eax_34
                        while (edx_6 s< var_454)
            
            while (true)
                int32_t var_444
                int32_t var_468 = sub_446900(&var_444, i_2, arg1, &var_444)
                
                if (sub_444640(&var_444, i_2, arg1, 3, &var_444, &var_468, 0, nullptr, 0, 0, 0) == 0)
                    break
                
                int32_t ebx_3 = var_444
                int32_t var_470
                int32_t var_46c
                int32_t var_1ec[0x28]
                uint32_t i_7 = sub_4465f0(&var_1ec, i_2, arg1, ebx_3, &var_1ec, &var_46c, &var_470)
                int32_t var_490_3 = var_46c
                i_6 = i_7
                char var_32c[0xa0]
                sub_444640(&var_1ec, i_2, arg1, 4, &var_1ec, &i_6, &var_32c, &i_6, ebx_3, var_470, 
                    var_490_3)
                uint32_t i_8 = i_6
                
                if (ebx_3 s>= 0)
                    ebx_2 = var_45c_1
                    *(&arg1[ebx_3 * 3] + 0x8cd) = 1
                else
                    ebx_2 = var_45c_1
                    *(ebx_2 + (var_1ec[0] << 3) - 0x13f) = 7
                    *(ebx_2 + 0x24) = 1
                
                int32_t eax_46 = 0
                
                if (i_8 s> 0)
                    do
                        int32_t edx_11 = var_1ec[eax_46]
                        int32_t* ecx_22
                        ecx_22.b = var_32c[eax_46 << 2]
                        eax_46 += 1
                        *(ebx_2 + (edx_11 << 3) - 0x13b) = ecx_22.b
                    while (eax_46 s< i_8)
                
                i_2 = i_5
            
            i_2 += 1
            ebx_2 += 0x1bc
            i_5 = i_2
            var_45c_1 = ebx_2
        while (i_2 s< *(*arg1 + 4))
    
    void* result = sub_4459a0(arg1)
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
