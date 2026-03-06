// 函数名称: sub_44c5e0
// 虚拟地址: 0x44c5e0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_44c5e0(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* edi = arg1
    void* ecx = arg2 * 0x1bc
    int32_t eax_2 = 0
    int32_t esi = 0
    int32_t* var_538 = edi
    int32_t edx = 0
    int32_t var_52c = 0
    int32_t var_514 = 0
    void* ecx_2 = ecx + 0x18 + edi
    int32_t ebx = *(ecx_2 + 0x14c)
    int32_t var_14c[0x28]
    
    if (ebx s> 0)
        void* ecx_3 = ecx_2 + 0x11
        
        do
            if (*(ecx_3 - 4) == 4 && *ecx_3 == 3)
                var_14c[eax_2] = edx
                eax_2 += 1
            
            edx += 1
            ecx_3 += 8
        while (edx s< ebx)
        
        var_52c = eax_2
    
    void* edx_1 = ecx_2
    uint32_t ecx_4 = *(edx_1 + 0x160)
    
    if (ecx_4 s>= 0)
        void* eax_12 = &edi[(ecx_4 + 0xbb) * 3]
        void* var_51c = eax_12
        int32_t ebx_3 = sub_44bae0(eax_12, arg2, edi, ecx_4, 0, 0)
        int32_t var_534_1 = 0
        int32_t var_524_1 = ebx_3
        int32_t i_4 = *(edi + ecx + 0x164)
        
        if (i_4 s> 0)
            int32_t ecx_19 = ecx + 0x25 + edi
            int32_t ebx_4 = 0
            int32_t i
            
            do
                bool cond:0_1 = *ecx_19 != 6
                int32_t eax_15 = ebx_4 + 1
                ecx_19 += 8
                
                if (cond:0_1)
                    eax_15 = ebx_4
                
                ebx_4 = eax_15
                i = i_4
                i_4 -= 1
            while (i != 1)
            var_534_1 = ebx_4
            ebx_3 = var_524_1
        
        int32_t var_50c[0xc8]
        int32_t eax_17 = sub_4453c0(&var_50c, arg2, edi, &var_50c, 3)
        int32_t edx_4 = var_514
        var_508
        int32_t var_ac[0x29]
        
        if (eax_17 s> 0)
            int32_t ebx_5 = 0
            int32_t edi_1 = 0
            
            do
                void* ecx_21 = *(&var_508 + (edi_1 << 3))
                char eax_18 = (*(ecx_21 + 4)).b
                
                if ((eax_18 & 4) == 0)
                    goto label_44c8e8
                
                if ((*(*var_51c + 0x1c) & 0x400) == 0 && var_534_1 != 0)
                    var_ac[edx_4] = var_50c[edi_1 * 2]
                    edx_4 += 1
                    var_514 = edx_4
                    eax_18 = (*(ecx_21 + 4)).b
                label_44c8e8:
                    
                    if ((eax_18 & 8) != 0 && (*(*var_51c + 0x1c) & 0x400) == 0)
                        int32_t i_3 = *(ecx_2 + 0x14c)
                        
                        if (i_3 s> 0)
                            void* eax_25 = ecx_2 + 0xc
                            int32_t i_1
                            
                            do
                                if (*eax_25 == 2)
                                    if (*(eax_25 + 1) != 6)
                                        esi = 1
                                    else
                                        ebx_5 = 1
                                
                                eax_25 += 8
                                i_1 = i_3
                                i_3 -= 1
                            while (i_1 != 1)
                        
                        if ((ebx_5 != 0 || esi != 0) && var_534_1 != 0)
                            var_ac[edx_4] = var_50c[edi_1 * 2]
                            edx_4 += 1
                            var_514 = edx_4
                
                edi_1 += 1
            while (edi_1 s< eax_17)
            
            edi = var_538
            ebx_3 = var_524_1
        
        var_51c = nullptr
        int32_t esi_2 = 0
        sub_44c3e0(&var_ac, arg2, edi, &var_ac, edx_4, 0, 0, &var_51c)
        int32_t edx_6 = var_514
        int32_t ecx_23 = 0
        
        if (edx_6 s> 0)
            void* ebx_6 = var_51c
            
            do
                if ((ebx_6 & 1 << ecx_23.b) != 0)
                    var_ac[esi_2] = var_ac[ecx_23]
                    esi_2 += 1
                
                ecx_23 += 1
            while (ecx_23 s< edx_6)
            
            edi = var_538
            ebx_3 = var_524_1
        
        bool cond:1_1 = var_52c != 0
        var_514 = esi_2
        
        if (cond:1_1 || esi_2 != 0)
            int32_t esi_3 = arg2
            
            if (*(edi + ecx + 0x1c4) s< *(edi + ecx + 0x1c0))
                sub_444560(&var_14c, esi_3, edi, 0xa, &var_14c, &var_52c, &var_ac, &var_514)
            else
                (*(*(edi + ecx + 0x1c) + 4))(edi, esi_3, 0xa, &var_14c, &var_52c, &var_ac, &var_514, 3, 
                    0, 0)
                
                if (edi[0x30f] == 0)
                    int32_t eax_35 = *(*(edi + ecx + 0x1c) + 0xc)
                    
                    if (eax_35 != 0)
                        eax_35(edi, esi_3)
                    
                    sub_444560(&var_14c, esi_3, edi, 0xa, &var_14c, &var_52c, &var_ac, &var_514)
            
            int32_t eax_37 = var_514
            
            if (var_52c != 0 || eax_37 != 0)
                int32_t var_548 = 0
                bool cond:3 = eax_37 != 0
                
                if (eax_37 s> 0)
                    int32_t (* edx_8)[0xc8] = &var_50c
                    var_51c = &var_ac
                    int32_t (* var_528_2)[0xc8] = &var_50c
                    int32_t ecx_41
                    
                    do
                        int32_t ecx_28 = 0
                        int32_t var_530_1 = 0
                        
                        if (eax_17 s> 0)
                            do
                                if (*var_51c == var_50c[ecx_28 * 2])
                                    void* esi_4 = *(&var_508 + (ecx_28 << 3))
                                    
                                    if ((*(esi_4 + 4) & 4) != 0)
                                        void* edx_9 = ecx
                                        int32_t eax_41 = *(edi + edx_9 + 0x18c)
                                        
                                        if (eax_41 s< 1)
                                            sub_444530("Spent too many credits!\n")
                                            noreturn
                                        
                                        *(edi + edx_9 + 0x18c) = eax_41 - 1
                                        int32_t ecx_29 = edi[4]
                                        
                                        if (ecx_29 == 0)
                                            sub_444430(eax_41 - 1, ecx_29 + 0x29, edi, arg2, 
                                                0xffffffff, 0xffffffff, ecx_29, ecx_29)
                                            ecx_29 = edi[4]
                                            edx_9 = ecx
                                        
                                        void* eax_43 = *edi
                                        
                                        if (*(eax_43 + 8) != 0 && *(edi + edx_9 + 0x18c) s< 1)
                                            *(edi + edx_9 + 0x18c) = 1
                                            ecx_29 = edi[4]
                                            
                                            if (ecx_29 == 0)
                                                sub_444430(eax_43, ecx_29 + 0x28, edi, arg2, 
                                                    0xffffffff, 1, ecx_29, ecx_29)
                                                ecx_29 = edi[4]
                                        
                                        int32_t eax_44 = ebx_3 - 1
                                        ebx_3 = 1
                                        
                                        if (eax_44 s>= 1)
                                            ebx_3 = eax_44
                                        
                                        var_524_1 = ebx_3
                                        
                                        if (ecx_29 == 0)
                                            sub_444430(var_528_2, ecx_29 + 0x13, edi, arg2, *var_528_2, 
                                                4, 1, ecx_4)
                                            var_524_1 = ebx_3
                                        
                                        ecx_28 = var_530_1
                                    
                                    if ((*(esi_4 + 4) & 8) == 0)
                                        esi_3 = arg2
                                    else
                                        int32_t esi_5 = 0
                                        int32_t edx_13 = 0
                                        int32_t var_53c = 0
                                        int32_t ebx_7 = *(ecx_2 + 0x14c)
                                        int32_t var_1ec[0x28]
                                        
                                        if (ebx_7 s> 0)
                                            void* eax_47 = ecx_2 + 0xc
                                            
                                            do
                                                if (*eax_47 == 2 && (var_524_1 - var_534_1 s< 3
                                                        || *(eax_47 + 1) != 6))
                                                    var_1ec[esi_5] = edx_13
                                                    esi_5 += 1
                                                
                                                edx_13 += 1
                                                eax_47 += 8
                                            while (edx_13 s< ebx_7)
                                            
                                            edi = var_538
                                            var_53c = esi_5
                                        
                                        esi_3 = arg2
                                        
                                        if (*(edi + ecx + 0x1c4) s< *(edi + ecx + 0x1c0))
                                            sub_444560(&var_1ec, esi_3, edi, 0x10, &var_1ec, &var_53c, 
                                                0, nullptr)
                                        else
                                            (*(*(edi + ecx + 0x1c) + 4))(edi, esi_3, 0x10, &var_1ec, 
                                                &var_53c, 0, 0, 1, 0, 0)
                                            
                                            if (edi[0x30f] == 0)
                                                int32_t eax_52 = *(*(edi + ecx + 0x1c) + 0xc)
                                                
                                                if (eax_52 != 0)
                                                    eax_52(edi, esi_3)
                                                
                                                sub_444560(&var_1ec, esi_3, edi, 0x10, &var_1ec, 
                                                    &var_53c, 0, nullptr)
                                        
                                        int32_t eax_57 = var_1ec[0]
                                        
                                        if (*((eax_57 << 3) + ecx_2 + 0x12) != 0xff)
                                            void* ecx_37 = &edi[eax_57 * 2]
                                            int32_t eax_56 = (sx.d(*(ecx_37 + ecx + 0x2a)) + 0xbb) * 3
                                            edi[eax_56 + 2].b -= 1
                                            *(ecx_37 + ecx + 0x25) = 0
                                            *(ecx_37 + ecx + 0x2a) = 0xff
                                            eax_57 = var_1ec[0]
                                        
                                        *(ecx_2 + (eax_57 << 3) + 0xc) = 0
                                        *(ecx_2 + (var_1ec[0] << 3) + 0xd) = 0
                                        int32_t eax_59 = edi[4]
                                        
                                        if (eax_59 == 0)
                                            sub_444430(eax_59, eax_59 + 0x2e, edi, esi_3, var_1ec[0], 
                                                eax_59, eax_59, eax_59)
                                            eax_59 = edi[4]
                                        
                                        ebx_3 = var_524_1 - 3
                                        
                                        if (ebx_3 s< 1)
                                            ebx_3 = 1
                                        
                                        var_524_1 = ebx_3
                                        
                                        if (eax_59 == 0)
                                            sub_444430(var_528_2, 0x13, edi, esi_3, *var_528_2, 8, 3, 
                                                ecx_4)
                                        
                                        ecx_28 = var_530_1
                                
                                ecx_28 += 1
                                var_530_1 = ecx_28
                            while (ecx_28 s< eax_17)
                            
                            eax_37 = var_514
                            edx_8 = var_528_2
                        
                        edx_8 = &(*edx_8)[2]
                        var_51c += 4
                        ecx_41 = var_548 + 1
                        var_548 = ecx_41
                        var_528_2 = edx_8
                    while (ecx_41 s< eax_37)
                    cond:3 = eax_37 != 0
                
                if (not(cond:3))
                    eax_37 = var_14c[0]
                    *(ecx_2 + (eax_37 << 3) + 0xd) = 6
                    
                    if (edi[4] == 0)
                        eax_37 = sub_444430(eax_37, 0x1c, edi, esi_3, var_14c[0], 0, 0, 0)
                
                sub_44bc80(eax_37, esi_3, edi, ecx_4, ebx_3)
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return 1
    else
        int32_t ecx_5 = *(edx_1 + 0x198)
        
        if (ecx_5 s<= 0)
            int32_t esi_1 = 0
            
            if (eax_2 s> 0)
                do
                    if (edi[4] == 0)
                        int32_t ebx_1 = var_14c[esi_1]
                        sub_444430(eax_2, 0x2f, edi, arg2, ebx_1, 0, 0, 0)
                        void* eax_5 = &edi[ebx_1 * 2]
                        
                        if ((*(eax_5 + ecx + 0x2b) & 2) != 0)
                            sub_444430(eax_5, 0x2d, edi, arg2, ebx_1, 0, 0, 0)
                        
                        edx_1 = ecx_2
                    
                    eax_2 = var_14c[esi_1]
                    esi_1 += 1
                    *(edx_1 + (eax_2 << 3) + 0xd) = 1
                while (esi_1 s< var_52c)
                
                ebx = *(edx_1 + 0x14c)
            
            int32_t i_2 = 0
            
            if (ebx s> 0)
                void* ebx_2 = edx_1 + 0xd
                void* eax_8 = ecx + 0x2b + edi
                void* var_528_1 = eax_8
                
                do
                    if (*ebx_2 == 6)
                        if (edi[4] == 0)
                            sub_444430(eax_8, 0x31, edi, arg2, i_2, 0, 0, 0)
                            eax_8 = var_528_1
                            
                            if ((*eax_8 & 2) != 0)
                                sub_444430(eax_8, 0x2d, edi, arg2, i_2, 0, 0, 0)
                                eax_8 = var_528_1
                            
                            edx_1 = ecx_2
                        
                        *ebx_2 = 1
                    
                    i_2 += 1
                    eax_8 += 8
                    ebx_2 += 8
                    var_528_1 = eax_8
                while (i_2 s< *(edx_1 + 0x14c))
                
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return 0
        else
            *(edx_1 + 0x184) += eax_2
            int32_t ecx_6 = ecx_5 * 3
            
            if (*(edx_1 + 0x184) s> ecx_6)
                *(edx_1 + 0x184) = ecx_6
            
            int32_t ecx_7 = 0
            
            if (eax_2 s> 0)
                do
                    int32_t eax_3 = var_14c[ecx_7]
                    ecx_7 += 1
                    *(edx_1 + (eax_3 << 3) + 0xd) = 2
                while (ecx_7 s< var_52c)
                
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return 0
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return 0
}
