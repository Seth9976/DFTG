// 函数名称: sub_439520
// 虚拟地址: 0x439520
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_439520(int32_t* arg1, double arg2 @ xmm1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t var_c54 = 5
    int32_t esi = 0
    void* edx = *arg1
    int32_t eax_3 = 0xa
    data_138fd50 = 0
    int32_t ecx = *(edx + 8)
    
    if (ecx == 0)
        eax_3 = 7
    
    if (*(edx + 0x11) != 0 || *(edx + 0x12) != 0)
        var_c54 = 6
    
    int32_t edi = 0
    void* eax_4 = &data_6d0104
    data_13902e4 = 0
    void* ebx = nullptr
    void* var_c64 = &data_6d0104
    int32_t edx_1 = ecx
    int32_t var_c4c[0xc8]
    int32_t var_92c[0xc8]
    
    while (true)
        int32_t ecx_1 = *(eax_4 + 0x48)
        
        if ((ecx_1 & edx_1) == ecx_1)
            *(ebx + 0x13041f4) = 0xffffffff
            *(ebx + &data_13041f0) = 0xffffffff
            char* eax_8 = *(var_c64 - 0x1c)
            int32_t ecx_3 = *var_c64 & 0x43
            void* const ecx_4 = &data_5d4f84
            char* var_c68_1 = eax_8
            int32_t eax_10
            
            while (true)
                edx_1.b = *eax_8
                char temp0_1 = *ecx_4
                bool c_1 = edx_1.b u< temp0_1
                
                if (edx_1.b == temp0_1)
                    if (edx_1.b == 0)
                        eax_10 = 0
                        break
                    
                    edx_1.b = eax_8[1]
                    char temp1_1 = *(ecx_4 + 1)
                    c_1 = edx_1.b u< temp1_1
                    
                    if (edx_1.b == temp1_1)
                        eax_8 = &eax_8[2]
                        ecx_4 += 2
                        
                        if (edx_1.b != 0)
                            continue
                        
                        eax_10 = 0
                        break
                
                eax_10 = sbb.d(eax_8, eax_8, c_1) | 1
                break
            
            if (eax_10 != 0)
                var_92c[edi] = var_c68_1
                *(ebx + &data_13041f0) = edi
                edi += 1
                data_13902e4 = edi
                
                if (ecx_3 == 0)
                    var_c4c[esi] = var_c68_1
                    *(ebx + &data_1450730) = esi
                    esi += 1
                    data_138fd50 = esi
            
            void* const ecx_5 = &data_5d4f84
            char* eax_13 = *(var_c64 - 0x18)
            char* var_c68_2 = eax_13
            int32_t eax_15
            
            while (true)
                edx_1.b = *eax_13
                char temp2_1 = *ecx_5
                bool c_2 = edx_1.b u< temp2_1
                
                if (edx_1.b == temp2_1)
                    if (edx_1.b == 0)
                        eax_15 = 0
                        break
                    
                    edx_1.b = eax_13[1]
                    char temp3_1 = *(ecx_5 + 1)
                    c_2 = edx_1.b u< temp3_1
                    
                    if (edx_1.b == temp3_1)
                        eax_13 = &eax_13[2]
                        ecx_5 += 2
                        
                        if (edx_1.b != 0)
                            continue
                        
                        eax_15 = 0
                        break
                
                eax_15 = sbb.d(eax_13, eax_13, c_2) | 1
                break
            
            edx_1 = ecx
            
            if (eax_15 != 0)
                var_92c[edi] = var_c68_2
                *(ebx + 0x13041f4) = edi
                edi += 1
                data_13902e4 = edi
                
                if (ecx_3 == 0)
                    var_c4c[esi] = var_c68_2
                    *(ebx + &data_1450734) = esi
                    esi += 1
                    data_138fd50 = esi
        
        ebx += 8
        eax_4 = var_c64 + 0x68
        var_c64 = eax_4
        
        if (eax_4 s>= 0x6d370c)
            break
    
    double xmm0 = 0.001
    double xmm1 = arg2 * xmm0
    int32_t var_c7c = 0x32
    double var_c84 = xmm0
    int32_t eax_20 = *(*arg1 + 4)
    double var_c8c = xmm1
    int32_t var_c78 = eax_20
    int32_t var_c74 = eax_20
    int32_t var_c70 = eax_20
    sub_4504b0(&data_1410698, &var_c8c)
    int32_t edi_2 = data_14106c0 + 1
    data_14106c0 = edi_2
    int32_t esi_1 = edi_2 << 2
    int32_t var_ca0 = esi_1
    int32_t var_ca4 = data_14106d8
    int32_t eax_21 = sub_57fb2f()
    int32_t var_ca8 = esi_1
    int32_t var_cac = data_14106dc
    data_14106d8 = eax_21
    int32_t eax_22 = sub_57fb2f()
    int32_t var_cb0 = esi_1
    int32_t var_cb4 = data_1410728
    data_14106dc = eax_22
    data_1410728 = sub_57fb2f()
    char* eax_24
    int32_t edx_3
    eax_24, edx_3 = __strdup("Game over")
    *(data_1410728 + (edi_2 << 2) - 4) = eax_24
    *(data_14106d8 + (edi_2 << 2) - 4) = 0xffffffff
    *(data_14106dc + (edi_2 << 2) - 4) = *data_14106e0
    int32_t i = 0
    
    if (data_14106d0 s> 0)
        do
            int32_t eax_28 = data_14106e0
            *(eax_28 + (i << 2)) += 1
            i += 1
        while (i s< data_14106d0)
    
    void var_60c
    
    for (int32_t i_1 = 0; i_1 s< 0xc; i_1 += 1)
        int32_t i_7 = i_1
        sub_41da20(&var_60c, edx_3, i, &var_60c, "VP Pool %d")
        int32_t edi_4 = data_14106c0 + 1
        data_14106c0 = edi_4
        int32_t esi_2 = edi_4 << 2
        int32_t var_ca0_1 = esi_2
        int32_t var_ca4_1 = data_14106d8
        int32_t eax_30 = sub_57fb2f()
        int32_t var_ca8_2 = esi_2
        int32_t var_cac_1 = data_14106dc
        data_14106d8 = eax_30
        int32_t eax_31 = sub_57fb2f()
        int32_t var_cb0_1 = esi_2
        int32_t var_cb4_1 = data_1410728
        data_14106dc = eax_31
        data_1410728 = sub_57fb2f()
        char* eax_33
        eax_33, edx_3 = __strdup(&var_60c)
        *(data_1410728 + (edi_4 << 2) - 4) = eax_33
        *(data_14106d8 + (edi_4 << 2) - 4) = 0xffffffff
        *(data_14106dc + (edi_4 << 2) - 4) = *data_14106e0
        i = 0
        
        if (data_14106d0 s> 0)
            do
                int32_t eax_37 = data_14106e0
                *(eax_37 + (i << 2)) += 1
                i += 1
            while (i s< data_14106d0)
    
    for (int32_t i_2 = 3; i_2 s< 0xf; i_2 += 1)
        int32_t i_8 = i_2
        sub_41da20(&var_60c, edx_3, i, &var_60c, "Max active %d")
        int32_t edi_6 = data_14106c0 + 1
        data_14106c0 = edi_6
        int32_t esi_3 = edi_6 << 2
        int32_t var_ca0_2 = esi_3
        int32_t var_ca4_2 = data_14106d8
        int32_t eax_39 = sub_57fb2f()
        int32_t var_ca8_4 = esi_3
        int32_t var_cac_2 = data_14106dc
        data_14106d8 = eax_39
        int32_t eax_40 = sub_57fb2f()
        int32_t var_cb0_2 = esi_3
        int32_t var_cb4_2 = data_1410728
        data_14106dc = eax_40
        data_1410728 = sub_57fb2f()
        char* eax_42
        eax_42, edx_3 = __strdup(&var_60c)
        *(data_1410728 + (edi_6 << 2) - 4) = eax_42
        *(data_14106d8 + (edi_6 << 2) - 4) = 0xffffffff
        *(data_14106dc + (edi_6 << 2) - 4) = *data_14106e0
        i = 0
        
        if (data_14106d0 s> 0)
            do
                int32_t eax_46 = data_14106e0
                *(eax_46 + (i << 2)) += 1
                i += 1
            while (i s< data_14106d0)
    
    int32_t i_3 = 0
    int16_t var_20c
    
    if (*(*arg1 + 4) s> 0)
        do
            if (i_3 != 0)
                int32_t i_9 = i_3
                i, edx_3 = sub_41da20(&var_20c, edx_3, i, &var_20c, "Opponent %d")
            else
                var_20c = 0x7355
                char var_20a_1 = 0
            
            int32_t j = 0
            
            if (data_13902e4 s> 0)
                do
                    int32_t var_ca0_3 = var_92c[j]
                    int16_t* var_ca4_3 = &var_20c
                    i, edx_3 = sub_450860(sub_41da20(&var_60c, edx_3, i, &var_60c, "%s active %s"), 
                        &var_60c, &data_1410698, i_3)
                    j += 1
                while (j s< data_13902e4)
            
            for (int32_t j_1 = 3; j_1 s< 0xc; j_1 += 1)
                int32_t j_33 = j_1
                int16_t* var_ca4_4 = &var_20c
                i, edx_3 = sub_450860(sub_41da20(&var_60c, edx_3, i, &var_60c, "%s active count %d"), 
                    &var_60c, &data_1410698, i_3)
            
            for (int32_t j_2 = 0; j_2 s< 5; j_2 += 1)
                int32_t j_34 = j_2
                int16_t* var_ca4_5 = &var_20c
                i, edx_3 = sub_450860(
                    sub_41da20(&var_60c, edx_3, i, &var_60c, "%s six cost developments %d"), &var_60c, 
                    &data_1410698, i_3)
            
            int32_t j_3 = 0
            
            if (data_138fd50 s> 0)
                do
                    int32_t var_ca0_4 = var_c4c[j_3]
                    int16_t* var_ca4_6 = &var_20c
                    i, edx_3 = sub_450860(sub_41da20(&var_60c, edx_3, i, &var_60c, "%s building %s"), 
                        &var_60c, &data_1410698, i_3)
                    j_3 += 1
                while (j_3 s< data_138fd50)
            
            for (int32_t j_4 = 0; j_4 s< 0xa; j_4 += 1)
                int32_t j_35 = j_4
                int16_t* var_ca4_7 = &var_20c
                i, edx_3 = sub_450860(
                    sub_41da20(&var_60c, edx_3, i, &var_60c, "%s tiles in progress %d"), &var_60c, 
                    &data_1410698, i_3)
            
            for (int32_t j_5 = 0; j_5 s< 0xc; j_5 += 1)
                int32_t j_36 = j_5
                int16_t* var_ca4_8 = &var_20c
                i, edx_3 = sub_450860(sub_41da20(&var_60c, edx_3, i, &var_60c, "%s dice in cup %d"), 
                    &var_60c, &data_1410698, i_3)
            
            for (int32_t j_6 = 0; j_6 s< 0xc; j_6 += 1)
                int32_t j_37 = j_6
                int16_t* var_ca4_9 = &var_20c
                i, edx_3 = sub_450860(sub_41da20(&var_60c, edx_3, i, &var_60c, "%s dice active %d"), 
                    &var_60c, &data_1410698, i_3)
            
            int32_t var_c50_2 = 1
            char const (** const ebx_1)[0x6] = &data_5b4ff4
            int32_t eax_67
            
            do
                for (int32_t j_7 = 0; j_7 s< 5; j_7 += 1)
                    char const (* var_ca0_5)[0x6] = *ebx_1
                    int32_t j_27 = j_7
                    int16_t* var_ca8_6 = &var_20c
                    i, edx_3 = sub_450860(sub_41da20(&var_60c, edx_3, i, &var_60c, "%s %d %s dice"), 
                        &var_60c, &data_1410698, i_3)
                
                ebx_1 = &ebx_1[1]
                eax_67 = var_c50_2 + 1
                var_c50_2 = eax_67
            while (eax_67 s<= eax_3)
            int32_t var_c50_3 = 1
            char const (** const ebx_2)[0x6] = &data_5b4ff4
            int32_t eax_71
            
            do
                for (int32_t j_8 = 0; j_8 s< 5; j_8 += 1)
                    char const (* var_ca0_7)[0x6] = *ebx_2
                    int32_t j_28 = j_8
                    int16_t* var_ca8_7 = &var_20c
                    i, edx_3 = sub_450860(
                        sub_41da20(&var_60c, edx_3, i, &var_60c, "%s %d %s dice in cup"), &var_60c, 
                        &data_1410698, i_3)
                
                ebx_2 = &ebx_2[1]
                eax_71 = var_c50_3 + 1
                var_c50_3 = eax_71
            while (eax_71 s<= eax_3)
            int32_t var_c50_4 = 1
            char const (** const ebx_3)[0x6] = &data_5b4ff4
            int32_t eax_75
            
            do
                for (int32_t j_9 = 0; j_9 s< 5; j_9 += 1)
                    char const (* var_ca0_9)[0x6] = *ebx_3
                    int32_t j_29 = j_9
                    int16_t* var_ca8_8 = &var_20c
                    i, edx_3 = sub_450860(
                        sub_41da20(&var_60c, edx_3, i, &var_60c, "%s %d %s dice active"), &var_60c, 
                        &data_1410698, i_3)
                
                ebx_3 = &ebx_3[1]
                eax_75 = var_c50_4 + 1
                var_c50_4 = eax_75
            while (eax_75 s<= eax_3)
            
            for (char const (** const j_10)[0x8] = &data_5b4ffc; j_10 s<= &data_5b5008; j_10 = &j_10[1])
                for (int32_t k = 0; k s< 3; k += 1)
                    char const (* var_ca0_11)[0x8] = *j_10
                    int32_t k_4 = k
                    int16_t* var_ca8_9 = &var_20c
                    i, edx_3 = sub_450860(sub_41da20(&var_60c, edx_3, i, &var_60c, "%s %d %s goods"), 
                        &var_60c, &data_1410698, i_3)
                
                for (int32_t k_1 = 0; k_1 s< 3; k_1 += 1)
                    char const (* var_ca0_13)[0x8] = *j_10
                    int32_t k_5 = k_1
                    int16_t* var_ca8_10 = &var_20c
                    i, edx_3 = sub_450860(
                        sub_41da20(&var_60c, edx_3, i, &var_60c, "%s %d %s goods match"), &var_60c, 
                        &data_1410698, i_3)
            
            for (int32_t j_11 = 1; j_11 s< 0xa; j_11 += 1)
                int32_t j_38 = j_11
                int16_t* var_ca4_10 = &var_20c
                i, edx_3 = sub_450860(sub_41da20(&var_60c, edx_3, i, &var_60c, "%s credits %d"), 
                    &var_60c, &data_1410698, i_3)
            
            for (int32_t j_12 = 0; j_12 s< 0x1e; j_12 += 1)
                int32_t j_39 = j_12
                int16_t* var_ca4_11 = &var_20c
                i, edx_3 = sub_450860(sub_41da20(&var_60c, edx_3, i, &var_60c, "%s points behind %d"), 
                    &var_60c, &data_1410698, i_3)
            
            int16_t* var_ca0_15 = &var_20c
            i, edx_3 = sub_450860(sub_41da20(&var_60c, edx_3, i, &var_60c, "%s winner"), &var_60c, 
                &data_1410698, i_3)
            i_3 += 1
        while (i_3 s< *(*arg1 + 4))
    
    sub_450920(&data_1410698)
    var_c8c = xmm1
    void* ecx_12 = *arg1
    int32_t var_c70_1 = var_c54
    int64_t var_c84_1 = 0x3f50624dd2f1a9fc
    int32_t var_c78_1 = *(ecx_12 + 4)
    int32_t eax_89 = 0xaf
    
    if (*(ecx_12 + 8) != 0)
        eax_89 = 0x12c
    
    int32_t var_c7c_1 = 0x32
    int32_t var_c74_1 = eax_89 + var_c54
    int32_t j_13
    int32_t edx_21
    j_13, edx_21 = sub_4504b0(0x138a668, &var_c8c)
    
    for (int32_t i_4 = 0; i_4 s< 0xc; i_4 += 1)
        int32_t i_10 = i_4
        sub_41da20(&var_60c, edx_21, j_13, &var_60c, "VP Pool %d")
        int32_t edi_8 = data_138a690 + 1
        data_138a690 = edi_8
        int32_t esi_4 = edi_8 << 2
        int32_t var_ca0_17 = esi_4
        int32_t var_ca4_12 = data_138a6a8
        int32_t eax_92 = sub_57fb2f()
        int32_t var_ca8_13 = esi_4
        int32_t var_cac_12 = data_138a6ac
        data_138a6a8 = eax_92
        int32_t eax_93 = sub_57fb2f()
        int32_t var_cb0_17 = esi_4
        int32_t var_cb4_3 = data_138a6f8
        data_138a6ac = eax_93
        data_138a6f8 = sub_57fb2f()
        char* eax_95
        eax_95, edx_21 = __strdup(&var_60c)
        *(data_138a6f8 + (edi_8 << 2) - 4) = eax_95
        *(data_138a6a8 + (edi_8 << 2) - 4) = 0xffffffff
        *(data_138a6ac + (edi_8 << 2) - 4) = *data_138a6b0
        j_13 = 0
        
        if (data_138a6a0 s> 0)
            do
                int32_t eax_99 = data_138a6b0
                *(eax_99 + (j_13 << 2)) += 1
                j_13 += 1
            while (j_13 s< data_138a6a0)
    
    for (int32_t i_5 = 3; i_5 s< 0xf; i_5 += 1)
        int32_t i_11 = i_5
        sub_41da20(&var_60c, edx_21, j_13, &var_60c, "Max active %d")
        int32_t edi_10 = data_138a690 + 1
        data_138a690 = edi_10
        int32_t esi_5 = edi_10 << 2
        int32_t var_ca0_18 = esi_5
        int32_t var_ca4_13 = data_138a6a8
        int32_t eax_101 = sub_57fb2f()
        int32_t var_ca8_15 = esi_5
        int32_t var_cac_13 = data_138a6ac
        data_138a6a8 = eax_101
        int32_t eax_102 = sub_57fb2f()
        int32_t var_cb0_18 = esi_5
        int32_t var_cb4_4 = data_138a6f8
        data_138a6ac = eax_102
        data_138a6f8 = sub_57fb2f()
        char* eax_104
        eax_104, edx_21 = __strdup(&var_60c)
        *(data_138a6f8 + (edi_10 << 2) - 4) = eax_104
        *(data_138a6a8 + (edi_10 << 2) - 4) = 0xffffffff
        *(data_138a6ac + (edi_10 << 2) - 4) = *data_138a6b0
        j_13 = 0
        
        if (data_138a6a0 s> 0)
            do
                int32_t eax_108 = data_138a6b0
                *(eax_108 + (j_13 << 2)) += 1
                j_13 += 1
            while (j_13 s< data_138a6a0)
    
    int32_t i_6 = 0
    
    if (*(*arg1 + 4) s> 0)
        do
            if (i_6 != 0)
                int32_t i_12 = i_6
                j_13, edx_21 = sub_41da20(&var_20c, edx_21, j_13, &var_20c, "Opponent %d")
            else
                var_20c = 0x7355
                char var_20a_2 = 0
            
            int32_t j_14 = 0
            
            if (data_13902e4 s> 0)
                do
                    int32_t var_ca0_19 = var_92c[j_14]
                    int16_t* var_ca4_14 = &var_20c
                    j_13, edx_21 = sub_450860(
                        sub_41da20(&var_60c, edx_21, j_13, &var_60c, "%s active %s"), &var_60c, 
                        0x138a668, i_6)
                    j_14 += 1
                while (j_14 s< data_13902e4)
            
            for (int32_t j_15 = 3; j_15 s< 0xc; j_15 += 1)
                int32_t j_40 = j_15
                int16_t* var_ca4_15 = &var_20c
                j_13, edx_21 = sub_450860(
                    sub_41da20(&var_60c, edx_21, j_13, &var_60c, "%s active count %d"), &var_60c, 
                    0x138a668, i_6)
            
            for (int32_t j_16 = 0; j_16 s< 5; j_16 += 1)
                int32_t j_41 = j_16
                int16_t* var_ca4_16 = &var_20c
                j_13, edx_21 = sub_450860(
                    sub_41da20(&var_60c, edx_21, j_13, &var_60c, "%s six cost developments %d"), 
                    &var_60c, 0x138a668, i_6)
            
            int32_t j_17 = 0
            
            if (data_138fd50 s> 0)
                do
                    int32_t var_ca0_20 = var_c4c[j_17]
                    int16_t* var_ca4_17 = &var_20c
                    j_13, edx_21 = sub_450860(
                        sub_41da20(&var_60c, edx_21, j_13, &var_60c, "%s building %s"), &var_60c, 
                        0x138a668, i_6)
                    j_17 += 1
                while (j_17 s< data_138fd50)
            
            for (int32_t j_18 = 0; j_18 s< 0xa; j_18 += 1)
                int32_t j_42 = j_18
                int16_t* var_ca4_18 = &var_20c
                j_13, edx_21 = sub_450860(
                    sub_41da20(&var_60c, edx_21, j_13, &var_60c, "%s tiles in progress %d"), &var_60c, 
                    0x138a668, i_6)
            
            for (int32_t j_19 = 0; j_19 s< 0xc; j_19 += 1)
                int32_t j_43 = j_19
                int16_t* var_ca4_19 = &var_20c
                j_13, edx_21 = sub_450860(
                    sub_41da20(&var_60c, edx_21, j_13, &var_60c, "%s dice in cup %d"), &var_60c, 
                    0x138a668, i_6)
            
            for (int32_t j_20 = 0; j_20 s< 0xc; j_20 += 1)
                int32_t j_44 = j_20
                int16_t* var_ca4_20 = &var_20c
                j_13, edx_21 = sub_450860(
                    sub_41da20(&var_60c, edx_21, j_13, &var_60c, "%s dice active %d"), &var_60c, 
                    0x138a668, i_6)
            
            int32_t var_c54_1 = 1
            char const (** const ebx_4)[0x6] = &data_5b4ff4
            int32_t eax_129
            
            do
                for (int32_t j_21 = 0; j_21 s< 5; j_21 += 1)
                    char const (* var_ca0_21)[0x6] = *ebx_4
                    int32_t j_30 = j_21
                    int16_t* var_ca8_17 = &var_20c
                    j_13, edx_21 = sub_450860(
                        sub_41da20(&var_60c, edx_21, j_13, &var_60c, "%s %d %s dice"), &var_60c, 
                        0x138a668, i_6)
                
                ebx_4 = &ebx_4[1]
                eax_129 = var_c54_1 + 1
                var_c54_1 = eax_129
            while (eax_129 s<= eax_3)
            int32_t var_c54_2 = 1
            char const (** const ebx_5)[0x6] = &data_5b4ff4
            int32_t eax_133
            
            do
                for (int32_t j_22 = 0; j_22 s< 5; j_22 += 1)
                    char const (* var_ca0_23)[0x6] = *ebx_5
                    int32_t j_31 = j_22
                    int16_t* var_ca8_18 = &var_20c
                    j_13, edx_21 = sub_450860(
                        sub_41da20(&var_60c, edx_21, j_13, &var_60c, "%s %d %s dice in cup"), &var_60c, 
                        0x138a668, i_6)
                
                ebx_5 = &ebx_5[1]
                eax_133 = var_c54_2 + 1
                var_c54_2 = eax_133
            while (eax_133 s<= eax_3)
            int32_t var_c54_3 = 1
            char const (** const ebx_6)[0x6] = &data_5b4ff4
            int32_t eax_137
            
            do
                for (int32_t j_23 = 0; j_23 s< 5; j_23 += 1)
                    char const (* var_ca0_25)[0x6] = *ebx_6
                    int32_t j_32 = j_23
                    int16_t* var_ca8_19 = &var_20c
                    j_13, edx_21 = sub_450860(
                        sub_41da20(&var_60c, edx_21, j_13, &var_60c, "%s %d %s dice active"), &var_60c, 
                        0x138a668, i_6)
                
                ebx_6 = &ebx_6[1]
                eax_137 = var_c54_3 + 1
                var_c54_3 = eax_137
            while (eax_137 s<= eax_3)
            
            for (char const (** const j_24)[0x8] = &data_5b4ffc; j_24 s<= &data_5b5008; j_24 = &j_24[1])
                for (int32_t k_2 = 0; k_2 s< 3; k_2 += 1)
                    char const (* var_ca0_27)[0x8] = *j_24
                    int32_t k_6 = k_2
                    int16_t* var_ca8_20 = &var_20c
                    j_13, edx_21 = sub_450860(
                        sub_41da20(&var_60c, edx_21, j_13, &var_60c, "%s %d %s goods"), &var_60c, 
                        0x138a668, i_6)
                
                for (int32_t k_3 = 0; k_3 s< 3; k_3 += 1)
                    char const (* var_ca0_29)[0x8] = *j_24
                    int32_t k_7 = k_3
                    int16_t* var_ca8_21 = &var_20c
                    j_13, edx_21 = sub_450860(
                        sub_41da20(&var_60c, edx_21, j_13, &var_60c, "%s %d %s goods match"), &var_60c, 
                        0x138a668, i_6)
            
            for (int32_t j_25 = 1; j_25 s< 0xa; j_25 += 1)
                int32_t j_45 = j_25
                int16_t* var_ca4_21 = &var_20c
                j_13, edx_21 = sub_450860(
                    sub_41da20(&var_60c, edx_21, j_13, &var_60c, "%s credits %d"), &var_60c, 0x138a668, 
                    i_6)
            
            for (int32_t j_26 = 0; j_26 s< 0x1e; j_26 += 1)
                int32_t j_46 = j_26
                int16_t* var_ca4_22 = &var_20c
                j_13, edx_21 = sub_450860(
                    sub_41da20(&var_60c, edx_21, j_13, &var_60c, "%s points behind %d"), &var_60c, 
                    0x138a668, i_6)
            
            i_6 += 1
        while (i_6 s< *(*arg1 + 4))
    
    int32_t result = sub_450920(0x138a668)
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
