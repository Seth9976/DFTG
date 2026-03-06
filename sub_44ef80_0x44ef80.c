// 函数名称: sub_44ef80
// 虚拟地址: 0x44ef80
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_44ef80(int32_t* arg1)
{
    // 第一条实际指令: int32_t i_4
    int32_t i_4
    int32_t eax_1 = __security_cookie ^ &i_4
    int32_t* esi = &arg1[0x307]
    *esi = 0
    int32_t* var_734 = esi
    arg1[0x306] = 0
    __builtin_memset(&arg1[0x308], 0, 0x18)
    int32_t eax_2 = arg1[4]
    arg1[0x305] = 0xffffffff
    
    if (eax_2 == 0)
        int32_t var_74c_1 = arg1[0x30e]
        void var_410
        int32_t edx
        sub_41da20(&var_410, edx, arg1, &var_410, "--- Round %d begins ---\n")
        sub_4892e0(&var_410)
        eax_2 = arg1[4]
    
    if (eax_2 == 0)
        sub_444430(sub_444430(eax_2, 4, arg1, 0xffffffff, eax_2, eax_2, eax_2, eax_2), 5, arg1, 
            0xffffffff, 0, 0, 0, 0)
    
    void* eax_5 = *arg1
    int32_t i = 0
    i_4 = 0
    
    if (*(eax_5 + 4) s> 0)
        void* eax_12
        
        do
            for (int32_t j = 1; j s<= 5; j += 1)
                int32_t var_730[0xc8]
                int32_t eax_7 = sub_4453c0(&var_730, i, arg1, &var_730, j)
                int32_t esi_1 = 0
                int32_t var_738_1 = eax_7
                
                if (eax_7 s> 0)
                    do
                        var_72c
                        void* ecx_4 = *(&var_72c + (esi_1 << 3))
                        int32_t j_3
                        int32_t var_74c_5
                        int32_t j_5
                        int32_t j_4
                        bool cond:3_1
                        
                        if (j == 1)
                            int32_t ecx_5 = *(ecx_4 + 4)
                            
                            if ((ecx_5.b & 0x10) != 0)
                                var_74c_5 = var_730[esi_1 * 2]
                                j_5 = ecx_5 u>> 5 & j
                                cond:3_1 = (ecx_5.b & 0x40) != 0
                                j_4 = j + 5
                                j_3 = j
                            label_44f0ee:
                                
                                if (cond:3_1)
                                    j_5 = j_4
                                
                                sub_444b00(j_5, i_4, arg1, j_5, j_3, var_74c_5)
                                eax_7 = var_738_1
                        else if (j == 5)
                            int32_t ecx_6 = *(ecx_4 + 4)
                            
                            if ((ecx_6.b & 4) != 0)
                                var_74c_5 = var_730[esi_1 * 2]
                                j_5 = ecx_6 u>> 0xf & 1
                                cond:3_1 = (ecx_6 & 0x2000) != 0
                                j_4 = j
                                j_3 = j
                                goto label_44f0ee
                        esi_1 += 1
                    while (esi_1 s< eax_7)
                
                i = i_4
            
            eax_12 = *arg1
            i += 1
            i_4 = i
        while (i s< *(eax_12 + 4))
        esi = &arg1[0x307]
    
    void* eax_13 = sub_446c10(arg1)
    
    if (arg1[4] == 0)
        sub_444430(eax_13, 0x3d, arg1, 0xffffffff, 0, 0, 0, 0)
    
    sub_447380(arg1)
    void* eax_14
    
    for (void* i_1 = 1; i_1 s<= 6; )
        eax_14 = arg1[4]
        bool cond:2_1
        
        if (*esi != 0)
            arg1[0x305] = i_1
            
            if (eax_14 == 0)
                sub_444430(
                    sub_444430(eax_14, eax_14 + 4, arg1, 0xffffffff, i_1, eax_14, eax_14, eax_14), 5, 
                    arg1, 0xffffffff, i_1, 0, 0, 0)
            
            eax_14 = i_1 - 1
            
            if (eax_14 u<= 5)
                eax_14 = i_1 - 1
                
                switch (jump_table_44f3d0[eax_14])
                    case 0x44f1ec
                        eax_14 = sub_44ab70(arg1)
                    case 0x44f1f5
                        eax_14 = sub_44b7d0(arg1)
                    case 0x44f1fe
                        eax_14 = sub_44ce50(arg1)
                    case 0x44f207
                        eax_14 = *arg1
                        int32_t j_1 = 0
                        
                        if (*(eax_14 + 4) s> 0)
                            do
                                sub_44d930(arg1, j_1)
                                eax_14 = *arg1
                                j_1 += 1
                            while (j_1 s< *(eax_14 + 4))
                        
                        esi = var_734
                    case 0x44f373
                        eax_14 = sub_44e7e0(arg1)
            
            cond:2_1 = arg1[4] != 0
            goto label_44f229
        
        if (eax_14 == 0)
            sub_444430(sub_444430(eax_14, eax_14 + 4, arg1, 0xffffffff, i_1, eax_14, eax_14, eax_14), 
                5, arg1, 0xffffffff, i_1, 0, 0, 0)
            eax_14 = arg1[4]
            cond:2_1 = eax_14 != 0
        label_44f229:
            
            if (not(cond:2_1))
                eax_14 = sub_444430(eax_14, 0x3d, arg1, 0xffffffff, i_1, 0, 0, 0)
        
        i_1 += 1
        esi = &esi[1]
        var_734 = esi
    
    bool cond:1 = arg1[4] != 0
    arg1[0x305] = 7
    
    if (not(cond:1))
        sub_444430(sub_444430(eax_14, 4, arg1, 0xffffffff, 7, 0, 0, 0), 5, arg1, 0xffffffff, 7, 0, 0, 0)
    
    if (sub_44ef10(arg1) != 0)
        arg1[0x30f] = 1
    
    sub_44e850(arg1)
    sub_44eba0(arg1)
    int32_t i_2 = 0
    
    if (*(*arg1 + 4) s> 0)
        void* esi_2 = &arg1[0x59]
        
        do
            int32_t j_2 = 0
            
            if (*esi_2 s> 0)
                void* eax_20 = esi_2 - 0x139
                
                do
                    char ecx_25 = *eax_20
                    
                    if ((ecx_25 & 2) != 0)
                        *(eax_20 - 7) = 0
                        *eax_20 = ecx_25 & 0xfd
                    
                    j_2 += 1
                    eax_20 += 8
                while (j_2 s< *esi_2)
            
            i_2 += 1
            esi_2 += 0x1bc
        while (i_2 s< *(*arg1 + 4))
    
    int32_t eax_22 = arg1[4]
    
    if (eax_22 != 0)
        goto label_44f353
    
    sub_444430(eax_22, eax_22 + 0x3d, arg1, 0xffffffff, 7, eax_22, eax_22, eax_22)
    int32_t eax_23 = arg1[4]
    
    if (eax_23 != 0)
        goto label_44f353
    
    int32_t eax_24 = sub_444430(eax_23, eax_23 + 0x3e, arg1, 0xffffffff, eax_23, eax_23, eax_23, eax_23)
    
    if (arg1[0x30f] != 0)
        sub_444430(eax_24, 0x3f, arg1, 0xffffffff, 0, 0, 0, 0)
    label_44f353:
        
        if (arg1[0x30f] != 0)
            @__security_check_cookie@4(eax_1 ^ &i_4)
            return 0
    
    void* eax_26 = *arg1
    int32_t i_3 = 0
    arg1[0x30e] += 1
    
    if (*(eax_26 + 4) s> 0)
        void* ecx_32 = &arg1[0x74]
        
        do
            *ecx_32 = 0
            ecx_32 += 0x1bc
            i_3 += 1
        while (i_3 s< *(*arg1 + 4))
    
    @__security_check_cookie@4(eax_1 ^ &i_4)
    return 1
}
