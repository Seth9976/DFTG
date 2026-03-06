// 函数名称: sub_46ce40
// 虚拟地址: 0x46ce40
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_46ce40(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    void* eax_1 = __security_cookie ^ &__saved_ebp
    void* var_8 = eax_1
    int32_t* ebx = arg1
    int32_t* var_144 = ebx
    char const* const var_1f8
    int32_t var_1f4_1
    char const* const var_1f0_1
    char* ecx
    
    if (*ebx == 0)
        eax_1 = data_6cfe4c
        
        if (eax_1 == 0)
        label_46d717:
            var_1f0_1 = "GetClient"
            var_1f4_1 = 0x75
            ecx = "gClient"
            var_1f8 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        else
            int32_t ecx_1 = ebx[0xf]
            
            if (ecx_1 != *(eax_1 + 0xa68))
            label_46d6f8:
                @__security_check_cookie@4(var_8 ^ &__saved_ebp)
                return 0
            
            int32_t esi_1 = ebx[0x22a]
            void* eax_2 = sub_452b90(ecx_1)
            
            if (sub_46bc50(ebx) != 0)
                goto label_46d6f8
            
            if (esi_1 == data_632564)
                @__security_check_cookie@4(var_8 ^ &__saved_ebp)
                return 3
            
            char eax_5 = sub_453780(ebx)
            
            if (esi_1 == data_632558 && eax_5 != 0 && esi_1 != data_63255c)
                @__security_check_cookie@4(var_8 ^ &__saved_ebp)
                return 2
            
            eax_1 = sub_453780(ebx)
            
            if (eax_1.b == 0)
                int32_t eax_7 = sub_453650(eax_2)
                
                if (eax_7 != 0xb)
                    eax_1 = eax_7 - 0xd
                
                if (eax_7 == 0xb || eax_7 == 0xd)
                    eax_1 = ebx[0xd]
                    
                    if (eax_1 == 4 || eax_1 == 5)
                        @__security_check_cookie@4(var_8 ^ &__saved_ebp)
                        return 1
            
            if (*ebx == 0)
                eax_1 = data_6cfe4c
                
                if (eax_1 == 0)
                    goto label_46d717
                
                int32_t ecx_10 = *(eax_1 + 0xa68)
                
                if (ebx[0xf] == ecx_10)
                    void* eax_9 = sub_452b90(ecx_10)
                    
                    if (sub_453650(eax_9) == 0xb)
                        int32_t eax_11 = ebx[0xd]
                        
                        if ((eax_11 == 4 || eax_11 == 5) && sub_452c00(eax_9, ebx[0x11]) == 0)
                            @__security_check_cookie@4(var_8 ^ &__saved_ebp)
                            return 1
                    
                    if (data_632590 == 5)
                        int32_t eax_13 = data_632594
                        
                        if (eax_13 != 2 || ebx[0xd] != 4)
                            goto label_46cfee
                        
                        int32_t* eax_14 = sub_453010(eax_9, eax_13 + 2)
                        
                        if (eax_14 != 0)
                            eax_14 = sub_452cc0(eax_14)
                        
                        if (eax_14 != ebx)
                            @__security_check_cookie@4(var_8 ^ &__saved_ebp)
                            return 1
                        
                        if (data_632590 == 5)
                            eax_13 = data_632594
                        label_46cfee:
                            
                            if (eax_13 == 3 && ebx[0xd] == 5)
                                int32_t* eax_15 = sub_453010(eax_9, eax_13 + 2)
                                
                                if (eax_15 != 0)
                                    eax_15 = sub_452cc0(eax_15)
                                
                                if (eax_15 != ebx)
                                    @__security_check_cookie@4(var_8 ^ &__saved_ebp)
                                    return 1
                
                if (sub_454100(ebx) == 0)
                    int32_t eax_18 = sub_453650(eax_2)
                    int32_t eax_19
                    
                    if (eax_18 != 0x1d)
                        eax_19 = sub_453650(eax_2)
                    
                    char ecx_21
                    
                    if (eax_18 == 0x1d || eax_19 == 9)
                        ecx_21 = 1
                    else
                        ecx_21 = 0
                    
                    if (eax_5 != 0)
                        int32_t eax_20
                        eax_20.b = ecx_21 != 0
                        @__security_check_cookie@4(var_8 ^ &__saved_ebp)
                        return eax_20 + 8
                    
                    bool cond:0_1 = sub_46cce0(ebx) != 0
                    
                    if (sub_453650(eax_2) != 0xf && sub_453650(eax_2) != 0x11)
                        int32_t eax_25 = data_632564
                        int32_t esi_3 = data_62d6c8
                        
                        if (esi_1 != data_632558)
                        label_46d106:
                            
                            if (cond:0_1 != 0 && eax_25 != 0)
                                uint32_t ecx_33 = zx.d(eax_25.w)
                                
                                if (ecx_33 u< esi_3)
                                    int32_t* ecx_35 = ecx_33 * 0x8ac + data_62d6c4
                                    
                                    if (ecx_35[0x22a] == eax_25 && *ecx_35 == 1)
                                        @__security_check_cookie@4(var_8 ^ &__saved_ebp)
                                        return 6
                        else if (cond:0_1 != 0)
                            if (eax_25 != 0)
                                uint32_t ecx_28 = zx.d(eax_25.w)
                                
                                if (ecx_28 u< esi_3)
                                    int32_t* ecx_30 = ecx_28 * 0x8ac + data_62d6c4
                                    
                                    if (ecx_30[0x22a] == eax_25 && *ecx_30 == 1)
                                        @__security_check_cookie@4(var_8 ^ &__saved_ebp)
                                        return 7
                            
                            goto label_46d106
                    
                    uint32_t i_5
                    
                    if (sub_453650(eax_2) == 6)
                        int32_t esi_4 = 0
                        i_5 = 0
                        
                        if (*(eax_2 + 0xbcc) s> 0)
                            void* ecx_39 = eax_2 + 0x818
                            uint32_t i
                            
                            do
                                int32_t edx_5 = *(ecx_39 - 8)
                                
                                if (edx_5 == 5 && *ecx_39 == ebx[0x11])
                                    goto label_46d70e
                                
                                int32_t eax_30 = esi_4 + 1
                                
                                if (edx_5 != 6)
                                    eax_30 = esi_4
                                
                                ecx_39 += 0x18
                                esi_4 = eax_30
                                i = i_5 + 1
                                i_5 = i
                            while (i s< *(eax_2 + 0xbcc))
                        
                        int32_t i_1 = *(eax_2 + 0x2d4)
                        int32_t ecx_40 = 0
                        
                        if (i_1 != 0)
                            int32_t ebx_1 = 0
                            
                            do
                                ebx_1 += 1
                                i_1 = *(sub_452d50(i_1) + 0x20)
                            while (i_1 != 0)
                            
                            ebx = var_144
                            char eax_34
                            
                            if (ebx_1 s> 1)
                                eax_34 = sub_453300(&i_5, 0, eax_2, 0x80, &i_5)
                            
                            if (ebx_1 s> 1 && eax_34 != 0 && ebx[0x11] == i_5)
                                goto label_46d70e
                            
                            ecx_40 = ebx_1
                        
                        if (esi_4 s<= ecx_40)
                            goto label_46d233
                        
                        if (sub_453300(&i_5, 0, eax_2, 0x40, &i_5) == 0 || ebx[0x11] != i_5)
                            goto label_46d233
                        
                        goto label_46d70e
                    
                label_46d233:
                    
                    if (sub_453650(eax_2) == 0x19 && *(eax_2 + 0x668) == ebx[0x11])
                    label_46d70e:
                        @__security_check_cookie@4(var_8 ^ &__saved_ebp)
                        return 4
                    
                    if (sub_453650(eax_2) == 0x17 && *(eax_2 + 0x668) == ebx[0x11])
                        goto label_46d70e
                    
                    if (sub_45d190(1) != 0)
                        int32_t eax_44 = sub_453650(eax_2)
                        
                        if (eax_44 == 0xb)
                            int32_t eax_45 = sub_452e70(eax_2, eax_44 - 6)
                            
                            if (sub_452e70(eax_2, 4) + eax_45 s> *(eax_2 + 0x4cc)
                                    && *(eax_2 + 0x664) != 0 && ebx[0xe] != 1)
                                int32_t edx_7 = 0
                                void* eax_51 = *(data_632804 + (ebx[0x11] + 0xbb) * 0xc)
                                int32_t esi_6 = *(eax_51 + 0x34)
                                
                                if (esi_6 s> 0)
                                    void* eax_52 = eax_51 + 0x38
                                    
                                    do
                                        if (*eax_52 == 1 && (*(eax_52 + 4) & 2) != 0)
                                            goto label_46d70e
                                        
                                        edx_7 += 1
                                        eax_52 += 0xc
                                    while (edx_7 s< esi_6)
                    
                    if (sub_45d190(1) != 0 && sub_453650(eax_2) == 0xd && ebx[0xe] != 1)
                        int32_t ecx_51 = 0
                        void* eax_58 = *(data_632804 + (ebx[0x11] + 0xbb) * 0xc)
                        int32_t edx_9 = *(eax_58 + 0x34)
                        
                        if (edx_9 s> 0)
                            void* eax_59 = eax_58 + 0x38
                            
                            do
                                if (*eax_59 == 1 && (*(eax_59 + 4) & 4) != 0)
                                    goto label_46d70e
                                
                                ecx_51 += 1
                                eax_59 += 0xc
                            while (ecx_51 s< edx_9)
                    
                    int32_t* var_13c
                    
                    if (sub_45d190(2) != 0 && sub_453650(eax_2) == 0xf && ebx[0xd] == 3)
                        int32_t eax_62 = ebx[0xe]
                        
                        if (eax_62 == 0 || eax_62 == 2)
                            int32_t eax_63 = sub_453010(eax_2, 4)
                            
                            if (eax_63 != 0)
                                int32_t* eax_64 = sub_452cc0(eax_63)
                                
                                if (eax_64 != 0)
                                    uint32_t ecx_55 = 1
                                    int32_t esi_7 = data_632804
                                    int32_t* edx_10 = esi_7 + (eax_64[0x11] + 0xbb) * 0xc
                                    int32_t eax_67
                                    eax_67.b = *(edx_10 + 7)
                                    var_13c = edx_10
                                    
                                    if (eax_67.b != 0xff)
                                        ecx_55 = zx.d(eax_67.b)
                                    
                                    int32_t eax_69 = *(*edx_10 + (ecx_55 << 2) + 0x10)
                                    uint32_t i_2 = 0
                                    int32_t eax_71 = ebx[0x11] + 0xbb
                                    i_5 = 0
                                    void* esi_8 = *(esi_7 + eax_71 * 0xc)
                                    
                                    if (*(esi_8 + 0x34) s> 0)
                                        void* eax_73 = esi_8
                                        void* esi_9 = esi_8 + 0x38
                                        
                                        do
                                            if (*esi_9 == 2)
                                                int32_t eax_74 = *(esi_9 + 4)
                                                
                                                if ((eax_74.b & 4) != 0)
                                                    int32_t eax_75
                                                    
                                                    if ((eax_74 & 0x400) != 0)
                                                        eax_75 = sub_445390(edx_10)
                                                        i_2 = i_5
                                                    
                                                    if (((eax_74 & 0x400) == 0 || eax_75 != 0)
                                                            && eax_69 s> 1)
                                                        goto label_46d70e
                                                
                                                eax_73 = esi_8
                                            
                                            edx_10 = var_13c
                                            i_2 += 1
                                            esi_9 += 0xc
                                            i_5 = i_2
                                        while (i_2 s< *(eax_73 + 0x34))
                    
                    if (sub_45d190(3) != 0 && sub_453650(eax_2) == 0x11 && ebx[0xd] == 3)
                        int32_t eax_78 = ebx[0xe]
                        
                        if (eax_78 == 0 || eax_78 == 2)
                            int32_t eax_79 = sub_453010(eax_2, 5)
                            
                            if (eax_79 != 0)
                                int32_t* eax_80 = sub_452cc0(eax_79)
                                
                                if (eax_80 != 0)
                                    int32_t ecx_60 = data_632804
                                    int32_t* esi_10 = ecx_60 + (eax_80[0x11] + 0xbb) * 0xc
                                    int32_t eax_83
                                    eax_83.b = *(esi_10 + 7)
                                    
                                    if (eax_83.b != 0xff)
                                        i_5 = zx.d(eax_83.b)
                                    else
                                        i_5 = 1
                                    
                                    int32_t i_3 = 0
                                    void* esi_11 = *esi_10
                                    void* ecx_61 = *(ecx_60 + (ebx[0x11] + 0xbb) * 0xc)
                                    int32_t* ecx_62 = *(ecx_61 + 0x34)
                                    var_13c = ecx_62
                                    
                                    if (ecx_62 s> 0)
                                        void* eax_88 = ecx_61
                                        int32_t* ecx_64 = ecx_61 + 0x38
                                        
                                        do
                                            if (*ecx_64 == 3)
                                                if ((ecx_64[1] & 0x102) == 0x102
                                                        && *(esi_11 + 0x18) == 0
                                                        && *(esi_11 + (i_5 << 2) + 0x10) s> 2)
                                                    goto label_46d70e
                                                
                                                eax_88 = ecx_61
                                            
                                            i_3 += 1
                                            ecx_64 = &ecx_64[3]
                                        while (i_3 s< *(eax_88 + 0x34))
                                        
                                        ecx_62 = var_13c
                                    
                                    int32_t i_4 = 0
                                    
                                    if (ecx_62 s> 0)
                                        void* eax_92 = ecx_61
                                        void* ecx_66 = ecx_61 + 0x38
                                        
                                        do
                                            if (*ecx_66 == 3)
                                                int32_t edx_11 = *(ecx_66 + 4)
                                                
                                                if ((edx_11 & 0x102) == 2 && ((edx_11 & 0x800) == 0
                                                        || *(esi_11 + 0x18) == 5) && ((edx_11 & 0x1000) == 0
                                                        || *(esi_11 + 0x18) == 6)
                                                        && *(esi_11 + (i_5 << 2) + 0x10) s> 1)
                                                    goto label_46d70e
                                                
                                                eax_92 = ecx_61
                                            
                                            i_4 += 1
                                            ecx_66 += 0xc
                                        while (i_4 s< *(eax_92 + 0x34))
                    
                    if (sub_45d190(4) != 0 && sub_453650(eax_2) == 0x13 && sub_46cb50(eax_2, ebx) != 0)
                        goto label_46d70e
                    
                    if (sub_45d190(5) != 0 && sub_453650(eax_2) == 0x15 && ebx[0xd] == 3)
                        int32_t eax_101 = ebx[0xe]
                        
                        if ((eax_101 == 0 || eax_101 == 2) && sub_4659a0(&var_13c) != 0)
                            int32_t* esi_12 = var_13c
                            int32_t* eax_103 = sub_452c30(esi_12[0x15])
                            int32_t* eax_104 = sub_452c30(esi_12[0x14])
                            void var_9c
                            int32_t* eax_105
                            int32_t edx_15
                            eax_105, edx_15 = sub_461720(eax_104, eax_104, eax_2, &var_9c, eax_103)
                            void var_12c
                            __builtin_memcpy(&var_12c, eax_105, 0x90)
                            uint32_t var_1dc[0x2][0x4]
                            __builtin_memcpy(&var_9c, 
                                sub_461900(&var_1dc, edx_15, eax_2, &var_1dc, eax_103, 0), 0x90)
                            int32_t ecx_75 = 0
                            int32_t var_a0
                            
                            if (var_a0 s> 0)
                                do
                                    int32_t var_120[0x20]
                                    
                                    if (var_120[ecx_75] == var_144[0x11])
                                        goto label_46d70e
                                    
                                    ecx_75 += 1
                                while (ecx_75 s< var_a0)
                            
                            int32_t ecx_76 = 0
                            int32_t var_10
                            
                            if (var_10 s> 0)
                                int32_t var_90[0x20]
                                
                                while (var_90[ecx_76] != var_144[0x11])
                                    ecx_76 += 1
                                    
                                    if (ecx_76 s>= var_10)
                                        goto label_46d6f8
                                
                                goto label_46d70e
                
                goto label_46d6f8
            
            var_1f0_1 = "IsTileDimmed"
            var_1f4_1 = 0x5906
            var_1f8 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
            ecx = "gfx.type == ROLLGFX_TILE"
    else
        var_1f0_1 = "RollTileHighlightState"
        var_1f4_1 = 0x5e17
        var_1f8 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
        ecx = "gfx.type == ROLLGFX_TILE"
    
    sub_489550(eax_1, &data_5b2591, ecx, var_1f8, var_1f4_1, var_1f0_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
